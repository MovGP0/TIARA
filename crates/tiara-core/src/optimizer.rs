//! Changing one part until another behaves as it should.
//!
//! This is what the five optimization commands mean. The sheet already
//! knows which two parts are meant - `Analysis > Select Optimization
//! Target` and `Select Control Object` pick them by clicking - and
//! [`crate::dc_solver`] can say what a circuit does. What was missing was
//! the search between them.
//!
//! **Bisection**, because the question is one-dimensional and the answer
//! has to be trustworthy. A value is looked for between two ends that the
//! goal lies between; the middle is tried, and whichever half still holds
//! the answer is kept. It cannot run away and it cannot mistake a local dip
//! for the answer, which a gradient search on a circuit easily does.
//!
//! **A bracket that does not hold the goal is refused rather than searched
//! outward from.** Widening the ends until something is found would answer
//! a different question from the one asked, and the caller knows what range
//! its part is allowed to take.

use crate::dc_solver::{self, Error};
use crate::spice_netlist::Netlist;

/// How many halvings before the answer is called good enough.
///
/// Each one halves what is left, so forty takes any range down by a factor
/// of about a million million - far past what a component value means.
pub const HALVINGS: usize = 40;

/// What is being aimed at.
#[derive(Debug, Clone, PartialEq)]
pub struct Goal {
    /// The node whose voltage is being shaped, as the netlist names it.
    pub node: String,
    /// What it should come to.
    pub value: f64,
}

/// What the search found.
#[derive(Debug, Clone, PartialEq)]
pub struct Found {
    /// What the control part should be worth.
    pub value: f64,
    /// What the target came to at that value.
    pub reached: f64,
}

/// Looks for the value of one part that brings a node to a goal.
///
/// `control` is the part to change, named as the netlist names it. The two
/// ends are the range it is allowed to take.
///
/// # Errors
///
/// [`Error::Beyond`] where the circuit has no such part or no such node,
/// and [`Error::DoesNotSettle`] where the range makes no sense or does not
/// hold the goal between its ends.
pub fn optimise(
    netlist: &Netlist,
    control: &str,
    goal: &Goal,
    from: f64,
    to: f64,
) -> Result<Found, Error> {
    let sensible = from.is_finite() && to.is_finite() && to > from;
    if !sensible {
        return Err(Error::DoesNotSettle);
    }
    let which = netlist
        .lines
        .iter()
        .position(|line| {
            line.split_whitespace()
                .next()
                .is_some_and(|name| name.eq_ignore_ascii_case(control))
        })
        .ok_or_else(|| Error::Beyond(control.to_owned()))?;

    let missed = |value: f64| -> Result<f64, Error> {
        let mut lines = netlist.lines.clone();
        lines[which] = with_value(&netlist.lines[which], value)?;
        let table = dc_solver::operating_point(&Netlist {
            lines,
            ..netlist.clone()
        })?;
        let reached = table
            .column(&format!("V({})", goal.node))
            .and_then(|it| it.first().copied())
            .ok_or_else(|| Error::Beyond(goal.node.clone()))?;
        Ok(reached - goal.value)
    };

    let (mut low, mut high) = (from, to);
    let (at_low, at_high) = (missed(low)?, missed(high)?);
    // The goal has to lie between the ends, or there is nothing here to
    // find and saying so is better than returning an end.
    if at_low.signum() == at_high.signum() {
        return Err(Error::DoesNotSettle);
    }

    for _ in 0..HALVINGS {
        let middle = f64::midpoint(low, high);
        let at_middle = missed(middle)?;
        if at_middle == 0.0 {
            return Ok(Found {
                value: middle,
                reached: goal.value,
            });
        }
        if at_middle.signum() == at_low.signum() {
            low = middle;
        } else {
            high = middle;
        }
    }

    let value = f64::midpoint(low, high);
    Ok(Found {
        value,
        reached: missed(value)? + goal.value,
    })
}

/// One line of a netlist with its value changed.
fn with_value(line: &str, value: f64) -> Result<String, Error> {
    let words: Vec<&str> = line.split_whitespace().collect();
    let (Some(name), Some(from), Some(to)) = (words.first(), words.get(1), words.get(2)) else {
        return Err(Error::Unreadable(line.to_owned()));
    };
    Ok(format!("{name} {from} {to} {value}"))
}

#[cfg(test)]
mod tests {
    use super::{Goal, optimise};
    use crate::dc_solver::Error;
    use crate::spice_netlist::{Analysis, Netlist};

    fn a_netlist(lines: &[&str]) -> Netlist {
        Netlist {
            title: "Test".to_owned(),
            lines: lines.iter().map(|it| (*it).to_owned()).collect(),
            wanting: Vec::new(),
            asking: Some(Analysis::OperatingPoint),
        }
    }

    fn a_divider() -> Netlist {
        a_netlist(&["V1 1 0 10", "R1 1 2 1k", "R2 2 0 1k"])
    }

    #[test]
    fn it_finds_the_resistor_that_makes_the_divider_divide() {
        // 10 V across R1 and R2 puts V2 = 10 * R2 / (R1 + R2). For 2.5 V
        // with R1 at 1k, R2 must be 1000/3 - which is worked out here
        // rather than looked up, so the test says what it means.
        let found = optimise(
            &a_divider(),
            "R2",
            &Goal {
                node: "2".to_owned(),
                value: 2.5,
            },
            1.0,
            10e3,
        )
        .unwrap();

        let wanted = 1000.0 * 2.5 / (10.0 - 2.5);
        assert!(
            (found.value - wanted).abs() < 1e-6,
            "{} against {wanted}",
            found.value
        );
        assert!((found.reached - 2.5).abs() < 1e-9, "{}", found.reached);
    }

    #[test]
    fn it_finds_the_other_resistor_just_as_well() {
        let found = optimise(
            &a_divider(),
            "R1",
            &Goal {
                node: "2".to_owned(),
                value: 7.5,
            },
            1.0,
            10e3,
        )
        .unwrap();

        // V2 = 10 * R2 / (R1 + R2), so R1 = R2 * (10 - V2) / V2.
        let wanted = 1000.0 * (10.0 - 7.5) / 7.5;
        assert!((found.value - wanted).abs() < 1e-6, "{}", found.value);
    }

    #[test]
    fn a_goal_the_range_does_not_hold_is_refused_rather_than_searched_for() {
        // A divider cannot put more at the middle than the source has.
        let found = optimise(
            &a_divider(),
            "R2",
            &Goal {
                node: "2".to_owned(),
                value: 20.0,
            },
            1.0,
            10e3,
        );
        assert_eq!(found, Err(Error::DoesNotSettle));
    }

    #[test]
    fn a_part_the_circuit_has_not_got_is_refused_by_name() {
        let found = optimise(
            &a_divider(),
            "R9",
            &Goal {
                node: "2".to_owned(),
                value: 5.0,
            },
            1.0,
            10e3,
        );
        assert_eq!(found, Err(Error::Beyond("R9".to_owned())));
    }

    #[test]
    fn a_node_the_circuit_has_not_got_is_refused_by_name() {
        let found = optimise(
            &a_divider(),
            "R2",
            &Goal {
                node: "9".to_owned(),
                value: 5.0,
            },
            1.0,
            10e3,
        );
        assert_eq!(found, Err(Error::Beyond("9".to_owned())));
    }

    #[test]
    fn a_range_that_makes_no_sense_is_refused() {
        let goal = Goal {
            node: "2".to_owned(),
            value: 5.0,
        };
        assert_eq!(
            optimise(&a_divider(), "R2", &goal, 10e3, 1.0),
            Err(Error::DoesNotSettle)
        );
        assert_eq!(
            optimise(&a_divider(), "R2", &goal, 1.0, 1.0),
            Err(Error::DoesNotSettle)
        );
    }

    #[test]
    fn a_source_can_be_the_part_that_is_changed() {
        // Nothing says the control has to be a resistor: to put 2 V at the
        // middle of an even divider the source must be 4 V.
        let found = optimise(
            &a_divider(),
            "V1",
            &Goal {
                node: "2".to_owned(),
                value: 2.0,
            },
            0.0,
            100.0,
        )
        .unwrap();
        assert!((found.value - 4.0).abs() < 1e-6, "{}", found.value);
    }

    #[test]
    fn it_works_on_a_circuit_that_bends_as_well() {
        // A diode and a resistor: what resistor puts 0.6 V across the
        // diode? Checked by putting the answer back into the circuit.
        let circuit = a_netlist(&["V1 1 0 5", "R1 1 2 1k", "D1 2 0 D"]);
        let found = optimise(
            &circuit,
            "R1",
            &Goal {
                node: "2".to_owned(),
                value: 0.6,
            },
            1.0,
            1e6,
        )
        .unwrap();

        assert!((found.reached - 0.6).abs() < 1e-6, "{}", found.reached);
        // And the resistor is carrying what the diode wants at 0.6 V.
        let through = (5.0 - 0.6) / found.value;
        let wanted = crate::dc_solver::diode::current(0.6);
        assert!(
            (through - wanted).abs() < wanted * 1e-3,
            "{through} against {wanted}"
        );
    }
}
