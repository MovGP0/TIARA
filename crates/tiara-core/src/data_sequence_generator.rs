//! Data Generator sequence staging and validation.
//!
//! The standard library supplies numeric conversion and owned buffers. The
//! shared [`crate::data_pattern`] module supplies fill, shift, and count
//! generation. The hexadecimal text parser remains in
//! [`crate::hexadecimal_text_file`].

use std::fmt;

use crate::data_pattern::{PatternDescriptor, PatternError, PatternWidth, generate_u16_pattern};

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum DataRepresentation {
    #[default]
    Binary,
    Hexadecimal,
    Decimal,
}

impl fmt::Display for DataRepresentation {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Binary => "Bin",
            Self::Hexadecimal => "Hex",
            Self::Decimal => "Decimal",
        })
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct SimulationSettings {
    pub start: usize,
    pub stop: usize,
    pub step_time: f64,
}

#[derive(Debug, Clone, PartialEq)]
pub struct DataSequenceRecord {
    pub bit_width: u16,
    pub words: Vec<u16>,
    pub mode: DataRepresentation,
    pub simulation: SimulationSettings,
    pub pattern: PatternDescriptor,
    pub repeat: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ImportBuffer {
    pub bit_width: u16,
    pub words: Vec<u16>,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct ValidatedGeneratorFields {
    pub pattern: PatternDescriptor,
    pub simulation: SimulationSettings,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AddressField {
    PatternLow,
    PatternHigh,
    SimulationStart,
    SimulationStop,
}

impl fmt::Display for AddressField {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::PatternLow => "Affected address (low)",
            Self::PatternHigh => "Affected address (high)",
            Self::SimulationStart => "Start address",
            Self::SimulationStop => "Stop address",
        })
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum DataSequenceError {
    InvalidBitWidth(u16),
    InvalidGridValue {
        row: usize,
        mode: DataRepresentation,
    },
    InvalidAddress(AddressField),
    PatternRangeOrder,
    SimulationRangeOrder,
    PatternAddressExceedsCount,
    SimulationAddressExceedsCount,
    ImportLengthMismatch {
        staged: usize,
        imported: usize,
    },
    Pattern(PatternError),
}

impl fmt::Display for DataSequenceError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidBitWidth(width) => {
                write!(
                    formatter,
                    "Data width {width} is outside 1 through 16 bits."
                )
            }
            Self::InvalidGridValue { row, mode } => {
                write!(formatter, "Row {row} is not a valid {mode} value.")
            }
            Self::InvalidAddress(field) => write!(formatter, "{field} is not a valid value."),
            Self::PatternRangeOrder => {
                formatter.write_str("Affected address (low) exceeds Affected address (high).")
            }
            Self::SimulationRangeOrder => {
                formatter.write_str("Start address exceeds Stop address.")
            }
            Self::PatternAddressExceedsCount => {
                formatter.write_str("Affected address (high) exceeds the sequence count.")
            }
            Self::SimulationAddressExceedsCount => {
                formatter.write_str("Stop address exceeds the sequence count.")
            }
            Self::ImportLengthMismatch { staged, imported } => write!(
                formatter,
                "Imported word count {imported} does not match staged word count {staged}."
            ),
            Self::Pattern(error) => error.fmt(formatter),
        }
    }
}

impl std::error::Error for DataSequenceError {
    fn source(&self) -> Option<&(dyn std::error::Error + 'static)> {
        match self {
            Self::Pattern(error) => Some(error),
            Self::InvalidBitWidth(_)
            | Self::InvalidGridValue { .. }
            | Self::InvalidAddress(_)
            | Self::PatternRangeOrder
            | Self::SimulationRangeOrder
            | Self::PatternAddressExceedsCount
            | Self::SimulationAddressExceedsCount
            | Self::ImportLengthMismatch { .. } => None,
        }
    }
}

impl From<PatternError> for DataSequenceError {
    fn from(error: PatternError) -> Self {
        Self::Pattern(error)
    }
}

/// Formats one unchanged 16-bit word for the recovered `DataSeq` grid.
///
/// Binary and hexadecimal output use the configured data width. The internal
/// decimal branch is retained even though the recovered form exposes only Bin
/// and Hex.
///
/// # Errors
///
/// Returns [`DataSequenceError::InvalidBitWidth`] unless `bit_width` is in
/// `1..=16`.
pub fn format_word(
    word: u16,
    bit_width: u16,
    mode: DataRepresentation,
) -> Result<String, DataSequenceError> {
    let mask = value_mask(bit_width)?;
    let value = u32::from(word) & mask;
    let formatted = match mode {
        DataRepresentation::Binary => format!("{value:0width$b}", width = usize::from(bit_width)),
        DataRepresentation::Hexadecimal => {
            let digits = usize::from(bit_width).div_ceil(4);
            format!("{value:0digits$X}")
        }
        DataRepresentation::Decimal => value.to_string(),
    };
    Ok(formatted)
}

#[must_use]
pub fn format_address(address: usize) -> String {
    format!("{address:04X}")
}

/// Reimplements Ghidra function `FUN_0140e810` at `0x0140E810`.
///
/// Each displayed value is parsed in the supplied representation and reduced
/// to its low 16 bits at the matching output index.
///
/// # Errors
///
/// Returns the first row that cannot be parsed in `mode`.
pub fn parse_grid_words(
    values: &[String],
    mode: DataRepresentation,
) -> Result<Vec<u16>, DataSequenceError> {
    values
        .iter()
        .enumerate()
        .map(|(row, value)| {
            parse_word(value, mode)
                .map(low_u16)
                .ok_or(DataSequenceError::InvalidGridValue { row, mode })
        })
        .collect()
}

/// Reimplements Ghidra function `FUN_0140ebd0` at `0x0140EBD0`.
///
/// The four addresses are hexadecimal fields constrained by the configured
/// data width. The function checks both range orders and then permits a high
/// value equal to the sequence count, matching the recovered strict `>`
/// checks.
///
/// # Errors
///
/// Returns the first invalid field or range in recovered validation order.
#[allow(clippy::too_many_arguments)]
pub fn validate_generator_fields(
    mut pattern: PatternDescriptor,
    pattern_low: &str,
    pattern_high: &str,
    simulation_start: &str,
    simulation_stop: &str,
    step_time: f64,
    bit_width: u16,
    sequence_count: usize,
) -> Result<ValidatedGeneratorFields, DataSequenceError> {
    pattern.first = parse_address(pattern_low, bit_width, AddressField::PatternLow)?;
    pattern.last = parse_address(pattern_high, bit_width, AddressField::PatternHigh)?;
    if pattern.last < pattern.first {
        return Err(DataSequenceError::PatternRangeOrder);
    }

    let simulation = SimulationSettings {
        start: parse_address(simulation_start, bit_width, AddressField::SimulationStart)?,
        stop: parse_address(simulation_stop, bit_width, AddressField::SimulationStop)?,
        step_time,
    };
    if simulation.stop < simulation.start {
        return Err(DataSequenceError::SimulationRangeOrder);
    }

    if pattern.last > sequence_count {
        return Err(DataSequenceError::PatternAddressExceedsCount);
    }
    if simulation.stop > sequence_count {
        return Err(DataSequenceError::SimulationAddressExceedsCount);
    }

    Ok(ValidatedGeneratorFields {
        pattern,
        simulation,
    })
}

/// Reimplements Ghidra function `FUN_0140f5d0` at `0x0140F5D0`.
///
/// The standard-library `vec!` allocation supplies a temporary buffer with the
/// current count and every 16-bit element initialized to zero.
#[must_use]
pub fn prepare_import_buffer(count: usize, bit_width: u16) -> ImportBuffer {
    ImportBuffer {
        bit_width,
        words: vec![0; count],
    }
}

/// Reimplements Ghidra function `FUN_0140f610` at `0x0140F610`.
///
/// The full temporary buffer replaces the dialog-local words, including the
/// zero-filled tail left by a short hexadecimal file.
///
/// # Errors
///
/// Returns [`DataSequenceError::ImportLengthMismatch`] when the two fixed
/// capacities differ.
pub fn replace_staged_from_import(
    staged: &mut [u16],
    imported: &ImportBuffer,
) -> Result<(), DataSequenceError> {
    if staged.len() != imported.words.len() {
        return Err(DataSequenceError::ImportLengthMismatch {
            staged: staged.len(),
            imported: imported.words.len(),
        });
    }

    staged.copy_from_slice(&imported.words);
    Ok(())
}

/// Applies an accepted `DataSeq` fill through the shared pattern generator.
///
/// The recovered Fill path clears the complete staged buffer before it applies
/// the selected inclusive range. A high address equal to the sequence count is
/// clipped to the final element by the caller boundary used by the shared
/// generator.
///
/// # Errors
///
/// Returns a shared pattern-width or generation error.
pub fn fill_staged_words(
    staged: &mut [u16],
    mut descriptor: PatternDescriptor,
    bit_width: u16,
) -> Result<(), DataSequenceError> {
    staged.fill(0);
    if staged.is_empty() {
        return Ok(());
    }

    let final_index = staged.len() - 1;
    if descriptor.first > final_index {
        return Ok(());
    }
    descriptor.last = descriptor.last.min(final_index);
    let width = PatternWidth::new(u32::from(bit_width))?;
    generate_u16_pattern(staged, descriptor, width)?;
    Ok(())
}

fn value_mask(bit_width: u16) -> Result<u32, DataSequenceError> {
    if !(1..=16).contains(&bit_width) {
        return Err(DataSequenceError::InvalidBitWidth(bit_width));
    }

    Ok((1_u32 << bit_width) - 1)
}

fn parse_address(
    value: &str,
    bit_width: u16,
    field: AddressField,
) -> Result<usize, DataSequenceError> {
    let mask = value_mask(bit_width)?;
    let parsed = u32::from_str_radix(value, 16)
        .ok()
        .filter(|parsed| *parsed <= mask)
        .ok_or(DataSequenceError::InvalidAddress(field))?;
    Ok(usize::try_from(parsed).unwrap_or(usize::MAX))
}

fn parse_word(value: &str, mode: DataRepresentation) -> Option<u32> {
    match mode {
        DataRepresentation::Binary => u32::from_str_radix(value, 2).ok(),
        DataRepresentation::Hexadecimal => u32::from_str_radix(value, 16).ok(),
        DataRepresentation::Decimal => value.parse().ok(),
    }
}

const fn low_u16(value: u32) -> u16 {
    let [first, second, ..] = value.to_le_bytes();
    u16::from_le_bytes([first, second])
}

#[cfg(test)]
mod tests {
    use crate::data_pattern::{PatternDescriptor, PatternMethod};

    use super::*;

    fn pattern() -> PatternDescriptor {
        PatternDescriptor {
            method: PatternMethod::FillOne,
            first: 0,
            last: 1,
            initial: 0xF,
            step: 0,
            limit: 0,
        }
    }

    #[test]
    fn grid_formats_binary_hexadecimal_and_internal_decimal() {
        assert_eq!(
            format_word(0x2A, 8, DataRepresentation::Binary),
            Ok("00101010".to_owned())
        );
        assert_eq!(
            format_word(0x2A, 8, DataRepresentation::Hexadecimal),
            Ok("2A".to_owned())
        );
        assert_eq!(
            format_word(0x2A, 8, DataRepresentation::Decimal),
            Ok("42".to_owned())
        );
        assert_eq!(format_address(3), "0003");
    }

    #[test]
    fn grid_parser_keeps_the_low_sixteen_bits() {
        let words = parse_grid_words(
            &["1".to_owned(), "10000".to_owned()],
            DataRepresentation::Hexadecimal,
        );

        assert_eq!(words, Ok(vec![1, 0]));
    }

    #[test]
    fn field_validation_checks_order_before_count_bounds() {
        let error = validate_generator_fields(pattern(), "2", "1", "0", "5", 1.0, 8, 4);

        assert_eq!(error, Err(DataSequenceError::PatternRangeOrder));
    }

    #[test]
    fn field_validation_allows_high_equal_to_count() {
        let fields = validate_generator_fields(pattern(), "0", "4", "0", "4", 0.5, 8, 4);

        assert!(fields.is_ok());
    }

    #[test]
    fn import_buffer_zero_fills_a_short_file_tail() {
        let mut imported = prepare_import_buffer(4, 8);
        imported.words[..2].copy_from_slice(&[0x12, 0x34]);
        let mut staged = [9, 9, 9, 9];

        let result = replace_staged_from_import(&mut staged, &imported);

        assert_eq!(result, Ok(()));
        assert_eq!(staged, [0x12, 0x34, 0, 0]);
    }

    #[test]
    fn accepted_fill_clears_values_outside_the_generated_range() {
        let mut words = [9, 9, 9, 9];
        let descriptor = PatternDescriptor {
            first: 1,
            last: 2,
            ..pattern()
        };

        let result = fill_staged_words(&mut words, descriptor, 4);

        assert_eq!(result, Ok(()));
        assert_eq!(words, [0, 0xF, 0xF, 0]);
    }
}
