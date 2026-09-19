//! Turning an old settings file into the test-bench document the rest reads.
//!
//! The bench was once described by an ini file and is now described by a
//! document. This is the bridge, and it is a one-way one: the document is
//! written back over the file it was read from, so a bench is converted once
//! and is a document ever after.
//!
//! The shape it produces is the shape everything downstream expects — a
//! `testbench` element holding a `testcase` for every entry of every section
//! but the first — so reading this is the quickest way to see what the
//! readers are reading.

/// The element everything hangs from.
///
/// Part of Ghidra function `FUN_012f2c80` at `0x012F2C80`.
pub const DOCUMENT_ELEMENT: &str = "testbench";

/// The element each entry becomes.
///
/// Part of Ghidra function `FUN_012f2c80` at `0x012F2C80`.
pub const CASE_ELEMENT: &str = "testcase";

/// What the document declares itself to be.
///
/// Part of Ghidra function `FUN_012f2c80` at `0x012F2C80`.
pub const XML_DECLARATION: &str = "version=\"1.0\" encoding=\"UTF-8\"";

/// The section the folders are read from.
///
/// Part of Ghidra function `FUN_012f2c80` at `0x012F2C80`.
pub const MAIN_SECTION: &str = "Main";

/// What the bench's own folder is called in the file.
///
/// Part of Ghidra function `FUN_012f2c80` at `0x012F2C80`.
pub const ROOT_FOLDER_KEY: &str = "RootFolder";

/// And in the document.
///
/// Part of Ghidra function `FUN_012f2c80` at `0x012F2C80`.
pub const ROOT_FOLDER_ATTRIBUTE: &str = "rootFolder";

/// What the results folder is called in the file.
///
/// Part of Ghidra function `FUN_012f2c80` at `0x012F2C80`.
pub const RESULT_FOLDER_KEY: &str = "ResultFolder";

/// And in the document.
///
/// Part of Ghidra function `FUN_012f2c80` at `0x012F2C80`.
pub const RESULT_FOLDER_ATTRIBUTE: &str = "resultFolder";

/// What a case's section becomes.
///
/// Part of Ghidra function `FUN_012f2c80` at `0x012F2C80`.
pub const FOLDER_ATTRIBUTE: &str = "folder";

/// What its entry name becomes.
///
/// Part of Ghidra function `FUN_012f2c80` at `0x012F2C80`.
pub const CIRCUIT_ATTRIBUTE: &str = "circuit";

/// How many sections are passed over before the cases begin.
///
/// Part of Ghidra function `FUN_012f2c80` at `0x012F2C80`.
///
/// One — and by position rather than by name. The section holding the folders
/// is skipped because it is first, not because it is called `Main`, so a file
/// whose sections come in another order loses its first section's cases and
/// gains a folder called `Main`.
pub const SKIPPED_SECTIONS: usize = 1;

/// One test case as the document records it.
///
/// Part of Ghidra function `FUN_012f2c80` at `0x012F2C80`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BenchCase {
    /// The section the entry came from.
    pub folder: String,
    /// The entry's own name.
    pub circuit: String,
    /// The entry's value, which says what to do with the circuit.
    ///
    /// Handed on to Ghidra function `FUN_012f2780` at `0x012F2780`, which
    /// takes it apart into further attributes of the same element. That is a
    /// separate port; this carries the text to it.
    pub command: String,
}

/// A whole bench as the document records it.
///
/// Part of Ghidra function `FUN_012f2c80` at `0x012F2C80`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BenchDocument {
    /// Where the bench keeps its circuits.
    pub root_folder: String,
    /// Where it puts what it produces.
    pub result_folder: String,
    /// Every case, in the order the sections and entries came in.
    pub cases: Vec<BenchCase>,
}

/// What reading the old file needs.
///
/// Part of Ghidra function `FUN_012f2c80` at `0x012F2C80`.
pub trait BenchIniHost {
    /// Every section, in the order they appear.
    fn sections(&self) -> Vec<String>;

    /// Every entry name of one section, in order.
    fn keys(&self, section: &str) -> Vec<String>;

    /// One entry's value, empty where there is none.
    fn read_string(&self, section: &str, key: &str) -> String;
}

/// Implements Ghidra function `FUN_012f2c80` at `0x012F2C80`.
///
/// Reads the old settings file and builds the document that replaces it.
///
/// The results folder falls back to the bench's own when the file does not say
/// — and it falls back to the *attribute already written*, read back out of
/// the half-built document rather than out of the variable it came from, so
/// the two are the same by construction rather than by copying.
///
/// Every section but the first becomes a folder, and every entry of it a case.
/// The skip is by position: the first section is passed over whatever it is
/// called, which is only the same as skipping `Main` while `Main` comes first.
pub fn convert_bench_settings<Host: BenchIniHost>(host: &Host) -> BenchDocument {
    let root_folder = host.read_string(MAIN_SECTION, ROOT_FOLDER_KEY);
    let named_result = host.read_string(MAIN_SECTION, RESULT_FOLDER_KEY);
    let result_folder = if named_result.is_empty() {
        root_folder.clone()
    } else {
        named_result
    };

    let sections = host.sections();
    let mut cases = Vec::new();
    for folder in sections.into_iter().skip(SKIPPED_SECTIONS) {
        for circuit in host.keys(&folder) {
            let command = host.read_string(&folder, &circuit);
            cases.push(BenchCase {
                folder: folder.clone(),
                circuit,
                command,
            });
        }
    }

    BenchDocument {
        root_folder,
        result_folder,
        cases,
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Settings {
        sections: Vec<(String, Vec<(String, String)>)>,
    }

    impl Settings {
        fn with(sections: &[(&str, &[(&str, &str)])]) -> Self {
            Self {
                sections: sections
                    .iter()
                    .map(|(name, entries)| {
                        (
                            (*name).to_owned(),
                            entries
                                .iter()
                                .map(|(key, value)| ((*key).to_owned(), (*value).to_owned()))
                                .collect(),
                        )
                    })
                    .collect(),
            }
        }
    }

    impl BenchIniHost for Settings {
        fn sections(&self) -> Vec<String> {
            self.sections.iter().map(|(name, _)| name.clone()).collect()
        }

        fn keys(&self, section: &str) -> Vec<String> {
            self.sections
                .iter()
                .find(|(name, _)| name == section)
                .map(|(_, entries)| entries.iter().map(|(key, _)| key.clone()).collect())
                .unwrap_or_default()
        }

        fn read_string(&self, section: &str, key: &str) -> String {
            self.sections
                .iter()
                .find(|(name, _)| name == section)
                .and_then(|(_, entries)| entries.iter().find(|(held, _)| held == key))
                .map(|(_, value)| value.clone())
                .unwrap_or_default()
        }
    }

    fn bench() -> Settings {
        Settings::with(&[
            (
                "Main",
                &[("RootFolder", r"D:\bench"), ("ResultFolder", r"D:\out")],
            ),
            ("filters", &[("lowpass", "Compare"), ("highpass", "Save")]),
            ("sources", &[("pulse", "Save")]),
        ])
    }

    #[test]
    fn the_two_folders_come_from_the_first_section() {
        let document = convert_bench_settings(&bench());

        assert_eq!(document.root_folder, r"D:\bench");
        assert_eq!(document.result_folder, r"D:\out");
    }

    #[test]
    fn the_results_folder_falls_back_to_the_benchs_own() {
        let settings = Settings::with(&[("Main", &[("RootFolder", r"D:\bench")])]);
        let document = convert_bench_settings(&settings);

        assert_eq!(document.result_folder, document.root_folder);
    }

    #[test]
    fn a_bench_with_no_folders_at_all_has_both_empty() {
        let settings = Settings::with(&[("Main", &[])]);
        let document = convert_bench_settings(&settings);

        assert_eq!(document.root_folder, "");
        assert_eq!(document.result_folder, "");
    }

    #[test]
    fn every_entry_of_every_later_section_becomes_a_case() {
        let document = convert_bench_settings(&bench());

        assert_eq!(document.cases.len(), 3);
    }

    #[test]
    fn a_case_takes_its_folder_from_the_section_and_its_circuit_from_the_entry() {
        let document = convert_bench_settings(&bench());

        assert_eq!(
            document.cases[0],
            BenchCase {
                folder: "filters".to_owned(),
                circuit: "lowpass".to_owned(),
                command: "Compare".to_owned(),
            }
        );
    }

    #[test]
    fn the_cases_come_in_the_order_the_file_has_them() {
        let document = convert_bench_settings(&bench());
        let circuits: Vec<&str> = document
            .cases
            .iter()
            .map(|case| case.circuit.as_str())
            .collect();

        assert_eq!(circuits, ["lowpass", "highpass", "pulse"]);
    }

    #[test]
    fn the_first_section_is_skipped_by_position_rather_than_by_name() {
        // The folders section is not first here, so it is read for its
        // folders AND turned into cases, while the real first section is
        // dropped.
        let settings = Settings::with(&[
            ("filters", &[("lowpass", "Compare")]),
            ("Main", &[("RootFolder", r"D:\bench")]),
        ]);
        let document = convert_bench_settings(&settings);

        assert_eq!(document.root_folder, r"D:\bench");
        assert_eq!(document.cases.len(), 1);
        assert_eq!(document.cases[0].folder, "Main");
        assert_eq!(document.cases[0].circuit, "RootFolder");
    }

    #[test]
    fn a_file_with_only_its_first_section_yields_no_cases() {
        let settings = Settings::with(&[("Main", &[("RootFolder", r"D:\bench")])]);

        assert!(convert_bench_settings(&settings).cases.is_empty());
    }

    #[test]
    fn a_file_with_nothing_in_it_yields_nothing() {
        let document = convert_bench_settings(&Settings::default());

        assert_eq!(document.root_folder, "");
        assert!(document.cases.is_empty());
    }

    #[test]
    fn an_empty_later_section_contributes_no_cases_and_no_error() {
        let settings = Settings::with(&[("Main", &[]), ("empty", &[]), ("one", &[("a", "Save")])]);
        let document = convert_bench_settings(&settings);

        assert_eq!(document.cases.len(), 1);
        assert_eq!(document.cases[0].folder, "one");
    }

    #[test]
    fn the_attribute_names_differ_from_the_keys_they_come_from() {
        // The file spells them one way and the document another.
        assert_ne!(ROOT_FOLDER_KEY, ROOT_FOLDER_ATTRIBUTE);
        assert_ne!(RESULT_FOLDER_KEY, RESULT_FOLDER_ATTRIBUTE);
        assert!(ROOT_FOLDER_KEY.starts_with('R'));
        assert!(ROOT_FOLDER_ATTRIBUTE.starts_with('r'));
    }

    #[test]
    fn the_shape_produced_is_the_shape_the_readers_expect() {
        // The finder at 0x01308D60 selects /testbench/testcase and asks each
        // for a folder and a circuit.
        assert_eq!(DOCUMENT_ELEMENT, "testbench");
        assert_eq!(CASE_ELEMENT, "testcase");
        assert_eq!(FOLDER_ATTRIBUTE, "folder");
        assert_eq!(CIRCUIT_ATTRIBUTE, "circuit");
    }
}
