//! Two things the run time does that every class depends on.
//!
//! Neither has a counterpart in Rust — a value is dropped, and a slice knows
//! its own length — but both are worth writing down, because both explain
//! something about the shapes the rest of the recovered code is built on.

/// What is kept of a destructor's flag when it is passed upward.
///
/// Part of Ghidra function `FUN_004528e0` at `0x004528E0`.
///
/// The bottom two bits are cleared. They say what this level of the hierarchy
/// is to do — whether to release the instance as well as tear it down — and
/// that is a decision each level makes for itself, so it is not passed on.
/// Everything above the two bits is, which is how the rest of the flag reaches
/// the base class unchanged.
pub const DESTRUCTOR_FLAG_MASK: u32 = 0xFFFF_FFFC;

/// Implements part of Ghidra function `FUN_004528e0` at `0x004528E0`.
///
/// What a destructor hands its parent.
#[must_use]
pub const fn inherited_destructor_flag(flag: u32) -> u32 {
    flag & DESTRUCTOR_FLAG_MASK
}

/// Implements part of Ghidra function `FUN_004528e0` at `0x004528E0`.
///
/// Whether a destructor is also to give the instance back.
///
/// Read as a signed byte and tested against nothing, so the top bit of that
/// byte turns the test off however many of the other bits are set — which is
/// why the flag is a small positive number in practice and never a mask.
#[must_use]
pub const fn frees_instance(flag: u32) -> bool {
    let low = flag.to_le_bytes()[0];
    low > 0 && low < 0x80
}

/// How far before its first element a dynamic array keeps its length.
///
/// Part of Ghidra function `FUN_00452920` at `0x00452920`.
pub const DYNAMIC_ARRAY_LENGTH_OFFSET: isize = -8;

/// Implements Ghidra function `FUN_00452920` at `0x00452920`.
///
/// How long a dynamic array is.
///
/// The length sits in the eight bytes before the first element, so an array is
/// one pointer and asking its length is one read — but only once it exists.
/// An array that was never made is a null pointer with nothing in front of it,
/// which is why the test comes first and why nothing is the same as empty:
/// Delphi has no third state for a dynamic array, and neither does this.
#[must_use]
pub fn dynamic_array_length<T>(array: Option<&[T]>) -> usize {
    array.map_or(0, <[T]>::len)
}

/// Where a class that holds one plain reference keeps it.
///
/// Part of Ghidra function `FUN_004b9650` at `0x004B9650`.
///
/// The whole of that constructor is storing the argument here: allocate, call
/// the inherited constructor, store, hand the object back. 76 copies.
///
/// What separates it from [`HELD_INTERFACE_OFFSET`] is not the offset but what
/// is not done — no count is added. The class keeps a reference it does not
/// share ownership of, so something else decides when the referenced thing
/// goes, and this class must not outlive it. An interface holder needs no such
/// arrangement, which is why it can afford to be told nothing more.
pub const HELD_REFERENCE_OFFSET: usize = 0x8;

/// Where a class that holds one interface keeps it.
///
/// Part of Ghidra function `FUN_0051fd70` at `0x0051FD70`.
///
/// The whole of that constructor is taking the reference: allocate, store the
/// interface at this offset with a count added to it, and hand the object
/// back. A class whose construction is one line like this is a holder — it
/// exists to keep something alive and give it a place in the hierarchy, and
/// whatever it does beyond that it does through what it holds.
pub const HELD_INTERFACE_OFFSET: usize = 0x20;

/// Implements Ghidra function `FUN_0051fd70` at `0x0051FD70`.
///
/// What such a constructor does to the reference it is given.
///
/// It adds a count. The caller keeps its own reference and the holder has one
/// of its own, so neither has to know about the other — which is the point of
/// counting them rather than owning them outright, and why nothing here needs
/// to say who destroys it.
#[must_use]
pub const fn constructor_adds_a_reference() -> bool {
    true
}

/// Which of a held interface's methods a holder forwards.
///
/// Part of Ghidra function `FUN_0051fe10` at `0x0051FE10`.
///
/// The first slot past the three every interface begins with, so the holder
/// forwards the held thing's own first method and nothing else. Together with
/// the constructor at `0x0051FD70` that is the whole of such a class: take a
/// reference, pass one call through to it.
pub const HOLDER_FORWARDED_SLOT: usize = 0x18;

/// Where a second kind of holder keeps what it forwards to.
///
/// Part of Ghidra function `FUN_004f75a0` at `0x004F75A0`.
///
/// The same forwarding of the same slot, in 49 copies, but reaching something
/// held further in rather than at `0x20` — so the two holders differ in what
/// else they keep in front of it, not in what they do.
pub const SECOND_HOLDER_OFFSET: usize = 0x38;

/// Implements Ghidra function `FUN_004ddff0` at `0x004DDFF0`.
///
/// Makes room for one more element, and only when there is none.
///
/// The count is compared against the array's own length and the array is
/// grown by exactly one when the two are equal. By one, every time: filling a
/// list of a thousand reallocates it a thousand times, because nothing here
/// asks for more than the next element needs.
///
/// The test is for equality rather than for the count having reached or
/// passed the length, so a count somehow already beyond the end does not grow
/// the array at all — the one case this guards against is the one it lets
/// through.
///
/// Returns the length to grow to, or nothing when there is already room.
#[must_use]
pub const fn grow_for_append(length: usize, count: usize) -> Option<usize> {
    if count == length {
        Some(count + 1)
    } else {
        None
    }
}

/// Which of its own methods a generic wrapper hands the value on to.
///
/// Part of Ghidra function `FUN_004dd0e0` at `0x004DD0E0`.
///
/// The bridge between a generic interface and a typed one, in 82 copies: the
/// wrapper is handed a pointer to the value because the generic side cannot
/// know how wide it is, and passes the value itself to the method at this
/// slot, which can. One line, and the whole of what a generic instantiation
/// costs at the boundary.
pub const GENERIC_FORWARDED_SLOT: usize = 0x10;

/// Where a generic wrapper keeps the thing it forwards to, and which of its
/// methods takes two values.
///
/// Part of Ghidra function `FUN_004dd170` at `0x004DD170`.
///
/// The two-value bridge, in 78 copies: the comparer or notifier is held at
/// `0x38` rather than being the wrapper itself, and both arguments arrive as
/// pointers and are passed on as values. That the held thing sits at an offset
/// while the one-value bridge forwards to the wrapper's own slot is the
/// difference between wrapping something and being something.
pub const GENERIC_PAIR_HOLDER_OFFSET: usize = 0x38;

/// Which of the held thing's methods a two-value bridge calls.
///
/// Part of Ghidra function `FUN_004dd170` at `0x004DD170`.
pub const GENERIC_PAIR_SLOT: usize = 0x18;

/// The class of exception the one-argument raiser builds.
///
/// Part of Ghidra function `FUN_004ae910` at `0x004AE910`.
pub const FORMATTED_EXCEPTION_CLASS: u32 = 0x0043_47C0;

/// How many values it formats into the message.
///
/// Part of Ghidra function `FUN_004ae910` at `0x004AE910`.
///
/// Exactly one, built as a single-element array on the stack with its type tag
/// beside it. A raiser that took a list would need the caller to build one;
/// taking exactly one is what lets the whole thing be three instructions.
pub const FORMATTED_EXCEPTION_ARGUMENTS: usize = 1;

/// Implements Ghidra function `FUN_004ae910` at `0x004AE910`.
///
/// Whether a raised report names the caller rather than the raiser.
///
/// It does, and that is the point. The raise is handed the **caller's** return
/// address rather than its own, so the report points at whoever asked for it —
/// which is what lets one raiser serve 128 places without every report from
/// all of them looking identical.
#[must_use]
pub const fn raises_at_the_callers_address() -> bool {
    true
}

/// Implements Ghidra function `FUN_00b3de60` at `0x00B3DE60`.
///
/// Turns a word round by so many places, bringing the top back to the bottom.
///
/// Both shift counts are masked to five bits, which is what the instruction
/// does anyway — so asking for thirty-two places is asking for none, and
/// asking for thirty-three is asking for one. That is the behaviour, not a
/// guard against it: nothing here refuses a count it cannot honour.
#[must_use]
pub const fn rotate_left(value: u32, places: u8) -> u32 {
    let left = places & 0x1F;
    let right = (32u8.wrapping_sub(places)) & 0x1F;
    (value << left) | (value >> right)
}

/// How far before a class's table its parent is recorded.
///
/// Part of Ghidra function `FUN_00411580` at `0x00411580`.
///
/// The slot holds a pointer to a pointer to the parent's table, so reaching the
/// parent is two reads rather than one, and a class with nothing above it holds
/// nothing there at all.
pub const CLASS_PARENT_OFFSET: isize = -0x78;

/// Implements Ghidra function `FUN_00411580` at `0x00411580`.
///
/// Whether one class is another, or descends from it.
///
/// The parent chain is walked from the class upward, comparing at every step,
/// and the walk stops at the class that records no parent. There is no depth
/// limit and no cache: a test against a distant ancestor costs one read per
/// generation, which is why the cascades that use it are written worst case
/// last.
///
/// `parent_of` stands for the read at [`CLASS_PARENT_OFFSET`], returning
/// nothing for a class with nothing above it.
#[must_use]
pub fn inherits_from(class: u32, target: u32, parent_of: impl Fn(u32) -> Option<u32>) -> bool {
    let mut walking = class;
    loop {
        if walking == target {
            return true;
        }
        match parent_of(walking) {
            Some(parent) => walking = parent,
            None => return false,
        }
    }
}

/// Implements Ghidra function `FUN_004113d0` at `0x004113D0`.
///
/// Whether an object is of a class: the `is` operator.
///
/// Nothing is of no class, so an absent object answers no before any table is
/// read — which is what lets the operator be used on a reference that may not
/// have been set, and is why the 2,624 places that ask this question do not
/// each guard it themselves.
#[must_use]
pub fn is_of_class(
    object: Option<u32>,
    target: u32,
    class_of: impl Fn(u32) -> u32,
    parent_of: impl Fn(u32) -> Option<u32>,
) -> bool {
    object.is_some_and(|at| inherits_from(class_of(at), target, parent_of))
}

#[cfg(test)]
mod tests {
    use super::*;

    /// A small hierarchy: 3 descends from 2, which descends from 1.
    fn parent_of(class: u32) -> Option<u32> {
        match class {
            3 => Some(2),
            2 => Some(1),
            _ => None,
        }
    }

    #[test]
    fn a_class_is_itself() {
        assert!(inherits_from(1, 1, parent_of));
        assert!(inherits_from(3, 3, parent_of));
    }

    #[test]
    fn a_class_is_everything_it_descends_from() {
        assert!(inherits_from(3, 2, parent_of));
        assert!(inherits_from(3, 1, parent_of));
        assert!(inherits_from(2, 1, parent_of));
    }

    #[test]
    fn but_not_the_other_way_round() {
        assert!(!inherits_from(1, 3, parent_of));
        assert!(!inherits_from(2, 3, parent_of));
    }

    #[test]
    fn a_class_outside_the_chain_is_nothing_to_it() {
        assert!(!inherits_from(3, 99, parent_of));
    }

    #[test]
    fn the_walk_stops_at_a_class_with_no_parent() {
        // No depth limit is needed because the chain ends; a class that records
        // no parent is the top of it.
        assert!(!inherits_from(1, 0, parent_of));
    }

    #[test]
    fn nothing_is_of_no_class() {
        // Which is what lets the operator be used on a reference that may not
        // have been set.
        assert!(!is_of_class(None, 1, |at| at, parent_of));
    }

    #[test]
    fn an_object_is_of_its_own_class_and_of_its_ancestors() {
        let class_of = |at: u32| at + 1;

        assert!(is_of_class(Some(2), 3, class_of, parent_of));
        assert!(is_of_class(Some(2), 1, class_of, parent_of));
        assert!(!is_of_class(Some(2), 99, class_of, parent_of));
    }

    #[test]
    fn the_parent_slot_sits_before_the_table_rather_than_in_it() {
        // Which is why reaching a parent is a read behind the class pointer
        // rather than an index into anything it points at.
        let table = 0x1000_isize;
        let slot = table + CLASS_PARENT_OFFSET;

        assert!(slot < table);
        assert_eq!(table - slot, 0x78);
    }

    #[test]
    fn the_bottom_two_bits_are_kept_from_the_parent() {
        assert_eq!(inherited_destructor_flag(0b1111), 0b1100);
        assert_eq!(inherited_destructor_flag(1), 0);
        assert_eq!(inherited_destructor_flag(2), 0);
        assert_eq!(inherited_destructor_flag(3), 0);
    }

    #[test]
    fn everything_above_them_reaches_the_parent_unchanged() {
        assert_eq!(inherited_destructor_flag(0x1234_5678), 0x1234_5678);
        assert_eq!(inherited_destructor_flag(0x1234_5679), 0x1234_5678);
    }

    #[test]
    fn a_flag_of_nothing_stays_nothing() {
        assert_eq!(inherited_destructor_flag(0), 0);
    }

    #[test]
    fn a_small_positive_flag_frees_the_instance() {
        assert!(frees_instance(1));
        assert!(frees_instance(2));
        assert!(!frees_instance(0));
    }

    #[test]
    fn the_test_is_signed_so_a_high_byte_turns_it_off() {
        // 0x80 read as a signed byte is negative, and so is not positive.
        assert!(!frees_instance(0x80));
        assert!(!frees_instance(0xFF));
    }

    #[test]
    fn only_the_low_byte_of_the_flag_is_looked_at() {
        assert_eq!(frees_instance(0x0100), frees_instance(0));
        assert_eq!(frees_instance(0x0101), frees_instance(1));
    }

    #[test]
    fn an_array_that_exists_is_as_long_as_it_is() {
        assert_eq!(dynamic_array_length(Some(&[1, 2, 3][..])), 3);
    }

    #[test]
    fn an_array_that_was_never_made_is_the_same_as_an_empty_one() {
        let never: Option<&[u8]> = None;
        let empty: Option<&[u8]> = Some(&[]);

        assert_eq!(dynamic_array_length(never), dynamic_array_length(empty));
        assert_eq!(dynamic_array_length(never), 0);
    }

    #[test]
    fn a_holder_keeps_its_one_interface_early_in_the_object() {
        assert_eq!(HELD_INTERFACE_OFFSET, 0x20);
        assert!(constructor_adds_a_reference());
    }

    #[test]
    fn the_raiser_formats_exactly_one_value_and_blames_its_caller() {
        assert_eq!(FORMATTED_EXCEPTION_ARGUMENTS, 1);
        assert_eq!(FORMATTED_EXCEPTION_CLASS, 0x0043_47C0);
        assert!(raises_at_the_callers_address());
    }

    #[test]
    fn a_plain_reference_is_kept_at_the_very_front_and_not_counted() {
        assert_eq!(HELD_REFERENCE_OFFSET, 0x8);
        assert_eq!(HELD_INTERFACE_OFFSET - HELD_REFERENCE_OFFSET, 0x18);
    }

    #[test]
    fn a_full_array_is_grown_by_exactly_one() {
        assert_eq!(grow_for_append(4, 4), Some(5));
        assert_eq!(grow_for_append(0, 0), Some(1));
    }

    #[test]
    fn an_array_with_room_left_is_not_grown() {
        assert_eq!(grow_for_append(8, 4), None);
    }

    #[test]
    fn a_count_already_past_the_end_is_not_grown_either() {
        // The test is for equality, so the one case worth guarding against
        // is the one it lets through.
        assert_eq!(grow_for_append(4, 9), None);
    }

    #[test]
    fn filling_a_list_reallocates_it_once_per_element() {
        let mut length = 0;
        let mut grows = 0;
        for count in 0..1000 {
            if let Some(grown) = grow_for_append(length, count) {
                length = grown;
                grows += 1;
            }
        }

        assert_eq!(grows, 1000);
    }

    #[test]
    fn the_second_holder_keeps_what_it_forwards_to_further_in() {
        assert_eq!(SECOND_HOLDER_OFFSET, 0x38);
        assert_eq!(SECOND_HOLDER_OFFSET, GENERIC_PAIR_HOLDER_OFFSET);
    }

    #[test]
    fn the_two_value_bridge_forwards_to_something_it_holds() {
        assert_eq!(GENERIC_PAIR_HOLDER_OFFSET, 0x38);
        assert_eq!(GENERIC_PAIR_SLOT, 0x18);
    }

    #[test]
    fn a_generic_wrapper_hands_the_value_on_at_its_own_first_slot() {
        assert_eq!(GENERIC_FORWARDED_SLOT, 0x10);
        assert_ne!(GENERIC_FORWARDED_SLOT, HOLDER_FORWARDED_SLOT);
    }

    #[test]
    fn a_holder_forwards_the_first_method_past_the_three_every_interface_has() {
        assert_eq!(HOLDER_FORWARDED_SLOT, 0x18);
    }

    #[test]
    fn turning_a_word_round_brings_the_top_back_to_the_bottom() {
        assert_eq!(rotate_left(0x8000_0001, 1), 0x0000_0003);
        assert_eq!(rotate_left(0x1234_5678, 8), 0x3456_7812);
    }

    #[test]
    fn asking_for_no_places_leaves_the_word_alone() {
        assert_eq!(rotate_left(0x1234_5678, 0), 0x1234_5678);
    }

    #[test]
    fn a_count_of_thirty_two_or_more_wraps_rather_than_being_refused() {
        assert_eq!(rotate_left(0x1234_5678, 32), rotate_left(0x1234_5678, 0));
        assert_eq!(rotate_left(0x1234_5678, 33), rotate_left(0x1234_5678, 1));
    }

    #[test]
    fn turning_all_the_way_round_returns_what_it_started_with() {
        let mut value = 0xDEAD_BEEF;
        for _ in 0..32 {
            value = rotate_left(value, 1);
        }

        assert_eq!(value, 0xDEAD_BEEF);
    }

    #[test]
    fn the_length_sits_one_word_before_the_first_element() {
        assert_eq!(DYNAMIC_ARRAY_LENGTH_OFFSET, -8);
    }
}
