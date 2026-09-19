//! Choosing the symbol a component model is drawn with.
//!
//! Every model belongs to a category, and the category decides which drawing it
//! gets — sometimes outright, sometimes after looking at what the model has on
//! it. The answer is a name of the form `TinaICs:<drawing> [category]`, and
//! where no particular drawing fits, a stand-in is named instead.
//!
//! The names are assembled a category at a time rather than from one piece of
//! code, and it shows. The stand-in is written six times with three different
//! spacings, and one of the six leaves the category off altogether. The spacing
//! carries nothing — the six are already told apart by the category in them — so
//! it is three ways of writing the same thing, and anything matching these names
//! has to match them exactly as they are.

/// A category of component model.
///
/// Implements Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum Category {
    /// A voltage reference.
    Reference,
    /// A buffer.
    Buffer,
    /// An operational amplifier.
    OpAmp,
    /// A comparator.
    Comparator,
    /// An instrumentation amplifier.
    InstrumentationAmp,
    /// A bipolar transistor.
    Npn,
    /// A field-effect transistor.
    Nmos,
    /// Anything else.
    Miscellaneous,
}

/// What each category is written as.
///
/// Part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
///
/// Bracketed, and the brackets are part of the name rather than punctuation
/// around it.
pub const CATEGORY_NAMES: [(Category, &str); 8] = [
    (Category::Reference, "[Ref]"),
    (Category::Buffer, "[Buffer]"),
    (Category::OpAmp, "[OpAmp]"),
    (Category::Comparator, "[Comparator]"),
    (Category::InstrumentationAmp, "[InstAmp]"),
    (Category::Npn, "[NPN]"),
    (Category::Nmos, "[NMOS]"),
    (Category::Miscellaneous, "[Misc]"),
];

/// Implements part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
///
/// What one category is written as.
#[must_use]
pub fn category_name(category: Category) -> Option<&'static str> {
    CATEGORY_NAMES
        .iter()
        .find(|(held, _)| *held == category)
        .map(|(_, name)| *name)
}

/// The property a voltage reference is sorted by.
///
/// Part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
pub const REFERENCE_PROPERTY: &str = "VOUT";

/// The three voltages that have a drawing of their own.
///
/// Part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
///
/// Compared as text, not as numbers — so a reference whose property reads `5V`
/// or `5.00V` gets the general drawing rather than the one made for it.
///
/// The drawing names the same voltage without its unit, so the property and the
/// drawing spell one value two ways: `5.0V` against `Ref3V5.0`.
pub const REFERENCE_VOLTAGES: [(&str, &str); 3] = [
    ("10.0V", "TinaICs:<Ref3V10.0> [Ref]"),
    ("5.0V", "TinaICs:<Ref3V5.0> [Ref]"),
    ("2.5V", "TinaICs:<Ref3V2.5> [Ref]"),
];

/// What a reference gets when its voltage is none of those.
///
/// Part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
pub const GENERAL_REFERENCE: &str = "TinaICs:<Ref3> [Ref]";

/// Implements part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
///
/// Which drawing a voltage reference gets.
#[must_use]
pub fn reference_drawing(voltage: &str) -> &'static str {
    REFERENCE_VOLTAGES
        .iter()
        .find(|(held, _)| *held == voltage)
        .map_or(GENERAL_REFERENCE, |(_, drawing)| *drawing)
}

/// What a buffer gets.
///
/// Part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
pub const BUFFER_DRAWING: &str = "TinaICs:<Buffer4> [Buffer]";

/// The properties a comparator is sorted by.
///
/// Part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
///
/// Four, and the first two are looked at twice — once to choose between the
/// comparator drawings and once again further down. The last two say whether it
/// has both outputs.
pub const COMPARATOR_PROPERTIES: [&str; 4] = ["OpenCollOut", "OutGnd", "Out+", "Out-"];

/// The three comparator drawings.
///
/// Part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
///
/// Named by what the output is: a plain one, an open collector, and an open
/// collector referred to earth. The names are the same word with one or two
/// letters after it, so they sort together and read as a family.
pub const COMPARATOR_DRAWINGS: [&str; 3] = [
    " TinaICs:<ComparatorDO> [Comparator]",
    " TinaICs:<ComparatorCO> [Comparator]",
    " TinaICs:<ComparatorCOG> [Comparator]",
];

/// The drawing an amplifier of any kind is given.
///
/// Part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
///
/// A prefix with the number of connections put on the end and the category after
/// it — so the operational amplifier, the instrumentation amplifier and the
/// comparator all draw from one family of shapes and are told apart only by the
/// category in the name.
pub const AMPLIFIER_PREFIX: &str = " TinaICs:<Amplifier";

/// Implements part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
///
/// The drawing an amplifier with so many connections gets.
#[must_use]
pub fn amplifier_drawing(connections: u32, category: Category) -> Option<String> {
    category_name(category).map(|name| format!("{AMPLIFIER_PREFIX}{connections}> {name}"))
}

/// The two transistor drawings.
///
/// Part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
pub const TRANSISTOR_DRAWINGS: [(Category, &str); 2] = [
    (Category::Npn, "TinaICs:<NPN> [NPN]"),
    (Category::Nmos, "TinaICs:<NMOSE> [NMOS]"),
];

/// Every way the stand-in drawing is written.
///
/// Part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
///
/// Six of them for the same idea, written with three different spacings. The
/// last leaves the category off entirely, so a model falling back from the
/// transistor branch is named differently in kind from every other fallback.
pub const STAND_INS: [&str; 6] = [
    "<AutoShape> [Ref]",
    "<AutoShape> [Misc]",
    " <AutoShape>  [OpAmp]",
    " <AutoShape> [Comparator]",
    " <AutoShape>  [InstAmp]",
    " <AutoShape>  ",
];

/// What the stand-in is called, with nothing around it.
///
/// Part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
pub const STAND_IN: &str = "<AutoShape>";

/// Implements part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
///
/// How many distinct spacings the stand-in is written with.
#[must_use]
pub fn stand_in_spacings() -> usize {
    let mut shapes: Vec<(bool, usize)> = STAND_INS
        .iter()
        .map(|held| {
            let leading = held.starts_with(' ');
            let after = held
                .split_once(STAND_IN)
                .map_or(0, |(_, rest)| rest.len() - rest.trim_start().len());
            (leading, after)
        })
        .collect();
    shapes.sort_unstable();
    shapes.dedup();
    shapes.len()
}

/// Implements part of Ghidra function `FUN_01c2a6e0` at `0x01C2A6E0`.
///
/// The stand-ins that name no category.
#[must_use]
pub fn stand_ins_without_a_category() -> Vec<&'static str> {
    STAND_INS
        .iter()
        .filter(|held| !held.contains('['))
        .copied()
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn every_category_is_written_in_brackets() {
        for (_, name) in CATEGORY_NAMES {
            assert!(name.starts_with('['), "{name}");
            assert!(name.ends_with(']'), "{name}");
        }
    }

    #[test]
    fn no_category_is_named_twice() {
        let mut names: Vec<&str> = CATEGORY_NAMES.iter().map(|(_, name)| *name).collect();
        let before = names.len();
        names.sort_unstable();
        names.dedup();

        assert_eq!(names.len(), before);
    }

    #[test]
    fn a_reference_at_one_of_three_voltages_gets_a_drawing_of_its_own() {
        assert_eq!(reference_drawing("10.0V"), "TinaICs:<Ref3V10.0> [Ref]");
        assert_eq!(reference_drawing("5.0V"), "TinaICs:<Ref3V5.0> [Ref]");
        assert_eq!(reference_drawing("2.5V"), "TinaICs:<Ref3V2.5> [Ref]");
    }

    #[test]
    fn any_other_reference_gets_the_general_one() {
        assert_eq!(reference_drawing("3.3V"), GENERAL_REFERENCE);
        assert_eq!(reference_drawing(""), GENERAL_REFERENCE);
    }

    #[test]
    fn the_voltage_is_compared_as_text_and_not_as_a_number() {
        // So a reference reading 5V or 5.00V gets the general drawing rather
        // than the one made for it.
        assert_eq!(reference_drawing("5V"), GENERAL_REFERENCE);
        assert_eq!(reference_drawing("5.00V"), GENERAL_REFERENCE);
        assert_ne!(reference_drawing("5.0V"), GENERAL_REFERENCE);
    }

    #[test]
    fn each_voltage_drawing_names_its_voltage_but_without_the_unit() {
        // So the property and the drawing spell one value two ways.
        for (voltage, drawing) in REFERENCE_VOLTAGES {
            let without_unit = voltage.trim_end_matches('V');

            assert!(drawing.contains(without_unit), "{voltage} {drawing}");
            assert!(!drawing.contains(voltage), "{voltage} {drawing}");
        }
    }

    #[test]
    fn and_every_one_of_them_names_the_reference_category() {
        for (_, drawing) in REFERENCE_VOLTAGES {
            assert!(drawing.ends_with("[Ref]"), "{drawing}");
        }
        assert!(GENERAL_REFERENCE.ends_with("[Ref]"));
    }

    #[test]
    fn a_comparator_is_sorted_by_four_properties() {
        assert_eq!(COMPARATOR_PROPERTIES.len(), 4);
        assert!(COMPARATOR_PROPERTIES.contains(&"OpenCollOut"));
        assert!(COMPARATOR_PROPERTIES.contains(&"Out+"));
    }

    #[test]
    fn the_last_two_are_a_matched_pair() {
        assert_eq!(COMPARATOR_PROPERTIES[2].trim_end_matches('+'), "Out");
        assert_eq!(COMPARATOR_PROPERTIES[3].trim_end_matches('-'), "Out");
    }

    #[test]
    fn the_three_comparator_drawings_are_one_word_with_letters_after_it() {
        for drawing in COMPARATOR_DRAWINGS {
            assert!(drawing.contains("<Comparator"), "{drawing}");
            assert!(drawing.ends_with("[Comparator]"), "{drawing}");
        }
    }

    #[test]
    fn and_one_of_them_is_the_others_name_with_a_letter_added() {
        assert!(COMPARATOR_DRAWINGS[2].contains("ComparatorCOG"));
        assert!(COMPARATOR_DRAWINGS[1].contains("ComparatorCO"));
    }

    #[test]
    fn three_categories_share_one_family_of_amplifier_drawings() {
        // Told apart only by the category in the name.
        for category in [
            Category::OpAmp,
            Category::InstrumentationAmp,
            Category::Comparator,
        ] {
            let drawing = amplifier_drawing(4, category).expect("a category name");

            assert!(drawing.starts_with(AMPLIFIER_PREFIX), "{drawing}");
            assert!(
                drawing.ends_with(category_name(category).expect("named")),
                "{drawing}"
            );
        }
    }

    #[test]
    fn and_the_number_of_connections_goes_into_the_name() {
        let four = amplifier_drawing(4, Category::OpAmp).expect("named");
        let five = amplifier_drawing(5, Category::OpAmp).expect("named");

        assert_ne!(four, five);
        assert!(four.contains('4'));
        assert!(five.contains('5'));
    }

    #[test]
    fn the_two_transistor_drawings_name_their_own_categories() {
        for (category, drawing) in TRANSISTOR_DRAWINGS {
            assert!(
                drawing.ends_with(category_name(category).expect("named")),
                "{drawing}"
            );
        }
    }

    #[test]
    fn but_one_of_them_spells_its_drawing_differently_from_its_category() {
        // The category is NMOS and the drawing is NMOSE.
        let (_, drawing) = TRANSISTOR_DRAWINGS[1];

        assert!(drawing.contains("<NMOSE>"));
        assert!(drawing.contains("[NMOS]"));
    }

    #[test]
    fn the_stand_in_is_written_six_times() {
        assert_eq!(STAND_INS.len(), 6);
        for held in STAND_INS {
            assert!(held.contains(STAND_IN), "{held:?}");
        }
    }

    #[test]
    fn with_three_different_spacings_between_them() {
        assert_eq!(stand_in_spacings(), 3);
        assert!(stand_in_spacings() < STAND_INS.len());
    }

    #[test]
    fn and_the_spacing_carries_nothing_at_all() {
        // The six are already told apart by the category in them, so the
        // spacing is three ways of writing one thing.
        let mut normalised: Vec<String> = STAND_INS
            .iter()
            .map(|held| held.split_whitespace().collect::<Vec<&str>>().join(" "))
            .collect();
        let before = normalised.len();
        normalised.sort_unstable();
        normalised.dedup();

        assert_eq!(normalised.len(), before);
        assert!(stand_in_spacings() > 1);
    }

    #[test]
    fn one_of_them_leaves_the_category_off_altogether() {
        let bare = stand_ins_without_a_category();

        assert_eq!(bare.len(), 1);
        assert_eq!(bare[0].trim(), STAND_IN);
    }

    #[test]
    fn so_a_model_falling_back_from_the_transistor_branch_is_named_differently_in_kind() {
        let bare = stand_ins_without_a_category();

        assert!(!bare[0].contains('['));
        for held in STAND_INS.iter().filter(|held| held.contains('[')) {
            assert!(held.contains(']'), "{held:?}");
        }
    }

    #[test]
    fn every_drawing_that_is_not_a_stand_in_names_the_program_it_belongs_to() {
        let named: Vec<&str> = COMPARATOR_DRAWINGS
            .iter()
            .chain(std::iter::once(&BUFFER_DRAWING))
            .chain(std::iter::once(&GENERAL_REFERENCE))
            .copied()
            .collect();

        for drawing in named {
            assert!(drawing.contains("TinaICs:"), "{drawing}");
        }
    }

    #[test]
    fn and_no_stand_in_does() {
        for held in STAND_INS {
            assert!(!held.contains("TinaICs:"), "{held:?}");
        }
    }
}
