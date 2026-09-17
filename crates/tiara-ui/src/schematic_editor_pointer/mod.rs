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
