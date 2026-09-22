//! Working out what a circuit of gates does.
//!
//! Nothing here is about voltages. A net is high or low, a gate makes its
//! answer from what is on its inputs, and the whole thing is settled by
//! doing that over and over until nothing changes.
//!
//! **Everything it needs is known now.** What each gate computes and how
//! many inputs it takes come from the class the component bar names it by
//! ([`crate::logic_gate::of_class`]); which pin carries the answer comes
//! from the facing, measured across every gate the bar offers
//! ([`crate::logic_gate::output_pin`]); and which nets the pins sit on come
//! from [`crate::netlist`].
//!
//! **A circuit that never settles is said not to, rather than stopped at
//! wherever it had reached.** Two inverters nose to tail are a circuit with
//! no answer, and a ring of three is an oscillator; both are real things
//! someone may draw, and returning the state of the last go round as though
//! it were the answer would be worse than saying there is none.

use std::collections::BTreeMap;

use crate::logic_gate::{self, Gate};
use crate::netlist;
use crate::schematic_document::{Document, Id};

/// How many times round before a circuit is called unsettled.
///
/// A settling circuit takes at most one go per gate, since each go carries
/// an answer at least one gate further; anything past that is going round.
pub const GOES: usize = 2;

/// What can go wrong.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Error {
    /// Nothing on the sheet is a gate.
    NothingDigital,
    /// The circuit never settles. The text names a net that keeps
    /// changing, which is where someone would start looking.
    NeverSettles(String),
    /// A part looks like a gate but its pins do not say which is the
    /// output. The text names it.
    NoOutput(String),
}

impl std::fmt::Display for Error {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::NothingDigital => write!(f, "there are no gates on this sheet"),
            Self::NeverSettles(net) => {
                write!(f, "the circuit never settles - {net} keeps changing")
            }
            Self::NoOutput(part) => write!(f, "{part}'s pins do not say which is its output"),
        }
    }
}

impl std::error::Error for Error {}

/// One gate, as the solver holds it.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Wired {
    /// Which part it is.
    pub part: Id,
    /// What it computes.
    pub gate: Gate,
    /// The nets its inputs sit on, in the order the pins are drawn.
    pub inputs: Vec<u32>,
    /// The net its answer goes to.
    pub output: u32,
}

/// What every net settled to.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Settled {
    /// Each net and whether it is high.
    pub nets: BTreeMap<u32, bool>,
    /// How many goes it took.
    pub goes: usize,
}

impl Settled {
    /// Whether a net is high.
    #[must_use]
    pub fn high(&self, net: u32) -> bool {
        self.nets.get(&net).copied().unwrap_or_default()
    }
}

/// The gates on a sheet, wired to the nets they sit on.
///
/// `class_of` says what class a part's kind is built from - the component
/// registry answers that - and anything it does not call a gate is passed
/// over, so a sheet of resistors gives nothing rather than a mistake.
///
/// # Errors
///
/// [`Error::NoOutput`] where a part is a gate by its class but its pins do
/// not say which one carries the answer.
pub fn wired(
    document: &Document,
    class_of: &impl Fn(&str) -> Option<String>,
) -> Result<Vec<Wired>, Error> {
    let nets = netlist::nets(document);
    let net_at = |at: crate::schematic_document::Point| -> Option<u32> {
        nets.iter().find(|net| net.holds(at)).map(|net| net.number)
    };

    let mut found = Vec::new();
    for part in document.parts() {
        if part.hidden {
            continue;
        }
        let Some(gate) = class_of(&part.kind).and_then(|class| logic_gate::of_class(&class)) else {
            continue;
        };

        let facings: Vec<crate::ddb_device::Facing> =
            part.pins.iter().map(|pin| pin.facing).collect();
        let Some(which) = logic_gate::output_pin(&facings) else {
            return Err(Error::NoOutput(part.label.clone()));
        };

        let places = part.pin_places();
        let Some(output) = places.get(which).and_then(|(_, at)| net_at(*at)) else {
            continue;
        };
        let inputs: Vec<u32> = places
            .iter()
            .enumerate()
            .filter(|(at, _)| *at != which)
            .filter_map(|(_, (_, at))| net_at(*at))
            .collect();

        found.push(Wired {
            part: part.id,
            gate,
            inputs,
            output,
        });
    }
    Ok(found)
}

/// Settles a circuit of gates.
///
/// `driven` says which nets are held high from outside - what a signal
/// generator or a switch would put there. Everything else starts low.
///
/// # Errors
///
/// [`Error::NothingDigital`] where there are no gates, and
/// [`Error::NeverSettles`] where the circuit goes round for ever.
pub fn settle(gates: &[Wired], driven: &BTreeMap<u32, bool>) -> Result<Settled, Error> {
    if gates.is_empty() {
        return Err(Error::NothingDigital);
    }

    let mut nets: BTreeMap<u32, bool> = driven.clone();
    for gate in gates {
        nets.entry(gate.output).or_insert(false);
        for net in &gate.inputs {
            nets.entry(*net).or_insert(false);
        }
    }

    // At most one go per gate, plus one to see that nothing changed.
    let most = gates.len() * GOES + 1;
    for went in 1..=most {
        let mut changed: Option<u32> = None;
        for gate in gates {
            // A net held from outside is not something a gate may change.
            if driven.contains_key(&gate.output) {
                continue;
            }
            let inputs: Vec<bool> = gate
                .inputs
                .iter()
                .map(|net| nets.get(net).copied().unwrap_or_default())
                .collect();
            let answer = gate.gate.of(&inputs);
            if nets.insert(gate.output, answer) != Some(answer) {
                changed = Some(gate.output);
            }
        }
        if changed.is_none() {
            return Ok(Settled { nets, goes: went });
        }
        if went == most {
            return Err(Error::NeverSettles(format!(
                "N{}",
                changed.unwrap_or_default()
            )));
        }
    }
    Err(Error::NeverSettles("something".to_owned()))
}

#[cfg(test)]
mod tests {
    use super::{Error, Settled, Wired, settle};
    use crate::logic_gate::{Gate, Logic};
    use std::collections::BTreeMap;

    fn a_gate(logic: Logic, inputs: &[u32], output: u32) -> Wired {
        Wired {
            part: crate::schematic_document::Id::none(),
            gate: Gate {
                logic,
                inputs: inputs.len(),
            },
            inputs: inputs.to_vec(),
            output,
        }
    }

    fn driving(pairs: &[(u32, bool)]) -> BTreeMap<u32, bool> {
        pairs.iter().copied().collect()
    }

    #[test]
    fn an_and_of_two_driven_nets_settles_to_what_an_and_gives() {
        let gates = [a_gate(Logic::And, &[1, 2], 3)];
        for (a, b) in [(false, false), (true, false), (false, true), (true, true)] {
            let found = settle(&gates, &driving(&[(1, a), (2, b)])).unwrap();
            assert_eq!(found.high(3), a && b, "{a} {b}");
        }
    }

    #[test]
    fn an_answer_carries_through_a_chain_of_gates() {
        // Two inverters in a row give back what went in.
        let gates = [a_gate(Logic::Not, &[1], 2), a_gate(Logic::Not, &[2], 3)];
        for driven in [true, false] {
            let found = settle(&gates, &driving(&[(1, driven)])).unwrap();
            assert_eq!(found.high(2), !driven);
            assert_eq!(found.high(3), driven);
        }
    }

    #[test]
    fn a_half_adder_adds() {
        // Sum is a XOR b, carry is a AND b - the smallest thing anyone
        // builds out of gates, and every row of it is checked.
        let gates = [
            a_gate(Logic::Xor, &[1, 2], 3),
            a_gate(Logic::And, &[1, 2], 4),
        ];
        for (a, b) in [(false, false), (true, false), (false, true), (true, true)] {
            let found = settle(&gates, &driving(&[(1, a), (2, b)])).unwrap();
            assert_eq!(found.high(3), a != b, "sum of {a} {b}");
            assert_eq!(found.high(4), a && b, "carry of {a} {b}");
        }
    }

    #[test]
    fn an_and_built_from_nands_behaves_like_an_and() {
        // NAND then NOT is AND, which says the settling carries an answer
        // through as well as a single gate computes one.
        let gates = [a_gate(Logic::Nand, &[1, 2], 3), a_gate(Logic::Not, &[3], 4)];
        for (a, b) in [(false, false), (true, false), (false, true), (true, true)] {
            let found = settle(&gates, &driving(&[(1, a), (2, b)])).unwrap();
            assert_eq!(found.high(4), a && b, "{a} {b}");
        }
    }

    #[test]
    fn a_ring_of_three_inverters_never_settles_and_says_so() {
        let gates = [
            a_gate(Logic::Not, &[1], 2),
            a_gate(Logic::Not, &[2], 3),
            a_gate(Logic::Not, &[3], 1),
        ];
        match settle(&gates, &BTreeMap::new()) {
            Err(Error::NeverSettles(net)) => assert!(net.starts_with('N'), "{net}"),
            other => panic!("a ring should not settle, got {other:?}"),
        }
    }

    #[test]
    fn one_inverter_fed_from_itself_never_settles_either() {
        let gates = [a_gate(Logic::Not, &[1], 1)];
        assert!(matches!(
            settle(&gates, &BTreeMap::new()),
            Err(Error::NeverSettles(_))
        ));
    }

    #[test]
    fn a_pair_of_nands_holds_what_it_is_given() {
        // The latch everybody builds: cross-coupled NANDs. Held one way it
        // settles one way, held the other it settles the other.
        let gates = [
            a_gate(Logic::Nand, &[1, 4], 3),
            a_gate(Logic::Nand, &[2, 3], 4),
        ];
        let set = settle(&gates, &driving(&[(1, false), (2, true)])).unwrap();
        assert!(set.high(3));
        assert!(!set.high(4));

        let cleared = settle(&gates, &driving(&[(1, true), (2, false)])).unwrap();
        assert!(!cleared.high(3));
        assert!(cleared.high(4));
    }

    #[test]
    fn a_sheet_with_no_gates_on_it_says_so() {
        assert_eq!(settle(&[], &BTreeMap::new()), Err(Error::NothingDigital));
    }

    #[test]
    fn a_net_held_from_outside_is_not_changed_by_a_gate() {
        // An inverter told to drive a net that is already held keeps its
        // hands off it, which is what a switch on a net means.
        let gates = [a_gate(Logic::Not, &[1], 2)];
        let found = settle(&gates, &driving(&[(1, false), (2, false)])).unwrap();
        assert!(!found.high(2));
    }

    #[test]
    fn what_settles_says_how_many_goes_it_took() {
        let gates = [a_gate(Logic::Not, &[1], 2), a_gate(Logic::Not, &[2], 3)];
        let found = settle(&gates, &driving(&[(1, true)])).unwrap();
        assert!(found.goes >= 1 && found.goes <= gates.len() * super::GOES + 1);
        assert_ne!(found, Settled::default());
    }
}
