//! How a circuit answers at each of a run of frequencies.
//!
//! The same modified nodal analysis as [`crate::dc_solver`], in complex
//! numbers: a resistor is itself, a capacitor is `jwC`, an inductor is
//! `1/(jwL)`. Each frequency is its own matrix, solved the same way, and
//! the answer at each node is a size and an angle - which is what a Bode
//! plot draws.
//!
//! A voltage source drives with the magnitude written after `AC` on its
//! line, and with its own value where there is none, which is what the
//! port's netlist writer writes today.
//!
//! Only what a sweep needs is implemented here, arithmetic included: there
//! is no general complex type and no dependency for one.

use crate::dc_solver::{Error, Part, ends_of, nodes_of, read};
use crate::expression;
use crate::simulator::Table;
use crate::spice_netlist::{GROUND, Netlist, Sweep};

/// A number with a real and an imaginary part.
#[derive(Debug, Clone, Copy, PartialEq, Default)]
struct Complex {
    real: f64,
    imaginary: f64,
}

impl Complex {
    const ZERO: Self = Self {
        real: 0.0,
        imaginary: 0.0,
    };

    const fn of(real: f64) -> Self {
        Self {
            real,
            imaginary: 0.0,
        }
    }

    const fn plus(self, other: Self) -> Self {
        Self {
            real: self.real + other.real,
            imaginary: self.imaginary + other.imaginary,
        }
    }

    const fn minus(self, other: Self) -> Self {
        Self {
            real: self.real - other.real,
            imaginary: self.imaginary - other.imaginary,
        }
    }

    fn times(self, other: Self) -> Self {
        Self {
            real: self
                .real
                .mul_add(other.real, -(self.imaginary * other.imaginary)),
            imaginary: self
                .real
                .mul_add(other.imaginary, self.imaginary * other.real),
        }
    }

    fn over(self, other: Self) -> Self {
        let below = other
            .real
            .mul_add(other.real, other.imaginary * other.imaginary);
        if below == 0.0 {
            return Self::ZERO;
        }
        Self {
            real: self
                .real
                .mul_add(other.real, self.imaginary * other.imaginary)
                / below,
            imaginary: self
                .imaginary
                .mul_add(other.real, -(self.real * other.imaginary))
                / below,
        }
    }

    fn size(self) -> f64 {
        self.real.hypot(self.imaginary)
    }

    /// The angle in degrees, which is what a Bode plot shows.
    fn angle(self) -> f64 {
        self.imaginary.atan2(self.real).to_degrees()
    }
}

/// Sweeps a circuit over frequency.
///
/// The answer carries a size and an angle per node - `V(2)` and `P(2)` -
/// so an amplitude plot and a phase plot are both drawn from it.
///
/// # Errors
///
/// The same as [`crate::dc_solver::operating_point`], and
/// [`Error::DoesNotSettle`] where the sweep itself makes no sense.
pub fn ac_sweep(
    netlist: &Netlist,
    sweep: Sweep,
    points: u32,
    from: f64,
    to: f64,
) -> Result<Table, Error> {
    let sensible = from.is_finite() && to.is_finite() && from > 0.0 && to >= from && points > 0;
    if !sensible {
        return Err(Error::DoesNotSettle);
    }
    let parts = read(&netlist.lines)?;
    let driving = driving(&netlist.lines)?;

    let mut columns: Vec<String> = Vec::new();
    let mut rows: Vec<Vec<f64>> = Vec::new();

    for frequency in frequencies(sweep, points, from, to) {
        let (names, answer) = at_frequency(&parts, &driving, frequency)?;
        if columns.is_empty() {
            columns.push("frequency".to_owned());
            for name in &names {
                columns.push(format!("V({name})"));
                columns.push(format!("P({name})"));
            }
        }
        let mut row = Vec::with_capacity(columns.len());
        row.push(frequency);
        for value in answer {
            row.push(value.size());
            row.push(value.angle());
        }
        rows.push(row);
    }

    Ok(Table { columns, rows })
}

/// The frequencies a sweep visits.
///
/// A linear sweep spreads its points evenly. A logarithmic one puts that
/// many in each decade or octave, which is how a Bode plot is drawn and why
/// the count means something different there.
#[must_use]
pub fn frequencies(sweep: Sweep, points: u32, from: f64, to: f64) -> Vec<f64> {
    let count = points.max(1);
    match sweep {
        Sweep::Linear => {
            // One point, or a range of none, is one frequency.
            if count == 1 || (to - from).abs() < f64::EPSILON {
                return vec![from];
            }
            let step = (to - from) / f64::from(count - 1);
            (0..count)
                .map(|at| f64::from(at).mul_add(step, from))
                .collect()
        }
        Sweep::Decade | Sweep::Octave => {
            let per = if matches!(sweep, Sweep::Decade) {
                10.0_f64
            } else {
                2.0_f64
            };
            let spans = (to / from).log(per);
            #[allow(
                clippy::cast_possible_truncation,
                clippy::cast_sign_loss,
                reason = "a sweep of four thousand million points is never asked for"
            )]
            let total = (spans * f64::from(count)).round().max(1.0) as u32;
            (0..=total)
                .map(|at| from * per.powf(f64::from(at) / f64::from(count)))
                .collect()
        }
    }
}

/// What each voltage source drives with, in the order they appear.
fn driving(lines: &[String]) -> Result<Vec<f64>, Error> {
    let mut found = Vec::new();
    for line in lines {
        let words: Vec<&str> = line.split_whitespace().collect();
        let Some(name) = words.first() else { continue };
        if !name.to_ascii_uppercase().starts_with('V') {
            continue;
        }
        let magnitude = words
            .iter()
            .position(|word| word.eq_ignore_ascii_case("AC"))
            .and_then(|at| words.get(at + 1))
            .map_or_else(|| words.get(3).copied().unwrap_or("0"), |value| *value);
        found.push(expression::evaluate(magnitude).map_err(|_| Error::Unreadable(line.clone()))?);
    }
    Ok(found)
}

/// One frequency: the nodes in order, and what each answers with.
fn at_frequency(
    parts: &[Part],
    driving: &[f64],
    frequency: f64,
) -> Result<(Vec<String>, Vec<Complex>), Error> {
    if !parts.iter().flat_map(ends_of).any(|name| name == GROUND) {
        return Err(Error::NoGround);
    }

    let nodes = nodes_of(parts);
    let sources = parts
        .iter()
        .filter(|part| matches!(part, Part::Voltage { .. }))
        .count();
    let size = nodes.len() + sources;
    if size == 0 {
        return Err(Error::DoesNotSettle);
    }

    let mut matrix = vec![vec![Complex::ZERO; size + 1]; size];
    let angular = std::f64::consts::TAU * frequency;

    for part in parts {
        let admittance = match part {
            Part::Resistor { ohms, .. } => {
                if *ohms == 0.0 {
                    return Err(Error::DoesNotSettle);
                }
                Complex::of(1.0 / ohms)
            }
            Part::Capacitor { farads, .. } => Complex {
                real: 0.0,
                imaginary: angular * farads,
            },
            Part::Inductor { henries, .. } => {
                if angular * henries == 0.0 {
                    return Err(Error::DoesNotSettle);
                }
                Complex {
                    real: 0.0,
                    imaginary: -1.0 / (angular * henries),
                }
            }
            // A current source drives nothing in a small-signal sweep
            // unless it says otherwise, and the writer does not say yet.
            Part::Current { .. } | Part::Voltage { .. } => continue,
            // A small-signal sweep wants the diode's conductance at the
            // operating point it sits at, which this does not work out
            // first. Refused by name rather than answered as if it were a
            // wire or an open circuit.
            Part::Diode { .. } => return Err(Error::Beyond("a diode".to_owned())),
            Part::Transistor { .. } => {
                return Err(Error::Beyond("a transistor".to_owned()));
            }
            // A controlled source is a straight line, but a sweep of one
            // wants a stamp of its own that this does not have yet.
            Part::Vccs { .. } => {
                return Err(Error::Beyond("a controlled source".to_owned()));
            }
        };

        let [from, to] = ends_of(part);
        let (a, b) = (nodes.get(from).copied(), nodes.get(to).copied());
        if let Some(a) = a {
            matrix[a][a] = matrix[a][a].plus(admittance);
        }
        if let Some(b) = b {
            matrix[b][b] = matrix[b][b].plus(admittance);
        }
        if let (Some(a), Some(b)) = (a, b) {
            matrix[a][b] = matrix[a][b].minus(admittance);
            matrix[b][a] = matrix[b][a].minus(admittance);
        }
    }

    let mut which = 0;
    for part in parts {
        let Part::Voltage { .. } = part else { continue };
        let [from, to] = ends_of(part);
        let row = nodes.len() + which;
        if let Some(a) = nodes.get(from).copied() {
            matrix[row][a] = matrix[row][a].plus(Complex::of(1.0));
            matrix[a][row] = matrix[a][row].plus(Complex::of(1.0));
        }
        if let Some(b) = nodes.get(to).copied() {
            matrix[row][b] = matrix[row][b].minus(Complex::of(1.0));
            matrix[b][row] = matrix[b][row].minus(Complex::of(1.0));
        }
        matrix[row][size] = Complex::of(driving.get(which).copied().unwrap_or_default());
        which += 1;
    }

    let answer = eliminate(matrix, size)?;
    let mut by_number: Vec<(&String, &usize)> = nodes.iter().collect();
    by_number.sort_by_key(|(_, at)| **at);
    let names: Vec<String> = by_number.iter().map(|(name, _)| (*name).clone()).collect();
    let taken = names.len();
    Ok((names, answer.into_iter().take(taken).collect()))
}

/// The same elimination as the steady solver, in complex numbers.
fn eliminate(mut matrix: Vec<Vec<Complex>>, size: usize) -> Result<Vec<Complex>, Error> {
    for column in 0..size {
        let mut biggest = column;
        for row in column + 1..size {
            if matrix[row][column].size() > matrix[biggest][column].size() {
                biggest = row;
            }
        }
        matrix.swap(column, biggest);

        let pivot = matrix[column][column];
        if pivot.size() < 1e-14 {
            return Err(Error::DoesNotSettle);
        }
        for row in column + 1..size {
            let factor = matrix[row][column].over(pivot);
            if factor == Complex::ZERO {
                continue;
            }
            let (above, below) = matrix.split_at_mut(row);
            let pivot_row = &above[column];
            for (taken, cell) in below[0].iter_mut().enumerate().skip(column) {
                *cell = cell.minus(factor.times(pivot_row[taken]));
            }
        }
    }

    let mut answer = vec![Complex::ZERO; size];
    for row in (0..size).rev() {
        let mut left = matrix[row][size];
        for column in row + 1..size {
            left = left.minus(matrix[row][column].times(answer[column]));
        }
        answer[row] = left.over(matrix[row][row]);
        if !answer[row].real.is_finite() || !answer[row].imaginary.is_finite() {
            return Err(Error::DoesNotSettle);
        }
    }
    Ok(answer)
}

#[cfg(test)]
mod tests {
    use super::{ac_sweep, frequencies};
    use crate::dc_solver::Error;
    use crate::spice_netlist::{Analysis, Netlist, Sweep};

    fn a_netlist(lines: &[&str]) -> Netlist {
        Netlist {
            title: "Test".to_owned(),
            lines: lines.iter().map(|it| (*it).to_owned()).collect(),
            wanting: Vec::new(),
            asking: Some(Analysis::OperatingPoint),
        }
    }

    /// An RC low pass of 1k and 1u: its corner is 1/(2*pi*R*C).
    fn a_low_pass() -> Netlist {
        a_netlist(&["V1 1 0 AC 1", "R1 1 2 1k", "C1 2 0 1u"])
    }

    fn corner() -> f64 {
        1.0 / (std::f64::consts::TAU * 1000.0 * 1e-6)
    }

    #[test]
    fn a_low_pass_is_down_by_root_two_at_its_corner() {
        let at = corner();
        let table = ac_sweep(&a_low_pass(), Sweep::Linear, 1, at, at).unwrap();
        let size = table.column("V(2)").unwrap()[0];
        // 1/sqrt(2) is the definition of the corner.
        assert!(
            (size - std::f64::consts::FRAC_1_SQRT_2).abs() < 1e-9,
            "{size}"
        );
    }

    #[test]
    fn a_low_pass_lags_by_forty_five_degrees_at_its_corner() {
        let at = corner();
        let table = ac_sweep(&a_low_pass(), Sweep::Linear, 1, at, at).unwrap();
        let angle = table.column("P(2)").unwrap()[0];
        assert!((angle + 45.0).abs() < 1e-9, "{angle}");
    }

    #[test]
    fn a_low_pass_passes_what_is_well_under_its_corner() {
        let table = ac_sweep(&a_low_pass(), Sweep::Linear, 1, 1.0, 1.0).unwrap();
        let size = table.column("V(2)").unwrap()[0];
        assert!(size > 0.999, "{size}");
    }

    #[test]
    fn a_low_pass_falls_by_ten_for_every_decade_above_its_corner() {
        // A single pole falls at twenty decibels a decade, which is a
        // factor of ten in size.
        let at = corner();
        let size = |frequency: f64| {
            ac_sweep(&a_low_pass(), Sweep::Linear, 1, frequency, frequency)
                .unwrap()
                .column("V(2)")
                .unwrap()[0]
        };
        let ten = size(at * 100.0);
        let hundred = size(at * 1000.0);
        assert!((ten / hundred - 10.0).abs() < 0.1, "{ten} over {hundred}");
    }

    #[test]
    fn an_inductor_does_the_opposite_of_a_capacitor() {
        // An RL low pass has its corner at R/(2*pi*L) and is also down by
        // root two there.
        let circuit = a_netlist(&["V1 1 0 AC 1", "R1 1 2 1k", "L1 2 0 1"]);
        let at = 1000.0 / std::f64::consts::TAU;
        let table = ac_sweep(&circuit, Sweep::Linear, 1, at, at).unwrap();
        let size = table.column("V(2)").unwrap()[0];
        assert!(
            (size - std::f64::consts::FRAC_1_SQRT_2).abs() < 1e-9,
            "{size}"
        );
    }

    #[test]
    fn a_source_with_no_ac_magnitude_drives_with_its_own_value() {
        // Which is what the port's netlist writer writes today.
        let circuit = a_netlist(&["V1 1 0 2", "R1 1 2 1k", "R2 2 0 1k"]);
        let table = ac_sweep(&circuit, Sweep::Linear, 1, 1.0, 1.0).unwrap();
        assert!((table.column("V(2)").unwrap()[0] - 1.0).abs() < 1e-9);
    }

    #[test]
    fn a_decade_sweep_visits_that_many_points_in_each_decade() {
        let found = frequencies(Sweep::Decade, 10, 1.0, 1000.0);
        // Three decades of ten, and both ends.
        assert_eq!(found.len(), 31);
        assert!((found[0] - 1.0).abs() < 1e-9);
        assert!((found[10] - 10.0).abs() < 1e-9);
        assert!((found[30] - 1000.0).abs() < 1e-6);
    }

    #[test]
    fn an_octave_sweep_doubles_instead_of_multiplying_by_ten() {
        let found = frequencies(Sweep::Octave, 4, 1.0, 8.0);
        assert!((found[4] - 2.0).abs() < 1e-9);
        assert!((found.last().unwrap() - 8.0).abs() < 1e-6);
    }

    #[test]
    fn a_linear_sweep_spreads_its_points_evenly() {
        let found = frequencies(Sweep::Linear, 5, 0.0, 4.0);
        assert_eq!(found, [0.0, 1.0, 2.0, 3.0, 4.0]);
        assert_eq!(frequencies(Sweep::Linear, 1, 7.0, 9.0), [7.0]);
    }

    #[test]
    fn a_sweep_that_makes_no_sense_is_refused() {
        let circuit = a_low_pass();
        assert_eq!(
            ac_sweep(&circuit, Sweep::Decade, 10, 0.0, 100.0),
            Err(Error::DoesNotSettle)
        );
        assert_eq!(
            ac_sweep(&circuit, Sweep::Decade, 10, 100.0, 1.0),
            Err(Error::DoesNotSettle)
        );
        assert_eq!(
            ac_sweep(&circuit, Sweep::Decade, 0, 1.0, 100.0),
            Err(Error::DoesNotSettle)
        );
    }

    #[test]
    fn a_sweep_carries_a_size_and_an_angle_for_every_node() {
        let table = ac_sweep(&a_low_pass(), Sweep::Decade, 2, 1.0, 100.0).unwrap();
        assert_eq!(table.columns[0], "frequency");
        assert!(table.columns.contains(&"V(1)".to_owned()));
        assert!(table.columns.contains(&"P(1)".to_owned()));
        assert!(table.columns.contains(&"V(2)".to_owned()));
        assert!(table.columns.contains(&"P(2)".to_owned()));
        assert!(!crate::run_results::series_of(&table).is_empty());
    }
}
