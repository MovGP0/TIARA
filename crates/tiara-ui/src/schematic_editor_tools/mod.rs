//! Iced state for the recovered Schematic Editor toolbar, zoom and part-grid
//! scroll commands.

pub const FORM_RESOURCE: &str = "SchematicEditor";

/// The form width above which the recovered toolbar shows its wide section.
pub const WIDE_TOOLBAR_THRESHOLD: i32 = 0x2e4;

/// The recovered close action the editor reports.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseAction {
    /// The recovered value 2, which frees the form after the close.
    Free,
}

pub trait EditorCloseHost {
    /// Runs the three recovered teardown steps, in order.
    fn tear_down(&mut self);

    /// Queues one deferred callback to run after the close returns.
    fn queue_deferred(&mut self, index: usize);
}

/// The number of deferred callbacks the recovered close handler queues.
pub const DEFERRED_CLOSE_CALLBACKS: usize = 2;

/// Implements Ghidra function `FUN_01c73e10` at `0x01C73E10`.
///
/// Tears the editor down, reports the free-after-close action, and then queues
/// two deferred callbacks.
///
/// The order matters: the teardown and the close action both happen while the
/// form is still alive, and the two callbacks are queued afterwards so they run
/// once the close has returned rather than in the middle of it.
pub fn close_schematic_editor(host: &mut impl EditorCloseHost) -> CloseAction {
    host.tear_down();
    let action = CloseAction::Free;
    for index in 0..DEFERRED_CLOSE_CALLBACKS {
        host.queue_deferred(index);
    }
    action
}

pub trait EditorLayoutHost {
    /// Re-lays out the component panel.
    fn layout_component_panel(&mut self);

    /// Re-lays out the editor panel.
    fn layout_editor_panel(&mut self);
}

/// Implements Ghidra function `FUN_01c72ec0` at `0x01C72EC0`.
///
/// Re-lays out the component panel and then the editor panel. The form and the
/// component panel share this handler, so resizing either one runs the same two
/// steps in the same order; the component panel is laid out first because the
/// editor panel fills what is left.
pub fn resize_schematic_editor(host: &mut impl EditorLayoutHost) {
    host.layout_component_panel();
    host.layout_editor_panel();
}

/// One toolbar child the resize handler measures.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ToolbarChild {
    pub left: i32,
    pub width: i32,
    /// True for the three children the recovered handler never hides.
    pub exempt: bool,
}

/// What the toolbar resize decides for one layout.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ToolbarLayout {
    /// Whether the wide section is shown.
    pub wide_section_visible: bool,
    /// The visibility of each non-exempt child, in the order they were given.
    pub child_visibility: Vec<Option<bool>>,
}

/// Implements Ghidra function `FUN_01c73f70` at `0x01C73F70`.
///
/// Decides which toolbar sections survive the current form width.
///
/// The wide section appears only once the form is wider than the recovered
/// threshold. Every other child except the three the handler exempts is then
/// shown only while it fits entirely to the left of the anchor control, so a
/// narrowing window drops whole buttons rather than clipping them.
///
/// The three exempt children keep whatever visibility they had, which is how
/// the anchor itself and the wide section are not hidden by their own rule.
#[must_use]
pub fn toolbar_layout(
    form_width: i32,
    anchor_left: i32,
    children: &[ToolbarChild],
) -> ToolbarLayout {
    ToolbarLayout {
        wide_section_visible: form_width > WIDE_TOOLBAR_THRESHOLD,
        child_visibility: children
            .iter()
            .map(|child| (!child.exempt).then(|| child.left + child.width < anchor_left))
            .collect(),
    }
}

pub trait ComponentSetHost {
    /// The selected component-set tab.
    fn selected_component_set(&mut self) -> usize;

    /// Applies one component set to the part grid.
    fn apply_component_set(&mut self, index: usize);
}

/// Implements Ghidra function `FUN_01c72e90` at `0x01C72E90`.
///
/// Applies the component set the user selected. The recovered handler reads the
/// tab index and forwards it without a range check, so the shared applier owns
/// whatever an out-of-range index means.
pub fn component_set_changed(host: &mut impl ComponentSetHost) -> usize {
    let index = host.selected_component_set();
    host.apply_component_set(index);
    index
}

/// Implements Ghidra function `FUN_01c73f60` at `0x01C73F60`.
///
/// The part grid's select-cell handler is a single return in the recovered
/// bytes, so every cell selection is allowed and nothing is staged. This port
/// keeps the no-op explicit rather than leaving the recovered event
/// unaccounted for.
pub const fn part_grid_cell_selected() {}

pub trait PendingZoomHost {
    /// Applies the pending zoom rectangle the drag stored.
    fn apply_pending_zoom(&mut self);

    fn stop_zoom_timer(&mut self);
}

/// Implements Ghidra function `FUN_01c754e0` at `0x01C754E0`.
///
/// Applies the zoom rectangle a drag left pending and then stops the timer, so
/// the deferred zoom runs exactly once per drag. The handler reads no mouse
/// state of its own.
pub fn apply_pending_zoom(host: &mut impl PendingZoomHost) {
    host.apply_pending_zoom();
    host.stop_zoom_timer();
}

pub trait ColorSchemeTimerHost {
    fn stop_scheme_timer(&mut self);

    /// Clears the pending colour-scheme flag.
    fn clear_pending_scheme(&mut self);

    /// Re-applies the document's colour scheme to the editor window.
    fn apply_document_scheme(&mut self);

    /// Sets the editor background from the live palette.
    fn apply_background_color(&mut self);

    fn repaint_editor(&mut self);
}

/// Implements Ghidra function `FUN_01c73da0` at `0x01C73DA0`.
///
/// Applies a pending colour-scheme change once the timer fires.
///
/// The timer is stopped and the pending flag cleared first, so a scheme change
/// that arrives while the work is running schedules a fresh pass instead of
/// being folded into this one. The document scheme, the background colour, and
/// the repaint then follow in that order, which is why the window never paints
/// with half of an old scheme.
pub fn apply_pending_color_scheme(host: &mut impl ColorSchemeTimerHost) {
    host.stop_scheme_timer();
    host.clear_pending_scheme();
    host.apply_document_scheme();
    host.apply_background_color();
    host.repaint_editor();
}

/// The zoom percentages the recovered combo clamps typed values to.
pub const MINIMUM_ZOOM_PERCENT: f64 = 10.0;
pub const MAXIMUM_ZOOM_PERCENT: f64 = 500.0;

/// The number of trailing combo entries that are commands rather than
/// percentages.
pub const ZOOM_COMMAND_ENTRIES: usize = 3;

/// The commands the last three zoom-combo entries stand for.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ZoomCommand {
    /// The third entry from the end.
    ZoomAll,
    /// The second entry from the end.
    Second,
    /// The last entry.
    Last,
}

/// What the zoom combo does with the entry that was chosen.
#[derive(Debug, Clone, Copy, PartialEq)]
pub enum ZoomChoice {
    /// A typed or listed percentage, already clamped.
    Percentage(f64),
    Command(ZoomCommand),
}

/// Parses one zoom-combo entry the way the recovered handler does.
///
/// The recovered code blanks the suffix character in place before parsing, so
/// `150 %` and `150` both read as the same number. Text that does not parse is
/// reported here instead of reaching the clamp.
#[must_use]
pub fn parse_zoom_percentage(text: &str, suffix: char) -> Option<f64> {
    let blanked: String = text
        .chars()
        .map(|character| if character == suffix { ' ' } else { character })
        .collect();
    blanked.trim().parse::<f64>().ok()
}

/// Clamps one zoom percentage to the recovered range.
#[must_use]
pub const fn clamp_zoom_percentage(percent: f64) -> f64 {
    percent.clamp(MINIMUM_ZOOM_PERCENT, MAXIMUM_ZOOM_PERCENT)
}

/// Implements the decision part of Ghidra function `FUN_01c70590` at
/// `0x01C70590`.
///
/// The zoom combo's last three entries are commands and everything before them
/// is a percentage, which is how one control carries both the zoom presets and
/// the Zoom All style commands.
///
/// A percentage is clamped to the recovered range, so a typed value outside it
/// is silently corrected rather than rejected. Text the parser cannot read is
/// reported as no choice at all.
#[must_use]
pub fn zoom_combo_choice(
    selected_index: usize,
    entry_count: usize,
    text: &str,
    suffix: char,
) -> Option<ZoomChoice> {
    let command_start = entry_count.saturating_sub(ZOOM_COMMAND_ENTRIES);
    if entry_count >= ZOOM_COMMAND_ENTRIES && selected_index >= command_start {
        return Some(ZoomChoice::Command(match selected_index - command_start {
            0 => ZoomCommand::ZoomAll,
            1 => ZoomCommand::Second,
            _ => ZoomCommand::Last,
        }));
    }

    parse_zoom_percentage(text, suffix)
        .map(clamp_zoom_percentage)
        .map(ZoomChoice::Percentage)
}

pub trait ZoomComboHost {
    /// Writes the formatted percentage back into the combo.
    fn set_zoom_text(&mut self, percent: f64);

    /// Stores the zoom factor and re-renders the schematic.
    fn apply_zoom_percentage(&mut self, percent: f64);

    /// Runs one of the three combo commands.
    fn run_zoom_command(&mut self, command: ZoomCommand);

    /// The zoom percentage currently in effect.
    fn current_zoom_percentage(&mut self) -> f64;

    /// Returns the keyboard focus to the editor.
    fn focus_editor(&mut self);
}

/// Implements Ghidra function `FUN_01c70590` at `0x01C70590`.
///
/// Applies whichever zoom-combo entry was chosen and always leaves the combo
/// showing a formatted percentage.
///
/// A percentage entry is clamped, written back, and applied. A command entry
/// runs its command and then writes back whatever zoom that command produced,
/// which is how Zoom All ends up displaying its own resulting percentage.
///
/// The editor takes the focus back either way, so typing in the combo never
/// leaves the keyboard there.
pub fn zoom_combo_activated(
    selected_index: usize,
    entry_count: usize,
    text: &str,
    suffix: char,
    host: &mut impl ZoomComboHost,
) -> Option<ZoomChoice> {
    let choice = zoom_combo_choice(selected_index, entry_count, text, suffix);

    match choice {
        Some(ZoomChoice::Percentage(percent)) => {
            host.set_zoom_text(percent);
            host.apply_zoom_percentage(percent);
        }
        Some(ZoomChoice::Command(command)) => {
            host.run_zoom_command(command);
            let percent = host.current_zoom_percentage();
            host.set_zoom_text(percent);
        }
        None => {}
    }

    host.focus_editor();
    choice
}

/// A pointer position the wheel handler stores for the deferred zoom.
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct WheelPoint {
    pub x: i32,
    pub y: i32,
}

/// The state the wheel handler leaves for the zoom timer.
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct PendingWheelZoom {
    pub point: WheelPoint,
    pub delta: i32,
}

pub trait WheelZoomHost {
    fn start_zoom_timer(&mut self);
}

/// Implements Ghidra function `FUN_01c72ae0` at `0x01C72AE0`.
///
/// Records where the wheel turned and by how much, marks the event handled, and
/// starts the zoom timer instead of zooming immediately.
///
/// Deferring the work is what lets a fast scroll collapse into one zoom: each
/// turn overwrites the stored point and delta, and only the timer's single
/// later pass applies them.
pub fn wheel_zoom_requested(
    point: WheelPoint,
    delta: i32,
    host: &mut impl WheelZoomHost,
) -> PendingWheelZoom {
    host.start_zoom_timer();
    PendingWheelZoom { point, delta }
}

/// The scroll bar a scroll message belongs to.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ScrollBar {
    Horizontal,
    Vertical,
}

/// The recovered horizontal scroll message identifier.
pub const HORIZONTAL_SCROLL_MESSAGE: i32 = 0x114;

/// The recovered scroll code that carries a thumb position.
pub const THUMB_TRACK_CODE: i16 = 5;

pub trait EditorScrollHost {
    fn start_repaint_timer(&mut self);

    /// Moves one scroll bar to a tracked thumb position.
    fn set_scroll_position(&mut self, bar: ScrollBar, position: i32);

    /// Re-centres the view from both scroll-bar positions.
    fn scroll_view_to(&mut self, horizontal: i32, vertical: i32);

    /// The current positions of both scroll bars.
    fn scroll_positions(&mut self) -> (i32, i32);
}

/// Implements Ghidra function `FUN_01c74100` at `0x01C74100`.
///
/// Handles both editor scroll bars through one handler.
///
/// The repaint timer starts first, so the view is refreshed once the scroll
/// settles rather than on every message. Only a thumb-track message moves a
/// scroll bar, and the message identifier decides which bar that is; every
/// other scroll code leaves both bars where the control already put them.
///
/// The view is then re-centred from both positions together, which is why
/// scrolling one axis never loses the other.
pub fn editor_scrolled(
    message: i32,
    scroll_code: i16,
    thumb_position: i32,
    host: &mut impl EditorScrollHost,
) -> (i32, i32) {
    host.start_repaint_timer();

    if scroll_code == THUMB_TRACK_CODE {
        let bar = if message == HORIZONTAL_SCROLL_MESSAGE {
            ScrollBar::Horizontal
        } else {
            ScrollBar::Vertical
        };
        host.set_scroll_position(bar, thumb_position);
    }

    let (horizontal, vertical) = host.scroll_positions();
    host.scroll_view_to(horizontal, vertical);
    (horizontal, vertical)
}

pub trait PartGridRefreshHost {
    /// Rebuilds the visible part-grid page.
    fn refresh_part_grid(&mut self);
}

/// Implements Ghidra function `FUN_01c73b20` at `0x01C73B20`.
///
/// The part grid's top-left change delegates straight to the shared part-grid
/// rebuild, so scrolling the grid refreshes exactly what the scroll buttons do.
pub fn part_grid_scrolled(host: &mut impl PartGridRefreshHost) {
    host.refresh_part_grid();
}

pub trait SharedSpeedButtonHost {
    /// Runs the editor command the three speed buttons share.
    fn run_shared_speed_button_command(&mut self);
}

/// Implements Ghidra function `FUN_01c70530` at `0x01C70530`.
///
/// Three speed buttons share this handler and all forward to the same editor
/// command, so whichever of them the user presses does the same thing. The
/// handler reads no sender and no button state, which is why the three cannot
/// diverge.
pub fn shared_speed_button_command(host: &mut impl SharedSpeedButtonHost) {
    host.run_shared_speed_button_command();
}

/// Implements Ghidra function `FUN_01c70960` at `0x01C70960`.
///
/// Applies the typed zoom factor when Enter is pressed in the combo and
/// swallows the key, so the edit never receives the line break and the beep it
/// would cause. Every other key falls through untouched.
pub fn zoom_combo_key_pressed(
    key: char,
    selected_index: usize,
    entry_count: usize,
    text: &str,
    suffix: char,
    host: &mut impl ZoomComboHost,
) -> bool {
    if key != '\r' {
        return false;
    }
    let _ = zoom_combo_activated(selected_index, entry_count, text, suffix, host);
    true
}

/// The margin the scroll-into-view step leaves past the object it reveals.
pub const REVEAL_MARGIN: i32 = 0x32;

/// A rectangle in schematic coordinates.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SchematicRect {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

/// The offset the scroll-into-view step applies, if any.
#[must_use]
pub fn reveal_offset(visible: SchematicRect, object: SchematicRect) -> Option<(i32, i32)> {
    // The recovered handler evaluates both tests per axis and lets the second
    // one win, so the left and top tests are checked first here to give the
    // same result for an object that overflows an axis in both directions.
    let dx = if object.left < visible.left {
        object.left - visible.left - REVEAL_MARGIN
    } else if visible.right < object.right {
        object.right - visible.right + REVEAL_MARGIN
    } else {
        0
    };

    let dy = if object.top < visible.top {
        object.top - visible.top - REVEAL_MARGIN
    } else if visible.bottom < object.bottom {
        object.bottom - visible.bottom + REVEAL_MARGIN
    } else {
        0
    };

    (dx != 0 || dy != 0).then_some((dx, dy))
}

pub trait RevealObjectHost {
    /// The schematic rectangle currently on screen.
    fn visible_rect(&mut self) -> SchematicRect;

    /// Reports whether the object already lies inside that rectangle.
    fn object_is_visible(&mut self, visible: SchematicRect) -> bool;

    /// The object's own bounds.
    fn object_bounds(&mut self) -> SchematicRect;

    /// Scrolls the view to a rectangle.
    fn scroll_view_to_rect(&mut self, rect: SchematicRect);
}

/// Implements Ghidra function `FUN_01c746c0` at `0x01C746C0`.
///
/// Scrolls an off-screen object into view, leaving the recovered margin past
/// whichever edge it was hiding behind.
///
/// An object the editor already shows is left alone, and so is one whose
/// computed offset is zero on both axes. When an object overflows an axis in
/// both directions the recovered order lets the second test win, so the view
/// ends up showing the object's left and top edges rather than its right and
/// bottom.
pub fn reveal_object(host: &mut impl RevealObjectHost) -> Option<(i32, i32)> {
    let visible = host.visible_rect();
    if host.object_is_visible(visible) {
        return None;
    }

    let (dx, dy) = reveal_offset(visible, host.object_bounds())?;
    host.scroll_view_to_rect(SchematicRect {
        left: visible.left + dx,
        top: visible.top + dy,
        right: visible.right + dx,
        bottom: visible.bottom + dy,
    });
    Some((dx, dy))
}

pub trait GridVisibilityHost {
    fn grid_visible(&mut self) -> bool;

    fn set_grid_visible(&mut self, visible: bool);
}

/// Implements Ghidra function `FUN_01c73f30` at `0x01C73F30`.
///
/// Toggles the active document's grid by reading its current state and writing
/// the inverse, so the button is a true toggle rather than a set. The handler
/// touches no other document setting and repaints nothing itself.
pub fn toggle_grid(host: &mut impl GridVisibilityHost) -> bool {
    let visible = !host.grid_visible();
    host.set_grid_visible(visible);
    visible
}

/// The interactive tools the recovered toolbar installs.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EditorTool {
    ZoomWindow,
    OptimizationTarget,
    SelectObject,
}

pub trait EditorToolHost {
    /// Creates the tool and makes it the editor's active one.
    fn install_tool(&mut self, tool: EditorTool);

    /// Checks the toolbar button that belongs to the tool.
    fn check_tool_button(&mut self, tool: EditorTool);
}

/// Implements Ghidra functions `FUN_01c740c0` at `0x01C740C0` and
/// `FUN_01c75410` at `0x01C75410`.
///
/// Installs the zoom-window tool and checks its toolbar button. The Zoom
/// Window menu command delegates to the same handler, so the menu and the
/// toolbar button leave the editor in exactly the same state.
pub fn activate_zoom_window(host: &mut impl EditorToolHost) {
    host.install_tool(EditorTool::ZoomWindow);
    host.check_tool_button(EditorTool::ZoomWindow);
}

/// Implements Ghidra function `FUN_01c747e0` at `0x01C747E0`.
///
/// Installs the optimization-target tool and checks its own toolbar button,
/// following the same install-then-check order as every other tool button.
pub fn activate_optimization_target(host: &mut impl EditorToolHost) {
    host.install_tool(EditorTool::OptimizationTarget);
    host.check_tool_button(EditorTool::OptimizationTarget);
}

/// Implements Ghidra function `FUN_01c74820` at `0x01C74820`.
///
/// Installs the object-selection tool and checks its toolbar button. Because
/// installing a tool replaces the previous one, choosing this button is also
/// how the editor leaves the zoom and target tools.
pub fn activate_select_object(host: &mut impl EditorToolHost) {
    host.install_tool(EditorTool::SelectObject);
    host.check_tool_button(EditorTool::SelectObject);
}

pub trait EditorZoomHost {
    /// The screen size the zoom commands measure their centre against.
    fn screen_size(&mut self) -> (i32, i32);

    fn zoom_in_at(&mut self, x: i32, y: i32);

    fn zoom_out_at(&mut self, x: i32, y: i32);
}

/// The point the recovered zoom commands zoom about.
#[must_use]
pub const fn screen_centre(width: i32, height: i32) -> (i32, i32) {
    (width / 2, height / 2)
}

/// Implements Ghidra function `FUN_01c75420` at `0x01C75420`.
///
/// Zooms in about the centre of the screen rather than the centre of the
/// editor window or the mouse, which is what the recovered handler measures.
pub fn zoom_in(host: &mut impl EditorZoomHost) -> (i32, i32) {
    let (width, height) = host.screen_size();
    let (x, y) = screen_centre(width, height);
    host.zoom_in_at(x, y);
    (x, y)
}

/// Implements Ghidra function `FUN_01c75480` at `0x01C75480`.
///
/// Zooms out about the same screen centre as the zoom-in command, so repeated
/// zoom in and out steps return to where they started.
pub fn zoom_out(host: &mut impl EditorZoomHost) -> (i32, i32) {
    let (width, height) = host.screen_size();
    let (x, y) = screen_centre(width, height);
    host.zoom_out_at(x, y);
    (x, y)
}

pub trait PartGridScrollHost {
    fn left_column(&mut self) -> i32;

    fn set_left_column(&mut self, column: i32);

    /// How many columns fit in the visible part of the grid.
    fn visible_columns(&mut self) -> i32;

    fn total_columns(&mut self) -> i32;

    /// Reports whether the application is laid out right to left.
    fn right_to_left(&mut self) -> bool;
}

/// Scrolls the part grid one column toward the start of the list.
fn scroll_toward_start(host: &mut impl PartGridScrollHost) -> bool {
    let left = host.left_column();
    if left <= 0 {
        return false;
    }
    host.set_left_column(left - 1);
    true
}

/// Scrolls the part grid one column toward the end of the list.
fn scroll_toward_end(host: &mut impl PartGridScrollHost) -> bool {
    let left = host.left_column();
    if left + host.visible_columns() >= host.total_columns() {
        return false;
    }
    host.set_left_column(left + 1);
    true
}

/// Implements Ghidra function `FUN_01c73a40` at `0x01C73A40`.
///
/// Scrolls the component part grid with the left button.
///
/// In a left-to-right layout that means one column toward the start of the
/// list, and in a right-to-left layout the recovered handler reverses it, so
/// the arrow keeps pointing the way the list actually moves on screen.
///
/// Each direction has its own stop: the start stops at column zero and the end
/// stops once the last column is already visible, so neither arrow can scroll
/// past the list.
pub fn scroll_part_grid_left(host: &mut impl PartGridScrollHost) -> bool {
    if host.right_to_left() {
        scroll_toward_end(host)
    } else {
        scroll_toward_start(host)
    }
}

/// Implements Ghidra function `FUN_01c73ab0` at `0x01C73AB0`.
///
/// Scrolls the component part grid with the right button, mirroring the left
/// button in both layouts and using the same two stops.
pub fn scroll_part_grid_right(host: &mut impl PartGridScrollHost) -> bool {
    if host.right_to_left() {
        scroll_toward_start(host)
    } else {
        scroll_toward_end(host)
    }
}

pub trait SelectionCommandHost {
    fn rotate_selection_right(&mut self);

    fn mirror_selection(&mut self);
}

/// Implements Ghidra function `FUN_01c70550` at `0x01C70550`.
///
/// Rotates the current selection to the right through the shared editor
/// command. The recovered handler reads no selection state of its own, so an
/// empty selection reaches the same command and the command decides what that
/// means.
pub fn rotate_selection_right(host: &mut impl SelectionCommandHost) {
    host.rotate_selection_right();
}

/// Implements Ghidra function `FUN_01c70570` at `0x01C70570`.
///
/// Mirrors the current selection through its own shared editor command, with
/// the same absence of a local selection check as the rotate command.
pub fn mirror_selection(host: &mut impl SelectionCommandHost) {
    host.mirror_selection();
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct GridHost {
        visible: bool,
        writes: Vec<bool>,
    }

    impl GridVisibilityHost for GridHost {
        fn grid_visible(&mut self) -> bool {
            self.visible
        }

        fn set_grid_visible(&mut self, visible: bool) {
            self.visible = visible;
            self.writes.push(visible);
        }
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum CloseStep {
        TearDown,
        Deferred(usize),
    }

    #[derive(Debug, Default)]
    struct CloseHost {
        steps: Vec<CloseStep>,
    }

    impl EditorCloseHost for CloseHost {
        fn tear_down(&mut self) {
            self.steps.push(CloseStep::TearDown);
        }

        fn queue_deferred(&mut self, index: usize) {
            self.steps.push(CloseStep::Deferred(index));
        }
    }

    #[test]
    fn close_tears_down_first_then_queues_both_deferred_callbacks() {
        let mut host = CloseHost::default();

        assert_eq!(close_schematic_editor(&mut host), CloseAction::Free);

        assert_eq!(
            host.steps,
            [
                CloseStep::TearDown,
                CloseStep::Deferred(0),
                CloseStep::Deferred(1)
            ]
        );
    }

    #[derive(Debug, Default)]
    struct LayoutHost {
        steps: Vec<&'static str>,
    }

    impl EditorLayoutHost for LayoutHost {
        fn layout_component_panel(&mut self) {
            self.steps.push("component");
        }

        fn layout_editor_panel(&mut self) {
            self.steps.push("editor");
        }
    }

    #[test]
    fn resize_lays_out_the_component_panel_before_the_editor_panel() {
        let mut host = LayoutHost::default();

        resize_schematic_editor(&mut host);

        assert_eq!(host.steps, ["component", "editor"]);
    }

    #[test]
    fn the_wide_toolbar_section_needs_the_recovered_form_width() {
        assert!(!toolbar_layout(WIDE_TOOLBAR_THRESHOLD, 0, &[]).wide_section_visible);
        assert!(toolbar_layout(WIDE_TOOLBAR_THRESHOLD + 1, 0, &[]).wide_section_visible);
    }

    #[test]
    fn a_child_stays_visible_only_while_it_fits_left_of_the_anchor() {
        let children = [
            ToolbarChild {
                left: 0,
                width: 40,
                exempt: false,
            },
            ToolbarChild {
                left: 40,
                width: 40,
                exempt: false,
            },
            ToolbarChild {
                left: 200,
                width: 40,
                exempt: true,
            },
        ];

        let layout = toolbar_layout(400, 70, &children);

        assert_eq!(layout.child_visibility, [Some(true), Some(false), None]);
    }

    #[derive(Debug, Default)]
    struct SetHost {
        selected: usize,
        applied: Vec<usize>,
    }

    impl ComponentSetHost for SetHost {
        fn selected_component_set(&mut self) -> usize {
            self.selected
        }

        fn apply_component_set(&mut self, index: usize) {
            self.applied.push(index);
        }
    }

    #[test]
    fn the_component_set_tab_is_forwarded_without_a_range_check() {
        let mut host = SetHost {
            selected: 99,
            applied: Vec::new(),
        };

        assert_eq!(component_set_changed(&mut host), 99);

        assert_eq!(host.applied, [99]);
    }

    #[test]
    fn the_part_grid_select_cell_is_a_proven_no_op() {
        part_grid_cell_selected();
    }

    #[derive(Debug, Default)]
    struct ZoomTimerHost {
        steps: Vec<&'static str>,
    }

    impl PendingZoomHost for ZoomTimerHost {
        fn apply_pending_zoom(&mut self) {
            self.steps.push("apply");
        }

        fn stop_zoom_timer(&mut self) {
            self.steps.push("stop");
        }
    }

    #[test]
    fn the_zoom_timer_applies_before_it_stops() {
        let mut host = ZoomTimerHost::default();

        apply_pending_zoom(&mut host);

        assert_eq!(host.steps, ["apply", "stop"]);
    }

    #[derive(Debug, Default)]
    struct SchemeHost {
        steps: Vec<&'static str>,
    }

    impl ColorSchemeTimerHost for SchemeHost {
        fn stop_scheme_timer(&mut self) {
            self.steps.push("stop");
        }

        fn clear_pending_scheme(&mut self) {
            self.steps.push("clear");
        }

        fn apply_document_scheme(&mut self) {
            self.steps.push("scheme");
        }

        fn apply_background_color(&mut self) {
            self.steps.push("background");
        }

        fn repaint_editor(&mut self) {
            self.steps.push("repaint");
        }
    }

    #[test]
    fn the_scheme_timer_clears_its_pending_state_before_it_applies_anything() {
        let mut host = SchemeHost::default();

        apply_pending_color_scheme(&mut host);

        assert_eq!(
            host.steps,
            ["stop", "clear", "scheme", "background", "repaint"]
        );
    }

    #[test]
    fn the_last_three_combo_entries_are_commands_and_the_rest_are_percentages() {
        assert_eq!(
            zoom_combo_choice(0, 6, "150 %", '%'),
            Some(ZoomChoice::Percentage(150.0))
        );
        assert_eq!(
            zoom_combo_choice(3, 6, "ignored", '%'),
            Some(ZoomChoice::Command(ZoomCommand::ZoomAll))
        );
        assert_eq!(
            zoom_combo_choice(4, 6, "ignored", '%'),
            Some(ZoomChoice::Command(ZoomCommand::Second))
        );
        assert_eq!(
            zoom_combo_choice(5, 6, "ignored", '%'),
            Some(ZoomChoice::Command(ZoomCommand::Last))
        );
    }

    #[test]
    fn a_typed_percentage_is_clamped_and_unreadable_text_is_no_choice_at_all() {
        assert_eq!(
            zoom_combo_choice(0, 6, "5 %", '%'),
            Some(ZoomChoice::Percentage(MINIMUM_ZOOM_PERCENT))
        );
        assert_eq!(
            zoom_combo_choice(0, 6, "9000 %", '%'),
            Some(ZoomChoice::Percentage(MAXIMUM_ZOOM_PERCENT))
        );
        assert_eq!(zoom_combo_choice(0, 6, "abc", '%'), None);
    }

    #[derive(Debug, Clone, PartialEq)]
    enum ZoomComboStep {
        Text(f64),
        Apply(f64),
        Command(ZoomCommand),
        Focus,
    }

    #[derive(Debug, Default)]
    struct ZoomComboRecorder {
        current: f64,
        steps: Vec<ZoomComboStep>,
    }

    impl ZoomComboHost for ZoomComboRecorder {
        fn set_zoom_text(&mut self, percent: f64) {
            self.steps.push(ZoomComboStep::Text(percent));
        }

        fn apply_zoom_percentage(&mut self, percent: f64) {
            self.current = percent;
            self.steps.push(ZoomComboStep::Apply(percent));
        }

        fn run_zoom_command(&mut self, command: ZoomCommand) {
            self.steps.push(ZoomComboStep::Command(command));
        }

        fn current_zoom_percentage(&mut self) -> f64 {
            self.current
        }

        fn focus_editor(&mut self) {
            self.steps.push(ZoomComboStep::Focus);
        }
    }

    #[test]
    fn a_percentage_entry_is_written_back_before_it_is_applied() {
        let mut host = ZoomComboRecorder::default();

        assert_eq!(
            zoom_combo_activated(0, 6, "200 %", '%', &mut host),
            Some(ZoomChoice::Percentage(200.0))
        );

        assert_eq!(
            host.steps,
            [
                ZoomComboStep::Text(200.0),
                ZoomComboStep::Apply(200.0),
                ZoomComboStep::Focus,
            ]
        );
    }

    #[test]
    fn a_command_entry_writes_back_the_zoom_the_command_produced() {
        let mut host = ZoomComboRecorder {
            current: 63.0,
            steps: Vec::new(),
        };

        assert_eq!(
            zoom_combo_activated(3, 6, "ignored", '%', &mut host),
            Some(ZoomChoice::Command(ZoomCommand::ZoomAll))
        );

        assert_eq!(
            host.steps,
            [
                ZoomComboStep::Command(ZoomCommand::ZoomAll),
                ZoomComboStep::Text(63.0),
                ZoomComboStep::Focus,
            ]
        );
    }

    #[test]
    fn unreadable_text_still_returns_the_focus_to_the_editor() {
        let mut host = ZoomComboRecorder::default();

        assert_eq!(zoom_combo_activated(0, 6, "abc", '%', &mut host), None);

        assert_eq!(host.steps, [ZoomComboStep::Focus]);
    }

    #[derive(Debug, Default)]
    struct WheelHost {
        starts: usize,
    }

    impl WheelZoomHost for WheelHost {
        fn start_zoom_timer(&mut self) {
            self.starts += 1;
        }
    }

    #[test]
    fn each_wheel_turn_overwrites_the_pending_zoom_and_restarts_the_timer() {
        let mut host = WheelHost::default();

        let first = wheel_zoom_requested(WheelPoint { x: 10, y: 20 }, 120, &mut host);
        let second = wheel_zoom_requested(WheelPoint { x: 11, y: 21 }, -120, &mut host);

        assert_eq!(first.delta, 120);
        assert_eq!(second.point, WheelPoint { x: 11, y: 21 });
        assert_eq!(second.delta, -120);
        assert_eq!(host.starts, 2);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum ScrollStep {
        Repaint,
        Position(ScrollBar, i32),
        View(i32, i32),
    }

    #[derive(Debug, Default)]
    struct ScrollViewHost {
        positions: (i32, i32),
        steps: Vec<ScrollStep>,
    }

    impl EditorScrollHost for ScrollViewHost {
        fn start_repaint_timer(&mut self) {
            self.steps.push(ScrollStep::Repaint);
        }

        fn set_scroll_position(&mut self, bar: ScrollBar, position: i32) {
            match bar {
                ScrollBar::Horizontal => self.positions.0 = position,
                ScrollBar::Vertical => self.positions.1 = position,
            }
            self.steps.push(ScrollStep::Position(bar, position));
        }

        fn scroll_view_to(&mut self, horizontal: i32, vertical: i32) {
            self.steps.push(ScrollStep::View(horizontal, vertical));
        }

        fn scroll_positions(&mut self) -> (i32, i32) {
            self.positions
        }
    }

    #[test]
    fn a_thumb_track_moves_the_bar_the_message_identifies() {
        let mut horizontal = ScrollViewHost::default();
        assert_eq!(
            editor_scrolled(
                HORIZONTAL_SCROLL_MESSAGE,
                THUMB_TRACK_CODE,
                42,
                &mut horizontal
            ),
            (42, 0)
        );
        assert_eq!(
            horizontal.steps,
            [
                ScrollStep::Repaint,
                ScrollStep::Position(ScrollBar::Horizontal, 42),
                ScrollStep::View(42, 0),
            ]
        );

        let mut vertical = ScrollViewHost::default();
        assert_eq!(
            editor_scrolled(0x115, THUMB_TRACK_CODE, 7, &mut vertical),
            (0, 7)
        );
        assert!(
            vertical
                .steps
                .contains(&ScrollStep::Position(ScrollBar::Vertical, 7))
        );
    }

    #[test]
    fn any_other_scroll_code_leaves_both_bars_where_the_control_put_them() {
        let mut host = ScrollViewHost {
            positions: (5, 9),
            steps: Vec::new(),
        };

        assert_eq!(
            editor_scrolled(HORIZONTAL_SCROLL_MESSAGE, 1, 42, &mut host),
            (5, 9)
        );

        assert_eq!(host.steps, [ScrollStep::Repaint, ScrollStep::View(5, 9)]);
    }

    #[derive(Debug, Default)]
    struct PartGridHost {
        refreshes: usize,
    }

    impl PartGridRefreshHost for PartGridHost {
        fn refresh_part_grid(&mut self) {
            self.refreshes += 1;
        }
    }

    #[derive(Debug, Default)]
    struct SharedButtonHost {
        runs: usize,
    }

    impl SharedSpeedButtonHost for SharedButtonHost {
        fn run_shared_speed_button_command(&mut self) {
            self.runs += 1;
        }
    }

    #[test]
    fn the_part_grid_scroll_and_shared_speed_buttons_forward_to_one_command_each() {
        let mut grid = PartGridHost::default();
        part_grid_scrolled(&mut grid);
        assert_eq!(grid.refreshes, 1);

        let mut buttons = SharedButtonHost::default();
        shared_speed_button_command(&mut buttons);
        shared_speed_button_command(&mut buttons);
        assert_eq!(buttons.runs, 2);
    }

    #[test]
    fn only_enter_applies_the_typed_zoom_and_swallows_the_key() {
        let mut typing = ZoomComboRecorder::default();
        assert!(!zoom_combo_key_pressed(
            '1',
            0,
            6,
            "150 %",
            '%',
            &mut typing
        ));
        assert!(typing.steps.is_empty());

        let mut entered = ZoomComboRecorder::default();
        assert!(zoom_combo_key_pressed(
            '\r',
            0,
            6,
            "150 %",
            '%',
            &mut entered
        ));
        assert!(entered.steps.contains(&ZoomComboStep::Apply(150.0)));
    }

    const VIEW: SchematicRect = SchematicRect {
        left: 100,
        top: 100,
        right: 500,
        bottom: 400,
    };

    #[test]
    fn an_object_past_an_edge_is_revealed_with_the_recovered_margin() {
        assert_eq!(
            reveal_offset(
                VIEW,
                SchematicRect {
                    left: 520,
                    top: 150,
                    right: 560,
                    bottom: 200,
                }
            ),
            Some((60 + REVEAL_MARGIN, 0))
        );

        assert_eq!(
            reveal_offset(
                VIEW,
                SchematicRect {
                    left: 150,
                    top: 40,
                    right: 200,
                    bottom: 80,
                }
            ),
            Some((0, -60 - REVEAL_MARGIN))
        );
    }

    #[test]
    fn an_object_overflowing_both_ways_ends_up_showing_its_left_and_top_edges() {
        let offset = reveal_offset(
            VIEW,
            SchematicRect {
                left: 50,
                top: 50,
                right: 900,
                bottom: 900,
            },
        );

        assert_eq!(offset, Some((-50 - REVEAL_MARGIN, -50 - REVEAL_MARGIN)));
    }

    #[test]
    fn an_object_already_inside_the_view_needs_no_offset() {
        assert_eq!(
            reveal_offset(
                VIEW,
                SchematicRect {
                    left: 150,
                    top: 150,
                    right: 200,
                    bottom: 200,
                }
            ),
            None
        );
    }

    #[derive(Debug, Default)]
    struct RevealHost {
        already_visible: bool,
        object: Option<SchematicRect>,
        scrolled: Vec<SchematicRect>,
    }

    impl RevealObjectHost for RevealHost {
        fn visible_rect(&mut self) -> SchematicRect {
            VIEW
        }

        fn object_is_visible(&mut self, _visible: SchematicRect) -> bool {
            self.already_visible
        }

        fn object_bounds(&mut self) -> SchematicRect {
            self.object.unwrap_or(VIEW)
        }

        fn scroll_view_to_rect(&mut self, rect: SchematicRect) {
            self.scrolled.push(rect);
        }
    }

    #[test]
    fn a_visible_object_is_never_scrolled_to() {
        let mut host = RevealHost {
            already_visible: true,
            ..RevealHost::default()
        };

        assert_eq!(reveal_object(&mut host), None);

        assert!(host.scrolled.is_empty());
    }

    #[test]
    fn revealing_an_object_offsets_the_whole_visible_rectangle() {
        let mut host = RevealHost {
            object: Some(SchematicRect {
                left: 520,
                top: 150,
                right: 560,
                bottom: 200,
            }),
            ..RevealHost::default()
        };

        assert_eq!(reveal_object(&mut host), Some((110, 0)));

        assert_eq!(
            host.scrolled,
            [SchematicRect {
                left: 210,
                top: 100,
                right: 610,
                bottom: 400,
            }]
        );
    }

    #[test]
    fn the_grid_button_writes_the_inverse_of_what_it_read() {
        let mut host = GridHost::default();

        assert!(toggle_grid(&mut host));
        assert!(!toggle_grid(&mut host));

        assert_eq!(host.writes, [true, false]);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum ToolStep {
        Install(EditorTool),
        Check(EditorTool),
    }

    #[derive(Debug, Default)]
    struct ToolHost {
        steps: Vec<ToolStep>,
    }

    impl EditorToolHost for ToolHost {
        fn install_tool(&mut self, tool: EditorTool) {
            self.steps.push(ToolStep::Install(tool));
        }

        fn check_tool_button(&mut self, tool: EditorTool) {
            self.steps.push(ToolStep::Check(tool));
        }
    }

    #[test]
    fn every_tool_button_installs_then_checks_its_own_tool() {
        let mut host = ToolHost::default();

        activate_zoom_window(&mut host);
        activate_optimization_target(&mut host);
        activate_select_object(&mut host);

        assert_eq!(
            host.steps,
            [
                ToolStep::Install(EditorTool::ZoomWindow),
                ToolStep::Check(EditorTool::ZoomWindow),
                ToolStep::Install(EditorTool::OptimizationTarget),
                ToolStep::Check(EditorTool::OptimizationTarget),
                ToolStep::Install(EditorTool::SelectObject),
                ToolStep::Check(EditorTool::SelectObject),
            ]
        );
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum ZoomStep {
        In(i32, i32),
        Out(i32, i32),
    }

    #[derive(Debug, Default)]
    struct ZoomHost {
        size: (i32, i32),
        steps: Vec<ZoomStep>,
    }

    impl EditorZoomHost for ZoomHost {
        fn screen_size(&mut self) -> (i32, i32) {
            self.size
        }

        fn zoom_in_at(&mut self, x: i32, y: i32) {
            self.steps.push(ZoomStep::In(x, y));
        }

        fn zoom_out_at(&mut self, x: i32, y: i32) {
            self.steps.push(ZoomStep::Out(x, y));
        }
    }

    #[test]
    fn both_zoom_commands_use_the_same_screen_centre() {
        let mut host = ZoomHost {
            size: (1920, 1080),
            steps: Vec::new(),
        };

        assert_eq!(zoom_in(&mut host), (960, 540));
        assert_eq!(zoom_out(&mut host), (960, 540));

        assert_eq!(
            host.steps,
            [ZoomStep::In(960, 540), ZoomStep::Out(960, 540)]
        );
    }

    #[derive(Debug, Default)]
    struct ScrollHost {
        left: i32,
        visible: i32,
        total: i32,
        rtl: bool,
        writes: Vec<i32>,
    }

    impl PartGridScrollHost for ScrollHost {
        fn left_column(&mut self) -> i32 {
            self.left
        }

        fn set_left_column(&mut self, column: i32) {
            self.left = column;
            self.writes.push(column);
        }

        fn visible_columns(&mut self) -> i32 {
            self.visible
        }

        fn total_columns(&mut self) -> i32 {
            self.total
        }

        fn right_to_left(&mut self) -> bool {
            self.rtl
        }
    }

    fn scroll_host(left: i32, rtl: bool) -> ScrollHost {
        ScrollHost {
            left,
            visible: 4,
            total: 10,
            rtl,
            writes: Vec::new(),
        }
    }

    #[test]
    fn the_arrows_move_the_expected_way_in_a_left_to_right_layout() {
        let mut host = scroll_host(3, false);

        assert!(scroll_part_grid_left(&mut host));
        assert_eq!(host.writes, [2]);

        assert!(scroll_part_grid_right(&mut host));
        assert_eq!(host.writes, [2, 3]);
    }

    #[test]
    fn a_right_to_left_layout_reverses_both_arrows() {
        let mut host = scroll_host(3, true);

        assert!(scroll_part_grid_left(&mut host));
        assert_eq!(host.writes, [4]);

        assert!(scroll_part_grid_right(&mut host));
        assert_eq!(host.writes, [4, 3]);
    }

    #[test]
    fn neither_arrow_can_scroll_past_the_list() {
        let mut at_start = scroll_host(0, false);
        assert!(!scroll_part_grid_left(&mut at_start));
        assert!(at_start.writes.is_empty());

        let mut at_end = scroll_host(6, false);
        assert!(!scroll_part_grid_right(&mut at_end));
        assert!(at_end.writes.is_empty());
    }

    #[derive(Debug, Default)]
    struct SelectionHost {
        steps: Vec<&'static str>,
    }

    impl SelectionCommandHost for SelectionHost {
        fn rotate_selection_right(&mut self) {
            self.steps.push("rotate");
        }

        fn mirror_selection(&mut self) {
            self.steps.push("mirror");
        }
    }

    #[test]
    fn the_transform_buttons_forward_to_their_own_shared_commands() {
        let mut host = SelectionHost::default();

        rotate_selection_right(&mut host);
        mirror_selection(&mut host);

        assert_eq!(host.steps, ["rotate", "mirror"]);
    }
}
