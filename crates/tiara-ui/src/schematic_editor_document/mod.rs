//! Iced state for the recovered Schematic Editor document commands.
//!
//! These are the handlers that act on the open schematic as a whole — drawing
//! it, zooming to it, closing it, entering a macro inside it — together with
//! the tool-bar buttons that drop a menu and the window bookkeeping around
//! them.

/// The form the recovered handlers belong to.
pub const FORM_RESOURCE: &str = "SchematicEditor";

/// The recovered component id that stands for a macro.
pub const MACRO_COMPONENT_ID: i32 = 0x39;

/// The recovered `mrYes` modal result the two confirming dialogs test for.
pub const CONFIRMED_RESULT: i32 = 6;

/// The recovered show command that restores a minimized window.
pub const RESTORE_SHOW_COMMAND: i32 = 9;

/// How much wider than the panel the recovered dock preview is drawn.
pub const DOCK_PREVIEW_MARGIN: i32 = 100;

/// The annotation flags the recovered draw and measure calls both carry.
///
/// The same seven values are passed to the paint routine and to the routine
/// that measures the document for Zoom All, which is why zooming to fit takes
/// the labels into account rather than only the parts.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
#[allow(clippy::struct_excessive_bools)]
pub struct DrawFlags {
    pub labels: bool,
    pub values: bool,
    pub tolerances: bool,
    pub units: bool,
    pub node_numbers: bool,
    pub package_numbers: bool,
}

pub trait EditorPaintHost {
    /// Reports whether a document view is open.
    fn view_ready(&mut self) -> bool;

    /// The annotation flags in force.
    fn draw_flags(&mut self) -> DrawFlags;

    /// Prepares the view for a repaint.
    fn begin_paint(&mut self);

    /// Draws the document with the given annotations.
    fn draw_document(&mut self, flags: DrawFlags);

    /// Reports whether a command currently occupies the editor's command slot.
    fn command_running(&mut self) -> bool;

    /// Lets the running command draw over the document.
    fn draw_command(&mut self);
}

/// Implements Ghidra function `FUN_01c68030` at `0x01C68030`.
///
/// Handles `EditorPanel.SchEditBox.OnPaint`.
///
/// Draws the schematic and then lets the running command draw on top.
///
/// The command draws last and outside the document check, so a half-drawn wire
/// still appears over an editor with no document open — which is what keeps the
/// rubber band visible while the canvas is otherwise empty.
pub fn paint_editor(host: &mut impl EditorPaintHost) {
    if host.view_ready() {
        host.begin_paint();
        let flags = host.draw_flags();
        host.draw_document(flags);
    }

    if host.command_running() {
        host.draw_command();
    }
}

pub trait ZoomAllHost {
    /// Reports whether a document view is open.
    fn view_ready(&mut self) -> bool;

    /// The annotation flags in force.
    fn draw_flags(&mut self) -> DrawFlags;

    /// Measures the document with the given annotations.
    fn measure_document(&mut self, flags: DrawFlags) -> (i32, i32, i32, i32);

    /// Zooms so the given rectangle fills the canvas.
    fn zoom_to_rect(&mut self, rect: (i32, i32, i32, i32));
}

/// Implements Ghidra function `FUN_01c75310` at `0x01C75310`.
///
/// Handles `MainMenu.View.Zoom.ZoomAll.OnClick` ("A&ll").
///
/// Zooms so everything drawn fits the canvas.
///
/// The measurement carries the same annotation flags the paint routine does, so
/// switching labels on can change what Zoom All settles on — the extent is what
/// is *drawn*, not just where the parts are.
///
/// Returns whether the zoom ran.
pub fn zoom_all(host: &mut impl ZoomAllHost) -> bool {
    if !host.view_ready() {
        return false;
    }

    let flags = host.draw_flags();
    let rect = host.measure_document(flags);
    host.zoom_to_rect(rect);
    true
}

pub trait CutHost {
    /// Reports whether the selection is a component backed by editable code
    /// whose editor is open.
    fn code_editor_target(&mut self) -> bool;

    /// Cuts from the code editor.
    fn cut_from_code_editor(&mut self);

    /// Copies the schematic selection.
    fn copy_schematic_selection(&mut self);

    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Deletes the schematic selection.
    fn delete_schematic_selection(&mut self);
}

/// Implements Ghidra function `FUN_01c77b30` at `0x01C77B30`.
///
/// Handles `MainMenu.Edit.Cut.OnClick` ("Cu&t").
///
/// Cuts either the code the user is editing or the schematic selection.
///
/// The schematic path is a copy followed by a delete, and only the delete is
/// guarded — so on a locked editor Cut still fills the clipboard and then
/// leaves the circuit intact. That behaves as Copy, which is preserved here
/// rather than tidied into an all-or-nothing cut.
///
/// Returns whether the code editor took it.
pub fn cut_selection(host: &mut impl CutHost) -> bool {
    if host.code_editor_target() {
        host.cut_from_code_editor();
        return true;
    }

    host.copy_schematic_selection();

    if !host.editing_blocked() {
        host.delete_schematic_selection();
    }
    false
}

pub trait CloseDocumentHost {
    /// Reports whether the editor's settings still match the document's.
    fn settings_unchanged(&mut self) -> bool;

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);

    /// Copies the editor's settings into the document.
    fn store_settings(&mut self);

    /// Closes the document.
    fn close_document(&mut self);

    /// The number of documents still open.
    fn open_document_count(&mut self) -> i32;

    /// Starts a new empty schematic.
    fn new_schematic(&mut self);
}

/// Implements Ghidra function `FUN_01c94450` at `0x01C94450`.
///
/// Handles `MainMenu.mnFile.mnClose.OnClick` ("&Close").
///
/// Closes the open schematic, and opens an empty one if that was the last.
///
/// Settings that differ from the document's own are what mark it changed, so
/// closing after only changing a view option still counts as a modification.
/// The editor is never left with no document at all — closing the last one
/// immediately starts a fresh sheet.
///
/// Returns whether a new schematic was started.
pub fn close_document(host: &mut impl CloseDocumentHost) -> bool {
    if !host.settings_unchanged() {
        host.mark_document_changed();
    }
    host.store_settings();
    host.close_document();

    if host.open_document_count() == 0 {
        host.new_schematic();
        return true;
    }
    false
}

pub trait MacroInsertHost {
    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Runs the macro file chooser, returning the chosen path.
    fn choose_macro_file(&mut self) -> Option<String>;

    /// Reports whether the chooser's "open as read-only" box was ticked.
    fn read_only_requested(&mut self) -> bool;

    /// Remembers the path the next insertion places.
    fn set_pending_macro_path(&mut self, path: &str);

    /// Inserts a macro component.
    fn insert_macro(&mut self, read_only: bool);
}

/// Implements Ghidra function `FUN_01c89ba0` at `0x01C89BA0`.
///
/// Handles `MainMenu.Insert.mnMacro.OnClick` ("&Macro...").
///
/// Chooses a macro file and arms its insertion.
///
/// The chooser's read-only box is carried straight through to the insertion, so
/// a macro opened read-only is placed as a reference rather than as a copy the
/// user can edit in place.
///
/// Returns whether an insertion was armed.
pub fn insert_macro(host: &mut impl MacroInsertHost) -> bool {
    if host.editing_blocked() {
        return false;
    }

    let Some(path) = host.choose_macro_file() else {
        return false;
    };

    let read_only = host.read_only_requested();
    host.set_pending_macro_path(&path);
    host.insert_macro(read_only);
    true
}

pub trait MacroEntryHost {
    /// The object currently selected, if any.
    fn selected_object(&mut self) -> bool;

    /// Reports whether the selection is a macro.
    fn selection_is_macro(&mut self) -> bool;

    /// Reports whether the macro can be opened.
    fn macro_can_be_entered(&mut self) -> bool;

    /// Opens the macro for editing.
    fn enter_macro(&mut self);
}

/// Implements Ghidra function `FUN_01c8d130` at `0x01C8D130`.
///
/// Handles `MainMenu.mnFile.mnOpenMacro.OnClick` and
/// `SchPopup.pmOpenMacro.OnClick` ("Enter Macro").
///
/// Opens the selected macro for editing.
///
/// Three things must hold — something is selected, it is a macro, and that
/// macro is one that can be opened — and the entry is silently inert otherwise
/// rather than explaining which one failed.
///
/// Returns whether the macro was entered.
pub fn enter_macro(host: &mut impl MacroEntryHost) -> bool {
    if !host.selected_object() || !host.selection_is_macro() || !host.macro_can_be_entered() {
        return false;
    }

    host.enter_macro();
    true
}

pub trait DeferredCommandHost {
    /// Reports whether the editor is ready to run the command now.
    fn ready(&mut self) -> bool;

    /// Queues the command to be retried once the editor settles.
    fn retry_later(&mut self);

    /// Runs the command.
    fn run(&mut self);
}

/// Implements Ghidra function `FUN_01c8e780` at `0x01C8E780`.
///
/// Handles `SchPopup.pmFormula.OnClick` and
/// `SchPopupEdison.pmEdisonFormula.OnClick` ("Formula").
///
/// Opens the formula window, waiting for the editor if it is not ready.
///
/// Rather than refusing, the handler re-queues itself to run again later — so
/// choosing Formula while an analysis is finishing opens the window once it
/// has, instead of doing nothing.
///
/// Returns whether the window was opened now.
pub fn open_formula(host: &mut impl DeferredCommandHost) -> bool {
    if !host.ready() {
        host.retry_later();
        return false;
    }

    host.run();
    true
}

pub trait CloudUploadHost {
    /// Reports whether the document is ready to be uploaded.
    fn upload_allowed(&mut self) -> bool;

    /// Asks the user to resolve whatever is blocking the upload.
    ///
    /// Returns whether it was resolved.
    fn resolve_blocker(&mut self) -> bool;

    /// Uploads the document.
    fn upload(&mut self);
}

/// Implements Ghidra function `FUN_01c98460` at `0x01C98460`.
///
/// Handles `MainMenu.mnFile.mnCloud.mnUploadToCloud.OnClick` ("Upload").
///
/// Uploads the schematic, offering to clear whatever is in the way first.
///
/// The recovered check runs the other way round from most guards: when it
/// reports the document is *not* ready the upload goes ahead anyway, and it is
/// the ready case that has to pass a second prompt. That inversion is preserved
/// rather than normalized.
///
/// Returns whether the upload ran.
pub fn upload_to_cloud(host: &mut impl CloudUploadHost) -> bool {
    if host.upload_allowed() && !host.resolve_blocker() {
        return false;
    }

    host.upload();
    true
}

pub trait ToolCloseHost {
    /// Reports whether an open sub-window holds state the close must carry.
    fn has_pending_transfer(&mut self) -> bool;

    /// Hands that state to the selected component before closing.
    fn transfer_pending_state(&mut self);

    /// Closes the document.
    fn close_document(&mut self);
}

/// Implements Ghidra function `FUN_01c98960` at `0x01C98960`.
///
/// Handles `TopToolBar.GeneralTools.ToolClose.OnClick` (hinted
/// "Close (Ctrl+F4)").
///
/// Closes the document, first handing back anything an open sub-window was
/// holding for the selected component.
///
/// Without that step the close would discard work that lives in the sub-window
/// rather than in the schematic.
pub fn close_from_toolbar(host: &mut impl ToolCloseHost) {
    if host.has_pending_transfer() {
        host.transfer_pending_state();
    }
    host.close_document();
}

pub trait NetlistDockHost {
    /// The check state of the `mnDockNetlistEditor` menu entry.
    fn menu_checked(&mut self) -> bool;

    /// Writes the menu entry's check mark.
    fn set_menu_checked(&mut self, checked: bool);

    /// Reports whether the current circuit has a netlist to show.
    fn circuit_has_netlist(&mut self) -> bool;

    /// Docks or undocks the netlist editor.
    fn apply_dock(&mut self, docked: bool, has_netlist: bool);

    /// Re-lays the editor out around the new dock state.
    fn relayout(&mut self, docked: bool);
}

/// Implements Ghidra function `FUN_01c94810` at `0x01C94810`.
///
/// Handles `MainMenu.mnTools.mnDockNetlistEditor.OnClick`
/// ("D&ock Netlist Editor").
///
/// Docks or undocks the netlist editor alongside the schematic.
///
/// The menu entry's check mark is flipped first and everything else follows it,
/// so the new state — not the old one — is what the dock and the re-layout both
/// read.
///
/// Returns whether the netlist editor is now docked.
pub fn toggle_netlist_editor_dock(host: &mut impl NetlistDockHost) -> bool {
    let docked = !host.menu_checked();
    host.set_menu_checked(docked);

    let has_netlist = host.circuit_has_netlist();
    host.apply_dock(docked, has_netlist);
    host.relayout(docked);
    docked
}

/// The tool-bar buttons that drop a menu instead of acting.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MenuButton {
    /// `TopToolBar.EditorTools.sbPower` (hinted "Set power source/sink/loss").
    Power,
    /// `TopToolBar.EditorTools.sbEBooks` (hinted "Electronic Books").
    ElectronicBooks,
    /// `TopToolBar.EditorTools.ToolInteractModeSelect` (hinted "Select
    /// interactive mode").
    InteractiveMode,
}

pub trait MenuButtonHost {
    /// Clears the popup's auto-popup flag so it does not reopen itself.
    fn clear_auto_popup(&mut self, button: MenuButton);

    /// The height of the tool-bar row the drop is measured from.
    fn tool_row_height(&mut self) -> i32;

    /// Converts a point just below the button to screen coordinates.
    fn drop_point(&mut self, button: MenuButton, offset_y: i32) -> (i32, i32);

    /// Drops the menu at one screen point.
    fn popup_at(&mut self, button: MenuButton, at: (i32, i32));
}

/// The gap the recovered handlers leave below the tool-bar row.
pub const MENU_DROP_GAP: i32 = 2;

/// Implements Ghidra functions `FUN_01c7dae0` at `0x01C7DAE0`, `FUN_01ca2020`
/// at `0x01CA2020`, and `FUN_01c898a0` at `0x01C898A0`.
///
/// Drops one tool-bar button's menu just below the tool row.
///
/// All three measure the drop from the *same* button's height rather than from
/// their own, so a button of a different size still drops its menu in line with
/// the rest of the row.
///
/// The auto-popup flag is cleared first, which is what stops the menu reopening
/// the moment it closes.
pub fn show_button_menu(button: MenuButton, host: &mut impl MenuButtonHost) {
    host.clear_auto_popup(button);
    let offset_y = host.tool_row_height() + MENU_DROP_GAP;
    let at = host.drop_point(button, offset_y);
    host.popup_at(button, at);
}

/// The two entries of the Detailed DC submenu.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DetailedDcMode {
    /// `mnDetailedDC.mnDetailedDCAll` ("All"), recovered flag `0`.
    All,
    /// `mnDetailedDC.mnACDCAutotest` ("Autotest"), recovered flag `1`.
    Autotest,
}

pub trait DetailedDcHost {
    /// Runs one detailed DC pass and disposes of its context.
    fn run_detailed_dc(&mut self, mode: DetailedDcMode);
}

/// Implements Ghidra functions `FUN_01ca50f0` at `0x01CA50F0` and
/// `FUN_01ca51d0` at `0x01CA51D0`.
///
/// Runs one detailed DC pass.
///
/// The two entries build the same object with the same arguments and differ in
/// exactly one stack flag, so that flag is the whole difference between
/// checking everything and running the autotest.
pub fn run_detailed_dc(mode: DetailedDcMode, host: &mut impl DetailedDcHost) {
    host.run_detailed_dc(mode);
}

pub trait SpiceCommandHost {
    /// Takes a copy of the settings the dialog may change.
    fn snapshot_settings(&mut self);

    /// Runs the SPICE command dialog, returning its modal result.
    fn show_spice_dialog(&mut self) -> i32;

    /// Applies the SPICE commands to the document.
    fn apply_spice_commands(&mut self);

    /// Puts the snapshot back.
    fn restore_settings(&mut self);
}

/// Implements Ghidra function `FUN_01c90510` at `0x01C90510`.
///
/// Handles `MainMenu.mnAnalysis.mnSpiceCommands.OnClick`
/// ("Add spice commands...").
///
/// Edits the document's SPICE commands.
///
/// The application settings are copied before the dialog and put back
/// afterwards whatever the user did, so the dialog can scribble on them freely
/// and only the document is left changed.
///
/// Returns whether the commands were applied.
pub fn add_spice_commands(host: &mut impl SpiceCommandHost) -> bool {
    host.snapshot_settings();
    let result = host.show_spice_dialog();

    let applied = result == CONFIRMED_RESULT;
    if applied {
        host.apply_spice_commands();
    }

    host.restore_settings();
    applied
}

pub trait MacroWizardHost {
    /// Runs the macro wizard, returning its modal result.
    fn show_macro_wizard(&mut self) -> i32;

    /// The path the wizard produced.
    fn wizard_result_path(&mut self) -> String;

    /// Remembers the path the next insertion places.
    fn set_pending_macro_path(&mut self, path: &str);

    /// Inserts a macro component.
    fn insert_macro(&mut self);

    /// Releases the wizard window.
    fn release_wizard(&mut self);
}

/// Implements Ghidra function `FUN_01c89c60` at `0x01C89C60`.
///
/// Handles `MainMenu.mnTools.mnMacroManager.OnClick` ("New &Macro Wizard...").
///
/// Runs the macro wizard and arms the insertion of whatever it produced.
///
/// A macro built here is armed for placement straight away rather than only
/// written to disk, so the wizard flows into placing the macro instead of
/// ending at a file.
///
/// The wizard window is released whether or not it was confirmed.
///
/// Returns whether an insertion was armed.
pub fn open_macro_wizard(host: &mut impl MacroWizardHost) -> bool {
    let confirmed = host.show_macro_wizard() == CONFIRMED_RESULT;

    if confirmed {
        let path = host.wizard_result_path();
        host.set_pending_macro_path(&path);
        host.insert_macro();
    }

    host.release_wizard();
    confirmed
}

pub trait FootprintEditorHost {
    /// Reports whether the footprint editor already exists.
    fn window_exists(&mut self) -> bool;

    /// Creates the window.
    fn create_window(&mut self);

    /// Loads the document into the new window, reporting whether it could.
    fn load_document(&mut self) -> bool;

    /// Destroys the window again.
    fn destroy_window(&mut self);

    /// Shows the window and brings it forward.
    fn show_window(&mut self);
}

/// Implements Ghidra function `FUN_01c99940` at `0x01C99940`.
///
/// Handles `MainMenu.mnTools.mnPCBTools.mnCompReport.OnClick`
/// ("Footprint Name Editor...").
///
/// Opens the footprint editor, creating it the first time.
///
/// Unlike the other singleton windows this one can fail to start: a document it
/// cannot load leaves the window destroyed again rather than empty on screen,
/// and the next click will try afresh.
///
/// Returns whether the window is showing.
pub fn open_footprint_editor(host: &mut impl FootprintEditorHost) -> bool {
    if !host.window_exists() {
        host.create_window();
        if !host.load_document() {
            host.destroy_window();
            return false;
        }
    }

    host.show_window();
    true
}

pub trait DockPreviewHost {
    /// The panel's own bounds, as left, top, right.
    fn panel_bounds(&mut self) -> (i32, i32, i32);

    /// The panel's height.
    fn panel_height(&mut self) -> i32;

    /// Writes the rectangle the dock preview is drawn in.
    fn set_preview_rect(&mut self, rect: (i32, i32, i32, i32));
}

/// Implements Ghidra function `FUN_01c9bff0` at `0x01C9BFF0`.
///
/// Handles `EditorPanel.pnlLeftDock.OnDockOver`.
///
/// Draws the preview rectangle for something being dragged over the left dock.
///
/// The preview is a hundred pixels wider than the collapsed panel, because that
/// panel is one pixel wide while empty — without the margin the user would be
/// aiming at a hairline.
pub fn dock_over(host: &mut impl DockPreviewHost) {
    let (left, top, right) = host.panel_bounds();
    let height = host.panel_height();
    host.set_preview_rect((left, top, right + DOCK_PREVIEW_MARGIN, top + height));
}

pub trait TaskBarHost {
    /// Finds the task-bar item under a point.
    fn item_at(&mut self, x: i32, y: i32) -> Option<i32>;

    /// The number of items the task bar holds.
    fn item_count(&mut self) -> i32;

    /// Shows one window with a recovered show command.
    fn show_window(&mut self, index: i32, show_command: i32);

    /// Calls the window's recovered virtual slot `+0x258`.
    ///
    /// The recovered symbols do not name the method, so it is carried through
    /// as the second step the handler performs.
    fn notify_window(&mut self, index: i32);
}

/// Implements Ghidra function `FUN_01ca0f00` at `0x01CA0F00`.
///
/// Handles `StatusPanel.ButtonPanel.WindowPanel.TaskBarBox.OnMouseDown`
/// (hinted "Click to activate the appropriate tool window").
///
/// Restores the tool window whose icon was clicked.
///
/// The window is shown with the restore command rather than merely raised, so a
/// tool the user had minimized comes back rather than staying on the task bar.
///
/// Returns the index that was activated.
pub fn taskbar_clicked(x: i32, y: i32, host: &mut impl TaskBarHost) -> Option<i32> {
    let index = host.item_at(x, y)?;
    if index < 0 || index >= host.item_count() {
        return None;
    }

    host.show_window(index, RESTORE_SHOW_COMMAND);
    host.notify_window(index);
    Some(index)
}

pub trait MinimizeHost {
    /// Records that the editor is minimized.
    fn set_minimized(&mut self);

    /// Reports whether the companion window is visible right now.
    fn companion_visible(&mut self) -> bool;

    /// Records whether the companion should be brought back on restore.
    fn set_restore_companion(&mut self, restore: bool);
}

/// Implements Ghidra function `FUN_01ca1360` at `0x01CA1360`.
///
/// Handles `SchematicEditorEvents.OnMinimize`.
///
/// Records what to bring back when the editor is restored.
///
/// Only a companion window that was actually visible is remembered, so
/// minimizing and restoring does not conjure up a window the user had already
/// closed.
pub fn editor_minimized(host: &mut impl MinimizeHost) {
    host.set_minimized();
    let visible = host.companion_visible();
    host.set_restore_companion(visible);
}

/// The message the circuit selector posts when it refuses a tab change.
pub const DESIGN_TOOL_TAB_MESSAGE: &str = "Sched_c.Msg_DesignToolChangeTab";

pub trait CircuitTabHost {
    /// Reports whether the design tool is driving the tab strip.
    fn design_tool_active(&mut self) -> bool;

    /// Posts the design tool's own tab-change message.
    fn post_tab_message(&mut self, message: &str);
}

/// Implements Ghidra function `FUN_01ca2ff0` at `0x01CA2FF0`.
///
/// Handles `CircuitSelector.OnChanging`.
///
/// Decides whether the circuit tab may change.
///
/// While the design tool is driving the tab strip the change is refused and its
/// own message is posted instead, so the tool gets to decide which circuit is
/// shown rather than the tab click.
///
/// Returns whether the tab change may go ahead.
pub fn circuit_tab_changing(host: &mut impl CircuitTabHost) -> bool {
    if !host.design_tool_active() {
        return true;
    }

    host.post_tab_message(DESIGN_TOOL_TAB_MESSAGE);
    false
}

/// The recovered step at which the debugger restart releases the button.
pub const DEBUGGER_RESTART_BEGIN: i32 = 1;

/// The recovered step at which the debugger restart presses it again.
pub const DEBUGGER_RESTART_END: i32 = 4;

pub trait DebuggerRestartHost {
    /// The step the restart sequence is on.
    fn step(&mut self) -> i32;

    fn set_step(&mut self, step: i32);

    /// Presses or releases the `ToolInteractive` button.
    fn set_interactive_button(&mut self, pressed: bool);

    /// Runs the shared interactive-mode command.
    fn apply_interactive_state(&mut self);

    /// Stops the restart timer.
    fn stop_timer(&mut self);
}

/// Implements Ghidra function `FUN_01ca4110` at `0x01CA4110`.
///
/// Handles `RestartDebuggerTimer.OnTimer`.
///
/// Steps the debugger restart sequence forward one tick.
///
/// Restarting means stopping interactive mode and starting it again, and the
/// two have to be several ticks apart — the timer counts from one to four so
/// the stop has finished before the start begins. The counter advances only
/// while it is positive, so tick zero is the idle state.
///
/// Returns the step the sequence is now on.
pub fn restart_debugger_tick(host: &mut impl DebuggerRestartHost) -> i32 {
    let step = host.step();

    if step == DEBUGGER_RESTART_BEGIN {
        host.set_interactive_button(false);
        host.apply_interactive_state();
    } else if step == DEBUGGER_RESTART_END {
        host.set_interactive_button(true);
        host.apply_interactive_state();
        host.set_step(0);
        host.stop_timer();
        return 0;
    }

    if step > 0 {
        host.set_step(step + 1);
        return step + 1;
    }
    step
}

#[cfg(test)]
mod tests {
    use super::*;

    const FLAGS: DrawFlags = DrawFlags {
        labels: true,
        values: true,
        tolerances: false,
        units: false,
        node_numbers: true,
        package_numbers: false,
    };

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum PaintStep {
        Begin,
        Document(DrawFlags),
        Command,
    }

    #[derive(Debug, Default)]
    struct Painter {
        view: bool,
        command: bool,
        steps: Vec<PaintStep>,
    }

    impl EditorPaintHost for Painter {
        fn view_ready(&mut self) -> bool {
            self.view
        }

        fn draw_flags(&mut self) -> DrawFlags {
            FLAGS
        }

        fn begin_paint(&mut self) {
            self.steps.push(PaintStep::Begin);
        }

        fn draw_document(&mut self, flags: DrawFlags) {
            self.steps.push(PaintStep::Document(flags));
        }

        fn command_running(&mut self) -> bool {
            self.command
        }

        fn draw_command(&mut self) {
            self.steps.push(PaintStep::Command);
        }
    }

    #[test]
    fn painting_draws_the_document_then_the_command() {
        let mut host = Painter {
            view: true,
            command: true,
            ..Painter::default()
        };

        paint_editor(&mut host);

        assert_eq!(
            host.steps,
            [
                PaintStep::Begin,
                PaintStep::Document(FLAGS),
                PaintStep::Command
            ]
        );
    }

    #[test]
    fn a_command_still_draws_over_an_empty_editor() {
        let mut host = Painter {
            command: true,
            ..Painter::default()
        };

        paint_editor(&mut host);

        assert_eq!(host.steps, [PaintStep::Command]);
    }

    #[derive(Debug, Default)]
    struct Zoom {
        view: bool,
        measured: Vec<DrawFlags>,
        zoomed: Vec<(i32, i32, i32, i32)>,
    }

    impl ZoomAllHost for Zoom {
        fn view_ready(&mut self) -> bool {
            self.view
        }

        fn draw_flags(&mut self) -> DrawFlags {
            FLAGS
        }

        fn measure_document(&mut self, flags: DrawFlags) -> (i32, i32, i32, i32) {
            self.measured.push(flags);
            (0, 0, 800, 600)
        }

        fn zoom_to_rect(&mut self, rect: (i32, i32, i32, i32)) {
            self.zoomed.push(rect);
        }
    }

    #[test]
    fn zoom_all_measures_with_the_same_flags_the_paint_uses() {
        let mut host = Zoom {
            view: true,
            ..Zoom::default()
        };

        assert!(zoom_all(&mut host));

        assert_eq!(host.measured, [FLAGS]);
        assert_eq!(host.zoomed, [(0, 0, 800, 600)]);
    }

    #[test]
    fn zoom_all_with_no_document_does_nothing() {
        let mut host = Zoom::default();

        assert!(!zoom_all(&mut host));
        assert!(host.zoomed.is_empty());
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum CutStep {
        CodeCut,
        Copy,
        Delete,
    }

    #[derive(Debug, Default)]
    struct Cutter {
        code_target: bool,
        blocked: bool,
        steps: Vec<CutStep>,
    }

    impl CutHost for Cutter {
        fn code_editor_target(&mut self) -> bool {
            self.code_target
        }

        fn cut_from_code_editor(&mut self) {
            self.steps.push(CutStep::CodeCut);
        }

        fn copy_schematic_selection(&mut self) {
            self.steps.push(CutStep::Copy);
        }

        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn delete_schematic_selection(&mut self) {
            self.steps.push(CutStep::Delete);
        }
    }

    #[test]
    fn cutting_the_schematic_copies_then_deletes() {
        let mut host = Cutter::default();

        assert!(!cut_selection(&mut host));

        assert_eq!(host.steps, [CutStep::Copy, CutStep::Delete]);
    }

    #[test]
    fn a_blocked_editor_leaves_cut_behaving_as_copy() {
        let mut host = Cutter {
            blocked: true,
            ..Cutter::default()
        };

        assert!(!cut_selection(&mut host));

        assert_eq!(host.steps, [CutStep::Copy]);
    }

    #[test]
    fn cut_follows_an_open_code_editor() {
        let mut host = Cutter {
            code_target: true,
            ..Cutter::default()
        };

        assert!(cut_selection(&mut host));

        assert_eq!(host.steps, [CutStep::CodeCut]);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum CloseStep {
        Changed,
        Store,
        Close,
        New,
    }

    #[derive(Debug, Default)]
    struct Closer {
        unchanged: bool,
        remaining: i32,
        steps: Vec<CloseStep>,
    }

    impl CloseDocumentHost for Closer {
        fn settings_unchanged(&mut self) -> bool {
            self.unchanged
        }

        fn mark_document_changed(&mut self) {
            self.steps.push(CloseStep::Changed);
        }

        fn store_settings(&mut self) {
            self.steps.push(CloseStep::Store);
        }

        fn close_document(&mut self) {
            self.steps.push(CloseStep::Close);
        }

        fn open_document_count(&mut self) -> i32 {
            self.remaining
        }

        fn new_schematic(&mut self) {
            self.steps.push(CloseStep::New);
        }
    }

    #[test]
    fn closing_the_last_document_starts_a_fresh_one() {
        let mut host = Closer {
            unchanged: true,
            ..Closer::default()
        };

        assert!(close_document(&mut host));

        assert_eq!(
            host.steps,
            [CloseStep::Store, CloseStep::Close, CloseStep::New]
        );
    }

    #[test]
    fn changed_settings_mark_the_document_before_it_closes() {
        let mut host = Closer {
            remaining: 2,
            ..Closer::default()
        };

        assert!(!close_document(&mut host));

        assert_eq!(
            host.steps,
            [CloseStep::Changed, CloseStep::Store, CloseStep::Close]
        );
    }

    #[derive(Debug, Default)]
    struct Macros {
        blocked: bool,
        chosen: Option<String>,
        read_only: bool,
        paths: Vec<String>,
        inserts: Vec<bool>,
    }

    impl MacroInsertHost for Macros {
        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn choose_macro_file(&mut self) -> Option<String> {
            self.chosen.clone()
        }

        fn read_only_requested(&mut self) -> bool {
            self.read_only
        }

        fn set_pending_macro_path(&mut self, path: &str) {
            self.paths.push(path.to_owned());
        }

        fn insert_macro(&mut self, read_only: bool) {
            self.inserts.push(read_only);
        }
    }

    #[test]
    fn a_chosen_macro_carries_its_read_only_box_into_the_insertion() {
        let mut host = Macros {
            chosen: Some(r"C:\macros\opamp.tsm".to_owned()),
            read_only: true,
            ..Macros::default()
        };

        assert!(insert_macro(&mut host));

        assert_eq!(host.paths, [r"C:\macros\opamp.tsm".to_owned()]);
        assert_eq!(host.inserts, [true]);
    }

    #[test]
    fn a_cancelled_macro_chooser_arms_nothing() {
        let mut host = Macros::default();

        assert!(!insert_macro(&mut host));
        assert!(host.inserts.is_empty());
    }

    #[derive(Debug, Default)]
    struct Entry {
        selected: bool,
        is_macro: bool,
        enterable: bool,
        entered: usize,
    }

    impl MacroEntryHost for Entry {
        fn selected_object(&mut self) -> bool {
            self.selected
        }

        fn selection_is_macro(&mut self) -> bool {
            self.is_macro
        }

        fn macro_can_be_entered(&mut self) -> bool {
            self.enterable
        }

        fn enter_macro(&mut self) {
            self.entered += 1;
        }
    }

    #[test]
    fn entering_a_macro_needs_all_three_conditions() {
        let mut ready = Entry {
            selected: true,
            is_macro: true,
            enterable: true,
            ..Entry::default()
        };
        assert!(enter_macro(&mut ready));
        assert_eq!(ready.entered, 1);

        for host in [
            &mut Entry {
                is_macro: true,
                enterable: true,
                ..Entry::default()
            },
            &mut Entry {
                selected: true,
                enterable: true,
                ..Entry::default()
            },
            &mut Entry {
                selected: true,
                is_macro: true,
                ..Entry::default()
            },
        ] {
            assert!(!enter_macro(host));
            assert_eq!(host.entered, 0);
        }
    }

    #[derive(Debug, Default)]
    struct Deferred {
        ready: bool,
        retries: usize,
        runs: usize,
    }

    impl DeferredCommandHost for Deferred {
        fn ready(&mut self) -> bool {
            self.ready
        }

        fn retry_later(&mut self) {
            self.retries += 1;
        }

        fn run(&mut self) {
            self.runs += 1;
        }
    }

    #[test]
    fn a_busy_editor_queues_the_formula_window_instead_of_refusing() {
        let mut busy = Deferred::default();
        assert!(!open_formula(&mut busy));
        assert_eq!(busy.retries, 1);
        assert_eq!(busy.runs, 0);

        let mut ready = Deferred {
            ready: true,
            ..Deferred::default()
        };
        assert!(open_formula(&mut ready));
        assert_eq!(ready.runs, 1);
    }

    #[derive(Debug, Default)]
    struct Upload {
        allowed: bool,
        resolved: bool,
        uploads: usize,
    }

    impl CloudUploadHost for Upload {
        fn upload_allowed(&mut self) -> bool {
            self.allowed
        }

        fn resolve_blocker(&mut self) -> bool {
            self.resolved
        }

        fn upload(&mut self) {
            self.uploads += 1;
        }
    }

    #[test]
    fn the_recovered_upload_check_runs_the_other_way_round() {
        let mut straight_through = Upload::default();
        assert!(upload_to_cloud(&mut straight_through));
        assert_eq!(straight_through.uploads, 1);

        let mut blocked = Upload {
            allowed: true,
            ..Upload::default()
        };
        assert!(!upload_to_cloud(&mut blocked));
        assert_eq!(blocked.uploads, 0);

        let mut resolved = Upload {
            allowed: true,
            resolved: true,
            ..Upload::default()
        };
        assert!(upload_to_cloud(&mut resolved));
        assert_eq!(resolved.uploads, 1);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum ToolCloseStep {
        Transfer,
        Close,
    }

    #[derive(Debug, Default)]
    struct ToolClose {
        pending: bool,
        steps: Vec<ToolCloseStep>,
    }

    impl ToolCloseHost for ToolClose {
        fn has_pending_transfer(&mut self) -> bool {
            self.pending
        }

        fn transfer_pending_state(&mut self) {
            self.steps.push(ToolCloseStep::Transfer);
        }

        fn close_document(&mut self) {
            self.steps.push(ToolCloseStep::Close);
        }
    }

    #[test]
    fn the_toolbar_close_hands_back_pending_state_first() {
        let mut host = ToolClose {
            pending: true,
            ..ToolClose::default()
        };

        close_from_toolbar(&mut host);

        assert_eq!(host.steps, [ToolCloseStep::Transfer, ToolCloseStep::Close]);
    }

    #[test]
    fn with_nothing_pending_the_toolbar_close_only_closes() {
        let mut host = ToolClose::default();

        close_from_toolbar(&mut host);

        assert_eq!(host.steps, [ToolCloseStep::Close]);
    }

    #[derive(Debug, Default)]
    struct NetlistDock {
        checked: bool,
        has_netlist: bool,
        docks: Vec<(bool, bool)>,
        layouts: Vec<bool>,
    }

    impl NetlistDockHost for NetlistDock {
        fn menu_checked(&mut self) -> bool {
            self.checked
        }

        fn set_menu_checked(&mut self, checked: bool) {
            self.checked = checked;
        }

        fn circuit_has_netlist(&mut self) -> bool {
            self.has_netlist
        }

        fn apply_dock(&mut self, docked: bool, has_netlist: bool) {
            self.docks.push((docked, has_netlist));
        }

        fn relayout(&mut self, docked: bool) {
            self.layouts.push(docked);
        }
    }

    #[test]
    fn the_dock_follows_the_new_check_mark_not_the_old_one() {
        let mut host = NetlistDock {
            has_netlist: true,
            ..NetlistDock::default()
        };

        assert!(toggle_netlist_editor_dock(&mut host));
        assert!(!toggle_netlist_editor_dock(&mut host));

        assert_eq!(host.docks, [(true, true), (false, true)]);
        assert_eq!(host.layouts, [true, false]);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum ButtonStep {
        Clear(MenuButton),
        Popup(MenuButton, (i32, i32)),
    }

    #[derive(Debug, Default)]
    struct Buttons {
        steps: Vec<ButtonStep>,
    }

    impl MenuButtonHost for Buttons {
        fn clear_auto_popup(&mut self, button: MenuButton) {
            self.steps.push(ButtonStep::Clear(button));
        }

        fn tool_row_height(&mut self) -> i32 {
            24
        }

        fn drop_point(&mut self, _button: MenuButton, offset_y: i32) -> (i32, i32) {
            (100, 200 + offset_y)
        }

        fn popup_at(&mut self, button: MenuButton, at: (i32, i32)) {
            self.steps.push(ButtonStep::Popup(button, at));
        }
    }

    #[test]
    fn every_menu_button_drops_below_the_same_tool_row() {
        for button in [
            MenuButton::Power,
            MenuButton::ElectronicBooks,
            MenuButton::InteractiveMode,
        ] {
            let mut host = Buttons::default();

            show_button_menu(button, &mut host);

            assert_eq!(
                host.steps,
                [
                    ButtonStep::Clear(button),
                    ButtonStep::Popup(button, (100, 226)),
                ]
            );
        }
    }

    #[derive(Debug, Default)]
    struct DetailedDc {
        run: Vec<DetailedDcMode>,
    }

    impl DetailedDcHost for DetailedDc {
        fn run_detailed_dc(&mut self, mode: DetailedDcMode) {
            self.run.push(mode);
        }
    }

    #[test]
    fn the_two_detailed_dc_entries_differ_only_in_their_flag() {
        let mut host = DetailedDc::default();

        run_detailed_dc(DetailedDcMode::All, &mut host);
        run_detailed_dc(DetailedDcMode::Autotest, &mut host);

        assert_eq!(host.run, [DetailedDcMode::All, DetailedDcMode::Autotest]);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum SpiceStep {
        Snapshot,
        Apply,
        Restore,
    }

    #[derive(Debug, Default)]
    struct Spice {
        result: i32,
        steps: Vec<SpiceStep>,
    }

    impl SpiceCommandHost for Spice {
        fn snapshot_settings(&mut self) {
            self.steps.push(SpiceStep::Snapshot);
        }

        fn show_spice_dialog(&mut self) -> i32 {
            self.result
        }

        fn apply_spice_commands(&mut self) {
            self.steps.push(SpiceStep::Apply);
        }

        fn restore_settings(&mut self) {
            self.steps.push(SpiceStep::Restore);
        }
    }

    #[test]
    fn the_spice_dialog_restores_the_settings_either_way() {
        let mut confirmed = Spice {
            result: CONFIRMED_RESULT,
            ..Spice::default()
        };
        assert!(add_spice_commands(&mut confirmed));
        assert_eq!(
            confirmed.steps,
            [SpiceStep::Snapshot, SpiceStep::Apply, SpiceStep::Restore]
        );

        let mut cancelled = Spice::default();
        assert!(!add_spice_commands(&mut cancelled));
        assert_eq!(cancelled.steps, [SpiceStep::Snapshot, SpiceStep::Restore]);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum WizardStep {
        Path,
        Insert,
        Release,
    }

    #[derive(Debug, Default)]
    struct Wizard {
        result: i32,
        steps: Vec<WizardStep>,
    }

    impl MacroWizardHost for Wizard {
        fn show_macro_wizard(&mut self) -> i32 {
            self.result
        }

        fn wizard_result_path(&mut self) -> String {
            r"C:\macros\new.tsm".to_owned()
        }

        fn set_pending_macro_path(&mut self, _path: &str) {
            self.steps.push(WizardStep::Path);
        }

        fn insert_macro(&mut self) {
            self.steps.push(WizardStep::Insert);
        }

        fn release_wizard(&mut self) {
            self.steps.push(WizardStep::Release);
        }
    }

    #[test]
    fn a_confirmed_wizard_arms_the_macro_it_built() {
        let mut host = Wizard {
            result: CONFIRMED_RESULT,
            ..Wizard::default()
        };

        assert!(open_macro_wizard(&mut host));

        assert_eq!(
            host.steps,
            [WizardStep::Path, WizardStep::Insert, WizardStep::Release]
        );
    }

    #[test]
    fn the_wizard_window_is_released_even_when_cancelled() {
        let mut host = Wizard::default();

        assert!(!open_macro_wizard(&mut host));

        assert_eq!(host.steps, [WizardStep::Release]);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum FootprintStep {
        Create,
        Destroy,
        Show,
    }

    #[derive(Debug, Default)]
    struct Footprint {
        exists: bool,
        loads: bool,
        steps: Vec<FootprintStep>,
    }

    impl FootprintEditorHost for Footprint {
        fn window_exists(&mut self) -> bool {
            self.exists
        }

        fn create_window(&mut self) {
            self.exists = true;
            self.steps.push(FootprintStep::Create);
        }

        fn load_document(&mut self) -> bool {
            self.loads
        }

        fn destroy_window(&mut self) {
            self.exists = false;
            self.steps.push(FootprintStep::Destroy);
        }

        fn show_window(&mut self) {
            self.steps.push(FootprintStep::Show);
        }
    }

    #[test]
    fn a_footprint_editor_that_cannot_load_is_destroyed_again() {
        let mut host = Footprint::default();

        assert!(!open_footprint_editor(&mut host));

        assert_eq!(host.steps, [FootprintStep::Create, FootprintStep::Destroy]);
        assert!(!host.exists);
    }

    #[test]
    fn a_footprint_editor_is_created_once_then_reshown() {
        let mut host = Footprint {
            loads: true,
            ..Footprint::default()
        };

        assert!(open_footprint_editor(&mut host));
        assert!(open_footprint_editor(&mut host));

        assert_eq!(
            host.steps,
            [
                FootprintStep::Create,
                FootprintStep::Show,
                FootprintStep::Show
            ]
        );
    }

    #[derive(Debug, Default)]
    struct DockPreview {
        rects: Vec<(i32, i32, i32, i32)>,
    }

    impl DockPreviewHost for DockPreview {
        fn panel_bounds(&mut self) -> (i32, i32, i32) {
            (10, 20, 11)
        }

        fn panel_height(&mut self) -> i32 {
            400
        }

        fn set_preview_rect(&mut self, rect: (i32, i32, i32, i32)) {
            self.rects.push(rect);
        }
    }

    #[test]
    fn the_dock_preview_is_wider_than_the_collapsed_panel() {
        let mut host = DockPreview::default();

        dock_over(&mut host);

        assert_eq!(host.rects, [(10, 20, 111, 420)]);
    }

    #[derive(Debug, Default)]
    struct TaskBar {
        hit: Option<i32>,
        count: i32,
        shown: Vec<(i32, i32)>,
        notified: Vec<i32>,
    }

    impl TaskBarHost for TaskBar {
        fn item_at(&mut self, _x: i32, _y: i32) -> Option<i32> {
            self.hit
        }

        fn item_count(&mut self) -> i32 {
            self.count
        }

        fn show_window(&mut self, index: i32, show_command: i32) {
            self.shown.push((index, show_command));
        }

        fn notify_window(&mut self, index: i32) {
            self.notified.push(index);
        }
    }

    #[test]
    fn clicking_a_task_bar_icon_restores_that_window() {
        let mut host = TaskBar {
            hit: Some(2),
            count: 4,
            ..TaskBar::default()
        };

        assert_eq!(taskbar_clicked(30, 8, &mut host), Some(2));

        assert_eq!(host.shown, [(2, RESTORE_SHOW_COMMAND)]);
        assert_eq!(host.notified, [2]);
    }

    #[test]
    fn a_click_between_icons_restores_nothing() {
        let mut host = TaskBar {
            count: 4,
            ..TaskBar::default()
        };

        assert_eq!(taskbar_clicked(30, 8, &mut host), None);
        assert!(host.shown.is_empty());
    }

    #[test]
    fn an_index_past_the_end_is_refused() {
        let mut host = TaskBar {
            hit: Some(9),
            count: 4,
            ..TaskBar::default()
        };

        assert_eq!(taskbar_clicked(30, 8, &mut host), None);
        assert!(host.shown.is_empty());
    }

    #[derive(Debug, Default)]
    struct Minimize {
        visible: bool,
        minimized: usize,
        restore: Vec<bool>,
    }

    impl MinimizeHost for Minimize {
        fn set_minimized(&mut self) {
            self.minimized += 1;
        }

        fn companion_visible(&mut self) -> bool {
            self.visible
        }

        fn set_restore_companion(&mut self, restore: bool) {
            self.restore.push(restore);
        }
    }

    #[test]
    fn only_a_visible_companion_is_remembered() {
        let mut shown = Minimize {
            visible: true,
            ..Minimize::default()
        };
        editor_minimized(&mut shown);
        assert_eq!(shown.restore, [true]);

        let mut hidden = Minimize::default();
        editor_minimized(&mut hidden);
        assert_eq!(hidden.restore, [false]);
        assert_eq!(hidden.minimized, 1);
    }

    #[derive(Debug, Default)]
    struct Tabs {
        design_tool: bool,
        posted: Vec<String>,
    }

    impl CircuitTabHost for Tabs {
        fn design_tool_active(&mut self) -> bool {
            self.design_tool
        }

        fn post_tab_message(&mut self, message: &str) {
            self.posted.push(message.to_owned());
        }
    }

    #[test]
    fn the_design_tool_takes_the_tab_change_for_itself() {
        let mut driven = Tabs {
            design_tool: true,
            ..Tabs::default()
        };
        assert!(!circuit_tab_changing(&mut driven));
        assert_eq!(driven.posted, [DESIGN_TOOL_TAB_MESSAGE.to_owned()]);

        let mut free = Tabs::default();
        assert!(circuit_tab_changing(&mut free));
        assert!(free.posted.is_empty());
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum RestartStep {
        Button(bool),
        Apply,
        Stop,
    }

    #[derive(Debug, Default)]
    struct Restart {
        step: i32,
        steps: Vec<RestartStep>,
    }

    impl DebuggerRestartHost for Restart {
        fn step(&mut self) -> i32 {
            self.step
        }

        fn set_step(&mut self, step: i32) {
            self.step = step;
        }

        fn set_interactive_button(&mut self, pressed: bool) {
            self.steps.push(RestartStep::Button(pressed));
        }

        fn apply_interactive_state(&mut self) {
            self.steps.push(RestartStep::Apply);
        }

        fn stop_timer(&mut self) {
            self.steps.push(RestartStep::Stop);
        }
    }

    #[test]
    fn the_restart_sequence_stops_then_starts_four_ticks_apart() {
        let mut host = Restart {
            step: DEBUGGER_RESTART_BEGIN,
            ..Restart::default()
        };

        assert_eq!(restart_debugger_tick(&mut host), 2);
        assert_eq!(restart_debugger_tick(&mut host), 3);
        assert_eq!(restart_debugger_tick(&mut host), 4);
        assert_eq!(restart_debugger_tick(&mut host), 0);

        assert_eq!(
            host.steps,
            [
                RestartStep::Button(false),
                RestartStep::Apply,
                RestartStep::Button(true),
                RestartStep::Apply,
                RestartStep::Stop,
            ]
        );
    }

    #[test]
    fn an_idle_timer_changes_nothing() {
        let mut host = Restart::default();

        assert_eq!(restart_debugger_tick(&mut host), 0);
        assert!(host.steps.is_empty());
    }
}

/// The PCB tool chains the File menu's directory submenu switches between.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PcbToolchain {
    /// `mnFile.pcbdirectory1.ORCADPCB1` ("ORCAD").
    Orcad,
    /// `mnFile.pcbdirectory1.PCADPCB1` ("PCAD").
    Pcad,
    /// `mnFile.pcbdirectory1.PROTELPCB1` ("PROTEL").
    Protel,
    /// `mnFile.pcbdirectory1.REDACPCB1` ("REDAC").
    Redac,
    /// `mnFile.pcbdirectory1.TANGOPCB1` ("TANGO").
    Tango,
    /// `mnFile.pcbdirectory1.EDSPCB1` ("EDS").
    ///
    /// The only one of the eight whose name is a data reference rather than a
    /// literal in the recovered bytes. `EDS` follows from the marker file the
    /// other seven name themselves after, and from the menu caption.
    Eds,
    /// `mnFile.pcbdirectory1.TINAPCB1` ("TINA").
    Tina,
    /// `mnFile.pcbdirectory1.AltiumPCBProject1` ("ALTIUM").
    ///
    /// The one tool chain the Export menu labels as a project rather than a
    /// netlist.
    Altium,
}

impl PcbToolchain {
    /// The recovered directory name, which is also the value written to the
    /// settings file.
    #[must_use]
    pub const fn name(self) -> &'static str {
        match self {
            Self::Orcad => "ORCAD",
            Self::Pcad => "PCAD",
            Self::Protel => "PROTEL",
            Self::Redac => "REDAC",
            Self::Tango => "TANGO",
            Self::Eds => "EDS",
            Self::Tina => "TINA",
            Self::Altium => "ALTIUM",
        }
    }

    /// The recovered marker file name, leading separator included.
    #[must_use]
    pub const fn marker_file(self) -> &'static str {
        match self {
            Self::Orcad => r"\ORCAD.PCB",
            Self::Pcad => r"\PCAD.PCB",
            Self::Protel => r"\PROTEL.PCB",
            Self::Redac => r"\REDAC.PCB",
            Self::Tango => r"\TANGO.PCB",
            Self::Eds => r"\EDS.PCB",
            Self::Tina => r"\TINA.PCB",
            Self::Altium => r"\ALTIUM.PCB",
        }
    }
}

/// The settings section the PCB directory is recorded in.
pub const PCB_SETTINGS_SECTION: &str = "Schematic Editor";

/// The settings key the PCB directory is recorded under.
pub const PCB_SETTINGS_KEY: &str = "PCBRootDir";

pub trait PcbDirectoryHost {
    /// Closes whatever footprint set is currently loaded.
    fn close_current_library(&mut self);

    /// Records the marker file name and tool-chain name in the globals the rest
    /// of the build reads them from.
    fn set_current_toolchain(&mut self, marker_file: &str, name: &str);

    /// Reports whether the marker file exists under the PCB root.
    fn marker_exists(&mut self, marker_file: &str) -> bool;

    /// Creates the directory the marker file would live in.
    fn create_directory(&mut self, marker_file: &str);

    /// Ticks the tool chain's menu entry.
    fn check_menu_entry(&mut self, toolchain: PcbToolchain);

    /// Writes the choice to the settings file.
    fn write_setting(&mut self, section: &str, key: &str, value: &str);

    /// Reloads the footprint set for the new tool chain.
    fn reload_library(&mut self);
}

/// Switches the PCB footprint directory to one tool chain.
///
/// Implements Ghidra functions `FUN_01c94cb0` at `0x01C94CB0`, `FUN_01c94e90`
/// at `0x01C94E90`, `FUN_01c95070` at `0x01C95070`, `FUN_01c95250` at
/// `0x01C95250`, `FUN_01c95430` at `0x01C95430`, `FUN_01c95610` at
/// `0x01C95610`, `FUN_01c957f0` at `0x01C957F0`, and `FUN_01c959d0` at
/// `0x01C959D0`.
///
/// All eight entries are the same routine with three literals swapped. The
/// marker file is what the directory is recognized by, so a root without it is
/// created rather than reported missing — choosing a tool chain for the first
/// time sets its directory up.
///
/// The choice is written to the settings file before the library reloads, so it
/// survives a crash during the reload.
///
/// Note that no entry unticks the others: only the chosen one is written, and
/// the rest are left as the menu had them.
pub fn select_pcb_toolchain(toolchain: PcbToolchain, host: &mut impl PcbDirectoryHost) {
    host.close_current_library();

    let marker = toolchain.marker_file();
    host.set_current_toolchain(marker, toolchain.name());

    if !host.marker_exists(marker) {
        host.create_directory(marker);
    }

    host.check_menu_entry(toolchain);
    host.write_setting(PCB_SETTINGS_SECTION, PCB_SETTINGS_KEY, toolchain.name());
    host.reload_library();
}

/// The two editors that rebuild the component rack when they are accepted.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RackEditor {
    /// `mnTools.mnComponentRackEditor` ("&Component Bar Editor...").
    ComponentBar,
    /// `mnTools.mnPCBTools.mnPCBOnlyCompWizard` ("PCB Component Wizard...").
    PcbComponentWizard,
}

pub trait RackEditorHost {
    /// Runs one editor, reporting whether it was accepted.
    fn show_editor(&mut self, editor: RackEditor) -> bool;

    /// Invalidates the schematic canvas.
    fn invalidate_canvas(&mut self);

    /// Shows or clears the busy cursor.
    fn set_busy_cursor(&mut self, busy: bool);

    /// Discards and reloads the component symbol images.
    fn reload_symbol_images(&mut self);

    /// Rebuilds the component rack.
    fn rebuild_rack(&mut self);
}

/// Implements Ghidra functions `FUN_01c8f170` at `0x01C8F170` and
/// `FUN_01c9aec0` at `0x01C9AEC0`.
///
/// Runs one of the two component editors and rebuilds the rack if it was
/// accepted.
///
/// Both editors can change which components exist, so the symbol images are
/// discarded and read back before the rack is rebuilt — otherwise the rack
/// would show the new component list against the old pictures.
///
/// Returns whether the rebuild ran.
pub fn run_rack_editor(editor: RackEditor, host: &mut impl RackEditorHost) -> bool {
    if !host.show_editor(editor) {
        return false;
    }

    host.invalidate_canvas();
    host.set_busy_cursor(true);
    host.reload_symbol_images();
    host.rebuild_rack();
    host.set_busy_cursor(false);
    true
}

pub trait CloseAllHost {
    /// Reports whether the editor's settings still match the document's.
    fn settings_unchanged(&mut self) -> bool;

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);

    /// Copies the editor's settings into the document.
    fn store_settings(&mut self);

    /// The number of documents still open.
    fn open_document_count(&mut self) -> i32;

    /// Closes the next document, reporting whether the user cancelled.
    fn close_next(&mut self) -> bool;

    /// Starts a new empty schematic.
    fn new_schematic(&mut self);
}

/// Implements Ghidra function `FUN_01c94500` at `0x01C94500`.
///
/// Handles `MainMenu.mnFile.mnCloseAll.OnClick` ("C&lose All").
///
/// Closes every open schematic, stopping if the user cancels one of them.
///
/// The loop reads the remaining count each time round rather than counting
/// down, so a close that opens further documents — or one that cancels — is
/// handled without the loop losing track. As with the single close, the editor
/// is never left with nothing open.
///
/// Returns whether a new schematic was started.
pub fn close_all_documents(host: &mut impl CloseAllHost) -> bool {
    if !host.settings_unchanged() {
        host.mark_document_changed();
    }
    host.store_settings();

    while host.open_document_count() > 0 {
        if host.close_next() {
            break;
        }
    }

    if host.open_document_count() == 0 {
        host.new_schematic();
        return true;
    }
    false
}

/// The recovered confirmation shown before a block's lock is cleared.
pub const CLEAR_LOCK_PROMPT: &str =
    "Are you sure you want to clear\rthe lock on the selected block?";

pub trait ClearLockHost {
    /// Reports whether the selection is a locked block whose lock can be
    /// cleared.
    fn selection_is_locked_block(&mut self) -> bool;

    /// Asks the recovered confirmation, returning its modal result.
    fn confirm(&mut self, prompt: &str) -> i32;

    /// Clears the lock.
    fn clear_lock(&mut self);

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);
}

/// Implements Ghidra function `FUN_01c93bf0` at `0x01C93BF0`.
///
/// Handles `MainMenu.Edit.Sharing1.mnClearLock.OnClick` ("Clear lock").
///
/// Clears the sharing lock on the selected block, after confirming.
///
/// The prompt carries a carriage return rather than a newline, which is the
/// Delphi message-box line break; it is preserved exactly so the dialog wraps
/// where the recovered build wraps it.
///
/// Returns whether the lock was cleared.
pub fn clear_block_lock(host: &mut impl ClearLockHost) -> bool {
    if !host.selection_is_locked_block() {
        return false;
    }

    if host.confirm(CLEAR_LOCK_PROMPT) != CONFIRMED_RESULT {
        return false;
    }

    host.clear_lock();
    host.mark_document_changed();
    true
}

pub trait InteractiveTimerHost {
    /// Reports whether a document view is open.
    fn view_ready(&mut self) -> bool;

    /// The number of objects in the document.
    fn object_count(&mut self) -> i32;

    /// Advances one object's interactive state.
    fn step_object(&mut self, index: i32);
}

/// Implements Ghidra function `FUN_01c87c00` at `0x01C87C00`.
///
/// Handles `InteractiveTimer.OnTimer`.
///
/// Advances every object's interactive state by one tick.
///
/// The whole document is walked on every tick rather than a list of live parts,
/// so the cost of interactive mode scales with the circuit rather than with how
/// much of it is animated.
///
/// Returns how many objects were stepped.
pub fn interactive_timer_tick(host: &mut impl InteractiveTimerHost) -> i32 {
    if !host.view_ready() {
        return 0;
    }

    let count = host.object_count();
    for index in 0..count {
        host.step_object(index);
    }
    count
}

pub trait SelectAllHost {
    /// Reports whether the selection is a component backed by editable code
    /// whose editor is open.
    fn code_editor_target(&mut self) -> bool;

    /// Selects everything in the code editor.
    fn select_all_in_code_editor(&mut self);

    /// The number of objects in the document.
    fn object_count(&mut self) -> i32;

    /// Selects one object.
    fn select_object(&mut self, index: i32);
}

/// Implements Ghidra function `FUN_01c76f20` at `0x01C76F20`.
///
/// Handles `MainMenu.Edit.mnSelectAll.OnClick` ("Select A&ll").
///
/// Selects everything — in the code editor if one is open on the selection,
/// otherwise in the schematic.
///
/// The schematic path runs no edit guard, so Select All works on a locked
/// editor: selecting is not an edit.
///
/// Returns whether the code editor took it.
pub fn select_all(host: &mut impl SelectAllHost) -> bool {
    if host.code_editor_target() {
        host.select_all_in_code_editor();
        return true;
    }

    let count = host.object_count();
    for index in 0..count {
        host.select_object(index);
    }
    false
}

pub trait ZoomNormalHost {
    /// Reports whether a document view with a drawing surface is open.
    fn view_ready(&mut self) -> bool;

    /// The size of the visible area, as width and height.
    fn viewport_size(&mut self) -> (i32, i32);

    /// The document's current origin, as x and y.
    fn document_origin(&mut self) -> (i32, i32);

    /// Zooms so the given rectangle fills the canvas.
    fn zoom_to_rect(&mut self, rect: (i32, i32, i32, i32));
}

/// Implements Ghidra function `FUN_01c75250` at `0x01C75250`.
///
/// Handles `MainMenu.View.Zoom.ZoomNormal.OnClick` ("&Normal").
///
/// Returns the canvas to its unscaled size, keeping the middle of the view
/// where it was.
///
/// The new rectangle is centred on the old one rather than anchored at the
/// corner, so zooming back to normal keeps whatever the user was looking at on
/// screen instead of jumping to the top left.
///
/// Returns whether the zoom ran.
pub fn zoom_normal(host: &mut impl ZoomNormalHost) -> bool {
    if !host.view_ready() {
        return false;
    }

    let (width, height) = host.viewport_size();
    let (x, y) = host.document_origin();

    let left = ((x + x) - width) / 2;
    let top = ((y + y) - height) / 2;
    host.zoom_to_rect((left, top, left + width, top + height));
    true
}

pub trait InteractiveProbeHost {
    /// Reports whether a command currently occupies the editor's command slot.
    fn command_running(&mut self) -> bool;

    /// Creates the probe window bound to the current document.
    fn create_probe_window(&mut self);

    /// Puts the probe window into the mode matching the interactive selection.
    fn set_probe_mode(&mut self, mode: u8);

    /// Shows the probe window.
    fn show_probe_window(&mut self);

    /// Cancels the running command and returns to the editing tool.
    fn cancel_active_command(&mut self);

    /// Constructs and installs the probe interaction command.
    fn install_probe_command(&mut self);

    /// The interactive mode currently selected.
    fn interactive_mode(&mut self) -> u8;
}

/// The probe mode used for every interactive mode past the second.
pub const PROBE_MODE_DEFAULT: u8 = 2;

/// Implements Ghidra function `FUN_01c9c130` at `0x01C9C130`.
///
/// Handles `TopToolBar.EditorTools.ToolIntProbe.OnClick` (hinted "Interactive
/// probe").
///
/// Opens the interactive probe and arms its canvas tool.
///
/// The whole handler is skipped while any command is running, so the probe
/// cannot be armed on top of a half-drawn wire — it is the one tool that
/// refuses rather than replacing what is there.
///
/// The probe window's mode follows the interactive mode, but only the first two
/// map one-to-one: every mode past the second uses the same probe mode.
///
/// Returns whether the probe was opened.
pub fn open_interactive_probe(host: &mut impl InteractiveProbeHost) -> bool {
    if host.command_running() {
        return false;
    }

    host.create_probe_window();

    let mode = match host.interactive_mode() {
        0 => 0,
        1 => 1,
        _ => PROBE_MODE_DEFAULT,
    };
    host.set_probe_mode(mode);
    host.show_probe_window();

    host.cancel_active_command();
    host.install_probe_command();
    true
}

pub trait RackReleaseHost {
    /// Reports whether the running command is the rack's own class.
    fn rack_command_running(&mut self) -> bool;

    /// Converts a rack point to the canvas's own coordinates.
    fn to_canvas_point(&mut self, x: i32, y: i32) -> (i32, i32);

    /// Posts a synthetic button-up to the canvas at one point.
    fn post_canvas_release(&mut self, button: u16, at: (i32, i32));
}

/// The message the recovered handler posts to the canvas.
pub const CANVAS_RELEASE_MESSAGE: u16 = 0x0202;

/// Implements Ghidra function `FUN_01c9cdd0` at `0x01C9CDD0`.
///
/// Handles `ComponentPanel.PartGrid.OnMouseUp`.
///
/// Forwards a release on the rack to the canvas as though it had happened
/// there.
///
/// Dragging a part out of the rack and letting go over the rack itself would
/// otherwise leave the placement half-finished; translating the point and
/// re-posting the release lets the canvas finish it.
///
/// Only the rack's own command class gets this, and only for the left button —
/// a right-click release on the rack is left alone.
///
/// Returns whether the release was forwarded.
pub fn part_grid_released(
    button_is_left: bool,
    x: i32,
    y: i32,
    host: &mut impl RackReleaseHost,
) -> bool {
    if !button_is_left || !host.rack_command_running() {
        return false;
    }

    let at = host.to_canvas_point(x, y);
    host.post_canvas_release(CANVAS_RELEASE_MESSAGE, at);
    true
}

/// Implements Ghidra function `FUN_01c80ac0` at `0x01C80AC0`.
///
/// Handles `SchematicEditor.OnShow`.
///
/// The recovered body initialises ten locals and then calls a thunk the
/// disassembly does not resolve, so nothing can honestly be attributed to it.
/// This port therefore does nothing, and records that the handler was read
/// rather than skipped — it should be revisited if that thunk is ever resolved.
pub const fn editor_shown() {}

/// The dialogs that write their result straight back into the editor.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ResultDialog {
    /// `mnAnalysis.SetParameters` ("&Set Analysis Parameters...").
    ///
    /// Copies fifty settings words plus one string back on acceptance.
    AnalysisParameters,
    /// `mnTools.mnEditMacroProperties` ("Edit Macro &Properties...").
    MacroProperties,
    /// `mnAnalysis.mnHBAnalysis` ("Harmonic Balance Analysis...").
    HarmonicBalance,
    /// `mnTools.mnFlowchartEditor` ("Flowchart Editor").
    FlowchartEditor,
    /// `mnTools.mnPCBTools.mnImportBan` ("Backannotate...").
    Backannotate,
}

pub trait ResultDialogHost {
    /// Runs one dialog, reporting whether it was accepted.
    fn show_dialog(&mut self, dialog: ResultDialog) -> bool;

    /// Applies whatever the dialog produced.
    fn apply_result(&mut self, dialog: ResultDialog);
}

/// Implements Ghidra functions `FUN_01c76bb0` at `0x01C76BB0`, `FUN_01c89d40`
/// at `0x01C89D40`, `FUN_01ca4df0` at `0x01CA4DF0`, `FUN_01ca1840` at
/// `0x01CA1840`, and `FUN_01c99820` at `0x01C99820`.
///
/// Runs one dialog and applies what it produced.
///
/// All five build a form, show it modally and only then write anything back,
/// so cancelling any of them leaves the editor exactly as it was — none of them
/// edits live while the dialog is open.
///
/// Returns whether the result was applied.
pub fn run_result_dialog(dialog: ResultDialog, host: &mut impl ResultDialogHost) -> bool {
    if !host.show_dialog(dialog) {
        return false;
    }

    host.apply_result(dialog);
    true
}

/// The `DesignSoft` and Interlink sites the Help menu links to.
///
/// The recovered handler builds the address from the clicked entry's own text
/// rather than from a table, so the caption *is* the host name.
pub const WEB_LINK_SCHEME: &str = "http://";

pub trait WebLinkHost {
    /// The host name the clicked menu entry names.
    fn entry_host(&mut self) -> String;

    /// Hands one address to the shell with the given verb.
    fn open_url(&mut self, verb: &str, url: &str);
}

/// Implements Ghidra function `FUN_01c8f060` at `0x01C8F060`.
///
/// Handles the four `Help.mnDesignSoftontheWeb` entries and the two
/// `Help.mnInterlinkontheWeb` entries.
///
/// Opens the site the clicked entry names.
///
/// The address is assembled from the entry itself rather than looked up, which
/// is how six menu items share one handler — and why every one of them is plain
/// `http`, since the scheme is a literal in the handler.
pub fn open_web_link(host: &mut impl WebLinkHost) -> String {
    let url = format!("{WEB_LINK_SCHEME}{}", host.entry_host());
    host.open_url(crate::schematic_editor_help::SHELL_OPEN_VERB, &url);
    url
}

#[cfg(test)]
mod pcb_and_misc_tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum PcbStep {
        CloseLibrary,
        Current(String, String),
        Create(String),
        Check(PcbToolchain),
        Setting(String, String, String),
        Reload,
    }

    #[derive(Debug, Default)]
    struct Pcb {
        exists: bool,
        steps: Vec<PcbStep>,
    }

    impl PcbDirectoryHost for Pcb {
        fn close_current_library(&mut self) {
            self.steps.push(PcbStep::CloseLibrary);
        }

        fn set_current_toolchain(&mut self, marker_file: &str, name: &str) {
            self.steps
                .push(PcbStep::Current(marker_file.to_owned(), name.to_owned()));
        }

        fn marker_exists(&mut self, _marker_file: &str) -> bool {
            self.exists
        }

        fn create_directory(&mut self, marker_file: &str) {
            self.steps.push(PcbStep::Create(marker_file.to_owned()));
        }

        fn check_menu_entry(&mut self, toolchain: PcbToolchain) {
            self.steps.push(PcbStep::Check(toolchain));
        }

        fn write_setting(&mut self, section: &str, key: &str, value: &str) {
            self.steps.push(PcbStep::Setting(
                section.to_owned(),
                key.to_owned(),
                value.to_owned(),
            ));
        }

        fn reload_library(&mut self) {
            self.steps.push(PcbStep::Reload);
        }
    }

    #[test]
    fn the_three_toolchains_carry_their_own_literals() {
        assert_eq!(PcbToolchain::Orcad.name(), "ORCAD");
        assert_eq!(PcbToolchain::Orcad.marker_file(), r"\ORCAD.PCB");
        assert_eq!(PcbToolchain::Pcad.marker_file(), r"\PCAD.PCB");
        assert_eq!(PcbToolchain::Protel.marker_file(), r"\PROTEL.PCB");
    }

    #[test]
    fn a_missing_directory_is_created_rather_than_reported() {
        let mut host = Pcb::default();

        select_pcb_toolchain(PcbToolchain::Pcad, &mut host);

        assert_eq!(
            host.steps,
            [
                PcbStep::CloseLibrary,
                PcbStep::Current(r"\PCAD.PCB".to_owned(), "PCAD".to_owned()),
                PcbStep::Create(r"\PCAD.PCB".to_owned()),
                PcbStep::Check(PcbToolchain::Pcad),
                PcbStep::Setting(
                    PCB_SETTINGS_SECTION.to_owned(),
                    PCB_SETTINGS_KEY.to_owned(),
                    "PCAD".to_owned()
                ),
                PcbStep::Reload,
            ]
        );
    }

    #[test]
    fn an_existing_directory_is_left_alone() {
        let mut host = Pcb {
            exists: true,
            ..Pcb::default()
        };

        select_pcb_toolchain(PcbToolchain::Protel, &mut host);

        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, PcbStep::Create(_)))
        );
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum RackStep {
        Invalidate,
        Busy(bool),
        Reload,
        Rebuild,
    }

    #[derive(Debug, Default)]
    struct Rack {
        accept: bool,
        steps: Vec<RackStep>,
    }

    impl RackEditorHost for Rack {
        fn show_editor(&mut self, _editor: RackEditor) -> bool {
            self.accept
        }

        fn invalidate_canvas(&mut self) {
            self.steps.push(RackStep::Invalidate);
        }

        fn set_busy_cursor(&mut self, busy: bool) {
            self.steps.push(RackStep::Busy(busy));
        }

        fn reload_symbol_images(&mut self) {
            self.steps.push(RackStep::Reload);
        }

        fn rebuild_rack(&mut self) {
            self.steps.push(RackStep::Rebuild);
        }
    }

    #[test]
    fn an_accepted_editor_reloads_the_images_before_rebuilding() {
        for editor in [RackEditor::ComponentBar, RackEditor::PcbComponentWizard] {
            let mut host = Rack {
                accept: true,
                ..Rack::default()
            };

            assert!(run_rack_editor(editor, &mut host));

            assert_eq!(
                host.steps,
                [
                    RackStep::Invalidate,
                    RackStep::Busy(true),
                    RackStep::Reload,
                    RackStep::Rebuild,
                    RackStep::Busy(false),
                ]
            );
        }
    }

    #[test]
    fn a_cancelled_editor_rebuilds_nothing() {
        let mut host = Rack::default();

        assert!(!run_rack_editor(RackEditor::ComponentBar, &mut host));
        assert!(host.steps.is_empty());
    }

    #[derive(Debug, Default)]
    struct CloseAll {
        unchanged: bool,
        remaining: i32,
        cancel_at: i32,
        closes: i32,
        news: usize,
    }

    impl CloseAllHost for CloseAll {
        fn settings_unchanged(&mut self) -> bool {
            self.unchanged
        }

        fn mark_document_changed(&mut self) {}

        fn store_settings(&mut self) {}

        fn open_document_count(&mut self) -> i32 {
            self.remaining
        }

        fn close_next(&mut self) -> bool {
            self.closes += 1;
            if self.closes == self.cancel_at {
                return true;
            }
            self.remaining -= 1;
            false
        }

        fn new_schematic(&mut self) {
            self.news += 1;
        }
    }

    #[test]
    fn closing_all_walks_the_list_and_starts_a_fresh_sheet() {
        let mut host = CloseAll {
            unchanged: true,
            remaining: 3,
            ..CloseAll::default()
        };

        assert!(close_all_documents(&mut host));

        assert_eq!(host.closes, 3);
        assert_eq!(host.news, 1);
    }

    #[test]
    fn a_cancelled_close_stops_the_loop_and_leaves_the_rest_open() {
        let mut host = CloseAll {
            unchanged: true,
            remaining: 3,
            cancel_at: 2,
            ..CloseAll::default()
        };

        assert!(!close_all_documents(&mut host));

        assert_eq!(host.closes, 2);
        assert_eq!(host.news, 0);
    }

    #[derive(Debug, Default)]
    struct Lock {
        locked: bool,
        result: i32,
        cleared: usize,
        marked: usize,
        prompts: Vec<String>,
    }

    impl ClearLockHost for Lock {
        fn selection_is_locked_block(&mut self) -> bool {
            self.locked
        }

        fn confirm(&mut self, prompt: &str) -> i32 {
            self.prompts.push(prompt.to_owned());
            self.result
        }

        fn clear_lock(&mut self) {
            self.cleared += 1;
        }

        fn mark_document_changed(&mut self) {
            self.marked += 1;
        }
    }

    #[test]
    fn the_lock_prompt_keeps_its_carriage_return() {
        assert!(CLEAR_LOCK_PROMPT.contains('\r'));
        assert!(!CLEAR_LOCK_PROMPT.contains('\n'));
    }

    #[test]
    fn a_confirmed_prompt_clears_the_lock() {
        let mut host = Lock {
            locked: true,
            result: CONFIRMED_RESULT,
            ..Lock::default()
        };

        assert!(clear_block_lock(&mut host));

        assert_eq!(host.prompts, [CLEAR_LOCK_PROMPT.to_owned()]);
        assert_eq!(host.cleared, 1);
        assert_eq!(host.marked, 1);
    }

    #[test]
    fn a_refused_prompt_leaves_the_lock_alone() {
        let mut host = Lock {
            locked: true,
            ..Lock::default()
        };

        assert!(!clear_block_lock(&mut host));
        assert_eq!(host.cleared, 0);
    }

    #[test]
    fn an_unlocked_selection_is_never_asked_about() {
        let mut host = Lock::default();

        assert!(!clear_block_lock(&mut host));
        assert!(host.prompts.is_empty());
    }

    #[derive(Debug, Default)]
    struct Interactive {
        view: bool,
        count: i32,
        stepped: Vec<i32>,
    }

    impl InteractiveTimerHost for Interactive {
        fn view_ready(&mut self) -> bool {
            self.view
        }

        fn object_count(&mut self) -> i32 {
            self.count
        }

        fn step_object(&mut self, index: i32) {
            self.stepped.push(index);
        }
    }

    #[test]
    fn the_interactive_timer_walks_the_whole_document() {
        let mut host = Interactive {
            view: true,
            count: 3,
            ..Interactive::default()
        };

        assert_eq!(interactive_timer_tick(&mut host), 3);
        assert_eq!(host.stepped, [0, 1, 2]);
    }

    #[test]
    fn the_interactive_timer_needs_a_document() {
        let mut host = Interactive {
            count: 3,
            ..Interactive::default()
        };

        assert_eq!(interactive_timer_tick(&mut host), 0);
        assert!(host.stepped.is_empty());
    }

    #[derive(Debug, Default)]
    struct SelectAll {
        code_target: bool,
        count: i32,
        code_selects: usize,
        selected: Vec<i32>,
    }

    impl SelectAllHost for SelectAll {
        fn code_editor_target(&mut self) -> bool {
            self.code_target
        }

        fn select_all_in_code_editor(&mut self) {
            self.code_selects += 1;
        }

        fn object_count(&mut self) -> i32 {
            self.count
        }

        fn select_object(&mut self, index: i32) {
            self.selected.push(index);
        }
    }

    #[test]
    fn select_all_follows_an_open_code_editor() {
        let mut host = SelectAll {
            code_target: true,
            count: 3,
            ..SelectAll::default()
        };

        assert!(select_all(&mut host));

        assert_eq!(host.code_selects, 1);
        assert!(host.selected.is_empty());
    }

    #[test]
    fn select_all_otherwise_selects_every_object() {
        let mut host = SelectAll {
            count: 3,
            ..SelectAll::default()
        };

        assert!(!select_all(&mut host));

        assert_eq!(host.selected, [0, 1, 2]);
    }

    #[derive(Debug, Default)]
    struct ZoomNormal {
        view: bool,
        zoomed: Vec<(i32, i32, i32, i32)>,
    }

    impl ZoomNormalHost for ZoomNormal {
        fn view_ready(&mut self) -> bool {
            self.view
        }

        fn viewport_size(&mut self) -> (i32, i32) {
            (800, 600)
        }

        fn document_origin(&mut self) -> (i32, i32) {
            (1000, 500)
        }

        fn zoom_to_rect(&mut self, rect: (i32, i32, i32, i32)) {
            self.zoomed.push(rect);
        }
    }

    #[test]
    fn zoom_normal_centres_on_what_was_already_showing() {
        let mut host = ZoomNormal {
            view: true,
            ..ZoomNormal::default()
        };

        assert!(zoom_normal(&mut host));

        assert_eq!(host.zoomed, [(600, 200, 1400, 800)]);
    }

    #[test]
    fn zoom_normal_needs_a_document() {
        let mut host = ZoomNormal::default();

        assert!(!zoom_normal(&mut host));
        assert!(host.zoomed.is_empty());
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum ProbeStep {
        Create,
        Mode(u8),
        Show,
        Cancel,
        Install,
    }

    #[derive(Debug, Default)]
    struct Probe {
        running: bool,
        mode: u8,
        steps: Vec<ProbeStep>,
    }

    impl InteractiveProbeHost for Probe {
        fn command_running(&mut self) -> bool {
            self.running
        }

        fn create_probe_window(&mut self) {
            self.steps.push(ProbeStep::Create);
        }

        fn set_probe_mode(&mut self, mode: u8) {
            self.steps.push(ProbeStep::Mode(mode));
        }

        fn show_probe_window(&mut self) {
            self.steps.push(ProbeStep::Show);
        }

        fn cancel_active_command(&mut self) {
            self.steps.push(ProbeStep::Cancel);
        }

        fn install_probe_command(&mut self) {
            self.steps.push(ProbeStep::Install);
        }

        fn interactive_mode(&mut self) -> u8 {
            self.mode
        }
    }

    #[test]
    fn the_probe_refuses_while_a_command_is_running() {
        let mut host = Probe {
            running: true,
            ..Probe::default()
        };

        assert!(!open_interactive_probe(&mut host));
        assert!(host.steps.is_empty());
    }

    #[test]
    fn only_the_first_two_interactive_modes_map_one_to_one() {
        for (mode, expected) in [
            (0, 0),
            (1, 1),
            (2, PROBE_MODE_DEFAULT),
            (4, PROBE_MODE_DEFAULT),
        ] {
            let mut host = Probe {
                mode,
                ..Probe::default()
            };

            assert!(open_interactive_probe(&mut host));
            assert!(host.steps.contains(&ProbeStep::Mode(expected)));
        }
    }

    #[test]
    fn the_probe_arms_its_tool_after_showing_the_window() {
        let mut host = Probe::default();

        assert!(open_interactive_probe(&mut host));

        assert_eq!(
            host.steps,
            [
                ProbeStep::Create,
                ProbeStep::Mode(0),
                ProbeStep::Show,
                ProbeStep::Cancel,
                ProbeStep::Install,
            ]
        );
    }

    #[derive(Debug, Default)]
    struct RackRelease {
        running: bool,
        posted: Vec<(u16, (i32, i32))>,
    }

    impl RackReleaseHost for RackRelease {
        fn rack_command_running(&mut self) -> bool {
            self.running
        }

        fn to_canvas_point(&mut self, x: i32, y: i32) -> (i32, i32) {
            (x + 5, y + 7)
        }

        fn post_canvas_release(&mut self, button: u16, at: (i32, i32)) {
            self.posted.push((button, at));
        }
    }

    #[test]
    fn a_left_release_over_the_rack_is_forwarded_to_the_canvas() {
        let mut host = RackRelease {
            running: true,
            ..RackRelease::default()
        };

        assert!(part_grid_released(true, 10, 20, &mut host));

        assert_eq!(host.posted, [(CANVAS_RELEASE_MESSAGE, (15, 27))]);
    }

    #[test]
    fn a_right_release_or_an_idle_rack_forwards_nothing() {
        let mut right = RackRelease {
            running: true,
            ..RackRelease::default()
        };
        assert!(!part_grid_released(false, 10, 20, &mut right));

        let mut idle = RackRelease::default();
        assert!(!part_grid_released(true, 10, 20, &mut idle));

        assert!(right.posted.is_empty());
        assert!(idle.posted.is_empty());
    }

    #[test]
    fn the_show_handler_is_read_but_attributes_nothing() {
        editor_shown();
    }

    #[derive(Debug, Default)]
    struct Dialogs {
        accept: bool,
        shown: Vec<ResultDialog>,
        applied: Vec<ResultDialog>,
    }

    impl ResultDialogHost for Dialogs {
        fn show_dialog(&mut self, dialog: ResultDialog) -> bool {
            self.shown.push(dialog);
            self.accept
        }

        fn apply_result(&mut self, dialog: ResultDialog) {
            self.applied.push(dialog);
        }
    }

    #[test]
    fn an_accepted_dialog_applies_its_result() {
        let mut host = Dialogs {
            accept: true,
            ..Dialogs::default()
        };

        for dialog in [
            ResultDialog::AnalysisParameters,
            ResultDialog::MacroProperties,
            ResultDialog::HarmonicBalance,
            ResultDialog::FlowchartEditor,
            ResultDialog::Backannotate,
        ] {
            assert!(run_result_dialog(dialog, &mut host));
        }

        assert_eq!(host.applied.len(), 5);
    }

    #[test]
    fn a_cancelled_dialog_writes_nothing_back() {
        let mut host = Dialogs::default();

        assert!(!run_result_dialog(ResultDialog::MacroProperties, &mut host));

        assert_eq!(host.shown, [ResultDialog::MacroProperties]);
        assert!(host.applied.is_empty());
    }

    #[derive(Debug, Default)]
    struct Links {
        host_name: String,
        opened: Vec<(String, String)>,
    }

    impl WebLinkHost for Links {
        fn entry_host(&mut self) -> String {
            self.host_name.clone()
        }

        fn open_url(&mut self, verb: &str, url: &str) {
            self.opened.push((verb.to_owned(), url.to_owned()));
        }
    }

    #[test]
    fn the_address_is_built_from_the_entry_itself() {
        let mut host = Links {
            host_name: "www.tina.com".to_owned(),
            ..Links::default()
        };

        assert_eq!(open_web_link(&mut host), "http://www.tina.com");

        assert_eq!(
            host.opened,
            [(
                crate::schematic_editor_help::SHELL_OPEN_VERB.to_owned(),
                "http://www.tina.com".to_owned()
            )]
        );
    }
}

/// The caption prefix the Export submenu uses for a netlist target.
pub const EXPORT_NETLIST_PREFIX: &str = "PCB Netlist (";

/// The caption prefix the Export submenu uses for a project target.
pub const EXPORT_PROJECT_PREFIX: &str = "PCB Project (";

/// The caption suffix both Export forms share.
pub const EXPORT_CAPTION_SUFFIX: &str = ")...";

/// Builds the Export submenu's caption for one tool chain.
///
/// Part of Ghidra function `FUN_01c96d70` at `0x01C96D70`.
///
/// Altium is the one tool chain exported as a project rather than as a netlist,
/// and the recovered handler singles it out by name rather than by a flag.
#[must_use]
pub fn export_caption(toolchain_name: &str) -> String {
    let prefix = if toolchain_name == PcbToolchain::Altium.name() {
        EXPORT_PROJECT_PREFIX
    } else {
        EXPORT_NETLIST_PREFIX
    };
    format!("{prefix}{toolchain_name}{EXPORT_CAPTION_SUFFIX}")
}

pub trait ExportMenuHost {
    /// The name of the PCB tool chain currently selected.
    fn current_toolchain_name(&mut self) -> String;

    /// Writes the Export submenu entry's caption.
    fn set_export_caption(&mut self, caption: &str);
}

/// Implements Ghidra function `FUN_01c96d70` at `0x01C96D70`.
///
/// Handles `MainMenu.mnFile.Export.OnClick` ("&Export").
///
/// Relabels the export entry with whichever PCB tool chain is selected.
///
/// The caption is rebuilt each time the menu opens rather than when the tool
/// chain changes, so it can never go stale.
pub fn export_menu_opening(host: &mut impl ExportMenuHost) -> String {
    let name = host.current_toolchain_name();
    let caption = export_caption(&name);
    host.set_export_caption(&caption);
    caption
}

pub trait PasteHost {
    /// Reports whether the keyboard focus is somewhere the editor should not
    /// intercept Paste.
    fn focus_elsewhere(&mut self) -> bool;

    /// Forwards Paste to whatever holds the focus.
    fn forward_paste(&mut self);

    /// Reports whether the selection is a component backed by editable code
    /// whose editor is open.
    fn code_editor_target(&mut self) -> bool;

    /// Pastes into the code editor.
    fn paste_into_code_editor(&mut self);

    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Pastes into the schematic.
    fn paste_into_schematic(&mut self);
}

/// Implements Ghidra function `FUN_01c77c10` at `0x01C77C10`.
///
/// Handles `MainMenu.Edit.Paste.OnClick` and
/// `TopToolBar.GeneralTools.DFPasteBtn.OnClick` ("&Paste").
///
/// Pastes wherever the focus is.
///
/// Unlike Copy and Cut, Paste first checks whether the focus is on some other
/// control entirely — a text box in a docked panel, say — and forwards the
/// paste there rather than dropping the clipboard onto the schematic behind it.
///
/// Only once the focus is the editor's own does it choose between the code
/// editor and the schematic, and only the schematic path is guarded.
///
/// Returns whether the editor handled the paste itself.
pub fn paste(host: &mut impl PasteHost) -> bool {
    if host.focus_elsewhere() {
        host.forward_paste();
        return false;
    }

    if host.code_editor_target() {
        host.paste_into_code_editor();
        return true;
    }

    if host.editing_blocked() {
        return false;
    }

    host.paste_into_schematic();
    true
}

/// The colour the recovered tab painter fills a selected tab with.
pub const SELECTED_TAB_FILL: u32 = 0x00F0_FBFF;

/// The colour the recovered tab painter fills an unselected tab with.
///
/// This is the Delphi system colour `clBtnFace`.
pub const UNSELECTED_TAB_FILL: u32 = 0xFF00_000F;

/// Where one tab's caption goes.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct TabLabel {
    pub fill: u32,
    pub text_x: i32,
    pub text_y: i32,
}

/// Centres a caption inside a tab, the way the recovered painter does.
///
/// Part of Ghidra functions `FUN_01ca0a20` at `0x01CA0A20` and `FUN_01ca0b50`
/// at `0x01CA0B50`.
///
/// The integer halving truncates, so a caption that cannot be centred exactly
/// sits one pixel left of and above centre rather than right of and below it.
#[must_use]
pub const fn tab_label(
    bounds: (i32, i32, i32, i32),
    text_size: (i32, i32),
    selected: bool,
) -> TabLabel {
    let (left, top, right, bottom) = bounds;
    let (width, height) = text_size;

    TabLabel {
        fill: if selected {
            SELECTED_TAB_FILL
        } else {
            UNSELECTED_TAB_FILL
        },
        text_x: left + ((right - left) - width) / 2,
        text_y: top + ((bottom - top) - height) / 2,
    }
}

pub trait TabPainterHost {
    /// The caption of one tab.
    fn tab_caption(&mut self, index: i32) -> String;

    /// Measures a caption, returning its width and height.
    fn measure_text(&mut self, text: &str) -> (i32, i32);

    /// Fills the tab's rectangle.
    fn fill_tab(&mut self, bounds: (i32, i32, i32, i32), fill: u32);

    /// Draws the caption at one point.
    fn draw_text(&mut self, at: (i32, i32), text: &str);
}

/// Implements Ghidra functions `FUN_01ca0a20` at `0x01CA0A20` and
/// `FUN_01ca0b50` at `0x01CA0B50`.
///
/// Draws one tab of the component-set or circuit-selector strip.
///
/// Both controls are painted by byte-identical handlers, so they share one flow
/// here. The selected tab gets a pale tint rather than the system highlight,
/// which is what makes the strip read as part of the editor rather than as a
/// standard tab control.
pub fn draw_tab(
    index: i32,
    bounds: (i32, i32, i32, i32),
    selected: bool,
    host: &mut impl TabPainterHost,
) {
    let label = tab_label(bounds, (0, 0), selected);
    host.fill_tab(bounds, label.fill);

    let caption = host.tab_caption(index);
    let size = host.measure_text(&caption);
    let placed = tab_label(bounds, size, selected);
    host.draw_text((placed.text_x, placed.text_y), &caption);
}

/// The prompt the lock command asks for its password with.
pub const LOCK_PASSWORD_PROMPT: &str = "Please enter the lock password";

/// The caption of that prompt.
pub const LOCK_PASSWORD_CAPTION: &str = "Lock password";

pub trait BlockLockHost {
    /// Reports whether the selection is an unlocked block that can be locked.
    fn selection_can_be_locked(&mut self) -> bool;

    /// Asks for the password, returning what was typed.
    fn ask_password(&mut self, caption: &str, prompt: &str) -> Option<String>;

    /// Applies one password as the block's lock.
    fn set_lock(&mut self, password: &str);

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);
}

/// Implements Ghidra function `FUN_01c93610` at `0x01C93610`.
///
/// Handles `MainMenu.Edit.Sharing1.mnLock.OnClick` ("Lock...").
///
/// Locks the selected block behind a password.
///
/// A password that is blank once trimmed is refused silently — there is no
/// second prompt and no message, the command simply does nothing, so an empty
/// lock can never be set.
///
/// The password that is *stored* is the untrimmed one: only the emptiness test
/// trims. A password typed with leading spaces therefore has to be re-typed
/// with them to unlock.
///
/// Returns whether the block was locked.
pub fn lock_block(host: &mut impl BlockLockHost) -> bool {
    if !host.selection_can_be_locked() {
        return false;
    }

    let Some(password) = host.ask_password(LOCK_PASSWORD_CAPTION, LOCK_PASSWORD_PROMPT) else {
        return false;
    };

    if password.trim_matches(|c: char| c <= ' ').is_empty() {
        return false;
    }

    host.set_lock(&password);
    host.mark_document_changed();
    true
}

/// The file filter the IBIS import dialog uses.
pub const IBIS_FILE_FILTER: &str = "IBIS File|*.IBS";

pub trait IbisImportHost {
    /// Runs the IBIS chooser with the recovered filter, returning the path.
    fn choose_ibis_file(&mut self, filter: &str) -> Option<String>;

    /// Parses one IBIS file, reporting whether it could be read.
    fn parse_ibis(&mut self, path: &str) -> bool;

    /// Applies what the parse produced.
    fn apply_ibis(&mut self);
}

/// Implements Ghidra function `FUN_01ca4a80` at `0x01CA4A80`.
///
/// Handles `MainMenu.mnFile.Import.ImportIbis.OnClick`
/// ("IBIS File (*.IBS)...").
///
/// Imports an IBIS model file.
///
/// A file that fails to parse is dropped without a message — the chooser closes
/// and nothing happens, which is the same outcome the user sees from
/// cancelling.
///
/// Returns whether a model was imported.
pub fn import_ibis(host: &mut impl IbisImportHost) -> bool {
    let Some(path) = host.choose_ibis_file(IBIS_FILE_FILTER) else {
        return false;
    };

    if !host.parse_ibis(&path) {
        return false;
    }

    host.apply_ibis();
    true
}

pub trait CircuitTabChangeHost {
    /// Reports whether the editor is ready to switch circuits.
    fn ready(&mut self) -> bool;

    /// Switches without the bookkeeping the ready path does.
    fn switch_directly(&mut self);

    /// Reports whether a switch is already in progress.
    fn switch_in_progress(&mut self) -> bool;

    /// The circuit the tab strip now has selected.
    fn selected_circuit(&mut self) -> i32;

    /// Finds the open document for one circuit.
    fn document_for(&mut self, circuit: i32) -> Option<i32>;

    /// Shows one document.
    fn show_document(&mut self, document: i32);
}

/// Implements Ghidra function `FUN_01c93e60` at `0x01C93E60`.
///
/// Handles `CircuitSelector.OnChange`.
///
/// Brings the newly selected circuit's document to the front.
///
/// The document list is searched for the one whose circuit matches rather than
/// indexed by tab position, so tabs and documents can be in different orders
/// without the wrong circuit appearing.
///
/// A switch already in progress suppresses this entirely, which is what stops
/// the tab strip and the document list chasing each other.
///
/// Returns whether a document was shown.
pub fn circuit_tab_changed(host: &mut impl CircuitTabChangeHost) -> bool {
    if !host.ready() {
        host.switch_directly();
        return false;
    }

    if host.switch_in_progress() {
        return false;
    }

    let circuit = host.selected_circuit();
    let Some(document) = host.document_for(circuit) else {
        return false;
    };

    host.show_document(document);
    true
}

pub trait ArduinoInputHost {
    /// The lines queued from the board.
    fn pending_lines(&mut self) -> Vec<String>;

    /// Sends one line on to the running sketch.
    fn send_line(&mut self, line: &str);
}

/// Implements Ghidra function `FUN_01ca41e0` at `0x01CA41E0`.
///
/// Handles `ArduinoInputTimer.OnTimer`.
///
/// Drains the queue of lines typed for the board and sends each one on.
///
/// The recovered handler appends a terminator held in a data reference rather
/// than a literal, so the line the host receives is the raw one and the
/// terminator belongs to the host.
///
/// The queue is drained completely on every tick rather than one line per tick,
/// so a burst of input is not spread across seconds.
///
/// Returns how many lines were sent.
pub fn arduino_input_tick(host: &mut impl ArduinoInputHost) -> usize {
    let lines = host.pending_lines();
    for line in &lines {
        host.send_line(line);
    }
    lines.len()
}

/// What the interpreter button reports about the current task.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TaskState {
    /// No task is open.
    None,
    /// The recovered kinds in the mask `0x22`.
    Primary,
    /// The recovered kinds in `0x26` but not `0x22`.
    Secondary,
}

pub trait InterpreterButtonHost {
    /// Opens the interpreter window.
    fn open_interpreter(&mut self);

    /// The kind of the task currently open, if any.
    fn current_task_kind(&mut self) -> Option<u8>;

    /// Records the task state for the interpreter to read.
    fn set_task_state(&mut self, state: TaskState);
}

/// The recovered mask of task kinds the interpreter button recognizes.
pub const INTERPRETER_TASK_KINDS: u32 = 0x26;

/// The recovered subset of those that report the primary state.
pub const INTERPRETER_PRIMARY_KINDS: u32 = 0x22;

/// Implements Ghidra function `FUN_01c7c880` at `0x01C7C880`.
///
/// Handles `ExamPanel.ExamMainPages.tsCurTask.GroupBox2.InterpreterBtn.OnClick`
/// ("Interpreter").
///
/// Opens the interpreter and tells it what kind of exam task is open.
///
/// A task kind outside the recovered mask leaves the state as it was rather
/// than clearing it, so opening the interpreter on an unrecognized task shows
/// whatever the last recognized one set.
///
/// Returns the state that was recorded, if any.
pub fn open_interpreter_for_task(host: &mut impl InterpreterButtonHost) -> Option<TaskState> {
    host.open_interpreter();

    let Some(kind) = host.current_task_kind() else {
        host.set_task_state(TaskState::None);
        return Some(TaskState::None);
    };

    if kind >= 8 {
        return None;
    }

    let bit = 1_u32 << kind;
    if bit & INTERPRETER_TASK_KINDS == 0 {
        return None;
    }

    let state = if bit & INTERPRETER_PRIMARY_KINDS == 0 {
        TaskState::Secondary
    } else {
        TaskState::Primary
    };
    host.set_task_state(state);
    Some(state)
}

pub trait NextAdviceHost {
    /// The index of the advice currently shown.
    fn advice_index(&mut self) -> i32;

    /// The number of pieces of advice.
    fn advice_count(&mut self) -> i32;

    /// The penalty the next piece of advice carries, if any.
    fn next_advice_penalty(&mut self) -> i16;

    /// The furthest piece of advice the user has already paid for.
    fn paid_up_to(&mut self) -> i32;

    /// Asks the recovered confirmation, returning whether it was accepted.
    fn confirm_penalty(&mut self, penalty: i16, remaining_score: i32) -> bool;

    /// The score the next piece of advice would leave.
    fn remaining_score(&mut self, index: i32) -> i32;

    /// Moves to one piece of advice and shows it.
    fn show_advice(&mut self, index: i32);
}

/// The full score the exam counts down from.
pub const EXAM_FULL_SCORE: i32 = 100;

/// Implements Ghidra function `FUN_01c7cb00` at `0x01C7CB00`.
///
/// Handles `ExamPanel.ExamMainPages.tsAdvisor.GroupBox3.btNextAdvice.OnClick`
/// ("&Next").
///
/// Steps to the next piece of advice, asking first if it costs marks.
///
/// Advice the user has already paid for is shown again without a second prompt,
/// which is what lets them re-read a hint without being charged twice. Advice
/// with no penalty is never prompted for at all.
///
/// Returns whether the advisor moved.
pub fn next_advice_with_penalty(host: &mut impl NextAdviceHost) -> bool {
    let index = host.advice_index();
    if index >= host.advice_count() - 1 {
        return false;
    }

    let next = index + 1;
    let penalty = host.next_advice_penalty();

    if host.paid_up_to() < next && penalty > 0 {
        let remaining = EXAM_FULL_SCORE - host.remaining_score(next);
        if !host.confirm_penalty(penalty, remaining) {
            return false;
        }
    }

    host.show_advice(next);
    true
}

pub trait FilterDesignHost {
    /// Creates whichever of the filter design windows do not exist yet.
    fn ensure_windows(&mut self);

    /// Shows the filter design window.
    fn show_window(&mut self);

    /// Stops the window's own timer.
    fn stop_timer(&mut self);

    /// Reports whether the design is in the state that needs a reset.
    fn needs_reset(&mut self) -> bool;

    /// Resets it.
    fn reset(&mut self);
}

/// Implements Ghidra function `FUN_01c98e30` at `0x01C98E30`.
///
/// Handles `MainMenu.mnTools.FilterDesign1.OnClick` ("Filter Design...").
///
/// Opens the filter designer.
///
/// Five separate windows are created between them, each only once, and the
/// designer's own timer is stopped as it opens — the timer is what drives the
/// live preview, and it is started again by the window rather than here.
pub fn open_filter_design(host: &mut impl FilterDesignHost) -> bool {
    host.ensure_windows();
    host.show_window();
    host.stop_timer();

    if host.needs_reset() {
        host.reset();
        return true;
    }
    false
}

/// The recovered template the single detailed DC pass reports itself with.
pub const DETAILED_DC_RESULT_FORMAT: &str = "Finished: <%s>";

pub trait DetailedDcSingleHost {
    /// Runs one detailed DC pass and returns what it produced.
    fn run_single(&mut self) -> String;

    /// Shows a transient notification.
    fn notify(&mut self, message: &str, kind: u16, duration: u16);
}

/// Formats the single detailed DC pass's report.
///
/// Part of Ghidra function `FUN_01ca4f30` at `0x01CA4F30`.
#[must_use]
pub fn detailed_dc_report(result: &str) -> String {
    format!("Finished: <{result}>")
}

/// Implements Ghidra function `FUN_01ca4f30` at `0x01CA4F30`.
///
/// Handles `MainMenu.mnAnalysis.mnDetailedDC.mnDetailedDCSingle.OnClick`
/// ("Single").
///
/// Runs one detailed DC pass and reports what it found.
///
/// Unlike the All and Autotest entries this one tells the user it finished,
/// which is how a single pass is distinguishable from one that did nothing.
pub fn run_detailed_dc_single(host: &mut impl DetailedDcSingleHost) -> String {
    let result = host.run_single();
    let message = detailed_dc_report(&result);
    host.notify(&message, 2, 4);
    message
}

pub trait FastAnalyticHost {
    /// Switches the analyser into its fast analytic mode.
    fn set_fast_mode(&mut self, enabled: bool);

    /// Runs the analysis.
    fn run(&mut self);

    /// Repaints the schematic canvas.
    fn repaint_canvas(&mut self);
}

/// Implements Ghidra function `FUN_01ca4be0` at `0x01CA4BE0`.
///
/// Handles `MainMenu.mnAnalysis.mnFastAnalyticSimulation.OnClick`
/// ("Fast Analytic Solution").
///
/// Runs the fast analytic solution and puts the analyser back afterwards.
///
/// The mode is switched on before the run and off after it whatever the run
/// did, so a failed analysis cannot leave the analyser stuck in the fast mode.
pub fn run_fast_analytic(host: &mut impl FastAnalyticHost) {
    host.set_fast_mode(true);
    host.run();
    host.repaint_canvas();
    host.set_fast_mode(false);
}

/// The settings section the 3D shape setting is recorded in.
pub const THREE_D_SETTINGS_SECTION: &str = "Schematic Editor";

/// The settings key the 3D shape setting is recorded under.
pub const THREE_D_SETTINGS_KEY: &str = "Enable3DShapes";

/// The settings file the 3D shape setting is written to.
pub const THREE_D_SETTINGS_FILE: &str = "TINA.INI";

pub trait ThreeDShapeHost {
    /// The pressed state of the `sbEnable3DView` button.
    fn button_pressed(&mut self) -> bool;

    /// Records whether 3D shapes are enabled.
    fn set_three_d_enabled(&mut self, enabled: bool);

    /// Shows one of the two paired menu entries and hides the other, moving the
    /// shortcut across with them.
    fn swap_menu_entries(&mut self, show_three_d: bool);

    /// Writes the setting to the settings file.
    fn write_setting(&mut self, section: &str, key: &str, enabled: bool);

    /// Repaints the schematic canvas.
    fn repaint_canvas(&mut self);
}

/// Implements Ghidra function `FUN_01c99100` at `0x01C99100`.
///
/// Handles `TopToolBar.EditorTools.sbEnable3DView.OnClick` (hinted "2D/3D
/// View"), and the shared command the two View menu entries reach.
///
/// Switches between the 2D and 3D shape sets.
///
/// The two View menu entries are not checked and unchecked, they are *swapped*:
/// one is hidden while the other is shown, and the keyboard shortcut is moved
/// from whichever is going away to whichever is arriving, so the shortcut
/// always toggles rather than always doing one of the two.
///
/// The setting is written to the settings file immediately, so it survives a
/// crash before the editor closes.
///
/// Returns whether 3D shapes are now enabled.
pub fn toggle_three_d_shapes(host: &mut impl ThreeDShapeHost) -> bool {
    let enabled = host.button_pressed();
    host.set_three_d_enabled(enabled);
    host.swap_menu_entries(enabled);
    host.write_setting(THREE_D_SETTINGS_SECTION, THREE_D_SETTINGS_KEY, enabled);
    host.repaint_canvas();
    enabled
}

#[cfg(test)]
mod tab_and_menu_tests {
    use super::*;

    #[test]
    fn all_eight_toolchains_name_their_own_marker_file() {
        for toolchain in [
            PcbToolchain::Orcad,
            PcbToolchain::Pcad,
            PcbToolchain::Protel,
            PcbToolchain::Redac,
            PcbToolchain::Tango,
            PcbToolchain::Eds,
            PcbToolchain::Tina,
            PcbToolchain::Altium,
        ] {
            assert_eq!(
                toolchain.marker_file(),
                format!(r"\{}.PCB", toolchain.name())
            );
        }
    }

    #[test]
    fn only_altium_exports_as_a_project() {
        assert_eq!(export_caption("ALTIUM"), "PCB Project (ALTIUM)...");
        assert_eq!(export_caption("ORCAD"), "PCB Netlist (ORCAD)...");
        assert_eq!(export_caption("TINA"), "PCB Netlist (TINA)...");
    }

    #[derive(Debug, Default)]
    struct ExportMenu {
        name: String,
        captions: Vec<String>,
    }

    impl ExportMenuHost for ExportMenu {
        fn current_toolchain_name(&mut self) -> String {
            self.name.clone()
        }

        fn set_export_caption(&mut self, caption: &str) {
            self.captions.push(caption.to_owned());
        }
    }

    #[test]
    fn the_export_caption_is_rebuilt_each_time_the_menu_opens() {
        let mut host = ExportMenu {
            name: "PCAD".to_owned(),
            ..ExportMenu::default()
        };

        export_menu_opening(&mut host);
        host.name = "ALTIUM".to_owned();
        export_menu_opening(&mut host);

        assert_eq!(
            host.captions,
            ["PCB Netlist (PCAD)...", "PCB Project (ALTIUM)..."]
        );
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum PasteStep {
        Forward,
        Code,
        Schematic,
    }

    #[derive(Debug, Default)]
    struct Paste {
        elsewhere: bool,
        code_target: bool,
        blocked: bool,
        steps: Vec<PasteStep>,
    }

    impl PasteHost for Paste {
        fn focus_elsewhere(&mut self) -> bool {
            self.elsewhere
        }

        fn forward_paste(&mut self) {
            self.steps.push(PasteStep::Forward);
        }

        fn code_editor_target(&mut self) -> bool {
            self.code_target
        }

        fn paste_into_code_editor(&mut self) {
            self.steps.push(PasteStep::Code);
        }

        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn paste_into_schematic(&mut self) {
            self.steps.push(PasteStep::Schematic);
        }
    }

    #[test]
    fn paste_goes_to_whatever_else_holds_the_focus() {
        let mut host = Paste {
            elsewhere: true,
            ..Paste::default()
        };

        assert!(!paste(&mut host));

        assert_eq!(host.steps, [PasteStep::Forward]);
    }

    #[test]
    fn paste_reaches_the_code_editor_and_the_schematic_in_turn() {
        let mut code = Paste {
            code_target: true,
            ..Paste::default()
        };
        assert!(paste(&mut code));
        assert_eq!(code.steps, [PasteStep::Code]);

        let mut schematic = Paste::default();
        assert!(paste(&mut schematic));
        assert_eq!(schematic.steps, [PasteStep::Schematic]);
    }

    #[test]
    fn a_blocked_editor_pastes_nothing_into_the_schematic() {
        let mut host = Paste {
            blocked: true,
            ..Paste::default()
        };

        assert!(!paste(&mut host));
        assert!(host.steps.is_empty());
    }

    #[test]
    fn a_tab_caption_is_centred_with_truncating_halves() {
        let placed = tab_label((10, 20, 51, 60), (20, 11), false);

        assert_eq!(placed.fill, UNSELECTED_TAB_FILL);
        assert_eq!(placed.text_x, 20);
        assert_eq!(placed.text_y, 34);
    }

    #[test]
    fn the_selected_tab_uses_the_recovered_tint() {
        assert_eq!(
            tab_label((0, 0, 10, 10), (0, 0), true).fill,
            SELECTED_TAB_FILL
        );
    }

    #[derive(Debug, Default)]
    struct Tabs {
        fills: Vec<(u32,)>,
        drawn: Vec<((i32, i32), String)>,
    }

    impl TabPainterHost for Tabs {
        fn tab_caption(&mut self, index: i32) -> String {
            format!("tab {index}")
        }

        fn measure_text(&mut self, _text: &str) -> (i32, i32) {
            (40, 12)
        }

        fn fill_tab(&mut self, _bounds: (i32, i32, i32, i32), fill: u32) {
            self.fills.push((fill,));
        }

        fn draw_text(&mut self, at: (i32, i32), text: &str) {
            self.drawn.push((at, text.to_owned()));
        }
    }

    #[test]
    fn drawing_a_tab_fills_it_and_centres_its_caption() {
        let mut host = Tabs::default();

        draw_tab(2, (0, 0, 100, 30), true, &mut host);

        assert_eq!(host.fills, [(SELECTED_TAB_FILL,)]);
        assert_eq!(host.drawn, [((30, 9), "tab 2".to_owned())]);
    }

    #[derive(Debug, Default)]
    struct Lock {
        lockable: bool,
        typed: Option<String>,
        prompts: Vec<(String, String)>,
        set: Vec<String>,
    }

    impl BlockLockHost for Lock {
        fn selection_can_be_locked(&mut self) -> bool {
            self.lockable
        }

        fn ask_password(&mut self, caption: &str, prompt: &str) -> Option<String> {
            self.prompts.push((caption.to_owned(), prompt.to_owned()));
            self.typed.clone()
        }

        fn set_lock(&mut self, password: &str) {
            self.set.push(password.to_owned());
        }

        fn mark_document_changed(&mut self) {}
    }

    #[test]
    fn a_blank_password_is_refused_silently() {
        for typed in ["", "   ", "\t "] {
            let mut host = Lock {
                lockable: true,
                typed: Some(typed.to_owned()),
                ..Lock::default()
            };

            assert!(!lock_block(&mut host));
            assert!(host.set.is_empty());
        }
    }

    #[test]
    fn the_untrimmed_password_is_what_gets_stored() {
        let mut host = Lock {
            lockable: true,
            typed: Some("  secret".to_owned()),
            ..Lock::default()
        };

        assert!(lock_block(&mut host));

        assert_eq!(host.set, ["  secret".to_owned()]);
        assert_eq!(
            host.prompts,
            [(
                LOCK_PASSWORD_CAPTION.to_owned(),
                LOCK_PASSWORD_PROMPT.to_owned()
            )]
        );
    }

    #[derive(Debug, Default)]
    struct Ibis {
        chosen: Option<String>,
        parses: bool,
        filters: Vec<String>,
        applied: usize,
    }

    impl IbisImportHost for Ibis {
        fn choose_ibis_file(&mut self, filter: &str) -> Option<String> {
            self.filters.push(filter.to_owned());
            self.chosen.clone()
        }

        fn parse_ibis(&mut self, _path: &str) -> bool {
            self.parses
        }

        fn apply_ibis(&mut self) {
            self.applied += 1;
        }
    }

    #[test]
    fn an_unreadable_ibis_file_is_dropped_without_a_message() {
        let mut host = Ibis {
            chosen: Some("model.ibs".to_owned()),
            ..Ibis::default()
        };

        assert!(!import_ibis(&mut host));

        assert_eq!(host.filters, [IBIS_FILE_FILTER.to_owned()]);
        assert_eq!(host.applied, 0);
    }

    #[test]
    fn a_readable_ibis_file_is_applied() {
        let mut host = Ibis {
            chosen: Some("model.ibs".to_owned()),
            parses: true,
            ..Ibis::default()
        };

        assert!(import_ibis(&mut host));
        assert_eq!(host.applied, 1);
    }

    #[derive(Debug, Default)]
    struct TabChange {
        ready: bool,
        in_progress: bool,
        circuit: i32,
        document: Option<i32>,
        directs: usize,
        shown: Vec<i32>,
    }

    impl CircuitTabChangeHost for TabChange {
        fn ready(&mut self) -> bool {
            self.ready
        }

        fn switch_directly(&mut self) {
            self.directs += 1;
        }

        fn switch_in_progress(&mut self) -> bool {
            self.in_progress
        }

        fn selected_circuit(&mut self) -> i32 {
            self.circuit
        }

        fn document_for(&mut self, _circuit: i32) -> Option<i32> {
            self.document
        }

        fn show_document(&mut self, document: i32) {
            self.shown.push(document);
        }
    }

    #[test]
    fn a_tab_change_shows_the_matching_document() {
        let mut host = TabChange {
            ready: true,
            circuit: 3,
            document: Some(7),
            ..TabChange::default()
        };

        assert!(circuit_tab_changed(&mut host));

        assert_eq!(host.shown, [7]);
    }

    #[test]
    fn a_switch_already_running_suppresses_the_tab_change() {
        let mut host = TabChange {
            ready: true,
            in_progress: true,
            document: Some(7),
            ..TabChange::default()
        };

        assert!(!circuit_tab_changed(&mut host));
        assert!(host.shown.is_empty());
    }

    #[test]
    fn an_editor_that_is_not_ready_switches_directly() {
        let mut host = TabChange::default();

        assert!(!circuit_tab_changed(&mut host));

        assert_eq!(host.directs, 1);
    }

    #[derive(Debug, Default)]
    struct Arduino {
        pending: Vec<String>,
        sent: Vec<String>,
    }

    impl ArduinoInputHost for Arduino {
        fn pending_lines(&mut self) -> Vec<String> {
            self.pending.clone()
        }

        fn send_line(&mut self, line: &str) {
            self.sent.push(line.to_owned());
        }
    }

    #[test]
    fn the_whole_queue_is_drained_on_one_tick() {
        let mut host = Arduino {
            pending: vec!["one".to_owned(), "two".to_owned()],
            ..Arduino::default()
        };

        assert_eq!(arduino_input_tick(&mut host), 2);
        assert_eq!(host.sent, ["one".to_owned(), "two".to_owned()]);
    }

    #[derive(Debug, Default)]
    struct Interpreter {
        kind: Option<u8>,
        opens: usize,
        states: Vec<TaskState>,
    }

    impl InterpreterButtonHost for Interpreter {
        fn open_interpreter(&mut self) {
            self.opens += 1;
        }

        fn current_task_kind(&mut self) -> Option<u8> {
            self.kind
        }

        fn set_task_state(&mut self, state: TaskState) {
            self.states.push(state);
        }
    }

    #[test]
    fn the_interpreter_reports_the_task_kind_it_recognizes() {
        // 0x22 = kinds 1 and 5; 0x26 also admits kind 2.
        let mut primary = Interpreter {
            kind: Some(1),
            ..Interpreter::default()
        };
        assert_eq!(
            open_interpreter_for_task(&mut primary),
            Some(TaskState::Primary)
        );

        let mut secondary = Interpreter {
            kind: Some(2),
            ..Interpreter::default()
        };
        assert_eq!(
            open_interpreter_for_task(&mut secondary),
            Some(TaskState::Secondary)
        );
    }

    #[test]
    fn an_unrecognized_task_leaves_the_state_as_it_was() {
        let mut host = Interpreter {
            kind: Some(3),
            ..Interpreter::default()
        };

        assert_eq!(open_interpreter_for_task(&mut host), None);
        assert_eq!(host.opens, 1);
        assert!(host.states.is_empty());
    }

    #[test]
    fn no_task_clears_the_state() {
        let mut host = Interpreter::default();

        assert_eq!(open_interpreter_for_task(&mut host), Some(TaskState::None));
        assert_eq!(host.states, [TaskState::None]);
    }

    #[derive(Debug, Default)]
    struct NextAdvice {
        index: i32,
        count: i32,
        penalty: i16,
        paid: i32,
        accept: bool,
        prompts: usize,
        shown: Vec<i32>,
    }

    impl NextAdviceHost for NextAdvice {
        fn advice_index(&mut self) -> i32 {
            self.index
        }

        fn advice_count(&mut self) -> i32 {
            self.count
        }

        fn next_advice_penalty(&mut self) -> i16 {
            self.penalty
        }

        fn paid_up_to(&mut self) -> i32 {
            self.paid
        }

        fn confirm_penalty(&mut self, _penalty: i16, _remaining_score: i32) -> bool {
            self.prompts += 1;
            self.accept
        }

        fn remaining_score(&mut self, _index: i32) -> i32 {
            30
        }

        fn show_advice(&mut self, index: i32) {
            self.index = index;
            self.shown.push(index);
        }
    }

    #[test]
    fn advice_with_no_penalty_is_never_prompted_for() {
        let mut host = NextAdvice {
            count: 4,
            ..NextAdvice::default()
        };

        assert!(next_advice_with_penalty(&mut host));

        assert_eq!(host.prompts, 0);
        assert_eq!(host.shown, [1]);
    }

    #[test]
    fn a_refused_penalty_leaves_the_advisor_where_it_was() {
        let mut host = NextAdvice {
            count: 4,
            penalty: 10,
            ..NextAdvice::default()
        };

        assert!(!next_advice_with_penalty(&mut host));

        assert_eq!(host.prompts, 1);
        assert!(host.shown.is_empty());
    }

    #[test]
    fn advice_already_paid_for_is_shown_again_without_charge() {
        let mut host = NextAdvice {
            count: 4,
            penalty: 10,
            paid: 3,
            ..NextAdvice::default()
        };

        assert!(next_advice_with_penalty(&mut host));

        assert_eq!(host.prompts, 0);
        assert_eq!(host.shown, [1]);
    }

    #[test]
    fn the_last_piece_of_advice_is_where_stepping_forward_stops() {
        let mut host = NextAdvice {
            index: 3,
            count: 4,
            ..NextAdvice::default()
        };

        assert!(!next_advice_with_penalty(&mut host));
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum FilterStep {
        Ensure,
        Show,
        Stop,
        Reset,
    }

    #[derive(Debug, Default)]
    struct Filter {
        reset_needed: bool,
        steps: Vec<FilterStep>,
    }

    impl FilterDesignHost for Filter {
        fn ensure_windows(&mut self) {
            self.steps.push(FilterStep::Ensure);
        }

        fn show_window(&mut self) {
            self.steps.push(FilterStep::Show);
        }

        fn stop_timer(&mut self) {
            self.steps.push(FilterStep::Stop);
        }

        fn needs_reset(&mut self) -> bool {
            self.reset_needed
        }

        fn reset(&mut self) {
            self.steps.push(FilterStep::Reset);
        }
    }

    #[test]
    fn the_filter_designer_stops_its_timer_as_it_opens() {
        let mut host = Filter::default();

        assert!(!open_filter_design(&mut host));

        assert_eq!(
            host.steps,
            [FilterStep::Ensure, FilterStep::Show, FilterStep::Stop]
        );
    }

    #[test]
    fn the_filter_designer_resets_when_it_has_to() {
        let mut host = Filter {
            reset_needed: true,
            ..Filter::default()
        };

        assert!(open_filter_design(&mut host));
        assert!(host.steps.contains(&FilterStep::Reset));
    }

    #[derive(Debug, Default)]
    struct DetailedSingle {
        notices: Vec<(String, u16, u16)>,
    }

    impl DetailedDcSingleHost for DetailedSingle {
        fn run_single(&mut self) -> String {
            "R1".to_owned()
        }

        fn notify(&mut self, message: &str, kind: u16, duration: u16) {
            self.notices.push((message.to_owned(), kind, duration));
        }
    }

    #[test]
    fn the_single_pass_reports_what_it_finished_with() {
        let mut host = DetailedSingle::default();

        assert_eq!(run_detailed_dc_single(&mut host), "Finished: <R1>");

        assert_eq!(host.notices, [("Finished: <R1>".to_owned(), 2, 4)]);
        assert!(DETAILED_DC_RESULT_FORMAT.contains("%s"));
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum FastStep {
        Mode(bool),
        Run,
        Repaint,
    }

    #[derive(Debug, Default)]
    struct Fast {
        steps: Vec<FastStep>,
    }

    impl FastAnalyticHost for Fast {
        fn set_fast_mode(&mut self, enabled: bool) {
            self.steps.push(FastStep::Mode(enabled));
        }

        fn run(&mut self) {
            self.steps.push(FastStep::Run);
        }

        fn repaint_canvas(&mut self) {
            self.steps.push(FastStep::Repaint);
        }
    }

    #[test]
    fn the_fast_mode_is_always_switched_back_off() {
        let mut host = Fast::default();

        run_fast_analytic(&mut host);

        assert_eq!(
            host.steps,
            [
                FastStep::Mode(true),
                FastStep::Run,
                FastStep::Repaint,
                FastStep::Mode(false),
            ]
        );
    }

    #[derive(Debug, Default)]
    struct ThreeD {
        pressed: bool,
        enabled: Vec<bool>,
        swaps: Vec<bool>,
        settings: Vec<(String, String, bool)>,
        repaints: usize,
    }

    impl ThreeDShapeHost for ThreeD {
        fn button_pressed(&mut self) -> bool {
            self.pressed
        }

        fn set_three_d_enabled(&mut self, enabled: bool) {
            self.enabled.push(enabled);
        }

        fn swap_menu_entries(&mut self, show_three_d: bool) {
            self.swaps.push(show_three_d);
        }

        fn write_setting(&mut self, section: &str, key: &str, enabled: bool) {
            self.settings
                .push((section.to_owned(), key.to_owned(), enabled));
        }

        fn repaint_canvas(&mut self) {
            self.repaints += 1;
        }
    }

    #[test]
    fn the_three_d_setting_follows_the_button_and_is_written_at_once() {
        let mut host = ThreeD {
            pressed: true,
            ..ThreeD::default()
        };

        assert!(toggle_three_d_shapes(&mut host));

        assert_eq!(host.enabled, [true]);
        assert_eq!(host.swaps, [true]);
        assert_eq!(
            host.settings,
            [(
                THREE_D_SETTINGS_SECTION.to_owned(),
                THREE_D_SETTINGS_KEY.to_owned(),
                true
            )]
        );
        assert_eq!(host.repaints, 1);
        assert_eq!(THREE_D_SETTINGS_FILE, "TINA.INI");
    }
}

/// The statistics file the transient statistics entry opens.
pub const TRANSIENT_STATISTICS_FILE: &str = "Transient Statistics.STA";

/// The extension a per-circuit statistics file carries.
pub const STATISTICS_EXTENSION: &str = ".STA";

/// The editor the recovered handler opens the statistics file in.
pub const STATISTICS_VIEWER: &str = "Notepad.exe";

pub trait TransientStatisticsHost {
    /// The path of the statistics file to open.
    ///
    /// The recovered handler picks between a per-circuit name derived from the
    /// open document, a fixed fallback, and an explicit override, all resolved
    /// against the statistics directory.
    fn statistics_path(&mut self) -> String;

    /// Reports whether the file exists.
    fn file_exists(&mut self, path: &str) -> bool;

    /// Opens one file in the external viewer.
    fn open_in_viewer(&mut self, viewer: &str, path: &str);
}

/// Implements Ghidra function `FUN_01c9ced0` at `0x01C9CED0`.
///
/// Handles `MainMenu.View.mnTransientStatistics.OnClick`
/// ("Transient &Statistics").
///
/// Opens the transient statistics file in Notepad.
///
/// The viewer is compiled in rather than resolved from the shell, so the file
/// always opens in Notepad however the user has `.STA` associated.
///
/// A file that does not exist is not created or reported — the entry simply
/// does nothing, which is what happens before any transient analysis has run.
///
/// Returns whether the viewer was opened.
pub fn open_transient_statistics(host: &mut impl TransientStatisticsHost) -> bool {
    let path = host.statistics_path();
    if !host.file_exists(&path) {
        return false;
    }

    host.open_in_viewer(STATISTICS_VIEWER, &path);
    true
}

/// The tool suites that create a set of windows before showing one of them.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ToolSuite {
    /// `mnTools.LogicConverter1` ("Logic Design..."), which creates ten.
    LogicDesign,
    /// `mnTools.mnFilterDesignNew` ("Filter Design New...").
    FilterDesignNew,
}

pub trait ToolSuiteHost {
    /// Creates whichever of the suite's windows do not exist yet.
    fn ensure_windows(&mut self, suite: ToolSuite);

    /// Shows the suite's main window, reporting whether it was accepted.
    ///
    /// The logic designer is shown rather than run modally, so it always
    /// reports accepted.
    fn show_main_window(&mut self, suite: ToolSuite) -> bool;

    /// Starts a fresh schematic for the result to land in.
    fn new_schematic(&mut self);

    /// Builds the circuit the suite designed.
    fn build_result(&mut self);

    /// Saves the suite's settings.
    fn save_settings(&mut self);

    /// Repaints the schematic canvas.
    fn repaint_canvas(&mut self);
}

/// Implements Ghidra functions `FUN_01c98a00` at `0x01C98A00` and
/// `FUN_01c98bf0` at `0x01C98BF0`.
///
/// Opens one of the two design suites.
///
/// Each creates its windows once and keeps them for the life of the session —
/// the logic designer alone creates ten. Only the new filter designer goes on
/// to build anything: it starts a fresh schematic *before* building, so the
/// designed circuit never lands on top of the user's work.
///
/// Returns whether a circuit was built.
pub fn open_tool_suite(suite: ToolSuite, host: &mut impl ToolSuiteHost) -> bool {
    host.ensure_windows(suite);

    if !host.show_main_window(suite) {
        if suite == ToolSuite::FilterDesignNew {
            host.repaint_canvas();
        }
        return false;
    }

    if suite == ToolSuite::LogicDesign {
        return false;
    }

    host.new_schematic();
    host.build_result();
    host.save_settings();
    host.repaint_canvas();
    true
}

pub trait FpgaConfigHost {
    /// Runs the bitstream chooser, returning the chosen path.
    ///
    /// Both the chooser's filter and its initial directory are data references
    /// rather than literals in the recovered bytes, so they belong to the host.
    fn choose_bitstream(&mut self) -> Option<String>;

    /// Strips the path down to the directory the chooser should keep.
    fn directory_of(&mut self, path: &str) -> String;

    /// Remembers that directory for next time.
    fn remember_directory(&mut self, directory: &str);

    /// Downloads one bitstream to the card.
    fn download(&mut self, path: &str);
}

/// Implements Ghidra function `FUN_01c999e0` at `0x01C999E0`.
///
/// Handles `MainMenu.mnTM.mnConfigFPGA.OnClick` ("Download to FPGA Card...").
///
/// Sends a bitstream to the attached FPGA card.
///
/// The chooser's directory is written back from the chosen file before the
/// download, so the next configuration starts where the last one left off even
/// if the download itself fails.
///
/// Returns whether a download was started.
pub fn configure_fpga(host: &mut impl FpgaConfigHost) -> bool {
    let Some(path) = host.choose_bitstream() else {
        return false;
    };

    let directory = host.directory_of(&path);
    host.remember_directory(&directory);
    host.download(&path);
    true
}

pub trait TitleBlockHost {
    /// Runs the title-block chooser, returning the chosen file.
    fn choose_title_block(&mut self) -> Option<String>;

    /// Creates the title-block object.
    fn create_title_block(&mut self, path: &str) -> ObjectHandle;

    /// Adds it to the document.
    fn add_to_document(&mut self, object: ObjectHandle);

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);

    /// Makes this object the only selected one.
    fn select_only(&mut self, object: ObjectHandle);

    /// Places it at the document's own origin.
    fn place_at_origin(&mut self, object: ObjectHandle);

    /// Draws it and finishes the insertion.
    fn draw_and_finish(&mut self, object: ObjectHandle);
}

/// An opaque handle to a recovered schematic object.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct ObjectHandle(pub u64);

/// A point in the document's own coordinates.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct DocumentPoint {
    pub x: i32,
    pub y: i32,
}

/// Implements Ghidra function `FUN_01c94a50` at `0x01C94A50`.
///
/// Handles `MainMenu.Insert.mnTitleBlock.OnClick` ("Title Bloc&k...").
///
/// Places a title block on the sheet.
///
/// Unlike the other insertions this one does not arm a tool: the block goes
/// straight to the document's own origin, because a title block belongs to the
/// sheet rather than to a position the user picks.
///
/// Returns whether a block was placed.
pub fn insert_title_block(host: &mut impl TitleBlockHost) -> bool {
    let Some(path) = host.choose_title_block() else {
        return false;
    };

    let object = host.create_title_block(&path);
    host.add_to_document(object);
    host.mark_document_changed();
    host.select_only(object);
    host.place_at_origin(object);
    host.draw_and_finish(object);
    true
}

/// The extension a circuit downloaded from the cloud is saved under.
pub const CLOUD_DOCUMENT_EXTENSION: &str = ".CLOUDTSC";

pub trait CloudDownloadHost {
    /// Runs the cloud chooser, returning the name that was picked.
    fn choose_cloud_document(&mut self) -> Option<String>;

    /// Downloads and opens one document, if it can be read.
    fn open_downloaded(&mut self, name: &str) -> bool;

    /// Reports the failure using the recovered message template.
    fn report_failure(&mut self, name: &str);

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);

    /// Adopts the downloaded document as the editor's current one.
    fn adopt_document(&mut self);

    /// Records the local file name the download is saved under.
    fn set_local_name(&mut self, name: &str);

    /// Invalidates the schematic canvas and refreshes the editor.
    fn refresh_editor(&mut self);
}

/// Implements Ghidra function `FUN_01c948a0` at `0x01C948A0`.
///
/// Handles `MainMenu.mnFile.mnCloud.mnDownloadFromCloud.OnClick`
/// ("Download...").
///
/// Downloads a circuit from the cloud and opens it.
///
/// A download that cannot be opened is reported through a resource-string
/// template rather than silently dropped — this is one of the few commands that
/// tells the user when it fails.
///
/// The local copy is named after the cloud document with the recovered
/// extension appended, so a downloaded circuit is distinguishable from a local
/// one on disk.
///
/// Returns whether a document was opened.
pub fn download_from_cloud(host: &mut impl CloudDownloadHost) -> bool {
    let Some(name) = host.choose_cloud_document() else {
        return false;
    };

    if !host.open_downloaded(&name) {
        host.report_failure(&name);
        return false;
    }

    host.mark_document_changed();
    host.adopt_document();

    let local = format!("{name}{CLOUD_DOCUMENT_EXTENSION}");
    host.set_local_name(&local);
    host.refresh_editor();
    true
}

pub trait SaveAllHost {
    /// Reports whether the editor's settings still match the document's.
    fn settings_unchanged(&mut self) -> bool;

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);

    /// Copies the editor's settings into the document, and takes a copy of them
    /// to restore afterwards.
    fn store_settings(&mut self);

    /// The number of documents open.
    fn document_count(&mut self) -> i32;

    /// Reports whether this document has already been saved in this pass.
    fn already_saved(&mut self, index: i32) -> bool;

    /// Marks it saved.
    fn mark_saved(&mut self, index: i32);

    /// Reports whether this document needs saving at all.
    fn needs_saving(&mut self, index: i32) -> bool;

    /// Makes this document's settings the active ones and saves it.
    fn save_document(&mut self, index: i32);

    /// Puts the editor's own settings back.
    fn restore_settings(&mut self);
}

/// Implements Ghidra function `FUN_01c945b0` at `0x01C945B0`.
///
/// Handles `MainMenu.mnFile.mnSaveAll.OnClick` ("Sa&ve All").
///
/// Saves every open document that needs it.
///
/// Each document is saved with *its own* settings rather than the editor's, so
/// the editor's are copied aside first and put back at the end — a save-all
/// cannot leave the editor configured like whichever document happened to be
/// last.
///
/// A list of documents already visited guards against saving the same one twice
/// when two entries share a document.
///
/// Returns how many documents were saved.
pub fn save_all(host: &mut impl SaveAllHost) -> i32 {
    if !host.settings_unchanged() {
        host.mark_document_changed();
    }
    host.store_settings();

    let mut saved = 0;
    let count = host.document_count();
    for index in 0..count {
        if host.already_saved(index) {
            continue;
        }
        host.mark_saved(index);

        if host.needs_saving(index) {
            host.save_document(index);
            saved += 1;
        }
    }

    host.restore_settings();
    saved
}

/// The settings key the interface language is recorded under.
pub const LANGUAGE_SETTINGS_KEY: &str = "LanguageCode";

/// The script call the language change records.
pub const LANGUAGE_SCRIPT_PREFIX: &str = "SetLanguage(";

pub trait LanguageHost {
    /// Ticks the chosen language entry.
    fn check_entry(&mut self);

    /// The language code the clicked entry names.
    fn entry_language_code(&mut self) -> String;

    /// Records the code as the editor's current language.
    fn set_language_code(&mut self, code: &str);

    /// Loads the new language's resources.
    fn load_language(&mut self);

    /// Re-applies every caption in the editor.
    fn reapply_captions(&mut self);

    /// Writes the choice to the settings file.
    fn write_setting(&mut self, section: &str, key: &str, value: &str);

    /// Records one script call.
    fn record_script(&mut self, call: &str);
}

/// Implements Ghidra function `FUN_01ca3c00` at `0x01CA3C00`.
///
/// Handles `MainMenu.View.mnLanguage.mnNative.OnClick` ("English") and
/// `MainMenu.View.mnLanguage.mnOther1.OnClick` ("Other").
///
/// Switches the interface language.
///
/// The change is applied immediately rather than on restart: the resources are
/// reloaded and every caption in the editor is rewritten in place.
///
/// The choice is written to the settings file and recorded as a script call, so
/// a recorded session replays in the language it was recorded in.
///
/// Returns the language code that was applied.
pub fn select_language(host: &mut impl LanguageHost) -> String {
    host.check_entry();

    let code = host.entry_language_code();
    host.set_language_code(&code);
    host.load_language();
    host.reapply_captions();

    host.write_setting(THREE_D_SETTINGS_SECTION, LANGUAGE_SETTINGS_KEY, &code);
    host.record_script(&format!("{LANGUAGE_SCRIPT_PREFIX}{code}"));
    code
}

/// The prompt the unlock command asks for its password with.
pub const UNLOCK_PASSWORD_PROMPT: &str = "Please enter the unlock password";

/// The caption of that prompt.
pub const UNLOCK_PASSWORD_CAPTION: &str = "Unlock password";

/// The message shown when the password does not match.
pub const UNLOCK_FAILED_MESSAGE: &str =
    "The Unlock password was not correct.\rThe block is kept locked.";

pub trait BlockUnlockHost {
    /// Reports whether the selection is a locked block.
    fn selection_is_locked(&mut self) -> bool;

    /// The password the block was locked with.
    fn stored_password(&mut self) -> String;

    /// Asks for the password, returning what was typed.
    fn ask_password(&mut self, caption: &str, prompt: &str) -> Option<String>;

    /// Clears the lock.
    fn clear_lock(&mut self);

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);

    /// Shows the failure message.
    fn report_failure(&mut self, message: &str);
}

/// Implements Ghidra function `FUN_01c938d0` at `0x01C938D0`.
///
/// Handles `MainMenu.Edit.Sharing1.mnUnlock.OnClick` ("Unlock...").
///
/// Unlocks the selected block if the password matches.
///
/// The comparison is made on upper-cased copies of both strings, so the lock is
/// case-insensitive even though the password was stored exactly as typed.
///
/// A password that trims to nothing is refused silently — like the lock
/// command, that case gets no message at all, while a wrong password does.
///
/// Returns whether the block was unlocked.
pub fn unlock_block(host: &mut impl BlockUnlockHost) -> bool {
    if !host.selection_is_locked() {
        return false;
    }

    let Some(typed) = host.ask_password(UNLOCK_PASSWORD_CAPTION, UNLOCK_PASSWORD_PROMPT) else {
        return false;
    };

    if typed.trim_matches(|c: char| c <= ' ').is_empty() {
        return false;
    }

    let stored = host.stored_password();
    if stored.to_uppercase() != typed.to_uppercase() {
        host.report_failure(UNLOCK_FAILED_MESSAGE);
        return false;
    }

    host.clear_lock();
    host.mark_document_changed();
    true
}

pub trait EditorOptionsHost {
    /// The colour scheme the editor is using.
    fn current_scheme(&mut self) -> String;

    /// Runs the editor options dialog, reporting whether it was accepted.
    fn show_options(&mut self) -> bool;

    /// Re-applies the options to the editor.
    fn reapply_options(&mut self);

    /// Re-applies them to every other open window too.
    fn reapply_to_all_windows(&mut self);

    /// Loads one colour scheme, reporting whether it could be read.
    fn load_scheme(&mut self, scheme: &str) -> bool;

    /// Repaints the component rack.
    fn repaint_rack(&mut self);

    /// Repaints the schematic canvas with the fallback background colour.
    fn repaint_with_fallback(&mut self);

    /// Refreshes the diagram window, if one is open.
    fn refresh_diagram_window(&mut self);
}

/// Implements Ghidra function `FUN_01c83ba0` at `0x01C83BA0`.
///
/// Handles `MainMenu.View.mnEditorOptions.OnClick` ("&Options...").
///
/// Runs the editor options dialog and applies whatever changed.
///
/// The colour scheme is compared before and after: an unchanged scheme only
/// repaints the rack, while a changed one is loaded — and a scheme that fails
/// to load falls back to the configured background colour and repaints
/// everything, including the diagram window, rather than leaving the editor
/// half-recoloured.
///
/// Returns whether the options were accepted.
pub fn edit_editor_options(host: &mut impl EditorOptionsHost) -> bool {
    let before = host.current_scheme();

    if !host.show_options() {
        return false;
    }

    host.reapply_options();
    host.reapply_to_all_windows();

    let after = host.current_scheme();
    if before == after {
        host.repaint_rack();
        return true;
    }

    if !host.load_scheme(&after) {
        host.repaint_with_fallback();
        host.repaint_rack();
        host.refresh_diagram_window();
    }
    true
}

/// The recovered filter index that means the chooser picked a netlist.
pub const OPEN_NETLIST_FILTER_INDEX: i32 = 3;

pub trait OpenDocumentHost {
    /// Runs the open dialog, returning the files chosen.
    fn choose_files(&mut self) -> Option<Vec<String>>;

    /// The filter index the chooser came back with.
    fn filter_index(&mut self) -> i32;

    /// Opens one file as a netlist in the SPICE editor.
    fn open_as_netlist(&mut self, path: &str);

    /// Opens one file as a schematic.
    fn open_as_schematic(&mut self, path: &str);

    /// Remembers the first chosen file's directory for next time.
    fn remember_directory(&mut self, path: &str);

    /// Clears the chooser's file name.
    fn clear_chooser(&mut self);
}

/// Implements Ghidra function `FUN_01c75560` at `0x01C75560`.
///
/// Handles `MainMenu.mnFile.Open.OnClick` and
/// `TopToolBar.GeneralTools.DFOpenBtn.OnClick` ("&Open...").
///
/// Opens one or more files.
///
/// The chooser allows a multiple selection, and every file is opened — except
/// on the netlist filter, where only the first is, because that path opens the
/// SPICE editor rather than a schematic window.
///
/// The directory is remembered from the *first* chosen file whichever path ran,
/// and the chooser's file name is cleared afterwards so the next Open starts
/// empty rather than showing the last selection.
///
/// Returns how many files were opened.
pub fn open_documents(host: &mut impl OpenDocumentHost) -> usize {
    let Some(files) = host.choose_files() else {
        return 0;
    };

    let opened = if host.filter_index() == OPEN_NETLIST_FILTER_INDEX {
        files.first().map_or(0, |first| {
            host.open_as_netlist(first);
            1
        })
    } else {
        for file in &files {
            host.open_as_schematic(file);
        }
        files.len()
    };

    if let Some(first) = files.first() {
        host.remember_directory(first);
    }
    host.clear_chooser();
    opened
}

pub trait ListCellPainterHost {
    /// Reports whether this row has a glyph to draw.
    fn row_has_glyph(&mut self, row: i32) -> bool;

    /// Reports whether the row uses the second of the two glyphs.
    fn row_uses_alternate_glyph(&mut self, row: i32) -> bool;

    /// The size of one glyph, as width and height.
    fn glyph_size(&mut self, alternate: bool) -> (i32, i32);

    /// Draws the glyph at one point.
    fn draw_glyph(&mut self, alternate: bool, at: (i32, i32));

    /// The text of one row.
    fn row_text(&mut self, row: i32) -> String;

    /// Draws the text at one point.
    fn draw_text(&mut self, at: (i32, i32), text: &str);
}

/// The gap the recovered painters leave to the left of a glyph.
pub const GLYPH_LEFT_MARGIN: i32 = 2;

/// The gap the recovered painters leave between a glyph and its text.
pub const GLYPH_TEXT_GAP: i32 = 4;

/// Implements Ghidra functions `FUN_01c7d4b0` at `0x01C7D4B0` and
/// `FUN_01c7cd90` at `0x01C7CD90`.
///
/// Draws one row of the circuit-version combo box or the exam task grid, with a
/// glyph in front of its text.
///
/// Both painters lay the row out the same way — glyph two pixels in, text four
/// pixels past the glyph's width — and the recovered text offset uses the
/// glyph's width whether or not a glyph was actually drawn, so a row without one
/// is still indented as if it had.
///
/// The task grid paints only its fixed column, which is why its own guard is on
/// the column rather than the row.
///
/// Returns whether a glyph was drawn.
pub fn draw_list_row(
    row: i32,
    bounds: (i32, i32, i32, i32),
    host: &mut impl ListCellPainterHost,
) -> bool {
    let (left, top, _, _) = bounds;

    let drawn = if host.row_has_glyph(row) {
        let alternate = host.row_uses_alternate_glyph(row);
        host.draw_glyph(alternate, (left + GLYPH_LEFT_MARGIN, top));
        true
    } else {
        false
    };

    let alternate = host.row_uses_alternate_glyph(row);
    let (glyph_width, _) = host.glyph_size(alternate);
    let text = host.row_text(row);
    host.draw_text((left + glyph_width + GLYPH_TEXT_GAP, top), &text);
    drawn
}

#[cfg(test)]
mod suite_and_document_tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Statistics {
        exists: bool,
        opened: Vec<(String, String)>,
    }

    impl TransientStatisticsHost for Statistics {
        fn statistics_path(&mut self) -> String {
            format!(r"C:\TINA\{TRANSIENT_STATISTICS_FILE}")
        }

        fn file_exists(&mut self, _path: &str) -> bool {
            self.exists
        }

        fn open_in_viewer(&mut self, viewer: &str, path: &str) {
            self.opened.push((viewer.to_owned(), path.to_owned()));
        }
    }

    #[test]
    fn the_statistics_file_always_opens_in_notepad() {
        let mut host = Statistics {
            exists: true,
            ..Statistics::default()
        };

        assert!(open_transient_statistics(&mut host));

        assert_eq!(host.opened.len(), 1);
        assert_eq!(host.opened[0].0, STATISTICS_VIEWER);
        assert!(host.opened[0].1.ends_with(STATISTICS_EXTENSION));
    }

    #[test]
    fn a_missing_statistics_file_is_not_reported() {
        let mut host = Statistics::default();

        assert!(!open_transient_statistics(&mut host));
        assert!(host.opened.is_empty());
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum SuiteStep {
        Ensure,
        Show,
        New,
        Build,
        Save,
        Repaint,
    }

    #[derive(Debug, Default)]
    struct Suite {
        accept: bool,
        steps: Vec<SuiteStep>,
    }

    impl ToolSuiteHost for Suite {
        fn ensure_windows(&mut self, _suite: ToolSuite) {
            self.steps.push(SuiteStep::Ensure);
        }

        fn show_main_window(&mut self, _suite: ToolSuite) -> bool {
            self.steps.push(SuiteStep::Show);
            self.accept
        }

        fn new_schematic(&mut self) {
            self.steps.push(SuiteStep::New);
        }

        fn build_result(&mut self) {
            self.steps.push(SuiteStep::Build);
        }

        fn save_settings(&mut self) {
            self.steps.push(SuiteStep::Save);
        }

        fn repaint_canvas(&mut self) {
            self.steps.push(SuiteStep::Repaint);
        }
    }

    #[test]
    fn the_logic_designer_only_opens_its_windows() {
        let mut host = Suite {
            accept: true,
            ..Suite::default()
        };

        assert!(!open_tool_suite(ToolSuite::LogicDesign, &mut host));

        assert_eq!(host.steps, [SuiteStep::Ensure, SuiteStep::Show]);
    }

    #[test]
    fn the_new_filter_designer_starts_a_fresh_sheet_before_building() {
        let mut host = Suite {
            accept: true,
            ..Suite::default()
        };

        assert!(open_tool_suite(ToolSuite::FilterDesignNew, &mut host));

        assert_eq!(
            host.steps,
            [
                SuiteStep::Ensure,
                SuiteStep::Show,
                SuiteStep::New,
                SuiteStep::Build,
                SuiteStep::Save,
                SuiteStep::Repaint,
            ]
        );
    }

    #[test]
    fn a_cancelled_filter_designer_still_repaints() {
        let mut host = Suite::default();

        assert!(!open_tool_suite(ToolSuite::FilterDesignNew, &mut host));

        assert_eq!(
            host.steps,
            [SuiteStep::Ensure, SuiteStep::Show, SuiteStep::Repaint]
        );
    }

    #[derive(Debug, Default)]
    struct Fpga {
        chosen: Option<String>,
        remembered: Vec<String>,
        downloaded: Vec<String>,
    }

    impl FpgaConfigHost for Fpga {
        fn choose_bitstream(&mut self) -> Option<String> {
            self.chosen.clone()
        }

        fn directory_of(&mut self, path: &str) -> String {
            path.rsplit_once('\\')
                .map_or_else(String::new, |(dir, _)| dir.to_owned())
        }

        fn remember_directory(&mut self, directory: &str) {
            self.remembered.push(directory.to_owned());
        }

        fn download(&mut self, path: &str) {
            self.downloaded.push(path.to_owned());
        }
    }

    #[test]
    fn the_chooser_directory_is_remembered_before_the_download() {
        let mut host = Fpga {
            chosen: Some(r"C:\fpga\top.bit".to_owned()),
            ..Fpga::default()
        };

        assert!(configure_fpga(&mut host));

        assert_eq!(host.remembered, [r"C:\fpga".to_owned()]);
        assert_eq!(host.downloaded, [r"C:\fpga\top.bit".to_owned()]);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum TitleStep {
        Create,
        Add,
        Changed,
        Select,
        Place,
        Draw,
    }

    #[derive(Debug, Default)]
    struct TitleBlock {
        chosen: Option<String>,
        steps: Vec<TitleStep>,
    }

    impl TitleBlockHost for TitleBlock {
        fn choose_title_block(&mut self) -> Option<String> {
            self.chosen.clone()
        }

        fn create_title_block(&mut self, _path: &str) -> ObjectHandle {
            self.steps.push(TitleStep::Create);
            ObjectHandle(1)
        }

        fn add_to_document(&mut self, _object: ObjectHandle) {
            self.steps.push(TitleStep::Add);
        }

        fn mark_document_changed(&mut self) {
            self.steps.push(TitleStep::Changed);
        }

        fn select_only(&mut self, _object: ObjectHandle) {
            self.steps.push(TitleStep::Select);
        }

        fn place_at_origin(&mut self, _object: ObjectHandle) {
            self.steps.push(TitleStep::Place);
        }

        fn draw_and_finish(&mut self, _object: ObjectHandle) {
            self.steps.push(TitleStep::Draw);
        }
    }

    #[test]
    fn a_title_block_goes_straight_to_the_origin() {
        let mut host = TitleBlock {
            chosen: Some("frame.tsm".to_owned()),
            ..TitleBlock::default()
        };

        assert!(insert_title_block(&mut host));

        assert_eq!(
            host.steps,
            [
                TitleStep::Create,
                TitleStep::Add,
                TitleStep::Changed,
                TitleStep::Select,
                TitleStep::Place,
                TitleStep::Draw,
            ]
        );
    }

    #[derive(Debug, Default)]
    struct CloudDownload {
        chosen: Option<String>,
        opens: bool,
        failures: Vec<String>,
        local: Vec<String>,
    }

    impl CloudDownloadHost for CloudDownload {
        fn choose_cloud_document(&mut self) -> Option<String> {
            self.chosen.clone()
        }

        fn open_downloaded(&mut self, _name: &str) -> bool {
            self.opens
        }

        fn report_failure(&mut self, name: &str) {
            self.failures.push(name.to_owned());
        }

        fn mark_document_changed(&mut self) {}

        fn adopt_document(&mut self) {}

        fn set_local_name(&mut self, name: &str) {
            self.local.push(name.to_owned());
        }

        fn refresh_editor(&mut self) {}
    }

    #[test]
    fn a_downloaded_circuit_is_named_with_the_recovered_extension() {
        let mut host = CloudDownload {
            chosen: Some("Amplifier".to_owned()),
            opens: true,
            ..CloudDownload::default()
        };

        assert!(download_from_cloud(&mut host));

        assert_eq!(host.local, ["Amplifier.CLOUDTSC".to_owned()]);
        assert!(host.failures.is_empty());
    }

    #[test]
    fn a_download_that_cannot_be_opened_is_reported() {
        let mut host = CloudDownload {
            chosen: Some("Amplifier".to_owned()),
            ..CloudDownload::default()
        };

        assert!(!download_from_cloud(&mut host));

        assert_eq!(host.failures, ["Amplifier".to_owned()]);
    }

    #[derive(Debug, Default)]
    struct SaveAll {
        unchanged: bool,
        count: i32,
        seen: Vec<i32>,
        dirty: Vec<i32>,
        saved: Vec<i32>,
        restores: usize,
    }

    impl SaveAllHost for SaveAll {
        fn settings_unchanged(&mut self) -> bool {
            self.unchanged
        }

        fn mark_document_changed(&mut self) {}

        fn store_settings(&mut self) {}

        fn document_count(&mut self) -> i32 {
            self.count
        }

        fn already_saved(&mut self, index: i32) -> bool {
            self.seen.contains(&index)
        }

        fn mark_saved(&mut self, index: i32) {
            self.seen.push(index);
        }

        fn needs_saving(&mut self, index: i32) -> bool {
            self.dirty.contains(&index)
        }

        fn save_document(&mut self, index: i32) {
            self.saved.push(index);
        }

        fn restore_settings(&mut self) {
            self.restores += 1;
        }
    }

    #[test]
    fn save_all_saves_only_the_documents_that_need_it() {
        let mut host = SaveAll {
            unchanged: true,
            count: 4,
            dirty: vec![1, 3],
            ..SaveAll::default()
        };

        assert_eq!(save_all(&mut host), 2);

        assert_eq!(host.saved, [1, 3]);
        assert_eq!(host.restores, 1);
    }

    #[test]
    fn save_all_restores_the_editor_settings_even_with_nothing_to_save() {
        let mut host = SaveAll {
            unchanged: true,
            count: 2,
            ..SaveAll::default()
        };

        assert_eq!(save_all(&mut host), 0);
        assert_eq!(host.restores, 1);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum LanguageStep {
        Check,
        Set(String),
        Load,
        Captions,
        Setting(String, String),
        Script(String),
    }

    #[derive(Debug, Default)]
    struct Language {
        code: String,
        steps: Vec<LanguageStep>,
    }

    impl LanguageHost for Language {
        fn check_entry(&mut self) {
            self.steps.push(LanguageStep::Check);
        }

        fn entry_language_code(&mut self) -> String {
            self.code.clone()
        }

        fn set_language_code(&mut self, code: &str) {
            self.steps.push(LanguageStep::Set(code.to_owned()));
        }

        fn load_language(&mut self) {
            self.steps.push(LanguageStep::Load);
        }

        fn reapply_captions(&mut self) {
            self.steps.push(LanguageStep::Captions);
        }

        fn write_setting(&mut self, _section: &str, key: &str, value: &str) {
            self.steps
                .push(LanguageStep::Setting(key.to_owned(), value.to_owned()));
        }

        fn record_script(&mut self, call: &str) {
            self.steps.push(LanguageStep::Script(call.to_owned()));
        }
    }

    #[test]
    fn a_language_change_is_applied_written_and_recorded() {
        let mut host = Language {
            code: "DEU".to_owned(),
            ..Language::default()
        };

        assert_eq!(select_language(&mut host), "DEU");

        assert_eq!(
            host.steps,
            [
                LanguageStep::Check,
                LanguageStep::Set("DEU".to_owned()),
                LanguageStep::Load,
                LanguageStep::Captions,
                LanguageStep::Setting(LANGUAGE_SETTINGS_KEY.to_owned(), "DEU".to_owned()),
                LanguageStep::Script("SetLanguage(DEU".to_owned()),
            ]
        );
    }

    #[derive(Debug, Default)]
    struct Unlock {
        locked: bool,
        stored: String,
        typed: Option<String>,
        cleared: usize,
        failures: Vec<String>,
    }

    impl BlockUnlockHost for Unlock {
        fn selection_is_locked(&mut self) -> bool {
            self.locked
        }

        fn stored_password(&mut self) -> String {
            self.stored.clone()
        }

        fn ask_password(&mut self, _caption: &str, _prompt: &str) -> Option<String> {
            self.typed.clone()
        }

        fn clear_lock(&mut self) {
            self.cleared += 1;
        }

        fn mark_document_changed(&mut self) {}

        fn report_failure(&mut self, message: &str) {
            self.failures.push(message.to_owned());
        }
    }

    #[test]
    fn the_unlock_password_is_compared_case_insensitively() {
        let mut host = Unlock {
            locked: true,
            stored: "Secret".to_owned(),
            typed: Some("sECRET".to_owned()),
            ..Unlock::default()
        };

        assert!(unlock_block(&mut host));

        assert_eq!(host.cleared, 1);
        assert!(host.failures.is_empty());
    }

    #[test]
    fn a_wrong_password_is_reported_but_a_blank_one_is_not() {
        let mut wrong = Unlock {
            locked: true,
            stored: "Secret".to_owned(),
            typed: Some("other".to_owned()),
            ..Unlock::default()
        };
        assert!(!unlock_block(&mut wrong));
        assert_eq!(wrong.failures, [UNLOCK_FAILED_MESSAGE.to_owned()]);

        let mut blank = Unlock {
            locked: true,
            stored: "Secret".to_owned(),
            typed: Some("   ".to_owned()),
            ..Unlock::default()
        };
        assert!(!unlock_block(&mut blank));
        assert!(blank.failures.is_empty());
    }

    #[test]
    fn the_unlock_failure_message_keeps_its_carriage_return() {
        assert!(UNLOCK_FAILED_MESSAGE.contains('\r'));
        assert!(!UNLOCK_FAILED_MESSAGE.contains('\n'));
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum OptionStep {
        Reapply,
        All,
        Rack,
        Fallback,
        Diagram,
    }

    #[derive(Debug, Default)]
    struct Options {
        before: String,
        after: String,
        accept: bool,
        loads: bool,
        queries: usize,
        steps: Vec<OptionStep>,
    }

    impl EditorOptionsHost for Options {
        fn current_scheme(&mut self) -> String {
            self.queries += 1;
            if self.queries == 1 {
                self.before.clone()
            } else {
                self.after.clone()
            }
        }

        fn show_options(&mut self) -> bool {
            self.accept
        }

        fn reapply_options(&mut self) {
            self.steps.push(OptionStep::Reapply);
        }

        fn reapply_to_all_windows(&mut self) {
            self.steps.push(OptionStep::All);
        }

        fn load_scheme(&mut self, _scheme: &str) -> bool {
            self.loads
        }

        fn repaint_rack(&mut self) {
            self.steps.push(OptionStep::Rack);
        }

        fn repaint_with_fallback(&mut self) {
            self.steps.push(OptionStep::Fallback);
        }

        fn refresh_diagram_window(&mut self) {
            self.steps.push(OptionStep::Diagram);
        }
    }

    #[test]
    fn an_unchanged_scheme_only_repaints_the_rack() {
        let mut host = Options {
            before: "Dark".to_owned(),
            after: "Dark".to_owned(),
            accept: true,
            ..Options::default()
        };

        assert!(edit_editor_options(&mut host));

        assert_eq!(
            host.steps,
            [OptionStep::Reapply, OptionStep::All, OptionStep::Rack]
        );
    }

    #[test]
    fn a_scheme_that_will_not_load_falls_back_and_repaints_everything() {
        let mut host = Options {
            before: "Dark".to_owned(),
            after: "Missing".to_owned(),
            accept: true,
            ..Options::default()
        };

        assert!(edit_editor_options(&mut host));

        assert_eq!(
            host.steps,
            [
                OptionStep::Reapply,
                OptionStep::All,
                OptionStep::Fallback,
                OptionStep::Rack,
                OptionStep::Diagram,
            ]
        );
    }

    #[test]
    fn a_cancelled_options_dialog_changes_nothing() {
        let mut host = Options::default();

        assert!(!edit_editor_options(&mut host));
        assert!(host.steps.is_empty());
    }

    #[derive(Debug, Default)]
    struct OpenDocs {
        files: Option<Vec<String>>,
        filter: i32,
        netlists: Vec<String>,
        schematics: Vec<String>,
        remembered: Vec<String>,
        clears: usize,
    }

    impl OpenDocumentHost for OpenDocs {
        fn choose_files(&mut self) -> Option<Vec<String>> {
            self.files.clone()
        }

        fn filter_index(&mut self) -> i32 {
            self.filter
        }

        fn open_as_netlist(&mut self, path: &str) {
            self.netlists.push(path.to_owned());
        }

        fn open_as_schematic(&mut self, path: &str) {
            self.schematics.push(path.to_owned());
        }

        fn remember_directory(&mut self, path: &str) {
            self.remembered.push(path.to_owned());
        }

        fn clear_chooser(&mut self) {
            self.clears += 1;
        }
    }

    #[test]
    fn every_chosen_schematic_is_opened() {
        let mut host = OpenDocs {
            files: Some(vec!["a.tsc".to_owned(), "b.tsc".to_owned()]),
            ..OpenDocs::default()
        };

        assert_eq!(open_documents(&mut host), 2);

        assert_eq!(host.schematics.len(), 2);
        assert_eq!(host.remembered, ["a.tsc".to_owned()]);
        assert_eq!(host.clears, 1);
    }

    #[test]
    fn the_netlist_filter_opens_only_the_first_file() {
        let mut host = OpenDocs {
            files: Some(vec!["a.cir".to_owned(), "b.cir".to_owned()]),
            filter: OPEN_NETLIST_FILTER_INDEX,
            ..OpenDocs::default()
        };

        assert_eq!(open_documents(&mut host), 1);

        assert_eq!(host.netlists, ["a.cir".to_owned()]);
        assert!(host.schematics.is_empty());
    }

    #[test]
    fn a_cancelled_open_dialog_opens_nothing() {
        let mut host = OpenDocs::default();

        assert_eq!(open_documents(&mut host), 0);
        assert_eq!(host.clears, 0);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum RowStep {
        Glyph(bool, (i32, i32)),
        Text((i32, i32), String),
    }

    #[derive(Debug, Default)]
    struct Rows {
        glyph: bool,
        alternate: bool,
        steps: Vec<RowStep>,
    }

    impl ListCellPainterHost for Rows {
        fn row_has_glyph(&mut self, _row: i32) -> bool {
            self.glyph
        }

        fn row_uses_alternate_glyph(&mut self, _row: i32) -> bool {
            self.alternate
        }

        fn glyph_size(&mut self, _alternate: bool) -> (i32, i32) {
            (16, 16)
        }

        fn draw_glyph(&mut self, alternate: bool, at: (i32, i32)) {
            self.steps.push(RowStep::Glyph(alternate, at));
        }

        fn row_text(&mut self, row: i32) -> String {
            format!("row {row}")
        }

        fn draw_text(&mut self, at: (i32, i32), text: &str) {
            self.steps.push(RowStep::Text(at, text.to_owned()));
        }
    }

    #[test]
    fn a_row_with_a_glyph_puts_it_two_pixels_in() {
        let mut host = Rows {
            glyph: true,
            ..Rows::default()
        };

        assert!(draw_list_row(1, (10, 20, 200, 40), &mut host));

        assert_eq!(
            host.steps,
            [
                RowStep::Glyph(false, (12, 20)),
                RowStep::Text((30, 20), "row 1".to_owned()),
            ]
        );
    }

    #[test]
    fn a_row_without_a_glyph_is_still_indented_as_if_it_had_one() {
        let mut host = Rows::default();

        assert!(!draw_list_row(1, (10, 20, 200, 40), &mut host));

        assert_eq!(host.steps, [RowStep::Text((30, 20), "row 1".to_owned())]);
    }
}

/// The message the recovered handler posts to the canvas on a rack drag.
pub const CANVAS_MOVE_MESSAGE: u16 = 0x0200;

pub trait RackHoverHost {
    /// Reports whether the running command is the rack's own class.
    fn rack_command_running(&mut self) -> bool;

    /// Converts a rack point to the canvas's own coordinates.
    fn to_canvas_point(&mut self, x: i32, y: i32) -> (i32, i32);

    /// Posts a synthetic pointer move to the canvas at one point.
    fn post_canvas_move(&mut self, message: u16, at: (i32, i32));

    /// The rack column under a point.
    fn column_at(&mut self, x: i32, y: i32) -> i32;

    /// The column that is currently hot-tracked, if any.
    fn hot_column(&mut self) -> Option<i32>;

    /// Redraws one column with the given draw state.
    fn redraw_column(&mut self, column: i32, state: u8);
}

/// The draw state the recovered handler redraws the cell being left with.
pub const LEAVING_CELL_STATE: u8 = 0;

/// The draw state the recovered handler redraws the cell being entered with.
pub const ENTERING_CELL_STATE: u8 = 0x10;

/// Implements Ghidra function `FUN_01c9cc00` at `0x01C9CC00`.
///
/// Handles `ComponentPanel.PartGrid.OnMouseMove`.
///
/// Moves the rack's hot-track highlight, or forwards the move to the canvas
/// while a part is being dragged out.
///
/// Only two cells are redrawn on a move — the one being left and the one being
/// entered — rather than the whole rack, which is what keeps dragging along a
/// long rack cheap.
///
/// Returns whether the move was forwarded to the canvas.
pub fn part_grid_moved(x: i32, y: i32, host: &mut impl RackHoverHost) -> bool {
    if host.rack_command_running() {
        let at = host.to_canvas_point(x, y);
        host.post_canvas_move(CANVAS_MOVE_MESSAGE, at);
        return true;
    }

    let column = host.column_at(x, y);
    if let Some(previous) = host.hot_column() {
        if previous != column {
            host.redraw_column(previous, LEAVING_CELL_STATE);
        }
    }

    host.redraw_column(column, ENTERING_CELL_STATE);
    false
}

/// The resource string shown when an analysis is not allowed on this circuit.
pub const ANALYSIS_NOT_ALLOWED_KEY: &str = "Sched_c.sAnaNotAllowedTxt";

pub trait DigitalAnalysisHost {
    /// Prepares the document for a digital analysis.
    fn prepare(&mut self);

    /// Reports whether the digital engine is licensed at all.
    fn engine_available(&mut self) -> bool;

    /// Runs the fallback the unlicensed build uses instead.
    fn run_unavailable_fallback(&mut self);

    /// Reports whether the circuit is one the analysis can run on.
    fn circuit_supported(&mut self) -> bool;

    /// Shows the "not allowed" message.
    fn report_not_allowed(&mut self, key: &str);

    /// Cleans up after a refused analysis.
    fn abandon(&mut self);

    /// Runs the analysis.
    fn run(&mut self);

    /// Records the name of the command just run.
    fn record_last_command(&mut self, name: &str);
}

/// Implements Ghidra function `FUN_01c768c0` at `0x01C768C0`.
///
/// Handles `MainMenu.mnAnalysis.DigitalTransient.OnClick`
/// ("&Digital Timing Analysis...").
///
/// Runs the digital timing analysis, if the circuit allows it.
///
/// The circuit test is two questions asked the other way round from how they
/// read: the analysis proceeds only when *neither* holds, so a circuit that is
/// digital in either sense is refused with the recovered message rather than
/// analysed.
///
/// A build without the digital engine takes an entirely separate path and never
/// reaches the message or the replay name.
///
/// Returns whether the analysis ran.
pub fn run_digital_transient(host: &mut impl DigitalAnalysisHost) -> bool {
    host.prepare();

    if !host.engine_available() {
        host.run_unavailable_fallback();
        return false;
    }

    if !host.circuit_supported() {
        host.report_not_allowed(ANALYSIS_NOT_ALLOWED_KEY);
        host.abandon();
        return false;
    }

    host.run();
    host.record_last_command("DigitalTransientClick");
    true
}

/// The power roles the canvas popup assigns to a component.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PowerRole {
    /// `PopupPower.pmPwrNone`.
    None,
    /// `PopupPower.pmPwrSource` ("Power source").
    Source,
    /// `PopupPower.pmPwrSink` ("Power sink").
    Sink,
    /// `PopupPower.pmPwrLoss` ("Power loss").
    Loss,
}

pub trait PowerRoleHost {
    /// Reports whether anything is selected.
    fn anything_selected(&mut self) -> bool;

    /// Arms the pick-a-component command carrying this role.
    fn arm_role_picker(&mut self, role: PowerRole);

    /// The number of objects in the document.
    fn object_count(&mut self) -> i32;

    /// Reports whether one object can carry a power role.
    fn object_takes_power_role(&mut self, index: i32) -> bool;

    /// Repaints one object's own area, before and after the change.
    fn invalidate_object(&mut self, index: i32);

    /// Writes one object's power role.
    fn set_object_role(&mut self, index: i32, role: PowerRole);

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);
}

/// Implements Ghidra function `FUN_01c89950` at `0x01C89950`.
///
/// Handles the four `PopupPower` entries.
///
/// Assigns a power role, either to the selection or to the next component the
/// user picks.
///
/// With nothing selected the entry arms a picker instead of doing nothing,
/// which is how the role gets applied to a component the popup was not opened
/// over.
///
/// With a selection every object that can carry a role gets it, and each one's
/// area is invalidated *both* before and after the change — the role is drawn
/// as part of the component, so the old and new bounds can differ.
///
/// Returns whether any object was changed.
pub fn assign_power_role(role: PowerRole, host: &mut impl PowerRoleHost) -> bool {
    if !host.anything_selected() {
        host.arm_role_picker(role);
        return false;
    }

    let mut changed = false;
    let count = host.object_count();
    for index in 0..count {
        if !host.object_takes_power_role(index) {
            continue;
        }

        host.invalidate_object(index);
        host.set_object_role(index, role);
        host.invalidate_object(index);
        changed = true;
    }

    if changed {
        host.mark_document_changed();
    }
    changed
}

pub trait SelectionEditHost {
    /// The row the selection list has selected, or `None`.
    fn selected_row(&mut self) -> Option<i32>;

    /// The number of rows in the list.
    fn row_count(&mut self) -> i32;

    /// The kind and text of one row.
    fn row_contents(&mut self, row: i32) -> (i32, String);

    /// Runs the editor seeded with one row's contents, returning the new ones.
    fn show_editor(&mut self, kind: i32, text: &str) -> Option<(i32, String)>;

    /// Writes a row back.
    fn set_row(&mut self, row: i32, kind: i32, text: &str);

    /// Refreshes the selection panel.
    fn refresh(&mut self);
}

/// Implements Ghidra function `FUN_01c7d0f0` at `0x01C7D0F0`.
///
/// Handles `FaultManager.nbExMan.tsExManSelection.GroupBox5.SelModifyBtn.OnClick`
/// ("Edit...").
///
/// Edits the selected entry of the exam's selection list.
///
/// The editor is seeded with the row's current contents — unlike the Add
/// button, which clears them — and the row index is checked against the list's
/// current length first, so a stale selection edits nothing.
///
/// Returns whether the row was changed.
pub fn edit_exam_selection(host: &mut impl SelectionEditHost) -> bool {
    let Some(row) = host.selected_row() else {
        return false;
    };
    if row < 0 || row >= host.row_count() {
        return false;
    }

    let (kind, text) = host.row_contents(row);
    let Some((new_kind, new_text)) = host.show_editor(kind, &text) else {
        return false;
    };

    host.set_row(row, new_kind, &new_text);
    host.refresh();
    true
}

pub trait PropertiesHost {
    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Reports whether the guard is overridden for this editor state.
    fn guard_overridden(&mut self) -> bool;

    /// The object currently selected, if any.
    fn selected_object(&mut self) -> Option<ObjectHandle>;

    /// The object under the pointer, if any.
    fn object_under_pointer(&mut self) -> Option<ObjectHandle>;

    /// Reports whether the object is a macro that opens its own editor.
    fn opens_own_editor(&mut self, object: ObjectHandle) -> bool;

    /// Opens that editor.
    fn open_own_editor(&mut self, object: ObjectHandle);

    /// Opens an undo record covering the edit.
    fn begin_undo_record(&mut self, object: ObjectHandle);

    /// Runs the object's own property dialog.
    ///
    /// `from_menu` is the recovered flag that distinguishes the menu entry from
    /// a canvas double-click.
    fn show_properties(&mut self, object: ObjectHandle, from_menu: bool) -> bool;

    /// Rolls the undo record back.
    fn discard_undo_record(&mut self);

    /// Commits the undo record.
    fn commit_undo_record(&mut self);

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);

    /// Redraws the object.
    fn redraw_object(&mut self, object: ObjectHandle);

    /// Reports whether the editor also steps into the object afterwards.
    fn enters_after_edit(&mut self) -> bool;

    /// Steps into the object.
    fn enter_object(&mut self);
}

/// Implements Ghidra function `FUN_01c77050` at `0x01C77050`.
///
/// Handles `MainMenu.Edit.mnEditAttributes.OnClick` and
/// `SchPopup.pmProperties.OnClick` ("Pr&operties...").
///
/// Opens the property dialog for the selection, or for whatever is under the
/// pointer when nothing is selected.
///
/// A macro that carries its own editor opens that instead and skips the
/// property dialog entirely — which is why Properties on a macro can look like
/// a completely different command.
///
/// The undo record is opened before the dialog and rolled back when it is
/// cancelled, so a cancelled edit leaves no step in the history.
///
/// Returns whether anything was edited.
pub fn edit_properties(from_menu: bool, host: &mut impl PropertiesHost) -> bool {
    if host.editing_blocked() && !host.guard_overridden() {
        return false;
    }

    let object = match host.selected_object() {
        Some(object) => object,
        None => match host.object_under_pointer() {
            Some(object) => object,
            None => return false,
        },
    };

    if host.opens_own_editor(object) {
        host.open_own_editor(object);
        return false;
    }

    host.begin_undo_record(object);

    if !host.show_properties(object, from_menu) {
        host.discard_undo_record();
        return false;
    }

    host.mark_document_changed();
    host.commit_undo_record();
    host.redraw_object(object);

    if host.enters_after_edit() {
        host.enter_object();
    }
    true
}

/// The script call the PCB designer logs before it takes over.
pub const STOP_ANALYSIS_SCRIPT: &str = "StopAnalysis()";

/// The extension the netlist handed to the PCB designer carries.
pub const PCB_NETLIST_EXTENSION: &str = ".NET";

pub trait PcbDesignerHost {
    /// Reports whether the designer is already running.
    fn already_running(&mut self) -> bool;

    /// Reports whether the editor is ready to hand over.
    fn ready(&mut self) -> bool;

    /// Queues the command to be retried once the editor settles.
    fn retry_later(&mut self);

    /// Stops any analysis and logs the script call.
    fn stop_analysis(&mut self, script: &str);

    /// Runs the designer's setup dialog, reporting whether it was accepted.
    fn show_setup(&mut self) -> bool;

    /// Writes the netlist the designer reads, reporting whether it could.
    fn write_netlist(&mut self, extension: &str) -> bool;

    /// Launches the designer.
    fn launch(&mut self);
}

/// Implements Ghidra function `FUN_01c99370` at `0x01C99370`.
///
/// Handles `TopToolBar.EditorTools.sbStartPCBDesigner.OnClick` (hinted "PCB
/// Design"), and the shared command the Tools menu's PCB entry reaches.
///
/// Hands the circuit to the PCB designer.
///
/// An editor that is not ready re-queues the whole command rather than
/// refusing, the same way the Formula entry does. Once it is ready the analysis
/// is stopped first — and logged as a script call, so a recorded session stops
/// it too.
///
/// The netlist is written before the designer launches, and a netlist that
/// cannot be written stops the launch.
///
/// Returns whether the designer was launched.
pub fn start_pcb_designer(host: &mut impl PcbDesignerHost) -> bool {
    if host.already_running() {
        return false;
    }

    if !host.ready() {
        host.retry_later();
        return false;
    }

    host.stop_analysis(STOP_ANALYSIS_SCRIPT);

    if !host.show_setup() {
        return false;
    }

    if !host.write_netlist(PCB_NETLIST_EXTENSION) {
        return false;
    }

    host.launch();
    true
}

pub trait ConverterHost {
    /// Runs the converter chooser, returning the circuits it selected.
    fn choose_converters(&mut self) -> Option<Vec<String>>;

    /// Opens one converter circuit.
    fn open_circuit(&mut self, path: &str);

    /// Collects the analyses the chooser configured for it.
    fn collect_analyses(&mut self) -> i32;

    /// Runs those analyses.
    fn run_analyses(&mut self);

    /// Repaints the schematic canvas.
    fn repaint_canvas(&mut self);
}

/// Implements Ghidra function `FUN_01c76610` at `0x01C76610`.
///
/// Handles `MainMenu.mnFile.ConvertersMnu.OnClick` ("Open SMPS Converter...").
///
/// Opens one or more SMPS converter circuits and runs the analyses the chooser
/// configured for each.
///
/// Every chosen circuit is opened and analysed in turn, and a circuit with no
/// analyses configured is still opened — so the chooser doubles as a way of
/// simply opening several converters at once.
///
/// Returns how many circuits were opened.
pub fn open_converters(host: &mut impl ConverterHost) -> usize {
    let Some(circuits) = host.choose_converters() else {
        return 0;
    };

    for circuit in &circuits {
        host.open_circuit(circuit);
        if host.collect_analyses() > 0 {
            host.run_analyses();
        }
    }

    if !circuits.is_empty() {
        host.repaint_canvas();
    }
    circuits.len()
}

pub trait ReplayHost {
    /// The name of the command last recorded for replay.
    fn last_command(&mut self) -> Option<String>;

    /// The names of the editor's published commands, in declaration order.
    fn command_names(&mut self) -> Vec<String>;

    /// Invokes the command at one index.
    fn invoke_command(&mut self, index: usize);
}

/// Implements Ghidra function `FUN_01c7db90` at `0x01C7DB90`.
///
/// Handles `TopToolBar.EditorTools.sbRunLastSimulation.OnClick` (hinted "Run
/// last simulation"), and the shared command the Analysis menu's entry reaches.
///
/// Replays whichever analysis last recorded its name.
///
/// The replay is by *published method name* rather than by an index or a
/// pointer — the recovered handler enumerates the editor's published methods
/// and invokes the one whose name matches. That is why every analysis records a
/// handler name rather than a number, and why an analysis that never recorded
/// one simply cannot be replayed.
///
/// The whole list is walked even after a match, so a duplicate name would run
/// twice.
///
/// Returns how many commands were invoked.
pub fn run_last_simulation(host: &mut impl ReplayHost) -> usize {
    let Some(wanted) = host.last_command() else {
        return 0;
    };

    let names = host.command_names();
    let mut invoked = 0;
    for (index, name) in names.iter().enumerate() {
        if *name == wanted {
            host.invoke_command(index);
            invoked += 1;
        }
    }
    invoked
}

/// The picture formats the export dialog offers, in recovered filter order.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PictureFormat {
    /// Filter index 1.
    Emf,
    /// Filter index 2.
    Bmp,
    /// Filter index 3.
    Jpg,
    /// Filter index 4.
    Gif,
    /// Filter index 5.
    Png,
}

impl PictureFormat {
    /// The format for one filter index, if it names one.
    #[must_use]
    pub const fn from_filter_index(index: i32) -> Option<Self> {
        match index {
            1 => Some(Self::Emf),
            2 => Some(Self::Bmp),
            3 => Some(Self::Jpg),
            4 => Some(Self::Gif),
            5 => Some(Self::Png),
            _ => None,
        }
    }

    /// The recovered extension, leading dot included.
    #[must_use]
    pub const fn extension(self) -> &'static str {
        match self {
            Self::Emf => ".EMF",
            Self::Bmp => ".BMP",
            Self::Jpg => ".JPG",
            Self::Gif => ".GIF",
            Self::Png => ".PNG",
        }
    }
}

/// Rewrites a file name for one picture filter.
///
/// Part of Ghidra function `FUN_01c81c60` at `0x01C81C60`.
///
/// The stem keeps whatever the user typed and only the extension is replaced,
/// so switching the filter after typing a name does not lose the name. A filter
/// index outside the five leaves the name untouched.
#[must_use]
pub fn picture_file_name(current: &str, filter_index: i32) -> String {
    let stem = current.rsplit_once('.').map_or(current, |(stem, _)| stem);

    PictureFormat::from_filter_index(filter_index).map_or_else(
        || current.to_owned(),
        |format| format!("{stem}{}", format.extension()),
    )
}

pub trait PictureExportHost {
    /// The file name the dialog currently holds.
    fn current_name(&mut self) -> String;

    /// The filter index the user has just chosen.
    fn filter_index(&mut self) -> i32;

    /// Writes the dialog's file name.
    fn set_name(&mut self, name: &str);

    /// Updates the dialog's own file-name control to match.
    fn sync_dialog_control(&mut self, name: &str);
}

/// Implements Ghidra function `FUN_01c81c60` at `0x01C81C60`.
///
/// Handles `PictureExportDialog.OnTypeChange`.
///
/// Rewrites the file name's extension when the user changes the picture format.
///
/// The name is written twice — once into the dialog's own property and once
/// into the underlying control — because the common dialog does not pick the
/// first up while it is open.
///
/// Returns the new name.
pub fn picture_type_changed(host: &mut impl PictureExportHost) -> String {
    let current = host.current_name();
    let index = host.filter_index();

    let name = picture_file_name(&current, index);
    host.set_name(&name);
    host.sync_dialog_control(&name);
    name
}

pub trait InteractiveModeHost2 {
    /// The pressed state of the `ToolInteractive` button.
    fn button_pressed(&mut self) -> bool;

    /// Reports whether the editor is mid-analysis.
    fn analysis_running(&mut self) -> bool;

    /// Tries to leave interactive mode, reporting whether it could.
    fn leave_interactive(&mut self) -> bool;

    /// Presses the button back down, because leaving was refused.
    fn restore_button(&mut self);

    /// Tears the interactive session down.
    fn tear_down(&mut self);

    /// Records that interactive mode is off, and swaps the two menu entries.
    fn set_interactive(&mut self, active: bool);

    /// Reports whether a probe command is installed.
    fn probe_command_installed(&mut self) -> bool;

    /// Cancels the running command.
    fn cancel_active_command(&mut self);

    /// Prepares every object for interactive mode.
    fn prepare_objects(&mut self);

    /// Reports whether the application is running a script.
    fn scripting_active(&mut self) -> bool;

    /// Reports whether the editor is ready to start interactive mode.
    fn ready_to_start(&mut self) -> bool;

    /// Queues the command to be retried once the editor settles.
    fn retry_later(&mut self);

    /// Starts the interactive session.
    fn start_interactive(&mut self);

    /// Re-applies the editor's enabled states.
    fn refresh_command_states(&mut self);
}

/// Implements Ghidra function `FUN_01c87e40` at `0x01C87E40`.
///
/// Handles `TopToolBar.EditorTools.ToolInteractive.OnClick` (hinted
/// "Interactive mode On/Off"), and the shared command the menu entries reach.
///
/// Turns interactive mode on or off.
///
/// The button has already moved by the time this runs, so its new state is what
/// decides the direction. Leaving can be *refused* — by a running analysis, for
/// instance — and the button is then pressed back down, which is the one place
/// in the editor where a button springs back.
///
/// Starting is deferred rather than refused when the editor is not ready: the
/// whole command re-queues itself, like the Formula entry and the PCB designer.
///
/// Returns whether interactive mode is now on.
pub fn toggle_interactive_mode(host: &mut impl InteractiveModeHost2) -> bool {
    if host.button_pressed() {
        if !host.scripting_active() {
            host.prepare_objects();
        }
        host.set_interactive(true);

        if host.analysis_running() {
            host.refresh_command_states();
            return true;
        }

        if host.ready_to_start() {
            host.start_interactive();
        } else {
            host.retry_later();
        }
        host.refresh_command_states();
        return true;
    }

    if host.analysis_running() {
        if !host.leave_interactive() {
            host.restore_button();
            return true;
        }
        host.tear_down();
    }

    host.set_interactive(false);

    if host.probe_command_installed() {
        host.cancel_active_command();
    }

    host.refresh_command_states();
    false
}

/// The placeholder variant name the component search stores.
pub const AUTOMATIC_VARIANT_NAME: &str = "<Auto>";

/// The recovered component id that stands for a macro.
pub const MACRO_COMPONENT: i32 = 0x39;

pub trait FindComponentHost {
    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Runs the search dialog, returning the component id it chose.
    ///
    /// The recovered handler treats a result of 2 or below as "nothing chosen",
    /// which covers both cancel and the two ordinary modal results.
    fn search(&mut self) -> Option<i32>;

    /// The chosen entry's name.
    fn chosen_name(&mut self) -> String;

    /// Reports whether the chosen entry is a macro rather than a part.
    fn chosen_is_macro(&mut self) -> bool;

    /// Records the pending insertion's name and variant.
    fn set_pending(&mut self, name: &str, variant: &str);

    /// Records the macro path the insertion places.
    fn set_pending_macro_path(&mut self);

    /// Inserts one component id.
    fn insert_component(&mut self, id: i32);

    /// Reports whether the parts explorer is open and should follow.
    fn explorer_open(&mut self) -> bool;

    /// Moves the explorer to the chosen entry.
    fn reveal_in_explorer(&mut self);
}

/// Implements Ghidra function `FUN_01c979b0` at `0x01C979B0`.
///
/// Handles `MainMenu.mnTools.FindComponent.OnClick` ("&Find Component..."),
/// and the shared command the tool bar's search button reaches.
///
/// Searches for a component and arms its insertion.
///
/// The variant is always recorded as the recovered placeholder rather than the
/// entry's own, so a search always inserts the automatic variant however
/// specific the search was.
///
/// A macro found by the search is inserted as the macro component with its path
/// pending, exactly as though it had been chosen from the macro dialog.
///
/// When the parts explorer is open it is moved to the result as well, so the
/// search doubles as a way of navigating the explorer.
///
/// Returns whether an insertion was armed.
pub fn find_component(host: &mut impl FindComponentHost) -> bool {
    if host.editing_blocked() {
        return false;
    }

    let Some(id) = host.search() else {
        return false;
    };

    let name = host.chosen_name();
    host.set_pending(&name, AUTOMATIC_VARIANT_NAME);

    if host.chosen_is_macro() {
        host.set_pending_macro_path();
        host.insert_component(MACRO_COMPONENT);
    } else {
        host.insert_component(id);
    }

    if host.explorer_open() {
        host.reveal_in_explorer();
    }
    true
}

pub trait DeleteHost {
    /// Reports whether the selection is a component backed by editable code
    /// whose editor is open.
    fn code_editor_target(&mut self) -> bool;

    /// Deletes from the code editor.
    fn delete_in_code_editor(&mut self);

    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Reports whether the editor is ready to delete now.
    fn ready(&mut self) -> bool;

    /// Queues the command to be retried once the editor settles.
    fn retry_later(&mut self);

    /// Reports whether the application is running a script.
    fn scripting_active(&mut self) -> bool;

    /// Reports whether anything is selected.
    fn anything_selected(&mut self) -> bool;

    /// Opens an undo record covering the deletion.
    fn begin_undo_record(&mut self);

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);

    /// Deletes every selected object.
    fn delete_selection(&mut self);

    /// Reconnects whatever the deletion left dangling.
    fn reconnect(&mut self);

    /// Commits the undo record.
    fn commit_undo_record(&mut self);

    /// The object under the pointer that can be deleted on its own, if any.
    fn deletable_object_under_pointer(&mut self) -> bool;

    /// Counts the deletion against the exam score.
    fn count_against_exam(&mut self);

    /// Reports whether the exam is counting deletions.
    fn exam_counting(&mut self) -> bool;
}

/// Implements Ghidra function `FUN_01c76c90` at `0x01C76C90`.
///
/// Handles `MainMenu.Edit.mnDelete.OnClick`, `SchPopup.pmDelete.OnClick` and
/// `TopToolBar.EditorTools.ToolDelete.OnClick` ("&Delete").
///
/// Deletes the selection, or the object under the pointer when nothing is
/// selected.
///
/// A deletion with a selection is one undo step covering everything, followed by
/// a reconnect pass — so removing a component from the middle of a wire joins
/// the wire back up rather than leaving two stubs.
///
/// The single-object path is different: it opens no undo record at all, which
/// is why deleting one object under the pointer cannot be undone.
///
/// While an exam is counting deletions the single-object path also increments
/// the exam's counter.
///
/// Returns whether anything was deleted.
pub fn delete_selection(host: &mut impl DeleteHost) -> bool {
    if host.code_editor_target() {
        host.delete_in_code_editor();
        return true;
    }

    if host.editing_blocked() {
        return false;
    }

    if !host.ready() {
        host.retry_later();
        return false;
    }

    if host.scripting_active() {
        return false;
    }

    if host.anything_selected() {
        host.begin_undo_record();
        host.mark_document_changed();
        host.delete_selection();
        host.reconnect();
        host.commit_undo_record();
        return true;
    }

    if !host.deletable_object_under_pointer() {
        return false;
    }

    if host.exam_counting() {
        host.count_against_exam();
    }
    host.mark_document_changed();
    host.reconnect();
    true
}

#[cfg(test)]
mod command_batch_tests {
    use super::*;

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum RackStep {
        Post((i32, i32)),
        Redraw(i32, u8),
    }

    #[derive(Debug, Default)]
    struct Rack {
        running: bool,
        hot: Option<i32>,
        column: i32,
        steps: Vec<RackStep>,
    }

    impl RackHoverHost for Rack {
        fn rack_command_running(&mut self) -> bool {
            self.running
        }

        fn to_canvas_point(&mut self, x: i32, y: i32) -> (i32, i32) {
            (x + 1, y + 2)
        }

        fn post_canvas_move(&mut self, _message: u16, at: (i32, i32)) {
            self.steps.push(RackStep::Post(at));
        }

        fn column_at(&mut self, _x: i32, _y: i32) -> i32 {
            self.column
        }

        fn hot_column(&mut self) -> Option<i32> {
            self.hot
        }

        fn redraw_column(&mut self, column: i32, state: u8) {
            self.steps.push(RackStep::Redraw(column, state));
        }
    }

    #[test]
    fn a_drag_out_of_the_rack_is_forwarded_to_the_canvas() {
        let mut host = Rack {
            running: true,
            ..Rack::default()
        };

        assert!(part_grid_moved(10, 20, &mut host));

        assert_eq!(host.steps, [RackStep::Post((11, 22))]);
    }

    #[test]
    fn moving_between_cells_redraws_only_those_two() {
        let mut host = Rack {
            hot: Some(2),
            column: 5,
            ..Rack::default()
        };

        assert!(!part_grid_moved(10, 20, &mut host));

        assert_eq!(
            host.steps,
            [
                RackStep::Redraw(2, LEAVING_CELL_STATE),
                RackStep::Redraw(5, ENTERING_CELL_STATE),
            ]
        );
    }

    #[test]
    fn moving_inside_one_cell_redraws_only_it() {
        let mut host = Rack {
            hot: Some(5),
            column: 5,
            ..Rack::default()
        };

        assert!(!part_grid_moved(10, 20, &mut host));

        assert_eq!(host.steps, [RackStep::Redraw(5, ENTERING_CELL_STATE)]);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum DigitalStep {
        Prepare,
        Fallback,
        NotAllowed,
        Abandon,
        Run,
        Record,
    }

    #[derive(Debug, Default)]
    struct Digital {
        engine: bool,
        supported: bool,
        steps: Vec<DigitalStep>,
    }

    impl DigitalAnalysisHost for Digital {
        fn prepare(&mut self) {
            self.steps.push(DigitalStep::Prepare);
        }

        fn engine_available(&mut self) -> bool {
            self.engine
        }

        fn run_unavailable_fallback(&mut self) {
            self.steps.push(DigitalStep::Fallback);
        }

        fn circuit_supported(&mut self) -> bool {
            self.supported
        }

        fn report_not_allowed(&mut self, _key: &str) {
            self.steps.push(DigitalStep::NotAllowed);
        }

        fn abandon(&mut self) {
            self.steps.push(DigitalStep::Abandon);
        }

        fn run(&mut self) {
            self.steps.push(DigitalStep::Run);
        }

        fn record_last_command(&mut self, _name: &str) {
            self.steps.push(DigitalStep::Record);
        }
    }

    #[test]
    fn an_unsupported_circuit_is_refused_with_the_recovered_message() {
        let mut host = Digital {
            engine: true,
            ..Digital::default()
        };

        assert!(!run_digital_transient(&mut host));

        assert_eq!(
            host.steps,
            [
                DigitalStep::Prepare,
                DigitalStep::NotAllowed,
                DigitalStep::Abandon
            ]
        );
    }

    #[test]
    fn a_build_without_the_engine_takes_the_fallback() {
        let mut host = Digital {
            supported: true,
            ..Digital::default()
        };

        assert!(!run_digital_transient(&mut host));

        assert_eq!(host.steps, [DigitalStep::Prepare, DigitalStep::Fallback]);
    }

    #[test]
    fn a_supported_circuit_runs_and_records_itself() {
        let mut host = Digital {
            engine: true,
            supported: true,
            ..Digital::default()
        };

        assert!(run_digital_transient(&mut host));

        assert_eq!(
            host.steps,
            [DigitalStep::Prepare, DigitalStep::Run, DigitalStep::Record]
        );
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum PowerStep {
        Arm(PowerRole),
        Invalidate(i32),
        Set(i32, PowerRole),
        Changed,
    }

    #[derive(Debug, Default)]
    struct Power {
        selected: bool,
        count: i32,
        takes: Vec<i32>,
        steps: Vec<PowerStep>,
    }

    impl PowerRoleHost for Power {
        fn anything_selected(&mut self) -> bool {
            self.selected
        }

        fn arm_role_picker(&mut self, role: PowerRole) {
            self.steps.push(PowerStep::Arm(role));
        }

        fn object_count(&mut self) -> i32 {
            self.count
        }

        fn object_takes_power_role(&mut self, index: i32) -> bool {
            self.takes.contains(&index)
        }

        fn invalidate_object(&mut self, index: i32) {
            self.steps.push(PowerStep::Invalidate(index));
        }

        fn set_object_role(&mut self, index: i32, role: PowerRole) {
            self.steps.push(PowerStep::Set(index, role));
        }

        fn mark_document_changed(&mut self) {
            self.steps.push(PowerStep::Changed);
        }
    }

    #[test]
    fn with_nothing_selected_the_role_arms_a_picker() {
        let mut host = Power::default();

        assert!(!assign_power_role(PowerRole::Sink, &mut host));

        assert_eq!(host.steps, [PowerStep::Arm(PowerRole::Sink)]);
    }

    #[test]
    fn each_changed_object_is_invalidated_on_both_sides() {
        let mut host = Power {
            selected: true,
            count: 3,
            takes: vec![1],
            ..Power::default()
        };

        assert!(assign_power_role(PowerRole::Source, &mut host));

        assert_eq!(
            host.steps,
            [
                PowerStep::Invalidate(1),
                PowerStep::Set(1, PowerRole::Source),
                PowerStep::Invalidate(1),
                PowerStep::Changed,
            ]
        );
    }

    #[test]
    fn a_selection_with_nothing_that_takes_a_role_changes_nothing() {
        let mut host = Power {
            selected: true,
            count: 3,
            ..Power::default()
        };

        assert!(!assign_power_role(PowerRole::Loss, &mut host));
        assert!(host.steps.is_empty());
    }

    #[derive(Debug, Default)]
    struct SelectionEdit {
        selected: Option<i32>,
        rows: i32,
        edited: Option<(i32, String)>,
        seeds: Vec<(i32, String)>,
        written: Vec<(i32, i32, String)>,
    }

    impl SelectionEditHost for SelectionEdit {
        fn selected_row(&mut self) -> Option<i32> {
            self.selected
        }

        fn row_count(&mut self) -> i32 {
            self.rows
        }

        fn row_contents(&mut self, row: i32) -> (i32, String) {
            (row, format!("row {row}"))
        }

        fn show_editor(&mut self, kind: i32, text: &str) -> Option<(i32, String)> {
            self.seeds.push((kind, text.to_owned()));
            self.edited.clone()
        }

        fn set_row(&mut self, row: i32, kind: i32, text: &str) {
            self.written.push((row, kind, text.to_owned()));
        }

        fn refresh(&mut self) {}
    }

    #[test]
    fn the_edit_dialog_is_seeded_with_the_row_it_edits() {
        let mut host = SelectionEdit {
            selected: Some(2),
            rows: 4,
            edited: Some((9, "new".to_owned())),
            ..SelectionEdit::default()
        };

        assert!(edit_exam_selection(&mut host));

        assert_eq!(host.seeds, [(2, "row 2".to_owned())]);
        assert_eq!(host.written, [(2, 9, "new".to_owned())]);
    }

    #[test]
    fn a_stale_selection_edits_nothing() {
        let mut host = SelectionEdit {
            selected: Some(9),
            rows: 4,
            ..SelectionEdit::default()
        };

        assert!(!edit_exam_selection(&mut host));
        assert!(host.seeds.is_empty());
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum PropStep {
        OwnEditor,
        Begin,
        Show(bool),
        Discard,
        Commit,
        Changed,
        Redraw,
        Enter,
    }

    #[derive(Debug, Default)]
    #[allow(clippy::struct_excessive_bools)]
    struct Props {
        blocked: bool,
        overridden: bool,
        selected: Option<ObjectHandle>,
        under: Option<ObjectHandle>,
        own_editor: bool,
        accept: bool,
        enters: bool,
        steps: Vec<PropStep>,
    }

    impl PropertiesHost for Props {
        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn guard_overridden(&mut self) -> bool {
            self.overridden
        }

        fn selected_object(&mut self) -> Option<ObjectHandle> {
            self.selected
        }

        fn object_under_pointer(&mut self) -> Option<ObjectHandle> {
            self.under
        }

        fn opens_own_editor(&mut self, _object: ObjectHandle) -> bool {
            self.own_editor
        }

        fn open_own_editor(&mut self, _object: ObjectHandle) {
            self.steps.push(PropStep::OwnEditor);
        }

        fn begin_undo_record(&mut self, _object: ObjectHandle) {
            self.steps.push(PropStep::Begin);
        }

        fn show_properties(&mut self, _object: ObjectHandle, from_menu: bool) -> bool {
            self.steps.push(PropStep::Show(from_menu));
            self.accept
        }

        fn discard_undo_record(&mut self) {
            self.steps.push(PropStep::Discard);
        }

        fn commit_undo_record(&mut self) {
            self.steps.push(PropStep::Commit);
        }

        fn mark_document_changed(&mut self) {
            self.steps.push(PropStep::Changed);
        }

        fn redraw_object(&mut self, _object: ObjectHandle) {
            self.steps.push(PropStep::Redraw);
        }

        fn enters_after_edit(&mut self) -> bool {
            self.enters
        }

        fn enter_object(&mut self) {
            self.steps.push(PropStep::Enter);
        }
    }

    #[test]
    fn properties_edits_the_selection_and_commits_one_undo_step() {
        let mut host = Props {
            selected: Some(ObjectHandle(1)),
            accept: true,
            ..Props::default()
        };

        assert!(edit_properties(true, &mut host));

        assert_eq!(
            host.steps,
            [
                PropStep::Begin,
                PropStep::Show(true),
                PropStep::Changed,
                PropStep::Commit,
                PropStep::Redraw,
            ]
        );
    }

    #[test]
    fn a_cancelled_property_dialog_leaves_no_undo_step() {
        let mut host = Props {
            selected: Some(ObjectHandle(1)),
            ..Props::default()
        };

        assert!(!edit_properties(false, &mut host));

        assert_eq!(
            host.steps,
            [PropStep::Begin, PropStep::Show(false), PropStep::Discard]
        );
    }

    #[test]
    fn a_macro_with_its_own_editor_skips_the_property_dialog() {
        let mut host = Props {
            selected: Some(ObjectHandle(1)),
            own_editor: true,
            accept: true,
            ..Props::default()
        };

        assert!(!edit_properties(true, &mut host));

        assert_eq!(host.steps, [PropStep::OwnEditor]);
    }

    #[test]
    fn properties_falls_back_to_the_object_under_the_pointer() {
        let mut host = Props {
            under: Some(ObjectHandle(2)),
            accept: true,
            ..Props::default()
        };

        assert!(edit_properties(true, &mut host));
        assert!(host.steps.contains(&PropStep::Commit));
    }

    #[test]
    fn a_blocked_editor_can_still_edit_when_the_guard_is_overridden() {
        let mut blocked = Props {
            blocked: true,
            selected: Some(ObjectHandle(1)),
            accept: true,
            ..Props::default()
        };
        assert!(!edit_properties(true, &mut blocked));

        let mut overridden = Props {
            blocked: true,
            overridden: true,
            selected: Some(ObjectHandle(1)),
            accept: true,
            ..Props::default()
        };
        assert!(edit_properties(true, &mut overridden));
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum PcbStep {
        Retry,
        Stop,
        Setup,
        Netlist,
        Launch,
    }

    #[derive(Debug, Default)]
    #[allow(clippy::struct_excessive_bools)]
    struct Pcb {
        running: bool,
        ready: bool,
        accept: bool,
        netlist: bool,
        steps: Vec<PcbStep>,
    }

    impl PcbDesignerHost for Pcb {
        fn already_running(&mut self) -> bool {
            self.running
        }

        fn ready(&mut self) -> bool {
            self.ready
        }

        fn retry_later(&mut self) {
            self.steps.push(PcbStep::Retry);
        }

        fn stop_analysis(&mut self, _script: &str) {
            self.steps.push(PcbStep::Stop);
        }

        fn show_setup(&mut self) -> bool {
            self.steps.push(PcbStep::Setup);
            self.accept
        }

        fn write_netlist(&mut self, _extension: &str) -> bool {
            self.steps.push(PcbStep::Netlist);
            self.netlist
        }

        fn launch(&mut self) {
            self.steps.push(PcbStep::Launch);
        }
    }

    #[test]
    fn an_editor_that_is_not_ready_re_queues_the_pcb_designer() {
        let mut host = Pcb::default();

        assert!(!start_pcb_designer(&mut host));

        assert_eq!(host.steps, [PcbStep::Retry]);
    }

    #[test]
    fn a_netlist_that_cannot_be_written_stops_the_launch() {
        let mut host = Pcb {
            ready: true,
            accept: true,
            ..Pcb::default()
        };

        assert!(!start_pcb_designer(&mut host));

        assert_eq!(
            host.steps,
            [PcbStep::Stop, PcbStep::Setup, PcbStep::Netlist]
        );
    }

    #[test]
    fn the_pcb_designer_stops_the_analysis_before_it_takes_over() {
        let mut host = Pcb {
            ready: true,
            accept: true,
            netlist: true,
            ..Pcb::default()
        };

        assert!(start_pcb_designer(&mut host));

        assert_eq!(
            host.steps,
            [
                PcbStep::Stop,
                PcbStep::Setup,
                PcbStep::Netlist,
                PcbStep::Launch
            ]
        );
    }

    #[derive(Debug, Default)]
    struct Converters {
        chosen: Option<Vec<String>>,
        analyses: i32,
        opened: Vec<String>,
        runs: usize,
        repaints: usize,
    }

    impl ConverterHost for Converters {
        fn choose_converters(&mut self) -> Option<Vec<String>> {
            self.chosen.clone()
        }

        fn open_circuit(&mut self, path: &str) {
            self.opened.push(path.to_owned());
        }

        fn collect_analyses(&mut self) -> i32 {
            self.analyses
        }

        fn run_analyses(&mut self) {
            self.runs += 1;
        }

        fn repaint_canvas(&mut self) {
            self.repaints += 1;
        }
    }

    #[test]
    fn every_chosen_converter_is_opened_and_analysed() {
        let mut host = Converters {
            chosen: Some(vec!["buck.tsc".to_owned(), "boost.tsc".to_owned()]),
            analyses: 2,
            ..Converters::default()
        };

        assert_eq!(open_converters(&mut host), 2);

        assert_eq!(host.opened.len(), 2);
        assert_eq!(host.runs, 2);
        assert_eq!(host.repaints, 1);
    }

    #[test]
    fn a_converter_with_no_analyses_is_still_opened() {
        let mut host = Converters {
            chosen: Some(vec!["buck.tsc".to_owned()]),
            ..Converters::default()
        };

        assert_eq!(open_converters(&mut host), 1);
        assert_eq!(host.runs, 0);
    }

    #[derive(Debug, Default)]
    struct Replay {
        last: Option<String>,
        names: Vec<String>,
        invoked: Vec<usize>,
    }

    impl ReplayHost for Replay {
        fn last_command(&mut self) -> Option<String> {
            self.last.clone()
        }

        fn command_names(&mut self) -> Vec<String> {
            self.names.clone()
        }

        fn invoke_command(&mut self, index: usize) {
            self.invoked.push(index);
        }
    }

    #[test]
    fn the_replay_matches_a_published_method_by_name() {
        let mut host = Replay {
            last: Some("NoiseClick".to_owned()),
            names: vec![
                "SomethingElse".to_owned(),
                "NoiseClick".to_owned(),
                "Another".to_owned(),
            ],
            ..Replay::default()
        };

        assert_eq!(run_last_simulation(&mut host), 1);
        assert_eq!(host.invoked, [1]);
    }

    #[test]
    fn nothing_recorded_means_nothing_to_replay() {
        let mut host = Replay {
            names: vec!["NoiseClick".to_owned()],
            ..Replay::default()
        };

        assert_eq!(run_last_simulation(&mut host), 0);
        assert!(host.invoked.is_empty());
    }

    #[test]
    fn the_whole_list_is_walked_even_after_a_match() {
        let mut host = Replay {
            last: Some("Dup".to_owned()),
            names: vec!["Dup".to_owned(), "Dup".to_owned()],
            ..Replay::default()
        };

        assert_eq!(run_last_simulation(&mut host), 2);
    }

    #[test]
    fn each_picture_filter_names_its_own_extension() {
        for (index, extension) in [
            (1, ".EMF"),
            (2, ".BMP"),
            (3, ".JPG"),
            (4, ".GIF"),
            (5, ".PNG"),
        ] {
            let format = PictureFormat::from_filter_index(index).expect("a known filter");
            assert_eq!(format.extension(), extension);
        }
        assert_eq!(PictureFormat::from_filter_index(6), None);
    }

    #[test]
    fn changing_the_filter_keeps_the_typed_stem() {
        assert_eq!(picture_file_name("circuit.EMF", 5), "circuit.PNG");
        assert_eq!(picture_file_name("circuit", 2), "circuit.BMP");
    }

    #[test]
    fn an_unknown_filter_leaves_the_name_untouched() {
        assert_eq!(picture_file_name("circuit.EMF", 9), "circuit.EMF");
    }

    #[derive(Debug, Default)]
    struct Picture {
        name: String,
        filter: i32,
        written: Vec<String>,
        synced: Vec<String>,
    }

    impl PictureExportHost for Picture {
        fn current_name(&mut self) -> String {
            self.name.clone()
        }

        fn filter_index(&mut self) -> i32 {
            self.filter
        }

        fn set_name(&mut self, name: &str) {
            self.written.push(name.to_owned());
        }

        fn sync_dialog_control(&mut self, name: &str) {
            self.synced.push(name.to_owned());
        }
    }

    #[test]
    fn the_new_name_is_written_to_both_places() {
        let mut host = Picture {
            name: "sheet.EMF".to_owned(),
            filter: 4,
            ..Picture::default()
        };

        assert_eq!(picture_type_changed(&mut host), "sheet.GIF");

        assert_eq!(host.written, ["sheet.GIF".to_owned()]);
        assert_eq!(host.synced, ["sheet.GIF".to_owned()]);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum ModeStep {
        Prepare,
        Set(bool),
        Start,
        Retry,
        Restore,
        TearDown,
        Cancel,
        Refresh,
    }

    #[derive(Debug, Default)]
    #[allow(clippy::struct_excessive_bools)]
    struct Mode {
        pressed: bool,
        analysis: bool,
        can_leave: bool,
        probe: bool,
        scripting: bool,
        ready: bool,
        steps: Vec<ModeStep>,
    }

    impl InteractiveModeHost2 for Mode {
        fn button_pressed(&mut self) -> bool {
            self.pressed
        }

        fn analysis_running(&mut self) -> bool {
            self.analysis
        }

        fn leave_interactive(&mut self) -> bool {
            self.can_leave
        }

        fn restore_button(&mut self) {
            self.steps.push(ModeStep::Restore);
        }

        fn tear_down(&mut self) {
            self.steps.push(ModeStep::TearDown);
        }

        fn set_interactive(&mut self, active: bool) {
            self.steps.push(ModeStep::Set(active));
        }

        fn probe_command_installed(&mut self) -> bool {
            self.probe
        }

        fn cancel_active_command(&mut self) {
            self.steps.push(ModeStep::Cancel);
        }

        fn prepare_objects(&mut self) {
            self.steps.push(ModeStep::Prepare);
        }

        fn scripting_active(&mut self) -> bool {
            self.scripting
        }

        fn ready_to_start(&mut self) -> bool {
            self.ready
        }

        fn retry_later(&mut self) {
            self.steps.push(ModeStep::Retry);
        }

        fn start_interactive(&mut self) {
            self.steps.push(ModeStep::Start);
        }

        fn refresh_command_states(&mut self) {
            self.steps.push(ModeStep::Refresh);
        }
    }

    #[test]
    fn starting_interactive_mode_prepares_the_objects_first() {
        let mut host = Mode {
            pressed: true,
            ready: true,
            ..Mode::default()
        };

        assert!(toggle_interactive_mode(&mut host));

        assert_eq!(
            host.steps,
            [
                ModeStep::Prepare,
                ModeStep::Set(true),
                ModeStep::Start,
                ModeStep::Refresh,
            ]
        );
    }

    #[test]
    fn an_editor_that_is_not_ready_re_queues_the_start() {
        let mut host = Mode {
            pressed: true,
            ..Mode::default()
        };

        assert!(toggle_interactive_mode(&mut host));
        assert!(host.steps.contains(&ModeStep::Retry));
    }

    #[test]
    fn a_running_script_skips_preparing_the_objects() {
        let mut host = Mode {
            pressed: true,
            scripting: true,
            ready: true,
            ..Mode::default()
        };

        assert!(toggle_interactive_mode(&mut host));
        assert!(!host.steps.contains(&ModeStep::Prepare));
    }

    #[test]
    fn a_refused_exit_springs_the_button_back_down() {
        let mut host = Mode {
            analysis: true,
            ..Mode::default()
        };

        assert!(toggle_interactive_mode(&mut host));

        assert_eq!(host.steps, [ModeStep::Restore]);
    }

    #[test]
    fn leaving_interactive_mode_cancels_an_armed_probe() {
        let mut host = Mode {
            analysis: true,
            can_leave: true,
            probe: true,
            ..Mode::default()
        };

        assert!(!toggle_interactive_mode(&mut host));

        assert_eq!(
            host.steps,
            [
                ModeStep::TearDown,
                ModeStep::Set(false),
                ModeStep::Cancel,
                ModeStep::Refresh,
            ]
        );
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum FindStep {
        Pending(String, String),
        MacroPath,
        Insert(i32),
        Reveal,
    }

    #[derive(Debug, Default)]
    struct Find {
        blocked: bool,
        found: Option<i32>,
        is_macro: bool,
        explorer: bool,
        steps: Vec<FindStep>,
    }

    impl FindComponentHost for Find {
        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn search(&mut self) -> Option<i32> {
            self.found
        }

        fn chosen_name(&mut self) -> String {
            "TL071".to_owned()
        }

        fn chosen_is_macro(&mut self) -> bool {
            self.is_macro
        }

        fn set_pending(&mut self, name: &str, variant: &str) {
            self.steps
                .push(FindStep::Pending(name.to_owned(), variant.to_owned()));
        }

        fn set_pending_macro_path(&mut self) {
            self.steps.push(FindStep::MacroPath);
        }

        fn insert_component(&mut self, id: i32) {
            self.steps.push(FindStep::Insert(id));
        }

        fn explorer_open(&mut self) -> bool {
            self.explorer
        }

        fn reveal_in_explorer(&mut self) {
            self.steps.push(FindStep::Reveal);
        }
    }

    #[test]
    fn a_found_part_is_armed_with_the_automatic_variant() {
        let mut host = Find {
            found: Some(42),
            ..Find::default()
        };

        assert!(find_component(&mut host));

        assert_eq!(
            host.steps,
            [
                FindStep::Pending("TL071".to_owned(), AUTOMATIC_VARIANT_NAME.to_owned()),
                FindStep::Insert(42),
            ]
        );
    }

    #[test]
    fn a_found_macro_is_inserted_as_the_macro_component() {
        let mut host = Find {
            found: Some(42),
            is_macro: true,
            explorer: true,
            ..Find::default()
        };

        assert!(find_component(&mut host));

        assert_eq!(
            host.steps,
            [
                FindStep::Pending("TL071".to_owned(), AUTOMATIC_VARIANT_NAME.to_owned()),
                FindStep::MacroPath,
                FindStep::Insert(MACRO_COMPONENT),
                FindStep::Reveal,
            ]
        );
    }

    #[test]
    fn a_cancelled_search_arms_nothing() {
        let mut host = Find::default();

        assert!(!find_component(&mut host));
        assert!(host.steps.is_empty());
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum DeleteStep {
        Code,
        Retry,
        Begin,
        Changed,
        Delete,
        Reconnect,
        Commit,
        Exam,
    }

    #[derive(Debug, Default)]
    #[allow(clippy::struct_excessive_bools)]
    struct Delete {
        code_target: bool,
        blocked: bool,
        ready: bool,
        scripting: bool,
        selected: bool,
        under_pointer: bool,
        exam: bool,
        steps: Vec<DeleteStep>,
    }

    impl DeleteHost for Delete {
        fn code_editor_target(&mut self) -> bool {
            self.code_target
        }

        fn delete_in_code_editor(&mut self) {
            self.steps.push(DeleteStep::Code);
        }

        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn ready(&mut self) -> bool {
            self.ready
        }

        fn retry_later(&mut self) {
            self.steps.push(DeleteStep::Retry);
        }

        fn scripting_active(&mut self) -> bool {
            self.scripting
        }

        fn anything_selected(&mut self) -> bool {
            self.selected
        }

        fn begin_undo_record(&mut self) {
            self.steps.push(DeleteStep::Begin);
        }

        fn mark_document_changed(&mut self) {
            self.steps.push(DeleteStep::Changed);
        }

        fn delete_selection(&mut self) {
            self.steps.push(DeleteStep::Delete);
        }

        fn reconnect(&mut self) {
            self.steps.push(DeleteStep::Reconnect);
        }

        fn commit_undo_record(&mut self) {
            self.steps.push(DeleteStep::Commit);
        }

        fn deletable_object_under_pointer(&mut self) -> bool {
            self.under_pointer
        }

        fn count_against_exam(&mut self) {
            self.steps.push(DeleteStep::Exam);
        }

        fn exam_counting(&mut self) -> bool {
            self.exam
        }
    }

    #[test]
    fn deleting_a_selection_is_one_undo_step_with_a_reconnect() {
        let mut host = Delete {
            ready: true,
            selected: true,
            ..Delete::default()
        };

        assert!(delete_selection(&mut host));

        assert_eq!(
            host.steps,
            [
                DeleteStep::Begin,
                DeleteStep::Changed,
                DeleteStep::Delete,
                DeleteStep::Reconnect,
                DeleteStep::Commit,
            ]
        );
    }

    #[test]
    fn deleting_one_object_under_the_pointer_opens_no_undo_record() {
        let mut host = Delete {
            ready: true,
            under_pointer: true,
            ..Delete::default()
        };

        assert!(delete_selection(&mut host));

        assert_eq!(host.steps, [DeleteStep::Changed, DeleteStep::Reconnect]);
    }

    #[test]
    fn an_exam_counts_a_single_object_deletion() {
        let mut host = Delete {
            ready: true,
            under_pointer: true,
            exam: true,
            ..Delete::default()
        };

        assert!(delete_selection(&mut host));
        assert!(host.steps.contains(&DeleteStep::Exam));
    }

    #[test]
    fn an_editor_that_is_not_ready_re_queues_the_delete() {
        let mut host = Delete {
            selected: true,
            ..Delete::default()
        };

        assert!(!delete_selection(&mut host));
        assert_eq!(host.steps, [DeleteStep::Retry]);
    }

    #[test]
    fn delete_follows_an_open_code_editor() {
        let mut host = Delete {
            code_target: true,
            ..Delete::default()
        };

        assert!(delete_selection(&mut host));
        assert_eq!(host.steps, [DeleteStep::Code]);
    }
}

pub trait FourierSpectrumHost {
    /// Runs the spectrum analysis, reporting whether it was refused.
    fn refused(&mut self) -> bool;

    /// Creates the result window bound to the document's diagram set.
    fn create_result_window(&mut self) -> bool;

    /// Resets the diagram set before the result is filled in.
    fn reset_diagrams(&mut self);

    /// Applies the configured axis settings to the result window.
    fn apply_axis_settings(&mut self);

    /// Records the name of the command just run.
    fn record_last_command(&mut self, name: &str);
}

/// Implements Ghidra function `FUN_01c92850` at `0x01C92850`.
///
/// Handles `MainMenu.mnAnalysis.FourierAnalysis.FourierSpectrum.OnClick`
/// ("Fourier S&pectrum...").
///
/// Runs the Fourier spectrum analysis and opens its result window.
///
/// The diagram set is reset *after* the result window is built, so the window
/// exists before anything is cleared — and the axis settings are applied only
/// when a window was actually created. The replay name is recorded whether or
/// not that happened, so a spectrum run that produced no window is still
/// repeatable.
///
/// Returns whether the analysis ran.
pub fn run_fourier_spectrum(host: &mut impl FourierSpectrumHost) -> bool {
    if host.refused() {
        return false;
    }

    let created = host.create_result_window();
    host.reset_diagrams();

    if created {
        host.apply_axis_settings();
    }

    host.record_last_command("FourierSpectrumClick");
    true
}

/// The script call the close query logs.
pub const EXIT_PROGRAM_SCRIPT: &str = "ExitProgram()";

pub trait CloseQueryHost {
    /// Records that a close is being attempted.
    fn mark_closing(&mut self);

    /// Reports whether the analysis engine is idle.
    fn engine_idle(&mut self) -> bool;

    /// Reports whether the editor itself is ready to close.
    fn editor_ready(&mut self) -> bool;

    /// Queues the application's own quit for later.
    fn queue_quit(&mut self);

    /// Reports whether the application is running a script.
    fn scripting_active(&mut self) -> bool;

    /// Counts one close attempt.
    fn record_close_attempt(&mut self);

    /// The number of close attempts so far.
    fn close_attempts(&mut self) -> i32;

    /// Logs the exit script call, reporting whether the script handled it.
    fn log_exit_script(&mut self, script: &str) -> bool;

    /// Hands the close to the script engine instead.
    fn defer_to_script(&mut self);

    /// Asks the documents whether they may close.
    fn documents_may_close(&mut self) -> bool;

    /// Logs the exit script call once the close is going ahead.
    fn log_exit_confirmed(&mut self, script: &str);
}

/// The number of close attempts a scripted session needs before it really
/// closes.
pub const SCRIPTED_CLOSE_ATTEMPTS: i32 = 2;

/// Implements Ghidra function `FUN_01c7e500` at `0x01C7E500`.
///
/// Handles `SchematicEditor.OnCloseQuery`.
///
/// Decides whether the editor may close.
///
/// A busy engine or an editor that is not ready refuses the close *and* queues
/// the quit to run again later, so closing during an analysis is deferred
/// rather than cancelled — the window shuts once the analysis finishes.
///
/// Under a script the first close attempt is always refused: the counter has to
/// reach two before the documents are even asked, which is what lets a script
/// intercept its own exit.
///
/// Returns whether the editor may close.
pub fn query_close(host: &mut impl CloseQueryHost) -> bool {
    host.mark_closing();

    let mut allowed = host.engine_idle() && host.editor_ready();

    if !allowed {
        host.queue_quit();
    }

    if host.scripting_active() {
        if allowed {
            host.record_close_attempt();
            if !host.log_exit_script(EXIT_PROGRAM_SCRIPT) {
                host.defer_to_script();
            }
        }

        if host.close_attempts() < SCRIPTED_CLOSE_ATTEMPTS {
            return false;
        }
    }

    allowed = allowed && host.documents_may_close();

    if allowed {
        host.log_exit_confirmed(EXIT_PROGRAM_SCRIPT);
    }
    allowed
}

/// The example groups the Open Examples chooser offers, as recovered.
pub const EXAMPLE_GROUPS: [(&str, &str); 4] = [
    ("User Examples|", r"\User Examples"),
    ("Infineon Examples|", r"\Examples\Infineon"),
    ("TI Examples|", r"\Examples\Texas Instruments"),
    ("Tina Examples|", r"\Examples"),
];

/// The file filter the Open Examples chooser uses.
pub const EXAMPLE_FILTER: &str = "Schematics (*.TSC;*.SCH)|*.TSC;*.SCH";

/// The caption the Open Examples chooser carries.
pub const EXAMPLE_CAPTION: &str = "Open Schematic";

/// The settings name the chooser stores its own state under.
pub const EXAMPLE_DIALOG_NAME: &str = "OpenExamplesDlg";

/// The directory the chooser starts in, relative to the install root.
pub const EXAMPLE_ROOT: &str = r"\Examples";

pub trait OpenExamplesHost {
    /// Runs the example chooser, returning the files it selected.
    fn choose_examples(
        &mut self,
        name: &str,
        caption: &str,
        filter: &str,
        groups: &[(&str, &str)],
    ) -> Option<Vec<String>>;

    /// Opens one example.
    fn open_example(&mut self, path: &str);

    /// Points the ordinary Open dialog at the first example's directory.
    fn seed_open_dialog(&mut self, path: &str);
}

/// Implements Ghidra function `FUN_01c9c3b0` at `0x01C9C3B0`.
///
/// Handles `MainMenu.mnFile.OpenExamples.OnClick` ("Open Examples...").
///
/// Opens one or more example circuits.
///
/// The chooser is given four named example groups so the user can jump between
/// the bundled sets and their own, and the four are compiled in rather than
/// discovered — a fifth vendor's examples would need a new build.
///
/// Every selected file is opened, and the *ordinary* Open dialog is then pointed
/// at the first one's directory, so the next plain Open starts where the
/// examples were.
///
/// Returns how many examples were opened.
pub fn open_examples(host: &mut impl OpenExamplesHost) -> usize {
    let Some(files) = host.choose_examples(
        EXAMPLE_DIALOG_NAME,
        EXAMPLE_CAPTION,
        EXAMPLE_FILTER,
        &EXAMPLE_GROUPS,
    ) else {
        return 0;
    };

    for file in &files {
        host.open_example(file);
    }

    if let Some(first) = files.first() {
        host.seed_open_dialog(first);
    }
    files.len()
}

/// The XML file filter both XML commands use.
pub const XML_FILE_FILTER: &str = "XML File|*.XML";

pub trait XmlExportHost {
    /// Suggests a file name from the open document.
    fn suggested_name(&mut self) -> String;

    /// Runs the save dialog with the XML filter, returning the chosen path.
    fn choose_save_path(&mut self, filter: &str, suggested: &str) -> Option<String>;

    /// Builds the XML document from the schematic.
    fn build_xml(&mut self) -> bool;

    /// Writes it to one path.
    fn write_xml(&mut self, path: &str);
}

/// Implements Ghidra function `FUN_01ca30f0` at `0x01CA30F0`.
///
/// Handles `MainMenu.mnFile.Export.ExportXML.OnClick` ("XML...").
///
/// Exports the schematic as XML.
///
/// The save dialog is seeded with a name derived from the open document rather
/// than left as the last export's, so exporting two circuits in a row does not
/// offer to overwrite the first.
///
/// Returns whether a file was written.
pub fn export_xml(host: &mut impl XmlExportHost) -> bool {
    let suggested = host.suggested_name();

    let Some(path) = host.choose_save_path(XML_FILE_FILTER, &suggested) else {
        return false;
    };

    if !host.build_xml() {
        return false;
    }

    host.write_xml(&path);
    true
}

pub trait XmlImportHost {
    /// Runs the open dialog with the XML filter, returning the chosen path.
    fn choose_open_path(&mut self, filter: &str) -> Option<String>;

    /// Reads one XML file, reporting whether it parsed.
    fn read_xml(&mut self, path: &str) -> bool;

    /// Builds a document from what was read, if there is anything to build.
    fn build_document(&mut self) -> bool;

    /// Adopts the new document as the editor's current one.
    fn adopt_document(&mut self);

    /// Refreshes the editor around the new document.
    fn refresh_editor(&mut self);
}

/// Implements Ghidra function `FUN_01ca35c0` at `0x01CA35C0`.
///
/// Handles `MainMenu.mnFile.Import.ImportXML.OnClick` ("XML...").
///
/// Imports a schematic from XML.
///
/// Three things have to succeed in turn — the file parses, it describes a
/// circuit, and the document can be built from it — and any of them failing
/// leaves the editor untouched with no message.
///
/// Returns whether a document was imported.
pub fn import_xml(host: &mut impl XmlImportHost) -> bool {
    let Some(path) = host.choose_open_path(XML_FILE_FILTER) else {
        return false;
    };

    if !host.read_xml(&path) || !host.build_document() {
        return false;
    }

    host.adopt_document();
    host.refresh_editor();
    true
}

/// The file extension the Altium schematic export writes.
pub const ALTIUM_EXTENSION: &str = "schdoc";

/// The filter the Altium export dialog uses.
pub const ALTIUM_FILTER: &str = "Altium schematic|*.schdoc";

/// The library the Altium export needs.
pub const ALTIUM_LIBRARY: &str = "altium.dll";

pub trait AltiumExportHost {
    /// Reports whether an export is already running.
    fn already_running(&mut self) -> bool;

    /// Suggests a file name from the open document.
    fn suggested_name(&mut self, extension: &str) -> String;

    /// Runs the save dialog, returning the chosen path.
    fn choose_save_path(&mut self, filter: &str, suggested: &str) -> Option<String>;

    /// Reports whether the export library is present.
    fn library_present(&mut self, library: &str) -> bool;

    /// Builds the schematic model the library reads.
    fn build_model(&mut self) -> bool;

    /// Runs the export.
    fn export(&mut self, path: &str);
}

/// Implements Ghidra function `FUN_01c968d0` at `0x01C968D0`.
///
/// Handles `MainMenu.mnFile.Export.ExportAltiumSchematic.OnClick`
/// ("Altium schematic...").
///
/// Exports the schematic in Altium's format.
///
/// The export library is looked for *after* the user has chosen a file name,
/// so a build without it still walks the user through the save dialog before
/// doing nothing.
///
/// Returns whether a file was written.
pub fn export_altium_schematic(host: &mut impl AltiumExportHost) -> bool {
    if host.already_running() {
        return false;
    }

    let suggested = host.suggested_name(ALTIUM_EXTENSION);

    let Some(path) = host.choose_save_path(ALTIUM_FILTER, &suggested) else {
        return false;
    };

    if !host.library_present(ALTIUM_LIBRARY) || !host.build_model() {
        return false;
    }

    host.export(&path);
    true
}

/// The inset the task bar leaves inside a pressed item.
pub const TASK_BAR_PRESSED_INSET: i32 = 2;

/// The Delphi system colour `clBtnHighlight`.
pub const TASK_BAR_HIGHLIGHT: u32 = 0xFF00_0014;

/// The Delphi system colour `cl3DDkShadow`.
pub const TASK_BAR_DARK_SHADOW: u32 = 0xFF00_0012;

/// How one task bar item is framed.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct TaskBarItem {
    /// The edge drawn along the top and left.
    pub top_left_edge: u32,
    /// The edge drawn along the bottom and right.
    pub bottom_right_edge: u32,
    /// How far the icon is nudged down and right.
    pub content_offset: i32,
}

/// Decides how one task bar item is framed.
///
/// Part of Ghidra function `FUN_01ca0f80` at `0x01CA0F80`.
///
/// The active window's item is drawn sunk and inset, everything else raised —
/// the same convention the component rack uses for its selected cell.
#[must_use]
pub const fn task_bar_item(active: bool) -> TaskBarItem {
    if active {
        TaskBarItem {
            top_left_edge: TASK_BAR_DARK_SHADOW,
            bottom_right_edge: TASK_BAR_HIGHLIGHT,
            content_offset: TASK_BAR_PRESSED_INSET,
        }
    } else {
        TaskBarItem {
            top_left_edge: TASK_BAR_HIGHLIGHT,
            bottom_right_edge: TASK_BAR_DARK_SHADOW,
            content_offset: 1,
        }
    }
}

pub trait TaskBarPainterHost {
    /// Clears the whole strip.
    fn clear_strip(&mut self);

    /// The number of items the task bar holds.
    fn item_count(&mut self) -> i32;

    /// Reports whether one item's window is the active one.
    fn item_is_active(&mut self, index: i32) -> bool;

    /// Fills a pressed item's inner rectangle.
    fn fill_pressed(&mut self, index: i32);

    /// Frames one item.
    fn frame_item(&mut self, index: i32, item: TaskBarItem);

    /// Draws one item's icon and caption.
    fn draw_item_content(&mut self, index: i32, offset: i32);
}

/// Implements Ghidra function `FUN_01ca0f80` at `0x01CA0F80`.
///
/// Handles `StatusPanel.ButtonPanel.WindowPanel.TaskBarBox.OnPaint`.
///
/// Draws the task bar of open tool windows.
///
/// Every item is drawn on every paint rather than only the ones that changed,
/// because the strip has no per-item invalidation — which is also why the
/// active item is found by comparing against the application's active window
/// rather than from a stored index.
///
/// Returns how many items were drawn.
pub fn paint_task_bar(host: &mut impl TaskBarPainterHost) -> i32 {
    host.clear_strip();

    let count = host.item_count();
    for index in 0..count {
        let active = host.item_is_active(index);
        if active {
            host.fill_pressed(index);
        }

        let item = task_bar_item(active);
        host.frame_item(index, item);
        host.draw_item_content(index, item.content_offset);
    }
    count
}

/// What the macro export dialog's filter index selects.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MacroExportKind {
    /// Filter index 1: the macro as it stands.
    AsIs,
    /// Filter index 2: flattened first.
    Flattened,
    /// Filter index 3: flattened and stripped.
    FlattenedAndStripped,
}

impl MacroExportKind {
    /// The kind for one filter index, if it names one.
    #[must_use]
    pub const fn from_filter_index(index: i32) -> Option<Self> {
        match index {
            1 => Some(Self::AsIs),
            2 => Some(Self::Flattened),
            3 => Some(Self::FlattenedAndStripped),
            _ => None,
        }
    }

    /// Whether the macro is flattened before it is written.
    #[must_use]
    pub const fn flattens(self) -> bool {
        !matches!(self, Self::AsIs)
    }
}

pub trait MacroExportHost {
    /// The selected object, if it is a macro that can be exported.
    fn exportable_macro(&mut self) -> bool;

    /// Runs the save dialog, returning the chosen path and filter index.
    fn choose_save_path(&mut self) -> Option<(String, i32)>;

    /// Reports whether the macro carries its own sub-circuit.
    fn has_subcircuit(&mut self) -> bool;

    /// Prepares the macro's sub-circuit for export.
    fn prepare_subcircuit(&mut self);

    /// Flattens the macro before writing it.
    fn flatten(&mut self);

    /// Writes the macro to one path.
    fn write(&mut self, path: &str, flattened: bool);
}

/// Implements Ghidra function `FUN_01c89df0` at `0x01C89DF0`.
///
/// Handles `MainMenu.mnTools.mnExportMacro.OnClick` ("E&xport Macro...").
///
/// Writes the selected macro to a file.
///
/// The chooser's filter index is what decides how much of the macro's structure
/// survives: the first writes it as it stands, and the other two flatten it
/// first — so the same dialog covers "save this macro" and "save what it
/// expands to".
///
/// An index outside the three writes nothing, which is how a dialog dismissed
/// without a filter is handled.
///
/// Returns whether a file was written.
pub fn export_macro(host: &mut impl MacroExportHost) -> bool {
    if !host.exportable_macro() {
        return false;
    }

    let Some((path, index)) = host.choose_save_path() else {
        return false;
    };

    let Some(kind) = MacroExportKind::from_filter_index(index) else {
        return false;
    };

    if host.has_subcircuit() {
        host.prepare_subcircuit();
    }

    if kind.flattens() {
        host.flatten();
    }

    host.write(&path, kind.flattens());
    true
}

#[cfg(test)]
mod export_and_close_tests {
    use super::*;

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum SpectrumStep {
        Create,
        Reset,
        Axes,
        Record,
    }

    #[derive(Debug, Default)]
    struct Spectrum {
        refused: bool,
        creates: bool,
        steps: Vec<SpectrumStep>,
    }

    impl FourierSpectrumHost for Spectrum {
        fn refused(&mut self) -> bool {
            self.refused
        }

        fn create_result_window(&mut self) -> bool {
            self.steps.push(SpectrumStep::Create);
            self.creates
        }

        fn reset_diagrams(&mut self) {
            self.steps.push(SpectrumStep::Reset);
        }

        fn apply_axis_settings(&mut self) {
            self.steps.push(SpectrumStep::Axes);
        }

        fn record_last_command(&mut self, _name: &str) {
            self.steps.push(SpectrumStep::Record);
        }
    }

    #[test]
    fn the_spectrum_resets_the_diagrams_after_building_its_window() {
        let mut host = Spectrum {
            creates: true,
            ..Spectrum::default()
        };

        assert!(run_fourier_spectrum(&mut host));

        assert_eq!(
            host.steps,
            [
                SpectrumStep::Create,
                SpectrumStep::Reset,
                SpectrumStep::Axes,
                SpectrumStep::Record,
            ]
        );
    }

    #[test]
    fn a_spectrum_with_no_window_still_records_its_replay_name() {
        let mut host = Spectrum::default();

        assert!(run_fourier_spectrum(&mut host));

        assert_eq!(
            host.steps,
            [
                SpectrumStep::Create,
                SpectrumStep::Reset,
                SpectrumStep::Record
            ]
        );
    }

    #[test]
    fn a_refused_spectrum_does_nothing_at_all() {
        let mut host = Spectrum {
            refused: true,
            ..Spectrum::default()
        };

        assert!(!run_fourier_spectrum(&mut host));
        assert!(host.steps.is_empty());
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum CloseStep {
        Mark,
        Queue,
        Script,
        Defer,
        Confirmed,
    }

    #[derive(Debug, Default)]
    #[allow(clippy::struct_excessive_bools, clippy::struct_field_names)]
    struct Close {
        idle: bool,
        ready: bool,
        scripting: bool,
        script_handles: bool,
        may_close: bool,
        attempts: i32,
        steps: Vec<CloseStep>,
    }

    impl CloseQueryHost for Close {
        fn mark_closing(&mut self) {
            self.steps.push(CloseStep::Mark);
        }

        fn engine_idle(&mut self) -> bool {
            self.idle
        }

        fn editor_ready(&mut self) -> bool {
            self.ready
        }

        fn queue_quit(&mut self) {
            self.steps.push(CloseStep::Queue);
        }

        fn scripting_active(&mut self) -> bool {
            self.scripting
        }

        fn record_close_attempt(&mut self) {
            self.attempts += 1;
        }

        fn close_attempts(&mut self) -> i32 {
            self.attempts
        }

        fn log_exit_script(&mut self, _script: &str) -> bool {
            self.steps.push(CloseStep::Script);
            self.script_handles
        }

        fn defer_to_script(&mut self) {
            self.steps.push(CloseStep::Defer);
        }

        fn documents_may_close(&mut self) -> bool {
            self.may_close
        }

        fn log_exit_confirmed(&mut self, _script: &str) {
            self.steps.push(CloseStep::Confirmed);
        }
    }

    #[test]
    fn a_busy_engine_refuses_the_close_and_queues_the_quit() {
        let mut host = Close::default();

        assert!(!query_close(&mut host));

        assert_eq!(host.steps, [CloseStep::Mark, CloseStep::Queue]);
    }

    #[test]
    fn an_ordinary_close_asks_the_documents_and_logs_the_exit() {
        let mut host = Close {
            idle: true,
            ready: true,
            may_close: true,
            ..Close::default()
        };

        assert!(query_close(&mut host));

        assert_eq!(host.steps, [CloseStep::Mark, CloseStep::Confirmed]);
    }

    #[test]
    fn documents_that_refuse_stop_the_close() {
        let mut host = Close {
            idle: true,
            ready: true,
            ..Close::default()
        };

        assert!(!query_close(&mut host));
        assert!(!host.steps.contains(&CloseStep::Confirmed));
    }

    #[test]
    fn a_scripted_session_refuses_its_first_close_attempt() {
        let mut host = Close {
            idle: true,
            ready: true,
            scripting: true,
            script_handles: true,
            may_close: true,
            ..Close::default()
        };

        assert!(!query_close(&mut host));
        assert_eq!(host.attempts, 1);

        assert!(query_close(&mut host));
        assert_eq!(host.attempts, SCRIPTED_CLOSE_ATTEMPTS);
    }

    #[test]
    fn a_script_that_does_not_handle_the_exit_is_deferred_to() {
        let mut host = Close {
            idle: true,
            ready: true,
            scripting: true,
            may_close: true,
            attempts: 1,
            ..Close::default()
        };

        assert!(query_close(&mut host));
        assert!(host.steps.contains(&CloseStep::Defer));
    }

    #[derive(Debug, Default)]
    struct Examples {
        files: Option<Vec<String>>,
        groups: usize,
        opened: Vec<String>,
        seeded: Vec<String>,
    }

    impl OpenExamplesHost for Examples {
        fn choose_examples(
            &mut self,
            _name: &str,
            _caption: &str,
            _filter: &str,
            groups: &[(&str, &str)],
        ) -> Option<Vec<String>> {
            self.groups = groups.len();
            self.files.clone()
        }

        fn open_example(&mut self, path: &str) {
            self.opened.push(path.to_owned());
        }

        fn seed_open_dialog(&mut self, path: &str) {
            self.seeded.push(path.to_owned());
        }
    }

    #[test]
    fn the_chooser_is_given_all_four_recovered_groups() {
        let mut host = Examples {
            files: Some(vec!["a.TSC".to_owned(), "b.TSC".to_owned()]),
            ..Examples::default()
        };

        assert_eq!(open_examples(&mut host), 2);

        assert_eq!(host.groups, 4);
        assert_eq!(host.opened.len(), 2);
        assert_eq!(host.seeded, ["a.TSC".to_owned()]);
    }

    #[test]
    fn the_recovered_group_names_carry_their_own_separators() {
        for (label, _) in EXAMPLE_GROUPS {
            assert!(label.ends_with('|'));
        }
        assert!(EXAMPLE_FILTER.contains("*.TSC"));
    }

    #[derive(Debug, Default)]
    struct XmlExport {
        chosen: Option<String>,
        builds: bool,
        suggestions: Vec<String>,
        written: Vec<String>,
    }

    impl XmlExportHost for XmlExport {
        fn suggested_name(&mut self) -> String {
            "circuit.XML".to_owned()
        }

        fn choose_save_path(&mut self, _filter: &str, suggested: &str) -> Option<String> {
            self.suggestions.push(suggested.to_owned());
            self.chosen.clone()
        }

        fn build_xml(&mut self) -> bool {
            self.builds
        }

        fn write_xml(&mut self, path: &str) {
            self.written.push(path.to_owned());
        }
    }

    #[test]
    fn the_xml_export_seeds_its_dialog_from_the_document() {
        let mut host = XmlExport {
            chosen: Some("out.XML".to_owned()),
            builds: true,
            ..XmlExport::default()
        };

        assert!(export_xml(&mut host));

        assert_eq!(host.suggestions, ["circuit.XML".to_owned()]);
        assert_eq!(host.written, ["out.XML".to_owned()]);
    }

    #[test]
    fn an_xml_document_that_will_not_build_writes_nothing() {
        let mut host = XmlExport {
            chosen: Some("out.XML".to_owned()),
            ..XmlExport::default()
        };

        assert!(!export_xml(&mut host));
        assert!(host.written.is_empty());
    }

    #[derive(Debug, Default)]
    struct XmlImport {
        chosen: Option<String>,
        reads: bool,
        builds: bool,
        adopted: usize,
    }

    impl XmlImportHost for XmlImport {
        fn choose_open_path(&mut self, _filter: &str) -> Option<String> {
            self.chosen.clone()
        }

        fn read_xml(&mut self, _path: &str) -> bool {
            self.reads
        }

        fn build_document(&mut self) -> bool {
            self.builds
        }

        fn adopt_document(&mut self) {
            self.adopted += 1;
        }

        fn refresh_editor(&mut self) {}
    }

    #[test]
    fn the_xml_import_needs_all_three_steps_to_succeed() {
        let mut ready = XmlImport {
            chosen: Some("in.XML".to_owned()),
            reads: true,
            builds: true,
            ..XmlImport::default()
        };
        assert!(import_xml(&mut ready));
        assert_eq!(ready.adopted, 1);

        for host in [
            &mut XmlImport {
                chosen: Some("in.XML".to_owned()),
                builds: true,
                ..XmlImport::default()
            },
            &mut XmlImport {
                chosen: Some("in.XML".to_owned()),
                reads: true,
                ..XmlImport::default()
            },
        ] {
            assert!(!import_xml(host));
            assert_eq!(host.adopted, 0);
        }
    }

    #[derive(Debug, Default)]
    struct Altium {
        running: bool,
        chosen: Option<String>,
        library: bool,
        builds: bool,
        libraries: Vec<String>,
        written: Vec<String>,
    }

    impl AltiumExportHost for Altium {
        fn already_running(&mut self) -> bool {
            self.running
        }

        fn suggested_name(&mut self, extension: &str) -> String {
            format!("circuit.{extension}")
        }

        fn choose_save_path(&mut self, _filter: &str, _suggested: &str) -> Option<String> {
            self.chosen.clone()
        }

        fn library_present(&mut self, library: &str) -> bool {
            self.libraries.push(library.to_owned());
            self.library
        }

        fn build_model(&mut self) -> bool {
            self.builds
        }

        fn export(&mut self, path: &str) {
            self.written.push(path.to_owned());
        }
    }

    #[test]
    fn the_altium_library_is_looked_for_after_the_save_dialog() {
        let mut host = Altium {
            chosen: Some("out.schdoc".to_owned()),
            ..Altium::default()
        };

        assert!(!export_altium_schematic(&mut host));

        assert_eq!(host.libraries, [ALTIUM_LIBRARY.to_owned()]);
        assert!(host.written.is_empty());
    }

    #[test]
    fn a_complete_altium_export_writes_the_file() {
        let mut host = Altium {
            chosen: Some("out.schdoc".to_owned()),
            library: true,
            builds: true,
            ..Altium::default()
        };

        assert!(export_altium_schematic(&mut host));
        assert_eq!(host.written, ["out.schdoc".to_owned()]);
    }

    #[test]
    fn the_active_task_bar_item_is_drawn_sunk() {
        let active = task_bar_item(true);
        assert_eq!(active.top_left_edge, TASK_BAR_DARK_SHADOW);
        assert_eq!(active.content_offset, TASK_BAR_PRESSED_INSET);

        let idle = task_bar_item(false);
        assert_eq!(idle.top_left_edge, TASK_BAR_HIGHLIGHT);
        assert_eq!(idle.content_offset, 1);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum BarStep {
        Clear,
        Fill(i32),
        Frame(i32),
        Content(i32, i32),
    }

    #[derive(Debug, Default)]
    struct TaskBarPainter {
        count: i32,
        active: i32,
        steps: Vec<BarStep>,
    }

    impl TaskBarPainterHost for TaskBarPainter {
        fn clear_strip(&mut self) {
            self.steps.push(BarStep::Clear);
        }

        fn item_count(&mut self) -> i32 {
            self.count
        }

        fn item_is_active(&mut self, index: i32) -> bool {
            index == self.active
        }

        fn fill_pressed(&mut self, index: i32) {
            self.steps.push(BarStep::Fill(index));
        }

        fn frame_item(&mut self, index: i32, _item: TaskBarItem) {
            self.steps.push(BarStep::Frame(index));
        }

        fn draw_item_content(&mut self, index: i32, offset: i32) {
            self.steps.push(BarStep::Content(index, offset));
        }
    }

    #[test]
    fn every_task_bar_item_is_drawn_on_every_paint() {
        let mut host = TaskBarPainter {
            count: 2,
            active: 1,
            ..TaskBarPainter::default()
        };

        assert_eq!(paint_task_bar(&mut host), 2);

        assert_eq!(
            host.steps,
            [
                BarStep::Clear,
                BarStep::Frame(0),
                BarStep::Content(0, 1),
                BarStep::Fill(1),
                BarStep::Frame(1),
                BarStep::Content(1, TASK_BAR_PRESSED_INSET),
            ]
        );
    }

    #[test]
    fn the_macro_export_filters_decide_how_much_structure_survives() {
        assert!(!MacroExportKind::AsIs.flattens());
        assert!(MacroExportKind::Flattened.flattens());
        assert!(MacroExportKind::FlattenedAndStripped.flattens());
        assert_eq!(MacroExportKind::from_filter_index(4), None);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum MacroStep {
        Prepare,
        Flatten,
        Write(bool),
    }

    #[derive(Debug, Default)]
    struct MacroExport {
        exportable: bool,
        chosen: Option<(String, i32)>,
        subcircuit: bool,
        steps: Vec<MacroStep>,
    }

    impl MacroExportHost for MacroExport {
        fn exportable_macro(&mut self) -> bool {
            self.exportable
        }

        fn choose_save_path(&mut self) -> Option<(String, i32)> {
            self.chosen.clone()
        }

        fn has_subcircuit(&mut self) -> bool {
            self.subcircuit
        }

        fn prepare_subcircuit(&mut self) {
            self.steps.push(MacroStep::Prepare);
        }

        fn flatten(&mut self) {
            self.steps.push(MacroStep::Flatten);
        }

        fn write(&mut self, _path: &str, flattened: bool) {
            self.steps.push(MacroStep::Write(flattened));
        }
    }

    #[test]
    fn the_first_filter_writes_the_macro_as_it_stands() {
        let mut host = MacroExport {
            exportable: true,
            chosen: Some(("m.tsm".to_owned(), 1)),
            ..MacroExport::default()
        };

        assert!(export_macro(&mut host));

        assert_eq!(host.steps, [MacroStep::Write(false)]);
    }

    #[test]
    fn the_other_filters_flatten_it_first() {
        let mut host = MacroExport {
            exportable: true,
            chosen: Some(("m.tsm".to_owned(), 2)),
            subcircuit: true,
            ..MacroExport::default()
        };

        assert!(export_macro(&mut host));

        assert_eq!(
            host.steps,
            [
                MacroStep::Prepare,
                MacroStep::Flatten,
                MacroStep::Write(true)
            ]
        );
    }

    #[test]
    fn an_unknown_filter_writes_nothing() {
        let mut host = MacroExport {
            exportable: true,
            chosen: Some(("m.tsm".to_owned(), 9)),
            ..MacroExport::default()
        };

        assert!(!export_macro(&mut host));
        assert!(host.steps.is_empty());
    }
}

/// The message shown when mixed mode is off but the circuit needs it.
pub const ENABLE_VHDL_MIXED_MODE: &str =
    "Enable VHDL mixed mode to run digital step-by-step in mixed mode!";

pub trait DigitalStepHost {
    /// Prepares the document for a digital analysis.
    fn prepare(&mut self);

    /// Reports whether the digital engine is licensed at all.
    fn engine_available(&mut self) -> bool;

    /// Reports whether the circuit is one the licensed path can step.
    fn circuit_supported(&mut self) -> bool;

    /// Reports whether the circuit is one the unlicensed path can step.
    fn steppable_without_engine(&mut self) -> bool;

    /// Reports whether the circuit has parts that block stepping.
    fn has_blocking_parts(&mut self) -> bool;

    /// Shows the "not allowed" message.
    fn report_not_allowed(&mut self, key: &str);

    /// Reports whether the document steps as a purely digital one.
    fn purely_digital_document(&mut self) -> bool;

    /// Reports whether VHDL mixed mode is switched on.
    fn mixed_mode_enabled(&mut self) -> bool;

    /// Shows one message.
    fn report(&mut self, message: &str);

    /// Steps a mixed circuit.
    fn step_mixed(&mut self);

    /// Steps a purely digital circuit.
    fn step_digital(&mut self);

    /// Records the name of the command just run.
    fn record_last_command(&mut self, name: &str);

    /// Cleans up the preparation state.
    fn finish(&mut self);
}

/// Implements Ghidra function `FUN_01c80750` at `0x01C80750`.
///
/// Handles `MainMenu.mnAnalysis.mnDigitalStepbyStep.OnClick`
/// ("Digital Step-&by-Step").
///
/// Steps the circuit one digital event at a time.
///
/// The circuit test differs between builds: with the digital engine the circuit
/// must be neither of the two analogue kinds and free of blocking parts, while
/// without it a different routine decides — so the same circuit can be
/// steppable in one build and refused in the other.
///
/// A document that does not step as a purely digital one needs VHDL mixed mode
/// switched on, and says so with its own message rather than the general "not
/// allowed" one — that distinction is what tells the user the setting is the
/// problem rather than the circuit.
///
/// The replay name is recorded on every path that gets as far as stepping,
/// including the one that only showed the mixed-mode message.
///
/// Returns whether the circuit was stepped.
pub fn digital_step_by_step(host: &mut impl DigitalStepHost) -> bool {
    host.prepare();

    let allowed = if host.engine_available() {
        host.circuit_supported() && !host.has_blocking_parts()
    } else {
        host.steppable_without_engine() && !host.has_blocking_parts()
    };

    if !allowed {
        host.report_not_allowed(ANALYSIS_NOT_ALLOWED_KEY);
        return false;
    }

    let stepped = if host.purely_digital_document() {
        host.step_digital();
        true
    } else if host.mixed_mode_enabled() {
        host.step_mixed();
        true
    } else {
        host.report(ENABLE_VHDL_MIXED_MODE);
        false
    };

    host.record_last_command("mnDigitalStepbyStepClick");
    host.finish();
    stepped
}

pub trait PictureExportCommandHost {
    /// Suggests a file name from the open document, without an extension.
    fn suggested_stem(&mut self) -> String;

    /// The filter index the dialog is currently on.
    fn filter_index(&mut self) -> i32;

    /// Writes the dialog's file name.
    fn set_name(&mut self, name: &str);

    /// Runs the save dialog, returning the chosen path and filter index.
    fn run_dialog(&mut self) -> Option<(String, i32)>;

    /// Writes the picture.
    fn write_picture(&mut self, path: &str, filter_index: i32);
}

/// Implements Ghidra function `FUN_01c81940` at `0x01C81940`.
///
/// Handles `MainMenu.mnFile.Export.ExportWMF.OnClick`
/// ("&Picture (*.EMF;*.BMP;*.JPG;*.GIF;*PNG)...").
///
/// Exports the schematic as a picture.
///
/// The name is seeded from the document with *no* extension and the extension
/// is then appended from the filter the dialog happens to be on — which is why
/// the dialog's own type-change handler exists to keep the two in step once it
/// is open.
///
/// Returns whether a picture was written.
pub fn export_picture(host: &mut impl PictureExportCommandHost) -> bool {
    let stem = host.suggested_stem();
    let index = host.filter_index();

    let seeded = PictureFormat::from_filter_index(index).map_or_else(
        || stem.clone(),
        |format| format!("{stem}{}", format.extension()),
    );
    host.set_name(&seeded);

    let Some((path, chosen)) = host.run_dialog() else {
        return false;
    };

    host.write_picture(&path, chosen);
    true
}

pub trait EditorActivateHost {
    /// Reports whether the editor owes the interpreter a refresh.
    fn interpreter_pending(&mut self) -> bool;

    /// Refreshes the interpreter window.
    fn refresh_interpreter(&mut self);

    /// Clears the pending flag.
    fn clear_interpreter_pending(&mut self);

    /// Clears the application-wide modal flag.
    fn clear_modal_flag(&mut self);

    /// Reports whether the code editor holds a document the editor should
    /// follow.
    fn code_editor_active(&mut self) -> bool;

    /// The document index the code editor is showing, or `None`.
    fn code_editor_document(&mut self) -> Option<i32>;

    /// Reports whether one document may be switched to.
    fn document_switchable(&mut self, index: i32) -> bool;

    /// The number of documents open.
    fn document_count(&mut self) -> i32;

    /// Switches to one document.
    fn show_document(&mut self, index: i32);

    /// Re-applies the window caption from the document.
    fn refresh_caption(&mut self);
}

/// Implements Ghidra function `FUN_01c8e420` at `0x01C8E420`.
///
/// Handles `SchematicEditor.OnActivate`.
///
/// Brings the editor back in step with whatever changed while it was away.
///
/// The interesting part is the document search: when the code editor is showing
/// a document, the editor walks *backwards* from it looking for one that may be
/// switched to, wrapping round the end of the list. That is how activating the
/// editor from an MCU's source lands on the schematic that owns it rather than
/// on whatever was last in front.
///
/// The caption is rebuilt from the document afterwards, and two separate
/// suffixes are appended when the editor is carrying them.
///
/// Returns whether a document was switched to.
pub fn editor_activated(host: &mut impl EditorActivateHost) -> bool {
    if host.interpreter_pending() {
        host.refresh_interpreter();
        host.clear_interpreter_pending();
    }
    host.clear_modal_flag();

    let mut switched = false;

    if host.code_editor_active() {
        if let Some(start) = host.code_editor_document() {
            let count = host.document_count();
            let mut index = start;

            while index >= 0 && !host.document_switchable(index) {
                index -= 1;
                if index < 0 {
                    index = count - 1;
                }
                if index >= count {
                    index = count - 1;
                }
                if index == start {
                    break;
                }
            }

            if index != start && index >= 0 {
                host.show_document(index);
                switched = true;
            }
        }
    }

    host.refresh_caption();
    switched
}

pub trait SymbolEditHost {
    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// The selected object, if one is selected.
    fn selected_object(&mut self) -> Option<ObjectHandle>;

    /// Reports whether the selection is a macro rather than a part.
    fn selection_is_macro(&mut self, object: ObjectHandle) -> bool;

    /// The macro's own symbol, if it has one.
    fn macro_symbol(&mut self, object: ObjectHandle) -> Option<i32>;

    /// The part's symbol from the shared symbol database, if it has one.
    fn part_symbol(&mut self, object: ObjectHandle) -> Option<i32>;

    /// The name of one symbol.
    fn symbol_name(&mut self, symbol: i32) -> String;

    /// The object's bounds before the edit.
    fn object_bounds(&mut self, object: ObjectHandle) -> (i32, i32, i32, i32);

    /// Runs the symbol editor, reporting whether it was accepted.
    fn edit_symbol(&mut self, symbol: i32) -> bool;

    /// Applies the edited symbol back to the object.
    fn apply_symbol(&mut self, object: ObjectHandle, symbol: i32);

    /// Invalidates the union of the old and new bounds.
    fn invalidate_union(&mut self, before: (i32, i32, i32, i32), object: ObjectHandle);

    /// Writes the edited symbol back to the shared database under its name.
    fn store_shared_symbol(&mut self, name: &str);
}

/// Implements Ghidra function `FUN_01c931a0` at `0x01C931A0`.
///
/// Handles `MainMenu.Edit.mnEditSymbol.OnClick` and
/// `SchPopup.pmEditSymbol.OnClick` ("Symbol...").
///
/// Edits the selected object's symbol.
///
/// A macro edits its *own* symbol, which belongs to that macro alone. A part
/// edits the entry in the shared symbol database, and the result is written
/// back there under the same name — so editing one resistor's symbol changes
/// every resistor.
///
/// The object's bounds are taken before the edit and the union of the old and
/// new ones is invalidated, because a redrawn symbol can be larger or smaller
/// than the one it replaced.
///
/// Returns whether the symbol was changed.
pub fn edit_symbol(host: &mut impl SymbolEditHost) -> bool {
    if host.editing_blocked() {
        return false;
    }

    let Some(object) = host.selected_object() else {
        return false;
    };

    let shared = !host.selection_is_macro(object);
    let symbol = if shared {
        host.part_symbol(object)
    } else {
        host.macro_symbol(object)
    };

    let Some(symbol) = symbol else {
        return false;
    };

    let name = if shared {
        host.symbol_name(symbol)
    } else {
        String::new()
    };
    let before = host.object_bounds(object);

    if !host.edit_symbol(symbol) {
        return false;
    }

    host.apply_symbol(object, symbol);
    host.invalidate_union(before, object);

    if shared {
        host.store_shared_symbol(&name);
    }
    true
}

#[cfg(test)]
mod step_symbol_tests {
    use super::*;

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum StepStep {
        Prepare,
        NotAllowed,
        Digital,
        Mixed,
        Message,
        Record,
        Finish,
    }

    #[derive(Debug, Default)]
    #[allow(clippy::struct_excessive_bools)]
    struct Stepper {
        engine: bool,
        supported: bool,
        without_engine: bool,
        blocking: bool,
        purely_digital: bool,
        mixed_mode: bool,
        steps: Vec<StepStep>,
    }

    impl DigitalStepHost for Stepper {
        fn prepare(&mut self) {
            self.steps.push(StepStep::Prepare);
        }

        fn engine_available(&mut self) -> bool {
            self.engine
        }

        fn circuit_supported(&mut self) -> bool {
            self.supported
        }

        fn steppable_without_engine(&mut self) -> bool {
            self.without_engine
        }

        fn has_blocking_parts(&mut self) -> bool {
            self.blocking
        }

        fn report_not_allowed(&mut self, _key: &str) {
            self.steps.push(StepStep::NotAllowed);
        }

        fn purely_digital_document(&mut self) -> bool {
            self.purely_digital
        }

        fn mixed_mode_enabled(&mut self) -> bool {
            self.mixed_mode
        }

        fn report(&mut self, _message: &str) {
            self.steps.push(StepStep::Message);
        }

        fn step_mixed(&mut self) {
            self.steps.push(StepStep::Mixed);
        }

        fn step_digital(&mut self) {
            self.steps.push(StepStep::Digital);
        }

        fn record_last_command(&mut self, _name: &str) {
            self.steps.push(StepStep::Record);
        }

        fn finish(&mut self) {
            self.steps.push(StepStep::Finish);
        }
    }

    #[test]
    fn a_purely_digital_document_steps_directly() {
        let mut host = Stepper {
            engine: true,
            supported: true,
            purely_digital: true,
            ..Stepper::default()
        };

        assert!(digital_step_by_step(&mut host));

        assert_eq!(
            host.steps,
            [
                StepStep::Prepare,
                StepStep::Digital,
                StepStep::Record,
                StepStep::Finish
            ]
        );
    }

    #[test]
    fn a_mixed_document_needs_the_setting_and_says_so() {
        let mut off = Stepper {
            engine: true,
            supported: true,
            ..Stepper::default()
        };
        assert!(!digital_step_by_step(&mut off));
        assert!(off.steps.contains(&StepStep::Message));
        assert!(off.steps.contains(&StepStep::Record));

        let mut on = Stepper {
            engine: true,
            supported: true,
            mixed_mode: true,
            ..Stepper::default()
        };
        assert!(digital_step_by_step(&mut on));
        assert!(on.steps.contains(&StepStep::Mixed));
    }

    #[test]
    fn blocking_parts_refuse_the_step_in_either_build() {
        for engine in [true, false] {
            let mut host = Stepper {
                engine,
                supported: true,
                without_engine: true,
                blocking: true,
                ..Stepper::default()
            };

            assert!(!digital_step_by_step(&mut host));
            assert_eq!(host.steps, [StepStep::Prepare, StepStep::NotAllowed]);
        }
    }

    #[test]
    fn the_two_builds_ask_different_questions() {
        let mut licensed = Stepper {
            engine: true,
            without_engine: true,
            purely_digital: true,
            ..Stepper::default()
        };
        assert!(!digital_step_by_step(&mut licensed));

        let mut unlicensed = Stepper {
            without_engine: true,
            purely_digital: true,
            ..Stepper::default()
        };
        assert!(digital_step_by_step(&mut unlicensed));
    }

    #[derive(Debug, Default)]
    struct PictureExport {
        filter: i32,
        chosen: Option<(String, i32)>,
        seeded: Vec<String>,
        written: Vec<(String, i32)>,
    }

    impl PictureExportCommandHost for PictureExport {
        fn suggested_stem(&mut self) -> String {
            "circuit".to_owned()
        }

        fn filter_index(&mut self) -> i32 {
            self.filter
        }

        fn set_name(&mut self, name: &str) {
            self.seeded.push(name.to_owned());
        }

        fn run_dialog(&mut self) -> Option<(String, i32)> {
            self.chosen.clone()
        }

        fn write_picture(&mut self, path: &str, filter_index: i32) {
            self.written.push((path.to_owned(), filter_index));
        }
    }

    #[test]
    fn the_picture_name_is_seeded_from_the_current_filter() {
        let mut host = PictureExport {
            filter: 5,
            chosen: Some(("out.PNG".to_owned(), 5)),
            ..PictureExport::default()
        };

        assert!(export_picture(&mut host));

        assert_eq!(host.seeded, ["circuit.PNG".to_owned()]);
        assert_eq!(host.written, [("out.PNG".to_owned(), 5)]);
    }

    #[test]
    fn an_unset_filter_seeds_the_bare_stem() {
        let mut host = PictureExport {
            chosen: None,
            ..PictureExport::default()
        };

        assert!(!export_picture(&mut host));
        assert_eq!(host.seeded, ["circuit".to_owned()]);
    }

    #[derive(Debug, Default)]
    struct Activate {
        pending: bool,
        code_active: bool,
        code_document: Option<i32>,
        switchable: Vec<i32>,
        count: i32,
        refreshes: usize,
        shown: Vec<i32>,
        captions: usize,
    }

    impl EditorActivateHost for Activate {
        fn interpreter_pending(&mut self) -> bool {
            self.pending
        }

        fn refresh_interpreter(&mut self) {
            self.refreshes += 1;
        }

        fn clear_interpreter_pending(&mut self) {
            self.pending = false;
        }

        fn clear_modal_flag(&mut self) {}

        fn code_editor_active(&mut self) -> bool {
            self.code_active
        }

        fn code_editor_document(&mut self) -> Option<i32> {
            self.code_document
        }

        fn document_switchable(&mut self, index: i32) -> bool {
            self.switchable.contains(&index)
        }

        fn document_count(&mut self) -> i32 {
            self.count
        }

        fn show_document(&mut self, index: i32) {
            self.shown.push(index);
        }

        fn refresh_caption(&mut self) {
            self.captions += 1;
        }
    }

    #[test]
    fn activating_refreshes_a_pending_interpreter_once() {
        let mut host = Activate {
            pending: true,
            ..Activate::default()
        };

        assert!(!editor_activated(&mut host));

        assert_eq!(host.refreshes, 1);
        assert!(!host.pending);
        assert_eq!(host.captions, 1);
    }

    #[test]
    fn the_document_search_walks_backwards_from_the_code_editor() {
        let mut host = Activate {
            code_active: true,
            code_document: Some(3),
            switchable: vec![1],
            count: 5,
            ..Activate::default()
        };

        assert!(editor_activated(&mut host));

        assert_eq!(host.shown, [1]);
    }

    #[test]
    fn a_search_that_finds_nothing_switches_nothing() {
        let mut host = Activate {
            code_active: true,
            code_document: Some(2),
            count: 4,
            ..Activate::default()
        };

        assert!(!editor_activated(&mut host));
        assert!(host.shown.is_empty());
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum SymbolStep {
        Edit,
        Apply,
        Invalidate,
        Store,
    }

    #[derive(Debug, Default)]
    struct Symbols {
        blocked: bool,
        selected: Option<ObjectHandle>,
        is_macro: bool,
        symbol: Option<i32>,
        accept: bool,
        steps: Vec<SymbolStep>,
    }

    impl SymbolEditHost for Symbols {
        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn selected_object(&mut self) -> Option<ObjectHandle> {
            self.selected
        }

        fn selection_is_macro(&mut self, _object: ObjectHandle) -> bool {
            self.is_macro
        }

        fn macro_symbol(&mut self, _object: ObjectHandle) -> Option<i32> {
            self.symbol
        }

        fn part_symbol(&mut self, _object: ObjectHandle) -> Option<i32> {
            self.symbol
        }

        fn symbol_name(&mut self, symbol: i32) -> String {
            format!("symbol {symbol}")
        }

        fn object_bounds(&mut self, _object: ObjectHandle) -> (i32, i32, i32, i32) {
            (0, 0, 10, 10)
        }

        fn edit_symbol(&mut self, _symbol: i32) -> bool {
            self.steps.push(SymbolStep::Edit);
            self.accept
        }

        fn apply_symbol(&mut self, _object: ObjectHandle, _symbol: i32) {
            self.steps.push(SymbolStep::Apply);
        }

        fn invalidate_union(&mut self, _before: (i32, i32, i32, i32), _object: ObjectHandle) {
            self.steps.push(SymbolStep::Invalidate);
        }

        fn store_shared_symbol(&mut self, _name: &str) {
            self.steps.push(SymbolStep::Store);
        }
    }

    #[test]
    fn a_part_symbol_is_written_back_to_the_shared_database() {
        let mut host = Symbols {
            selected: Some(ObjectHandle(1)),
            symbol: Some(7),
            accept: true,
            ..Symbols::default()
        };

        assert!(edit_symbol(&mut host));

        assert_eq!(
            host.steps,
            [
                SymbolStep::Edit,
                SymbolStep::Apply,
                SymbolStep::Invalidate,
                SymbolStep::Store,
            ]
        );
    }

    #[test]
    fn a_macro_symbol_belongs_to_that_macro_alone() {
        let mut host = Symbols {
            selected: Some(ObjectHandle(1)),
            is_macro: true,
            symbol: Some(7),
            accept: true,
            ..Symbols::default()
        };

        assert!(edit_symbol(&mut host));

        assert_eq!(
            host.steps,
            [SymbolStep::Edit, SymbolStep::Apply, SymbolStep::Invalidate]
        );
    }

    #[test]
    fn a_cancelled_symbol_editor_changes_nothing() {
        let mut host = Symbols {
            selected: Some(ObjectHandle(1)),
            symbol: Some(7),
            ..Symbols::default()
        };

        assert!(!edit_symbol(&mut host));
        assert_eq!(host.steps, [SymbolStep::Edit]);
    }

    #[test]
    fn an_object_with_no_symbol_is_not_offered_the_editor() {
        let mut host = Symbols {
            selected: Some(ObjectHandle(1)),
            accept: true,
            ..Symbols::default()
        };

        assert!(!edit_symbol(&mut host));
        assert!(host.steps.is_empty());
    }
}

/// The settings file the open-from-web list is configured by.
pub const WEB_CONFIG_FILE: &str = r"\openfromweb.ini";

/// The directory a downloaded schematic is copied into.
pub const WEB_SCHEMATIC_DIRECTORY: &str = r"\User Examples\";

/// The directory a downloaded macro is copied into.
pub const WEB_MACRO_DIRECTORY: &str = r"\Macrolib\";

/// The directory a downloaded model library is copied into.
pub const WEB_LIBRARY_DIRECTORY: &str = r"\Spicelib\";

/// The template each copied file is reported with.
pub const WEB_COPY_REPORT: &str = "%s copied into: %s\r\n";

/// What the open-from-web command does with one downloaded file.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum WebDownloadKind {
    /// `.TSC` or `.SCH`: opened as a schematic and kept under User Examples.
    Schematic,
    /// `.TSM`: copied into the macro library.
    Macro,
    /// `.CIR`: opened in the SPICE editor.
    Netlist,
    /// `.LIB` or `.TLD`: copied into the model library.
    ModelLibrary,
    /// Anything else: deleted again.
    Unknown,
}

impl WebDownloadKind {
    /// Classifies one downloaded file by its extension.
    ///
    /// Part of Ghidra function `FUN_01ca2170` at `0x01CA2170`.
    ///
    /// The comparison is case-insensitive, and the extension carries its dot —
    /// the recovered handler compares against `.TSC` and the rest with the dot
    /// included.
    #[must_use]
    pub fn from_extension(extension: &str) -> Self {
        let upper = extension.to_uppercase();
        match upper.as_str() {
            ".TSC" | ".SCH" => Self::Schematic,
            ".TSM" => Self::Macro,
            ".CIR" => Self::Netlist,
            ".LIB" | ".TLD" => Self::ModelLibrary,
            _ => Self::Unknown,
        }
    }

    /// The directory a copied file of this kind lands in, if it is copied.
    #[must_use]
    pub const fn destination(self) -> Option<&'static str> {
        match self {
            Self::Schematic => Some(WEB_SCHEMATIC_DIRECTORY),
            Self::Macro => Some(WEB_MACRO_DIRECTORY),
            Self::ModelLibrary => Some(WEB_LIBRARY_DIRECTORY),
            Self::Netlist | Self::Unknown => None,
        }
    }
}

pub trait OpenFromWebHost {
    /// Downloads the configured list, returning the local files it fetched.
    ///
    /// The list's address and the settings file that configures it are data
    /// references rather than literals in the recovered bytes, so the address
    /// belongs to the host.
    fn download_list(&mut self, config_file: &str) -> Option<Vec<String>>;

    /// The extension of one downloaded file, dot included.
    fn extension_of(&mut self, path: &str) -> String;

    /// The file's own name, without its directory.
    fn file_name_of(&mut self, path: &str) -> String;

    /// Opens one file as a schematic.
    fn open_schematic(&mut self, path: &str);

    /// Saves the open schematic under one name.
    fn save_schematic_as(&mut self, directory: &str, name: &str);

    /// Deletes one downloaded file.
    fn delete_download(&mut self, path: &str);

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);

    /// Copies one file into a directory, reporting whether it could.
    fn copy_into(&mut self, path: &str, directory: &str) -> bool;

    /// Opens one file in the SPICE editor.
    fn open_netlist(&mut self, path: &str);

    /// Shows the collected report.
    fn report(&mut self, message: &str);
}

/// Formats one line of the open-from-web report.
///
/// Part of Ghidra function `FUN_01ca2170` at `0x01CA2170`.
#[must_use]
pub fn web_copy_line(name: &str, directory: &str) -> String {
    format!("{name} copied into: {directory}\r\n")
}

/// Implements Ghidra function `FUN_01ca2170` at `0x01CA2170`.
///
/// Handles `MainMenu.mnFile.mnOpenFileFromWeb.OnClick` and
/// `TopToolBar.GeneralTools.DFOpenFromWebBtn.OnClick` ("Open from the Web...").
///
/// Downloads a configured set of files and files each one by its extension.
///
/// Four kinds of file go four different ways — a schematic is opened *and* kept
/// under User Examples, a macro and a model library are filed into their own
/// directories, a netlist opens the SPICE editor — and anything unrecognized is
/// deleted again rather than left lying in the temporary directory.
///
/// Only the two copying kinds are reported, and the report is collected across
/// the whole batch and shown once at the end rather than one message per file.
///
/// Returns how many files were handled.
pub fn open_from_web(host: &mut impl OpenFromWebHost) -> usize {
    let Some(files) = host.download_list(WEB_CONFIG_FILE) else {
        return 0;
    };

    let mut report = String::new();

    for path in &files {
        let extension = host.extension_of(path);
        let name = host.file_name_of(path);
        let kind = WebDownloadKind::from_extension(&extension);

        match kind {
            WebDownloadKind::Schematic => {
                host.open_schematic(path);
                host.save_schematic_as(WEB_SCHEMATIC_DIRECTORY, &name);
                host.delete_download(path);
                host.mark_document_changed();
            }
            WebDownloadKind::Macro | WebDownloadKind::ModelLibrary => {
                if let Some(directory) = kind.destination() {
                    if host.copy_into(path, directory) {
                        report.push_str(&web_copy_line(&name, directory));
                    }
                }
            }
            WebDownloadKind::Netlist => host.open_netlist(path),
            WebDownloadKind::Unknown => host.delete_download(path),
        }
    }

    if !report.is_empty() {
        host.report(&report);
    }
    files.len()
}

#[cfg(test)]
mod web_tests {
    use super::*;

    #[test]
    fn each_extension_is_filed_its_own_way() {
        assert_eq!(
            WebDownloadKind::from_extension(".TSC"),
            WebDownloadKind::Schematic
        );
        assert_eq!(
            WebDownloadKind::from_extension(".sch"),
            WebDownloadKind::Schematic
        );
        assert_eq!(
            WebDownloadKind::from_extension(".TSM"),
            WebDownloadKind::Macro
        );
        assert_eq!(
            WebDownloadKind::from_extension(".CIR"),
            WebDownloadKind::Netlist
        );
        assert_eq!(
            WebDownloadKind::from_extension(".LIB"),
            WebDownloadKind::ModelLibrary
        );
        assert_eq!(
            WebDownloadKind::from_extension(".TLD"),
            WebDownloadKind::ModelLibrary
        );
        assert_eq!(
            WebDownloadKind::from_extension(".ZIP"),
            WebDownloadKind::Unknown
        );
    }

    #[test]
    fn only_the_copying_kinds_have_a_destination() {
        assert_eq!(
            WebDownloadKind::Macro.destination(),
            Some(WEB_MACRO_DIRECTORY)
        );
        assert_eq!(
            WebDownloadKind::ModelLibrary.destination(),
            Some(WEB_LIBRARY_DIRECTORY)
        );
        assert_eq!(WebDownloadKind::Netlist.destination(), None);
        assert_eq!(WebDownloadKind::Unknown.destination(), None);
    }

    #[test]
    fn the_report_line_keeps_its_recovered_line_break() {
        let line = web_copy_line("model.lib", r"\Spicelib");
        assert!(line.ends_with("\r\n"));
        assert!(WEB_COPY_REPORT.contains("%s"));
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum WebStep {
        OpenSchematic(String),
        SaveAs(String),
        Delete(String),
        Changed,
        Copy(String, String),
        OpenNetlist(String),
        Report(String),
    }

    #[derive(Debug, Default)]
    struct Web {
        files: Option<Vec<String>>,
        copies_succeed: bool,
        steps: Vec<WebStep>,
    }

    impl OpenFromWebHost for Web {
        fn download_list(&mut self, _config_file: &str) -> Option<Vec<String>> {
            self.files.clone()
        }

        fn extension_of(&mut self, path: &str) -> String {
            path.rsplit_once('.')
                .map_or_else(String::new, |(_, ext)| format!(".{ext}"))
        }

        fn file_name_of(&mut self, path: &str) -> String {
            path.rsplit_once('\\')
                .map_or_else(|| path.to_owned(), |(_, name)| name.to_owned())
        }

        fn open_schematic(&mut self, path: &str) {
            self.steps.push(WebStep::OpenSchematic(path.to_owned()));
        }

        fn save_schematic_as(&mut self, _directory: &str, name: &str) {
            self.steps.push(WebStep::SaveAs(name.to_owned()));
        }

        fn delete_download(&mut self, path: &str) {
            self.steps.push(WebStep::Delete(path.to_owned()));
        }

        fn mark_document_changed(&mut self) {
            self.steps.push(WebStep::Changed);
        }

        fn copy_into(&mut self, path: &str, directory: &str) -> bool {
            self.steps
                .push(WebStep::Copy(path.to_owned(), directory.to_owned()));
            self.copies_succeed
        }

        fn open_netlist(&mut self, path: &str) {
            self.steps.push(WebStep::OpenNetlist(path.to_owned()));
        }

        fn report(&mut self, message: &str) {
            self.steps.push(WebStep::Report(message.to_owned()));
        }
    }

    #[test]
    fn a_downloaded_schematic_is_opened_and_kept() {
        let mut host = Web {
            files: Some(vec![r"tmp\amp.TSC".to_owned()]),
            ..Web::default()
        };

        assert_eq!(open_from_web(&mut host), 1);

        assert_eq!(
            host.steps,
            [
                WebStep::OpenSchematic(r"tmp\amp.TSC".to_owned()),
                WebStep::SaveAs("amp.TSC".to_owned()),
                WebStep::Delete(r"tmp\amp.TSC".to_owned()),
                WebStep::Changed,
            ]
        );
    }

    #[test]
    fn an_unrecognized_download_is_deleted_rather_than_left_behind() {
        let mut host = Web {
            files: Some(vec![r"tmp\bundle.ZIP".to_owned()]),
            ..Web::default()
        };

        assert_eq!(open_from_web(&mut host), 1);

        assert_eq!(host.steps, [WebStep::Delete(r"tmp\bundle.ZIP".to_owned())]);
    }

    #[test]
    fn the_copy_report_is_collected_and_shown_once() {
        let mut host = Web {
            files: Some(vec![
                r"tmp\opamp.TSM".to_owned(),
                r"tmp\models.LIB".to_owned(),
                r"tmp\net.CIR".to_owned(),
            ]),
            copies_succeed: true,
            ..Web::default()
        };

        assert_eq!(open_from_web(&mut host), 3);

        let reports: Vec<_> = host
            .steps
            .iter()
            .filter_map(|step| match step {
                WebStep::Report(text) => Some(text.clone()),
                _ => None,
            })
            .collect();
        assert_eq!(reports.len(), 1);
        assert!(reports[0].contains("opamp.TSM"));
        assert!(reports[0].contains("models.LIB"));
        assert!(
            host.steps
                .contains(&WebStep::OpenNetlist(r"tmp\net.CIR".to_owned()))
        );
    }

    #[test]
    fn a_failed_copy_is_not_reported() {
        let mut host = Web {
            files: Some(vec![r"tmp\opamp.TSM".to_owned()]),
            ..Web::default()
        };

        assert_eq!(open_from_web(&mut host), 1);

        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, WebStep::Report(_)))
        );
    }

    #[test]
    fn a_list_that_cannot_be_downloaded_does_nothing() {
        let mut host = Web::default();

        assert_eq!(open_from_web(&mut host), 0);
        assert!(host.steps.is_empty());
    }
}

/// The picture formats the Insert Graphics command can read.
///
/// The recovered handler tests upper-cased extensions in this order, and each
/// group is loaded through a different image class before being drawn into the
/// metafile the schematic actually stores.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum GraphicSource {
    /// `.EMF`, and one further extension held as a data reference rather than a
    /// literal — almost certainly `.WMF`, but it is supplied by the caller
    /// rather than assumed here.
    ///
    /// These load straight into the metafile with no rasterizing step, which is
    /// why only this group keeps its vector form.
    Metafile,
    /// `.JPG`, `.JPEG`, `.JPE` or `.JFIF`.
    Jpeg,
    /// `.GIF`.
    Gif,
    /// `.PNG`.
    Png,
    /// Anything else, loaded as a plain bitmap.
    Bitmap,
}

impl GraphicSource {
    /// Classifies one extension.
    ///
    /// Part of Ghidra function `FUN_01c83fb0` at `0x01C83FB0`.
    ///
    /// `extra_metafile_extension` carries the recovered data reference that
    /// accompanies `.EMF`.
    #[must_use]
    pub fn from_extension(extension: &str, extra_metafile_extension: &str) -> Self {
        let upper = extension.to_uppercase();

        if upper == ".EMF"
            || (!extra_metafile_extension.is_empty()
                && upper == extra_metafile_extension.to_uppercase())
        {
            return Self::Metafile;
        }

        match upper.as_str() {
            ".JPG" | ".JPEG" | ".JPE" | ".JFIF" => Self::Jpeg,
            ".GIF" => Self::Gif,
            ".PNG" => Self::Png,
            _ => Self::Bitmap,
        }
    }

    /// Whether the graphic keeps its vector form in the document.
    #[must_use]
    pub const fn is_vector(self) -> bool {
        matches!(self, Self::Metafile)
    }
}

pub trait InsertGraphicsHost {
    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Runs the picture chooser, returning the chosen path.
    fn choose_picture(&mut self) -> Option<String>;

    /// The second metafile extension the recovered handler accepts.
    fn extra_metafile_extension(&mut self) -> String;

    /// The extension of one path, dot included.
    fn extension_of(&mut self, path: &str) -> String;

    /// Loads one file straight into the metafile the document stores.
    fn load_metafile(&mut self, path: &str);

    /// Loads one file through an image class and draws it into that metafile,
    /// scaled to the document's own units.
    fn rasterize_into_metafile(&mut self, path: &str, source: GraphicSource);

    /// The insertion point the editor last placed the caret at.
    fn insertion_point(&mut self) -> DocumentPoint;

    /// Creates the graphic object at one point, at unit scale.
    fn create_graphic(&mut self, at: DocumentPoint) -> ObjectHandle;

    /// Records whether the graphic is a vector one.
    fn set_vector_flag(&mut self, object: ObjectHandle, vector: bool);

    /// Pushes the undo record that describes adding this object.
    fn record_undo_step(&mut self, object: ObjectHandle);

    fn add_object_to_document(&mut self, object: ObjectHandle);

    /// Marks the document changed and refreshes it.
    fn mark_document_changed(&mut self);

    /// Makes this object the only selected one.
    fn select_only(&mut self, object: ObjectHandle);

    fn draw_object(&mut self, object: ObjectHandle);

    /// Refreshes the editor around the point the object landed on.
    fn refresh_after_insert(&mut self, at: DocumentPoint);

    /// Presses the text tool button.
    fn press_text_tool(&mut self);
}

/// Implements Ghidra function `FUN_01c83fb0` at `0x01C83FB0`.
///
/// Handles `MainMenu.Insert.mnGraphics.OnClick` ("&Graphics...").
///
/// Places a picture on the sheet.
///
/// Whatever the user chose ends up inside a metafile either way — the two
/// metafile extensions are loaded straight in and keep their vector form, while
/// every raster format is drawn into one at a size the document's own units
/// decide. That is why a JPEG placed on a schematic does not rescale cleanly
/// afterwards but an EMF does.
///
/// An extension the handler does not recognize is still loaded, as a plain
/// bitmap, so the command never refuses a file outright.
///
/// The graphic is added under one undo record, becomes the only selection, and
/// then the *text* tool is pressed — the same button the text command uses,
/// because the tool bar has no graphics button.
///
/// Returns whether a picture was placed.
pub fn insert_graphics(host: &mut impl InsertGraphicsHost) -> Option<ObjectHandle> {
    if host.editing_blocked() {
        return None;
    }

    let path = host.choose_picture()?;

    let extra = host.extra_metafile_extension();
    let extension = host.extension_of(&path);
    let source = GraphicSource::from_extension(&extension, &extra);

    if source.is_vector() {
        host.load_metafile(&path);
    } else {
        host.rasterize_into_metafile(&path, source);
    }

    let at = host.insertion_point();
    let object = host.create_graphic(at);
    host.set_vector_flag(object, source.is_vector());

    host.record_undo_step(object);
    host.add_object_to_document(object);
    host.mark_document_changed();
    host.select_only(object);
    host.draw_object(object);
    host.refresh_after_insert(at);
    host.press_text_tool();
    Some(object)
}

#[cfg(test)]
mod graphics_tests {
    use super::*;

    #[test]
    fn every_recovered_extension_is_classified() {
        for (extension, expected) in [
            (".EMF", GraphicSource::Metafile),
            (".emf", GraphicSource::Metafile),
            (".WMF", GraphicSource::Metafile),
            (".JPG", GraphicSource::Jpeg),
            (".JPEG", GraphicSource::Jpeg),
            (".JPE", GraphicSource::Jpeg),
            (".JFIF", GraphicSource::Jpeg),
            (".GIF", GraphicSource::Gif),
            (".PNG", GraphicSource::Png),
            (".TIF", GraphicSource::Bitmap),
            ("", GraphicSource::Bitmap),
        ] {
            assert_eq!(
                GraphicSource::from_extension(extension, ".WMF"),
                expected,
                "{extension}"
            );
        }
    }

    #[test]
    fn only_the_metafile_group_keeps_its_vector_form() {
        assert!(GraphicSource::Metafile.is_vector());
        for source in [
            GraphicSource::Jpeg,
            GraphicSource::Gif,
            GraphicSource::Png,
            GraphicSource::Bitmap,
        ] {
            assert!(!source.is_vector());
        }
    }

    #[test]
    fn an_empty_extra_extension_never_matches() {
        assert_eq!(GraphicSource::from_extension("", ""), GraphicSource::Bitmap);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum GraphicStep {
        LoadMetafile,
        Rasterize(GraphicSource),
        Create,
        Vector(bool),
        Undo,
        Add,
        Changed,
        Select,
        Draw,
        Refresh,
        TextTool,
    }

    #[derive(Debug, Default)]
    struct Graphics {
        blocked: bool,
        chosen: Option<String>,
        extension: String,
        steps: Vec<GraphicStep>,
    }

    impl InsertGraphicsHost for Graphics {
        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn choose_picture(&mut self) -> Option<String> {
            self.chosen.clone()
        }

        fn extra_metafile_extension(&mut self) -> String {
            ".WMF".to_owned()
        }

        fn extension_of(&mut self, _path: &str) -> String {
            self.extension.clone()
        }

        fn load_metafile(&mut self, _path: &str) {
            self.steps.push(GraphicStep::LoadMetafile);
        }

        fn rasterize_into_metafile(&mut self, _path: &str, source: GraphicSource) {
            self.steps.push(GraphicStep::Rasterize(source));
        }

        fn insertion_point(&mut self) -> DocumentPoint {
            DocumentPoint { x: 40, y: 60 }
        }

        fn create_graphic(&mut self, _at: DocumentPoint) -> ObjectHandle {
            self.steps.push(GraphicStep::Create);
            ObjectHandle(3)
        }

        fn set_vector_flag(&mut self, _object: ObjectHandle, vector: bool) {
            self.steps.push(GraphicStep::Vector(vector));
        }

        fn record_undo_step(&mut self, _object: ObjectHandle) {
            self.steps.push(GraphicStep::Undo);
        }

        fn add_object_to_document(&mut self, _object: ObjectHandle) {
            self.steps.push(GraphicStep::Add);
        }

        fn mark_document_changed(&mut self) {
            self.steps.push(GraphicStep::Changed);
        }

        fn select_only(&mut self, _object: ObjectHandle) {
            self.steps.push(GraphicStep::Select);
        }

        fn draw_object(&mut self, _object: ObjectHandle) {
            self.steps.push(GraphicStep::Draw);
        }

        fn refresh_after_insert(&mut self, _at: DocumentPoint) {
            self.steps.push(GraphicStep::Refresh);
        }

        fn press_text_tool(&mut self) {
            self.steps.push(GraphicStep::TextTool);
        }
    }

    #[test]
    fn a_metafile_is_loaded_straight_in_and_stays_vector() {
        let mut host = Graphics {
            chosen: Some("logo.emf".to_owned()),
            extension: ".EMF".to_owned(),
            ..Graphics::default()
        };

        assert_eq!(insert_graphics(&mut host), Some(ObjectHandle(3)));

        assert_eq!(
            host.steps,
            [
                GraphicStep::LoadMetafile,
                GraphicStep::Create,
                GraphicStep::Vector(true),
                GraphicStep::Undo,
                GraphicStep::Add,
                GraphicStep::Changed,
                GraphicStep::Select,
                GraphicStep::Draw,
                GraphicStep::Refresh,
                GraphicStep::TextTool,
            ]
        );
    }

    #[test]
    fn a_raster_picture_is_drawn_into_the_metafile_instead() {
        let mut host = Graphics {
            chosen: Some("photo.png".to_owned()),
            extension: ".PNG".to_owned(),
            ..Graphics::default()
        };

        assert!(insert_graphics(&mut host).is_some());

        assert!(
            host.steps
                .contains(&GraphicStep::Rasterize(GraphicSource::Png))
        );
        assert!(host.steps.contains(&GraphicStep::Vector(false)));
    }

    #[test]
    fn an_unrecognized_extension_is_still_loaded_as_a_bitmap() {
        let mut host = Graphics {
            chosen: Some("scan.tif".to_owned()),
            extension: ".TIF".to_owned(),
            ..Graphics::default()
        };

        assert!(insert_graphics(&mut host).is_some());

        assert!(
            host.steps
                .contains(&GraphicStep::Rasterize(GraphicSource::Bitmap))
        );
    }

    #[test]
    fn a_cancelled_chooser_places_nothing() {
        let mut host = Graphics::default();

        assert_eq!(insert_graphics(&mut host), None);
        assert!(host.steps.is_empty());
    }

    #[test]
    fn a_blocked_editor_never_opens_the_chooser() {
        let mut host = Graphics {
            blocked: true,
            chosen: Some("logo.emf".to_owned()),
            extension: ".EMF".to_owned(),
            ..Graphics::default()
        };

        assert_eq!(insert_graphics(&mut host), None);
        assert!(host.steps.is_empty());
    }
}

/// The private message another process sends to open a file.
pub const OPEN_FILE_MESSAGE: u32 = 0x08D2;

/// The private message that reports a pointer press.
pub const POINTER_DOWN_MESSAGE: u32 = 0x08D3;

/// The private message that reports a pointer release.
pub const POINTER_UP_MESSAGE: u32 = 0x08D4;

/// The private message that reports a pointer move.
pub const POINTER_MOVE_MESSAGE: u32 = 0x08D5;

/// The private message that asks the editor to come forward.
pub const ACTIVATE_MESSAGE: u32 = 0x08D6;

/// The value those five messages carry to identify themselves.
pub const EDITOR_MESSAGE_MAGIC: i64 = 0x000F_1206;

/// The private message that carries a scripted command.
pub const COMMAND_MESSAGE: u32 = 0x0432;

/// The value the command message carries to identify itself.
pub const COMMAND_MESSAGE_MAGIC: i64 = 0xFEFE;

/// `WM_KEYDOWN`.
pub const KEY_DOWN: u32 = 0x0100;

/// `WM_HSCROLL`.
pub const HORIZONTAL_SCROLL: u32 = 0x0114;

/// `WM_VSCROLL`.
pub const VERTICAL_SCROLL: u32 = 0x0115;

/// `SB_LINEUP`, the recovered scroll code for left and up.
pub const SCROLL_BACK: u32 = 0;

/// `SB_LINEDOWN`, the recovered scroll code for right and down.
pub const SCROLL_FORWARD: u32 = 1;

/// Which pointer event one of the three private messages reports.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RemotePointerEvent {
    /// `0x08D3`, sent with the recovered code `1`.
    Down,
    /// `0x08D4`, sent with the recovered code `2`.
    Up,
    /// `0x08D5`, sent with the recovered code `0`.
    Move,
}

impl RemotePointerEvent {
    /// The recovered code the shared routine is called with.
    #[must_use]
    pub const fn code(self) -> i32 {
        match self {
            Self::Move => 0,
            Self::Down => 1,
            Self::Up => 2,
        }
    }
}

/// The commands the private command message carries.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum RemoteCommand {
    /// `SelectPart` with the part's name.
    SelectPart(String),
    /// `TileWindows`.
    TileWindows,
    /// `SetWindowState` with its argument; only `Minimize` minimizes.
    SetWindowState(String),
    /// `ExitProgram`.
    ExitProgram,
    /// `PCBDesignerHandle` with the handle it carries.
    PcbDesignerHandle(i32),
    /// `BackAnnotate` with the file to read.
    BackAnnotate(String),
}

/// The argument `SetWindowState` recognizes as "minimize".
pub const MINIMIZE_ARGUMENT: &str = "Minimize";

/// Translates an arrow key into the scroll message the canvas is sent instead.
///
/// Part of Ghidra function `FUN_01c8d9a0` at `0x01C8D9A0`.
///
/// The editor's canvas has no arrow-key handling of its own, so the four keys
/// are turned into ordinary scroll-bar messages before they reach it — which is
/// why arrow keys scroll by a line rather than moving a selection.
#[must_use]
pub const fn arrow_key_scroll(key: u16) -> Option<(u32, u32)> {
    match key {
        0x25 => Some((HORIZONTAL_SCROLL, SCROLL_BACK)),
        0x26 => Some((VERTICAL_SCROLL, SCROLL_BACK)),
        0x27 => Some((HORIZONTAL_SCROLL, SCROLL_FORWARD)),
        0x28 => Some((VERTICAL_SCROLL, SCROLL_FORWARD)),
        _ => None,
    }
}

/// One message as the recovered handler reads it.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ApplicationMessage {
    /// The message id.
    pub id: u32,
    /// The word parameter, which for the private messages is an atom.
    pub word: u16,
    /// The long parameter, which the private messages use as a magic value.
    pub long: i64,
    /// Whether the message was sent to the editor's own canvas.
    pub to_canvas: bool,
    /// The virtual key, for a key message.
    pub key: u16,
}

pub trait ApplicationMessageHost {
    /// Reads the global atom one private message carries.
    fn read_atom(&mut self, atom: u16) -> String;

    /// Deletes that atom.
    ///
    /// The file-open message deletes its atom unconditionally, but the command
    /// message deletes its own only when the command was recognized — so an
    /// unrecognized command leaks the atom, which is preserved here.
    fn delete_atom(&mut self, atom: u16);

    /// Reports whether the application is running a script.
    fn scripting_active(&mut self) -> bool;

    /// Reports whether the editor is in a state that suppresses the open.
    fn open_suppressed(&mut self) -> bool;

    /// Brings the application forward and restores it.
    fn bring_application_forward(&mut self);

    /// Hands one file name to the script recorder.
    fn record_opened_file(&mut self, path: &str);

    /// Reports whether a command currently occupies the editor's command slot.
    fn command_running(&mut self) -> bool;

    /// Resolves a name to a file that exists, if it does.
    fn resolve_file(&mut self, name: &str) -> Option<String>;

    /// Reports whether the active window wants the open forwarded to it.
    fn active_window_takes_open(&mut self) -> bool;

    /// Forwards the open message to the active window.
    fn forward_open(&mut self, name: &str);

    /// Opens one file.
    fn open_file(&mut self, path: &str);

    /// Brings the editor forward in response to the activate message.
    fn activate_editor(&mut self);

    /// Reports the activation to the script recorder instead.
    fn record_activation(&mut self);

    /// The cursor position in screen coordinates.
    fn cursor_position(&mut self) -> (i32, i32);

    /// Reports one remote pointer event.
    fn remote_pointer(&mut self, code: i32, x: i32, y: i32);

    /// Parses one command string.
    fn parse_command(&mut self, text: &str) -> Option<RemoteCommand>;

    /// Selects one part by name, reporting whether it was found.
    fn select_part(&mut self, name: &str) -> bool;

    /// Tiles the open windows, or closes them when `exit` is set.
    fn tile_windows(&mut self, exit: bool);

    /// Minimizes or restores the application.
    fn set_minimized(&mut self, minimized: bool);

    /// Records the PCB designer's window handle.
    fn set_pcb_handle(&mut self, handle: i32);

    /// Back-annotates from one file.
    fn back_annotate(&mut self, path: &str);

    /// Records one handled command.
    fn record_command(&mut self, text: &str);

    /// Posts a scroll message to the canvas.
    fn scroll_canvas(&mut self, message: u32, code: u32);
}

/// Implements Ghidra function `FUN_01c8d9a0` at `0x01C8D9A0`.
///
/// Handles `SchematicEditorEvents.OnMessage`.
///
/// Filters the application's messages for the editor's private protocol.
///
/// Six private message ids let another process drive this one — open a file,
/// report a pointer event, bring the editor forward, or run a named command —
/// and each carries its payload as a global atom. The file-open message always
/// deletes its atom, but the command message deletes its own only when the
/// command was recognized — so an unrecognized command leaks it. That is
/// preserved rather than tidied.
///
/// The file-open path has a re-post in it: when the active window says it wants
/// the open instead, the same message is sent on to that window rather than
/// handled here, which is how a second editor window claims a file dropped on
/// the first.
///
/// The arrow keys are translated into scroll-bar messages before the canvas
/// sees them, which is why they scroll rather than move anything.
///
/// Returns whether the message was handled.
pub fn application_message(
    message: ApplicationMessage,
    host: &mut impl ApplicationMessageHost,
) -> bool {
    if message.long == EDITOR_MESSAGE_MAGIC {
        match message.id {
            OPEN_FILE_MESSAGE => {
                let name = host.read_atom(message.word);
                host.delete_atom(message.word);

                let suppressed = host.scripting_active() && host.open_suppressed();

                if !suppressed {
                    host.bring_application_forward();
                }

                if !suppressed && host.scripting_active() {
                    host.record_opened_file(&name);
                }

                if !host.scripting_active() && !host.command_running() {
                    if let Some(path) = host.resolve_file(&name) {
                        if host.active_window_takes_open() {
                            host.forward_open(&name);
                        } else {
                            host.open_file(&path);
                        }
                    }
                }
                return true;
            }
            ACTIVATE_MESSAGE => {
                if host.scripting_active() {
                    host.record_activation();
                } else {
                    host.activate_editor();
                }
                return true;
            }
            _ => {}
        }
    }

    let pointer = match message.id {
        POINTER_DOWN_MESSAGE => Some(RemotePointerEvent::Down),
        POINTER_UP_MESSAGE => Some(RemotePointerEvent::Up),
        POINTER_MOVE_MESSAGE => Some(RemotePointerEvent::Move),
        _ => None,
    };

    if let Some(event) = pointer {
        let (x, y) = host.cursor_position();
        host.remote_pointer(event.code(), x, y);
        return true;
    }

    if message.id == COMMAND_MESSAGE && message.long == COMMAND_MESSAGE_MAGIC {
        let text = host.read_atom(message.word);

        let handled = match host.parse_command(&text) {
            Some(RemoteCommand::SelectPart(name)) => {
                let found = host.select_part(&name);
                if found {
                    host.record_command(&text);
                }
                found
            }
            Some(RemoteCommand::TileWindows) => {
                host.tile_windows(false);
                true
            }
            Some(RemoteCommand::SetWindowState(argument)) => {
                if host.scripting_active() {
                    host.set_minimized(argument == MINIMIZE_ARGUMENT);
                    host.record_command(&text);
                }
                true
            }
            Some(RemoteCommand::ExitProgram) => {
                host.tile_windows(true);
                true
            }
            Some(RemoteCommand::PcbDesignerHandle(handle)) => {
                host.set_pcb_handle(handle);
                true
            }
            Some(RemoteCommand::BackAnnotate(path)) => {
                host.back_annotate(&path);
                true
            }
            None => false,
        };

        if handled {
            host.delete_atom(message.word);
        }
        return true;
    }

    if message.id == KEY_DOWN && message.to_canvas {
        if let Some((scroll, code)) = arrow_key_scroll(message.key) {
            host.scroll_canvas(scroll, code);
            return true;
        }
    }

    false
}

#[cfg(test)]
mod application_message_tests {
    use super::*;

    #[test]
    fn the_four_arrow_keys_become_scroll_messages() {
        assert_eq!(
            arrow_key_scroll(0x25),
            Some((HORIZONTAL_SCROLL, SCROLL_BACK))
        );
        assert_eq!(arrow_key_scroll(0x26), Some((VERTICAL_SCROLL, SCROLL_BACK)));
        assert_eq!(
            arrow_key_scroll(0x27),
            Some((HORIZONTAL_SCROLL, SCROLL_FORWARD))
        );
        assert_eq!(
            arrow_key_scroll(0x28),
            Some((VERTICAL_SCROLL, SCROLL_FORWARD))
        );
        assert_eq!(arrow_key_scroll(0x41), None);
    }

    #[test]
    fn the_three_pointer_messages_carry_their_recovered_codes() {
        assert_eq!(RemotePointerEvent::Move.code(), 0);
        assert_eq!(RemotePointerEvent::Down.code(), 1);
        assert_eq!(RemotePointerEvent::Up.code(), 2);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Delete(u16),
        Forward,
        Open(String),
        RecordOpen(String),
        Activate,
        RecordActivate,
        Pointer(i32),
        SelectPart(String),
        Tile(bool),
        Minimized(bool),
        PcbHandle(i32),
        BackAnnotate(String),
        Record(String),
        Scroll(u32, u32),
    }

    #[derive(Debug, Default)]
    #[allow(clippy::struct_excessive_bools)]
    struct Messages {
        atom: String,
        scripting: bool,
        suppressed: bool,
        command_running: bool,
        resolves: bool,
        active_takes: bool,
        command: Option<RemoteCommand>,
        part_found: bool,
        steps: Vec<Step>,
    }

    impl ApplicationMessageHost for Messages {
        fn read_atom(&mut self, _atom: u16) -> String {
            self.atom.clone()
        }

        fn delete_atom(&mut self, atom: u16) {
            self.steps.push(Step::Delete(atom));
        }

        fn scripting_active(&mut self) -> bool {
            self.scripting
        }

        fn open_suppressed(&mut self) -> bool {
            self.suppressed
        }

        fn bring_application_forward(&mut self) {
            self.steps.push(Step::Forward);
        }

        fn record_opened_file(&mut self, path: &str) {
            self.steps.push(Step::RecordOpen(path.to_owned()));
        }

        fn command_running(&mut self) -> bool {
            self.command_running
        }

        fn resolve_file(&mut self, name: &str) -> Option<String> {
            self.resolves.then(|| name.to_owned())
        }

        fn active_window_takes_open(&mut self) -> bool {
            self.active_takes
        }

        fn forward_open(&mut self, _name: &str) {
            self.steps.push(Step::Forward);
        }

        fn open_file(&mut self, path: &str) {
            self.steps.push(Step::Open(path.to_owned()));
        }

        fn activate_editor(&mut self) {
            self.steps.push(Step::Activate);
        }

        fn record_activation(&mut self) {
            self.steps.push(Step::RecordActivate);
        }

        fn cursor_position(&mut self) -> (i32, i32) {
            (10, 20)
        }

        fn remote_pointer(&mut self, code: i32, _x: i32, _y: i32) {
            self.steps.push(Step::Pointer(code));
        }

        fn parse_command(&mut self, _text: &str) -> Option<RemoteCommand> {
            self.command.clone()
        }

        fn select_part(&mut self, name: &str) -> bool {
            self.steps.push(Step::SelectPart(name.to_owned()));
            self.part_found
        }

        fn tile_windows(&mut self, exit: bool) {
            self.steps.push(Step::Tile(exit));
        }

        fn set_minimized(&mut self, minimized: bool) {
            self.steps.push(Step::Minimized(minimized));
        }

        fn set_pcb_handle(&mut self, handle: i32) {
            self.steps.push(Step::PcbHandle(handle));
        }

        fn back_annotate(&mut self, path: &str) {
            self.steps.push(Step::BackAnnotate(path.to_owned()));
        }

        fn record_command(&mut self, text: &str) {
            self.steps.push(Step::Record(text.to_owned()));
        }

        fn scroll_canvas(&mut self, message: u32, code: u32) {
            self.steps.push(Step::Scroll(message, code));
        }
    }

    const fn private(id: u32, magic: i64) -> ApplicationMessage {
        ApplicationMessage {
            id,
            word: 7,
            long: magic,
            to_canvas: false,
            key: 0,
        }
    }

    #[test]
    fn an_open_message_always_deletes_its_atom() {
        let mut host = Messages {
            atom: "circuit.tsc".to_owned(),
            resolves: true,
            ..Messages::default()
        };

        assert!(application_message(
            private(OPEN_FILE_MESSAGE, EDITOR_MESSAGE_MAGIC),
            &mut host
        ));

        assert_eq!(
            host.steps,
            [
                Step::Delete(7),
                Step::Forward,
                Step::Open("circuit.tsc".to_owned()),
            ]
        );
    }

    #[test]
    fn an_active_window_that_wants_the_open_gets_it_forwarded() {
        let mut host = Messages {
            atom: "circuit.tsc".to_owned(),
            resolves: true,
            active_takes: true,
            ..Messages::default()
        };

        assert!(application_message(
            private(OPEN_FILE_MESSAGE, EDITOR_MESSAGE_MAGIC),
            &mut host
        ));

        assert!(!host.steps.iter().any(|step| matches!(step, Step::Open(_))));
    }

    #[test]
    fn the_activate_message_takes_the_script_path_when_one_is_running() {
        let mut plain = Messages::default();
        assert!(application_message(
            private(ACTIVATE_MESSAGE, EDITOR_MESSAGE_MAGIC),
            &mut plain
        ));
        assert_eq!(plain.steps, [Step::Activate]);

        let mut scripted = Messages {
            scripting: true,
            ..Messages::default()
        };
        assert!(application_message(
            private(ACTIVATE_MESSAGE, EDITOR_MESSAGE_MAGIC),
            &mut scripted
        ));
        assert_eq!(scripted.steps, [Step::RecordActivate]);
    }

    #[test]
    fn each_pointer_message_reports_its_own_code() {
        for (id, code) in [
            (POINTER_DOWN_MESSAGE, 1),
            (POINTER_UP_MESSAGE, 2),
            (POINTER_MOVE_MESSAGE, 0),
        ] {
            let mut host = Messages::default();

            assert!(application_message(private(id, 0), &mut host));

            assert_eq!(host.steps, [Step::Pointer(code)]);
        }
    }

    #[test]
    fn a_recognized_command_deletes_its_atom_and_an_unrecognized_one_does_not() {
        let mut known = Messages {
            command: Some(RemoteCommand::TileWindows),
            ..Messages::default()
        };
        assert!(application_message(
            private(COMMAND_MESSAGE, COMMAND_MESSAGE_MAGIC),
            &mut known
        ));
        assert_eq!(known.steps, [Step::Tile(false), Step::Delete(7)]);

        let mut unknown = Messages::default();
        assert!(application_message(
            private(COMMAND_MESSAGE, COMMAND_MESSAGE_MAGIC),
            &mut unknown
        ));
        assert!(unknown.steps.is_empty());
    }

    #[test]
    fn a_part_that_is_not_found_leaves_the_command_unhandled() {
        let mut host = Messages {
            command: Some(RemoteCommand::SelectPart("R1".to_owned())),
            ..Messages::default()
        };

        assert!(application_message(
            private(COMMAND_MESSAGE, COMMAND_MESSAGE_MAGIC),
            &mut host
        ));

        assert_eq!(host.steps, [Step::SelectPart("R1".to_owned())]);
    }

    #[test]
    fn only_the_minimize_argument_minimizes() {
        for (argument, minimized) in [("Minimize", true), ("Restore", false)] {
            let mut host = Messages {
                scripting: true,
                command: Some(RemoteCommand::SetWindowState(argument.to_owned())),
                ..Messages::default()
            };

            assert!(application_message(
                private(COMMAND_MESSAGE, COMMAND_MESSAGE_MAGIC),
                &mut host
            ));

            assert!(host.steps.contains(&Step::Minimized(minimized)));
        }
    }

    #[test]
    fn the_window_state_command_is_inert_outside_a_script() {
        let mut host = Messages {
            command: Some(RemoteCommand::SetWindowState("Minimize".to_owned())),
            ..Messages::default()
        };

        assert!(application_message(
            private(COMMAND_MESSAGE, COMMAND_MESSAGE_MAGIC),
            &mut host
        ));

        assert_eq!(host.steps, [Step::Delete(7)]);
    }

    #[test]
    fn exit_and_handle_and_backannotate_reach_their_own_commands() {
        let mut exit = Messages {
            command: Some(RemoteCommand::ExitProgram),
            ..Messages::default()
        };
        assert!(application_message(
            private(COMMAND_MESSAGE, COMMAND_MESSAGE_MAGIC),
            &mut exit
        ));
        assert!(exit.steps.contains(&Step::Tile(true)));

        let mut handle = Messages {
            command: Some(RemoteCommand::PcbDesignerHandle(99)),
            ..Messages::default()
        };
        assert!(application_message(
            private(COMMAND_MESSAGE, COMMAND_MESSAGE_MAGIC),
            &mut handle
        ));
        assert!(handle.steps.contains(&Step::PcbHandle(99)));

        let mut annotate = Messages {
            command: Some(RemoteCommand::BackAnnotate("board.ban".to_owned())),
            ..Messages::default()
        };
        assert!(application_message(
            private(COMMAND_MESSAGE, COMMAND_MESSAGE_MAGIC),
            &mut annotate
        ));
        assert!(
            annotate
                .steps
                .contains(&Step::BackAnnotate("board.ban".to_owned()))
        );
    }

    #[test]
    fn an_arrow_key_on_the_canvas_becomes_a_scroll() {
        let mut host = Messages::default();

        assert!(application_message(
            ApplicationMessage {
                id: KEY_DOWN,
                word: 0,
                long: 0,
                to_canvas: true,
                key: 0x28,
            },
            &mut host
        ));

        assert_eq!(host.steps, [Step::Scroll(VERTICAL_SCROLL, SCROLL_FORWARD)]);
    }

    #[test]
    fn an_arrow_key_elsewhere_is_left_alone() {
        let mut host = Messages::default();

        assert!(!application_message(
            ApplicationMessage {
                id: KEY_DOWN,
                word: 0,
                long: 0,
                to_canvas: false,
                key: 0x28,
            },
            &mut host
        ));

        assert!(host.steps.is_empty());
    }

    #[test]
    fn a_private_message_without_the_magic_value_is_not_claimed() {
        let mut host = Messages::default();

        assert!(!application_message(
            private(OPEN_FILE_MESSAGE, 0),
            &mut host
        ));

        assert!(host.steps.is_empty());
    }
}

/// The filter the PCB netlist export dialog uses.
pub const PCB_NETLIST_FILTER: &str = "PCB File|*.NET";

/// The filter the Altium branch swaps in.
pub const PCB_ALTIUM_FILTER: &str = "Altium PCB project|*.ZIP";

/// The two-part filter the last branch uses.
pub const PCB_NETLIST_AND_CMP_FILTER: &str = "PCB File(*.NET)|*.NET|Orcad CMP (*.CMP)|*.CMP";

/// The library the Altium branch needs.
pub const PCB_ALTIUM_LIBRARY: &str = "altium.dll";

/// The highest message index the Altium library's result maps to.
pub const PCB_ALTIUM_MAX_MESSAGE: i32 = 10;

/// What the checked entry of the PCB target menu selects.
///
/// The index comes from whichever entry of the menu at `+0xFF0` carries a check
/// mark; the recovered handler reads it positionally rather than by name, so the
/// numbers below are the recovered indices and not tool-chain identities.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PcbExportTarget {
    /// Index 0, exported with the recovered format code `7`.
    NetlistFormat7,
    /// Index 1: the Altium branch, which swaps the dialog's caption and filter
    /// and drives an external library instead of the netlist writer.
    AltiumProject,
    /// Index 2, exported with the recovered format code `1`.
    NetlistFormat1,
    /// Index 3, exported with the recovered format code `4`.
    NetlistFormat4,
    /// Index 4, exported with the recovered format code `5`.
    NetlistFormat5,
    /// Index 5: offers the netlist and an Orcad `.CMP` companion, and writes
    /// both.
    NetlistWithCmp,
}

impl PcbExportTarget {
    /// The target for one menu index, if the recovered handler names one.
    ///
    /// Indices past the five it handles fall through the whole dispatch without
    /// doing anything, which is what happens when no entry is checked at all.
    #[must_use]
    pub const fn from_menu_index(index: i32) -> Option<Self> {
        match index {
            0 => Some(Self::NetlistFormat7),
            1 => Some(Self::AltiumProject),
            2 => Some(Self::NetlistFormat1),
            3 => Some(Self::NetlistFormat4),
            4 => Some(Self::NetlistFormat5),
            5 => Some(Self::NetlistWithCmp),
            _ => None,
        }
    }

    /// The recovered netlist format code, for the targets that write one
    /// directly.
    #[must_use]
    pub const fn netlist_format(self) -> Option<i32> {
        match self {
            Self::NetlistFormat7 => Some(7),
            Self::NetlistFormat1 => Some(1),
            Self::NetlistFormat4 => Some(4),
            Self::NetlistFormat5 => Some(5),
            Self::AltiumProject | Self::NetlistWithCmp => None,
        }
    }
}

pub trait PcbExportHost {
    /// The index of the checked entry of the PCB target menu.
    ///
    /// Returns the entry count when nothing is checked, which is how the
    /// recovered loop leaves it.
    fn checked_target_index(&mut self) -> i32;

    /// Seeds the save dialog's name from the document and sets one filter.
    fn prepare_dialog(&mut self, filter: &str, filter_index: i32);

    /// Runs the save dialog, returning the chosen path.
    fn run_dialog(&mut self) -> Option<String>;

    /// Writes the netlist in one recovered format.
    fn write_netlist(&mut self, path: &str, format: i32);

    /// Reports whether an Altium export is already running.
    fn altium_busy(&mut self) -> bool;

    /// Reports whether the Altium library is present.
    fn altium_library_present(&mut self, library: &str) -> bool;

    /// Builds the project the library reads and hands it over, returning the
    /// library's own result code.
    fn run_altium_export(&mut self, path: &str) -> i32;

    /// Shows the message the library's result code names.
    fn report_altium_result(&mut self, code: i32);

    /// Restores the filter the Altium branch replaced.
    fn restore_filter(&mut self);

    /// Writes the Orcad `.CMP` companion alongside the netlist.
    fn write_cmp_companion(&mut self, path: &str);
}

/// Implements Ghidra function `FUN_01c95bb0` at `0x01C95BB0`.
///
/// Handles `MainMenu.mnFile.Export.PCBAuto1.OnClick` ("PCB...").
///
/// Exports the circuit for whichever PCB target is ticked.
///
/// The target is read *positionally* — the handler walks the menu looking for
/// the first checked entry and dispatches on its index — so the entries and the
/// branches are coupled by order rather than by name. Nothing ticked leaves the
/// index past the end and the command does nothing at all.
///
/// Four of the six targets just write a netlist in their own recovered format
/// code. The Altium branch is the odd one out: it swaps the dialog's caption and
/// filter, needs an external library, and reports the library's result through a
/// message table — and it refuses outright while an Altium export is already
/// running. The last target offers a two-part filter and writes an Orcad `.CMP`
/// companion alongside the netlist.
///
/// Returns whether anything was written.
pub fn export_pcb(host: &mut impl PcbExportHost) -> bool {
    let index = host.checked_target_index();
    let Some(target) = PcbExportTarget::from_menu_index(index) else {
        return false;
    };

    host.prepare_dialog(PCB_NETLIST_FILTER, 1);

    if let Some(format) = target.netlist_format() {
        let Some(path) = host.run_dialog() else {
            return false;
        };
        host.write_netlist(&path, format);
        return true;
    }

    match target {
        PcbExportTarget::AltiumProject => {
            if host.altium_busy() {
                return false;
            }

            host.prepare_dialog(PCB_ALTIUM_FILTER, 1);
            let chosen = host.run_dialog();

            let written = chosen.is_some_and(|path| {
                if !host.altium_library_present(PCB_ALTIUM_LIBRARY) {
                    return false;
                }
                let code = host.run_altium_export(&path);
                if code > 0 && code <= PCB_ALTIUM_MAX_MESSAGE {
                    host.report_altium_result(code);
                }
                true
            });

            host.restore_filter();
            written
        }
        PcbExportTarget::NetlistWithCmp => {
            host.prepare_dialog(PCB_NETLIST_AND_CMP_FILTER, 2);
            let Some(path) = host.run_dialog() else {
                return false;
            };
            host.write_cmp_companion(&path);
            true
        }
        _ => false,
    }
}

#[cfg(test)]
mod pcb_export_tests {
    use super::*;

    #[test]
    fn the_menu_index_selects_the_target_positionally() {
        assert_eq!(
            PcbExportTarget::from_menu_index(0),
            Some(PcbExportTarget::NetlistFormat7)
        );
        assert_eq!(
            PcbExportTarget::from_menu_index(1),
            Some(PcbExportTarget::AltiumProject)
        );
        assert_eq!(
            PcbExportTarget::from_menu_index(5),
            Some(PcbExportTarget::NetlistWithCmp)
        );
        assert_eq!(PcbExportTarget::from_menu_index(6), None);
        assert_eq!(PcbExportTarget::from_menu_index(-1), None);
    }

    #[test]
    fn the_four_plain_targets_carry_their_own_format_codes() {
        assert_eq!(PcbExportTarget::NetlistFormat7.netlist_format(), Some(7));
        assert_eq!(PcbExportTarget::NetlistFormat1.netlist_format(), Some(1));
        assert_eq!(PcbExportTarget::NetlistFormat4.netlist_format(), Some(4));
        assert_eq!(PcbExportTarget::NetlistFormat5.netlist_format(), Some(5));
        assert_eq!(PcbExportTarget::AltiumProject.netlist_format(), None);
        assert_eq!(PcbExportTarget::NetlistWithCmp.netlist_format(), None);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Prepare(String, i32),
        Netlist(String, i32),
        Altium(String),
        Report(i32),
        Restore,
        Cmp(String),
    }

    #[derive(Debug, Default)]
    struct Export {
        index: i32,
        chosen: Option<String>,
        busy: bool,
        library: bool,
        altium_code: i32,
        steps: Vec<Step>,
    }

    impl PcbExportHost for Export {
        fn checked_target_index(&mut self) -> i32 {
            self.index
        }

        fn prepare_dialog(&mut self, filter: &str, filter_index: i32) {
            self.steps
                .push(Step::Prepare(filter.to_owned(), filter_index));
        }

        fn run_dialog(&mut self) -> Option<String> {
            self.chosen.clone()
        }

        fn write_netlist(&mut self, path: &str, format: i32) {
            self.steps.push(Step::Netlist(path.to_owned(), format));
        }

        fn altium_busy(&mut self) -> bool {
            self.busy
        }

        fn altium_library_present(&mut self, _library: &str) -> bool {
            self.library
        }

        fn run_altium_export(&mut self, path: &str) -> i32 {
            self.steps.push(Step::Altium(path.to_owned()));
            self.altium_code
        }

        fn report_altium_result(&mut self, code: i32) {
            self.steps.push(Step::Report(code));
        }

        fn restore_filter(&mut self) {
            self.steps.push(Step::Restore);
        }

        fn write_cmp_companion(&mut self, path: &str) {
            self.steps.push(Step::Cmp(path.to_owned()));
        }
    }

    #[test]
    fn a_plain_target_writes_its_netlist_format() {
        let mut host = Export {
            index: 3,
            chosen: Some("board.NET".to_owned()),
            ..Export::default()
        };

        assert!(export_pcb(&mut host));

        assert_eq!(
            host.steps,
            [
                Step::Prepare(PCB_NETLIST_FILTER.to_owned(), 1),
                Step::Netlist("board.NET".to_owned(), 4),
            ]
        );
    }

    #[test]
    fn nothing_ticked_exports_nothing() {
        let mut host = Export {
            index: 8,
            chosen: Some("board.NET".to_owned()),
            ..Export::default()
        };

        assert!(!export_pcb(&mut host));
        assert!(host.steps.is_empty());
    }

    #[test]
    fn the_altium_branch_swaps_the_filter_and_puts_it_back() {
        let mut host = Export {
            index: 1,
            chosen: Some("board.ZIP".to_owned()),
            library: true,
            altium_code: 3,
            ..Export::default()
        };

        assert!(export_pcb(&mut host));

        assert_eq!(
            host.steps,
            [
                Step::Prepare(PCB_NETLIST_FILTER.to_owned(), 1),
                Step::Prepare(PCB_ALTIUM_FILTER.to_owned(), 1),
                Step::Altium("board.ZIP".to_owned()),
                Step::Report(3),
                Step::Restore,
            ]
        );
    }

    #[test]
    fn an_altium_result_outside_the_table_is_not_reported() {
        for code in [0, PCB_ALTIUM_MAX_MESSAGE + 1] {
            let mut host = Export {
                index: 1,
                chosen: Some("board.ZIP".to_owned()),
                library: true,
                altium_code: code,
                ..Export::default()
            };

            assert!(export_pcb(&mut host));
            assert!(
                !host
                    .steps
                    .iter()
                    .any(|step| matches!(step, Step::Report(_)))
            );
        }
    }

    #[test]
    fn an_altium_export_already_running_refuses_outright() {
        let mut host = Export {
            index: 1,
            chosen: Some("board.ZIP".to_owned()),
            busy: true,
            library: true,
            ..Export::default()
        };

        assert!(!export_pcb(&mut host));
        // The dialog is seeded before the Altium branch tests whether one is
        // already running, so the seeding is all that happens.
        assert_eq!(
            host.steps,
            [Step::Prepare(PCB_NETLIST_FILTER.to_owned(), 1)]
        );
    }

    #[test]
    fn a_missing_altium_library_still_restores_the_filter() {
        let mut host = Export {
            index: 1,
            chosen: Some("board.ZIP".to_owned()),
            ..Export::default()
        };

        assert!(!export_pcb(&mut host));
        assert_eq!(host.steps.last(), Some(&Step::Restore));
    }

    #[test]
    fn the_last_target_offers_both_filters_and_writes_the_companion() {
        let mut host = Export {
            index: 5,
            chosen: Some("board.CMP".to_owned()),
            ..Export::default()
        };

        assert!(export_pcb(&mut host));

        assert_eq!(
            host.steps,
            [
                Step::Prepare(PCB_NETLIST_FILTER.to_owned(), 1),
                Step::Prepare(PCB_NETLIST_AND_CMP_FILTER.to_owned(), 2),
                Step::Cmp("board.CMP".to_owned()),
            ]
        );
    }

    #[test]
    fn a_cancelled_dialog_writes_nothing() {
        let mut host = Export {
            index: 0,
            ..Export::default()
        };

        assert!(!export_pcb(&mut host));
        assert!(
            !host
                .steps
                .iter()
                .any(|step| matches!(step, Step::Netlist(_, _)))
        );
    }
}

/// The object sub-kind that also takes a handler of its own.
///
/// Part of Ghidra function `FUN_01c9c910` at `0x01C9C910`.
pub const HANDLED_OBJECT_KIND: u8 = 2;

/// What inserting one new object needs from the editor.
pub trait InsertObjectHost {
    /// Builds an object and applies the settings it was asked for.
    fn build_object(&mut self, kind: u8) -> ObjectHandle;

    /// Installs the extra handler the one sub-kind needs.
    fn install_handler(&mut self, object: ObjectHandle);

    /// Opens an undo record covering the insertion.
    fn open_undo_record(&mut self, object: ObjectHandle);

    /// Adds the object to the document.
    fn add_to_document(&mut self, object: ObjectHandle);

    /// Clears the current selection.
    fn clear_selection(&mut self);

    /// Where the new object goes.
    fn placement_point(&mut self) -> DocumentPoint;

    /// Puts the object there.
    fn place(&mut self, object: ObjectHandle, at: DocumentPoint);

    /// Selects it.
    fn select(&mut self, object: ObjectHandle);

    /// Lets the object settle into the document.
    fn finish_object(&mut self, object: ObjectHandle);

    /// Brings the view to the new object.
    fn reveal(&mut self, at: DocumentPoint);

    /// Redraws the editor.
    fn redraw(&mut self);
}

/// Implements Ghidra function `FUN_01c9c910` at `0x01C9C910`.
///
/// Inserts a new object into the open document and selects it.
///
/// The order is what makes this work as one undoable action. The undo record
/// is opened *before* the object reaches the document, so undoing removes it
/// rather than leaving a half-inserted one; the selection is cleared before
/// the new object is selected, so the user ends up with exactly the thing
/// they just made selected and nothing else; and the object is placed before
/// it is allowed to settle, so whatever it computes on settling sees its real
/// position.
///
/// One sub-kind takes an extra handler, installed while the object is still
/// being built rather than after it is in the document.
///
/// Returns the object that was inserted.
pub fn insert_new_object(host: &mut impl InsertObjectHost, kind: u8) -> ObjectHandle {
    let object = host.build_object(kind);
    if kind == HANDLED_OBJECT_KIND {
        host.install_handler(object);
    }

    host.open_undo_record(object);
    host.add_to_document(object);
    host.clear_selection();

    let at = host.placement_point();
    host.place(object, at);
    host.select(object);
    host.finish_object(object);

    host.reveal(at);
    host.redraw();
    object
}

#[cfg(test)]
mod insert_object_tests {
    use super::*;

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum Step {
        Build(u8),
        Handler,
        Undo,
        Add,
        ClearSelection,
        Place(DocumentPoint),
        Select,
        Finish,
        Reveal(DocumentPoint),
        Redraw,
    }

    #[derive(Debug, Default)]
    struct Editor {
        point: DocumentPoint,
        steps: Vec<Step>,
    }

    impl InsertObjectHost for Editor {
        fn build_object(&mut self, kind: u8) -> ObjectHandle {
            self.steps.push(Step::Build(kind));
            ObjectHandle(1)
        }

        fn install_handler(&mut self, _object: ObjectHandle) {
            self.steps.push(Step::Handler);
        }

        fn open_undo_record(&mut self, _object: ObjectHandle) {
            self.steps.push(Step::Undo);
        }

        fn add_to_document(&mut self, _object: ObjectHandle) {
            self.steps.push(Step::Add);
        }

        fn clear_selection(&mut self) {
            self.steps.push(Step::ClearSelection);
        }

        fn placement_point(&mut self) -> DocumentPoint {
            self.point
        }

        fn place(&mut self, _object: ObjectHandle, at: DocumentPoint) {
            self.steps.push(Step::Place(at));
        }

        fn select(&mut self, _object: ObjectHandle) {
            self.steps.push(Step::Select);
        }

        fn finish_object(&mut self, _object: ObjectHandle) {
            self.steps.push(Step::Finish);
        }

        fn reveal(&mut self, at: DocumentPoint) {
            self.steps.push(Step::Reveal(at));
        }

        fn redraw(&mut self) {
            self.steps.push(Step::Redraw);
        }
    }

    #[test]
    fn the_undo_record_opens_before_the_object_reaches_the_document() {
        let mut host = Editor::default();
        insert_new_object(&mut host, 0);

        let undo = host
            .steps
            .iter()
            .position(|step| *step == Step::Undo)
            .expect("an undo record opens");
        let add = host
            .steps
            .iter()
            .position(|step| *step == Step::Add)
            .expect("it is added");
        assert!(undo < add);
    }

    #[test]
    fn the_selection_is_cleared_before_the_new_object_is_selected() {
        let mut host = Editor::default();
        insert_new_object(&mut host, 0);

        let cleared = host
            .steps
            .iter()
            .position(|step| *step == Step::ClearSelection)
            .expect("the selection is cleared");
        let selected = host
            .steps
            .iter()
            .position(|step| *step == Step::Select)
            .expect("the object is selected");
        assert!(cleared < selected);
    }

    #[test]
    fn the_object_is_placed_before_it_is_allowed_to_settle() {
        let mut host = Editor {
            point: DocumentPoint { x: 40, y: 80 },
            ..Editor::default()
        };
        insert_new_object(&mut host, 0);

        let placed = host
            .steps
            .iter()
            .position(|step| matches!(step, Step::Place(_)))
            .expect("it is placed");
        let finished = host
            .steps
            .iter()
            .position(|step| *step == Step::Finish)
            .expect("it settles");
        assert!(placed < finished);
        assert!(
            host.steps
                .contains(&Step::Place(DocumentPoint { x: 40, y: 80 }))
        );
    }

    #[test]
    fn only_the_one_sub_kind_takes_a_handler() {
        let mut handled = Editor::default();
        insert_new_object(&mut handled, HANDLED_OBJECT_KIND);
        assert!(handled.steps.contains(&Step::Handler));

        for kind in [0, 1, 3, 255] {
            let mut plain = Editor::default();
            insert_new_object(&mut plain, kind);
            assert!(!plain.steps.contains(&Step::Handler), "kind {kind}");
        }
    }

    #[test]
    fn the_handler_is_installed_while_the_object_is_still_being_built() {
        let mut host = Editor::default();
        insert_new_object(&mut host, HANDLED_OBJECT_KIND);

        let handler = host
            .steps
            .iter()
            .position(|step| *step == Step::Handler)
            .expect("a handler is installed");
        let add = host
            .steps
            .iter()
            .position(|step| *step == Step::Add)
            .expect("it is added");
        assert!(handler < add);
    }

    #[test]
    fn the_view_is_brought_to_the_same_point_the_object_went_to() {
        let mut host = Editor {
            point: DocumentPoint { x: 5, y: 7 },
            ..Editor::default()
        };
        insert_new_object(&mut host, 0);

        assert!(
            host.steps
                .contains(&Step::Reveal(DocumentPoint { x: 5, y: 7 }))
        );
        assert_eq!(host.steps.last(), Some(&Step::Redraw));
    }
}
