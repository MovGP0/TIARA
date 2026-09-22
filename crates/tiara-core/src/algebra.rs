//! Working a circuit out with the component names left standing.
//!
//! [`crate::symbolic`] carries `s` as a symbol and numbers for everything
//! else. This carries the components too, so an RC low pass comes back as
//! `1 / (1 + s R1 C1)` rather than `1 / (1 + 0.001 s)` - which is what
//! `Analysis > Symbolic Analysis > AC transfer` means, and what tells
//! someone which component to change.
//!
//! **Why it is kept apart.** An expression here is a sum of terms, each a
//! number times a product of powers of the symbols. Multiplying two of them
//! multiplies their lengths, and eliminating a matrix multiplies over and
//! over, so the answer for a circuit of any size grows explosively. That is
//! a property of the question rather than of this code - it is why every
//! tool that offers fully symbolic analysis offers semi-symbolic beside it -
//! so this is here for the small circuits where the answer is worth
//! reading, and [`Self::TERMS`] stops it rather than letting it run away.
//!
//! What it does not do: anything that has no expression of its own. A diode
//! and a transistor are refused by name, exactly as the other solvers
//! refuse them.

use std::collections::BTreeMap;

use crate::dc_solver::{Error, Part, ends_of, nodes_of, read};
use crate::spice_netlist::{GROUND, Netlist};

/// What the symbol for frequency is called.
pub const FREQUENCY: &str = "s";

/// One term: a number times a product of powers of symbols.
#[derive(Debug, Clone, PartialEq, Default)]
pub struct Term {
    /// What the term is multiplied by.
    pub factor: f64,
    /// Which symbols it carries, and to what power.
    pub powers: BTreeMap<String, u32>,
}

impl Term {
    /// A plain number.
    #[must_use]
    pub const fn of(factor: f64) -> Self {
        Self {
            factor,
            powers: BTreeMap::new(),
        }
    }

    /// One symbol, to the first power.
    #[must_use]
    pub fn symbol(name: &str) -> Self {
        let mut powers = BTreeMap::new();
        powers.insert(name.to_owned(), 1);
        Self {
            factor: 1.0,
            powers,
        }
    }

    fn times(&self, other: &Self) -> Self {
        let mut powers = self.powers.clone();
        for (name, power) in &other.powers {
            *powers.entry(name.clone()).or_insert(0) += power;
        }
        Self {
            factor: self.factor * other.factor,
            powers,
        }
    }

    /// What it comes to when every symbol is given a value.
    #[must_use]
    pub fn at(&self, values: &BTreeMap<String, f64>) -> f64 {
        self.powers.iter().fold(self.factor, |sum, (name, power)| {
            sum * values
                .get(name)
                .copied()
                .unwrap_or_default()
                .powi(i32::try_from(*power).unwrap_or(i32::MAX))
        })
    }

    /// The term written out, as someone would read it.
    #[must_use]
    pub fn written(&self) -> String {
        use std::fmt::Write as _;

        let mut said = String::new();
        if (self.factor - 1.0).abs() > 1e-12 || self.powers.is_empty() {
            let _ = write!(said, "{}", self.factor);
        }
        for (name, power) in &self.powers {
            if !said.is_empty() {
                said.push('·');
            }
            said.push_str(name);
            if *power > 1 {
                let _ = write!(said, "^{power}");
            }
        }
        said
    }
}

/// A sum of terms.
#[derive(Debug, Clone, PartialEq, Default)]
pub struct Expression(pub Vec<Term>);

impl Expression {
    /// How many terms an expression may grow to before the question is
    /// called too big to answer this way.
    ///
    /// Not an arbitrary limit: a fully symbolic answer doubles in length
    /// with every part, so a circuit that passes this would give an answer
    /// nobody could read even if it could be worked out.
    pub const TERMS: usize = 4096;

    /// Nothing at all.
    #[must_use]
    pub const fn zero() -> Self {
        Self(Vec::new())
    }

    /// A plain number.
    #[must_use]
    pub fn of(value: f64) -> Self {
        if value == 0.0 {
            return Self::zero();
        }
        Self(vec![Term::of(value)])
    }

    /// One symbol.
    #[must_use]
    pub fn symbol(name: &str) -> Self {
        Self(vec![Term::symbol(name)])
    }

    /// Whether it is nothing at all.
    #[must_use]
    pub fn is_zero(&self) -> bool {
        self.0.is_empty()
    }

    /// The terms gathered, so that the same powers are added together and
    /// anything that cancels is dropped.
    fn gathered(terms: Vec<Term>) -> Self {
        let mut by_powers: BTreeMap<Vec<(String, u32)>, f64> = BTreeMap::new();
        for term in terms {
            let key: Vec<(String, u32)> =
                term.powers.iter().map(|(a, b)| (a.clone(), *b)).collect();
            *by_powers.entry(key).or_insert(0.0) += term.factor;
        }
        Self(
            by_powers
                .into_iter()
                .filter(|(_, factor)| factor.abs() > 1e-15)
                .map(|(key, factor)| Term {
                    factor,
                    powers: key.into_iter().collect(),
                })
                .collect(),
        )
    }

    fn plus(&self, other: &Self) -> Self {
        Self::gathered(self.0.iter().chain(other.0.iter()).cloned().collect())
    }

    fn minus(&self, other: &Self) -> Self {
        let turned: Vec<Term> = other
            .0
            .iter()
            .map(|term| Term {
                factor: -term.factor,
                powers: term.powers.clone(),
            })
            .collect();
        Self::gathered(self.0.iter().cloned().chain(turned).collect())
    }

    fn times(&self, other: &Self) -> Result<Self, Error> {
        if self.is_zero() || other.is_zero() {
            return Ok(Self::zero());
        }
        if self.0.len().saturating_mul(other.0.len()) > Self::TERMS {
            return Err(Error::Beyond(
                "a circuit this size, fully symbolic".to_owned(),
            ));
        }
        let mut terms = Vec::with_capacity(self.0.len() * other.0.len());
        for one in &self.0 {
            for two in &other.0 {
                terms.push(one.times(two));
            }
        }
        Ok(Self::gathered(terms))
    }

    /// What it comes to when every symbol is given a value.
    #[must_use]
    pub fn at(&self, values: &BTreeMap<String, f64>) -> f64 {
        self.0.iter().map(|term| term.at(values)).sum()
    }

    /// Which symbols it carries.
    #[must_use]
    pub fn symbols(&self) -> Vec<String> {
        let mut found: Vec<String> = self
            .0
            .iter()
            .flat_map(|term| term.powers.keys().cloned())
            .collect();
        found.sort();
        found.dedup();
        found
    }

    /// The expression written out, as someone would read it.
    #[must_use]
    pub fn written(&self) -> String {
        if self.0.is_empty() {
            return "0".to_owned();
        }
        self.0
            .iter()
            .map(Term::written)
            .collect::<Vec<_>>()
            .join(" + ")
    }
}

/// One expression over another.
#[derive(Debug, Clone, PartialEq)]
pub struct Ratio {
    pub above: Expression,
    pub below: Expression,
}

impl Ratio {
    /// Nothing at all.
    #[must_use]
    pub fn zero() -> Self {
        Self {
            above: Expression::zero(),
            below: Expression::of(1.0),
        }
    }

    /// A plain number.
    #[must_use]
    pub fn of(value: f64) -> Self {
        Self {
            above: Expression::of(value),
            below: Expression::of(1.0),
        }
    }

    /// One over a symbol, which is what a resistor's admittance is.
    #[must_use]
    pub fn over_symbol(name: &str) -> Self {
        Self {
            above: Expression::of(1.0),
            below: Expression::symbol(name),
        }
    }

    /// Whether it is nothing at all.
    #[must_use]
    pub fn is_zero(&self) -> bool {
        self.above.is_zero()
    }

    fn plus(&self, other: &Self) -> Result<Self, Error> {
        Ok(Self {
            above: self
                .above
                .times(&other.below)?
                .plus(&other.above.times(&self.below)?),
            below: self.below.times(&other.below)?,
        })
    }

    fn minus(&self, other: &Self) -> Result<Self, Error> {
        Ok(Self {
            above: self
                .above
                .times(&other.below)?
                .minus(&other.above.times(&self.below)?),
            below: self.below.times(&other.below)?,
        })
    }

    fn times(&self, other: &Self) -> Result<Self, Error> {
        Ok(Self {
            above: self.above.times(&other.above)?,
            below: self.below.times(&other.below)?,
        })
    }

    fn over(&self, other: &Self) -> Result<Self, Error> {
        Ok(Self {
            above: self.above.times(&other.below)?,
            below: self.below.times(&other.above)?,
        })
    }

    /// What it comes to when every symbol is given a value.
    #[must_use]
    pub fn at(&self, values: &BTreeMap<String, f64>) -> f64 {
        let below = self.below.at(values);
        if below == 0.0 {
            return f64::NAN;
        }
        self.above.at(values) / below
    }

    /// The whole thing written out.
    #[must_use]
    pub fn written(&self) -> String {
        format!("({}) / ({})", self.above.written(), self.below.written())
    }
}

/// The transfer function to a node, with the component names standing.
///
/// # Errors
///
/// [`Error::Beyond`] for a part with no expression of its own, or for a
/// circuit whose answer would grow past [`Expression::TERMS`], and
/// [`Error::NoGround`] or [`Error::DoesNotSettle`] as the other solvers
/// give them.
pub fn transfer(netlist: &Netlist, node: &str) -> Result<Ratio, Error> {
    let parts = read(&netlist.lines)?;
    if !parts.iter().flat_map(ends_of).any(|name| name == GROUND) {
        return Err(Error::NoGround);
    }

    let nodes = nodes_of(&parts);
    let sources = parts
        .iter()
        .filter(|part| matches!(part, Part::Voltage { .. }))
        .count();
    let size = nodes.len() + sources;
    if size == 0 {
        return Err(Error::DoesNotSettle);
    }

    let mut matrix = vec![vec![Ratio::zero(); size + 1]; size];

    for (at, part) in parts.iter().enumerate() {
        let name = netlist
            .lines
            .get(at)
            .and_then(|line| line.split_whitespace().next())
            .unwrap_or("?")
            .to_owned();
        let admittance = match part {
            // One over the resistance, with the resistor's own name.
            Part::Resistor { .. } => Ratio::over_symbol(&name),
            // s times the capacitance.
            Part::Capacitor { .. } => Ratio {
                above: Expression::symbol(FREQUENCY).times(&Expression::symbol(&name))?,
                below: Expression::of(1.0),
            },
            // One over s times the inductance.
            Part::Inductor { .. } => Ratio {
                above: Expression::of(1.0),
                below: Expression::symbol(FREQUENCY).times(&Expression::symbol(&name))?,
            },
            Part::Current { .. } | Part::Voltage { .. } => continue,
            Part::Diode { .. } => return Err(Error::Beyond("a diode".to_owned())),
            Part::Transistor { .. } => return Err(Error::Beyond("a transistor".to_owned())),
            Part::Vccs { .. } => return Err(Error::Beyond("a controlled source".to_owned())),
        };

        let [from, to] = ends_of(part);
        let (a, b) = (nodes.get(from).copied(), nodes.get(to).copied());
        if let Some(a) = a {
            matrix[a][a] = matrix[a][a].plus(&admittance)?;
        }
        if let Some(b) = b {
            matrix[b][b] = matrix[b][b].plus(&admittance)?;
        }
        if let (Some(a), Some(b)) = (a, b) {
            matrix[a][b] = matrix[a][b].minus(&admittance)?;
            matrix[b][a] = matrix[b][a].minus(&admittance)?;
        }
    }

    let mut which = 0;
    for part in &parts {
        let Part::Voltage { .. } = part else { continue };
        let [from, to] = ends_of(part);
        let row = nodes.len() + which;
        if let Some(a) = nodes.get(from).copied() {
            matrix[row][a] = matrix[row][a].plus(&Ratio::of(1.0))?;
            matrix[a][row] = matrix[a][row].plus(&Ratio::of(1.0))?;
        }
        if let Some(b) = nodes.get(to).copied() {
            matrix[row][b] = matrix[row][b].minus(&Ratio::of(1.0))?;
            matrix[b][row] = matrix[b][row].minus(&Ratio::of(1.0))?;
        }
        // The one source drives with one, so what comes out is the
        // transfer function rather than a voltage.
        matrix[row][size] = Ratio::of(if which == 0 { 1.0 } else { 0.0 });
        which += 1;
    }

    let answer = eliminate(matrix, size)?;
    let at = nodes
        .get(node)
        .copied()
        .ok_or_else(|| Error::Beyond(node.to_owned()))?;
    Ok(answer[at].clone())
}

/// Elimination over ratios of expressions.
fn eliminate(mut matrix: Vec<Vec<Ratio>>, size: usize) -> Result<Vec<Ratio>, Error> {
    for column in 0..size {
        // A row whose entry here is not nothing will do: there is no
        // "bigger" to prefer when the entries are algebra rather than
        // numbers, and nothing cancels by rounding either.
        let Some(usable) = (column..size).find(|row| !matrix[*row][column].is_zero()) else {
            return Err(Error::DoesNotSettle);
        };
        matrix.swap(column, usable);

        for row in column + 1..size {
            if matrix[row][column].is_zero() {
                continue;
            }
            let factor = matrix[row][column].over(&matrix[column][column])?;
            // The pivot row is read while this one is written, so the
            // two are split apart rather than borrowed at once.
            let (above, below) = matrix.split_at_mut(row);
            let pivot_row = &above[column];
            for (taken, cell) in below[0].iter_mut().enumerate().skip(column) {
                let take = factor.times(&pivot_row[taken])?;
                *cell = cell.minus(&take)?;
            }
        }
    }

    let mut answer = vec![Ratio::zero(); size];
    for row in (0..size).rev() {
        let mut left = matrix[row][size].clone();
        for column in row + 1..size {
            let take = matrix[row][column].times(&answer[column])?;
            left = left.minus(&take)?;
        }
        answer[row] = left.over(&matrix[row][row])?;
    }
    Ok(answer)
}

#[cfg(test)]
mod tests {
    use super::{Expression, FREQUENCY, Ratio, Term, transfer};
    use crate::dc_solver::Error;
    use crate::spice_netlist::{Analysis, Netlist};
    use std::collections::BTreeMap;

    fn a_netlist(lines: &[&str]) -> Netlist {
        Netlist {
            title: "Test".to_owned(),
            lines: lines.iter().map(|it| (*it).to_owned()).collect(),
            wanting: Vec::new(),
            asking: Some(Analysis::OperatingPoint),
        }
    }

    fn values(pairs: &[(&str, f64)]) -> BTreeMap<String, f64> {
        pairs
            .iter()
            .map(|(name, value)| ((*name).to_owned(), *value))
            .collect()
    }

    #[test]
    fn a_divider_comes_back_with_both_resistors_named() {
        let found = transfer(&a_netlist(&["V1 1 0 1", "R1 1 2 1k", "R2 2 0 1k"]), "2").unwrap();
        // Both names stand in the answer, and nothing else does.
        let mut symbols = found.above.symbols();
        symbols.extend(found.below.symbols());
        symbols.sort();
        symbols.dedup();
        assert_eq!(symbols, ["R1", "R2"]);
        assert!(!symbols.contains(&FREQUENCY.to_owned()));
    }

    #[test]
    fn the_algebra_gives_the_same_answer_as_the_numbers() {
        // The strongest check: put the component values into the symbolic
        // answer and see that it comes to what the numeric solver says.
        // Un-cancelled factors cannot hide from this.
        let circuit = a_netlist(&["V1 1 0 1", "R1 1 2 1k", "R2 2 0 3k"]);
        let found = transfer(&circuit, "2").unwrap();

        let worked_out = found.at(&values(&[("R1", 1000.0), ("R2", 3000.0)]));
        let numerically = crate::dc_solver::operating_point(&circuit)
            .unwrap()
            .column("V(2)")
            .unwrap()[0];
        assert!(
            (worked_out - numerically).abs() < 1e-9,
            "{worked_out} against {numerically}"
        );
    }

    #[test]
    fn an_rc_carries_s_and_both_component_names() {
        let found = transfer(&a_netlist(&["V1 1 0 1", "R1 1 2 1k", "C1 2 0 1u"]), "2").unwrap();
        let mut symbols = found.above.symbols();
        symbols.extend(found.below.symbols());
        symbols.sort();
        symbols.dedup();
        assert!(symbols.contains(&"R1".to_owned()), "{symbols:?}");
        assert!(symbols.contains(&"C1".to_owned()), "{symbols:?}");
        assert!(symbols.contains(&FREQUENCY.to_owned()), "{symbols:?}");
    }

    #[test]
    fn an_rc_has_the_shape_the_algebra_says_it_should() {
        // H(s) = 1 / (1 + s·R1·C1). Two things follow exactly, and both
        // are checked rather than the answer being eyeballed.
        let found = transfer(&a_netlist(&["V1 1 0 1", "R1 1 2 1k", "C1 2 0 1u"]), "2").unwrap();

        // Well below the corner, all of it passes: H tends to 1 as s tends
        // to nothing. Asked just off zero rather than at it - eliminating
        // the matrix leaves a factor of s in both halves, so exactly at
        // zero the ratio is nothing over nothing. That factor cancels and
        // changes no answer anywhere else; it is the same one `symbolic`
        // strikes out as a pole and a zero standing together.
        let just_off = values(&[("R1", 1000.0), ("C1", 1e-6), (FREQUENCY, 1e-3)]);
        let passes = found.at(&just_off);
        assert!((passes - 1.0).abs() < 1e-5, "{passes}");

        // And somewhere in it is a term carrying all three together,
        // which is what makes the corner depend on the product R·C.
        let carries_all = found
            .below
            .0
            .iter()
            .chain(found.above.0.iter())
            .any(|term| {
                term.powers.contains_key("R1")
                    && term.powers.contains_key("C1")
                    && term.powers.contains_key(FREQUENCY)
            });
        assert!(carries_all, "{}", found.written());
    }

    #[test]
    fn the_corner_the_algebra_gives_is_the_one_the_sweep_finds() {
        // s·R·C is one at the corner, so the size there is 1/sqrt(2). The
        // algebra says the corner is at 1/(R·C); the sweep is asked at
        // exactly that frequency and agrees.
        let circuit = a_netlist(&["V1 1 0 AC 1", "R1 1 2 1k", "C1 2 0 1u"]);
        let corner = 1.0 / (std::f64::consts::TAU * 1000.0 * 1e-6);
        let swept = crate::ac_solver::ac_sweep(
            &circuit,
            crate::spice_netlist::Sweep::Linear,
            1,
            corner,
            corner,
        )
        .unwrap();
        let size = swept.column("V(2)").unwrap()[0];
        assert!(
            (size - std::f64::consts::FRAC_1_SQRT_2).abs() < 1e-9,
            "{size}"
        );
    }

    #[test]
    fn a_part_with_no_expression_of_its_own_is_refused_by_name() {
        for (line, named) in [("D1 2 0 D", "a diode"), ("Q1 2 3 0 BC547", "a transistor")] {
            let found = transfer(&a_netlist(&["V1 1 0 1", "R1 1 2 1k", line]), "2");
            assert_eq!(found, Err(Error::Beyond(named.to_owned())));
        }
    }

    #[test]
    fn terms_gather_so_that_what_cancels_goes_away() {
        let one = Expression::symbol("R1");
        assert!(one.minus(&one).is_zero());
        assert!((one.plus(&one).0[0].factor - 2.0).abs() < 1e-12);
    }

    #[test]
    fn multiplying_symbols_adds_their_powers() {
        let squared = Term::symbol("R1").times(&Term::symbol("R1"));
        assert_eq!(squared.powers.get("R1"), Some(&2));
        assert_eq!(squared.written(), "R1^2");
    }

    #[test]
    fn an_expression_is_written_the_way_it_would_be_read() {
        let found = Expression(vec![
            Term::of(1.0),
            Term::symbol("R1").times(&Term::symbol("C1")),
        ]);
        assert_eq!(found.written(), "1 + C1·R1");
        assert_eq!(Expression::zero().written(), "0");
        assert_eq!(Ratio::of(2.0).written(), "(2) / (1)");
    }

    #[test]
    fn a_circuit_too_big_to_answer_this_way_says_so_rather_than_trying() {
        // The limit is real and it is reached, rather than being a number
        // written down and never met.
        let mut lines = vec!["V1 1 0 1".to_owned()];
        for at in 1..40 {
            lines.push(format!("R{at} {at} {} 1k", at + 1));
            lines.push(format!("C{at} {} 0 1u", at + 1));
        }
        lines.push("R99 40 0 1k".to_owned());
        let circuit = Netlist {
            title: "Big".to_owned(),
            lines,
            wanting: Vec::new(),
            asking: None,
        };

        match transfer(&circuit, "2") {
            Err(Error::Beyond(what)) => assert!(what.contains("fully symbolic"), "{what}"),
            other => panic!("expected a refusal, got {other:?}"),
        }
    }
}
