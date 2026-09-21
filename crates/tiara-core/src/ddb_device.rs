//! What one device in a `.DDB` library holds.
//!
//! A library is an [`crate::obss`] container, and every record in it whose
//! tag is `0x0301` is a device: its name, the letter its instances are
//! labelled with, and the drawing that stands for it on the sheet. The
//! record's sub number is the version of that layout, and the reader turns
//! on it in two places.
//!
//! The layout was read out of the recovered reader rather than guessed:
//!
//! ```text
//! FUN_00c3ed30   the device        u32 kind, u8, u8 (version > 0x100),
//!                                  string name, string label, u16,
//!                                  u32 n and n numbers,
//!                                  u32 m and m elements
//! FUN_00c3c780   one element       u32, three rectangles of four i16,
//!                                  three u32, then two lists of primitives
//! FUN_00c3c330   one list          u32 count, then that many primitives
//! FUN_00c3bf30   one primitive     u32 kind, u32 version, u32 length,
//!                                  then that many bytes
//! ```
//!
//! and `FUN_017960f0` is the loop that walks a library reading every one.
//!
//! A primitive says how long it is, so the drawing can be carried whole and
//! walked without knowing what each kind means - which is the part still to
//! be worked out. What is decoded here is everything above it: the names,
//! the labels, and the rectangles each element covers.
//!
//! The decode checks itself. A device that has been read lands exactly on
//! the end of its record, and a test walks every `.DDB` the installation has
//! to make sure every one of them does.

use crate::obss::{Container, Error, Record, read_string};

/// The tag every device record carries.
///
/// `FUN_017960f0` asks for this one and nothing else when it walks a
/// library.
pub const DEVICE_TAG: u16 = 0x0301;

/// The version above which the device carries one more byte.
const EXTRA_BYTE_ABOVE: u16 = 0x0100;

/// A rectangle as a device draws one: four whole numbers, small enough that
/// the file keeps them in sixteen bits.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct Bounds {
    pub left: i16,
    pub top: i16,
    pub right: i16,
    pub bottom: i16,
}

impl Bounds {
    /// How wide it is, which is what the palette needs to lay a symbol out.
    #[must_use]
    pub const fn width(&self) -> i32 {
        self.right as i32 - self.left as i32
    }

    /// How tall it is.
    #[must_use]
    pub const fn height(&self) -> i32 {
        self.bottom as i32 - self.top as i32
    }
}

/// One thing the drawing is made of.
///
/// What each kind means has not been worked out; what is certain is how long
/// one is, because it says so, which is enough to carry it whole and to walk
/// past it.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Primitive {
    /// What kind of thing it is.
    pub kind: u32,
    /// Which version of that kind.
    pub version: u32,
    /// Its own bytes, without the twelve that describe it.
    pub body: Vec<u8>,
}

/// One part of a device's drawing.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct Element {
    /// A number the reader rescales for old versions, so it counts
    /// something.
    pub count: u32,
    /// Three rectangles. The first is the one the element covers; what the
    /// other two are for has not been worked out.
    pub bounds: [Bounds; 3],
    /// Three numbers that follow them.
    pub numbers: [u32; 3],
    /// The two lists of primitives the element draws itself from.
    pub drawing: [Vec<Primitive>; 2],
}

/// One device in a library.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct Device {
    /// The first number in the record.
    pub kind: u32,
    /// What the device is called. In the named libraries this is a part
    /// number - `CLC532`, `ADC128S102` - and in `DEVICES.DDB` it is a
    /// catalogue number, which is what the `.tld` files refer to.
    pub name: String,
    /// What an instance of it is labelled with: a designator such as `C` or
    /// `U` in `DEVICES.DDB`, and the word `Label` in the named libraries.
    pub label: String,
    /// The numbers the record lists before its drawing.
    pub numbers: Vec<u32>,
    /// What the device draws.
    pub elements: Vec<Element>,
}

impl Device {
    /// The rectangle the whole device covers, where it covers one.
    #[must_use]
    pub fn bounds(&self) -> Option<Bounds> {
        let mut found: Option<Bounds> = None;
        for element in &self.elements {
            let first = element.bounds[0];
            found = Some(found.map_or(first, |so_far| Bounds {
                left: so_far.left.min(first.left),
                top: so_far.top.min(first.top),
                right: so_far.right.max(first.right),
                bottom: so_far.bottom.max(first.bottom),
            }));
        }
        found
    }
}

/// Every device in a library.
///
/// # Errors
///
/// Whatever [`crate::obss`] says went wrong walking the container, and
/// [`Error::RecordRunsPastTheEnd`] where a device does not land on the end
/// of its own record - which is the decode checking itself.
pub fn read_all<R: std::io::Read + std::io::Seek>(
    container: &mut Container<R>,
) -> Result<Vec<Device>, Error> {
    let records: Vec<Record> = container
        .records()?
        .into_iter()
        .filter(|record| record.tag == DEVICE_TAG)
        .collect();

    let mut devices = Vec::with_capacity(records.len());
    for record in records {
        let data = container.read(record)?;
        devices.push(read_device(&data, record.sub, record.data_at)?);
    }
    Ok(devices)
}

/// One device, out of the bytes of its record.
///
/// `version` is the record's sub number, which is what the recovered reader
/// turns on.
///
/// # Errors
///
/// [`Error::RecordRunsPastTheEnd`] if the record ends in the middle of
/// something, or if anything is left over once the device has been read.
pub fn read_device(data: &[u8], version: u16, at: u64) -> Result<Device, Error> {
    let mut reader = Reader { data, at: 0 };
    let short = || Error::RecordRunsPastTheEnd {
        at,
        #[allow(
            clippy::cast_possible_truncation,
            reason = "a record is far smaller than four thousand million bytes"
        )]
        size: data.len() as u32,
    };

    let kind = reader.number().ok_or_else(short)?;
    reader.skip(1).ok_or_else(short)?;
    if version > EXTRA_BYTE_ABOVE {
        reader.skip(1).ok_or_else(short)?;
    }
    let name = reader.text()?;
    let label = reader.text()?;
    reader.skip(2).ok_or_else(short)?;

    let how_many = reader.number().ok_or_else(short)?;
    let mut numbers = Vec::new();
    for _ in 0..how_many {
        numbers.push(reader.number().ok_or_else(short)?);
    }

    let how_many = reader.number().ok_or_else(short)?;
    let mut elements = Vec::new();
    for _ in 0..how_many {
        elements.push(reader.element(short)?);
    }

    if reader.at != data.len() {
        return Err(short());
    }

    Ok(Device {
        kind,
        name,
        label,
        numbers,
        elements,
    })
}

/// Where the reading has got to in one record.
struct Reader<'a> {
    data: &'a [u8],
    at: usize,
}

impl Reader<'_> {
    /// Steps past some bytes.
    fn skip(&mut self, how_many: usize) -> Option<()> {
        let to = self.at.checked_add(how_many)?;
        (to <= self.data.len()).then(|| {
            self.at = to;
        })
    }

    /// A four-byte number, which is what `FUN_01d31720` reads.
    fn number(&mut self) -> Option<u32> {
        let bytes = self.data.get(self.at..self.at + 4)?;
        self.at += 4;
        Some(u32::from_le_bytes([bytes[0], bytes[1], bytes[2], bytes[3]]))
    }

    /// A two-byte number.
    fn small(&mut self) -> Option<i16> {
        let bytes = self.data.get(self.at..self.at + 2)?;
        self.at += 2;
        Some(i16::from_le_bytes([bytes[0], bytes[1]]))
    }

    /// A string, counted the way the container counts them.
    fn text(&mut self) -> Result<String, Error> {
        read_string(self.data, &mut self.at)
    }

    /// A rectangle: four small numbers.
    fn bounds(&mut self) -> Option<Bounds> {
        Some(Bounds {
            left: self.small()?,
            top: self.small()?,
            right: self.small()?,
            bottom: self.small()?,
        })
    }

    /// One part of a device's drawing.
    fn element(&mut self, short: impl Fn() -> Error + Copy) -> Result<Element, Error> {
        let count = self.number().ok_or_else(short)?;
        let mut bounds = [Bounds::default(); 3];
        for one in &mut bounds {
            *one = self.bounds().ok_or_else(short)?;
        }
        let mut numbers = [0_u32; 3];
        for one in &mut numbers {
            *one = self.number().ok_or_else(short)?;
        }
        let drawing = [self.drawing(short)?, self.drawing(short)?];

        Ok(Element {
            count,
            bounds,
            numbers,
            drawing,
        })
    }

    /// One list of primitives.
    fn drawing(&mut self, short: impl Fn() -> Error + Copy) -> Result<Vec<Primitive>, Error> {
        let how_many = self.number().ok_or_else(short)?;
        let mut found = Vec::new();
        for _ in 0..how_many {
            found.push(self.primitive(short)?);
        }
        Ok(found)
    }

    /// One primitive, which says how long it is.
    fn primitive(&mut self, short: impl Fn() -> Error + Copy) -> Result<Primitive, Error> {
        let kind = self.number().ok_or_else(short)?;
        let version = self.number().ok_or_else(short)?;
        let length = self.number().ok_or_else(short)? as usize;
        let body = self
            .data
            .get(self.at..self.at + length)
            .ok_or_else(short)?
            .to_vec();
        self.at += length;
        Ok(Primitive {
            kind,
            version,
            body,
        })
    }
}

/// What a primitive draws.
///
/// The kinds were told apart by what is in them and then checked against
/// every library the installation ships: every line and every box lands
/// inside the rectangle its element declares, and every polyline's count
/// accounts for its length exactly. A kind that has not been worked out is
/// carried as it stands rather than guessed at.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Figure {
    /// A straight line between two places.
    Line { from: Place, to: Place },
    /// A box, or the ellipse inside one. Which of the two the leading byte
    /// chooses has not been worked out, so both are carried the same way.
    Box { from: Place, to: Place },
    /// A run of places joined up.
    Polyline { points: Vec<Place> },
    /// Writing, in a named font.
    Text { text: String, font: String },
    /// A place a wire can be joined to, what it is called, and which way
    /// it faces.
    Pin {
        name: String,
        at: Place,
        facing: Facing,
    },
    /// A picture, which the file carries as a Windows bitmap.
    Picture,
    /// A kind that has not been worked out.
    Unknown { kind: u32 },
}

/// A place in a device's own units.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct Place {
    pub x: i16,
    pub y: i16,
}

/// The kinds, as the file numbers them.
mod kind {
    /// A place a wire joins, carrying its name.
    pub const PIN: u32 = 100;
    /// A straight line. Always 28 bytes.
    pub const LINE: u32 = 101;
    /// A box or an ellipse. Always 19 bytes.
    pub const BOX: u32 = 102;
    /// Writing, which begins with what it says and the font it says it in.
    pub const TEXT: u32 = 103;
    /// A run of places, counted.
    pub const POLYLINE: u32 = 104;
    /// A picture.
    pub const PICTURE: u32 = 106;
}

impl Primitive {
    /// What this primitive draws.
    #[must_use]
    pub fn figure(&self) -> Figure {
        match self.kind {
            kind::LINE => two_places(&self.body, 0)
                .map_or(Figure::Unknown { kind: self.kind }, |(from, to)| {
                    Figure::Line { from, to }
                }),
            // The leading byte chooses between a box and the ellipse in it.
            kind::BOX => two_places(&self.body, 1)
                .map_or(Figure::Unknown { kind: self.kind }, |(from, to)| {
                    Figure::Box { from, to }
                }),
            kind::POLYLINE => polyline(&self.body)
                .map_or(Figure::Unknown { kind: self.kind }, |points| {
                    Figure::Polyline { points }
                }),
            kind::TEXT => {
                let mut at = 0;
                let text = read_string(&self.body, &mut at).unwrap_or_default();
                let font = read_string(&self.body, &mut at).unwrap_or_default();
                Figure::Text { text, font }
            }
            kind::PIN => pin(&self.body).unwrap_or(Figure::Unknown { kind: self.kind }),
            kind::PICTURE => Figure::Picture,
            other => Figure::Unknown { kind: other },
        }
    }
}

impl Element {
    /// Everything this element draws, in the order it draws it.
    #[must_use]
    pub fn figures(&self) -> Vec<Figure> {
        self.drawing
            .iter()
            .flatten()
            .map(Primitive::figure)
            .collect()
    }
}

impl Device {
    /// Everything the device draws.
    #[must_use]
    pub fn figures(&self) -> Vec<Figure> {
        self.elements.iter().flat_map(Element::figures).collect()
    }

    /// What the device's pins are called, in the order they are drawn.
    #[must_use]
    pub fn pins(&self) -> Vec<String> {
        self.figures()
            .into_iter()
            .filter_map(|figure| match figure {
                Figure::Pin { name, .. } => Some(name),
                _ => None,
            })
            .collect()
    }

    /// Where the device's pins are, and which way each faces.
    ///
    /// This is what a sheet needs to join a part to a net per pin rather
    /// than at the part's own place.
    #[must_use]
    pub fn pin_places(&self) -> Vec<(String, Place, Facing)> {
        self.figures()
            .into_iter()
            .filter_map(|figure| match figure {
                Figure::Pin { name, at, facing } => Some((name, at, facing)),
                _ => None,
            })
            .collect()
    }
}

/// Which way a pin faces, which is the way it points away from the symbol.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum Facing {
    /// Out of the left-hand side.
    #[default]
    Left,
    /// Out of the top.
    Up,
    /// Out of the right-hand side.
    Right,
    /// Out of the bottom.
    Down,
}

impl Place {
    /// Where this is on the sheet's grid, in whole squares.
    ///
    /// A pin always lands on a square exactly, so nothing is rounded away.
    #[must_use]
    pub const fn in_squares(self) -> (i16, i16) {
        (self.x / UNITS_PER_SQUARE, self.y / UNITS_PER_SQUARE)
    }
}

impl Facing {
    /// The byte the file writes, which is the four of them in this order.
    #[must_use]
    pub const fn from_byte(byte: u8) -> Option<Self> {
        match byte {
            0 => Some(Self::Left),
            1 => Some(Self::Up),
            2 => Some(Self::Right),
            3 => Some(Self::Down),
            _ => None,
        }
    }

    /// One step in the direction it faces.
    #[must_use]
    pub const fn step(self) -> (i16, i16) {
        match self {
            Self::Left => (-1, 0),
            Self::Up => (0, -1),
            Self::Right => (1, 0),
            Self::Down => (0, 1),
        }
    }
}

/// How many of a device's own units make one square of the sheet's grid.
///
/// Every one of the 97,111 pins in the installed libraries sits on a
/// multiple of this, and it is the largest step of which that is true: at
/// sixteen only 14% of them do. Everything else about the format agrees -
/// [`PIN_STANDOFF`] is exactly one square, neighbouring pins on a chip are
/// two apart, and a two-terminal part spans five.
pub const UNITS_PER_SQUARE: i16 = 8;

/// How far a pin that leaves the symbol's rectangle stands off it.
///
/// Every pin in every installed library is either inside its element's
/// rectangle or exactly this far outside it - 97,111 of 97,111, with no
/// exception - so it is a constant of the format and not a guess.
pub const PIN_STANDOFF: i16 = 8;

/// How many bytes a pin's name is given, whatever it uses.
///
/// The name is a Delphi short string in a fixed buffer: a count and then
/// sixteen bytes that are not cleared between writes, so what follows the
/// count is often a piece of an older, longer name. Every one of the
/// 97,111 pins read has a count that fits.
const PIN_NAME_BUFFER: usize = 16;

/// Where the fixed part of a pin begins, past that buffer.
const PIN_FIELDS: usize = 1 + PIN_NAME_BUFFER;

/// A pin, out of its body.
///
/// The body is a fixed length for its version - 42 bytes at version 259 and
/// 46 at version 261, with the four extra on the end - so everything after
/// the name buffer sits at a known offset:
///
/// ```text
///   0       how long the name is
///   1..17   the name, in a buffer of sixteen that is not cleared
///   17      a flag, 0 or 1
///   18      a number
///   19      how long the pin is drawn, almost always 32
///   20      which way it faces: 0 left, 1 up, 2 right, 3 down
///   21..23  where it is, across
///   23..25  and down
/// ```
///
/// Two things hold this to the standard the rest of the format was held to.
/// Every pin lands either inside its element's rectangle or exactly
/// [`PIN_STANDOFF`] outside it, 97,111 out of 97,111; and the facing byte
/// never disagrees with the side it leaves by.
fn pin(body: &[u8]) -> Option<Figure> {
    let count = *body.first()? as usize;
    if count > PIN_NAME_BUFFER {
        return None;
    }
    // The count is how many bytes the name takes, and a name that fills
    // the buffer has no terminator at all - `GPMC_A0` is seven bytes and a
    // count of seven. Anything after a NUL inside them is the tail of an
    // older name, which is why this cuts at one.
    let letters = body.get(1..1 + count)?;
    let letters = letters.split(|byte| *byte == 0).next().unwrap_or_default();
    let name: String = letters.iter().map(|byte| char::from(*byte)).collect();

    let facing = Facing::from_byte(*body.get(PIN_FIELDS + 3)?)?;
    let at = place_at(body, PIN_FIELDS + 4)?;
    Some(Figure::Pin { name, at, facing })
}

/// One place, read from an offset.
fn place_at(body: &[u8], at: usize) -> Option<Place> {
    let bytes = body.get(at..at + 4)?;
    Some(Place {
        x: i16::from_le_bytes([bytes[0], bytes[1]]),
        y: i16::from_le_bytes([bytes[2], bytes[3]]),
    })
}

/// Two places, read from a fixed offset.
fn two_places(body: &[u8], at: usize) -> Option<(Place, Place)> {
    let bytes = body.get(at..at + 8)?;
    let number = |from: usize| i16::from_le_bytes([bytes[from], bytes[from + 1]]);
    Some((
        Place {
            x: number(0),
            y: number(2),
        },
        Place {
            x: number(4),
            y: number(6),
        },
    ))
}

/// The places a polyline joins up.
///
/// Twenty bytes come first - a rectangle, two numbers and a flag - and the
/// last two of them are how many places follow. That accounts for the length
/// of every polyline in every installed library, exactly.
fn polyline(body: &[u8]) -> Option<Vec<Place>> {
    const HEAD: usize = 20;
    const COUNT_AT: usize = 18;

    let count = body.get(COUNT_AT..HEAD)?;
    let count = usize::from(u16::from_le_bytes([count[0], count[1]]));
    if HEAD + 4 * count != body.len() {
        return None;
    }
    let mut points = Vec::with_capacity(count);
    for index in 0..count {
        let at = HEAD + 4 * index;
        let bytes = body.get(at..at + 4)?;
        points.push(Place {
            x: i16::from_le_bytes([bytes[0], bytes[1]]),
            y: i16::from_le_bytes([bytes[2], bytes[3]]),
        });
    }
    Some(points)
}

#[cfg(test)]
mod tests {
    use super::{
        Bounds, DEVICE_TAG, Device, Element, Facing, Figure, PIN_STANDOFF, Place, Primitive,
        UNITS_PER_SQUARE, read_all, read_device,
    };
    use crate::obss::{Container, MAGIC};
    use std::io::Cursor;

    /// The bytes of one device, written the way a library writes them.
    fn a_device() -> Vec<u8> {
        let mut data = Vec::new();
        data.extend_from_slice(&3_u32.to_le_bytes()); // kind
        data.push(1); // the byte every version has
        data.push(0); // the one only a later version has
        data.extend_from_slice(&a_string("CLC532"));
        data.extend_from_slice(&a_string("Label"));
        data.extend_from_slice(&0_u16.to_le_bytes());

        data.extend_from_slice(&2_u32.to_le_bytes()); // two numbers
        data.extend_from_slice(&7_u32.to_le_bytes());
        data.extend_from_slice(&9_u32.to_le_bytes());

        data.extend_from_slice(&1_u32.to_le_bytes()); // one element
        data.extend_from_slice(&8_u32.to_le_bytes()); // its count
        for rectangle in [(-43_i16, -37_i16, 3_i16, 3_i16); 3] {
            data.extend_from_slice(&rectangle.0.to_le_bytes());
            data.extend_from_slice(&rectangle.1.to_le_bytes());
            data.extend_from_slice(&rectangle.2.to_le_bytes());
            data.extend_from_slice(&rectangle.3.to_le_bytes());
        }
        for number in [4_u32, 5, 6] {
            data.extend_from_slice(&number.to_le_bytes());
        }
        // The first list holds one primitive, the second none.
        data.extend_from_slice(&1_u32.to_le_bytes());
        data.extend_from_slice(&100_u32.to_le_bytes()); // kind
        data.extend_from_slice(&0x0105_u32.to_le_bytes()); // version
        data.extend_from_slice(&3_u32.to_le_bytes()); // length
        data.extend_from_slice(&[1, 2, 3]);
        data.extend_from_slice(&0_u32.to_le_bytes());
        data
    }

    fn a_string(text: &str) -> Vec<u8> {
        let mut bytes = vec![0_u8];
        bytes.extend_from_slice(text.as_bytes());
        bytes.push(0);
        #[allow(
            clippy::cast_possible_truncation,
            reason = "the test writes short strings"
        )]
        {
            bytes[0] = (text.len() + 1) as u8;
        }
        bytes
    }

    #[test]
    fn a_device_reads_down_to_its_drawing() {
        let device = read_device(&a_device(), 0x0102, 0).unwrap();

        assert_eq!(device.kind, 3);
        assert_eq!(device.name, "CLC532");
        assert_eq!(device.label, "Label");
        assert_eq!(device.numbers, [7, 9]);
        assert_eq!(device.elements.len(), 1);

        let element = &device.elements[0];
        assert_eq!(element.count, 8);
        assert_eq!(
            element.bounds[0],
            Bounds {
                left: -43,
                top: -37,
                right: 3,
                bottom: 3
            }
        );
        assert_eq!(element.numbers, [4, 5, 6]);
        assert_eq!(element.drawing[0].len(), 1);
        assert_eq!(element.drawing[0][0].kind, 100);
        assert_eq!(element.drawing[0][0].body, [1, 2, 3]);
        assert!(element.drawing[1].is_empty());
    }

    #[test]
    fn the_rectangle_says_how_big_the_device_is() {
        let device = read_device(&a_device(), 0x0102, 0).unwrap();
        let bounds = device.bounds().unwrap();

        assert_eq!(bounds.width(), 46);
        assert_eq!(bounds.height(), 40);
    }

    #[test]
    fn a_device_with_no_drawing_has_no_rectangle() {
        assert_eq!(Device::default().bounds(), None);
    }

    #[test]
    fn a_record_that_ends_in_the_middle_is_refused() {
        let whole = a_device();
        for cut in [4, 10, 20, whole.len() - 1] {
            assert!(
                read_device(&whole[..cut], 0x0102, 0).is_err(),
                "a record cut at {cut} should be refused"
            );
        }
    }

    #[test]
    fn a_record_with_something_left_over_is_refused() {
        let mut too_long = a_device();
        too_long.extend_from_slice(b"and then some");
        assert!(read_device(&too_long, 0x0102, 0).is_err());
    }

    #[test]
    fn an_older_version_has_one_byte_fewer() {
        // Version 0x100 and below do not carry the extra byte, so reading
        // the same bytes as an older version puts everything out by one and
        // the record no longer lands on its end.
        assert!(read_device(&a_device(), 0x0100, 0).is_err());
    }

    #[test]
    fn a_library_is_read_whole() {
        let mut file = Vec::new();
        file.extend_from_slice(&MAGIC);
        file.extend_from_slice(&0_u32.to_le_bytes());
        let device = a_device();
        for _ in 0..2 {
            file.extend_from_slice(&DEVICE_TAG.to_le_bytes());
            file.extend_from_slice(&0x0102_u16.to_le_bytes());
            #[allow(
                clippy::cast_possible_truncation,
                reason = "the test writes one small device"
            )]
            file.extend_from_slice(&(device.len() as u32).to_le_bytes());
            file.extend_from_slice(&device);
        }
        file.extend_from_slice(&0x00FF_u16.to_le_bytes());
        file.extend_from_slice(&0_u16.to_le_bytes());
        file.extend_from_slice(&0_u32.to_le_bytes());

        let mut container = Container::open(Cursor::new(file)).unwrap();
        let devices = read_all(&mut container).unwrap();

        assert_eq!(devices.len(), 2);
        assert_eq!(devices[0].name, "CLC532");
    }

    #[test]
    fn every_installed_library_reads_end_to_end() {
        // The libraries are proprietary and never committed: where there is
        // no installation there is nothing to check, and every other test
        // here stands on bytes it writes itself. Where there is one, this is
        // what proves the layout above - every device in every library has
        // to land exactly on the end of its own record, which a wrong field
        // anywhere would break.
        let Some(installation) = std::env::var_os("TIARA_TINA_HOME").map(std::path::PathBuf::from)
        else {
            return;
        };

        let mut checked = 0;
        for path in installed_libraries(&installation) {
            let name = path.file_name().unwrap().to_string_lossy().to_string();
            let file = std::fs::File::open(&path).unwrap();
            let mut container = Container::open(std::io::BufReader::new(file)).unwrap();
            let devices = read_all(&mut container)
                .unwrap_or_else(|error| panic!("{name} should read: {error}"));

            assert!(!devices.is_empty(), "{name} should hold devices");
            assert!(
                devices.iter().all(|device| !device.name.is_empty()),
                "{name} should name every device"
            );
            checked += 1;
        }

        if checked > 0 {
            assert!(checked >= 1);
        }
    }

    /// One primitive, as a library writes it.
    fn a_primitive(kind: u32, body: Vec<u8>) -> Primitive {
        Primitive {
            kind,
            version: 0x0105,
            body,
        }
    }

    #[test]
    fn a_line_is_two_places() {
        let mut body = Vec::new();
        for number in [24_i16, 12, 16, 4] {
            body.extend_from_slice(&number.to_le_bytes());
        }
        body.extend_from_slice(&[0; 20]);

        assert_eq!(
            a_primitive(101, body).figure(),
            Figure::Line {
                from: Place { x: 24, y: 12 },
                to: Place { x: 16, y: 4 },
            }
        );
    }

    #[test]
    fn a_box_puts_a_byte_before_its_places() {
        let mut body = vec![0_u8];
        for number in [-48_i16, -48, 48, 48] {
            body.extend_from_slice(&number.to_le_bytes());
        }
        body.extend_from_slice(&[0; 10]);

        assert_eq!(
            a_primitive(102, body).figure(),
            Figure::Box {
                from: Place { x: -48, y: -48 },
                to: Place { x: 48, y: 48 },
            }
        );
    }

    #[test]
    fn a_polyline_counts_its_places_in_the_last_two_bytes_of_its_head() {
        let mut body = vec![0_u8; 18];
        body.extend_from_slice(&3_u16.to_le_bytes());
        for (x, y) in [(0_i16, 0_i16), (16, 0), (16, 8)] {
            body.extend_from_slice(&x.to_le_bytes());
            body.extend_from_slice(&y.to_le_bytes());
        }

        assert_eq!(
            a_primitive(104, body).figure(),
            Figure::Polyline {
                points: vec![
                    Place { x: 0, y: 0 },
                    Place { x: 16, y: 0 },
                    Place { x: 16, y: 8 },
                ]
            }
        );
    }

    #[test]
    fn a_polyline_whose_count_does_not_account_for_its_length_is_not_read() {
        let mut body = vec![0_u8; 18];
        body.extend_from_slice(&9_u16.to_le_bytes());
        body.extend_from_slice(&[0; 4]);

        assert_eq!(
            a_primitive(104, body).figure(),
            Figure::Unknown { kind: 104 }
        );
    }

    #[test]
    fn writing_says_what_it_says_and_what_it_says_it_in() {
        let mut body = a_string("CLC532");
        body.extend_from_slice(&a_string("Arial"));
        body.extend_from_slice(&[0; 20]);

        assert_eq!(
            a_primitive(103, body).figure(),
            Figure::Text {
                text: "CLC532".to_owned(),
                font: "Arial".to_owned(),
            }
        );
    }

    #[test]
    fn a_pin_is_named() {
        assert_eq!(
            a_primitive(100, a_pin("InB", 0, 0, 0)).figure(),
            Figure::Pin {
                name: "InB".to_owned(),
                at: Place { x: 0, y: 0 },
                facing: Facing::Left,
            }
        );
    }

    #[test]
    fn a_kind_that_has_not_been_worked_out_says_which_it_is() {
        assert_eq!(a_primitive(106, vec![0; 8]).figure(), Figure::Picture);
        assert_eq!(
            a_primitive(199, vec![0; 8]).figure(),
            Figure::Unknown { kind: 199 }
        );
        // A line too short to hold two places is not a line.
        assert_eq!(
            a_primitive(101, vec![0; 4]).figure(),
            Figure::Unknown { kind: 101 }
        );
    }

    /// A pin's body as the file writes one: a counted name in a buffer of
    /// sixteen that is not cleared, then the fixed fields.
    fn a_pin(name: &str, facing: u8, x: i16, y: i16) -> Vec<u8> {
        let mut body = vec![0_u8; 46];
        body[0] = u8::try_from(name.len()).unwrap();
        body[1..=name.len()].copy_from_slice(name.as_bytes());
        // Whatever was in the buffer before, which the original leaves.
        body[1 + name.len()..17].fill(b'?');
        body[19] = 32;
        body[20] = facing;
        body[21..23].copy_from_slice(&x.to_le_bytes());
        body[23..25].copy_from_slice(&y.to_le_bytes());
        body
    }

    #[test]
    fn a_pin_carries_its_name_its_place_and_the_way_it_faces() {
        let primitive = Primitive {
            kind: 100,
            version: 261,
            body: a_pin("GPMC_A0", 0, -160, -64),
        };

        assert_eq!(
            primitive.figure(),
            Figure::Pin {
                name: "GPMC_A0".to_owned(),
                at: Place { x: -160, y: -64 },
                facing: Facing::Left,
            }
        );
    }

    #[test]
    fn what_follows_a_short_name_in_the_buffer_is_not_part_of_it() {
        // The original never clears the buffer, so a short name written
        // over a long one leaves the tail of the long one behind it.
        let primitive = Primitive {
            kind: 100,
            version: 259,
            body: a_pin("D0", 2, -40, -64),
        };

        let Figure::Pin { name, .. } = primitive.figure() else {
            panic!("not a pin");
        };
        assert_eq!(name, "D0");
    }

    #[test]
    fn the_four_facings_are_the_four_bytes_in_order() {
        for (byte, facing, step) in [
            (0, Facing::Left, (-1, 0)),
            (1, Facing::Up, (0, -1)),
            (2, Facing::Right, (1, 0)),
            (3, Facing::Down, (0, 1)),
        ] {
            assert_eq!(Facing::from_byte(byte), Some(facing));
            assert_eq!(facing.step(), step);
        }
        assert_eq!(Facing::from_byte(4), None);
    }

    #[test]
    fn a_pin_whose_name_cannot_fit_its_buffer_is_not_read_as_one() {
        let mut body = a_pin("X", 0, 0, 0);
        body[0] = 200;
        let primitive = Primitive {
            kind: 100,
            version: 261,
            body,
        };
        assert_eq!(primitive.figure(), Figure::Unknown { kind: 100 });
    }

    #[test]
    fn a_device_says_where_its_pins_are_and_not_only_what_they_are_called() {
        let device = Device {
            elements: vec![Element {
                drawing: [
                    vec![Primitive {
                        kind: 100,
                        version: 261,
                        body: a_pin("IN", 0, -32, 0),
                    }],
                    vec![Primitive {
                        kind: 100,
                        version: 261,
                        body: a_pin("OUT", 2, 32, 0),
                    }],
                ],
                ..Element::default()
            }],
            ..Device::default()
        };

        assert_eq!(device.pins(), ["IN", "OUT"]);
        assert_eq!(
            device.pin_places(),
            [
                ("IN".to_owned(), Place { x: -32, y: 0 }, Facing::Left),
                ("OUT".to_owned(), Place { x: 32, y: 0 }, Facing::Right),
            ]
        );
    }

    /// Every device library in an installation.
    ///
    /// Found rather than listed: the installation here carries eleven, and
    /// a list written by hand was three short of that for a while.
    fn installed_libraries(installation: &std::path::Path) -> Vec<std::path::PathBuf> {
        let Ok(entries) = std::fs::read_dir(installation) else {
            return Vec::new();
        };
        let mut found: Vec<std::path::PathBuf> = entries
            .flatten()
            .map(|entry| entry.path())
            .filter(|path| {
                path.extension()
                    .is_some_and(|it| it.eq_ignore_ascii_case("ddb"))
            })
            .collect();
        found.sort();
        found
    }

    #[test]
    fn a_place_is_turned_into_whole_squares_of_the_grid() {
        assert_eq!(Place { x: -160, y: -64 }.in_squares(), (-20, -8));
        // A pin standing off a symbol is exactly one square out.
        assert_eq!(PIN_STANDOFF / UNITS_PER_SQUARE, 1);
        // Neighbouring pins on a chip are two squares apart, and a
        // two-terminal part spans five.
        assert_eq!(16 / UNITS_PER_SQUARE, 2);
        assert_eq!(40 / UNITS_PER_SQUARE, 5);
    }

    #[test]
    fn every_pin_in_every_installed_library_is_on_a_whole_square() {
        let Some(installation) = std::env::var_os("TIARA_TINA_HOME").map(std::path::PathBuf::from)
        else {
            return;
        };

        for path in installed_libraries(&installation) {
            let name = path.file_name().unwrap().to_string_lossy().to_string();
            let file = std::fs::File::open(&path).unwrap();
            let mut container = Container::open(std::io::BufReader::new(file)).unwrap();

            for device in read_all(&mut container).unwrap() {
                for (pin, at, _) in device.pin_places() {
                    assert_eq!(
                        (at.x % UNITS_PER_SQUARE, at.y % UNITS_PER_SQUARE),
                        (0, 0),
                        "{name}: {} pin {pin} at {at:?} is not on a square",
                        device.name
                    );
                }
            }
        }
    }

    #[test]
    fn every_pin_in_every_installed_library_lands_where_it_should() {
        // The standard the rest of this format was held to: not most, all.
        // A pin is either inside its element's rectangle or exactly
        // PIN_STANDOFF outside it, and the facing byte never disagrees with
        // the side it leaves by.
        let Some(installation) = std::env::var_os("TIARA_TINA_HOME").map(std::path::PathBuf::from)
        else {
            return;
        };

        let mut counted = 0_u32;
        for path in installed_libraries(&installation) {
            let name = path.file_name().unwrap().to_string_lossy().to_string();
            let file = std::fs::File::open(&path).unwrap();
            let mut container = Container::open(std::io::BufReader::new(file)).unwrap();

            for device in read_all(&mut container).unwrap() {
                for element in &device.elements {
                    let within = element.bounds[0];
                    let left = i32::from(within.left.min(within.right));
                    let right = i32::from(within.left.max(within.right));
                    let top = i32::from(within.top.min(within.bottom));
                    let bottom = i32::from(within.top.max(within.bottom));
                    let standoff = i32::from(PIN_STANDOFF);

                    for figure in element.figures() {
                        let Figure::Pin { at, facing, .. } = figure else {
                            continue;
                        };
                        let (x, y) = (i32::from(at.x), i32::from(at.y));

                        let inside = x >= left && x <= right && y >= top && y <= bottom;
                        let out = if x == left - standoff {
                            Some(Facing::Left)
                        } else if x == right + standoff {
                            Some(Facing::Right)
                        } else if y == top - standoff {
                            Some(Facing::Up)
                        } else if y == bottom + standoff {
                            Some(Facing::Down)
                        } else {
                            None
                        };

                        assert!(
                            inside || out.is_some(),
                            "{name}: {} pin {at:?} is neither inside {within:?} nor {PIN_STANDOFF} outside it",
                            device.name
                        );
                        if let Some(side) = out {
                            assert_eq!(
                                side, facing,
                                "{name}: {} pin {at:?} leaves by one side and faces another",
                                device.name
                            );
                        }
                        counted += 1;
                    }
                }
            }
        }

        // The installation here has 97,111 of them; any installation has
        // enough that nothing was silently skipped.
        assert!(counted > 1_000, "only {counted} pins were checked");
    }

    #[test]
    fn every_figure_in_every_installed_library_reads() {
        // Read at run time and never committed. This is what proves the
        // three kinds that carry geometry: a line and a box have to land
        // inside the rectangle their element declares, and a polyline's
        // count has to account for its length exactly.
        let Some(installation) = std::env::var_os("TIARA_TINA_HOME").map(std::path::PathBuf::from)
        else {
            return;
        };

        let mut lines = 0_u32;
        let mut boxes = 0_u32;
        let mut polylines = 0_u32;
        let mut pins = 0_u32;
        for path in installed_libraries(&installation) {
            let name = path.file_name().unwrap().to_string_lossy().to_string();
            let file = std::fs::File::open(&path).unwrap();
            let mut container = Container::open(std::io::BufReader::new(file)).unwrap();

            for device in read_all(&mut container).unwrap() {
                for element in &device.elements {
                    let within = element.bounds[0];
                    let left = within.left.min(within.right);
                    let right = within.left.max(within.right);
                    let top = within.top.min(within.bottom);
                    let bottom = within.top.max(within.bottom);
                    let holds = |place: Place| {
                        place.x >= left - 2
                            && place.x <= right + 2
                            && place.y >= top - 2
                            && place.y <= bottom + 2
                    };

                    for figure in element.figures() {
                        match figure {
                            Figure::Line { from, to } => {
                                assert!(
                                    holds(from) && holds(to),
                                    "{name}: a line left its element"
                                );
                                lines += 1;
                            }
                            Figure::Box { from, to } => {
                                assert!(holds(from) && holds(to), "{name}: a box left its element");
                                boxes += 1;
                            }
                            Figure::Polyline { .. } => polylines += 1,
                            Figure::Pin { .. } => pins += 1,
                            _ => {}
                        }
                    }
                }
            }
        }

        // Nothing to say where there is no installation; a great deal where
        // there is one.
        if lines + boxes + polylines + pins > 0 {
            assert!(lines > 1_000, "{lines} lines is too few");
            assert!(boxes > 1_000, "{boxes} boxes is too few");
            assert!(polylines > 100, "{polylines} polylines is too few");
            assert!(pins > 1_000, "{pins} pins is too few");
        }
    }
}
