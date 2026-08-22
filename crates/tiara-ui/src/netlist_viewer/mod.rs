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
pub const SYNTAX_SCHEME: &str = "bmSpice";
pub const SPECIAL_LINE_FOREGROUND: [u8; 4] = [255, 255, 255, 255];
pub const SPECIAL_LINE_BACKGROUND: [u8; 4] = [128, 0, 0, 255];
pub const MINIMUM_DRAG_Y: i32 = 0x7d;
pub const LIBRARY_EVALUATION: &str = "iced supplies editor state, tasks, widgets, and standard text clipboard operations; rfd supplies maintained file dialogs; std supplies files, paths, ranges, undo snapshots, search, formatting, and RAII cleanup. Printing, docking, host saves, compilation, ERC, clipboard-format availability, lifecycle coordination, associated-source resolution, help, and schematic navigation remain typed host adapters.";

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

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct CommandAvailability {
    has_selection: bool,
    clipboard_text_available: bool,
}

impl CommandAvailability {
    #[must_use]
    pub const fn cut(self) -> bool {
        self.has_selection
    }

    #[must_use]
    pub const fn copy(self) -> bool {
        self.has_selection
    }

    #[must_use]
    pub const fn paste(self) -> bool {
        self.clipboard_text_available
    }

    #[must_use]
    pub const fn delete(self) -> bool {
        self.has_selection
    }

    #[must_use]
    pub const fn copy_button(self) -> bool {
        self.has_selection
    }

    #[must_use]
    pub const fn paste_button(self) -> bool {
        self.clipboard_text_available
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DragSource {
    WarningSeparator,
    Other,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct WarningDragLayout {
    pub separator_half_height: i32,
    pub minimum_list_height: i32,
    pub list_height: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ShowState {
    pub warnings_visible: bool,
    pub separator_height: i32,
    pub warning_list_height: i32,
    pub host_docked: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SpecialLineStyle {
    pub foreground: [u8; 4],
    pub background: [u8; 4],
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DiagnosticResolutionRequest {
    pub editor_text: String,
    pub source_identifier: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct HostActivationRequest;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct HostCloseQueryRequest;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CloseSearchDialogsRequest;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FormCloseAction {
    Free,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
struct LifecycleState {
    closing: bool,
    special_line_highlight: bool,
    registered_with_host: bool,
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
    Idle {
        clipboard_text_available: bool,
    },
    Show(ShowState),
    Close,
    CloseQuery {
        host_available: bool,
    },
    Activate {
        host_available: bool,
    },
    DragOver {
        source: DragSource,
        pointer_y: i32,
        client_height: i32,
    },
    KeyDown,
    KeyUp,
    MouseDown,
    DiagnosticResolved(Option<usize>),
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
    commands: CommandAvailability,
    warning_drag: WarningDragLayout,
    lifecycle: LifecycleState,
    syntax_refresh_generation: u64,
    special_line: Option<usize>,
    diagnostic_resolution: Option<DiagnosticResolutionRequest>,
    form_close_action: Option<FormCloseAction>,
    close_find_dialogs: Option<CloseSearchDialogsRequest>,
    host_close_query: Option<HostCloseQueryRequest>,
    activation_request: Option<HostActivationRequest>,
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
    /// Ports Ghidra `FUN_014b4bf0` at `0x014B4BF0`.
    ///
    /// Owned Rust fields and RAII replace the recovered helper, compiler,
    /// settings, and diagnostic-object allocations. The host performs global
    /// viewer registration after it observes `registered_with_host`. The
    /// recovered localized cursor-label resource lookup remains a host concern;
    /// the core document currently formats the stable English labels.
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
            commands: CommandAvailability::default(),
            warning_drag: WarningDragLayout::default(),
            lifecycle: LifecycleState {
                registered_with_host: true,
                ..LifecycleState::default()
            },
            syntax_refresh_generation: 1,
            special_line: None,
            diagnostic_resolution: None,
            form_close_action: None,
            close_find_dialogs: None,
            host_close_query: None,
            activation_request: None,
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
            Message::Idle {
                clipboard_text_available,
            } => self.synchronize_idle_commands(clipboard_text_available),
            Message::Show(state) => self.show(state),
            Message::Close => self.close(),
            Message::CloseQuery { host_available } => {
                self.query_close(host_available);
            }
            Message::Activate { host_available } => self.activate(host_available),
            Message::DragOver {
                source,
                pointer_y,
                client_height,
            } => {
                self.drag_warning_separator(source, pointer_y, client_height);
            }
            Message::KeyDown | Message::MouseDown => self.clear_special_line_highlight(),
            Message::KeyUp => self.key_released(),
            Message::DiagnosticResolved(line) => self.finish_diagnostic_resolution(line),
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

    #[must_use]
    pub const fn command_availability(&self) -> CommandAvailability {
        self.commands
    }

    #[must_use]
    pub const fn warning_drag_layout(&self) -> WarningDragLayout {
        self.warning_drag
    }

    #[must_use]
    pub const fn special_line(&self) -> Option<usize> {
        self.special_line
    }

    #[must_use]
    pub const fn diagnostic_resolution(&self) -> Option<&DiagnosticResolutionRequest> {
        self.diagnostic_resolution.as_ref()
    }

    /// Ports Ghidra `FUN_014b4430` at `0x014B4430`.
    ///
    /// The window host supplies the platform clipboard text-format probe.
    pub const fn synchronize_idle_commands(&mut self, clipboard_text_available: bool) {
        if self.lifecycle.closing {
            return;
        }
        let has_selection = self.document.selection.start != self.document.selection.end;
        self.commands = CommandAvailability {
            has_selection,
            clipboard_text_available,
        };
    }

    /// Ports Ghidra `FUN_014b4fd0` at `0x014B4FD0`.
    ///
    /// The host reads the persisted warning preference and current dock state,
    /// then supplies them in `ShowState`.
    pub const fn show(&mut self, state: ShowState) {
        self.warning_drag = WarningDragLayout {
            separator_half_height: state.separator_height / 2,
            minimum_list_height: state.warning_list_height,
            list_height: state.warning_list_height,
        };
        self.warnings = if state.warnings_visible {
            WarningPaneState::Visible
        } else {
            WarningPaneState::Hidden
        };
        self.dock_state = if state.host_docked {
            DockState::Docked
        } else {
            DockState::Floating
        };
        self.activation_request = Some(HostActivationRequest);
    }

    /// Ports Ghidra `FUN_014b5170` at `0x014B5170`.
    pub const fn close(&mut self) {
        self.form_close_action = Some(FormCloseAction::Free);
        self.close_find_dialogs = Some(CloseSearchDialogsRequest);
    }

    /// Ports Ghidra `FUN_014b51a0` at `0x014B51A0`.
    pub fn query_close(&mut self, host_available: bool) -> bool {
        self.host_close_query =
            (self.mode == ViewerMode::Standalone && host_available && self.document.modified)
                .then_some(HostCloseQueryRequest);
        self.lifecycle.closing = true;
        true
    }

    /// Ports Ghidra `FUN_014b5220` at `0x014B5220`.
    pub const fn activate(&mut self, host_available: bool) {
        if host_available {
            self.activation_request = Some(HostActivationRequest);
        }
    }

    /// Ports Ghidra `FUN_014b6080` at `0x014B6080`.
    ///
    /// The iced event adapter must supply `pointer_y` in form-client
    /// coordinates, matching the conversion performed by the recovered VCL
    /// handler.
    pub fn drag_warning_separator(
        &mut self,
        source: DragSource,
        pointer_y: i32,
        client_height: i32,
    ) -> bool {
        if source != DragSource::WarningSeparator {
            return false;
        }
        let pointer_y = pointer_y.max(MINIMUM_DRAG_Y);
        let proposed = client_height
            .saturating_sub(pointer_y)
            .saturating_sub(self.warning_drag.separator_half_height);
        self.warning_drag.list_height = proposed.max(self.warning_drag.minimum_list_height);
        true
    }

    /// Ports Ghidra `FUN_014b6130` at `0x014B6130` and `FUN_014b6190` at
    /// `0x014B6190`.
    pub const fn clear_special_line_highlight(&mut self) {
        if self.lifecycle.special_line_highlight {
            self.lifecycle.special_line_highlight = false;
        }
    }

    /// Ports Ghidra `FUN_014b6150` at `0x014B6150`.
    pub fn key_released(&mut self) {
        self.syntax_refresh_generation = self.syntax_refresh_generation.saturating_add(1);
        self.status.clear();
        self.caret_panel = self.caret.panel_text();
    }

    /// Ports Ghidra `FUN_014b61b0` at `0x014B61B0`.
    #[must_use]
    pub fn special_line_style(&self, line: usize) -> Option<SpecialLineStyle> {
        if self.lifecycle.special_line_highlight && self.special_line == Some(line) {
            Some(SpecialLineStyle {
                foreground: SPECIAL_LINE_FOREGROUND,
                background: SPECIAL_LINE_BACKGROUND,
            })
        } else {
            None
        }
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
            self.find_from_dialog(&options);
        }
    }

    /// Ports Ghidra `FUN_014b61e0` at `0x014B61E0`.
    ///
    /// The search engine preserves the recovered options and selection changes.
    /// Exact localization of the recovered not-found resource remains a host
    /// integration gap.
    pub fn find_from_dialog(&mut self, options: &SearchOptions) {
        self.last_search = Some(options.clone());
        let outcome = find_next(&mut self.document, options);
        self.record_search_outcome(options, outcome);
    }

    /// Ports Ghidra `FUN_014b6360` at `0x014B6360`.
    pub fn replace_from_dialog(&mut self, options: &SearchOptions) {
        self.last_search = Some(options.clone());
        let outcome = replace_matches(&mut self.document, options);
        self.record_search_outcome(options, outcome);
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

    /// Ports Ghidra `FUN_014b64f0` at `0x014B64F0`; the popup wrapper
    /// `FUN_014b6790` delegates to the same operation.
    ///
    /// Native diagnostic-object lookup is represented by the typed
    /// `DiagnosticResolutionRequest`; the application host resolves that
    /// request and returns `Message::DiagnosticResolved`.
    pub fn edit_selected_source(&mut self) {
        let Some(diagnostic) = self
            .selected_diagnostic
            .and_then(|index| self.diagnostics.get(index))
            .cloned()
        else {
            return;
        };
        self.clear_special_line_highlight();
        if let Some(navigation) = navigate_diagnostic(&diagnostic) {
            self.apply_diagnostic_navigation(navigation);
        } else if let Some(source_identifier) = diagnostic.source_identifier {
            self.diagnostic_resolution = Some(DiagnosticResolutionRequest {
                editor_text: self.document.text.clone(),
                source_identifier,
            });
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

    /// Ports Ghidra `FUN_014b4ea0` at `0x014B4EA0`.
    ///
    /// Rust RAII releases the recovered owned compiler, settings, diagnostic,
    /// and syntax objects after the warning preference is staged for the host.
    pub const fn destroy(&mut self) {
        self.setting_write = Some(WarningSettingWrite {
            section: "Netlist Editor",
            key: "ShowWarnings",
            visible: matches!(self.warnings, WarningPaneState::Visible),
        });
        self.lifecycle.registered_with_host = false;
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
        if self.search_dialog == SearchDialogState::Replace {
            self.replace_from_dialog(options);
        } else {
            self.find_from_dialog(options);
        }
    }

    fn record_search_outcome(&mut self, options: &SearchOptions, outcome: SearchOutcome) {
        match outcome {
            SearchOutcome::NotFound => self.error = Some(format!("Not found: {}", options.query)),
            SearchOutcome::Found => self.error = None,
            SearchOutcome::Replaced(_) => {
                self.sync_editor();
                self.error = None;
            }
        }
    }

    fn finish_diagnostic_resolution(&mut self, line: Option<usize>) {
        if self.diagnostic_resolution.take().is_some()
            && let Some(line) = line
        {
            self.apply_diagnostic_navigation(DiagnosticNavigation {
                line,
                scroll_into_view: true,
                highlight_special_line: true,
            });
        }
    }

    fn apply_diagnostic_navigation(&mut self, navigation: DiagnosticNavigation) {
        self.clear_special_line_highlight();
        self.special_line = Some(navigation.line);
        self.caret = CaretPosition {
            line: navigation.line,
            column: 1,
        };
        self.caret_panel = self.caret.panel_text();
        self.lifecycle.special_line_highlight = navigation.highlight_special_line;
        self.navigation = Some(navigation);
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
        let cut = button("Cut");
        let cut = if self.commands.cut() {
            cut.on_press(Message::Cut)
        } else {
            cut
        };
        let copy = button("Copy");
        let copy = if self.commands.copy_button() {
            copy.on_press(Message::Copy)
        } else {
            copy
        };
        let paste = button("Paste");
        let paste = if self.commands.paste_button() {
            paste.on_press(Message::Paste)
        } else {
            paste
        };
        let toolbar = row![
            button("New").on_press(Message::New),
            button("Open").on_press(Message::Open),
            button("Save").on_press(Message::Save),
            button("Save As").on_press(Message::SaveAs),
            button("Undo").on_press(Message::Undo),
            cut,
            copy,
            paste,
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
    use super::{
        DragSource, FormCloseAction, Message, ShowState, SpecialLineStyle, WarningPaneState, Window,
    };
    use std::path::{Path, PathBuf};
    use tiara_core::netlist_viewer::{
        CaretPosition, CloseRequest, CompileKind, CompilerContextPolicy, Diagnostic, ReplaceMode,
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

    #[test]
    fn idle_synchronizes_selection_and_clipboard_commands_until_close_query() {
        let mut window = window(ViewerMode::Standalone);
        window.document.record_editor_text("abc".to_owned());
        window.document.set_selection(0..2, SelectionMode::Normal);
        update(
            &mut window,
            Message::Idle {
                clipboard_text_available: true,
            },
        );
        let commands = window.command_availability();
        assert!(commands.cut() && commands.copy() && commands.delete());
        assert!(commands.paste() && commands.copy_button() && commands.paste_button());

        assert!(window.query_close(true));
        assert!(window.host_close_query.is_some());
        window.document.set_selection(0..0, SelectionMode::Normal);
        window.synchronize_idle_commands(false);
        assert_eq!(window.command_availability(), commands);
    }

    #[test]
    fn show_close_activate_and_destroy_keep_lifecycle_outputs_typed() {
        let mut window = window(ViewerMode::Integrated);
        update(
            &mut window,
            Message::Show(ShowState {
                warnings_visible: false,
                separator_height: 7,
                warning_list_height: 56,
                host_docked: true,
            }),
        );
        assert_eq!(window.warnings, WarningPaneState::Hidden);
        assert_eq!(window.warning_drag.separator_half_height, 3);
        assert_eq!(window.warning_drag.minimum_list_height, 56);
        assert!(matches!(window.dock_state, super::DockState::Docked));
        assert!(window.activation_request.is_some());

        update(&mut window, Message::Close);
        assert_eq!(window.form_close_action, Some(FormCloseAction::Free));
        assert!(window.close_find_dialogs.is_some());
        window.activation_request = None;
        window.activate(false);
        assert!(window.activation_request.is_none());
        update(
            &mut window,
            Message::Activate {
                host_available: true,
            },
        );
        assert!(window.activation_request.is_some());
        window.destroy();
        assert!(!window.lifecycle.registered_with_host);
        assert!(!window.setting_write.expect("setting").visible);
    }

    #[test]
    fn drag_resizes_only_from_separator_and_preserves_minimum_height() {
        let mut window = window(ViewerMode::Standalone);
        window.show(ShowState {
            warnings_visible: true,
            separator_height: 7,
            warning_list_height: 56,
            host_docked: false,
        });
        assert!(!window.drag_warning_separator(DragSource::Other, 200, 300));
        assert_eq!(window.warning_drag_layout().list_height, 56);
        assert!(window.drag_warning_separator(DragSource::WarningSeparator, 50, 300));
        assert_eq!(window.warning_drag_layout().list_height, 172);
        assert!(window.drag_warning_separator(DragSource::WarningSeparator, 290, 300));
        assert_eq!(window.warning_drag_layout().list_height, 56);
    }

    #[test]
    fn input_events_clear_or_refresh_the_diagnostic_line_marker() {
        let mut window = window(ViewerMode::Standalone);
        window.diagnostics.push(Diagnostic {
            message: "line".to_owned(),
            source_line: Some(12),
            source_identifier: None,
        });
        window.selected_diagnostic = Some(0);
        window.edit_selected_source();
        assert_eq!(
            window.caret,
            CaretPosition {
                line: 12,
                column: 1
            }
        );
        assert_eq!(
            window.special_line_style(12),
            Some(SpecialLineStyle {
                foreground: [255; 4],
                background: [128, 0, 0, 255],
            })
        );
        update(&mut window, Message::MouseDown);
        assert!(window.special_line_style(12).is_none());

        window.edit_selected_source();
        window.status = "old".to_owned();
        let generation = window.syntax_refresh_generation;
        update(&mut window, Message::KeyUp);
        assert_eq!(window.syntax_refresh_generation, generation + 1);
        assert!(window.status.is_empty());
        assert!(window.special_line_style(12).is_some());
        update(&mut window, Message::KeyDown);
        assert!(window.special_line_style(12).is_none());
    }

    #[test]
    fn find_and_replace_dialog_callbacks_preserve_options_and_errors() {
        let mut window = window(ViewerMode::Standalone);
        window.document.record_editor_text("R1 r1 R10".to_owned());
        window.document.selection = 0..0;
        let find = SearchOptions {
            query: "r1".to_owned(),
            case_sensitive: false,
            whole_word: true,
            ..SearchOptions::default()
        };
        window.find_from_dialog(&find);
        assert_eq!(window.document.selection, 0..2);
        window.find_from_dialog(&find);
        assert_eq!(window.document.selection, 3..5);

        window.document.selection = 0..0;
        window.replace_from_dialog(&SearchOptions {
            replacement: "X".to_owned(),
            replace_mode: ReplaceMode::All,
            ..find.clone()
        });
        assert_eq!(window.document.text, "X X R10");
        window.find_from_dialog(&SearchOptions {
            query: "missing".to_owned(),
            ..SearchOptions::default()
        });
        assert_eq!(window.error.as_deref(), Some("Not found: missing"));
    }

    #[test]
    fn diagnostic_double_click_requests_resolution_for_associated_sources() {
        let mut window = window(ViewerMode::Standalone);
        window.document.record_editor_text("source".to_owned());
        window.diagnostics.push(Diagnostic {
            message: "associated".to_owned(),
            source_line: None,
            source_identifier: Some("macro-a".to_owned()),
        });
        window.selected_diagnostic = Some(0);
        window.edit_selected_source();
        assert_eq!(
            window
                .diagnostic_resolution()
                .expect("resolution")
                .source_identifier,
            "macro-a"
        );
        update(&mut window, Message::DiagnosticResolved(Some(7)));
        assert_eq!(window.caret, CaretPosition { line: 7, column: 1 });
        assert!(window.special_line_style(7).is_some());
        assert!(
            window
                .navigation
                .as_ref()
                .expect("navigation")
                .scroll_into_view
        );
    }
}
