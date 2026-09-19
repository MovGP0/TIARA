//! The value cell that every style property is made of.
//!
//! Twenty-four bytes: a type code at the front and the value behind it. A
//! family of twenty-two routines put something into one — a number of any
//! width, a floating value, a text, an interface — and two more copy a cell or
//! release it. Between them they are the whole of how a property holds a
//! value, and they explain why one property can hold a colour in one rule and
//! a length in the next: the cell does not care, the type code says which it
//! is.
//!
//! The type codes are the platform's own and are not invented here. What is
//! recovered is which of them this program actually stores, and the two places
//! where the handling is looser than the codes would suggest.

/// How wide one value cell is.
///
/// Part of Ghidra function `FUN_00461840` at `0x00461840`, which moves exactly
/// this many bytes when it can.
pub const CELL_SIZE: usize = 0x18;

/// Where the type code sits in a cell.
///
/// Part of Ghidra function `FUN_00468530` at `0x00468530`.
pub const TYPE_CODE_OFFSET: usize = 0;

/// Where the value sits.
///
/// Part of Ghidra function `FUN_00468530` at `0x00468530`.
///
/// Eight bytes in, not two — so there are six bytes between the type code and
/// the value that nothing reads. That is what room for a wider code and for
/// alignment looks like after the fact.
pub const VALUE_OFFSET: usize = 8;

/// The test for whether a cell is holding something it has to let go of.
///
/// Part of Ghidra function `FUN_00468530` at `0x00468530`, and of every other
/// routine here — all of them begin with it.
///
/// A bit test, not a list: a type code passes if any of these bits is set in
/// it. That is cheap, and it is right for every code this program stores, but
/// see [`asked_to_release_nothing`] for the codes where it is merely harmless.
pub const OWNS_SOMETHING_MASK: u16 = 0xBFE8;

/// The code for a cell holding nothing.
///
/// Part of Ghidra function `FUN_00460ac0` at `0x00460AC0`.
pub const EMPTY: u16 = 0;

/// The code a plain number is stored under.
///
/// Part of Ghidra function `FUN_00468530` at `0x00468530`.
pub const INTEGER: u16 = 3;

/// The code a floating value is stored under.
///
/// Part of Ghidra function `FUN_00468860` at `0x00468860`.
pub const DOUBLE: u16 = 5;

/// The code a text is stored under.
///
/// Part of Ghidra function `FUN_00468a10` at `0x00468A10`, which is the only
/// one of the setters that puts a text in — so every textual property value in
/// the program arrives here.
pub const TEXT: u16 = 0x102;

/// The code for the older, narrower kind of text.
///
/// Part of Ghidra function `FUN_00460ac0` at `0x00460AC0`.
///
/// Released and copied, but never stored by any of the setters — so a cell can
/// only come to hold one by being copied from somewhere else.
pub const NARROW_TEXT: u16 = 0x100;

/// The code for a text of a third kind, handled through a stored routine.
///
/// Part of Ghidra function `FUN_00460ac0` at `0x00460AC0`.
pub const FOREIGN_TEXT: u16 = 0x101;

/// Below this, a code is simple enough that releasing it is one call.
///
/// Part of Ghidra function `FUN_00460ac0` at `0x00460AC0`.
pub const SIMPLE_LIMIT: u16 = 0x14;

/// The bit that says the value is a pointer to the real one.
///
/// Part of Ghidra function `FUN_00461700` at `0x00461700`, which copies such a
/// cell as eight bytes and leaves the thing it points at alone — so two cells
/// then point at one value.
pub const BY_REFERENCE: u16 = 0x4000;

/// The bit that says the value is many values.
///
/// Part of Ghidra function `FUN_00460ac0` at `0x00460AC0`.
pub const ARRAY: u16 = 0x2000;

/// Implements part of Ghidra function `FUN_00468530` at `0x00468530`.
///
/// Whether a cell holding this code has to be released before being reused.
#[must_use]
pub const fn owns_something(code: u16) -> bool {
    code & OWNS_SOMETHING_MASK != 0
}

/// Implements part of Ghidra function `FUN_00460ac0` at `0x00460AC0`.
///
/// The simple codes the mask asks about anyway.
///
/// The mask is a bit test, so it says yes for every code from eight to fifteen
/// — including the ones that hold nothing worth releasing. Those then take the
/// simple route through the release, where nothing happens, so the cost is a
/// wasted call and not a fault. Worth knowing because it means a cell passing
/// the test is not proof that anything is held.
#[must_use]
pub fn asked_to_release_nothing() -> Vec<u16> {
    (0..SIMPLE_LIMIT)
        .filter(|code| owns_something(*code))
        .collect()
}

/// Implements Ghidra function `FUN_00468530` at `0x00468530`.
///
/// Puts a thirty-two bit value into a cell under a code chosen by a table.
///
/// The caller does not give the type code, it gives a small number that is
/// looked up in a table of codes. Two things about that lookup are the
/// behaviour rather than an accident of it:
///
/// * The table is consulted only while a global says it has been set up.
///   Before then every value is stored as a plain number and the caller's
///   choice is discarded without a word — so the same call can mean different
///   things depending on how early it runs.
/// * The numbers passed are not all positive. A value of minus four is used
///   throughout the default style sheet, and the lookup does not check, so it
///   reads the two bytes in front of the table. Whatever is there is the code
///   that gets stored.
#[must_use]
pub fn code_for_kind(table: &[u16], table_is_ready: bool, kind: i8) -> u16 {
    if !table_is_ready {
        return INTEGER;
    }
    if reads_outside_the_table(table.len(), kind) {
        // In front of the table, or past the end of it. The recovered routine
        // indexes without a bound of any kind, so what it finds is whatever
        // the data segment holds there and nothing here can say what that is.
        return EMPTY;
    }
    usize::try_from(kind)
        .ok()
        .and_then(|at| table.get(at))
        .copied()
        .unwrap_or(EMPTY)
}

/// Implements part of Ghidra function `FUN_00468530` at `0x00468530`.
///
/// Whether a kind reads outside the table it is meant to index.
#[must_use]
pub fn reads_outside_the_table(table_len: usize, kind: i8) -> bool {
    let at = isize::from(kind);
    at < 0 || at >= isize::try_from(table_len).unwrap_or(isize::MAX)
}

/// What one of the kinds seen in the default style sheet is.
///
/// Part of Ghidra function `FUN_00a5d410` at `0x00A5D410`, which is where they
/// are passed from.
///
/// Three are used and one of them is negative. They are recorded by their
/// number because what the table turns them into is not recoverable — the
/// table is data, and the negative one is not even in it.
pub const OBSERVED_KINDS: [i8; 3] = [1, 2, -4];

/// Implements Ghidra function `FUN_00468860` at `0x00468860`.
///
/// The code a floating value is put in under.
///
/// One of the two routines that store a double, and the one that writes the
/// code before the value — see [`disagree_about_order`].
#[must_use]
pub const fn code_for_double() -> u16 {
    DOUBLE
}

/// Implements Ghidra function `FUN_00468a10` at `0x00468A10`.
///
/// The code a text is put in under.
///
/// The setter blanks the value, then sets the code, then assigns the text — in
/// that order, which matters: the code is already the text code while the
/// value is still empty, so anything reading the cell in between sees a text
/// that is not there rather than a text that is somewhere else.
#[must_use]
pub const fn code_for_text() -> u16 {
    TEXT
}

/// Implements Ghidra function `FUN_00460ac0` at `0x00460AC0`.
///
/// Whether releasing a cell empties its code before letting the value go.
///
/// It does, for both kinds of text: the code is set to empty first and the
/// string released afterwards. So a cell being released is seen as empty, not
/// as a text pointing at something already gone — which is the difference
/// between a re-entrant reader finding nothing and one finding a stale
/// pointer.
#[must_use]
pub const fn emptied_before_release(code: u16) -> bool {
    code == NARROW_TEXT || code == TEXT
}

/// Implements Ghidra function `FUN_00461840` at `0x00461840`.
///
/// Whether copying a cell can be done as a plain move of its bytes.
///
/// It can when the source holds nothing that needs releasing, and then all
/// twenty-four bytes are moved at once. Otherwise the long copy runs, which
/// knows about each kind.
#[must_use]
pub const fn copies_as_plain_bytes(source_code: u16) -> bool {
    !owns_something(source_code)
}

/// Implements part of Ghidra function `FUN_00461840` at `0x00461840`.
///
/// Whether a copy does anything at all.
///
/// A cell copied onto itself is left alone — tested by address, before
/// anything is released. Without that test the release would throw the value
/// away and the copy would then have nothing to copy.
#[must_use]
pub const fn copy_does_anything(same_cell: bool) -> bool {
    !same_cell
}

/// Implements part of Ghidra function `FUN_00461700` at `0x00461700`.
///
/// Whether copying this code shares the value rather than duplicating it.
///
/// A by-reference cell is copied as its eight bytes and the value it points at
/// is not touched, so afterwards two cells point at one value. Both kinds of
/// text, by contrast, are copied through an assignment that accounts for the
/// new holder.
#[must_use]
pub const fn copy_shares_the_value(code: u16) -> bool {
    code == BY_REFERENCE | TEXT || code == BY_REFERENCE | NARROW_TEXT
}

/// How one type code gets into a cell.
///
/// Part of the twenty-two setters between `0x00468580` and `0x00468A90`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Setter {
    /// Where the routine sits.
    pub routine: u32,
    /// The type code it stores.
    pub code: u16,
    /// How many bytes of value it writes.
    pub width: u8,
    /// Whether it writes the code before the value.
    pub code_first: bool,
    /// Whether the value is a reference it has to account for.
    pub takes_a_reference: bool,
}

/// Every way a value gets into a cell.
///
/// Implements Ghidra functions `FUN_00468580` at `0x00468580`, `FUN_004685b0`
/// at `0x004685B0`, `FUN_004685e0` at `0x004685E0`, `FUN_00468610` at
/// `0x00468610`, `FUN_00468640` at `0x00468640`, `FUN_00468670` at
/// `0x00468670`, `FUN_004686a0` at `0x004686A0`, `FUN_004686d0` at
/// `0x004686D0`, `FUN_00468700` at `0x00468700`, `FUN_00468730` at
/// `0x00468730`, `FUN_00468770` at `0x00468770`, `FUN_004687b0` at
/// `0x004687B0`, `FUN_004687e0` at `0x004687E0`, `FUN_00468820` at
/// `0x00468820`, `FUN_004688a0` at `0x004688A0`, `FUN_004688e0` at
/// `0x004688E0`, `FUN_00468910` at `0x00468910`, `FUN_004689d0` at
/// `0x004689D0`, `FUN_00468a50` at `0x00468A50` and `FUN_00468a90` at
/// `0x00468A90`, alongside the two already given functions of their own.
///
/// Twenty-two routines for eighteen codes, each one shaped the same way:
/// release whatever is there, then store. None of them looks at the value it is
/// given, and all of them release first, so any of them may be called on a cell
/// holding anything — which is what lets them be the only way a value ever gets
/// in.
pub const SETTERS: [Setter; 22] = [
    Setter {
        routine: 0x0046_8580,
        code: 0x003,
        width: 4,
        code_first: true,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_85B0,
        code: 0x003,
        width: 4,
        code_first: true,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_85E0,
        code: 0x011,
        width: 1,
        code_first: true,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_8610,
        code: 0x012,
        width: 2,
        code_first: true,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_8640,
        code: 0x013,
        width: 4,
        code_first: true,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_8670,
        code: 0x015,
        width: 8,
        code_first: true,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_86A0,
        code: 0x010,
        width: 1,
        code_first: true,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_86D0,
        code: 0x002,
        width: 2,
        code_first: true,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_8700,
        code: 0x014,
        width: 8,
        code_first: true,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_8730,
        code: 0x004,
        width: 4,
        code_first: false,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_8770,
        code: 0x005,
        width: 8,
        code_first: false,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_87B0,
        code: 0x006,
        width: 8,
        code_first: false,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_87E0,
        code: 0x007,
        width: 8,
        code_first: false,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_8820,
        code: 0x00b,
        width: 2,
        code_first: true,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_8860,
        code: 0x005,
        width: 8,
        code_first: true,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_88A0,
        code: 0x007,
        width: 8,
        code_first: true,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_88E0,
        code: 0x006,
        width: 8,
        code_first: true,
        takes_a_reference: false,
    },
    Setter {
        routine: 0x0046_8910,
        code: 0x100,
        width: 8,
        code_first: true,
        takes_a_reference: true,
    },
    Setter {
        routine: 0x0046_89D0,
        code: 0x008,
        width: 8,
        code_first: true,
        takes_a_reference: true,
    },
    Setter {
        routine: 0x0046_8A10,
        code: 0x102,
        width: 8,
        code_first: true,
        takes_a_reference: true,
    },
    Setter {
        routine: 0x0046_8A50,
        code: 0x00d,
        width: 8,
        code_first: true,
        takes_a_reference: true,
    },
    Setter {
        routine: 0x0046_8A90,
        code: 0x009,
        width: 8,
        code_first: true,
        takes_a_reference: true,
    },
];

/// Implements part of the setters at `0x00468580` and after.
///
/// Every routine that stores one code.
#[must_use]
pub fn setters_for(code: u16) -> Vec<&'static Setter> {
    SETTERS
        .iter()
        .filter(|setter| setter.code == code)
        .collect()
}

/// Implements part of the setters at `0x00468580` and after.
///
/// The codes that can be stored by more than one routine.
///
/// Four of them. One has two routines that are the same instruction for
/// instruction; the other three have routines that differ in the one way that
/// can be seen from outside — see [`disagree_about_order`].
#[must_use]
pub fn codes_with_two_setters() -> Vec<u16> {
    let mut found: Vec<u16> = SETTERS
        .iter()
        .filter(|setter| setters_for(setter.code).len() > 1)
        .map(|setter| setter.code)
        .collect();
    found.sort_unstable();
    found.dedup();
    found
}

/// Implements part of the setters at `0x00468580` and after.
///
/// The codes whose two routines store the code and the value in opposite
/// orders.
///
/// This is not a difference of taste. A cell is visible to anything that reads
/// it while the store is half done, and the two orders leave it in opposite
/// halfway states: code first means the cell claims the new type while still
/// holding the old value, and value first means it holds the new value while
/// still claiming the old type. Which of the two a caller gets depends only on
/// which of the duplicate routines it happened to be linked against.
#[must_use]
pub fn disagree_about_order() -> Vec<u16> {
    codes_with_two_setters()
        .into_iter()
        .filter(|code| {
            let ways = setters_for(*code);
            ways.iter().any(|setter| setter.code_first)
                && ways.iter().any(|setter| !setter.code_first)
        })
        .collect()
}

/// Implements part of the setters at `0x00468580` and after.
///
/// The codes whose routine writes the value before the code.
///
/// The scaled and floating types, and only those — so the order follows the
/// group a type belongs to rather than being chosen one routine at a time.
#[must_use]
pub fn stored_value_first() -> Vec<u16> {
    let mut found: Vec<u16> = SETTERS
        .iter()
        .filter(|setter| !setter.code_first)
        .map(|setter| setter.code)
        .collect();
    found.sort_unstable();
    found.dedup();
    found
}

/// What a cell holds when it holds true.
///
/// Implements part of Ghidra function `FUN_00468820` at `0x00468820`.
///
/// Every bit set, not one — the platform's own convention for a boolean this
/// wide. It matters because the cell is two bytes of value like a small number
/// is, so a boolean read as a number is minus one rather than one, and a test
/// for equality with one fails on a cell that is true.
pub const TRUE_AS_STORED: u16 = 0xFFFF;

/// Implements Ghidra function `FUN_00468820` at `0x00468820`.
///
/// How a boolean is stored.
#[must_use]
pub const fn boolean_as_stored(value: bool) -> u16 {
    if value { TRUE_AS_STORED } else { 0 }
}

/// Implements part of the setters at `0x00468580` and after.
///
/// The two codes that are stored the same way and told apart only by the code.
///
/// Both interface kinds blank the value, set the code, and take the reference
/// through the same helper — so nothing about how one is held distinguishes it
/// from the other.
pub const INTERFACE_CODES: [u16; 2] = [0x9, 0xD];

/// Implements Ghidra function `FUN_00460b80` at `0x00460B80`.
///
/// Whether emptying a cell can be done by writing the code alone.
///
/// It can whenever the cell holds nothing that needs releasing, which is the
/// same test that opens every setter. Otherwise the full release runs. So
/// emptying a cell that holds a number is one store, and emptying one that
/// holds a text is a call.
#[must_use]
pub const fn empties_by_writing_the_code_alone(code: u16) -> bool {
    !owns_something(code)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn a_cell_is_twenty_four_bytes_with_six_of_them_unread() {
        assert_eq!(CELL_SIZE, 24);
        assert_eq!(TYPE_CODE_OFFSET, 0);
        assert_eq!(VALUE_OFFSET, 8);
        // Two for the code, six nobody reads, sixteen for the value.
        assert_eq!(VALUE_OFFSET - (TYPE_CODE_OFFSET + 2), 6);
    }

    #[test]
    fn a_number_and_a_floating_value_hold_nothing_that_needs_releasing() {
        assert!(!owns_something(EMPTY));
        assert!(!owns_something(INTEGER));
        assert!(!owns_something(DOUBLE));
    }

    #[test]
    fn both_kinds_of_text_do() {
        assert!(owns_something(TEXT));
        assert!(owns_something(NARROW_TEXT));
        assert!(owns_something(FOREIGN_TEXT));
    }

    #[test]
    fn so_does_anything_carrying_the_array_bit() {
        assert!(owns_something(ARRAY));
        assert!(owns_something(ARRAY | INTEGER));
    }

    #[test]
    fn the_mask_asks_about_eight_simple_codes_that_hold_nothing() {
        // A cell passing the test is therefore not proof anything is held.
        assert_eq!(asked_to_release_nothing(), [8, 9, 10, 11, 12, 13, 14, 15]);
    }

    #[test]
    fn none_of_the_codes_actually_stored_are_among_them() {
        let over_eager = asked_to_release_nothing();
        for code in [EMPTY, INTEGER, DOUBLE] {
            assert!(!over_eager.contains(&code), "{code}");
        }
    }

    #[test]
    fn a_kind_is_stored_as_a_plain_number_until_the_table_is_ready() {
        let table = [0x0Cu16, INTEGER, DOUBLE];
        for kind in OBSERVED_KINDS {
            assert_eq!(code_for_kind(&table, false, kind), INTEGER, "{kind}");
        }
    }

    #[test]
    fn the_choice_is_discarded_without_a_word_when_it_is_not() {
        // Two different kinds, one answer, no complaint.
        let table = [0x0Cu16, INTEGER, DOUBLE];

        assert_eq!(
            code_for_kind(&table, false, 1),
            code_for_kind(&table, false, 2)
        );
    }

    #[test]
    fn once_it_is_ready_the_kind_chooses() {
        let table = [0x0Cu16, INTEGER, DOUBLE];

        assert_eq!(code_for_kind(&table, true, 1), INTEGER);
        assert_eq!(code_for_kind(&table, true, 2), DOUBLE);
    }

    #[test]
    fn the_negative_kind_reads_in_front_of_the_table() {
        // Used throughout the default style sheet, and nothing checks it.
        assert!(reads_outside_the_table(3, -4));
        assert!(OBSERVED_KINDS.contains(&-4));
    }

    #[test]
    fn a_kind_past_the_end_is_not_checked_either() {
        assert!(reads_outside_the_table(3, 3));
        assert!(reads_outside_the_table(3, 100));
        assert!(!reads_outside_the_table(3, 2));
    }

    #[test]
    fn an_empty_table_puts_every_kind_outside_it() {
        for kind in OBSERVED_KINDS {
            assert!(reads_outside_the_table(0, kind), "{kind}");
        }
    }

    #[test]
    fn the_two_setters_that_name_their_own_code_name_these() {
        assert_eq!(code_for_double(), DOUBLE);
        assert_eq!(code_for_text(), TEXT);
        assert_ne!(code_for_text(), NARROW_TEXT);
    }

    #[test]
    fn the_narrower_text_is_released_and_copied_but_never_stored() {
        assert!(emptied_before_release(NARROW_TEXT));
        assert!(owns_something(NARROW_TEXT));
        assert_ne!(code_for_text(), NARROW_TEXT);
        assert_ne!(code_for_double(), NARROW_TEXT);
    }

    #[test]
    fn releasing_a_text_empties_the_code_first() {
        assert!(emptied_before_release(TEXT));
        assert!(emptied_before_release(NARROW_TEXT));
    }

    #[test]
    fn nothing_else_needs_that_because_nothing_else_is_released_in_two_steps() {
        assert!(!emptied_before_release(INTEGER));
        assert!(!emptied_before_release(DOUBLE));
        assert!(!emptied_before_release(FOREIGN_TEXT));
    }

    #[test]
    fn a_cell_holding_a_number_copies_as_a_plain_move() {
        assert!(copies_as_plain_bytes(INTEGER));
        assert!(copies_as_plain_bytes(DOUBLE));
        assert!(copies_as_plain_bytes(EMPTY));
    }

    #[test]
    fn a_cell_holding_a_text_does_not() {
        assert!(!copies_as_plain_bytes(TEXT));
        assert!(!copies_as_plain_bytes(NARROW_TEXT));
    }

    #[test]
    fn which_route_a_copy_takes_is_decided_by_the_source_alone() {
        // The destination is released either way, so it cannot be what
        // chooses.
        assert!(copies_as_plain_bytes(INTEGER));
        assert!(!copies_as_plain_bytes(TEXT));
    }

    #[test]
    fn a_cell_copied_onto_itself_is_left_alone() {
        // Without the test the release would throw the value away first.
        assert!(!copy_does_anything(true));
        assert!(copy_does_anything(false));
    }

    #[test]
    fn copying_a_by_reference_text_leaves_two_cells_pointing_at_one_value() {
        assert!(copy_shares_the_value(BY_REFERENCE | TEXT));
        assert!(copy_shares_the_value(BY_REFERENCE | NARROW_TEXT));
    }

    #[test]
    fn copying_a_text_held_outright_does_not() {
        assert!(!copy_shares_the_value(TEXT));
        assert!(!copy_shares_the_value(NARROW_TEXT));
        assert!(!copy_shares_the_value(INTEGER));
    }

    #[test]
    fn a_by_reference_code_still_reads_as_owning_something() {
        // So the release runs on it, and it is the copy that has to know
        // better.
        assert!(owns_something(BY_REFERENCE | TEXT));
    }
}

#[cfg(test)]
mod setter_tests {
    use super::*;

    #[test]
    fn every_setter_stores_a_code_that_is_accounted_for() {
        for setter in SETTERS {
            assert!(
                setter.width == 1 || setter.width == 2 || setter.width == 4 || setter.width == 8,
                "{:#010X}",
                setter.routine
            );
            assert!(setter.code > 0, "{:#010X}", setter.routine);
        }
    }

    #[test]
    fn no_routine_is_listed_twice() {
        let mut routines: Vec<u32> = SETTERS.iter().map(|setter| setter.routine).collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }

    #[test]
    fn there_are_more_routines_than_codes() {
        let mut codes: Vec<u16> = SETTERS.iter().map(|setter| setter.code).collect();
        codes.sort_unstable();
        codes.dedup();

        assert_eq!(SETTERS.len(), 22);
        assert_eq!(codes.len(), 18);
    }

    #[test]
    fn four_codes_can_be_stored_by_two_routines_each() {
        assert_eq!(codes_with_two_setters(), [0x3, 0x5, 0x6, 0x7]);
    }

    #[test]
    fn three_of_those_pairs_store_the_code_and_the_value_in_opposite_orders() {
        // Which is visible from outside: the two orders leave a half-done cell
        // in opposite states.
        assert_eq!(disagree_about_order(), [0x5, 0x6, 0x7]);
    }

    #[test]
    fn the_fourth_pair_is_the_same_routine_twice() {
        let ways = setters_for(0x3);

        assert_eq!(ways.len(), 2);
        assert_eq!(ways[0].code, ways[1].code);
        assert_eq!(ways[0].width, ways[1].width);
        assert_eq!(ways[0].code_first, ways[1].code_first);
        assert_ne!(ways[0].routine, ways[1].routine);
    }

    #[test]
    fn the_value_goes_first_for_the_scaled_and_floating_types_and_only_those() {
        assert_eq!(stored_value_first(), [0x4, 0x5, 0x6, 0x7]);
    }

    #[test]
    fn the_single_precision_type_has_no_code_first_twin() {
        // So it is the one of the four that cannot be stored both ways.
        assert_eq!(setters_for(0x4).len(), 1);
        assert!(!codes_with_two_setters().contains(&0x4));
    }

    #[test]
    fn the_two_ways_of_storing_a_double_agree_on_everything_but_the_order() {
        let ways = setters_for(DOUBLE);

        assert_eq!(ways.len(), 2);
        assert_eq!(ways[0].width, ways[1].width);
        assert_ne!(ways[0].code_first, ways[1].code_first);
    }

    #[test]
    fn signedness_is_in_the_code_alone_and_not_in_how_much_is_written() {
        // A small signed number and a plain word are both two bytes.
        for (first, second) in [(0x2u16, 0x12u16), (0x10, 0x11), (0x14, 0x15)] {
            let a = setters_for(first);
            let b = setters_for(second);

            assert_eq!(a[0].width, b[0].width, "{first:#x} {second:#x}");
            assert_ne!(first, second);
        }
    }

    #[test]
    fn true_is_every_bit_set_and_not_one() {
        assert_eq!(boolean_as_stored(true), TRUE_AS_STORED);
        assert_eq!(boolean_as_stored(false), 0);
        assert_ne!(boolean_as_stored(true), 1);
    }

    #[test]
    fn so_a_boolean_read_as_a_number_is_minus_one() {
        // The wrap is the point: the same two bytes read as a signed number.
        assert_eq!(
            i16::from_le_bytes(boolean_as_stored(true).to_le_bytes()),
            -1
        );
    }

    #[test]
    fn a_boolean_is_as_wide_as_a_small_number_which_is_why_that_matters() {
        assert_eq!(setters_for(0xB)[0].width, setters_for(0x2)[0].width);
    }

    #[test]
    fn the_five_setters_that_take_a_reference_all_store_a_code_that_holds_one() {
        for setter in SETTERS.iter().filter(|setter| setter.takes_a_reference) {
            assert!(owns_something(setter.code), "{:#06X}", setter.code);
        }
        assert_eq!(
            SETTERS
                .iter()
                .filter(|setter| setter.takes_a_reference)
                .count(),
            5
        );
    }

    #[test]
    fn one_code_that_is_stored_is_among_the_ones_the_mask_over_reports() {
        // So the mask being a bit test is not merely hypothetical: a cell
        // holding a boolean is asked to release something every time it is
        // reused, and nothing happens.
        let over_reported = asked_to_release_nothing();
        let stored_and_flagged: Vec<u16> = SETTERS
            .iter()
            .filter(|setter| !setter.takes_a_reference)
            .map(|setter| setter.code)
            .filter(|code| over_reported.contains(code))
            .collect();

        assert_eq!(stored_and_flagged, [0xB]);
    }

    #[test]
    fn every_other_setter_that_takes_no_reference_stores_a_code_that_holds_nothing() {
        for setter in SETTERS
            .iter()
            .filter(|setter| !setter.takes_a_reference && setter.code != 0xB)
        {
            assert!(!owns_something(setter.code), "{:#06X}", setter.code);
        }
    }

    #[test]
    fn the_two_interface_codes_are_stored_identically() {
        let first = setters_for(INTERFACE_CODES[0]);
        let second = setters_for(INTERFACE_CODES[1]);

        assert_eq!(first[0].width, second[0].width);
        assert_eq!(first[0].code_first, second[0].code_first);
        assert_eq!(first[0].takes_a_reference, second[0].takes_a_reference);
        assert_ne!(INTERFACE_CODES[0], INTERFACE_CODES[1]);
    }

    #[test]
    fn every_setter_that_takes_a_reference_writes_eight_bytes_first() {
        // Blanked before the code is set, so a half-done cell holds nothing
        // rather than something stale.
        for setter in SETTERS.iter().filter(|setter| setter.takes_a_reference) {
            assert_eq!(setter.width, 8, "{:#010X}", setter.routine);
            assert!(setter.code_first, "{:#010X}", setter.routine);
        }
    }

    #[test]
    fn emptying_a_cell_holding_a_number_is_one_store() {
        assert!(empties_by_writing_the_code_alone(INTEGER));
        assert!(empties_by_writing_the_code_alone(DOUBLE));
        assert!(empties_by_writing_the_code_alone(EMPTY));
    }

    #[test]
    fn emptying_one_holding_a_text_is_not() {
        assert!(!empties_by_writing_the_code_alone(TEXT));
        assert!(!empties_by_writing_the_code_alone(NARROW_TEXT));
        for code in INTERFACE_CODES {
            assert!(!empties_by_writing_the_code_alone(code), "{code:#x}");
        }
    }

    #[test]
    fn the_two_setters_given_routines_of_their_own_are_in_the_table_too() {
        assert!(SETTERS.iter().any(|setter| setter.routine == 0x0046_8860));
        assert!(SETTERS.iter().any(|setter| setter.routine == 0x0046_8A10));
        assert_eq!(setters_for(TEXT).len(), 1);
    }
}
