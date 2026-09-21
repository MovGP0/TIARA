//! Writing a macro out, and reading one back.
//!
//! A macro is a circuit that stands for a part: the sheet inside it is a
//! circuit like any other, and around it go the few things that make it a
//! part - what it is called, what its instances are labelled with, and the
//! parameters it takes.
//!
//! `Tools > Export Macro...` writes one. The original writes `.TSM`, a
//! format of its own that has not been recovered, so this writes the same
//! extension - it is what someone looking for a macro will look for - with
//! the port's own contents, which are the macro written out as text. A file
//! says its format and version in the first two fields, so one the port did
//! not write is refused by name rather than misread.
//!
//! The same reasoning, and the same shape, as [`crate::schematic_file`].

use std::path::{Path, PathBuf};

use serde::{Deserialize, Serialize};

use crate::schematic_document::Document;

/// What a macro is called, without the dot.
pub const EXTENSION: &str = "tsm";

/// What the file picker calls the kind, as the original's own dialog does.
pub const FILTER_NAME: &str = "TINA Macro";

/// What every macro the port writes says it is.
const FORMAT: &str = "TIARA macro";

/// Which shape those contents are in.
const VERSION: u32 = 1;

/// A circuit that stands for a part.
#[derive(Debug, Clone, Default, PartialEq, Eq, Serialize, Deserialize)]
#[serde(default)]
pub struct Macro {
    /// What the macro is called, which is what a sheet shows where one is
    /// placed.
    pub name: String,
    /// What its instances are labelled with - `U` for a macro that stands
    /// for an integrated circuit.
    pub label: String,
    /// The parameters it takes, as the macro properties dialog writes them.
    pub parameters: String,
    /// The circuit inside it.
    pub circuit: Document,
}

/// A macro as it sits in a file.
#[derive(Debug, Serialize, Deserialize)]
struct Stored {
    format: String,
    version: u32,
    #[serde(flatten)]
    macro_itself: Macro,
}

/// What can go wrong on the way to or from a file.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Error {
    /// The file could not be read or written. The text is the system's own.
    Io(String),
    /// The file is not one the port wrote.
    NotAMacro,
    /// The file was written by a later version than this one understands.
    FromALaterVersion(u32),
}

impl std::fmt::Display for Error {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Io(what) => write!(f, "{what}"),
            Self::NotAMacro => write!(f, "this is not a macro this version can read"),
            Self::FromALaterVersion(version) => {
                write!(f, "this macro was written by a later version ({version})")
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

/// Reads a macro.
///
/// # Errors
///
/// [`Error::Io`] if the file cannot be read, [`Error::NotAMacro`] if it is
/// not one the port wrote, and [`Error::FromALaterVersion`] if it was
/// written by a version that knows more than this one.
pub fn read(path: &Path) -> Result<Macro, Error> {
    let text = std::fs::read_to_string(path)?;
    let stored: Stored = serde_json::from_str(&text).map_err(|_| Error::NotAMacro)?;
    if stored.format != FORMAT {
        return Err(Error::NotAMacro);
    }
    if stored.version > VERSION {
        return Err(Error::FromALaterVersion(stored.version));
    }
    Ok(stored.macro_itself)
}

/// Writes a macro, making the folder it goes in if it is not there.
///
/// # Errors
///
/// [`Error::Io`] if the folder cannot be made or the file cannot be
/// written.
pub fn write(path: &Path, what: &Macro) -> Result<(), Error> {
    if let Some(directory) = path
        .parent()
        .filter(|directory| !directory.as_os_str().is_empty())
    {
        std::fs::create_dir_all(directory)?;
    }
    let stored = Stored {
        format: FORMAT.to_owned(),
        version: VERSION,
        macro_itself: what.clone(),
    };
    let text =
        serde_json::to_string_pretty(&stored).map_err(|error| Error::Io(error.to_string()))?;
    std::fs::write(path, text)?;
    Ok(())
}

/// The path with the macro extension on it, where it has none of its own.
#[must_use]
pub fn with_extension(path: &Path) -> PathBuf {
    if path.extension().is_some() {
        return path.to_path_buf();
    }
    path.with_extension(EXTENSION)
}

#[cfg(test)]
mod tests {
    use super::{EXTENSION, Error, Macro, read, with_extension, write};
    use crate::schematic_document::{Point, Sheet, WireKind};
    use std::path::{Path, PathBuf};

    fn a_path(name: &str) -> PathBuf {
        std::env::temp_dir().join(format!("tiara-macro-{}-{name}.tsm", std::process::id()))
    }

    fn a_macro() -> Macro {
        let mut sheet = Sheet::default();
        sheet.place("R", Point::new(2, 2));
        sheet.place("C", Point::new(6, 2));
        sheet.draw_wire(Point::new(2, 2), Point::new(6, 2), WireKind::Wire);

        Macro {
            name: "Divider".to_owned(),
            label: "U".to_owned(),
            parameters: "R=1k".to_owned(),
            circuit: sheet.document().clone(),
        }
    }

    #[test]
    fn what_was_written_is_what_comes_back() {
        let path = a_path("round-trip");
        let written = a_macro();
        write(&path, &written).unwrap();

        let read_back = read(&path).unwrap();
        assert_eq!(read_back.name, "Divider");
        assert_eq!(read_back.label, "U");
        assert_eq!(read_back.parameters, "R=1k");
        assert_eq!(read_back.circuit.parts().len(), 2);
        assert_eq!(read_back.circuit.wires().len(), 1);

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn a_macro_read_back_has_nothing_to_save_and_nothing_picked_out() {
        let path = a_path("clean");
        let mut what = a_macro();
        // Whatever was going on when it was written is not part of it.
        assert!(what.circuit.is_modified());
        what.circuit = what.circuit.clone();
        write(&path, &what).unwrap();

        let read_back = read(&path).unwrap();
        assert!(!read_back.circuit.is_modified());
        assert!(!read_back.circuit.has_selection());

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn a_file_the_port_did_not_write_is_refused_rather_than_misread() {
        let path = a_path("foreign");
        std::fs::write(&path, "bytes from the original's own format").unwrap();
        assert_eq!(read(&path), Err(Error::NotAMacro));

        std::fs::write(&path, r#"{"format":"something else","version":1}"#).unwrap();
        assert_eq!(read(&path), Err(Error::NotAMacro));

        let _ = std::fs::remove_file(&path);
    }

    #[test]
    fn a_macro_from_a_later_version_is_refused_by_name() {
        let path = a_path("later");
        std::fs::write(&path, r#"{"format":"TIARA macro","version":99}"#).unwrap();
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
    fn a_name_without_an_extension_gets_the_macro_one() {
        assert_eq!(
            with_extension(Path::new("divider")),
            PathBuf::from(format!("divider.{EXTENSION}"))
        );
        assert_eq!(
            with_extension(Path::new("divider.old")),
            PathBuf::from("divider.old")
        );
    }

    #[test]
    fn a_macro_of_nothing_still_writes_and_reads() {
        let path = a_path("empty");
        write(&path, &Macro::default()).unwrap();

        let read_back = read(&path).unwrap();
        assert!(read_back.name.is_empty());
        assert!(read_back.circuit.is_empty());

        let _ = std::fs::remove_file(&path);
    }
}
