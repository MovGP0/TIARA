//! Iced state for the recovered Schematic Editor menu commands.

use std::path::{Path, PathBuf};

pub const FORM_RESOURCE: &str = "SchematicEditor";
pub const HELP_FILE: &str = "TINA.CHM";

/// The help context the Schematic Editor help command opens.
pub const EDITOR_HELP_CONTEXT: u32 = 1000;

/// The recovered show command the interpreter window is restored with.
pub const RESTORE_SHOW_COMMAND: i32 = 9;

/// Menu commands whose recovered handlers do nothing at all.
///
/// Each of these is a single return in the recovered bytes, so the menu item
/// exists and is enabled but performs no work in this build. The import-EDIF
/// command allocates and finalizes three locals without touching anything else,
/// which has the same observable effect.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InertCommand {
    PrintSetup,
    Print,
    PrintPreview,
    SpiceEditor,
    ImportTina,
    ImportPalmtopCircuit,
    ImportPSpice,
    ImportEdif,
    /// `MainMenu.mnFile.Save` and `TopToolBar.GeneralTools.DFSaveBtn`.
    Save,
    /// `MainMenu.mnFile.SaveAs`.
    SaveAs,
    /// `MainMenu.mnTM.mnOpenTestcard`.
    OpenTestcard,
    /// `MainMenu.mnAnalysis` itself, which opens the submenu and nothing else.
    AnalysisMenu,
    /// `SchematicEditorEvents.OnActivate`.
    EditorActivated,
    /// `MainMenu.mnFile.Import.ImportDigit` ("Logic Converter (*.TLC)...").
    ImportLogicConverter,
    /// `MainMenu.Help.CheckforUpdates` ("Check for Updates...").
    CheckForUpdates,
    /// `TopToolBar.EditorTools.sbAIAssistant` and
    /// `MainMenu.mnTools.mnAIAssistant` ("AI Assistant").
    AiAssistant,
}

/// Runs one of the menu commands the recovered build leaves empty.
///
/// Implements Ghidra functions `FUN_01c81320` at `0x01C81320`, `FUN_01c81330`
/// at `0x01C81330`, `FUN_01c87b20` at `0x01C87B20`, `FUN_01c806a0` at
/// `0x01C806A0`, `FUN_01c83490` at `0x01C83490`, `FUN_01c834a0` at
/// `0x01C834A0`, `FUN_01c834b0` at `0x01C834B0`, `FUN_01c834c0` at
/// `0x01C834C0`, `FUN_01c77390` at `0x01C77390`, `FUN_01c76b40` at
/// `0x01C76B40`, `FUN_01c77340` at `0x01C77340`, and `FUN_01c805b0` at
/// `0x01C805B0`, `FUN_01c8e9f0` at `0x01C8E9F0`, and `FUN_01c92b60` at
/// `0x01C92B60`, `FUN_01c9c210` at `0x01C9C210`, and `FUN_01ca4da0` at
/// `0x01CA4DA0`.
///
/// Every one of these menu commands is inert in the recovered build: print,
/// print setup, print preview, the SPICE editor, four of the import commands,
/// both save commands, the test-card entry, and the Analysis menu's own click
/// all return without doing anything.
///
/// Save being empty is worth noticing rather than assuming a mistake: this is
/// the demo build, and the two save entries are present but do nothing.
///
/// The update check and the AI assistant are empty in a slightly different way:
/// each allocates and finalizes one unused local string, which has the same
/// observable effect as returning.
///
/// Keeping them as one explicit no-op records that the recovered handlers were
/// read and found empty, rather than leaving eight menu items unaccounted for.
pub const fn run_inert_command(_command: InertCommand) {}

pub trait EditorHelpHost {
    /// Resolves the localized variant of a help file.
    fn resolve_localized_help(&mut self, base_path: &Path) -> PathBuf;

    fn show_help_context(&mut self, context: u32, help_file: &Path);
}

/// Implements Ghidra function `FUN_01c81350` at `0x01C81350`.
///
/// Opens the Schematic Editor help topic. The handler reads no editor state, so
/// the current document, selection and tool never change the topic.
pub fn open_editor_help(help_directory: &Path, host: &mut impl EditorHelpHost) -> PathBuf {
    let base_path = help_directory.join(HELP_FILE);
    let resolved = host.resolve_localized_help(&base_path);
    host.show_help_context(EDITOR_HELP_CONTEXT, &resolved);
    resolved
}

pub trait EditorCancelHost {
    /// Runs the shared cancel command.
    fn cancel_current_operation(&mut self);
}

/// Implements Ghidra function `FUN_01c835a0` at `0x01C835A0`.
///
/// The popup's Cancel entry delegates straight to the shared cancel command, so
/// cancelling from the popup and cancelling with the keyboard take the same
/// path. The handler reads no state of its own.
pub fn cancel_current_operation(host: &mut impl EditorCancelHost) {
    host.cancel_current_operation();
}

/// The two view modes the recovered menu switches between.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ViewMode {
    /// The recovered value 0.
    Normal,
    /// The recovered value 1.
    PageLayout,
}

pub trait ViewModeHost {
    fn set_view_mode(&mut self, mode: ViewMode);

    fn repaint_editor(&mut self);
}

/// Implements Ghidra functions `FUN_01c83d80` at `0x01C83D80` and
/// `FUN_01c83db0` at `0x01C83DB0`.
///
/// Switches the editor between page-layout and normal view and repaints.
///
/// The two menu items differ only in the mode they pass, so neither checks
/// which mode is already active: choosing the mode the editor is already in
/// still repaints rather than doing nothing.
pub fn set_view_mode(mode: ViewMode, host: &mut impl ViewModeHost) {
    host.set_view_mode(mode);
    host.repaint_editor();
}

/// The two history directions the undo and redo commands share.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HistoryDirection {
    Undo,
    Redo,
}

impl HistoryDirection {
    /// The script call the recovered handler logs.
    #[must_use]
    pub const fn script_call(self) -> &'static str {
        match self {
            Self::Undo => "Undo()",
            Self::Redo => "Redo()",
        }
    }
}

pub trait EditorHistoryHost {
    /// Reports whether the application is running a script.
    fn scripting_active(&mut self) -> bool;

    /// Logs one script call and runs the scripted history step.
    fn run_scripted_history(&mut self, direction: HistoryDirection);

    /// The shared guard that blocks editing in some editor states.
    fn editing_blocked(&mut self) -> bool;

    /// Reports whether the document has a step in this direction.
    fn history_available(&mut self, direction: HistoryDirection) -> bool;

    /// Reports whether an analysis or modal state is in progress.
    fn editor_busy(&mut self) -> bool;

    fn apply_history(&mut self, direction: HistoryDirection);

    fn repaint_editor(&mut self);
}

/// Implements Ghidra functions `FUN_01c8ec70` at `0x01C8EC70` and
/// `FUN_01c8ed20` at `0x01C8ED20`.
///
/// Steps the document history in one direction.
///
/// While a script is running the command never touches the document directly:
/// it logs its own script call and hands the step to the scripted path, so a
/// recorded session stays reproducible.
///
/// Interactively the step happens only when the shared editing guard allows it,
/// the document actually has a step in that direction, and the editor is not
/// busy — which is how undo stays inert during an analysis instead of unwinding
/// the circuit underneath it. The editor repaints only when a step was applied.
pub fn step_history(direction: HistoryDirection, host: &mut impl EditorHistoryHost) -> bool {
    if host.scripting_active() {
        host.run_scripted_history(direction);
        return true;
    }

    if host.editing_blocked() || !host.history_available(direction) || host.editor_busy() {
        return false;
    }

    host.apply_history(direction);
    host.repaint_editor();
    true
}

pub trait InterpreterWindowHost {
    /// Reports whether the interpreter window already exists.
    fn window_exists(&mut self) -> bool;

    fn create_window(&mut self);

    /// Brings the existing window forward.
    fn bring_to_front(&mut self);

    /// Shows the window with one recovered show command.
    fn show_window(&mut self, show_command: i32);
}

/// Implements Ghidra function `FUN_01c80630` at `0x01C80630`.
///
/// Opens the interpreter window, creating it only the first time.
///
/// A window that already exists is brought forward instead of replaced, so the
/// interpreter keeps whatever the user had typed. Either way the window is then
/// shown with the recovered restore command, which is what un-minimizes a
/// window the user had shrunk rather than leaving it on the task bar.
pub fn open_interpreter_window(host: &mut impl InterpreterWindowHost) -> bool {
    let created = !host.window_exists();
    if created {
        host.create_window();
    } else {
        host.bring_to_front();
    }
    host.show_window(RESTORE_SHOW_COMMAND);
    created
}

pub trait RedrawHost {
    /// Repaints the schematic canvas.
    fn repaint_canvas(&mut self);
}

/// Implements Ghidra function `FUN_01c76fd0` at `0x01C76FD0`.
///
/// Handles `MainMenu.View.mnRedraw.OnClick` ("&Redraw").
///
/// Repaints the schematic canvas and nothing else — no reload, no re-layout —
/// which is what makes it the remedy for a canvas left stale by something that
/// drew outside the editor. The same command is on F5.
pub fn redraw_editor(host: &mut impl RedrawHost) {
    host.repaint_canvas();
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct RepaintHost {
        repaints: usize,
    }

    impl RedrawHost for RepaintHost {
        fn repaint_canvas(&mut self) {
            self.repaints += 1;
        }
    }

    #[test]
    fn redraw_only_repaints() {
        let mut host = RepaintHost::default();

        redraw_editor(&mut host);

        assert_eq!(host.repaints, 1);
    }

    #[test]
    fn every_inert_command_really_does_nothing() {
        for command in [
            InertCommand::PrintSetup,
            InertCommand::Print,
            InertCommand::PrintPreview,
            InertCommand::SpiceEditor,
            InertCommand::ImportTina,
            InertCommand::ImportPalmtopCircuit,
            InertCommand::ImportPSpice,
            InertCommand::ImportEdif,
            InertCommand::Save,
            InertCommand::SaveAs,
            InertCommand::OpenTestcard,
            InertCommand::AnalysisMenu,
            InertCommand::EditorActivated,
            InertCommand::ImportLogicConverter,
            InertCommand::CheckForUpdates,
            InertCommand::AiAssistant,
        ] {
            run_inert_command(command);
        }
    }

    #[derive(Debug, Default)]
    struct HelpHost {
        resolved: Vec<PathBuf>,
        shown: Vec<(u32, PathBuf)>,
    }

    impl EditorHelpHost for HelpHost {
        fn resolve_localized_help(&mut self, base_path: &Path) -> PathBuf {
            self.resolved.push(base_path.to_path_buf());
            base_path.with_extension("de.chm")
        }

        fn show_help_context(&mut self, context: u32, help_file: &Path) {
            self.shown.push((context, help_file.to_path_buf()));
        }
    }

    #[test]
    fn editor_help_resolves_the_localized_file_and_uses_the_fixed_context() {
        let mut host = HelpHost::default();

        let resolved = open_editor_help(Path::new(r"C:\TINA\HELP"), &mut host);

        assert_eq!(host.resolved, [Path::new(r"C:\TINA\HELP").join(HELP_FILE)]);
        assert_eq!(host.shown, [(EDITOR_HELP_CONTEXT, resolved)]);
    }

    #[derive(Debug, Default)]
    struct CancelHost {
        cancels: usize,
    }

    impl EditorCancelHost for CancelHost {
        fn cancel_current_operation(&mut self) {
            self.cancels += 1;
        }
    }

    #[test]
    fn the_popup_cancel_forwards_to_the_shared_command() {
        let mut host = CancelHost::default();

        cancel_current_operation(&mut host);

        assert_eq!(host.cancels, 1);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum ViewStep {
        Mode(ViewMode),
        Repaint,
    }

    #[derive(Debug, Default)]
    struct ViewHost {
        steps: Vec<ViewStep>,
    }

    impl ViewModeHost for ViewHost {
        fn set_view_mode(&mut self, mode: ViewMode) {
            self.steps.push(ViewStep::Mode(mode));
        }

        fn repaint_editor(&mut self) {
            self.steps.push(ViewStep::Repaint);
        }
    }

    #[test]
    fn both_view_commands_set_their_mode_and_always_repaint() {
        let mut host = ViewHost::default();

        set_view_mode(ViewMode::PageLayout, &mut host);
        set_view_mode(ViewMode::PageLayout, &mut host);
        set_view_mode(ViewMode::Normal, &mut host);

        assert_eq!(
            host.steps,
            [
                ViewStep::Mode(ViewMode::PageLayout),
                ViewStep::Repaint,
                ViewStep::Mode(ViewMode::PageLayout),
                ViewStep::Repaint,
                ViewStep::Mode(ViewMode::Normal),
                ViewStep::Repaint,
            ]
        );
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum HistoryStep {
        Scripted(HistoryDirection),
        Apply(HistoryDirection),
        Repaint,
    }

    #[derive(Debug, Default)]
    #[allow(clippy::struct_excessive_bools)]
    struct HistoryHost {
        scripting: bool,
        blocked: bool,
        available: bool,
        busy: bool,
        steps: Vec<HistoryStep>,
    }

    impl EditorHistoryHost for HistoryHost {
        fn scripting_active(&mut self) -> bool {
            self.scripting
        }

        fn run_scripted_history(&mut self, direction: HistoryDirection) {
            self.steps.push(HistoryStep::Scripted(direction));
        }

        fn editing_blocked(&mut self) -> bool {
            self.blocked
        }

        fn history_available(&mut self, _direction: HistoryDirection) -> bool {
            self.available
        }

        fn editor_busy(&mut self) -> bool {
            self.busy
        }

        fn apply_history(&mut self, direction: HistoryDirection) {
            self.steps.push(HistoryStep::Apply(direction));
        }

        fn repaint_editor(&mut self) {
            self.steps.push(HistoryStep::Repaint);
        }
    }

    #[test]
    fn the_two_directions_log_their_own_script_calls() {
        assert_eq!(HistoryDirection::Undo.script_call(), "Undo()");
        assert_eq!(HistoryDirection::Redo.script_call(), "Redo()");
    }

    #[test]
    fn a_running_script_takes_the_scripted_path_without_touching_the_document() {
        let mut host = HistoryHost {
            scripting: true,
            ..HistoryHost::default()
        };

        assert!(step_history(HistoryDirection::Undo, &mut host));

        assert_eq!(host.steps, [HistoryStep::Scripted(HistoryDirection::Undo)]);
    }

    #[test]
    fn an_interactive_step_needs_the_guard_the_history_and_an_idle_editor() {
        let mut ready = HistoryHost {
            available: true,
            ..HistoryHost::default()
        };
        assert!(step_history(HistoryDirection::Redo, &mut ready));
        assert_eq!(
            ready.steps,
            [
                HistoryStep::Apply(HistoryDirection::Redo),
                HistoryStep::Repaint
            ]
        );

        for host in [
            &mut HistoryHost {
                blocked: true,
                available: true,
                ..HistoryHost::default()
            },
            &mut HistoryHost::default(),
            &mut HistoryHost {
                available: true,
                busy: true,
                ..HistoryHost::default()
            },
        ] {
            assert!(!step_history(HistoryDirection::Undo, host));
            assert!(host.steps.is_empty());
        }
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum InterpreterStep {
        Create,
        Front,
        Show(i32),
    }

    #[derive(Debug, Default)]
    struct InterpreterHost {
        exists: bool,
        steps: Vec<InterpreterStep>,
    }

    impl InterpreterWindowHost for InterpreterHost {
        fn window_exists(&mut self) -> bool {
            self.exists
        }

        fn create_window(&mut self) {
            self.exists = true;
            self.steps.push(InterpreterStep::Create);
        }

        fn bring_to_front(&mut self) {
            self.steps.push(InterpreterStep::Front);
        }

        fn show_window(&mut self, show_command: i32) {
            self.steps.push(InterpreterStep::Show(show_command));
        }
    }

    #[test]
    fn the_interpreter_window_is_created_once_and_then_brought_forward() {
        let mut host = InterpreterHost::default();

        assert!(open_interpreter_window(&mut host));
        assert!(!open_interpreter_window(&mut host));

        assert_eq!(
            host.steps,
            [
                InterpreterStep::Create,
                InterpreterStep::Show(RESTORE_SHOW_COMMAND),
                InterpreterStep::Front,
                InterpreterStep::Show(RESTORE_SHOW_COMMAND),
            ]
        );
    }
}
