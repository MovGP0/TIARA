//! Iced state adapter for the recovered Netlist Editor family.

use std::ops::Range;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, row, scrollable, text, text_editor};
use iced::{Element, Length, Task};
use rfd::AsyncFileDialog;
use tiara_core::analysis_options::AnalysisOptions;
use tiara_core::analysis_result_publishing::AnalysisResultManager;
use tiara_core::netlist_editor::{
    AnalysisCommand, AnalysisCompletion, AnalysisPublication, AnalysisRequest, EditorCompileKind,
    EditorCompileRequest, HelpRequest, NetlistEditorDocument, PASTE_COMMAND_ID,
    ParameterDialogCommit, ParameterDirectiveWrite, PrintJobRequest, SaveFileRequest, SavePlan,
    SimulationParameterSnapshot, WarningVisibility, compile_request, complete_analysis,
    diagnostic_navigation, help_request, print_job,
};
use tiara_core::netlist_viewer::{
    ClipboardPayload, Diagnostic, DiagnosticNavigation, GuardDecision, SavePromptChoice,
    SearchOptions, SearchOutcome, SelectionMode, evaluate_unsaved_guard, find_next, read_netlist,
    replace_matches, write_netlist,
};

use crate::advanced_analysis_options::AdvancedOptions;
use crate::analysis_options::{AcceptedAnalysisOptions, Window as AnalysisOptionsWindow};

pub const TITLE: &str = "Netlist Editor";
pub const FORM_RESOURCE: &str = "NetlistEditor";
pub const LIBRARY_EVALUATION: &str = "iced supplies the editor, tasks, messages, widgets, and clipboard; rfd supplies maintained file dialogs; std supplies files, paths, ranges, text search, and recent-file state. tiara_core::netlist_viewer supplies shared grouped editing and search without changing its API. AnalysisResultManager publishes recovered transient and DC-transfer results. Existing analysis_options and related analysis-dialog modules remain dialog owners behind typed requests. Compiler, ERC, printer, solver, symbolic-engine, result-form, mode-dialog, parameter-dialog, help, and source-navigation services stay typed TINA host ports.";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum GuardedAction {
    New,
    Open,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
enum FocusContext {
    #[default]
    Editor,
    OtherControl,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum SearchDialogState {
    #[default]
    Closed,
    Find,
    Replace,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CompileJob {
    pub id: u64,
    pub request: EditorCompileRequest,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AnalysisJob {
    pub id: u64,
    pub request: AnalysisRequest,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PrintDialogRequest;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PrinterSetupRequest;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CloseFormRequest;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ModeDialogRequest;

#[derive(Debug, Clone, PartialEq)]
pub struct ParameterDialogRequest {
    pub snapshot: SimulationParameterSnapshot,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct OptionsDialogRequest;

#[derive(Debug, Clone)]
pub enum Message {
    EditorAction(text_editor::Action),
    SelectionChanged(Range<usize>, SelectionMode),
    New,
    Open,
    UnsavedChoice(SavePromptChoice),
    OpenSelected(Option<PathBuf>),
    FileLoaded(PathBuf, Result<String, String>),
    Save,
    SaveAs,
    SavePathSelected(Option<PathBuf>),
    FileWritten(PathBuf, Result<(), String>),
    Print,
    PrintDialogFinished(bool),
    PrinterSetup,
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
    ElectricalRulesCheck,
    Compile,
    CompilerFinished {
        request_id: u64,
        diagnostics: Vec<Diagnostic>,
    },
    Mode,
    ModeFinished,
    SetParameters,
    ParametersFinished(Option<ParameterDialogCommit>),
    RunAnalysis(AnalysisCommand),
    AnalysisFinished {
        request_id: u64,
        completion: AnalysisCompletion,
    },
    Options,
    OptionsFinished(Option<AcceptedAnalysisOptions>),
    ToggleWarnings,
    Help,
    DiagnosticSelected(Option<usize>),
    EditSelectedSource,
    ClearMessages,
}

#[derive(Debug)]
pub struct Window {
    document: NetlistEditorDocument,
    editor: text_editor::Content,
    guarded_action: Option<GuardedAction>,
    guard_save_continuation: Option<GuardedAction>,
    help_root: PathBuf,
    focus_context: FocusContext,
    search_dialog: SearchDialogState,
    search_again_enabled: bool,
    last_search: Option<SearchOptions>,
    print_dialog: Option<PrintDialogRequest>,
    print_request: Option<PrintJobRequest>,
    printer_setup: Option<PrinterSetupRequest>,
    close_request: Option<CloseFormRequest>,
    forwarded_command: Option<u16>,
    next_request_id: u64,
    compile_job: Option<CompileJob>,
    analysis_job: Option<AnalysisJob>,
    analysis_results: AnalysisResultManager,
    analysis_publication: Option<AnalysisPublication>,
    mode_dialog: Option<ModeDialogRequest>,
    parameter_dialog: Option<ParameterDialogRequest>,
    parameters: SimulationParameterSnapshot,
    parameter_directive: Option<ParameterDirectiveWrite>,
    options_dialog: Option<OptionsDialogRequest>,
    options: AnalysisOptions,
    advanced_options: AdvancedOptions,
    committed_options: Option<AcceptedAnalysisOptions>,
    warnings: WarningVisibility,
    diagnostics: Vec<Diagnostic>,
    selected_diagnostic: Option<usize>,
    navigation: Option<DiagnosticNavigation>,
    pending_write: Option<SaveFileRequest>,
    help_request: Option<HelpRequest>,
    error: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(
            PathBuf::from("."),
            AnalysisOptions::default(),
            AdvancedOptions::default(),
        )
    }
}

impl Window {
    #[must_use]
    pub fn new(
        help_root: PathBuf,
        options: AnalysisOptions,
        advanced_options: AdvancedOptions,
    ) -> Self {
        let document = NetlistEditorDocument::default();
        Self {
            editor: text_editor::Content::with_text(&document.editor.text),
            document,
            guarded_action: None,
            guard_save_continuation: None,
            help_root,
            focus_context: FocusContext::Editor,
            search_dialog: SearchDialogState::Closed,
            search_again_enabled: false,
            last_search: None,
            print_dialog: None,
            print_request: None,
            printer_setup: None,
            close_request: None,
            forwarded_command: None,
            next_request_id: 1,
            compile_job: None,
            analysis_job: None,
            analysis_results: AnalysisResultManager::default(),
            analysis_publication: None,
            mode_dialog: None,
            parameter_dialog: None,
            parameters: SimulationParameterSnapshot::default(),
            parameter_directive: None,
            options_dialog: None,
            options,
            advanced_options,
            committed_options: None,
            warnings: WarningVisibility::Visible,
            diagnostics: Vec::new(),
            selected_diagnostic: None,
            navigation: None,
            pending_write: None,
            help_request: None,
            error: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::EditorAction(action) => {
                self.editor.perform(action);
                self.document.editor.record_editor_text(self.editor.text());
            }
            Message::SelectionChanged(selection, mode) => {
                self.document.editor.set_selection(selection, mode);
            }
            Message::New => return self.begin_guarded(GuardedAction::New),
            Message::Open => return self.begin_guarded(GuardedAction::Open),
            Message::UnsavedChoice(choice) => return self.finish_guarded(choice),
            Message::OpenSelected(path) => return Self::open_selected(path),
            Message::FileLoaded(path, result) => self.finish_open(path, result),
            Message::Save => return self.save_document(),
            Message::SaveAs => return self.save_as_document(),
            Message::SavePathSelected(path) => return self.save_path_selected(path),
            Message::FileWritten(path, result) => return self.finish_write(&path, result),
            Message::Print => self.print_document(),
            Message::PrintDialogFinished(accepted) => self.finish_print(accepted),
            Message::PrinterSetup => self.printer_setup(),
            Message::Exit => self.close_editor(),
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
            Message::ElectricalRulesCheck => self.run_electrical_rules_check(),
            Message::Compile => self.compile_document(),
            Message::CompilerFinished {
                request_id,
                diagnostics,
            } => self.finish_compile(request_id, diagnostics),
            Message::Mode => self.open_mode_dialog(),
            Message::ModeFinished => self.mode_dialog = None,
            Message::SetParameters => self.open_parameter_dialog(),
            Message::ParametersFinished(commit) => self.finish_parameters(commit),
            Message::RunAnalysis(command) => self.run_analysis(command),
            Message::AnalysisFinished {
                request_id,
                completion,
            } => self.finish_analysis(request_id, completion),
            Message::Options => self.open_options(),
            Message::OptionsFinished(accepted) => self.finish_options(accepted),
            Message::ToggleWarnings => self.toggle_warnings(),
            Message::Help => self.open_help(),
            Message::DiagnosticSelected(index) => self.selected_diagnostic = index,
            Message::EditSelectedSource => self.edit_selected_source(),
            Message::ClearMessages => self.clear_messages(),
        }
        Task::none()
    }

    pub const fn set_editor_focus(&mut self, owns_focus: bool) {
        self.focus_context = if owns_focus {
            FocusContext::Editor
        } else {
            FocusContext::OtherControl
        };
    }

    /// Reimplements `FUN_01531db0` at Ghidra address `0x01531DB0`.
    pub fn new_document(&mut self) {
        self.document.create_new();
        self.after_document_reset();
    }

    /// Reimplements `FUN_01531f80` at Ghidra address `0x01531F80`.
    pub fn open_document(&self) -> Task<Message> {
        Task::perform(select_open_path(), Message::OpenSelected)
    }

    /// Reimplements `FUN_01532020` at Ghidra address `0x01532020`.
    pub fn save_document(&mut self) -> Task<Message> {
        match self.document.plan_save() {
            SavePlan::Noop => Task::none(),
            SavePlan::SelectPath => self.save_as_document(),
            SavePlan::Write(_) => {
                let Some(request) = self.document.begin_existing_save() else {
                    return Task::none();
                };
                self.start_write(request)
            }
        }
    }

    /// Reimplements `FUN_015320c0` at Ghidra address `0x015320C0`.
    pub fn save_as_document(&self) -> Task<Message> {
        Task::perform(
            select_save_path(self.document.file_name.clone()),
            Message::SavePathSelected,
        )
    }

    /// Reimplements `FUN_015322f0` at Ghidra address `0x015322F0`.
    pub fn print_document(&mut self) {
        self.print_dialog = Some(PrintDialogRequest);
        self.print_request = None;
    }

    /// Reimplements `FUN_01532430` at Ghidra address `0x01532430`.
    pub const fn printer_setup(&mut self) {
        self.printer_setup = Some(PrinterSetupRequest);
    }

    /// Reimplements `FUN_01532450` at Ghidra address `0x01532450`.
    pub const fn close_editor(&mut self) {
        self.close_request = Some(CloseFormRequest);
    }

    /// Reimplements `FUN_01532460` at Ghidra address `0x01532460`.
    pub fn undo(&mut self) {
        if self.document.editor.undo() {
            self.sync_editor();
        }
    }

    /// Reimplements `FUN_01532480` at Ghidra address `0x01532480`.
    pub fn cut(&mut self) -> Task<Message> {
        let Some(payload) = self.document.editor.cut_selection() else {
            return Task::none();
        };
        self.sync_editor();
        iced::clipboard::write(payload.text)
    }

    /// Reimplements `FUN_015324a0` at Ghidra address `0x015324A0`.
    pub fn copy(&self) -> Task<Message> {
        self.document
            .editor
            .copy_selection()
            .map_or_else(Task::none, |payload| iced::clipboard::write(payload.text))
    }

    /// Reimplements `FUN_015324c0` at Ghidra address `0x015324C0`.
    pub fn paste(&mut self) -> Task<Message> {
        if self.focus_context == FocusContext::OtherControl {
            self.forwarded_command = Some(PASTE_COMMAND_ID);
            Task::none()
        } else {
            iced::clipboard::read().map(Message::PasteText)
        }
    }

    /// Reimplements `FUN_01532510` at Ghidra address `0x01532510`.
    pub fn delete_selection(&mut self) {
        if self.document.editor.delete_selection() {
            self.sync_editor();
        }
    }

    /// Reimplements `FUN_01532530` at Ghidra address `0x01532530`.
    pub fn select_all(&mut self) {
        self.document.editor.select_all();
        self.editor.perform(text_editor::Action::SelectAll);
    }

    /// Reimplements `FUN_01532550` at Ghidra address `0x01532550`.
    pub const fn open_find(&mut self) {
        self.search_dialog = SearchDialogState::Find;
        self.search_again_enabled = true;
    }

    /// Reimplements `FUN_01532580` at Ghidra address `0x01532580`.
    pub const fn open_replace(&mut self) {
        self.search_dialog = SearchDialogState::Replace;
    }

    /// Reimplements `FUN_015325a0` at Ghidra address `0x015325A0`.
    pub fn search_again(&mut self) {
        if let Some(options) = self.last_search.clone() {
            self.apply_search(&options, false);
        }
    }

    /// Reimplements `FUN_015325c0` at Ghidra address `0x015325C0`.
    pub fn run_electrical_rules_check(&mut self) {
        let id = self.allocate_request_id();
        self.compile_job = Some(CompileJob {
            id,
            request: compile_request(&self.document, EditorCompileKind::ElectricalRulesCheck),
        });
        self.diagnostics.clear();
        self.selected_diagnostic = None;
    }

    /// Reimplements `FUN_01532670` at Ghidra address `0x01532670`.
    pub fn compile_document(&mut self) {
        let id = self.allocate_request_id();
        self.compile_job = Some(CompileJob {
            id,
            request: compile_request(&self.document, EditorCompileKind::Compile),
        });
    }

    /// Reimplements `FUN_01532840` at Ghidra address `0x01532840`.
    pub const fn open_mode_dialog(&mut self) {
        self.mode_dialog = Some(ModeDialogRequest);
    }

    /// Reimplements `FUN_01532880` at Ghidra address `0x01532880`.
    pub fn open_parameter_dialog(&mut self) {
        self.parameter_dialog = Some(ParameterDialogRequest {
            snapshot: self.parameters.clone(),
        });
    }

    /// Reimplements `FUN_01533110` at Ghidra address `0x01533110`.
    pub fn calculate_dc_nodal_voltages(&mut self) {
        self.run_analysis(AnalysisCommand::DcNodalVoltages);
    }

    /// Reimplements `FUN_015331b0` at Ghidra address `0x015331B0`.
    pub fn run_dc_transfer_characteristic(&mut self) {
        self.run_analysis(AnalysisCommand::DcTransferCharacteristic);
    }

    /// Reimplements `FUN_01533230` at Ghidra address `0x01533230`.
    pub fn run_temperature_analysis(&mut self) {
        self.run_analysis(AnalysisCommand::Temperature);
    }

    /// Reimplements `FUN_01533280` at Ghidra address `0x01533280`.
    pub fn calculate_ac_nodal_voltages(&mut self) {
        self.run_analysis(AnalysisCommand::AcNodalVoltages);
    }

    /// Reimplements `FUN_01533320` at Ghidra address `0x01533320`.
    pub fn run_ac_transfer_characteristic(&mut self) {
        self.run_analysis(AnalysisCommand::AcTransferCharacteristic);
    }

    /// Reimplements `FUN_015333d0` at Ghidra address `0x015333D0`.
    pub fn run_ac_multisine(&mut self) {
        self.run_analysis(AnalysisCommand::AcMultisine);
    }

    /// Reimplements `FUN_015334f0` at Ghidra address `0x015334F0`.
    pub fn run_ac_vector_diagram(&mut self) {
        self.run_analysis(AnalysisCommand::AcVectorDiagram);
    }

    /// Reimplements `FUN_01533530` at Ghidra address `0x01533530`.
    pub fn run_ac_time_function(&mut self) {
        self.run_analysis(AnalysisCommand::AcTimeFunction);
    }

    /// Reimplements `FUN_01533570` at Ghidra address `0x01533570`.
    pub fn run_transient(&mut self) {
        self.run_analysis(AnalysisCommand::Transient);
    }

    /// Reimplements `FUN_015336b0` at Ghidra address `0x015336B0`.
    pub fn run_steady_state_solver(&mut self) {
        self.run_analysis(AnalysisCommand::SteadyState);
    }

    /// Reimplements `FUN_015336e0` at Ghidra address `0x015336E0`.
    pub fn run_fourier_series(&mut self) {
        self.run_analysis(AnalysisCommand::FourierSeries);
    }

    /// Reimplements `FUN_01533720` at Ghidra address `0x01533720`.
    pub fn run_fourier_spectrum(&mut self) {
        self.run_analysis(AnalysisCommand::FourierSpectrum);
    }

    /// Reimplements `FUN_015338f0` at Ghidra address `0x015338F0`.
    pub fn run_digital_transient(&mut self) {
        self.run_analysis(AnalysisCommand::DigitalTransient);
    }

    /// Reimplements `FUN_01533930` at Ghidra address `0x01533930`.
    pub fn show_dc_symbolic_result(&mut self) {
        self.run_analysis(AnalysisCommand::DcSymbolicResult);
    }

    /// Reimplements `FUN_01533960` at Ghidra address `0x01533960`.
    pub fn show_dc_semi_symbolic_result(&mut self) {
        self.run_analysis(AnalysisCommand::DcSemiSymbolicResult);
    }

    /// Reimplements `FUN_01533990` at Ghidra address `0x01533990`.
    pub fn show_ac_symbolic_result(&mut self) {
        self.run_analysis(AnalysisCommand::AcSymbolicResult);
    }

    /// Reimplements `FUN_015339c0` at Ghidra address `0x015339C0`.
    pub fn show_ac_semi_symbolic_result(&mut self) {
        self.run_analysis(AnalysisCommand::AcSemiSymbolicResult);
    }

    /// Reimplements `FUN_015339f0` at Ghidra address `0x015339F0`.
    pub fn show_ac_transfer(&mut self) {
        self.run_analysis(AnalysisCommand::AcTransfer);
    }

    /// Reimplements `FUN_01533a20` at Ghidra address `0x01533A20`.
    pub fn show_ac_semi_symbolic_transfer(&mut self) {
        self.run_analysis(AnalysisCommand::AcSemiSymbolicTransfer);
    }

    /// Reimplements `FUN_01533a50` at Ghidra address `0x01533A50`.
    pub fn show_poles_and_zeros(&mut self) {
        self.run_analysis(AnalysisCommand::PolesAndZeros);
    }

    /// Reimplements `FUN_01533a80` at Ghidra address `0x01533A80`.
    pub fn show_semi_symbolic_transient(&mut self) {
        self.run_analysis(AnalysisCommand::SemiSymbolicTransient);
    }

    /// Reimplements `FUN_01533ae0` at Ghidra address `0x01533AE0`.
    pub fn run_noise_analysis(&mut self) {
        self.run_analysis(AnalysisCommand::Noise);
    }

    /// Reimplements `FUN_01533b40` at Ghidra address `0x01533B40`.
    pub const fn open_options(&mut self) {
        self.options_dialog = Some(OptionsDialogRequest);
    }

    /// Reimplements `FUN_01533ba0` at Ghidra address `0x01533BA0`.
    pub const fn toggle_warnings(&mut self) {
        self.warnings = self.warnings.toggled();
    }

    /// Reimplements `FUN_01533c50` at Ghidra address `0x01533C50`.
    pub fn open_help(&mut self) {
        self.help_request = Some(help_request(&self.help_root));
    }

    /// Reimplements `FUN_01534460` at Ghidra address `0x01534460`.
    pub fn edit_selected_source(&mut self) {
        let Some(diagnostic) = self
            .selected_diagnostic
            .and_then(|index| self.diagnostics.get(index))
        else {
            return;
        };
        self.navigation = diagnostic_navigation(diagnostic);
    }

    /// Reimplements `FUN_01534470` at Ghidra address `0x01534470`.
    pub fn clear_messages(&mut self) {
        self.diagnostics.clear();
        self.selected_diagnostic = None;
    }

    #[must_use]
    pub fn analysis_options_window(&self) -> AnalysisOptionsWindow {
        AnalysisOptionsWindow::new(self.options.clone(), self.advanced_options.clone())
    }

    #[must_use]
    pub const fn compile_job(&self) -> Option<&CompileJob> {
        self.compile_job.as_ref()
    }

    #[must_use]
    pub const fn analysis_job(&self) -> Option<&AnalysisJob> {
        self.analysis_job.as_ref()
    }

    #[must_use]
    pub const fn search_dialog(&self) -> SearchDialogState {
        self.search_dialog
    }

    #[must_use]
    pub const fn parameter_dialog_request(&self) -> Option<&ParameterDialogRequest> {
        self.parameter_dialog.as_ref()
    }

    #[must_use]
    pub const fn options_dialog_requested(&self) -> bool {
        self.options_dialog.is_some()
    }

    pub const fn take_print_request(&mut self) -> Option<PrintJobRequest> {
        self.print_request.take()
    }

    pub const fn take_printer_setup_request(&mut self) -> Option<PrinterSetupRequest> {
        self.printer_setup.take()
    }

    pub const fn take_close_request(&mut self) -> Option<CloseFormRequest> {
        self.close_request.take()
    }

    pub const fn take_forwarded_command(&mut self) -> Option<u16> {
        self.forwarded_command.take()
    }

    pub const fn take_mode_dialog_request(&mut self) -> Option<ModeDialogRequest> {
        self.mode_dialog.take()
    }

    pub const fn take_analysis_publication(&mut self) -> Option<AnalysisPublication> {
        self.analysis_publication.take()
    }

    pub const fn take_parameter_directive(&mut self) -> Option<ParameterDirectiveWrite> {
        self.parameter_directive.take()
    }

    pub const fn take_navigation(&mut self) -> Option<DiagnosticNavigation> {
        self.navigation.take()
    }

    pub const fn take_help_request(&mut self) -> Option<HelpRequest> {
        self.help_request.take()
    }

    fn begin_guarded(&mut self, action: GuardedAction) -> Task<Message> {
        if self.document.editor.modified {
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
                    self.guard_save_continuation = Some(action);
                    self.save_document()
                } else {
                    self.continue_guarded(action)
                }
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
        let read_path = path.clone();
        Task::perform(
            async move { read_netlist(&read_path).map_err(|error| error.to_string()) },
            move |result| Message::FileLoaded(path.clone(), result),
        )
    }

    fn finish_open(&mut self, path: PathBuf, result: Result<String, String>) {
        match result {
            Ok(source) => {
                self.document.load(path, source);
                self.after_document_reset();
                self.error = None;
            }
            Err(error) => self.error = Some(error),
        }
    }

    fn save_path_selected(&mut self, path: Option<PathBuf>) -> Task<Message> {
        let Some(path) = path else {
            return self.continue_after_guard_save();
        };
        let request = self.document.plan_save_as(path);
        self.start_write(request)
    }

    fn start_write(&mut self, request: SaveFileRequest) -> Task<Message> {
        let path = request.path.clone();
        let write_path = path.clone();
        let source = request.text.clone();
        self.pending_write = Some(request);
        Task::perform(
            async move { write_netlist(&write_path, &source).map_err(|error| error.to_string()) },
            move |result| Message::FileWritten(path.clone(), result),
        )
    }

    fn finish_write(&mut self, path: &Path, result: Result<(), String>) -> Task<Message> {
        if self
            .pending_write
            .as_ref()
            .is_none_or(|request| request.path != path)
        {
            return Task::none();
        }
        let Some(request) = self.pending_write.take() else {
            return Task::none();
        };
        match result {
            Ok(()) => {
                self.document.complete_save(&request);
                self.error = None;
                self.continue_after_guard_save()
            }
            Err(error) => {
                self.error = Some(error);
                self.guard_save_continuation = None;
                Task::none()
            }
        }
    }

    fn continue_after_guard_save(&mut self) -> Task<Message> {
        self.guard_save_continuation
            .take()
            .map_or_else(Task::none, |action| self.continue_guarded(action))
    }

    fn finish_print(&mut self, accepted: bool) {
        if self.print_dialog.take().is_some() && accepted {
            self.print_request = Some(print_job(&self.document));
        }
    }

    fn finish_paste(&mut self, text: Option<String>) {
        if let Some(text) = text
            && self.document.editor.paste(&ClipboardPayload {
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
            replace_matches(&mut self.document.editor, options)
        } else {
            find_next(&mut self.document.editor, options)
        };
        match outcome {
            SearchOutcome::Found => self.error = None,
            SearchOutcome::Replaced(_) => {
                self.sync_editor();
                self.error = None;
            }
            SearchOutcome::NotFound => {
                self.error = Some(format!("Not found: {}", options.query));
            }
        }
    }

    fn finish_compile(&mut self, request_id: u64, diagnostics: Vec<Diagnostic>) {
        if self
            .compile_job
            .as_ref()
            .is_none_or(|job| job.id != request_id)
        {
            return;
        }
        self.compile_job = None;
        self.diagnostics = diagnostics;
        self.selected_diagnostic = None;
    }

    fn finish_parameters(&mut self, commit: Option<ParameterDialogCommit>) {
        if self.parameter_dialog.take().is_none() {
            return;
        }
        let Some(commit) = commit else {
            return;
        };
        self.parameters = commit.snapshot;
        self.parameter_directive = commit.first_changed_directive;
    }

    fn run_analysis(&mut self, command: AnalysisCommand) {
        let id = self.allocate_request_id();
        self.analysis_job = Some(AnalysisJob {
            id,
            request: AnalysisRequest::new(command, self.document.editor.text.clone()),
        });
        self.analysis_publication = None;
    }

    fn finish_analysis(&mut self, request_id: u64, completion: AnalysisCompletion) {
        if self
            .analysis_job
            .as_ref()
            .is_none_or(|job| job.id != request_id)
        {
            return;
        }
        let Some(job) = self.analysis_job.take() else {
            return;
        };
        self.analysis_publication = Some(complete_analysis(
            &mut self.analysis_results,
            &job.request,
            completion,
        ));
    }

    fn finish_options(&mut self, accepted: Option<AcceptedAnalysisOptions>) {
        if self.options_dialog.take().is_none() {
            return;
        }
        let Some(accepted) = accepted else {
            return;
        };
        self.options.clone_from(&accepted.options);
        self.advanced_options.clone_from(&accepted.advanced_options);
        self.committed_options = Some(accepted);
    }

    fn after_document_reset(&mut self) {
        self.compile_job = None;
        self.analysis_job = None;
        self.analysis_publication = None;
        self.mode_dialog = None;
        self.parameter_dialog = None;
        self.options_dialog = None;
        self.guard_save_continuation = None;
        self.clear_messages();
        self.error = None;
        self.sync_editor();
    }

    const fn allocate_request_id(&mut self) -> u64 {
        let id = self.next_request_id;
        self.next_request_id = self.next_request_id.saturating_add(1);
        id
    }

    fn sync_editor(&mut self) {
        self.editor = text_editor::Content::with_text(&self.document.editor.text);
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let file_row = row![
            button("New").on_press(Message::New),
            button("Open").on_press(Message::Open),
            button("Save").on_press(Message::Save),
            button("Save As").on_press(Message::SaveAs),
            button("Print").on_press(Message::Print),
            button("Printer Setup").on_press(Message::PrinterSetup),
            button("Close").on_press(Message::Exit),
        ]
        .spacing(5);
        let again = if self.search_again_enabled {
            button("Again").on_press(Message::SearchAgain)
        } else {
            button("Again")
        };
        let edit_row = row![
            button("Undo").on_press(Message::Undo),
            button("Cut").on_press(Message::Cut),
            button("Copy").on_press(Message::Copy),
            button("Paste").on_press(Message::Paste),
            button("Delete").on_press(Message::Delete),
            button("Select All").on_press(Message::SelectAll),
            button("Find").on_press(Message::Find),
            button("Replace").on_press(Message::Replace),
            again,
        ]
        .spacing(5);
        let analysis_row = row![
            button("Compile").on_press(Message::Compile),
            button("ERC").on_press(Message::ElectricalRulesCheck),
            button("Mode").on_press(Message::Mode),
            button("Parameters").on_press(Message::SetParameters),
            button("Transient").on_press(Message::RunAnalysis(AnalysisCommand::Transient)),
            button("DC Transfer").on_press(Message::RunAnalysis(
                AnalysisCommand::DcTransferCharacteristic,
            )),
            button("Options").on_press(Message::Options),
            button("Warnings").on_press(Message::ToggleWarnings),
            button("Help").on_press(Message::Help),
        ]
        .spacing(5);
        let editor = text_editor(&self.editor)
            .on_action(Message::EditorAction)
            .height(Length::FillPortion(3));
        let messages =
            self.diagnostics
                .iter()
                .enumerate()
                .fold(column![], |messages, (index, diagnostic)| {
                    messages.push(
                        button(text(&diagnostic.message))
                            .on_press(Message::DiagnosticSelected(Some(index))),
                    )
                });
        let message_list = container(scrollable(messages))
            .height(if self.warnings == WarningVisibility::Visible {
                Length::FillPortion(1)
            } else {
                Length::Shrink
            })
            .width(Length::Fill);
        let mut layout = column![
            text(self.document.file_name.to_string_lossy()),
            file_row,
            edit_row,
            analysis_row,
        ];
        if self.guarded_action.is_some() {
            layout = layout.push(row![
                text("Save changes?"),
                button("Yes").on_press(Message::UnsavedChoice(SavePromptChoice::Yes)),
                button("No").on_press(Message::UnsavedChoice(SavePromptChoice::No)),
                button("Cancel").on_press(Message::UnsavedChoice(SavePromptChoice::Cancel)),
            ]);
        }
        if self.print_dialog.is_some() {
            layout = layout.push(row![
                text("Print document?"),
                button("Print").on_press(Message::PrintDialogFinished(true)),
                button("Cancel").on_press(Message::PrintDialogFinished(false)),
            ]);
        }
        layout
            .push(editor)
            .push(message_list)
            .spacing(7)
            .padding(10)
            .into()
    }
}

async fn select_open_path() -> Option<PathBuf> {
    AsyncFileDialog::new()
        .add_filter("Circuit netlist", &["cir", "net", "txt"])
        .pick_file()
        .await
        .map(|file| file.path().to_path_buf())
}

async fn select_save_path(current: PathBuf) -> Option<PathBuf> {
    let file_name = current
        .file_name()
        .and_then(|name| name.to_str())
        .unwrap_or("noname.cir");
    AsyncFileDialog::new()
        .add_filter("Circuit netlist", &["cir", "net", "txt"])
        .set_file_name(file_name)
        .save_file()
        .await
        .map(|file| file.path().to_path_buf())
}

#[cfg(test)]
mod tests {
    use std::path::{Path, PathBuf};

    use tiara_core::analysis_result_publishing::{AnalysisPoint, AnalysisSeries, AxisLabels};
    use tiara_core::netlist_editor::{
        AnalysisCommand, AnalysisCompletion, AnalysisPayload, AnalysisPublication,
        EditorCompileKind, ParameterDialogCommit, ParameterDirective, ParameterDirectiveWrite,
        SimulationParameterSnapshot, WarningVisibility,
    };
    use tiara_core::netlist_viewer::{
        Diagnostic, ReplaceMode, SavePromptChoice, SearchOptions, SelectionMode,
    };

    use super::{Message, Window};

    fn window() -> Window {
        Window::new(
            PathBuf::from("help"),
            tiara_core::analysis_options::AnalysisOptions::default(),
            crate::advanced_analysis_options::AdvancedOptions::default(),
        )
    }

    fn update(window: &mut Window, message: Message) {
        drop(window.update(message));
    }

    fn series() -> AnalysisSeries {
        AnalysisSeries::new(
            "series",
            AxisLabels::new("x", "y"),
            [AnalysisPoint::new(1.0, 2.0)],
        )
    }

    #[test]
    fn guarded_new_resumes_after_save_as_cancel_without_testing_a_save_result() {
        let mut window = window();
        window.document.editor.record_editor_text("old".to_owned());
        update(&mut window, Message::New);
        update(&mut window, Message::UnsavedChoice(SavePromptChoice::Yes));
        assert_eq!(window.document.editor.text, "old");
        update(&mut window, Message::SavePathSelected(None));
        assert_eq!(window.document.file_name, Path::new("noname.cir"));
        assert!(window.document.editor.text.is_empty());
        assert!(!window.document.editor.modified);
    }

    #[test]
    fn open_loads_clean_document_updates_recent_files_and_clears_messages() {
        let mut window = window();
        window.diagnostics.push(Diagnostic {
            message: "old".to_owned(),
            source_line: None,
            source_identifier: None,
        });
        update(
            &mut window,
            Message::FileLoaded(PathBuf::from("input.cir"), Ok("R1".to_owned())),
        );
        assert_eq!(window.document.editor.text, "R1");
        assert!(!window.document.editor.modified);
        assert_eq!(window.document.recent_files, [PathBuf::from("input.cir")]);
        assert!(window.diagnostics.is_empty());
    }

    #[test]
    fn save_as_and_existing_save_keep_recovered_modified_timing() {
        let mut window = window();
        window.document.editor.record_editor_text("R1".to_owned());
        update(
            &mut window,
            Message::SavePathSelected(Some(PathBuf::from("saved.cir"))),
        );
        assert!(window.document.editor.modified);
        update(
            &mut window,
            Message::FileWritten(PathBuf::from("saved.cir"), Ok(())),
        );
        assert!(!window.document.editor.modified);
        assert_eq!(window.document.file_name, Path::new("saved.cir"));
        window.document.editor.record_editor_text("R2".to_owned());
        update(&mut window, Message::Save);
        assert!(window.document.editor.modified);
        update(
            &mut window,
            Message::FileWritten(PathBuf::from("saved.cir"), Ok(())),
        );
        assert!(!window.document.editor.modified);
    }

    #[test]
    fn print_setup_close_and_edit_commands_are_typed_or_headless() {
        let mut window = window();
        window.document.editor.record_editor_text("a\nb".to_owned());
        update(&mut window, Message::Print);
        update(&mut window, Message::PrintDialogFinished(true));
        assert_eq!(
            window.print_request.as_ref().expect("print").lines,
            ["a", "b"]
        );
        update(&mut window, Message::PrinterSetup);
        assert!(window.printer_setup.is_some());
        update(&mut window, Message::Exit);
        assert!(window.close_request.is_some());
        update(
            &mut window,
            Message::SelectionChanged(0..1, SelectionMode::Column),
        );
        update(&mut window, Message::Cut);
        assert_eq!(window.document.editor.text, "\nb");
        update(&mut window, Message::Undo);
        assert_eq!(window.document.editor.text, "a\nb");
    }

    #[test]
    fn paste_forwards_to_other_focus_and_local_paste_preserves_selection_mode_adapter() {
        let mut window = window();
        window.set_editor_focus(false);
        update(&mut window, Message::Paste);
        assert_eq!(window.forwarded_command, Some(0x0302));
        window.set_editor_focus(true);
        update(&mut window, Message::PasteText(Some("R1".to_owned())));
        assert_eq!(window.document.editor.text, "R1");
    }

    #[test]
    fn find_replace_and_repeat_keep_current_options() {
        let mut window = window();
        window
            .document
            .editor
            .record_editor_text("R1 R2 R1".to_owned());
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
        assert_eq!(window.document.editor.selection, 0..2);
        update(&mut window, Message::SearchAgain);
        assert_eq!(window.document.editor.selection, 6..8);
        update(&mut window, Message::Replace);
        update(
            &mut window,
            Message::SearchSubmitted(SearchOptions {
                query: "R1".to_owned(),
                replacement: "X".to_owned(),
                replace_mode: ReplaceMode::All,
                ..SearchOptions::default()
            }),
        );
        assert_eq!(window.document.editor.text, "X R2 X");
    }

    #[test]
    fn compile_and_erc_keep_context_and_location_binding() {
        let mut window = window();
        update(&mut window, Message::Compile);
        assert_eq!(
            window.compile_job.as_ref().expect("compile").request.kind,
            EditorCompileKind::Compile
        );
        update(&mut window, Message::ElectricalRulesCheck);
        assert!(
            window
                .compile_job
                .as_ref()
                .expect("erc")
                .request
                .bind_message_locations
        );
    }

    #[test]
    fn analysis_requests_cover_host_routes_and_manager_publication() {
        let mut window = window();
        update(
            &mut window,
            Message::RunAnalysis(AnalysisCommand::AcMultisine),
        );
        let request_id = window.analysis_job.as_ref().expect("request").id;
        assert_eq!(
            window
                .analysis_job
                .as_ref()
                .expect("request")
                .request
                .setup_selector,
            Some(3)
        );
        update(
            &mut window,
            Message::AnalysisFinished {
                request_id,
                completion: AnalysisCompletion::succeeded(AnalysisPayload::None),
            },
        );
        assert!(matches!(
            window.analysis_publication,
            Some(AnalysisPublication::Host(_))
        ));

        update(
            &mut window,
            Message::RunAnalysis(AnalysisCommand::Transient),
        );
        let request_id = window.analysis_job.as_ref().expect("request").id;
        update(
            &mut window,
            Message::AnalysisFinished {
                request_id,
                completion: AnalysisCompletion::succeeded(AnalysisPayload::Series(series())),
            },
        );
        assert_eq!(
            window.analysis_publication,
            Some(AnalysisPublication::PublishedByManager)
        );
        assert_eq!(window.analysis_results.results().len(), 1);
    }

    #[test]
    fn symbolic_cancel_and_parameter_dialog_commit_remain_staged() {
        let mut window = window();
        update(
            &mut window,
            Message::RunAnalysis(AnalysisCommand::AcSemiSymbolicResult),
        );
        let request_id = window.analysis_job.as_ref().expect("request").id;
        update(
            &mut window,
            Message::AnalysisFinished {
                request_id,
                completion: AnalysisCompletion::Cancelled,
            },
        );
        assert_eq!(window.analysis_publication, Some(AnalysisPublication::Noop));

        update(&mut window, Message::SetParameters);
        update(
            &mut window,
            Message::ParametersFinished(Some(ParameterDialogCommit {
                snapshot: SimulationParameterSnapshot::default(),
                first_changed_directive: Some(ParameterDirectiveWrite {
                    directive: ParameterDirective::Tnom,
                    text: ".OPTIONS TNOM=27".to_owned(),
                }),
            })),
        );
        assert_eq!(
            window
                .parameter_directive
                .as_ref()
                .expect("directive")
                .directive,
            ParameterDirective::Tnom
        );
    }

    #[test]
    fn options_commit_cancel_warning_help_and_navigation_preserve_boundaries() {
        let mut window = window();
        update(&mut window, Message::Options);
        assert!(window.options_dialog.is_some());
        let child = window.analysis_options_window();
        update(&mut window, Message::OptionsFinished(None));
        assert!(window.committed_options.is_none());
        drop(child);

        update(&mut window, Message::ToggleWarnings);
        assert_eq!(window.warnings, WarningVisibility::Hidden);
        update(&mut window, Message::Help);
        assert_eq!(
            window.help_request.as_ref().expect("help").base_file,
            Path::new("help/TINA.CHM")
        );
        update(&mut window, Message::Compile);
        let request_id = window.compile_job.as_ref().expect("compile").id;
        update(
            &mut window,
            Message::CompilerFinished {
                request_id,
                diagnostics: vec![Diagnostic {
                    message: "line".to_owned(),
                    source_line: Some(14),
                    source_identifier: None,
                }],
            },
        );
        update(&mut window, Message::DiagnosticSelected(Some(0)));
        update(&mut window, Message::EditSelectedSource);
        assert_eq!(window.navigation.as_ref().expect("navigation").line, 14);
        update(&mut window, Message::ClearMessages);
        assert!(window.diagnostics.is_empty());
    }
}
