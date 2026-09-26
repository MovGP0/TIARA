//! Reading native TINA circuit files.
//!
//! A `.TSC` file is an OBSS container. Its circuit payload is a stream of
//! typed records and can be stored directly or compressed with zlib. This
//! module reads that native form. It does not put a different format under the
//! `.tsc` extension.

use std::fmt;
use std::io::Read;
use std::path::{Path, PathBuf};

use flate2::read::ZlibDecoder;

use crate::schematic_document::{Document, Point, Rotation, Sheet, WireKind};

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
                "saving changes to native TINA circuits is not supported yet; the source file was not changed"
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

    let mut document = decode_records(&payload)?;
    document.retain_native_source(source);
    Ok(document)
}

fn decode_records(payload: &[u8]) -> Result<Document, Error> {
    let mut sheet = Sheet::default();
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
        let data = &payload[data_at..end];
        at = end;

        if tag == END_RECORD_TAG {
            if at != payload.len() {
                return Err(Error::Corrupt(
                    "the TSC payload contains bytes after its end record".to_owned(),
                ));
            }
            break;
        }
        if tag == WIRE_RECORD_TAG {
            load_wire_record(&mut sheet, data)?;
        } else if (FIRST_COMPONENT_TAG..FIRST_ANALYSIS_TAG).contains(&tag) {
            load_component_record(&mut sheet, tag, version, data);
        }
    }

    sheet.clear_selection();
    sheet.mark_saved();
    Ok(sheet.document().clone())
}

fn load_wire_record(sheet: &mut Sheet, data: &[u8]) -> Result<(), Error> {
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
    for segment in points.windows(2) {
        sheet.load_wire(segment[0], segment[1], WireKind::Wire);
    }
    Ok(())
}

fn load_component_record(sheet: &mut Sheet, tag: u16, version: u16, data: &[u8]) {
    let Some(at) = native_point(data, 0) else {
        return;
    };
    let Some(orientation) = data.get(8).copied() else {
        return;
    };
    let Some((label, after_label)) = component_label(version, data) else {
        return;
    };
    let rotation = Rotation::ALL[usize::from(orientation & 3)];
    let mirrored = orientation & 4 != 0;
    let kind = component_kind(tag, &label);
    let value = component_value(tag, data, after_label);
    sheet.load_part(kind, at, rotation, mirrored, label, value);
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
        Some((String::from_utf16_lossy(&units), end))
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

/// Writes the retained native TSC source without changing its bytes.
///
/// A modified document is refused because its changed native records cannot
/// yet be encoded safely. The target is not changed in that case.
///
/// # Errors
///
/// Returns [`Error::NativeWriteUnsupported`] for a new or modified document,
/// or [`Error::Io`] if the destination cannot be created or written.
pub fn write(path: &Path, document: &Document) -> Result<(), Error> {
    if document.is_modified() {
        return Err(Error::NativeWriteUnsupported);
    }
    let source = document
        .native_source()
        .ok_or(Error::NativeWriteUnsupported)?;
    if let Some(directory) = path
        .parent()
        .filter(|directory| !directory.as_os_str().is_empty())
    {
        std::fs::create_dir_all(directory)?;
    }
    std::fs::write(path, source)?;
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

    use super::{EXTENSION, Error, decode, read, with_extension, write};
    use crate::schematic_document::{Point, Sheet};

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
        data.push(3);
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
    fn writing_is_refused_without_changing_the_target() {
        let path = std::env::temp_dir().join(format!(
            "tiara-native-write-{}-unchanged.tsc",
            std::process::id()
        ));
        std::fs::write(&path, b"original native bytes").unwrap();
        assert_eq!(
            write(&path, Sheet::default().document()),
            Err(Error::NativeWriteUnsupported)
        );
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
            let document = read(&source).unwrap();
            write(&output, &document).unwrap();
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
    fn an_edited_native_circuit_is_not_overwritten() {
        let source =
            Path::new(env!("CARGO_MANIFEST_DIR")).join("../../examples/4011 Oscillator.TSC");
        let path = std::env::temp_dir().join(format!(
            "tiara-native-write-{}-edited.tsc",
            std::process::id()
        ));
        std::fs::copy(&source, &path).unwrap();
        let before = std::fs::read(&path).unwrap();
        let mut sheet = Sheet::holding(read(&source).unwrap());
        sheet.place("C", Point::new(8, 8));

        assert_eq!(
            write(&path, sheet.document()),
            Err(Error::NativeWriteUnsupported)
        );
        assert_eq!(std::fs::read(&path).unwrap(), before);

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
