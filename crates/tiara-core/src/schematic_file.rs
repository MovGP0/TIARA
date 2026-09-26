//! Reading native TINA circuit files.
//!
//! A `.TSC` file is an OBSS container. Its circuit payload is a stream of
//! typed records and can be stored directly or compressed with zlib. This
//! module reads that native form. It does not put a different format under the
//! `.tsc` extension.

use std::collections::BTreeSet;
use std::fmt;
use std::io::{Read, Write};
use std::path::{Path, PathBuf};

use flate2::Compression;
use flate2::read::ZlibDecoder;
use flate2::write::ZlibEncoder;

use crate::schematic_document::{Document, Part, Point, Rotation, Sheet, Wire, WireKind};

/// What a circuit is called, without the dot.
pub const EXTENSION: &str = "tsc";

/// What the file picker calls the kind, as the original's own dialog does.
pub const FILTER_NAME: &str = "TINA Circuit";

const MAGIC: &[u8; 7] = b"OBSS\x1a\x01\0";
const VERSION_RECORD_TAG: u16 = 2;
const CIRCUIT_DESCRIPTION: &str = "Circuit Description";
const CIRCUIT_VERSION: &str = "V1.10";
const END_RECORD_TAG: u16 = 0x00ff;
const WIRE_RECORD_TAG: u16 = 0x0100;
const FIRST_COMPONENT_TAG: u16 = 0x0203;
const FIRST_ANALYSIS_TAG: u16 = 0xf000;
const NATIVE_UNITS_PER_GRID_SQUARE: i32 = 8;
const CURRENT_COMPONENT_VERSION: u16 = 0x46;
const CURRENT_WIRE_VERSION: u16 = 0x17;

#[derive(Debug, Clone)]
struct NativeRecord {
    tag: u16,
    version: u16,
    data: Vec<u8>,
}

struct NativeContainer {
    prefix: Vec<u8>,
    flags: u32,
    records: Vec<NativeRecord>,
}

struct NativeComponent {
    kind: String,
    at: Point,
    rotation: Rotation,
    mirrored: bool,
    label: String,
    value: String,
}

struct NewComponentSchema {
    tag: u16,
    bytes_after_label: usize,
    value_after_label: usize,
    model: &'static str,
}

/// What can go wrong on the way to or from a file.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Error {
    /// The file could not be read. The text is the system's own.
    Io(String),
    /// The file is not a native TINA circuit container.
    NotACircuit,
    /// The circuit descriptor is a native version that is not understood.
    UnsupportedCircuitVersion(String),
    /// The native record stream is damaged.
    Corrupt(String),
    /// Changed native records cannot yet be written safely.
    NativeWriteUnsupported,
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Io(what) | Self::Corrupt(what) => write!(f, "{what}"),
            Self::NotACircuit => write!(f, "this is not a native TINA circuit"),
            Self::UnsupportedCircuitVersion(version) => {
                write!(f, "TINA circuit version {version} is not supported")
            }
            Self::NativeWriteUnsupported => write!(
                f,
                "this change has no safe native TINA representation; the source file was not changed"
            ),
        }
    }
}

impl std::error::Error for Error {}

impl From<std::io::Error> for Error {
    fn from(error: std::io::Error) -> Self {
        Self::Io(error.to_string())
    }
}

/// Reads a native TINA circuit.
///
/// # Errors
///
/// Returns [`Error::Io`] if the file cannot be read, [`Error::NotACircuit`]
/// if it is not an OBSS circuit, [`Error::UnsupportedCircuitVersion`] for an
/// unknown circuit descriptor, and [`Error::Corrupt`] for invalid native
/// records.
pub fn read(path: &Path) -> Result<Document, Error> {
    decode(&std::fs::read(path)?)
}

fn decode(source: &[u8]) -> Result<Document, Error> {
    let container = decode_container(source)?;
    let mut document = decode_records(&container.records)?;
    document.retain_native_source(source);
    Ok(document)
}

fn decode_container(source: &[u8]) -> Result<NativeContainer, Error> {
    let Some(header) = source.get(..MAGIC.len()) else {
        return Err(Error::NotACircuit);
    };
    if header != MAGIC {
        return Err(Error::NotACircuit);
    }

    let version_tag = read_u16(source, 11).ok_or(Error::NotACircuit)?;
    if version_tag != VERSION_RECORD_TAG {
        return Err(Error::NotACircuit);
    }
    let version_size = read_u32(source, 15).ok_or(Error::NotACircuit)? as usize;
    let version_start = 19_usize;
    let version_end = version_start
        .checked_add(version_size)
        .filter(|end| *end <= source.len())
        .ok_or_else(|| Error::Corrupt("the TSC description runs past the file".to_owned()))?;
    let version_record = &source[version_start..version_end];
    if version_record.len() < 4 {
        return Err(Error::Corrupt(
            "the TSC description has no storage flags".to_owned(),
        ));
    }

    let mut string_at = 0;
    let description = read_obss_string(version_record, &mut string_at)?;
    let version = read_obss_string(version_record, &mut string_at)?;
    if description != CIRCUIT_DESCRIPTION {
        return Err(Error::NotACircuit);
    }
    if version != CIRCUIT_VERSION {
        return Err(Error::UnsupportedCircuitVersion(version));
    }

    let flags = read_u32(version_record, version_record.len() - 4)
        .ok_or_else(|| Error::Corrupt("the TSC storage flags are invalid".to_owned()))?;
    let stored_payload = &source[version_end..];
    let payload = if flags & 1 == 0 {
        stored_payload.to_vec()
    } else {
        let mut decoded = Vec::new();
        ZlibDecoder::new(stored_payload)
            .read_to_end(&mut decoded)
            .map_err(|error| {
                Error::Corrupt(format!("the compressed TSC payload is invalid: {error}"))
            })?;
        decoded
    };

    Ok(NativeContainer {
        prefix: source[..version_end].to_vec(),
        flags,
        records: parse_records(&payload)?,
    })
}

fn parse_records(payload: &[u8]) -> Result<Vec<NativeRecord>, Error> {
    let mut records = Vec::new();
    let mut at = 0;
    while at < payload.len() {
        if payload.len() - at < 8 {
            return Err(Error::Corrupt(format!(
                "the TSC record header at byte {at} is incomplete"
            )));
        }
        let tag = read_u16(payload, at)
            .ok_or_else(|| Error::Corrupt(format!("the TSC record at byte {at} has no tag")))?;
        let version = read_u16(payload, at + 2)
            .ok_or_else(|| Error::Corrupt(format!("the TSC record at byte {at} has no version")))?;
        let size = read_u32(payload, at + 4)
            .ok_or_else(|| Error::Corrupt(format!("the TSC record at byte {at} has no size")))?
            as usize;
        let data_at = at + 8;
        let end = data_at
            .checked_add(size)
            .filter(|end| *end <= payload.len())
            .ok_or_else(|| {
                Error::Corrupt(format!("TSC record 0x{tag:04X} runs past the payload"))
            })?;
        records.push(NativeRecord {
            tag,
            version,
            data: payload[data_at..end].to_vec(),
        });
        at = end;

        if tag == END_RECORD_TAG {
            if at != payload.len() {
                return Err(Error::Corrupt(
                    "the TSC payload contains bytes after its end record".to_owned(),
                ));
            }
            break;
        }
    }
    Ok(records)
}

fn decode_records(records: &[NativeRecord]) -> Result<Document, Error> {
    let mut sheet = Sheet::default();
    for record in records {
        if record.tag == END_RECORD_TAG {
            break;
        }
        if record.tag == WIRE_RECORD_TAG {
            load_wire_record(&mut sheet, &record.data)?;
        } else if (FIRST_COMPONENT_TAG..FIRST_ANALYSIS_TAG).contains(&record.tag) {
            load_component_record(&mut sheet, record.tag, record.version, &record.data);
        }
    }

    sheet.clear_selection();
    sheet.mark_saved();
    Ok(sheet.document().clone())
}

fn load_wire_record(sheet: &mut Sheet, data: &[u8]) -> Result<(), Error> {
    let points = wire_points(data)?;
    for segment in points.windows(2) {
        sheet.load_wire(segment[0], segment[1], WireKind::Wire);
    }
    Ok(())
}

fn wire_points(data: &[u8]) -> Result<Vec<Point>, Error> {
    let count = read_u16(data, 8)
        .ok_or_else(|| Error::Corrupt("a TSC wire has no point count".to_owned()))?
        as usize;
    let points_end = 10_usize
        .checked_add(count.saturating_mul(4))
        .filter(|end| *end <= data.len())
        .ok_or_else(|| Error::Corrupt("a TSC wire has an incomplete point list".to_owned()))?;
    let points = data[10..points_end]
        .chunks_exact(4)
        .map(|point| native_point(point, 0))
        .collect::<Option<Vec<_>>>()
        .ok_or_else(|| Error::Corrupt("a TSC wire contains an invalid point".to_owned()))?;
    Ok(points)
}

fn load_component_record(sheet: &mut Sheet, tag: u16, version: u16, data: &[u8]) {
    let Some(component) = decode_component(tag, version, data) else {
        return;
    };
    sheet.load_part(
        component.kind,
        component.at,
        component.rotation,
        component.mirrored,
        component.label,
        component.value,
    );
}

fn decode_component(tag: u16, version: u16, data: &[u8]) -> Option<NativeComponent> {
    let at = native_point(data, 0)?;
    let orientation = data.get(8).copied()?;
    let (label, after_label) = component_label(version, data)?;
    let rotation = Rotation::ALL[usize::from(orientation & 3)];
    let mirrored = orientation & 4 != 0;
    let kind = component_kind(tag, &label);
    let value = component_value(tag, data, after_label);
    Some(NativeComponent {
        kind,
        at,
        rotation,
        mirrored,
        label,
        value,
    })
}

fn component_label(version: u16, data: &[u8]) -> Option<(String, usize)> {
    let length = usize::from(*data.get(9)?);
    if version >= 0x44 {
        let start = 13_usize;
        let end = start.checked_add(length.checked_mul(2)?)?;
        let encoded = data.get(start..end)?;
        let units = encoded
            .chunks_exact(2)
            .map(|unit| u16::from_le_bytes([unit[0], unit[1]]))
            .take_while(|unit| *unit != 0)
            .collect::<Vec<_>>();
        let after = if data.get(end..end + 2) == Some([0, 0].as_slice()) {
            end + 2
        } else {
            end
        };
        Some((String::from_utf16_lossy(&units), after))
    } else {
        let start = 10_usize;
        let end = start.checked_add(length)?;
        let encoded = data.get(start..end)?;
        Some((latin1(encoded).trim_end_matches('\0').to_owned(), end))
    }
}

fn component_kind(tag: u16, label: &str) -> String {
    let known = match tag {
        0x0203 | 0x0204 => Some("Terminal"),
        0x0205 => Some("Meter"),
        0x0206 => Some("Output"),
        0x0207 => Some("Voltmeter"),
        0x0208 => Some("PowerMeter"),
        0x0209 => Some("ImpedanceMeter"),
        0x020a => Some("R"),
        0x020b => Some("C"),
        0x020c => Some("L"),
        0x020e => Some("IS"),
        0x020f => Some("VS"),
        0x0210 => Some("IG"),
        0x0211 => Some("VG"),
        _ => None,
    };
    if let Some(known) = known {
        if tag == 0x0204 && !label.is_empty() {
            return label.to_owned();
        }
        return known.to_owned();
    }

    let prefix = label
        .chars()
        .take_while(char::is_ascii_alphabetic)
        .collect::<String>();
    if prefix.is_empty() {
        format!("TSC-{tag:04X}")
    } else {
        prefix
    }
}

fn component_value(tag: u16, data: &[u8], after_label: usize) -> String {
    if !matches!(tag, 0x0209..=0x0211 | 0x0225 | 0x0244) {
        return String::new();
    }

    printable_strings(data.get(after_label..).unwrap_or_default())
        .find(|candidate| is_component_value(candidate))
        .unwrap_or_default()
}

fn printable_strings(data: &[u8]) -> impl Iterator<Item = String> + '_ {
    data.split(|byte| *byte == 0).filter_map(|bytes| {
        if bytes.is_empty()
            || bytes.len() > 24
            || !bytes.iter().all(|byte| (0x20..=0x7e).contains(byte))
        {
            return None;
        }
        Some(String::from_utf8_lossy(bytes).into_owned())
    })
}

fn is_component_value(candidate: &str) -> bool {
    candidate
        .chars()
        .any(|character| character.is_ascii_digit())
        && candidate.len() <= 16
        && candidate.chars().all(|character| {
            character.is_ascii_alphanumeric()
                || matches!(character, '.' | '+' | '-' | '%' | '/' | '*')
        })
}

fn native_point(data: &[u8], at: usize) -> Option<Point> {
    let x = i32::from(read_i16(data, at)?) / NATIVE_UNITS_PER_GRID_SQUARE;
    let y = i32::from(read_i16(data, at + 2)?) / NATIVE_UNITS_PER_GRID_SQUARE;
    Some(Point::new(x, y))
}

fn read_obss_string(data: &[u8], at: &mut usize) -> Result<String, Error> {
    let length = usize::from(*data.get(*at).ok_or_else(|| {
        Error::Corrupt("the TSC description contains an incomplete string".to_owned())
    })?);
    *at += 1;
    let end = at
        .checked_add(length)
        .filter(|end| *end <= data.len())
        .ok_or_else(|| {
            Error::Corrupt("the TSC description contains an invalid string length".to_owned())
        })?;
    let value = latin1(&data[*at..end]).trim_end_matches('\0').to_owned();
    *at = end;
    Ok(value)
}

fn latin1(data: &[u8]) -> String {
    data.iter().map(|byte| char::from(*byte)).collect()
}

fn read_i16(data: &[u8], at: usize) -> Option<i16> {
    let bytes: [u8; 2] = data.get(at..at + 2)?.try_into().ok()?;
    Some(i16::from_le_bytes(bytes))
}

fn read_u16(data: &[u8], at: usize) -> Option<u16> {
    let bytes: [u8; 2] = data.get(at..at + 2)?.try_into().ok()?;
    Some(u16::from_le_bytes(bytes))
}

fn read_u32(data: &[u8], at: usize) -> Option<u32> {
    let bytes: [u8; 4] = data.get(at..at + 4)?.try_into().ok()?;
    Some(u32::from_le_bytes(bytes))
}

fn encode(document: &Document) -> Result<Vec<u8>, Error> {
    if !document.is_modified()
        && let Some(source) = document.native_source()
    {
        return Ok(source.to_vec());
    }

    if !document.shapes().is_empty() || !document.notes().is_empty() {
        return Err(Error::NativeWriteUnsupported);
    }

    let mut container = if let Some(source) = document.native_source() {
        decode_container(source)?
    } else {
        empty_container()
    };
    let mut encoded = Vec::new();
    let mut original_ids = BTreeSet::new();
    let mut next_id = 1_u32;
    let mut end_record = None;

    for record in &container.records {
        if record.tag == END_RECORD_TAG {
            end_record = Some(record.clone());
            continue;
        }

        if record.tag == WIRE_RECORD_TAG {
            encode_original_wire_record(
                &mut encoded,
                record,
                document,
                &mut original_ids,
                &mut next_id,
            )?;
        } else if (FIRST_COMPONENT_TAG..FIRST_ANALYSIS_TAG).contains(&record.tag) {
            encode_original_component_record(
                &mut encoded,
                record,
                document,
                &mut original_ids,
                &mut next_id,
            )?;
        } else {
            encoded.push(record.clone());
        }
    }

    for part in document
        .parts()
        .iter()
        .filter(|part| !original_ids.contains(&part.id.number()))
    {
        encoded.push(encode_new_component(part)?);
    }
    for wire in document
        .wires()
        .iter()
        .filter(|wire| !original_ids.contains(&wire.id.number()))
    {
        encoded.push(encode_new_wire(wire)?);
    }
    encoded.push(end_record.unwrap_or(NativeRecord {
        tag: END_RECORD_TAG,
        version: 0,
        data: Vec::new(),
    }));
    container.records = encoded;
    encode_container(&container)
}

fn encode_original_component_record(
    encoded: &mut Vec<NativeRecord>,
    record: &NativeRecord,
    document: &Document,
    original_ids: &mut BTreeSet<u32>,
    next_id: &mut u32,
) -> Result<(), Error> {
    let Some(original) = decode_component(record.tag, record.version, &record.data) else {
        encoded.push(record.clone());
        return Ok(());
    };
    let id = *next_id;
    *next_id += 1;
    original_ids.insert(id);
    let Some(part) = document.parts().iter().find(|part| part.id.number() == id) else {
        return Ok(());
    };
    validate_part_state(part)?;
    if part.kind == original.kind
        && part.at == original.at
        && part.rotation == original.rotation
        && part.mirrored == original.mirrored
        && part.label == original.label
        && part.value == original.value
    {
        encoded.push(record.clone());
        return Ok(());
    }
    if part.kind != original.kind {
        return Err(Error::NativeWriteUnsupported);
    }
    encoded.push(encode_component_from_template(record, part)?);
    Ok(())
}

fn encode_original_wire_record(
    encoded: &mut Vec<NativeRecord>,
    record: &NativeRecord,
    document: &Document,
    original_ids: &mut BTreeSet<u32>,
    next_id: &mut u32,
) -> Result<(), Error> {
    let points = wire_points(&record.data)?;
    let original_segments = points
        .windows(2)
        .filter(|segment| segment[0] != segment[1])
        .map(|segment| (segment[0], segment[1]))
        .collect::<Vec<_>>();
    if original_segments.is_empty() {
        encoded.push(record.clone());
        return Ok(());
    }

    let mut current = Vec::new();
    let mut unchanged = true;
    for (from, to) in original_segments {
        let id = *next_id;
        *next_id += 1;
        original_ids.insert(id);
        let wire = document.wires().iter().find(|wire| wire.id.number() == id);
        if let Some(wire) = wire {
            validate_wire_state(wire)?;
            unchanged &= wire.from == from && wire.to == to;
            current.push(wire);
        } else {
            unchanged = false;
        }
    }
    if unchanged {
        encoded.push(record.clone());
    } else {
        for wire in current {
            encoded.push(encode_wire_from_template(record, wire)?);
        }
    }
    Ok(())
}

const fn validate_part_state(part: &Part) -> Result<(), Error> {
    if part.hidden || part.locked {
        return Err(Error::NativeWriteUnsupported);
    }
    Ok(())
}

fn validate_wire_state(wire: &Wire) -> Result<(), Error> {
    if wire.kind != WireKind::Wire {
        return Err(Error::NativeWriteUnsupported);
    }
    Ok(())
}

fn encode_component_from_template(
    record: &NativeRecord,
    part: &Part,
) -> Result<NativeRecord, Error> {
    validate_part_state(part)?;
    let mut data = record.data.clone();
    write_native_point(&mut data, 0, part.at)?;
    *data.get_mut(8).ok_or(Error::NativeWriteUnsupported)? = orientation(part);
    let new_after_label = replace_component_label(record.version, &mut data, part.label.as_str())?;

    if supports_component_value(record.tag) {
        if let Some(range) = component_value_range(record.tag, &data, new_after_label) {
            if !part.value.is_ascii() {
                return Err(Error::NativeWriteUnsupported);
            }
            data.splice(range, part.value.bytes());
        } else if !part.value.is_empty() {
            if !part.value.is_ascii() {
                return Err(Error::NativeWriteUnsupported);
            }
            data.extend_from_slice(part.value.as_bytes());
            data.push(0);
        }
    } else if !part.value.is_empty() {
        return Err(Error::NativeWriteUnsupported);
    }

    Ok(NativeRecord {
        tag: record.tag,
        version: record.version,
        data,
    })
}

fn encode_new_component(part: &Part) -> Result<NativeRecord, Error> {
    validate_part_state(part)?;
    let schema = new_component_schema(part.kind.as_str()).ok_or(Error::NativeWriteUnsupported)?;
    if !part.value.is_ascii() {
        return Err(Error::NativeWriteUnsupported);
    }

    let mut data = vec![0; 13];
    write_native_point(&mut data, 0, part.at)?;
    data[8] = orientation(part);
    let after_label =
        replace_component_label(CURRENT_COMPONENT_VERSION, &mut data, part.label.as_str())?;
    data.extend_from_slice(&2_u32.to_le_bytes());
    data.extend(encode_obss_string(&format!(
        "T_TIARA_{:016X}",
        part.id.number()
    )));
    data.extend(encode_obss_string(schema.model));
    let value_at = after_label + schema.value_after_label;
    if data.len() > value_at {
        return Err(Error::NativeWriteUnsupported);
    }
    data.resize(value_at, 0);
    data.extend_from_slice(part.value.as_bytes());
    data.push(0);
    let record_size = after_label + schema.bytes_after_label;
    if data.len() > record_size {
        return Err(Error::NativeWriteUnsupported);
    }
    data.resize(record_size, 0);
    Ok(NativeRecord {
        tag: schema.tag,
        version: CURRENT_COMPONENT_VERSION,
        data,
    })
}

fn encode_wire_from_template(record: &NativeRecord, wire: &Wire) -> Result<NativeRecord, Error> {
    validate_wire_state(wire)?;
    let count = usize::from(read_u16(&record.data, 8).ok_or(Error::NativeWriteUnsupported)?);
    let tail_at = 10_usize
        .checked_add(count.checked_mul(4).ok_or(Error::NativeWriteUnsupported)?)
        .filter(|at| *at <= record.data.len())
        .ok_or(Error::NativeWriteUnsupported)?;
    let mut encoded = encode_wire_data(wire)?;
    encoded.extend_from_slice(&record.data[tail_at..]);
    Ok(NativeRecord {
        tag: WIRE_RECORD_TAG,
        version: record.version,
        data: encoded,
    })
}

fn encode_new_wire(wire: &Wire) -> Result<NativeRecord, Error> {
    validate_wire_state(wire)?;
    Ok(NativeRecord {
        tag: WIRE_RECORD_TAG,
        version: CURRENT_WIRE_VERSION,
        data: encode_wire_data(wire)?,
    })
}

fn encode_wire_data(wire: &Wire) -> Result<Vec<u8>, Error> {
    let mut data = vec![0; 18];
    write_native_point(&mut data, 0, wire.from)?;
    write_native_point(&mut data, 4, wire.to)?;
    data[8..10].copy_from_slice(&2_u16.to_le_bytes());
    write_native_point(&mut data, 10, wire.from)?;
    write_native_point(&mut data, 14, wire.to)?;
    Ok(data)
}

fn replace_component_label(version: u16, data: &mut Vec<u8>, label: &str) -> Result<usize, Error> {
    let (_, old_end) = component_label(version, data).ok_or(Error::NativeWriteUnsupported)?;
    let (start, encoded) = if version >= 0x44 {
        let units = label.encode_utf16().collect::<Vec<_>>();
        let length = u8::try_from(units.len()).map_err(|_| Error::NativeWriteUnsupported)?;
        data[9] = length;
        let mut encoded = units
            .into_iter()
            .flat_map(u16::to_le_bytes)
            .collect::<Vec<_>>();
        encoded.extend_from_slice(&0_u16.to_le_bytes());
        (13, encoded)
    } else {
        let mut encoded = label
            .chars()
            .map(|character| u8::try_from(u32::from(character)))
            .collect::<Result<Vec<_>, _>>()
            .map_err(|_| Error::NativeWriteUnsupported)?;
        encoded.push(0);
        data[9] = u8::try_from(encoded.len()).map_err(|_| Error::NativeWriteUnsupported)?;
        (10, encoded)
    };
    let new_end = start + encoded.len();
    data.splice(start..old_end, encoded);
    Ok(new_end)
}

fn component_value_range(
    tag: u16,
    data: &[u8],
    after_label: usize,
) -> Option<std::ops::Range<usize>> {
    if !supports_component_value(tag) {
        return None;
    }
    let remaining = data.get(after_label..)?;
    let mut start = 0;
    while start < remaining.len() {
        let end = remaining[start..]
            .iter()
            .position(|byte| *byte == 0)
            .map_or(remaining.len(), |offset| start + offset);
        let candidate = remaining.get(start..end)?;
        if !candidate.is_empty()
            && candidate.len() <= 24
            && candidate.iter().all(|byte| (0x20..=0x7e).contains(byte))
        {
            let text = std::str::from_utf8(candidate).ok()?;
            if is_component_value(text) {
                return Some(after_label + start..after_label + end);
            }
        }
        start = end.saturating_add(1);
    }
    None
}

const fn supports_component_value(tag: u16) -> bool {
    matches!(tag, 0x0209..=0x0211 | 0x0225 | 0x0244)
}

fn new_component_schema(kind: &str) -> Option<NewComponentSchema> {
    match kind {
        "R" => Some(NewComponentSchema {
            tag: 0x020a,
            bytes_after_label: 207,
            value_after_label: 113,
            model: "TIARA_RESISTOR_R",
        }),
        "C" => Some(NewComponentSchema {
            tag: 0x020b,
            bytes_after_label: 229,
            value_after_label: 121,
            model: "TIARA_CAPACITOR_DEFAULTC",
        }),
        "L" => Some(NewComponentSchema {
            tag: 0x020c,
            bytes_after_label: 207,
            value_after_label: 113,
            model: "TIARA_INDUCTOR_L",
        }),
        "IS" => Some(NewComponentSchema {
            tag: 0x020e,
            bytes_after_label: 126,
            value_after_label: 107,
            model: "TIARA (IS)",
        }),
        "VS" => Some(NewComponentSchema {
            tag: 0x020f,
            bytes_after_label: 126,
            value_after_label: 107,
            model: "TIARA (VS)",
        }),
        "IG" => Some(NewComponentSchema {
            tag: 0x0210,
            bytes_after_label: 126,
            value_after_label: 107,
            model: "TIARA (IG)",
        }),
        "VG" => Some(NewComponentSchema {
            tag: 0x0211,
            bytes_after_label: 126,
            value_after_label: 107,
            model: "TIARA (VG)",
        }),
        _ => None,
    }
}

fn orientation(part: &Part) -> u8 {
    let rotation = match part.rotation.degrees() {
        0 => 0,
        90 => 1,
        180 => 2,
        270 => 3,
        _ => unreachable!("Rotation only contains quarter turns"),
    };
    rotation | u8::from(part.mirrored) << 2
}

fn write_native_point(data: &mut [u8], at: usize, point: Point) -> Result<(), Error> {
    let x = point
        .x
        .checked_mul(NATIVE_UNITS_PER_GRID_SQUARE)
        .and_then(|value| i16::try_from(value).ok())
        .ok_or(Error::NativeWriteUnsupported)?;
    let y = point
        .y
        .checked_mul(NATIVE_UNITS_PER_GRID_SQUARE)
        .and_then(|value| i16::try_from(value).ok())
        .ok_or(Error::NativeWriteUnsupported)?;
    data.get_mut(at..at + 2)
        .ok_or(Error::NativeWriteUnsupported)?
        .copy_from_slice(&x.to_le_bytes());
    data.get_mut(at + 2..at + 4)
        .ok_or(Error::NativeWriteUnsupported)?
        .copy_from_slice(&y.to_le_bytes());
    Ok(())
}

fn empty_container() -> NativeContainer {
    let mut descriptor = Vec::new();
    for value in [CIRCUIT_DESCRIPTION, CIRCUIT_VERSION, "", "", "TINA", ""] {
        descriptor.extend(encode_obss_string(value));
    }
    let flags = 1_u32;
    descriptor.extend_from_slice(&flags.to_le_bytes());

    let mut prefix = MAGIC.to_vec();
    prefix.extend_from_slice(&0_u32.to_le_bytes());
    prefix.extend_from_slice(&VERSION_RECORD_TAG.to_le_bytes());
    prefix.extend_from_slice(&0_u16.to_le_bytes());
    prefix.extend_from_slice(&u32::try_from(descriptor.len()).unwrap_or(0).to_le_bytes());
    prefix.extend(descriptor);
    NativeContainer {
        prefix,
        flags,
        records: Vec::new(),
    }
}

fn encode_obss_string(value: &str) -> Vec<u8> {
    let mut encoded = value.as_bytes().to_vec();
    encoded.push(0);
    let mut stored = vec![u8::try_from(encoded.len()).unwrap_or(0)];
    stored.extend(encoded);
    stored
}

fn encode_container(container: &NativeContainer) -> Result<Vec<u8>, Error> {
    let mut payload = Vec::new();
    for record in &container.records {
        payload.extend_from_slice(&record.tag.to_le_bytes());
        payload.extend_from_slice(&record.version.to_le_bytes());
        let size = u32::try_from(record.data.len()).map_err(|_| Error::NativeWriteUnsupported)?;
        payload.extend_from_slice(&size.to_le_bytes());
        payload.extend_from_slice(&record.data);
    }

    let stored = if container.flags & 1 == 0 {
        payload
    } else {
        let mut encoder = ZlibEncoder::new(Vec::new(), Compression::default());
        encoder.write_all(&payload)?;
        encoder.finish()?
    };
    let mut source = container.prefix.clone();
    source.extend(stored);
    Ok(source)
}

/// Writes a native TSC file.
///
/// Unchanged loaded documents retain their source bytes exactly. Changed
/// documents rewrite supported part and wire records and keep all other
/// native records unchanged. Encoding finishes before the target is opened,
/// so an unsupported change cannot damage an existing file.
///
/// # Errors
///
/// Returns [`Error::NativeWriteUnsupported`] when the document contains a
/// change that has no verified native representation, or [`Error::Io`] if the
/// destination cannot be created or written.
pub fn write(path: &Path, sheet: &mut Sheet) -> Result<(), Error> {
    let source = encode(sheet.document())?;
    if let Some(directory) = path
        .parent()
        .filter(|directory| !directory.as_os_str().is_empty())
    {
        std::fs::create_dir_all(directory)?;
    }
    std::fs::write(path, &source)?;
    sheet.retain_native_source(&source);
    sheet.mark_saved();
    Ok(())
}

/// The path with the circuit extension on it, where it has none of its own.
#[must_use]
pub fn with_extension(path: &Path) -> PathBuf {
    if path.extension().is_some() {
        return path.to_path_buf();
    }
    path.with_extension(EXTENSION)
}

#[cfg(test)]
mod tests {
    use std::io::Write;
    use std::path::{Path, PathBuf};

    use flate2::Compression;
    use flate2::write::ZlibEncoder;

    use super::{EXTENSION, Error, decode, decode_container, read, with_extension, write};
    use crate::schematic_document::{Point, Sheet, WireKind};

    fn record(tag: u16, version: u16, data: &[u8]) -> Vec<u8> {
        let mut record = Vec::new();
        record.extend_from_slice(&tag.to_le_bytes());
        record.extend_from_slice(&version.to_le_bytes());
        record.extend_from_slice(&u32::try_from(data.len()).unwrap().to_le_bytes());
        record.extend_from_slice(data);
        record
    }

    fn obss_string(value: &str) -> Vec<u8> {
        let mut encoded = value.as_bytes().to_vec();
        encoded.push(0);
        let mut stored = vec![u8::try_from(encoded.len()).unwrap()];
        stored.extend(encoded);
        stored
    }

    fn circuit(payload: &[u8], compressed: bool) -> Vec<u8> {
        let mut descriptor = Vec::new();
        for value in ["Circuit Description", "V1.10", "", "", "TINA", ""] {
            descriptor.extend(obss_string(value));
        }
        descriptor.extend_from_slice(&u32::from(compressed).to_le_bytes());

        let mut source = b"OBSS\x1a\x01\0".to_vec();
        source.extend_from_slice(&0_u32.to_le_bytes());
        source.extend_from_slice(&2_u16.to_le_bytes());
        source.extend_from_slice(&0_u16.to_le_bytes());
        source.extend_from_slice(&u32::try_from(descriptor.len()).unwrap().to_le_bytes());
        source.extend(descriptor);
        if compressed {
            let mut encoder = ZlibEncoder::new(Vec::new(), Compression::default());
            encoder.write_all(payload).unwrap();
            source.extend(encoder.finish().unwrap());
        } else {
            source.extend_from_slice(payload);
        }
        source
    }

    fn component() -> Vec<u8> {
        let mut data = Vec::new();
        data.extend_from_slice(&32_i16.to_le_bytes());
        data.extend_from_slice(&40_i16.to_le_bytes());
        data.extend_from_slice(&0_i16.to_le_bytes());
        data.extend_from_slice(&0_i16.to_le_bytes());
        data.push(1);
        data.push(2);
        data.extend_from_slice(&[0, 0, 0]);
        for unit in ['R' as u16, '7' as u16, 0] {
            data.extend_from_slice(&unit.to_le_bytes());
        }
        data.extend_from_slice(&[0, 0, 0, 0, 0]);
        data.extend_from_slice(b"4k7\0");
        record(0x020a, 0x46, &data)
    }

    fn wire() -> Vec<u8> {
        let mut data = Vec::new();
        data.extend_from_slice(&32_i16.to_le_bytes());
        data.extend_from_slice(&40_i16.to_le_bytes());
        data.extend_from_slice(&64_i16.to_le_bytes());
        data.extend_from_slice(&40_i16.to_le_bytes());
        data.extend_from_slice(&2_u16.to_le_bytes());
        data.extend_from_slice(&32_i16.to_le_bytes());
        data.extend_from_slice(&40_i16.to_le_bytes());
        data.extend_from_slice(&64_i16.to_le_bytes());
        data.extend_from_slice(&40_i16.to_le_bytes());
        record(0x0100, 0x17, &data)
    }

    fn payload() -> Vec<u8> {
        let mut payload = component();
        payload.extend(wire());
        payload.extend(record(0x00ff, 0, &[]));
        payload
    }

    #[test]
    fn an_uncompressed_native_circuit_is_read() {
        let document = decode(&circuit(&payload(), false)).unwrap();
        assert_eq!(document.parts().len(), 1);
        assert_eq!(document.parts()[0].kind, "R");
        assert_eq!(document.parts()[0].label, "R7");
        assert_eq!(document.parts()[0].value, "4k7");
        assert_eq!(document.parts()[0].at, Point::new(4, 5));
        assert_eq!(document.parts()[0].rotation.degrees(), 90);
        assert_eq!(document.wires().len(), 1);
        assert!(!document.is_modified());
        assert!(!document.has_selection());
    }

    #[test]
    fn a_compressed_native_circuit_is_read() {
        let document = decode(&circuit(&payload(), true)).unwrap();
        assert_eq!(document.parts().len(), 1);
        assert_eq!(document.wires().len(), 1);
    }

    #[test]
    fn a_non_native_file_is_refused() {
        assert_eq!(
            decode(br#"{"format":"TIARA circuit"}"#),
            Err(Error::NotACircuit)
        );
    }

    #[test]
    fn an_unsupported_change_does_not_change_the_target() {
        let path = std::env::temp_dir().join(format!(
            "tiara-native-write-{}-unchanged.tsc",
            std::process::id()
        ));
        std::fs::write(&path, b"original native bytes").unwrap();
        let mut sheet = Sheet::default();
        sheet.place("UnsupportedPart", Point::new(1, 2));
        assert_eq!(write(&path, &mut sheet), Err(Error::NativeWriteUnsupported));
        assert_eq!(std::fs::read(&path).unwrap(), b"original native bytes");
        let _ = std::fs::remove_file(path);
    }

    #[test]
    fn native_examples_round_trip_byte_for_byte() {
        let examples = Path::new(env!("CARGO_MANIFEST_DIR")).join("../../examples");
        let folder =
            std::env::temp_dir().join(format!("tiara-native-round-trip-{}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        let output = folder.join("nested").join("round-trip.tsc");

        for relative in ["4011 Oscillator.TSC", "ACPOWER.TSC"] {
            let source = examples.join(relative);
            let mut sheet = Sheet::holding(read(&source).unwrap());
            write(&output, &mut sheet).unwrap();
            assert_eq!(
                std::fs::read(&output).unwrap(),
                std::fs::read(&source).unwrap(),
                "{} did not round trip exactly",
                source.display()
            );
        }

        let _ = std::fs::remove_dir_all(folder);
    }

    #[test]
    fn edited_uncompressed_native_records_round_trip_semantically() {
        edited_native_records_round_trip(false);
    }

    #[test]
    fn edited_compressed_native_records_round_trip_semantically() {
        edited_native_records_round_trip(true);
    }

    fn edited_native_records_round_trip(compressed: bool) {
        let mut original_payload = component();
        original_payload.extend(record(0x0042, 7, b"unsupported native record"));
        original_payload.extend(wire());
        original_payload.extend(record(0x00ff, 0, &[]));
        let original = circuit(&original_payload, compressed);
        let mut sheet = Sheet::holding(decode(&original).unwrap());
        let part_id = sheet.document().parts()[0].id;
        sheet.select(part_id, false);
        sheet.move_selection(3, -2);
        sheet.set_value(part_id, "12k");
        sheet.place("C", Point::new(11, 12));
        sheet.draw_wire(Point::new(9, 9), Point::new(12, 9), WireKind::Wire);

        let path = std::env::temp_dir().join(format!(
            "tiara-native-write-{}-{compressed}.tsc",
            std::process::id()
        ));
        write(&path, &mut sheet).unwrap();
        let saved = std::fs::read(&path).unwrap();
        let second_path = path.with_extension("second.tsc");
        write(&second_path, &mut sheet).unwrap();
        assert_eq!(std::fs::read(&second_path).unwrap(), saved);
        let container = decode_container(&saved).unwrap();
        assert_eq!(container.flags & 1 != 0, compressed);
        assert!(container.records.iter().any(|record| {
            record.tag == 0x0042
                && record.version == 7
                && record.data == b"unsupported native record"
        }));

        let reopened = read(&path).unwrap();
        assert!(reopened.parts().iter().any(|part| {
            part.kind == "R" && part.at == Point::new(7, 3) && part.value == "12k"
        }));
        assert!(
            reopened
                .parts()
                .iter()
                .any(|part| part.kind == "C" && part.at == Point::new(11, 12))
        );
        assert!(
            reopened
                .wires()
                .iter()
                .any(|wire| { wire.from == Point::new(9, 9) && wire.to == Point::new(12, 9) })
        );

        let _ = std::fs::remove_file(path);
        let _ = std::fs::remove_file(second_path);
    }

    #[test]
    fn a_new_document_is_written_as_a_native_circuit() {
        let mut sheet = Sheet::default();
        let resistor = sheet.place("R", Point::new(4, 5));
        sheet.set_value(resistor, "4k7");
        sheet.draw_wire(Point::new(4, 5), Point::new(8, 5), WireKind::Wire);
        let path =
            std::env::temp_dir().join(format!("tiara-native-write-{}-new.tsc", std::process::id()));

        write(&path, &mut sheet).unwrap();
        let saved = std::fs::read(&path).unwrap();
        assert!(saved.starts_with(b"OBSS\x1a\x01\0"));
        let reopened = read(&path).unwrap();
        assert_eq!(reopened.parts().len(), 1);
        assert_eq!(reopened.parts()[0].kind, "R");
        assert_eq!(reopened.parts()[0].at, Point::new(4, 5));
        assert_eq!(reopened.parts()[0].value, "4k7");
        assert_eq!(reopened.wires().len(), 1);

        let _ = std::fs::remove_file(path);
    }

    #[test]
    fn every_repository_tsc_example_is_read() {
        let examples = Path::new(env!("CARGO_MANIFEST_DIR")).join("../../examples");
        let mut sources = Vec::new();
        collect_tsc_files(&examples, &mut sources);
        sources.sort();
        assert!(
            !sources.is_empty(),
            "{} has no TSC examples",
            examples.display()
        );

        let mut circuits_without_parts_or_wires = Vec::new();
        for source in sources {
            let document =
                read(&source).unwrap_or_else(|error| panic!("{}: {error}", source.display()));
            if document.parts().is_empty() && document.wires().is_empty() {
                circuits_without_parts_or_wires.push(
                    source
                        .strip_prefix(&examples)
                        .unwrap_or(&source)
                        .to_path_buf(),
                );
            }
            assert!(
                !document.is_modified(),
                "{} was marked as edited",
                source.display()
            );
            assert!(
                !document.has_selection(),
                "{} retained a selection",
                source.display()
            );
        }
        assert_eq!(
            circuits_without_parts_or_wires,
            [
                PathBuf::from("Interpreter").join("calculate standard value.TSC"),
                PathBuf::from("IoT")
                    .join("Google Cloud IOT")
                    .join("gcloud iot arduino led switch hw.TSC"),
                PathBuf::from("Microcontrollers")
                    .join("Rasppi")
                    .join("howto download raspberry pi code.TSC"),
                PathBuf::from("Microcontrollers")
                    .join("Stm32")
                    .join("how to download stm32 code.TSC"),
                PathBuf::from("Microcontrollers")
                    .join("TI Tiva")
                    .join("howto_download_tiva_code.TSC"),
                PathBuf::from("Texas Instruments")
                    .join("Filters_Others")
                    .join("LPF Type Comparison.TSC"),
                PathBuf::from("hyperlinks.TSC"),
            ],
            "only note or program examples can have no circuit parts or wires"
        );
    }

    fn collect_tsc_files(folder: &Path, files: &mut Vec<PathBuf>) {
        for entry in std::fs::read_dir(folder).unwrap() {
            let entry = entry.unwrap();
            let path = entry.path();
            if path.is_dir() {
                collect_tsc_files(&path, files);
            } else if path
                .extension()
                .is_some_and(|extension| extension.eq_ignore_ascii_case("tsc"))
            {
                files.push(path);
            }
        }
    }

    #[test]
    fn a_file_that_is_not_there_says_so_in_the_systems_own_words() {
        let path =
            std::env::temp_dir().join(format!("tiara-circuit-{}-missing.tsc", std::process::id()));
        let _ = std::fs::remove_file(&path);
        assert!(matches!(read(&path), Err(Error::Io(_))));
    }

    #[test]
    fn a_name_without_an_extension_gets_the_circuit_one() {
        assert_eq!(
            with_extension(Path::new("circuit")),
            PathBuf::from(format!("circuit.{EXTENSION}"))
        );
        assert_eq!(
            with_extension(Path::new("circuit.old")),
            PathBuf::from("circuit.old")
        );
    }
}
