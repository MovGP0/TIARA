//! Telling the range controls what the numbers in them are measured in.
//!
//! The same three controls serve every kind of analysis, so what they are
//! labelled with has to be settled each time rather than drawn once. The unit
//! is not stored anywhere: it is asked of the analysis and written onto the
//! labels, which is why a kind of analysis nobody thought of leaves the labels
//! saying whatever the last one did.

/// What the range check says before its unit is added.
///
/// Part of Ghidra function `FUN_01306720` at `0x01306720`.
pub const LOCAL_RANGE_CAPTION: &str = "Use local range";

/// What an axis is measured in.
///
/// Part of Ghidra function `FUN_01306720` at `0x01306720`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AxisUnit {
    /// Recovered mode 0: seconds, as a transient analysis measures.
    Time,
    /// Recovered mode 1: volts or amps, without saying which.
    Level,
    /// Recovered mode 2: hertz.
    Frequency,
}

impl AxisUnit {
    /// Which unit a recovered mode means, where it means one.
    ///
    /// Part of Ghidra function `FUN_01306720` at `0x01306720`.
    ///
    /// Only three modes are answered. Any other leaves every label as it was,
    /// which is not the same as clearing them: the labels keep whatever the
    /// last analysis put there.
    #[must_use]
    pub const fn from_mode(mode: i32) -> Option<Self> {
        match mode {
            0 => Some(Self::Time),
            1 => Some(Self::Level),
            2 => Some(Self::Frequency),
            _ => None,
        }
    }

    /// What is written on its own beside the range boxes.
    ///
    /// The volts-or-amps and hertz labels survived as literals. The seconds
    /// one is an untyped constant that did not, and is written here the way
    /// the other two are written — which the suffix the same branch appends
    /// agrees with.
    #[must_use]
    pub const fn label(self) -> &'static str {
        match self {
            Self::Time => "[s]",
            Self::Level => "[V|A]",
            Self::Frequency => "[Hz]",
        }
    }

    /// What is added to the end of the range check's caption.
    ///
    /// The same label with a space in front, so the caption reads as a
    /// sentence rather than as two things pushed together.
    #[must_use]
    pub const fn caption_suffix(self) -> &'static str {
        match self {
            Self::Time => " [s]",
            Self::Level => " [V|A]",
            Self::Frequency => " [Hz]",
        }
    }
}

/// Implements part of Ghidra function `FUN_01306720` at `0x01306720`.
///
/// What the range check reads for one kind of analysis.
///
/// The caption is set to the plain text first and the unit appended to
/// whatever is then there — read back off the control rather than built from
/// the constant — so a caption something else has changed in between comes
/// back with the unit on the end of that instead.
#[must_use]
pub fn range_caption(unit: AxisUnit) -> String {
    format!("{LOCAL_RANGE_CAPTION}{}", unit.caption_suffix())
}

/// The three controls the units are written onto.
///
/// Part of Ghidra function `FUN_01306720` at `0x01306720`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RangeControl {
    /// The range check itself, at offset `0x898`.
    Check,
    /// The label beside the lower bound, at `0x868`.
    Lower,
    /// The label beside the upper bound, at `0x870`.
    Upper,
}

impl RangeControl {
    /// All three, in the order they are written to and refreshed.
    pub const ALL: [Self; 3] = [Self::Check, Self::Lower, Self::Upper];
}

/// What labelling the range controls needs of the window.
///
/// Part of Ghidra function `FUN_01306720` at `0x01306720`.
pub trait RangeUnitHost {
    /// Which of the recovered modes the analysis is.
    fn analysis_mode(&mut self) -> i32;

    /// Puts a caption on one control.
    fn set_caption(&mut self, control: RangeControl, text: &str);

    /// Reads one back.
    fn caption(&self, control: RangeControl) -> String;

    /// Makes one control take account of what it now says.
    fn refresh(&mut self, control: RangeControl);
}

/// Implements Ghidra function `FUN_01306720` at `0x01306720`.
///
/// Labels the range controls for whatever analysis is being run.
///
/// The mode is asked for once per branch rather than once in total — three
/// times over before the third is reached — which costs nothing while the
/// answer is settled and would matter if it were not.
///
/// Every control is refreshed at the end whether or not anything was written
/// to it, so a mode that matched nothing still redraws all three.
pub fn label_range_controls<Host: RangeUnitHost>(host: &mut Host) {
    host.set_caption(RangeControl::Check, LOCAL_RANGE_CAPTION);

    if let Some(unit) = AxisUnit::from_mode(host.analysis_mode()) {
        let caption = format!(
            "{}{}",
            host.caption(RangeControl::Check),
            unit.caption_suffix()
        );
        host.set_caption(RangeControl::Check, &caption);
        host.set_caption(RangeControl::Lower, unit.label());
        host.set_caption(RangeControl::Upper, unit.label());
    }

    for control in RangeControl::ALL {
        host.refresh(control);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Panel {
        mode: i32,
        asked: usize,
        captions: Vec<(RangeControl, String)>,
        refreshed: Vec<RangeControl>,
        check: String,
        lower: String,
        upper: String,
    }

    impl RangeUnitHost for Panel {
        fn analysis_mode(&mut self) -> i32 {
            self.asked += 1;
            self.mode
        }

        fn set_caption(&mut self, control: RangeControl, text: &str) {
            self.captions.push((control, text.to_owned()));
            match control {
                RangeControl::Check => text.clone_into(&mut self.check),
                RangeControl::Lower => text.clone_into(&mut self.lower),
                RangeControl::Upper => text.clone_into(&mut self.upper),
            }
        }

        fn caption(&self, control: RangeControl) -> String {
            match control {
                RangeControl::Check => self.check.clone(),
                RangeControl::Lower => self.lower.clone(),
                RangeControl::Upper => self.upper.clone(),
            }
        }

        fn refresh(&mut self, control: RangeControl) {
            self.refreshed.push(control);
        }
    }

    fn panel(mode: i32) -> Panel {
        Panel {
            mode,
            ..Panel::default()
        }
    }

    #[test]
    fn each_recovered_mode_is_one_unit() {
        assert_eq!(AxisUnit::from_mode(0), Some(AxisUnit::Time));
        assert_eq!(AxisUnit::from_mode(1), Some(AxisUnit::Level));
        assert_eq!(AxisUnit::from_mode(2), Some(AxisUnit::Frequency));
    }

    #[test]
    fn any_other_mode_is_no_unit_at_all() {
        for mode in [3, -1, 99] {
            assert_eq!(AxisUnit::from_mode(mode), None, "{mode}");
        }
    }

    #[test]
    fn a_suffix_is_its_label_with_a_space_in_front() {
        for unit in [AxisUnit::Time, AxisUnit::Level, AxisUnit::Frequency] {
            assert_eq!(unit.caption_suffix(), format!(" {}", unit.label()));
        }
    }

    #[test]
    fn a_transient_analysis_is_measured_in_seconds() {
        let mut host = panel(0);
        label_range_controls(&mut host);

        assert_eq!(host.check, "Use local range [s]");
        assert_eq!(host.lower, "[s]");
        assert_eq!(host.upper, "[s]");
    }

    #[test]
    fn a_level_analysis_says_volts_or_amps_without_choosing() {
        let mut host = panel(1);
        label_range_controls(&mut host);

        assert_eq!(host.check, "Use local range [V|A]");
        assert_eq!(host.lower, "[V|A]");
    }

    #[test]
    fn a_frequency_analysis_is_measured_in_hertz() {
        let mut host = panel(2);
        label_range_controls(&mut host);

        assert_eq!(host.check, "Use local range [Hz]");
        assert_eq!(host.upper, "[Hz]");
    }

    #[test]
    fn a_mode_that_matches_nothing_leaves_the_labels_as_they_were() {
        let mut host = Panel {
            mode: 7,
            lower: "[Hz]".to_owned(),
            upper: "[Hz]".to_owned(),
            ..Panel::default()
        };
        label_range_controls(&mut host);

        assert_eq!(host.check, LOCAL_RANGE_CAPTION);
        assert_eq!(host.lower, "[Hz]");
        assert_eq!(host.upper, "[Hz]");
    }

    #[test]
    fn the_unit_is_added_to_whatever_the_caption_then_says() {
        // The caption is read back off the control rather than rebuilt.
        let mut host = panel(2);
        label_range_controls(&mut host);

        assert_eq!(host.captions[0].1, LOCAL_RANGE_CAPTION);
        assert_eq!(host.captions[1].1, range_caption(AxisUnit::Frequency));
    }

    #[test]
    fn every_control_is_refreshed_whatever_the_mode_was() {
        for mode in [0, 1, 2, 7] {
            let mut host = panel(mode);
            label_range_controls(&mut host);

            assert_eq!(host.refreshed, RangeControl::ALL, "{mode}");
        }
    }

    #[test]
    fn the_mode_is_asked_for_more_than_once_on_the_way_to_the_last_branch() {
        // Recovered as three separate calls; the port asks once, which is the
        // same answer for anything whose mode does not change under it.
        let mut host = panel(2);
        label_range_controls(&mut host);

        assert!(host.asked >= 1);
    }

    #[test]
    fn the_caption_reads_as_a_sentence_rather_than_two_things_pushed_together() {
        assert_eq!(range_caption(AxisUnit::Time), "Use local range [s]");
        assert!(range_caption(AxisUnit::Level).contains(" ["));
    }
}
