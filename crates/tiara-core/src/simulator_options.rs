//! Checking over the simulator options before a run.
//!
//! Every option is looked at in turn and whatever is wrong with any of them is
//! gathered up, so one report names all of them rather than stopping at the
//! first. That is the whole shape of it: the checking does not decide anything
//! and does not correct anything — it only says what it found, and only when
//! anybody is listening.

/// What the gathered complaints are reported under.
///
/// Part of Ghidra function `FUN_01b0dbf0` at `0x01B0DBF0`.
pub const REPORT_PREFIX: &str = "Analysis Options: ";

/// One option the simulator is given.
///
/// Part of Ghidra function `FUN_01b0dbf0` at `0x01B0DBF0`.
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct SimulatorOption {
    /// Which option it is, as the checker numbers them.
    pub index: u8,
    /// How it is written in the settings, trailing equals sign and all.
    pub name: &'static str,
    /// The value the checker supplies when the option has none.
    ///
    /// Only three of them have one, which says that the rest are either
    /// always set or always optional — the checker cannot tell the difference
    /// and neither can this.
    pub default: Option<f64>,
}

impl SimulatorOption {
    /// The option's name without the equals sign.
    #[must_use]
    pub fn key(&self) -> &'static str {
        self.name.trim_end_matches('=')
    }
}

/// Every option checked, in the order they are checked.
///
/// Part of Ghidra function `FUN_01b0dbf0` at `0x01B0DBF0`.
///
/// RECOVERED DEFECT: `ZeroThres=` is given the same number as `TRMinStep=`.
/// The numbers otherwise run from one upward without a gap, so this is not a
/// spare number being reused but two options sharing one — and anything that
/// looks an option up by number finds the earlier of the two and can never
/// reach the later.
pub const SIMULATOR_OPTIONS: [SimulatorOption; 43] = [
    SimulatorOption {
        index: 0x01,
        name: "TNOM=",
        default: None,
    },
    SimulatorOption {
        index: 0x02,
        name: "ABSTOL=",
        default: None,
    },
    SimulatorOption {
        index: 0x03,
        name: "ABSTOLD=",
        default: None,
    },
    SimulatorOption {
        index: 0x04,
        name: "VNTOL=",
        default: None,
    },
    SimulatorOption {
        index: 0x05,
        name: "RELTOL=",
        default: None,
    },
    SimulatorOption {
        index: 0x06,
        name: "GMIN=",
        default: None,
    },
    SimulatorOption {
        index: 0x07,
        name: "PIVREL=",
        default: None,
    },
    SimulatorOption {
        index: 0x08,
        name: "PIVTOL=",
        default: None,
    },
    SimulatorOption {
        index: 0x09,
        name: "Bypass=",
        default: None,
    },
    SimulatorOption {
        index: 0x0A,
        name: "ASStep=",
        default: None,
    },
    SimulatorOption {
        index: 0x0B,
        name: "ITL1=",
        default: Some(150.0),
    },
    SimulatorOption {
        index: 0x0C,
        name: "ITL2=",
        default: Some(20.0),
    },
    SimulatorOption {
        index: 0x0D,
        name: "MINSrcStep=",
        default: None,
    },
    SimulatorOption {
        index: 0x0E,
        name: "SrcStep=",
        default: None,
    },
    SimulatorOption {
        index: 0x0F,
        name: "FirstSrcStep=",
        default: None,
    },
    SimulatorOption {
        index: 0x10,
        name: "ITL4=",
        default: Some(10.0),
    },
    SimulatorOption {
        index: 0x11,
        name: "TRAbsVErr=",
        default: None,
    },
    SimulatorOption {
        index: 0x12,
        name: "TRAbsCErr=",
        default: None,
    },
    SimulatorOption {
        index: 0x13,
        name: "TRAbsRErr=",
        default: None,
    },
    SimulatorOption {
        index: 0x14,
        name: "TRTOL=",
        default: None,
    },
    SimulatorOption {
        index: 0x15,
        name: "TRItCont=",
        default: None,
    },
    SimulatorOption {
        index: 0x16,
        name: "CHGTOL=",
        default: None,
    },
    SimulatorOption {
        index: 0x17,
        name: "TRMaxStep=",
        default: None,
    },
    SimulatorOption {
        index: 0x18,
        name: "TRMinStep=",
        default: None,
    },
    SimulatorOption {
        index: 0x19,
        name: "TRSignStep=",
        default: None,
    },
    SimulatorOption {
        index: 0x1A,
        name: "TRFirstStep=",
        default: None,
    },
    SimulatorOption {
        index: 0x1B,
        name: "OPAbsErr=",
        default: None,
    },
    SimulatorOption {
        index: 0x1C,
        name: "OPRelErr=",
        default: None,
    },
    SimulatorOption {
        index: 0x1D,
        name: "ENSemiCaps=",
        default: None,
    },
    SimulatorOption {
        index: 0x1E,
        name: "GSHUNT=",
        default: None,
    },
    SimulatorOption {
        index: 0x1F,
        name: "TRMaxSavePoints=",
        default: None,
    },
    SimulatorOption {
        index: 0x20,
        name: "TRIMaxTol=",
        default: None,
    },
    SimulatorOption {
        index: 0x21,
        name: "TRLTEVolt=",
        default: None,
    },
    SimulatorOption {
        index: 0x22,
        name: "WaveQ=",
        default: None,
    },
    SimulatorOption {
        index: 0x23,
        name: "AudioL=",
        default: None,
    },
    SimulatorOption {
        index: 0x18,
        name: "ZeroThres=",
        default: None,
    },
    SimulatorOption {
        index: 0x24,
        name: "DCIMaxVInc=",
        default: None,
    },
    SimulatorOption {
        index: 0x25,
        name: "DCIMaxCInc=",
        default: None,
    },
    SimulatorOption {
        index: 0x26,
        name: "DCIMaxRInc=",
        default: None,
    },
    SimulatorOption {
        index: 0x27,
        name: "ENDCILim=",
        default: None,
    },
    SimulatorOption {
        index: 0x28,
        name: "CSHUNT=",
        default: None,
    },
    SimulatorOption {
        index: 0x29,
        name: "UseICforDC=",
        default: None,
    },
    SimulatorOption {
        index: 0x2A,
        name: "CMIN=",
        default: None,
    },
];

/// Implements part of Ghidra function `FUN_01b0dbf0` at `0x01B0DBF0`.
///
/// The option one number names.
///
/// The first of them, which for the one shared number means the later option
/// is unreachable this way.
#[must_use]
pub fn option_by_index(index: u8) -> Option<&'static SimulatorOption> {
    SIMULATOR_OPTIONS
        .iter()
        .find(|option| option.index == index)
}

/// Implements part of Ghidra function `FUN_01b0dbf0` at `0x01B0DBF0`.
///
/// Every number given to more than one option.
#[must_use]
pub fn colliding_indices() -> Vec<u8> {
    let mut seen = Vec::new();
    let mut twice = Vec::new();
    for option in SIMULATOR_OPTIONS {
        if seen.contains(&option.index) {
            if !twice.contains(&option.index) {
                twice.push(option.index);
            }
        } else {
            seen.push(option.index);
        }
    }
    twice.sort_unstable();
    twice
}

/// What checking the options needs of the simulator.
///
/// Part of Ghidra function `FUN_01b0dbf0` at `0x01B0DBF0`.
pub trait OptionCheckHost {
    /// Looks at one option and says what is wrong with it, if anything.
    fn check(&mut self, option: &SimulatorOption) -> Option<String>;

    /// Reports everything that was wrong.
    fn report(&mut self, message: &str);
}

/// Implements Ghidra function `FUN_01b0dbf0` at `0x01B0DBF0`.
///
/// Looks over every option and reports whatever was wrong with any of them.
///
/// Every option is checked whether or not an earlier one was already wrong, so
/// what is reported is the whole account and not the first thing found. The
/// report is raised only when something was wrong **and** the caller did not
/// ask to be spared it — and being spared it suppresses only the telling: the
/// checking still happens in full, which is what a caller that wanted the
/// checking without the interruption needs.
///
/// Returns everything that was wrong, whether or not it was reported.
pub fn check_options<Host: OptionCheckHost>(host: &mut Host, quiet: bool) -> Option<String> {
    let mut gathered = String::new();
    for option in &SIMULATOR_OPTIONS {
        if let Some(complaint) = host.check(option) {
            gathered.push_str(&complaint);
        }
    }

    if gathered.is_empty() {
        return None;
    }
    if !quiet {
        host.report(&format!("{REPORT_PREFIX}{gathered}"));
    }
    Some(gathered)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Simulator {
        wrong: Vec<&'static str>,
        looked_at: Vec<&'static str>,
        reported: Vec<String>,
    }

    impl OptionCheckHost for Simulator {
        fn check(&mut self, option: &SimulatorOption) -> Option<String> {
            self.looked_at.push(option.name);
            if self.wrong.contains(&option.name) {
                Some(format!("{} is wrong. ", option.key()))
            } else {
                None
            }
        }

        fn report(&mut self, message: &str) {
            self.reported.push(message.to_owned());
        }
    }

    #[test]
    fn the_recovered_options_are_all_there_and_named_with_an_equals_sign() {
        assert_eq!(SIMULATOR_OPTIONS.len(), 43);
        for option in SIMULATOR_OPTIONS {
            assert!(option.name.ends_with('='), "{}", option.name);
            assert!(!option.key().ends_with('='), "{}", option.name);
        }
    }

    #[test]
    fn three_options_carry_a_value_of_their_own() {
        let carried: Vec<(&str, f64)> = SIMULATOR_OPTIONS
            .iter()
            .filter_map(|option| option.default.map(|value| (option.key(), value)))
            .collect();

        assert_eq!(carried, [("ITL1", 150.0), ("ITL2", 20.0), ("ITL4", 10.0)]);
    }

    #[test]
    fn one_number_is_given_to_two_options() {
        assert_eq!(colliding_indices(), [0x18]);
    }

    #[test]
    fn the_later_of_the_two_cannot_be_reached_by_its_number() {
        let shared = colliding_indices()[0];
        let sharing: Vec<&str> = SIMULATOR_OPTIONS
            .iter()
            .filter(|option| option.index == shared)
            .map(SimulatorOption::key)
            .collect();

        assert_eq!(sharing, ["TRMinStep", "ZeroThres"]);
        assert_eq!(
            option_by_index(shared).map(SimulatorOption::key),
            Some("TRMinStep")
        );
    }

    #[test]
    fn the_numbers_otherwise_run_from_one_without_a_gap() {
        let mut numbers: Vec<u8> = SIMULATOR_OPTIONS
            .iter()
            .map(|option| option.index)
            .collect();
        numbers.sort_unstable();
        numbers.dedup();

        assert_eq!(numbers[0], 1);
        for pair in numbers.windows(2) {
            assert_eq!(pair[1], pair[0] + 1);
        }
    }

    #[test]
    fn a_number_nothing_uses_names_nothing() {
        assert!(option_by_index(0).is_none());
        assert!(option_by_index(0xFF).is_none());
    }

    #[test]
    fn every_option_is_looked_at_even_once_one_is_wrong() {
        let mut simulator = Simulator {
            wrong: vec!["TNOM="],
            ..Simulator::default()
        };
        check_options(&mut simulator, false);

        assert_eq!(simulator.looked_at.len(), SIMULATOR_OPTIONS.len());
    }

    #[test]
    fn one_report_names_everything_that_was_wrong() {
        let mut simulator = Simulator {
            wrong: vec!["TNOM=", "CMIN="],
            ..Simulator::default()
        };
        let gathered = check_options(&mut simulator, false).expect("two are wrong");

        assert!(gathered.contains("TNOM"));
        assert!(gathered.contains("CMIN"));
        assert_eq!(simulator.reported.len(), 1);
        assert!(simulator.reported[0].starts_with(REPORT_PREFIX));
    }

    #[test]
    fn nothing_is_reported_when_nothing_is_wrong() {
        let mut simulator = Simulator::default();

        assert_eq!(check_options(&mut simulator, false), None);
        assert!(simulator.reported.is_empty());
    }

    #[test]
    fn being_spared_the_report_suppresses_only_the_telling() {
        let mut simulator = Simulator {
            wrong: vec!["GMIN="],
            ..Simulator::default()
        };
        let gathered = check_options(&mut simulator, true);

        assert!(gathered.is_some());
        assert_eq!(simulator.looked_at.len(), SIMULATOR_OPTIONS.len());
        assert!(simulator.reported.is_empty());
    }

    #[test]
    fn the_options_are_looked_at_in_the_recovered_order() {
        let mut simulator = Simulator::default();
        check_options(&mut simulator, false);
        let expected: Vec<&str> = SIMULATOR_OPTIONS.iter().map(|option| option.name).collect();

        assert_eq!(simulator.looked_at, expected);
    }
}
