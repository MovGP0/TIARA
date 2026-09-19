//! Finding the AVR toolchain and building the commands that drive it.
//!
//! Where the compiler lives, which device-family pack describes the part, and
//! what the compiler, the linker and the object copier are told. It is all
//! built out of paths joined end to end, and every one of the four checks along
//! the way can refuse.
//!
//! The part of it worth reading twice is how the family is chosen. The name of
//! the part is searched for two words, and the two searches are not exclusive of
//! one another — both run, and the second overwrites what the first found. So a
//! part whose name held both would be built against the second pack whatever it
//! really was, and nothing would say so.

/// Where the tools sit under the installation.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
pub const TOOLCHAIN_PATH: &str = "toolchain\\avr8\\avr8-gnu-toolchain\\bin";

/// The four tools that are looked for.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
///
/// All four have to be there. The check is one message for all of them, so a
/// missing tool is reported as a bad installation rather than as a missing tool.
pub const TOOLS: [&str; 4] = [
    "avr-gcc.exe",
    "avr-objcopy.exe",
    "avr-objdump.exe",
    "avr-size.exe",
];

/// Where the device-family packs sit.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
pub const PACKS_PATH: &str = "Packs\\atmel";

/// The two families of part that can be built for.
///
/// Implements Ghidra function `FUN_0108e410` at `0x0108E410`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Family {
    /// The small parts.
    Tiny,
    /// The larger ones.
    Mega,
}

/// The word looked for in the part name, and the pack it chooses.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
///
/// The word is looked for **anywhere** in the name, not at the front — which is
/// what lets a part called `atmega328p` be recognised at all, since the word
/// sits three characters in.
pub const FAMILY_PACKS: [(Family, &str, &str); 2] = [
    (Family::Tiny, "tiny", "ATtiny_DFP\\"),
    (Family::Mega, "mega", "ATmega_DFP\\"),
];

/// The names that are replaced before the family is looked for.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
///
/// Two, tested one after the other rather than looked up together, and the
/// second test runs on whatever the first left behind. One of them is not a part
/// at all but the name of a board, so the board is turned into the part it
/// carries before anything else happens.
pub const PART_ALIASES: [(&str, &str); 2] =
    [("wifi", "atmega328p"), ("atmega328p_32", "atmega328p")];

/// Implements part of Ghidra function `FUN_0108e410` at `0x0108E410`.
///
/// What a part name is turned into before the family is chosen.
#[must_use]
pub fn settle_part(name: &str) -> String {
    let mut settled = name.to_owned();
    for (from, to) in PART_ALIASES {
        if settled == from {
            to.clone_into(&mut settled);
        }
    }
    settled
}

/// Implements Ghidra function `FUN_0108e410` at `0x0108E410`.
///
/// Which pack a part name chooses.
///
/// Both words are searched for and neither search stops the other, so a name
/// holding both is answered with the second. That is the recovered behaviour and
/// not a tidy reading of it: the second assignment simply overwrites the first,
/// and nothing compares them or complains.
#[must_use]
pub fn pack_for(part: &str) -> Option<&'static str> {
    let mut chosen = None;
    for (_, word, pack) in FAMILY_PACKS {
        if part.contains(word) {
            chosen = Some(pack);
        }
    }
    chosen
}

/// Implements part of Ghidra function `FUN_0108e410` at `0x0108E410`.
///
/// Whether a part name holds both words, so that the order of the tests decides
/// which pack it gets.
#[must_use]
pub fn both_words_match(part: &str) -> bool {
    FAMILY_PACKS
        .iter()
        .filter(|(_, word, _)| part.contains(word))
        .count()
        > 1
}

/// What is said when neither word is found.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
///
/// A sentence with no subject. It names what is supported and leaves the reader
/// to work out that what they asked for is not.
pub const UNSUPPORTED_FAMILY: &str = "Tiny or Mega supported";

/// The four refusals about the installation.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
///
/// Two of them are the same sentence raised from two different places, and the
/// other two say the same thing with a word in brackets to tell them apart. So
/// four checks produce three distinct messages, and one of those three cannot
/// say which of its two checks failed.
pub const PATH_REFUSALS: [&str; 4] = [
    "Invalid Atmel Studio path",
    "Invalid Atmel Studio path",
    "Invalid Atmel Studio path (include)",
    "Invalid Atmel Studio path (general path)",
];

/// What is said when the pack folder is missing.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
///
/// One message per family, each naming its family in brackets — so these two are
/// told apart where the installation checks are not.
pub const MISSING_PACK: [(Family, &str); 2] = [
    (Family::Tiny, "DFP directory not found (tiny)"),
    (Family::Mega, "DFP directory not found (mega)"),
];

/// Implements part of Ghidra function `FUN_0108e410` at `0x0108E410`.
///
/// The refusals that cannot say which check produced them.
#[must_use]
pub fn ambiguous_refusals() -> Vec<&'static str> {
    let mut found: Vec<&'static str> = PATH_REFUSALS
        .iter()
        .filter(|message| {
            PATH_REFUSALS
                .iter()
                .filter(|other| other == message)
                .count()
                > 1
        })
        .copied()
        .collect();
    found.sort_unstable();
    found.dedup();
    found
}

/// What is offered when there is no path set at all.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
///
/// The only one of the messages that says what to do about it, and it names the
/// place in the menus rather than leaving the reader to find it.
pub const NO_PATH_SET: &str = "Configure Atmel Studio path in Analysis/Options/Advanced";

/// What the compiler is told first.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
///
/// The debug define is given whether or not anything is being debugged.
pub const COMPILE_PREFIX: &str = "-x c -funsigned-char -funsigned-bitfields -DDEBUG ";

/// What it is told after the includes.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
pub const COMPILE_SUFFIX: &str = "-c -std=gnu99 -MD -MP -MF ";

/// The folder everything is written into.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
///
/// Named outright, with a backslash, and the same folder the other toolchain
/// builder in this program uses — so two unrelated build paths agree on a
/// hard-coded name that neither of them can be told to change.
pub const OUTPUT_FOLDER: &str = "Debug\\";

/// What the linker is told to write its map to.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
pub const MAP_FLAG: &str = "-Wl,-Map=\"";

/// The endings of the three files a build leaves.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
pub const OUTPUT_SUFFIXES: [&str; 3] = [".elf", ".map", ".hex"];

/// Where the include folder sits under a pack.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
pub const PACK_INCLUDE: &str = "\\include";

/// Where the part description sits under it.
///
/// Part of Ghidra function `FUN_0108e410` at `0x0108E410`.
pub const PACK_DEVICE: &str = "\\gcc\\dev\\";

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn four_tools_are_looked_for_and_all_of_them_are_named() {
        assert_eq!(TOOLS.len(), 4);
        for tool in TOOLS {
            assert!(tool.starts_with("avr-"), "{tool}");
            // The recovered names are lower case exactly.
            assert_eq!(&tool[tool.len() - 4..], ".exe", "{tool}");
        }
    }

    #[test]
    fn a_board_name_is_turned_into_the_part_it_carries() {
        assert_eq!(settle_part("wifi"), "atmega328p");
    }

    #[test]
    fn and_one_part_name_is_turned_into_another() {
        assert_eq!(settle_part("atmega328p_32"), "atmega328p");
    }

    #[test]
    fn a_name_that_is_neither_is_left_alone() {
        assert_eq!(settle_part("attiny85"), "attiny85");
        assert_eq!(settle_part(""), "");
    }

    #[test]
    fn the_two_replacements_are_tested_one_after_the_other() {
        // The second runs on whatever the first left behind, so the order is
        // part of the behaviour.
        assert_eq!(PART_ALIASES.len(), 2);
        assert_eq!(PART_ALIASES[0].1, PART_ALIASES[1].1);
    }

    #[test]
    fn the_family_word_is_looked_for_anywhere_in_the_name() {
        // Which is what lets a part called atmega328p be recognised at all,
        // since the word sits three characters in.
        assert_eq!(pack_for("atmega328p"), Some("ATmega_DFP\\"));
        assert!(!"atmega328p".starts_with("mega"));
    }

    #[test]
    fn a_small_part_chooses_the_other_pack() {
        assert_eq!(pack_for("attiny85"), Some("ATtiny_DFP\\"));
    }

    #[test]
    fn a_name_holding_neither_word_chooses_nothing() {
        assert_eq!(pack_for("at90can128"), None);
        assert_eq!(pack_for(""), None);
    }

    #[test]
    fn a_name_holding_both_words_is_answered_with_the_second() {
        // Both searches run and neither stops the other, so the second simply
        // overwrites the first.
        assert!(both_words_match("attiny_megasomething"));
        assert_eq!(pack_for("attiny_megasomething"), Some("ATmega_DFP\\"));
    }

    #[test]
    fn and_nothing_complains_when_that_happens() {
        // The only complaint is for a name that matched nothing at all.
        assert!(pack_for("attiny_megasomething").is_some());
    }

    #[test]
    fn an_ordinary_name_matches_only_one_word() {
        assert!(!both_words_match("atmega328p"));
        assert!(!both_words_match("attiny85"));
    }

    #[test]
    fn the_two_packs_are_named_differently_from_the_words_that_choose_them() {
        for (_, word, pack) in FAMILY_PACKS {
            assert!(!pack.starts_with(word), "{word} {pack}");
            assert!(pack.to_lowercase().contains(word), "{word} {pack}");
        }
    }

    #[test]
    fn four_checks_on_the_installation_produce_three_distinct_messages() {
        let mut distinct = PATH_REFUSALS.to_vec();
        distinct.sort_unstable();
        distinct.dedup();

        assert_eq!(PATH_REFUSALS.len(), 4);
        assert_eq!(distinct.len(), 3);
    }

    #[test]
    fn and_one_of_the_three_cannot_say_which_check_produced_it() {
        assert_eq!(ambiguous_refusals(), ["Invalid Atmel Studio path"]);
    }

    #[test]
    fn the_other_two_are_told_apart_by_a_word_in_brackets() {
        let bracketed: Vec<&str> = PATH_REFUSALS
            .iter()
            .filter(|message| message.contains('('))
            .copied()
            .collect();

        assert_eq!(bracketed.len(), 2);
        assert_ne!(bracketed[0], bracketed[1]);
    }

    #[test]
    fn the_missing_pack_messages_are_told_apart_where_the_path_ones_are_not() {
        let messages: Vec<&str> = MISSING_PACK.iter().map(|(_, held)| *held).collect();

        assert_ne!(messages[0], messages[1]);
        for message in messages {
            assert!(message.contains('('), "{message}");
        }
    }

    #[test]
    fn each_family_has_a_message_of_its_own() {
        for (family, _) in MISSING_PACK {
            assert!(FAMILY_PACKS.iter().any(|(held, _, _)| *held == family));
        }
    }

    #[test]
    fn only_one_message_says_what_to_do_about_the_problem() {
        assert!(NO_PATH_SET.contains("Configure"));
        assert!(NO_PATH_SET.contains("Options"));
        for message in PATH_REFUSALS {
            assert!(!message.contains("Configure"), "{message}");
        }
    }

    #[test]
    fn the_message_about_the_family_names_what_is_supported_and_not_what_was_asked() {
        assert_eq!(UNSUPPORTED_FAMILY, "Tiny or Mega supported");
        assert!(!UNSUPPORTED_FAMILY.contains("not"));
    }

    #[test]
    fn the_debug_define_is_given_whether_or_not_anything_is_being_debugged() {
        assert!(COMPILE_PREFIX.contains("-DDEBUG"));
    }

    #[test]
    fn the_compiler_is_told_which_language_it_is_reading() {
        assert!(COMPILE_PREFIX.contains("-x c"));
        assert!(COMPILE_SUFFIX.contains("-std=gnu99"));
    }

    #[test]
    fn and_is_asked_for_the_files_each_object_depends_on() {
        assert!(COMPILE_SUFFIX.contains("-MD"));
        assert!(COMPILE_SUFFIX.contains("-MP"));
        assert!(COMPILE_SUFFIX.contains("-MF"));
    }

    #[test]
    fn everything_is_written_into_a_folder_named_outright() {
        assert_eq!(OUTPUT_FOLDER, "Debug\\");
        assert!(OUTPUT_FOLDER.contains('\\'));
    }

    #[test]
    fn and_it_is_the_same_folder_the_other_toolchain_builder_uses() {
        // Two unrelated build paths agreeing on a hard-coded name that neither
        // can be told to change.
        assert!(
            crate::arduino_build::ALWAYS_A_MAP_FILE.contains(OUTPUT_FOLDER.trim_end_matches('\\'))
        );
    }

    #[test]
    fn both_builders_also_ask_for_a_map_file() {
        assert!(MAP_FLAG.contains("-Map="));
        assert!(crate::arduino_build::ALWAYS_A_MAP_FILE.contains("-Map="));
    }

    #[test]
    fn a_build_leaves_three_files_with_three_different_endings() {
        let mut endings = OUTPUT_SUFFIXES.to_vec();
        let before = endings.len();
        endings.sort_unstable();
        endings.dedup();

        assert_eq!(endings.len(), before);
        for ending in OUTPUT_SUFFIXES {
            assert!(ending.starts_with('.'), "{ending}");
        }
    }

    #[test]
    fn the_pack_is_reached_by_two_folders_beneath_it() {
        assert!(PACK_INCLUDE.starts_with('\\'));
        assert!(PACK_DEVICE.starts_with('\\'));
        assert!(PACK_DEVICE.ends_with('\\'));
        assert_ne!(PACK_INCLUDE, PACK_DEVICE);
    }

    #[test]
    fn every_path_in_the_module_is_written_the_way_one_platform_writes_them() {
        for path in [
            TOOLCHAIN_PATH,
            PACKS_PATH,
            PACK_INCLUDE,
            PACK_DEVICE,
            OUTPUT_FOLDER,
        ] {
            assert!(path.contains('\\'), "{path}");
            assert!(!path.contains('/'), "{path}");
        }
    }
}
