//! A named set of curves, kept in one list and sorted out by kind.
//!
//! Curves of different kinds live together in a single list rather than in a
//! list each, and are told apart by a number every curve carries. Everything
//! here follows from that: a count means walking the whole list, and changing
//! how many curves of one kind there are means finding where that kind's run
//! of the list begins and ends before anything can be added or taken away.

/// The scale a new group starts with.
///
/// Part of Ghidra function `FUN_012e53b0` at `0x012E53B0`.
pub const DEFAULT_SCALE: f64 = 1.0;

/// The capacity a new group starts with.
///
/// Part of Ghidra function `FUN_012e53b0` at `0x012E53B0`.
pub const DEFAULT_CAPACITY: u32 = 0x400;

/// The kind a curve is given when nothing has said which kind it is.
///
/// Part of Ghidra function `FUN_012e53b0` at `0x012E53B0`.
///
/// The constructor gives every curve it makes this, and no real kind is ever
/// negative — so a freshly built group's curves belong to no kind at all and
/// are invisible to every count. See [`CurveGroup::new`].
pub const UNASSIGNED_KIND: i32 = -1;

/// The two limits a new curve is made with.
///
/// Part of Ghidra function `FUN_012e53b0` at `0x012E53B0`.
///
/// Passed to every curve the group makes, by the constructor and by
/// [`CurveGroup::set_curve_count`] alike.
pub const NEW_CURVE_LIMITS: (f64, f64) = (1.0, 5.0);

/// One curve of a group.
///
/// Part of Ghidra function `FUN_012e5c80` at `0x012E5C80`.
pub trait Curve {
    /// Which kind of curve this is.
    ///
    /// Part of Ghidra function `FUN_012e52e0` at `0x012E52E0`: the number at
    /// offset `0x10` of a curve.
    fn kind(&self) -> i32;

    /// The first of a curve's two flags, at offset `8`.
    ///
    /// Neither flag is named in anything that survives. What is known is how
    /// they are used: a curve counts towards the group's total only when both
    /// are set, which is what [`Curve::counted`] says.
    fn first_flag(&self) -> bool;

    /// The second of a curve's two flags, at offset `0x0A`.
    fn second_flag(&self) -> bool;

    /// Whether this curve counts towards the group's total.
    ///
    /// Part of Ghidra function `FUN_012e5c80` at `0x012E5C80`.
    fn counted(&self) -> bool {
        self.first_flag() && self.second_flag()
    }
}

/// A named set of curves.
///
/// Part of Ghidra function `FUN_012e53b0` at `0x012E53B0`.
///
/// The destructor, Ghidra function `FUN_012e5620` at `0x012E5620`, releases
/// the name and frees the list — but it does not walk the list destroying the
/// curves first, the way the importer's clear at `0x012DDEC0` does with what
/// it owns. Every curve a group ever held is leaked when the group goes. In
/// Rust the list owns them and dropping the group takes them with it, so the
/// leak is not reproduced; it is recorded because it is a real cost in the
/// original and would look like an oversight here rather than a difference.
#[derive(Debug)]
pub struct CurveGroup<C> {
    name: String,
    kind: u32,
    scale: f64,
    capacity: u32,
    curves: Vec<C>,
}

impl<C: Curve> CurveGroup<C> {
    /// Implements Ghidra function `FUN_012e53b0` at `0x012E53B0`.
    ///
    /// Makes a group with a name, a kind of its own, and some curves in it.
    ///
    /// The curves are made straight away rather than on demand, and every one
    /// of them is given [`UNASSIGNED_KIND`] — so they exist, they take up room
    /// in the list, and no count of any kind can see them. A caller that then
    /// asks for some number of curves of a real kind gets that many new ones
    /// on top, with the original ones left stranded in the list.
    pub fn new<Make: FnMut(i32) -> C>(
        name: &str,
        kind: u32,
        curve_count: usize,
        mut make_curve: Make,
    ) -> Self {
        Self {
            name: name.to_owned(),
            kind,
            scale: DEFAULT_SCALE,
            capacity: DEFAULT_CAPACITY,
            curves: (0..curve_count)
                .map(|_| make_curve(UNASSIGNED_KIND))
                .collect(),
        }
    }

    /// Implements Ghidra function `FUN_012e5690` at `0x012E5690`.
    ///
    /// Whether this is the group with one name.
    ///
    /// Exact and case-sensitive, so two groups differing only in case are two
    /// groups.
    #[must_use]
    pub fn is_named(&self, name: &str) -> bool {
        self.name == name
    }

    /// This group's name.
    #[must_use]
    pub fn name(&self) -> &str {
        &self.name
    }

    /// The kind of group this is, which is not a curve's kind.
    #[must_use]
    pub const fn kind(&self) -> u32 {
        self.kind
    }

    /// The scale the group was made with.
    #[must_use]
    pub const fn scale(&self) -> f64 {
        self.scale
    }

    /// The capacity the group was made with.
    #[must_use]
    pub const fn capacity(&self) -> u32 {
        self.capacity
    }

    /// Every curve the group holds, of every kind.
    #[must_use]
    pub fn curves(&self) -> &[C] {
        &self.curves
    }

    /// Implements Ghidra function `FUN_012e5a50` at `0x012E5A50`.
    ///
    /// How many curves of one kind the group holds.
    ///
    /// The whole list is walked, because curves of a kind are not required to
    /// be together — only the operations that add and remove them keep them
    /// that way.
    #[must_use]
    pub fn count_of_kind(&self, kind: i32) -> usize {
        self.curves
            .iter()
            .filter(|curve| curve.kind() == kind)
            .count()
    }

    /// Implements Ghidra function `FUN_012e5c80` at `0x012E5C80`.
    ///
    /// How many curves count towards the group's total.
    #[must_use]
    pub fn counted_curves(&self) -> usize {
        self.curves.iter().filter(|curve| curve.counted()).count()
    }

    /// Implements Ghidra function `FUN_012e5af0` at `0x012E5AF0`.
    ///
    /// Where one kind's run of the list begins and ends.
    ///
    /// The beginning is the first curve of that kind and the end is that plus
    /// however many there are, which is only a run at all because the adding
    /// and removing keep it one. A kind with no curves answers a start of
    /// zero and an empty range — the same as an empty list — so the start
    /// means nothing on its own and has to be read together with the length.
    ///
    /// The recovered code guards against an end of minus one, which cannot
    /// happen: the start is only ever set from a list index and the count is
    /// never negative.
    #[must_use]
    pub fn range_of_kind(&self, kind: i32) -> core::ops::Range<usize> {
        if self.curves.is_empty() {
            return 0..0;
        }
        let first = self
            .curves
            .iter()
            .position(|curve| curve.kind() == kind)
            .unwrap_or(0);
        first..first + self.count_of_kind(kind)
    }

    /// Implements Ghidra function `FUN_012e58c0` at `0x012E58C0`.
    ///
    /// Makes the group hold exactly so many curves of one kind.
    ///
    /// Curves are added directly after that kind's existing ones and removed
    /// from the same end, which is what keeps each kind's curves together in
    /// a list they all share. A kind that has none yet begins at the front of
    /// the list, so the first curves of a new kind go before every other
    /// kind's rather than after.
    ///
    /// Asking for the number already held does nothing at all — not even the
    /// work of finding the range.
    pub fn set_curve_count<Make: FnMut(i32) -> C>(
        &mut self,
        kind: i32,
        wanted: usize,
        mut make_curve: Make,
    ) {
        let held = self.count_of_kind(kind);
        if held == wanted {
            return;
        }

        let range = self.range_of_kind(kind);
        if held > wanted {
            for at in (range.end - (held - wanted)..range.end).rev() {
                self.curves.remove(at);
            }
        } else {
            for at in range.end..range.end + (wanted - held) {
                self.curves.insert(at, make_curve(kind));
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    struct TestCurve {
        kind: i32,
        first: bool,
        second: bool,
    }

    impl TestCurve {
        const fn of(kind: i32) -> Self {
            Self {
                kind,
                first: true,
                second: true,
            }
        }
    }

    impl Curve for TestCurve {
        fn kind(&self) -> i32 {
            self.kind
        }

        fn first_flag(&self) -> bool {
            self.first
        }

        fn second_flag(&self) -> bool {
            self.second
        }
    }

    fn group(curve_count: usize) -> CurveGroup<TestCurve> {
        CurveGroup::new("Transient", 2, curve_count, TestCurve::of)
    }

    fn kinds(group: &CurveGroup<TestCurve>) -> Vec<i32> {
        group.curves().iter().map(Curve::kind).collect()
    }

    #[test]
    fn a_new_group_keeps_its_name_and_kind() {
        let made = group(0);

        assert!(made.is_named("Transient"));
        assert_eq!(made.kind(), 2);
    }

    #[test]
    fn the_name_is_matched_exactly() {
        let made = group(0);

        assert!(!made.is_named("transient"));
        assert!(!made.is_named("Transien"));
    }

    #[test]
    fn a_new_group_starts_with_the_recovered_scale_and_capacity() {
        let made = group(0);

        assert!((made.scale() - 1.0).abs() < f64::EPSILON);
        assert_eq!(made.capacity(), 1024);
    }

    #[test]
    fn its_curves_are_made_at_once_and_belong_to_no_kind() {
        let made = group(3);

        assert_eq!(made.curves().len(), 3);
        assert_eq!(kinds(&made), [UNASSIGNED_KIND; 3]);
    }

    #[test]
    fn no_count_of_any_real_kind_can_see_them() {
        let made = group(3);

        for kind in 0..4 {
            assert_eq!(made.count_of_kind(kind), 0, "{kind}");
        }
    }

    #[test]
    fn asking_for_curves_of_a_real_kind_strands_the_ones_it_started_with() {
        let mut made = group(2);
        made.set_curve_count(1, 2, TestCurve::of);

        assert_eq!(made.curves().len(), 4);
        assert_eq!(made.count_of_kind(1), 2);
        assert_eq!(made.count_of_kind(UNASSIGNED_KIND), 2);
    }

    #[test]
    fn curves_of_a_kind_are_counted_wherever_they_sit() {
        let mut made = group(0);
        made.set_curve_count(1, 2, TestCurve::of);
        made.set_curve_count(2, 1, TestCurve::of);

        assert_eq!(made.count_of_kind(1), 2);
        assert_eq!(made.count_of_kind(2), 1);
        assert_eq!(made.count_of_kind(3), 0);
    }

    #[test]
    fn the_first_curves_of_a_new_kind_go_in_front_of_every_other() {
        let mut made = group(0);
        made.set_curve_count(1, 2, TestCurve::of);
        made.set_curve_count(2, 1, TestCurve::of);

        assert_eq!(kinds(&made), [2, 1, 1]);
    }

    #[test]
    fn more_curves_of_a_kind_go_directly_after_the_ones_it_has() {
        let mut made = group(0);
        made.set_curve_count(1, 2, TestCurve::of);
        made.set_curve_count(2, 1, TestCurve::of);
        made.set_curve_count(1, 4, TestCurve::of);

        assert_eq!(kinds(&made), [2, 1, 1, 1, 1]);
    }

    #[test]
    fn fewer_curves_are_taken_from_the_end_of_that_kinds_run() {
        let mut made = group(0);
        made.set_curve_count(1, 3, TestCurve::of);
        made.set_curve_count(2, 1, TestCurve::of);
        made.set_curve_count(1, 1, TestCurve::of);

        assert_eq!(kinds(&made), [2, 1]);
        assert_eq!(made.count_of_kind(1), 1);
    }

    #[test]
    fn taking_them_all_away_leaves_the_other_kinds_alone() {
        let mut made = group(0);
        made.set_curve_count(1, 2, TestCurve::of);
        made.set_curve_count(2, 2, TestCurve::of);
        made.set_curve_count(1, 0, TestCurve::of);

        assert_eq!(kinds(&made), [2, 2]);
    }

    #[test]
    fn asking_for_the_number_already_held_changes_nothing() {
        let mut made = group(0);
        made.set_curve_count(1, 2, TestCurve::of);
        let before = made.curves().to_vec();
        made.set_curve_count(1, 2, TestCurve::of);

        assert_eq!(made.curves(), before.as_slice());
    }

    #[test]
    fn a_kind_with_no_curves_answers_an_empty_range_starting_at_nothing() {
        let mut made = group(0);
        made.set_curve_count(1, 2, TestCurve::of);
        let range = made.range_of_kind(7);

        assert!(range.is_empty());
        assert_eq!(range.start, 0);
    }

    #[test]
    fn an_empty_group_answers_an_empty_range_the_same_way() {
        assert_eq!(group(0).range_of_kind(1), 0..0);
    }

    #[test]
    fn a_kinds_range_covers_exactly_its_own_curves() {
        let mut made = group(0);
        made.set_curve_count(1, 2, TestCurve::of);
        made.set_curve_count(2, 3, TestCurve::of);
        let range = made.range_of_kind(1);

        assert_eq!(range.len(), 2);
        for index in range {
            assert_eq!(made.curves()[index].kind(), 1);
        }
    }

    #[test]
    fn a_curve_counts_only_when_both_of_its_flags_are_set() {
        let mut made = group(0);
        made.set_curve_count(1, 4, TestCurve::of);
        made.curves[0].first = false;
        made.curves[1].second = false;
        made.curves[2].first = false;
        made.curves[2].second = false;

        assert_eq!(made.counted_curves(), 1);
    }

    #[test]
    fn a_group_with_no_curves_counts_none() {
        assert_eq!(group(0).counted_curves(), 0);
    }
}
