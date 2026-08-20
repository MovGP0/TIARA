use std::cmp::Ordering;
use std::fmt;

use crate::numeric_format::format_display_value;

const CATALOG_HEADER: &str = "@ Catalog file for four poles";
const CATALOG_LEGEND_A: &str = "* A - Algebraical form";
const CATALOG_LEGEND_D: &str = "* D - Euler form, phase in degree";
const CATALOG_LEGEND_R: &str = "* R - Euler form, phase in radian";
const CATALOG_TERMINATOR: &str = ".@ end of file";

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum ComplexRepresentation {
    #[default]
    Rectangular,
    Polar,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum PhaseUnit {
    #[default]
    Degrees,
    Radians,
}

#[derive(Debug, Clone, Copy, PartialEq, Default)]
pub struct ComplexPoint {
    pub frequency: f64,
    pub first: f64,
    pub second: f64,
}

impl ComplexPoint {
    #[must_use]
    pub const fn new(frequency: f64, first: f64, second: f64) -> Self {
        Self {
            frequency,
            first,
            second,
        }
    }

    #[must_use]
    pub fn to_rectangular(self, phase_unit: PhaseUnit) -> Self {
        let phase = match phase_unit {
            PhaseUnit::Degrees => self.second.to_radians(),
            PhaseUnit::Radians => self.second,
        };
        Self::new(
            self.frequency,
            self.first * phase.cos(),
            self.first * phase.sin(),
        )
    }

    #[must_use]
    pub fn to_polar_degrees(self) -> Self {
        Self::new(
            self.frequency,
            self.first.hypot(self.second),
            self.second.atan2(self.first).to_degrees(),
        )
    }

    #[must_use]
    pub const fn convert_phase(self, from: PhaseUnit, to: PhaseUnit) -> Self {
        let second = match (from, to) {
            (PhaseUnit::Degrees, PhaseUnit::Radians) => self.second.to_radians(),
            (PhaseUnit::Radians, PhaseUnit::Degrees) => self.second.to_degrees(),
            _ => self.second,
        };
        Self { second, ..self }
    }
}

#[derive(Debug, Clone, PartialEq, Default)]
pub struct ComplexParameterEntry {
    pub real: f64,
    pub imaginary: f64,
    pub points: Vec<ComplexPoint>,
}

impl ComplexParameterEntry {
    #[must_use]
    pub fn new(points: Vec<ComplexPoint>) -> Self {
        let (real, imaginary) = points
            .first()
            .map_or((0.0, 0.0), |point| (point.first, point.second));
        Self {
            real,
            imaginary,
            points,
        }
    }

    pub fn replace_points(&mut self, points: Vec<ComplexPoint>) {
        self.points = points;
        if let Some(base) = self.points.first() {
            self.real = base.first;
            self.imaginary = base.second;
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct ComplexCatalog {
    pub representation: ComplexRepresentation,
    pub phase_unit: PhaseUnit,
    pub points: Vec<ComplexPoint>,
}

impl ComplexCatalog {
    #[must_use]
    pub const fn new(
        representation: ComplexRepresentation,
        phase_unit: PhaseUnit,
        points: Vec<ComplexPoint>,
    ) -> Self {
        Self {
            representation,
            phase_unit,
            points,
        }
    }

    #[must_use]
    pub const fn marker(&self) -> char {
        match self.representation {
            ComplexRepresentation::Rectangular => 'A',
            ComplexRepresentation::Polar => match self.phase_unit {
                PhaseUnit::Degrees => 'D',
                PhaseUnit::Radians => 'R',
            },
        }
    }

    /// Implements Ghidra function `FUN_014072d0` at `0x014072D0`.
    ///
    /// The existing TIARA engineering formatter supplies numeric text. Rust
    /// `String` supplies the exact A, D, or R catalog document without legacy
    /// `ShortString` or code-page limits.
    #[must_use]
    pub fn to_catalog_text(&self) -> String {
        let mut output = format!(
            "{CATALOG_HEADER}\n\n{CATALOG_LEGEND_A}\n{CATALOG_LEGEND_D}\n{CATALOG_LEGEND_R}\n\n{}\n\n",
            self.marker()
        );
        for point in &self.points {
            output.push_str(&format_display_value(point.frequency, 2));
            output.push('\n');
            output.push_str(&format_display_value(point.first, 2));
            output.push('\n');
            output.push_str(&format_display_value(point.second, 2));
            output.push_str("\n\n");
        }
        output.push_str(CATALOG_TERMINATOR);
        output.push('\n');
        output
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ComplexCatalogError {
    MissingPreamble,
    MissingMode,
    InvalidMode(String),
    MissingValue,
    MissingTerminator,
    InvalidNumber(String),
    Io(String),
}

impl fmt::Display for ComplexCatalogError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::MissingPreamble => formatter.write_str("The catalog preamble is incomplete."),
            Self::MissingMode => formatter.write_str("The catalog has no representation marker."),
            Self::InvalidMode(mode) => write!(formatter, "Invalid catalog mode: {mode}"),
            Self::MissingValue => formatter.write_str("The catalog record is incomplete."),
            Self::MissingTerminator => formatter.write_str("The catalog has no terminator."),
            Self::InvalidNumber(value) => write!(formatter, "Invalid catalog number: {value}"),
            Self::Io(message) => formatter.write_str(message),
        }
    }
}

impl std::error::Error for ComplexCatalogError {}

impl From<std::io::Error> for ComplexCatalogError {
    fn from(error: std::io::Error) -> Self {
        Self::Io(error.to_string())
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct ComplexCatalogParseOutcome {
    pub representation: Option<ComplexRepresentation>,
    pub phase_unit: Option<PhaseUnit>,
    pub points: Vec<ComplexPoint>,
    pub error: Option<ComplexCatalogError>,
}

/// Implements Ghidra function `FUN_01407930` at `0x01407930`.
///
/// Standard string lines replace the Delphi text-file reader. Empty lines are
/// skipped and the next non-empty line is returned.
pub fn next_non_empty_line<'a>(lines: &mut impl Iterator<Item = &'a str>) -> Option<&'a str> {
    lines.map(str::trim).find(|line| !line.is_empty())
}

/// Implements Ghidra function `FUN_01407990` at `0x01407990`.
///
/// Four non-empty preamble lines are consumed without content checks. The
/// fifth line selects A, D, or R. Complete triples remain in the outcome when
/// a later conversion or structure error occurs.
#[must_use]
pub fn parse_complex_catalog(source: &str) -> ComplexCatalogParseOutcome {
    let mut lines = source.lines();
    for _ in 0..4 {
        if next_non_empty_line(&mut lines).is_none() {
            return parse_error(ComplexCatalogError::MissingPreamble);
        }
    }
    let Some(marker) = next_non_empty_line(&mut lines) else {
        return parse_error(ComplexCatalogError::MissingMode);
    };
    let (representation, phase_unit) = match marker {
        "A" => (ComplexRepresentation::Rectangular, PhaseUnit::Radians),
        "D" => (ComplexRepresentation::Polar, PhaseUnit::Degrees),
        "R" => (ComplexRepresentation::Polar, PhaseUnit::Radians),
        _ => return parse_error(ComplexCatalogError::InvalidMode(marker.to_owned())),
    };

    let mut points = Vec::new();
    let error = loop {
        let Some(frequency_text) = next_non_empty_line(&mut lines) else {
            break Some(ComplexCatalogError::MissingTerminator);
        };
        if frequency_text.starts_with(".@") {
            break None;
        }
        let frequency = match parse_engineering_number(frequency_text) {
            Ok(value) => value,
            Err(error) => break Some(error),
        };
        let Some(first_text) = next_non_empty_line(&mut lines) else {
            break Some(ComplexCatalogError::MissingValue);
        };
        let first = match parse_engineering_number(first_text) {
            Ok(value) => value,
            Err(error) => break Some(error),
        };
        let Some(second_text) = next_non_empty_line(&mut lines) else {
            break Some(ComplexCatalogError::MissingValue);
        };
        let second = match parse_engineering_number(second_text) {
            Ok(value) => value,
            Err(error) => break Some(error),
        };
        points.push(ComplexPoint::new(frequency, first, second));
    };

    ComplexCatalogParseOutcome {
        representation: Some(representation),
        phase_unit: Some(phase_unit),
        points,
        error,
    }
}

pub fn sort_nonreserved_points(points: &mut [ComplexPoint]) {
    if let Some(sortable) = points.get_mut(1..) {
        sortable.sort_by(|left, right| {
            left.frequency
                .partial_cmp(&right.frequency)
                .unwrap_or(Ordering::Equal)
        });
    }
}

const fn parse_error(error: ComplexCatalogError) -> ComplexCatalogParseOutcome {
    ComplexCatalogParseOutcome {
        representation: None,
        phase_unit: None,
        points: Vec::new(),
        error: Some(error),
    }
}

fn parse_engineering_number(source: &str) -> Result<f64, ComplexCatalogError> {
    let source = source.trim();
    if let Ok(value) = source.parse::<f64>() {
        return Ok(value);
    }
    let split = source
        .char_indices()
        .find_map(|(index, character)| character.is_alphabetic().then_some(index))
        .ok_or_else(|| ComplexCatalogError::InvalidNumber(source.to_owned()))?;
    let (number, suffix) = source.split_at(split);
    let value = number
        .parse::<f64>()
        .map_err(|_| ComplexCatalogError::InvalidNumber(source.to_owned()))?;
    let multiplier = match suffix.to_ascii_lowercase().as_str() {
        "f" => 1e-15,
        "p" => 1e-12,
        "n" => 1e-9,
        "u" | "µ" => 1e-6,
        "m" => 1e-3,
        "k" => 1e3,
        "meg" => 1e6,
        "g" => 1e9,
        "t" => 1e12,
        _ => return Err(ComplexCatalogError::InvalidNumber(source.to_owned())),
    };
    Ok(value * multiplier)
}

#[cfg(test)]
mod tests {
    use super::{
        ComplexCatalog, ComplexCatalogError, ComplexPoint, ComplexRepresentation, PhaseUnit,
        parse_complex_catalog, sort_nonreserved_points,
    };

    #[test]
    fn writer_emits_exact_marker_for_each_representation_and_unit() {
        let point = ComplexPoint::new(1.0, 2.0, 3.0);
        let rectangular = ComplexCatalog::new(
            ComplexRepresentation::Rectangular,
            PhaseUnit::Degrees,
            vec![point],
        );
        let degrees = ComplexCatalog::new(
            ComplexRepresentation::Polar,
            PhaseUnit::Degrees,
            vec![point],
        );
        let radians = ComplexCatalog::new(
            ComplexRepresentation::Polar,
            PhaseUnit::Radians,
            vec![point],
        );

        assert!(rectangular.to_catalog_text().contains("\nA\n"));
        assert!(degrees.to_catalog_text().contains("\nD\n"));
        assert!(radians.to_catalog_text().contains("\nR\n"));
    }

    #[test]
    fn parser_skips_blank_lines_and_accepts_engineering_numbers() {
        let source = "one\n\ntwo\nthree\nfour\nD\n1k\n2m\n90\n.@ end of file\n";
        let outcome = parse_complex_catalog(source);

        assert_eq!(outcome.error, None);
        assert_eq!(outcome.representation, Some(ComplexRepresentation::Polar));
        assert_eq!(outcome.phase_unit, Some(PhaseUnit::Degrees));
        assert_eq!(
            outcome.points,
            vec![ComplexPoint::new(1_000.0, 0.002, 90.0)]
        );
    }

    #[test]
    fn parser_keeps_complete_records_before_a_later_failure() {
        let source = "one\ntwo\nthree\nfour\nA\n1\n2\n3\n4\nbad\n6\n";
        let outcome = parse_complex_catalog(source);

        assert_eq!(outcome.points, vec![ComplexPoint::new(1.0, 2.0, 3.0)]);
        assert_eq!(
            outcome.error,
            Some(ComplexCatalogError::InvalidNumber("bad".to_owned()))
        );
    }

    #[test]
    fn representation_conversion_and_sort_keep_record_pairs() {
        let rectangular = ComplexPoint::new(1.0, 0.0, 2.0);
        let polar = rectangular.to_polar_degrees();
        assert!((polar.first - 2.0).abs() <= f64::EPSILON);
        assert!((polar.second - 90.0).abs() <= f64::EPSILON);
        let restored = polar.to_rectangular(PhaseUnit::Degrees);
        assert!(restored.first.abs() <= f64::EPSILON);
        assert!((restored.second - 2.0).abs() <= f64::EPSILON);

        let mut points = vec![
            ComplexPoint::default(),
            ComplexPoint::new(3.0, 30.0, 31.0),
            ComplexPoint::new(1.0, 10.0, 11.0),
            ComplexPoint::new(3.0, 32.0, 33.0),
        ];
        sort_nonreserved_points(&mut points);
        assert_eq!(
            points[1..]
                .iter()
                .map(|point| point.first)
                .collect::<Vec<_>>(),
            vec![10.0, 30.0, 32.0]
        );
    }
}
