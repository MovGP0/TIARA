//! The written report a filter design produces.
//!
//! What was asked for and what came out: the approximation, the selectivity,
//! the band edges and gains, the order, and then the coefficients and component
//! values. It is a fixed-width report meant to be read in a monospaced face, so
//! the spacing in the labels is part of it and is reproduced exactly.
//!
//! Reproducing it exactly means keeping three things that are wrong. The labels
//! for a filter with two bands are one character longer than the labels for one
//! with a single band and are not padded to make up for it, so the two forms of
//! the report do not line up with each other. The header over the coefficients
//! spells one of its three terms in lower case where the other two are capital.
//! And the two halves of that header are spaced differently from each other.

/// How the filter is to be built.
///
/// Implements Ghidra function `FUN_01192ee0` at `0x01192EE0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Realisation {
    /// Out of resistors, capacitors and inductors alone.
    Passive,
    /// With amplifiers.
    Active,
}

/// What the report calls each.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
pub const REALISATION_WORDS: [(Realisation, &str); 2] = [
    (Realisation::Passive, "PASSIVE"),
    (Realisation::Active, "ACTIVE"),
];

/// Which family of response was asked for.
///
/// Implements Ghidra function `FUN_01192ee0` at `0x01192EE0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Approximation {
    /// Flattest in the passband.
    Butterworth,
    /// Ripple in the passband, steeper edge.
    Chebyshev,
    /// Ripple in both, steepest edge.
    Elliptic,
    /// Ripple in the stopband only.
    InverseChebyshev,
}

/// What the report calls each family.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
///
/// The fourth is abbreviated and the other three are not, and the abbreviation
/// carries a full stop inside it as well as at the end.
pub const APPROXIMATION_WORDS: [(Approximation, &str); 4] = [
    (Approximation::Butterworth, "Butterworth"),
    (Approximation::Chebyshev, "Chebyshev"),
    (Approximation::Elliptic, "Elliptic"),
    (Approximation::InverseChebyshev, "Inv. Cheby."),
];

/// Which part of the spectrum the filter keeps.
///
/// Implements Ghidra function `FUN_01192ee0` at `0x01192EE0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Selectivity {
    /// Keeps what is above.
    Highpass,
    /// Keeps what is below.
    Lowpass,
    /// Keeps a band.
    Bandpass,
    /// Removes a band.
    Bandstop,
}

/// What the report calls each.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
pub const SELECTIVITY_WORDS: [(Selectivity, &str); 4] = [
    (Selectivity::Highpass, "Highpass"),
    (Selectivity::Lowpass, "Lowpass"),
    (Selectivity::Bandpass, "Bandpass"),
    (Selectivity::Bandstop, "Bandstop"),
];

/// Implements part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
///
/// Whether a selectivity needs two band edges rather than one.
#[must_use]
pub const fn has_two_bands(selectivity: Selectivity) -> bool {
    matches!(selectivity, Selectivity::Bandpass | Selectivity::Bandstop)
}

/// The labels for a filter with one band.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
pub const SINGLE_BAND_LABELS: [&str; 4] = [
    "    Passband gain         (dB): ",
    "    Stopband gain         (dB): ",
    "    Passband frequency    (Hz): ",
    "    Stopband frequency    (Hz): ",
];

/// The labels for a filter with two.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
///
/// The same labels with a number added, and nothing taken away to make room —
/// so every one of them is a character longer than its single-band counterpart
/// and the colon sits one column further right. In a report meant to be read in
/// a monospaced face that is visible: a lowpass report and a bandpass report do
/// not line up with one another.
pub const DUAL_BAND_LABELS: [&str; 8] = [
    "    Passband1 gain         (dB): ",
    "    Stopband1 gain         (dB): ",
    "    Passband2 gain         (dB): ",
    "    Stopband2 gain         (dB): ",
    "    Passband1 frequency    (Hz): ",
    "    Stopband1 frequency    (Hz): ",
    "    Passband2 frequency    (Hz): ",
    "    Stopband2 frequency    (Hz): ",
];

/// Implements part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
///
/// Which column the value starts in, for one label.
#[must_use]
pub fn value_column(label: &str) -> Option<usize> {
    label.find(": ").map(|at| at + 2)
}

/// The labels that name what was asked for rather than a number.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
pub const CHOICE_LABELS: [&str; 2] = [
    "    Filter approximation :      ",
    "    Filter selectivity:         ",
];

/// The labels for what came out.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
pub const RESULT_LABELS: [&str; 2] = [
    "    Filter Length or Order        = ",
    "    Overall Gain                  = ",
];

/// The heading over the coefficients.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
pub const COEFFICIENT_HEADING: &str =
    "    Numerator Coefficients                Denominator Coefficients";

/// The line naming the powers each coefficient belongs to.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
///
/// Two halves, one for each side. The variable is written as a capital in the
/// two higher powers and in lower case in the constant term, in both halves —
/// and the two halves are not spaced alike, so they do not sit over their own
/// columns identically.
pub const POWERS_LINE: &str =
    " st.[    S^2   +     S^1  +     s^0  ] [    S^2   +     S^1  +    s^0   ]";

/// The rule beneath it.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
pub const COEFFICIENT_RULE: &str =
    " ========================================================================";

/// The heading over the component values.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
pub const COMPONENT_HEADING: &str = " Common Component Values  ";

/// The rule beneath that.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
pub const COMPONENT_RULE: &str = " =====================================";

/// The heading over the per-stage values.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
pub const STAGE_HEADING: &str = " Stage  R Value     R_B Value    Special";

/// The rule beneath that one.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
pub const STAGE_RULE: &str = " =====  =========   ==========   =================";

/// What a stage that is only first order is marked with.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
pub const FIRST_ORDER_NOTE: &str = "     1st Order section";

/// What the report says when it cannot make sense of what it was given.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
///
/// A bare noun. The message names the field and says nothing else — not what the
/// value was, not what was expected, not even that anything is wrong. And the
/// second of the two is raised from two different places, so two different
/// faults produce a message that cannot be told apart.
pub const REFUSALS: [&str; 2] = ["filter kind", "filter select"];

/// How many places each refusal is raised from.
///
/// Part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
pub const REFUSAL_SITES: [(&str, usize); 2] = [("filter kind", 1), ("filter select", 2)];

/// Implements part of Ghidra function `FUN_01192ee0` at `0x01192EE0`.
///
/// The refusals whose message cannot say which fault produced it.
#[must_use]
pub fn ambiguous_refusals() -> Vec<&'static str> {
    REFUSAL_SITES
        .iter()
        .filter(|(_, sites)| *sites > 1)
        .map(|(message, _)| *message)
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_two_realisations_are_the_only_two_and_are_shouted() {
        assert_eq!(REALISATION_WORDS.len(), 2);
        for (_, word) in REALISATION_WORDS {
            assert_eq!(word, word.to_uppercase());
        }
    }

    #[test]
    fn the_four_approximations_are_not_shouted() {
        for (_, word) in APPROXIMATION_WORDS {
            assert_ne!(word, word.to_uppercase());
        }
    }

    #[test]
    fn one_of_them_is_abbreviated_and_the_others_are_not() {
        let abbreviated: Vec<&str> = APPROXIMATION_WORDS
            .iter()
            .filter(|(_, word)| word.contains('.'))
            .map(|(_, word)| *word)
            .collect();

        assert_eq!(abbreviated, ["Inv. Cheby."]);
    }

    #[test]
    fn and_its_abbreviation_is_marked_twice() {
        assert_eq!("Inv. Cheby.".matches('.').count(), 2);
    }

    #[test]
    fn the_four_selectivities_are_named_once_each() {
        let mut words: Vec<&str> = SELECTIVITY_WORDS.iter().map(|(_, word)| *word).collect();
        let before = words.len();
        words.sort_unstable();
        words.dedup();

        assert_eq!(words.len(), before);
        assert_eq!(before, 4);
    }

    #[test]
    fn two_of_them_need_two_band_edges() {
        assert!(has_two_bands(Selectivity::Bandpass));
        assert!(has_two_bands(Selectivity::Bandstop));
        assert!(!has_two_bands(Selectivity::Highpass));
        assert!(!has_two_bands(Selectivity::Lowpass));
    }

    #[test]
    fn there_are_twice_as_many_labels_for_two_bands_as_for_one() {
        assert_eq!(DUAL_BAND_LABELS.len(), SINGLE_BAND_LABELS.len() * 2);
    }

    #[test]
    fn every_single_band_label_puts_its_value_in_one_column() {
        let columns: Vec<usize> = SINGLE_BAND_LABELS
            .iter()
            .filter_map(|label| value_column(label))
            .collect();

        assert_eq!(columns.len(), SINGLE_BAND_LABELS.len());
        assert!(columns.windows(2).all(|pair| pair[0] == pair[1]));
    }

    #[test]
    fn and_every_dual_band_label_puts_it_in_one_column_too() {
        let columns: Vec<usize> = DUAL_BAND_LABELS
            .iter()
            .filter_map(|label| value_column(label))
            .collect();

        assert_eq!(columns.len(), DUAL_BAND_LABELS.len());
        assert!(columns.windows(2).all(|pair| pair[0] == pair[1]));
    }

    #[test]
    fn but_the_two_columns_are_not_the_same_one() {
        // So a lowpass report and a bandpass report do not line up with each
        // other.
        let single = value_column(SINGLE_BAND_LABELS[0]).expect("a colon");
        let dual = value_column(DUAL_BAND_LABELS[0]).expect("a colon");

        assert_eq!(dual, single + 1);
    }

    #[test]
    fn and_the_difference_is_exactly_the_number_that_was_added() {
        assert_eq!(DUAL_BAND_LABELS[0].len(), SINGLE_BAND_LABELS[0].len() + 1);
        assert!(DUAL_BAND_LABELS[0].contains('1'));
        assert!(!SINGLE_BAND_LABELS[0].contains('1'));
    }

    #[test]
    fn the_dual_band_labels_come_in_a_first_and_a_second_of_each() {
        let firsts = DUAL_BAND_LABELS
            .iter()
            .filter(|label| label.contains('1'))
            .count();
        let seconds = DUAL_BAND_LABELS
            .iter()
            .filter(|label| label.contains('2'))
            .count();

        assert_eq!(firsts, seconds);
        assert_eq!(firsts + seconds, DUAL_BAND_LABELS.len());
    }

    #[test]
    fn the_two_choice_labels_do_not_line_up_with_each_other_either() {
        let first = CHOICE_LABELS[0].find(':').expect("a colon");
        let second = CHOICE_LABELS[1].find(':').expect("a colon");

        assert_ne!(first, second);
    }

    #[test]
    fn but_they_are_padded_to_the_same_length() {
        // So the values after them do line up, which is what the padding is
        // for.
        assert_eq!(CHOICE_LABELS[0].len(), CHOICE_LABELS[1].len());
    }

    #[test]
    fn the_result_labels_are_padded_to_the_same_length_as_each_other() {
        assert_eq!(RESULT_LABELS[0].len(), RESULT_LABELS[1].len());
    }

    #[test]
    fn and_they_are_written_with_an_equals_where_the_others_use_a_colon() {
        for label in RESULT_LABELS {
            assert!(label.contains('='));
            assert!(!label.contains(':'));
        }
        for label in CHOICE_LABELS {
            assert!(label.contains(':'));
        }
    }

    #[test]
    fn the_powers_line_names_three_powers_in_each_half() {
        let halves: Vec<&str> = POWERS_LINE.split("] [").collect();

        assert_eq!(halves.len(), 2);
        for half in halves {
            assert_eq!(half.matches('^').count(), 3);
        }
    }

    #[test]
    fn the_constant_term_is_written_in_lower_case_and_the_others_are_not() {
        assert!(POWERS_LINE.contains("S^2"));
        assert!(POWERS_LINE.contains("S^1"));
        assert!(POWERS_LINE.contains("s^0"));
        assert!(!POWERS_LINE.contains("S^0"));
    }

    #[test]
    fn and_in_both_halves_alike() {
        assert_eq!(POWERS_LINE.matches("s^0").count(), 2);
        assert_eq!(POWERS_LINE.matches("S^0").count(), 0);
    }

    #[test]
    fn the_two_halves_of_that_line_are_not_spaced_alike() {
        let halves: Vec<&str> = POWERS_LINE.split("] [").collect();

        assert_ne!(halves[0].trim_start_matches(" st.["), halves[1]);
    }

    #[test]
    fn the_rule_under_the_coefficients_is_as_wide_as_the_line_above_it() {
        assert_eq!(COEFFICIENT_RULE.len(), POWERS_LINE.len());
    }

    #[test]
    fn the_rules_are_made_of_one_character_each() {
        for rule in [COEFFICIENT_RULE, COMPONENT_RULE] {
            assert!(rule.trim_start().chars().all(|held| held == '='));
        }
    }

    #[test]
    fn the_stage_rule_is_wider_than_the_heading_it_sits_under() {
        // The last column is ruled to its full width while its title is not
        // padded to it, so the rule runs on past the heading.
        assert!(STAGE_RULE.len() > STAGE_HEADING.len());
        assert_eq!(STAGE_RULE.len() - STAGE_HEADING.len(), 10);
    }

    #[test]
    fn its_runs_and_the_headings_agree_about_how_many_columns_there_are() {
        let runs = STAGE_RULE.split_whitespace().count();

        assert_eq!(runs, 4);
        assert!(STAGE_HEADING.contains("Stage"));
        assert!(STAGE_HEADING.contains("Special"));
    }

    #[test]
    fn and_the_last_run_is_far_wider_than_the_word_over_it() {
        let last = STAGE_RULE
            .split_whitespace()
            .next_back()
            .expect("four runs");

        assert!(last.len() > "Special".len());
    }

    #[test]
    fn a_refusal_says_nothing_but_the_name_of_a_field() {
        for message in REFUSALS {
            assert!(!message.contains(' ') || message.split(' ').count() == 2);
            assert!(!message.contains(':'));
            assert!(!message.ends_with('.'));
        }
    }

    #[test]
    fn and_one_of_the_two_is_raised_from_two_different_places() {
        // So two different faults produce a message that cannot be told apart.
        assert_eq!(ambiguous_refusals(), ["filter select"]);
    }

    #[test]
    fn the_other_is_raised_from_one() {
        let (_, sites) = REFUSAL_SITES
            .iter()
            .find(|(message, _)| *message == "filter kind")
            .expect("listed");

        assert_eq!(*sites, 1);
    }

    #[test]
    fn every_refusal_is_listed_in_both_tables() {
        for message in REFUSALS {
            assert!(
                REFUSAL_SITES.iter().any(|(held, _)| *held == message),
                "{message}"
            );
        }
    }

    #[test]
    fn a_first_order_stage_is_marked_rather_than_left_blank() {
        assert!(FIRST_ORDER_NOTE.contains("1st Order"));
        assert!(FIRST_ORDER_NOTE.starts_with("     "));
    }
}
