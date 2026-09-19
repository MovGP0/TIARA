//! Finding where something belongs in a sorted run.
//!
//! The search answers two things at once: whether the thing is there, and
//! where it would go if it were not. That is what lets one routine serve both
//! looking something up and keeping a list in order — and it is why the
//! answer is a position even when the answer is no.

use core::cmp::Ordering;

/// Why a search would not look.
///
/// Part of Ghidra function `FUN_004f6d50` at `0x004F6D50`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SearchRefused {
    /// The run began before the start of anything.
    NegativeStart,
    /// It was asked to look at fewer than no things.
    NegativeCount,
    /// It began past the last thing there is, and had things to look at.
    StartPastEnd,
    /// It ended past the last thing there is.
    EndPastEnd,
    /// The run is longer than what was given to look in.
    ///
    /// The recovered code does not test this: it is handed a bare pointer and
    /// an end index, and trusts that the one covers the other. This port is
    /// handed a slice, which knows, so a run that reaches past it is refused
    /// here rather than read.
    BeyondWhatWasGiven,
}

impl core::fmt::Display for SearchRefused {
    fn fmt(&self, formatter: &mut core::fmt::Formatter<'_>) -> core::fmt::Result {
        formatter.write_str(match self {
            Self::NegativeStart => "the run starts before the beginning",
            Self::NegativeCount => "the run is shorter than nothing",
            Self::StartPastEnd => "the run starts past the end",
            Self::EndPastEnd => "the run ends past the end",
            Self::BeyondWhatWasGiven => "the run reaches past what was given",
        })
    }
}

impl std::error::Error for SearchRefused {}

/// Implements part of Ghidra function `FUN_004f6d50` at `0x004F6D50`.
///
/// Whether a run is one that may be looked at.
///
/// Four tests, and the order of them matters in one place: a run that starts
/// past the end is refused only when it has something in it, so an empty run
/// starting just past the last thing is allowed — which is exactly the run a
/// caller describes when it means "at the end". An empty run starting further
/// past than that is refused by the fourth test instead.
///
/// # Errors
///
/// Returns which of the four tests the run failed.
pub const fn check_range(limit: i32, start: i32, count: i32) -> Result<(), SearchRefused> {
    if start < 0 {
        return Err(SearchRefused::NegativeStart);
    }
    if count < 0 {
        return Err(SearchRefused::NegativeCount);
    }
    if limit < start && count > 0 {
        return Err(SearchRefused::StartPastEnd);
    }
    if limit < start + count - 1 {
        return Err(SearchRefused::EndPastEnd);
    }
    Ok(())
}

/// Implements Ghidra function `FUN_004f6d50` at `0x004F6D50`, and
/// `FUN_00502cd0` at `0x00502CD0` in 31 further copies of its own.
///
/// Finds where something belongs in a sorted run, and whether it is there.
///
/// The two are the same algorithm with the same range check, compiled against
/// different comparers — which is why they are separate routines rather than
/// one shared between the two.
///
/// The search does not stop when it finds a match. Finding one narrows the
/// run upward — the same step a miss above the key would take — so it carries
/// on to the leftmost thing that matches and answers that position. A run with
/// the same thing in it several times therefore always answers the first of
/// them, and inserting at the answer keeps equal things in the order they were
/// added.
///
/// The midpoint is reached by halving the distance between the ends rather
/// than by averaging them, so it cannot run past what an index can hold
/// however long the run is.
///
/// An empty run is answered without looking: the position is where the run
/// begins, and the answer is no.
///
/// Returns where the thing belongs, and whether it is already there.
///
/// # Errors
///
/// Returns [`SearchRefused`] for a run that may not be looked at.
pub fn search_sorted_range<T, Compare>(
    items: &[T],
    limit: i32,
    start: i32,
    count: i32,
    compare: Compare,
) -> Result<(i32, bool), SearchRefused>
where
    Compare: Fn(&T) -> Ordering,
{
    check_range(limit, start, count)?;
    if usize::try_from(limit.max(0)).unwrap_or(usize::MAX) >= items.len() && count > 0 {
        return Err(SearchRefused::BeyondWhatWasGiven);
    }

    if count == 0 {
        return Ok((start, false));
    }

    let mut low = start;
    let mut high = start + count - 1;
    let mut found = false;
    while low <= high {
        let middle = low + (high - low) / 2;
        let Some(item) = usize::try_from(middle).ok().and_then(|at| items.get(at)) else {
            return Err(SearchRefused::BeyondWhatWasGiven);
        };
        match compare(item) {
            Ordering::Less => low = middle + 1,
            Ordering::Equal => {
                found = true;
                high = middle - 1;
            }
            Ordering::Greater => high = middle - 1,
        }
    }
    Ok((low, found))
}

#[cfg(test)]
mod tests {
    use super::*;

    fn against(key: i32) -> impl Fn(&i32) -> Ordering {
        move |item: &i32| item.cmp(&key)
    }

    fn search(items: &[i32], key: i32) -> Result<(i32, bool), SearchRefused> {
        let limit = i32::try_from(items.len()).expect("a small test list") - 1;
        let count = i32::try_from(items.len()).expect("a small test list");
        search_sorted_range(items, limit, 0, count, against(key))
    }

    #[test]
    fn something_that_is_there_is_found_where_it_is() {
        let items = [1, 3, 5, 7, 9];

        assert_eq!(search(&items, 5), Ok((2, true)));
        assert_eq!(search(&items, 1), Ok((0, true)));
        assert_eq!(search(&items, 9), Ok((4, true)));
    }

    #[test]
    fn something_that_is_not_there_is_answered_where_it_would_go() {
        let items = [1, 3, 5, 7, 9];

        assert_eq!(search(&items, 4), Ok((2, false)));
        assert_eq!(search(&items, 0), Ok((0, false)));
        assert_eq!(search(&items, 10), Ok((5, false)));
    }

    #[test]
    fn the_first_of_several_equal_things_is_the_one_answered() {
        // The search narrows past a match rather than stopping at it.
        let items = [1, 5, 5, 5, 9];

        assert_eq!(search(&items, 5), Ok((1, true)));
    }

    #[test]
    fn inserting_at_the_answer_keeps_equal_things_in_the_order_they_came() {
        let items = [1, 5, 5, 9];
        let (at, _) = search(&items, 5).expect("a valid run");

        // A new five goes in front of the ones already there, so the run
        // stays sorted; what it does not do is go last.
        assert_eq!(at, 1);
    }

    #[test]
    fn an_empty_run_is_answered_without_looking() {
        let items = [1, 3, 5];

        assert_eq!(
            search_sorted_range(&items, 2, 1, 0, against(99)),
            Ok((1, false))
        );
    }

    #[test]
    fn a_run_may_be_a_part_of_what_it_is_given() {
        let items = [1, 3, 5, 7, 9];

        // Looking only at the middle three.
        assert_eq!(
            search_sorted_range(&items, 4, 1, 3, against(7)),
            Ok((3, true))
        );
        assert_eq!(
            search_sorted_range(&items, 4, 1, 3, against(9)),
            Ok((4, false))
        );
    }

    #[test]
    fn a_run_of_one_answers_whether_that_one_is_it() {
        let items = [5];

        assert_eq!(
            search_sorted_range(&items, 0, 0, 1, against(5)),
            Ok((0, true))
        );
        assert_eq!(
            search_sorted_range(&items, 0, 0, 1, against(6)),
            Ok((1, false))
        );
    }

    #[test]
    fn a_run_starting_before_the_beginning_is_refused() {
        assert_eq!(check_range(4, -1, 2), Err(SearchRefused::NegativeStart));
    }

    #[test]
    fn a_run_shorter_than_nothing_is_refused() {
        assert_eq!(check_range(4, 0, -1), Err(SearchRefused::NegativeCount));
    }

    #[test]
    fn a_run_starting_past_the_end_is_refused_only_when_it_holds_anything() {
        assert_eq!(check_range(4, 9, 1), Err(SearchRefused::StartPastEnd));
        // An empty run just past the last thing is what "at the end" means.
        assert_eq!(check_range(4, 5, 0), Ok(()));
    }

    #[test]
    fn an_empty_run_further_past_the_end_is_refused_by_the_other_test() {
        assert_eq!(check_range(4, 7, 0), Err(SearchRefused::EndPastEnd));
    }

    #[test]
    fn a_run_ending_past_the_end_is_refused() {
        assert_eq!(check_range(4, 3, 5), Err(SearchRefused::EndPastEnd));
    }

    #[test]
    fn a_whole_run_is_allowed_to_reach_exactly_to_the_end() {
        assert_eq!(check_range(4, 0, 5), Ok(()));
    }

    #[test]
    fn a_run_reaching_past_what_was_given_is_refused_here_but_not_there() {
        // The recovered code trusts the caller; a slice knows better.
        let items = [1, 3, 5];

        assert_eq!(
            search_sorted_range(&items, 9, 0, 10, against(5)),
            Err(SearchRefused::BeyondWhatWasGiven)
        );
    }

    #[test]
    fn the_midpoint_is_reached_by_halving_the_distance_not_by_averaging() {
        // Which is why a run at the top of what an index can hold is safe.
        let items: Vec<i32> = (0..64).collect();

        assert_eq!(search(&items, 63), Ok((63, true)));
    }
}
