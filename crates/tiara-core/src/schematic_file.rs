//! Reading and writing a circuit.
//!
//! The original writes `.TSC`, a binary format of its own that has not been
//! recovered. The port writes the same extension - it is what the rest of the
//! application already expects a circuit to be called, and what someone
//! looking for their circuits will look for - but its own contents, which are
//! the sheet written out as text. A file names its format and its version in
//! the first two fields, so a file the port did not write is refused by name
//! rather than misread, and a file from a later version is refused rather than
//! quietly losing whatever that version added.
//!
//! Text rather than binary because a schematic small enough to draw by hand is
//! small enough to write out as text, and a format that can be read without
//! the program that wrote it is worth more than the bytes it costs.

use std::fmt;
use std::path::{Path, PathBuf};

use serde::{Deserialize, Serialize};

use crate::schematic_document::Document;

/// What a circuit is called, without the dot.
pub const EXTENSION: &str = "tsc";

/// What the file picker calls the kind, as the original's own dialog does.
pub const FILTER_NAME: &str = "TINA Circuit";

/// What every file the port writes says it is.
const FORMAT: &str = "TIARA circuit";

/// Which shape those contents are in.
///
/// Raised only when an older file could no longer be read as it stands.
const VERSION: u32 = 1;

/// A circuit as it sits in a file.
#[derive(Debug, Serialize, Deserialize)]
struct Stored {
    format: String,
    version: u32,
    document: Document,
}

/// What can go wrong on the way to or from a file.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Error {
    /// The file could not be read or written. The text is the system's own.
    Io(String),
    /// The file is not one the port wrote.
    ///
    /// A circuit written by the original is the ordinary case here: the port
    /// cannot read those yet.
    NotACircuit,
    /// The file was written by a later version than this one understands.
    FromALaterVersion(u32),
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Io(what) => write!(f, "{what}"),
            Self::NotACircuit => write!(f, "this is not a circuit this version can read"),
            Self::FromALaterVersion(version) => {
                write!(f, "this circuit was written by a later version ({version})")
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

/// Reads a circuit.
///
/// # Errors
///
/// [`Error::Io`] if the file cannot be read, [`Error::NotACircuit`] if it is
/// not one the port wrote, and [`Error::FromALaterVersion`] if it was written
/// by a version that knows more than this one.
pub fn read(path: &Path) -> Result<Document, Error> {
    let text = std::fs::read_to_string(path)?;
    let stored: Stored = serde_json::from_str(&text).map_err(|_| Error::NotACircuit)?;
    if stored.format != FORMAT {
        return Err(Error::NotACircuit);
    }
    if stored.version > VERSION {
        return Err(Error::FromALaterVersion(stored.version));
    }
    Ok(stored.document)
}

/// Writes a circuit, making the folder it goes in if it is not there.
///
/// # Errors
///
/// [`Error::Io`] if the folder cannot be made or the file cannot be written.
pub fn write(path: &Path, document: &Document) -> Result<(), Error> {
    if let Some(directory) = path
        .parent()
        .filter(|directory| !directory.as_os_str().is_empty())
    {
        std::fs::create_dir_all(directory)?;
    }
    let stored = Stored {
        format: FORMAT.to_owned(),
        version: VERSION,
        document: document.clone(),
    };
    let text =
        serde_json::to_string_pretty(&stored).map_err(|error| Error::Io(error.to_string()))?;
    std::fs::write(path, text)?;
    Ok(())
}

/// The path with the circuit extension on it, where it has none of its own.
///
/// A native save dialog hands back whatever was typed, and someone typing a
/// name rarely types the extension.
#[must_use]
pub fn with_extension(path: &Path) -> PathBuf {
    if path.extension().is_some() {
        return path.to_path_buf();
    }
    path.with_extension(EXTENSION)
}

#[cfg(test)]
mod tests {
    use super::{EXTENSION, Error, read, with_extension, write};
    use crate::schematic_document::{Point, Sheet, WireKind};
    use std::path::{Path, PathBuf};

    /// A path of its own for each test, so they do not tread on each other.
    fn a_path(name: &str) -> PathBuf {
        std::env::temp_dir().join(format!("tiara-circuit-{}-{name}.tsc", std::process::id()))
    }

    fn a_sheet() -> Sheet {
        let mut sheet = Sheet::default();
        sheet.place("R", Point::new(4, 4));
        sheet.place("C", Point::new(8, 4));
        sheet.draw_wire(Point::new(4, 4), Point::new(8, 4), WireKind::Wire);
        sheet
    }

    #[test]
    fn what_was_written_is_what_comes_back() {
        let path = a_path("round-trip");
        let sheet = a_sheet();
        write(&path, sheet.document()).unwrap();

        let read_back = read(&path).unwrap();
        assert_eq!(read_back.parts().len(), 2);
        assert_eq!(read_back.parts()[0].kind, "R");
        assert_eq!(read_back.parts()[1].label, "C1");
        assert_eq!(read_back.wires().len(), 1);

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn a_sheet_read_back_has_nothing_to_save_and_nothing_picked_out() {
        let path = a_path("clean");
        let mut sheet = a_sheet();
        sheet.select_all();
        assert!(sheet.document().is_modified());
        assert!(sheet.document().has_selection());
        write(&path, sheet.document()).unwrap();

        let read_back = read(&path).unwrap();
        assert!(!read_back.is_modified());
        assert!(!read_back.has_selection());

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn ids_carry_over_so_the_next_part_does_not_collide() {
        let path = a_path("ids");
        let sheet = a_sheet();
        let last = sheet.document().parts().last().unwrap().id;
        write(&path, sheet.document()).unwrap();

        let mut read_back = Sheet::holding(read(&path).unwrap());
        let next = read_back.place("L", Point::new(12, 4));
        assert_ne!(next, last);
        assert_eq!(read_back.document().parts().len(), 3);

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn a_file_the_port_did_not_write_is_refused_rather_than_misread() {
        let path = a_path("foreign");
        std::fs::write(&path, "bytes of the original's own, which are not text").unwrap();
        assert_eq!(read(&path), Err(Error::NotACircuit));

        // Text that parses but says it is something else is refused too.
        std::fs::write(&path, r#"{"format":"something else","version":1}"#).unwrap();
        assert_eq!(read(&path), Err(Error::NotACircuit));

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn a_file_from_a_later_version_is_refused_by_name() {
        let path = a_path("later");
        std::fs::write(
            &path,
            r#"{"format":"TIARA circuit","version":99,"document":{}}"#,
        )
        .unwrap();
        assert_eq!(read(&path), Err(Error::FromALaterVersion(99)));

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn a_file_that_is_not_there_says_so_in_the_systems_own_words() {
        let path = a_path("missing");
        let _ = std::fs::remove_file(&path);
        assert!(matches!(read(&path), Err(Error::Io(_))));
    }

    #[test]
    fn a_name_without_an_extension_gets_the_circuit_one() {
        assert_eq!(
            with_extension(Path::new("circuit")),
            PathBuf::from(format!("circuit.{EXTENSION}"))
        );
        // One that names its own is left alone, even an unexpected one.
        assert_eq!(
            with_extension(Path::new("circuit.old")),
            PathBuf::from("circuit.old")
        );
    }

    #[test]
    fn a_folder_that_is_not_there_is_made_on_the_way() {
        let folder = std::env::temp_dir().join(format!("tiara-new-{}", std::process::id()));
        let _ = std::fs::remove_dir_all(&folder);
        let path = folder.join("deeper").join("circuit.tsc");

        write(&path, a_sheet().document()).unwrap();
        assert!(path.exists());

        let _ = std::fs::remove_dir_all(&folder);
    }
}
