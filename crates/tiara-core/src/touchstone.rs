use std::fmt;

use crate::complex_parameter::{ComplexPoint, PhaseUnit};

#[derive(Debug, Clone, PartialEq, Default)]
pub struct SParameterCandidate {
    pub port_count: usize,
    pub parameters: Vec<Vec<ComplexPoint>>,
    pub port_references: Vec<f64>,
}

impl SParameterCandidate {
    #[must_use]
    pub fn parameter(&self, output_port: usize, input_port: usize) -> Option<&[ComplexPoint]> {
        if output_port >= self.port_count || input_port >= self.port_count {
            return None;
        }
        self.parameters
            .get(output_port * self.port_count + input_port)
            .map(Vec::as_slice)
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum TouchstoneParseError {
    PortCountOverflow(usize),
}

impl fmt::Display for TouchstoneParseError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::PortCountOverflow(port_count) => {
                write!(
                    formatter,
                    "S-parameter count overflows for {port_count} ports."
                )
            }
        }
    }
}

impl std::error::Error for TouchstoneParseError {}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum ValueFormat {
    Rectangular,
    MagnitudeAngle,
    DecibelAngle,
}

#[derive(Debug, Clone, Copy)]
struct Options {
    frequency_multiplier: f64,
    value_format: ValueFormat,
    reference: f64,
}

impl Default for Options {
    fn default() -> Self {
        Self {
            frequency_multiplier: 1.0,
            value_format: ValueFormat::Rectangular,
            reference: 0.0,
        }
    }
}

/// Ports Ghidra function `FUN_017002a0` at `0x017002A0`.
///
/// The parser prepares `N * N` parameter targets and `N` port targets before
/// it scans the supplied string-list rows. A first `#` row selects Hz through
/// THz scaling, RI, MA, or DB values, and one common reference value. A second
/// option row stops the scan. Blank rows and rows whose first character is
/// `!`, `*`, or `.` do not change parser state. Data can continue on later
/// rows. Completed pairs remain stored when a later pair is missing or invalid.
/// Two-port input swaps the middle pair targets to preserve the recovered S2P
/// order. Every returned sample is rectangular and uses Hz.
///
/// TIARA's existing [`ComplexPoint`] supplies the sample model and polar
/// conversion. The maintained `touchstone` crate 0.14.2 was evaluated and not
/// selected: its complete standards parser returns a validated network or an
/// error, while this compatibility path must expose the recovered target-clear,
/// partial-row, silent-invalid-pair, and second-option stop behavior.
///
/// # Errors
///
/// Returns [`TouchstoneParseError::PortCountOverflow`] before changing the
/// candidate when `N * N` cannot be represented. Numeric conversion failures
/// are recovered as incomplete pairs, not returned errors.
pub fn parse_touchstone_s_parameters(
    lines: &[String],
    port_count: usize,
    candidate: &mut SParameterCandidate,
) -> Result<(), TouchstoneParseError> {
    let parameter_count = port_count
        .checked_mul(port_count)
        .ok_or(TouchstoneParseError::PortCountOverflow(port_count))?;
    *candidate = SParameterCandidate {
        port_count,
        parameters: vec![Vec::new(); parameter_count],
        port_references: vec![0.0; port_count],
    };

    let mut options = Options::default();
    let mut option_seen = false;
    let mut parameter_index = 0;
    let mut frequency = f64::NAN;

    for line in lines {
        if line.is_empty() || starts_ignored_row(line) {
            continue;
        }
        if line.starts_with('#') {
            if option_seen {
                break;
            }
            options = parse_options(line);
            option_seen = true;
            continue;
        }

        let mut tokens = line.split_ascii_whitespace();
        if parameter_index == 0 {
            frequency = parse_or_nan(tokens.next()) * options.frequency_multiplier;
        }
        while parameter_index < parameter_count {
            let first = parse_or_nan(tokens.next());
            let second = parse_or_nan(tokens.next());
            if first.is_nan() || second.is_nan() {
                break;
            }
            let point = rectangular_point(frequency, first, second, options.value_format);
            let target_index = target_index(parameter_index, port_count);
            candidate.parameters[target_index].push(point);

            parameter_index += 1;
            if parameter_index == parameter_count {
                parameter_index = 0;
                break;
            }
        }
    }

    candidate.port_references.fill(options.reference);
    Ok(())
}

const fn starts_ignored_row(line: &str) -> bool {
    matches!(line.as_bytes().first(), Some(b'!' | b'*' | b'.'))
}

fn parse_options(line: &str) -> Options {
    let mut tokens = line[1..].split_ascii_whitespace();
    let frequency_multiplier = tokens.next().map_or(1.0, frequency_multiplier);
    let _network_parameter = tokens.next();
    let value_format = tokens.next().map_or(ValueFormat::Rectangular, |token| {
        if token.eq_ignore_ascii_case("MA") {
            ValueFormat::MagnitudeAngle
        } else if token.eq_ignore_ascii_case("DB") {
            ValueFormat::DecibelAngle
        } else {
            ValueFormat::Rectangular
        }
    });
    let _reference_marker = tokens.next();
    let reference = parse_or_nan(tokens.next());
    Options {
        frequency_multiplier,
        value_format,
        reference: if reference.is_nan() { 0.0 } else { reference },
    }
}

fn frequency_multiplier(unit: &str) -> f64 {
    if unit.eq_ignore_ascii_case("KHZ") {
        1.0e3
    } else if unit.eq_ignore_ascii_case("MHZ") {
        1.0e6
    } else if unit.eq_ignore_ascii_case("GHZ") {
        1.0e9
    } else if unit.eq_ignore_ascii_case("THZ") {
        1.0e12
    } else {
        1.0
    }
}

fn parse_or_nan(token: Option<&str>) -> f64 {
    token
        .and_then(|value| value.parse().ok())
        .unwrap_or(f64::NAN)
}

fn rectangular_point(frequency: f64, first: f64, second: f64, format: ValueFormat) -> ComplexPoint {
    match format {
        ValueFormat::Rectangular => ComplexPoint::new(frequency, first, second),
        ValueFormat::MagnitudeAngle => {
            ComplexPoint::new(frequency, first, second).to_rectangular(PhaseUnit::Degrees)
        }
        ValueFormat::DecibelAngle => {
            let magnitude = 10.0_f64.powf(first / 20.0);
            ComplexPoint::new(frequency, magnitude, second).to_rectangular(PhaseUnit::Degrees)
        }
    }
}

const fn target_index(source_index: usize, port_count: usize) -> usize {
    if port_count == 2 {
        match source_index {
            1 => 2,
            2 => 1,
            _ => source_index,
        }
    } else {
        source_index
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parses_ri_data_in_hz_and_swaps_the_two_port_middle_targets() {
        let lines = lines(&[
            "! comment",
            "# GHZ S RI R 50",
            "1 11 1 21 2 12 3 22 4 ! trailing comment",
        ]);
        let mut candidate = SParameterCandidate::default();

        parse_touchstone_s_parameters(&lines, 2, &mut candidate)
            .unwrap_or_else(|error| panic!("parse failed: {error}"));

        assert_point(candidate.parameter(0, 0), 1.0e9, 11.0, 1.0);
        assert_point(candidate.parameter(0, 1), 1.0e9, 12.0, 3.0);
        assert_point(candidate.parameter(1, 0), 1.0e9, 21.0, 2.0);
        assert_point(candidate.parameter(1, 1), 1.0e9, 22.0, 4.0);
        assert_eq!(candidate.port_references, [50.0, 50.0]);
    }

    #[test]
    fn converts_magnitude_angle_and_frequency_units() {
        let lines = lines(&["# MHz S MA R 75", "2 2 90"]);
        let mut candidate = SParameterCandidate::default();

        parse_touchstone_s_parameters(&lines, 1, &mut candidate)
            .unwrap_or_else(|error| panic!("parse failed: {error}"));

        assert_point(candidate.parameter(0, 0), 2.0e6, 0.0, 2.0);
        assert_eq!(candidate.port_references, [75.0]);
    }

    #[test]
    fn converts_decibel_angle_to_rectangular() {
        let lines = lines(&["# kHz S DB R 25", "3 20 180"]);
        let mut candidate = SParameterCandidate::default();

        parse_touchstone_s_parameters(&lines, 1, &mut candidate)
            .unwrap_or_else(|error| panic!("parse failed: {error}"));

        assert_point(candidate.parameter(0, 0), 3.0e3, -10.0, 0.0);
    }

    #[test]
    fn continues_an_incomplete_record_on_the_next_data_line() {
        let lines = lines(&["# HZ S RI R 50", "10 1 2 3 4", "5 6 7 8"]);
        let mut candidate = SParameterCandidate::default();

        parse_touchstone_s_parameters(&lines, 2, &mut candidate)
            .unwrap_or_else(|error| panic!("parse failed: {error}"));

        assert_point(candidate.parameter(0, 0), 10.0, 1.0, 2.0);
        assert_point(candidate.parameter(1, 0), 10.0, 3.0, 4.0);
        assert_point(candidate.parameter(0, 1), 10.0, 5.0, 6.0);
        assert_point(candidate.parameter(1, 1), 10.0, 7.0, 8.0);
    }

    #[test]
    fn keeps_completed_pairs_when_a_later_pair_is_invalid() {
        let lines = lines(&["# HZ S RI R 50", "10 1 2 invalid 4"]);
        let mut candidate = SParameterCandidate::default();

        parse_touchstone_s_parameters(&lines, 2, &mut candidate)
            .unwrap_or_else(|error| panic!("parse failed: {error}"));

        assert_point(candidate.parameter(0, 0), 10.0, 1.0, 2.0);
        assert!(
            candidate
                .parameter(0, 1)
                .is_some_and(<[ComplexPoint]>::is_empty)
        );
        assert!(
            candidate
                .parameter(1, 0)
                .is_some_and(<[ComplexPoint]>::is_empty)
        );
        assert!(
            candidate
                .parameter(1, 1)
                .is_some_and(<[ComplexPoint]>::is_empty)
        );
    }

    #[test]
    fn second_option_line_stops_the_scan_and_keeps_first_reference() {
        let lines = lines(&["# HZ S RI R 40", "1 1 2", "# GHZ S RI R 90", "2 3 4"]);
        let mut candidate = SParameterCandidate::default();

        parse_touchstone_s_parameters(&lines, 1, &mut candidate)
            .unwrap_or_else(|error| panic!("parse failed: {error}"));

        let parameter = candidate
            .parameter(0, 0)
            .unwrap_or_else(|| panic!("parameter missing"));
        assert_eq!(parameter.len(), 1);
        assert_point(Some(parameter), 1.0, 1.0, 2.0);
        assert_eq!(candidate.port_references, [40.0]);
    }

    #[test]
    fn blank_comment_and_separator_rows_are_no_ops() {
        let lines = lines(&["", "! comment", "* separator", ". separator"]);
        let mut candidate = SParameterCandidate {
            port_count: 1,
            parameters: vec![vec![ComplexPoint::new(1.0, 2.0, 3.0)]],
            port_references: vec![99.0],
        };

        parse_touchstone_s_parameters(&lines, 1, &mut candidate)
            .unwrap_or_else(|error| panic!("parse failed: {error}"));

        assert!(candidate.parameters[0].is_empty());
        assert_eq!(candidate.port_references, [0.0]);
    }

    #[test]
    fn overflow_does_not_clear_the_existing_candidate() {
        let mut candidate = SParameterCandidate {
            port_count: 1,
            parameters: vec![vec![ComplexPoint::new(1.0, 2.0, 3.0)]],
            port_references: vec![50.0],
        };
        let original = candidate.clone();

        let error = parse_touchstone_s_parameters(&[], usize::MAX, &mut candidate)
            .expect_err("the square must overflow");

        assert_eq!(error, TouchstoneParseError::PortCountOverflow(usize::MAX));
        assert_eq!(candidate, original);
    }

    fn lines(values: &[&str]) -> Vec<String> {
        values.iter().map(|value| (*value).to_owned()).collect()
    }

    fn assert_point(points: Option<&[ComplexPoint]>, frequency: f64, real: f64, imaginary: f64) {
        let point = points
            .and_then(|values| values.first())
            .unwrap_or_else(|| panic!("point missing"));
        assert_close(point.frequency, frequency);
        assert_close(point.first, real);
        assert_close(point.second, imaginary);
    }

    fn assert_close(actual: f64, expected: f64) {
        let scale = expected.abs().max(1.0);
        assert!((actual - expected).abs() <= scale * 1.0e-12);
    }
}
