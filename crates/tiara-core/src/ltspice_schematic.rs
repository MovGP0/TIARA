//! Reading a schematic written by `LTspice`.
//!
//! `File > Import > LTSpice File (*.asc)` had a window and no reader. An
//! `.asc` file is plain text, one thing per line, and the lines that matter
//! are few:
//!
//! ```text
//! Version 4
//! SHEET 1 880 680
//! WIRE 176 80 96 80
//! FLAG 96 160 0
//! SYMBOL res 176 64 R0
//! SYMATTR InstName R1
//! SYMATTR Value 1k
//! TEXT -48 216 Left 2 !.tran 1m
//! ```
//!
//! A `SYMBOL` starts a part and the `SYMATTR` lines after it say what that
//! part is called and what it is worth, until the next thing begins. `FLAG`
//! is a net name, and the one called `0` is ground - which is a part in this
//! editor, not a label, so it is read as one.
//!
//! Positions. `LTspice` counts in sixteenths of what it draws as one grid
//! square, and this editor counts in whole squares, so everything is divided
//! by sixteen. Rounding is to the nearest square rather than towards zero, so
//! a part that sat on a line stays on it.
//!
//! What is not read: the drawing furniture - `WINDOW`, `LINE`, `RECTANGLE`,
//! `CIRCLE`, `ARC` - which says where a label sits or draws a box round a
//! group, and carries no circuit. Reading them would put shapes on the sheet
//! that the original's own importer does not put there.

use crate::schematic_document::{Document, Point, Rotation, Sheet, WireKind};

/// How many of `LTspice`'s units make one of this editor's grid squares.
pub const UNITS_PER_SQUARE: i32 = 16;

/// What the ground flag is called in an `.asc` file.
pub const GROUND_FLAG: &str = "0";

/// What this editor calls the ground part.
pub const GROUND_PART: &str = "GND";

/// What went wrong reading one.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Error {
    /// The file does not begin with a version line, so it is not one of
    /// these.
    NotAnLtspiceSchematic,
    /// The file could not be read. The text is the system's own.
    Io(String),
}

impl std::fmt::Display for Error {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::NotAnLtspiceSchematic => {
                write!(f, "this is not an LTspice schematic")
            }
            Self::Io(what) => write!(f, "{what}"),
        }
    }
}

impl std::error::Error for Error {}

impl From<std::io::Error> for Error {
    fn from(error: std::io::Error) -> Self {
        Self::Io(error.to_string())
    }
}

/// Reads a schematic from a file.
///
/// # Errors
///
/// [`Error::Io`] if the file cannot be read and
/// [`Error::NotAnLtspiceSchematic`] if it is not one.
pub fn read_file(path: &std::path::Path) -> Result<Document, Error> {
    // LTspice writes these as UTF-16 when the sheet holds anything outside
    // Latin-1, and as plain bytes otherwise, so the mark decides.
    let bytes = std::fs::read(path)?;
    read(&decode(&bytes))
}

/// Reads a schematic from the text of one.
///
/// # Errors
///
/// [`Error::NotAnLtspiceSchematic`] if the text does not begin with a version
/// line, which every one of these does.
pub fn read(text: &str) -> Result<Document, Error> {
    let mut lines = text.lines().map(str::trim).filter(|line| !line.is_empty());
    let first = lines.next().unwrap_or_default();
    if !first.split_whitespace().next().is_some_and(is_version) {
        return Err(Error::NotAnLtspiceSchematic);
    }

    let mut sheet = Sheet::default();
    // A symbol and the attributes that follow it are one part, and the part
    // is only put down once the next thing starts.
    let mut pending: Option<PendingPart> = None;

    for line in lines {
        let mut words = line.split_whitespace();
        let Some(word) = words.next() else {
            continue;
        };
        match word {
            "SYMATTR" => {
                if let Some(part) = pending.as_mut() {
                    part.attribute(words.next().unwrap_or_default(), line);
                }
                continue;
            }
            // These belong to whatever came before and carry no circuit.
            "WINDOW" | "LINE" | "RECTANGLE" | "CIRCLE" | "ARC" | "DATAFLAG" => continue,
            _ => {}
        }

        // Anything else ends the part being read.
        if let Some(part) = pending.take() {
            part.put_down(&mut sheet);
        }

        match word {
            "WIRE" => {
                let numbers = read_numbers(&mut words, 4);
                if let [x1, y1, x2, y2] = numbers[..] {
                    sheet.draw_wire(square(x1, y1), square(x2, y2), WireKind::Wire);
                }
            }
            "FLAG" => {
                let numbers = read_numbers(&mut words, 2);
                let name = words.next().unwrap_or_default();
                if let [x, y] = numbers[..]
                    && name == GROUND_FLAG
                {
                    // Ground is a part here rather than a name on a wire.
                    sheet.place_as(
                        GROUND_PART,
                        square(x, y),
                        Rotation::default(),
                        false,
                        GROUND_PART,
                    );
                }
            }
            "SYMBOL" => {
                let kind = words.next().unwrap_or_default().to_owned();
                let numbers = read_numbers(&mut words, 2);
                let turn = words.next().unwrap_or("R0");
                if let [x, y] = numbers[..] {
                    let (rotation, mirrored) = orientation(turn);
                    pending = Some(PendingPart {
                        kind: kind_of(&kind),
                        at: square(x, y),
                        rotation,
                        mirrored,
                        name: None,
                    });
                }
            }
            _ => {}
        }
    }

    if let Some(part) = pending.take() {
        part.put_down(&mut sheet);
    }

    // What was read was not drawn by anyone, so there is nothing to save yet
    // and nothing is picked out.
    sheet.clear_selection();
    sheet.mark_saved();
    Ok(sheet.document().clone())
}

/// A symbol whose attributes have not all been read yet.
struct PendingPart {
    kind: String,
    at: Point,
    rotation: Rotation,
    mirrored: bool,
    name: Option<String>,
}

impl PendingPart {
    /// One `SYMATTR` line.
    fn attribute(&mut self, which: &str, line: &str) {
        if which.eq_ignore_ascii_case("InstName") {
            // The value is the rest of the line, which may hold spaces.
            let value = line
                .split_once(which)
                .map(|(_, rest)| rest.trim())
                .unwrap_or_default();
            if !value.is_empty() {
                self.name = Some(value.to_owned());
            }
        }
    }

    /// Puts the part on the sheet.
    fn put_down(self, sheet: &mut Sheet) {
        let label = self.name.unwrap_or_else(|| self.kind.clone());
        sheet.place_as(self.kind, self.at, self.rotation, self.mirrored, label);
    }
}

/// Whether a word is the version keyword, which starts every one of these.
fn is_version(word: &str) -> bool {
    word.eq_ignore_ascii_case("Version")
}

/// What this editor calls a symbol `LTspice` calls something else.
///
/// Only the handful whose names differ: everything else keeps the name the
/// file gives it, so a part the port has never heard of still arrives with
/// its own name rather than being dropped.
fn kind_of(name: &str) -> String {
    match name.to_lowercase().as_str() {
        "res" => "R".to_owned(),
        "cap" => "C".to_owned(),
        "ind" => "L".to_owned(),
        "diode" => "D".to_owned(),
        "voltage" => "V".to_owned(),
        "current" => "I".to_owned(),
        _ => name.to_owned(),
    }
}

/// The way round a symbol sits.
///
/// `R0` to `R270` are quarter turns, and `M0` to `M270` are the same turns
/// mirrored.
fn orientation(turn: &str) -> (Rotation, bool) {
    let mirrored = turn.starts_with('M') || turn.starts_with('m');
    let degrees: u32 = turn
        .trim_start_matches(['R', 'r', 'M', 'm'])
        .parse()
        .unwrap_or(0);
    (Rotation::from_degrees(degrees), mirrored)
}

/// A place on the sheet, in whole grid squares.
const fn square(x: i32, y: i32) -> Point {
    Point::new(nearest_square(x), nearest_square(y))
}

/// One coordinate, rounded to the nearest square rather than towards zero.
const fn nearest_square(value: i32) -> i32 {
    let half = UNITS_PER_SQUARE / 2;
    if value >= 0 {
        (value + half) / UNITS_PER_SQUARE
    } else {
        (value - half) / UNITS_PER_SQUARE
    }
}

/// The next few words, as numbers, stopping at the first that is not one.
fn read_numbers<'a>(words: &mut impl Iterator<Item = &'a str>, how_many: usize) -> Vec<i32> {
    let mut found = Vec::with_capacity(how_many);
    for _ in 0..how_many {
        match words.next().and_then(|word| word.parse().ok()) {
            Some(number) => found.push(number),
            None => break,
        }
    }
    found
}

/// The text of a file, whichever way it was written.
fn decode(bytes: &[u8]) -> String {
    if let Some(rest) = bytes.strip_prefix(&[0xFF, 0xFE]) {
        let units: Vec<u16> = rest
            .chunks_exact(2)
            .map(|pair| u16::from_le_bytes([pair[0], pair[1]]))
            .collect();
        return String::from_utf16_lossy(&units);
    }
    String::from_utf8_lossy(bytes).into_owned()
}

#[cfg(test)]
mod tests {
    use super::{Error, GROUND_PART, nearest_square, read, read_file};

    /// A divider with a source, two resistors and a ground, as `LTspice`
    /// writes one.
    const A_DIVIDER: &str = "Version 4\r\n\
        SHEET 1 880 680\r\n\
        WIRE 176 80 96 80\r\n\
        WIRE 176 160 176 80\r\n\
        WIRE 96 240 96 80\r\n\
        FLAG 96 240 0\r\n\
        SYMBOL res 160 64 R0\r\n\
        WINDOW 0 36 44 Left 2\r\n\
        SYMATTR InstName R1\r\n\
        SYMATTR Value 4.7k\r\n\
        SYMBOL res 160 144 R0\r\n\
        SYMATTR InstName R2\r\n\
        SYMATTR Value 10k\r\n\
        SYMBOL voltage 96 64 R0\r\n\
        SYMATTR InstName V1\r\n\
        SYMATTR Value 5\r\n\
        TEXT -48 216 Left 2 !.tran 1m\r\n";

    #[test]
    fn something_that_is_not_one_of_these_is_refused() {
        assert_eq!(read(""), Err(Error::NotAnLtspiceSchematic));
        assert_eq!(read("hello"), Err(Error::NotAnLtspiceSchematic));
        assert_eq!(read("SHEET 1 880 680"), Err(Error::NotAnLtspiceSchematic));
    }

    #[test]
    fn the_wires_come_across() {
        let document = read(A_DIVIDER).unwrap();
        assert_eq!(document.wires().len(), 3);

        // 176,80 in LTspice's units is 11,5 in grid squares.
        let first = &document.wires()[0];
        assert_eq!((first.from.x, first.from.y), (11, 5));
        assert_eq!((first.to.x, first.to.y), (6, 5));
    }

    #[test]
    fn each_symbol_comes_across_under_its_own_name() {
        let document = read(A_DIVIDER).unwrap();
        let parts = document.parts();

        // Three symbols and the ground. They are in the order the file lists
        // them, which puts the ground flag first, so they are found by name.
        assert_eq!(parts.len(), 4);
        let named = |label: &str| {
            parts
                .iter()
                .find(|part| part.label == label)
                .unwrap_or_else(|| panic!("{label} should have come across"))
        };
        assert_eq!(named("R1").kind, "R");
        assert_eq!(named("R2").kind, "R");
        assert_eq!(named("V1").kind, "V");
    }

    #[test]
    fn the_ground_flag_becomes_a_part_and_the_other_flags_do_not() {
        let document = read(A_DIVIDER).unwrap();
        let ground: Vec<_> = document
            .parts()
            .iter()
            .filter(|part| part.kind == GROUND_PART)
            .collect();
        assert_eq!(ground.len(), 1);
        assert_eq!((ground[0].at.x, ground[0].at.y), (6, 15));

        // A named net is a name on a wire, not a part.
        let named = read("Version 4\nFLAG 96 240 Vout\n").unwrap();
        assert!(named.parts().is_empty());
    }

    #[test]
    fn the_way_round_a_symbol_sits_comes_across() {
        let document = read(
            "Version 4\n\
             SYMBOL res 0 0 R90\n\
             SYMATTR InstName R1\n\
             SYMBOL cap 0 64 M180\n\
             SYMATTR InstName C1\n",
        )
        .unwrap();

        let parts = document.parts();
        assert_eq!(parts[0].rotation.degrees(), 90);
        assert!(!parts[0].mirrored);

        assert_eq!(parts[1].kind, "C");
        assert_eq!(parts[1].rotation.degrees(), 180);
        assert!(parts[1].mirrored);
    }

    #[test]
    fn a_symbol_with_no_name_of_its_own_is_labelled_by_its_kind() {
        let document = read("Version 4\nSYMBOL npn 0 0 R0\n").unwrap();
        let parts = document.parts();
        assert_eq!(parts.len(), 1);
        // A kind the port has never heard of keeps the name the file gives.
        assert_eq!(parts[0].kind, "npn");
        assert_eq!(parts[0].label, "npn");
    }

    #[test]
    fn the_drawing_furniture_is_left_out() {
        let document = read(
            "Version 4\n\
             LINE Normal 0 0 64 64\n\
             RECTANGLE Normal 0 0 64 64\n\
             CIRCLE Normal 0 0 64 64\n\
             ARC Normal 0 0 64 64 0 0 64 64\n\
             TEXT -48 216 Left 2 !.tran 1m\n",
        )
        .unwrap();

        assert!(document.is_empty());
    }

    #[test]
    fn a_sheet_just_read_has_nothing_to_save_and_nothing_picked_out() {
        let document = read(A_DIVIDER).unwrap();
        assert!(!document.is_modified());
        assert!(!document.has_selection());
    }

    #[test]
    fn a_coordinate_lands_on_the_nearest_square() {
        assert_eq!(nearest_square(0), 0);
        assert_eq!(nearest_square(16), 1);
        assert_eq!(nearest_square(24), 2);
        assert_eq!(nearest_square(23), 1);
        assert_eq!(nearest_square(-16), -1);
        assert_eq!(nearest_square(-24), -2);
    }

    #[test]
    fn a_file_is_read_whichever_way_it_was_written() {
        let folder = std::env::temp_dir().join(format!("tiara-ltspice-{}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        std::fs::create_dir_all(&folder).unwrap();

        let plain = folder.join("plain.asc");
        std::fs::write(&plain, A_DIVIDER).unwrap();
        assert_eq!(read_file(&plain).unwrap().parts().len(), 4);

        let wide = folder.join("wide.asc");
        let mut bytes = vec![0xFF, 0xFE];
        for unit in A_DIVIDER.encode_utf16() {
            bytes.extend_from_slice(&unit.to_le_bytes());
        }
        std::fs::write(&wide, bytes).unwrap();
        assert_eq!(read_file(&wide).unwrap().parts().len(), 4);

        let missing = folder.join("not-there.asc");
        assert!(matches!(read_file(&missing), Err(Error::Io(_))));

        let _ = std::fs::remove_dir_all(&folder);
    }
}
