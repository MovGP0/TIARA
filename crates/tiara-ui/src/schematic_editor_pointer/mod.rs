//! Iced state for the recovered Schematic Editor pointer tracking.
//!
//! The canvas turns pointer movement into three things at once: the coordinate
//! readout, the cursor shape, and the floating value overlay. The running
//! command gets a say in all of it, which is what makes a half-drawn wire
//! behave differently from an idle pointer.

/// The form the recovered handlers belong to.
pub const FORM_RESOURCE: &str = "SchematicEditor";

/// The recovered format of the coordinate readout.
pub const POSITION_FORMAT: &str = " X: %d  Y: %d";

/// `MK_LBUTTON`.
pub const LEFT_BUTTON: u16 = 0x0001;

/// `MK_SHIFT`.
pub const SHIFT_HELD: u16 = 0x0004;

/// The default arrow cursor.
pub const CURSOR_DEFAULT: u16 = 0;

/// The cursor the recovered build shows over a followable object.
pub const CURSOR_LINK: u16 = 0x19;

/// The cursor the recovered build shows over a connectable node.
pub const CURSOR_NODE: u16 = 0x1C;

/// The recovered object kind that can carry its own pointer handler.
pub const NESTED_OBJECT_KIND: u8 = 4;

/// The recovered object kind that can show the floating value overlay.
pub const VALUE_OVERLAY_KIND: u8 = 8;

/// The recovered model kind that the value overlay is shown for.
pub const VALUE_OVERLAY_MODEL: u8 = 3;

/// An opaque handle to a recovered schematic object.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct ObjectHandle(pub u64);

/// A point in the document's own coordinates.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DocumentPoint {
    pub x: i32,
    pub y: i32,
}

/// Formats the coordinate readout the way the recovered handler does.
///
/// Part of Ghidra function `FUN_01c72110` at `0x01C72110`.
///
/// The leading space and the double space between the two pairs are part of the
/// recovered format string, so the readout does not shift as the digits change.
#[must_use]
pub fn format_position(at: DocumentPoint) -> String {
    format!(" X: {}  Y: {}", at.x, at.y)
}

pub trait PointerHost {
    /// Reports whether the canvas is being panned by a drag.
    fn panning(&mut self) -> bool;

    /// Scrolls the canvas so the drag keeps the same document point under the
    /// pointer.
    fn pan_to(&mut self, x: i32, y: i32);

    /// Reports whether a document view with a drawing surface is open.
    fn view_ready(&mut self) -> bool;

    /// Updates whatever the editor tracks per pointer position.
    fn track_pointer(&mut self, buttons: u16, x: i32, y: i32);

    /// Converts a client point to the document's own coordinates.
    fn to_document_point(&mut self, x: i32, y: i32) -> DocumentPoint;

    /// The insertion point the tracking step just moved.
    ///
    /// The recovered handler looks the command-enabling object up here rather
    /// than at the raw pointer position, so snapping decides which object the
    /// commands follow.
    fn insertion_point(&mut self) -> DocumentPoint;

    /// Re-enables or disables the four object-dependent commands.
    fn update_object_commands(&mut self, object: Option<ObjectHandle>);

    /// Writes the coordinate readout.
    fn set_status_position(&mut self, text: &str);

    /// Reports whether a command currently occupies the editor's command slot.
    fn command_running(&mut self) -> bool;

    /// Hit-tests for a connectable node, exactly and then on the snapped point.
    ///
    /// Returns the object the node belongs to, if the second attempt found one.
    fn node_at(&mut self, at: DocumentPoint) -> NodeHit;

    /// Clears the canvas's own hint text.
    fn clear_canvas_hint(&mut self);

    /// Reports whether the application is running a script.
    fn scripting_active(&mut self) -> bool;

    /// Reports whether node cursors are switched on.
    fn node_cursor_enabled(&mut self) -> bool;

    fn object_at(&mut self, at: DocumentPoint) -> Option<ObjectHandle>;

    /// The cursor the object itself asks for.
    fn object_cursor(&mut self, object: ObjectHandle, at: DocumentPoint) -> u16;

    fn object_kind(&mut self, object: ObjectHandle) -> u8;

    /// Reports whether the object carries its own pointer handler.
    fn object_has_nested_handler(&mut self, object: ObjectHandle) -> bool;

    /// The cursor the object's nested handler asks for.
    fn nested_cursor(&mut self, object: ObjectHandle, at: DocumentPoint) -> u16;

    /// Reports whether the object can be followed, such as into a sub-circuit.
    fn object_is_followable(&mut self, object: ObjectHandle) -> bool;

    /// Reports whether the object's model is the kind the overlay describes.
    fn object_shows_value_overlay(&mut self, object: ObjectHandle) -> bool;

    /// Shows the floating value overlay for one object.
    fn show_value_overlay(&mut self, object: ObjectHandle);

    fn set_cursor(&mut self, cursor: u16);
}

/// What a node hit-test found.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum NodeHit {
    /// No node, on the exact point or on the snapped one.
    None,
    /// A node belonging to this object, if the hit-test named one.
    Node(Option<ObjectHandle>),
}

/// Implements Ghidra function `FUN_01c72110` at `0x01C72110`.
///
/// Handles `EditorPanel.SchEditBox.OnMouseMove`.
///
/// Tracks the pointer across the canvas.
///
/// A pan in progress takes the whole event: the canvas scrolls and nothing else
/// is computed, which is what keeps panning smooth over a dense schematic.
///
/// Otherwise the readout and the object-dependent commands are updated on every
/// move, and then the cursor is chosen — but only when no command is running,
/// because a command owns the cursor while it is armed.
///
/// A node under the pointer normally wins the cursor outright and stops there.
/// Holding Shift skips that, which is how the object underneath a node can still
/// be picked up.
///
/// Returns the cursor the handler settled on, or `None` when it left the cursor
/// alone.
pub fn pointer_moved(buttons: u16, x: i32, y: i32, host: &mut impl PointerHost) -> Option<u16> {
    if host.panning() {
        host.pan_to(x, y);
        return None;
    }

    if !host.view_ready() {
        return None;
    }

    host.track_pointer(buttons, x, y);

    let insertion = host.insertion_point();
    let hovered = host.object_at(insertion);
    host.update_object_commands(hovered);

    let at = host.to_document_point(x, y);
    let readout = format_position(at);
    host.set_status_position(&readout);

    if host.command_running() {
        return None;
    }

    if let NodeHit::Node(owner) = host.node_at(at) {
        if buttons & SHIFT_HELD == 0 {
            // A node claims the cursor outright; the object under it is only
            // consulted once Shift is held.
            let cursor = if !host.scripting_active() && host.node_cursor_enabled() {
                CURSOR_NODE
            } else {
                CURSOR_DEFAULT
            };
            host.set_cursor(cursor);
            return Some(cursor);
        }
        let _ = owner;
    } else {
        host.clear_canvas_hint();
    }

    let Some(object) = host.object_at(at) else {
        host.set_cursor(CURSOR_DEFAULT);
        return Some(CURSOR_DEFAULT);
    };

    let mut cursor = host.object_cursor(object, at);
    if cursor == 0 {
        if host.object_kind(object) == NESTED_OBJECT_KIND
            && host.object_has_nested_handler(object)
            && !host.scripting_active()
        {
            cursor = host.nested_cursor(object, at);
        } else if host.object_is_followable(object) {
            cursor = CURSOR_LINK;
        }
    }

    if host.object_kind(object) == VALUE_OVERLAY_KIND && host.object_shows_value_overlay(object) {
        host.show_value_overlay(object);
    }

    host.set_cursor(cursor);
    Some(cursor)
}

pub trait PointerReleaseHost {
    /// Reports whether the canvas is being panned by a drag.
    fn panning(&mut self) -> bool;

    /// Ends the pan and restores the view's own scroll bookkeeping.
    fn end_pan(&mut self);

    /// Reports whether a document view with a drawing surface is open.
    fn view_ready(&mut self) -> bool;

    /// Offers the release to the running command.
    ///
    /// `None` means no command is installed, which lets the release proceed.
    fn command_accepts_release(&mut self, x: i32, y: i32) -> Option<bool>;

    /// Reports whether the application is running a script.
    fn scripting_active(&mut self) -> bool;

    /// The object a rubber-band drag is being built against, if any.
    fn pending_drag(&mut self) -> bool;

    /// Commits the pending drag.
    fn commit_drag(&mut self);

    /// Clears the pending drag.
    fn clear_drag(&mut self);
}

/// Implements Ghidra function `FUN_01c72a40` at `0x01C72A40`.
///
/// Handles `EditorPanel.SchEditBox.OnMouseUp`.
///
/// Finishes whatever the press started.
///
/// Releasing out of a pan only ends the pan — the drag moved the view, not the
/// circuit, so nothing is committed. Otherwise the running command gets first
/// refusal, and a command that declines the release leaves the pending drag
/// alone to continue.
///
/// The pending drag is cleared whether or not it was committed, so a release
/// while a script is running discards it rather than applying it behind the
/// script's back.
pub fn pointer_released(x: i32, y: i32, host: &mut impl PointerReleaseHost) -> bool {
    if host.panning() {
        host.end_pan();
        return false;
    }

    if !host.view_ready() {
        return false;
    }

    if host.command_accepts_release(x, y) == Some(false) {
        return false;
    }

    let committed = if !host.scripting_active() && host.pending_drag() {
        host.commit_drag();
        true
    } else {
        false
    };

    host.clear_drag();
    committed
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_readout_keeps_the_recovered_spacing() {
        assert_eq!(
            format_position(DocumentPoint { x: 12, y: -34 }),
            " X: 12  Y: -34"
        );
        assert!(POSITION_FORMAT.starts_with(' '));
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Pan(i32, i32),
        Track,
        Commands(Option<ObjectHandle>),
        Status(String),
        ClearHint,
        Overlay(ObjectHandle),
        Cursor(u16),
    }

    #[derive(Debug)]
    #[allow(clippy::struct_excessive_bools)]
    struct Host {
        panning: bool,
        view: bool,
        command: bool,
        node: NodeHit,
        scripting: bool,
        node_cursors: bool,
        object: Option<ObjectHandle>,
        object_cursor: u16,
        kind: u8,
        nested: bool,
        nested_cursor: u16,
        followable: bool,
        overlay: bool,
        steps: Vec<Step>,
    }

    impl Default for Host {
        fn default() -> Self {
            Self {
                panning: false,
                view: true,
                command: false,
                node: NodeHit::None,
                scripting: false,
                node_cursors: true,
                object: Some(ObjectHandle(3)),
                object_cursor: 0,
                kind: 1,
                nested: false,
                nested_cursor: 0x30,
                followable: false,
                overlay: false,
                steps: Vec::new(),
            }
        }
    }

    impl PointerHost for Host {
        fn panning(&mut self) -> bool {
            self.panning
        }

        fn pan_to(&mut self, x: i32, y: i32) {
            self.steps.push(Step::Pan(x, y));
        }

        fn view_ready(&mut self) -> bool {
            self.view
        }

        fn track_pointer(&mut self, _buttons: u16, _x: i32, _y: i32) {
            self.steps.push(Step::Track);
        }

        fn to_document_point(&mut self, x: i32, y: i32) -> DocumentPoint {
            DocumentPoint { x: x * 2, y: y * 2 }
        }

        fn insertion_point(&mut self) -> DocumentPoint {
            DocumentPoint { x: 100, y: 200 }
        }

        fn update_object_commands(&mut self, object: Option<ObjectHandle>) {
            self.steps.push(Step::Commands(object));
        }

        fn set_status_position(&mut self, text: &str) {
            self.steps.push(Step::Status(text.to_owned()));
        }

        fn command_running(&mut self) -> bool {
            self.command
        }

        fn node_at(&mut self, _at: DocumentPoint) -> NodeHit {
            self.node
        }

        fn clear_canvas_hint(&mut self) {
            self.steps.push(Step::ClearHint);
        }

        fn scripting_active(&mut self) -> bool {
            self.scripting
        }

        fn node_cursor_enabled(&mut self) -> bool {
            self.node_cursors
        }

        fn object_at(&mut self, _at: DocumentPoint) -> Option<ObjectHandle> {
            self.object
        }

        fn object_cursor(&mut self, _object: ObjectHandle, _at: DocumentPoint) -> u16 {
            self.object_cursor
        }

        fn object_kind(&mut self, _object: ObjectHandle) -> u8 {
            self.kind
        }

        fn object_has_nested_handler(&mut self, _object: ObjectHandle) -> bool {
            self.nested
        }

        fn nested_cursor(&mut self, _object: ObjectHandle, _at: DocumentPoint) -> u16 {
            self.nested_cursor
        }

        fn object_is_followable(&mut self, _object: ObjectHandle) -> bool {
            self.followable
        }

        fn object_shows_value_overlay(&mut self, _object: ObjectHandle) -> bool {
            self.overlay
        }

        fn show_value_overlay(&mut self, object: ObjectHandle) {
            self.steps.push(Step::Overlay(object));
        }

        fn set_cursor(&mut self, cursor: u16) {
            self.steps.push(Step::Cursor(cursor));
        }
    }

    #[test]
    fn a_pan_in_progress_takes_the_whole_event() {
        let mut host = Host {
            panning: true,
            ..Host::default()
        };

        assert_eq!(pointer_moved(LEFT_BUTTON, 40, 80, &mut host), None);

        assert_eq!(host.steps, [Step::Pan(40, 80)]);
    }

    #[test]
    fn an_idle_move_updates_the_readout_and_the_commands() {
        let mut host = Host::default();

        assert_eq!(pointer_moved(0, 5, 7, &mut host), Some(CURSOR_DEFAULT));

        assert_eq!(
            host.steps,
            [
                Step::Track,
                Step::Commands(Some(ObjectHandle(3))),
                Step::Status(" X: 10  Y: 14".to_owned()),
                Step::ClearHint,
                Step::Cursor(CURSOR_DEFAULT),
            ]
        );
    }

    #[test]
    fn a_running_command_keeps_the_cursor_to_itself() {
        let mut host = Host {
            command: true,
            ..Host::default()
        };

        assert_eq!(pointer_moved(0, 5, 7, &mut host), None);

        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, Step::Cursor(_)))
        );
    }

    #[test]
    fn a_node_under_the_pointer_claims_the_cursor() {
        let mut host = Host {
            node: NodeHit::Node(Some(ObjectHandle(9))),
            ..Host::default()
        };

        assert_eq!(pointer_moved(0, 5, 7, &mut host), Some(CURSOR_NODE));
        assert!(host.steps.contains(&Step::Cursor(CURSOR_NODE)));
    }

    #[test]
    fn node_cursors_can_be_switched_off() {
        for (scripting, enabled) in [(true, true), (false, false)] {
            let mut host = Host {
                node: NodeHit::Node(None),
                scripting,
                node_cursors: enabled,
                ..Host::default()
            };

            assert_eq!(pointer_moved(0, 5, 7, &mut host), Some(CURSOR_DEFAULT));
        }
    }

    #[test]
    fn holding_shift_looks_past_the_node_to_the_object() {
        let mut host = Host {
            node: NodeHit::Node(Some(ObjectHandle(9))),
            followable: true,
            ..Host::default()
        };

        assert_eq!(
            pointer_moved(SHIFT_HELD, 5, 7, &mut host),
            Some(CURSOR_LINK)
        );
    }

    #[test]
    fn an_object_that_asks_for_a_cursor_gets_it() {
        let mut host = Host {
            object_cursor: 0x42,
            followable: true,
            ..Host::default()
        };

        assert_eq!(pointer_moved(0, 5, 7, &mut host), Some(0x42));
    }

    #[test]
    fn a_nested_object_is_asked_before_the_link_cursor() {
        let mut host = Host {
            kind: NESTED_OBJECT_KIND,
            nested: true,
            followable: true,
            ..Host::default()
        };

        assert_eq!(pointer_moved(0, 5, 7, &mut host), Some(0x30));
    }

    #[test]
    fn a_script_skips_the_nested_cursor_and_falls_back() {
        let mut host = Host {
            kind: NESTED_OBJECT_KIND,
            nested: true,
            followable: true,
            scripting: true,
            ..Host::default()
        };

        assert_eq!(pointer_moved(0, 5, 7, &mut host), Some(CURSOR_LINK));
    }

    #[test]
    fn an_object_with_a_value_model_shows_the_overlay() {
        let mut host = Host {
            kind: VALUE_OVERLAY_KIND,
            overlay: true,
            ..Host::default()
        };

        pointer_moved(0, 5, 7, &mut host);

        assert!(host.steps.contains(&Step::Overlay(ObjectHandle(3))));
    }

    #[test]
    fn empty_canvas_leaves_the_default_cursor() {
        let mut host = Host {
            object: None,
            ..Host::default()
        };

        assert_eq!(pointer_moved(0, 5, 7, &mut host), Some(CURSOR_DEFAULT));
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum ReleaseStep {
        EndPan,
        Commit,
        Clear,
    }

    #[derive(Debug)]
    #[allow(clippy::struct_excessive_bools)]
    struct ReleaseHost {
        panning: bool,
        view: bool,
        command: Option<bool>,
        scripting: bool,
        drag: bool,
        steps: Vec<ReleaseStep>,
    }

    impl Default for ReleaseHost {
        fn default() -> Self {
            Self {
                panning: false,
                view: true,
                command: None,
                scripting: false,
                drag: true,
                steps: Vec::new(),
            }
        }
    }

    impl PointerReleaseHost for ReleaseHost {
        fn panning(&mut self) -> bool {
            self.panning
        }

        fn end_pan(&mut self) {
            self.steps.push(ReleaseStep::EndPan);
        }

        fn view_ready(&mut self) -> bool {
            self.view
        }

        fn command_accepts_release(&mut self, _x: i32, _y: i32) -> Option<bool> {
            self.command
        }

        fn scripting_active(&mut self) -> bool {
            self.scripting
        }

        fn pending_drag(&mut self) -> bool {
            self.drag
        }

        fn commit_drag(&mut self) {
            self.steps.push(ReleaseStep::Commit);
        }

        fn clear_drag(&mut self) {
            self.steps.push(ReleaseStep::Clear);
        }
    }

    #[test]
    fn releasing_out_of_a_pan_only_ends_the_pan() {
        let mut host = ReleaseHost {
            panning: true,
            ..ReleaseHost::default()
        };

        assert!(!pointer_released(1, 2, &mut host));

        assert_eq!(host.steps, [ReleaseStep::EndPan]);
    }

    #[test]
    fn a_release_commits_the_pending_drag() {
        let mut host = ReleaseHost::default();

        assert!(pointer_released(1, 2, &mut host));

        assert_eq!(host.steps, [ReleaseStep::Commit, ReleaseStep::Clear]);
    }

    #[test]
    fn a_command_that_declines_the_release_leaves_the_drag_alone() {
        let mut host = ReleaseHost {
            command: Some(false),
            ..ReleaseHost::default()
        };

        assert!(!pointer_released(1, 2, &mut host));

        assert!(host.steps.is_empty());
    }

    #[test]
    fn a_script_discards_the_pending_drag_instead_of_applying_it() {
        let mut host = ReleaseHost {
            scripting: true,
            ..ReleaseHost::default()
        };

        assert!(!pointer_released(1, 2, &mut host));

        assert_eq!(host.steps, [ReleaseStep::Clear]);
    }

    #[test]
    fn a_release_with_no_view_does_nothing() {
        let mut host = ReleaseHost {
            view: false,
            ..ReleaseHost::default()
        };

        assert!(!pointer_released(1, 2, &mut host));
        assert!(host.steps.is_empty());
    }
}

/// `MK_RBUTTON`.
pub const RIGHT_BUTTON: u16 = 0x0002;

/// `MK_CONTROL`.
pub const CONTROL_HELD: u16 = 0x0008;

/// `MK_MBUTTON`.
pub const MIDDLE_BUTTON: u16 = 0x0010;

/// The recovered flag bit that suppresses the whole handler.
///
/// The symbols do not name it; the handler simply does nothing when it is set.
pub const SUPPRESS_PRESS: u16 = 0x0040;

/// The recovered object kind whose press toggles its own state.
pub const TOGGLING_OBJECT_KIND: u8 = 5;

/// The recovered object kind that can consume a press itself.
pub const PROBE_OBJECT_KIND: u8 = 8;

/// What the press turned out to be.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PressOutcome {
    /// Nothing happened — the command declined it, the editor was busy, or the
    /// guard refused.
    Ignored,
    /// A middle-button pan started.
    PanStarted,
    /// The press armed the wire command at a pin.
    WireArmed,
    /// The press began a rubber-band selection.
    RubberBand,
    /// The press selected an object and began dragging it.
    DragStarted,
    /// The press toggled an object's own state instead of selecting it.
    ObjectToggled,
    /// A nested handler inside the object consumed the press.
    ConsumedByObject,
    /// The press opened the canvas popup's target.
    PopupTarget,
}

pub trait PointerPressHost {
    /// Hides the floating value overlay.
    fn hide_overlay(&mut self);

    /// Reports whether the view has suspended its own scroll bookkeeping.
    fn bookkeeping_suspended(&mut self) -> bool;

    /// Records where a pan started and the scroll positions it started from.
    fn begin_pan(&mut self, x: i32, y: i32);

    /// Reports whether a document view with a drawing surface is open.
    fn view_ready(&mut self) -> bool;

    /// Asks the running command whether the press may proceed.
    ///
    /// `None` means no command is installed, which lets it proceed.
    fn command_allows_press(&mut self, x: i32, y: i32) -> Option<bool>;

    /// Reports whether an analysis or modal state is in progress.
    fn editor_busy(&mut self) -> bool;

    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Reports whether interactive mode is on.
    fn interactive_active(&mut self) -> bool;

    /// Deselects every object.
    fn deselect_all(&mut self);

    /// Converts a client point to the document's own coordinates.
    fn to_document_point(&mut self, x: i32, y: i32) -> DocumentPoint;

    /// Hit-tests for a pin on the exact point, then on the snapped one.
    ///
    /// Returns the pin index when the snapped test found one.
    fn pin_at(&mut self, at: DocumentPoint) -> Option<i32>;

    /// Reports whether the application is running a script.
    fn scripting_active(&mut self) -> bool;

    /// Reports whether wiring from a pin is switched on.
    fn pin_wiring_enabled(&mut self) -> bool;

    /// Arms the wire command at one pin and presses its tool button.
    fn arm_wire_at_pin(&mut self, pin: i32);

    fn object_at(&mut self, at: DocumentPoint) -> Option<ObjectHandle>;

    /// Reports whether the object takes part in selection and dragging at all.
    fn object_is_selectable(&mut self, object: Option<ObjectHandle>) -> bool;

    fn object_kind(&mut self, object: ObjectHandle) -> u8;

    /// Reports whether the object is already selected.
    fn object_selected(&mut self, object: ObjectHandle) -> bool;

    /// Makes this object the only selected one.
    fn select_only(&mut self, object: ObjectHandle);

    /// Adds this object to the selection.
    fn add_to_selection(&mut self, object: ObjectHandle);

    /// Removes this object from the selection.
    fn remove_from_selection(&mut self, object: ObjectHandle);

    /// Writes the object's `SelectPart(...)` script line.
    fn record_selection_script(&mut self, object: ObjectHandle);

    /// Toggles the object's own state, for the kind that has one.
    fn toggle_object_state(&mut self, object: ObjectHandle, on: bool);

    /// Reports whether the object carries a nested handler that wants the
    /// press.
    fn object_takes_press(&mut self, object: ObjectHandle, at: DocumentPoint) -> bool;

    /// Lets that handler consume the press, and begin its own drag when not
    /// scripting.
    fn consume_press(&mut self, object: ObjectHandle);

    /// Lets a probe object consume the press.
    fn probe_takes_press(&mut self, object: ObjectHandle, at: DocumentPoint) -> bool;

    /// Opens an undo record covering the drag that is about to start.
    fn begin_drag_undo_record(&mut self);

    /// Begins dragging the selection from one point.
    fn begin_drag(&mut self, at: DocumentPoint);

    /// Begins a rubber-band selection from one point.
    fn begin_rubber_band(&mut self, at: DocumentPoint);

    /// Clears the popup menu's target.
    fn clear_popup_target(&mut self);

    /// Records the popup menu's target.
    fn set_popup_target(&mut self, object: ObjectHandle);
}

/// Implements Ghidra function `FUN_01c70d20` at `0x01C70D20`.
///
/// Handles `EditorPanel.SchEditBox.OnMouseDown`.
///
/// Decides what a press on the canvas begins.
///
/// The value overlay is dismissed first, whatever the press turns out to be.
///
/// Ctrl with the middle button starts a pan and takes the whole event — that is
/// the only path that runs before the command is consulted, so a pan can be
/// started even mid-gesture.
///
/// Otherwise the running command gets first refusal, a busy editor drops the
/// press, and the edit guard drops it too — deselecting everything on the way
/// out when interactive mode is on, which is what clears a selection before a
/// measurement.
///
/// A pin under the pointer arms the wire command outright, unless Shift is
/// held: Shift is what lets the user grab the object a pin sits on instead of
/// wiring from it.
///
/// Beyond that, Shift extends the selection and Ctrl toggles it, an object that
/// is not selectable at all is dragged without being selected, and one of the
/// two special kinds either toggles its own state or consumes the press itself.
/// Every path that ends in a drag opens one undo record first.
///
/// The right button takes an entirely separate path: it selects whatever is
/// under the pointer and records it as the popup's target, without ever
/// dragging.
pub fn pointer_pressed(
    right_button: bool,
    buttons: u16,
    x: i32,
    y: i32,
    host: &mut impl PointerPressHost,
) -> PressOutcome {
    host.hide_overlay();

    if buttons & MIDDLE_BUTTON != 0 && buttons & CONTROL_HELD != 0 && !host.bookkeeping_suspended()
    {
        host.begin_pan(x, y);
        return PressOutcome::PanStarted;
    }

    if buttons & SUPPRESS_PRESS != 0 || !host.view_ready() {
        return PressOutcome::Ignored;
    }

    if right_button {
        return right_press(buttons, x, y, host);
    }

    if host.command_allows_press(x, y) == Some(false) || host.editor_busy() {
        return PressOutcome::Ignored;
    }

    if host.editing_blocked() {
        if host.interactive_active() {
            host.deselect_all();
        }
        return PressOutcome::Ignored;
    }

    let at = host.to_document_point(x, y);
    let shift = buttons & SHIFT_HELD != 0;
    let control = buttons & CONTROL_HELD != 0;

    let pin = host.pin_at(at);
    if let Some(pin) = pin {
        if host.pin_wiring_enabled() && !shift {
            host.arm_wire_at_pin(pin);
            return PressOutcome::WireArmed;
        }
    }

    let object = host.object_at(at);

    if !host.object_is_selectable(object) {
        let Some(object) = object else {
            host.deselect_all();
            return PressOutcome::Ignored;
        };

        if !host.object_selected(object) {
            host.select_only(object);
        }
        host.begin_drag_undo_record();
        host.begin_drag(at);
        return PressOutcome::DragStarted;
    }

    let Some(object) = object else {
        if !control {
            host.deselect_all();
        }
        host.begin_rubber_band(at);
        return PressOutcome::RubberBand;
    };

    if host.object_kind(object) == TOGGLING_OBJECT_KIND && shift {
        let on = !host.object_selected(object);
        host.toggle_object_state(object, on);
        return PressOutcome::ObjectToggled;
    }

    if shift && pin.is_none() {
        if !control {
            host.deselect_all();
        }
        host.begin_rubber_band(at);
        return PressOutcome::RubberBand;
    }

    if control {
        if host.object_selected(object) {
            host.remove_from_selection(object);
            host.record_selection_script(object);
            return PressOutcome::Ignored;
        }

        host.add_to_selection(object);
        host.record_selection_script(object);
        host.begin_drag_undo_record();
        host.begin_drag(at);
        return PressOutcome::DragStarted;
    }

    if host.object_takes_press(object, at) {
        host.consume_press(object);
        return PressOutcome::ConsumedByObject;
    }

    if host.object_kind(object) == PROBE_OBJECT_KIND && host.probe_takes_press(object, at) {
        return PressOutcome::ConsumedByObject;
    }

    if !host.object_selected(object) {
        host.select_only(object);
        host.record_selection_script(object);
    }

    host.begin_drag_undo_record();
    host.begin_drag(at);
    PressOutcome::DragStarted
}

fn right_press(buttons: u16, x: i32, y: i32, host: &mut impl PointerPressHost) -> PressOutcome {
    host.clear_popup_target();

    if host.command_allows_press(x, y).is_some() || host.editor_busy() {
        return PressOutcome::Ignored;
    }

    let at = host.to_document_point(x, y);
    let Some(object) = host.object_at(at) else {
        return PressOutcome::Ignored;
    };

    if host.object_selected(object) {
        if buttons & SHIFT_HELD != 0 {
            host.remove_from_selection(object);
        }
    } else if buttons & SHIFT_HELD == 0 {
        host.select_only(object);
    } else {
        host.add_to_selection(object);
    }

    host.set_popup_target(object);
    PressOutcome::PopupTarget
}

#[cfg(test)]
mod press_tests {
    use super::*;

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum Step {
        Overlay,
        Pan,
        Deselect,
        Wire(i32),
        SelectOnly,
        Add,
        Remove,
        Script,
        Toggle(bool),
        Consume,
        UndoRecord,
        Drag,
        RubberBand,
        ClearPopup,
        PopupTarget,
    }

    #[derive(Debug)]
    #[allow(clippy::struct_excessive_bools, clippy::struct_field_names)]
    struct Press {
        suspended: bool,
        view: bool,
        command: Option<bool>,
        busy: bool,
        blocked: bool,
        interactive: bool,
        pin: Option<i32>,
        pin_wiring: bool,
        object: Option<ObjectHandle>,
        selectable: bool,
        kind: u8,
        selected: bool,
        takes_press: bool,
        probe_takes: bool,
        steps: Vec<Step>,
    }

    impl Default for Press {
        fn default() -> Self {
            Self {
                suspended: false,
                view: true,
                command: None,
                busy: false,
                blocked: false,
                interactive: false,
                pin: None,
                pin_wiring: true,
                object: Some(ObjectHandle(1)),
                selectable: true,
                kind: 1,
                selected: false,
                takes_press: false,
                probe_takes: false,
                steps: Vec::new(),
            }
        }
    }

    impl PointerPressHost for Press {
        fn hide_overlay(&mut self) {
            self.steps.push(Step::Overlay);
        }

        fn bookkeeping_suspended(&mut self) -> bool {
            self.suspended
        }

        fn begin_pan(&mut self, _x: i32, _y: i32) {
            self.steps.push(Step::Pan);
        }

        fn view_ready(&mut self) -> bool {
            self.view
        }

        fn command_allows_press(&mut self, _x: i32, _y: i32) -> Option<bool> {
            self.command
        }

        fn editor_busy(&mut self) -> bool {
            self.busy
        }

        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn interactive_active(&mut self) -> bool {
            self.interactive
        }

        fn deselect_all(&mut self) {
            self.steps.push(Step::Deselect);
        }

        fn to_document_point(&mut self, x: i32, y: i32) -> DocumentPoint {
            DocumentPoint { x, y }
        }

        fn pin_at(&mut self, _at: DocumentPoint) -> Option<i32> {
            self.pin
        }

        fn scripting_active(&mut self) -> bool {
            false
        }

        fn pin_wiring_enabled(&mut self) -> bool {
            self.pin_wiring
        }

        fn arm_wire_at_pin(&mut self, pin: i32) {
            self.steps.push(Step::Wire(pin));
        }

        fn object_at(&mut self, _at: DocumentPoint) -> Option<ObjectHandle> {
            self.object
        }

        fn object_is_selectable(&mut self, _object: Option<ObjectHandle>) -> bool {
            self.selectable
        }

        fn object_kind(&mut self, _object: ObjectHandle) -> u8 {
            self.kind
        }

        fn object_selected(&mut self, _object: ObjectHandle) -> bool {
            self.selected
        }

        fn select_only(&mut self, _object: ObjectHandle) {
            self.steps.push(Step::SelectOnly);
        }

        fn add_to_selection(&mut self, _object: ObjectHandle) {
            self.steps.push(Step::Add);
        }

        fn remove_from_selection(&mut self, _object: ObjectHandle) {
            self.steps.push(Step::Remove);
        }

        fn record_selection_script(&mut self, _object: ObjectHandle) {
            self.steps.push(Step::Script);
        }

        fn toggle_object_state(&mut self, _object: ObjectHandle, on: bool) {
            self.steps.push(Step::Toggle(on));
        }

        fn object_takes_press(&mut self, _object: ObjectHandle, _at: DocumentPoint) -> bool {
            self.takes_press
        }

        fn consume_press(&mut self, _object: ObjectHandle) {
            self.steps.push(Step::Consume);
        }

        fn probe_takes_press(&mut self, _object: ObjectHandle, _at: DocumentPoint) -> bool {
            self.probe_takes
        }

        fn begin_drag_undo_record(&mut self) {
            self.steps.push(Step::UndoRecord);
        }

        fn begin_drag(&mut self, _at: DocumentPoint) {
            self.steps.push(Step::Drag);
        }

        fn begin_rubber_band(&mut self, _at: DocumentPoint) {
            self.steps.push(Step::RubberBand);
        }

        fn clear_popup_target(&mut self) {
            self.steps.push(Step::ClearPopup);
        }

        fn set_popup_target(&mut self, _object: ObjectHandle) {
            self.steps.push(Step::PopupTarget);
        }
    }

    #[test]
    fn ctrl_with_the_middle_button_starts_a_pan_before_anything_else() {
        let mut host = Press {
            command: Some(false),
            busy: true,
            ..Press::default()
        };

        assert_eq!(
            pointer_pressed(false, MIDDLE_BUTTON | CONTROL_HELD, 1, 2, &mut host),
            PressOutcome::PanStarted
        );

        assert_eq!(host.steps, [Step::Overlay, Step::Pan]);
    }

    #[test]
    fn a_pin_arms_the_wire_command_outright() {
        let mut host = Press {
            pin: Some(4),
            ..Press::default()
        };

        assert_eq!(
            pointer_pressed(false, 0, 1, 2, &mut host),
            PressOutcome::WireArmed
        );

        assert!(host.steps.contains(&Step::Wire(4)));
    }

    #[test]
    fn shift_grabs_the_object_a_pin_sits_on_instead_of_wiring() {
        let mut host = Press {
            pin: Some(4),
            ..Press::default()
        };

        assert_eq!(
            pointer_pressed(false, SHIFT_HELD, 1, 2, &mut host),
            PressOutcome::DragStarted
        );

        assert!(!host.steps.iter().any(|step| matches!(step, Step::Wire(_))));
    }

    #[test]
    fn an_empty_canvas_begins_a_rubber_band() {
        let mut host = Press {
            object: None,
            ..Press::default()
        };

        assert_eq!(
            pointer_pressed(false, 0, 1, 2, &mut host),
            PressOutcome::RubberBand
        );

        assert_eq!(
            host.steps,
            [Step::Overlay, Step::Deselect, Step::RubberBand]
        );
    }

    #[test]
    fn ctrl_keeps_the_rest_of_the_selection_when_the_canvas_is_empty() {
        let mut host = Press {
            object: None,
            ..Press::default()
        };

        assert_eq!(
            pointer_pressed(false, CONTROL_HELD, 1, 2, &mut host),
            PressOutcome::RubberBand
        );

        assert!(!host.steps.contains(&Step::Deselect));
    }

    #[test]
    fn a_plain_press_selects_and_begins_one_undo_step() {
        let mut host = Press::default();

        assert_eq!(
            pointer_pressed(false, 0, 1, 2, &mut host),
            PressOutcome::DragStarted
        );

        assert_eq!(
            host.steps,
            [
                Step::Overlay,
                Step::SelectOnly,
                Step::Script,
                Step::UndoRecord,
                Step::Drag,
            ]
        );
    }

    #[test]
    fn an_already_selected_object_is_dragged_without_reselecting() {
        let mut host = Press {
            selected: true,
            ..Press::default()
        };

        assert_eq!(
            pointer_pressed(false, 0, 1, 2, &mut host),
            PressOutcome::DragStarted
        );

        assert!(!host.steps.contains(&Step::SelectOnly));
    }

    #[test]
    fn ctrl_toggles_an_object_in_and_out_of_the_selection() {
        let mut adding = Press::default();
        assert_eq!(
            pointer_pressed(false, CONTROL_HELD, 1, 2, &mut adding),
            PressOutcome::DragStarted
        );
        assert!(adding.steps.contains(&Step::Add));

        let mut removing = Press {
            selected: true,
            ..Press::default()
        };
        assert_eq!(
            pointer_pressed(false, CONTROL_HELD, 1, 2, &mut removing),
            PressOutcome::Ignored
        );
        assert!(removing.steps.contains(&Step::Remove));
        assert!(!removing.steps.contains(&Step::Drag));
    }

    #[test]
    fn the_toggling_kind_flips_its_own_state_on_shift() {
        let mut host = Press {
            kind: TOGGLING_OBJECT_KIND,
            ..Press::default()
        };

        assert_eq!(
            pointer_pressed(false, SHIFT_HELD, 1, 2, &mut host),
            PressOutcome::ObjectToggled
        );

        assert!(host.steps.contains(&Step::Toggle(true)));
    }

    #[test]
    fn an_object_with_a_nested_handler_can_consume_the_press() {
        let mut host = Press {
            takes_press: true,
            ..Press::default()
        };

        assert_eq!(
            pointer_pressed(false, 0, 1, 2, &mut host),
            PressOutcome::ConsumedByObject
        );

        assert!(!host.steps.contains(&Step::Drag));
    }

    #[test]
    fn a_probe_object_can_consume_it_too() {
        let mut host = Press {
            kind: PROBE_OBJECT_KIND,
            probe_takes: true,
            ..Press::default()
        };

        assert_eq!(
            pointer_pressed(false, 0, 1, 2, &mut host),
            PressOutcome::ConsumedByObject
        );
    }

    #[test]
    fn an_unselectable_object_is_dragged_without_a_rubber_band() {
        let mut host = Press {
            selectable: false,
            ..Press::default()
        };

        assert_eq!(
            pointer_pressed(false, 0, 1, 2, &mut host),
            PressOutcome::DragStarted
        );

        assert!(host.steps.contains(&Step::SelectOnly));
        assert!(!host.steps.contains(&Step::RubberBand));
    }

    #[test]
    fn a_blocked_editor_clears_the_selection_only_in_interactive_mode() {
        let mut plain = Press {
            blocked: true,
            ..Press::default()
        };
        assert_eq!(
            pointer_pressed(false, 0, 1, 2, &mut plain),
            PressOutcome::Ignored
        );
        assert!(!plain.steps.contains(&Step::Deselect));

        let mut interactive = Press {
            blocked: true,
            interactive: true,
            ..Press::default()
        };
        assert_eq!(
            pointer_pressed(false, 0, 1, 2, &mut interactive),
            PressOutcome::Ignored
        );
        assert!(interactive.steps.contains(&Step::Deselect));
    }

    #[test]
    fn a_running_command_that_declines_drops_the_press() {
        let mut host = Press {
            command: Some(false),
            ..Press::default()
        };

        assert_eq!(
            pointer_pressed(false, 0, 1, 2, &mut host),
            PressOutcome::Ignored
        );
        assert_eq!(host.steps, [Step::Overlay]);
    }

    #[test]
    fn the_right_button_records_a_popup_target_without_dragging() {
        let mut host = Press::default();

        assert_eq!(
            pointer_pressed(true, RIGHT_BUTTON, 1, 2, &mut host),
            PressOutcome::PopupTarget
        );

        assert_eq!(
            host.steps,
            [
                Step::Overlay,
                Step::ClearPopup,
                Step::SelectOnly,
                Step::PopupTarget,
            ]
        );
    }

    #[test]
    fn a_right_press_while_a_command_runs_only_clears_the_target() {
        let mut host = Press {
            command: Some(true),
            ..Press::default()
        };

        assert_eq!(
            pointer_pressed(true, RIGHT_BUTTON, 1, 2, &mut host),
            PressOutcome::Ignored
        );

        assert_eq!(host.steps, [Step::Overlay, Step::ClearPopup]);
    }

    #[test]
    fn the_suppression_flag_drops_the_press_entirely() {
        let mut host = Press::default();

        assert_eq!(
            pointer_pressed(false, SUPPRESS_PRESS, 1, 2, &mut host),
            PressOutcome::Ignored
        );
        assert_eq!(host.steps, [Step::Overlay]);
    }
}
