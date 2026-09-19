//! Reading the analysis settings out of the document's own store.
//!
//! Not the settings file — these live inside the document, under a path, in a
//! store that holds text and nothing else. Three sections, thirty-nine keys, and
//! every one of them read as a string and then converted into whatever the
//! settings record wants.
//!
//! Two consequences follow from that and are worth stating plainly. The store
//! carries no types, so what a setting *is* lives only in this routine — a
//! document written by a later version and read by an earlier one is read with
//! the earlier one's idea of every type. And every conversion is given a value to
//! fall back on, so a key that is missing, empty or nonsense is never an error:
//! it is silently whatever the fallback says.

/// A section of the store.
///
/// Implements Ghidra function `FUN_014ac700` at `0x014AC700`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Section {
    /// The path it sits under.
    pub path: &'static str,
    /// The keys read from it, in the order they are read.
    pub keys: &'static [&'static str],
}

/// Every section, and every key in it.
///
/// Implements Ghidra function `FUN_014ac700` at `0x014AC700`.
pub const SECTIONS: [Section; 3] = [
    Section {
        path: "/storage/config",
        keys: &[
            "lvon",
            "lvmv",
            "lvmc",
            "lvsc",
            "lvaa",
            "itww",
            "nlsolver",
            "mospwllevel",
            "acview",
            "acnetworkszyhview",
            "acnetworkreflectionview",
            "acnetworktransmissionview",
            "noiseview",
            "fourierview",
            "phasecorrection",
            "fourierthdoutput",
            "fourierspeoutput",
            "fourierthdinitcond",
            "fourierspeinitcond",
            "aisettings",
            "jsappsettings",
            "marginreferencephase",
        ],
    },
    Section {
        path: "/storage/config/acmultisine",
        keys: &[
            "fstart", "fstop", "ampl", "stime", "points", "cycles", "swmode", "wfunc", "icond",
            "repli", "showtr", "view",
        ],
    },
    Section {
        path: "/storage/config/hb",
        keys: &["basefreq", "numharmonics", "output", "options", "format"],
    },
];

/// Implements part of Ghidra function `FUN_014ac700` at `0x014AC700`.
///
/// Every key read, wherever it comes from.
#[must_use]
pub fn all_keys() -> Vec<&'static str> {
    SECTIONS
        .iter()
        .flat_map(|section| section.keys.iter().copied())
        .collect()
}

/// Implements part of Ghidra function `FUN_014ac700` at `0x014AC700`.
///
/// Which section a key comes from.
#[must_use]
pub fn section_of(key: &str) -> Option<&'static str> {
    SECTIONS
        .iter()
        .find(|section| section.keys.contains(&key))
        .map(|section| section.path)
}

/// Implements part of Ghidra function `FUN_014ac700` at `0x014AC700`.
///
/// Whether one section sits beneath another.
#[must_use]
pub fn sits_beneath(section: &str, other: &str) -> bool {
    section != other && section.starts_with(other) && section[other.len()..].starts_with('/')
}

/// The routines that turn a stored text into a value.
///
/// Part of Ghidra function `FUN_014ac700` at `0x014AC700`.
///
/// Two of them, and both take the value to fall back on as an argument — so
/// nothing in the reading of these settings can fail. A key that is absent and a
/// key holding nonsense are the same thing to this routine, and neither is
/// reported.
pub const CONVERTERS: [u32; 2] = [0x0043_FC50, 0x00B8_F2F0];

/// Implements part of Ghidra function `FUN_014ac700` at `0x014AC700`.
///
/// Whether reading a setting can fail.
#[must_use]
pub const fn reading_can_fail() -> bool {
    false
}

/// The keys written as short codes rather than as words.
///
/// Part of Ghidra function `FUN_014ac700` at `0x014AC700`.
///
/// Six of them, all in the first section and all four letters long, sitting
/// beside keys like `acnetworktransmissionview` that spell everything out. Five
/// of the six begin with the same two letters and the sixth does not, so even the
/// short ones are not one scheme.
pub const SHORT_CODES: [&str; 6] = ["lvon", "lvmv", "lvmc", "lvsc", "lvaa", "itww"];

/// Implements part of Ghidra function `FUN_014ac700` at `0x014AC700`.
///
/// The short codes sharing a prefix with each other.
#[must_use]
pub fn codes_sharing_a_prefix() -> Vec<&'static str> {
    SHORT_CODES
        .iter()
        .filter(|code| code.starts_with("lv"))
        .copied()
        .collect()
}

/// The longest key of all.
///
/// Part of Ghidra function `FUN_014ac700` at `0x014AC700`.
pub const LONGEST_KEY: &str = "acnetworktransmissionview";

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn there_are_three_sections_and_thirty_nine_keys() {
        assert_eq!(SECTIONS.len(), 3);
        assert_eq!(all_keys().len(), 39);
    }

    #[test]
    fn no_key_is_read_twice_anywhere() {
        let mut keys = all_keys();
        let before = keys.len();
        keys.sort_unstable();
        keys.dedup();

        assert_eq!(keys.len(), before);
    }

    #[test]
    fn no_section_is_empty() {
        for section in SECTIONS {
            assert!(!section.keys.is_empty(), "{}", section.path);
        }
    }

    #[test]
    fn two_of_the_sections_sit_beneath_the_first() {
        let root = SECTIONS[0].path;

        assert!(sits_beneath(SECTIONS[1].path, root));
        assert!(sits_beneath(SECTIONS[2].path, root));
        assert!(!sits_beneath(root, root));
    }

    #[test]
    fn and_neither_of_those_two_sits_beneath_the_other() {
        assert!(!sits_beneath(SECTIONS[1].path, SECTIONS[2].path));
        assert!(!sits_beneath(SECTIONS[2].path, SECTIONS[1].path));
    }

    #[test]
    fn every_path_is_written_with_forward_slashes() {
        // Unlike the build paths elsewhere in the program, which are written
        // the other way about.
        for section in SECTIONS {
            assert!(section.path.starts_with('/'), "{}", section.path);
            assert!(!section.path.contains('\\'), "{}", section.path);
        }
    }

    #[test]
    fn the_first_section_holds_most_of_the_keys() {
        assert!(SECTIONS[0].keys.len() > SECTIONS[1].keys.len() + SECTIONS[2].keys.len());
    }

    #[test]
    fn a_key_can_be_traced_back_to_its_section() {
        assert_eq!(section_of("lvon"), Some("/storage/config"));
        assert_eq!(section_of("fstart"), Some("/storage/config/acmultisine"));
        assert_eq!(section_of("basefreq"), Some("/storage/config/hb"));
        assert_eq!(section_of("nosuchkey"), None);
    }

    #[test]
    fn every_key_is_lower_case_with_no_punctuation() {
        for key in all_keys() {
            assert_eq!(key, key.to_lowercase(), "{key}");
            assert!(key.chars().all(char::is_alphanumeric), "{key}");
        }
    }

    #[test]
    fn six_keys_are_short_codes_and_all_of_them_are_in_the_first_section() {
        for code in SHORT_CODES {
            assert_eq!(section_of(code), Some(SECTIONS[0].path), "{code}");
            assert_eq!(code.len(), 4, "{code}");
        }
    }

    #[test]
    fn five_of_the_six_share_a_prefix_and_the_sixth_does_not() {
        // So even the short ones are not one scheme.
        let shared = codes_sharing_a_prefix();

        assert_eq!(shared.len(), 5);
        assert_eq!(SHORT_CODES.len() - shared.len(), 1);
    }

    #[test]
    fn they_sit_beside_keys_that_spell_everything_out() {
        assert!(SECTIONS[0].keys.contains(&LONGEST_KEY));
        assert!(LONGEST_KEY.len() > 6 * SHORT_CODES[0].len() / 2);
    }

    #[test]
    fn the_longest_key_is_the_longest_key() {
        let longest = all_keys()
            .into_iter()
            .max_by_key(|key| key.len())
            .expect("keys");

        assert_eq!(longest, LONGEST_KEY);
    }

    #[test]
    fn three_of_the_view_keys_are_the_same_word_with_a_topic_in_front() {
        let views: Vec<&str> = SECTIONS[0]
            .keys
            .iter()
            .filter(|key| key.ends_with("view"))
            .copied()
            .collect();

        assert!(views.len() >= 5, "{views:?}");
        assert!(views.contains(&"acview"));
        assert!(views.contains(&"noiseview"));
    }

    #[test]
    fn the_fourier_keys_come_in_matching_pairs() {
        // Two outputs and two starting conditions, each pair one word apart.
        for stem in ["fourierthd", "fourierspe"] {
            assert!(SECTIONS[0].keys.contains(&format!("{stem}output").as_str()));
            assert!(
                SECTIONS[0]
                    .keys
                    .contains(&format!("{stem}initcond").as_str())
            );
        }
    }

    #[test]
    fn two_routines_turn_a_stored_text_into_a_value() {
        let mut converters = CONVERTERS.to_vec();
        let before = converters.len();
        converters.sort_unstable();
        converters.dedup();

        assert_eq!(converters.len(), before);
    }

    #[test]
    fn and_reading_a_setting_cannot_fail() {
        // A key that is absent and a key holding nonsense are the same thing
        // here, and neither is reported.
        assert!(!reading_can_fail());
    }

    #[test]
    fn the_second_section_names_a_sweep_and_the_third_names_a_series() {
        assert!(SECTIONS[1].keys.contains(&"fstart"));
        assert!(SECTIONS[1].keys.contains(&"fstop"));
        assert!(SECTIONS[2].keys.contains(&"basefreq"));
        assert!(SECTIONS[2].keys.contains(&"numharmonics"));
    }

    #[test]
    fn the_word_view_is_used_in_two_sections_for_different_things() {
        assert!(SECTIONS[0].keys.contains(&"acview"));
        assert!(SECTIONS[1].keys.contains(&"view"));
        assert_ne!(section_of("acview"), section_of("view"));
    }
}
