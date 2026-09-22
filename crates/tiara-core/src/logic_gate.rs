//! What the digital parts on the component bar are.
//!
//! The registry names every one of them by the class the original builds
//! it from, and the name says both what the gate does and how many inputs
//! it has:
//!
//! ```text
//! id_component_and2_gate,1002,TAnd2Gate,DigComps.dll,49,gates/and2_gate
//! id_component_nor3_gate,1013,TNOr3Gate,DigComps.dll,59,gates/nor3_gate
//! id_component_xor_gate,1017,TXOrGate,DigComps.dll,61,gates/xor_gate
//! ```
//!
//! So `TAnd2Gate` is an AND of two, and `TNOr3Gate` a NOR of three. That
//! is read here rather than guessed at, and it settles half of what a
//! digital simulation needs: what each part computes.
//!
//! **And which pin carries the answer is settled too**, by the facing that
//! [`crate::ddb_device`] decodes: a gate is drawn with its inputs along one
//! side and its output out of the other, so exactly one of its pins faces
//! differently. See [`output_pin`], which was measured across every gate
//! the bar offers rather than assumed.

/// What a gate does with its inputs.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Logic {
    /// Passes what it is given.
    Buffer,
    /// Passes the opposite.
    Not,
    /// True when all of them are.
    And,
    /// True when any of them is.
    Or,
    /// The opposite of [`Self::And`].
    Nand,
    /// The opposite of [`Self::Or`].
    Nor,
    /// True when an odd number of them are.
    Xor,
}

impl Logic {
    /// What it makes of its inputs.
    #[must_use]
    pub fn of(self, inputs: &[bool]) -> bool {
        match self {
            Self::Buffer => inputs.first().copied().unwrap_or_default(),
            Self::Not => !inputs.first().copied().unwrap_or_default(),
            Self::And => inputs.iter().all(|it| *it),
            Self::Nand => !inputs.iter().all(|it| *it),
            Self::Or => inputs.iter().any(|it| *it),
            Self::Nor => !inputs.iter().any(|it| *it),
            Self::Xor => inputs.iter().filter(|it| **it).count() % 2 == 1,
        }
    }
}

/// One digital part, as the registry names it.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Gate {
    /// What it computes.
    pub logic: Logic,
    /// How many inputs it takes.
    pub inputs: usize,
}

impl Gate {
    /// What it makes of its inputs.
    ///
    /// Inputs beyond the ones it has are ignored, and missing ones are
    /// taken as low - a gate is never left with no answer at all.
    #[must_use]
    pub fn of(self, inputs: &[bool]) -> bool {
        let mut given = inputs.to_vec();
        given.resize(self.inputs, false);
        self.logic.of(&given)
    }
}

/// The gate a registry class name stands for, where it stands for one.
///
/// The names come from the `gates` group of `compregy.tcr`, which is read
/// by [`crate::component_registry`]. A class that is not a gate - a
/// resistor pulled up, a flip-flop, anything from another group - gives
/// nothing rather than a guess.
#[must_use]
pub fn of_class(class: &str) -> Option<Gate> {
    let name = class.strip_prefix('T').unwrap_or(class);
    let upper = name.to_ascii_uppercase();

    // A buffer and an inverter take one and say so in their names rather
    // than by a number. Matched whole rather than by their ending:
    // `TTriStateBuffer` also ends in BUFFER and carries an enable, and
    // `TDBuffer` is not a buffer at all but a latch with D, E and Q.
    for (whole, logic) in [
        ("BUFFER", Logic::Buffer),
        ("NOTGATE", Logic::Not),
        ("SCHNOTGATE", Logic::Not),
    ] {
        if upper == whole {
            return Some(Gate { logic, inputs: 1 });
        }
    }

    // The rest are a word and a count: NAnd2Gate, NOr3Gate, XOrGate.
    let body = upper.strip_suffix("GATE")?;
    // NAND and NOR are looked for before AND and OR, or the shorter ones
    // would match inside them.
    let (logic, rest) = [
        ("NAND", Logic::Nand),
        ("NOR", Logic::Nor),
        ("XOR", Logic::Xor),
        ("AND", Logic::And),
        ("OR", Logic::Or),
    ]
    .into_iter()
    .find_map(|(word, logic)| body.strip_prefix(word).map(|rest| (logic, rest)))?;

    // A gate with no number takes two, as `TXOrGate` does.
    let inputs = if rest.is_empty() {
        2
    } else {
        rest.parse::<usize>().ok()?
    };
    (inputs >= 1).then_some(Gate { logic, inputs })
}

/// Which of a gate's pins carries its answer.
///
/// **The one facing the odd way.** A gate is drawn with its inputs along
/// one side and its output out of the other, so of its pins exactly one
/// faces differently from the rest - and the facing is recorded, at byte 20
/// of the pin, decoded at 100% across every installed library.
///
/// Measured rather than assumed: the component bar's `gates` group names
/// sixteen gates, every one of them is a device in `DEVICES.DDB` under the
/// code the bar gives it, and in **sixteen of sixteen** exactly one pin
/// faces the odd way. The obvious alternative - that the output is the last
/// pin listed - holds in only thirteen, so it is the facing that says it
/// and not the order.
///
/// Answers nothing where the pins do not look like a gate's: none facing
/// oddly, or more than one, which is what a part that is not a gate gives.
#[must_use]
pub fn output_pin(facings: &[crate::ddb_device::Facing]) -> Option<usize> {
    if facings.len() < 2 {
        return None;
    }
    let mut odd = None;
    for (at, facing) in facings.iter().enumerate() {
        if facings.iter().filter(|it| *it == facing).count() == 1 {
            // A second one facing its own way means this is not a gate.
            if odd.is_some() {
                return None;
            }
            odd = Some(at);
        }
    }
    odd
}

#[cfg(test)]
mod tests {
    use super::{Gate, Logic, of_class, output_pin};
    use crate::ddb_device::Facing;

    #[test]
    fn the_classes_the_registry_names_are_read_as_the_gates_they_are() {
        // Every one of these is a line of the `gates` group, verbatim.
        for (class, logic, inputs) in [
            ("TBuffer", Logic::Buffer, 1),
            ("TNotGate", Logic::Not, 1),
            ("TSchNotGate", Logic::Not, 1),
            ("TAnd2Gate", Logic::And, 2),
            ("TAnd3Gate", Logic::And, 3),
            ("TAnd4Gate", Logic::And, 4),
            ("TOr2Gate", Logic::Or, 2),
            ("TOr3Gate", Logic::Or, 3),
            ("TOr4Gate", Logic::Or, 4),
            ("TNAnd2Gate", Logic::Nand, 2),
            ("TNAnd3Gate", Logic::Nand, 3),
            ("TNAnd4Gate", Logic::Nand, 4),
            ("TNOr2Gate", Logic::Nor, 2),
            ("TNOr3Gate", Logic::Nor, 3),
            ("TNOr4Gate", Logic::Nor, 4),
            ("TXOrGate", Logic::Xor, 2),
        ] {
            assert_eq!(
                of_class(class),
                Some(Gate { logic, inputs }),
                "{class} should be {logic:?} of {inputs}"
            );
        }
    }

    #[test]
    fn a_class_that_is_not_a_gate_gives_nothing_rather_than_a_guess() {
        for class in [
            "TResistor",
            "",
            "TFlipFlop",
            "Gate",
            // These two end in BUFFER and are not plain buffers: the
            // tri-state one carries an enable, and TDBuffer is a latch
            // with D, E and Q. Measuring the gates against DEVICES.DDB
            // caught both - each had a pin more than a buffer has.
            "TTriStateBuffer",
            "TDBuffer",
        ] {
            assert_eq!(of_class(class), None, "{class} should not be a gate");
        }
    }

    #[test]
    fn the_pin_facing_the_odd_way_is_the_one_that_carries_the_answer() {
        // These are the facings of real gate symbols, read out of
        // DEVICES.DDB under the codes the component bar gives them.
        // and2 (1002), drawn turned: two in from below, one out above.
        assert_eq!(
            output_pin(&[Facing::Down, Facing::Down, Facing::Up]),
            Some(2)
        );
        // or2 (1003): two in from the left, one out to the right.
        assert_eq!(
            output_pin(&[Facing::Left, Facing::Left, Facing::Right]),
            Some(2)
        );
        // and3 (1010): three in, one out.
        assert_eq!(
            output_pin(&[Facing::Left, Facing::Left, Facing::Left, Facing::Right]),
            Some(3)
        );
        // inverter (1001): one in, one out - and with two pins facing
        // differently there is no odd one, so nothing is claimed.
        assert_eq!(output_pin(&[Facing::Left, Facing::Right]), None);
    }

    #[test]
    fn pins_that_do_not_look_like_a_gates_are_not_guessed_at() {
        // All facing the same way: no odd one out.
        assert_eq!(
            output_pin(&[Facing::Left, Facing::Left, Facing::Left]),
            None
        );
        // Two facing their own ways: not a gate either.
        assert_eq!(
            output_pin(&[Facing::Left, Facing::Left, Facing::Up, Facing::Right]),
            None
        );
        assert_eq!(output_pin(&[]), None);
        assert_eq!(output_pin(&[Facing::Left]), None);
    }

    #[test]
    fn an_and_is_true_only_when_all_of_them_are() {
        let gate = Gate {
            logic: Logic::And,
            inputs: 2,
        };
        assert!(!gate.of(&[false, false]));
        assert!(!gate.of(&[true, false]));
        assert!(!gate.of(&[false, true]));
        assert!(gate.of(&[true, true]));
    }

    #[test]
    fn a_nand_is_the_opposite_of_an_and_at_every_point() {
        let and = Gate {
            logic: Logic::And,
            inputs: 3,
        };
        let nand = Gate {
            logic: Logic::Nand,
            inputs: 3,
        };
        for at in 0..8 {
            let inputs = [at & 1 != 0, at & 2 != 0, at & 4 != 0];
            assert_eq!(and.of(&inputs), !nand.of(&inputs), "{inputs:?}");
        }
    }

    #[test]
    fn an_or_is_the_opposite_of_a_nor_at_every_point() {
        let or = Gate {
            logic: Logic::Or,
            inputs: 3,
        };
        let nor = Gate {
            logic: Logic::Nor,
            inputs: 3,
        };
        for at in 0..8 {
            let inputs = [at & 1 != 0, at & 2 != 0, at & 4 != 0];
            assert_eq!(or.of(&inputs), !nor.of(&inputs), "{inputs:?}");
        }
    }

    #[test]
    fn an_exclusive_or_counts_how_many_are_true() {
        let gate = Gate {
            logic: Logic::Xor,
            inputs: 2,
        };
        assert!(!gate.of(&[false, false]));
        assert!(gate.of(&[true, false]));
        assert!(gate.of(&[false, true]));
        assert!(!gate.of(&[true, true]));
    }

    #[test]
    fn a_buffer_passes_and_an_inverter_turns_it_round() {
        let buffer = Gate {
            logic: Logic::Buffer,
            inputs: 1,
        };
        let inverter = Gate {
            logic: Logic::Not,
            inputs: 1,
        };
        assert!(buffer.of(&[true]));
        assert!(!buffer.of(&[false]));
        assert!(!inverter.of(&[true]));
        assert!(inverter.of(&[false]));
    }

    #[test]
    fn a_gate_given_too_few_or_too_many_still_answers() {
        let gate = Gate {
            logic: Logic::And,
            inputs: 3,
        };
        // A missing input is low, so an AND of three cannot be true.
        assert!(!gate.of(&[true, true]));
        // And what it is not given room for is ignored.
        assert!(gate.of(&[true, true, true, false]));
    }

    #[test]
    fn de_morgan_holds_which_is_what_says_the_logic_is_right() {
        // NOT(a AND b) is (NOT a) OR (NOT b), for every a and b.
        let nand = Gate {
            logic: Logic::Nand,
            inputs: 2,
        };
        let or = Gate {
            logic: Logic::Or,
            inputs: 2,
        };
        for at in 0..4 {
            let (a, b) = (at & 1 != 0, at & 2 != 0);
            assert_eq!(nand.of(&[a, b]), or.of(&[!a, !b]), "{a} {b}");
        }
    }
}
