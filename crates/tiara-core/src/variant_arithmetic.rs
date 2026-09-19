//! Arithmetic on value cells, and the flattening that comes before it.
//!
//! Six routines, one per width the program can compute in, all with the same
//! shape: read both operands as that width, do the operation, store the result
//! back into the left-hand cell. Which one runs is decided before any of them
//! is called, so each of them already knows what it is working with.
//!
//! What makes the family worth having whole is that the six do not agree. They
//! accept different operations, they mask shift counts differently, and — the
//! one that matters — only the narrowest of them notices when a result does
//! not fit. See [`notices_overflow`].

use crate::variant_value::{DOUBLE, INTEGER, owns_something};

/// What a routine is being asked to do.
///
/// Part of Ghidra function `FUN_00469670` at `0x00469670`, which is the one
/// that accepts them all.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum Operation {
    /// Add.
    Add,
    /// Subtract.
    Subtract,
    /// Multiply.
    Multiply,
    /// Divide, always giving a floating result.
    Divide,
    /// Divide, keeping whole numbers.
    IntegerDivide,
    /// The remainder of the whole division.
    Modulo,
    /// Shift the bits up.
    ShiftLeft,
    /// Shift the bits down.
    ShiftRight,
    /// Bitwise and.
    And,
    /// Bitwise or.
    Or,
    /// Bitwise exclusive or.
    Xor,
}

/// The number each operation is asked for by.
///
/// Part of Ghidra function `FUN_00469670` at `0x00469670`.
///
/// Contiguous from zero, which is what a table looks like when nothing has
/// been removed from it. Anything outside the range raises rather than being
/// ignored — the one thing every routine in the family does the same way.
pub const OPERATION_CODES: [(i32, Operation); 11] = [
    (0, Operation::Add),
    (1, Operation::Subtract),
    (2, Operation::Multiply),
    (3, Operation::Divide),
    (4, Operation::IntegerDivide),
    (5, Operation::Modulo),
    (6, Operation::ShiftLeft),
    (7, Operation::ShiftRight),
    (8, Operation::And),
    (9, Operation::Or),
    (10, Operation::Xor),
];

/// Implements part of Ghidra function `FUN_00469670` at `0x00469670`.
///
/// What one number asks for.
#[must_use]
pub fn operation_for(code: i32) -> Option<Operation> {
    OPERATION_CODES
        .iter()
        .find(|(held, _)| *held == code)
        .map(|(_, operation)| *operation)
}

/// The width a routine computes in.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Width {
    /// Floating, from Ghidra function `FUN_00469560` at `0x00469560`.
    Floating,
    /// A date, from Ghidra function `FUN_004695f0` at `0x004695F0`.
    Date,
    /// Thirty-two bits signed, from Ghidra function `FUN_00469670` at
    /// `0x00469670`.
    Integer32,
    /// Sixty-four bits signed, from Ghidra function `FUN_00469800` at
    /// `0x00469800`.
    Integer64,
    /// Sixty-four bits unsigned, from Ghidra function `FUN_004699e0` at
    /// `0x004699E0`.
    Unsigned64,
    /// A scaled amount of money, from Ghidra function `FUN_00469d60` at
    /// `0x00469D60`.
    Currency,
}

/// Implements part of the arithmetic family.
///
/// The type code a routine stores its result under.
///
/// Each stores its own width back, so an operation on two cells of one width
/// answers that width — except where a result is deferred elsewhere, which is
/// the whole of [`defers_to_floating`].
#[must_use]
pub const fn result_code(width: Width) -> u16 {
    match width {
        Width::Floating => DOUBLE,
        Width::Date => 0x7,
        Width::Integer32 => INTEGER,
        Width::Integer64 => 0x14,
        Width::Unsigned64 => 0x15,
        Width::Currency => 0x6,
    }
}

/// Implements part of the arithmetic family.
///
/// Whether one routine will do one operation at all.
///
/// The floating routine does the four ordinary operations, the date routine
/// does two, and the rest do all eleven. So adding two dates is arithmetic and
/// multiplying them is an error — which is the only place in the family where
/// the operations a width accepts say something about what the width means.
#[must_use]
pub const fn accepts(width: Width, operation: Operation) -> bool {
    match width {
        Width::Floating => matches!(
            operation,
            Operation::Add | Operation::Subtract | Operation::Multiply | Operation::Divide
        ),
        Width::Date => matches!(operation, Operation::Add | Operation::Subtract),
        Width::Currency | Width::Integer32 | Width::Integer64 | Width::Unsigned64 => true,
    }
}

/// Implements part of the arithmetic family.
///
/// Whether a routine hands the work to the floating one instead of doing it.
///
/// Division always does, in every whole-number width: the routine sets its
/// defer flag before computing anything and never divides at all. That is why
/// there is a separate operation for dividing whole numbers — without it there
/// would be no way to ask for a whole-number result.
#[must_use]
pub const fn defers_to_floating(width: Width, operation: Operation) -> bool {
    if matches!(width, Width::Floating | Width::Date) {
        return false;
    }
    matches!(operation, Operation::Divide)
}

/// Implements part of Ghidra function `FUN_00469670` at `0x00469670`.
///
/// Whether a routine notices that its result did not fit.
///
/// Only the thirty-two bit one. It computes in sixty-four bits, narrows, and
/// compares — and where the narrowing lost something it throws the result away
/// and redoes the whole operation in floating point. So a sum too large for
/// thirty-two bits quietly becomes a floating value.
///
/// The sixty-four bit routines have no such test. Adding two large
/// sixty-four bit values wraps and says nothing. The same overflow is therefore
/// handled in opposite ways depending only on how wide the operands happened to
/// be, and the wider one — where a wrap is harder to spot — is the one without
/// the check.
#[must_use]
pub const fn notices_overflow(width: Width) -> bool {
    matches!(width, Width::Integer32)
}

/// Implements part of the arithmetic family.
///
/// The operations whose overflow is noticed.
///
/// Three: adding, subtracting and multiplying. Whole-number division and the
/// remainder are not checked, so dividing the most negative value by minus one
/// overflows without a word, and dividing by nothing at all is not caught here
/// either.
pub const OVERFLOW_CHECKED: [Operation; 3] =
    [Operation::Add, Operation::Subtract, Operation::Multiply];

/// Implements part of the arithmetic family.
///
/// How many bits of a shift count are used.
///
/// Masked to the width being shifted, which is what the instruction does
/// anyway — so asking to shift a thirty-two bit value by thirty-two places is
/// asking for none. The two widths mask differently and both mask correctly,
/// which is worth recording because the same masking is wrong nowhere in the
/// family.
#[must_use]
pub const fn shift_count_mask(width: Width) -> u32 {
    match width {
        Width::Integer64 | Width::Unsigned64 => 0x3F,
        Width::Floating | Width::Date | Width::Integer32 | Width::Currency => 0x1F,
    }
}

/// Implements part of the arithmetic family.
///
/// Whether shifting down fills with zeros rather than with the sign.
///
/// It does, in every width. The operands are read as signed where the
/// arithmetic needs them signed, but the shift is done on the unsigned view —
/// so shifting a negative value down makes it positive. That is consistent
/// across the family, which is what makes it a decision rather than a slip in
/// one routine.
#[must_use]
pub const fn shift_down_fills_with_zeros(width: Width) -> bool {
    match width {
        Width::Integer32 | Width::Integer64 | Width::Unsigned64 | Width::Currency => true,
        Width::Floating | Width::Date => false,
    }
}

/// What money is scaled by.
///
/// Part of Ghidra function `FUN_00469d60` at `0x00469D60`.
///
/// Four decimal places, held as a whole number. Multiplying two such numbers
/// multiplies the scale too, so the product has to be divided by it again —
/// which is the whole reason money needs arithmetic of its own rather than
/// sharing the sixty-four bit routine.
pub const MONEY_SCALE: i64 = 10_000;

/// Implements part of Ghidra function `FUN_00469d60` at `0x00469D60`.
///
/// Whether money falls through to the thirty-two bit routine.
///
/// It does for everything but the four ordinary operations — so a bitwise
/// operation on two amounts of money is done as thirty-two bit integers, on
/// the scaled values, and the scale is neither removed first nor put back
/// afterwards.
#[must_use]
pub const fn money_falls_through(operation: Operation) -> bool {
    !matches!(
        operation,
        Operation::Add | Operation::Subtract | Operation::Multiply | Operation::Divide
    )
}

/// Implements part of Ghidra function `FUN_00469d60` at `0x00469D60`.
///
/// Whether an operation on money answers something other than money.
///
/// One case out of the four in the routine: dividing when only the right-hand
/// operand is of the scaled kind stores a floating value and returns early. It
/// is the only way out of this routine that does not produce money, and it
/// depends on which side the plain operand is on — so `a / b` and the same
/// division with the operands exchanged do not merely differ in value, they
/// differ in type.
#[must_use]
pub const fn money_answers_a_floating_value(
    left_is_scaled: bool,
    right_is_scaled: bool,
    operation: Operation,
) -> bool {
    !left_is_scaled && right_is_scaled && matches!(operation, Operation::Divide)
}

/// Implements part of Ghidra function `FUN_00469d60` at `0x00469D60`.
///
/// Whether a money result is rounded rather than truncated.
///
/// Every path but the plain addition and subtraction rounds, and the rounding
/// is the platform's half-to-even. So a money result can differ from the same
/// sum done by hand in the last place, and always in the direction that does
/// not accumulate.
#[must_use]
pub const fn money_result_is_rounded(operation: Operation) -> bool {
    matches!(operation, Operation::Multiply | Operation::Divide)
}

/// Implements part of Ghidra function `FUN_00468c40` at `0x00468C40`.
///
/// What a cell becomes when it is flattened.
///
/// Flattening puts a cell into the smallest of the few widths the rest of the
/// program expects, so that everything afterwards has fewer cases to handle.
/// Three of the answers lose something:
///
/// * An unsigned thirty-two bit value above the signed limit becomes a
///   floating one, because there is no wider whole-number answer in reach —
///   and a floating value stops being exact above fifty-three bits.
/// * A sixty-four bit value that does not fit in thirty-two becomes either
///   itself or a floating value, depending on a global. So whether a large
///   whole number survives exactly is settled somewhere else entirely.
/// * A text becomes the other kind of text. Flattening a cell therefore
///   changes which kind of string it holds, which nothing about the word
///   flattening suggests.
#[must_use]
pub const fn flattened_code(
    code: u16,
    fits_in_thirty_two_bits: bool,
    high_bit_set: bool,
    wide_whole_numbers_allowed: bool,
) -> Option<u16> {
    match code {
        // Widened to the one whole-number width everything else expects.
        0x10..=0x12 => Some(INTEGER),
        0x13 => Some(if high_bit_set { DOUBLE } else { INTEGER }),
        0x14 => Some(if fits_in_thirty_two_bits {
            INTEGER
        } else if wide_whole_numbers_allowed {
            DOUBLE
        } else {
            0x14
        }),
        // Both kinds of text end up as the platform's own.
        0x102 => Some(0x8),
        _ => None,
    }
}

/// The code that means the cell points at another cell.
///
/// Part of Ghidra function `FUN_00468c40` at `0x00468C40`.
pub const POINTS_AT_ANOTHER_CELL: u16 = 0x400C;

/// Implements part of Ghidra function `FUN_00468c40` at `0x00468C40`.
///
/// Whether flattening follows a cell that points at another.
///
/// It does, by calling itself — so a chain of any length is followed to its
/// end. Nothing counts the depth, so a cell made to point at itself would not
/// come back.
#[must_use]
pub const fn follows_a_pointing_cell(code: u16) -> bool {
    code == POINTS_AT_ANOTHER_CELL
}

/// Below this, a code flattens by being copied unchanged.
///
/// Part of Ghidra function `FUN_00468c40` at `0x00468C40`.
///
/// Above it, a handler has to be found for the code, and if none is registered
/// the flattening fails. The bound is tested against the low twelve bits, so
/// the flags above them do not take a code out of the range.
pub const COPIED_UNCHANGED_LIMIT: u16 = 0x10F;

/// Implements part of Ghidra function `FUN_00468c40` at `0x00468C40`.
///
/// Whether a code is flattened by a plain copy.
#[must_use]
pub const fn flattens_by_copying(code: u16) -> bool {
    code & 0x2000 == 0 && (code & 0xFFF) < COPIED_UNCHANGED_LIMIT
}

/// Implements part of the arithmetic family.
///
/// Whether the left-hand cell is released before the result is stored.
///
/// It is, in every routine and on every path, by the same test that opens the
/// setters. The result is computed first, though, so a routine that raises
/// part way through leaves the left-hand cell as it found it.
#[must_use]
pub const fn releases_the_left_hand_cell(code: u16) -> bool {
    owns_something(code)
}

#[cfg(test)]
mod tests {
    use super::*;

    const EVERY_WIDTH: [Width; 6] = [
        Width::Floating,
        Width::Date,
        Width::Integer32,
        Width::Integer64,
        Width::Unsigned64,
        Width::Currency,
    ];

    #[test]
    fn the_operation_numbers_run_from_zero_with_no_gaps() {
        // Which is what a table looks like when nothing was removed from it.
        for (at, (code, _)) in OPERATION_CODES.iter().enumerate() {
            assert_eq!(*code, i32::try_from(at).expect("a small table"));
        }
    }

    #[test]
    fn a_number_outside_the_table_asks_for_nothing() {
        assert_eq!(operation_for(-1), None);
        assert_eq!(operation_for(11), None);
        assert_eq!(operation_for(0), Some(Operation::Add));
        assert_eq!(operation_for(10), Some(Operation::Xor));
    }

    #[test]
    fn no_operation_is_numbered_twice() {
        let mut operations: Vec<Operation> =
            OPERATION_CODES.iter().map(|(_, held)| *held).collect();
        let before = operations.len();
        operations.sort_unstable();
        operations.dedup();

        assert_eq!(operations.len(), before);
    }

    #[test]
    fn each_width_stores_its_own_code_and_they_are_all_different() {
        let mut codes: Vec<u16> = EVERY_WIDTH
            .iter()
            .map(|width| result_code(*width))
            .collect();
        let before = codes.len();
        codes.sort_unstable();
        codes.dedup();

        assert_eq!(codes.len(), before);
    }

    #[test]
    fn the_floating_routine_does_the_four_ordinary_operations_and_no_more() {
        for (_, operation) in OPERATION_CODES {
            let ordinary = matches!(
                operation,
                Operation::Add | Operation::Subtract | Operation::Multiply | Operation::Divide
            );

            assert_eq!(
                accepts(Width::Floating, operation),
                ordinary,
                "{operation:?}"
            );
        }
    }

    #[test]
    fn a_date_can_be_added_and_subtracted_and_nothing_else() {
        assert!(accepts(Width::Date, Operation::Add));
        assert!(accepts(Width::Date, Operation::Subtract));
        assert!(!accepts(Width::Date, Operation::Multiply));
        assert!(!accepts(Width::Date, Operation::And));
    }

    #[test]
    fn the_whole_number_routines_accept_every_operation() {
        for width in [Width::Integer32, Width::Integer64, Width::Unsigned64] {
            for (_, operation) in OPERATION_CODES {
                assert!(accepts(width, operation), "{width:?} {operation:?}");
            }
        }
    }

    #[test]
    fn dividing_is_always_handed_to_the_floating_routine() {
        for width in [
            Width::Integer32,
            Width::Integer64,
            Width::Unsigned64,
            Width::Currency,
        ] {
            assert!(defers_to_floating(width, Operation::Divide), "{width:?}");
        }
    }

    #[test]
    fn which_is_why_dividing_whole_numbers_needs_an_operation_of_its_own() {
        assert!(!defers_to_floating(
            Width::Integer32,
            Operation::IntegerDivide
        ));
        assert_ne!(Operation::Divide, Operation::IntegerDivide);
    }

    #[test]
    fn the_floating_routine_does_not_defer_to_itself() {
        for (_, operation) in OPERATION_CODES {
            assert!(!defers_to_floating(Width::Floating, operation));
            assert!(!defers_to_floating(Width::Date, operation));
        }
    }

    #[test]
    fn only_the_narrowest_whole_number_routine_notices_overflow() {
        assert!(notices_overflow(Width::Integer32));
        assert!(!notices_overflow(Width::Integer64));
        assert!(!notices_overflow(Width::Unsigned64));
    }

    #[test]
    fn so_the_same_overflow_is_handled_in_opposite_ways_by_width() {
        // Narrow: quietly becomes a floating value. Wide: quietly wraps.
        assert!(notices_overflow(Width::Integer32));
        assert!(!notices_overflow(Width::Integer64));
    }

    #[test]
    fn the_checked_operations_are_the_three_that_can_grow_a_value() {
        assert_eq!(OVERFLOW_CHECKED.len(), 3);
        assert!(OVERFLOW_CHECKED.contains(&Operation::Add));
        assert!(OVERFLOW_CHECKED.contains(&Operation::Subtract));
        assert!(OVERFLOW_CHECKED.contains(&Operation::Multiply));
    }

    #[test]
    fn dividing_whole_numbers_and_taking_a_remainder_are_not_checked() {
        // So the most negative value divided by minus one overflows silently.
        assert!(!OVERFLOW_CHECKED.contains(&Operation::IntegerDivide));
        assert!(!OVERFLOW_CHECKED.contains(&Operation::Modulo));
    }

    #[test]
    fn a_shift_count_is_masked_to_the_width_being_shifted() {
        assert_eq!(shift_count_mask(Width::Integer32), 31);
        assert_eq!(shift_count_mask(Width::Integer64), 63);
        assert_eq!(shift_count_mask(Width::Unsigned64), 63);
    }

    #[test]
    fn so_shifting_by_the_whole_width_is_shifting_by_nothing() {
        assert_eq!(0x20 & shift_count_mask(Width::Integer32), 0);
        assert_eq!(0x40 & shift_count_mask(Width::Integer64), 0);
        assert_eq!(0x21 & shift_count_mask(Width::Integer32), 1);
    }

    #[test]
    fn shifting_down_fills_with_zeros_in_every_whole_number_width() {
        // Consistent across the family, which makes it a decision rather than
        // a slip in one routine.
        assert!(shift_down_fills_with_zeros(Width::Integer32));
        assert!(shift_down_fills_with_zeros(Width::Integer64));
        assert!(shift_down_fills_with_zeros(Width::Unsigned64));
    }

    #[test]
    fn so_shifting_a_negative_value_down_makes_it_positive() {
        let held: u32 = 0xFFFF_FFFF;

        assert!(shift_down_fills_with_zeros(Width::Integer32));
        assert_eq!(held >> 1, 0x7FFF_FFFF);
    }

    #[test]
    fn money_is_four_decimal_places_held_as_a_whole_number() {
        assert_eq!(MONEY_SCALE, 10_000);
    }

    #[test]
    fn a_bitwise_operation_on_money_falls_through_to_thirty_two_bits() {
        // Done on the scaled values, with the scale neither removed nor put
        // back.
        for operation in [
            Operation::And,
            Operation::Or,
            Operation::Xor,
            Operation::ShiftLeft,
            Operation::ShiftRight,
            Operation::IntegerDivide,
            Operation::Modulo,
        ] {
            assert!(money_falls_through(operation), "{operation:?}");
        }
    }

    #[test]
    fn the_four_ordinary_operations_on_money_do_not() {
        for operation in [
            Operation::Add,
            Operation::Subtract,
            Operation::Multiply,
            Operation::Divide,
        ] {
            assert!(!money_falls_through(operation), "{operation:?}");
        }
    }

    #[test]
    fn one_way_of_dividing_money_answers_a_floating_value_instead() {
        assert!(money_answers_a_floating_value(
            false,
            true,
            Operation::Divide
        ));
    }

    #[test]
    fn and_it_depends_on_which_side_the_plain_operand_is() {
        // So a division and the same division with the operands exchanged
        // differ in type and not only in value.
        assert!(money_answers_a_floating_value(
            false,
            true,
            Operation::Divide
        ));
        assert!(!money_answers_a_floating_value(
            true,
            false,
            Operation::Divide
        ));
    }

    #[test]
    fn nothing_else_leaves_that_routine_as_anything_but_money() {
        for operation in [Operation::Add, Operation::Subtract, Operation::Multiply] {
            for left in [true, false] {
                for right in [true, false] {
                    assert!(
                        !money_answers_a_floating_value(left, right, operation),
                        "{operation:?} {left} {right}"
                    );
                }
            }
        }
        assert!(!money_answers_a_floating_value(
            true,
            true,
            Operation::Divide
        ));
    }

    #[test]
    fn multiplying_and_dividing_money_rounds_and_adding_does_not() {
        assert!(money_result_is_rounded(Operation::Multiply));
        assert!(money_result_is_rounded(Operation::Divide));
        assert!(!money_result_is_rounded(Operation::Add));
        assert!(!money_result_is_rounded(Operation::Subtract));
    }

    #[test]
    fn the_narrow_whole_numbers_all_flatten_to_one_width() {
        for code in [0x10u16, 0x11, 0x12] {
            assert_eq!(flattened_code(code, true, false, false), Some(INTEGER));
        }
    }

    #[test]
    fn an_unsigned_value_above_the_signed_limit_flattens_to_a_floating_one() {
        // And stops being exact above fifty-three bits.
        assert_eq!(flattened_code(0x13, true, false, false), Some(INTEGER));
        assert_eq!(flattened_code(0x13, true, true, false), Some(DOUBLE));
    }

    #[test]
    fn a_wide_value_that_fits_flattens_to_the_narrow_width() {
        assert_eq!(flattened_code(0x14, true, false, false), Some(INTEGER));
        assert_eq!(flattened_code(0x14, true, false, true), Some(INTEGER));
    }

    #[test]
    fn one_that_does_not_fit_is_settled_by_a_global() {
        // So whether a large whole number survives exactly is decided
        // somewhere else entirely.
        assert_eq!(flattened_code(0x14, false, false, false), Some(0x14));
        assert_eq!(flattened_code(0x14, false, false, true), Some(DOUBLE));
    }

    #[test]
    fn flattening_a_text_changes_which_kind_of_text_it_is() {
        assert_eq!(flattened_code(0x102, true, false, false), Some(0x8));
    }

    #[test]
    fn a_code_the_flattening_does_not_change_answers_nothing() {
        assert_eq!(flattened_code(INTEGER, true, false, false), None);
        assert_eq!(flattened_code(DOUBLE, true, false, false), None);
    }

    #[test]
    fn a_cell_pointing_at_another_is_followed_to_the_end() {
        assert!(follows_a_pointing_cell(POINTS_AT_ANOTHER_CELL));
        assert!(!follows_a_pointing_cell(INTEGER));
        assert!(!follows_a_pointing_cell(0x102));
    }

    #[test]
    fn nothing_counts_how_far_it_is_followed() {
        // Recorded because a cell made to point at itself would not come
        // back: there is no depth to compare against.
        assert_eq!(POINTS_AT_ANOTHER_CELL, 0x400C);
    }

    #[test]
    fn an_ordinary_code_flattens_by_being_copied() {
        assert!(flattens_by_copying(INTEGER));
        assert!(flattens_by_copying(DOUBLE));
        assert!(flattens_by_copying(0x10E));
    }

    #[test]
    fn the_bound_is_tested_against_the_low_twelve_bits_only() {
        // So the flags above them do not take a code out of the range.
        assert!(flattens_by_copying(0x4000 | 0x5));
        assert!(!flattens_by_copying(0x10F));
    }

    #[test]
    fn anything_holding_many_values_does_not() {
        assert!(!flattens_by_copying(0x2000));
        assert!(!flattens_by_copying(0x2000 | INTEGER));
    }

    #[test]
    fn the_left_hand_cell_is_released_by_the_same_test_the_setters_use() {
        assert!(releases_the_left_hand_cell(0x102));
        assert!(!releases_the_left_hand_cell(INTEGER));
        assert!(!releases_the_left_hand_cell(DOUBLE));
    }
}
