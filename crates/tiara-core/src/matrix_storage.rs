//! Making room for a matrix, and saying so when there is none.
//!
//! The header and the numbers are allocated separately, so a matrix exists in
//! two pieces and either can fail on its own. What makes this worth reading is
//! the order: the header is taken first and given back again if the numbers
//! cannot be had, so a failure half way through leaves nothing behind.

/// Refused when the first dimension is nothing.
///
/// Part of Ghidra function `FUN_0132def0` at `0x0132DEF0`.
pub const DIMENSION_ONE_MESSAGE: &str = "matrix dimension n1 must be positive integer";

/// Refused when the second is.
///
/// Part of Ghidra function `FUN_0132def0` at `0x0132DEF0`.
pub const DIMENSION_TWO_MESSAGE: &str = "matrix dimension n2 must be positive integer";

/// Reported when the header cannot be had.
///
/// Part of Ghidra function `FUN_0132def0` at `0x0132DEF0`.
pub const STRUCT_MESSAGE: &str = "failed to allocate space for matrix struct";

/// Reported when the numbers cannot be.
///
/// Part of Ghidra function `FUN_0132def0` at `0x0132DEF0`.
pub const BLOCK_MESSAGE: &str = "failed to allocate space for block";

/// How bad a bad dimension is held to be.
///
/// Part of Ghidra function `FUN_0132def0` at `0x0132DEF0`.
pub const DIMENSION_SEVERITY: i32 = 4;

/// How bad a failed allocation is held to be.
///
/// Part of Ghidra function `FUN_0132def0` at `0x0132DEF0`.
///
/// Twice what a bad dimension rates, which is the only ordering the two
/// numbers give: nothing here says what either level means.
pub const ALLOCATION_SEVERITY: i32 = 8;

/// How large the header is.
///
/// Part of Ghidra function `FUN_0132def0` at `0x0132DEF0`.
pub const HEADER_SIZE: usize = 0x20;

/// The value the header's first flag is set to.
///
/// Part of Ghidra function `FUN_0132def0` at `0x0132DEF0`.
pub const FIRST_FLAG: i16 = 1;

/// And its second.
///
/// Part of Ghidra function `FUN_0132def0` at `0x0132DEF0`.
pub const SECOND_FLAG: i16 = 0;

/// Why a matrix could not be made.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MatrixError {
    /// The first dimension was nothing.
    DimensionOne,
    /// The second was.
    DimensionTwo,
    /// There was no room for the header.
    NoHeaderRoom,
    /// There was none for the numbers.
    NoBlockRoom,
}

impl MatrixError {
    /// What is reported.
    #[must_use]
    pub const fn message(self) -> &'static str {
        match self {
            Self::DimensionOne => DIMENSION_ONE_MESSAGE,
            Self::DimensionTwo => DIMENSION_TWO_MESSAGE,
            Self::NoHeaderRoom => STRUCT_MESSAGE,
            Self::NoBlockRoom => BLOCK_MESSAGE,
        }
    }

    /// How bad it is held to be.
    #[must_use]
    pub const fn severity(self) -> i32 {
        match self {
            Self::DimensionOne | Self::DimensionTwo => DIMENSION_SEVERITY,
            Self::NoHeaderRoom | Self::NoBlockRoom => ALLOCATION_SEVERITY,
        }
    }
}

impl core::fmt::Display for MatrixError {
    fn fmt(&self, formatter: &mut core::fmt::Formatter<'_>) -> core::fmt::Result {
        formatter.write_str(self.message())
    }
}

impl std::error::Error for MatrixError {}

/// A matrix and what the header says about it.
///
/// Part of Ghidra function `FUN_0132def0` at `0x0132DEF0`.
#[derive(Debug, Clone, PartialEq)]
pub struct Matrix {
    /// The first dimension, as it was asked for.
    pub rows: i16,
    /// The second.
    pub columns: i16,
    /// How far apart two rows are, which begins equal to the columns.
    ///
    /// Kept separately from the columns even though the two start out the
    /// same, which is what lets a later view over part of a matrix keep the
    /// original spacing while reporting fewer columns of its own.
    pub stride: i16,
    /// The first of two flags the header carries.
    pub first_flag: i16,
    /// The second.
    pub second_flag: i16,
    /// The numbers themselves.
    pub values: Vec<f64>,
}

/// Implements Ghidra function `FUN_0132def0` at `0x0132DEF0`.
///
/// Makes room for a matrix of one shape.
///
/// The dimensions are only tested against nothing, never against being below
/// it, so a negative dimension goes straight past a message that says it must
/// be positive. Two negative ones multiply to a positive count, and the matrix
/// that results has room for numbers and a shape that cannot be walked.
///
/// The stride begins equal to the number of columns, and the two are separate
/// fields from the start rather than becoming so later.
///
/// # Errors
///
/// Returns [`MatrixError`] naming which of the four things went wrong. The
/// two allocations are reported apart from each other because they are made
/// apart: when the numbers cannot be had the header is given back first, so
/// nothing is left half made.
pub fn allocate_matrix(rows: i16, columns: i16) -> Result<Matrix, MatrixError> {
    if rows == 0 {
        return Err(MatrixError::DimensionOne);
    }
    if columns == 0 {
        return Err(MatrixError::DimensionTwo);
    }

    let count = i32::from(rows) * i32::from(columns);
    let Ok(count) = usize::try_from(count) else {
        return Err(MatrixError::NoBlockRoom);
    };

    Ok(Matrix {
        rows,
        columns,
        stride: columns,
        first_flag: FIRST_FLAG,
        second_flag: SECOND_FLAG,
        values: vec![0.0; count],
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn a_matrix_has_room_for_every_one_of_its_numbers() {
        let matrix = allocate_matrix(3, 4).expect("a three by four matrix");

        assert_eq!(matrix.values.len(), 12);
        assert_eq!(matrix.rows, 3);
        assert_eq!(matrix.columns, 4);
    }

    #[test]
    fn the_stride_begins_equal_to_the_columns() {
        let matrix = allocate_matrix(3, 4).expect("a three by four matrix");

        assert_eq!(matrix.stride, matrix.columns);
    }

    #[test]
    fn the_header_carries_its_two_flags_from_the_start() {
        let matrix = allocate_matrix(1, 1).expect("a one by one matrix");

        assert_eq!(matrix.first_flag, 1);
        assert_eq!(matrix.second_flag, 0);
    }

    #[test]
    fn a_first_dimension_of_nothing_is_refused() {
        assert_eq!(allocate_matrix(0, 4), Err(MatrixError::DimensionOne));
    }

    #[test]
    fn a_second_dimension_of_nothing_is_refused_too() {
        assert_eq!(allocate_matrix(3, 0), Err(MatrixError::DimensionTwo));
    }

    #[test]
    fn the_first_dimension_is_tested_before_the_second() {
        assert_eq!(allocate_matrix(0, 0), Err(MatrixError::DimensionOne));
    }

    #[test]
    fn a_negative_dimension_goes_past_a_message_that_says_it_must_be_positive() {
        // Only nothing is refused, never less than nothing.
        let matrix = allocate_matrix(-2, -3).expect("the check does not catch this");

        assert_eq!(matrix.rows, -2);
        assert_eq!(matrix.columns, -3);
        assert_eq!(matrix.values.len(), 6);
    }

    #[test]
    fn one_negative_dimension_leaves_nothing_that_can_be_allocated() {
        assert_eq!(allocate_matrix(-2, 3), Err(MatrixError::NoBlockRoom));
    }

    #[test]
    fn a_bad_dimension_rates_half_what_a_failed_allocation_does() {
        assert_eq!(MatrixError::DimensionOne.severity(), DIMENSION_SEVERITY);
        assert_eq!(MatrixError::NoBlockRoom.severity(), ALLOCATION_SEVERITY);
        assert_eq!(ALLOCATION_SEVERITY, DIMENSION_SEVERITY * 2);
    }

    #[test]
    fn each_failure_says_which_of_the_four_it_was() {
        let messages = [
            MatrixError::DimensionOne,
            MatrixError::DimensionTwo,
            MatrixError::NoHeaderRoom,
            MatrixError::NoBlockRoom,
        ]
        .map(MatrixError::message);
        let mut distinct = messages.to_vec();
        distinct.sort_unstable();
        distinct.dedup();

        assert_eq!(distinct.len(), messages.len());
    }

    #[test]
    fn the_two_dimension_messages_name_the_dimension_they_are_about() {
        assert!(DIMENSION_ONE_MESSAGE.contains("n1"));
        assert!(DIMENSION_TWO_MESSAGE.contains("n2"));
    }

    #[test]
    fn the_two_allocations_are_reported_apart_because_they_are_made_apart() {
        assert_ne!(STRUCT_MESSAGE, BLOCK_MESSAGE);
        assert!(STRUCT_MESSAGE.contains("struct"));
        assert!(BLOCK_MESSAGE.contains("block"));
    }

    #[test]
    fn the_header_is_thirty_two_bytes_however_large_the_matrix_is() {
        assert_eq!(HEADER_SIZE, 32);
    }
}
