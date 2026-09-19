//! Walking a dictionary's buckets.
//!
//! A dictionary keeps its entries in a flat run of buckets, most of which are
//! usually empty, so stepping through one is not a matter of moving to the next
//! position but of moving until a position has something in it. Everything
//! about how it reads from the outside follows from that: the order entries
//! come out in is bucket order rather than the order they went in, and one
//! step can cross a great many positions.

/// How wide one bucket is.
///
/// Part of Ghidra function `FUN_004e6d33` at `0x004E6D33`.
///
/// Twenty-four bytes, and all three of them are accounted for: the hash at the
/// front, the key eight bytes in, the value eight further. The hash comes
/// first because it is what has to be read to know whether the bucket is worth
/// looking at, and the value comes last because it is what is wanted least
/// often — a lookup reads the hash of every bucket it passes, the key of the
/// few that match, and the value of one.
pub const BUCKET_STRIDE: usize = 0x18;

/// Where in a bucket the key sits.
///
/// Part of Ghidra function `FUN_004e70e0` at `0x004E70E0`.
pub const BUCKET_KEY_OFFSET: usize = 0x8;

/// Where the value sits.
///
/// Part of Ghidra function `FUN_004e70e0` at `0x004E70E0`.
pub const BUCKET_VALUE_OFFSET: usize = 0x10;

/// Implements Ghidra function `FUN_004e70e0` at `0x004E70E0`.
///
/// The value the enumerator is standing on.
///
/// One read, reached by multiplying the position by the stride and adding the
/// value's own offset — and with no test of any kind, exactly as the list
/// enumerator's fetch has none. It is safe only while the step before it found
/// something, which is why the two have to stay a pair.
#[must_use]
pub fn value_at<Value: Copy>(values: &[Value], at: usize) -> Option<Value> {
    values.get(at).copied()
}

/// What an empty bucket's hash holds.
///
/// Part of Ghidra function `FUN_004e6d33` at `0x004E6D33`.
///
/// Minus one — not zero, because zero is a hash a real key might have. An
/// empty bucket is therefore recognisable without a flag of its own.
pub const EMPTY_BUCKET: i32 = -1;

/// What is masked off a hash before it is stored.
///
/// Part of Ghidra function `FUN_004e2420` at `0x004E2420`.
pub const STORED_HASH_MASK: i32 = 0x7FFF_FFFF;

/// Implements Ghidra function `FUN_004e2420` at `0x004E2420`.
///
/// Turns the hash of a key into one a bucket can hold.
///
/// The sign bit is masked off, one is added, and the sign bit is masked off
/// again. The masking is the whole point: a stored hash can never be negative,
/// so it can never be [`EMPTY_BUCKET`], so the dictionary needs no separate
/// flag to say whether a bucket is in use. That is why the empty marker is
/// minus one and not zero — zero survives this untouched and has to stay a
/// usable hash.
///
/// Adding one is not protection and cannot be: a hash whose lower bits are all
/// set comes out as zero anyway. What it does is move a hash of nothing off
/// nothing, which matters only to whatever chose to do it.
#[must_use]
pub const fn stored_hash(raw: i32) -> i32 {
    ((raw & STORED_HASH_MASK).wrapping_add(1)) & STORED_HASH_MASK
}

/// Whether one bucket holds an entry.
///
/// Part of Ghidra function `FUN_004e6d33` at `0x004E6D33`.
#[must_use]
pub const fn bucket_is_occupied(hash: i32) -> bool {
    hash != EMPTY_BUCKET
}

/// Implements Ghidra function `FUN_004e6d33` at `0x004E6D33`.
///
/// Steps a dictionary's enumerator to the next entry there is.
///
/// One step moves the position forward until a bucket has something in it, so
/// crossing a hundred empty buckets and crossing one look the same from
/// outside and cost differently. Entries come out in bucket order, which has
/// nothing to do with the order they were put in.
///
/// The position is raised before the bucket at it is looked at, so an
/// enumerator that has not been stepped sits before the first bucket rather
/// than on it — the same arrangement the list enumerator uses, and for the
/// same reason.
///
/// Returns where it stopped, or nothing when there is nothing further.
#[must_use]
pub fn step_to_next_entry(hashes: &[i32], from: isize) -> Option<usize> {
    let count = isize::try_from(hashes.len()).unwrap_or(isize::MAX);
    let mut at = from;
    while count - 1 > at {
        at += 1;
        let Ok(position) = usize::try_from(at) else {
            return None;
        };
        if hashes
            .get(position)
            .copied()
            .is_some_and(bucket_is_occupied)
        {
            return Some(position);
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use super::*;

    const OCCUPIED: i32 = 7;

    #[test]
    fn a_bucket_is_empty_only_when_its_hash_is_minus_one() {
        assert!(!bucket_is_occupied(EMPTY_BUCKET));
        assert!(bucket_is_occupied(0));
        assert!(bucket_is_occupied(OCCUPIED));
    }

    #[test]
    fn a_stored_hash_can_never_be_the_empty_marker() {
        for raw in [0, 1, -1, i32::MIN, i32::MAX, 0x7FFF_FFFE] {
            let stored = stored_hash(raw);

            assert!(stored >= 0, "{raw}");
            assert_ne!(stored, EMPTY_BUCKET, "{raw}");
            assert!(bucket_is_occupied(stored), "{raw}");
        }
    }

    #[test]
    fn a_hash_of_nothing_is_moved_off_nothing() {
        assert_eq!(stored_hash(0), 1);
    }

    #[test]
    fn adding_one_is_not_protection_and_zero_comes_out_anyway() {
        // A hash whose lower bits are all set wraps back to nothing.
        assert_eq!(stored_hash(i32::MAX), 0);
        assert_eq!(stored_hash(-1), 0);
    }

    #[test]
    fn zero_is_a_hash_a_real_key_might_have() {
        // Which is why the empty marker cannot be zero.
        assert_ne!(EMPTY_BUCKET, 0);
        assert!(bucket_is_occupied(0));
    }

    #[test]
    fn the_first_step_finds_the_first_entry_there_is() {
        let hashes = [EMPTY_BUCKET, EMPTY_BUCKET, OCCUPIED];

        assert_eq!(step_to_next_entry(&hashes, -1), Some(2));
    }

    #[test]
    fn one_step_crosses_as_many_empty_buckets_as_it_must() {
        let mut hashes = [EMPTY_BUCKET; 64];
        hashes[0] = OCCUPIED;
        hashes[63] = OCCUPIED;

        assert_eq!(step_to_next_entry(&hashes, -1), Some(0));
        assert_eq!(step_to_next_entry(&hashes, 0), Some(63));
    }

    #[test]
    fn the_last_bucket_is_reached() {
        let hashes = [EMPTY_BUCKET, OCCUPIED];

        assert_eq!(step_to_next_entry(&hashes, 0), Some(1));
    }

    #[test]
    fn a_step_past_the_last_entry_finds_nothing() {
        let hashes = [OCCUPIED, EMPTY_BUCKET];

        assert_eq!(step_to_next_entry(&hashes, 0), None);
    }

    #[test]
    fn a_dictionary_with_no_buckets_at_all_finds_nothing() {
        assert_eq!(step_to_next_entry(&[], -1), None);
    }

    #[test]
    fn a_dictionary_of_nothing_but_empty_buckets_finds_nothing() {
        assert_eq!(step_to_next_entry(&[EMPTY_BUCKET; 8], -1), None);
    }

    #[test]
    fn entries_come_out_in_bucket_order_rather_than_any_other() {
        let hashes = [OCCUPIED, EMPTY_BUCKET, OCCUPIED, OCCUPIED];
        let mut found = Vec::new();
        let mut at = -1;
        while let Some(position) = step_to_next_entry(&hashes, at) {
            found.push(position);
            at = isize::try_from(position).expect("a small test dictionary");
        }

        assert_eq!(found, [0, 2, 3]);
    }

    #[test]
    fn a_bucket_is_three_words_wide_and_all_three_are_accounted_for() {
        assert_eq!(BUCKET_STRIDE, 24);
        assert_eq!(BUCKET_KEY_OFFSET, 8);
        assert_eq!(BUCKET_VALUE_OFFSET, 16);
        assert_eq!(BUCKET_VALUE_OFFSET + 8, BUCKET_STRIDE);
    }

    #[test]
    fn the_value_is_read_without_a_test_of_any_kind() {
        // Safe only while the step before it found something.
        let values = [10, 20, 30];

        assert_eq!(value_at(&values, 1), Some(20));
        assert_eq!(value_at(&values, 3), None);
    }
}
