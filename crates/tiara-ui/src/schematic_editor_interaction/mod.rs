//! Iced state for the recovered Schematic Editor interaction tools.
//!
//! The editor keeps at most one interaction command alive at a time, in the
//! field the recovered bytes address as `+0x1B58`. Every tool button installs
//! its own command there and presses its own button down; the editing tool is
//! the resting state that owns no command at all.

/// The form the recovered handlers belong to.
pub const FORM_RESOURCE: &str = "SchematicEditor";

/// The recovered object kind that can carry its own double-click handler.
pub const NESTED_OBJECT_KIND: u8 = 4;

/// An opaque handle to a recovered editor interaction command.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct CommandHandle(pub u64);

/// An opaque handle to a recovered schematic object.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct ObjectHandle(pub u64);

/// The Schematic Editor tool buttons that share one pressed slot.
///
/// The recovered form stores the five buttons in consecutive fields, and every
/// tool command presses exactly one of them, so pressing one is what releases
/// whichever was pressed before.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EditorTool {
    /// `TopToolBar.EditorTools.ToolEdit` at `+0xBD0`, hinted "Editing tool".
    ///
    /// This is the resting tool: it owns no command, which is why cancelling
    /// any other tool lands here.
    Edit,
    /// `TopToolBar.EditorTools.ToolComp` at `+0xBC8`, hinted "Last component".
    LastComponent,
    /// `TopToolBar.EditorTools.ToolWire` at `+0xBC0`, hinted "Wire".
    Wire,
    /// `TopToolBar.EditorTools.ToolText` at `+0xBB8`, hinted "Text".
    Text,
    /// `TopToolBar.EditorTools.ToolHideRecon` at `+0xBB0`, hinted
    /// "Hide/Reconnect".
    HideReconnect,
}

pub trait EditorCommandHost {
    /// Reports whether a command currently occupies the editor's command slot.
    fn has_active_command(&mut self) -> bool;

    /// Destroys the command in the slot and empties it.
    fn destroy_active_command(&mut self);

    /// Writes the command slot without destroying what it held.
    fn store_active_command(&mut self, command: Option<CommandHandle>);

    /// Presses one tool button down, releasing whichever was pressed.
    fn press_tool_button(&mut self, tool: EditorTool);
}

/// Implements Ghidra function `FUN_01c6cf20` at `0x01C6CF20`.
///
/// Ends whatever interaction the editor was in and returns to the editing tool.
///
/// This is the shared cancel behind the popup menu's Cancel entry as well as
/// the editing tool button, so abandoning a half-drawn wire and clicking the
/// arrow do the same thing.
///
/// The editing tool is pressed whether or not a command was actually running,
/// which is what keeps the tool bar honest after the command destroyed itself.
pub fn cancel_active_command(host: &mut impl EditorCommandHost) {
    if host.has_active_command() {
        host.destroy_active_command();
    }
    host.press_tool_button(EditorTool::Edit);
}

/// Implements Ghidra function `FUN_01c6d690` at `0x01C6D690`.
///
/// Handles `TopToolBar.EditorTools.ToolEdit.OnClick`.
///
/// The button has nothing of its own to do: picking the editing tool *is*
/// cancelling the current one, so the recovered handler is a direct tail call
/// into the shared cancel.
pub fn activate_editing_tool(host: &mut impl EditorCommandHost) {
    cancel_active_command(host);
}

/// Implements Ghidra function `FUN_01c6cee0` at `0x01C6CEE0`.
///
/// Moves a new command into the editor's command slot.
///
/// A command that replaces a running one cancels it first, which also presses
/// the editing tool — so the tool bar briefly shows the arrow before the caller
/// presses its own button. Callers in this module always press theirs
/// afterwards, so the intermediate state is never painted.
///
/// Clearing the slot with `None` is the recovered exception: the guard requires
/// a non-empty replacement, so an existing command is overwritten without being
/// destroyed. That leak is preserved here rather than fixed, because callers in
/// the recovered build only ever pass a real command.
pub fn install_command(command: Option<CommandHandle>, host: &mut impl EditorCommandHost) {
    if host.has_active_command() && command.is_some() {
        cancel_active_command(host);
    }
    host.store_active_command(command);
}

pub trait ToolActivationHost: EditorCommandHost {
    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Reports whether the application is running a script.
    fn scripting_active(&mut self) -> bool;

    /// Re-inserts the component inserted most recently.
    fn insert_last_component(&mut self);

    /// Constructs the interaction command belonging to one tool.
    ///
    /// The recovered build reaches two different constructors here — one for
    /// the wire command class at `PTR_FUN_013606D0` and one for the
    /// hide/reconnect class at `PTR_FUN_01362168` — so the choice of
    /// constructor belongs to the host rather than to the shared flow.
    fn construct_command(&mut self, tool: EditorTool) -> CommandHandle;
}

/// Implements Ghidra function `FUN_01c6d6a0` at `0x01C6D6A0`.
///
/// Handles `TopToolBar.EditorTools.ToolComp.OnClick` and the Insert menu's
/// "Last &Component" entry.
///
/// Unlike the other tools this one installs no command: re-inserting the last
/// component happens immediately, and the button is pressed so the tool bar
/// shows which insertion is armed.
///
/// A blocked editor or a running script makes the click a no-op, so a recorded
/// session cannot be perturbed by a stray tool-bar click.
pub fn activate_last_component_tool(host: &mut impl ToolActivationHost) -> bool {
    if host.editing_blocked() || host.scripting_active() {
        return false;
    }
    host.insert_last_component();
    host.press_tool_button(EditorTool::LastComponent);
    true
}

/// Implements Ghidra functions `FUN_01c6d6f0` at `0x01C6D6F0` and
/// `FUN_01c6d920` at `0x01C6D920`.
///
/// Arms one of the command-driven tools: wire, or hide/reconnect.
///
/// Both handlers have the same shape — guard, construct, install, press — and
/// differ only in the command class they build, so they share one flow here.
/// Arming the tool performs no edit by itself; the following canvas interaction
/// is what draws the wire or hides the object.
///
/// A blocked editor or a running script makes the click a no-op.
pub fn activate_command_tool(tool: EditorTool, host: &mut impl ToolActivationHost) -> bool {
    if host.editing_blocked() || host.scripting_active() {
        return false;
    }
    let command = host.construct_command(tool);
    install_command(Some(command), host);
    host.press_tool_button(tool);
    true
}

/// A point in the editor's own coordinates.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DocumentPoint {
    pub x: i32,
    pub y: i32,
}

pub trait TextInsertionHost: EditorCommandHost {
    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Creates the temporary text object.
    fn create_text_object(&mut self) -> ObjectHandle;

    /// Runs the text object's own entry and validation step.
    fn enter_text(&mut self, object: ObjectHandle) -> bool;

    fn destroy_object(&mut self, object: ObjectHandle);

    /// Pushes the undo record that describes adding this object.
    fn record_undo_step(&mut self, object: ObjectHandle);

    fn add_object_to_document(&mut self, object: ObjectHandle);

    /// Writes `SelectPart(...)` script lines for the objects already present.
    fn record_selection_script(&mut self);

    /// The insertion point the editor last placed the caret at.
    fn insertion_point(&mut self) -> DocumentPoint;

    fn place_object(&mut self, object: ObjectHandle, at: DocumentPoint);

    /// Makes this object the only selected one.
    fn select_only(&mut self, object: ObjectHandle);

    fn draw_object(&mut self, object: ObjectHandle);

    /// Refreshes the editor around the point the object landed on.
    fn refresh_after_insert(&mut self, at: DocumentPoint);
}

/// Implements Ghidra function `FUN_01c6d750` at `0x01C6D750`.
///
/// Handles `TopToolBar.EditorTools.ToolText.OnClick` and the Insert menu's
/// "&Text" entry.
///
/// The text tool is the one tool that asks for its content up front: the object
/// is built and its entry step runs before anything reaches the document, so
/// cancelling the text entry leaves the schematic untouched. That rejection
/// path destroys the temporary object and falls back to the editing tool rather
/// than leaving the text tool armed with nothing to place.
///
/// Accepted text is added under one undo record, placed at the current
/// insertion point, made the only selection, and drawn — then the text tool is
/// pressed so the next click starts another one.
pub fn insert_text_object(host: &mut impl TextInsertionHost) -> Option<ObjectHandle> {
    if host.editing_blocked() {
        return None;
    }

    let object = host.create_text_object();
    if !host.enter_text(object) {
        host.destroy_object(object);
        cancel_active_command(host);
        return None;
    }

    host.record_undo_step(object);
    host.add_object_to_document(object);
    host.record_selection_script();

    let at = host.insertion_point();
    host.place_object(object, at);
    host.select_only(object);
    host.draw_object(object);
    host.refresh_after_insert(at);
    host.press_tool_button(EditorTool::Text);
    Some(object)
}

/// The command classes a canvas click latches, in the recovered test order.
///
/// Both are tested against the one command in the slot, so at most one can
/// match; the recovered handler still re-reads the slot between the two tests.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ClickLatchingCommand {
    /// The command class at `PTR_FUN_013611B8`. The recovered symbols do not
    /// name it. Its armed flag sits at `+0x29` and its latch at `+0x2A`.
    Unidentified,
    /// The wire command class at `PTR_FUN_013606D0` — the one
    /// [`activate_command_tool`] installs for [`EditorTool::Wire`]. Its armed
    /// flag sits at `+0x1A` and its latch at `+0x1B`.
    Wire,
}

impl ClickLatchingCommand {
    /// The order the recovered handler tests the two classes in.
    pub const TEST_ORDER: [Self; 2] = [Self::Unidentified, Self::Wire];
}

pub trait CanvasClickHost {
    /// Makes the schematic canvas the form's active control.
    fn focus_canvas(&mut self);

    /// Reports whether the command in the slot is of this class and is armed.
    fn command_is_armed(&mut self, command: ClickLatchingCommand) -> bool;

    /// Latches the click on the command of this class.
    fn latch_click(&mut self, command: ClickLatchingCommand);
}

/// Implements Ghidra function `FUN_01c6d5f0` at `0x01C6D5F0`.
///
/// Handles `EditorPanel.SchEditBox.OnClick`.
///
/// Clicking the canvas always takes the keyboard focus, which is what makes the
/// editor's shortcuts work after the user has been in the component list.
///
/// Beyond that the click only latches a flag on the running command, and only
/// on a command that already armed itself — the click never arms one. A command
/// that is not one of the two latching classes sees nothing at all.
pub fn canvas_clicked(host: &mut impl CanvasClickHost) {
    host.focus_canvas();

    for command in ClickLatchingCommand::TEST_ORDER {
        if host.command_is_armed(command) {
            host.latch_click(command);
        }
    }
}

pub trait CanvasDoubleClickHost {
    /// Hides and refreshes the overlay control at `+0x2510`.
    fn hide_overlay(&mut self);

    /// Reports whether a document view with a drawing surface is open.
    fn view_ready(&mut self) -> bool;

    /// The cursor position in the canvas's own client coordinates.
    fn cursor_position(&mut self) -> DocumentPoint;

    /// Asks the running command whether the default double-click may proceed.
    ///
    /// `None` means no command is installed, which lets it proceed.
    fn command_allows_double_click(&mut self, at: DocumentPoint) -> Option<bool>;

    /// Reports whether an analysis or modal state is in progress.
    fn editor_busy(&mut self) -> bool;

    /// Converts a client point to the document's own coordinates.
    fn to_document_point(&mut self, at: DocumentPoint) -> DocumentPoint;

    fn object_at(&mut self, at: DocumentPoint) -> Option<ObjectHandle>;

    /// Reports whether this object may be opened in the current editor mode.
    fn object_is_editable(&mut self, object: ObjectHandle) -> bool;

    fn object_kind(&mut self, object: ObjectHandle) -> u8;

    /// Reports whether the object carries its own double-click handler.
    fn object_has_nested_handler(&mut self, object: ObjectHandle) -> bool;

    /// Runs the object's own double-click handler, reporting whether it
    /// consumed the click.
    fn nested_double_click(&mut self, object: ObjectHandle, at: DocumentPoint) -> bool;

    /// Reports whether selection changes are being written to the script log.
    fn recording_selection(&mut self) -> bool;

    /// Writes `SelectPart(...)` lines for the objects other than the anchor.
    ///
    /// The recovered call passes the double-clicked object, but the callee
    /// ignores that argument and skips the view's own anchor field instead.
    fn record_selection_script_before_edit(&mut self);

    /// Makes this object the only selected one.
    fn select_only(&mut self, object: ObjectHandle);

    /// Opens the property editor for the current selection.
    fn edit_object_properties(&mut self);

    /// Writes `SelectPart(...)` lines for every object.
    fn record_selection_script_after_edit(&mut self);
}

/// Implements Ghidra function `FUN_01c6d980` at `0x01C6D980`.
///
/// Handles `EditorPanel.SchEditBox.OnDblClick`.
///
/// Double-clicking an object opens its properties, but only after three other
/// claimants have declined it: a running command may swallow the double-click
/// so that placing a wire is not interrupted, a busy editor ignores it
/// entirely, and an object that carries a nested handler — a macro opening its
/// own contents, say — gets first refusal.
///
/// Only when all of them pass does the object become the selection and its
/// property editor open. The selection is written to the script log on both
/// sides of the dialog, so a recorded session replays the same selection the
/// user saw.
///
/// Returns whether the property editor was opened.
pub fn canvas_double_clicked(host: &mut impl CanvasDoubleClickHost) -> bool {
    host.hide_overlay();

    if !host.view_ready() {
        return false;
    }

    let at = host.cursor_position();
    if host.command_allows_double_click(at) == Some(false) {
        return false;
    }

    if host.editor_busy() {
        return false;
    }

    let document_point = host.to_document_point(at);
    let Some(object) = host.object_at(document_point) else {
        return false;
    };
    if !host.object_is_editable(object) {
        return false;
    }

    if host.object_kind(object) == NESTED_OBJECT_KIND
        && host.object_has_nested_handler(object)
        && host.nested_double_click(object, document_point)
    {
        return false;
    }

    if host.recording_selection() {
        host.record_selection_script_before_edit();
        host.select_only(object);
    }

    host.edit_object_properties();

    if host.recording_selection() {
        host.record_selection_script_after_edit();
    }

    true
}

/// Implements Ghidra function `FUN_01c773a0` at `0x01C773A0`.
///
/// Handles `MainMenu.Insert.mnComponent.OnClick` and
/// `SchPopup.pmLastComponent.OnClick` ("Last &Component").
///
/// Both entries are direct tail calls into the tool button's handler, and
/// neither looks at its sender, so menu, popup and tool button behave
/// identically.
pub fn menu_insert_last_component(host: &mut impl ToolActivationHost) -> bool {
    activate_last_component_tool(host)
}

/// Implements Ghidra function `FUN_01c773b0` at `0x01C773B0`.
///
/// Handles `MainMenu.Insert.mnWire.OnClick` and `SchPopup.pmWire.OnClick`
/// ("&Wire").
///
/// A direct tail call into the wire tool button's handler.
pub fn menu_insert_wire(host: &mut impl ToolActivationHost) -> bool {
    activate_command_tool(EditorTool::Wire, host)
}

/// Implements Ghidra function `FUN_01c772e0` at `0x01C772E0`.
///
/// Handles `MainMenu.Edit.mnHideReconnect.OnClick` ("&Hide/Reconnect").
///
/// A direct tail call into the hide/reconnect tool button's handler. The click
/// only arms the mode; the following canvas interaction decides which object is
/// hidden or reconnected.
pub fn menu_hide_reconnect(host: &mut impl ToolActivationHost) -> bool {
    activate_command_tool(EditorTool::HideReconnect, host)
}

/// Implements Ghidra function `FUN_01c77460` at `0x01C77460`.
///
/// Handles `MainMenu.Insert.mnText.OnClick` ("&Text").
///
/// A direct tail call into the text tool button's handler, so the menu entry
/// also asks for the text before anything reaches the schematic.
pub fn menu_insert_text(host: &mut impl TextInsertionHost) -> Option<ObjectHandle> {
    insert_text_object(host)
}

/// Implements Ghidra function `FUN_01c773c0` at `0x01C773C0`.
///
/// Handles `MainMenu.Insert.mnInput.OnClick` ("&Input").
///
/// Arms the input-placement command.
///
/// This is the one armed tool with no button of its own on the tool bar, so
/// nothing in the tool bar shows that it is armed — the editing tool stays
/// pressed from whatever came before.
///
/// A blocked editor or a running script makes the click a no-op.
pub fn arm_input_command(host: &mut impl InputCommandHost) -> bool {
    if host.editing_blocked() || host.scripting_active() {
        return false;
    }
    let command = host.construct_input_command();
    install_command(Some(command), host);
    true
}

pub trait InputCommandHost: EditorCommandHost {
    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Reports whether the application is running a script.
    fn scripting_active(&mut self) -> bool;

    /// Constructs the input-placement command of class `PTR_FUN_01361730`.
    fn construct_input_command(&mut self) -> CommandHandle;
}

/// An opaque handle to a recovered undo record.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct EditUndoRecord(pub u64);

/// The transforms the editor applies to the whole selection at once.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SelectionTransform {
    /// Rotate clockwise, reached from `ToolRRight` and the numeric-pad `+`.
    RotateRight,
    /// Rotate counter-clockwise, reached from `ToolRLeft` and the numeric-pad
    /// `-`.
    RotateLeft,
    /// Mirror along the Y axis, reached from `ToolMirror` and the numeric-pad
    /// `*`.
    Mirror,
}

pub trait SelectionTransformHost {
    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Reports whether the application is running a script.
    fn scripting_active(&mut self) -> bool;

    /// Reports whether the view has suspended its own change bookkeeping.
    ///
    /// The recovered flag lives at `+0xD1` on the view and reads as `false`
    /// when there is no view at all.
    fn bookkeeping_suspended(&mut self) -> bool;

    /// Opens an undo record named after this transform.
    fn begin_undo_record(&mut self, transform: SelectionTransform) -> Option<EditUndoRecord>;

    /// Applies the transform to every selected object.
    fn apply_transform(&mut self, transform: SelectionTransform);

    /// Reports whether any object actually changed.
    fn any_object_changed(&mut self) -> bool;

    /// Rolls the undo record back, leaving the history untouched.
    fn discard_undo_record(&mut self, record: EditUndoRecord);

    /// Commits the undo record so the step can be undone.
    fn commit_undo_record(&mut self, record: EditUndoRecord);

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);
}

/// Implements Ghidra functions `FUN_01c6d2f0` at `0x01C6D2F0`, `FUN_01c6d1a0`
/// at `0x01C6D1A0`, and `FUN_01c6d440` at `0x01C6D440`.
///
/// Rotates or mirrors the whole selection as one undo step.
///
/// All three transforms have the same shape and differ only in the operation
/// and the name the undo record carries, so they share one flow here. Each is
/// reached from a tool-bar button and from its numeric-pad key.
///
/// A selection where nothing could be transformed throws the undo record away
/// rather than leaving an empty step in the history. The document is marked
/// changed only when the view is doing its own bookkeeping — which is what
/// keeps a scripted rotation from marking the circuit dirty a second time.
///
/// Returns whether the transform ran, which is also what the recovered handler
/// writes into the message result.
pub fn transform_selection(
    transform: SelectionTransform,
    host: &mut impl SelectionTransformHost,
) -> bool {
    if host.editing_blocked() {
        return false;
    }
    if host.scripting_active() && !host.bookkeeping_suspended() {
        return false;
    }

    let record = host.begin_undo_record(transform);
    host.apply_transform(transform);

    if host.any_object_changed() {
        if !host.scripting_active() && !host.bookkeeping_suspended() {
            host.mark_document_changed();
        }
        if let Some(record) = record {
            host.commit_undo_record(record);
        }
    } else if let Some(record) = record {
        host.discard_undo_record(record);
    }

    true
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum CommandStep {
        Destroy,
        Store(Option<CommandHandle>),
        Press(EditorTool),
        InsertLastComponent,
        Construct(EditorTool),
    }

    #[derive(Debug, Default)]
    struct CommandHost {
        active: Option<CommandHandle>,
        blocked: bool,
        scripting: bool,
        next_command: u64,
        steps: Vec<CommandStep>,
    }

    impl EditorCommandHost for CommandHost {
        fn has_active_command(&mut self) -> bool {
            self.active.is_some()
        }

        fn destroy_active_command(&mut self) {
            self.active = None;
            self.steps.push(CommandStep::Destroy);
        }

        fn store_active_command(&mut self, command: Option<CommandHandle>) {
            self.active = command;
            self.steps.push(CommandStep::Store(command));
        }

        fn press_tool_button(&mut self, tool: EditorTool) {
            self.steps.push(CommandStep::Press(tool));
        }
    }

    impl ToolActivationHost for CommandHost {
        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn scripting_active(&mut self) -> bool {
            self.scripting
        }

        fn insert_last_component(&mut self) {
            self.steps.push(CommandStep::InsertLastComponent);
        }

        fn construct_command(&mut self, tool: EditorTool) -> CommandHandle {
            self.steps.push(CommandStep::Construct(tool));
            self.next_command += 1;
            CommandHandle(self.next_command)
        }
    }

    #[test]
    fn cancelling_returns_to_the_editing_tool_with_or_without_a_command() {
        let mut running = CommandHost {
            active: Some(CommandHandle(7)),
            ..CommandHost::default()
        };
        cancel_active_command(&mut running);
        assert_eq!(
            running.steps,
            [CommandStep::Destroy, CommandStep::Press(EditorTool::Edit)]
        );

        let mut idle = CommandHost::default();
        cancel_active_command(&mut idle);
        assert_eq!(idle.steps, [CommandStep::Press(EditorTool::Edit)]);
    }

    #[test]
    fn the_editing_tool_button_is_the_shared_cancel() {
        let mut host = CommandHost {
            active: Some(CommandHandle(3)),
            ..CommandHost::default()
        };

        activate_editing_tool(&mut host);

        assert_eq!(
            host.steps,
            [CommandStep::Destroy, CommandStep::Press(EditorTool::Edit)]
        );
        assert!(host.active.is_none());
    }

    #[test]
    fn a_replacement_command_cancels_the_running_one_first() {
        let mut host = CommandHost {
            active: Some(CommandHandle(1)),
            ..CommandHost::default()
        };

        install_command(Some(CommandHandle(2)), &mut host);

        assert_eq!(
            host.steps,
            [
                CommandStep::Destroy,
                CommandStep::Press(EditorTool::Edit),
                CommandStep::Store(Some(CommandHandle(2))),
            ]
        );
    }

    #[test]
    fn clearing_the_slot_overwrites_the_running_command_without_destroying_it() {
        // Pins the recovered guard: it requires a non-empty replacement, so an
        // empty one leaks whatever was running.
        let mut host = CommandHost {
            active: Some(CommandHandle(1)),
            ..CommandHost::default()
        };

        install_command(None, &mut host);

        assert_eq!(host.steps, [CommandStep::Store(None)]);
    }

    #[test]
    fn the_last_component_tool_inserts_immediately_and_installs_no_command() {
        let mut host = CommandHost::default();

        assert!(activate_last_component_tool(&mut host));

        assert_eq!(
            host.steps,
            [
                CommandStep::InsertLastComponent,
                CommandStep::Press(EditorTool::LastComponent),
            ]
        );
        assert!(host.active.is_none());
    }

    #[test]
    fn the_command_tools_construct_install_and_press_their_own_button() {
        for tool in [EditorTool::Wire, EditorTool::HideReconnect] {
            let mut host = CommandHost::default();

            assert!(activate_command_tool(tool, &mut host));

            assert_eq!(
                host.steps,
                [
                    CommandStep::Construct(tool),
                    CommandStep::Store(Some(CommandHandle(1))),
                    CommandStep::Press(tool),
                ]
            );
        }
    }

    #[test]
    fn arming_a_tool_over_a_running_one_passes_through_the_editing_tool() {
        let mut host = CommandHost {
            active: Some(CommandHandle(9)),
            ..CommandHost::default()
        };

        assert!(activate_command_tool(EditorTool::Wire, &mut host));

        assert_eq!(
            host.steps,
            [
                CommandStep::Construct(EditorTool::Wire),
                CommandStep::Destroy,
                CommandStep::Press(EditorTool::Edit),
                CommandStep::Store(Some(CommandHandle(1))),
                CommandStep::Press(EditorTool::Wire),
            ]
        );
    }

    #[test]
    fn a_blocked_editor_or_a_running_script_leaves_every_tool_alone() {
        for blocked in [true, false] {
            let mut host = CommandHost {
                blocked,
                scripting: !blocked,
                ..CommandHost::default()
            };

            assert!(!activate_last_component_tool(&mut host));
            assert!(!activate_command_tool(EditorTool::Wire, &mut host));
            assert!(!activate_command_tool(EditorTool::HideReconnect, &mut host));
            assert!(host.steps.is_empty());
        }
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum TextStep {
        Create,
        Enter,
        Destroy,
        Cancel,
        Undo,
        Add,
        Script,
        Place(DocumentPoint),
        SelectOnly,
        Draw,
        Refresh(DocumentPoint),
        Press(EditorTool),
    }

    #[derive(Debug, Default)]
    struct TextHost {
        blocked: bool,
        accept: bool,
        steps: Vec<TextStep>,
    }

    impl EditorCommandHost for TextHost {
        fn has_active_command(&mut self) -> bool {
            false
        }

        fn destroy_active_command(&mut self) {
            self.steps.push(TextStep::Cancel);
        }

        fn store_active_command(&mut self, _command: Option<CommandHandle>) {
            unreachable!("the text tool never installs a command");
        }

        fn press_tool_button(&mut self, tool: EditorTool) {
            self.steps.push(TextStep::Press(tool));
        }
    }

    impl TextInsertionHost for TextHost {
        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn create_text_object(&mut self) -> ObjectHandle {
            self.steps.push(TextStep::Create);
            ObjectHandle(42)
        }

        fn enter_text(&mut self, _object: ObjectHandle) -> bool {
            self.steps.push(TextStep::Enter);
            self.accept
        }

        fn destroy_object(&mut self, _object: ObjectHandle) {
            self.steps.push(TextStep::Destroy);
        }

        fn record_undo_step(&mut self, _object: ObjectHandle) {
            self.steps.push(TextStep::Undo);
        }

        fn add_object_to_document(&mut self, _object: ObjectHandle) {
            self.steps.push(TextStep::Add);
        }

        fn record_selection_script(&mut self) {
            self.steps.push(TextStep::Script);
        }

        fn insertion_point(&mut self) -> DocumentPoint {
            DocumentPoint { x: 120, y: 240 }
        }

        fn place_object(&mut self, _object: ObjectHandle, at: DocumentPoint) {
            self.steps.push(TextStep::Place(at));
        }

        fn select_only(&mut self, _object: ObjectHandle) {
            self.steps.push(TextStep::SelectOnly);
        }

        fn draw_object(&mut self, _object: ObjectHandle) {
            self.steps.push(TextStep::Draw);
        }

        fn refresh_after_insert(&mut self, at: DocumentPoint) {
            self.steps.push(TextStep::Refresh(at));
        }
    }

    #[test]
    fn accepted_text_is_placed_selected_and_leaves_the_text_tool_armed() {
        let mut host = TextHost {
            accept: true,
            ..TextHost::default()
        };

        assert_eq!(insert_text_object(&mut host), Some(ObjectHandle(42)));

        let at = DocumentPoint { x: 120, y: 240 };
        assert_eq!(
            host.steps,
            [
                TextStep::Create,
                TextStep::Enter,
                TextStep::Undo,
                TextStep::Add,
                TextStep::Script,
                TextStep::Place(at),
                TextStep::SelectOnly,
                TextStep::Draw,
                TextStep::Refresh(at),
                TextStep::Press(EditorTool::Text),
            ]
        );
    }

    #[test]
    fn rejected_text_is_destroyed_and_drops_back_to_the_editing_tool() {
        let mut host = TextHost::default();

        assert_eq!(insert_text_object(&mut host), None);

        assert_eq!(
            host.steps,
            [
                TextStep::Create,
                TextStep::Enter,
                TextStep::Destroy,
                TextStep::Press(EditorTool::Edit),
            ]
        );
    }

    #[test]
    fn a_blocked_editor_never_builds_the_text_object() {
        let mut host = TextHost {
            blocked: true,
            accept: true,
            ..TextHost::default()
        };

        assert_eq!(insert_text_object(&mut host), None);
        assert!(host.steps.is_empty());
    }

    #[derive(Debug, Default)]
    struct ClickHost {
        armed: Vec<ClickLatchingCommand>,
        focused: usize,
        latched: Vec<ClickLatchingCommand>,
    }

    impl CanvasClickHost for ClickHost {
        fn focus_canvas(&mut self) {
            self.focused += 1;
        }

        fn command_is_armed(&mut self, command: ClickLatchingCommand) -> bool {
            self.armed.contains(&command)
        }

        fn latch_click(&mut self, command: ClickLatchingCommand) {
            self.latched.push(command);
        }
    }

    #[test]
    fn a_canvas_click_focuses_the_canvas_even_with_no_command_running() {
        let mut host = ClickHost::default();

        canvas_clicked(&mut host);

        assert_eq!(host.focused, 1);
        assert!(host.latched.is_empty());
    }

    #[test]
    fn a_canvas_click_latches_only_an_already_armed_command() {
        let mut host = ClickHost {
            armed: vec![ClickLatchingCommand::Wire],
            ..ClickHost::default()
        };

        canvas_clicked(&mut host);

        assert_eq!(host.latched, [ClickLatchingCommand::Wire]);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum Claimant {
        Command,
        Busy,
        Nested,
        None,
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum DoubleClickStep {
        Overlay,
        ScriptBefore,
        SelectOnly,
        Edit,
        ScriptAfter,
    }

    #[derive(Debug)]
    struct DoubleClickHost {
        claimant: Claimant,
        has_command: bool,
        recording: bool,
        object: Option<ObjectHandle>,
        steps: Vec<DoubleClickStep>,
    }

    impl Default for DoubleClickHost {
        fn default() -> Self {
            Self {
                claimant: Claimant::None,
                has_command: false,
                recording: false,
                object: Some(ObjectHandle(5)),
                steps: Vec::new(),
            }
        }
    }

    impl CanvasDoubleClickHost for DoubleClickHost {
        fn hide_overlay(&mut self) {
            self.steps.push(DoubleClickStep::Overlay);
        }

        fn view_ready(&mut self) -> bool {
            true
        }

        fn cursor_position(&mut self) -> DocumentPoint {
            DocumentPoint { x: 40, y: 80 }
        }

        fn command_allows_double_click(&mut self, _at: DocumentPoint) -> Option<bool> {
            if self.has_command || self.claimant == Claimant::Command {
                Some(self.claimant != Claimant::Command)
            } else {
                None
            }
        }

        fn editor_busy(&mut self) -> bool {
            self.claimant == Claimant::Busy
        }

        fn to_document_point(&mut self, at: DocumentPoint) -> DocumentPoint {
            DocumentPoint {
                x: at.x / 2,
                y: at.y / 2,
            }
        }

        fn object_at(&mut self, _at: DocumentPoint) -> Option<ObjectHandle> {
            self.object
        }

        fn object_is_editable(&mut self, _object: ObjectHandle) -> bool {
            true
        }

        fn object_kind(&mut self, _object: ObjectHandle) -> u8 {
            NESTED_OBJECT_KIND
        }

        fn object_has_nested_handler(&mut self, _object: ObjectHandle) -> bool {
            true
        }

        fn nested_double_click(&mut self, _object: ObjectHandle, _at: DocumentPoint) -> bool {
            self.claimant == Claimant::Nested
        }

        fn recording_selection(&mut self) -> bool {
            self.recording
        }

        fn record_selection_script_before_edit(&mut self) {
            self.steps.push(DoubleClickStep::ScriptBefore);
        }

        fn select_only(&mut self, _object: ObjectHandle) {
            self.steps.push(DoubleClickStep::SelectOnly);
        }

        fn edit_object_properties(&mut self) {
            self.steps.push(DoubleClickStep::Edit);
        }

        fn record_selection_script_after_edit(&mut self) {
            self.steps.push(DoubleClickStep::ScriptAfter);
        }
    }

    #[test]
    fn a_double_click_with_nothing_in_the_way_opens_the_property_editor() {
        let mut host = DoubleClickHost::default();

        assert!(canvas_double_clicked(&mut host));

        assert_eq!(
            host.steps,
            [DoubleClickStep::Overlay, DoubleClickStep::Edit]
        );
    }

    #[test]
    fn a_running_command_that_permits_the_double_click_does_not_block_it() {
        let mut host = DoubleClickHost {
            has_command: true,
            ..DoubleClickHost::default()
        };

        assert!(canvas_double_clicked(&mut host));
    }

    #[test]
    fn each_claimant_in_turn_swallows_the_double_click() {
        for claimant in [Claimant::Command, Claimant::Busy, Claimant::Nested] {
            let mut host = DoubleClickHost {
                claimant,
                ..DoubleClickHost::default()
            };

            assert!(!canvas_double_clicked(&mut host));
            assert_eq!(host.steps, [DoubleClickStep::Overlay]);
        }
    }

    #[test]
    fn empty_canvas_hides_the_overlay_and_stops() {
        let mut host = DoubleClickHost {
            object: None,
            ..DoubleClickHost::default()
        };

        assert!(!canvas_double_clicked(&mut host));
        assert_eq!(host.steps, [DoubleClickStep::Overlay]);
    }

    #[test]
    fn a_recorded_session_logs_the_selection_on_both_sides_of_the_dialog() {
        let mut host = DoubleClickHost {
            recording: true,
            ..DoubleClickHost::default()
        };

        assert!(canvas_double_clicked(&mut host));

        assert_eq!(
            host.steps,
            [
                DoubleClickStep::Overlay,
                DoubleClickStep::ScriptBefore,
                DoubleClickStep::SelectOnly,
                DoubleClickStep::Edit,
                DoubleClickStep::ScriptAfter,
            ]
        );
    }
}

#[cfg(test)]
mod menu_and_transform_tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Destroy,
        Store(Option<CommandHandle>),
        Press(EditorTool),
        InsertLastComponent,
        Construct(EditorTool),
        ConstructInput,
        CreateText,
        AddText,
    }

    #[derive(Debug, Default)]
    struct MenuHost {
        active: Option<CommandHandle>,
        blocked: bool,
        scripting: bool,
        steps: Vec<Step>,
    }

    impl EditorCommandHost for MenuHost {
        fn has_active_command(&mut self) -> bool {
            self.active.is_some()
        }

        fn destroy_active_command(&mut self) {
            self.active = None;
            self.steps.push(Step::Destroy);
        }

        fn store_active_command(&mut self, command: Option<CommandHandle>) {
            self.active = command;
            self.steps.push(Step::Store(command));
        }

        fn press_tool_button(&mut self, tool: EditorTool) {
            self.steps.push(Step::Press(tool));
        }
    }

    impl ToolActivationHost for MenuHost {
        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn scripting_active(&mut self) -> bool {
            self.scripting
        }

        fn insert_last_component(&mut self) {
            self.steps.push(Step::InsertLastComponent);
        }

        fn construct_command(&mut self, tool: EditorTool) -> CommandHandle {
            self.steps.push(Step::Construct(tool));
            CommandHandle(1)
        }
    }

    impl InputCommandHost for MenuHost {
        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn scripting_active(&mut self) -> bool {
            self.scripting
        }

        fn construct_input_command(&mut self) -> CommandHandle {
            self.steps.push(Step::ConstructInput);
            CommandHandle(2)
        }
    }

    impl TextInsertionHost for MenuHost {
        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn create_text_object(&mut self) -> ObjectHandle {
            self.steps.push(Step::CreateText);
            ObjectHandle(8)
        }

        fn enter_text(&mut self, _object: ObjectHandle) -> bool {
            true
        }

        fn destroy_object(&mut self, _object: ObjectHandle) {}

        fn record_undo_step(&mut self, _object: ObjectHandle) {}

        fn add_object_to_document(&mut self, _object: ObjectHandle) {
            self.steps.push(Step::AddText);
        }

        fn record_selection_script(&mut self) {}

        fn insertion_point(&mut self) -> DocumentPoint {
            DocumentPoint { x: 0, y: 0 }
        }

        fn place_object(&mut self, _object: ObjectHandle, _at: DocumentPoint) {}

        fn select_only(&mut self, _object: ObjectHandle) {}

        fn draw_object(&mut self, _object: ObjectHandle) {}

        fn refresh_after_insert(&mut self, _at: DocumentPoint) {}
    }

    #[test]
    fn the_menu_entries_reach_the_same_tools_as_the_buttons() {
        let mut host = MenuHost::default();
        assert!(menu_insert_last_component(&mut host));
        assert_eq!(
            host.steps,
            [
                Step::InsertLastComponent,
                Step::Press(EditorTool::LastComponent)
            ]
        );

        let mut host = MenuHost::default();
        assert!(menu_insert_wire(&mut host));
        assert_eq!(
            host.steps,
            [
                Step::Construct(EditorTool::Wire),
                Step::Store(Some(CommandHandle(1))),
                Step::Press(EditorTool::Wire),
            ]
        );

        let mut host = MenuHost::default();
        assert!(menu_hide_reconnect(&mut host));
        assert_eq!(
            host.steps,
            [
                Step::Construct(EditorTool::HideReconnect),
                Step::Store(Some(CommandHandle(1))),
                Step::Press(EditorTool::HideReconnect),
            ]
        );

        let mut host = MenuHost::default();
        assert_eq!(menu_insert_text(&mut host), Some(ObjectHandle(8)));
        assert_eq!(
            host.steps,
            [
                Step::CreateText,
                Step::AddText,
                Step::Press(EditorTool::Text)
            ]
        );
    }

    #[test]
    fn the_input_command_arms_without_pressing_any_button() {
        let mut host = MenuHost::default();

        assert!(arm_input_command(&mut host));

        assert_eq!(
            host.steps,
            [Step::ConstructInput, Step::Store(Some(CommandHandle(2)))]
        );
    }

    #[test]
    fn a_blocked_editor_arms_no_input_command() {
        for (blocked, scripting) in [(true, false), (false, true)] {
            let mut host = MenuHost {
                blocked,
                scripting,
                ..MenuHost::default()
            };

            assert!(!arm_input_command(&mut host));
            assert!(host.steps.is_empty());
        }
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum TransformStep {
        Begin(SelectionTransform),
        Apply(SelectionTransform),
        Discard,
        Commit,
        Changed,
    }

    #[derive(Debug, Default)]
    #[allow(clippy::struct_excessive_bools)]
    struct TransformHost {
        blocked: bool,
        scripting: bool,
        suspended: bool,
        changed: bool,
        steps: Vec<TransformStep>,
    }

    impl SelectionTransformHost for TransformHost {
        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn scripting_active(&mut self) -> bool {
            self.scripting
        }

        fn bookkeeping_suspended(&mut self) -> bool {
            self.suspended
        }

        fn begin_undo_record(&mut self, transform: SelectionTransform) -> Option<EditUndoRecord> {
            self.steps.push(TransformStep::Begin(transform));
            Some(EditUndoRecord(1))
        }

        fn apply_transform(&mut self, transform: SelectionTransform) {
            self.steps.push(TransformStep::Apply(transform));
        }

        fn any_object_changed(&mut self) -> bool {
            self.changed
        }

        fn discard_undo_record(&mut self, _record: EditUndoRecord) {
            self.steps.push(TransformStep::Discard);
        }

        fn commit_undo_record(&mut self, _record: EditUndoRecord) {
            self.steps.push(TransformStep::Commit);
        }

        fn mark_document_changed(&mut self) {
            self.steps.push(TransformStep::Changed);
        }
    }

    #[test]
    fn every_transform_commits_one_undo_step_and_marks_the_document() {
        for transform in [
            SelectionTransform::RotateRight,
            SelectionTransform::RotateLeft,
            SelectionTransform::Mirror,
        ] {
            let mut host = TransformHost {
                changed: true,
                ..TransformHost::default()
            };

            assert!(transform_selection(transform, &mut host));

            assert_eq!(
                host.steps,
                [
                    TransformStep::Begin(transform),
                    TransformStep::Apply(transform),
                    TransformStep::Changed,
                    TransformStep::Commit,
                ]
            );
        }
    }

    #[test]
    fn a_transform_that_changes_nothing_leaves_no_undo_step_behind() {
        let mut host = TransformHost::default();

        assert!(transform_selection(SelectionTransform::Mirror, &mut host));

        assert_eq!(
            host.steps,
            [
                TransformStep::Begin(SelectionTransform::Mirror),
                TransformStep::Apply(SelectionTransform::Mirror),
                TransformStep::Discard,
            ]
        );
    }

    #[test]
    fn a_script_may_transform_only_while_the_view_suspends_its_bookkeeping() {
        let mut refused = TransformHost {
            scripting: true,
            changed: true,
            ..TransformHost::default()
        };
        assert!(!transform_selection(
            SelectionTransform::RotateRight,
            &mut refused
        ));
        assert!(refused.steps.is_empty());

        let mut allowed = TransformHost {
            scripting: true,
            suspended: true,
            changed: true,
            ..TransformHost::default()
        };
        assert!(transform_selection(
            SelectionTransform::RotateRight,
            &mut allowed
        ));
        assert_eq!(
            allowed.steps,
            [
                TransformStep::Begin(SelectionTransform::RotateRight),
                TransformStep::Apply(SelectionTransform::RotateRight),
                TransformStep::Commit,
            ]
        );
    }

    #[test]
    fn a_blocked_editor_transforms_nothing() {
        let mut host = TransformHost {
            blocked: true,
            changed: true,
            ..TransformHost::default()
        };

        assert!(!transform_selection(
            SelectionTransform::RotateLeft,
            &mut host
        ));
        assert!(host.steps.is_empty());
    }
}
