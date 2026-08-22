//! Iced state adapter for the recovered Python Shell window.
//!
//! Pure document, terminal, mode, conversion, and request types live in
//! `tiara-core`. The maintained `rfd` crate supplies file dialogs. Execution
//! and schematic mutations remain typed host requests so the UI does not run
//! editor-controlled code or reach into the schematic model directly.

use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, row, scrollable, text, text_editor};
use iced::{
    Element, Length, Point, Task,
    keyboard::{Key, Modifiers, key::Named},
    mouse,
};
use rfd::AsyncFileDialog;
use tiara_core::python_shell::{
    CaretPosition, CircuitElement, Document, ExecutionOutcome, FontSettings, PlaceAction,
    PlaceRequest, PythonMode, RunRequest, SaveDisposition, TerminalDocument,
    convert_circuit_elements, plan_mode_transition, prepare_place, prepare_run, read_document,
    write_document,
};

pub const TITLE: &str = "Python Shell";
pub const FORM_RESOURCE: &str = "PyMainForm";

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SampleLoadOutcome {
    Loaded(String),
    Missing,
    Failed(String),
}

#[derive(Debug, Clone, PartialEq, Default)]
pub struct ShellPreferences {
    pub font: FontSettings,
    pub last_file: Option<PathBuf>,
}

/// Safe boundary for registry, startup-file, and application-session effects.
pub trait PythonShellHost {
    /// Loads the saved font and last document.
    ///
    /// # Errors
    ///
    /// Returns a host-defined persistence error.
    fn load_preferences(&mut self) -> Result<ShellPreferences, String>;

    /// Saves the current font and last document.
    ///
    /// # Errors
    ///
    /// Returns a host-defined persistence error.
    fn save_preferences(&mut self, preferences: &ShellPreferences) -> Result<(), String>;

    /// Reads a startup document when it exists.
    ///
    /// # Errors
    ///
    /// Returns a host-defined file access error.
    fn read_startup_document(&mut self, path: &Path) -> Result<Option<String>, String>;

    /// Writes diagnostics when the host needs the recovered Wine report.
    ///
    /// # Errors
    ///
    /// Returns a host-defined diagnostic write error.
    fn write_optional_wine_diagnostics(&mut self) -> Result<(), String>;

    fn finish_shell_session(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum TerminalKeyDecision {
    #[default]
    Accept,
    Suppress,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum CloseAction {
    #[default]
    Hide,
    Free,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
enum WindowLifecycle {
    #[default]
    Open,
    CloseRequested,
    Closed,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
enum FontDialogState {
    #[default]
    Idle,
    Requested,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
enum ApplicationContextState {
    #[default]
    Uninitialized,
    Initialized,
}

#[derive(Debug, Clone)]
pub enum Message {
    EditorAction(text_editor::Action),
    CaretMoved(CaretPosition),
    EditorKeyUp(CaretPosition),
    EditorMouseDown(CaretPosition),
    EditorMouseUp(CaretPosition),
    TerminalKeyDown {
        caret_column: usize,
        key: Key,
    },
    TerminalKeyUp {
        key: Key,
        modifiers: Modifiers,
    },
    TerminalMouseDown {
        button: mouse::Button,
        client_position: Point,
        screen_origin: Point,
    },
    Exit,
    CloseQueried(bool),
    HideMarker,
    NewDocument,
    OpenDocument,
    OpenSelected(Option<PathBuf>),
    DocumentLoaded {
        path: PathBuf,
        result: Result<String, String>,
    },
    SaveDocument,
    SaveDocumentAs,
    SavePathSelected(Option<PathBuf>),
    DocumentWritten {
        path: PathBuf,
        result: Result<(), String>,
    },
    ClearTerminal,
    SelectAllTerminal,
    CopyTerminal,
    SaveTerminal,
    TerminalPathSelected(Option<PathBuf>),
    TerminalWritten {
        path: PathBuf,
        result: Result<(), String>,
    },
    RequestFont,
    FontChosen(Option<FontSettings>),
    Run,
    RunFinished(ExecutionOutcome),
    Place,
    ModeSelected(PythonMode),
    SampleLoaded {
        mode: PythonMode,
        path: PathBuf,
        outcome: SampleLoadOutcome,
    },
    ConvertCircuit(Vec<CircuitElement>),
}

#[derive(Debug)]
pub struct Window {
    document: Document,
    editor: text_editor::Content,
    terminal: TerminalDocument,
    mode: PythonMode,
    checked_mode: PythonMode,
    examples_root: PathBuf,
    caret: CaretPosition,
    caret_panel: String,
    font: FontSettings,
    font_dialog: FontDialogState,
    lifecycle: WindowLifecycle,
    close_action: CloseAction,
    application_context: ApplicationContextState,
    execution_model_initialized: bool,
    syntax_highlighting_enabled: bool,
    editor_gutter_enabled: bool,
    tab_width: u8,
    last_file: Option<PathBuf>,
    last_terminal_key_decision: TerminalKeyDecision,
    terminal_context_menu_position: Option<Point>,
    last_run_request: Option<RunRequest>,
    last_place_action: Option<PlaceAction>,
    last_image_request: Option<PathBuf>,
    last_clipboard_text: Option<String>,
    pending_document_write: Option<PathBuf>,
    pending_terminal_write: Option<PathBuf>,
    pending_sample_path: Option<PathBuf>,
    status: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(PathBuf::from("Examples/Python"))
    }
}

impl Window {
    #[must_use]
    pub fn new(examples_root: PathBuf) -> Self {
        let document = Document::default();
        let editor = text_editor::Content::with_text(&document.text);
        let caret = CaretPosition::default();
        Self {
            document,
            editor,
            terminal: TerminalDocument::default(),
            mode: PythonMode::Normal,
            checked_mode: PythonMode::Normal,
            examples_root,
            caret,
            caret_panel: caret.panel_text(),
            font: FontSettings::default(),
            font_dialog: FontDialogState::Idle,
            lifecycle: WindowLifecycle::Open,
            close_action: CloseAction::Hide,
            application_context: ApplicationContextState::Uninitialized,
            execution_model_initialized: false,
            syntax_highlighting_enabled: false,
            editor_gutter_enabled: false,
            tab_width: 4,
            last_file: None,
            last_terminal_key_decision: TerminalKeyDecision::Accept,
            terminal_context_menu_position: None,
            last_run_request: None,
            last_place_action: None,
            last_image_request: None,
            last_clipboard_text: None,
            pending_document_write: None,
            pending_terminal_write: None,
            pending_sample_path: None,
            status: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::EditorAction(action) => {
                self.editor.perform(action);
                self.document.set_text(self.editor.text());
            }
            Message::CaretMoved(caret) => self.refresh_caret_panel(caret),
            Message::EditorKeyUp(caret) => self.editor_key_up(caret),
            Message::EditorMouseDown(caret) => self.editor_mouse_down(caret),
            Message::EditorMouseUp(caret) => self.editor_mouse_up(caret),
            Message::TerminalKeyDown { caret_column, key } => {
                self.terminal_key_down(caret_column, &key);
            }
            Message::TerminalKeyUp { key, modifiers } => {
                self.terminal_key_up(&key, modifiers);
            }
            Message::TerminalMouseDown {
                button,
                client_position,
                screen_origin,
            } => self.terminal_mouse_down(button, client_position, screen_origin),
            Message::Exit => self.request_close(),
            Message::CloseQueried(allowed) => self.finish_close_query(allowed),
            Message::HideMarker => self.insert_hide_marker(),
            Message::NewDocument => self.new_menu_command(),
            Message::OpenDocument => return self.open_menu_command(),
            Message::OpenSelected(selection) => return Self::open_selected(selection),
            Message::DocumentLoaded { path, result } => self.finish_open_document(path, result),
            Message::SaveDocument => return self.save_menu_command(),
            Message::SaveDocumentAs => return self.save_as_menu_command(),
            Message::SavePathSelected(selection) => return self.save_path_selected(selection),
            Message::DocumentWritten { path, result } => self.finish_document_write(&path, result),
            Message::ClearTerminal => self.clear_terminal(),
            Message::SelectAllTerminal => self.select_all_terminal(),
            Message::CopyTerminal => return self.copy_terminal(),
            Message::SaveTerminal => return self.save_terminal(),
            Message::TerminalPathSelected(selection) => {
                return self.terminal_path_selected(selection);
            }
            Message::TerminalWritten { path, result } => {
                self.finish_terminal_write(&path, result);
            }
            Message::RequestFont => self.text_options_menu_command(),
            Message::FontChosen(selection) => self.apply_font_selection(selection),
            Message::Run => self.run_document(),
            Message::RunFinished(outcome) => self.finish_run(&outcome),
            Message::Place => self.place_document(),
            Message::ModeSelected(PythonMode::Normal) => return self.select_normal_mode(),
            Message::ModeSelected(PythonMode::NodalResistance) => {
                return self.select_nodal_resistance_mode();
            }
            Message::ModeSelected(PythonMode::NodalSolver) => {
                return self.select_nodal_solver_mode();
            }
            Message::SampleLoaded {
                mode,
                path,
                outcome,
            } => self.finish_sample_load(mode, path, outcome),
            Message::ConvertCircuit(elements) => self.convert_circuit(&elements),
        }
        Task::none()
    }

    #[must_use]
    pub const fn document(&self) -> &Document {
        &self.document
    }

    #[must_use]
    pub const fn terminal(&self) -> &TerminalDocument {
        &self.terminal
    }

    #[must_use]
    pub const fn mode(&self) -> PythonMode {
        self.mode
    }

    #[must_use]
    pub const fn checked_mode(&self) -> PythonMode {
        self.checked_mode
    }

    #[must_use]
    pub const fn application_controls_enabled(&self) -> bool {
        self.checked_mode.application_controls_enabled()
    }

    #[must_use]
    pub fn caret_panel(&self) -> &str {
        &self.caret_panel
    }

    #[must_use]
    pub const fn font(&self) -> &FontSettings {
        &self.font
    }

    #[must_use]
    pub const fn font_dialog_requested(&self) -> bool {
        matches!(self.font_dialog, FontDialogState::Requested)
    }

    #[must_use]
    pub const fn close_requested(&self) -> bool {
        matches!(self.lifecycle, WindowLifecycle::CloseRequested)
    }

    #[must_use]
    pub const fn is_closed(&self) -> bool {
        matches!(self.lifecycle, WindowLifecycle::Closed)
    }

    #[must_use]
    pub const fn close_action(&self) -> CloseAction {
        self.close_action
    }

    #[must_use]
    pub const fn execution_model_initialized(&self) -> bool {
        self.execution_model_initialized
    }

    #[must_use]
    pub const fn syntax_highlighting_enabled(&self) -> bool {
        self.syntax_highlighting_enabled
    }

    #[must_use]
    pub const fn editor_gutter_enabled(&self) -> bool {
        self.editor_gutter_enabled
    }

    #[must_use]
    pub const fn tab_width(&self) -> u8 {
        self.tab_width
    }

    #[must_use]
    pub const fn last_terminal_key_decision(&self) -> TerminalKeyDecision {
        self.last_terminal_key_decision
    }

    #[must_use]
    pub const fn terminal_context_menu_position(&self) -> Option<Point> {
        self.terminal_context_menu_position
    }

    #[must_use]
    pub const fn last_run_request(&self) -> Option<&RunRequest> {
        self.last_run_request.as_ref()
    }

    pub const fn take_run_request(&mut self) -> Option<RunRequest> {
        self.last_run_request.take()
    }

    pub const fn take_place_action(&mut self) -> Option<PlaceAction> {
        self.last_place_action.take()
    }

    #[must_use]
    pub const fn last_image_request(&self) -> Option<&PathBuf> {
        self.last_image_request.as_ref()
    }

    #[must_use]
    pub fn last_clipboard_text(&self) -> Option<&str> {
        self.last_clipboard_text.as_deref()
    }

    #[must_use]
    pub const fn pending_document_write(&self) -> Option<&PathBuf> {
        self.pending_document_write.as_ref()
    }

    #[must_use]
    pub const fn pending_terminal_write(&self) -> Option<&PathBuf> {
        self.pending_terminal_write.as_ref()
    }

    #[must_use]
    pub const fn pending_sample_path(&self) -> Option<&PathBuf> {
        self.pending_sample_path.as_ref()
    }

    #[must_use]
    pub fn status(&self) -> Option<&str> {
        self.status.as_deref()
    }

    /// Creates the shell-owned execution state and restores host preferences.
    ///
    /// Reimplements Ghidra function `FUN_0146ff20` at `0x0146FF20`. Registry
    /// access stays behind [`PythonShellHost`]. Iced owns the editor state.
    pub fn on_create(&mut self, host: &mut impl PythonShellHost) {
        self.syntax_highlighting_enabled = true;
        self.execution_model_initialized = true;
        self.application_context = ApplicationContextState::Uninitialized;
        self.mode = PythonMode::Normal;
        self.checked_mode = PythonMode::Normal;
        self.tab_width = 4;
        match host.load_preferences() {
            Ok(preferences) => {
                self.font = preferences.font;
                self.last_file = preferences.last_file;
                self.status = None;
            }
            Err(error) => self.status = Some(error),
        }
    }

    /// Saves preferences, finishes the host session, and frees the form.
    ///
    /// Reimplements Ghidra function `FUN_0146fef0` at `0x0146FEF0`. The host
    /// owns preference persistence and application-wide session cleanup.
    pub fn on_close(&mut self, host: &mut impl PythonShellHost) {
        let preferences = ShellPreferences {
            font: self.font.clone(),
            last_file: self.last_file.clone(),
        };
        if let Err(error) = host.save_preferences(&preferences) {
            self.status = Some(error);
        }
        host.finish_shell_session();
        self.close_action = CloseAction::Free;
        self.lifecycle = WindowLifecycle::Closed;
    }

    /// Releases the shell-owned execution state.
    ///
    /// Reimplements Ghidra function `FUN_0146ffe0` at `0x0146FFE0`. Rust owns
    /// the value lifetime; the explicit state makes the form event testable.
    pub const fn on_destroy(&mut self) {
        self.execution_model_initialized = false;
    }

    /// Initializes the visible shell from the last file or bundled sample.
    ///
    /// Reimplements Ghidra function `FUN_01470000` at `0x01470000`. File reads
    /// and optional Wine diagnostics stay behind [`PythonShellHost`].
    pub fn on_show(&mut self, host: &mut impl PythonShellHost) {
        self.editor_gutter_enabled = true;
        let path = self
            .last_file
            .clone()
            .unwrap_or_else(|| self.examples_root.join("programs/bubblesort.py"));
        if !self.document.modified {
            match host.read_startup_document(&path) {
                Ok(Some(contents)) => {
                    self.document.replace_from_file(path.clone(), contents);
                    self.last_file = Some(path);
                    self.sync_editor_from_document();
                    self.status = None;
                }
                Ok(None) => {}
                Err(error) => self.status = Some(error),
            }
        }
        self.terminal.clear_and_restore_prompt();
        self.font.size = 10.0;
        if let Err(error) = host.write_optional_wine_diagnostics() {
            self.status = Some(error);
        }
    }

    /// Requests the recovered form-close pipeline.
    ///
    /// Reimplements Ghidra function `FUN_0146f080` at `0x0146F080`. It does
    /// not save or prompt locally; the host supplies the close-query result.
    pub const fn request_close(&mut self) {
        self.lifecycle = WindowLifecycle::CloseRequested;
    }

    const fn finish_close_query(&mut self, allowed: bool) {
        self.lifecycle = if allowed {
            WindowLifecycle::Closed
        } else {
            WindowLifecycle::Open
        };
    }

    /// Inserts the exact recovered marker at the current editor row.
    ///
    /// Reimplements Ghidra function `FUN_0146f090` at `0x0146F090`.
    pub fn insert_hide_marker(&mut self) {
        self.document.insert_hide_marker(self.caret.row);
        self.sync_editor_from_document();
    }

    /// Delegates the menu command to the shared new-document behavior.
    ///
    /// Reimplements Ghidra function `FUN_0146f100` at `0x0146F100`.
    pub fn new_menu_command(&mut self) {
        self.create_new_document();
    }

    /// Delegates the menu command to the shared open-file behavior.
    ///
    /// Reimplements Ghidra function `FUN_0146f110` at `0x0146F110`.
    pub fn open_menu_command(&self) -> Task<Message> {
        let mode = self.mode;
        Task::perform(select_open_path(mode), Message::OpenSelected)
    }

    /// Opens the Save As adapter for the current document name.
    ///
    /// Reimplements Ghidra function `FUN_0146f120` at `0x0146F120`.
    pub fn save_as_menu_command(&self) -> Task<Message> {
        let mode = self.mode;
        let current_name = self.document.current_path.clone();
        Task::perform(
            select_save_path(mode, current_name),
            Message::SavePathSelected,
        )
    }

    /// Saves directly except for the literal recovered name `noname.py`.
    ///
    /// Reimplements Ghidra function `FUN_0146f130` at `0x0146F130`.
    pub fn save_menu_command(&mut self) -> Task<Message> {
        match self.document.save_disposition() {
            SaveDisposition::SelectPath => self.save_as_menu_command(),
            SaveDisposition::Write(path) => self.begin_document_write(path),
        }
    }

    /// Clears terminal history and restores the prompt and input position.
    ///
    /// Reimplements Ghidra function `FUN_0146f140` at `0x0146F140`.
    pub fn clear_terminal(&mut self) {
        self.terminal.clear_and_restore_prompt();
    }

    /// Selects the full terminal and copies its nonempty text.
    ///
    /// Reimplements Ghidra function `FUN_0146f180` at `0x0146F180`.
    pub fn copy_terminal(&mut self) -> Task<Message> {
        self.select_all_terminal();
        let Some(selection) = self.terminal.selected_text().map(str::to_owned) else {
            return Task::none();
        };
        self.last_clipboard_text = Some(selection.clone());
        iced::clipboard::write(selection)
    }

    /// Opens the file adapter that writes terminal history only.
    ///
    /// Reimplements Ghidra function `FUN_0146f1b0` at `0x0146F1B0`.
    pub fn save_terminal(&self) -> Task<Message> {
        Task::perform(select_terminal_path(), Message::TerminalPathSelected)
    }

    /// Selects the complete terminal without copying it.
    ///
    /// Reimplements Ghidra function `FUN_0146f250` at `0x0146F250`.
    pub fn select_all_terminal(&mut self) {
        self.terminal.select_all();
    }

    /// Delegates the menu item to the shared font-selection adapter.
    ///
    /// Reimplements Ghidra function `FUN_0146f270` at `0x0146F270`.
    pub const fn text_options_menu_command(&mut self) {
        self.request_font_selection();
    }

    /// Creates a blank generated-name document and refreshes title state.
    ///
    /// Reimplements Ghidra function `FUN_0146f490` at `0x0146F490`.
    pub fn create_new_document(&mut self) {
        self.document.create_blank(self.mode);
        self.caret = CaretPosition::default();
        self.caret_panel = self.caret.panel_text();
        self.sync_editor_from_document();
    }

    /// Applies an accepted open-file result and preserves cancel as a no-op.
    ///
    /// Reimplements Ghidra function `FUN_0146f570` at `0x0146F570`.
    pub fn finish_open_document(&mut self, path: PathBuf, result: Result<String, String>) {
        match result {
            Ok(contents) => {
                self.last_file = Some(path.clone());
                self.document.replace_from_file(path, contents);
                self.sync_editor_from_document();
                self.status = None;
            }
            Err(error) => self.status = Some(error),
        }
    }

    /// Creates a typed schematic or application-model request and asks to close.
    ///
    /// Reimplements Ghidra function `FUN_0146f670` at `0x0146F670`.
    pub fn place_document(&mut self) {
        let action = prepare_place(
            self.mode,
            &self.document.text,
            &self.font,
            matches!(
                self.application_context,
                ApplicationContextState::Initialized
            ),
        );
        if matches!(action.request, PlaceRequest::ApplicationModel { .. }) {
            self.application_context = ApplicationContextState::Initialized;
        }
        if action.request_close {
            self.lifecycle = WindowLifecycle::CloseRequested;
        }
        self.last_place_action = Some(action);
    }

    /// Refreshes the editor position panel from a one-based caret position.
    ///
    /// Reimplements Ghidra function `FUN_0146f870` at `0x0146F870`.
    pub fn refresh_caret_panel(&mut self, caret: CaretPosition) {
        self.caret = caret;
        self.caret_panel = caret.panel_text();
    }

    /// Refreshes the caret panel after an editor key-up event.
    ///
    /// Reimplements Ghidra function `FUN_0146f880` at `0x0146F880`.
    pub fn editor_key_up(&mut self, caret: CaretPosition) {
        self.refresh_caret_panel(caret);
    }

    /// Refreshes the caret panel after an editor mouse-down event.
    ///
    /// Reimplements Ghidra function `FUN_0146f8a0` at `0x0146F8A0`.
    pub fn editor_mouse_down(&mut self, caret: CaretPosition) {
        self.refresh_caret_panel(caret);
    }

    /// Refreshes the caret panel after an editor mouse-up event.
    ///
    /// Reimplements Ghidra function `FUN_0146f8c0` at `0x0146F8C0`.
    pub fn editor_mouse_up(&mut self, caret: CaretPosition) {
        self.refresh_caret_panel(caret);
    }

    /// Prevents Left and Backspace from moving into the terminal prompt.
    ///
    /// Reimplements Ghidra function `FUN_0146fb10` at `0x0146FB10`. The
    /// recovered editor uses a one-based caret column and a five-character
    /// prompt boundary.
    pub const fn terminal_key_down(
        &mut self,
        caret_column: usize,
        key: &Key,
    ) -> TerminalKeyDecision {
        let protected_key = matches!(key, Key::Named(Named::ArrowLeft | Named::Backspace));
        let decision = if caret_column < 6 && protected_key {
            TerminalKeyDecision::Suppress
        } else {
            TerminalKeyDecision::Accept
        };
        self.last_terminal_key_decision = decision;
        decision
    }

    /// Prepares the newest prompt command when Enter is released without Shift.
    ///
    /// Reimplements Ghidra function `FUN_0146fb90` at `0x0146FB90`. Execution
    /// remains a typed host request through [`RunRequest`].
    pub fn terminal_key_up(&mut self, key: &Key, modifiers: Modifiers) {
        if !matches!(key, Key::Named(Named::Enter)) || modifiers.shift() {
            return;
        }
        let Some(command) = self
            .terminal
            .text
            .lines()
            .rev()
            .find(|line| line.contains(">>> "))
            .map(|line| line.replacen(">>> ", "", 1))
        else {
            return;
        };
        self.last_run_request = Some(prepare_run(self.mode, command));
    }

    /// Opens the terminal context menu at the right-click screen position.
    ///
    /// Reimplements Ghidra function `FUN_0146fcd0` at `0x0146FCD0`.
    pub fn terminal_mouse_down(
        &mut self,
        button: mouse::Button,
        client_position: Point,
        screen_origin: Point,
    ) {
        if button == mouse::Button::Right {
            self.terminal_context_menu_position = Some(Point::new(
                screen_origin.x + client_position.x,
                screen_origin.y + client_position.y,
            ));
        }
    }

    /// Clears the terminal and exposes a typed 60-second execution request.
    ///
    /// Reimplements Ghidra function `FUN_01470460` at `0x01470460`. The host
    /// performs process execution and returns [`Message::RunFinished`].
    pub fn run_document(&mut self) {
        self.terminal.clear_for_execution();
        self.last_image_request = None;
        self.last_run_request = Some(prepare_run(self.mode, self.document.text.clone()));
    }

    /// Requests and applies main-editor font selection only on acceptance.
    ///
    /// Reimplements Ghidra function `FUN_01470c00` at `0x01470C00`. Iced has
    /// font primitives but no native font dialog, so the host returns a typed
    /// [`FontSettings`] selection.
    pub const fn request_font_selection(&mut self) {
        self.font_dialog = FontDialogState::Requested;
    }

    /// Checks Normal mode and applies its transition when it changed.
    ///
    /// Reimplements Ghidra function `FUN_01471080` at `0x01471080`.
    pub fn select_normal_mode(&mut self) -> Task<Message> {
        self.switch_mode(PythonMode::Normal)
    }

    /// Checks nodal-resistance mode and applies its transition when it changed.
    ///
    /// Reimplements Ghidra function `FUN_014710b0` at `0x014710B0`.
    pub fn select_nodal_resistance_mode(&mut self) -> Task<Message> {
        self.switch_mode(PythonMode::NodalResistance)
    }

    /// Checks nodal-solver mode and applies its transition when it changed.
    ///
    /// Reimplements Ghidra function `FUN_014710f0` at `0x014710F0`.
    pub fn select_nodal_solver_mode(&mut self) -> Task<Message> {
        self.switch_mode(PythonMode::NodalSolver)
    }

    /// Replaces editor lines with the recovered five-field circuit records.
    ///
    /// Reimplements Ghidra function `FUN_01471190` at `0x01471190`. The host
    /// supplies graph elements after its reset and traversal adapters.
    pub fn convert_circuit(&mut self, elements: &[CircuitElement]) {
        self.document
            .set_text(convert_circuit_elements(elements).join("\n"));
        self.sync_editor_from_document();
    }

    fn open_selected(selection: Option<PathBuf>) -> Task<Message> {
        let Some(path) = selection else {
            return Task::none();
        };
        let path_for_read = path.clone();
        Task::perform(
            async move { read_document(&path_for_read).map_err(|error| error.to_string()) },
            move |result| Message::DocumentLoaded {
                path: path.clone(),
                result,
            },
        )
    }

    fn save_path_selected(&mut self, selection: Option<PathBuf>) -> Task<Message> {
        let Some(selected_path) = selection else {
            return Task::none();
        };
        let normalized = self.document.accept_save_as_path(&selected_path);
        self.begin_document_write(normalized)
    }

    fn begin_document_write(&mut self, path: PathBuf) -> Task<Message> {
        self.pending_document_write = Some(path.clone());
        let path_for_write = path.clone();
        let text = self.document.text.clone();
        Task::perform(
            async move { write_document(&path_for_write, &text).map_err(|error| error.to_string()) },
            move |result| Message::DocumentWritten {
                path: path.clone(),
                result,
            },
        )
    }

    fn finish_document_write(&mut self, path: &Path, result: Result<(), String>) {
        if self.pending_document_write.as_deref() != Some(path) {
            return;
        }
        self.pending_document_write = None;
        match result {
            Ok(()) => {
                self.document.mark_saved();
                self.status = None;
            }
            Err(error) => self.status = Some(error),
        }
    }

    fn terminal_path_selected(&mut self, selection: Option<PathBuf>) -> Task<Message> {
        let Some(path) = selection else {
            return Task::none();
        };
        self.pending_terminal_write = Some(path.clone());
        let path_for_write = path.clone();
        let text = self.terminal.text.clone();
        Task::perform(
            async move { write_document(&path_for_write, &text).map_err(|error| error.to_string()) },
            move |result| Message::TerminalWritten {
                path: path.clone(),
                result,
            },
        )
    }

    fn finish_terminal_write(&mut self, path: &Path, result: Result<(), String>) {
        if self.pending_terminal_write.as_deref() != Some(path) {
            return;
        }
        self.pending_terminal_write = None;
        self.status = result.err();
    }

    fn apply_font_selection(&mut self, selection: Option<FontSettings>) {
        self.font_dialog = FontDialogState::Idle;
        if let Some(font) = selection {
            self.font = font;
        }
    }

    fn finish_run(&mut self, outcome: &ExecutionOutcome) {
        self.terminal.finish_execution(outcome);
        if let ExecutionOutcome::Completed { result_image, .. } = outcome {
            self.last_image_request.clone_from(result_image);
        }
    }

    fn switch_mode(&mut self, target: PythonMode) -> Task<Message> {
        self.checked_mode = target;
        let transition = plan_mode_transition(self.mode, target);
        if !transition.changed {
            return Task::none();
        }
        self.mode = target;
        self.create_new_document();
        let path = self.examples_root.join(transition.sample_path);
        self.pending_sample_path = Some(path.clone());
        let path_for_read = path.clone();
        Task::perform(
            async move {
                if target != PythonMode::Normal && !path_for_read.is_file() {
                    return SampleLoadOutcome::Missing;
                }
                match read_document(&path_for_read) {
                    Ok(contents) => SampleLoadOutcome::Loaded(contents),
                    Err(error) => SampleLoadOutcome::Failed(error.to_string()),
                }
            },
            move |outcome| Message::SampleLoaded {
                mode: target,
                path: path.clone(),
                outcome,
            },
        )
    }

    fn finish_sample_load(&mut self, mode: PythonMode, path: PathBuf, outcome: SampleLoadOutcome) {
        if self.mode != mode || self.pending_sample_path.as_ref() != Some(&path) {
            return;
        }
        self.pending_sample_path = None;
        match outcome {
            SampleLoadOutcome::Loaded(contents) => {
                self.document.replace_from_file(path, contents);
                self.sync_editor_from_document();
                self.status = None;
            }
            SampleLoadOutcome::Missing => {}
            SampleLoadOutcome::Failed(error) => self.status = Some(error),
        }
    }

    fn sync_editor_from_document(&mut self) {
        self.editor = text_editor::Content::with_text(&self.document.text);
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let modes = row![
            button("Normal").on_press(Message::ModeSelected(PythonMode::Normal)),
            button("Nodal solver").on_press(Message::ModeSelected(PythonMode::NodalSolver)),
            button("Nodal resistance").on_press(Message::ModeSelected(PythonMode::NodalResistance)),
        ]
        .spacing(8);
        let files = row![
            button("New").on_press(Message::NewDocument),
            button("Open").on_press(Message::OpenDocument),
            button("Save").on_press(Message::SaveDocument),
            button("Save As").on_press(Message::SaveDocumentAs),
            button("Run").on_press(Message::Run),
            button("Place").on_press(Message::Place),
            button("Exit").on_press(Message::Exit),
        ]
        .spacing(8);
        let edit = row![
            button("Hide marker").on_press(Message::HideMarker),
            button("Font").on_press(Message::RequestFont),
            button("Clear terminal").on_press(Message::ClearTerminal),
            button("Copy terminal").on_press(Message::CopyTerminal),
            button("Save terminal").on_press(Message::SaveTerminal),
        ]
        .spacing(8);
        let editor = text_editor(&self.editor)
            .on_action(Message::EditorAction)
            .size(self.font.size)
            .height(Length::FillPortion(3));
        let terminal = container(scrollable(text(&self.terminal.text)))
            .height(Length::FillPortion(1))
            .width(Length::Fill);
        let status = self.status.as_deref().unwrap_or("");
        column![
            text(self.document.title()),
            modes,
            files,
            edit,
            editor,
            terminal,
            row![
                text(&self.caret_panel),
                text(format!("Mode: {}", self.mode)),
                text(format!("Font: {} {:.0}", self.font.family, self.font.size)),
                text(status),
            ]
            .spacing(16),
        ]
        .spacing(8)
        .padding(12)
        .into()
    }
}

async fn select_open_path(mode: PythonMode) -> Option<PathBuf> {
    let (label, extension) = mode.file_filter();
    AsyncFileDialog::new()
        .add_filter(label, &[extension])
        .pick_file()
        .await
        .map(|handle| handle.path().to_path_buf())
}

async fn select_save_path(mode: PythonMode, current_name: PathBuf) -> Option<PathBuf> {
    let (label, extension) = mode.file_filter();
    let file_name = current_name
        .file_name()
        .and_then(|name| name.to_str())
        .unwrap_or("noname.py");
    AsyncFileDialog::new()
        .add_filter(label, &[extension])
        .set_file_name(file_name)
        .save_file()
        .await
        .map(|handle| handle.path().to_path_buf())
}

async fn select_terminal_path() -> Option<PathBuf> {
    AsyncFileDialog::new()
        .add_filter("Text file", &["txt"])
        .save_file()
        .await
        .map(|handle| handle.path().to_path_buf())
}

#[cfg(test)]
mod tests {
    use super::{
        CloseAction, Message, PythonShellHost, SampleLoadOutcome, ShellPreferences,
        TerminalKeyDecision, Window,
    };
    use iced::{
        Point,
        keyboard::{Key, Modifiers, key::Named},
        mouse,
    };
    use std::path::{Path, PathBuf};
    use tiara_core::python_shell::{
        CaretPosition, CircuitElement, ExecutionOutcome, FontSettings, HIDE_MARKER, PlaceRequest,
        PythonMode, RunProgram,
    };

    #[derive(Default)]
    struct FakeHost {
        preferences: ShellPreferences,
        startup_text: Option<String>,
        startup_path: Option<PathBuf>,
        saved_preferences: Option<ShellPreferences>,
        diagnostics_written: bool,
        session_finished: bool,
    }

    impl PythonShellHost for FakeHost {
        fn load_preferences(&mut self) -> Result<ShellPreferences, String> {
            Ok(self.preferences.clone())
        }

        fn save_preferences(&mut self, preferences: &ShellPreferences) -> Result<(), String> {
            self.saved_preferences = Some(preferences.clone());
            Ok(())
        }

        fn read_startup_document(&mut self, path: &Path) -> Result<Option<String>, String> {
            self.startup_path = Some(path.to_path_buf());
            Ok(self.startup_text.clone())
        }

        fn write_optional_wine_diagnostics(&mut self) -> Result<(), String> {
            self.diagnostics_written = true;
            Ok(())
        }

        fn finish_shell_session(&mut self) {
            self.session_finished = true;
        }
    }

    fn window() -> Window {
        Window::new(PathBuf::from("Examples/Python"))
    }

    fn update(window: &mut Window, message: Message) {
        let _task = window.update(message);
    }

    #[test]
    fn exit_uses_a_host_close_query_without_saving() {
        let mut window = window();
        window.document.set_text("changed".to_owned());
        update(&mut window, Message::Exit);
        assert!(window.close_requested());
        assert!(!window.is_closed());
        update(&mut window, Message::CloseQueried(false));
        assert!(!window.is_closed());
        assert!(window.document.modified);
        update(&mut window, Message::Exit);
        update(&mut window, Message::CloseQueried(true));
        assert!(window.is_closed());
    }

    #[test]
    fn hide_marker_uses_the_current_row_and_keeps_repeats() {
        let mut window = window();
        window.document.set_text("first\nsecond".to_owned());
        window.sync_editor_from_document();
        update(
            &mut window,
            Message::CaretMoved(CaretPosition { row: 1, column: 2 }),
        );
        update(&mut window, Message::HideMarker);
        update(&mut window, Message::HideMarker);
        assert_eq!(
            window.document.text,
            format!("first\n{HIDE_MARKER}\n{HIDE_MARKER}\nsecond")
        );
    }

    #[test]
    fn new_document_uses_mode_extension_and_refreshes_caret() {
        let mut window = window();
        window.mode = PythonMode::NodalSolver;
        update(
            &mut window,
            Message::CaretMoved(CaretPosition { row: 8, column: 3 }),
        );
        update(&mut window, Message::NewDocument);
        assert_eq!(window.document.current_path, Path::new("noname.csv"));
        assert_eq!(window.caret_panel(), "Line:1 Col:1");
    }

    #[test]
    fn open_cancel_is_a_no_op_and_success_sets_both_paths() {
        let mut window = window();
        let before = window.document.clone();
        update(&mut window, Message::OpenSelected(None));
        assert_eq!(window.document, before);
        let path = PathBuf::from("sample.py");
        update(
            &mut window,
            Message::DocumentLoaded {
                path: path.clone(),
                result: Ok("print(1)".to_owned()),
            },
        );
        assert_eq!(window.document.current_path, path);
        assert_eq!(
            window.document.baseline_path,
            Some(PathBuf::from("sample.py"))
        );
        assert!(!window.document.modified);
    }

    #[test]
    fn save_as_normalizes_before_write_and_success_clears_modified() {
        let mut window = window();
        window.document.set_text("print(1)".to_owned());
        update(
            &mut window,
            Message::SavePathSelected(Some(PathBuf::from("C:/Work/Test.PY"))),
        );
        assert_eq!(window.document.current_path, Path::new("c:/work/test.py"));
        assert_eq!(
            window.pending_document_write(),
            Some(&PathBuf::from("c:/work/test.py"))
        );
        update(
            &mut window,
            Message::DocumentWritten {
                path: PathBuf::from("c:/work/test.py"),
                result: Ok(()),
            },
        );
        assert!(!window.document.modified);
    }

    #[test]
    fn terminal_commands_clear_select_copy_and_export_without_touching_document() {
        let mut window = window();
        let document = window.document.clone();
        window.terminal.text = "output".to_owned();
        update(&mut window, Message::CopyTerminal);
        assert_eq!(window.last_clipboard_text(), Some("output"));
        assert_eq!(window.terminal.selection, 0..6);
        update(&mut window, Message::ClearTerminal);
        assert_eq!(window.terminal.text, ">>>  ");
        update(
            &mut window,
            Message::TerminalPathSelected(Some(PathBuf::from("terminal.txt"))),
        );
        assert_eq!(
            window.pending_terminal_write(),
            Some(&PathBuf::from("terminal.txt"))
        );
        assert_eq!(window.document, document);
    }

    #[test]
    fn font_cancel_is_a_no_op_and_acceptance_changes_the_editor_font() {
        let mut window = window();
        let original = window.font.clone();
        update(&mut window, Message::RequestFont);
        assert!(window.font_dialog_requested());
        update(&mut window, Message::FontChosen(None));
        assert_eq!(window.font, original);
        let selected = FontSettings {
            family: "Consolas".to_owned(),
            size: 18.0,
            bold: true,
            italic: false,
        };
        update(&mut window, Message::FontChosen(Some(selected.clone())));
        assert_eq!(window.font, selected);
    }

    #[test]
    fn run_exposes_a_typed_request_and_restores_prompt_on_completion() {
        let mut window = window();
        window.document.set_text("print(1)".to_owned());
        update(&mut window, Message::Run);
        let request = window.last_run_request().expect("run request");
        assert_eq!(request.program, RunProgram::Python);
        assert_eq!(request.source, "print(1)");
        assert!(window.terminal.text.is_empty());
        update(
            &mut window,
            Message::RunFinished(ExecutionOutcome::Completed {
                output: "1".to_owned(),
                result_image: Some(PathBuf::from("PyImage.png")),
            }),
        );
        assert_eq!(window.terminal.text, "1\n>>>  ");
        assert_eq!(
            window.last_image_request(),
            Some(&PathBuf::from("PyImage.png"))
        );
    }

    #[test]
    fn place_uses_separate_schematic_and_application_adapters_and_closes() {
        let mut window = window();
        window.document.set_text("label".to_owned());
        update(&mut window, Message::Place);
        let normal = window.take_place_action().expect("normal place");
        assert!(matches!(
            normal.request,
            PlaceRequest::SchematicText { subtype: 7, .. }
        ));
        assert!(window.close_requested());
        window.mode = PythonMode::NodalSolver;
        update(&mut window, Message::Place);
        let first = window.take_place_action().expect("application place");
        assert!(matches!(
            first.request,
            PlaceRequest::ApplicationModel {
                initialize_context: true,
                ..
            }
        ));
        update(&mut window, Message::Place);
        let second = window
            .take_place_action()
            .expect("second application place");
        assert!(matches!(
            second.request,
            PlaceRequest::ApplicationModel {
                initialize_context: false,
                ..
            }
        ));
    }

    #[test]
    fn mode_change_clears_unsaved_text_and_loads_only_the_current_sample() {
        let mut window = window();
        window.document.set_text("unsaved".to_owned());
        update(
            &mut window,
            Message::ModeSelected(PythonMode::NodalResistance),
        );
        assert_eq!(window.mode(), PythonMode::NodalResistance);
        assert_eq!(window.checked_mode(), PythonMode::NodalResistance);
        assert!(window.application_controls_enabled());
        assert_eq!(window.document.current_path, Path::new("noname.csv"));
        let path = PathBuf::from("Examples/Python/nodal/test_1.csv");
        update(
            &mut window,
            Message::SampleLoaded {
                mode: PythonMode::NodalResistance,
                path: path.clone(),
                outcome: SampleLoadOutcome::Loaded("row".to_owned()),
            },
        );
        assert_eq!(window.document.current_path, path);
        assert_eq!(window.document.text, "row");
    }

    #[test]
    fn repeated_mode_selection_does_not_clear_or_schedule_a_sample() {
        let mut window = window();
        window.document.set_text("keep".to_owned());
        update(&mut window, Message::ModeSelected(PythonMode::Normal));
        assert_eq!(window.document.text, "keep");
        assert!(window.pending_sample_path().is_none());
    }

    #[test]
    fn circuit_conversion_filters_recovered_kinds_and_replaces_editor() {
        let mut window = window();
        let elements = vec![
            CircuitElement {
                kind: 13,
                first: "n1".to_owned(),
                second: "n2".to_owned(),
                value: 2.0,
                fourth: "a".to_owned(),
                fifth: "b".to_owned(),
            },
            CircuitElement {
                kind: 1,
                first: "ignored".to_owned(),
                second: String::new(),
                value: 0.0,
                fourth: String::new(),
                fifth: String::new(),
            },
        ];
        update(&mut window, Message::ConvertCircuit(elements));
        assert_eq!(window.document.text, "n1,n2,2.0000,a,b");
        assert!(window.document.modified);
    }

    #[test]
    fn editor_key_and_mouse_events_share_the_caret_status_refresh() {
        let mut window = window();

        window.editor_key_up(CaretPosition { row: 2, column: 3 });
        assert_eq!(window.caret_panel(), "Line:2 Col:3");
        window.editor_mouse_down(CaretPosition { row: 4, column: 5 });
        assert_eq!(window.caret_panel(), "Line:4 Col:5");
        window.editor_mouse_up(CaretPosition { row: 6, column: 7 });
        assert_eq!(window.caret_panel(), "Line:6 Col:7");
    }

    #[test]
    fn terminal_key_down_protects_only_left_and_backspace_inside_the_prompt() {
        let mut window = window();

        assert_eq!(
            window.terminal_key_down(5, &Key::Named(Named::ArrowLeft)),
            TerminalKeyDecision::Suppress
        );
        assert_eq!(
            window.terminal_key_down(5, &Key::Named(Named::Backspace)),
            TerminalKeyDecision::Suppress
        );
        assert_eq!(
            window.terminal_key_down(6, &Key::Named(Named::Backspace)),
            TerminalKeyDecision::Accept
        );
        assert_eq!(
            window.terminal_key_down(2, &Key::Named(Named::ArrowRight)),
            TerminalKeyDecision::Accept
        );
    }

    #[test]
    fn unshifted_enter_prepares_the_newest_terminal_prompt_line() {
        let mut window = window();
        window.terminal.text = ">>>  first\noutput\n>>>  second".to_owned();

        window.terminal_key_up(&Key::Named(Named::Enter), Modifiers::SHIFT);
        assert!(window.last_run_request().is_none());
        window.terminal_key_up(&Key::Named(Named::Enter), Modifiers::empty());

        assert_eq!(
            window
                .last_run_request()
                .map(|request| request.source.as_str()),
            Some(" second")
        );
    }

    #[test]
    fn terminal_right_click_maps_client_coordinates_to_screen_coordinates() {
        let mut window = window();

        window.terminal_mouse_down(
            mouse::Button::Left,
            Point::new(3.0, 4.0),
            Point::new(10.0, 20.0),
        );
        assert_eq!(window.terminal_context_menu_position(), None);
        window.terminal_mouse_down(
            mouse::Button::Right,
            Point::new(3.0, 4.0),
            Point::new(10.0, 20.0),
        );
        assert_eq!(
            window.terminal_context_menu_position(),
            Some(Point::new(13.0, 24.0))
        );
    }

    #[test]
    fn lifecycle_uses_the_host_for_preferences_startup_and_session_cleanup() {
        let mut window = window();
        let mut host = FakeHost {
            preferences: ShellPreferences {
                font: FontSettings {
                    family: "Recovered Mono".to_owned(),
                    size: 14.0,
                    bold: false,
                    italic: false,
                },
                last_file: Some(PathBuf::from("saved.py")),
            },
            startup_text: Some("print('saved')".to_owned()),
            ..FakeHost::default()
        };

        window.on_create(&mut host);
        assert!(window.execution_model_initialized());
        assert!(window.syntax_highlighting_enabled());
        assert_eq!(window.tab_width(), 4);
        window.on_show(&mut host);
        assert_eq!(host.startup_path, Some(PathBuf::from("saved.py")));
        assert_eq!(window.document().text, "print('saved')");
        assert!((window.font().size - 10.0).abs() < f32::EPSILON);
        assert!(window.editor_gutter_enabled());
        assert!(host.diagnostics_written);

        window.on_close(&mut host);
        assert_eq!(window.close_action(), CloseAction::Free);
        assert!(window.is_closed());
        assert!(host.session_finished);
        assert_eq!(
            host.saved_preferences
                .as_ref()
                .and_then(|preferences| preferences.last_file.as_deref()),
            Some(Path::new("saved.py"))
        );

        window.on_destroy();
        assert!(!window.execution_model_initialized());
    }
}
