//! The report a test bench writes when it has finished running.
//!
//! One node per test case, each carrying a long list of attributes, with
//! further nodes beneath it for the conditions that were varied, the parameters
//! that were changed, and every measurement that was compared. Recovering it is
//! recovering the file format: anything reading these reports has to know these
//! names, and the names are not guessable because three of them are wrong.
//!
//! Two are misspelled and one is capitalised inconsistently with its own pair.
//! They are reproduced exactly. A reader that corrects them silently would read
//! nothing, which is the whole reason to write them down.

/// Which node an attribute is written on.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum Node {
    /// The test case itself.
    Case,
    /// One measurement that was compared.
    Measurement,
    /// One condition that was varied.
    Condition,
    /// One parameter that was changed.
    Parameter,
}

/// Every attribute the report writes, in the order it writes them.
///
/// Implements Ghidra function `FUN_0130ea10` at `0x0130EA10`.
pub const ATTRIBUTES: [(Node, &str); 48] = [
    (Node::Case, "index"),
    (Node::Case, "name"),
    (Node::Case, "status"),
    (Node::Case, "message"),
    (Node::Case, "mode"),
    (Node::Case, "description"),
    (Node::Case, "limitations"),
    (Node::Case, "spiceUnitsNum"),
    (Node::Case, "spiceUnitsUnit"),
    (Node::Case, "points"),
    (Node::Case, "simulationTime"),
    (Node::Case, "results"),
    (Node::Case, "comparisonMode"),
    (Node::Case, "referencePlaceInDatsheet"),
    (Node::Case, "refrencePicture"),
    (Node::Case, "circuitPreviewPicture"),
    (Node::Case, "testResultPicture"),
    (Node::Case, "figurePicture"),
    (Node::Measurement, "symbol"),
    (Node::Measurement, "referenceValue"),
    (Node::Measurement, "minimumValue"),
    (Node::Measurement, "typicalValue"),
    (Node::Measurement, "maximumValue"),
    (Node::Measurement, "comparisonPass"),
    (Node::Measurement, "referenceUnit"),
    (Node::Measurement, "accuracy"),
    (Node::Measurement, "simUnit"),
    (Node::Measurement, "testCurveAverageVal"),
    (Node::Measurement, "testCurveAverageValUnit"),
    (Node::Measurement, "errorVal"),
    (Node::Measurement, "errorUnit"),
    (Node::Measurement, "referenceType"),
    (Node::Measurement, "compRangeFrom"),
    (Node::Measurement, "compRangeFromPar"),
    (Node::Measurement, "compRangeTo"),
    (Node::Measurement, "compRangeToPar"),
    (Node::Measurement, "LTspice"),
    (Node::Measurement, "PSpice"),
    (Node::Measurement, "SIMetrix"),
    (Node::Measurement, "LTSpiceResult"),
    (Node::Measurement, "PSpiceResult"),
    (Node::Measurement, "SIMetrixResult"),
    (Node::Condition, "changed"),
    (Node::Condition, "condition"),
    (Node::Condition, "proc"),
    (Node::Parameter, "changedNum"),
    (Node::Parameter, "parameterName"),
    (Node::Parameter, "parameterValue"),
];

/// Implements part of Ghidra function `FUN_0130ea10` at `0x0130EA10`.
///
/// Every attribute written on one node.
#[must_use]
pub fn attributes_on(node: Node) -> Vec<&'static str> {
    ATTRIBUTES
        .iter()
        .filter(|(held, _)| *held == node)
        .map(|(_, name)| *name)
        .collect()
}

/// The attributes whose names are wrong.
///
/// Part of Ghidra function `FUN_0130ea10` at `0x0130EA10`.
///
/// Two misspellings, both in the same area of the report and both about the
/// reference a test is compared against. Anything that reads these files has to
/// misspell them the same way.
pub const MISSPELLED: [(&str, &str); 2] = [
    ("refrencePicture", "referencePicture"),
    ("referencePlaceInDatsheet", "referencePlaceInDatasheet"),
];

/// The three other simulators a test can be compared against.
///
/// Part of Ghidra function `FUN_0130ea10` at `0x0130EA10`.
///
/// Each gets two attributes: one naming it and one holding what it produced.
/// The names of the two do not agree for one of the three — see
/// [`spelt_two_ways`].
pub const OTHER_SIMULATORS: [(&str, &str); 3] = [
    ("LTspice", "LTSpiceResult"),
    ("PSpice", "PSpiceResult"),
    ("SIMetrix", "SIMetrixResult"),
];

/// Implements part of Ghidra function `FUN_0130ea10` at `0x0130EA10`.
///
/// The simulators whose two attributes spell the name differently.
///
/// One of the three. The attribute naming it has a small s and the one holding
/// its result has a capital, so a reader matching the two by prefix finds
/// nothing for that one.
#[must_use]
pub fn spelt_two_ways() -> Vec<&'static str> {
    OTHER_SIMULATORS
        .iter()
        .filter(|(named, result)| !result.starts_with(*named))
        .map(|(named, _)| *named)
        .collect()
}

/// What a test case can end up as.
///
/// Part of Ghidra function `FUN_0130ea10` at `0x0130EA10`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Outcome {
    /// It ran and the comparison held.
    Succeeded,
    /// It ran and the comparison did not.
    Failed,
    /// It was stopped part way.
    Cancelled,
    /// It was stopped because it took too long.
    TimedOut,
    /// The simulation itself would not run.
    SimulationError,
    /// The comparison could not be made.
    ComparisonError,
}

/// What the report writes as the status for each outcome.
///
/// Part of Ghidra function `FUN_0130ea10` at `0x0130EA10`.
///
/// The status and the message are separate attributes and they do not carry the
/// same information: every outcome that went wrong writes the same status and a
/// different message, so a reader that looks only at the status can tell a pass
/// from a failure but cannot tell why.
pub const STATUS_WORDS: [(Outcome, &str, &str); 6] = [
    (Outcome::Succeeded, "Success", "Comparison OK"),
    (Outcome::Failed, "Failed", ""),
    (Outcome::Cancelled, "Failed", "Cancelled"),
    (Outcome::TimedOut, "Failed", "Cancelled (timeout at %d%%)"),
    (
        Outcome::SimulationError,
        "Failed",
        "Simulation error, %s in circuit",
    ),
    (Outcome::ComparisonError, "Failed", "Comparison error, %s"),
];

/// Implements part of Ghidra function `FUN_0130ea10` at `0x0130EA10`.
///
/// The status word one outcome is written with.
#[must_use]
pub fn status_for(outcome: Outcome) -> Option<&'static str> {
    STATUS_WORDS
        .iter()
        .find(|(held, _, _)| *held == outcome)
        .map(|(_, status, _)| *status)
}

/// Implements part of Ghidra function `FUN_0130ea10` at `0x0130EA10`.
///
/// The message one outcome is written with.
#[must_use]
pub fn message_for(outcome: Outcome) -> Option<&'static str> {
    STATUS_WORDS
        .iter()
        .find(|(held, _, _)| *held == outcome)
        .map(|(_, _, message)| *message)
}

/// The note written when a test was checked against a picture rather than
/// numbers.
///
/// Part of Ghidra function `FUN_0130ea10` at `0x0130EA10`.
pub const COMPARED_AGAINST_A_FIGURE: &str = "Reference figure used";

/// What the comparison mode says when that happens.
///
/// Part of Ghidra function `FUN_0130ea10` at `0x0130EA10`.
pub const FIGURE_MODE: &str = "figure";

/// The endings of the files a run leaves behind.
///
/// Part of Ghidra function `FUN_0130ea10` at `0x0130EA10`.
///
/// Three analyses, and for each one a file from the run and a file from the
/// reference, distinguished by one word in the middle of the name rather than
/// by the folder they sit in.
pub const RESULT_SUFFIXES: [(&str, &str, &str); 3] = [
    ("Transient", ".testresult.tr", ".refresult.tr"),
    ("AC", ".testresult.ac", ".refresult.ac"),
    ("DC", ".testresult.dc", ".refresult.dc"),
];

/// The endings of the pictures.
///
/// Part of Ghidra function `FUN_0130ea10` at `0x0130EA10`.
pub const PICTURE_SUFFIXES: [&str; 2] = [" Figure.jpg", " Preview.jpg"];

/// What is added to an analysis name to say which kind of circuit it ran on.
///
/// Part of Ghidra function `FUN_0130ea10` at `0x0130EA10`.
pub const CIRCUIT_KINDS: [&str; 2] = [" (analog)", " (mixed)"];

/// Implements part of Ghidra function `FUN_0130ea10` at `0x0130EA10`.
///
/// What the mode attribute is written as.
#[must_use]
pub fn mode_text(analysis: &str, mixed: Option<bool>) -> String {
    match mixed {
        Some(true) => format!("{analysis}{}", CIRCUIT_KINDS[1]),
        Some(false) => format!("{analysis}{}", CIRCUIT_KINDS[0]),
        None => analysis.to_owned(),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn no_attribute_is_written_twice() {
        let mut names: Vec<&str> = ATTRIBUTES.iter().map(|(_, name)| *name).collect();
        let before = names.len();
        names.sort_unstable();
        names.dedup();

        assert_eq!(names.len(), before);
    }

    #[test]
    fn the_report_has_four_kinds_of_node_and_every_one_carries_something() {
        for node in [
            Node::Case,
            Node::Measurement,
            Node::Condition,
            Node::Parameter,
        ] {
            assert!(!attributes_on(node).is_empty(), "{node:?}");
        }
    }

    #[test]
    fn the_test_case_and_the_measurement_carry_most_of_it() {
        let case = attributes_on(Node::Case).len();
        let measurement = attributes_on(Node::Measurement).len();

        assert!(case + measurement > ATTRIBUTES.len() * 3 / 4);
    }

    #[test]
    fn the_first_attributes_of_a_case_are_what_identifies_it() {
        let case = attributes_on(Node::Case);

        assert_eq!(&case[..4], ["index", "name", "status", "message"]);
    }

    #[test]
    fn two_attribute_names_are_misspelled_and_are_written_that_way_anyway() {
        // A reader that corrects them silently reads nothing.
        for (wrong, right) in MISSPELLED {
            assert!(ATTRIBUTES.iter().any(|(_, name)| *name == wrong), "{wrong}");
            assert!(
                !ATTRIBUTES.iter().any(|(_, name)| *name == right),
                "{right}"
            );
        }
    }

    #[test]
    fn and_both_of_them_are_about_the_reference_a_test_is_checked_against() {
        for (wrong, _) in MISSPELLED {
            let lowered = wrong.to_lowercase();
            assert!(
                lowered.contains("refrence") || lowered.contains("reference"),
                "{wrong}"
            );
        }
    }

    #[test]
    fn each_of_the_three_other_simulators_gets_two_attributes() {
        for (named, result) in OTHER_SIMULATORS {
            assert!(ATTRIBUTES.iter().any(|(_, name)| *name == named), "{named}");
            assert!(
                ATTRIBUTES.iter().any(|(_, name)| *name == result),
                "{result}"
            );
        }
    }

    #[test]
    fn one_of_the_three_spells_its_own_name_two_ways() {
        // So a reader matching the pair by prefix finds nothing for that one.
        assert_eq!(spelt_two_ways(), ["LTspice"]);
    }

    #[test]
    fn the_other_two_are_consistent() {
        let odd = spelt_two_ways();

        assert!(!odd.contains(&"PSpice"));
        assert!(!odd.contains(&"SIMetrix"));
    }

    #[test]
    fn every_outcome_that_went_wrong_writes_the_same_status() {
        // So a reader looking only at the status can tell a pass from a
        // failure but cannot tell why.
        for outcome in [
            Outcome::Failed,
            Outcome::Cancelled,
            Outcome::TimedOut,
            Outcome::SimulationError,
            Outcome::ComparisonError,
        ] {
            assert_eq!(status_for(outcome), Some("Failed"), "{outcome:?}");
        }
    }

    #[test]
    fn and_only_the_message_says_which_it_was() {
        let mut messages: Vec<&str> = [
            Outcome::Cancelled,
            Outcome::TimedOut,
            Outcome::SimulationError,
            Outcome::ComparisonError,
        ]
        .into_iter()
        .filter_map(message_for)
        .collect();
        let before = messages.len();
        messages.sort_unstable();
        messages.dedup();

        assert_eq!(messages.len(), before);
    }

    #[test]
    fn a_test_that_passed_says_so_in_both_places() {
        assert_eq!(status_for(Outcome::Succeeded), Some("Success"));
        assert_eq!(message_for(Outcome::Succeeded), Some("Comparison OK"));
    }

    #[test]
    fn two_of_the_messages_carry_something_of_their_own() {
        let with_holes = STATUS_WORDS
            .iter()
            .filter(|(_, _, message)| message.contains('%'))
            .count();

        assert_eq!(with_holes, 3);
    }

    #[test]
    fn a_run_leaves_a_file_for_each_analysis_and_one_for_its_reference() {
        for (_, run, reference) in RESULT_SUFFIXES {
            assert!(run.starts_with(".testresult."));
            assert!(reference.starts_with(".refresult."));
            assert_eq!(
                run.rsplit('.').next(),
                reference.rsplit('.').next(),
                "{run} {reference}"
            );
        }
    }

    #[test]
    fn the_two_are_told_apart_by_a_word_in_the_name_and_not_by_where_they_sit() {
        for (_, run, reference) in RESULT_SUFFIXES {
            assert_ne!(run, reference);
            assert!(!run.contains('/') && !reference.contains('/'));
        }
    }

    #[test]
    fn the_pictures_are_told_apart_the_same_way() {
        for suffix in PICTURE_SUFFIXES {
            // The recovered ending is lower case exactly, so the comparison
            // is meant to be case-sensitive.
            assert_eq!(&suffix[suffix.len() - 4..], ".jpg");
            assert!(suffix.starts_with(' '));
        }
        assert_ne!(PICTURE_SUFFIXES[0], PICTURE_SUFFIXES[1]);
    }

    #[test]
    fn a_mode_says_which_kind_of_circuit_it_ran_on() {
        assert_eq!(
            mode_text("Transient Analysis", Some(false)),
            "Transient Analysis (analog)"
        );
        assert_eq!(
            mode_text("Transient Analysis", Some(true)),
            "Transient Analysis (mixed)"
        );
    }

    #[test]
    fn and_says_nothing_where_it_is_not_known() {
        assert_eq!(mode_text("Transient Analysis", None), "Transient Analysis");
    }

    #[test]
    fn a_test_checked_against_a_picture_says_so_twice() {
        // Once in the message and once in the comparison mode.
        assert_eq!(COMPARED_AGAINST_A_FIGURE, "Reference figure used");
        assert_eq!(FIGURE_MODE, "figure");
        assert!(ATTRIBUTES.iter().any(|(_, name)| *name == "comparisonMode"));
    }
}
