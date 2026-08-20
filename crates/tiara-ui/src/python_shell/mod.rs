//! Iced state adapter for the recovered Python Shell window.
//!
//! Pure document, terminal, mode, conversion, and request types live in
//! `tiara-core`. The maintained `rfd` crate supplies file dialogs. Execution
//! and schematic mutations remain typed host requests so the UI does not run
//! editor-controlled code or reach into the schematic model directly.

use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, row, scrollable, text, text_editor};
use iced::{Element, Length, Task};
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
    application_context: ApplicationContextState,
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
            application_context: ApplicationContextState::Uninitialized,
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
    use super::{Message, SampleLoadOutcome, Window};
    use std::path::{Path, PathBuf};
    use tiara_core::python_shell::{
        CaretPosition, CircuitElement, ExecutionOutcome, FontSettings, HIDE_MARKER, PlaceRequest,
        PythonMode, RunProgram,
    };

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
}
