//! Iced state for the recovered Schematic Editor component rack.
//!
//! The rack is the strip of part symbols above the schematic together with the
//! drop-down that names the same parts. Both pick the component the next
//! insertion places, and both share the editor's hint routing.

/// The form the recovered handlers belong to.
pub const FORM_RESOURCE: &str = "SchematicEditor";

/// The recovered "nothing is selected" component index.
pub const NO_SELECTION: i32 = -1;

/// The key the component drop-down commits its text on.
pub const COMMIT_KEY: u16 = 0x000D;

/// The key value the handler writes back to swallow a handled key.
pub const CONSUMED_KEY: u16 = 0;

/// The `gdSelected` bit of a grid cell's draw state.
pub const CELL_SELECTED: u8 = 0x01;

/// The `gdHotTrack` bit of a grid cell's draw state.
pub const CELL_HOT_TRACK: u8 = 0x10;

/// The fill behind a part cell that is neither selected nor hot-tracked.
pub const IDLE_CELL_FILL: u32 = 0x00EF_EFEF;

/// The Delphi system colour `clBtnHighlight`.
pub const BUTTON_HIGHLIGHT: u32 = 0xFF00_0014;

/// The Delphi system colour `clBtnShadow`.
pub const BUTTON_SHADOW: u32 = 0xFF00_0010;

/// The Delphi system colour `clBtnFace`, used for the symbol's own background.
pub const BUTTON_FACE: u32 = 0xFF00_000F;

/// The gap the recovered icon strip leaves between two items.
pub const ICON_STRIP_GAP: i32 = 2;

pub trait ComponentDropDownHost {
    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Resolves the drop-down's current selection to a component index.
    ///
    /// Returns [`NO_SELECTION`] when the selection names nothing insertable,
    /// which is also what a cancelled macro file chooser reports.
    fn resolve_selection(&mut self) -> i32;

    /// Inserts the component with this index.
    fn insert_component(&mut self, index: i32);
}

/// Implements Ghidra function `FUN_01c703e0` at `0x01C703E0`.
///
/// Handles `TopToolBar.CompDropDownP.CompDropDown.OnClick`.
///
/// Choosing a name in the drop-down inserts that component straight away — the
/// list is a shortcut for the rack, not a mode. Resolving the name is what may
/// open a macro file chooser, so a cancelled chooser reports no selection and
/// nothing is inserted.
pub fn drop_down_selection_changed(host: &mut impl ComponentDropDownHost) -> bool {
    if host.editing_blocked() {
        return false;
    }

    let index = host.resolve_selection();
    if index == NO_SELECTION {
        return false;
    }

    host.insert_component(index);
    true
}

pub trait ComponentDropDownTextHost: ComponentDropDownHost {
    /// The text currently in the drop-down's edit field.
    fn typed_text(&mut self) -> String;

    /// Finds an item by text, or [`NO_SELECTION`] when nothing matches.
    fn find_item(&mut self, text: &str) -> i32;

    /// The text of one item.
    fn item_text(&mut self, index: i32) -> String;

    /// Writes the drop-down's edit field.
    fn set_text(&mut self, text: &str);

    fn set_item_index(&mut self, index: i32);
}

/// Implements Ghidra function `FUN_01c70430` at `0x01C70430`.
///
/// Handles `TopToolBar.CompDropDownP.CompDropDown.OnKeyPress`.
///
/// Every key but Return falls through to the combo box untouched. Return
/// commits what was typed: the text is looked up in the list, the matching
/// item's own spelling replaces it, and the insertion runs as though the item
/// had been clicked.
///
/// Text that matches nothing falls back to the first item rather than being
/// rejected, so Return always inserts something. The key is then swallowed,
/// which is what stops the beep a combo box makes on an unhandled Return.
///
/// Returns the key to pass on: [`CONSUMED_KEY`] once Return has been handled.
pub fn drop_down_key_pressed(key: u16, host: &mut impl ComponentDropDownTextHost) -> u16 {
    if key != COMMIT_KEY {
        return key;
    }

    let typed = host.typed_text();
    let mut index = host.find_item(&typed);
    if index == NO_SELECTION {
        index = 0;
    }

    let resolved = host.item_text(index);
    host.set_text(&resolved);
    host.set_item_index(index);
    drop_down_selection_changed(host);

    CONSUMED_KEY
}

/// A rectangle in the coordinates the recovered handler works in.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Rect {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

impl Rect {
    #[must_use]
    pub const fn width(self) -> i32 {
        self.right - self.left
    }

    #[must_use]
    pub const fn height(self) -> i32 {
        self.bottom - self.top
    }
}

/// What one part cell of the rack should look like.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PartCell {
    /// The part this column shows, once mirroring has been applied.
    ///
    /// `None` means the column is past the end of the part list and is filled
    /// with the window background instead.
    pub part_index: Option<i32>,
    /// Whether the cell paints the selected/hot fill rather than the idle one.
    pub highlighted: bool,
    /// The edge drawn along the top and left of the cell.
    pub top_left_edge: u32,
    /// The edge drawn along the bottom and right of the cell.
    pub bottom_right_edge: u32,
    /// How far the symbol is nudged down and right, so a selected cell reads
    /// as pressed in.
    pub content_offset: i32,
}

/// Implements Ghidra function `FUN_01c72fc0` at `0x01C72FC0`.
///
/// Handles `ComponentPanel.PartGrid.OnDrawCell`.
///
/// Decides how one cell of the component rack is painted.
///
/// The rack is one row of columns, so the column *is* the part index — except
/// when the editor is mirrored, where the columns run the other way and the
/// index is counted back from the end.
///
/// A column past the last part is not drawn as an empty button but filled with
/// the window background, which is what makes a short rack stop cleanly instead
/// of trailing blank buttons. Within the rack, selection and hot-track share one
/// fill, while only selection sinks the border and nudges the symbol — hovering
/// lights a cell up without making it look pressed.
#[must_use]
pub fn part_cell(
    column: i32,
    column_count: i32,
    mirrored: bool,
    state: u8,
    parts: i32,
) -> PartCell {
    let index = if mirrored {
        column_count - column - 1
    } else {
        column
    };

    if index >= parts {
        return PartCell {
            part_index: None,
            highlighted: false,
            top_left_edge: BUTTON_HIGHLIGHT,
            bottom_right_edge: BUTTON_SHADOW,
            content_offset: 0,
        };
    }

    let selected = state & CELL_SELECTED != 0;
    let hot = state & CELL_HOT_TRACK != 0;

    PartCell {
        // A negative index still paints a button frame but draws no symbol,
        // which is what the recovered guard leaves behind when mirroring runs
        // past the start of the rack.
        part_index: (index >= 0).then_some(index),
        highlighted: selected || hot,
        top_left_edge: if selected {
            BUTTON_SHADOW
        } else {
            BUTTON_HIGHLIGHT
        },
        bottom_right_edge: if selected {
            BUTTON_HIGHLIGHT
        } else {
            BUTTON_SHADOW
        },
        content_offset: i32::from(selected),
    }
}

/// Shrinks a cell rectangle the way the recovered handler does before painting.
///
/// The right edge is pulled in by one so neighbouring cells share a single
/// dividing line instead of drawing two adjacent ones.
#[must_use]
pub const fn part_cell_bounds(cell: Rect) -> Rect {
    Rect {
        right: cell.right - 1,
        ..cell
    }
}

/// The evenly spaced icon strip the editor hit-tests for hints.
///
/// The recovered layout record supplies all four measurements; the gap between
/// two items is the fixed [`ICON_STRIP_GAP`].
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct IconStrip {
    /// The left edge of the first item.
    pub origin_x: i32,
    /// The top edge of every item.
    pub origin_y: i32,
    /// The width of one item, not counting the gap.
    pub item_width: i32,
    /// The height of every item.
    pub item_height: i32,
    /// The width of the control the strip is drawn on.
    pub control_width: i32,
}

impl IconStrip {
    /// Implements Ghidra function `FUN_01ca0e80` at `0x01CA0E80`.
    ///
    /// Finds the strip item under a point, if any.
    ///
    /// A point in the gap between two items belongs to neither, so the hint
    /// disappears as the pointer crosses from one icon to the next rather than
    /// jumping straight to the neighbour's text.
    ///
    /// The recovered bounds are exclusive on every side: a point exactly on the
    /// strip's left or top edge misses.
    #[must_use]
    pub const fn item_at(self, x: i32, y: i32) -> Option<i32> {
        if x <= self.origin_x || x >= self.control_width - self.origin_x {
            return None;
        }
        if y <= self.origin_y || y >= self.origin_y + self.item_height {
            return None;
        }

        let stride = self.item_width + ICON_STRIP_GAP;
        let offset = x - self.origin_x;
        if offset % stride >= self.item_width {
            return None;
        }

        Some(offset / stride)
    }

    /// The bounds of one strip item.
    #[must_use]
    pub const fn item_bounds(self, index: i32) -> Rect {
        let left = self.origin_x + index * (self.item_width + ICON_STRIP_GAP);
        Rect {
            left,
            top: self.origin_y,
            right: left + self.item_width,
            bottom: self.origin_y + self.item_height,
        }
    }
}

/// The control a hint request came from.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HintSource {
    /// `ComponentPanel.PartGrid`.
    PartGrid,
    /// The control the icon strip is drawn on.
    IconStrip,
    /// Any other control, which this handler leaves alone.
    Other,
}

/// What the handler decided about one hint request.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HintDecision {
    /// The text to show, or `None` to leave the hint text as it was.
    pub text: Option<String>,
    /// Whether the hint may be shown at all.
    pub can_show: bool,
    /// The rectangle the hint stays visible over.
    pub cursor_rect: Option<Rect>,
    /// How far right the hint window itself is nudged.
    pub hint_offset_x: i32,
    /// How far up the hint window itself is nudged.
    pub hint_offset_y: i32,
}

pub trait HintHost {
    /// Which of the editor's controls asked for a hint.
    fn hint_source(&mut self) -> HintSource;

    /// The cursor position, in the hint control's own coordinates.
    fn cursor_position(&mut self) -> (i32, i32);

    /// Maps a point in the part grid to a cell.
    fn grid_cell_at(&mut self, x: i32, y: i32) -> (i32, i32);

    /// Whether the editor draws the rack right to left.
    fn mirrored(&mut self) -> bool;

    /// The number of columns the grid currently has.
    fn grid_column_count(&mut self) -> i32;

    /// The number of parts in the rack.
    fn part_count(&mut self) -> i32;

    /// The hint text of one part.
    fn part_hint(&mut self, index: i32) -> String;

    /// The bounds of one grid cell.
    fn grid_cell_bounds(&mut self, column: i32, row: i32) -> Rect;

    /// The icon strip's layout.
    fn icon_strip(&mut self) -> IconStrip;

    /// The hint text of one icon-strip item.
    fn icon_hint(&mut self, index: i32) -> String;
}

/// Implements Ghidra function `FUN_01c73b30` at `0x01C73B30`.
///
/// Handles `SchematicEditorEvents.OnShowHint`.
///
/// Turns a hint request into the text, the rectangle it survives over, and
/// whether it may appear at all.
///
/// Both the part rack and the icon strip are single controls holding many
/// items, so the VCL would otherwise show one hint for the whole control. This
/// handler replaces the text per item and narrows the rectangle to that item,
/// which is what makes the hint follow the pointer along the strip.
///
/// A part-grid cell past the end of the rack suppresses the hint entirely
/// rather than showing the previous part's text over empty space.
///
/// The recovered handler measures the cell rectangle from the *part* index
/// rather than the screen column, so a mirrored rack places the hint's
/// rectangle at the mirrored position. That is preserved here.
pub fn show_hint(host: &mut impl HintHost) -> HintDecision {
    let mut decision = HintDecision {
        text: None,
        can_show: true,
        cursor_rect: None,
        hint_offset_x: 0,
        hint_offset_y: 0,
    };

    let (x, y) = host.cursor_position();

    match host.hint_source() {
        HintSource::PartGrid => {
            let (column, row) = host.grid_cell_at(x, y);
            let index = if host.mirrored() {
                host.grid_column_count() - column - 1
            } else {
                column
            };

            if index < 0 || index >= host.part_count() {
                decision.can_show = false;
                return decision;
            }

            decision.text = Some(host.part_hint(index));

            let bounds = host.grid_cell_bounds(index, row);
            decision.cursor_rect = Some(Rect {
                right: bounds.right + 1,
                bottom: bounds.bottom + 1,
                ..bounds
            });
        }
        HintSource::IconStrip => {
            let strip = host.icon_strip();
            let Some(index) = strip.item_at(x, y) else {
                return decision;
            };

            decision.text = Some(host.icon_hint(index));

            let bounds = strip.item_bounds(index);
            decision.cursor_rect = Some(bounds);
            decision.hint_offset_x = bounds.left + 3;
            decision.hint_offset_y = -3 * strip.item_height;
        }
        HintSource::Other => {}
    }

    decision
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct DropDownHost {
        blocked: bool,
        selection: i32,
        items: Vec<String>,
        typed: String,
        text: String,
        item_index: i32,
        inserted: Vec<i32>,
    }

    impl ComponentDropDownHost for DropDownHost {
        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn resolve_selection(&mut self) -> i32 {
            self.selection
        }

        fn insert_component(&mut self, index: i32) {
            self.inserted.push(index);
        }
    }

    impl ComponentDropDownTextHost for DropDownHost {
        fn typed_text(&mut self) -> String {
            self.typed.clone()
        }

        fn find_item(&mut self, text: &str) -> i32 {
            self.items
                .iter()
                .position(|item| item == text)
                .map_or(NO_SELECTION, |index| {
                    i32::try_from(index).unwrap_or(NO_SELECTION)
                })
        }

        fn item_text(&mut self, index: i32) -> String {
            usize::try_from(index)
                .ok()
                .and_then(|index| self.items.get(index))
                .cloned()
                .unwrap_or_default()
        }

        fn set_text(&mut self, text: &str) {
            self.text = text.to_owned();
        }

        fn set_item_index(&mut self, index: i32) {
            self.item_index = index;
        }
    }

    fn drop_down_host() -> DropDownHost {
        DropDownHost {
            selection: 12,
            items: vec!["Resistor".to_owned(), "Capacitor".to_owned()],
            item_index: NO_SELECTION,
            ..DropDownHost::default()
        }
    }

    #[test]
    fn choosing_a_name_inserts_that_component() {
        let mut host = drop_down_host();

        assert!(drop_down_selection_changed(&mut host));

        assert_eq!(host.inserted, [12]);
    }

    #[test]
    fn a_selection_that_resolves_to_nothing_inserts_nothing() {
        let mut host = DropDownHost {
            selection: NO_SELECTION,
            ..drop_down_host()
        };

        assert!(!drop_down_selection_changed(&mut host));

        assert!(host.inserted.is_empty());
    }

    #[test]
    fn a_blocked_editor_never_resolves_the_selection() {
        let mut host = DropDownHost {
            blocked: true,
            ..drop_down_host()
        };

        assert!(!drop_down_selection_changed(&mut host));
        assert!(host.inserted.is_empty());
    }

    #[test]
    fn keys_other_than_return_pass_straight_through() {
        let mut host = drop_down_host();

        assert_eq!(
            drop_down_key_pressed(b'R'.into(), &mut host),
            u16::from(b'R')
        );
        assert!(host.inserted.is_empty());
        assert_eq!(host.item_index, NO_SELECTION);
    }

    #[test]
    fn return_commits_the_matching_item_and_swallows_the_key() {
        let mut host = DropDownHost {
            typed: "Capacitor".to_owned(),
            ..drop_down_host()
        };

        assert_eq!(drop_down_key_pressed(COMMIT_KEY, &mut host), CONSUMED_KEY);

        assert_eq!(host.item_index, 1);
        assert_eq!(host.text, "Capacitor");
        assert_eq!(host.inserted, [12]);
    }

    #[test]
    fn unmatched_text_falls_back_to_the_first_item() {
        let mut host = DropDownHost {
            typed: "Nonesuch".to_owned(),
            ..drop_down_host()
        };

        assert_eq!(drop_down_key_pressed(COMMIT_KEY, &mut host), CONSUMED_KEY);

        assert_eq!(host.item_index, 0);
        assert_eq!(host.text, "Resistor");
        assert_eq!(host.inserted, [12]);
    }

    #[test]
    fn a_column_past_the_last_part_draws_no_symbol() {
        let cell = part_cell(9, 12, false, 0, 4);

        assert_eq!(cell.part_index, None);
        assert!(!cell.highlighted);
    }

    #[test]
    fn mirroring_counts_the_columns_back_from_the_end() {
        assert_eq!(part_cell(0, 12, true, 0, 12).part_index, Some(11));
        assert_eq!(part_cell(11, 12, true, 0, 12).part_index, Some(0));
    }

    #[test]
    fn hot_track_lights_a_cell_up_without_pressing_it_in() {
        let hot = part_cell(2, 12, false, CELL_HOT_TRACK, 12);

        assert!(hot.highlighted);
        assert_eq!(hot.content_offset, 0);
        assert_eq!(hot.top_left_edge, BUTTON_HIGHLIGHT);
        assert_eq!(hot.bottom_right_edge, BUTTON_SHADOW);
    }

    #[test]
    fn selection_sinks_the_border_and_nudges_the_symbol() {
        let selected = part_cell(2, 12, false, CELL_SELECTED, 12);

        assert!(selected.highlighted);
        assert_eq!(selected.content_offset, 1);
        assert_eq!(selected.top_left_edge, BUTTON_SHADOW);
        assert_eq!(selected.bottom_right_edge, BUTTON_HIGHLIGHT);
    }

    #[test]
    fn an_idle_cell_keeps_the_plain_fill() {
        let idle = part_cell(2, 12, false, 0, 12);

        assert!(!idle.highlighted);
        assert_eq!(IDLE_CELL_FILL, 0x00EF_EFEF);
    }

    #[test]
    fn cells_share_their_dividing_line() {
        let bounds = part_cell_bounds(Rect {
            left: 10,
            top: 0,
            right: 42,
            bottom: 32,
        });

        assert_eq!(bounds.right, 41);
        assert_eq!(bounds.left, 10);
    }

    const STRIP: IconStrip = IconStrip {
        origin_x: 10,
        origin_y: 4,
        item_width: 16,
        item_height: 16,
        control_width: 200,
    };

    #[test]
    fn the_icon_strip_finds_the_item_under_a_point() {
        assert_eq!(STRIP.item_at(11, 5), Some(0));
        assert_eq!(STRIP.item_at(25, 12), Some(0));
        assert_eq!(STRIP.item_at(28, 12), Some(1));
    }

    #[test]
    fn a_point_in_the_gap_belongs_to_no_item() {
        assert_eq!(STRIP.item_at(26, 12), None);
        assert_eq!(STRIP.item_at(27, 12), None);
    }

    #[test]
    fn the_icon_strip_bounds_are_exclusive_on_every_side() {
        assert_eq!(STRIP.item_at(10, 12), None);
        assert_eq!(STRIP.item_at(11, 4), None);
        assert_eq!(STRIP.item_at(11, 20), None);
        assert_eq!(STRIP.item_at(190, 12), None);
    }

    #[test]
    fn strip_item_bounds_follow_the_stride() {
        assert_eq!(
            STRIP.item_bounds(2),
            Rect {
                left: 46,
                top: 4,
                right: 62,
                bottom: 20,
            }
        );
    }

    #[derive(Debug)]
    struct Hints {
        source: HintSource,
        cursor: (i32, i32),
        cell: (i32, i32),
        mirrored: bool,
        columns: i32,
        parts: i32,
    }

    impl Default for Hints {
        fn default() -> Self {
            Self {
                source: HintSource::PartGrid,
                cursor: (11, 12),
                cell: (2, 0),
                mirrored: false,
                columns: 12,
                parts: 12,
            }
        }
    }

    impl HintHost for Hints {
        fn hint_source(&mut self) -> HintSource {
            self.source
        }

        fn cursor_position(&mut self) -> (i32, i32) {
            self.cursor
        }

        fn grid_cell_at(&mut self, _x: i32, _y: i32) -> (i32, i32) {
            self.cell
        }

        fn mirrored(&mut self) -> bool {
            self.mirrored
        }

        fn grid_column_count(&mut self) -> i32 {
            self.columns
        }

        fn part_count(&mut self) -> i32 {
            self.parts
        }

        fn part_hint(&mut self, index: i32) -> String {
            format!("part {index}")
        }

        fn grid_cell_bounds(&mut self, column: i32, row: i32) -> Rect {
            Rect {
                left: column * 32,
                top: row * 32,
                right: column * 32 + 32,
                bottom: row * 32 + 32,
            }
        }

        fn icon_strip(&mut self) -> IconStrip {
            STRIP
        }

        fn icon_hint(&mut self, index: i32) -> String {
            format!("icon {index}")
        }
    }

    #[test]
    fn a_part_cell_hint_names_the_part_and_covers_only_that_cell() {
        let mut host = Hints::default();

        let decision = show_hint(&mut host);

        assert!(decision.can_show);
        assert_eq!(decision.text.as_deref(), Some("part 2"));
        assert_eq!(
            decision.cursor_rect,
            Some(Rect {
                left: 64,
                top: 0,
                right: 97,
                bottom: 33,
            })
        );
    }

    #[test]
    fn a_cell_past_the_last_part_suppresses_the_hint() {
        let mut host = Hints {
            parts: 2,
            ..Hints::default()
        };

        let decision = show_hint(&mut host);

        assert!(!decision.can_show);
        assert_eq!(decision.text, None);
    }

    #[test]
    fn a_mirrored_rack_hints_the_part_at_the_other_end() {
        let mut host = Hints {
            mirrored: true,
            ..Hints::default()
        };

        assert_eq!(show_hint(&mut host).text.as_deref(), Some("part 9"));
    }

    #[test]
    fn an_icon_strip_hint_names_the_item_and_nudges_the_hint_window() {
        let mut host = Hints {
            source: HintSource::IconStrip,
            cursor: (28, 12),
            ..Hints::default()
        };

        let decision = show_hint(&mut host);

        assert!(decision.can_show);
        assert_eq!(decision.text.as_deref(), Some("icon 1"));
        assert_eq!(decision.cursor_rect, Some(STRIP.item_bounds(1)));
        assert_eq!(decision.hint_offset_x, 31);
        assert_eq!(decision.hint_offset_y, -48);
    }

    #[test]
    fn a_point_between_icons_leaves_the_hint_untouched() {
        let mut host = Hints {
            source: HintSource::IconStrip,
            cursor: (26, 12),
            ..Hints::default()
        };

        let decision = show_hint(&mut host);

        assert!(decision.can_show);
        assert_eq!(decision.text, None);
        assert_eq!(decision.cursor_rect, None);
    }

    #[test]
    fn any_other_control_keeps_its_own_hint() {
        let mut host = Hints {
            source: HintSource::Other,
            ..Hints::default()
        };

        let decision = show_hint(&mut host);

        assert!(decision.can_show);
        assert_eq!(decision.text, None);
    }
}
