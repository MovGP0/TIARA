//! Which measurements a curve can be asked for.
//!
//! What can be measured depends on what was measured: a curve against time can
//! be asked for its ripple, one against frequency for its margins, and one
//! against a swept level for almost nothing. The list is rebuilt from the
//! curve every time rather than kept, so it cannot go stale — and a curve of a
//! kind nobody thought of leaves it empty rather than wrong.

use crate::range_axis_units::AxisUnit;

/// What a curve against time can be asked for.
///
/// Part of Ghidra function `FUN_01304f20` at `0x01304F20`.
pub const TIME_MEASUREMENTS: [&str; 5] = [
    "Average",
    "Absolute Ripple",
    "Relative Ripple",
    "YMIN",
    "YMAX",
];

/// What a curve against a swept level can be asked for.
///
/// Part of Ghidra function `FUN_01304f20` at `0x01304F20`.
///
/// The shortest of the three, and the only one with no ripple: a curve whose
/// horizontal axis is itself a level has nothing to ripple against.
pub const LEVEL_MEASUREMENTS: [&str; 3] = ["Average", "YMIN", "YMAX"];

/// What a curve against frequency can be asked for.
///
/// Part of Ghidra function `FUN_01304f20` at `0x01304F20`.
///
/// The longest, and the only one offering the two margins or anything about
/// the horizontal axis — a frequency response is the only kind of curve where
/// where something happens is as interesting as what happens.
pub const FREQUENCY_MEASUREMENTS: [&str; 9] = [
    "Average",
    "Gain margin",
    "Phase margin",
    "Absolute Ripple",
    "Relative Ripple",
    "YMIN",
    "YMAX",
    "XMIN",
    "XMAX",
];

/// Implements part of Ghidra function `FUN_01304f20` at `0x01304F20`.
///
/// What a curve of one kind can be asked for, in the order offered.
///
/// The kinds are the same three the range labels are chosen from — see
/// [`AxisUnit`], recovered separately at `0x01306720` — and the two agree
/// about which is which: the kind that is labelled in seconds is the one that
/// offers ripple, and the kind labelled in hertz is the one that offers gain
/// and phase margins. Neither function knows about the other.
#[must_use]
pub const fn measurements_for(unit: AxisUnit) -> &'static [&'static str] {
    match unit {
        AxisUnit::Time => &TIME_MEASUREMENTS,
        AxisUnit::Level => &LEVEL_MEASUREMENTS,
        AxisUnit::Frequency => &FREQUENCY_MEASUREMENTS,
    }
}

/// What filling the list needs of the window around it.
///
/// Part of Ghidra function `FUN_01304f20` at `0x01304F20`.
pub trait MeasurementListHost {
    /// Whether the measurement column is being offered at all.
    fn measurements_offered(&mut self) -> bool;

    /// Which kind the curve in question is.
    fn curve_kind(&mut self) -> i32;

    /// Empties the list.
    fn clear(&mut self);

    /// Readies the curve for the parameter being asked about.
    fn prepare_curve(&mut self);

    /// Offers one more measurement.
    fn add(&mut self, measurement: &str);

    /// Which measurement the curve is already set to.
    fn chosen_measurement(&mut self) -> i32;

    /// Marks that one as chosen.
    fn choose(&mut self, measurement: i32);
}

/// Implements Ghidra function `FUN_01304f20` at `0x01304F20`.
///
/// Fills the measurement list for whichever curve is being looked at.
///
/// The list is emptied first and filled second, so a kind that matches none of
/// the three leaves it empty rather than leaving the last curve's choices in
/// it — which is the safe way round, because an offer that cannot be honoured
/// is worse than no offer.
///
/// What was already chosen is read back and set again at the end, after the
/// list has been rebuilt. It is read as a number rather than as a name, so
/// what survives a rebuild is the *position* in the list: a curve moving from
/// a kind with nine measurements to one with three keeps its number and lands
/// on whatever now sits there, or on nothing.
pub fn fill_measurements<Host: MeasurementListHost>(host: &mut Host) {
    if !host.measurements_offered() {
        return;
    }

    let unit = AxisUnit::from_mode(host.curve_kind());
    host.clear();
    host.prepare_curve();
    if let Some(unit) = unit {
        for measurement in measurements_for(unit) {
            host.add(measurement);
        }
    }
    let chosen = host.chosen_measurement();
    host.choose(chosen);
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Column {
        offered: bool,
        kind: i32,
        chosen: i32,
        cleared: usize,
        prepared: usize,
        added: Vec<String>,
        choices: Vec<i32>,
        order: Vec<&'static str>,
    }

    impl MeasurementListHost for Column {
        fn measurements_offered(&mut self) -> bool {
            self.offered
        }

        fn curve_kind(&mut self) -> i32 {
            self.kind
        }

        fn clear(&mut self) {
            self.cleared += 1;
            self.added.clear();
            self.order.push("clear");
        }

        fn prepare_curve(&mut self) {
            self.prepared += 1;
            self.order.push("prepare");
        }

        fn add(&mut self, measurement: &str) {
            self.added.push(measurement.to_owned());
            self.order.push("add");
        }

        fn chosen_measurement(&mut self) -> i32 {
            self.chosen
        }

        fn choose(&mut self, measurement: i32) {
            self.choices.push(measurement);
            self.order.push("choose");
        }
    }

    fn column(kind: i32) -> Column {
        Column {
            offered: true,
            kind,
            ..Column::default()
        }
    }

    #[test]
    fn every_kind_offers_its_average_first() {
        for unit in [AxisUnit::Time, AxisUnit::Level, AxisUnit::Frequency] {
            assert_eq!(measurements_for(unit)[0], "Average", "{unit:?}");
        }
    }

    #[test]
    fn only_a_frequency_curve_offers_the_margins() {
        for name in ["Gain margin", "Phase margin"] {
            assert!(FREQUENCY_MEASUREMENTS.contains(&name));
            assert!(!TIME_MEASUREMENTS.contains(&name));
            assert!(!LEVEL_MEASUREMENTS.contains(&name));
        }
    }

    #[test]
    fn only_a_frequency_curve_is_asked_anything_about_its_horizontal_axis() {
        for name in ["XMIN", "XMAX"] {
            assert!(FREQUENCY_MEASUREMENTS.contains(&name));
            assert!(!TIME_MEASUREMENTS.contains(&name));
        }
    }

    #[test]
    fn a_swept_level_curve_has_nothing_to_ripple_against() {
        for name in ["Absolute Ripple", "Relative Ripple"] {
            assert!(!LEVEL_MEASUREMENTS.contains(&name));
            assert!(TIME_MEASUREMENTS.contains(&name));
        }
    }

    #[test]
    fn each_shorter_list_is_contained_in_each_longer_one() {
        for name in LEVEL_MEASUREMENTS {
            assert!(TIME_MEASUREMENTS.contains(&name), "{name}");
        }
        for name in TIME_MEASUREMENTS {
            assert!(FREQUENCY_MEASUREMENTS.contains(&name), "{name}");
        }
    }

    #[test]
    fn the_kinds_agree_with_the_ones_the_range_labels_are_chosen_from() {
        // Two functions recovered apart, neither aware of the other.
        assert_eq!(AxisUnit::from_mode(0), Some(AxisUnit::Time));
        assert!(measurements_for(AxisUnit::Time).contains(&"Absolute Ripple"));
        assert_eq!(AxisUnit::from_mode(2), Some(AxisUnit::Frequency));
        assert!(measurements_for(AxisUnit::Frequency).contains(&"Gain margin"));
    }

    #[test]
    fn a_curve_against_time_is_offered_its_five() {
        let mut host = column(0);
        fill_measurements(&mut host);

        assert_eq!(host.added, TIME_MEASUREMENTS);
    }

    #[test]
    fn a_curve_against_frequency_is_offered_its_nine() {
        let mut host = column(2);
        fill_measurements(&mut host);

        assert_eq!(host.added, FREQUENCY_MEASUREMENTS);
    }

    #[test]
    fn a_kind_that_matches_none_of_the_three_leaves_the_list_empty() {
        let mut host = column(7);
        fill_measurements(&mut host);

        assert_eq!(host.cleared, 1);
        assert!(host.added.is_empty());
    }

    #[test]
    fn nothing_happens_at_all_when_the_column_is_not_offered() {
        let mut host = Column {
            offered: false,
            kind: 2,
            ..Column::default()
        };
        fill_measurements(&mut host);

        assert_eq!(host.cleared, 0);
        assert!(host.order.is_empty());
    }

    #[test]
    fn the_list_is_emptied_before_the_curve_is_readied_and_filled() {
        let mut host = column(1);
        fill_measurements(&mut host);

        assert_eq!(
            host.order,
            ["clear", "prepare", "add", "add", "add", "choose"]
        );
    }

    #[test]
    fn what_was_chosen_is_set_again_by_number_after_the_rebuild() {
        let mut host = Column {
            chosen: 4,
            ..column(2)
        };
        fill_measurements(&mut host);

        assert_eq!(host.choices, [4]);
    }

    #[test]
    fn a_number_that_meant_one_measurement_may_mean_another_afterwards() {
        // Position 4 is "Relative Ripple" against frequency and "YMAX"
        // against time; the same number survives the change.
        assert_eq!(FREQUENCY_MEASUREMENTS[4], "Relative Ripple");
        assert_eq!(TIME_MEASUREMENTS[4], "YMAX");
    }

    #[test]
    fn a_number_may_come_to_mean_nothing_at_all() {
        // Nothing sits at position 4 of the shortest list.
        assert!(LEVEL_MEASUREMENTS.len() <= 4);
    }
}
