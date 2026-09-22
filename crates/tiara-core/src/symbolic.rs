//! Working a circuit out as algebra rather than numbers.
//!
//! The same modified nodal analysis again, with one change: an entry in the
//! matrix is a ratio of polynomials in `s` rather than a number. A resistor
//! is `1/R`, a capacitor is `sC`, an inductor is `1/(sL)`, and eliminating
//! the matrix leaves the answer at each node as a **transfer function** -
//! what comes out over what goes in, as an expression in `s`.
//!
//! That is what `Analysis > Symbolic Analysis > Semi-symbolic AC transfer`
//! means, and the poles and zeros are simply the roots of the two halves.
//!
//! **Semi-symbolic, not fully symbolic.** The component values are numbers
//! and only `s` is carried as a symbol. Fully symbolic - `R1` and `C1` left
//! standing in the answer - wants polynomials in many symbols at once and
//! grows explosively with the size of the circuit; TINA offers both and
//! this is the half that is worth having for a circuit anyone draws.
//!
//! Storage only: a diode or a transistor has no transfer function until it
//! is linearised about an operating point, and this does not work one out,
//! so it refuses them by name.

use crate::dc_solver::{Error, Part, ends_of, nodes_of, read};
use crate::spice_netlist::{GROUND, Netlist};

/// A polynomial in `s`, lowest power first.
///
/// `[1.0, 2.0]` is `1 + 2s`.
#[derive(Debug, Clone, PartialEq, Default)]
pub struct Polynomial(pub Vec<f64>);

impl Polynomial {
    /// The polynomial that is just this number.
    #[must_use]
    pub fn of(value: f64) -> Self {
        Self(vec![value])
    }

    /// `s` itself, times a number.
    #[must_use]
    pub fn s_times(value: f64) -> Self {
        Self(vec![0.0, value])
    }

    /// Nothing at all.
    #[must_use]
    pub const fn zero() -> Self {
        Self(Vec::new())
    }

    /// How small a coefficient has to be, beside the largest, to be
    /// nothing at all.
    ///
    /// Judged against the largest rather than against zero. Eliminating a
    /// matrix leaves dust in the high powers - a term of 1e-20 beside one
    /// of 1e-3 - and counting that dust as a real term gives an RC low
    /// pass three poles where it has one.
    const DUST: f64 = 1e-12;

    /// The largest coefficient there is.
    fn largest(&self) -> f64 {
        self.0.iter().fold(0.0_f64, |most, it| most.max(it.abs()))
    }

    /// Whether it is nothing at all.
    #[must_use]
    pub fn is_zero(&self) -> bool {
        self.largest() < 1e-300
    }

    /// Its highest power, or nothing where it is zero.
    #[must_use]
    pub fn degree(&self) -> Option<usize> {
        let dust = self.largest() * Self::DUST;
        self.0.iter().rposition(|it| it.abs() > dust)
    }

    fn plus(&self, other: &Self) -> Self {
        let mut found = vec![0.0; self.0.len().max(other.0.len())];
        for (at, value) in self.0.iter().chain(std::iter::empty()).enumerate() {
            found[at] += value;
        }
        for (at, value) in other.0.iter().enumerate() {
            found[at] += value;
        }
        Self(found)
    }

    fn minus(&self, other: &Self) -> Self {
        let mut found = vec![0.0; self.0.len().max(other.0.len())];
        for (at, value) in self.0.iter().enumerate() {
            found[at] += value;
        }
        for (at, value) in other.0.iter().enumerate() {
            found[at] -= value;
        }
        Self(found)
    }

    fn times(&self, other: &Self) -> Self {
        if self.is_zero() || other.is_zero() {
            return Self::zero();
        }
        let mut found = vec![0.0; self.0.len() + other.0.len() - 1];
        for (at, one) in self.0.iter().enumerate() {
            for (and, two) in other.0.iter().enumerate() {
                found[at + and] = one.mul_add(*two, found[at + and]);
            }
        }
        Self(found)
    }

    /// What it comes to at a value of `s`, given as a pair.
    #[must_use]
    pub fn at(&self, real: f64, imaginary: f64) -> (f64, f64) {
        let (mut sum_real, mut sum_imaginary) = (0.0_f64, 0.0_f64);
        for value in self.0.iter().rev() {
            let next_real = sum_real.mul_add(real, -(sum_imaginary * imaginary)) + value;
            let next_imaginary = sum_real.mul_add(imaginary, sum_imaginary * real);
            sum_real = next_real;
            sum_imaginary = next_imaginary;
        }
        (sum_real, sum_imaginary)
    }

    /// The same polynomial with its highest coefficient made one.
    #[must_use]
    pub fn normalised(&self) -> Self {
        let Some(top) = self.degree() else {
            return Self::zero();
        };
        let by = self.0[top];
        Self(self.0[..=top].iter().map(|it| it / by).collect())
    }
}

/// One polynomial over another.
#[derive(Debug, Clone, PartialEq)]
pub struct Ratio {
    pub above: Polynomial,
    pub below: Polynomial,
}

impl Default for Ratio {
    fn default() -> Self {
        Self::zero()
    }
}

impl Ratio {
    /// Nothing at all.
    #[must_use]
    pub fn zero() -> Self {
        Self {
            above: Polynomial::zero(),
            below: Polynomial::of(1.0),
        }
    }

    /// This number.
    #[must_use]
    pub fn of(value: f64) -> Self {
        Self {
            above: Polynomial::of(value),
            below: Polynomial::of(1.0),
        }
    }

    /// Whether it is nothing at all.
    #[must_use]
    pub fn is_zero(&self) -> bool {
        self.above.is_zero()
    }

    fn plus(&self, other: &Self) -> Self {
        Self {
            above: self
                .above
                .times(&other.below)
                .plus(&other.above.times(&self.below)),
            below: self.below.times(&other.below),
        }
    }

    fn minus(&self, other: &Self) -> Self {
        Self {
            above: self
                .above
                .times(&other.below)
                .minus(&other.above.times(&self.below)),
            below: self.below.times(&other.below),
        }
    }

    fn times(&self, other: &Self) -> Self {
        Self {
            above: self.above.times(&other.above),
            below: self.below.times(&other.below),
        }
    }

    fn over(&self, other: &Self) -> Self {
        Self {
            above: self.above.times(&other.below),
            below: self.below.times(&other.above),
        }
    }

    /// How big it is at a value of `s`, for choosing a pivot.
    fn size_at(&self, real: f64) -> f64 {
        let (above, _) = self.above.at(real, 0.0);
        let (below, _) = self.below.at(real, 0.0);
        if below.abs() < 1e-300 {
            return f64::INFINITY;
        }
        (above / below).abs()
    }
}

/// The transfer function from a source to a node.
///
/// `V(node) / V(source)`, as a ratio of polynomials in `s`.
///
/// # Errors
///
/// [`Error::Beyond`] for a part with no transfer function of its own - a
/// diode, a transistor, a subcircuit - and [`Error::NoGround`] or
/// [`Error::DoesNotSettle`] as the other solvers give them.
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

    for part in &parts {
        let admittance = match part {
            Part::Resistor { ohms, .. } => {
                if *ohms == 0.0 {
                    return Err(Error::DoesNotSettle);
                }
                Ratio::of(1.0 / ohms)
            }
            Part::Capacitor { farads, .. } => Ratio {
                above: Polynomial::s_times(*farads),
                below: Polynomial::of(1.0),
            },
            Part::Inductor { henries, .. } => Ratio {
                above: Polynomial::of(1.0),
                below: Polynomial::s_times(*henries),
            },
            Part::Current { .. } | Part::Voltage { .. } => continue,
            Part::Diode { .. } => return Err(Error::Beyond("a diode".to_owned())),
            Part::Transistor { .. } => return Err(Error::Beyond("a transistor".to_owned())),
            Part::Vccs { .. } => return Err(Error::Beyond("a controlled source".to_owned())),
        };

        let [from, to] = ends_of(part);
        let (a, b) = (nodes.get(from).copied(), nodes.get(to).copied());
        if let Some(a) = a {
            matrix[a][a] = matrix[a][a].plus(&admittance);
        }
        if let Some(b) = b {
            matrix[b][b] = matrix[b][b].plus(&admittance);
        }
        if let (Some(a), Some(b)) = (a, b) {
            matrix[a][b] = matrix[a][b].minus(&admittance);
            matrix[b][a] = matrix[b][a].minus(&admittance);
        }
    }

    // The one source drives with one, so what comes out is the transfer
    // function itself rather than a voltage.
    let mut which = 0;
    for part in &parts {
        let Part::Voltage { .. } = part else { continue };
        let [from, to] = ends_of(part);
        let row = nodes.len() + which;
        if let Some(a) = nodes.get(from).copied() {
            matrix[row][a] = matrix[row][a].plus(&Ratio::of(1.0));
            matrix[a][row] = matrix[a][row].plus(&Ratio::of(1.0));
        }
        if let Some(b) = nodes.get(to).copied() {
            matrix[row][b] = matrix[row][b].minus(&Ratio::of(1.0));
            matrix[b][row] = matrix[b][row].minus(&Ratio::of(1.0));
        }
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

/// Elimination over ratios of polynomials.
fn eliminate(mut matrix: Vec<Vec<Ratio>>, size: usize) -> Result<Vec<Ratio>, Error> {
    // Pivoting is judged at a value of `s` well away from any root, so
    // that a row which happens to vanish at one frequency is not chosen.
    const JUDGED_AT: f64 = 1.0;

    for column in 0..size {
        let mut biggest = column;
        for row in column + 1..size {
            if matrix[row][column].size_at(JUDGED_AT) > matrix[biggest][column].size_at(JUDGED_AT) {
                biggest = row;
            }
        }
        matrix.swap(column, biggest);

        if matrix[column][column].is_zero() {
            return Err(Error::DoesNotSettle);
        }
        for row in column + 1..size {
            if matrix[row][column].is_zero() {
                continue;
            }
            let factor = matrix[row][column].over(&matrix[column][column]);
            let (above, below) = matrix.split_at_mut(row);
            let pivot_row = &above[column];
            for (taken, cell) in below[0].iter_mut().enumerate().skip(column) {
                *cell = cell.minus(&factor.times(&pivot_row[taken]));
            }
        }
    }

    let mut answer = vec![Ratio::zero(); size];
    for row in (0..size).rev() {
        let mut left = matrix[row][size].clone();
        for column in row + 1..size {
            left = left.minus(&matrix[row][column].times(&answer[column]));
        }
        answer[row] = left.over(&matrix[row][row]);
    }
    Ok(answer)
}

/// A root, which may be a complex pair.
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct Root {
    pub real: f64,
    pub imaginary: f64,
}

/// The roots of a polynomial, by Durand-Kerner.
///
/// Every root is moved at once, each away from where the others already
/// are, until none of them moves any further. It wants no starting guess
/// worth the name and finds complex roots as readily as real ones, which a
/// search along the real line cannot.
#[must_use]
pub fn roots(polynomial: &Polynomial) -> Vec<Root> {
    let Some(degree) = polynomial.degree() else {
        return Vec::new();
    };
    if degree == 0 {
        return Vec::new();
    }
    let made_one = polynomial.normalised();
    let degree = made_one.degree().unwrap_or(degree).min(degree);

    // Spread the first guesses around a circle so that none of them starts
    // on top of another, which would leave them nowhere to push apart to.
    let mut found: Vec<Root> = (0..degree)
        .map(|at| {
            #[allow(
                clippy::cast_precision_loss,
                reason = "a polynomial of more than a few terms is not met here"
            )]
            let angle = 0.4 + 2.0 * std::f64::consts::PI * at as f64 / degree as f64;
            Root {
                real: angle.cos(),
                imaginary: angle.sin(),
            }
        })
        .collect();

    for _ in 0..500 {
        let mut moved = 0.0_f64;
        for at in 0..degree {
            let here = found[at];
            let (mut above_real, mut above_imaginary) = made_one.at(here.real, here.imaginary);

            let (mut below_real, mut below_imaginary) = (1.0_f64, 0.0_f64);
            for (and, other) in found.iter().enumerate() {
                if and == at {
                    continue;
                }
                let (real, imaginary) = (here.real - other.real, here.imaginary - other.imaginary);
                let next_real = below_real.mul_add(real, -(below_imaginary * imaginary));
                below_imaginary = below_real.mul_add(imaginary, below_imaginary * real);
                below_real = next_real;
            }

            let size = below_real.mul_add(below_real, below_imaginary * below_imaginary);
            if size < 1e-300 {
                continue;
            }
            let step_real =
                above_real.mul_add(below_real, above_imaginary * below_imaginary) / size;
            let step_imaginary =
                above_imaginary.mul_add(below_real, -(above_real * below_imaginary)) / size;

            above_real = here.real - step_real;
            above_imaginary = here.imaginary - step_imaginary;
            moved = moved.max(step_real.hypot(step_imaginary));
            found[at] = Root {
                real: above_real,
                imaginary: above_imaginary,
            };
        }
        if moved < 1e-12 {
            break;
        }
    }

    found
}

/// How close two roots must be to count as the same root.
///
/// A thousandth of how far out they are, so that a pole at a million and
/// one at a millionth are each judged on their own scale.
///
/// It has to be this loose. A root that a polynomial carries more than once
/// cannot be found precisely - the arithmetic that finds it is working on
/// differences that have cancelled - and the several copies come back
/// spread around the true value by about its size times the cube root of
/// the machine's precision. An RC low pass's pole at -1000 comes back three
/// times, spread by some thousandths; anything tighter than this would fail
/// to see they are one root.
///
/// What it costs: two genuinely different poles closer together than a
/// thousandth of their size are taken for one. That is a circuit deliberately
/// built on the edge of a degeneracy, and it is written here rather than
/// left to be discovered.
const THE_SAME: f64 = 1e-3;

/// The poles and zeros of a transfer function.
///
/// The zeros are where what comes out is nothing and the poles where it
/// runs away - the roots of the two halves, **less any that stand in the
/// same place**.
///
/// That last part is not tidying. Eliminating the matrix multiplies both
/// halves by whatever it pivots on, so the answer comes out carrying
/// factors that belong to neither: an RC low pass has one pole, and the
/// elimination hands back three of them with two cancelled by zeros
/// standing on top. A pole and a zero at the same place are nothing at
/// all, the circuit not noticing them, so they are struck out in pairs and
/// what is left is what the circuit actually does.
#[must_use]
pub fn poles_and_zeros(ratio: &Ratio) -> (Vec<Root>, Vec<Root>) {
    let mut poles = gathered(&roots(&ratio.below));
    let mut zeros = gathered(&roots(&ratio.above));

    // A pole and a zero standing together cancel, however many of each.
    for (pole, how_many) in &mut poles {
        let Some((_, and)) = zeros
            .iter_mut()
            .find(|(zero, _)| stand_together(*pole, *zero))
        else {
            continue;
        };
        let struck = (*how_many).min(*and);
        *how_many -= struck;
        *and -= struck;
    }

    (spread(&poles), spread(&zeros))
}

/// Roots gathered into the places they stand, with how many stand there.
///
/// A root a polynomial carries more than once comes back as several
/// answers spread around the true one, because the arithmetic that finds
/// it is working on differences that have cancelled. Gathering them and
/// taking the middle recovers the root far better than any one of them,
/// since the spread falls either side of it.
fn gathered(found: &[Root]) -> Vec<(Root, usize)> {
    let mut places: Vec<(Root, usize)> = Vec::new();
    for root in found {
        if let Some((place, how_many)) = places
            .iter_mut()
            .find(|(place, _)| stand_together(*place, *root))
        {
            // The running middle of everything gathered here so far.
            #[allow(
                clippy::cast_precision_loss,
                reason = "a polynomial of more than a few terms is not met here"
            )]
            let was = *how_many as f64;
            place.real = place.real.mul_add(was, root.real) / (was + 1.0);
            place.imaginary = place.imaginary.mul_add(was, root.imaginary) / (was + 1.0);
            *how_many += 1;
            continue;
        }
        places.push((*root, 1));
    }
    places
}

/// The gathered roots laid back out, one for each that stands there.
fn spread(places: &[(Root, usize)]) -> Vec<Root> {
    places
        .iter()
        .flat_map(|(root, how_many)| std::iter::repeat_n(*root, *how_many))
        .collect()
}

/// Whether two roots are the same root.
fn stand_together(one: Root, two: Root) -> bool {
    let apart = (one.real - two.real).hypot(one.imaginary - two.imaginary);
    let scale = one
        .real
        .hypot(one.imaginary)
        .max(two.real.hypot(two.imaginary))
        .max(1.0);
    apart < scale * THE_SAME
}

#[cfg(test)]
mod tests {
    use super::{Polynomial, Ratio, poles_and_zeros, roots, transfer};
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

    #[test]
    fn a_divider_of_resistors_has_no_s_in_it_at_all() {
        let found = transfer(&a_netlist(&["V1 1 0 1", "R1 1 2 1k", "R2 2 0 1k"]), "2").unwrap();
        // Half, and a constant: no powers of s anywhere.
        let (above, _) = found.above.at(0.0, 0.0);
        let (below, _) = found.below.at(0.0, 0.0);
        assert!((above / below - 0.5).abs() < 1e-9);
        assert_eq!(found.above.degree(), Some(0));
        assert_eq!(found.below.degree(), Some(0));
    }

    #[test]
    fn an_rc_low_pass_has_one_pole_where_the_time_constant_says() {
        // H(s) = 1 / (1 + sRC), so the pole is at -1/(RC) = -1000.
        let found = transfer(&a_netlist(&["V1 1 0 1", "R1 1 2 1k", "C1 2 0 1u"]), "2").unwrap();
        let (poles, zeros) = poles_and_zeros(&found);

        assert_eq!(poles.len(), 1);
        assert!(zeros.is_empty());
        // A root the elimination leaves carried three times cannot be
        // known to the last figure - the arithmetic that finds it works on
        // differences that have cancelled - so it is checked to a part in
        // ten thousand, and comes back far better than that.
        assert!((poles[0].real + 1000.0).abs() < 0.1, "{:?}", poles[0]);
        assert!(poles[0].imaginary.abs() < 0.1, "{:?}", poles[0]);
    }

    #[test]
    fn an_rc_high_pass_has_a_zero_at_nothing_as_well_as_its_pole() {
        // Taking the output across the resistor instead: H(s) = sRC/(1+sRC),
        // one pole at -1/(RC) and one zero at the origin.
        let found = transfer(&a_netlist(&["V1 1 0 1", "C1 1 2 1u", "R1 2 0 1k"]), "2").unwrap();
        let (poles, zeros) = poles_and_zeros(&found);

        assert_eq!(poles.len(), 1);
        assert_eq!(zeros.len(), 1);
        assert!((poles[0].real + 1000.0).abs() < 0.1, "{:?}", poles[0]);
        // The zero sits at the origin, where a high pass passes nothing.
        assert!(zeros[0].real.abs() < 0.1, "{:?}", zeros[0]);
        assert!(zeros[0].imaginary.abs() < 0.1, "{:?}", zeros[0]);
    }

    #[test]
    fn an_lc_pair_rings_at_the_frequency_it_should() {
        // A series LC into ground resonates at 1/sqrt(LC), and with a
        // little resistance the poles are a complex pair at about that.
        let found = transfer(
            &a_netlist(&["V1 1 0 1", "R1 1 2 1", "L1 2 3 1m", "C1 3 0 1u"]),
            "3",
        )
        .unwrap();
        let (poles, _) = poles_and_zeros(&found);

        assert_eq!(poles.len(), 2);
        let ringing = 1.0 / (1e-3_f64 * 1e-6).sqrt();
        let found_at = poles[0].imaginary.abs();
        assert!(
            (found_at - ringing).abs() < ringing * 0.01,
            "{found_at} against {ringing}"
        );
        // And they are a conjugate pair, as the poles of a real circuit are.
        assert!((poles[0].real - poles[1].real).abs() < 1e-6);
        assert!((poles[0].imaginary + poles[1].imaginary).abs() < 1e-6);
    }

    #[test]
    fn the_transfer_function_agrees_with_the_frequency_sweep() {
        // Two ways of asking the same question: the algebra worked out
        // here, and the numbers worked out by the AC solver.
        let circuit = a_netlist(&["V1 1 0 AC 1", "R1 1 2 1k", "C1 2 0 1u"]);
        let found = transfer(&circuit, "2").unwrap();

        let at = 1.0 / (std::f64::consts::TAU * 1e-3);
        let angular = std::f64::consts::TAU * at;
        let (above_real, above_imaginary) = found.above.at(0.0, angular);
        let (below_real, below_imaginary) = found.below.at(0.0, angular);
        let size = above_real.hypot(above_imaginary) / below_real.hypot(below_imaginary);

        let swept =
            crate::ac_solver::ac_sweep(&circuit, crate::spice_netlist::Sweep::Linear, 1, at, at)
                .unwrap();
        let numerically = swept.column("V(2)").unwrap()[0];
        assert!(
            (size - numerically).abs() < 1e-9,
            "{size} against {numerically}"
        );
    }

    #[test]
    fn a_part_with_no_transfer_function_is_refused_by_name() {
        for (line, named) in [("D1 2 0 D", "a diode"), ("Q1 2 3 0 BC547", "a transistor")] {
            let found = transfer(&a_netlist(&["V1 1 0 1", "R1 1 2 1k", line]), "2");
            assert_eq!(found, Err(Error::Beyond(named.to_owned())));
        }
    }

    #[test]
    fn a_node_the_circuit_has_not_got_is_refused_by_name() {
        let found = transfer(&a_netlist(&["V1 1 0 1", "R1 1 0 1k"]), "9");
        assert_eq!(found, Err(Error::Beyond("9".to_owned())));
    }

    #[test]
    fn the_roots_of_a_known_polynomial_are_the_ones_it_has() {
        // (s - 2)(s + 3) = -6 + s + s^2
        let found = roots(&Polynomial(vec![-6.0, 1.0, 1.0]));
        let mut real: Vec<f64> = found.iter().map(|it| it.real).collect();
        real.sort_by(f64::total_cmp);
        assert!((real[0] + 3.0).abs() < 1e-9, "{real:?}");
        assert!((real[1] - 2.0).abs() < 1e-9, "{real:?}");
    }

    #[test]
    fn a_polynomial_with_no_roots_to_find_gives_none() {
        assert!(roots(&Polynomial::of(5.0)).is_empty());
        assert!(roots(&Polynomial::zero()).is_empty());
    }

    #[test]
    fn a_ratio_of_nothing_is_nothing() {
        assert!(Ratio::zero().is_zero());
        assert!(!Ratio::of(1.0).is_zero());
    }
}
