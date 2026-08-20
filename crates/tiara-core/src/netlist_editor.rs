//! Recovered Netlist Editor domain state and typed host ports.
//!
//! The Rust standard library supplies file paths, recent-file ordering, and
//! owned state. Text editing, grouped undo, search, clipboard payloads, help,
//! and diagnostic navigation compose the existing `netlist_viewer` core.
//! Analysis publication composes `AnalysisResultManager`; solver, compiler,
//! printer, symbolic-engine, and application-window work stays behind typed
//! ports because those services are owned by the TINA host.

use std::path::{Path, PathBuf};

use crate::analysis_result_publishing::{AnalysisResultManager, AnalysisSeries};
use crate::netlist_viewer::{
    Diagnostic, DiagnosticNavigation, NetlistDocument, navigate_diagnostic,
};

pub const DEFAULT_FILE_NAME: &str = "noname.cir";
pub const HELP_CONTEXT_ID: u32 = 0x1195;
pub const PASTE_COMMAND_ID: u16 = 0x0302;
const RECENT_FILE_LIMIT: usize = 5;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct NetlistEditorDocument {
    pub editor: NetlistDocument,
    pub file_name: PathBuf,
    pub recent_files: Vec<PathBuf>,
    pub circuit_generation: u64,
    pub reset_generation: u64,
}

impl Default for NetlistEditorDocument {
    fn default() -> Self {
        Self {
            editor: NetlistDocument::default(),
            file_name: PathBuf::from(DEFAULT_FILE_NAME),
            recent_files: Vec::new(),
            circuit_generation: 0,
            reset_generation: 0,
        }
    }
}

impl NetlistEditorDocument {
    pub fn create_new(&mut self) {
        self.editor.create_new();
        self.editor.mark_saved();
        self.file_name = PathBuf::from(DEFAULT_FILE_NAME);
        self.reset_derived_state();
    }

    pub fn load(&mut self, path: PathBuf, text: String) {
        self.editor.load(text);
        self.editor.mark_saved();
        path.clone_into(&mut self.file_name);
        self.touch_recent(path);
        self.reset_derived_state();
    }

    #[must_use]
    pub fn plan_save(&self) -> SavePlan {
        if !self.editor.modified {
            SavePlan::Noop
        } else if self.file_name == Path::new(DEFAULT_FILE_NAME) {
            SavePlan::SelectPath
        } else {
            SavePlan::Write(SaveFileRequest {
                path: self.file_name.clone(),
                text: self.editor.text.clone(),
                update_path: false,
            })
        }
    }

    #[must_use]
    pub fn begin_existing_save(&self) -> Option<SaveFileRequest> {
        let SavePlan::Write(request) = self.plan_save() else {
            return None;
        };
        Some(request)
    }

    #[must_use]
    pub fn plan_save_as(&self, path: PathBuf) -> SaveFileRequest {
        SaveFileRequest {
            path,
            text: self.editor.text.clone(),
            update_path: true,
        }
    }

    pub fn complete_save(&mut self, request: &SaveFileRequest) {
        if request.update_path {
            request.path.clone_into(&mut self.file_name);
            self.touch_recent(request.path.clone());
        }
        if self.editor.text == request.text {
            self.editor.mark_saved();
        }
    }

    fn touch_recent(&mut self, path: PathBuf) {
        self.recent_files.retain(|recent| recent != &path);
        self.recent_files.insert(0, path);
        self.recent_files.truncate(RECENT_FILE_LIMIT);
    }

    const fn reset_derived_state(&mut self) {
        self.circuit_generation = self.circuit_generation.saturating_add(1);
        self.reset_generation = self.reset_generation.saturating_add(1);
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SaveFileRequest {
    pub path: PathBuf,
    pub text: String,
    pub update_path: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SavePlan {
    Noop,
    SelectPath,
    Write(SaveFileRequest),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PrintJobRequest {
    pub title: String,
    pub lines: Vec<String>,
}

#[must_use]
pub fn print_job(document: &NetlistEditorDocument) -> PrintJobRequest {
    PrintJobRequest {
        title: document.file_name.to_string_lossy().into_owned(),
        lines: document
            .editor
            .text
            .split('\n')
            .map(str::to_owned)
            .collect(),
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EditorCompileKind {
    Compile,
    ElectricalRulesCheck,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EditorContextPolicy {
    CaptureAndRestore,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EditorCompileRequest {
    pub kind: EditorCompileKind,
    pub compile_mode: u8,
    pub source: String,
    pub context: EditorContextPolicy,
    pub bind_message_locations: bool,
}

#[must_use]
pub fn compile_request(
    document: &NetlistEditorDocument,
    kind: EditorCompileKind,
) -> EditorCompileRequest {
    EditorCompileRequest {
        kind,
        compile_mode: 0,
        source: document.editor.text.clone(),
        context: EditorContextPolicy::CaptureAndRestore,
        bind_message_locations: kind == EditorCompileKind::ElectricalRulesCheck,
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalysisContextMode {
    Mode0,
    Mode2,
    Preserve,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SymbolicFamily {
    DcResult,
    AcResult,
    AcTransfer,
    Transient,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SymbolicMode {
    Numeric,
    SemiSymbolic,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalysisCommand {
    DcNodalVoltages,
    DcTransferCharacteristic,
    Temperature,
    AcNodalVoltages,
    AcTransferCharacteristic,
    AcMultisine,
    AcVectorDiagram,
    AcTimeFunction,
    Transient,
    SteadyState,
    FourierSeries,
    FourierSpectrum,
    DigitalTransient,
    DcSymbolicResult,
    DcSemiSymbolicResult,
    AcSymbolicResult,
    AcSemiSymbolicResult,
    AcTransfer,
    AcSemiSymbolicTransfer,
    PolesAndZeros,
    SemiSymbolicTransient,
    Noise,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalysisResultRoute {
    ShowResultForm,
    DcTransfer,
    Temperature,
    AcResults,
    VectorDiagram,
    AcTimeFunction,
    Transient,
    SteadyStateInternal,
    FourierSeriesDialog,
    FourierSpectrum,
    DigitalTransient,
    Symbolic {
        family: SymbolicFamily,
        mode: SymbolicMode,
    },
    PolesAndZeros,
    Noise,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AnalysisRequest {
    pub command: AnalysisCommand,
    pub context_mode: AnalysisContextMode,
    pub compile_mode: Option<u8>,
    pub setup_selector: Option<u8>,
    pub result_route: AnalysisResultRoute,
    pub source: String,
}

impl AnalysisRequest {
    #[must_use]
    pub const fn new(command: AnalysisCommand, source: String) -> Self {
        let (context_mode, compile_mode, setup_selector, result_route) = analysis_plan(command);
        Self {
            command,
            context_mode,
            compile_mode,
            setup_selector,
            result_route,
            source,
        }
    }
}

const fn analysis_plan(
    command: AnalysisCommand,
) -> (
    AnalysisContextMode,
    Option<u8>,
    Option<u8>,
    AnalysisResultRoute,
) {
    match command {
        AnalysisCommand::DcNodalVoltages => simple_analysis_plan(
            AnalysisContextMode::Mode2,
            None,
            AnalysisResultRoute::ShowResultForm,
        ),
        AnalysisCommand::DcTransferCharacteristic => simple_analysis_plan(
            AnalysisContextMode::Mode2,
            None,
            AnalysisResultRoute::DcTransfer,
        ),
        AnalysisCommand::Temperature => simple_analysis_plan(
            AnalysisContextMode::Mode0,
            None,
            AnalysisResultRoute::Temperature,
        ),
        AnalysisCommand::AcNodalVoltages => simple_analysis_plan(
            AnalysisContextMode::Mode0,
            None,
            AnalysisResultRoute::ShowResultForm,
        ),
        AnalysisCommand::AcTransferCharacteristic => simple_analysis_plan(
            AnalysisContextMode::Mode2,
            None,
            AnalysisResultRoute::AcResults,
        ),
        AnalysisCommand::AcMultisine => simple_analysis_plan(
            AnalysisContextMode::Mode2,
            Some(3),
            AnalysisResultRoute::AcResults,
        ),
        AnalysisCommand::AcVectorDiagram => simple_analysis_plan(
            AnalysisContextMode::Mode0,
            None,
            AnalysisResultRoute::VectorDiagram,
        ),
        AnalysisCommand::AcTimeFunction => simple_analysis_plan(
            AnalysisContextMode::Mode0,
            None,
            AnalysisResultRoute::AcTimeFunction,
        ),
        AnalysisCommand::Transient => simple_analysis_plan(
            AnalysisContextMode::Mode2,
            Some(0),
            AnalysisResultRoute::Transient,
        ),
        AnalysisCommand::SteadyState => simple_analysis_plan(
            AnalysisContextMode::Mode0,
            None,
            AnalysisResultRoute::SteadyStateInternal,
        ),
        AnalysisCommand::FourierSeries => (
            AnalysisContextMode::Mode0,
            Some(6),
            None,
            AnalysisResultRoute::FourierSeriesDialog,
        ),
        AnalysisCommand::FourierSpectrum => simple_analysis_plan(
            AnalysisContextMode::Mode0,
            Some(2),
            AnalysisResultRoute::FourierSpectrum,
        ),
        AnalysisCommand::DigitalTransient => simple_analysis_plan(
            AnalysisContextMode::Mode0,
            Some(0),
            AnalysisResultRoute::DigitalTransient,
        ),
        AnalysisCommand::DcSymbolicResult => {
            symbolic_route(SymbolicFamily::DcResult, SymbolicMode::Numeric)
        }
        AnalysisCommand::DcSemiSymbolicResult => {
            symbolic_route(SymbolicFamily::DcResult, SymbolicMode::SemiSymbolic)
        }
        AnalysisCommand::AcSymbolicResult => {
            symbolic_route(SymbolicFamily::AcResult, SymbolicMode::Numeric)
        }
        AnalysisCommand::AcSemiSymbolicResult => {
            symbolic_route(SymbolicFamily::AcResult, SymbolicMode::SemiSymbolic)
        }
        AnalysisCommand::AcTransfer => {
            symbolic_route(SymbolicFamily::AcTransfer, SymbolicMode::Numeric)
        }
        AnalysisCommand::AcSemiSymbolicTransfer => {
            symbolic_route(SymbolicFamily::AcTransfer, SymbolicMode::SemiSymbolic)
        }
        AnalysisCommand::PolesAndZeros => simple_analysis_plan(
            AnalysisContextMode::Mode0,
            None,
            AnalysisResultRoute::PolesAndZeros,
        ),
        AnalysisCommand::SemiSymbolicTransient => {
            symbolic_route(SymbolicFamily::Transient, SymbolicMode::SemiSymbolic)
        }
        AnalysisCommand::Noise => {
            simple_analysis_plan(AnalysisContextMode::Mode0, None, AnalysisResultRoute::Noise)
        }
    }
}

const fn simple_analysis_plan(
    context_mode: AnalysisContextMode,
    setup_selector: Option<u8>,
    result_route: AnalysisResultRoute,
) -> (
    AnalysisContextMode,
    Option<u8>,
    Option<u8>,
    AnalysisResultRoute,
) {
    (context_mode, None, setup_selector, result_route)
}

const fn symbolic_route(
    family: SymbolicFamily,
    mode: SymbolicMode,
) -> (
    AnalysisContextMode,
    Option<u8>,
    Option<u8>,
    AnalysisResultRoute,
) {
    (
        AnalysisContextMode::Mode0,
        None,
        None,
        AnalysisResultRoute::Symbolic { family, mode },
    )
}

#[derive(Debug, Clone, PartialEq)]
pub enum AnalysisPayload {
    None,
    Series(AnalysisSeries),
    MixedTransient {
        primary: Option<AnalysisSeries>,
        secondary: Option<AnalysisSeries>,
    },
    SymbolicText(String),
}

#[derive(Debug, Clone, PartialEq)]
pub enum AnalysisCompletion {
    SetupFailed,
    Cancelled,
    Succeeded(Box<AnalysisPayload>),
}

impl AnalysisCompletion {
    #[must_use]
    pub fn succeeded(payload: AnalysisPayload) -> Self {
        Self::Succeeded(Box::new(payload))
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SymbolicResultRequest {
    pub family: SymbolicFamily,
    pub mode: SymbolicMode,
    pub text: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum AnalysisPublication {
    Noop,
    PublishedByManager,
    ShowResultForm,
    Host(AnalysisResultRoute),
    Symbolic(SymbolicResultRequest),
}

pub fn complete_analysis(
    manager: &mut AnalysisResultManager,
    request: &AnalysisRequest,
    completion: AnalysisCompletion,
) -> AnalysisPublication {
    let AnalysisCompletion::Succeeded(payload) = completion else {
        return AnalysisPublication::Noop;
    };
    let payload = *payload;
    match request.result_route {
        AnalysisResultRoute::ShowResultForm => AnalysisPublication::ShowResultForm,
        AnalysisResultRoute::DcTransfer => {
            let AnalysisPayload::Series(series) = payload else {
                return AnalysisPublication::Noop;
            };
            let published = manager
                .publish_dc_transfer(Some(&series), |series| Ok::<_, ()>(series.clone()))
                .unwrap_or(false);
            if published {
                AnalysisPublication::PublishedByManager
            } else {
                AnalysisPublication::Noop
            }
        }
        AnalysisResultRoute::Transient => {
            let published = match payload {
                AnalysisPayload::Series(series) => manager.publish_transient(Some(series)),
                AnalysisPayload::MixedTransient { primary, secondary } => {
                    manager.publish_mixed_transient(primary, secondary)
                }
                AnalysisPayload::None | AnalysisPayload::SymbolicText(_) => false,
            };
            if published {
                AnalysisPublication::PublishedByManager
            } else {
                AnalysisPublication::Noop
            }
        }
        AnalysisResultRoute::Symbolic { family, mode } => {
            let AnalysisPayload::SymbolicText(text) = payload else {
                return AnalysisPublication::Noop;
            };
            AnalysisPublication::Symbolic(SymbolicResultRequest { family, mode, text })
        }
        route => AnalysisPublication::Host(route),
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum WarningVisibility {
    Hidden,
    #[default]
    Visible,
}

impl WarningVisibility {
    #[must_use]
    pub const fn toggled(self) -> Self {
        match self {
            Self::Hidden => Self::Visible,
            Self::Visible => Self::Hidden,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct SimulationParameterSnapshot {
    pub values: Box<[f64; 50]>,
    pub text: String,
}

impl Default for SimulationParameterSnapshot {
    fn default() -> Self {
        Self {
            values: Box::new([0.0; 50]),
            text: String::new(),
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ParameterDirective {
    Tnom,
    Abstol,
    Vntol,
    Reltol,
    Pivrel,
    Pivtol,
    Itl1,
    Itl2,
    Itl4,
    Chgtol,
    Gmin,
    Trtol,
    Tran,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ParameterDirectiveWrite {
    pub directive: ParameterDirective,
    pub text: String,
}

#[derive(Debug, Clone, PartialEq)]
pub struct ParameterDialogCommit {
    pub snapshot: SimulationParameterSnapshot,
    pub first_changed_directive: Option<ParameterDirectiveWrite>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HelpRequest {
    pub base_file: PathBuf,
    pub context_id: u32,
}

#[must_use]
pub fn help_request(help_root: &Path) -> HelpRequest {
    HelpRequest {
        base_file: help_root.join("TINA.CHM"),
        context_id: HELP_CONTEXT_ID,
    }
}

#[must_use]
pub const fn diagnostic_navigation(diagnostic: &Diagnostic) -> Option<DiagnosticNavigation> {
    navigate_diagnostic(diagnostic)
}

#[cfg(test)]
mod tests {
    use std::path::{Path, PathBuf};

    use crate::analysis_result_publishing::{AnalysisPoint, AnalysisSeries, AxisLabels};
    use crate::netlist_viewer::{Diagnostic, SelectionMode};

    use super::{
        AnalysisCommand, AnalysisCompletion, AnalysisContextMode, AnalysisPayload,
        AnalysisPublication, AnalysisRequest, AnalysisResultManager, AnalysisResultRoute,
        EditorCompileKind, NetlistEditorDocument, ParameterDialogCommit, ParameterDirective,
        ParameterDirectiveWrite, SavePlan, SimulationParameterSnapshot, SymbolicFamily,
        SymbolicMode, WarningVisibility, compile_request, complete_analysis, diagnostic_navigation,
        help_request, print_job,
    };

    fn series() -> AnalysisSeries {
        AnalysisSeries::new(
            "series",
            AxisLabels::new("x", "y"),
            [AnalysisPoint::new(1.0, 2.0)],
        )
    }

    #[test]
    fn new_and_open_reset_state_and_open_updates_recent_files() {
        let mut document = NetlistEditorDocument::default();
        document.editor.record_editor_text("old".to_owned());
        document.create_new();
        assert_eq!(document.file_name, Path::new("noname.cir"));
        assert!(!document.editor.modified);
        assert!(document.editor.text.is_empty());

        for index in 0..7 {
            let path = PathBuf::from(format!("{index}.cir"));
            document.load(path, format!("R{index}"));
        }
        assert_eq!(document.recent_files.len(), 5);
        assert_eq!(document.recent_files[0], Path::new("6.cir"));
        assert!(!document.editor.modified);
    }

    #[test]
    fn save_uses_save_as_for_default_name_and_clears_before_existing_write() {
        let mut document = NetlistEditorDocument::default();
        document.editor.record_editor_text("R1".to_owned());
        assert_eq!(document.plan_save(), SavePlan::SelectPath);

        let request = document.plan_save_as(PathBuf::from("saved.cir"));
        assert_eq!(request.path, Path::new("saved.cir"));
        assert!(document.editor.modified);
        document.complete_save(&request);
        assert!(!document.editor.modified);
        document.editor.record_editor_text("R2".to_owned());
        let request = document.begin_existing_save().expect("write request");
        assert_eq!(request.text, "R2");
        assert!(document.editor.modified);
        document.complete_save(&request);
        assert!(!document.editor.modified);
    }

    #[test]
    fn print_and_compile_requests_preserve_lines_and_erc_binding() {
        let mut document = NetlistEditorDocument {
            file_name: PathBuf::from("design.cir"),
            ..NetlistEditorDocument::default()
        };
        document.editor.record_editor_text("a\nb".to_owned());
        assert_eq!(print_job(&document).lines, ["a", "b"]);
        let erc = compile_request(&document, EditorCompileKind::ElectricalRulesCheck);
        assert!(erc.bind_message_locations);
        assert_eq!(erc.compile_mode, 0);
    }

    #[test]
    fn analysis_plans_keep_recovered_modes_selectors_and_compile_step() {
        let multisine = AnalysisRequest::new(AnalysisCommand::AcMultisine, "source".to_owned());
        assert_eq!(multisine.context_mode, AnalysisContextMode::Mode2);
        assert_eq!(multisine.setup_selector, Some(3));
        assert_eq!(multisine.result_route, AnalysisResultRoute::AcResults);

        let fourier = AnalysisRequest::new(AnalysisCommand::FourierSeries, String::new());
        assert_eq!(fourier.context_mode, AnalysisContextMode::Mode0);
        assert_eq!(fourier.compile_mode, Some(6));
        assert_eq!(
            fourier.result_route,
            AnalysisResultRoute::FourierSeriesDialog
        );

        let digital = AnalysisRequest::new(AnalysisCommand::DigitalTransient, String::new());
        assert_eq!(digital.context_mode, AnalysisContextMode::Mode0);
        assert_eq!(digital.setup_selector, Some(0));

        let poles = AnalysisRequest::new(AnalysisCommand::PolesAndZeros, String::new());
        assert_eq!(poles.context_mode, AnalysisContextMode::Mode0);
        assert_eq!(poles.result_route, AnalysisResultRoute::PolesAndZeros);
    }

    #[test]
    fn transient_and_dc_transfer_compose_the_result_manager() {
        let mut manager = AnalysisResultManager::default();
        let transient = AnalysisRequest::new(AnalysisCommand::Transient, String::new());
        assert_eq!(
            complete_analysis(
                &mut manager,
                &transient,
                AnalysisCompletion::succeeded(AnalysisPayload::Series(series())),
            ),
            AnalysisPublication::PublishedByManager
        );
        let dc = AnalysisRequest::new(AnalysisCommand::DcTransferCharacteristic, String::new());
        assert_eq!(
            complete_analysis(
                &mut manager,
                &dc,
                AnalysisCompletion::succeeded(AnalysisPayload::Series(series())),
            ),
            AnalysisPublication::PublishedByManager
        );
        assert_eq!(manager.results().len(), 2);
    }

    #[test]
    fn failed_and_cancelled_analyses_publish_nothing() {
        let request = AnalysisRequest::new(AnalysisCommand::Noise, String::new());
        let mut manager = AnalysisResultManager::default();
        assert_eq!(
            complete_analysis(&mut manager, &request, AnalysisCompletion::SetupFailed),
            AnalysisPublication::Noop
        );
        assert_eq!(
            complete_analysis(&mut manager, &request, AnalysisCompletion::Cancelled),
            AnalysisPublication::Noop
        );
    }

    #[test]
    fn symbolic_selectors_remain_typed_and_require_text() {
        let request = AnalysisRequest::new(AnalysisCommand::AcSemiSymbolicResult, String::new());
        let mut manager = AnalysisResultManager::default();
        let publication = complete_analysis(
            &mut manager,
            &request,
            AnalysisCompletion::succeeded(AnalysisPayload::SymbolicText("V(out)".to_owned())),
        );
        let AnalysisPublication::Symbolic(symbolic) = publication else {
            panic!("symbolic request")
        };
        assert_eq!(symbolic.family, SymbolicFamily::AcResult);
        assert_eq!(symbolic.mode, SymbolicMode::SemiSymbolic);
    }

    #[test]
    fn parameter_commit_carries_only_one_recovered_directive() {
        let commit = ParameterDialogCommit {
            snapshot: SimulationParameterSnapshot::default(),
            first_changed_directive: Some(ParameterDirectiveWrite {
                directive: ParameterDirective::Tnom,
                text: ".OPTIONS TNOM=27".to_owned(),
            }),
        };
        assert_eq!(
            commit.first_changed_directive.expect("directive").directive,
            ParameterDirective::Tnom
        );
    }

    #[test]
    fn warnings_help_and_diagnostic_navigation_are_typed() {
        assert_eq!(
            WarningVisibility::Visible.toggled(),
            WarningVisibility::Hidden
        );
        assert_eq!(help_request(Path::new("help")).context_id, 0x1195);
        let diagnostic = Diagnostic {
            message: "line".to_owned(),
            source_line: Some(8),
            source_identifier: None,
        };
        assert_eq!(diagnostic_navigation(&diagnostic).expect("line").line, 8);

        let mut document = NetlistEditorDocument::default();
        document.editor.set_selection(0..0, SelectionMode::Normal);
        assert!(document.editor.copy_selection().is_none());
    }
}
