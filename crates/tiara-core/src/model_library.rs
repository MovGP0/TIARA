//! Where a part's model comes from, and where it does not.
//!
//! A netlist of nothing but `R` and `C` needs no models. Anything else does:
//! `X1 1 2 3 MAX7375AXR105` means nothing to a simulator until something
//! defines `MAX7375AXR105`, and that definition lives in a library beside
//! the catalogue.
//!
//! The pairing is exact. Every one of the 674 `.tld` files in `Spicelib`
//! has a `.lib` of the same stem, and the names inside agree:
//!
//! ```text
//! 3pin_osc.tld   SUBCKT MAX7375AXR105  V+ GND Clock  <AutoShape>  [Misc]
//! 3pin_osc.lib   .SUBCKT MAX7375AXR105 V+ GND Clock
//! ```
//!
//! **Most of them are encrypted, and this does not try to read those.** Of
//! the 674 libraries installed here, 408 begin with `<Encrypted Library>`
//! and 266 are plain SPICE. The encrypted ones are the maker's own models
//! under the original's protection; the port reads the ones that are
//! readable and says plainly which are not, rather than circumventing
//! anything or pretending a part can be simulated when its model cannot be
//! had.
//!
//! What to do about the rest is not this module's decision. A simulator
//! that ships its own model packs can supply many of them, and a user may
//! have models of their own; either way the netlist names the subcircuit it
//! wants, and what defines it is a separate question.

use std::io::Read;
use std::path::{Path, PathBuf};

use crate::device_catalogue::{Entry, Kind};

/// What an encrypted library starts with.
pub const ENCRYPTED: &str = "<Encrypted Library>";

/// What a readable library is worth to a netlist.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Model {
    /// The library is there and can be read, so a netlist can include it.
    Readable {
        /// What the part is called inside it.
        name: String,
        /// The file that defines it.
        library: PathBuf,
    },
    /// The library is there and is the maker's own, under the original's
    /// protection.
    Encrypted {
        /// What the part is called, which the catalogue still says.
        name: String,
        /// The file, so that a message can name it.
        library: PathBuf,
    },
    /// Nothing was found for it.
    Missing,
}

impl Model {
    /// Whether a netlist that uses this part can be simulated as it stands.
    #[must_use]
    pub const fn can_be_simulated(&self) -> bool {
        matches!(self, Self::Readable { .. })
    }

    /// The line a netlist puts at the top to bring the model in.
    #[must_use]
    pub fn include(&self) -> Option<String> {
        match self {
            Self::Readable { library, .. } => Some(format!(".INCLUDE {}", library.display())),
            Self::Encrypted { .. } | Self::Missing => None,
        }
    }
}

/// Finds the model for a catalogue entry.
///
/// `folder` is the catalogue's own folder, which is where the libraries sit
/// beside the `.tld` files that name them.
#[must_use]
pub fn model_for(folder: &Path, entry: &Entry) -> Model {
    // A part written in VHDL has no SPICE model to find.
    if entry.kind == Kind::VhdlMacro {
        return Model::Missing;
    }
    let Some(library) = library_for(folder, &entry.source) else {
        return Model::Missing;
    };
    if is_encrypted(&library) {
        return Model::Encrypted {
            name: entry.name.clone(),
            library,
        };
    }
    if defines(&library, &entry.name) {
        Model::Readable {
            name: entry.name.clone(),
            library,
        }
    } else {
        Model::Missing
    }
}

/// The library beside a catalogue file, whatever case its ending is in.
#[must_use]
pub fn library_for(folder: &Path, catalogue_file: &Path) -> Option<PathBuf> {
    let stem = catalogue_file.file_stem()?;
    for ending in ["lib", "LIB", "Lib"] {
        let beside = folder.join(stem).with_extension(ending);
        if beside.is_file() {
            return Some(beside);
        }
    }
    None
}

/// Whether a library is the maker's own rather than readable SPICE.
#[must_use]
pub fn is_encrypted(library: &Path) -> bool {
    let Ok(file) = std::fs::File::open(library) else {
        return false;
    };
    let mut head = [0_u8; 32];
    let Ok(read) = (&file).take(32).read(&mut head) else {
        return false;
    };
    String::from_utf8_lossy(&head[..read]).contains(ENCRYPTED)
}

/// Whether a readable library defines a part by name.
#[must_use]
pub fn defines(library: &Path, name: &str) -> bool {
    let Ok(text) = std::fs::read_to_string(library) else {
        return false;
    };
    text.lines().any(|line| {
        let line = line.trim_start();
        for word in [".SUBCKT", ".MODEL"] {
            if line.len() > word.len() && line[..word.len()].eq_ignore_ascii_case(word) {
                return line[word.len()..]
                    .split_whitespace()
                    .next()
                    .is_some_and(|it| it.eq_ignore_ascii_case(name));
            }
        }
        false
    })
}

#[cfg(test)]
mod tests {
    use super::{ENCRYPTED, Model, defines, is_encrypted, library_for, model_for};
    use crate::device_catalogue::{Entry, Kind, Symbol};
    use std::path::{Path, PathBuf};

    /// A folder of this test's own. Tests run side by side and each one
    /// clears up after itself, so sharing one would have them deleting each
    /// other's files.
    fn a_folder(which: &str) -> PathBuf {
        std::env::temp_dir().join(format!("tiara-models-{}-{which}", std::process::id()))
    }

    fn an_entry(name: &str, source: &str, kind: Kind) -> Entry {
        Entry {
            kind,
            name: name.to_owned(),
            pins: Vec::new(),
            symbol: Symbol::Drawn("<AutoShape>".to_owned()),
            category: "Misc".to_owned(),
            maker: "Someone".to_owned(),
            source: PathBuf::from(source),
        }
    }

    #[test]
    fn a_readable_library_defining_the_part_can_be_included() {
        let folder = a_folder("readable");
        std::fs::create_dir_all(&folder).unwrap();
        let catalogue = folder.join("osc.tld");
        std::fs::write(&catalogue, "Maxim\n").unwrap();
        std::fs::write(
            folder.join("osc.lib"),
            "* a comment\n.SUBCKT MAX7375AXR105 V+ GND Clock\n.ENDS\n",
        )
        .unwrap();

        let found = model_for(
            &folder,
            &an_entry("MAX7375AXR105", "osc.tld", Kind::Subcircuit),
        );
        assert!(found.can_be_simulated());
        assert!(
            found
                .include()
                .is_some_and(|line| line.starts_with(".INCLUDE"))
        );

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_library_the_maker_keeps_to_itself_is_named_and_not_opened() {
        let folder = a_folder("encrypted");
        std::fs::create_dir_all(&folder).unwrap();
        std::fs::write(
            folder.join("secret.lib"),
            format!("{ENCRYPTED}\n\u{1}\u{2}\u{3}"),
        )
        .unwrap();

        let found = model_for(&folder, &an_entry("PART", "secret.tld", Kind::Subcircuit));
        assert!(matches!(found, Model::Encrypted { .. }));
        // Nothing can be included, and nothing pretends otherwise.
        assert!(!found.can_be_simulated());
        assert_eq!(found.include(), None);

        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_part_with_no_library_at_all_is_missing() {
        let folder = a_folder("missing");
        std::fs::create_dir_all(&folder).unwrap();
        let found = model_for(&folder, &an_entry("PART", "nothing.tld", Kind::Subcircuit));
        assert_eq!(found, Model::Missing);
        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_part_written_in_vhdl_has_no_spice_model_to_look_for() {
        let folder = a_folder("vhdl");
        std::fs::create_dir_all(&folder).unwrap();
        std::fs::write(folder.join("hdl.lib"), ".SUBCKT PART A B\n.ENDS\n").unwrap();

        let found = model_for(&folder, &an_entry("PART", "hdl.tld", Kind::VhdlMacro));
        assert_eq!(found, Model::Missing);
        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_library_that_does_not_define_the_part_is_not_claimed_to() {
        let folder = a_folder("other");
        std::fs::create_dir_all(&folder).unwrap();
        std::fs::write(folder.join("other.lib"), ".SUBCKT SOMETHINGELSE A B\n").unwrap();

        let found = model_for(&folder, &an_entry("PART", "other.tld", Kind::Subcircuit));
        assert_eq!(found, Model::Missing);
        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_model_card_counts_as_a_definition_as_well_as_a_subcircuit() {
        let folder = a_folder("modelcard");
        std::fs::create_dir_all(&folder).unwrap();
        std::fs::write(folder.join("diodes.lib"), ".MODEL D1N4148 D(IS=2.5n)\n").unwrap();

        let found = model_for(&folder, &an_entry("D1N4148", "diodes.tld", Kind::Model));
        assert!(found.can_be_simulated());
        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_name_in_another_case_is_still_that_name() {
        let folder = a_folder("case");
        std::fs::create_dir_all(&folder).unwrap();
        std::fs::write(folder.join("mixed.lib"), ".subckt max7375axr105 a b\n").unwrap();

        assert!(defines(&folder.join("mixed.lib"), "MAX7375AXR105"));
        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn a_library_is_found_whatever_case_its_ending_is_in() {
        let folder = a_folder("ending");
        std::fs::create_dir_all(&folder).unwrap();
        std::fs::write(folder.join("upper.LIB"), ".SUBCKT PART A\n").unwrap();

        assert!(library_for(&folder, Path::new("upper.tld")).is_some());
        assert_eq!(library_for(&folder, Path::new("none.tld")), None);
        let _ = std::fs::remove_dir_all(&folder);
    }

    #[test]
    fn the_installed_libraries_are_a_mixture_and_both_kinds_are_told_apart() {
        let Some(installation) = std::env::var_os("TIARA_TINA_HOME").map(PathBuf::from) else {
            return;
        };
        let folder = crate::device_catalogue::folder_in(&installation);
        let Ok(entries) = std::fs::read_dir(&folder) else {
            return;
        };

        let (mut encrypted, mut readable) = (0_u32, 0_u32);
        for entry in entries.flatten() {
            let path = entry.path();
            if !path
                .extension()
                .is_some_and(|it| it.eq_ignore_ascii_case("lib"))
            {
                continue;
            }
            if is_encrypted(&path) {
                encrypted += 1;
            } else {
                readable += 1;
            }
        }

        // Both kinds are there on the installation here - 408 and 266 - and
        // what matters is that neither is mistaken for the other.
        assert!(encrypted > 0, "no encrypted libraries were recognised");
        assert!(readable > 0, "no readable libraries were recognised");
    }
}
