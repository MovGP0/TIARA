//! Drawing a diagram's curves.
//!
//! A recorded curve can hold far more points than the strip of screen it is
//! drawn on has pixels, and drawing them all would put several points on
//! every column to no visible effect. The decisions here are about noticing
//! that and about not drawing what is off screen.

/// The setting that allows the decimating fast path at all.
pub const QUICK_DRAW_SETTING: &str = "QuickDraw";

/// How many points per pixel of width the fast path needs before it is worth
/// taking.
///
/// Part of Ghidra function `FUN_01d2b960` at `0x01D2B960`.
///
/// The recovered test is `width * 2 < points`, so the fast path waits until
/// there is more than one point for every half-pixel. Below that the careful
/// path is used, because decimating a curve that is not actually crowded
/// would drop detail the user could see.
pub const POINTS_PER_PIXEL_THRESHOLD: i32 = 2;

/// The colour a selected curve is drawn in, as a Windows `COLORREF`.
///
/// The bytes run blue, green, red, so this is red.
pub const SELECTED_CURVE_COLOUR: u32 = 0x0000_00ff;

/// The colour every curve takes when the diagram is drawn without colour.
pub const MONOCHROME_CURVE_COLOUR: u32 = 0x0000_0000;

/// What a curve is about to be drawn with.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CurvePen {
    /// The colour to draw in.
    pub colour: u32,
}

/// Which colour one curve is drawn in.
///
/// Part of Ghidra function `FUN_01d2b960` at `0x01D2B960`.
///
/// Three rules apply in order and the later ones simply overwrite: the
/// curve's own colour, then red if it is selected, then black if the diagram
/// is being drawn without colour. So a selected curve in a monochrome drawing
/// comes out black like the rest — the monochrome rule is last because it has
/// to win over everything.
#[must_use]
pub const fn curve_pen(own_colour: u32, selected: bool, monochrome: bool) -> CurvePen {
    let selected_colour = if selected {
        SELECTED_CURVE_COLOUR
    } else {
        own_colour
    };
    let colour = if monochrome {
        MONOCHROME_CURVE_COLOUR
    } else {
        selected_colour
    };
    CurvePen { colour }
}

/// Whether one curve is worth drawing at all.
///
/// Part of Ghidra function `FUN_01d2b960` at `0x01D2B960`.
///
/// Four things have to hold: at least two points to join, somewhere to put
/// them, and a destination rectangle with both a width and a height. A curve
/// failing any of them is skipped entirely rather than drawn as nothing,
/// which is what keeps a collapsed diagram from spending time on its
/// contents.
#[must_use]
pub const fn curve_is_drawable(points: i32, has_points: bool, width: i32, height: i32) -> bool {
    points > 1 && has_points && width > 0 && height > 0
}

/// Which way one curve is drawn.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DrawPath {
    /// Not at all.
    Skipped,
    /// Point by point, each segment clipped against the visible rectangle.
    Clipped,
    /// Decimated to about one point per column.
    Decimated,
}

/// Which path one curve takes.
///
/// Part of Ghidra function `FUN_01d2b960` at `0x01D2B960`.
///
/// The fast path needs three things at once — the curve must allow it, the
/// setting must be on, and the curve must actually be crowded. Requiring all
/// three means the setting speeds up the drawings that are slow without
/// changing the ones that are not.
#[must_use]
pub const fn draw_path(
    points: i32,
    has_points: bool,
    width: i32,
    height: i32,
    curve_allows_quick_draw: bool,
    quick_draw_enabled: bool,
) -> DrawPath {
    if !curve_is_drawable(points, has_points, width, height) {
        return DrawPath::Skipped;
    }

    if curve_allows_quick_draw && quick_draw_enabled && width * POINTS_PER_PIXEL_THRESHOLD < points
    {
        return DrawPath::Decimated;
    }

    DrawPath::Clipped
}

/// What drawing one object that knows how to draw itself needs.
pub trait SelfDrawingHost {
    /// Marks the object as being drawn.
    fn begin(&mut self);

    /// Whether it has anything to draw.
    fn has_content(&mut self) -> bool;

    /// Draws it.
    fn draw(&mut self);
}

/// Implements Ghidra function `FUN_01d2b0a0` at `0x01D2B0A0`.
///
/// Draws one object, if it has anything to draw.
///
/// The object is marked *before* it is asked whether it has content, because
/// the mark is what makes it work that out — asking first would get the
/// previous answer.
///
/// Returns whether anything was drawn.
pub fn draw_if_present(host: &mut impl SelfDrawingHost) -> bool {
    host.begin();
    if !host.has_content() {
        return false;
    }
    host.draw();
    true
}

/// Implements Ghidra function `FUN_01d7c760` at `0x01D7C760`.
///
/// Answers one query with nothing.
///
/// The recovered handler writes zero to its out-parameter and looks at
/// neither of its other two arguments. It is a deliberate refusal rather than
/// an unfinished one: the caller expects an answer and this is the answer
/// that means "none", so leaving the handler off entirely would not do the
/// same thing.
///
/// Ghidra functions `FUN_01d7c770` at `0x01D7C770` and `FUN_01d7c780` at
/// `0x01D7C780` are the same body again. Three separate handlers compiled
/// identically, each hooked to a different event — so the refusal is declared
/// per event rather than one handler being shared between them.
#[must_use]
pub const fn empty_response() -> u16 {
    0
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn a_curve_needs_two_points_and_a_rectangle_with_both_dimensions() {
        assert!(curve_is_drawable(2, true, 100, 50));

        assert!(!curve_is_drawable(1, true, 100, 50));
        assert!(!curve_is_drawable(2, false, 100, 50));
        assert!(!curve_is_drawable(2, true, 0, 50));
        assert!(!curve_is_drawable(2, true, 100, 0));
    }

    #[test]
    fn an_undrawable_curve_takes_no_path_at_all() {
        assert_eq!(draw_path(1, true, 100, 50, true, true), DrawPath::Skipped);
    }

    #[test]
    fn a_crowded_curve_is_decimated_when_the_setting_allows_it() {
        // 100 pixels wide, 300 points: more than one point per half-pixel.
        assert_eq!(
            draw_path(300, true, 100, 50, true, true),
            DrawPath::Decimated
        );
    }

    #[test]
    fn a_curve_that_is_not_crowded_is_drawn_carefully_even_with_the_setting_on() {
        // Exactly two points per pixel is not yet more than two.
        assert_eq!(draw_path(200, true, 100, 50, true, true), DrawPath::Clipped);
        assert_eq!(
            draw_path(201, true, 100, 50, true, true),
            DrawPath::Decimated
        );
    }

    #[test]
    fn the_fast_path_needs_all_three_conditions() {
        for (allows, enabled) in [(false, true), (true, false), (false, false)] {
            assert_eq!(
                draw_path(10_000, true, 100, 50, allows, enabled),
                DrawPath::Clipped,
                "allows {allows}, enabled {enabled}"
            );
        }
    }

    #[test]
    fn a_selected_curve_is_drawn_red() {
        assert_eq!(
            curve_pen(0x00ff_0000, true, false).colour,
            SELECTED_CURVE_COLOUR
        );
    }

    #[test]
    fn an_ordinary_curve_keeps_its_own_colour() {
        assert_eq!(curve_pen(0x00ff_0000, false, false).colour, 0x00ff_0000);
    }

    #[test]
    fn the_monochrome_rule_wins_over_the_selection_one() {
        assert_eq!(
            curve_pen(0x00ff_0000, true, true).colour,
            MONOCHROME_CURVE_COLOUR
        );
        assert_eq!(
            curve_pen(0x00ff_0000, false, true).colour,
            MONOCHROME_CURVE_COLOUR
        );
    }

    #[test]
    fn the_selected_colour_is_red_in_the_recovered_byte_order() {
        assert_eq!(SELECTED_CURVE_COLOUR & 0x00_00ff, 0xff);
        assert_eq!(SELECTED_CURVE_COLOUR & 0xff_ff00, 0);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum Step {
        Begin,
        Draw,
    }

    #[derive(Debug, Default)]
    struct Object {
        content: bool,
        marked_before_asking: Option<bool>,
        marked: bool,
        steps: Vec<Step>,
    }

    impl SelfDrawingHost for Object {
        fn begin(&mut self) {
            self.marked = true;
            self.steps.push(Step::Begin);
        }

        fn has_content(&mut self) -> bool {
            self.marked_before_asking = Some(self.marked);
            self.content
        }

        fn draw(&mut self) {
            self.steps.push(Step::Draw);
        }
    }

    #[test]
    fn an_object_with_content_is_drawn() {
        let mut host = Object {
            content: true,
            ..Object::default()
        };

        assert!(draw_if_present(&mut host));
        assert_eq!(host.steps, [Step::Begin, Step::Draw]);
    }

    #[test]
    fn an_object_with_nothing_to_draw_is_still_marked() {
        let mut host = Object::default();

        assert!(!draw_if_present(&mut host));
        assert_eq!(host.steps, [Step::Begin]);
    }

    #[test]
    fn the_mark_comes_before_the_question_because_it_decides_the_answer() {
        let mut host = Object {
            content: true,
            ..Object::default()
        };
        draw_if_present(&mut host);

        assert_eq!(host.marked_before_asking, Some(true));
    }

    #[test]
    fn the_empty_response_is_an_answer_rather_than_an_absence() {
        assert_eq!(empty_response(), 0);
    }
}

/// The value a column's span starts at before anything has been put in it.
///
/// Part of Ghidra function `FUN_01d27ab0` at `0x01D27AB0`.
///
/// Far enough outside any real coordinate that the first point always wins,
/// and symmetric with [`EMPTY_SPAN_BOTTOM`] so an untouched column is
/// recognisable by its top being above its bottom.
pub const EMPTY_SPAN_TOP: i32 = 0x0700_0000;

/// The matching value for the bottom of an untouched column.
pub const EMPTY_SPAN_BOTTOM: i32 = -0x0700_0000;

/// The widest pen the fast path will build a profile for.
///
/// Part of Ghidra function `FUN_01d27ab0` at `0x01D27AB0`.
///
/// A wider pen is drawn as if it were this wide rather than being refused, so
/// an absurd width degrades the drawing instead of breaking it.
pub const MAX_PEN_WIDTH: i32 = 2000;

/// The vertical extent one column of a curve occupies.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ColumnSpan {
    /// The topmost row.
    pub top: i32,
    /// The bottom-most row.
    pub bottom: i32,
}

impl ColumnSpan {
    /// A column nothing has been put into yet.
    #[must_use]
    pub const fn empty() -> Self {
        Self {
            top: EMPTY_SPAN_TOP,
            bottom: EMPTY_SPAN_BOTTOM,
        }
    }

    /// Whether anything has been put into it.
    #[must_use]
    pub const fn is_empty(self) -> bool {
        self.top > self.bottom
    }

    /// Widens the span to take in a row.
    pub const fn include(&mut self, row: i32) {
        if row < self.top {
            self.top = row;
        }
        if row > self.bottom {
            self.bottom = row;
        }
    }
}

impl Default for ColumnSpan {
    fn default() -> Self {
        Self::empty()
    }
}

/// How far a round pen of one width reaches above and below, column by
/// column.
///
/// Part of Ghidra function `FUN_01d27ab0` at `0x01D27AB0`.
///
/// Each entry is the chord of a circle of that diameter at that horizontal
/// offset, so a thick curve is widened by the shape of the pen rather than by
/// a constant — which is what makes its ends round rather than square.
///
/// The offsets run from `1 - width/2` to `width/2` and the circle is centred
/// half a pixel along, so an even width comes out symmetric about the gap
/// between two columns rather than about a column.
#[must_use]
pub fn pen_profile(width: i32) -> Vec<i32> {
    let width = width.min(MAX_PEN_WIDTH);
    if width <= 0 {
        return Vec::new();
    }

    let half = width / 2;
    let first = half - width + 1;
    let centre = f64::from(first + half) / 2.0;
    let radius = f64::from(width) / 2.0;

    (first..=half)
        .map(|offset| {
            let along = f64::from(offset) - centre;
            let squared = radius.mul_add(radius, -(along * along));
            let chord = if squared > 0.0 { squared.sqrt() } else { 0.0 };
            // The chord of a circle whose diameter is the clamped pen
            // width, so it cannot exceed MAX_PEN_WIDTH.
            #[allow(clippy::cast_possible_truncation)]
            let doubled = (chord * 2.0).round() as i32;
            doubled
        })
        .collect()
}

/// Widens every column's span by the pen's profile.
///
/// Part of Ghidra function `FUN_01d27ab0` at `0x01D27AB0`.
///
/// A column that holds nothing spreads nothing, so a gap in the curve stays a
/// gap however thick the pen is.
///
/// The chord is split unevenly on purpose: half of it goes above and half of
/// `chord - 1` below, so an odd chord puts its extra row on top. Doing it the
/// same way everywhere is what stops a thick horizontal line looking one row
/// thicker in some columns than others.
#[must_use]
pub fn spread_pen(raw: &[ColumnSpan], width: i32) -> Vec<ColumnSpan> {
    let profile = pen_profile(width);
    if profile.is_empty() {
        return raw.to_vec();
    }

    let half = width.min(MAX_PEN_WIDTH) / 2;
    let first = half - width.min(MAX_PEN_WIDTH) + 1;

    let mut spread = vec![ColumnSpan::empty(); raw.len()];
    let last = i32::try_from(raw.len()).unwrap_or(i32::MAX) - 1;

    for (index, column) in raw.iter().enumerate() {
        if column.is_empty() {
            continue;
        }

        let here = i32::try_from(index).unwrap_or(i32::MAX);
        let from = (here + first).max(0);
        let to = (here + half).min(last);

        for target in from..=to {
            let Ok(slot) = usize::try_from(target) else {
                continue;
            };
            let Ok(offset) = usize::try_from(target - here - first) else {
                continue;
            };
            let Some(chord) = profile.get(offset) else {
                continue;
            };

            let top = column.top - (chord / 2);
            let bottom = column.bottom + ((chord - 1) / 2);

            if top < spread[slot].top {
                spread[slot].top = top;
            }
            if bottom > spread[slot].bottom {
                spread[slot].bottom = bottom;
            }
        }
    }

    spread
}

/// Clips every column's span to the drawing's own top and bottom.
///
/// Part of Ghidra function `FUN_01d27ab0` at `0x01D27AB0`.
///
/// A column whose span falls entirely outside becomes empty rather than being
/// clamped to a single row at the edge, so a curve that leaves the plot does
/// not leave a line along its border.
#[must_use]
pub fn clip_columns(spans: &[ColumnSpan], top: i32, bottom: i32) -> Vec<Option<ColumnSpan>> {
    spans
        .iter()
        .map(|span| {
            if span.is_empty() {
                return None;
            }
            let clipped = ColumnSpan {
                top: span.top.max(top),
                bottom: span.bottom.min(bottom),
            };
            (!clipped.is_empty()).then_some(clipped)
        })
        .collect()
}

/// Joins columns whose spans do not meet.
///
/// Part of Ghidra function `FUN_01d27ab0` at `0x01D27AB0`.
///
/// Drawing one vertical bar per column is what makes the fast path fast, and
/// it is also what would make a steeply rising curve come out as a dotted
/// stair. Where one column's bar starts more than a row past where its
/// neighbour's ended, the two are met in the middle — the gap is split
/// between them rather than either being stretched to cover it, so neither
/// bar is drawn further from its own data than it has to be.
pub fn close_gaps(columns: &mut [Option<ColumnSpan>], raw: &[ColumnSpan]) {
    for index in 1..columns.len() {
        let (Some(previous), Some(current)) = (columns[index - 1], columns[index]) else {
            continue;
        };

        if previous.bottom + 1 < current.top {
            let meeting = (raw[index].top + raw[index - 1].bottom + 1) / 2;
            columns[index] = Some(ColumnSpan {
                top: meeting,
                ..current
            });
            columns[index - 1] = Some(ColumnSpan {
                bottom: meeting - 1,
                ..previous
            });
        } else if current.bottom < previous.top - 1 {
            let meeting = (raw[index].bottom + raw[index - 1].top - 1) / 2;
            columns[index] = Some(ColumnSpan {
                bottom: meeting,
                ..current
            });
            columns[index - 1] = Some(ColumnSpan {
                top: meeting + 1,
                ..previous
            });
        }
    }
}

/// What drawing the rasterised columns needs.
pub trait ColumnDrawHost {
    /// Draws one column's bar, from its top row to one past its bottom.
    fn draw_column(&mut self, x: i32, top: i32, bottom_exclusive: i32);
}

/// Implements Ghidra function `FUN_01d27ab0` at `0x01D27AB0`.
///
/// Draws a crowded curve as one vertical bar per column.
///
/// This is what the fast path buys: a curve with tens of thousands of points
/// becomes as many bars as the plot is wide, and the drawing takes time
/// proportional to the *screen* rather than to the data. The result is
/// identical wherever more than one point falls in a column, because a column
/// can only show the range its points covered anyway.
///
/// The three stages that follow accumulation each earn their place — the pen
/// profile makes a thick curve round rather than square, the clip keeps a
/// curve that leaves the plot from drawing along its border, and the
/// gap-closing keeps a steep curve from coming out as a dotted stair.
///
/// Returns how many columns were drawn.
pub fn draw_columns(
    host: &mut impl ColumnDrawHost,
    raw: &[ColumnSpan],
    pen_width: i32,
    left: i32,
    top: i32,
    bottom: i32,
) -> usize {
    let spread = spread_pen(raw, pen_width);
    let mut columns = clip_columns(&spread, top, bottom);
    close_gaps(&mut columns, &spread);

    let mut drawn = 0;
    for (index, column) in columns.iter().enumerate() {
        let Some(span) = column else {
            continue;
        };
        let clamped = ColumnSpan {
            top: span.top.max(top),
            bottom: span.bottom.min(bottom),
        };
        if clamped.is_empty() {
            continue;
        }

        let x = left + i32::try_from(index).unwrap_or(i32::MAX);
        host.draw_column(x, clamped.top, clamped.bottom + 1);
        drawn += 1;
    }
    drawn
}

#[cfg(test)]
mod raster_tests {
    use super::*;

    #[test]
    fn an_untouched_column_is_recognisable_by_its_own_sentinels() {
        let empty = ColumnSpan::empty();

        assert!(empty.is_empty());
        assert_eq!(empty.top, EMPTY_SPAN_TOP);
        assert_eq!(empty.bottom, EMPTY_SPAN_BOTTOM);
        assert_eq!(EMPTY_SPAN_TOP, -EMPTY_SPAN_BOTTOM);
    }

    #[test]
    fn the_first_row_put_into_a_column_wins_over_both_sentinels() {
        let mut column = ColumnSpan::empty();
        column.include(40);

        assert!(!column.is_empty());
        assert_eq!(
            column,
            ColumnSpan {
                top: 40,
                bottom: 40
            }
        );
    }

    #[test]
    fn a_column_grows_to_cover_every_row_put_into_it() {
        let mut column = ColumnSpan::empty();
        for row in [40, 10, 25, 90] {
            column.include(row);
        }

        assert_eq!(
            column,
            ColumnSpan {
                top: 10,
                bottom: 90
            }
        );
    }

    #[test]
    fn a_pen_of_no_width_has_no_profile() {
        assert!(pen_profile(0).is_empty());
        assert!(pen_profile(-5).is_empty());
    }

    #[test]
    fn the_profile_has_one_entry_per_column_the_pen_covers() {
        for width in [1, 2, 3, 8, 17] {
            assert_eq!(
                pen_profile(width).len(),
                usize::try_from(width).expect("a positive width"),
                "width {width}"
            );
        }
    }

    #[test]
    fn an_absurd_pen_width_is_narrowed_rather_than_refused() {
        assert_eq!(
            pen_profile(100_000).len(),
            usize::try_from(MAX_PEN_WIDTH).expect("a positive width")
        );
    }

    #[test]
    fn the_profile_is_widest_in_the_middle_and_narrows_to_its_edges() {
        let profile = pen_profile(9);
        let middle = profile.len() / 2;

        assert!(profile[middle] >= profile[0]);
        assert!(profile[middle] >= profile[profile.len() - 1]);
        assert!(profile[0] <= profile[1]);
    }

    #[test]
    fn the_profile_reaches_about_the_pens_own_width_at_its_centre() {
        let profile = pen_profile(10);
        let widest = profile.iter().copied().max().expect("a profile");

        assert!((9..=10).contains(&widest), "widest was {widest}");
    }

    #[test]
    fn an_empty_column_spreads_nothing_however_thick_the_pen() {
        let raw = vec![ColumnSpan::empty(); 5];
        let spread = spread_pen(&raw, 9);

        assert!(spread.iter().all(|column| column.is_empty()));
    }

    #[test]
    fn a_single_point_spreads_into_the_columns_the_pen_covers() {
        let mut raw = vec![ColumnSpan::empty(); 9];
        raw[4] = ColumnSpan {
            top: 50,
            bottom: 50,
        };

        let spread = spread_pen(&raw, 5);
        let touched = spread.iter().filter(|c| !c.is_empty()).count();

        assert!(touched > 1, "a thick pen should reach its neighbours");
        assert!(!spread[4].is_empty());
    }

    #[test]
    fn a_pen_of_no_width_leaves_the_columns_exactly_as_they_were() {
        let mut raw = vec![ColumnSpan::empty(); 3];
        raw[1] = ColumnSpan {
            top: 10,
            bottom: 20,
        };

        assert_eq!(spread_pen(&raw, 0), raw);
    }

    #[test]
    fn the_spread_never_reaches_outside_the_columns_there_are() {
        let mut raw = vec![ColumnSpan::empty(); 3];
        raw[0] = ColumnSpan {
            top: 10,
            bottom: 10,
        };
        raw[2] = ColumnSpan {
            top: 10,
            bottom: 10,
        };

        // Would reach well past both ends if it were not bounded.
        assert_eq!(spread_pen(&raw, 21).len(), 3);
    }

    #[test]
    fn a_span_entirely_outside_the_plot_is_dropped_rather_than_flattened() {
        let spans = [
            ColumnSpan {
                top: -50,
                bottom: -40,
            },
            ColumnSpan {
                top: 10,
                bottom: 20,
            },
            ColumnSpan {
                top: 500,
                bottom: 600,
            },
        ];

        let clipped = clip_columns(&spans, 0, 100);

        assert_eq!(clipped[0], None);
        assert_eq!(
            clipped[1],
            Some(ColumnSpan {
                top: 10,
                bottom: 20
            })
        );
        assert_eq!(clipped[2], None);
    }

    #[test]
    fn a_span_that_straddles_the_edge_is_cut_to_it() {
        let spans = [ColumnSpan {
            top: -10,
            bottom: 50,
        }];

        assert_eq!(
            clip_columns(&spans, 0, 100)[0],
            Some(ColumnSpan { top: 0, bottom: 50 })
        );
    }

    #[test]
    fn an_empty_column_clips_to_nothing() {
        assert_eq!(clip_columns(&[ColumnSpan::empty()], 0, 100)[0], None);
    }

    #[test]
    fn neighbouring_bars_that_already_meet_are_left_alone() {
        let raw = [
            ColumnSpan {
                top: 10,
                bottom: 20,
            },
            ColumnSpan {
                top: 21,
                bottom: 30,
            },
        ];
        let mut columns: Vec<_> = raw.iter().copied().map(Some).collect();
        let before = columns.clone();

        close_gaps(&mut columns, &raw);

        assert_eq!(columns, before);
    }

    #[test]
    fn a_gap_between_two_bars_is_split_between_them() {
        let raw = [
            ColumnSpan {
                top: 10,
                bottom: 20,
            },
            ColumnSpan {
                top: 60,
                bottom: 70,
            },
        ];
        let mut columns: Vec<_> = raw.iter().copied().map(Some).collect();

        close_gaps(&mut columns, &raw);

        let first = columns[0].expect("still drawn");
        let second = columns[1].expect("still drawn");

        // They now meet, and neither was stretched the whole way.
        assert_eq!(first.bottom + 1, second.top);
        assert!(first.bottom > 20);
        assert!(second.top < 60);
    }

    #[test]
    fn a_gap_the_other_way_round_is_closed_too() {
        let raw = [
            ColumnSpan {
                top: 60,
                bottom: 70,
            },
            ColumnSpan {
                top: 10,
                bottom: 20,
            },
        ];
        let mut columns: Vec<_> = raw.iter().copied().map(Some).collect();

        close_gaps(&mut columns, &raw);

        let first = columns[0].expect("still drawn");
        let second = columns[1].expect("still drawn");

        assert_eq!(second.bottom + 1, first.top);
    }

    #[test]
    fn a_gap_next_to_an_empty_column_is_left_open() {
        let raw = [
            ColumnSpan {
                top: 10,
                bottom: 20,
            },
            ColumnSpan::empty(),
            ColumnSpan {
                top: 60,
                bottom: 70,
            },
        ];
        let mut columns = vec![Some(raw[0]), None, Some(raw[2])];

        close_gaps(&mut columns, &raw);

        assert_eq!(columns[0], Some(raw[0]));
        assert_eq!(columns[2], Some(raw[2]));
    }

    #[derive(Debug, Default)]
    struct Canvas {
        bars: Vec<(i32, i32, i32)>,
    }

    impl ColumnDrawHost for Canvas {
        fn draw_column(&mut self, x: i32, top: i32, bottom_exclusive: i32) {
            self.bars.push((x, top, bottom_exclusive));
        }
    }

    #[test]
    fn one_bar_is_drawn_per_column_that_holds_anything() {
        let raw = vec![
            ColumnSpan {
                top: 10,
                bottom: 20,
            },
            ColumnSpan::empty(),
            ColumnSpan {
                top: 30,
                bottom: 31,
            },
        ];
        let mut host = Canvas::default();

        assert_eq!(draw_columns(&mut host, &raw, 0, 100, 0, 200), 2);
        assert_eq!(host.bars, [(100, 10, 21), (102, 30, 32)]);
    }

    #[test]
    fn the_bar_runs_one_past_its_bottom_row() {
        let raw = vec![ColumnSpan { top: 5, bottom: 5 }];
        let mut host = Canvas::default();

        draw_columns(&mut host, &raw, 0, 0, 0, 200);

        assert_eq!(host.bars, [(0, 5, 6)]);
    }

    #[test]
    fn a_curve_entirely_outside_the_plot_draws_nothing() {
        let raw = vec![
            ColumnSpan {
                top: 500,
                bottom: 600
            };
            4
        ];
        let mut host = Canvas::default();

        assert_eq!(draw_columns(&mut host, &raw, 0, 0, 0, 100), 0);
        assert!(host.bars.is_empty());
    }

    #[test]
    fn the_work_is_proportional_to_the_plots_width_not_the_data() {
        // However many points went in, there is at most one bar per column.
        let raw = vec![ColumnSpan { top: 0, bottom: 90 }; 7];
        let mut host = Canvas::default();

        assert_eq!(draw_columns(&mut host, &raw, 0, 0, 0, 100), 7);
    }
}
