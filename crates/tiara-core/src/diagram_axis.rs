//! The recovered diagram axis: its scale, its extent, and how it zooms and
//! scrolls.
//!
//! An axis carries a range and a way of dividing it. Everything here has to
//! work the same for a logarithmic axis as for a linear one, and the
//! recovered code does that by doing the arithmetic in log space and coming
//! back — so a logarithmic axis scrolls by a constant *ratio* where a linear
//! one scrolls by a constant difference.
//!
//! The axis's orientation is a small number the symbols do not name. Two of
//! the three recovered operations group it the same way — one value on its
//! own against two others — but nothing recovered says which is which, so the
//! groups are kept as recovered masks rather than given names.

/// How an axis divides its range.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum AxisScale {
    /// Recovered value 2: the range is divided by ratio.
    Logarithmic,
    /// Recovered value 3, and the value every unrecognised code falls to:
    /// the range is divided by difference.
    #[default]
    Linear,
}

impl AxisScale {
    /// Recovers a scale from the byte the axis stores.
    ///
    /// Part of Ghidra function `FUN_01cd3cd0` at `0x01CD3CD0`.
    ///
    /// Only one value means logarithmic. Everything else — including the two
    /// below it, which the recovered code lets fall through — behaves
    /// linearly, so an axis with an unset or unknown scale still works.
    #[must_use]
    pub const fn from_code(code: u8) -> Self {
        if code == 2 {
            Self::Logarithmic
        } else {
            Self::Linear
        }
    }
}

/// The orientations whose items contribute their stored range to the extent.
///
/// Part of Ghidra function `FUN_01cd3400` at `0x01CD3400`.
///
/// Recovered as a bit mask over the orientation, selecting orientations one
/// and two.
pub const PAIRED_ORIENTATIONS: u8 = 0x06;

/// The orientation that stands alone.
///
/// Part of Ghidra function `FUN_01cd3400` at `0x01CD3400`.
pub const SINGLE_ORIENTATION: u8 = 0x01;

/// The highest orientation the recovered masks can describe.
pub const ORIENTATION_LIMIT: u8 = 8;

/// Whether one orientation is in one of the recovered masks.
///
/// Part of Ghidra function `FUN_01cd3400` at `0x01CD3400`.
///
/// An orientation at or above the limit matches nothing, which is the guard
/// the recovered code puts in front of every one of these tests.
#[must_use]
pub const fn orientation_in(orientation: u8, mask: u8) -> bool {
    orientation < ORIENTATION_LIMIT && (1_u8 << orientation) & mask != 0
}

/// A closed range on an axis.
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct AxisRange {
    /// The low end.
    pub minimum: f64,
    /// The high end.
    pub maximum: f64,
}

impl AxisRange {
    /// Builds a range.
    #[must_use]
    pub const fn new(minimum: f64, maximum: f64) -> Self {
        Self { minimum, maximum }
    }

    /// How wide it is.
    #[must_use]
    pub fn span(self) -> f64 {
        self.maximum - self.minimum
    }

    /// How wide it is measured by ratio rather than difference.
    #[must_use]
    pub fn log_span(self) -> f64 {
        self.maximum.log10() - self.minimum.log10()
    }

    /// Whether this range already shows every part of another.
    ///
    /// Part of Ghidra function `FUN_01cd3740` at `0x01CD3740`.
    #[must_use]
    pub fn contains(self, other: Self) -> bool {
        self.minimum <= other.minimum && other.maximum <= self.maximum
    }

    /// Widens this range to take in another.
    ///
    /// Part of Ghidra function `FUN_01cd3400` at `0x01CD3400`.
    #[must_use]
    pub const fn union(self, other: Self) -> Self {
        Self {
            minimum: self.minimum.min(other.minimum),
            maximum: self.maximum.max(other.maximum),
        }
    }
}

/// Where one item's range comes from.
///
/// Part of Ghidra function `FUN_01cd3400` at `0x01CD3400`.
///
/// Which of the three an item offers depends on what kind of item it is and
/// which way the axis runs — a curve measured along the axis contributes a
/// different pair of numbers from one measured across it.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ExtentSource {
    /// The item's own stored range.
    Stored,
    /// Its range across the axis.
    Crossing,
    /// A range it computes rather than stores.
    Computed,
}

/// What one item of the axis looks like to the extent scan.
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct ExtentItem {
    /// Whether the item is of the kind that offers a crossing or computed
    /// range rather than a stored one.
    pub measured: bool,
    /// The item's stored range.
    pub stored: AxisRange,
    /// Its range across the axis.
    pub crossing: AxisRange,
    /// The range it computes.
    pub computed: AxisRange,
}

impl ExtentItem {
    /// Which range this item offers an axis of one orientation, if any.
    ///
    /// Part of Ghidra function `FUN_01cd3400` at `0x01CD3400`.
    #[must_use]
    pub const fn source_for(self, orientation: u8) -> Option<ExtentSource> {
        if self.measured {
            if orientation_in(orientation, PAIRED_ORIENTATIONS) {
                return Some(ExtentSource::Crossing);
            }
            if orientation_in(orientation, SINGLE_ORIENTATION) {
                return Some(ExtentSource::Computed);
            }
            return None;
        }
        if orientation_in(orientation, SINGLE_ORIENTATION) {
            return Some(ExtentSource::Stored);
        }
        None
    }

    /// The range this item contributes, if any.
    #[must_use]
    pub const fn range_for(self, orientation: u8) -> Option<AxisRange> {
        match self.source_for(orientation) {
            Some(ExtentSource::Stored) => Some(self.stored),
            Some(ExtentSource::Crossing) => Some(self.crossing),
            Some(ExtentSource::Computed) => Some(self.computed),
            None => None,
        }
    }
}

/// Implements Ghidra function `FUN_01cd3400` at `0x01CD3400`.
///
/// Works out the range every item on the axis needs to be visible.
///
/// The first item to contribute *seeds* the range rather than being merged
/// into an empty one, which is what lets the scan work without a sentinel
/// that a real measurement could clash with. Items that contribute nothing
/// are passed over entirely, so an axis whose items all decline ends up with
/// no extent at all rather than with a zero-width one at the origin.
#[must_use]
pub fn data_extent(items: &[ExtentItem], orientation: u8) -> Option<AxisRange> {
    items
        .iter()
        .filter_map(|item| item.range_for(orientation))
        .fold(None, |extent: Option<AxisRange>, range| {
            Some(extent.map_or(range, |current| current.union(range)))
        })
}

/// How much of the range one zoom-out step adds at each end.
///
/// Part of Ghidra function `FUN_01cd3740` at `0x01CD3740`.
pub const ZOOM_OUT_FRACTION: f64 = 4.0;

/// Implements Ghidra function `FUN_01cd3740` at `0x01CD3740`.
///
/// Widens the axis by one step towards showing all of its data.
///
/// The step is a quarter of the current range at each end, and each end is
/// clamped to the data rather than overshooting it — so repeated steps
/// approach the data's own bounds and settle exactly on them instead of
/// growing past. An axis that already shows everything is left alone, which
/// is what makes repeating this safe.
///
/// A logarithmic axis takes its quarter in log space, so it grows by a
/// constant ratio rather than a constant amount.
///
/// Returns the new range, or `None` when the axis already showed everything.
#[must_use]
pub fn zoom_out_step(range: AxisRange, extent: AxisRange, scale: AxisScale) -> Option<AxisRange> {
    if range.contains(extent) {
        return None;
    }

    Some(match scale {
        AxisScale::Logarithmic => {
            let step = range.log_span() / ZOOM_OUT_FRACTION;
            AxisRange {
                minimum: extent
                    .minimum
                    .max(10_f64.powf(range.minimum.log10() - step)),
                maximum: extent
                    .maximum
                    .min(10_f64.powf(range.maximum.log10() + step)),
            }
        }
        AxisScale::Linear => {
            let step = range.span() / ZOOM_OUT_FRACTION;
            AxisRange {
                minimum: extent.minimum.max(range.minimum - step),
                maximum: extent.maximum.min(range.maximum + step),
            }
        }
    })
}

/// What one scroll step did.
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct ScrollStep {
    /// The range after the step.
    pub range: AxisRange,
    /// Whether the axis actually moved.
    pub moved: bool,
}

/// Implements Ghidra function `FUN_01cd3cd0` at `0x01CD3CD0`.
///
/// Scrolls the axis one step towards its lower limit.
///
/// The step is the range divided by the axis's own division count, so an axis
/// showing more scrolls further — the view moves by a constant fraction of
/// itself rather than by a constant amount.
///
/// Hitting the limit does not shorten the step: the range is slid back so its
/// low end sits exactly on the limit and its width is kept, so scrolling into
/// the limit parks the view against it rather than squeezing it. The
/// logarithmic path keeps the *ratio* instead of the width, which is the same
/// idea measured the way that axis measures.
///
/// The two paths disagree about what they report. The linear one answers
/// `false` when the clamp cancelled the step exactly — nothing moved — while
/// the logarithmic one always answers `true`, even when it did not move.
/// That asymmetry is recovered, not introduced here.
#[must_use]
pub fn scroll_down(range: AxisRange, limit: f64, divisions: i32, scale: AxisScale) -> ScrollStep {
    match scale {
        AxisScale::Logarithmic => {
            let step = range.log_span() / f64::from(divisions);
            let minimum = 10_f64.powf(range.minimum.log10() - step);
            let maximum = 10_f64.powf(range.maximum.log10() - step);

            if minimum >= limit {
                return ScrollStep {
                    range: AxisRange::new(minimum, maximum),
                    moved: true,
                };
            }

            ScrollStep {
                range: AxisRange::new(limit, 10_f64.powf(limit.log10() + range.log_span())),
                moved: true,
            }
        }
        AxisScale::Linear => {
            let step = range.span() / f64::from(divisions);
            let stepped = range.minimum - step;
            let overshoot = if stepped >= limit {
                0.0
            } else {
                limit - stepped
            };

            ScrollStep {
                range: AxisRange::new(stepped + overshoot, range.maximum - step + overshoot),
                moved: overshoot - step != 0.0,
            }
        }
    }
}

/// Where the repainted strip sits relative to the axis's anchor.
///
/// Part of Ghidra functions `FUN_01cd3b70` at `0x01CD3B70` and `FUN_01cd3ef0`
/// at `0x01CD3EF0`.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum LabelPlacement {
    /// Ending at the point, on the same line: the label runs back from it.
    Before,
    /// Starting just past the point, one line down.
    After,
}

/// The orientations whose labels run back from the point.
pub const BEFORE_ORIENTATIONS: [u8; 3] = [0, 4, 6];

/// The orientations whose labels start after it.
pub const AFTER_ORIENTATIONS: [u8; 4] = [1, 2, 5, 7];

/// Where one orientation's strip goes, if it can be repainted at all.
///
/// Part of Ghidra functions `FUN_01cd3b70` at `0x01CD3B70` and `FUN_01cd3ef0`
/// at `0x01CD3EF0`.
///
/// One orientation answers `None`, and so does anything above the eight the
/// recovered code names. That is not only a drawing gap: the recovered
/// handlers give up before scrolling at all, so an axis in one of those
/// states cannot be scrolled by these controls.
#[must_use]
pub fn label_placement(orientation: u8) -> Option<LabelPlacement> {
    if BEFORE_ORIENTATIONS.contains(&orientation) {
        return Some(LabelPlacement::Before);
    }
    if AFTER_ORIENTATIONS.contains(&orientation) {
        return Some(LabelPlacement::After);
    }
    None
}

/// A point on the canvas.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct LabelOrigin {
    /// The horizontal position.
    pub x: i32,
    /// The vertical one.
    pub y: i32,
}

/// Where the repainted strip starts, given the size of one measured glyph.
///
/// Part of Ghidra functions `FUN_01cd3b70` at `0x01CD3B70` and `FUN_01cd3ef0`
/// at `0x01CD3EF0`.
///
/// The offsets come from measuring a sample string rather than the axis's own
/// text, so the strip is the same size however long the labels are. The two
/// handlers measure *different* sample strings, so each direction clears a
/// strip sized for its own arrow.
#[must_use]
pub const fn label_origin(
    placement: LabelPlacement,
    anchor: LabelOrigin,
    glyph_width: i32,
    glyph_height: i32,
) -> LabelOrigin {
    match placement {
        LabelPlacement::Before => LabelOrigin {
            x: anchor.x - glyph_width,
            y: anchor.y,
        },
        LabelPlacement::After => LabelOrigin {
            x: anchor.x + 1,
            y: anchor.y + glyph_height,
        },
    }
}

/// Implements Ghidra function `FUN_01cd3950` at `0x01CD3950`.
///
/// Scrolls the axis one step towards its upper limit.
///
/// The mirror of [`scroll_down`] in every respect, including the clamp: the
/// range slides forward so its high end sits exactly on the upper limit and
/// its width — or its ratio, on a logarithmic axis — is kept, so scrolling
/// into the limit parks the view against it rather than squeezing it.
///
/// The upper limit is a field of its own rather than being derived from the
/// lower one, so an axis can be free to scroll in one direction and pinned in
/// the other.
///
/// The same reporting asymmetry as [`scroll_down`] is recovered here: only
/// the linear path answers `false` when the clamp cancelled the step.
#[must_use]
pub fn scroll_up(range: AxisRange, limit: f64, divisions: i32, scale: AxisScale) -> ScrollStep {
    match scale {
        AxisScale::Logarithmic => {
            let step = range.log_span() / f64::from(divisions);
            let minimum = 10_f64.powf(range.minimum.log10() + step);
            let maximum = 10_f64.powf(range.maximum.log10() + step);

            if maximum <= limit {
                return ScrollStep {
                    range: AxisRange::new(minimum, maximum),
                    moved: true,
                };
            }

            ScrollStep {
                range: AxisRange::new(10_f64.powf(limit.log10() - range.log_span()), limit),
                moved: true,
            }
        }
        AxisScale::Linear => {
            let step = range.span() / f64::from(divisions);
            let stepped = range.maximum + step;
            let overshoot = if stepped <= limit {
                0.0
            } else {
                limit - stepped
            };

            ScrollStep {
                range: AxisRange::new(range.minimum + step + overshoot, stepped + overshoot),
                moved: step + overshoot != 0.0,
            }
        }
    }
}

/// Which way one of the axis's scroll controls moves it.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ScrollDirection {
    /// Towards the upper limit.
    Up,
    /// Towards the lower one.
    Down,
}

/// What a scroll control needs from the axis around it.
pub trait ScrollControlHost {
    /// Which way the axis runs.
    fn orientation(&mut self) -> u8;

    /// Scrolls one step, answering whether the axis moved.
    fn scroll(&mut self, direction: ScrollDirection) -> bool;

    /// The size of the sample string this direction's control measures.
    fn sample_size(&mut self, direction: ScrollDirection) -> (i32, i32);

    /// Where the strip is anchored.
    fn anchor(&mut self) -> LabelOrigin;

    /// Clears the strip to the background before it is redrawn.
    fn clear_strip(&mut self, origin: LabelOrigin);

    /// Redraws the axis over the cleared strip.
    fn redraw(&mut self);
}

/// Implements Ghidra functions `FUN_01cd3b70` at `0x01CD3B70` and
/// `FUN_01cd3ef0` at `0x01CD3EF0`.
///
/// Scrolls the axis with one of its controls and repaints what moved.
///
/// The two recovered handlers differ only in which way they scroll and which
/// sample string they measure, so they are one function here taking the
/// direction.
///
/// Only the strip the axis's labels occupy is cleared and redrawn rather than
/// the whole axis, which is why the strip's size comes from a sample string:
/// the clear has to happen before anything is known about the new labels.
///
/// Two things stop it. An orientation with no placement gives up *before*
/// scrolling, so such an axis cannot be scrolled by these controls at all;
/// and an axis that did not move is left alone rather than being cleared and
/// redrawn identically.
///
/// Returns whether anything was repainted.
pub fn scroll_control(host: &mut impl ScrollControlHost, direction: ScrollDirection) -> bool {
    let Some(placement) = label_placement(host.orientation()) else {
        return false;
    };

    let (glyph_width, glyph_height) = host.sample_size(direction);
    if !host.scroll(direction) {
        return false;
    }

    let anchor = host.anchor();
    host.clear_strip(label_origin(placement, anchor, glyph_width, glyph_height));
    host.redraw();
    true
}

#[cfg(test)]
mod tests {
    use super::*;

    fn close(left: f64, right: f64) -> bool {
        (left - right).abs() <= 1e-9 * right.abs().max(1.0)
    }

    #[test]
    fn only_one_code_means_a_logarithmic_axis() {
        assert_eq!(AxisScale::from_code(2), AxisScale::Logarithmic);
        for code in [0, 1, 3, 4, 255] {
            assert_eq!(AxisScale::from_code(code), AxisScale::Linear);
        }
    }

    #[test]
    fn the_recovered_masks_select_one_orientation_and_a_pair() {
        assert!(orientation_in(0, SINGLE_ORIENTATION));
        assert!(!orientation_in(1, SINGLE_ORIENTATION));

        assert!(orientation_in(1, PAIRED_ORIENTATIONS));
        assert!(orientation_in(2, PAIRED_ORIENTATIONS));
        assert!(!orientation_in(0, PAIRED_ORIENTATIONS));
        assert!(!orientation_in(3, PAIRED_ORIENTATIONS));
    }

    #[test]
    fn an_orientation_past_the_recovered_limit_matches_nothing() {
        for mask in [SINGLE_ORIENTATION, PAIRED_ORIENTATIONS, 0xff] {
            assert!(!orientation_in(8, mask));
            assert!(!orientation_in(200, mask));
        }
    }

    fn measured(crossing: AxisRange, computed: AxisRange) -> ExtentItem {
        ExtentItem {
            measured: true,
            stored: AxisRange::new(0.0, 0.0),
            crossing,
            computed,
        }
    }

    fn stored(range: AxisRange) -> ExtentItem {
        ExtentItem {
            measured: false,
            stored: range,
            crossing: AxisRange::new(0.0, 0.0),
            computed: AxisRange::new(0.0, 0.0),
        }
    }

    #[test]
    fn an_item_offers_a_different_range_by_the_way_the_axis_runs() {
        let item = measured(AxisRange::new(1.0, 2.0), AxisRange::new(10.0, 20.0));

        assert_eq!(item.source_for(1), Some(ExtentSource::Crossing));
        assert_eq!(item.source_for(2), Some(ExtentSource::Crossing));
        assert_eq!(item.source_for(0), Some(ExtentSource::Computed));
        assert_eq!(item.source_for(3), None);
    }

    #[test]
    fn an_item_that_only_stores_a_range_offers_it_to_one_orientation() {
        let item = stored(AxisRange::new(-5.0, 5.0));

        assert_eq!(item.source_for(0), Some(ExtentSource::Stored));
        assert_eq!(item.source_for(1), None);
        assert_eq!(item.source_for(2), None);
    }

    #[test]
    fn the_extent_is_the_union_of_every_contributing_item() {
        let items = [
            measured(AxisRange::new(1.0, 4.0), AxisRange::new(0.0, 0.0)),
            measured(AxisRange::new(-2.0, 3.0), AxisRange::new(0.0, 0.0)),
        ];

        assert_eq!(data_extent(&items, 1), Some(AxisRange::new(-2.0, 4.0)));
    }

    #[test]
    fn the_first_contributor_seeds_the_extent_rather_than_widening_an_empty_one() {
        // Every value is far from zero, so a zero-seeded scan would be wrong.
        let items = [measured(
            AxisRange::new(100.0, 200.0),
            AxisRange::new(0.0, 0.0),
        )];

        assert_eq!(data_extent(&items, 1), Some(AxisRange::new(100.0, 200.0)));
    }

    #[test]
    fn an_axis_whose_items_all_decline_has_no_extent_at_all() {
        let items = [measured(AxisRange::new(1.0, 4.0), AxisRange::new(2.0, 3.0))];

        assert_eq!(data_extent(&items, 3), None);
        assert_eq!(data_extent(&[], 0), None);
    }

    #[test]
    fn items_of_both_kinds_contribute_to_the_one_orientation_they_share() {
        let items = [
            stored(AxisRange::new(-1.0, 1.0)),
            measured(AxisRange::new(0.0, 0.0), AxisRange::new(5.0, 9.0)),
        ];

        assert_eq!(data_extent(&items, 0), Some(AxisRange::new(-1.0, 9.0)));
    }

    #[test]
    fn an_axis_already_showing_everything_does_not_zoom() {
        let range = AxisRange::new(0.0, 10.0);

        assert_eq!(
            zoom_out_step(range, AxisRange::new(2.0, 8.0), AxisScale::Linear),
            None
        );
        assert_eq!(zoom_out_step(range, range, AxisScale::Linear), None);
    }

    #[test]
    fn zooming_out_adds_a_quarter_at_each_end() {
        let step = zoom_out_step(
            AxisRange::new(0.0, 10.0),
            AxisRange::new(-100.0, 100.0),
            AxisScale::Linear,
        )
        .expect("it zooms");

        assert!(close(step.minimum, -2.5));
        assert!(close(step.maximum, 12.5));
    }

    #[test]
    fn zooming_out_settles_exactly_on_the_data_rather_than_overshooting() {
        let mut range = AxisRange::new(0.0, 10.0);
        let extent = AxisRange::new(-1.0, 11.0);

        while let Some(next) = zoom_out_step(range, extent, AxisScale::Linear) {
            range = next;
        }

        assert!(close(range.minimum, extent.minimum));
        assert!(close(range.maximum, extent.maximum));
    }

    #[test]
    fn a_logarithmic_axis_zooms_by_ratio() {
        let step = zoom_out_step(
            AxisRange::new(1.0, 100.0),
            AxisRange::new(1e-9, 1e9),
            AxisScale::Logarithmic,
        )
        .expect("it zooms");

        // Two decades, so a quarter is half a decade at each end.
        assert!(close(step.minimum, 10_f64.powf(-0.5)));
        assert!(close(step.maximum, 10_f64.powf(2.5)));
    }

    #[test]
    fn scrolling_moves_by_a_fraction_of_the_range_not_a_fixed_amount() {
        let wide = scroll_down(AxisRange::new(0.0, 100.0), -1e9, 10, AxisScale::Linear);
        let narrow = scroll_down(AxisRange::new(0.0, 10.0), -1e9, 10, AxisScale::Linear);

        assert!(close(wide.range.minimum, -10.0));
        assert!(close(narrow.range.minimum, -1.0));
        assert!(wide.moved && narrow.moved);
    }

    #[test]
    fn scrolling_keeps_the_width_when_it_meets_the_limit() {
        let step = scroll_down(AxisRange::new(1.0, 11.0), 0.0, 4, AxisScale::Linear);

        assert!(close(step.range.minimum, 0.0));
        assert!(close(step.range.span(), 10.0));
        assert!(step.moved);
    }

    #[test]
    fn scrolling_against_the_limit_reports_that_nothing_moved() {
        // The range already starts at the limit, so the clamp cancels the
        // step exactly.
        let step = scroll_down(AxisRange::new(0.0, 10.0), 0.0, 4, AxisScale::Linear);

        assert!(close(step.range.minimum, 0.0));
        assert!(close(step.range.maximum, 10.0));
        assert!(!step.moved);
    }

    #[test]
    fn a_logarithmic_scroll_keeps_the_ratio_when_it_meets_the_limit() {
        let step = scroll_down(AxisRange::new(1.0, 100.0), 0.1, 1, AxisScale::Logarithmic);

        assert!(close(step.range.minimum, 0.1));
        assert!(close(step.range.maximum, 10.0));
    }

    #[test]
    fn the_logarithmic_path_always_says_it_moved_even_when_it_did_not() {
        // Recovered asymmetry: only the linear path reports standing still.
        let step = scroll_down(AxisRange::new(1.0, 100.0), 1.0, 4, AxisScale::Logarithmic);

        assert!(close(step.range.minimum, 1.0));
        assert!(step.moved);
    }

    #[test]
    fn the_label_placements_cover_seven_of_the_eight_orientations() {
        for orientation in BEFORE_ORIENTATIONS {
            assert_eq!(label_placement(orientation), Some(LabelPlacement::Before));
        }
        for orientation in AFTER_ORIENTATIONS {
            assert_eq!(label_placement(orientation), Some(LabelPlacement::After));
        }

        assert_eq!(label_placement(3), None);
        assert_eq!(label_placement(8), None);
    }

    #[test]
    fn every_orientation_is_placed_at_most_once() {
        for orientation in BEFORE_ORIENTATIONS {
            assert!(!AFTER_ORIENTATIONS.contains(&orientation));
        }
    }

    #[test]
    fn a_label_before_the_point_ends_at_it_and_one_after_starts_past_it() {
        let anchor = LabelOrigin { x: 100, y: 50 };

        assert_eq!(
            label_origin(LabelPlacement::Before, anchor, 12, 16),
            LabelOrigin { x: 88, y: 50 }
        );
        assert_eq!(
            label_origin(LabelPlacement::After, anchor, 12, 16),
            LabelOrigin { x: 101, y: 66 }
        );
    }

    #[test]
    fn scrolling_up_mirrors_scrolling_down() {
        let range = AxisRange::new(0.0, 10.0);

        let up = scroll_up(range, 1e9, 10, AxisScale::Linear);
        let down = scroll_down(range, -1e9, 10, AxisScale::Linear);

        assert!(close(up.range.minimum, 1.0));
        assert!(close(down.range.minimum, -1.0));
        assert!(close(up.range.span(), down.range.span()));
    }

    #[test]
    fn scrolling_up_keeps_the_width_when_it_meets_the_upper_limit() {
        let step = scroll_up(AxisRange::new(0.0, 10.0), 12.0, 4, AxisScale::Linear);

        assert!(close(step.range.maximum, 12.0));
        assert!(close(step.range.span(), 10.0));
    }

    #[test]
    fn scrolling_against_the_upper_limit_reports_that_nothing_moved() {
        let step = scroll_up(AxisRange::new(0.0, 10.0), 10.0, 4, AxisScale::Linear);

        assert!(close(step.range.maximum, 10.0));
        assert!(!step.moved);
    }

    #[test]
    fn a_logarithmic_scroll_up_keeps_the_ratio_at_the_limit() {
        let step = scroll_up(
            AxisRange::new(1.0, 100.0),
            1000.0,
            1,
            AxisScale::Logarithmic,
        );

        assert!(close(step.range.maximum, 1000.0));
        assert!(close(step.range.minimum, 10.0));
    }

    #[test]
    fn the_two_limits_are_independent_of_one_another() {
        // Pinned at the top, free at the bottom.
        let range = AxisRange::new(5.0, 10.0);
        assert!(!scroll_up(range, 10.0, 4, AxisScale::Linear).moved);
        assert!(scroll_down(range, -100.0, 4, AxisScale::Linear).moved);
    }

    #[derive(Debug, Default)]
    struct Control {
        orientation: u8,
        moves: bool,
        scrolled: Option<ScrollDirection>,
        cleared: Option<LabelOrigin>,
        redrawn: bool,
    }

    impl ScrollControlHost for Control {
        fn orientation(&mut self) -> u8 {
            self.orientation
        }

        fn scroll(&mut self, direction: ScrollDirection) -> bool {
            self.scrolled = Some(direction);
            self.moves
        }

        fn sample_size(&mut self, direction: ScrollDirection) -> (i32, i32) {
            match direction {
                ScrollDirection::Up => (10, 12),
                ScrollDirection::Down => (20, 24),
            }
        }

        fn anchor(&mut self) -> LabelOrigin {
            LabelOrigin { x: 100, y: 50 }
        }

        fn clear_strip(&mut self, origin: LabelOrigin) {
            self.cleared = Some(origin);
        }

        fn redraw(&mut self) {
            self.redrawn = true;
        }
    }

    #[test]
    fn a_control_scrolls_then_repaints_the_strip() {
        let mut host = Control {
            orientation: 0,
            moves: true,
            ..Control::default()
        };

        assert!(scroll_control(&mut host, ScrollDirection::Up));
        assert_eq!(host.scrolled, Some(ScrollDirection::Up));
        assert_eq!(host.cleared, Some(LabelOrigin { x: 90, y: 50 }));
        assert!(host.redrawn);
    }

    #[test]
    fn each_direction_clears_a_strip_sized_for_its_own_arrow() {
        let mut up = Control {
            orientation: 1,
            moves: true,
            ..Control::default()
        };
        scroll_control(&mut up, ScrollDirection::Up);

        let mut down = Control {
            orientation: 1,
            moves: true,
            ..Control::default()
        };
        scroll_control(&mut down, ScrollDirection::Down);

        assert_ne!(up.cleared, down.cleared);
    }

    #[test]
    fn an_axis_that_did_not_move_is_left_alone() {
        let mut host = Control {
            orientation: 0,
            moves: false,
            ..Control::default()
        };

        assert!(!scroll_control(&mut host, ScrollDirection::Down));
        assert!(host.cleared.is_none());
        assert!(!host.redrawn);
    }

    #[test]
    fn an_orientation_with_no_placement_is_never_scrolled_at_all() {
        for orientation in [3, 8, 200] {
            let mut host = Control {
                orientation,
                moves: true,
                ..Control::default()
            };

            assert!(!scroll_control(&mut host, ScrollDirection::Up));
            assert_eq!(host.scrolled, None);
        }
    }
}

/// What an operation across all of a diagram's axes needs from the diagram.
pub trait DiagramAxesHost {
    /// How many axes the first collection holds.
    fn primary_count(&mut self) -> usize;

    /// How many the second holds.
    fn secondary_count(&mut self) -> usize;

    /// Whether one axis of the second collection has a linked axis of its
    /// own.
    fn linked_axis(&mut self, index: usize) -> bool;

    /// Applies the operation to one axis of the first collection.
    fn visit_primary(&mut self, index: usize);

    /// Applies it to one of the second.
    fn visit_secondary(&mut self, index: usize);

    /// Applies it to one secondary axis's linked axis.
    fn visit_linked(&mut self, index: usize);
}

/// Implements Ghidra function `FUN_01ce1ae0` at `0x01CE1AE0`.
///
/// Widens every axis of the diagram one step towards showing all its data.
///
/// Every axis takes a single step rather than being run to convergence, so
/// one invocation of this moves the whole diagram out by the same proportion
/// — the axes stay in step with one another instead of some reaching their
/// data before others.
///
/// An axis of the second collection may have a linked axis riding on it, and
/// that one is stepped too; the first collection's axes never have one.
pub fn zoom_all_axes(host: &mut impl DiagramAxesHost) {
    let primary = host.primary_count();
    for index in 0..primary {
        host.visit_primary(index);
    }

    let secondary = host.secondary_count();
    for index in 0..secondary {
        host.visit_secondary(index);
        if host.linked_axis(index) {
            host.visit_linked(index);
        }
    }
}

/// What setting one flag across a diagram needs from it.
pub trait DiagramFlagHost {
    /// How many axes the first collection holds.
    fn primary_count(&mut self) -> usize;

    /// How many the second holds.
    fn secondary_count(&mut self) -> usize;

    /// How many items the grid collection holds.
    fn grid_count(&mut self) -> usize;

    /// Sets the flag on one axis of the first collection.
    fn set_primary(&mut self, index: usize, value: bool);

    /// Sets it on one of the second.
    fn set_secondary(&mut self, index: usize, value: bool);

    /// Sets it on one grid item.
    fn set_grid(&mut self, index: usize, value: bool);
}

/// Implements Ghidra function `FUN_01ce88c0` at `0x01CE88C0`.
///
/// Sets one flag on every axis and every grid item of the diagram.
///
/// The grid items are of a different class from the axes but carry the flag
/// at the same offset, which is why one operation can reach all three
/// collections — and why the flag has to mean the same thing to a grid as it
/// does to an axis.
///
/// Nothing is skipped and nothing is conditional: every item is written
/// whatever it held before, so the diagram cannot end up half-set.
pub fn set_flag_on_all(host: &mut impl DiagramFlagHost, value: bool) {
    let primary = host.primary_count();
    for index in 0..primary {
        host.set_primary(index, value);
    }

    let secondary = host.secondary_count();
    for index in 0..secondary {
        host.set_secondary(index, value);
    }

    let grid = host.grid_count();
    for index in 0..grid {
        host.set_grid(index, value);
    }
}

#[cfg(test)]
mod diagram_wide_tests {
    use super::*;

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum Visit {
        Primary(usize),
        Secondary(usize),
        Linked(usize),
    }

    #[derive(Debug, Default)]
    struct Diagram {
        primary: usize,
        secondary: usize,
        linked: Vec<usize>,
        visits: Vec<Visit>,
    }

    impl DiagramAxesHost for Diagram {
        fn primary_count(&mut self) -> usize {
            self.primary
        }

        fn secondary_count(&mut self) -> usize {
            self.secondary
        }

        fn linked_axis(&mut self, index: usize) -> bool {
            self.linked.contains(&index)
        }

        fn visit_primary(&mut self, index: usize) {
            self.visits.push(Visit::Primary(index));
        }

        fn visit_secondary(&mut self, index: usize) {
            self.visits.push(Visit::Secondary(index));
        }

        fn visit_linked(&mut self, index: usize) {
            self.visits.push(Visit::Linked(index));
        }
    }

    #[test]
    fn every_axis_of_both_collections_takes_one_step() {
        let mut host = Diagram {
            primary: 2,
            secondary: 2,
            ..Diagram::default()
        };

        zoom_all_axes(&mut host);

        assert_eq!(
            host.visits,
            [
                Visit::Primary(0),
                Visit::Primary(1),
                Visit::Secondary(0),
                Visit::Secondary(1),
            ]
        );
    }

    #[test]
    fn a_linked_axis_is_stepped_right_after_the_one_it_rides_on() {
        let mut host = Diagram {
            secondary: 3,
            linked: vec![1],
            ..Diagram::default()
        };

        zoom_all_axes(&mut host);

        assert_eq!(
            host.visits,
            [
                Visit::Secondary(0),
                Visit::Secondary(1),
                Visit::Linked(1),
                Visit::Secondary(2),
            ]
        );
    }

    #[test]
    fn a_diagram_with_no_axes_does_nothing() {
        let mut host = Diagram::default();
        zoom_all_axes(&mut host);

        assert!(host.visits.is_empty());
    }

    #[derive(Debug, Default)]
    struct Flags {
        primary: usize,
        secondary: usize,
        grid: usize,
        written: Vec<(&'static str, usize, bool)>,
    }

    impl DiagramFlagHost for Flags {
        fn primary_count(&mut self) -> usize {
            self.primary
        }

        fn secondary_count(&mut self) -> usize {
            self.secondary
        }

        fn grid_count(&mut self) -> usize {
            self.grid
        }

        fn set_primary(&mut self, index: usize, value: bool) {
            self.written.push(("primary", index, value));
        }

        fn set_secondary(&mut self, index: usize, value: bool) {
            self.written.push(("secondary", index, value));
        }

        fn set_grid(&mut self, index: usize, value: bool) {
            self.written.push(("grid", index, value));
        }
    }

    #[test]
    fn the_flag_reaches_all_three_collections() {
        let mut host = Flags {
            primary: 1,
            secondary: 1,
            grid: 2,
            ..Flags::default()
        };

        set_flag_on_all(&mut host, true);

        assert_eq!(
            host.written,
            [
                ("primary", 0, true),
                ("secondary", 0, true),
                ("grid", 0, true),
                ("grid", 1, true),
            ]
        );
    }

    #[test]
    fn nothing_is_skipped_so_the_diagram_cannot_end_up_half_set() {
        let mut host = Flags {
            primary: 3,
            secondary: 2,
            grid: 1,
            ..Flags::default()
        };

        set_flag_on_all(&mut host, false);

        assert_eq!(host.written.len(), 6);
        assert!(host.written.iter().all(|(_, _, value)| !value));
    }
}

/// Which collection one of the diagram's items belongs to.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DiagramCollection {
    /// The first axis collection.
    Primary,
    /// The second, whose items may carry a linked axis.
    Secondary,
    /// The linked axis riding on one of the second collection's.
    Linked,
    /// The third collection, whose items are of a different class.
    Auxiliary,
}

/// What offering something to every enabled item needs from the diagram.
pub trait DiagramOfferHost {
    /// How many items one collection holds.
    fn count(&mut self, collection: DiagramCollection) -> usize;

    /// Whether one item is enabled.
    fn enabled(&mut self, collection: DiagramCollection, index: usize) -> bool;

    /// Whether one secondary item carries a linked axis.
    fn linked_axis(&mut self, index: usize) -> bool;

    /// Offers the subject to one item.
    fn offer(&mut self, collection: DiagramCollection, index: usize);
}

/// Implements Ghidra function `FUN_01ce2600` at `0x01CE2600`.
///
/// Offers one thing to every enabled item of the diagram and reports whether
/// any took it.
///
/// The caller passes in a flag meaning "nobody wanted this", and each item
/// that accepts clears it — so the answer is not which item took the subject
/// but only whether *any* did. That is what lets the caller fall back to its
/// own handling when the diagram ignored something, without knowing anything
/// about the diagram's contents.
///
/// Disabled items are passed over rather than offered and declining, so an
/// item that is switched off cannot claim the subject at all.
///
/// A linked axis is offered the subject on its own account, right after the
/// axis it rides on, and its own enabled state decides — a linked axis can
/// take something its host declined.
///
/// Returns whether anything accepted.
pub fn offer_to_enabled_items(host: &mut impl DiagramOfferHost) -> bool {
    let mut accepted = false;

    let primary = host.count(DiagramCollection::Primary);
    for index in 0..primary {
        if host.enabled(DiagramCollection::Primary, index) {
            host.offer(DiagramCollection::Primary, index);
            accepted = true;
        }
    }

    let secondary = host.count(DiagramCollection::Secondary);
    for index in 0..secondary {
        if host.enabled(DiagramCollection::Secondary, index) {
            host.offer(DiagramCollection::Secondary, index);
            accepted = true;
        }
        if host.linked_axis(index) && host.enabled(DiagramCollection::Linked, index) {
            host.offer(DiagramCollection::Linked, index);
            accepted = true;
        }
    }

    let auxiliary = host.count(DiagramCollection::Auxiliary);
    for index in 0..auxiliary {
        if host.enabled(DiagramCollection::Auxiliary, index) {
            host.offer(DiagramCollection::Auxiliary, index);
            accepted = true;
        }
    }

    accepted
}

#[cfg(test)]
mod diagram_offer_tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Diagram {
        counts: [usize; 4],
        disabled: Vec<(usize, usize)>,
        linked: Vec<usize>,
        offered: Vec<(DiagramCollection, usize)>,
    }

    impl Diagram {
        const fn slot(collection: DiagramCollection) -> usize {
            match collection {
                DiagramCollection::Primary => 0,
                DiagramCollection::Secondary => 1,
                DiagramCollection::Linked => 2,
                DiagramCollection::Auxiliary => 3,
            }
        }
    }

    impl DiagramOfferHost for Diagram {
        fn count(&mut self, collection: DiagramCollection) -> usize {
            self.counts[Self::slot(collection)]
        }

        fn enabled(&mut self, collection: DiagramCollection, index: usize) -> bool {
            !self.disabled.contains(&(Self::slot(collection), index))
        }

        fn linked_axis(&mut self, index: usize) -> bool {
            self.linked.contains(&index)
        }

        fn offer(&mut self, collection: DiagramCollection, index: usize) {
            self.offered.push((collection, index));
        }
    }

    #[test]
    fn a_diagram_with_nothing_in_it_reports_that_nobody_took_the_subject() {
        let mut host = Diagram::default();

        assert!(!offer_to_enabled_items(&mut host));
        assert!(host.offered.is_empty());
    }

    #[test]
    fn every_enabled_item_of_every_collection_is_offered_the_subject() {
        let mut host = Diagram {
            counts: [1, 1, 0, 1],
            ..Diagram::default()
        };

        assert!(offer_to_enabled_items(&mut host));
        assert_eq!(
            host.offered,
            [
                (DiagramCollection::Primary, 0),
                (DiagramCollection::Secondary, 0),
                (DiagramCollection::Auxiliary, 0),
            ]
        );
    }

    #[test]
    fn a_disabled_item_is_passed_over_rather_than_offered_and_declining() {
        let mut host = Diagram {
            counts: [2, 0, 0, 0],
            disabled: vec![(0, 0)],
            ..Diagram::default()
        };

        assert!(offer_to_enabled_items(&mut host));
        assert_eq!(host.offered, [(DiagramCollection::Primary, 1)]);
    }

    #[test]
    fn a_diagram_whose_items_are_all_disabled_reports_that_nobody_took_it() {
        let mut host = Diagram {
            counts: [1, 1, 0, 1],
            disabled: vec![(0, 0), (1, 0), (3, 0)],
            ..Diagram::default()
        };

        assert!(!offer_to_enabled_items(&mut host));
        assert!(host.offered.is_empty());
    }

    #[test]
    fn a_linked_axis_is_offered_right_after_the_one_it_rides_on() {
        let mut host = Diagram {
            counts: [0, 2, 0, 0],
            linked: vec![0],
            ..Diagram::default()
        };

        offer_to_enabled_items(&mut host);

        assert_eq!(
            host.offered,
            [
                (DiagramCollection::Secondary, 0),
                (DiagramCollection::Linked, 0),
                (DiagramCollection::Secondary, 1),
            ]
        );
    }

    #[test]
    fn a_linked_axis_can_take_something_its_host_declined() {
        let mut host = Diagram {
            counts: [0, 1, 0, 0],
            disabled: vec![(1, 0)],
            linked: vec![0],
            ..Diagram::default()
        };

        assert!(offer_to_enabled_items(&mut host));
        assert_eq!(host.offered, [(DiagramCollection::Linked, 0)]);
    }
}

/// The span ratio above which the second axis is widened to match the first.
pub const ASPECT_UPPER_BOUND: f64 = 2.0;

/// The ratio below which the first axis is widened to match the second.
pub const ASPECT_LOWER_BOUND: f64 = 0.5;

/// Which axis one aspect adjustment widens.
#[derive(Debug, Clone, Copy, PartialEq)]
pub enum AspectAdjustment {
    /// The spans are close enough; neither axis changes.
    None,
    /// The first axis is widened to this range.
    WidenPrimary(AxisRange),
    /// The second is.
    WidenSecondary(AxisRange),
}

/// Widens a range symmetrically until its span matches another's.
///
/// Part of Ghidra function `FUN_01ce27e0` at `0x01CE27E0`.
///
/// Half the difference goes on at each end, so the range keeps its centre —
/// what the user was looking at stays in the middle.
#[must_use]
pub fn widened_to_match(range: AxisRange, target_span: f64) -> AxisRange {
    let half = (target_span - range.span()) / 2.0;
    AxisRange {
        minimum: range.minimum - half,
        maximum: range.maximum + half,
    }
}

/// Implements Ghidra function `FUN_01ce27e0` at `0x01CE27E0`.
///
/// Brings the two axes' spans back together when they have drifted too far
/// apart.
///
/// The check is a *ratio*, not a difference, and it has a dead zone: spans
/// within a factor of two of each other are left alone entirely. Only when
/// one is more than twice the other does the smaller grow, and then it grows
/// all the way to match rather than just back inside the band — so the
/// correction happens rarely and completely instead of constantly and
/// partially.
///
/// Growing the smaller rather than shrinking the larger is what keeps the
/// correction from hiding data: nothing that was visible stops being visible.
#[must_use]
pub fn equalise_spans(primary: AxisRange, secondary: AxisRange) -> AspectAdjustment {
    let ratio = primary.span() / secondary.span();

    if ratio <= ASPECT_UPPER_BOUND {
        if ratio < ASPECT_LOWER_BOUND {
            return AspectAdjustment::WidenPrimary(widened_to_match(primary, secondary.span()));
        }
        return AspectAdjustment::None;
    }

    AspectAdjustment::WidenSecondary(widened_to_match(secondary, primary.span()))
}

/// What applying an aspect adjustment needs from the diagram.
pub trait AspectHost {
    /// Whether the diagram keeps its axes' spans in proportion at all.
    fn spans_are_linked(&mut self) -> bool;

    /// The first axis's range.
    fn primary_range(&mut self) -> AxisRange;

    /// The second's.
    fn secondary_range(&mut self) -> AxisRange;

    /// Applies a new range to one axis, re-lays it out, and pins its scroll
    /// limits to it.
    fn apply(&mut self, adjustment: AspectAdjustment);
}

/// Implements Ghidra function `FUN_01ce27e0` at `0x01CE27E0`.
///
/// Keeps the diagram's two axes in proportion, when it is set to.
///
/// Applying an adjustment also pins the widened axis's scroll limits to its
/// new range, so the axis cannot afterwards be scrolled past what the
/// correction decided it should show. That is why the correction is safe to
/// leave in place: it cannot be undone by scrolling.
///
/// Returns what it did.
pub fn keep_spans_in_proportion(host: &mut impl AspectHost) -> AspectAdjustment {
    if !host.spans_are_linked() {
        return AspectAdjustment::None;
    }

    let adjustment = equalise_spans(host.primary_range(), host.secondary_range());
    if adjustment != AspectAdjustment::None {
        host.apply(adjustment);
    }
    adjustment
}

#[cfg(test)]
mod aspect_tests {
    use super::*;

    fn near(left: f64, right: f64) -> bool {
        (left - right).abs() <= 1e-9 * right.abs().max(1.0)
    }

    #[test]
    fn spans_within_a_factor_of_two_are_left_alone() {
        for secondary in [AxisRange::new(0.0, 10.0), AxisRange::new(0.0, 5.0)] {
            assert_eq!(
                equalise_spans(AxisRange::new(0.0, 10.0), secondary),
                AspectAdjustment::None
            );
        }
    }

    #[test]
    fn the_dead_zone_reaches_exactly_to_its_bounds() {
        assert_eq!(
            equalise_spans(AxisRange::new(0.0, 10.0), AxisRange::new(0.0, 5.0)),
            AspectAdjustment::None
        );
        assert_eq!(
            equalise_spans(AxisRange::new(0.0, 5.0), AxisRange::new(0.0, 10.0)),
            AspectAdjustment::None
        );
    }

    #[test]
    fn a_much_wider_first_axis_widens_the_second_to_match() {
        let adjusted = equalise_spans(AxisRange::new(0.0, 100.0), AxisRange::new(0.0, 10.0));

        let AspectAdjustment::WidenSecondary(range) = adjusted else {
            panic!("the second axis should widen")
        };
        assert!(near(range.span(), 100.0));
        assert!(near(range.minimum, -45.0));
        assert!(near(range.maximum, 55.0));
    }

    #[test]
    fn a_much_wider_second_axis_widens_the_first() {
        let adjusted = equalise_spans(AxisRange::new(0.0, 10.0), AxisRange::new(0.0, 100.0));

        let AspectAdjustment::WidenPrimary(range) = adjusted else {
            panic!("the first axis should widen")
        };
        assert!(near(range.span(), 100.0));
    }

    #[test]
    fn widening_keeps_the_range_centred_on_what_it_showed() {
        let range = AxisRange::new(10.0, 20.0);
        let widened = widened_to_match(range, 40.0);

        assert!(near(
            f64::midpoint(widened.minimum, widened.maximum),
            f64::midpoint(range.minimum, range.maximum)
        ));
        assert!(near(widened.span(), 40.0));
    }

    #[test]
    fn the_smaller_axis_grows_so_nothing_visible_stops_being_visible() {
        let secondary = AxisRange::new(0.0, 10.0);
        let AspectAdjustment::WidenSecondary(range) =
            equalise_spans(AxisRange::new(0.0, 100.0), secondary)
        else {
            panic!("the second axis should widen")
        };

        assert!(range.contains(secondary));
    }

    #[test]
    fn one_correction_is_enough_because_it_goes_all_the_way() {
        let primary = AxisRange::new(0.0, 100.0);
        let AspectAdjustment::WidenSecondary(secondary) =
            equalise_spans(primary, AxisRange::new(0.0, 1.0))
        else {
            panic!("the second axis should widen")
        };

        assert_eq!(equalise_spans(primary, secondary), AspectAdjustment::None);
    }

    #[derive(Debug, Default)]
    struct Diagram {
        linked: bool,
        primary: Option<AxisRange>,
        secondary: Option<AxisRange>,
        applied: Option<AspectAdjustment>,
    }

    impl AspectHost for Diagram {
        fn spans_are_linked(&mut self) -> bool {
            self.linked
        }

        fn primary_range(&mut self) -> AxisRange {
            self.primary.unwrap_or(AxisRange::new(0.0, 1.0))
        }

        fn secondary_range(&mut self) -> AxisRange {
            self.secondary.unwrap_or(AxisRange::new(0.0, 1.0))
        }

        fn apply(&mut self, adjustment: AspectAdjustment) {
            self.applied = Some(adjustment);
        }
    }

    #[test]
    fn a_diagram_that_does_not_link_its_spans_is_left_alone() {
        let mut host = Diagram {
            linked: false,
            primary: Some(AxisRange::new(0.0, 100.0)),
            secondary: Some(AxisRange::new(0.0, 1.0)),
            ..Diagram::default()
        };

        assert_eq!(keep_spans_in_proportion(&mut host), AspectAdjustment::None);
        assert!(host.applied.is_none());
    }

    #[test]
    fn nothing_is_applied_when_the_spans_are_already_in_proportion() {
        let mut host = Diagram {
            linked: true,
            primary: Some(AxisRange::new(0.0, 10.0)),
            secondary: Some(AxisRange::new(0.0, 10.0)),
            ..Diagram::default()
        };

        assert_eq!(keep_spans_in_proportion(&mut host), AspectAdjustment::None);
        assert!(host.applied.is_none());
    }

    #[test]
    fn a_drifted_diagram_has_its_adjustment_applied() {
        let mut host = Diagram {
            linked: true,
            primary: Some(AxisRange::new(0.0, 100.0)),
            secondary: Some(AxisRange::new(0.0, 10.0)),
            ..Diagram::default()
        };

        let adjustment = keep_spans_in_proportion(&mut host);

        assert!(matches!(adjustment, AspectAdjustment::WidenSecondary(_)));
        assert_eq!(host.applied, Some(adjustment));
    }
}

/// The name the rebuilt grid is registered under.
pub const MERGED_GRID_NAME: &str = "Grid";

/// The diagram modes in which the axes can be collapsed to one.
///
/// Part of Ghidra function `FUN_01ce74d0` at `0x01CE74D0`.
///
/// Recovered as a bit mask over the diagram's mode byte, selecting modes zero
/// and two.
pub const MERGEABLE_MODES: u8 = 0x05;

/// Whether one diagram mode allows the axes to be collapsed.
///
/// Part of Ghidra function `FUN_01ce74d0` at `0x01CE74D0`.
#[must_use]
pub const fn mode_allows_merge(mode: u8) -> bool {
    mode < ORIENTATION_LIMIT && (1_u8 << mode) & MERGEABLE_MODES != 0
}

/// What collapsing the diagram's axes needs from it.
pub trait AxisMergeHost {
    /// Whether the diagram is in a state where this can be done at all.
    fn can_merge(&mut self) -> bool;

    /// Which mode the diagram is in.
    fn mode(&mut self) -> u8;

    /// How many axes the second collection holds.
    fn secondary_count(&mut self) -> usize;

    /// How many items the third collection holds.
    fn auxiliary_count(&mut self) -> usize;

    /// How many grid items there are.
    fn grid_count(&mut self) -> usize;

    /// Enables one secondary axis and marks it shown.
    fn enable_secondary(&mut self, index: usize);

    /// Enables one auxiliary item.
    fn enable_auxiliary(&mut self, index: usize);

    /// Puts the item window back to the top and clears the mode's own flag.
    fn reset_window(&mut self);

    /// Whether the first secondary axis carries a linked axis.
    fn first_has_linked_axis(&mut self) -> bool;

    /// Drops that linked axis and tells whatever was listing it.
    fn drop_linked_axis(&mut self);

    /// Drops the secondary axis at one index and tells whatever was listing
    /// it.
    fn drop_secondary(&mut self, index: usize);

    /// Gives the surviving axis the whole diagram's extent and clears its
    /// pen.
    fn adopt_combined_extent(&mut self);

    /// Re-lays-out one surviving secondary axis.
    fn relayout_secondary(&mut self, index: usize);

    /// Frees one grid item.
    fn free_grid_item(&mut self, index: usize);

    /// Empties the grid collection.
    fn clear_grids(&mut self);

    /// Builds one grid under this name, owns it, and binds it to the first
    /// axis of each collection.
    fn build_grid(&mut self, name: &str);
}

/// The index the collapse repeatedly removes.
///
/// Part of Ghidra function `FUN_01ce74d0` at `0x01CE74D0`.
///
/// The recovered loop always removes index one rather than counting
/// downwards, so each removal slides the next axis into the same place. That
/// is what makes the loop terminate on the count rather than on an index.
pub const COLLAPSE_REMOVAL_INDEX: usize = 1;

/// Implements Ghidra function `FUN_01ce74d0` at `0x01CE74D0`.
///
/// Collapses the diagram onto a single axis and rebuilds one grid over it.
///
/// This is the diagram's "everything on one scale" view. Getting there means
/// throwing axes away, so two things have to happen first: every axis and
/// item is switched back on, because one that was hidden would otherwise
/// vanish along with the axis it belonged to; and the item window goes back
/// to the top, because the list it indexes into is about to be much shorter.
///
/// Axes are then removed one at a time, always the second one — each removal
/// slides the next into its place — until only the first is left. That axis
/// takes the extent of everything that was on the others, so no curve ends up
/// outside the scale it is now drawn against.
///
/// The grid is not adjusted but rebuilt: every existing grid item is freed
/// and exactly one new one is made, bound to the first axis of each
/// collection. A grid belongs to an axis pair, and after the collapse there
/// is only one pair for it to belong to.
///
/// Returns whether the collapse happened.
pub fn merge_to_single_axis(host: &mut impl AxisMergeHost) -> bool {
    if !host.can_merge() {
        return false;
    }

    let mode = host.mode();
    if !mode_allows_merge(mode) {
        return false;
    }

    let secondary = host.secondary_count();
    for index in 0..secondary {
        host.enable_secondary(index);
    }

    let auxiliary = host.auxiliary_count();
    for index in 0..auxiliary {
        host.enable_auxiliary(index);
    }

    host.reset_window();

    if host.first_has_linked_axis() {
        host.drop_linked_axis();
    }

    while host.secondary_count() > 1 {
        host.drop_secondary(COLLAPSE_REMOVAL_INDEX);
    }

    host.adopt_combined_extent();

    let surviving = host.secondary_count();
    for index in 0..surviving {
        host.relayout_secondary(index);
    }

    let grids = host.grid_count();
    for index in 0..grids {
        host.free_grid_item(index);
    }
    if grids > 0 {
        host.clear_grids();
    }
    host.build_grid(MERGED_GRID_NAME);

    true
}

#[cfg(test)]
mod merge_tests {
    use super::*;

    #[test]
    fn only_two_of_the_diagrams_modes_allow_the_collapse() {
        assert!(mode_allows_merge(0));
        assert!(mode_allows_merge(2));

        for mode in [1, 3, 4, 5, 6, 7, 8, 200] {
            assert!(!mode_allows_merge(mode), "mode {mode}");
        }
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        EnableSecondary(usize),
        EnableAuxiliary(usize),
        ResetWindow,
        DropLinked,
        DropSecondary(usize),
        AdoptExtent,
        Relayout(usize),
        FreeGrid(usize),
        ClearGrids,
        BuildGrid(String),
    }

    #[derive(Debug, Default)]
    struct Diagram {
        allowed: bool,
        mode: u8,
        secondary: usize,
        auxiliary: usize,
        grids: usize,
        linked: bool,
        steps: Vec<Step>,
    }

    impl Diagram {
        fn ready() -> Self {
            Self {
                allowed: true,
                mode: 0,
                secondary: 3,
                auxiliary: 2,
                grids: 2,
                ..Self::default()
            }
        }
    }

    impl AxisMergeHost for Diagram {
        fn can_merge(&mut self) -> bool {
            self.allowed
        }

        fn mode(&mut self) -> u8 {
            self.mode
        }

        fn secondary_count(&mut self) -> usize {
            self.secondary
        }

        fn auxiliary_count(&mut self) -> usize {
            self.auxiliary
        }

        fn grid_count(&mut self) -> usize {
            self.grids
        }

        fn enable_secondary(&mut self, index: usize) {
            self.steps.push(Step::EnableSecondary(index));
        }

        fn enable_auxiliary(&mut self, index: usize) {
            self.steps.push(Step::EnableAuxiliary(index));
        }

        fn reset_window(&mut self) {
            self.steps.push(Step::ResetWindow);
        }

        fn first_has_linked_axis(&mut self) -> bool {
            self.linked
        }

        fn drop_linked_axis(&mut self) {
            self.linked = false;
            self.steps.push(Step::DropLinked);
        }

        fn drop_secondary(&mut self, index: usize) {
            self.secondary -= 1;
            self.steps.push(Step::DropSecondary(index));
        }

        fn adopt_combined_extent(&mut self) {
            self.steps.push(Step::AdoptExtent);
        }

        fn relayout_secondary(&mut self, index: usize) {
            self.steps.push(Step::Relayout(index));
        }

        fn free_grid_item(&mut self, index: usize) {
            self.steps.push(Step::FreeGrid(index));
        }

        fn clear_grids(&mut self) {
            self.grids = 0;
            self.steps.push(Step::ClearGrids);
        }

        fn build_grid(&mut self, name: &str) {
            self.grids = 1;
            self.steps.push(Step::BuildGrid(name.to_owned()));
        }
    }

    #[test]
    fn a_diagram_that_cannot_merge_is_untouched() {
        let mut host = Diagram {
            allowed: false,
            ..Diagram::ready()
        };

        assert!(!merge_to_single_axis(&mut host));
        assert!(host.steps.is_empty());
    }

    #[test]
    fn a_mode_that_does_not_allow_it_is_untouched_too() {
        let mut host = Diagram {
            mode: 1,
            ..Diagram::ready()
        };

        assert!(!merge_to_single_axis(&mut host));
        assert!(host.steps.is_empty());
    }

    #[test]
    fn everything_is_switched_back_on_before_any_axis_is_thrown_away() {
        let mut host = Diagram::ready();
        merge_to_single_axis(&mut host);

        let last_enable = host
            .steps
            .iter()
            .rposition(|step| matches!(step, Step::EnableSecondary(_) | Step::EnableAuxiliary(_)))
            .expect("things are enabled");
        let first_drop = host
            .steps
            .iter()
            .position(|step| matches!(step, Step::DropSecondary(_)))
            .expect("axes are dropped");

        assert!(last_enable < first_drop);
    }

    #[test]
    fn the_item_window_goes_back_to_the_top_before_the_list_shrinks() {
        let mut host = Diagram::ready();
        merge_to_single_axis(&mut host);

        let reset = host
            .steps
            .iter()
            .position(|step| *step == Step::ResetWindow)
            .expect("the window is reset");
        let first_drop = host
            .steps
            .iter()
            .position(|step| matches!(step, Step::DropSecondary(_)))
            .expect("axes are dropped");

        assert!(reset < first_drop);
    }

    #[test]
    fn axes_are_removed_one_at_a_time_always_at_the_same_index() {
        let mut host = Diagram::ready();
        merge_to_single_axis(&mut host);

        let drops: Vec<_> = host
            .steps
            .iter()
            .filter(|step| matches!(step, Step::DropSecondary(_)))
            .collect();
        assert_eq!(drops.len(), 2);
        assert!(
            drops
                .iter()
                .all(|step| **step == Step::DropSecondary(COLLAPSE_REMOVAL_INDEX))
        );
        assert_eq!(host.secondary, 1);
    }

    #[test]
    fn a_diagram_that_already_has_one_axis_drops_none() {
        let mut host = Diagram {
            secondary: 1,
            ..Diagram::ready()
        };

        assert!(merge_to_single_axis(&mut host));
        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, Step::DropSecondary(_)))
        );
    }

    #[test]
    fn a_linked_axis_is_dropped_before_the_ordinary_ones() {
        let mut host = Diagram {
            linked: true,
            ..Diagram::ready()
        };
        merge_to_single_axis(&mut host);

        let linked = host
            .steps
            .iter()
            .position(|step| *step == Step::DropLinked)
            .expect("the linked axis is dropped");
        let first_drop = host
            .steps
            .iter()
            .position(|step| matches!(step, Step::DropSecondary(_)))
            .expect("axes are dropped");

        assert!(linked < first_drop);
    }

    #[test]
    fn the_surviving_axis_takes_the_extent_before_it_is_laid_out() {
        let mut host = Diagram::ready();
        merge_to_single_axis(&mut host);

        let adopted = host
            .steps
            .iter()
            .position(|step| *step == Step::AdoptExtent)
            .expect("the extent is adopted");
        let laid_out = host
            .steps
            .iter()
            .position(|step| matches!(step, Step::Relayout(_)))
            .expect("it is laid out");

        assert!(adopted < laid_out);
    }

    #[test]
    fn the_grid_is_rebuilt_rather_than_adjusted() {
        let mut host = Diagram::ready();
        merge_to_single_axis(&mut host);

        assert!(host.steps.contains(&Step::FreeGrid(0)));
        assert!(host.steps.contains(&Step::FreeGrid(1)));
        assert!(host.steps.contains(&Step::ClearGrids));
        assert_eq!(
            host.steps.last(),
            Some(&Step::BuildGrid(MERGED_GRID_NAME.to_owned()))
        );
        assert_eq!(host.grids, 1);
    }

    #[test]
    fn a_diagram_with_no_grids_still_gets_one() {
        let mut host = Diagram {
            grids: 0,
            ..Diagram::ready()
        };
        merge_to_single_axis(&mut host);

        assert!(!host.steps.contains(&Step::ClearGrids));
        assert_eq!(
            host.steps.last(),
            Some(&Step::BuildGrid(MERGED_GRID_NAME.to_owned()))
        );
    }
}

/// The diagram modes in which the axes can be split apart.
///
/// Part of Ghidra function `FUN_01ce6ab0` at `0x01CE6AB0`.
///
/// Only one mode allows it, against the two that allow the collapse — so a
/// diagram can be in a state it can be collapsed from but not split, and
/// [`merge_to_single_axis`] is the only way out of it.
pub const SPLITTABLE_MODES: u8 = 0x01;

/// The device modes that suppress the unit on a split axis's label.
///
/// Part of Ghidra function `FUN_01ce6ab0` at `0x01CE6AB0`.
pub const UNITLESS_DEVICE_MODES: u8 = 0x09;

/// The resource string a split axis is named with when its curve has no name.
pub const UNNAMED_CURVE_RESOURCE: u32 = 0x0820;

/// Whether one diagram mode allows the axes to be split.
///
/// Part of Ghidra function `FUN_01ce6ab0` at `0x01CE6AB0`.
#[must_use]
pub const fn mode_allows_split(mode: u8) -> bool {
    mode < ORIENTATION_LIMIT && (1_u8 << mode) & SPLITTABLE_MODES != 0
}

/// Whether a device in one mode wants the unit left off its axis label.
///
/// Part of Ghidra function `FUN_01ce6ab0` at `0x01CE6AB0`.
#[must_use]
pub const fn device_mode_hides_unit(mode: u8) -> bool {
    mode < ORIENTATION_LIMIT && (1_u8 << mode) & UNITLESS_DEVICE_MODES != 0
}

/// Which curves move onto one new axis together.
///
/// Part of Ghidra function `FUN_01ce6ab0` at `0x01CE6AB0`.
///
/// The curve at `first` always goes. When the caller asked for grouping and
/// the curve's owner is of the kind that has units, every *later* curve
/// sharing its unit goes with it — so a split by unit leaves one axis per
/// unit rather than one per curve, which is the point of drawing them
/// together in the first place.
///
/// A curve with no unit of its own never joins a group, not even another
/// curve that also has none: the recovered test refuses the sentinel
/// explicitly rather than comparing it like any other value.
#[must_use]
pub fn curves_moving_together(
    units: &[Option<u32>],
    first: usize,
    group_by_unit: bool,
) -> Vec<usize> {
    let mut moving = vec![first];
    if !group_by_unit {
        return moving;
    }

    let Some(Some(unit)) = units.get(first).copied() else {
        return moving;
    };

    for (index, candidate) in units.iter().enumerate().skip(first + 1) {
        if *candidate == Some(unit) {
            moving.push(index);
        }
    }
    moving
}

/// The range covering every one of a set.
///
/// Part of Ghidra function `FUN_01ce6ab0` at `0x01CE6AB0`.
///
/// The first range seeds the result, as everywhere else in this module, so an
/// axis whose curves all sit far from zero is not dragged back towards it.
#[must_use]
pub fn range_covering(ranges: &[AxisRange]) -> Option<AxisRange> {
    ranges.iter().copied().reduce(AxisRange::union)
}

/// What splitting the diagram's axes needs from it.
pub trait AxisSplitHost {
    /// Whether the diagram is in a state where this can be done at all.
    fn can_split(&mut self) -> bool;

    /// Which mode the diagram is in.
    fn mode(&mut self) -> u8;

    /// Puts the item window back to the top and sets the mode's own flag.
    fn reset_window(&mut self);

    /// How many axes the second collection holds.
    fn axis_count(&mut self) -> usize;

    /// How many curves one axis carries.
    fn curve_count(&mut self, axis: usize) -> usize;

    /// The name of one of an axis's curves, empty when it has none.
    fn curve_name(&mut self, axis: usize, curve: usize) -> String;

    /// The resource string used in place of an empty name.
    fn resource_string(&mut self, id: u32) -> String;

    /// The unit each of an axis's curves carries, in order.
    fn curve_units(&mut self, axis: usize) -> Vec<Option<u32>>;

    /// Whether the device behind an axis wants the unit left off its label.
    fn device_hides_unit(&mut self, axis: usize) -> bool;

    /// Names an axis, appending the diagram's unit unless it is suppressed.
    fn name_axis(&mut self, axis: usize, name: &str, with_unit: bool);

    /// Gives an axis the colour of one of its curves.
    fn take_curve_colour(&mut self, axis: usize, curve: usize);

    /// Moves these curves of one axis onto a new axis of their own,
    /// answering whether a new axis could be made for them.
    fn move_curves_out(&mut self, axis: usize, curves: &[usize]) -> bool;

    /// The ranges of one axis's remaining curves.
    fn curve_ranges(&mut self, axis: usize) -> Vec<AxisRange>;

    /// Gives an axis a range and pins its scroll limits to it.
    fn set_range_and_pin(&mut self, axis: usize, range: AxisRange);
}

/// Implements Ghidra function `FUN_01ce6ab0` at `0x01CE6AB0`.
///
/// Gives each curve — or each group of curves sharing a unit — an axis of its
/// own.
///
/// This is the opposite of [`merge_to_single_axis`], and it is the harder
/// direction: collapsing throws information away, while splitting has to
/// decide what belongs with what. `group_by_unit` is that decision. With it,
/// curves measured in the same unit stay together, which is the whole reason
/// they were drawn on one scale; without it, every curve gets its own scale
/// whatever it measures.
///
/// An axis takes its name and its colour from the curve left on it, so the
/// user can tell which scale belongs to which trace without a legend. A curve
/// with no name of its own falls back to a resource string rather than
/// leaving the axis blank.
///
/// Each axis finally takes the range covering its own remaining curves, and
/// its scroll limits are pinned to that range — so a split axis shows exactly
/// its curves and cannot be scrolled away from them.
///
/// The loop stops when the curves that would move are all the curves there
/// are, because moving them would leave the axis empty and produce nothing
/// new.
///
/// Returns whether the split happened.
pub fn split_to_one_axis_per_curve(host: &mut impl AxisSplitHost, group_by_unit: bool) -> bool {
    if !host.can_split() {
        return false;
    }

    let mode = host.mode();
    if !mode_allows_split(mode) {
        return false;
    }

    host.reset_window();

    let axes = host.axis_count();
    for axis in 0..axes {
        if host.curve_count(axis) == 0 {
            continue;
        }

        label_axis_from_curve(host, axis, 0);
        split_curves_off(host, axis, group_by_unit);

        if host.curve_count(axis) > 0 {
            if let Some(range) = range_covering(&host.curve_ranges(axis)) {
                host.set_range_and_pin(axis, range);
            }
        }
    }

    true
}

fn label_axis_from_curve(host: &mut impl AxisSplitHost, axis: usize, curve: usize) {
    let name = host.curve_name(axis, curve);
    if name.is_empty() {
        let fallback = host.resource_string(UNNAMED_CURVE_RESOURCE);
        host.name_axis(axis, &fallback, false);
        return;
    }

    let with_unit = !host.device_hides_unit(axis);
    host.name_axis(axis, &name, with_unit);
    host.take_curve_colour(axis, curve);
}

fn split_curves_off(host: &mut impl AxisSplitHost, axis: usize, group_by_unit: bool) {
    let mut first = 0;

    while host.curve_count(axis) >= 2 {
        let units = host.curve_units(axis);
        let moving = curves_moving_together(&units, first, group_by_unit);

        if moving.len() == host.curve_count(axis) {
            break;
        }

        if !host.move_curves_out(axis, &moving) {
            first += 1;
        }

        if first >= host.curve_count(axis) {
            break;
        }
    }

    let remaining = host.curve_count(axis).saturating_sub(1);
    label_axis_from_curve(host, axis, first.min(remaining));
}

#[cfg(test)]
mod split_tests {
    use super::*;

    #[test]
    fn one_mode_allows_the_split_against_two_that_allow_the_collapse() {
        assert!(mode_allows_split(0));
        assert!(!mode_allows_split(2));

        // Mode 2 can be collapsed but not split.
        assert!(mode_allows_merge(2));
    }

    #[test]
    fn the_device_modes_that_hide_the_unit_are_the_recovered_pair() {
        assert!(device_mode_hides_unit(0));
        assert!(device_mode_hides_unit(3));

        for mode in [1, 2, 4, 5, 6, 7, 8] {
            assert!(!device_mode_hides_unit(mode), "mode {mode}");
        }
    }

    #[test]
    fn without_grouping_a_curve_moves_alone() {
        let units = [Some(1), Some(1), Some(2)];

        assert_eq!(curves_moving_together(&units, 0, false), [0]);
        assert_eq!(curves_moving_together(&units, 1, false), [1]);
    }

    #[test]
    fn grouping_takes_every_later_curve_sharing_the_unit() {
        let units = [Some(1), Some(2), Some(1), Some(1)];

        assert_eq!(curves_moving_together(&units, 0, true), [0, 2, 3]);
    }

    #[test]
    fn grouping_never_reaches_backwards() {
        let units = [Some(1), Some(1), Some(1)];

        assert_eq!(curves_moving_together(&units, 1, true), [1, 2]);
        assert_eq!(curves_moving_together(&units, 2, true), [2]);
    }

    #[test]
    fn a_curve_with_no_unit_never_joins_a_group() {
        let units = [None, None, Some(1)];

        // Not even another curve that also has none.
        assert_eq!(curves_moving_together(&units, 0, true), [0]);
    }

    #[test]
    fn a_unitless_curve_is_not_taken_along_by_one_that_has_a_unit() {
        let units = [Some(1), None, Some(1)];

        assert_eq!(curves_moving_together(&units, 0, true), [0, 2]);
    }

    #[test]
    fn the_covering_range_is_seeded_by_the_first_rather_than_by_zero() {
        let ranges = [AxisRange::new(100.0, 200.0), AxisRange::new(150.0, 300.0)];

        assert_eq!(range_covering(&ranges), Some(AxisRange::new(100.0, 300.0)));
        assert_eq!(range_covering(&[]), None);
    }

    #[derive(Debug, Clone, PartialEq)]
    enum Step {
        ResetWindow,
        Name(usize, String, bool),
        Colour(usize, usize),
        Move(usize, Vec<usize>),
        Range(usize, AxisRange),
    }

    #[derive(Debug)]
    struct Diagram {
        allowed: bool,
        mode: u8,
        curves: Vec<Vec<Option<u32>>>,
        names: Vec<Vec<String>>,
        hides_unit: bool,
        can_move: bool,
        steps: Vec<Step>,
    }

    impl Diagram {
        fn with(curves: Vec<Vec<Option<u32>>>, names: Vec<Vec<String>>) -> Self {
            Self {
                allowed: true,
                mode: 0,
                curves,
                names,
                hides_unit: false,
                can_move: true,
                steps: Vec::new(),
            }
        }
    }

    impl AxisSplitHost for Diagram {
        fn can_split(&mut self) -> bool {
            self.allowed
        }

        fn mode(&mut self) -> u8 {
            self.mode
        }

        fn reset_window(&mut self) {
            self.steps.push(Step::ResetWindow);
        }

        fn axis_count(&mut self) -> usize {
            self.curves.len()
        }

        fn curve_count(&mut self, axis: usize) -> usize {
            self.curves[axis].len()
        }

        fn curve_name(&mut self, axis: usize, curve: usize) -> String {
            self.names[axis].get(curve).cloned().unwrap_or_default()
        }

        fn resource_string(&mut self, id: u32) -> String {
            format!("res{id:#06x}")
        }

        fn curve_units(&mut self, axis: usize) -> Vec<Option<u32>> {
            self.curves[axis].clone()
        }

        fn device_hides_unit(&mut self, _axis: usize) -> bool {
            self.hides_unit
        }

        fn name_axis(&mut self, axis: usize, name: &str, with_unit: bool) {
            self.steps
                .push(Step::Name(axis, name.to_owned(), with_unit));
        }

        fn take_curve_colour(&mut self, axis: usize, curve: usize) {
            self.steps.push(Step::Colour(axis, curve));
        }

        fn move_curves_out(&mut self, axis: usize, curves: &[usize]) -> bool {
            self.steps.push(Step::Move(axis, curves.to_vec()));
            if !self.can_move {
                return false;
            }
            for index in curves.iter().rev() {
                self.curves[axis].remove(*index);
                if *index < self.names[axis].len() {
                    self.names[axis].remove(*index);
                }
            }
            true
        }

        fn curve_ranges(&mut self, axis: usize) -> Vec<AxisRange> {
            (0..self.curves[axis].len())
                .map(|index| {
                    let base = f64::from(u32::try_from(index).unwrap_or(u32::MAX));
                    AxisRange::new(base, base + 1.0)
                })
                .collect()
        }

        fn set_range_and_pin(&mut self, axis: usize, range: AxisRange) {
            self.steps.push(Step::Range(axis, range));
        }
    }

    #[test]
    fn a_diagram_that_cannot_split_is_untouched() {
        let mut host = Diagram {
            allowed: false,
            ..Diagram::with(
                vec![vec![Some(1), Some(2)]],
                vec![vec!["a".to_owned(), "b".to_owned()]],
            )
        };

        assert!(!split_to_one_axis_per_curve(&mut host, false));
        assert!(host.steps.is_empty());
    }

    #[test]
    fn a_mode_that_does_not_allow_it_is_untouched_too() {
        let mut host = Diagram {
            mode: 2,
            ..Diagram::with(
                vec![vec![Some(1), Some(2)]],
                vec![vec!["a".to_owned(), "b".to_owned()]],
            )
        };

        assert!(!split_to_one_axis_per_curve(&mut host, false));
        assert!(host.steps.is_empty());
    }

    #[test]
    fn an_axis_with_no_curves_is_passed_over() {
        let mut host = Diagram::with(vec![vec![]], vec![vec![]]);

        assert!(split_to_one_axis_per_curve(&mut host, false));
        assert_eq!(host.steps, [Step::ResetWindow]);
    }

    #[test]
    fn an_axis_takes_its_name_and_colour_from_the_curve_left_on_it() {
        let mut host = Diagram::with(vec![vec![Some(1)]], vec![vec!["Voltage".to_owned()]]);

        split_to_one_axis_per_curve(&mut host, false);

        assert!(
            host.steps
                .contains(&Step::Name(0, "Voltage".to_owned(), true))
        );
        assert!(host.steps.contains(&Step::Colour(0, 0)));
    }

    #[test]
    fn a_nameless_curve_falls_back_to_a_resource_string_and_takes_no_unit() {
        let mut host = Diagram::with(vec![vec![Some(1)]], vec![vec![String::new()]]);

        split_to_one_axis_per_curve(&mut host, false);

        assert!(
            host.steps
                .contains(&Step::Name(0, "res0x0820".to_owned(), false))
        );
        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, Step::Colour(..)))
        );
    }

    #[test]
    fn a_device_that_hides_the_unit_still_names_the_axis() {
        let mut host = Diagram {
            hides_unit: true,
            ..Diagram::with(vec![vec![Some(1)]], vec![vec!["Voltage".to_owned()]])
        };

        split_to_one_axis_per_curve(&mut host, false);

        assert!(
            host.steps
                .contains(&Step::Name(0, "Voltage".to_owned(), false))
        );
    }

    #[test]
    fn curves_are_moved_off_one_at_a_time_until_one_is_left() {
        let mut host = Diagram::with(
            vec![vec![Some(1), Some(2), Some(3)]],
            vec![vec!["a".to_owned(), "b".to_owned(), "c".to_owned()]],
        );

        split_to_one_axis_per_curve(&mut host, false);

        let moves = host
            .steps
            .iter()
            .filter(|step| matches!(step, Step::Move(..)))
            .count();
        assert_eq!(moves, 2);
        assert_eq!(host.curves[0].len(), 1);
    }

    #[test]
    fn grouping_leaves_one_axis_per_unit_rather_than_one_per_curve() {
        let mut host = Diagram::with(
            vec![vec![Some(1), Some(2), Some(1)]],
            vec![vec!["a".to_owned(), "b".to_owned(), "c".to_owned()]],
        );

        split_to_one_axis_per_curve(&mut host, true);

        assert!(host.steps.contains(&Step::Move(0, vec![0, 2])));
        assert_eq!(host.curves[0], [Some(2)]);
    }

    #[test]
    fn nothing_moves_when_every_curve_would_move_together() {
        let mut host = Diagram::with(
            vec![vec![Some(1), Some(1)]],
            vec![vec!["a".to_owned(), "b".to_owned()]],
        );

        split_to_one_axis_per_curve(&mut host, true);

        assert!(!host.steps.iter().any(|step| matches!(step, Step::Move(..))));
        assert_eq!(host.curves[0].len(), 2);
    }

    #[test]
    fn a_split_axis_is_given_the_range_covering_what_is_left_on_it() {
        let mut host = Diagram::with(
            vec![vec![Some(1), Some(2)]],
            vec![vec!["a".to_owned(), "b".to_owned()]],
        );

        split_to_one_axis_per_curve(&mut host, false);

        assert!(
            host.steps
                .iter()
                .any(|step| matches!(step, Step::Range(0, _)))
        );
    }

    #[test]
    fn a_split_that_cannot_make_new_axes_gives_up_rather_than_looping() {
        let mut host = Diagram {
            can_move: false,
            ..Diagram::with(
                vec![vec![Some(1), Some(2), Some(3)]],
                vec![vec!["a".to_owned(), "b".to_owned(), "c".to_owned()]],
            )
        };

        assert!(split_to_one_axis_per_curve(&mut host, false));
        assert_eq!(host.curves[0].len(), 3);
    }
}
