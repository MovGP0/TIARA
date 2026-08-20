//! Iced state adapter for the recovered Netlist Viewer family.

use std::ops::Range;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, row, scrollable, text, text_editor};
use iced::{Element, Length, Task};
use rfd::AsyncFileDialog;
use tiara_core::netlist_viewer::{
    CaretPosition, ClipboardPayload, CloseRequest, CompileKind, CompileRequest,
    CompilerContextPolicy, Diagnostic, DiagnosticNavigation, DockRequest, GuardDecision,
    HELP_CONTEXT_ID, HelpRequest, HostSaveRequest, NetlistDocument, PASTE_COMMAND_ID, PrintRequest,
    SaveAsRoute, SavePromptChoice, SearchOptions, SearchOutcome, SelectionMode, SpecialTextTarget,
    TextReveal, ThreadWindowPolicy, ViewerMode, WarningSource, evaluate_unsaved_guard, find_next,
    navigate_diagnostic, plan_close, plan_save_as, read_netlist, replace_matches,
    reveal_special_text_target, write_netlist,
};

pub const TITLE: &str = "Netlist Viewer";
pub const FORM_RESOURCE: &str = "NetlistViewer";
pub const LIBRARY_EVALUATION: &str = "iced supplies editor state, tasks, widgets, and standard text clipboard operations; rfd supplies maintained file dialogs; std supplies files, paths, ranges, undo snapshots, search, and formatting. Printing, docking, host saves, compilation, ERC, help, and schematic navigation remain typed host adapters.";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum GuardedAction {
    New,
    Open,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
enum DockState {
    Docked,
    #[default]
    Floating,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
enum WarningPaneState {
    #[default]
    Visible,
    Hidden,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
enum SearchDialogState {
    #[default]
    Closed,
    Find,
    Replace,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
enum CommandContext {
    #[default]
    Viewer,
    OtherWindow,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
enum CompilerState {
    #[default]
    Idle,
    Waiting(CompileRequest),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PrinterSetupRequest;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PrintDialogRequest;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WarningSettingWrite {
    pub section: &'static str,
    pub key: &'static str,
    pub visible: bool,
}

#[derive(Debug, Clone)]
pub enum Message {
    EditorAction(text_editor::Action),
    SelectionChanged(Range<usize>, SelectionMode),
    New,
    Open,
    UnsavedChoice(SavePromptChoice),
    OpenSelected(Option<PathBuf>),
    FileLoaded(Result<String, String>),
    Save,
    SaveAs,
    SavePathSelected(Option<PathBuf>),
    FileWritten(PathBuf, Result<(), String>),
    HostSaveFinished(bool),
    Print,
    PrintDialogFinished(bool),
    PrinterSetup,
    ToggleDock,
    Exit,
    Undo,
    Cut,
    Copy,
    Paste,
    PasteText(Option<String>),
    Delete,
    SelectAll,
    Find,
    Replace,
    SearchSubmitted(SearchOptions),
    SearchAgain,
    Compile,
    ElectricalRulesCheck,
    CompilerFinished(Vec<Diagnostic>),
    ToggleWarnings,
    Help,
    CaretMoved(CaretPosition),
    DiagnosticSelected(Option<usize>),
    EditSelectedSource,
    ClearMessages,
    RevealSpecialText(String, String, SpecialTextTarget),
}

#[derive(Debug)]
pub struct Window {
    mode: ViewerMode,
    document: NetlistDocument,
    editor: text_editor::Content,
    guarded_action: Option<GuardedAction>,
    default_save_name: PathBuf,
    help_root: PathBuf,
    netlist_generation: u64,
    status: String,
    diagnostics: Vec<Diagnostic>,
    selected_diagnostic: Option<usize>,
    caret: CaretPosition,
    caret_panel: String,
    dock_state: DockState,
    warnings: WarningPaneState,
    search_dialog: SearchDialogState,
    search_again_enabled: bool,
    last_search: Option<SearchOptions>,
    compiler: CompilerState,
    command_context: CommandContext,
    pending_write: Option<PathBuf>,
    host_save: Option<HostSaveRequest>,
    print_dialog: Option<PrintDialogRequest>,
    print_request: Option<PrintRequest>,
    printer_setup: Option<PrinterSetupRequest>,
    dock_request: Option<DockRequest>,
    close_request: Option<CloseRequest>,
    help_request: Option<HelpRequest>,
    forwarded_command: Option<u16>,
    navigation: Option<DiagnosticNavigation>,
    text_reveal: Option<TextReveal>,
    setting_write: Option<WarningSettingWrite>,
    error: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(
            ViewerMode::Standalone,
            PathBuf::from("netlist"),
            PathBuf::from("."),
        )
    }
}

impl Window {
    #[must_use]
    pub fn new(mode: ViewerMode, default_save_name: PathBuf, help_root: PathBuf) -> Self {
        let document = NetlistDocument::default();
        let caret = CaretPosition::default();
        Self {
            editor: text_editor::Content::with_text(&document.text),
            mode,
            document,
            guarded_action: None,
            default_save_name,
            help_root,
            netlist_generation: 0,
            status: String::new(),
            diagnostics: Vec::new(),
            selected_diagnostic: None,
            caret,
            caret_panel: caret.panel_text(),
            dock_state: DockState::Floating,
            warnings: WarningPaneState::Visible,
            search_dialog: SearchDialogState::Closed,
            search_again_enabled: false,
            last_search: None,
            compiler: CompilerState::Idle,
            command_context: CommandContext::Viewer,
            pending_write: None,
            host_save: None,
            print_dialog: None,
            print_request: None,
            printer_setup: None,
            dock_request: None,
            close_request: None,
            help_request: None,
            forwarded_command: None,
            navigation: None,
            text_reveal: None,
            setting_write: None,
            error: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::EditorAction(action) => {
                self.editor.perform(action);
                self.document.record_editor_text(self.editor.text());
            }
            Message::SelectionChanged(range, mode) => self.document.set_selection(range, mode),
            Message::New => return self.begin_guarded(GuardedAction::New),
            Message::Open => return self.begin_guarded(GuardedAction::Open),
            Message::UnsavedChoice(choice) => return self.finish_guarded(choice),
            Message::OpenSelected(path) => return Self::open_selected(path),
            Message::FileLoaded(result) => self.finish_open(result),
            Message::Save => self.save_document(),
            Message::SaveAs => return self.save_as_document(),
            Message::SavePathSelected(path) => return self.save_path_selected(path),
            Message::FileWritten(path, result) => self.finish_write(&path, result),
            Message::HostSaveFinished(success) => self.finish_host_save(success),
            Message::Print => self.print_document(),
            Message::PrintDialogFinished(accepted) => self.finish_print(accepted),
            Message::PrinterSetup => self.open_printer_setup(),
            Message::ToggleDock => self.toggle_docking(),
            Message::Exit => self.exit_viewer(),
            Message::Undo => self.undo(),
            Message::Cut => return self.cut(),
            Message::Copy => return self.copy(),
            Message::Paste => return self.paste(),
            Message::PasteText(text) => self.finish_paste(text),
            Message::Delete => self.delete_selection(),
            Message::SelectAll => self.select_all(),
            Message::Find => self.open_find(),
            Message::Replace => self.open_replace(),
            Message::SearchSubmitted(options) => self.run_search(&options),
            Message::SearchAgain => self.search_again(),
            Message::Compile => self.compile_document(),
            Message::ElectricalRulesCheck => self.run_electrical_rules_check(),
            Message::CompilerFinished(messages) => self.finish_compiler(messages),
            Message::ToggleWarnings => self.toggle_warnings(),
            Message::Help => self.open_help(),
            Message::CaretMoved(caret) => self.refresh_cursor(caret),
            Message::DiagnosticSelected(index) => self.selected_diagnostic = index,
            Message::EditSelectedSource => self.edit_selected_source(),
            Message::ClearMessages => self.clear_messages(),
            Message::RevealSpecialText(identifier, text, target) => {
                self.reveal_special_target(&identifier, &text, &target);
            }
        }
        Task::none()
    }

    pub const fn set_command_context_is_viewer(&mut self, is_viewer: bool) {
        self.command_context = if is_viewer {
            CommandContext::Viewer
        } else {
            CommandContext::OtherWindow
        };
    }

    /// Reimplements `FUN_014b5250` at Ghidra address `0x014B5250`.
    pub fn new_document(&mut self) {
        self.document.create_new();
        self.after_document_change();
    }

    /// Reimplements `FUN_014b52c0` at Ghidra address `0x014B52C0`.
    pub fn open_document(&self) -> Task<Message> {
        Task::perform(select_netlist_path(), Message::OpenSelected)
    }

    /// Reimplements `FUN_014b53c0` at Ghidra address `0x014B53C0`.
    pub fn save_document(&mut self) {
        if self.document.modified {
            let text = self.document.text.clone();
            self.document.mark_saved();
            self.host_save = Some(HostSaveRequest {
                text,
                clear_modified_on_success: false,
            });
        }
    }

    /// Reimplements `FUN_014b5430` at Ghidra address `0x014B5430`.
    pub fn save_as_document(&mut self) -> Task<Message> {
        match plan_save_as(self.mode, &self.document.text) {
            SaveAsRoute::SelectFile => Task::perform(
                select_save_path(self.default_save_name.clone()),
                Message::SavePathSelected,
            ),
            SaveAsRoute::Host(request) => {
                self.host_save = Some(request);
                Task::none()
            }
        }
    }

    /// Reimplements `FUN_014b5620` at Ghidra address `0x014B5620`.
    pub fn print_document(&mut self) {
        self.print_dialog = Some(PrintDialogRequest);
        self.print_request = None;
    }

    /// Reimplements `FUN_014b5760` at Ghidra address `0x014B5760`.
    pub const fn open_printer_setup(&mut self) {
        self.printer_setup = Some(PrinterSetupRequest);
    }

    /// Reimplements `FUN_014b5780` at Ghidra address `0x014B5780`.
    pub const fn toggle_docking(&mut self) {
        self.dock_state = match self.dock_state {
            DockState::Docked => DockState::Floating,
            DockState::Floating => DockState::Docked,
        };
        self.dock_request = Some(DockRequest {
            docked: matches!(self.dock_state, DockState::Docked),
            synchronize_host_menu: true,
        });
    }

    /// Reimplements `FUN_014b57f0` at Ghidra address `0x014B57F0`.
    pub fn exit_viewer(&mut self) {
        self.close_request = Some(plan_close(self.mode, &self.document.text));
    }

    /// Reimplements `FUN_014b5860` at Ghidra address `0x014B5860`.
    pub fn undo(&mut self) {
        if self.document.undo() {
            self.sync_editor();
        }
    }

    /// Reimplements `FUN_014b5880` at Ghidra address `0x014B5880`.
    pub fn cut(&mut self) -> Task<Message> {
        let Some(payload) = self.document.cut_selection() else {
            return Task::none();
        };
        self.sync_editor();
        iced::clipboard::write(payload.text)
    }

    /// Reimplements `FUN_014b58a0` at Ghidra address `0x014B58A0`.
    pub fn copy(&self) -> Task<Message> {
        self.document
            .copy_selection()
            .map_or_else(Task::none, |payload| iced::clipboard::write(payload.text))
    }

    /// Reimplements `FUN_014b58c0` at Ghidra address `0x014B58C0`.
    pub fn paste(&mut self) -> Task<Message> {
        if self.command_context == CommandContext::OtherWindow {
            self.forwarded_command = Some(PASTE_COMMAND_ID);
            Task::none()
        } else {
            iced::clipboard::read().map(Message::PasteText)
        }
    }

    /// Reimplements `FUN_014b5910` at Ghidra address `0x014B5910`.
    pub fn delete_selection(&mut self) {
        if self.document.delete_selection() {
            self.sync_editor();
        }
    }

    /// Reimplements `FUN_014b5930` at Ghidra address `0x014B5930`.
    pub fn select_all(&mut self) {
        self.document.select_all();
        self.editor.perform(text_editor::Action::SelectAll);
    }

    /// Reimplements `FUN_014b5950` at Ghidra address `0x014B5950`.
    pub const fn open_find(&mut self) {
        self.search_dialog = SearchDialogState::Find;
        self.search_again_enabled = true;
    }

    /// Reimplements `FUN_014b5980` at Ghidra address `0x014B5980`.
    pub const fn open_replace(&mut self) {
        self.search_dialog = SearchDialogState::Replace;
    }

    /// Reimplements `FUN_014b59a0` at Ghidra address `0x014B59A0`.
    pub fn search_again(&mut self) {
        if let Some(options) = self.last_search.clone() {
            self.apply_search(&options, false);
        }
    }

    /// Reimplements `FUN_014b59c0` at Ghidra address `0x014B59C0`.
    pub fn run_electrical_rules_check(&mut self) {
        self.compiler = CompilerState::Waiting(CompileRequest {
            kind: CompileKind::ElectricalRulesCheck,
            source: self.document.text.clone(),
            warning_source: self.warning_source(),
            thread_windows: ThreadWindowPolicy::KeepEnabled,
            compiler_context: CompilerContextPolicy::InstallAndRestore,
        });
    }

    /// Reimplements `FUN_014b5b50` at Ghidra address `0x014B5B50`.
    pub fn compile_document(&mut self) {
        self.compiler = CompilerState::Waiting(CompileRequest {
            kind: CompileKind::Compile,
            source: self.document.text.clone(),
            warning_source: self.warning_source(),
            thread_windows: ThreadWindowPolicy::DisableDuringCompile,
            compiler_context: CompilerContextPolicy::KeepCurrent,
        });
    }

    /// Reimplements `FUN_014b5ee0` at Ghidra address `0x014B5EE0`.
    pub const fn toggle_warnings(&mut self) {
        self.warnings = match self.warnings {
            WarningPaneState::Visible => WarningPaneState::Hidden,
            WarningPaneState::Hidden => WarningPaneState::Visible,
        };
    }

    /// Reimplements `FUN_014b5f90` at Ghidra address `0x014B5F90`.
    pub fn open_help(&mut self) {
        self.help_request = Some(HelpRequest {
            base_file: self.help_root.join("TINA.CHM"),
            context_id: HELP_CONTEXT_ID,
        });
    }

    /// Reimplements `FUN_014b6070` at Ghidra address `0x014B6070`.
    pub fn refresh_cursor(&mut self, caret: CaretPosition) {
        self.caret = caret;
        self.caret_panel = caret.panel_text();
    }

    /// Reimplements `FUN_014b6790` at Ghidra address `0x014B6790`.
    pub fn edit_selected_source(&mut self) {
        let Some(diagnostic) = self
            .selected_diagnostic
            .and_then(|index| self.diagnostics.get(index))
        else {
            return;
        };
        if let Some(navigation) = navigate_diagnostic(diagnostic) {
            self.caret.line = navigation.line;
            self.caret_panel = self.caret.panel_text();
            self.navigation = Some(navigation);
        }
    }

    /// Reimplements `FUN_014b67a0` at Ghidra address `0x014B67A0`.
    pub fn clear_messages(&mut self) {
        self.diagnostics.clear();
        self.selected_diagnostic = None;
    }

    /// Reimplements `FUN_014b67c0` at Ghidra address `0x014B67C0`.
    pub fn reveal_special_target(
        &mut self,
        editor_identifier: &str,
        editor_text: &str,
        target: &SpecialTextTarget,
    ) {
        self.text_reveal = reveal_special_text_target(editor_identifier, editor_text, target);
    }

    pub const fn destroy(&mut self) {
        self.setting_write = Some(WarningSettingWrite {
            section: "Netlist Editor",
            key: "ShowWarnings",
            visible: matches!(self.warnings, WarningPaneState::Visible),
        });
    }

    fn begin_guarded(&mut self, action: GuardedAction) -> Task<Message> {
        if self.document.modified {
            self.guarded_action = Some(action);
            Task::none()
        } else {
            self.continue_guarded(action)
        }
    }

    fn finish_guarded(&mut self, choice: SavePromptChoice) -> Task<Message> {
        let Some(action) = self.guarded_action.take() else {
            return Task::none();
        };
        match evaluate_unsaved_guard(true, Some(choice)) {
            GuardDecision::Cancel => Task::none(),
            GuardDecision::Continue { request_save } => {
                if request_save {
                    self.save_document();
                }
                self.continue_guarded(action)
            }
        }
    }

    fn continue_guarded(&mut self, action: GuardedAction) -> Task<Message> {
        match action {
            GuardedAction::New => {
                self.new_document();
                Task::none()
            }
            GuardedAction::Open => self.open_document(),
        }
    }

    fn open_selected(path: Option<PathBuf>) -> Task<Message> {
        let Some(path) = path else {
            return Task::none();
        };
        Task::perform(
            async move { read_netlist(&path).map_err(|error| error.to_string()) },
            Message::FileLoaded,
        )
    }

    fn finish_open(&mut self, result: Result<String, String>) {
        match result {
            Ok(text) => {
                self.document.load(text);
                self.after_document_change();
                self.error = None;
            }
            Err(error) => self.error = Some(error),
        }
    }

    fn save_path_selected(&mut self, path: Option<PathBuf>) -> Task<Message> {
        let Some(path) = path else {
            return Task::none();
        };
        self.pending_write = Some(path.clone());
        let write_path = path.clone();
        let text = self.document.text.clone();
        Task::perform(
            async move { write_netlist(&write_path, &text).map_err(|error| error.to_string()) },
            move |result| Message::FileWritten(path.clone(), result),
        )
    }

    fn finish_write(&mut self, path: &Path, result: Result<(), String>) {
        if self.pending_write.as_deref() == Some(path) {
            self.pending_write = None;
            self.error = result.err();
        }
    }

    fn finish_host_save(&mut self, success: bool) {
        if let Some(request) = self.host_save.take()
            && success
            && request.clear_modified_on_success
        {
            self.document.mark_saved();
        }
    }

    fn finish_print(&mut self, accepted: bool) {
        if self.print_dialog.take().is_none() {
            return;
        }
        if accepted {
            self.print_request = Some(PrintRequest {
                lines: self.document.text.split('\n').map(str::to_owned).collect(),
                font_family: "Monospace".to_owned(),
                font_size: 12,
            });
        }
    }

    fn finish_paste(&mut self, text: Option<String>) {
        if let Some(text) = text
            && self.document.paste(&ClipboardPayload {
                text,
                selection_mode: SelectionMode::Normal,
            })
        {
            self.sync_editor();
        }
    }

    fn run_search(&mut self, options: &SearchOptions) {
        let replace = self.search_dialog == SearchDialogState::Replace;
        self.last_search = Some(options.clone());
        self.apply_search(options, replace);
    }

    fn apply_search(&mut self, options: &SearchOptions, replace: bool) {
        let outcome = if replace {
            replace_matches(&mut self.document, options)
        } else {
            find_next(&mut self.document, options)
        };
        match outcome {
            SearchOutcome::NotFound => self.error = Some(format!("Not found: {}", options.query)),
            SearchOutcome::Found => self.error = None,
            SearchOutcome::Replaced(_) => {
                self.sync_editor();
                self.error = None;
            }
        }
    }

    fn finish_compiler(&mut self, messages: Vec<Diagnostic>) {
        self.compiler = CompilerState::Idle;
        self.diagnostics = messages;
        self.selected_diagnostic = None;
    }

    const fn warning_source(&self) -> WarningSource {
        match self.warnings {
            WarningPaneState::Visible => WarningSource::Visible,
            WarningPaneState::Hidden => WarningSource::Hidden,
        }
    }

    fn after_document_change(&mut self) {
        self.netlist_generation = self.netlist_generation.saturating_add(1);
        self.status.clear();
        self.clear_messages();
        self.sync_editor();
    }

    fn sync_editor(&mut self) {
        self.editor = text_editor::Content::with_text(&self.document.text);
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let toolbar = row![
            button("New").on_press(Message::New),
            button("Open").on_press(Message::Open),
            button("Save").on_press(Message::Save),
            button("Save As").on_press(Message::SaveAs),
            button("Undo").on_press(Message::Undo),
            button("Cut").on_press(Message::Cut),
            button("Copy").on_press(Message::Copy),
            button("Paste").on_press(Message::Paste),
            button("Compile").on_press(Message::Compile),
            button("ERC").on_press(Message::ElectricalRulesCheck),
        ]
        .spacing(6);
        let editor = text_editor(&self.editor)
            .on_action(Message::EditorAction)
            .height(Length::FillPortion(3));
        let messages =
            self.diagnostics
                .iter()
                .enumerate()
                .fold(column![], |list, (index, diagnostic)| {
                    list.push(
                        button(text(&diagnostic.message))
                            .on_press(Message::DiagnosticSelected(Some(index))),
                    )
                });
        let warnings = container(scrollable(messages))
            .height(if matches!(self.warnings, WarningPaneState::Visible) {
                Length::FillPortion(1)
            } else {
                Length::Shrink
            })
            .width(Length::Fill);
        let mut layout = column![toolbar];
        if self.guarded_action.is_some() {
            layout = layout.push(row![
                text("Save changes?"),
                button("Yes").on_press(Message::UnsavedChoice(SavePromptChoice::Yes)),
                button("No").on_press(Message::UnsavedChoice(SavePromptChoice::No)),
                button("Cancel").on_press(Message::UnsavedChoice(SavePromptChoice::Cancel)),
            ]);
        }
        layout
            .push(editor)
            .push(warnings)
            .push(text(&self.caret_panel))
            .spacing(8)
            .padding(12)
            .into()
    }
}

async fn select_netlist_path() -> Option<PathBuf> {
    AsyncFileDialog::new()
        .add_filter("Netlist", &["net", "cir", "txt"])
        .pick_file()
        .await
        .map(|file| file.path().to_path_buf())
}

async fn select_save_path(default_name: PathBuf) -> Option<PathBuf> {
    let name = default_name
        .file_name()
        .and_then(|name| name.to_str())
        .unwrap_or("netlist");
    AsyncFileDialog::new()
        .add_filter("Netlist", &["net", "cir", "txt"])
        .set_file_name(name)
        .save_file()
        .await
        .map(|file| file.path().to_path_buf())
}

#[cfg(test)]
mod tests {
    use super::{Message, WarningPaneState, Window};
    use std::path::{Path, PathBuf};
    use tiara_core::netlist_viewer::{
        CaretPosition, CloseRequest, CompileKind, CompilerContextPolicy, Diagnostic,
        SavePromptChoice, SearchOptions, SelectionMode, SpecialTextTarget, ThreadWindowPolicy,
        ViewerMode,
    };

    fn window(mode: ViewerMode) -> Window {
        Window::new(mode, PathBuf::from("default.net"), PathBuf::from("help"))
    }

    fn update(window: &mut Window, message: Message) {
        let _task = window.update(message);
    }

    #[test]
    fn guarded_new_requests_save_but_continues_before_its_result() {
        let mut window = window(ViewerMode::Integrated);
        window.document.record_editor_text("old".to_owned());
        update(&mut window, Message::New);
        update(&mut window, Message::UnsavedChoice(SavePromptChoice::Yes));
        assert_eq!(window.host_save.as_ref().expect("save").text, "old");
        assert!(window.document.text.is_empty());
        assert!(window.document.modified);
        assert_eq!(window.netlist_generation, 1);
    }

    #[test]
    fn open_cancel_is_no_op_and_loaded_text_stays_modified() {
        let mut window = window(ViewerMode::Standalone);
        window.document.record_editor_text("old".to_owned());
        update(&mut window, Message::Open);
        update(
            &mut window,
            Message::UnsavedChoice(SavePromptChoice::Cancel),
        );
        assert_eq!(window.document.text, "old");
        update(&mut window, Message::FileLoaded(Ok("new".to_owned())));
        assert_eq!(window.document.text, "new");
        assert!(window.document.modified);
    }

    #[test]
    fn save_routes_preserve_recovered_modified_state_timing() {
        let mut integrated = window(ViewerMode::Integrated);
        integrated.document.record_editor_text("text".to_owned());
        update(&mut integrated, Message::Save);
        assert!(!integrated.document.modified);
        integrated.document.record_editor_text("changed".to_owned());
        update(&mut integrated, Message::SaveAs);
        assert!(integrated.document.modified);
        update(&mut integrated, Message::HostSaveFinished(true));
        assert!(!integrated.document.modified);

        let mut standalone = window(ViewerMode::Standalone);
        standalone.document.record_editor_text("text".to_owned());
        update(
            &mut standalone,
            Message::SavePathSelected(Some(PathBuf::from("out.net"))),
        );
        update(
            &mut standalone,
            Message::FileWritten(PathBuf::from("out.net"), Ok(())),
        );
        assert!(standalone.document.modified);
    }

    #[test]
    fn print_dock_setup_and_exit_are_typed_host_requests() {
        let mut window = window(ViewerMode::Integrated);
        window.document.record_editor_text("a\nb".to_owned());
        update(&mut window, Message::Print);
        assert!(window.print_dialog.is_some());
        update(&mut window, Message::PrintDialogFinished(true));
        assert_eq!(
            window.print_request.as_ref().expect("print").lines,
            ["a", "b"]
        );
        update(&mut window, Message::PrinterSetup);
        assert!(window.printer_setup.is_some());
        update(&mut window, Message::ToggleDock);
        assert!(window.dock_request.expect("dock").docked);
        update(&mut window, Message::Exit);
        assert!(matches!(
            window.close_request,
            Some(CloseRequest::CloseIntegratedEditor { .. })
        ));
    }

    #[test]
    fn editing_commands_preserve_grouped_undo_and_forwarded_paste() {
        let mut window = window(ViewerMode::Standalone);
        window.document.record_editor_text("abcdef".to_owned());
        update(
            &mut window,
            Message::SelectionChanged(1..4, SelectionMode::Column),
        );
        update(&mut window, Message::Cut);
        assert_eq!(window.document.text, "aef");
        update(&mut window, Message::Undo);
        assert_eq!(window.document.text, "abcdef");
        update(&mut window, Message::Delete);
        assert_eq!(window.document.text, "aef");
        window.set_command_context_is_viewer(false);
        update(&mut window, Message::Paste);
        assert_eq!(window.forwarded_command, Some(0x0302));
    }

    #[test]
    fn find_and_search_again_reuse_options() {
        let mut window = window(ViewerMode::Standalone);
        window.document.record_editor_text("R1 R2 R1".to_owned());
        update(
            &mut window,
            Message::SelectionChanged(0..0, SelectionMode::Normal),
        );
        update(&mut window, Message::Find);
        update(
            &mut window,
            Message::SearchSubmitted(SearchOptions {
                query: "R1".to_owned(),
                ..SearchOptions::default()
            }),
        );
        assert_eq!(window.document.selection, 0..2);
        update(&mut window, Message::SearchAgain);
        assert_eq!(window.document.selection, 6..8);
    }

    #[test]
    fn compile_and_erc_keep_thread_and_context_policies() {
        let mut window = window(ViewerMode::Standalone);
        update(&mut window, Message::Compile);
        let super::CompilerState::Waiting(compile) = &window.compiler else {
            panic!("compile request")
        };
        assert_eq!(compile.kind, CompileKind::Compile);
        assert_eq!(
            compile.thread_windows,
            ThreadWindowPolicy::DisableDuringCompile
        );
        update(&mut window, Message::ElectricalRulesCheck);
        let super::CompilerState::Waiting(erc) = &window.compiler else {
            panic!("erc request")
        };
        assert_eq!(
            erc.compiler_context,
            CompilerContextPolicy::InstallAndRestore
        );
    }

    #[test]
    fn warnings_help_and_cursor_preserve_document() {
        let mut window = window(ViewerMode::Standalone);
        let before = window.document.clone();
        window.diagnostics.push(Diagnostic {
            message: "warning".to_owned(),
            source_line: None,
            source_identifier: None,
        });
        update(&mut window, Message::ToggleWarnings);
        assert_eq!(window.warnings, WarningPaneState::Hidden);
        assert_eq!(window.diagnostics.len(), 1);
        window.destroy();
        assert!(!window.setting_write.as_ref().expect("setting").visible);
        update(&mut window, Message::Help);
        assert_eq!(
            window.help_request.as_ref().expect("help").base_file,
            Path::new("help/TINA.CHM")
        );
        update(
            &mut window,
            Message::CaretMoved(CaretPosition { line: 4, column: 7 }),
        );
        assert_eq!(window.caret_panel, "Line:4 Col:7");
        assert_eq!(window.document, before);
    }

    #[test]
    fn diagnostic_navigation_clear_and_special_reveal_are_safe() {
        let mut window = window(ViewerMode::Standalone);
        update(&mut window, Message::EditSelectedSource);
        assert!(window.navigation.is_none());
        update(
            &mut window,
            Message::CompilerFinished(vec![Diagnostic {
                message: "line".to_owned(),
                source_line: Some(12),
                source_identifier: None,
            }]),
        );
        update(&mut window, Message::DiagnosticSelected(Some(0)));
        update(&mut window, Message::EditSelectedSource);
        assert_eq!(window.navigation.as_ref().expect("navigation").line, 12);
        let target = SpecialTextTarget {
            document_identifier: "macro".to_owned(),
            needle: "R1".to_owned(),
        };
        update(
            &mut window,
            Message::RevealSpecialText("macro".to_owned(), "xx R1".to_owned(), target),
        );
        assert_eq!(window.text_reveal.as_ref().expect("reveal").caret, 3);
        update(&mut window, Message::ClearMessages);
        assert!(window.diagnostics.is_empty());
    }
}
