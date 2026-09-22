//! Working out where a linear circuit sits with nothing changing.
//!
//! The port hands a netlist to a simulator when it has one
//! ([`crate::simulator`]). It does not need one for the simplest and most
//! useful question of all - what voltage is at each node of a circuit of
//! resistors and sources - and answering that here means a divider can be
//! drawn and solved with nothing installed.
//!
//! This is **modified nodal analysis**, which is how every SPICE has done
//! it since Berkeley. One unknown per node, one more per voltage source:
//!
//! ```text
//!   a resistor between two nodes adds its conductance to both diagonals
//!   and subtracts it from the two crossings
//!   a current source adds its current to one side and takes it from the
//!   other
//!   a voltage source adds a row and a column saying the two nodes differ
//!   by its value, and its own unknown is the current through it
//! ```
//!
//! Then the matrix is solved by elimination with partial pivoting.
//!
//! **What it does and does not do.** Resistors, independent voltage and
//! current sources, and node 0 as ground: those exactly. Anything else in
//! the netlist - a diode, a subcircuit, a capacitor - is refused by name
//! rather than quietly left out, because a wrong answer is worse than no
//! answer. A circuit beyond it wants the simulator, which is why both
//! exist.

use std::collections::BTreeMap;

use crate::expression;
use crate::simulator::Table;

/// What a diode does, with SPICE's own defaults.
///
/// `I = IS * (exp(V / (N * VT)) - 1)`, where `IS` is the saturation
/// current, `N` the emission coefficient and `VT` the thermal voltage. The
/// numbers are SPICE's defaults: a `.MODEL` card would give its own, and
/// the port has nowhere to read one from yet - most of the installed model
/// libraries are encrypted - so a diode is the default diode and says so.
pub mod diode {
    /// The saturation current SPICE assumes.
    pub const SATURATION: f64 = 1e-14;

    /// The emission coefficient SPICE assumes.
    pub const EMISSION: f64 = 1.0;

    /// The thermal voltage at 27 C, which is the temperature Analysis
    /// Parameters ships.
    pub const THERMAL: f64 = 0.025_852;

    /// Beyond this the exponential is taken as a straight line, so that a
    /// step of the search cannot overflow to infinity and lose the answer.
    const STRAIGHT_ABOVE: f64 = 0.8;

    /// The current through a diode at a voltage across it.
    #[must_use]
    pub fn current(across: f64) -> f64 {
        let scale = EMISSION * THERMAL;
        if across > STRAIGHT_ABOVE {
            // Carried on as the tangent at the limit, which keeps the
            // search finite without changing the answer where it settles.
            let at = SATURATION * (STRAIGHT_ABOVE / scale).exp_m1();
            let slope = conductance(STRAIGHT_ABOVE);
            return slope.mul_add(across - STRAIGHT_ABOVE, at);
        }
        SATURATION * (across / scale).exp_m1()
    }

    /// How the current changes with the voltage, which is what the search
    /// linearises around.
    #[must_use]
    pub fn conductance(across: f64) -> f64 {
        let scale = EMISSION * THERMAL;
        let at = across.min(STRAIGHT_ABOVE);
        // Never nothing: a conductance of zero leaves a node joined to
        // nothing and the matrix unsolvable.
        (SATURATION / scale * (at / scale).exp()).max(1e-12)
    }
}

/// What a bipolar transistor does, with SPICE's own defaults.
///
/// The transport model: two junctions, and what goes in at one comes out
/// at the other less what the gain loses.
///
/// ```text
///   If = IS * (exp(Vbe / VT) - 1)      forward, through the base-emitter
///   Ir = IS * (exp(Vbc / VT) - 1)      reverse, through the base-collector
///   Ic = If - Ir * (1 + 1/BR)
///   Ib = If / BF + Ir / BR
/// ```
///
/// `IS`, `BF` and `BR` are SPICE's defaults, for the same reason the
/// diode's are: a `.MODEL` card would give its own and most of the
/// installed libraries are encrypted, so a transistor is the default
/// transistor and says so.
pub mod transistor {
    /// The saturation current SPICE assumes.
    pub const SATURATION: f64 = 1e-16;

    /// The forward current gain SPICE assumes.
    pub const FORWARD_GAIN: f64 = 100.0;

    /// The reverse current gain SPICE assumes.
    pub const REVERSE_GAIN: f64 = 1.0;

    /// The current through one junction at a voltage across it.
    #[must_use]
    pub fn junction(across: f64) -> f64 {
        SATURATION * limited(across).exp_m1()
    }

    /// How that current changes with the voltage.
    #[must_use]
    pub fn slope(across: f64) -> f64 {
        (SATURATION / super::diode::THERMAL * limited(across).exp()).max(1e-14)
    }

    /// The exponent, held below where it would overflow.
    ///
    /// Past this the junction is carried on as its tangent, exactly as the
    /// diode's is and for the same reason: one wide step of the search
    /// must not lose the answer.
    fn limited(across: f64) -> f64 {
        (across / super::diode::THERMAL).min(40.0)
    }
}

/// What can go wrong working a circuit out.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Error {
    /// A part this cannot do. The text names it.
    Beyond(String),
    /// A value that could not be read. The text is the line.
    Unreadable(String),
    /// The circuit has no ground, so nothing is measured against anything.
    NoGround,
    /// The circuit does not settle anywhere - two sources fighting, or a
    /// node joined to nothing.
    DoesNotSettle,
}

impl std::fmt::Display for Error {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Beyond(what) => write!(f, "{what} is beyond the built-in solver"),
            Self::Unreadable(line) => write!(f, "this cannot be read: {line}"),
            Self::NoGround => write!(f, "the circuit has no ground"),
            Self::DoesNotSettle => write!(f, "the circuit does not settle"),
        }
    }
}

impl std::error::Error for Error {}

/// One part of a circuit this can solve.
#[derive(Debug, Clone, PartialEq)]
pub(crate) enum Part {
    Resistor {
        from: String,
        to: String,
        ohms: f64,
    },
    Voltage {
        from: String,
        to: String,
        volts: f64,
    },
    Current {
        from: String,
        to: String,
        amps: f64,
    },
    /// Storage, which only a run over time can do anything with.
    Capacitor {
        from: String,
        to: String,
        farads: f64,
    },
    /// The same, the other way round.
    Inductor {
        from: String,
        to: String,
        henries: f64,
    },
    /// The first part here that is not a straight line.
    Diode {
        from: String,
        to: String,
    },
    /// A current that follows a voltage somewhere else.
    ///
    /// SPICE's `G` element, and what a transistor's gain becomes once it
    /// has been linearised.
    Vccs {
        from: String,
        to: String,
        sense_from: String,
        sense_to: String,
        gain: f64,
    },
    /// Three terminals and two junctions.
    Transistor {
        collector: String,
        base: String,
        emitter: String,
        /// Whether it is an NPN. A PNP is the same with the signs turned
        /// round.
        npn: bool,
    },
}

/// Works out the operating point of a netlist.
///
/// The answer is a [`Table`] of one row, in the same shape an external
/// simulator's is, so whatever draws one draws the other.
///
/// # Errors
///
/// [`Error::Beyond`] for a part this cannot do, [`Error::Unreadable`] for a
/// value it cannot read, [`Error::NoGround`] where nothing is node 0, and
/// [`Error::DoesNotSettle`] where the circuit has no single answer.
pub fn operating_point(netlist: &crate::spice_netlist::Netlist) -> Result<Table, Error> {
    let parts = read(&netlist.lines)?;
    solve(&parts)
}

/// The parts of a netlist, where this can do all of them.
pub(crate) fn read(lines: &[String]) -> Result<Vec<Part>, Error> {
    let mut parts = Vec::new();
    for line in lines {
        let words: Vec<&str> = line.split_whitespace().collect();
        let (Some(name), Some(from), Some(to)) = (words.first(), words.get(1), words.get(2)) else {
            return Err(Error::Unreadable(line.clone()));
        };
        // What kind of part it is comes first. A diode's value is a model
        // name, which is not a number and never will be, so asking whether
        // the value reads before asking what the part is would call every
        // unknown part unreadable instead of naming it.
        let first = name.chars().next().unwrap_or(' ').to_ascii_uppercase();
        if !matches!(first, 'R' | 'V' | 'I' | 'C' | 'L' | 'D' | 'Q' | 'G') {
            return Err(Error::Beyond((*name).to_owned()));
        }

        // A controlled source names four nodes and then its gain.
        if first == 'G' {
            let (Some(sense_from), Some(sense_to), Some(gain)) =
                (words.get(3), words.get(4), words.get(5))
            else {
                return Err(Error::Unreadable(line.clone()));
            };
            parts.push(Part::Vccs {
                from: (*from).to_owned(),
                to: (*to).to_owned(),
                sense_from: (*sense_from).to_owned(),
                sense_to: (*sense_to).to_owned(),
                gain: expression::evaluate(gain).map_err(|_| Error::Unreadable(line.clone()))?,
            });
            continue;
        }

        // A transistor has three terminals and a model name, so it is
        // read before anything that expects two and a number. Whether it
        // is a PNP is taken from the model's name, which is all the port
        // has to go on until it reads model cards.
        if first == 'Q' {
            let Some(emitter) = words.get(3) else {
                return Err(Error::Unreadable(line.clone()));
            };
            let model = words.get(4).copied().unwrap_or_default();
            parts.push(Part::Transistor {
                collector: (*from).to_owned(),
                base: (*to).to_owned(),
                emitter: (*emitter).to_owned(),
                npn: !model.to_ascii_uppercase().contains("PNP"),
            });
            continue;
        }

        // A diode's value is a model name rather than a number, and the
        // port reads no model cards yet, so it is the default diode.
        if first == 'D' {
            parts.push(Part::Diode {
                from: (*from).to_owned(),
                to: (*to).to_owned(),
            });
            continue;
        }

        let number = steady_value(&words[3..])
            .ok_or_else(|| Error::Unreadable(line.clone()))
            .and_then(|value| {
                expression::evaluate(&value).map_err(|_| Error::Unreadable(line.clone()))
            })?;
        let (from, to) = ((*from).to_owned(), (*to).to_owned());
        parts.push(match first {
            'R' => Part::Resistor {
                from,
                to,
                ohms: number,
            },
            'V' => Part::Voltage {
                from,
                to,
                volts: number,
            },
            'I' => Part::Current {
                from,
                to,
                amps: number,
            },
            'C' => Part::Capacitor {
                from,
                to,
                farads: number,
            },
            'L' => Part::Inductor {
                from,
                to,
                henries: number,
            },
            // Nothing else reaches here: the kind was checked above.
            _ => return Err(Error::Beyond((*name).to_owned())),
        });
    }
    Ok(parts)
}

/// What a part is worth with nothing changing.
///
/// A source may say so at length - `V1 1 0 DC 10 AC 1` - so the words after
/// the two nodes are read rather than the first of them taken. `DC` names
/// the steady value, `AC` names the one a frequency sweep drives with and
/// is stepped over here, and a bare number is the steady value. A source
/// that says only what it drives a sweep with is nothing when nothing is
/// changing, which is what SPICE makes of it too.
fn steady_value(words: &[&str]) -> Option<String> {
    let mut at = 0;
    let mut bare = None;
    while at < words.len() {
        let word = words[at];
        if word.eq_ignore_ascii_case("DC") {
            return words.get(at + 1).map(|it| (*it).to_owned());
        }
        if word.eq_ignore_ascii_case("AC") {
            at += 2;
            continue;
        }
        if bare.is_none() {
            bare = Some(word.to_owned());
        }
        at += 1;
    }
    // Nothing but an AC magnitude means nothing steady, which is a source
    // of zero rather than a line that cannot be read.
    Some(bare.unwrap_or_else(|| "0".to_owned()))
}

/// The two nodes a part is joined to.
pub(crate) fn ends_of(part: &Part) -> [&str; 2] {
    match part {
        Part::Resistor { from, to, .. }
        | Part::Voltage { from, to, .. }
        | Part::Current { from, to, .. }
        | Part::Capacitor { from, to, .. }
        | Part::Inductor { from, to, .. }
        | Part::Diode { from, to }
        | Part::Vccs { from, to, .. } => [from.as_str(), to.as_str()],
        // A transistor has three, and the search wants the two junctions
        // rather than one pair, so this is not the way to ask about one.
        Part::Transistor {
            collector, emitter, ..
        } => [collector.as_str(), emitter.as_str()],
    }
}

/// The nodes a circuit has, ground apart, numbered from zero.
pub(crate) fn nodes_of(parts: &[Part]) -> BTreeMap<String, usize> {
    let mut found: Vec<&str> = Vec::new();
    for part in parts {
        for name in ends_of(part) {
            if name == crate::spice_netlist::GROUND || found.contains(&name) {
                continue;
            }
            found.push(name);
        }
    }
    found
        .into_iter()
        .enumerate()
        .map(|(at, name)| (name.to_owned(), at))
        .collect()
}

/// How many goes the search gets before it is called a failure.
const TRIES: usize = 200;

/// How close two goes must be for the answer to be settled, in volts.
const CLOSE_ENOUGH: f64 = 1e-9;

/// Solves a circuit, whether or not anything in it is a straight line.
///
/// With nothing but resistors and sources one matrix answers it. With a
/// diode in it the answer is searched for: the diode is replaced by the
/// straight line that touches its curve at the present guess, that circuit
/// is solved, and the guess is moved to what came out. That is
/// **Newton-Raphson**, and it is how every SPICE handles a part that bends.
///
/// The search stops when two goes running agree to within
/// [`CLOSE_ENOUGH`]; it gives up after [`TRIES`] and says the circuit does
/// not settle rather than returning whatever it had reached.
fn solve(parts: &[Part]) -> Result<Table, Error> {
    let bends = parts
        .iter()
        .any(|part| matches!(part, Part::Diode { .. } | Part::Transistor { .. }));
    if !bends {
        return solve_once(parts);
    }

    let mut guess: Vec<[f64; 2]> = vec![[0.0; 2]; parts.len()];
    for _ in 0..TRIES {
        let standing = linearised(parts, &guess);
        let table = solve_once(&standing)?;

        let now = held_back(parts, &guess, &across_each(parts, &table));
        // Only the junctions decide whether the search has settled: the
        // straight lines are right from the first go.
        let moved = guess
            .iter()
            .zip(now.iter())
            .enumerate()
            .filter(|(which, _)| is_a_junction(parts.get(*which)))
            .flat_map(|(_, (before, after))| {
                [(before[0] - after[0]).abs(), (before[1] - after[1]).abs()]
            })
            .fold(0.0_f64, f64::max);
        guess = now;

        if moved < CLOSE_ENOUGH {
            return Ok(table);
        }
    }
    Err(Error::DoesNotSettle)
}

/// How far a junction may move in one go of the search, in volts.
///
/// Newton-Raphson on an exponential overshoots: a step worked out where the
/// curve is nearly flat lands far up where it is nearly vertical, and the
/// next step throws it back further still. Holding each move to half a volt
/// is the simplest of the limiters every SPICE carries, and it costs only
/// goes of the search, never accuracy - the answer it settles on is the
/// same one.
const FURTHEST: f64 = 0.5;

/// The next guess, with each junction held to [`FURTHEST`] of the last.
///
/// Only the parts that bend are held back and only they are watched for the
/// search settling. Everything else is a straight line whose voltage the
/// matrix gets right in one go, and holding those back would make a
/// hundred-volt source walk up half a volt at a time.
fn held_back(parts: &[Part], was: &[[f64; 2]], now: &[[f64; 2]]) -> Vec<[f64; 2]> {
    now.iter()
        .enumerate()
        .map(|(which, after)| {
            if !is_a_junction(parts.get(which)) {
                return *after;
            }
            let before = was.get(which).copied().unwrap_or([0.0; 2]);
            [
                before[0] + (after[0] - before[0]).clamp(-FURTHEST, FURTHEST),
                before[1] + (after[1] - before[1]).clamp(-FURTHEST, FURTHEST),
            ]
        })
        .collect()
}

/// Whether a part is one the search is actually searching for.
const fn is_a_junction(part: Option<&Part>) -> bool {
    matches!(part, Some(Part::Diode { .. } | Part::Transistor { .. }))
}

/// The circuit with each diode replaced by the straight line that touches
/// its curve at the present guess.
fn linearised(parts: &[Part], guess: &[[f64; 2]]) -> Vec<Part> {
    let mut standing = Vec::with_capacity(parts.len() + 1);
    for (which, part) in parts.iter().enumerate() {
        match part {
            Part::Diode { from, to } => {
                let across = guess.get(which).map_or(0.0, |it| it[0]);
                let conductance = diode::conductance(across);
                // The line through the curve at this point: a conductance,
                // and whatever current is left over at zero volts.
                let leftover = conductance.mul_add(-across, diode::current(across));
                standing.push(Part::Resistor {
                    from: from.clone(),
                    to: to.clone(),
                    ohms: 1.0 / conductance,
                });
                standing.push(Part::Current {
                    from: from.clone(),
                    to: to.clone(),
                    amps: leftover,
                });
            }
            Part::Transistor {
                collector,
                base,
                emitter,
                npn,
            } => standing.extend(as_straight_lines(
                collector,
                base,
                emitter,
                *npn,
                guess.get(which).copied().unwrap_or([0.0, 0.0]),
            )),
            other => standing.push(other.clone()),
        }
    }
    standing
}

/// A transistor as the straight lines that touch it where it sits.
///
/// Two junctions, each a conductance and whatever current is left over at
/// no volts across it, and the gain as a current that follows the
/// base-emitter voltage. A PNP is an NPN with the signs turned round, so
/// one lot of arithmetic serves both.
fn as_straight_lines(
    collector: &str,
    base: &str,
    emitter: &str,
    npn: bool,
    guess: [f64; 2],
) -> Vec<Part> {
    let mut standing = Vec::with_capacity(6);
    let sign = if npn { 1.0 } else { -1.0 };
    let [emitter_side, collector_side] = guess;
    let (be, bc) = (sign * emitter_side, sign * collector_side);

    let forward = transistor::junction(be);
    let reverse = transistor::junction(bc);
    let gpi = transistor::slope(be) / transistor::FORWARD_GAIN;
    let gmu = transistor::slope(bc) / transistor::REVERSE_GAIN;
    let gm = transistor::slope(be);

    for (a, b, conductance, current, across) in [
        (base, emitter, gpi, forward / transistor::FORWARD_GAIN, be),
        (base, collector, gmu, reverse / transistor::REVERSE_GAIN, bc),
    ] {
        standing.push(Part::Resistor {
            from: a.to_owned(),
            to: b.to_owned(),
            ohms: 1.0 / conductance.max(1e-14),
        });
        standing.push(Part::Current {
            from: a.to_owned(),
            to: b.to_owned(),
            amps: sign * conductance.mul_add(-across, current),
        });
    }

    standing.push(Part::Vccs {
        from: collector.to_owned(),
        to: emitter.to_owned(),
        sense_from: base.to_owned(),
        sense_to: emitter.to_owned(),
        // Not signed: this multiplies the voltage between two nodes, which
        // already carries the sign, and signing both would cancel them.
        gain: gm,
    });
    standing.push(Part::Current {
        from: collector.to_owned(),
        to: emitter.to_owned(),
        amps: sign * gm.mul_add(-be, forward - reverse),
    });
    standing
}

/// What stands across each part, for the next go of the search.
fn across_each(parts: &[Part], table: &Table) -> Vec<[f64; 2]> {
    let voltage = |name: &str| -> f64 {
        if name == crate::spice_netlist::GROUND {
            return 0.0;
        }
        table
            .column(&format!("V({name})"))
            .and_then(|it| it.first().copied())
            .unwrap_or_default()
    };
    parts
        .iter()
        .map(|part| {
            // A transistor is guessed at by its two junctions; everything
            // else by the one pair it spans.
            if let Part::Transistor {
                collector,
                base,
                emitter,
                ..
            } = part
            {
                return [
                    voltage(base) - voltage(emitter),
                    voltage(base) - voltage(collector),
                ];
            }
            let [from, to] = ends_of(part);
            [voltage(from) - voltage(to), 0.0]
        })
        .collect()
}

/// Puts every conductance into the matrix.
///
/// Each of these is a straight line by the time it reaches here: the search
/// has already replaced anything that bends.
fn stamp(
    parts: &[Part],
    nodes: &BTreeMap<String, usize>,
    size: usize,
    matrix: &mut [Vec<f64>],
) -> Result<(), Error> {
    let at = |name: &str| -> Option<usize> { nodes.get(name).copied() };
    for part in parts {
        match part {
            Part::Resistor { from, to, ohms } => {
                if *ohms == 0.0 {
                    return Err(Error::DoesNotSettle);
                }
                let conductance = 1.0 / ohms;
                if let Some(a) = at(from) {
                    matrix[a][a] += conductance;
                }
                if let Some(b) = at(to) {
                    matrix[b][b] += conductance;
                }
                if let (Some(a), Some(b)) = (at(from), at(to)) {
                    matrix[a][b] -= conductance;
                    matrix[b][a] -= conductance;
                }
            }
            Part::Current { from, to, amps } => {
                // Current is taken to flow from the first node to the
                // second inside the source, as SPICE has it.
                if let Some(a) = at(from) {
                    matrix[a][size] -= amps;
                }
                if let Some(b) = at(to) {
                    matrix[b][size] += amps;
                }
            }
            Part::Vccs {
                from,
                to,
                sense_from,
                sense_to,
                gain,
            } => {
                // A current out of `from` and into `to`, following the
                // voltage between the two sensed nodes.
                for (node, sign) in [(from, 1.0), (to, -1.0)] {
                    let Some(row) = at(node) else { continue };
                    if let Some(column) = at(sense_from) {
                        matrix[row][column] += sign * gain;
                    }
                    if let Some(column) = at(sense_to) {
                        matrix[row][column] -= sign * gain;
                    }
                }
            }
            // A voltage source is its own rows below, and a capacitor
            // with nothing changing is an open circuit - neither adds
            // anything to the conductances. Neither a diode nor a
            // transistor reaches here: the search replaces both with
            // resistors and sources first.
            Part::Voltage { .. }
            | Part::Capacitor { .. }
            | Part::Diode { .. }
            | Part::Transistor { .. } => {}
            Part::Inductor { from, to, .. } => {
                // A wire is a very small resistance, which keeps the
                // matrix solvable rather than leaving two nodes joined by
                // nothing.
                let conductance = 1e9;
                if let Some(a) = at(from) {
                    matrix[a][a] += conductance;
                }
                if let Some(b) = at(to) {
                    matrix[b][b] += conductance;
                }
                if let (Some(a), Some(b)) = (at(from), at(to)) {
                    matrix[a][b] -= conductance;
                    matrix[b][a] -= conductance;
                }
            }
        }
    }
    Ok(())
}

/// Builds the matrix and solves it, everything in it being a straight
/// line by now.
fn solve_once(parts: &[Part]) -> Result<Table, Error> {
    let touches_ground = parts
        .iter()
        .flat_map(ends_of)
        .any(|name| name == crate::spice_netlist::GROUND);
    if !touches_ground {
        return Err(Error::NoGround);
    }

    let nodes = nodes_of(parts);
    let sources: Vec<&Part> = parts
        .iter()
        .filter(|part| matches!(part, Part::Voltage { .. }))
        .collect();
    let size = nodes.len() + sources.len();
    if size == 0 {
        return Err(Error::DoesNotSettle);
    }

    let mut matrix = vec![vec![0.0_f64; size + 1]; size];
    let at = |name: &str| -> Option<usize> { nodes.get(name).copied() };

    stamp(parts, &nodes, size, &mut matrix)?;

    for (which, source) in sources.iter().enumerate() {
        let Part::Voltage { from, to, volts } = source else {
            continue;
        };
        let row = nodes.len() + which;
        if let Some(a) = at(from) {
            matrix[row][a] += 1.0;
            matrix[a][row] += 1.0;
        }
        if let Some(b) = at(to) {
            matrix[row][b] -= 1.0;
            matrix[b][row] -= 1.0;
        }
        matrix[row][size] = *volts;
    }

    let answer = eliminate(matrix, size)?;

    let mut columns = Vec::with_capacity(size);
    let mut row = Vec::with_capacity(size);
    let mut by_number: Vec<(&String, &usize)> = nodes.iter().collect();
    by_number.sort_by_key(|(_, at)| **at);
    for (name, at) in by_number {
        columns.push(format!("V({name})"));
        row.push(answer[*at]);
    }
    for (which, source) in sources.iter().enumerate() {
        let Part::Voltage { from, .. } = source else {
            continue;
        };
        let _ = from;
        columns.push(format!("I(V{})", which + 1));
        row.push(answer[nodes.len() + which]);
    }

    Ok(Table {
        columns,
        rows: vec![row],
    })
}

/// Solves the matrix by elimination with partial pivoting.
fn eliminate(mut matrix: Vec<Vec<f64>>, size: usize) -> Result<Vec<f64>, Error> {
    for column in 0..size {
        // The biggest remaining entry in this column is the pivot, which is
        // what keeps the arithmetic honest when values differ by orders.
        let mut biggest = column;
        for row in column + 1..size {
            if matrix[row][column].abs() > matrix[biggest][column].abs() {
                biggest = row;
            }
        }
        matrix.swap(column, biggest);

        let pivot = matrix[column][column];
        if pivot.abs() < 1e-14 {
            return Err(Error::DoesNotSettle);
        }
        for row in column + 1..size {
            let factor = matrix[row][column] / pivot;
            if factor == 0.0 {
                continue;
            }
            // The pivot row is read while this one is written, so the two
            // are split apart rather than borrowed at once.
            let (above, below) = matrix.split_at_mut(row);
            let pivot_row = &above[column];
            for (taken, cell) in below[0].iter_mut().enumerate().skip(column) {
                *cell = factor.mul_add(-pivot_row[taken], *cell);
            }
        }
    }

    let mut answer = vec![0.0_f64; size];
    for row in (0..size).rev() {
        let mut left = matrix[row][size];
        for column in row + 1..size {
            left = matrix[row][column].mul_add(-answer[column], left);
        }
        answer[row] = left / matrix[row][row];
        if !answer[row].is_finite() {
            return Err(Error::DoesNotSettle);
        }
    }
    Ok(answer)
}

/// Works out where a circuit sits as one source is swept.
///
/// This is [`operating_point`] over and over with one value changed, which
/// is exactly what `.DC` means. The swept source's own name is the first
/// column, so a transfer characteristic reads as a curve against its input
/// the way [`crate::run_results`] expects.
///
/// Sweeping `TEMP` is refused rather than silently doing nothing: the
/// built-in solver has no temperature in it, so a temperature sweep is a
/// question for a real engine.
///
/// # Errors
///
/// The same as [`operating_point`], and [`Error::Beyond`] where the source
/// swept is not one the netlist has, or is the temperature.
pub fn dc_sweep(
    netlist: &crate::spice_netlist::Netlist,
    source: &str,
    from: f64,
    to: f64,
    step: f64,
) -> Result<Table, Error> {
    if source.eq_ignore_ascii_case(crate::temperature::SWEPT) {
        return Err(Error::Beyond(source.to_owned()));
    }
    let sensible =
        step.is_finite() && from.is_finite() && to.is_finite() && step > 0.0 && to > from;
    if !sensible {
        return Err(Error::DoesNotSettle);
    }

    // Which line names the source, so its value can be changed.
    let which = netlist
        .lines
        .iter()
        .position(|line| {
            line.split_whitespace()
                .next()
                .is_some_and(|name| name.eq_ignore_ascii_case(source))
        })
        .ok_or_else(|| Error::Beyond(source.to_owned()))?;

    let mut columns: Vec<String> = Vec::new();
    let mut rows: Vec<Vec<f64>> = Vec::new();

    let mut value = from;
    loop {
        let mut lines = netlist.lines.clone();
        lines[which] = swept(&netlist.lines[which], value)?;
        let table = solve(&read(&lines)?)?;

        if columns.is_empty() {
            columns.push(source.to_owned());
            columns.extend(table.columns.iter().cloned());
        }
        let mut row = Vec::with_capacity(columns.len());
        row.push(value);
        row.extend(table.rows.first().cloned().unwrap_or_default());
        rows.push(row);

        value += step;
        // A step that does not divide the range exactly still ends on it.
        if value > to + step / 2.0 {
            break;
        }
    }

    Ok(Table { columns, rows })
}

/// One line of a netlist with its value changed.
fn swept(line: &str, value: f64) -> Result<String, Error> {
    let words: Vec<&str> = line.split_whitespace().collect();
    let (Some(name), Some(from), Some(to)) = (words.first(), words.get(1), words.get(2)) else {
        return Err(Error::Unreadable(line.to_owned()));
    };
    Ok(format!("{name} {from} {to} {value}"))
}

/// Works out how a circuit behaves over time.
///
/// Storage is turned into resistance and a source at each step - the
/// **companion model** every SPICE uses - and then each step is the same
/// linear problem [`operating_point`] already solves. Backward Euler is the
/// rule here: it is the simplest of them, and unlike the trapezoidal rule
/// it cannot ring on a step change, which matters more for a first solver
/// than the extra order of accuracy does.
///
/// At each step a capacitor of `C` farads over a step of `h` seconds is a
/// conductance of `C/h` with a current source of `C/h` times the voltage it
/// held last step; an inductor of `L` henries is a conductance of `h/L`
/// with a source of the current it carried.
///
/// # Errors
///
/// The same as [`operating_point`], and the first step is an operating
/// point with the storage held at whatever it starts from - zero.
pub fn transient(
    netlist: &crate::spice_netlist::Netlist,
    step: f64,
    until: f64,
) -> Result<Table, Error> {
    // A step or a window that is not a positive number - nothing, a
    // negative, or a step longer than the window - is no run at all.
    let sensible =
        step.is_finite() && until.is_finite() && step > 0.0 && until > 0.0 && step <= until;
    if !sensible {
        return Err(Error::DoesNotSettle);
    }
    let parts = read(&netlist.lines)?;

    // Where each piece of storage stands, by its place in the netlist.
    let mut held: BTreeMap<usize, f64> = BTreeMap::new();
    let mut columns: Vec<String> = Vec::new();
    let mut rows: Vec<Vec<f64>> = Vec::new();

    // The first row is where the circuit starts, not where one step of it
    // ends: storage is held at what it carries and the rest is solved
    // around it. Backward Euler then takes each step from there.
    let mut standing = starting(&parts, &held);
    let mut at = 0.0_f64;
    loop {
        let table = solve(&standing)?;

        if columns.is_empty() {
            columns.push("time".to_owned());
            columns.extend(table.columns.iter().cloned());
        }
        let mut row = Vec::with_capacity(columns.len());
        row.push(at);
        row.extend(table.rows.first().cloned().unwrap_or_default());
        rows.push(row);

        remember(&parts, &table, step, &mut held);
        at += step;
        // A step that does not divide the window exactly still ends on it.
        if at > until + step / 2.0 {
            break;
        }
        standing = companion(&parts, step, &held);
    }

    Ok(Table { columns, rows })
}

/// The circuit as it starts, with storage held at what it carries.
///
/// A capacitor holding a voltage is that voltage; an inductor carrying a
/// current is that current. With both at nothing - which is how a circuit
/// starts unless it is told otherwise - a capacitor is a short and an
/// inductor is not there.
fn starting(parts: &[Part], held: &BTreeMap<usize, f64>) -> Vec<Part> {
    let mut standing = Vec::with_capacity(parts.len());
    for (which, part) in parts.iter().enumerate() {
        let carried = held.get(&which).copied().unwrap_or_default();
        match part {
            Part::Capacitor { from, to, .. } => standing.push(Part::Voltage {
                from: from.clone(),
                to: to.clone(),
                volts: carried,
            }),
            Part::Inductor { from, to, .. } => standing.push(Part::Current {
                from: from.clone(),
                to: to.clone(),
                amps: carried,
            }),
            other => standing.push(other.clone()),
        }
    }
    standing
}

/// The circuit as it stands this step, with storage turned into parts the
/// linear solver already knows.
fn companion(parts: &[Part], step: f64, held: &BTreeMap<usize, f64>) -> Vec<Part> {
    let mut standing = Vec::with_capacity(parts.len());
    for (which, part) in parts.iter().enumerate() {
        match part {
            Part::Capacitor { from, to, farads } => {
                let conductance = farads / step;
                let carried = held.get(&which).copied().unwrap_or_default();
                standing.push(Part::Resistor {
                    from: from.clone(),
                    to: to.clone(),
                    ohms: 1.0 / conductance,
                });
                // The source carries what the capacitor held, so that it
                // starts this step where it left off.
                standing.push(Part::Current {
                    from: to.clone(),
                    to: from.clone(),
                    amps: conductance * carried,
                });
            }
            Part::Inductor { from, to, henries } => {
                let conductance = step / henries;
                let carried = held.get(&which).copied().unwrap_or_default();
                standing.push(Part::Resistor {
                    from: from.clone(),
                    to: to.clone(),
                    ohms: 1.0 / conductance,
                });
                standing.push(Part::Current {
                    from: from.clone(),
                    to: to.clone(),
                    amps: carried,
                });
            }
            other => standing.push(other.clone()),
        }
    }
    standing
}

/// Keeps what each piece of storage now holds, for the next step.
///
/// A capacitor holds the voltage across it. An inductor holds the current
/// through it, which backward Euler makes `i[n] = i[n-1] + (h/L) * v[n]` -
/// the same conductance its companion used, applied to the voltage the
/// step just worked out.
fn remember(parts: &[Part], table: &Table, step: f64, held: &mut BTreeMap<usize, f64>) {
    let voltage = |name: &str| -> f64 {
        if name == crate::spice_netlist::GROUND {
            return 0.0;
        }
        table
            .column(&format!("V({name})"))
            .and_then(|it| it.first().copied())
            .unwrap_or_default()
    };

    for (which, part) in parts.iter().enumerate() {
        match part {
            Part::Capacitor { from, to, .. } => {
                held.insert(which, voltage(from) - voltage(to));
            }
            Part::Inductor { from, to, henries } => {
                let across = voltage(from) - voltage(to);
                let carried = held.get(&which).copied().unwrap_or_default();
                held.insert(which, (step / henries).mul_add(across, carried));
            }
            _ => {}
        }
    }
}

#[cfg(test)]
mod tests {
    use super::{Error, dc_sweep, operating_point, transient};
    use crate::spice_netlist::Netlist;

    fn a_netlist(lines: &[&str]) -> Netlist {
        Netlist {
            title: "Test".to_owned(),
            lines: lines.iter().map(|it| (*it).to_owned()).collect(),
            wanting: Vec::new(),
            asking: Some(crate::spice_netlist::Analysis::OperatingPoint),
        }
    }

    fn voltage(table: &crate::simulator::Table, node: &str) -> f64 {
        table.column(&format!("V({node})")).unwrap()[0]
    }

    #[test]
    fn a_divider_of_two_equal_resistors_halves_the_voltage() {
        let table = operating_point(&a_netlist(&["V1 1 0 10", "R1 1 2 1k", "R2 2 0 1k"])).unwrap();
        assert!((voltage(&table, "1") - 10.0).abs() < 1e-9);
        assert!((voltage(&table, "2") - 5.0).abs() < 1e-9);
    }

    #[test]
    fn an_uneven_divider_divides_by_the_ratio() {
        // 10 V across 1k and 3k puts 7.5 V at the middle.
        let table = operating_point(&a_netlist(&["V1 1 0 10", "R1 1 2 1k", "R2 2 0 3k"])).unwrap();
        assert!((voltage(&table, "2") - 7.5).abs() < 1e-9);
    }

    #[test]
    fn the_current_through_a_source_is_worked_out_too() {
        // 10 V across 2k in total draws 5 mA, and it leaves the source's
        // first node, so the unknown is negative.
        let table = operating_point(&a_netlist(&["V1 1 0 10", "R1 1 2 1k", "R2 2 0 1k"])).unwrap();
        let current = table.column("I(V1)").unwrap()[0];
        assert!((current.abs() - 5e-3).abs() < 1e-9, "{current}");
    }

    #[test]
    fn a_current_source_into_a_resistor_makes_its_own_voltage() {
        // 1 mA through 1k is 1 V.
        let table = operating_point(&a_netlist(&["I1 0 1 1m", "R1 1 0 1k"])).unwrap();
        assert!((voltage(&table, "1") - 1.0).abs() < 1e-9);
    }

    #[test]
    fn resistors_in_parallel_halve_the_resistance() {
        // 1 mA into two 1k in parallel is 0.5 V.
        let table = operating_point(&a_netlist(&["I1 0 1 1m", "R1 1 0 1k", "R2 1 0 1k"])).unwrap();
        assert!((voltage(&table, "1") - 0.5).abs() < 1e-9);
    }

    #[test]
    fn a_ladder_of_three_divides_in_thirds() {
        let table = operating_point(&a_netlist(&[
            "V1 1 0 9",
            "R1 1 2 1k",
            "R2 2 3 1k",
            "R3 3 0 1k",
        ]))
        .unwrap();
        assert!((voltage(&table, "2") - 6.0).abs() < 1e-9);
        assert!((voltage(&table, "3") - 3.0).abs() < 1e-9);
    }

    #[test]
    fn suffixes_are_read_the_way_spice_reads_them() {
        // 1meg and 1k differ by a thousand, so the middle sits high.
        let table =
            operating_point(&a_netlist(&["V1 1 0 10", "R1 1 2 1k", "R2 2 0 1meg"])).unwrap();
        assert!(voltage(&table, "2") > 9.98, "{}", voltage(&table, "2"));
    }

    #[test]
    fn an_rc_charges_the_way_the_exponential_says() {
        // 10 V through 1k into 1u: the time constant is 1 ms, so after one
        // of them the capacitor stands at 10 * (1 - 1/e) = 6.3212 V.
        let table = transient(
            &a_netlist(&["V1 1 0 10", "R1 1 2 1k", "C1 2 0 1u"]),
            1e-6,
            1e-3,
        )
        .unwrap();

        let time = table.column("time").unwrap();
        let across = table.column("V(2)").unwrap();
        assert!((time[0] - 0.0).abs() < 1e-12);
        // It starts empty ...
        assert!(across[0].abs() < 1e-9, "{}", across[0]);
        // ... and ends where the exponential says, to within what a
        // thousand backward-Euler steps can manage.
        let wanted = 10.0 * (1.0 - (-1.0_f64).exp());
        let ended = *across.last().unwrap();
        assert!((ended - wanted).abs() < 0.01, "{ended} against {wanted}");
    }

    #[test]
    fn a_smaller_step_comes_closer_to_the_exponential() {
        // Backward Euler lags, and the lag falls with the step. That is the
        // property worth holding: it says the integration is right rather
        // than that one number happens to match.
        let wanted = 10.0 * (1.0 - (-1.0_f64).exp());
        let ended = |step: f64| {
            let table = transient(
                &a_netlist(&["V1 1 0 10", "R1 1 2 1k", "C1 2 0 1u"]),
                step,
                1e-3,
            )
            .unwrap();
            *table.column("V(2)").unwrap().last().unwrap()
        };

        let coarse = (ended(1e-4) - wanted).abs();
        let fine = (ended(1e-6) - wanted).abs();
        assert!(fine < coarse, "{fine} should be under {coarse}");
    }

    #[test]
    fn an_rc_settles_at_the_voltage_it_is_driven_to() {
        // Left long enough, the capacitor is simply at the source.
        let table = transient(
            &a_netlist(&["V1 1 0 5", "R1 1 2 1k", "C1 2 0 1u"]),
            1e-5,
            2e-2,
        )
        .unwrap();
        let ended = *table.column("V(2)").unwrap().last().unwrap();
        assert!((ended - 5.0).abs() < 1e-6, "{ended}");
    }

    #[test]
    fn an_inductor_comes_up_to_the_current_the_resistor_allows() {
        // 10 V through 1k with 1 H across it: the current ends at 10 mA,
        // and the node between them ends at the source.
        let table = transient(
            &a_netlist(&["V1 1 0 10", "R1 1 2 1k", "L1 2 0 1"]),
            1e-5,
            2e-2,
        )
        .unwrap();
        let ended = *table.column("V(2)").unwrap().last().unwrap();
        // The inductor becomes a short, so the middle node falls to zero.
        assert!(ended.abs() < 0.2, "{ended}");
    }

    #[test]
    fn a_run_over_time_writes_a_row_for_every_step() {
        let table = transient(&a_netlist(&["V1 1 0 1", "R1 1 0 1k"]), 1e-4, 1e-3).unwrap();
        // Eleven, counting both ends.
        assert_eq!(table.rows.len(), 11);
        assert_eq!(table.columns[0], "time");
        let time = table.column("time").unwrap();
        assert!((time[10] - 1e-3).abs() < 1e-12, "{}", time[10]);
    }

    #[test]
    fn a_window_that_makes_no_sense_is_refused() {
        let circuit = a_netlist(&["V1 1 0 1", "R1 1 0 1k"]);
        assert_eq!(transient(&circuit, 0.0, 1e-3), Err(Error::DoesNotSettle));
        assert_eq!(transient(&circuit, -1e-6, 1e-3), Err(Error::DoesNotSettle));
        assert_eq!(transient(&circuit, 1e-3, 1e-6), Err(Error::DoesNotSettle));
    }

    #[test]
    fn a_capacitor_in_a_steady_circuit_is_simply_charged() {
        // With nothing changing no current flows through a capacitor, so
        // there is no drop across the resistor and it sits at the source.
        // That is what an operating point means, and it is why a run over
        // time is a different question from a steady one.
        let table = operating_point(&a_netlist(&["V1 1 0 10", "R1 1 2 1k", "C1 2 0 1u"])).unwrap();
        assert!((table.column("V(2)").unwrap()[0] - 10.0).abs() < 1e-6);
    }

    #[test]
    fn a_divider_swept_gives_half_of_whatever_it_is_driven_with() {
        let table = dc_sweep(
            &a_netlist(&["V1 1 0 0", "R1 1 2 1k", "R2 2 0 1k"]),
            "V1",
            0.0,
            10.0,
            1.0,
        )
        .unwrap();

        assert_eq!(table.columns[0], "V1");
        assert_eq!(table.rows.len(), 11);

        let driven = table.column("V1").unwrap();
        let middle = table.column("V(2)").unwrap();
        for (input, output) in driven.iter().zip(middle.iter()) {
            assert!(
                (output - input / 2.0).abs() < 1e-9,
                "{output} should be half of {input}"
            );
        }
    }

    #[test]
    fn a_sweep_ends_on_its_last_value() {
        let table = dc_sweep(&a_netlist(&["V1 1 0 0", "R1 1 0 1k"]), "V1", 0.0, 5.0, 0.5).unwrap();
        let driven = table.column("V1").unwrap();
        assert!((driven.last().unwrap() - 5.0).abs() < 1e-12);
    }

    #[test]
    fn a_sweep_of_a_source_the_circuit_has_not_got_is_refused_by_name() {
        let found = dc_sweep(&a_netlist(&["V1 1 0 1", "R1 1 0 1k"]), "V9", 0.0, 1.0, 0.1);
        assert_eq!(found, Err(Error::Beyond("V9".to_owned())));
    }

    #[test]
    fn sweeping_the_temperature_is_a_question_for_a_real_engine() {
        // The built-in solver has no temperature in it, so it says so
        // rather than sweeping something and changing nothing.
        let found = dc_sweep(
            &a_netlist(&["V1 1 0 1", "R1 1 0 1k"]),
            "TEMP",
            0.0,
            100.0,
            10.0,
        );
        assert_eq!(found, Err(Error::Beyond("TEMP".to_owned())));
        assert_eq!(crate::temperature::SWEPT, "TEMP");
    }

    #[test]
    fn a_range_that_makes_no_sense_is_refused() {
        let circuit = a_netlist(&["V1 1 0 1", "R1 1 0 1k"]);
        assert_eq!(
            dc_sweep(&circuit, "V1", 0.0, 1.0, 0.0),
            Err(Error::DoesNotSettle)
        );
        assert_eq!(
            dc_sweep(&circuit, "V1", 5.0, 1.0, 0.1),
            Err(Error::DoesNotSettle)
        );
    }

    #[test]
    fn sweeping_a_current_source_works_the_same_way() {
        // 0 to 1 mA through 1k is 0 to 1 V.
        let table = dc_sweep(
            &a_netlist(&["I1 0 1 0", "R1 1 0 1k"]),
            "I1",
            0.0,
            1e-3,
            1e-4,
        )
        .unwrap();
        let across = table.column("V(1)").unwrap();
        assert!((across.last().unwrap() - 1.0).abs() < 1e-9);
    }

    #[test]
    fn a_diode_and_a_resistor_settle_where_the_diode_equation_says() {
        // The strongest check there is: take the answer, put it back into
        // the diode's own equation, and see that the current it implies is
        // the current the resistor is passing. Nothing is assumed about
        // what the number should be.
        let table =
            operating_point(&a_netlist(&["V1 1 0 5", "R1 1 2 1k", "D1 2 0 D1N4148"])).unwrap();
        let across = table.column("V(2)").unwrap()[0];

        let through_the_resistor = (5.0 - across) / 1000.0;
        let through_the_diode = super::diode::current(across);
        assert!(
            (through_the_resistor - through_the_diode).abs() < 1e-12,
            "{through_the_resistor} against {through_the_diode} at {across} V"
        );
    }

    #[test]
    fn a_silicon_diode_drops_about_what_one_does() {
        // Around 0.7 V at a milliamp is what everybody expects of one, and
        // it falls out of the default model rather than being put there.
        let table = operating_point(&a_netlist(&["V1 1 0 5", "R1 1 2 4.3k", "D1 2 0 D"])).unwrap();
        let across = table.column("V(2)").unwrap()[0];
        assert!((0.6..0.8).contains(&across), "{across}");
    }

    #[test]
    fn a_diode_the_wrong_way_round_passes_almost_nothing() {
        let table = operating_point(&a_netlist(&["V1 1 0 5", "R1 1 2 1k", "D1 0 2 D"])).unwrap();
        let across = table.column("V(2)").unwrap()[0];
        // Nearly all of the source stands across the diode, so the
        // resistor drops almost none of it.
        assert!(across > 4.99, "{across}");
    }

    #[test]
    fn two_diodes_in_series_drop_about_twice_as_much() {
        let one = operating_point(&a_netlist(&["V1 1 0 5", "R1 1 2 4.3k", "D1 2 0 D"])).unwrap();
        let two = operating_point(&a_netlist(&[
            "V1 1 0 5",
            "R1 1 2 4.3k",
            "D1 2 3 D",
            "D2 3 0 D",
        ]))
        .unwrap();

        let single = one.column("V(2)").unwrap()[0];
        let double = two.column("V(2)").unwrap()[0];
        assert!(double > single * 1.8, "{double} against {single}");
        assert!(double < single * 2.2, "{double} against {single}");
    }

    #[test]
    fn a_diode_driven_hard_still_settles() {
        // The exponential is carried on as a straight line past 0.8 V so
        // that a step of the search cannot overflow and lose the answer.
        let table = operating_point(&a_netlist(&["V1 1 0 100", "R1 1 2 1", "D1 2 0 D"])).unwrap();
        let across = table.column("V(2)").unwrap()[0];
        assert!(across.is_finite() && across > 0.0, "{across}");
    }

    #[test]
    fn a_frequency_sweep_refuses_a_diode_rather_than_guessing_at_it() {
        // A small-signal sweep wants the diode's conductance where it
        // sits, which the sweep does not work out first.
        let found = crate::ac_solver::ac_sweep(
            &a_netlist(&["V1 1 0 AC 1", "R1 1 2 1k", "D1 2 0 D"]),
            crate::spice_netlist::Sweep::Decade,
            10,
            1.0,
            1000.0,
        );
        assert_eq!(found, Err(Error::Beyond("a diode".to_owned())));
    }

    #[test]
    fn a_transistor_in_forward_active_gives_the_gain_it_is_told_to() {
        // The whole of what a transistor is for: the collector carries the
        // base current multiplied by the forward gain. Nothing here is a
        // remembered number - it is checked against FORWARD_GAIN itself.
        let table = operating_point(&a_netlist(&[
            "V1 1 0 10",
            "V2 4 0 5",
            "R1 4 2 100k",
            "R2 1 3 1k",
            "Q1 3 2 0 BC547",
        ]))
        .unwrap();

        let base = table.column("V(2)").unwrap()[0];
        let collector = table.column("V(3)").unwrap()[0];
        let base_current = (5.0 - base) / 100e3;
        let collector_current = (10.0 - collector) / 1e3;

        let gain = collector_current / base_current;
        assert!(
            (gain - super::transistor::FORWARD_GAIN).abs() < super::transistor::FORWARD_GAIN * 0.05,
            "gain came out {gain}"
        );
    }

    #[test]
    fn a_transistor_with_no_base_current_passes_almost_nothing() {
        let table = operating_point(&a_netlist(&[
            "V1 1 0 10",
            "R2 1 3 1k",
            "R3 2 0 100k",
            "Q1 3 2 0 BC547",
        ]))
        .unwrap();
        let collector = table.column("V(3)").unwrap()[0];
        // Nothing drives the base, so the collector sits at the supply.
        assert!(collector > 9.99, "{collector}");
    }

    #[test]
    fn a_transistor_driven_hard_saturates_rather_than_running_away() {
        // A milliamp into the base of a gain of a hundred would want a
        // hundred milliamps, which the 1k cannot pass; the collector falls
        // towards the emitter and stops there.
        let table = operating_point(&a_netlist(&[
            "V1 1 0 10",
            "V2 4 0 5",
            "R1 4 2 1k",
            "R2 1 3 1k",
            "Q1 3 2 0 BC547",
        ]))
        .unwrap();
        let collector = table.column("V(3)").unwrap()[0];
        assert!(collector.is_finite() && collector >= 0.0, "{collector}");
        assert!(collector < 1.0, "{collector} should be near the emitter");
    }

    #[test]
    fn a_pnp_is_an_npn_with_the_signs_turned_round() {
        let table = operating_point(&a_netlist(&[
            "V1 1 0 -10",
            "V2 4 0 -5",
            "R1 4 2 100k",
            "R2 1 3 1k",
            "Q1 3 2 0 BC557PNP",
        ]))
        .unwrap();

        let base = table.column("V(2)").unwrap()[0];
        let collector = table.column("V(3)").unwrap()[0];
        let base_current = (-5.0 - base) / 100e3;
        let collector_current = (-10.0 - collector) / 1e3;

        let gain = collector_current / base_current;
        assert!(
            (gain - super::transistor::FORWARD_GAIN).abs() < super::transistor::FORWARD_GAIN * 0.05,
            "gain came out {gain}"
        );
    }

    #[test]
    fn a_controlled_source_carries_what_it_is_told_to() {
        // SPICE's G element on its own: a millisiemens across 1 V is a
        // milliamp, and a milliamp through 1k is a volt.
        let table = operating_point(&a_netlist(&[
            "V1 1 0 1",
            "R1 1 0 1k",
            "G1 0 2 1 0 1m",
            "R2 2 0 1k",
        ]))
        .unwrap();
        let across = table.column("V(2)").unwrap()[0];
        assert!((across - 1.0).abs() < 1e-9, "{across}");
    }

    #[test]
    fn a_frequency_sweep_refuses_a_transistor_by_name() {
        let found = crate::ac_solver::ac_sweep(
            &a_netlist(&["V1 1 0 AC 1", "R1 1 2 1k", "Q1 2 3 0 BC547"]),
            crate::spice_netlist::Sweep::Decade,
            10,
            1.0,
            1000.0,
        );
        assert_eq!(found, Err(Error::Beyond("a transistor".to_owned())));
    }

    #[test]
    fn a_part_beyond_the_built_in_solver_is_named_rather_than_left_out() {
        // A subcircuit is, and it is named rather than left out.
        let found = operating_point(&a_netlist(&["V1 1 0 10", "X1 1 0 OPAMP"]));
        assert_eq!(found, Err(Error::Beyond("X1".to_owned())));
    }

    #[test]
    fn a_circuit_with_no_ground_is_refused() {
        let found = operating_point(&a_netlist(&["V1 1 2 10", "R1 1 2 1k"]));
        assert_eq!(found, Err(Error::NoGround));
    }

    #[test]
    fn two_sources_disagreeing_across_the_same_pair_do_not_settle() {
        let found = operating_point(&a_netlist(&["V1 1 0 10", "V2 1 0 5"]));
        assert_eq!(found, Err(Error::DoesNotSettle));
    }

    #[test]
    fn a_value_that_cannot_be_read_says_which_line() {
        let found = operating_point(&a_netlist(&["R1 1 0 what"]));
        assert!(matches!(found, Err(Error::Unreadable(_))));
    }

    #[test]
    fn a_short_line_is_refused_rather_than_guessed_at() {
        assert!(matches!(
            operating_point(&a_netlist(&["R1 1"])),
            Err(Error::Unreadable(_))
        ));
    }

    #[test]
    fn the_answer_is_the_same_shape_a_simulator_would_give() {
        // One row, a column per node and per source, so whatever draws one
        // draws the other. See crate::run_results.
        let table = operating_point(&a_netlist(&["V1 1 0 10", "R1 1 0 1k"])).unwrap();
        assert_eq!(table.rows.len(), 1);
        assert_eq!(table.columns.len(), 2);
        assert!(!crate::run_results::series_of(&table).is_empty());
    }
}
