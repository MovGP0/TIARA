//! Reading back what a board layout changed.
//!
//! `Tools > PCB Tools > Backannotate...` reads a file the PCB program wrote
//! and brings its changes back to the circuit: a part renamed, a footprint
//! chosen, pins or gates swapped to make the board easier to route.
//!
//! The file is an ordinary INI, which the recovered reader gives away by
//! how it reads it - `FUN_01bb4cc0` makes a `TIniFile` over it and then:
//!
//! ```text
//! [Circuit]
//! Name=Divider            ReadString("Circuit", "Name") - which circuit
//!                         this belongs to; a different one is opened first
//! [Components]
//! R1=                     ReadSection("Components") - the parts that changed
//! C1=
//!
//! [R1]                    ReadSection(<part>) - and each key applied in turn
//! Reference=R7
//! Package=R0805
//! Pinswap=1,2
//! Gateswap=A,B
//! ```
//!
//! The four keys are the four `FUN_01bb4930` names. Of them the port can
//! act on `Reference`, because a part on the sheet has a label; the other
//! three want a footprint and a pin map that the document does not carry
//! yet, so they are read and carried rather than quietly dropped.

use std::collections::BTreeMap;
use std::path::Path;

/// The section naming the circuit the changes belong to.
pub const CIRCUIT_SECTION: &str = "Circuit";

/// The key in it that names the circuit.
pub const NAME_KEY: &str = "Name";

/// The section listing the parts that changed.
pub const COMPONENTS_SECTION: &str = "Components";

/// What one part was changed to.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Change {
    /// The part as the circuit calls it now.
    pub part: String,
    /// What it should be called instead, where the board renamed it.
    pub reference: Option<String>,
    /// The footprint the board chose for it.
    pub package: Option<String>,
    /// Pins swapped to make the board easier to route.
    pub pinswap: Option<String>,
    /// Gates swapped for the same reason.
    pub gateswap: Option<String>,
}

impl Change {
    /// Whether anything here can be brought back to the sheet.
    ///
    /// Only a rename can, until a part carries a footprint and a pin map.
    #[must_use]
    pub const fn can_be_applied(&self) -> bool {
        self.reference.is_some()
    }

    /// Whether anything here has to wait for the document to carry more.
    #[must_use]
    pub const fn waits_for_more(&self) -> bool {
        self.package.is_some() || self.pinswap.is_some() || self.gateswap.is_some()
    }
}

/// Everything one back-annotation file says.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct BackAnnotation {
    /// The circuit the changes belong to.
    pub circuit: String,
    /// One entry per part that changed, in the order the file lists them.
    pub changes: Vec<Change>,
}

/// What can go wrong reading one.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Error {
    /// The file could not be read. The text is the system's own.
    Io(String),
    /// It has no `[Circuit] Name`, so it is not one of these.
    NotABackAnnotation,
}

impl std::fmt::Display for Error {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Io(what) => write!(f, "{what}"),
            Self::NotABackAnnotation => {
                write!(f, "this is not a back-annotation file")
            }
        }
    }
}

impl std::error::Error for Error {}

impl From<std::io::Error> for Error {
    fn from(error: std::io::Error) -> Self {
        Self::Io(error.to_string())
    }
}

/// Reads a back-annotation file.
///
/// # Errors
///
/// [`Error::Io`] if it cannot be read, and [`Error::NotABackAnnotation`] if
/// it does not name a circuit - which every one of these does.
pub fn read(path: &Path) -> Result<BackAnnotation, Error> {
    let bytes = std::fs::read(path)?;
    // These are written by a board program on Windows and are single-byte
    // text; Latin-1 cannot fail.
    let text: String = bytes.iter().map(|byte| char::from(*byte)).collect();
    from_text(&text)
}

/// Reads one from the text of one.
///
/// # Errors
///
/// [`Error::NotABackAnnotation`] if it names no circuit.
pub fn from_text(text: &str) -> Result<BackAnnotation, Error> {
    let sections = sections(text);
    let circuit = sections
        .get(CIRCUIT_SECTION)
        .and_then(|keys| keys.iter().find(|(key, _)| key == NAME_KEY))
        .map(|(_, value)| value.clone())
        .ok_or(Error::NotABackAnnotation)?;

    let named: Vec<String> = sections
        .get(COMPONENTS_SECTION)
        .map(|keys| keys.iter().map(|(key, _)| key.clone()).collect())
        .unwrap_or_default();

    let changes = named
        .into_iter()
        .map(|part| {
            let keys = sections.get(&part);
            let value = |wanted: &str| -> Option<String> {
                keys?
                    .iter()
                    .find(|(key, _)| key.eq_ignore_ascii_case(wanted))
                    .map(|(_, value)| value.clone())
                    .filter(|value| !value.is_empty())
            };
            Change {
                reference: value("Reference"),
                package: value("Package"),
                pinswap: value("Pinswap"),
                gateswap: value("Gateswap"),
                part,
            }
        })
        .collect();

    Ok(BackAnnotation { circuit, changes })
}

/// The sections of an INI file, each a list of key and value in order.
///
/// A list rather than a map, because `[Components]` uses its keys as a list
/// and the order it lists them in is the order the changes are applied.
fn sections(text: &str) -> BTreeMap<String, Vec<(String, String)>> {
    let mut found: BTreeMap<String, Vec<(String, String)>> = BTreeMap::new();
    let mut section = String::new();

    for line in text.lines() {
        let line = line.trim();
        if line.is_empty() || line.starts_with(';') || line.starts_with('#') {
            continue;
        }
        if let Some(inside) = line.strip_prefix('[').and_then(|it| it.strip_suffix(']')) {
            inside.trim().clone_into(&mut section);
            found.entry(section.clone()).or_default();
            continue;
        }
        let (key, value) = line.split_once('=').unwrap_or((line, ""));
        found
            .entry(section.clone())
            .or_default()
            .push((key.trim().to_owned(), value.trim().to_owned()));
    }
    found
}

#[cfg(test)]
mod tests {
    use super::{BackAnnotation, Error, from_text, read};

    const A_FILE: &str = "[Circuit]\r\n\
        Name=Divider\r\n\
        \r\n\
        [Components]\r\n\
        R1=\r\n\
        C1=\r\n\
        \r\n\
        [R1]\r\n\
        Reference=R7\r\n\
        Package=R0805\r\n\
        \r\n\
        [C1]\r\n\
        Package=C0603\r\n\
        Pinswap=1,2\r\n\
        Gateswap=A,B\r\n";

    #[test]
    fn a_file_says_which_circuit_it_belongs_to() {
        let read_back = from_text(A_FILE).unwrap();
        assert_eq!(read_back.circuit, "Divider");
        assert_eq!(read_back.changes.len(), 2);
    }

    #[test]
    fn each_part_carries_what_the_board_changed() {
        let read_back = from_text(A_FILE).unwrap();

        let first = &read_back.changes[0];
        assert_eq!(first.part, "R1");
        assert_eq!(first.reference.as_deref(), Some("R7"));
        assert_eq!(first.package.as_deref(), Some("R0805"));
        assert!(first.can_be_applied());
        assert!(first.waits_for_more());

        let second = &read_back.changes[1];
        assert_eq!(second.part, "C1");
        assert_eq!(second.reference, None);
        assert_eq!(second.pinswap.as_deref(), Some("1,2"));
        assert_eq!(second.gateswap.as_deref(), Some("A,B"));
        // Nothing the port can do with it yet, and it says so.
        assert!(!second.can_be_applied());
        assert!(second.waits_for_more());
    }

    #[test]
    fn the_parts_come_in_the_order_the_file_lists_them() {
        let read_back = from_text(A_FILE).unwrap();
        let names: Vec<&str> = read_back
            .changes
            .iter()
            .map(|change| change.part.as_str())
            .collect();
        assert_eq!(names, ["R1", "C1"]);
    }

    #[test]
    fn a_part_named_but_never_described_changes_nothing() {
        let read_back = from_text("[Circuit]\nName=X\n[Components]\nR1=\n").unwrap();
        assert_eq!(read_back.changes.len(), 1);
        assert!(!read_back.changes[0].can_be_applied());
        assert!(!read_back.changes[0].waits_for_more());
    }

    #[test]
    fn comments_and_blank_lines_are_passed_over() {
        let read_back = from_text(
            "; written by the board program\n\
             \n\
             [Circuit]\n\
             # which circuit\n\
             Name=Divider\n",
        )
        .unwrap();
        assert_eq!(read_back.circuit, "Divider");
        assert!(read_back.changes.is_empty());
    }

    #[test]
    fn a_file_that_names_no_circuit_is_refused() {
        assert_eq!(from_text(""), Err(Error::NotABackAnnotation));
        assert_eq!(
            from_text("[Components]\nR1=\n"),
            Err(Error::NotABackAnnotation)
        );
        assert_eq!(
            from_text("not an ini file at all"),
            Err(Error::NotABackAnnotation)
        );
    }

    #[test]
    fn a_key_written_in_another_case_is_still_that_key() {
        let read_back =
            from_text("[Circuit]\nName=X\n[Components]\nR1=\n[R1]\nREFERENCE=R7\n").unwrap();
        assert_eq!(read_back.changes[0].reference.as_deref(), Some("R7"));
    }

    #[test]
    fn a_file_that_is_not_there_says_so_in_the_systems_own_words() {
        let missing = std::env::temp_dir().join("tiara-no-such-backannotation.ban");
        let _ = std::fs::remove_file(&missing);
        assert!(matches!(read(&missing), Err(Error::Io(_))));
    }

    #[test]
    fn a_file_is_read_from_disk_the_same_as_from_text() {
        let path = std::env::temp_dir().join(format!("tiara-ban-{}.ban", std::process::id()));
        std::fs::write(&path, A_FILE).unwrap();

        assert_eq!(read(&path).unwrap(), from_text(A_FILE).unwrap());
        assert_ne!(read(&path).unwrap(), BackAnnotation::default());

        let _ = std::fs::remove_file(&path);
    }
}
