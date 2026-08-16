use std::collections::{BTreeMap, BTreeSet};
use std::fmt;
use std::fs;
use std::path::{Path, PathBuf};
use std::time::{Duration, Instant};

use csv::ReaderBuilder;
use iced::font::Weight;
use iced::widget::{
    button, checkbox, column, container, pick_list, radio, row, scrollable, text, text_input,
};
use iced::{Element, Font, Length, Subscription, Task};
use rfd::AsyncFileDialog;
use tiara_core::analysis_result_file::AnalysisResultCurveStore;
use walkdir::WalkDir;

use crate::clone_test_bench::CloneTestBenchRequest;
use crate::mod_replication_file;
use crate::model_test_options::ModelTestOptionsRequest;

pub const TITLE_TEMPLATE: &str = "Test bench editor - %s";
pub const FORM_RESOURCE: &str = "frmModelTestBenchEditor";

const DEFAULT_TESTBENCH_NAME: &str = "Noname";
const LEFT_REGION_RATIO: f32 = 0.467_742;
const DOUBLE_CLICK_INTERVAL: Duration = Duration::from_millis(500);
const SAMPLE_COUNTS: [usize; 7] = [128, 256, 512, 1_024, 2_048, 4_096, 8_192];
const SIMULATION_TYPES: [SimulationType; 3] = [
    SimulationType::Transient,
    SimulationType::DirectCurrent,
    SimulationType::AlternatingCurrent,
];
const REFERENCE_BLOCKS: [ReferenceBlock; 2] =
    [ReferenceBlock::ReferenceName, ReferenceBlock::LocalRange];
const REFERENCE_FILTERS: [ReferenceVisibilityFilter; 4] = [
    ReferenceVisibilityFilter::All,
    ReferenceVisibilityFilter::ModeOne,
    ReferenceVisibilityFilter::ModeTwo,
    ReferenceVisibilityFilter::ModeZero,
];
const TIME_FIELDS: [TimeField; 2] = [TimeField::Start, TimeField::End];

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LoadedReferenceData {
    pub path: PathBuf,
    pub records: Vec<Vec<String>>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ReferenceDisplayKind {
    #[default]
    Curve,
    Figure,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ResultDisplayKind {
    #[default]
    TestResult,
    Ltspice,
    Pspice,
    Simetrix,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalysisResultKind {
    Reference,
    Test,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ReferenceEntryKind {
    #[default]
    Curve,
    Data,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CurveRenameRequest {
    pub path: PathBuf,
    pub curve_index: usize,
    pub new_name: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CurveRenameOutcome {
    Cancelled,
    Renamed,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum DisplayRequest {
    AnalysisResult {
        path: PathBuf,
        kind: AnalysisResultKind,
    },
    Image {
        path: PathBuf,
        title: String,
    },
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalCloseReason {
    Accepted,
    Other,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseDisposition {
    Release,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StoredSettings {
    pub testbench_path: String,
    pub timeout: i32,
    pub copy_reference_results: bool,
}

impl Default for StoredSettings {
    fn default() -> Self {
        Self {
            testbench_path: String::new(),
            timeout: 0,
            copy_reference_results: true,
        }
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct LoadedTestBench {
    pub path: String,
    pub root_folder: String,
    pub result_folder: String,
    pub data_file_name: String,
    pub tree_items: Vec<String>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum SimulationType {
    #[default]
    Transient,
    DirectCurrent,
    AlternatingCurrent,
}

impl SimulationType {
    const fn comparison_unit(self) -> &'static str {
        match self {
            Self::Transient => "s",
            Self::DirectCurrent => "V|A",
            Self::AlternatingCurrent => "Hz",
        }
    }
}

impl fmt::Display for SimulationType {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Transient => "Transient",
            Self::DirectCurrent => "DC",
            Self::AlternatingCurrent => "AC",
        })
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum CircuitTestMode {
    #[default]
    DoNotRun,
    SaveReference,
    Compare,
    RunWithoutComparison,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ReferenceBlock {
    #[default]
    ReferenceName,
    LocalRange,
}

impl fmt::Display for ReferenceBlock {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::ReferenceName => "Reference name",
            Self::LocalRange => "Local range",
        })
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ReferenceSelectionMode {
    #[default]
    ModeZero,
    ModeOne,
    ModeTwo,
}

impl fmt::Display for ReferenceSelectionMode {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::ModeZero => "Mode 0",
            Self::ModeOne => "Mode 1",
            Self::ModeTwo => "Mode 2",
        })
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ReferenceVisibilityFilter {
    #[default]
    All,
    ModeOne,
    ModeTwo,
    ModeZero,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ReferenceVisibility {
    Hidden,
    #[default]
    Visible,
}

impl fmt::Display for ReferenceVisibilityFilter {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::All => "All references",
            Self::ModeOne => "Selection mode 1",
            Self::ModeTwo => "Selection mode 2",
            Self::ModeZero => "Selection mode 0",
        })
    }
}

const fn reference_filter_matches(
    filter: ReferenceVisibilityFilter,
    selection_mode: ReferenceSelectionMode,
) -> bool {
    match filter {
        ReferenceVisibilityFilter::All => true,
        ReferenceVisibilityFilter::ModeOne => {
            matches!(selection_mode, ReferenceSelectionMode::ModeOne)
        }
        ReferenceVisibilityFilter::ModeTwo => {
            matches!(selection_mode, ReferenceSelectionMode::ModeTwo)
        }
        ReferenceVisibilityFilter::ModeZero => {
            matches!(selection_mode, ReferenceSelectionMode::ModeZero)
        }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum TimeField {
    #[default]
    Start,
    End,
}

impl fmt::Display for TimeField {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Start => "Start",
            Self::End => "End",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum CircuitOption {
    UseCustomComparisonRange,
    CornerTest,
    AddSpiceResult,
    IncludeLtspiceResult,
    IncludePspiceResult,
    IncludeSimetrixResult,
    UseDatasheetMinMax,
}

impl CircuitOption {
    const fn label(self) -> &'static str {
        match self {
            Self::UseCustomComparisonRange => "Use custom global comparison range",
            Self::CornerTest => "Corner test",
            Self::AddSpiceResult => "Add SPICE result",
            Self::IncludeLtspiceResult => "LTspice",
            Self::IncludePspiceResult => "PSpice",
            Self::IncludeSimetrixResult => "SIMetrix",
            Self::UseDatasheetMinMax => "Use datasheet min/max values",
        }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum RunScope {
    #[default]
    AllCircuits,
    CurrentCircuit,
}

#[derive(Debug, Clone, PartialEq)]
pub struct ReferenceSetting {
    pub name: String,
    pub kind: ReferenceEntryKind,
    pub selected: bool,
    pub include_name: bool,
    pub compare_time: bool,
    pub time_from: f64,
    pub time_to: f64,
    pub tolerance: f64,
    pub selection_mode: ReferenceSelectionMode,
    pub visibility: ReferenceVisibility,
}

impl Default for ReferenceSetting {
    fn default() -> Self {
        Self {
            name: String::new(),
            kind: ReferenceEntryKind::Curve,
            selected: false,
            include_name: false,
            compare_time: false,
            time_from: 0.0,
            time_to: 1.0,
            tolerance: 5.0,
            selection_mode: ReferenceSelectionMode::ModeZero,
            visibility: ReferenceVisibility::Visible,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct CircuitSettings {
    pub simulation_type: SimulationType,
    pub options: BTreeSet<CircuitOption>,
    pub comparison_from: f64,
    pub comparison_to: f64,
    pub samples: usize,
    pub run_scope: RunScope,
    pub test_mode: CircuitTestMode,
    pub references: Vec<ReferenceSetting>,
}

impl Default for CircuitSettings {
    fn default() -> Self {
        Self {
            simulation_type: SimulationType::Transient,
            options: BTreeSet::new(),
            comparison_from: 0.0,
            comparison_to: 1.0,
            samples: 1_024,
            run_scope: RunScope::AllCircuits,
            test_mode: CircuitTestMode::DoNotRun,
            references: Vec::new(),
        }
    }
}

impl CircuitSettings {
    fn comparison_range_is_valid(&self) -> bool {
        self.comparison_from <= self.comparison_to || self.comparison_from < 0.0
    }
}

pub trait TestBenchLoader {
    fn load(&mut self, path: &str) -> Option<LoadedTestBench>;
}

pub trait TestBenchRunner {
    fn run(&mut self, path: &str, batch_mode: bool);

    fn process_messages(&mut self);

    fn wait_between_runs(&mut self, delay: Duration);
}

pub trait ReferenceCurveValidator {
    /// Validates the comparison references for one circuit.
    ///
    /// # Errors
    ///
    /// Returns a text error when validation cannot inspect the reference data.
    fn validate(&mut self, circuit_name: &str, settings: &CircuitSettings) -> Result<bool, String>;
}

pub trait ReportDescriptionWriter {
    /// Writes the current report metadata below an existing circuit folder.
    ///
    /// # Errors
    ///
    /// Returns a text error when metadata creation or persistence fails.
    fn write_description(&mut self, circuit_folder: &Path) -> Result<(), String>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ClonePair {
    pub source_folder: String,
    pub circuit_folder: String,
    pub source_prefix: String,
    pub target_prefix: String,
}

pub trait CloneTestBenchService {
    /// Copies and renames the file set for one clone pair.
    ///
    /// # Errors
    ///
    /// Returns a text error when a required source file is missing or a copy
    /// operation fails.
    fn clone_pair(&mut self, pair: &ClonePair) -> Result<(), String>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TestBenchSnapshot {
    pub root_folder: String,
    pub result_folder: String,
    pub data_file_name: String,
    pub show_report: bool,
    pub samples: usize,
    pub max_threads: usize,
    pub timeout: i32,
    pub tree_items: Vec<String>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct CircuitReload {
    pub added: usize,
    pub removed: usize,
}

pub trait TestBenchSaver {
    /// Serializes one staged testbench document to the selected path.
    ///
    /// # Errors
    ///
    /// Returns a text error when the document cannot be serialized or written.
    fn save(&mut self, path: &Path, snapshot: &TestBenchSnapshot) -> Result<(), String>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SaveOutcome {
    Cancelled,
    Saved(PathBuf),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum StartTestOutcome {
    NoCircuit,
    ValidationRejected,
    Started(PathBuf),
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct NewTestBench {
    pub folder: PathBuf,
    pub circuits: Vec<String>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct BatchRunResult {
    pub selected: usize,
    pub completed: usize,
    pub cancelled: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ActionAvailability {
    pub create_testbench: bool,
    pub load_reference: bool,
    pub load_result: bool,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct EditorLayout {
    pub window_width: f32,
    pub left_region_width: f32,
    pub right_region_width: f32,
    pub active_column: usize,
}

impl Default for EditorLayout {
    fn default() -> Self {
        Self {
            window_width: 1_080.0,
            left_region_width: 504.0,
            right_region_width: 575.0,
            active_column: 0,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum RegistrationState {
    Registered,
    Released,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum RequestState {
    #[default]
    Idle,
    Requested,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum WindowVisibility {
    #[default]
    Visible,
    Hidden,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum ReferenceControlState {
    #[default]
    Disabled,
    Enabled,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
enum IdleControlGroup {
    FilterGood,
    Comparison,
    ComparisonOrSave,
    ComparisonOrRunWithout,
    CustomComparisonRange,
    SpiceFormats,
    CompactLayoutAction,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
struct ReportOptions {
    show_report: bool,
    filter_good: bool,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
struct LocalBulkControls {
    reference_block: ReferenceBlock,
    time_field: TimeField,
    time_value: String,
    tolerance_value: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct GlobalComparisonControls {
    from: String,
    to: String,
}

impl Default for GlobalComparisonControls {
    fn default() -> Self {
        Self {
            from: "0".to_owned(),
            to: "1".to_owned(),
        }
    }
}

#[derive(Debug, Clone)]
pub enum GlobalComparisonMessage {
    FromChanged(String),
    ToChanged(String),
}

#[derive(Debug, Clone)]
pub enum ReferenceDataMessage {
    Select,
    Selected(Result<Option<LoadedReferenceData>, String>),
}

#[derive(Debug, Clone, Copy)]
pub enum ResultDisplayMessage {
    ReferenceKindChanged(ReferenceDisplayKind),
    LoadReference,
    ResultKindChanged(ResultDisplayKind),
    LoadResult,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
struct ModelState {
    samples: usize,
    max_threads: usize,
    timeout: i32,
    copy_reference_results: bool,
}

#[derive(Debug, Clone)]
pub enum LocalReferenceMessage {
    ReferenceBlockChanged(ReferenceBlock),
    SelectAll,
    DeselectAll,
    TimeFieldChanged(TimeField),
    TimeChanged(String),
    ApplyTime,
    ToleranceChanged(String),
    ApplyTolerance,
    Reset,
    RemoveDataFile,
    SetupCornerTest,
    CurveNameChanged(String),
    ChangeCurveName,
}

#[derive(Debug, Clone)]
pub enum Message {
    RootFolderChanged(String),
    ResultFolderChanged(String),
    DataFileChanged(String),
    ShowReportChanged(bool),
    New,
    NewFolderSelected(Result<Option<NewTestBench>, String>),
    Load,
    Save,
    SaveAs,
    Options,
    OptionsAccepted(Option<ModelTestOptionsRequest>),
    RunMultiple,
    MultipleFileSelected(Result<Option<Vec<String>>, String>),
    StartTest,
    OpenReplicationModifier,
    ModifyCircuitFolder,
    CircuitFolderSelected(Option<PathBuf>),
    SelectResultFolder,
    ResultFolderSelected(Option<PathBuf>),
    SelectAllCircuits,
    DeselectAllCircuits,
    InvertCircuitSelection,
    TreeItemPressed(usize),
    OpenSelectedCircuit,
    DeleteSelectedCircuits,
    ReloadCircuitFiles,
    CircuitFilesDiscovered(Result<Vec<String>, String>),
    SampleCountChanged(usize),
    SimulationTypeChanged(SimulationType),
    CircuitOptionChanged(CircuitOption, bool),
    TestModeChanged(CircuitTestMode),
    ApplyTestModeToAll,
    RunScopeChanged(RunScope),
    LocalReference(LocalReferenceMessage),
    ReferenceVisibilityFilterChanged(ReferenceVisibilityFilter),
    GlobalComparison(GlobalComparisonMessage),
    ReferenceData(ReferenceDataMessage),
    ResultDisplay(ResultDisplayMessage),
    FilterGoodChanged(bool),
    Idle { client_height: f32 },
    NoOp,
}

#[derive(Debug)]
pub struct Window {
    title_template: String,
    settings_session: Option<StoredSettings>,
    model: Option<ModelState>,
    registration: RegistrationState,
    testbench_path: String,
    testbench_name: String,
    root_folder: String,
    result_folder: String,
    data_file_name: String,
    tree_items: Vec<String>,
    circuit_items: Vec<bool>,
    bold_tree_items: Vec<bool>,
    circuit_settings: Vec<CircuitSettings>,
    active_circuit_settings: Option<CircuitSettings>,
    selected_tree_items: BTreeSet<usize>,
    pending_batch_paths: Vec<String>,
    synchronized_root_folder: String,
    selected_tree_item: usize,
    reference_control_state: ReferenceControlState,
    comparison_unit: String,
    pending_circuit_to_open: Option<PathBuf>,
    last_tree_press: Option<(usize, Instant)>,
    action_availability: ActionAvailability,
    layout: EditorLayout,
    main_scroll_offset: f64,
    reference_scroll_position: f64,
    reference_visibility_filter: ReferenceVisibilityFilter,
    report_options: ReportOptions,
    local_bulk_controls: LocalBulkControls,
    global_comparison_controls: GlobalComparisonControls,
    reference_data: Option<LoadedReferenceData>,
    reference_display_kind: Option<ReferenceDisplayKind>,
    result_display_kind: Option<ResultDisplayKind>,
    pending_display_request: Option<DisplayRequest>,
    curve_name_input: String,
    pending_curve_rename_request: Option<CurveRenameRequest>,
    start_test_request: RequestState,
    replication_modifier_request: RequestState,
    visibility: WindowVisibility,
    idle_control_groups: BTreeSet<IdleControlGroup>,
    client_height: f32,
    saved_once: bool,
    loaded_once: bool,
    last_error: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            title_template: TITLE_TEMPLATE.to_owned(),
            settings_session: None,
            model: None,
            registration: RegistrationState::Released,
            testbench_path: String::new(),
            testbench_name: DEFAULT_TESTBENCH_NAME.to_owned(),
            root_folder: String::new(),
            result_folder: String::new(),
            data_file_name: String::new(),
            tree_items: Vec::new(),
            circuit_items: Vec::new(),
            bold_tree_items: Vec::new(),
            circuit_settings: Vec::new(),
            active_circuit_settings: None,
            selected_tree_items: BTreeSet::new(),
            pending_batch_paths: Vec::new(),
            synchronized_root_folder: String::new(),
            selected_tree_item: 0,
            reference_control_state: ReferenceControlState::Disabled,
            comparison_unit: SimulationType::Transient.comparison_unit().to_owned(),
            pending_circuit_to_open: None,
            last_tree_press: None,
            action_availability: ActionAvailability::default(),
            layout: EditorLayout::default(),
            main_scroll_offset: 0.0,
            reference_scroll_position: 0.0,
            reference_visibility_filter: ReferenceVisibilityFilter::All,
            report_options: ReportOptions::default(),
            local_bulk_controls: LocalBulkControls {
                time_value: "0".to_owned(),
                tolerance_value: "5".to_owned(),
                ..LocalBulkControls::default()
            },
            global_comparison_controls: GlobalComparisonControls::default(),
            reference_data: None,
            reference_display_kind: Some(ReferenceDisplayKind::Curve),
            result_display_kind: Some(ResultDisplayKind::TestResult),
            pending_display_request: None,
            curve_name_input: String::new(),
            pending_curve_rename_request: None,
            start_test_request: RequestState::Idle,
            replication_modifier_request: RequestState::Idle,
            visibility: WindowVisibility::Visible,
            idle_control_groups: BTreeSet::new(),
            client_height: 800.0,
            saved_once: false,
            loaded_once: false,
            last_error: None,
        }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::RootFolderChanged(value) => {
                self.root_folder = value;
                self.refresh_action_availability();
            }
            Message::ResultFolderChanged(value) => {
                self.result_folder = value;
                self.refresh_action_availability();
            }
            Message::DataFileChanged(value) => {
                self.data_file_name = value;
                self.refresh_action_availability();
            }
            Message::ShowReportChanged(value) => self.set_show_report(value),
            Message::New => return self.select_new_testbench_folder(),
            Message::NewFolderSelected(result) => match result {
                Ok(selection) => {
                    self.create_new_testbench(selection);
                    self.last_error = None;
                }
                Err(error) => self.last_error = Some(error),
            },
            Message::OptionsAccepted(request) => _ = self.apply_model_test_options(request),
            Message::RunMultiple => return self.select_multiple_testbench_file(),
            Message::MultipleFileSelected(result) => match result {
                Ok(Some(paths)) => {
                    self.pending_batch_paths = paths;
                    self.last_error = None;
                }
                Ok(None) => {}
                Err(error) => self.last_error = Some(error),
            },
            Message::StartTest => self.stage_start_test(),
            Message::OpenReplicationModifier => self.open_replication_file_modifier(),
            Message::ModifyCircuitFolder => return self.select_circuit_folder(),
            Message::CircuitFolderSelected(selection) => {
                self.apply_circuit_folder_selection(selection.as_deref());
            }
            Message::SelectResultFolder => return self.select_result_folder(),
            Message::ResultFolderSelected(selection) => {
                self.apply_result_folder_selection(selection.as_deref());
            }
            Message::SelectAllCircuits => self.select_all_circuits(),
            Message::DeselectAllCircuits => self.deselect_all_circuits(),
            Message::InvertCircuitSelection => self.invert_circuit_selection(),
            Message::TreeItemPressed(index) => {
                self.handle_tree_item_press(index, Instant::now());
            }
            Message::OpenSelectedCircuit => _ = self.stage_selected_circuit_open(),
            Message::DeleteSelectedCircuits => _ = self.delete_selected_circuits(),
            Message::ReloadCircuitFiles => return self.reload_circuit_files(),
            Message::CircuitFilesDiscovered(result) => match result {
                Ok(circuits) => {
                    self.apply_discovered_circuit_files(circuits);
                    self.last_error = None;
                }
                Err(error) => self.last_error = Some(error),
            },
            Message::SampleCountChanged(samples) => {
                self.set_sample_count(samples);
            }
            Message::SimulationTypeChanged(simulation_type) => {
                self.set_simulation_type(simulation_type);
            }
            Message::CircuitOptionChanged(option, checked) => {
                self.apply_circuit_option_change(option, checked);
            }
            Message::TestModeChanged(mode) => {
                self.apply_test_mode_change(mode);
            }
            Message::ApplyTestModeToAll => {
                self.apply_test_mode_to_all_circuits();
            }
            Message::RunScopeChanged(scope) => match scope {
                RunScope::AllCircuits => {
                    self.select_run_all_circuits();
                }
                RunScope::CurrentCircuit => {
                    self.select_run_current_circuit();
                }
            },
            Message::LocalReference(message) => self.update_local_reference(message),
            Message::ReferenceVisibilityFilterChanged(filter) => {
                self.apply_reference_visibility_filter(filter);
            }
            Message::GlobalComparison(message) => self.update_global_comparison(message),
            Message::ReferenceData(message) => return self.update_reference_data(message),
            Message::ResultDisplay(message) => self.update_result_display(message),
            Message::FilterGoodChanged(checked) => {
                self.report_options.filter_good = checked;
            }
            Message::Idle { client_height } => {
                self.client_height = client_height;
            }
            Message::Load | Message::Save | Message::SaveAs | Message::Options | Message::NoOp => {}
        }

        self.refresh_idle_control_availability(self.client_height);
        Task::none()
    }

    /// Ports Ghidra function `FUN_01302c90` at `0x01302C90`.
    ///
    /// The original vertical scrollbar calculates one rounded content step
    /// from the content and viewport heights, then moves the main panel by the
    /// negative scrollbar position. Iced supplies the live scrolling widget;
    /// this adapter preserves the recovered offset calculation for state and
    /// tests.
    pub fn apply_main_scroll_position(
        &mut self,
        position: i32,
        content_height: f64,
        viewport_height: f64,
        maximum: i32,
    ) -> f64 {
        if maximum <= 0 {
            self.main_scroll_offset = 0.0;
            return self.main_scroll_offset;
        }

        let step = ((content_height - viewport_height) / f64::from(maximum)).round();
        self.main_scroll_offset = -f64::from(position) * step;
        self.main_scroll_offset
    }

    /// Ports Ghidra function `FUN_01302cf0` at `0x01302CF0`.
    ///
    /// The recovered local-reference scroll-box exit handler is one `RET` and
    /// leaves the model and view unchanged.
    pub const fn reference_scroll_exit(&mut self) {}

    /// Ports Ghidra function `FUN_01302d00` at `0x01302D00`.
    ///
    /// The local-reference mouse wheel rounds the wheel delta in units of 15
    /// and subtracts that step from the current vertical position. Iced owns
    /// the native wheel event and scroll bounds.
    pub fn apply_reference_mouse_wheel(&mut self, wheel_delta: i32) -> f64 {
        let step = (f64::from(wheel_delta) / 15.0).round();
        self.reference_scroll_position -= step;
        self.reference_scroll_position
    }

    /// Ports Ghidra function `FUN_01303f50` at `0x01303F50`.
    ///
    /// It commits the active reference rows, stores the selected filter, sets
    /// every row visible for All, or matches selection modes 1, 2, or 0. The
    /// current circuit clone is then rebuilt from the filtered model.
    pub fn apply_reference_visibility_filter(
        &mut self,
        filter: ReferenceVisibilityFilter,
    ) -> usize {
        self.commit_active_circuit_settings();
        self.reference_visibility_filter = filter;
        let mut visible_count = 0;
        for settings in &mut self.circuit_settings {
            for reference in &mut settings.references {
                reference.visibility = if reference_filter_matches(filter, reference.selection_mode)
                {
                    ReferenceVisibility::Visible
                } else {
                    ReferenceVisibility::Hidden
                };
                visible_count += usize::from(reference.visibility == ReferenceVisibility::Visible);
            }
        }
        self.active_circuit_settings = self
            .circuit_settings
            .get(self.selected_tree_item)
            .filter(|_| self.circuit_items.get(self.selected_tree_item).copied() == Some(true))
            .cloned();
        visible_count
    }

    /// Ports Ghidra function `FUN_012f3620` at `0x012F3620`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.FormCreate`. It retains the caption template,
    /// opens the form-owned settings session, creates the editor model, limits
    /// the model to one worker, and registers the live form instance.
    pub fn initialize_model_test_bench_editor(&mut self, settings: StoredSettings) {
        let timeout = settings.timeout;
        let copy_reference_results = settings.copy_reference_results;
        TITLE_TEMPLATE.clone_into(&mut self.title_template);
        self.settings_session = Some(settings);
        self.model = Some(ModelState {
            samples: 1_024,
            max_threads: 1,
            timeout,
            copy_reference_results,
        });
        self.registration = RegistrationState::Registered;
        self.report_options = ReportOptions::default();
        self.visibility = WindowVisibility::Visible;
    }

    /// Ports Ghidra function `FUN_012f3750` at `0x012F3750`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.FormClose`. It selects Delphi `caFree`, drops
    /// the form-owned model, clears the shared live-form registration, and
    /// releases the transient result collection.
    pub fn release_model_test_bench_editor(&mut self) -> CloseDisposition {
        self.model = None;
        self.registration = RegistrationState::Released;
        self.tree_items.clear();
        self.circuit_items.clear();
        self.bold_tree_items.clear();
        self.circuit_settings.clear();
        self.active_circuit_settings = None;
        self.selected_tree_items.clear();
        self.selected_tree_item = 0;
        self.pending_circuit_to_open = None;
        self.last_tree_press = None;
        self.start_test_request = RequestState::Idle;
        self.replication_modifier_request = RequestState::Idle;
        self.visibility = WindowVisibility::Hidden;
        CloseDisposition::Release
    }

    /// Ports Ghidra function `FUN_012f37a0` at `0x012F37A0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.FormCloseQuery`. An accepted close is denied
    /// when the tree contains items and no save has started. Other close
    /// reasons are allowed.
    #[must_use]
    pub fn can_close(&self, reason: ModalCloseReason) -> bool {
        reason != ModalCloseReason::Accepted || self.saved_once || self.tree_items.is_empty()
    }

    /// Ports Ghidra function `FUN_012f37e0` at `0x012F37E0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.FormDestroy`. It destroys the form-owned
    /// settings object. The Rust port drops the injected settings session.
    pub fn destroy_model_test_bench_editor(&mut self) {
        self.settings_session = None;
    }

    /// Ports Ghidra function `FUN_012f3800` at `0x012F3800`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.FormHide`. It writes the current testbench
    /// path to `ModelTest Settings/TestBench`.
    #[must_use]
    pub fn persist_last_testbench_on_hide(&mut self) -> StoredSettings {
        let mut settings = self.settings_session.clone().unwrap_or_default();
        settings.testbench_path.clone_from(&self.testbench_path);
        self.settings_session = Some(settings.clone());
        settings
    }

    /// Ports Ghidra function `FUN_012f3890` at `0x012F3890`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.FormResize`. It divides the client width at
    /// 46.7742 percent, leaves a one-pixel boundary, keeps two grid columns,
    /// and clamps the active column to the available range.
    pub fn resize_model_test_bench_editor(&mut self, client_width: f32, active_column: isize) {
        let safe_width = client_width.max(1.0);
        let left_region_width = (safe_width * LEFT_REGION_RATIO).floor();
        self.layout = EditorLayout {
            window_width: safe_width,
            left_region_width,
            right_region_width: (safe_width - left_region_width - 1.0).max(0.0),
            active_column: usize::try_from(active_column).unwrap_or_default().min(1),
        };
    }

    /// Ports Ghidra function `FUN_012f3980` at `0x012F3980`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.FormShow`. The first show reads the stored
    /// path, defaults an empty value to `Noname`, resets the editor, and asks
    /// the injected loader for that testbench. Every show resets the scroll
    /// and tree selection and sizes the window 200 pixels below the available
    /// desktop width.
    pub fn show_model_test_bench_editor<L: TestBenchLoader>(
        &mut self,
        settings: &StoredSettings,
        available_width: f32,
        loader: &mut L,
    ) {
        if !self.loaded_once {
            let requested_path = if settings.testbench_path.trim().is_empty() {
                DEFAULT_TESTBENCH_NAME
            } else {
                settings.testbench_path.as_str()
            };

            self.reset_testbench(requested_path);
            if let Some(loaded) = loader.load(requested_path) {
                self.apply_loaded_testbench(loaded);
            }
            self.loaded_once = true;
        }

        self.resize_model_test_bench_editor((available_width - 200.0).max(1.0), 0);
        self.selected_tree_item = 0;
        self.refresh_action_availability();
    }

    /// Ports Ghidra function `FUN_012f5430` at `0x012F5430`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.mnCloneTestbenchClick`. A canceled dialog is
    /// a no-op. An accepted request parses the target-prefix and circuit-folder
    /// comma-text lists, rejects unequal counts, and sends each ordered pair to
    /// the injected clone service.
    ///
    /// # Errors
    ///
    /// Returns a text error for malformed comma text, unequal list counts, a
    /// missing required source type, or a failed copy operation.
    pub fn clone_accepted_testbench<S: CloneTestBenchService>(
        &mut self,
        request: Option<&CloneTestBenchRequest>,
        service: &mut S,
    ) -> Result<usize, String> {
        let Some(request) = request else {
            return Ok(0);
        };
        let target_prefixes = parse_comma_text(&request.target_prefixes)?;
        let circuit_folders = parse_comma_text(&request.circuit_folders)?;
        if target_prefixes.len() != circuit_folders.len() {
            return Err(
                "Number of items in target_prefix and in circuit_folders mismatch!".to_owned(),
            );
        }

        for (target_prefix, circuit_folder) in target_prefixes.iter().zip(&circuit_folders) {
            service.clone_pair(&ClonePair {
                source_folder: request.source_folder.clone(),
                circuit_folder: circuit_folder.clone(),
                source_prefix: request.source_prefix.clone(),
                target_prefix: target_prefix.clone(),
            })?;
        }
        Ok(target_prefixes.len())
    }

    /// Ports Ghidra function `FUN_012f6060` at `0x012F6060`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.mnLoadClick`. A canceled `.mtb` selection
    /// preserves the current editor. Acceptance resets the editor before it
    /// invokes the injected loader. A missing or invalid document therefore
    /// leaves the recovered default state, while a valid document rebuilds the
    /// visible paths, circuit tree, and action availability.
    pub fn load_selected_testbench<L: TestBenchLoader>(
        &mut self,
        selection: Option<&Path>,
        loader: &mut L,
    ) -> bool {
        let Some(selection) = selection else {
            return false;
        };
        let path = selection.to_string_lossy().into_owned();
        self.reset_testbench(&path);
        if let Some(loaded) = loader.load(&path) {
            self.apply_loaded_testbench(loaded);
        }
        self.refresh_action_availability();
        true
    }

    /// Ports Ghidra function `FUN_012f6e10` at `0x012F6E10`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.btnModifyCircuitFolderClick`. Acceptance
    /// replaces only the circuit-folder edit. Cancellation preserves it. Both
    /// paths synchronize the internal edit buffer and do not reload the tree.
    pub fn apply_circuit_folder_selection(&mut self, selection: Option<&Path>) {
        if let Some(path) = selection {
            self.root_folder = path.to_string_lossy().into_owned();
        }
        self.synchronized_root_folder.clone_from(&self.root_folder);
        self.refresh_action_availability();
    }

    pub fn select_circuit_folder(&self) -> Task<Message> {
        Task::perform(
            pick_folder(self.root_folder.clone()),
            Message::CircuitFolderSelected,
        )
    }

    /// Ports Ghidra function `FUN_012f74a0` at `0x012F74A0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.btnSelectResultFolderClick`. Acceptance
    /// replaces the result-folder edit. Cancellation preserves it. The method
    /// does not create the folder or move existing results.
    pub fn apply_result_folder_selection(&mut self, selection: Option<&Path>) {
        if let Some(path) = selection {
            self.result_folder = path.to_string_lossy().into_owned();
            self.refresh_action_availability();
        }
    }

    pub fn select_result_folder(&self) -> Task<Message> {
        Task::perform(
            pick_folder(self.result_folder.clone()),
            Message::ResultFolderSelected,
        )
    }

    /// Ports Ghidra function `FUN_012f7530` at `0x012F7530`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.btnSelectAllClick`. It selects every item that
    /// carries the recovered circuit flag and excludes root and folder items.
    pub fn select_all_circuits(&mut self) {
        self.selected_tree_items = self
            .circuit_items
            .iter()
            .enumerate()
            .filter_map(|(index, is_circuit)| is_circuit.then_some(index))
            .collect();
    }

    /// Ports Ghidra function `FUN_012f75e0` at `0x012F75E0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.btnDeselectAllClick`. It clears only the tree
    /// multi-selection and leaves every item and file unchanged.
    pub fn deselect_all_circuits(&mut self) {
        self.selected_tree_items.clear();
    }

    /// Ports Ghidra function `FUN_012f7600` at `0x012F7600`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.btnInvertSelectionClick`. It builds the set of
    /// circuit items, removes the current selection, and applies the remaining
    /// circuit items. Root and folder items remain unselected.
    pub fn invert_circuit_selection(&mut self) {
        self.selected_tree_items = self
            .circuit_items
            .iter()
            .enumerate()
            .filter_map(|(index, is_circuit)| {
                (*is_circuit && !self.selected_tree_items.contains(&index)).then_some(index)
            })
            .collect();
    }

    /// Ports Ghidra function `FUN_012f68c0` at `0x012F68C0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.tvFilesChanging`. Before a tree selection
    /// changes, it commits the active circuit controls to the outgoing record.
    /// It then checks the target circuit's recovered comparison-range rule.
    /// An invalid nonnegative descending range keeps the old selection and
    /// reports `Invalid comparison range!`. The target's run-current marker is
    /// cleared after every attempted transition that reaches a circuit record.
    pub fn prepare_tree_selection_change(&mut self, target_index: usize) -> bool {
        self.commit_active_circuit_settings();

        if target_index >= self.tree_items.len() {
            return false;
        }

        if self.circuit_items.get(target_index).copied() == Some(true) {
            let Some(settings) = self.circuit_settings.get_mut(target_index) else {
                return false;
            };
            let range_is_valid = settings.comparison_range_is_valid();
            settings.run_scope = RunScope::AllCircuits;
            if !range_is_valid {
                self.last_error = Some("Invalid comparison range!".to_owned());
                return false;
            }
        }

        self.last_error = None;
        true
    }

    /// Ports Ghidra function `FUN_012f6300` at `0x012F6300`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.tvFilesChange`. A circuit selection loads its
    /// simulation type, global comparison settings, SPICE-result flags,
    /// datasheet-limit option, sample count, run scope, test mode, and local
    /// reference rows into the form state. Structural rows leave the current
    /// controls unchanged. Reference-row controls are enabled only when the
    /// first recovered reference row is selected.
    pub fn load_tree_selection(&mut self, index: usize) -> bool {
        if index >= self.tree_items.len() {
            return false;
        }

        self.selected_tree_item = index;
        if self.circuit_items.get(index).copied() != Some(true) {
            return false;
        }

        let Some(settings) = self.circuit_settings.get(index).cloned() else {
            return false;
        };
        self.reference_control_state = if settings
            .references
            .first()
            .is_some_and(|reference| reference.selected)
        {
            ReferenceControlState::Enabled
        } else {
            ReferenceControlState::Disabled
        };
        settings
            .simulation_type
            .comparison_unit()
            .clone_into(&mut self.comparison_unit);
        self.global_comparison_controls.from = settings.comparison_from.to_string();
        self.global_comparison_controls.to = settings.comparison_to.to_string();
        self.active_circuit_settings = Some(settings);
        self.refresh_idle_control_availability(self.client_height);
        true
    }

    /// Applies the recovered pre-change and post-change tree event sequence.
    pub fn try_select_tree_item(&mut self, index: usize) -> bool {
        if !self.prepare_tree_selection_change(index) {
            return false;
        }

        self.load_tree_selection(index);
        true
    }

    /// Ports Ghidra function `FUN_012f69d0` at `0x012F69D0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.tvFilesCustomDrawItem`. The recovered tree
    /// item flag `0x10` selects bold font weight; all other rows use normal
    /// weight.
    /// The Rust port maps that state to [`iced::Font`] instead of modifying a
    /// Delphi canvas font.
    #[must_use]
    pub fn tree_item_font(&self, index: usize) -> Font {
        let weight = if self.bold_tree_items.get(index).copied() == Some(true) {
            Weight::Bold
        } else {
            Weight::Normal
        };
        Font {
            weight,
            ..Font::DEFAULT
        }
    }

    /// Ports Ghidra function `FUN_012f6a30` at `0x012F6A30`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.tvFilesDblClick`. A circuit row produces a
    /// `.TSC` path below the configured circuit root and stages it for the
    /// schematic-editor coordinator. Missing, structural, and out-of-range
    /// selections are no-ops. [`std::path`] replaces the recovered manual
    /// Unicode path concatenation.
    pub fn stage_selected_circuit_open(&mut self) -> Option<PathBuf> {
        let path = self.selected_circuit_path()?;
        self.pending_circuit_to_open = Some(path.clone());
        Some(path)
    }

    /// Ports Ghidra function `FUN_012f6c50` at `0x012F6C50`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.tvFilesKeyDown`. The Delete key removes only
    /// selected circuit rows and their parallel per-circuit records. Reverse
    /// index order prevents a removal from shifting a later target.
    /// Non-circuit rows remain in place.
    pub fn delete_selected_circuits(&mut self) -> usize {
        let mut indexes = self
            .selected_tree_items
            .iter()
            .copied()
            .filter(|index| self.circuit_items.get(*index).copied() == Some(true))
            .collect::<Vec<_>>();
        indexes.sort_unstable_by(|left, right| right.cmp(left));
        let removed_before_active = indexes
            .iter()
            .filter(|index| **index < self.selected_tree_item)
            .count();

        for index in &indexes {
            self.tree_items.remove(*index);
            self.circuit_items.remove(*index);
            if *index < self.bold_tree_items.len() {
                self.bold_tree_items.remove(*index);
            }
            if *index < self.circuit_settings.len() {
                self.circuit_settings.remove(*index);
            }
        }

        self.selected_tree_items.clear();
        self.selected_tree_item = self
            .selected_tree_item
            .saturating_sub(removed_before_active)
            .min(self.tree_items.len().saturating_sub(1));
        self.pending_circuit_to_open = None;
        self.last_tree_press = None;
        self.active_circuit_settings = self
            .circuit_settings
            .get(self.selected_tree_item)
            .filter(|_| self.circuit_items.get(self.selected_tree_item).copied() == Some(true))
            .cloned();
        indexes.len()
    }

    #[must_use]
    pub const fn take_pending_circuit_open(&mut self) -> Option<PathBuf> {
        self.pending_circuit_to_open.take()
    }

    fn handle_tree_item_press(&mut self, index: usize, now: Instant) {
        if !self.try_select_tree_item(index) {
            return;
        }

        self.selected_tree_items = if self.circuit_items.get(index).copied() == Some(true) {
            BTreeSet::from([index])
        } else {
            BTreeSet::new()
        };

        let is_double_click = self
            .last_tree_press
            .is_some_and(|(last_index, last_press)| {
                last_index == index
                    && now.saturating_duration_since(last_press) <= DOUBLE_CLICK_INTERVAL
            });
        self.last_tree_press = if is_double_click {
            None
        } else {
            Some((index, now))
        };
        if is_double_click {
            self.stage_selected_circuit_open();
        }
    }

    /// Ports Ghidra function `FUN_012f6eb0` at `0x012F6EB0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.btnReloadFilesClick`. An empty circuit-folder
    /// edit is a no-op. Otherwise, an iced task uses [`std::fs::read_dir`] to
    /// find only direct `.TSC` files. The completion message adds missing
    /// circuit rows, removes stale rows without deleting files, sorts the
    /// circuit names, selects the root row, and rebuilds aligned settings.
    pub fn reload_circuit_files(&self) -> Task<Message> {
        if self.root_folder.trim().is_empty() {
            return Task::none();
        }

        let root_folder = self.root_folder.clone();
        Task::perform(
            async move { discover_direct_circuit_files(&root_folder) },
            Message::CircuitFilesDiscovered,
        )
    }

    /// Applies the file-discovery result from [`Self::reload_circuit_files`].
    pub fn apply_discovered_circuit_files(&mut self, mut discovered: Vec<String>) -> CircuitReload {
        discovered.sort_by_key(|name| name.to_lowercase());
        discovered.dedup_by(|left, right| left.eq_ignore_ascii_case(right));

        let old_items = std::mem::take(&mut self.tree_items);
        let old_circuit_items = std::mem::take(&mut self.circuit_items);
        let old_bold_items = std::mem::take(&mut self.bold_tree_items);
        let old_settings = std::mem::take(&mut self.circuit_settings);
        let mut settings_by_name = BTreeMap::new();
        let mut old_circuit_count: usize = 0;

        for (index, item) in old_items.iter().enumerate() {
            if old_circuit_items.get(index).copied() == Some(true) {
                old_circuit_count += 1;
                settings_by_name.insert(
                    normalized_circuit_name(item),
                    old_settings.get(index).cloned().unwrap_or_default(),
                );
            }
        }

        for (index, item) in old_items.into_iter().enumerate() {
            if old_circuit_items.get(index).copied() != Some(true) {
                self.tree_items.push(item);
                self.circuit_items.push(false);
                self.bold_tree_items
                    .push(old_bold_items.get(index).copied().unwrap_or_default());
                self.circuit_settings
                    .push(old_settings.get(index).cloned().unwrap_or_default());
            }
        }

        let retained = discovered
            .iter()
            .filter(|name| settings_by_name.contains_key(&normalized_circuit_name(name)))
            .count();
        let added = discovered.len().saturating_sub(retained);
        let removed = old_circuit_count.saturating_sub(retained);

        for name in discovered {
            let settings = settings_by_name
                .remove(&normalized_circuit_name(&name))
                .unwrap_or_default();
            self.tree_items.push(name);
            self.circuit_items.push(true);
            self.bold_tree_items.push(false);
            self.circuit_settings.push(settings);
        }

        self.selected_tree_items.clear();
        self.selected_tree_item = 0;
        self.pending_circuit_to_open = None;
        self.last_tree_press = None;
        self.active_circuit_settings = self
            .circuit_settings
            .first()
            .filter(|_| self.circuit_items.first().copied() == Some(true))
            .cloned();
        if let Some(settings) = &self.active_circuit_settings {
            settings
                .simulation_type
                .comparison_unit()
                .clone_into(&mut self.comparison_unit);
        }
        self.refresh_action_availability();

        CircuitReload { added, removed }
    }

    /// Ports Ghidra function `FUN_012f7790` at `0x012F7790`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.cbx_samplesChange`. iced supplies one of the
    /// recovered combo-box values and this method stores it in the active
    /// circuit record. A missing circuit selection is a safe no-op.
    pub fn set_sample_count(&mut self, samples: usize) -> bool {
        if self.circuit_items.get(self.selected_tree_item).copied() != Some(true) {
            return false;
        }
        let Some(settings) = self.circuit_settings.get_mut(self.selected_tree_item) else {
            return false;
        };

        settings.samples = samples;
        if let Some(active) = &mut self.active_circuit_settings {
            active.samples = samples;
        }
        true
    }

    /// Ports Ghidra function `FUN_012f7850` at `0x012F7850`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.cbx_simTypeChange`. It updates the first
    /// selected circuit, refreshes the comparison unit, reloads that circuit's
    /// local reference state, and performs no work when no circuit is selected.
    pub fn set_simulation_type(&mut self, simulation_type: SimulationType) -> bool {
        let Some(index) = self.selected_tree_items.iter().next().copied() else {
            return false;
        };
        if self.circuit_items.get(index).copied() != Some(true) {
            return false;
        }
        let Some(settings) = self.circuit_settings.get_mut(index) else {
            return false;
        };

        settings.simulation_type = simulation_type;
        let updated_settings = settings.clone();
        simulation_type
            .comparison_unit()
            .clone_into(&mut self.comparison_unit);
        if index == self.selected_tree_item {
            self.active_circuit_settings = Some(updated_settings.clone());
            self.reference_control_state = if updated_settings
                .references
                .first()
                .is_some_and(|reference| reference.selected)
            {
                ReferenceControlState::Enabled
            } else {
                ReferenceControlState::Disabled
            };
        }
        true
    }

    /// Ports Ghidra function `FUN_012f7920` at `0x012F7920`.
    pub fn set_add_spice_result(&mut self, checked: bool) -> bool {
        self.set_circuit_option(CircuitOption::AddSpiceResult, checked)
    }

    /// Ports Ghidra function `FUN_012f7980` at `0x012F7980`.
    pub fn set_custom_comparison_range(&mut self, checked: bool) -> bool {
        self.set_circuit_option(CircuitOption::UseCustomComparisonRange, checked)
    }

    /// Ports Ghidra function `FUN_012f79e0` at `0x012F79E0`.
    pub fn set_include_ltspice_result(&mut self, checked: bool) -> bool {
        self.set_circuit_option(CircuitOption::IncludeLtspiceResult, checked)
    }

    /// Ports Ghidra function `FUN_012f7a40` at `0x012F7A40`.
    pub fn set_include_pspice_result(&mut self, checked: bool) -> bool {
        self.set_circuit_option(CircuitOption::IncludePspiceResult, checked)
    }

    /// Ports Ghidra function `FUN_012f7aa0` at `0x012F7AA0`.
    pub fn set_include_simetrix_result(&mut self, checked: bool) -> bool {
        self.set_circuit_option(CircuitOption::IncludeSimetrixResult, checked)
    }

    /// Ports Ghidra function `FUN_012f7b00` at `0x012F7B00`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.chkbxShowReportClick`. The Filter Good state
    /// always receives the same checked value as Show Report.
    pub const fn set_show_report(&mut self, checked: bool) {
        self.report_options.show_report = checked;
        self.report_options.filter_good = checked;
    }

    /// Ports Ghidra function `FUN_012f7b40` at `0x012F7B40`.
    pub fn set_datasheet_min_max(&mut self, checked: bool) -> bool {
        self.set_circuit_option(CircuitOption::UseDatasheetMinMax, checked)
    }

    fn apply_circuit_option_change(&mut self, option: CircuitOption, checked: bool) -> bool {
        match option {
            CircuitOption::UseCustomComparisonRange => self.set_custom_comparison_range(checked),
            CircuitOption::CornerTest => self.set_circuit_option(option, checked),
            CircuitOption::AddSpiceResult => self.set_add_spice_result(checked),
            CircuitOption::IncludeLtspiceResult => self.set_include_ltspice_result(checked),
            CircuitOption::IncludePspiceResult => self.set_include_pspice_result(checked),
            CircuitOption::IncludeSimetrixResult => self.set_include_simetrix_result(checked),
            CircuitOption::UseDatasheetMinMax => self.set_datasheet_min_max(checked),
        }
    }

    fn set_circuit_option(&mut self, option: CircuitOption, checked: bool) -> bool {
        if self.circuit_items.get(self.selected_tree_item).copied() != Some(true) {
            return false;
        }
        let Some(settings) = self.circuit_settings.get_mut(self.selected_tree_item) else {
            return false;
        };

        if checked {
            settings.options.insert(option);
        } else {
            settings.options.remove(&option);
        }
        if let Some(active) = &mut self.active_circuit_settings {
            active.options.clone_from(&settings.options);
        }
        true
    }

    /// Ports Ghidra function `FUN_012f7bd0` at `0x012F7BD0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.rbtn_comparisionClick`. It selects Comparison
    /// for the current circuit, initializes an empty reference row, and
    /// refreshes the active reference-control state. It does not run a test.
    pub fn select_comparison_mode(&mut self) -> bool {
        if !self.set_current_test_mode(CircuitTestMode::Compare) {
            return false;
        }
        let Some(settings) = self.circuit_settings.get_mut(self.selected_tree_item) else {
            return false;
        };
        if settings.references.is_empty() {
            settings.references.push(ReferenceSetting::default());
        }
        self.active_circuit_settings = Some(settings.clone());
        self.reference_control_state = if settings.references[0].selected {
            ReferenceControlState::Enabled
        } else {
            ReferenceControlState::Disabled
        };
        true
    }

    /// Ports Ghidra function `FUN_012f7d30` at `0x012F7D30`.
    pub fn select_do_not_run_mode(&mut self) -> bool {
        self.set_current_test_mode(CircuitTestMode::DoNotRun)
    }

    /// Ports Ghidra function `FUN_012f7db0` at `0x012F7DB0`.
    pub fn select_save_reference_mode(&mut self) -> bool {
        self.set_current_test_mode(CircuitTestMode::SaveReference)
    }

    /// Ports Ghidra function `FUN_012fef90` at `0x012FEF90`.
    pub fn select_run_without_comparison_mode(&mut self) -> bool {
        self.set_current_test_mode(CircuitTestMode::RunWithoutComparison)
    }

    /// Ports Ghidra function `FUN_012f7e30` at `0x012F7E30`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.btnApplyAllClick`. It commits the current
    /// editor state, then applies only the selected test mode to every circuit
    /// row. Reference rows and all other comparison settings remain distinct.
    pub fn apply_test_mode_to_all_circuits(&mut self) -> usize {
        self.commit_active_circuit_settings();
        let Some(mode) = self
            .active_circuit_settings
            .as_ref()
            .map(|settings| settings.test_mode)
        else {
            return 0;
        };

        let mut updated = 0;
        for (is_circuit, settings) in self
            .circuit_items
            .iter()
            .copied()
            .zip(&mut self.circuit_settings)
        {
            if is_circuit {
                settings.test_mode = mode;
                updated += 1;
            }
        }
        updated
    }

    /// Ports Ghidra function `FUN_012feed0` at `0x012FEED0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.rbtn_runAllClick`. It clears the current-only
    /// marker on the selected circuit. It does not start a test.
    pub fn select_run_all_circuits(&mut self) -> bool {
        self.set_current_run_scope(RunScope::AllCircuits)
    }

    /// Ports Ghidra function `FUN_012fef10` at `0x012FEF10`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.rbtn_runCurrentClick`. It clears the
    /// current-only marker on every circuit, then sets it only on the selected
    /// circuit. It does not start a test.
    pub fn select_run_current_circuit(&mut self) -> bool {
        for (is_circuit, settings) in self
            .circuit_items
            .iter()
            .copied()
            .zip(&mut self.circuit_settings)
        {
            if is_circuit {
                settings.run_scope = RunScope::AllCircuits;
            }
        }
        self.set_current_run_scope(RunScope::CurrentCircuit)
    }

    fn apply_test_mode_change(&mut self, mode: CircuitTestMode) -> bool {
        match mode {
            CircuitTestMode::DoNotRun => self.select_do_not_run_mode(),
            CircuitTestMode::SaveReference => self.select_save_reference_mode(),
            CircuitTestMode::Compare => self.select_comparison_mode(),
            CircuitTestMode::RunWithoutComparison => self.select_run_without_comparison_mode(),
        }
    }

    fn set_current_test_mode(&mut self, mode: CircuitTestMode) -> bool {
        if self.circuit_items.get(self.selected_tree_item).copied() != Some(true) {
            return false;
        }
        let Some(settings) = self.circuit_settings.get_mut(self.selected_tree_item) else {
            return false;
        };
        settings.test_mode = mode;
        if let Some(active) = &mut self.active_circuit_settings {
            active.test_mode = mode;
        }
        true
    }

    fn set_current_run_scope(&mut self, scope: RunScope) -> bool {
        if self.circuit_items.get(self.selected_tree_item).copied() != Some(true) {
            return false;
        }
        let Some(settings) = self.circuit_settings.get_mut(self.selected_tree_item) else {
            return false;
        };
        settings.run_scope = scope;
        if let Some(active) = &mut self.active_circuit_settings {
            active.run_scope = scope;
        }
        true
    }

    fn update_local_reference(&mut self, message: LocalReferenceMessage) {
        match message {
            LocalReferenceMessage::ReferenceBlockChanged(block) => {
                self.local_bulk_controls.reference_block = block;
            }
            LocalReferenceMessage::SelectAll => {
                self.select_all_references(self.local_bulk_controls.reference_block);
            }
            LocalReferenceMessage::DeselectAll => {
                self.deselect_all_references(self.local_bulk_controls.reference_block);
            }
            LocalReferenceMessage::TimeFieldChanged(field) => {
                self.local_bulk_controls.time_field = field;
            }
            LocalReferenceMessage::TimeChanged(value) => {
                self.local_bulk_controls.time_value = value;
            }
            LocalReferenceMessage::ApplyTime => {
                let field = self.local_bulk_controls.time_field;
                let value = self.local_bulk_controls.time_value.clone();
                if let Err(error) = self.apply_time_to_all_references(field, &value) {
                    self.last_error = Some(error);
                }
            }
            LocalReferenceMessage::ToleranceChanged(value) => {
                self.local_bulk_controls.tolerance_value = value;
            }
            LocalReferenceMessage::ApplyTolerance => {
                let value = self.local_bulk_controls.tolerance_value.clone();
                if let Err(error) = self.apply_tolerance_to_all_references(&value) {
                    self.last_error = Some(error);
                }
            }
            LocalReferenceMessage::Reset => {
                self.reset_current_local_settings();
            }
            LocalReferenceMessage::RemoveDataFile => {
                self.remove_reference_data_file();
            }
            LocalReferenceMessage::SetupCornerTest => {
                let _ = self.construct_corner_test_path();
            }
            LocalReferenceMessage::CurveNameChanged(value) => {
                self.curve_name_input = value;
            }
            LocalReferenceMessage::ChangeCurveName => {
                match self.prepare_curve_rename(&self.curve_name_input) {
                    Ok(request) => {
                        self.pending_curve_rename_request = request;
                        self.last_error = None;
                    }
                    Err(error) => self.last_error = Some(error),
                }
            }
        }
    }

    fn update_global_comparison(&mut self, message: GlobalComparisonMessage) {
        let result = match message {
            GlobalComparisonMessage::FromChanged(value) => self.set_comparison_from_text(&value),
            GlobalComparisonMessage::ToChanged(value) => self.set_comparison_to_text(&value),
        };

        self.last_error = result.err();
    }

    fn update_reference_data(&mut self, message: ReferenceDataMessage) -> Task<Message> {
        match message {
            ReferenceDataMessage::Select => self.select_reference_data_file(),
            ReferenceDataMessage::Selected(result) => {
                match result {
                    Ok(selection) => {
                        self.associate_selected_reference_data(selection);
                        self.last_error = None;
                    }
                    Err(error) => self.last_error = Some(error),
                }
                Task::none()
            }
        }
    }

    fn update_result_display(&mut self, message: ResultDisplayMessage) {
        match message {
            ResultDisplayMessage::ReferenceKindChanged(kind) => {
                self.reference_display_kind = Some(kind);
            }
            ResultDisplayMessage::LoadReference => {
                self.store_display_result(self.load_selected_reference());
            }
            ResultDisplayMessage::ResultKindChanged(kind) => {
                self.result_display_kind = Some(kind);
            }
            ResultDisplayMessage::LoadResult => {
                self.store_display_result(self.load_selected_result());
            }
        }
    }

    fn store_display_result(&mut self, result: Result<Option<DisplayRequest>, String>) {
        match result {
            Ok(Some(request)) => {
                self.pending_display_request = Some(request);
                self.last_error = None;
            }
            Ok(None) => {}
            Err(error) => self.last_error = Some(error),
        }
    }

    /// Ports Ghidra function `FUN_012f8460` at `0x012F8460`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.btn_selDataFileClick`. An iced task uses
    /// [`rfd::AsyncFileDialog`] for the recovered CSV filter. Cancellation is
    /// a no-op. Acceptance stores the path and the CSV model, rebuilds the
    /// current circuit state, and initializes its first reference row when it
    /// is missing. The maintained [`csv`] crate replaces the recovered custom
    /// comma-separated-value loader.
    pub fn select_reference_data_file(&self) -> Task<Message> {
        Task::perform(select_reference_csv(), |result| {
            Message::ReferenceData(ReferenceDataMessage::Selected(result))
        })
    }

    /// Applies the asynchronous result of [`Self::select_reference_data_file`].
    /// A canceled selection preserves the current association.
    pub fn associate_selected_reference_data(
        &mut self,
        selection: Option<LoadedReferenceData>,
    ) -> bool {
        let Some(selection) = selection else {
            return false;
        };

        self.data_file_name = selection.path.to_string_lossy().into_owned();
        self.reference_data = Some(selection);
        self.refresh_action_availability();

        let updated_settings = if let Some(settings) = self.current_circuit_settings_mut() {
            if settings.references.is_empty() {
                settings.references.push(ReferenceSetting::default());
            }
            Some((settings.clone(), settings.references[0].selected))
        } else {
            None
        };
        if let Some((settings, reference_selected)) = updated_settings {
            self.active_circuit_settings = Some(settings);
            self.reference_control_state = if reference_selected {
                ReferenceControlState::Enabled
            } else {
                ReferenceControlState::Disabled
            };
        }
        true
    }

    /// Ports Ghidra function `FUN_012f8840` at `0x012F8840`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.btn_loadRefClick`. Curve mode stages the
    /// simulation-specific `.refresult` file for the analysis-result viewer.
    /// Figure mode builds `<circuit> Figure.jpg`, reports the recovered error
    /// when it is missing, and otherwise stages a titled image request. A
    /// missing circuit or radio selection is a no-op.
    ///
    /// # Errors
    ///
    /// Returns `Figure does not exist.` when the selected reference figure is
    /// not a file.
    pub fn load_selected_reference(&self) -> Result<Option<DisplayRequest>, String> {
        let Some(kind) = self.reference_display_kind else {
            return Ok(None);
        };
        let Some(circuit_name) = self.selected_circuit_name() else {
            return Ok(None);
        };

        match kind {
            ReferenceDisplayKind::Curve => {
                Ok(self.result_artifact_path(circuit_name, AnalysisResultKind::Reference))
            }
            ReferenceDisplayKind::Figure => {
                let path = self.circuit_artifact_path(circuit_name, " Figure.jpg");
                if !path.is_file() {
                    return Err("Figure does not exist.".to_owned());
                }
                Ok(Some(DisplayRequest::Image {
                    path,
                    title: format!("Reference figure - {}", circuit_stem(circuit_name)),
                }))
            }
        }
    }

    /// Ports Ghidra function `FUN_012f8b00` at `0x012F8B00`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.btn_loadResClick`. Test mode stages the
    /// simulation-specific `.testresult` file for the analysis-result viewer.
    /// The three SPICE modes build their recovered PNG names, report the
    /// recovered missing-file message, and otherwise stage a titled image
    /// request. A missing circuit or radio selection is a no-op.
    ///
    /// # Errors
    ///
    /// Returns `Spice result does not exist.` when the selected PNG is not a
    /// file.
    pub fn load_selected_result(&self) -> Result<Option<DisplayRequest>, String> {
        let Some(kind) = self.result_display_kind else {
            return Ok(None);
        };
        let Some(circuit_name) = self.selected_circuit_name() else {
            return Ok(None);
        };

        if kind == ResultDisplayKind::TestResult {
            return Ok(self.result_artifact_path(circuit_name, AnalysisResultKind::Test));
        }

        let suffix = match kind {
            ResultDisplayKind::TestResult => unreachable!("handled above"),
            ResultDisplayKind::Ltspice => "-LTSpice.png",
            ResultDisplayKind::Pspice => "-PSpice.png",
            ResultDisplayKind::Simetrix => " (SIMetrix format)-graph.png",
        };
        let path = self.circuit_artifact_path(circuit_name, suffix);
        if !path.is_file() {
            return Err("Spice result does not exist.".to_owned());
        }
        Ok(Some(DisplayRequest::Image {
            path,
            title: format!("Spice result - {}", circuit_stem(circuit_name)),
        }))
    }

    #[must_use]
    pub const fn take_pending_display_request(&mut self) -> Option<DisplayRequest> {
        self.pending_display_request.take()
    }

    /// Ports Ghidra function `FUN_012f8f50` at `0x012F8F50`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.btn_changeCurveNameClick`. It requires
    /// reference-curve data and exactly one checked curve. A canceled or empty
    /// name is a no-op. Acceptance loads the simulation-specific `.refresult`
    /// file through the shared [`AnalysisResultCurveStore`], replaces that
    /// curve's name, persists the file, and refreshes the current iced state.
    /// The format service is in `tiara-core` because the recovered result-file
    /// reader and writer have callers outside this form.
    ///
    /// # Errors
    ///
    /// Returns the recovered selection message or the shared store's first
    /// read-modify-write error.
    pub fn rename_selected_reference_curve<S: AnalysisResultCurveStore>(
        &mut self,
        new_name: Option<&str>,
        store: &mut S,
    ) -> Result<CurveRenameOutcome, String> {
        let Some(new_name) = new_name else {
            return Ok(CurveRenameOutcome::Cancelled);
        };
        let Some(request) = self.prepare_curve_rename(new_name)? else {
            return Ok(CurveRenameOutcome::Cancelled);
        };

        store
            .rename_curve(&request.path, request.curve_index, &request.new_name)
            .map_err(|error| error.to_string())?;
        self.complete_curve_rename(&request);
        Ok(CurveRenameOutcome::Renamed)
    }

    fn prepare_curve_rename(&self, new_name: &str) -> Result<Option<CurveRenameRequest>, String> {
        let Some(circuit_name) = self.selected_circuit_name() else {
            return Err("There is no reference curve to this circuit.".to_owned());
        };
        let Some(settings) = self.circuit_settings.get(self.selected_tree_item) else {
            return Err("There is no reference curve to this circuit.".to_owned());
        };
        if !settings
            .references
            .iter()
            .any(|reference| reference.kind == ReferenceEntryKind::Curve)
        {
            return Err("There is no reference curve to this circuit.".to_owned());
        }

        let checked = settings
            .references
            .iter()
            .enumerate()
            .filter(|(_, reference)| reference.selected)
            .collect::<Vec<_>>();
        if checked.len() > 1 {
            return Err("Check only one reference CURVE!".to_owned());
        }
        let Some((curve_index, reference)) = checked.first().copied() else {
            return Err(
                "Check a reference CURVE! Be sure, reference DATA is not checked.".to_owned(),
            );
        };
        if reference.kind != ReferenceEntryKind::Curve {
            return Err(
                "Check a reference CURVE! Be sure, reference DATA is not checked.".to_owned(),
            );
        }
        if new_name.is_empty() {
            return Ok(None);
        }

        let simulation = match settings.simulation_type {
            SimulationType::Transient => "tr",
            SimulationType::DirectCurrent => "dc",
            SimulationType::AlternatingCurrent => "ac",
        };
        Ok(Some(CurveRenameRequest {
            path: join_artifact(
                &self.result_folder,
                circuit_name,
                &format!(".refresult.{simulation}"),
            ),
            curve_index,
            new_name: new_name.to_owned(),
        }))
    }

    pub fn complete_curve_rename(&mut self, request: &CurveRenameRequest) -> bool {
        let Some(settings) = self.current_circuit_settings_mut() else {
            return false;
        };
        let Some(reference) = settings.references.get_mut(request.curve_index) else {
            return false;
        };
        request.new_name.clone_into(&mut reference.name);
        let updated = settings.clone();
        self.active_circuit_settings = Some(updated);
        true
    }

    #[must_use]
    pub const fn take_pending_curve_rename(&mut self) -> Option<CurveRenameRequest> {
        self.pending_curve_rename_request.take()
    }

    /// Ports Ghidra function `FUN_012f97b0` at `0x012F97B0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.TestBenchEditorEventsIdle`. It synchronizes
    /// enabled iced controls with Show Report, the current test mode, the
    /// custom comparison-range option, and Add SPICE Result. It also exposes
    /// the recovered compact-layout action when the client height is below
    /// 804 logical pixels. No test or simulation starts here.
    pub fn refresh_idle_control_availability(&mut self, client_height: f32) {
        self.idle_control_groups.clear();

        if self.report_options.show_report {
            self.idle_control_groups
                .insert(IdleControlGroup::FilterGood);
        }

        let Some(settings) = self.active_circuit_settings.as_ref() else {
            if client_height < 804.0 {
                self.idle_control_groups
                    .insert(IdleControlGroup::CompactLayoutAction);
            }
            return;
        };

        let comparison = settings.test_mode == CircuitTestMode::Compare;
        let save_reference = settings.test_mode == CircuitTestMode::SaveReference;
        let run_without_comparison = settings.test_mode == CircuitTestMode::RunWithoutComparison;

        if comparison {
            self.idle_control_groups
                .insert(IdleControlGroup::Comparison);
        }
        if comparison || save_reference {
            self.idle_control_groups
                .insert(IdleControlGroup::ComparisonOrSave);
        }
        if comparison || run_without_comparison {
            self.idle_control_groups
                .insert(IdleControlGroup::ComparisonOrRunWithout);
        }
        if comparison
            && settings
                .options
                .contains(&CircuitOption::UseCustomComparisonRange)
        {
            self.idle_control_groups
                .insert(IdleControlGroup::CustomComparisonRange);
        }
        if (comparison || run_without_comparison)
            && settings.options.contains(&CircuitOption::AddSpiceResult)
        {
            self.idle_control_groups
                .insert(IdleControlGroup::SpiceFormats);
        }
        if client_height < 804.0 {
            self.idle_control_groups
                .insert(IdleControlGroup::CompactLayoutAction);
        }
    }

    /// Ports Ghidra function `FUN_012fd7d0` at `0x012FD7D0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.edt_compRFromChange`. It first checks for a
    /// current circuit. A structural or missing row is a no-op and does not
    /// parse the edit. Otherwise, the Rust standard-library floating-point
    /// parser replaces the recovered Delphi edit getter and stores the global
    /// comparison start value in that circuit's settings.
    ///
    /// # Errors
    ///
    /// Returns the standard parser error when a current circuit has invalid
    /// text. The visible edit text remains available for correction.
    pub fn set_comparison_from_text(&mut self, value: &str) -> Result<bool, String> {
        value.clone_into(&mut self.global_comparison_controls.from);
        if self.circuit_items.get(self.selected_tree_item).copied() != Some(true) {
            return Ok(false);
        }
        if self.circuit_settings.get(self.selected_tree_item).is_none() {
            return Ok(false);
        }

        let comparison_from = value
            .trim()
            .parse::<f64>()
            .map_err(|error| error.to_string())?;
        let settings = &mut self.circuit_settings[self.selected_tree_item];
        settings.comparison_from = comparison_from;
        if let Some(active) = &mut self.active_circuit_settings {
            active.comparison_from = comparison_from;
        }
        Ok(true)
    }

    /// Ports Ghidra function `FUN_012fd8b0` at `0x012FD8B0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.edt_compRToChange`. It first checks for a
    /// current circuit. A structural or missing row is a no-op and does not
    /// parse the edit. Otherwise, the Rust standard-library floating-point
    /// parser replaces the recovered Delphi edit getter and stores the global
    /// comparison end value in that circuit's settings.
    ///
    /// # Errors
    ///
    /// Returns the standard parser error when a current circuit has invalid
    /// text. The visible edit text remains available for correction.
    pub fn set_comparison_to_text(&mut self, value: &str) -> Result<bool, String> {
        value.clone_into(&mut self.global_comparison_controls.to);
        if self.circuit_items.get(self.selected_tree_item).copied() != Some(true) {
            return Ok(false);
        }
        if self.circuit_settings.get(self.selected_tree_item).is_none() {
            return Ok(false);
        }

        let comparison_to = value
            .trim()
            .parse::<f64>()
            .map_err(|error| error.to_string())?;
        let settings = &mut self.circuit_settings[self.selected_tree_item];
        settings.comparison_to = comparison_to;
        if let Some(active) = &mut self.active_circuit_settings {
            active.comparison_to = comparison_to;
        }
        Ok(true)
    }

    /// Ports Ghidra function `FUN_012f8340` at `0x012F8340`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.btn_removeRefDataFileClick`. It clears the
    /// loaded reference association and derived reference rows, then clears
    /// the Data file edit. It does not delete a disk file.
    pub fn remove_reference_data_file(&mut self) -> usize {
        let mut cleared = 0;
        for (is_circuit, settings) in self
            .circuit_items
            .iter()
            .copied()
            .zip(&mut self.circuit_settings)
        {
            if is_circuit && !settings.references.is_empty() {
                settings.references.clear();
                cleared += 1;
            }
        }
        if let Some(active) = &mut self.active_circuit_settings {
            active.references.clear();
        }
        self.data_file_name.clear();
        self.reference_control_state = ReferenceControlState::Disabled;
        self.refresh_action_availability();
        cleared
    }

    /// Ports Ghidra function `FUN_012f83c0` at `0x012F83C0`.
    pub fn select_all_references(&mut self, block: ReferenceBlock) -> usize {
        self.set_all_reference_checks(block, true)
    }

    /// Ports Ghidra function `FUN_012f8410` at `0x012F8410`.
    pub fn deselect_all_references(&mut self, block: ReferenceBlock) -> usize {
        self.set_all_reference_checks(block, false)
    }

    /// Ports Ghidra function `FUN_012f85c0` at `0x012F85C0`.
    ///
    /// The recovered handler builds the selected circuit `.TSC` path and then
    /// discards it. This method returns the constructed value for trace tests;
    /// the iced click route intentionally ignores it and changes no state.
    #[must_use]
    pub fn construct_corner_test_path(&self) -> Option<PathBuf> {
        self.selected_circuit_path()
    }

    /// Ports Ghidra function `FUN_012f87b0` at `0x012F87B0`.
    ///
    /// Parses the iced Set all edit and writes either the start or end value to
    /// every local reference row of the current circuit. Missing rows are a
    /// no-op and are checked before parsing, as in the recovered helper.
    ///
    /// # Errors
    ///
    /// Returns a text error when the value is not a valid floating-point
    /// number.
    pub fn apply_time_to_all_references(
        &mut self,
        field: TimeField,
        text: &str,
    ) -> Result<usize, String> {
        let Some(settings) = self.current_circuit_settings_mut() else {
            return Ok(0);
        };
        if settings.references.is_empty() {
            return Ok(0);
        }
        let value = text
            .trim()
            .parse::<f64>()
            .map_err(|error| error.to_string())?;
        for reference in &mut settings.references {
            match field {
                TimeField::Start => reference.time_from = value,
                TimeField::End => reference.time_to = value,
            }
        }
        let count = settings.references.len();
        self.active_circuit_settings = Some(settings.clone());
        Ok(count)
    }

    /// Ports Ghidra function `FUN_012f8800` at `0x012F8800`.
    ///
    /// Parses the iced Set tolerance edit and writes the percentage to every
    /// local reference row of the current circuit. Missing rows are a no-op.
    ///
    /// # Errors
    ///
    /// Returns a text error when the value is not a valid floating-point
    /// number.
    pub fn apply_tolerance_to_all_references(&mut self, text: &str) -> Result<usize, String> {
        let Some(settings) = self.current_circuit_settings_mut() else {
            return Ok(0);
        };
        if settings.references.is_empty() {
            return Ok(0);
        }
        let value = text
            .trim()
            .parse::<f64>()
            .map_err(|error| error.to_string())?;
        for reference in &mut settings.references {
            reference.tolerance = value;
        }
        let count = settings.references.len();
        self.active_circuit_settings = Some(settings.clone());
        Ok(count)
    }

    /// Ports Ghidra function `FUN_012f8f00` at `0x012F8F00`.
    ///
    /// Resets every current-circuit local row to the recovered default:
    /// unchecked flags, start 0, end 1, and tolerance 5.
    pub fn reset_current_local_settings(&mut self) -> usize {
        let Some(settings) = self.current_circuit_settings_mut() else {
            return 0;
        };
        for reference in &mut settings.references {
            *reference = ReferenceSetting::default();
        }
        let count = settings.references.len();
        self.active_circuit_settings = Some(settings.clone());
        self.reference_control_state = ReferenceControlState::Disabled;
        count
    }

    fn set_all_reference_checks(&mut self, block: ReferenceBlock, checked: bool) -> usize {
        let Some(settings) = self.current_circuit_settings_mut() else {
            return 0;
        };
        for reference in &mut settings.references {
            match block {
                ReferenceBlock::ReferenceName => reference.selected = checked,
                ReferenceBlock::LocalRange => reference.compare_time = checked,
            }
        }
        let count = settings.references.len();
        let controls_enabled = settings
            .references
            .first()
            .is_some_and(|reference| reference.selected);
        let updated_settings = settings.clone();
        self.active_circuit_settings = Some(updated_settings);
        self.reference_control_state = if controls_enabled {
            ReferenceControlState::Enabled
        } else {
            ReferenceControlState::Disabled
        };
        count
    }

    fn current_circuit_settings_mut(&mut self) -> Option<&mut CircuitSettings> {
        (self.circuit_items.get(self.selected_tree_item).copied() == Some(true))
            .then(|| self.circuit_settings.get_mut(self.selected_tree_item))
            .flatten()
    }

    fn selected_circuit_path(&self) -> Option<PathBuf> {
        let index = self.selected_tree_item;
        if self.circuit_items.get(index).copied() != Some(true) {
            return None;
        }
        let relative = self.tree_items.get(index)?;
        let mut path = PathBuf::from(&self.root_folder).join(relative);
        if !path
            .extension()
            .is_some_and(|extension| extension.eq_ignore_ascii_case("tsc"))
        {
            path.set_extension("TSC");
        }
        Some(path)
    }

    fn selected_circuit_name(&self) -> Option<&str> {
        (self.circuit_items.get(self.selected_tree_item).copied() == Some(true))
            .then(|| {
                self.tree_items
                    .get(self.selected_tree_item)
                    .map(String::as_str)
            })
            .flatten()
    }

    fn result_artifact_path(
        &self,
        circuit_name: &str,
        kind: AnalysisResultKind,
    ) -> Option<DisplayRequest> {
        let settings = self.circuit_settings.get(self.selected_tree_item)?;
        let corner = if settings.options.contains(&CircuitOption::CornerTest) {
            ".corner"
        } else {
            ""
        };
        let result_kind = match kind {
            AnalysisResultKind::Reference => "refresult",
            AnalysisResultKind::Test => "testresult",
        };
        let simulation = match settings.simulation_type {
            SimulationType::Transient => "tr",
            SimulationType::DirectCurrent => "dc",
            SimulationType::AlternatingCurrent => "ac",
        };
        let suffix = format!("{corner}.{result_kind}.{simulation}");
        Some(DisplayRequest::AnalysisResult {
            path: join_artifact(&self.result_folder, circuit_name, &suffix),
            kind,
        })
    }

    fn circuit_artifact_path(&self, circuit_name: &str, suffix: &str) -> PathBuf {
        join_artifact(&self.root_folder, circuit_name, suffix)
    }

    /// Ports Ghidra function `FUN_012f62e0` at `0x012F62E0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.mnSaveClick`. It stages the current editor
    /// state and writes to the existing path. An unnamed `Noname` testbench
    /// requires an accepted path; cancellation performs no write.
    ///
    /// # Errors
    ///
    /// Returns a text error when serialization or file writing fails.
    pub fn save_testbench<S: TestBenchSaver>(
        &mut self,
        selected_path: Option<PathBuf>,
        saver: &mut S,
    ) -> Result<SaveOutcome, String> {
        self.save_with_mode(false, selected_path, saver)
    }

    /// Ports Ghidra function `FUN_012f62f0` at `0x012F62F0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.mnSaveAsClick`. It always requires an accepted
    /// path. Cancellation preserves the current path and file. Acceptance
    /// updates the path, display name, and caption state before serialization.
    ///
    /// # Errors
    ///
    /// Returns a text error when serialization or file writing fails.
    pub fn save_testbench_as<S: TestBenchSaver>(
        &mut self,
        selected_path: Option<PathBuf>,
        saver: &mut S,
    ) -> Result<SaveOutcome, String> {
        self.save_with_mode(true, selected_path, saver)
    }

    /// Ports Ghidra function `FUN_012f3be0` at `0x012F3BE0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.mnNewClick`. A canceled folder selection is a
    /// no-op. An accepted selection resets the editor to `Noname`, applies the
    /// recovered 1024-sample, one-thread, zero-timeout defaults, assigns the
    /// folder as both circuit and result folder, and rebuilds the tree from
    /// recursively discovered TSC files.
    pub fn create_new_testbench(&mut self, selection: Option<NewTestBench>) -> bool {
        let Some(selection) = selection else {
            return false;
        };

        let folder = selection.folder.to_string_lossy().into_owned();
        self.reset_testbench(DEFAULT_TESTBENCH_NAME);
        self.root_folder.clone_from(&folder);
        self.result_folder = folder;
        self.tree_items = selection.circuits;
        self.circuit_items = vec![true; self.tree_items.len()];
        self.bold_tree_items = vec![false; self.tree_items.len()];
        self.circuit_settings = vec![CircuitSettings::default(); self.tree_items.len()];
        self.active_circuit_settings = self.circuit_settings.first().cloned();
        self.selected_tree_items.clear();
        self.model = Some(ModelState {
            samples: 1_024,
            max_threads: 1,
            timeout: 0,
            copy_reference_results: true,
        });
        self.refresh_action_availability();
        true
    }

    pub fn select_new_testbench_folder(&self) -> Task<Message> {
        Task::perform(discover_testbench_folder(), Message::NewFolderSelected)
    }

    /// Ports Ghidra function `FUN_012f3e40` at `0x012F3E40`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.mnOptionsClick`. A canceled dialog preserves
    /// the current settings. An accepted request writes the timeout and copy
    /// option to the settings session and updates the current editor model.
    pub const fn apply_model_test_options(
        &mut self,
        request: Option<ModelTestOptionsRequest>,
    ) -> bool {
        let Some(request) = request else {
            return false;
        };

        if let Some(settings) = &mut self.settings_session {
            settings.timeout = request.timeout;
            settings.copy_reference_results = request.copy_reference_results;
        }
        if let Some(model) = &mut self.model {
            model.timeout = request.timeout;
            model.copy_reference_results = request.copy_reference_results;
        }
        true
    }

    /// Ports Ghidra function `FUN_012f41e0` at `0x012F41E0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.mnRunMultipleClick`. A canceled file selection
    /// starts no work. Otherwise, each nonempty input line is passed to the
    /// single-testbench runner in order. Cancellation is checked between
    /// entries, messages are processed after each run, and the adapter applies
    /// the recovered 200 ms inter-entry delay.
    pub fn run_multiple_testbenches<R, C>(
        &mut self,
        paths: Option<&[String]>,
        runner: &mut R,
        mut is_cancelled: C,
    ) -> BatchRunResult
    where
        R: TestBenchRunner,
        C: FnMut() -> bool,
    {
        let Some(paths) = paths else {
            return BatchRunResult::default();
        };

        let mut result = BatchRunResult {
            selected: paths.len(),
            ..BatchRunResult::default()
        };

        for path in paths {
            if is_cancelled() {
                result.cancelled = true;
                break;
            }

            runner.run(path, true);
            result.completed += 1;
            runner.process_messages();
            runner.wait_between_runs(Duration::from_millis(200));
        }

        result
    }

    /// Ports Ghidra function `FUN_012f7fc0` at `0x012F7FC0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.btnStartTestClick`. It does nothing when the
    /// circuit tree is empty. Otherwise, it commits the active iced controls,
    /// calls the normal save path, validates comparison references, writes
    /// report metadata when the circuit folder exists, hides this editor, and
    /// starts the shared testbench runner in single-run mode. The recovered
    /// handler does not inspect the save result, so a canceled first save does
    /// not stop validation or worker startup.
    ///
    /// # Errors
    ///
    /// Returns the first save, reference-validation, report, or runner-adapter
    /// preparation error. A validation rejection is a normal outcome.
    pub fn start_model_test<S, V, D, R>(
        &mut self,
        selected_save_path: Option<PathBuf>,
        saver: &mut S,
        validator: &mut V,
        report_writer: &mut D,
        runner: &mut R,
    ) -> Result<StartTestOutcome, String>
    where
        S: TestBenchSaver,
        V: ReferenceCurveValidator,
        D: ReportDescriptionWriter,
        R: TestBenchRunner,
    {
        self.start_test_request = RequestState::Idle;
        if self.tree_items.is_empty() {
            return Ok(StartTestOutcome::NoCircuit);
        }

        self.commit_active_circuit_settings();
        let _save_outcome = self.save_testbench(selected_save_path, saver)?;

        let current_only = self
            .circuit_settings
            .iter()
            .any(|settings| settings.run_scope == RunScope::CurrentCircuit);
        for (index, settings) in self.circuit_settings.iter().enumerate() {
            if self.circuit_items.get(index).copied() != Some(true)
                || settings.test_mode != CircuitTestMode::Compare
                || (current_only && settings.run_scope != RunScope::CurrentCircuit)
            {
                continue;
            }

            let circuit_name = self.tree_items.get(index).map_or("", String::as_str);
            if !validator.validate(circuit_name, settings)? {
                return Ok(StartTestOutcome::ValidationRejected);
            }
        }

        let circuit_folder = Path::new(&self.root_folder);
        if circuit_folder.is_dir() {
            report_writer.write_description(circuit_folder)?;
        }

        self.visibility = WindowVisibility::Hidden;
        runner.run(&self.testbench_path, false);
        Ok(StartTestOutcome::Started(PathBuf::from(
            &self.testbench_path,
        )))
    }

    #[must_use]
    pub const fn take_start_test_request(&mut self) -> bool {
        let requested = matches!(self.start_test_request, RequestState::Requested);
        self.start_test_request = RequestState::Idle;
        requested
    }

    #[must_use]
    pub const fn is_visible(&self) -> bool {
        matches!(self.visibility, WindowVisibility::Visible)
    }

    const fn stage_start_test(&mut self) {
        self.start_test_request = RequestState::Requested;
    }

    /// Ports Ghidra function `FUN_013066d0` at `0x013066D0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.mnModifyReplicationFileClick`. It creates a
    /// new [`mod_replication_file::Window`] request for the iced application
    /// host. The host presents that window modally. No modal result is read,
    /// and this editor's testbench state is not changed.
    pub const fn open_replication_file_modifier(&mut self) {
        self.replication_modifier_request = RequestState::Requested;
    }

    #[must_use]
    pub fn take_replication_file_modifier(&mut self) -> Option<mod_replication_file::Window> {
        if !matches!(self.replication_modifier_request, RequestState::Requested) {
            return None;
        }

        self.replication_modifier_request = RequestState::Idle;
        Some(mod_replication_file::Window::default())
    }

    pub fn select_multiple_testbench_file(&self) -> Task<Message> {
        Task::perform(
            load_multiple_testbench_paths(),
            Message::MultipleFileSelected,
        )
    }

    pub const fn mark_save_started(&mut self) {
        self.saved_once = true;
    }

    #[must_use]
    pub const fn action_availability(&self) -> ActionAvailability {
        self.action_availability
    }

    #[must_use]
    pub const fn layout(&self) -> EditorLayout {
        self.layout
    }

    #[must_use]
    pub const fn is_registered(&self) -> bool {
        matches!(self.registration, RegistrationState::Registered)
    }

    pub fn subscription(&self) -> Subscription<Message> {
        iced::event::listen_with(|event, status, _window| {
            if status != iced::event::Status::Ignored {
                return None;
            }

            match event {
                iced::Event::Keyboard(iced::keyboard::Event::KeyPressed {
                    key: iced::keyboard::Key::Named(iced::keyboard::key::Named::Delete),
                    ..
                }) => Some(Message::DeleteSelectedCircuits),
                iced::Event::Window(iced::window::Event::Resized(size)) => Some(Message::Idle {
                    client_height: size.height,
                }),
                _ => None,
            }
        })
    }

    fn circuit_options_view(&self) -> Element<'_, Message> {
        let active_settings = self.active_circuit_settings.as_ref();
        let sample_count = active_settings.map(|settings| settings.samples);
        let simulation_type = active_settings.map(|settings| settings.simulation_type);
        let test_mode = active_settings.map(|settings| settings.test_mode);
        let run_scope = active_settings.map(|settings| settings.run_scope);
        let circuit_option = |option: CircuitOption, group: IdleControlGroup| {
            let control = checkbox(
                option.label(),
                active_settings.is_some_and(|settings| settings.options.contains(&option)),
            );
            if self.idle_control_groups.contains(&group) {
                control.on_toggle(move |checked| Message::CircuitOptionChanged(option, checked))
            } else {
                control
            }
        };
        let comparison_range_enabled = self
            .idle_control_groups
            .contains(&IdleControlGroup::CustomComparisonRange);
        let comparison_from = text_input("Start", &self.global_comparison_controls.from);
        let comparison_from = if comparison_range_enabled {
            comparison_from.on_input(|value| {
                Message::GlobalComparison(GlobalComparisonMessage::FromChanged(value))
            })
        } else {
            comparison_from
        };
        let comparison_to = text_input("End", &self.global_comparison_controls.to);
        let comparison_to = if comparison_range_enabled {
            comparison_to.on_input(|value| {
                Message::GlobalComparison(GlobalComparisonMessage::ToChanged(value))
            })
        } else {
            comparison_to
        };

        column![
            row![
                text("Simulation"),
                pick_list(
                    SIMULATION_TYPES,
                    simulation_type,
                    Message::SimulationTypeChanged
                ),
                text("Samples"),
                pick_list(SAMPLE_COUNTS, sample_count, Message::SampleCountChanged),
            ]
            .spacing(8),
            circuit_option(
                CircuitOption::UseCustomComparisonRange,
                IdleControlGroup::Comparison,
            ),
            row![
                text("Start time"),
                comparison_from,
                text(&self.comparison_unit),
                text("End time"),
                comparison_to,
                text(&self.comparison_unit),
            ]
            .spacing(8),
            circuit_option(
                CircuitOption::AddSpiceResult,
                IdleControlGroup::ComparisonOrRunWithout,
            ),
            row![
                circuit_option(
                    CircuitOption::IncludeLtspiceResult,
                    IdleControlGroup::SpiceFormats,
                ),
                circuit_option(
                    CircuitOption::IncludePspiceResult,
                    IdleControlGroup::SpiceFormats,
                ),
                circuit_option(
                    CircuitOption::IncludeSimetrixResult,
                    IdleControlGroup::SpiceFormats,
                ),
            ]
            .spacing(8),
            circuit_option(
                CircuitOption::UseDatasheetMinMax,
                IdleControlGroup::Comparison,
            ),
            circuit_option(
                CircuitOption::CornerTest,
                IdleControlGroup::ComparisonOrRunWithout,
            ),
            Self::test_mode_controls_view(test_mode, run_scope),
        ]
        .spacing(6)
        .into()
    }

    fn test_mode_controls_view(
        test_mode: Option<CircuitTestMode>,
        run_scope: Option<RunScope>,
    ) -> Element<'static, Message> {
        column![
            row![
                radio(
                    "Do not run",
                    CircuitTestMode::DoNotRun,
                    test_mode,
                    Message::TestModeChanged,
                ),
                radio(
                    "Save reference",
                    CircuitTestMode::SaveReference,
                    test_mode,
                    Message::TestModeChanged,
                ),
                radio(
                    "Comparison",
                    CircuitTestMode::Compare,
                    test_mode,
                    Message::TestModeChanged,
                ),
                radio(
                    "Run without comparison",
                    CircuitTestMode::RunWithoutComparison,
                    test_mode,
                    Message::TestModeChanged,
                ),
                button("Apply setting to all circuits").on_press(Message::ApplyTestModeToAll),
            ]
            .spacing(8),
            row![
                radio(
                    "Run all circuits",
                    RunScope::AllCircuits,
                    run_scope,
                    Message::RunScopeChanged,
                ),
                radio(
                    "Run current circuit",
                    RunScope::CurrentCircuit,
                    run_scope,
                    Message::RunScopeChanged,
                ),
            ]
            .spacing(8),
        ]
        .spacing(6)
        .into()
    }

    fn local_reference_controls_view(&self) -> Element<'_, Message> {
        let reference_rows = self.active_circuit_settings.as_ref().map_or_else(
            || column![text("No active reference rows")].spacing(4),
            |settings| {
                settings
                    .references
                    .iter()
                    .filter(|reference| reference.visibility == ReferenceVisibility::Visible)
                    .fold(
                        column![text("Reference rows")].spacing(4),
                        |rows, reference| {
                            let name = if reference.name.is_empty() {
                                "(unnamed)"
                            } else {
                                &reference.name
                            };
                            rows.push(text(format!("{name} - {}", reference.selection_mode)))
                        },
                    )
            },
        );

        column![
            row![
                text("Show options"),
                pick_list(
                    REFERENCE_FILTERS,
                    Some(self.reference_visibility_filter),
                    Message::ReferenceVisibilityFilterChanged,
                ),
            ]
            .spacing(8),
            scrollable(reference_rows).height(Length::Fixed(100.0)),
            row![
                text("Choose block"),
                pick_list(
                    REFERENCE_BLOCKS,
                    Some(self.local_bulk_controls.reference_block),
                    |block| {
                        Message::LocalReference(LocalReferenceMessage::ReferenceBlockChanged(block))
                    },
                ),
                button("Check all")
                    .on_press(Message::LocalReference(LocalReferenceMessage::SelectAll)),
                button("Uncheck all")
                    .on_press(Message::LocalReference(LocalReferenceMessage::DeselectAll)),
            ]
            .spacing(8),
            row![
                text("Select time"),
                pick_list(
                    TIME_FIELDS,
                    Some(self.local_bulk_controls.time_field),
                    |field| {
                        Message::LocalReference(LocalReferenceMessage::TimeFieldChanged(field))
                    },
                ),
                text_input("Time [s]", &self.local_bulk_controls.time_value).on_input(|value| {
                    Message::LocalReference(LocalReferenceMessage::TimeChanged(value))
                }),
                button("Set all times")
                    .on_press(Message::LocalReference(LocalReferenceMessage::ApplyTime)),
            ]
            .spacing(8),
            row![
                text_input("Tolerance [%]", &self.local_bulk_controls.tolerance_value,).on_input(
                    |value| {
                        Message::LocalReference(LocalReferenceMessage::ToleranceChanged(value))
                    }
                ),
                button("Set all tolerances").on_press(Message::LocalReference(
                    LocalReferenceMessage::ApplyTolerance,
                )),
                button("Default settings")
                    .on_press(Message::LocalReference(LocalReferenceMessage::Reset)),
            ]
            .spacing(8),
            row![
                button("Remove data file").on_press(Message::LocalReference(
                    LocalReferenceMessage::RemoveDataFile,
                )),
                button("Setup corner test").on_press(Message::LocalReference(
                    LocalReferenceMessage::SetupCornerTest,
                )),
            ]
            .spacing(8),
            row![
                text_input("New curve name", &self.curve_name_input).on_input(|value| {
                    Message::LocalReference(LocalReferenceMessage::CurveNameChanged(value))
                }),
                button("Change curve name").on_press(Message::LocalReference(
                    LocalReferenceMessage::ChangeCurveName,
                )),
            ]
            .spacing(8),
        ]
        .spacing(6)
        .into()
    }

    fn result_display_controls_view(&self) -> Element<'_, Message> {
        column![
            row![
                text("References"),
                radio(
                    "Curve",
                    ReferenceDisplayKind::Curve,
                    self.reference_display_kind,
                    |kind| Message::ResultDisplay(ResultDisplayMessage::ReferenceKindChanged(kind)),
                ),
                radio(
                    "Figure",
                    ReferenceDisplayKind::Figure,
                    self.reference_display_kind,
                    |kind| Message::ResultDisplay(ResultDisplayMessage::ReferenceKindChanged(kind)),
                ),
                button("Load reference")
                    .on_press(Message::ResultDisplay(ResultDisplayMessage::LoadReference,)),
            ]
            .spacing(8),
            row![
                text("Results"),
                radio(
                    "Test result",
                    ResultDisplayKind::TestResult,
                    self.result_display_kind,
                    |kind| Message::ResultDisplay(ResultDisplayMessage::ResultKindChanged(kind)),
                ),
                radio(
                    "LTspice result",
                    ResultDisplayKind::Ltspice,
                    self.result_display_kind,
                    |kind| Message::ResultDisplay(ResultDisplayMessage::ResultKindChanged(kind)),
                ),
                radio(
                    "PSpice result",
                    ResultDisplayKind::Pspice,
                    self.result_display_kind,
                    |kind| Message::ResultDisplay(ResultDisplayMessage::ResultKindChanged(kind)),
                ),
                radio(
                    "SIMetrix result",
                    ResultDisplayKind::Simetrix,
                    self.result_display_kind,
                    |kind| Message::ResultDisplay(ResultDisplayMessage::ResultKindChanged(kind)),
                ),
                button("Load result")
                    .on_press(Message::ResultDisplay(ResultDisplayMessage::LoadResult)),
            ]
            .spacing(8),
        ]
        .spacing(6)
        .into()
    }

    fn file_controls_view(&self) -> Element<'_, Message> {
        let filter_good = checkbox("Filter good", self.report_options.filter_good);
        let filter_good = if self
            .idle_control_groups
            .contains(&IdleControlGroup::FilterGood)
        {
            filter_good.on_toggle(Message::FilterGoodChanged)
        } else {
            filter_good
        };

        column![
            row![
                text_input("Root folder", &self.root_folder).on_input(Message::RootFolderChanged),
                button("Modify folder").on_press(Message::ModifyCircuitFolder),
                button("Reload files").on_press(Message::ReloadCircuitFiles),
            ]
            .spacing(8),
            row![
                text_input("Result folder", &self.result_folder)
                    .on_input(Message::ResultFolderChanged),
                button("Select folder").on_press(Message::SelectResultFolder),
            ]
            .spacing(8),
            row![
                text_input("Data file", &self.data_file_name).on_input(Message::DataFileChanged),
                button("Select data file")
                    .on_press(Message::ReferenceData(ReferenceDataMessage::Select)),
            ]
            .spacing(8),
            row![
                checkbox("Show report", self.report_options.show_report)
                    .on_toggle(Message::ShowReportChanged),
                filter_good,
            ]
            .spacing(8),
        ]
        .spacing(8)
        .into()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = row![
            button("New").on_press(Message::New),
            button("Load").on_press(Message::Load),
            button("Save").on_press(Message::Save),
            button("Save As").on_press(Message::SaveAs),
            button("Options").on_press(Message::Options),
            button("Run Multiple...").on_press(Message::RunMultiple),
            button("Modify replication file").on_press(Message::OpenReplicationModifier),
        ]
        .spacing(8);

        let tree = self.tree_items.iter().enumerate().fold(
            column![text("Test bench")].spacing(4),
            |items, (index, item)| {
                let marker = if self.selected_tree_items.contains(&index) {
                    "*"
                } else if index == self.selected_tree_item {
                    ">"
                } else {
                    " "
                };
                let label = text(format!("{marker} {item}")).font(self.tree_item_font(index));
                items.push(
                    button(label)
                        .on_press(Message::TreeItemPressed(index))
                        .width(Length::Fill),
                )
            },
        );

        let editor = column![
            self.file_controls_view(),
            self.circuit_options_view(),
            self.result_display_controls_view(),
            self.local_reference_controls_view(),
            row![
                button("Select all").on_press(Message::SelectAllCircuits),
                button("Deselect all").on_press(Message::DeselectAllCircuits),
                button("Invert selection").on_press(Message::InvertCircuitSelection),
                button("Open circuit").on_press(Message::OpenSelectedCircuit),
                button("Delete selected").on_press(Message::DeleteSelectedCircuits),
                button("Start test").on_press(Message::StartTest),
            ]
            .spacing(8),
            text(format!(
                "Create: {}  Reference: {}  Result: {}  Samples: {}  Workers: {}  Batch: {}",
                self.action_availability.create_testbench,
                self.action_availability.load_reference,
                self.action_availability.load_result,
                self.model.map_or(0, |model| model.samples),
                self.model.map_or(0, |model| model.max_threads),
                self.pending_batch_paths.len()
            )),
            text(format!(
                "Comparison unit: {}  Reference controls enabled: {}",
                self.comparison_unit,
                matches!(self.reference_control_state, ReferenceControlState::Enabled)
            )),
        ]
        .spacing(10);

        let mut content = column![
            text(self.title_template.replace("%s", &self.testbench_name)).size(24),
            menu,
            row![
                container(scrollable(tree))
                    .width(Length::FillPortion(47))
                    .height(Length::Fill),
                container(editor).width(Length::FillPortion(53)).padding(12),
            ]
            .spacing(1)
            .height(Length::Fill),
        ]
        .padding(12)
        .spacing(12);

        if let Some(error) = &self.last_error {
            content = content.push(text(error));
        }

        content.into()
    }

    fn reset_testbench(&mut self, requested_path: &str) {
        requested_path.clone_into(&mut self.testbench_path);
        DEFAULT_TESTBENCH_NAME.clone_into(&mut self.testbench_name);
        self.root_folder.clear();
        self.result_folder.clear();
        self.data_file_name.clear();
        self.tree_items.clear();
        self.circuit_items.clear();
        self.bold_tree_items.clear();
        self.circuit_settings.clear();
        self.active_circuit_settings = None;
        self.selected_tree_items.clear();
        self.selected_tree_item = 0;
        self.pending_circuit_to_open = None;
        self.last_tree_press = None;
        self.global_comparison_controls = GlobalComparisonControls::default();
        self.reference_data = None;
        self.reference_display_kind = Some(ReferenceDisplayKind::Curve);
        self.result_display_kind = Some(ResultDisplayKind::TestResult);
        self.pending_display_request = None;
        self.curve_name_input.clear();
        self.pending_curve_rename_request = None;
        self.start_test_request = RequestState::Idle;
        self.replication_modifier_request = RequestState::Idle;
        self.visibility = WindowVisibility::Visible;
        self.idle_control_groups.clear();
        self.saved_once = false;
    }

    fn apply_loaded_testbench(&mut self, loaded: LoadedTestBench) {
        self.testbench_name.clone_from(&loaded.path);
        self.testbench_path = loaded.path;
        self.root_folder = loaded.root_folder;
        self.result_folder = loaded.result_folder;
        self.data_file_name = loaded.data_file_name;
        self.tree_items = loaded.tree_items;
        self.circuit_items = vec![true; self.tree_items.len()];
        self.bold_tree_items = vec![false; self.tree_items.len()];
        self.circuit_settings = vec![CircuitSettings::default(); self.tree_items.len()];
        self.active_circuit_settings = self.circuit_settings.first().cloned();
        self.selected_tree_items.clear();
        self.global_comparison_controls = GlobalComparisonControls::default();
        self.refresh_idle_control_availability(self.client_height);
    }

    fn commit_active_circuit_settings(&mut self) {
        if self.circuit_items.get(self.selected_tree_item).copied() != Some(true) {
            return;
        }
        let Some(active) = self.active_circuit_settings.clone() else {
            return;
        };
        if let Some(settings) = self.circuit_settings.get_mut(self.selected_tree_item) {
            *settings = active;
        }
    }

    fn refresh_action_availability(&mut self) {
        self.action_availability = ActionAvailability {
            create_testbench: !self.root_folder.trim().is_empty(),
            load_reference: !self.result_folder.trim().is_empty(),
            load_result: !self.data_file_name.trim().is_empty(),
        };
    }

    fn save_with_mode<S: TestBenchSaver>(
        &mut self,
        force_new_path: bool,
        selected_path: Option<PathBuf>,
        saver: &mut S,
    ) -> Result<SaveOutcome, String> {
        let needs_path = force_new_path || self.testbench_name == DEFAULT_TESTBENCH_NAME;
        let path = if needs_path {
            let Some(path) = selected_path else {
                return Ok(SaveOutcome::Cancelled);
            };
            self.testbench_path = path.to_string_lossy().into_owned();
            path.file_stem()
                .and_then(|name| name.to_str())
                .unwrap_or(DEFAULT_TESTBENCH_NAME)
                .clone_into(&mut self.testbench_name);
            path
        } else {
            PathBuf::from(&self.testbench_path)
        };

        let model = self.model.unwrap_or(ModelState {
            samples: 1_024,
            max_threads: 1,
            timeout: 0,
            copy_reference_results: true,
        });
        let snapshot = TestBenchSnapshot {
            root_folder: self.root_folder.clone(),
            result_folder: self.result_folder.clone(),
            data_file_name: self.data_file_name.clone(),
            show_report: self.report_options.show_report,
            samples: model.samples,
            max_threads: model.max_threads,
            timeout: model.timeout,
            tree_items: self.tree_items.clone(),
        };
        self.saved_once = true;
        saver.save(&path, &snapshot)?;
        Ok(SaveOutcome::Saved(path))
    }
}

fn parse_comma_text(value: &str) -> Result<Vec<String>, String> {
    let mut reader = ReaderBuilder::new()
        .has_headers(false)
        .from_reader(value.as_bytes());
    let Some(record) = reader.records().next() else {
        return Ok(Vec::new());
    };
    record
        .map(|fields| fields.iter().map(str::to_owned).collect())
        .map_err(|error| error.to_string())
}

async fn select_reference_csv() -> Result<Option<LoadedReferenceData>, String> {
    let Some(file) = AsyncFileDialog::new()
        .add_filter("Comma-separated values", &["csv"])
        .pick_file()
        .await
    else {
        return Ok(None);
    };

    read_reference_csv(file.path()).map(Some)
}

fn read_reference_csv(path: &Path) -> Result<LoadedReferenceData, String> {
    let mut reader = ReaderBuilder::new()
        .has_headers(false)
        .flexible(true)
        .from_path(path)
        .map_err(|error| error.to_string())?;
    let records = reader
        .records()
        .map(|record| {
            record
                .map(|fields| fields.iter().map(str::to_owned).collect())
                .map_err(|error| error.to_string())
        })
        .collect::<Result<Vec<_>, _>>()?;
    Ok(LoadedReferenceData {
        path: path.to_path_buf(),
        records,
    })
}

fn join_artifact(folder: &str, circuit_name: &str, suffix: &str) -> PathBuf {
    let mut relative = PathBuf::from(circuit_name);
    if relative
        .extension()
        .is_some_and(|extension| extension.eq_ignore_ascii_case("tsc"))
    {
        relative.set_extension("");
    }
    let file_name = relative
        .file_name()
        .and_then(|name| name.to_str())
        .unwrap_or(circuit_name);
    relative.set_file_name(format!("{file_name}{suffix}"));
    PathBuf::from(folder).join(relative)
}

fn circuit_stem(circuit_name: &str) -> &str {
    Path::new(circuit_name)
        .file_stem()
        .and_then(|stem| stem.to_str())
        .unwrap_or(circuit_name)
}

fn normalized_circuit_name(name: &str) -> String {
    Path::new(name)
        .file_stem()
        .and_then(|stem| stem.to_str())
        .unwrap_or(name)
        .to_lowercase()
}

fn discover_direct_circuit_files(folder: &str) -> Result<Vec<String>, String> {
    let mut circuits = Vec::new();
    for entry in fs::read_dir(folder).map_err(|error| error.to_string())? {
        let entry = entry.map_err(|error| error.to_string())?;
        let file_type = entry.file_type().map_err(|error| error.to_string())?;
        if !file_type.is_file() {
            continue;
        }

        let path = entry.path();
        if path
            .extension()
            .and_then(|extension| extension.to_str())
            .is_some_and(|extension| extension.eq_ignore_ascii_case("tsc"))
        {
            circuits.push(
                path.file_stem()
                    .and_then(|stem| stem.to_str())
                    .unwrap_or_default()
                    .to_owned(),
            );
        }
    }
    Ok(circuits)
}

async fn discover_testbench_folder() -> Result<Option<NewTestBench>, String> {
    let Some(folder) = AsyncFileDialog::new().pick_folder().await else {
        return Ok(None);
    };
    let folder = folder.path().to_path_buf();
    let circuits = find_tsc_files(&folder)?;
    Ok(Some(NewTestBench { folder, circuits }))
}

async fn pick_folder(initial_folder: String) -> Option<PathBuf> {
    let initial_folder = PathBuf::from(initial_folder);
    let dialog = if initial_folder.is_dir() {
        AsyncFileDialog::new().set_directory(initial_folder)
    } else {
        AsyncFileDialog::new()
    };

    dialog
        .pick_folder()
        .await
        .map(|folder| folder.path().to_path_buf())
}

fn find_tsc_files(folder: &Path) -> Result<Vec<String>, String> {
    let mut circuits = Vec::new();
    for entry in WalkDir::new(folder) {
        let entry = entry.map_err(|error| error.to_string())?;
        if !entry.file_type().is_file()
            || !entry
                .path()
                .extension()
                .is_some_and(|extension| extension.eq_ignore_ascii_case("tsc"))
        {
            continue;
        }

        let relative = entry
            .path()
            .strip_prefix(folder)
            .unwrap_or_else(|_| entry.path());
        circuits.push(relative.to_string_lossy().into_owned());
    }
    circuits.sort_unstable();
    Ok(circuits)
}

async fn load_multiple_testbench_paths() -> Result<Option<Vec<String>>, String> {
    let Some(file) = AsyncFileDialog::new()
        .add_filter("Text file", &["txt"])
        .pick_file()
        .await
    else {
        return Ok(None);
    };

    let contents = std::fs::read_to_string(file.path()).map_err(|error| error.to_string())?;
    Ok(Some(
        contents
            .lines()
            .map(str::trim)
            .filter(|line| !line.is_empty())
            .map(str::to_owned)
            .collect(),
    ))
}

#[cfg(test)]
mod tests {
    use super::*;

    fn temporary_test_directory(label: &str) -> Result<PathBuf, Box<dyn std::error::Error>> {
        let nonce = std::time::SystemTime::now()
            .duration_since(std::time::UNIX_EPOCH)?
            .as_nanos();
        let directory = PathBuf::from(env!("CARGO_MANIFEST_DIR"))
            .join("../../.temp")
            .join(format!("tiara-ui-{label}-{}-{nonce}", std::process::id()));
        fs::create_dir_all(&directory)?;
        Ok(directory)
    }

    #[derive(Default)]
    struct Loader {
        requested_path: Option<String>,
        result: Option<LoadedTestBench>,
    }

    impl TestBenchLoader for Loader {
        fn load(&mut self, path: &str) -> Option<LoadedTestBench> {
            self.requested_path = Some(path.to_owned());
            self.result.take()
        }
    }

    #[derive(Default)]
    struct CurveStore {
        rename: Option<(PathBuf, usize, String)>,
        fail: bool,
    }

    impl AnalysisResultCurveStore for CurveStore {
        fn rename_curve(
            &mut self,
            path: &Path,
            curve_index: usize,
            new_name: &str,
        ) -> std::io::Result<()> {
            if self.fail {
                return Err(std::io::Error::other("rename failed"));
            }
            self.rename = Some((path.to_path_buf(), curve_index, new_name.to_owned()));
            Ok(())
        }
    }

    #[test]
    fn create_initializes_one_worker_and_registers_the_form() {
        let mut window = Window::default();

        window.initialize_model_test_bench_editor(StoredSettings::default());

        assert!(window.is_registered());
        assert_eq!(window.model.expect("model").max_threads, 1);
    }

    #[test]
    fn close_releases_model_registration_and_transient_items() {
        let mut window = Window::default();
        window.initialize_model_test_bench_editor(StoredSettings::default());
        window.tree_items.push("Result".to_owned());

        let disposition = window.release_model_test_bench_editor();

        assert_eq!(disposition, CloseDisposition::Release);
        assert!(!window.is_registered());
        assert!(window.model.is_none());
        assert!(window.tree_items.is_empty());
    }

    #[test]
    fn accepted_close_is_blocked_until_a_nonempty_tree_has_been_saved() {
        let mut window = Window::default();
        window.tree_items.push("Test".to_owned());

        assert!(!window.can_close(ModalCloseReason::Accepted));
        assert!(window.can_close(ModalCloseReason::Other));

        window.mark_save_started();
        assert!(window.can_close(ModalCloseReason::Accepted));
    }

    #[test]
    fn destroy_drops_only_the_settings_session() {
        let mut window = Window::default();
        window.initialize_model_test_bench_editor(StoredSettings::default());

        window.destroy_model_test_bench_editor();

        assert!(window.settings_session.is_none());
        assert!(window.model.is_some());
    }

    #[test]
    fn hide_returns_the_current_testbench_path_for_persistence() {
        let mut window = Window {
            testbench_path: "D:/Tests/bench.tsc".to_owned(),
            ..Window::default()
        };

        let settings = window.persist_last_testbench_on_hide();

        assert_eq!(settings.testbench_path, "D:/Tests/bench.tsc");
    }

    #[test]
    fn resize_uses_the_recovered_split_and_clamps_the_active_column() {
        let mut window = Window::default();

        window.resize_model_test_bench_editor(1_000.0, 4);

        assert!((window.layout.left_region_width - 467.0).abs() < f32::EPSILON);
        assert!((window.layout.right_region_width - 532.0).abs() < f32::EPSILON);
        assert_eq!(window.layout.active_column, 1);
    }

    #[test]
    fn first_show_defaults_empty_setting_loads_once_and_refreshes_actions() {
        let mut window = Window::default();
        let mut loader = Loader {
            result: Some(LoadedTestBench {
                path: "Bench.tsc".to_owned(),
                root_folder: "circuits".to_owned(),
                result_folder: "results".to_owned(),
                data_file_name: "data.csv".to_owned(),
                tree_items: vec!["Case 1".to_owned()],
            }),
            ..Loader::default()
        };

        window.show_model_test_bench_editor(&StoredSettings::default(), 1_280.0, &mut loader);

        assert_eq!(
            loader.requested_path.as_deref(),
            Some(DEFAULT_TESTBENCH_NAME)
        );
        assert_eq!(window.testbench_name, "Bench.tsc");
        assert!((window.layout.window_width - 1_080.0).abs() < f32::EPSILON);
        assert_eq!(
            window.action_availability(),
            ActionAvailability {
                create_testbench: true,
                load_reference: true,
                load_result: true,
            }
        );

        loader.requested_path = None;
        window.show_model_test_bench_editor(
            &StoredSettings {
                testbench_path: "Other.tsc".to_owned(),
                ..StoredSettings::default()
            },
            1_000.0,
            &mut loader,
        );
        assert!(loader.requested_path.is_none());
    }

    #[test]
    fn new_testbench_cancel_is_noop_and_acceptance_applies_recovered_defaults() {
        let mut window = Window {
            testbench_name: "Existing".to_owned(),
            root_folder: "old".to_owned(),
            ..Window::default()
        };

        assert!(!window.create_new_testbench(None));
        assert_eq!(window.testbench_name, "Existing");

        assert!(window.create_new_testbench(Some(NewTestBench {
            folder: PathBuf::from("D:/Circuits"),
            circuits: vec!["A.tsc".to_owned(), "nested/B.TSC".to_owned()],
        })));
        assert_eq!(window.testbench_name, DEFAULT_TESTBENCH_NAME);
        assert_eq!(window.root_folder, "D:/Circuits");
        assert_eq!(window.result_folder, "D:/Circuits");
        assert_eq!(window.tree_items.len(), 2);
        assert_eq!(
            window.model,
            Some(ModelState {
                samples: 1_024,
                max_threads: 1,
                timeout: 0,
                copy_reference_results: true,
            })
        );
    }

    #[test]
    fn options_commit_updates_settings_and_current_model_only_after_acceptance() {
        let mut window = Window::default();
        window.initialize_model_test_bench_editor(StoredSettings::default());

        assert!(!window.apply_model_test_options(None));
        assert!(
            window.apply_model_test_options(Some(ModelTestOptionsRequest {
                timeout: 45,
                copy_reference_results: false,
            }))
        );

        let settings = window.settings_session.expect("settings");
        let model = window.model.expect("model");
        assert_eq!(settings.timeout, 45);
        assert!(!settings.copy_reference_results);
        assert_eq!(model.timeout, 45);
        assert!(!model.copy_reference_results);
    }

    #[test]
    fn modify_replication_menu_creates_one_fresh_modal_request_without_editor_changes() {
        let mut window = Window {
            testbench_name: "Bench".to_owned(),
            testbench_path: "Bench.mtb".to_owned(),
            tree_items: vec!["Filter".to_owned()],
            ..Window::default()
        };

        let _ = window.update(Message::OpenReplicationModifier);

        assert!(window.take_replication_file_modifier().is_some());
        assert!(window.take_replication_file_modifier().is_none());
        assert_eq!(window.testbench_name, "Bench");
        assert_eq!(window.testbench_path, "Bench.mtb");
        assert_eq!(window.tree_items, ["Filter"]);
    }

    #[derive(Default)]
    struct Runner {
        paths: Vec<String>,
        message_cycles: usize,
        delays: Vec<Duration>,
    }

    impl TestBenchRunner for Runner {
        fn run(&mut self, path: &str, batch_mode: bool) {
            assert!(batch_mode);
            self.paths.push(path.to_owned());
        }

        fn process_messages(&mut self) {
            self.message_cycles += 1;
        }

        fn wait_between_runs(&mut self, delay: Duration) {
            self.delays.push(delay);
        }
    }

    #[test]
    fn multiple_run_preserves_order_and_stops_between_entries_on_cancel() {
        let mut window = Window::default();
        let mut runner = Runner::default();
        let paths = vec!["one.tsc".to_owned(), "two.tsc".to_owned()];
        let mut cancellation_checks = 0;

        let result = window.run_multiple_testbenches(Some(&paths), &mut runner, || {
            let cancelled = cancellation_checks >= 1;
            cancellation_checks += 1;
            cancelled
        });

        assert_eq!(
            result,
            BatchRunResult {
                selected: 2,
                completed: 1,
                cancelled: true,
            }
        );
        assert_eq!(runner.paths, ["one.tsc"]);
        assert_eq!(runner.message_cycles, 1);
        assert_eq!(runner.delays, [Duration::from_millis(200)]);
    }

    #[test]
    fn canceled_multiple_file_selection_starts_no_runs() {
        let mut window = Window::default();
        let mut runner = Runner::default();

        let result = window.run_multiple_testbenches(None, &mut runner, || false);

        assert_eq!(result, BatchRunResult::default());
        assert!(runner.paths.is_empty());
    }

    #[derive(Default)]
    struct Cloner {
        pairs: Vec<ClonePair>,
    }

    impl CloneTestBenchService for Cloner {
        fn clone_pair(&mut self, pair: &ClonePair) -> Result<(), String> {
            self.pairs.push(pair.clone());
            Ok(())
        }
    }

    #[test]
    fn clone_cancel_is_noop_and_equal_lists_are_processed_in_order() {
        let mut window = Window::default();
        let mut cloner = Cloner::default();

        assert_eq!(window.clone_accepted_testbench(None, &mut cloner), Ok(0));
        let count = window
            .clone_accepted_testbench(
                Some(&CloneTestBenchRequest {
                    source_folder: "source".to_owned(),
                    circuit_folders: "folder one,\"folder,two\"".to_owned(),
                    source_prefix: "OLD".to_owned(),
                    target_prefixes: "NEW1,NEW2".to_owned(),
                }),
                &mut cloner,
            )
            .expect("clone pairs");

        assert_eq!(count, 2);
        assert_eq!(cloner.pairs[0].circuit_folder, "folder one");
        assert_eq!(cloner.pairs[1].circuit_folder, "folder,two");
        assert_eq!(cloner.pairs[1].target_prefix, "NEW2");
    }

    #[test]
    fn clone_rejects_mismatched_lists_before_copying() {
        let mut window = Window::default();
        let mut cloner = Cloner::default();
        let request = CloneTestBenchRequest {
            source_folder: "source".to_owned(),
            circuit_folders: "one,two".to_owned(),
            source_prefix: "OLD".to_owned(),
            target_prefixes: "NEW".to_owned(),
        };

        let error = window
            .clone_accepted_testbench(Some(&request), &mut cloner)
            .expect_err("mismatch");

        assert!(error.contains("mismatch"));
        assert!(cloner.pairs.is_empty());
    }

    #[test]
    fn load_cancel_preserves_state_and_accepted_invalid_file_leaves_defaults() {
        let mut window = Window {
            testbench_name: "Current".to_owned(),
            root_folder: "root".to_owned(),
            ..Window::default()
        };
        let mut loader = Loader::default();

        assert!(!window.load_selected_testbench(None, &mut loader));
        assert_eq!(window.testbench_name, "Current");
        assert!(window.load_selected_testbench(Some(Path::new("missing.mtb")), &mut loader));
        assert_eq!(window.testbench_name, DEFAULT_TESTBENCH_NAME);
        assert!(window.root_folder.is_empty());
        assert_eq!(loader.requested_path.as_deref(), Some("missing.mtb"));
    }

    #[derive(Default)]
    struct Saver {
        writes: Vec<(PathBuf, TestBenchSnapshot)>,
    }

    impl TestBenchSaver for Saver {
        fn save(&mut self, path: &Path, snapshot: &TestBenchSnapshot) -> Result<(), String> {
            self.writes.push((path.to_path_buf(), snapshot.clone()));
            Ok(())
        }
    }

    struct StartValidator {
        accepted: bool,
        circuits: Vec<String>,
    }

    impl ReferenceCurveValidator for StartValidator {
        fn validate(
            &mut self,
            circuit_name: &str,
            _settings: &CircuitSettings,
        ) -> Result<bool, String> {
            self.circuits.push(circuit_name.to_owned());
            Ok(self.accepted)
        }
    }

    #[derive(Default)]
    struct ReportWriter {
        folders: Vec<PathBuf>,
    }

    impl ReportDescriptionWriter for ReportWriter {
        fn write_description(&mut self, circuit_folder: &Path) -> Result<(), String> {
            self.folders.push(circuit_folder.to_path_buf());
            Ok(())
        }
    }

    #[derive(Default)]
    struct StartRunner {
        runs: Vec<(String, bool)>,
    }

    impl TestBenchRunner for StartRunner {
        fn run(&mut self, path: &str, batch_mode: bool) {
            self.runs.push((path.to_owned(), batch_mode));
        }

        fn process_messages(&mut self) {}

        fn wait_between_runs(&mut self, _delay: Duration) {}
    }

    #[test]
    fn save_uses_existing_path_and_unnamed_cancel_writes_nothing() {
        let mut window = Window::default();
        let mut saver = Saver::default();

        assert_eq!(
            window.save_testbench(None, &mut saver),
            Ok(SaveOutcome::Cancelled)
        );
        assert!(saver.writes.is_empty());

        window.testbench_name = "Bench".to_owned();
        window.testbench_path = "saved/Bench.mtb".to_owned();
        window.root_folder = "circuits".to_owned();
        assert_eq!(
            window.save_testbench(None, &mut saver),
            Ok(SaveOutcome::Saved(PathBuf::from("saved/Bench.mtb")))
        );
        assert_eq!(saver.writes[0].1.root_folder, "circuits");
        assert!(window.saved_once);
    }

    #[test]
    fn save_as_cancel_preserves_path_and_acceptance_updates_name_before_write() {
        let mut window = Window {
            testbench_name: "Old".to_owned(),
            testbench_path: "old.mtb".to_owned(),
            ..Window::default()
        };
        let mut saver = Saver::default();

        assert_eq!(
            window.save_testbench_as(None, &mut saver),
            Ok(SaveOutcome::Cancelled)
        );
        assert_eq!(window.testbench_path, "old.mtb");

        let new_path = PathBuf::from("new/New Bench.mtb");
        assert_eq!(
            window.save_testbench_as(Some(new_path.clone()), &mut saver),
            Ok(SaveOutcome::Saved(new_path.clone()))
        );
        assert_eq!(window.testbench_name, "New Bench");
        assert_eq!(window.testbench_path, new_path.to_string_lossy());
        assert_eq!(saver.writes[0].0, new_path);
    }

    #[test]
    fn start_test_stages_from_iced_and_empty_tree_performs_no_work() {
        let mut window = Window::default();
        let mut saver = Saver::default();
        let mut validator = StartValidator {
            accepted: true,
            circuits: Vec::new(),
        };
        let mut report_writer = ReportWriter::default();
        let mut runner = StartRunner::default();

        let _ = window.update(Message::StartTest);
        assert!(window.take_start_test_request());
        assert!(!window.take_start_test_request());
        assert_eq!(
            window.start_model_test(
                None,
                &mut saver,
                &mut validator,
                &mut report_writer,
                &mut runner,
            ),
            Ok(StartTestOutcome::NoCircuit)
        );
        assert!(saver.writes.is_empty());
        assert!(validator.circuits.is_empty());
        assert!(report_writer.folders.is_empty());
        assert!(runner.runs.is_empty());
        assert!(window.is_visible());
    }

    #[test]
    fn start_test_saves_validates_writes_report_hides_and_runs()
    -> Result<(), Box<dyn std::error::Error>> {
        let circuit_folder = temporary_test_directory("start-model-test")?;
        let active = CircuitSettings {
            test_mode: CircuitTestMode::Compare,
            references: vec![ReferenceSetting {
                selected: true,
                ..ReferenceSetting::default()
            }],
            ..CircuitSettings::default()
        };
        let mut window = Window {
            testbench_name: "Bench".to_owned(),
            testbench_path: "tests/Bench.mtb".to_owned(),
            root_folder: circuit_folder.to_string_lossy().into_owned(),
            tree_items: vec!["Filter".to_owned()],
            circuit_items: vec![true],
            circuit_settings: vec![CircuitSettings::default()],
            active_circuit_settings: Some(active.clone()),
            ..Window::default()
        };
        let mut saver = Saver::default();
        let mut validator = StartValidator {
            accepted: true,
            circuits: Vec::new(),
        };
        let mut report_writer = ReportWriter::default();
        let mut runner = StartRunner::default();

        assert_eq!(
            window.start_model_test(
                None,
                &mut saver,
                &mut validator,
                &mut report_writer,
                &mut runner,
            )?,
            StartTestOutcome::Started(PathBuf::from("tests/Bench.mtb"))
        );
        assert_eq!(window.circuit_settings[0], active);
        assert_eq!(saver.writes.len(), 1);
        assert_eq!(validator.circuits, ["Filter"]);
        assert_eq!(
            report_writer.folders.as_slice(),
            std::slice::from_ref(&circuit_folder)
        );
        assert_eq!(runner.runs, [("tests/Bench.mtb".to_owned(), false)]);
        assert!(!window.is_visible());

        fs::remove_dir(circuit_folder)?;
        Ok(())
    }

    #[test]
    fn validation_rejection_stops_report_and_worker_after_save() {
        let mut window = Window {
            testbench_name: "Bench".to_owned(),
            testbench_path: "Bench.mtb".to_owned(),
            tree_items: vec!["Filter".to_owned()],
            circuit_items: vec![true],
            circuit_settings: vec![CircuitSettings {
                test_mode: CircuitTestMode::Compare,
                ..CircuitSettings::default()
            }],
            active_circuit_settings: Some(CircuitSettings {
                test_mode: CircuitTestMode::Compare,
                ..CircuitSettings::default()
            }),
            ..Window::default()
        };
        let mut saver = Saver::default();
        let mut validator = StartValidator {
            accepted: false,
            circuits: Vec::new(),
        };
        let mut report_writer = ReportWriter::default();
        let mut runner = StartRunner::default();

        assert_eq!(
            window.start_model_test(
                None,
                &mut saver,
                &mut validator,
                &mut report_writer,
                &mut runner,
            ),
            Ok(StartTestOutcome::ValidationRejected)
        );
        assert_eq!(saver.writes.len(), 1);
        assert_eq!(validator.circuits, ["Filter"]);
        assert!(report_writer.folders.is_empty());
        assert!(runner.runs.is_empty());
        assert!(window.is_visible());
    }

    #[test]
    fn canceled_first_save_does_not_stop_the_recovered_start_path() {
        let mut window = Window {
            tree_items: vec!["Filter".to_owned()],
            circuit_items: vec![true],
            circuit_settings: vec![CircuitSettings::default()],
            active_circuit_settings: Some(CircuitSettings::default()),
            ..Window::default()
        };
        let mut saver = Saver::default();
        let mut validator = StartValidator {
            accepted: true,
            circuits: Vec::new(),
        };
        let mut report_writer = ReportWriter::default();
        let mut runner = StartRunner::default();

        assert_eq!(
            window.start_model_test(
                None,
                &mut saver,
                &mut validator,
                &mut report_writer,
                &mut runner,
            ),
            Ok(StartTestOutcome::Started(PathBuf::new()))
        );
        assert!(saver.writes.is_empty());
        assert_eq!(runner.runs, [(String::new(), false)]);
        assert!(!window.is_visible());
    }

    #[test]
    fn circuit_folder_selection_syncs_after_accept_or_cancel_without_reloading_tree() {
        let mut window = Window {
            root_folder: "old".to_owned(),
            tree_items: vec!["existing.tsc".to_owned()],
            circuit_items: vec![true],
            ..Window::default()
        };

        window.apply_circuit_folder_selection(None);
        assert_eq!(window.root_folder, "old");
        assert_eq!(window.synchronized_root_folder, "old");
        assert_eq!(window.tree_items, ["existing.tsc"]);

        window.apply_circuit_folder_selection(Some(Path::new("new")));
        assert_eq!(window.root_folder, "new");
        assert_eq!(window.synchronized_root_folder, "new");
        assert_eq!(window.tree_items, ["existing.tsc"]);
    }

    #[test]
    fn result_folder_selection_updates_only_after_acceptance() {
        let mut window = Window {
            result_folder: "old".to_owned(),
            ..Window::default()
        };

        window.apply_result_folder_selection(None);
        assert_eq!(window.result_folder, "old");

        window.apply_result_folder_selection(Some(Path::new("new")));
        assert_eq!(window.result_folder, "new");
    }

    #[test]
    fn select_deselect_and_invert_apply_only_to_circuit_items() {
        let mut window = Window {
            tree_items: vec![
                "root".to_owned(),
                "one.tsc".to_owned(),
                "two.tsc".to_owned(),
                "folder".to_owned(),
            ],
            circuit_items: vec![false, true, true, false],
            ..Window::default()
        };

        window.select_all_circuits();
        assert_eq!(window.selected_tree_items, BTreeSet::from([1, 2]));

        window.deselect_all_circuits();
        assert!(window.selected_tree_items.is_empty());

        window.selected_tree_items.insert(1);
        window.invert_circuit_selection();
        assert_eq!(window.selected_tree_items, BTreeSet::from([2]));
    }

    #[test]
    fn tree_prechange_commits_outgoing_state_and_rejects_invalid_target_range() {
        let first = CircuitSettings {
            options: BTreeSet::from([CircuitOption::AddSpiceResult]),
            ..CircuitSettings::default()
        };
        let mut second = CircuitSettings {
            comparison_from: 2.0,
            comparison_to: 1.0,
            run_scope: RunScope::CurrentCircuit,
            ..CircuitSettings::default()
        };
        let mut window = Window {
            tree_items: vec!["first".to_owned(), "second".to_owned()],
            circuit_items: vec![true, true],
            bold_tree_items: vec![false, false],
            circuit_settings: vec![CircuitSettings::default(), second.clone()],
            active_circuit_settings: Some(first.clone()),
            ..Window::default()
        };

        assert!(!window.prepare_tree_selection_change(1));
        assert_eq!(window.circuit_settings[0], first);
        assert_eq!(window.circuit_settings[1].run_scope, RunScope::AllCircuits);
        assert_eq!(
            window.last_error.as_deref(),
            Some("Invalid comparison range!")
        );

        second.comparison_from = -1.0;
        window.circuit_settings[1] = second.clone();
        assert!(window.try_select_tree_item(1));
        second.run_scope = RunScope::AllCircuits;
        assert_eq!(window.selected_tree_item, 1);
        assert_eq!(window.active_circuit_settings, Some(second));
    }

    #[test]
    fn tree_change_loads_all_recovered_circuit_controls_and_units() {
        let settings = CircuitSettings {
            simulation_type: SimulationType::AlternatingCurrent,
            options: BTreeSet::from([
                CircuitOption::UseCustomComparisonRange,
                CircuitOption::AddSpiceResult,
                CircuitOption::IncludeLtspiceResult,
                CircuitOption::IncludePspiceResult,
                CircuitOption::IncludeSimetrixResult,
                CircuitOption::UseDatasheetMinMax,
            ]),
            comparison_from: 10.0,
            comparison_to: 20.0,
            samples: 4_096,
            run_scope: RunScope::CurrentCircuit,
            test_mode: CircuitTestMode::Compare,
            references: vec![ReferenceSetting {
                selected: true,
                ..ReferenceSetting::default()
            }],
        };
        let mut window = Window {
            tree_items: vec!["filter".to_owned()],
            circuit_items: vec![true],
            bold_tree_items: vec![false],
            circuit_settings: vec![settings.clone()],
            ..Window::default()
        };

        assert!(window.load_tree_selection(0));
        assert_eq!(window.active_circuit_settings, Some(settings));
        assert_eq!(window.comparison_unit, "Hz");
        assert_eq!(
            window.reference_control_state,
            ReferenceControlState::Enabled
        );
    }

    #[test]
    fn custom_tree_draw_uses_bold_only_for_flagged_rows() {
        let window = Window {
            tree_items: vec!["Group".to_owned(), "Circuit".to_owned()],
            circuit_items: vec![false, true],
            bold_tree_items: vec![true, false],
            ..Window::default()
        };

        assert_eq!(window.tree_item_font(0).weight, Weight::Bold);
        assert_eq!(window.tree_item_font(1).weight, Weight::Normal);
    }

    #[test]
    fn second_tree_press_stages_selected_tsc_path_for_schematic_editor() {
        let start = Instant::now();
        let mut window = Window {
            root_folder: PathBuf::from("circuits").to_string_lossy().into_owned(),
            tree_items: vec![
                PathBuf::from("nested")
                    .join("amplifier")
                    .to_string_lossy()
                    .into_owned(),
            ],
            circuit_items: vec![true],
            bold_tree_items: vec![false],
            circuit_settings: vec![CircuitSettings::default()],
            active_circuit_settings: Some(CircuitSettings::default()),
            ..Window::default()
        };

        window.handle_tree_item_press(0, start);
        assert!(window.take_pending_circuit_open().is_none());
        window.handle_tree_item_press(0, start + Duration::from_millis(100));

        assert_eq!(
            window.take_pending_circuit_open(),
            Some(
                PathBuf::from("circuits")
                    .join("nested")
                    .join("amplifier.TSC")
            )
        );
    }

    #[test]
    fn delete_key_removes_selected_circuits_in_reverse_index_order() {
        let settings = (0..4)
            .map(|index| CircuitSettings {
                samples: 100 + index,
                ..CircuitSettings::default()
            })
            .collect();
        let mut window = Window {
            tree_items: vec![
                "root".to_owned(),
                "first".to_owned(),
                "group".to_owned(),
                "second".to_owned(),
            ],
            circuit_items: vec![false, true, false, true],
            bold_tree_items: vec![true, false, true, false],
            circuit_settings: settings,
            selected_tree_items: BTreeSet::from([0, 1, 2, 3]),
            selected_tree_item: 3,
            active_circuit_settings: Some(CircuitSettings::default()),
            ..Window::default()
        };

        assert_eq!(window.delete_selected_circuits(), 2);
        assert_eq!(window.tree_items, ["root", "group"]);
        assert_eq!(window.circuit_items, [false, false]);
        assert_eq!(window.bold_tree_items, [true, true]);
        assert_eq!(window.circuit_settings[0].samples, 100);
        assert_eq!(window.circuit_settings[1].samples, 102);
        assert!(window.selected_tree_items.is_empty());
        assert_eq!(window.selected_tree_item, 1);
        assert!(window.active_circuit_settings.is_none());
    }

    #[test]
    fn reload_reconciles_direct_circuit_names_without_losing_retained_settings() {
        let retained_settings = CircuitSettings {
            samples: 4_096,
            ..CircuitSettings::default()
        };
        let mut window = Window {
            tree_items: vec![
                "Test bench".to_owned(),
                "Retained.TSC".to_owned(),
                "Stale".to_owned(),
            ],
            circuit_items: vec![false, true, true],
            bold_tree_items: vec![true, false, false],
            circuit_settings: vec![
                CircuitSettings::default(),
                retained_settings.clone(),
                CircuitSettings::default(),
            ],
            selected_tree_items: BTreeSet::from([1, 2]),
            ..Window::default()
        };

        let result =
            window.apply_discovered_circuit_files(vec!["new".to_owned(), "retained".to_owned()]);

        assert_eq!(
            result,
            CircuitReload {
                added: 1,
                removed: 1
            }
        );
        assert_eq!(window.tree_items, ["Test bench", "new", "retained"]);
        assert_eq!(window.circuit_items, [false, true, true]);
        assert_eq!(window.circuit_settings[2], retained_settings);
        assert!(window.selected_tree_items.is_empty());
        assert_eq!(window.selected_tree_item, 0);
    }

    #[test]
    fn sample_and_simulation_changes_update_only_a_selected_circuit() {
        let mut window = Window {
            tree_items: vec!["root".to_owned(), "amplifier".to_owned()],
            circuit_items: vec![false, true],
            bold_tree_items: vec![true, false],
            circuit_settings: vec![CircuitSettings::default(); 2],
            selected_tree_item: 1,
            active_circuit_settings: Some(CircuitSettings::default()),
            ..Window::default()
        };

        assert!(window.set_sample_count(8_192));
        assert!(!window.set_simulation_type(SimulationType::AlternatingCurrent));
        window.selected_tree_items.insert(1);
        assert!(window.set_simulation_type(SimulationType::AlternatingCurrent));

        assert_eq!(window.circuit_settings[1].samples, 8_192);
        assert_eq!(
            window.circuit_settings[1].simulation_type,
            SimulationType::AlternatingCurrent
        );
        assert_eq!(window.comparison_unit, "Hz");
        assert_eq!(
            window.active_circuit_settings,
            Some(window.circuit_settings[1].clone())
        );
    }

    #[test]
    fn circuit_option_handlers_store_and_clear_each_recovered_record_flag() {
        let mut window = Window {
            tree_items: vec!["filter".to_owned()],
            circuit_items: vec![true],
            bold_tree_items: vec![false],
            circuit_settings: vec![CircuitSettings::default()],
            active_circuit_settings: Some(CircuitSettings::default()),
            ..Window::default()
        };

        assert!(window.set_add_spice_result(true));
        assert!(window.set_custom_comparison_range(true));
        assert!(window.set_include_ltspice_result(true));
        assert!(window.set_include_pspice_result(true));
        assert!(window.set_include_simetrix_result(true));
        assert!(window.set_datasheet_min_max(true));
        assert_eq!(window.circuit_settings[0].options.len(), 6);
        assert_eq!(
            window
                .active_circuit_settings
                .as_ref()
                .unwrap()
                .options
                .len(),
            6
        );

        assert!(window.set_include_pspice_result(false));
        assert!(
            !window.circuit_settings[0]
                .options
                .contains(&CircuitOption::IncludePspiceResult)
        );
    }

    #[test]
    fn show_report_handler_keeps_filter_good_in_the_same_state() {
        let mut window = Window::default();

        window.set_show_report(true);
        assert_eq!(
            window.report_options,
            ReportOptions {
                show_report: true,
                filter_good: true,
            }
        );

        window.set_show_report(false);
        assert_eq!(window.report_options, ReportOptions::default());
    }

    #[test]
    fn idle_handler_synchronizes_the_represented_control_groups() {
        let mut window = Window {
            report_options: ReportOptions {
                show_report: true,
                filter_good: true,
            },
            active_circuit_settings: Some(CircuitSettings {
                test_mode: CircuitTestMode::Compare,
                options: BTreeSet::from([
                    CircuitOption::UseCustomComparisonRange,
                    CircuitOption::AddSpiceResult,
                ]),
                ..CircuitSettings::default()
            }),
            ..Window::default()
        };

        window.refresh_idle_control_availability(803.0);

        assert_eq!(
            window.idle_control_groups,
            BTreeSet::from([
                IdleControlGroup::FilterGood,
                IdleControlGroup::Comparison,
                IdleControlGroup::ComparisonOrSave,
                IdleControlGroup::ComparisonOrRunWithout,
                IdleControlGroup::CustomComparisonRange,
                IdleControlGroup::SpiceFormats,
                IdleControlGroup::CompactLayoutAction,
            ])
        );

        window.report_options.show_report = false;
        window.active_circuit_settings = Some(CircuitSettings::default());
        window.refresh_idle_control_availability(804.0);

        assert!(window.idle_control_groups.is_empty());
    }

    #[test]
    fn global_comparison_edits_parse_only_for_a_current_circuit() {
        let mut window = Window {
            tree_items: vec!["filter".to_owned()],
            circuit_items: vec![true],
            circuit_settings: vec![CircuitSettings::default()],
            active_circuit_settings: Some(CircuitSettings::default()),
            ..Window::default()
        };

        assert_eq!(window.set_comparison_from_text(" 2.5 "), Ok(true));
        assert_eq!(window.set_comparison_to_text("8"), Ok(true));
        assert!((window.circuit_settings[0].comparison_from - 2.5).abs() < f64::EPSILON);
        assert!((window.circuit_settings[0].comparison_to - 8.0).abs() < f64::EPSILON);
        assert_eq!(
            window
                .active_circuit_settings
                .as_ref()
                .map(|settings| settings.comparison_from),
            Some(2.5)
        );

        assert!(window.set_comparison_from_text("invalid").is_err());
        assert!((window.circuit_settings[0].comparison_from - 2.5).abs() < f64::EPSILON);
        assert_eq!(window.global_comparison_controls.from, "invalid");

        window.circuit_items[0] = false;
        assert_eq!(window.set_comparison_to_text("not parsed"), Ok(false));
        assert!((window.circuit_settings[0].comparison_to - 8.0).abs() < f64::EPSILON);
        assert_eq!(window.global_comparison_controls.to, "not parsed");
    }

    #[test]
    fn selected_csv_is_loaded_and_associated_only_after_acceptance()
    -> Result<(), Box<dyn std::error::Error>> {
        let directory = temporary_test_directory("reference-data")?;
        let path = directory.join("reference.csv");
        fs::write(&path, "Circuit,Curve\r\nFilter,Out\r\n")?;
        let loaded = read_reference_csv(&path)?;
        assert_eq!(
            loaded.records,
            [
                vec!["Circuit".to_owned(), "Curve".to_owned()],
                vec!["Filter".to_owned(), "Out".to_owned()],
            ]
        );

        let mut window = Window {
            tree_items: vec!["Filter".to_owned()],
            circuit_items: vec![true],
            circuit_settings: vec![CircuitSettings::default()],
            active_circuit_settings: Some(CircuitSettings::default()),
            ..Window::default()
        };
        assert!(!window.associate_selected_reference_data(None));
        assert!(window.data_file_name.is_empty());

        assert!(window.associate_selected_reference_data(Some(loaded.clone())));
        assert_eq!(window.data_file_name, path.to_string_lossy());
        assert_eq!(window.reference_data, Some(loaded));
        assert_eq!(window.circuit_settings[0].references.len(), 1);
        assert_eq!(
            window
                .active_circuit_settings
                .as_ref()
                .map(|settings| settings.references.len()),
            Some(1)
        );

        fs::remove_file(path)?;
        fs::remove_dir(directory)?;
        Ok(())
    }

    #[test]
    fn reference_loader_stages_curve_or_existing_figure() -> Result<(), Box<dyn std::error::Error>>
    {
        let directory = temporary_test_directory("reference-display")?;
        let result_folder = directory.join("results");
        fs::create_dir_all(&result_folder)?;
        let mut window = Window {
            root_folder: directory.to_string_lossy().into_owned(),
            result_folder: result_folder.to_string_lossy().into_owned(),
            tree_items: vec!["Filter.TSC".to_owned()],
            circuit_items: vec![true],
            circuit_settings: vec![CircuitSettings {
                simulation_type: SimulationType::Transient,
                options: BTreeSet::from([CircuitOption::CornerTest]),
                ..CircuitSettings::default()
            }],
            reference_display_kind: Some(ReferenceDisplayKind::Curve),
            ..Window::default()
        };

        assert_eq!(
            window.load_selected_reference()?,
            Some(DisplayRequest::AnalysisResult {
                path: result_folder.join("Filter.corner.refresult.tr"),
                kind: AnalysisResultKind::Reference,
            })
        );

        window.reference_display_kind = Some(ReferenceDisplayKind::Figure);
        assert_eq!(
            window.load_selected_reference(),
            Err("Figure does not exist.".to_owned())
        );
        let figure = directory.join("Filter Figure.jpg");
        fs::write(&figure, [])?;
        assert_eq!(
            window.load_selected_reference()?,
            Some(DisplayRequest::Image {
                path: figure.clone(),
                title: "Reference figure - Filter".to_owned(),
            })
        );

        fs::remove_file(figure)?;
        fs::remove_dir(result_folder)?;
        fs::remove_dir(directory)?;
        Ok(())
    }

    #[test]
    fn result_loader_stages_test_result_and_each_existing_spice_image()
    -> Result<(), Box<dyn std::error::Error>> {
        let directory = temporary_test_directory("result-display")?;
        let result_folder = directory.join("results");
        fs::create_dir_all(&result_folder)?;
        let mut window = Window {
            root_folder: directory.to_string_lossy().into_owned(),
            result_folder: result_folder.to_string_lossy().into_owned(),
            tree_items: vec!["Filter".to_owned()],
            circuit_items: vec![true],
            circuit_settings: vec![CircuitSettings {
                simulation_type: SimulationType::AlternatingCurrent,
                ..CircuitSettings::default()
            }],
            result_display_kind: Some(ResultDisplayKind::TestResult),
            ..Window::default()
        };

        assert_eq!(
            window.load_selected_result()?,
            Some(DisplayRequest::AnalysisResult {
                path: result_folder.join("Filter.testresult.ac"),
                kind: AnalysisResultKind::Test,
            })
        );

        for (kind, suffix) in [
            (ResultDisplayKind::Ltspice, "-LTSpice.png"),
            (ResultDisplayKind::Pspice, "-PSpice.png"),
            (ResultDisplayKind::Simetrix, " (SIMetrix format)-graph.png"),
        ] {
            window.result_display_kind = Some(kind);
            assert_eq!(
                window.load_selected_result(),
                Err("Spice result does not exist.".to_owned())
            );
            let image = directory.join(format!("Filter{suffix}"));
            fs::write(&image, [])?;
            assert_eq!(
                window.load_selected_result()?,
                Some(DisplayRequest::Image {
                    path: image.clone(),
                    title: "Spice result - Filter".to_owned(),
                })
            );
            fs::remove_file(image)?;
        }

        window.result_display_kind = None;
        assert_eq!(window.load_selected_result()?, None);
        fs::remove_dir(result_folder)?;
        fs::remove_dir(directory)?;
        Ok(())
    }

    #[test]
    fn curve_rename_validates_selection_and_persists_one_checked_curve() {
        let selected_curve = ReferenceSetting {
            name: "Old".to_owned(),
            selected: true,
            ..ReferenceSetting::default()
        };
        let mut window = Window {
            result_folder: "results".to_owned(),
            tree_items: vec!["Filter".to_owned()],
            circuit_items: vec![true],
            circuit_settings: vec![CircuitSettings {
                simulation_type: SimulationType::AlternatingCurrent,
                references: vec![selected_curve.clone()],
                ..CircuitSettings::default()
            }],
            active_circuit_settings: Some(CircuitSettings {
                simulation_type: SimulationType::AlternatingCurrent,
                references: vec![selected_curve],
                ..CircuitSettings::default()
            }),
            ..Window::default()
        };
        let mut store = CurveStore::default();

        assert_eq!(
            window.rename_selected_reference_curve(None, &mut store),
            Ok(CurveRenameOutcome::Cancelled)
        );
        assert!(store.rename.is_none());
        assert_eq!(
            window.rename_selected_reference_curve(Some("Output"), &mut store),
            Ok(CurveRenameOutcome::Renamed)
        );
        assert_eq!(
            store.rename,
            Some((
                PathBuf::from("results").join("Filter.refresult.ac"),
                0,
                "Output".to_owned(),
            ))
        );
        assert_eq!(window.circuit_settings[0].references[0].name, "Output");
        assert_eq!(
            window
                .active_circuit_settings
                .as_ref()
                .map(|settings| settings.references[0].name.as_str()),
            Some("Output")
        );

        window.circuit_settings[0].references = vec![ReferenceSetting {
            kind: ReferenceEntryKind::Data,
            selected: true,
            ..ReferenceSetting::default()
        }];
        assert_eq!(
            window.rename_selected_reference_curve(Some("Data"), &mut store),
            Err("There is no reference curve to this circuit.".to_owned())
        );

        window.circuit_settings[0].references = vec![
            ReferenceSetting {
                selected: true,
                ..ReferenceSetting::default()
            },
            ReferenceSetting {
                selected: true,
                ..ReferenceSetting::default()
            },
        ];
        assert_eq!(
            window.rename_selected_reference_curve(Some("Many"), &mut store),
            Err("Check only one reference CURVE!".to_owned())
        );
    }

    #[test]
    fn failed_curve_store_write_preserves_the_current_curve_name() {
        let mut window = Window {
            result_folder: "results".to_owned(),
            tree_items: vec!["Filter".to_owned()],
            circuit_items: vec![true],
            circuit_settings: vec![CircuitSettings {
                references: vec![ReferenceSetting {
                    name: "Old".to_owned(),
                    selected: true,
                    ..ReferenceSetting::default()
                }],
                ..CircuitSettings::default()
            }],
            ..Window::default()
        };
        let mut store = CurveStore {
            fail: true,
            ..CurveStore::default()
        };

        assert_eq!(
            window.rename_selected_reference_curve(Some("New"), &mut store),
            Err("rename failed".to_owned())
        );
        assert_eq!(window.circuit_settings[0].references[0].name, "Old");
    }

    #[test]
    fn test_mode_handlers_store_each_typed_mode_without_starting_a_run() {
        let mut window = Window {
            tree_items: vec!["filter".to_owned()],
            circuit_items: vec![true],
            bold_tree_items: vec![false],
            circuit_settings: vec![CircuitSettings::default()],
            active_circuit_settings: Some(CircuitSettings::default()),
            ..Window::default()
        };

        assert!(window.select_save_reference_mode());
        assert_eq!(
            window.circuit_settings[0].test_mode,
            CircuitTestMode::SaveReference
        );
        assert!(window.select_run_without_comparison_mode());
        assert_eq!(
            window.circuit_settings[0].test_mode,
            CircuitTestMode::RunWithoutComparison
        );
        assert!(window.select_do_not_run_mode());
        assert_eq!(
            window.circuit_settings[0].test_mode,
            CircuitTestMode::DoNotRun
        );
        assert!(window.select_comparison_mode());
        assert_eq!(
            window.circuit_settings[0].test_mode,
            CircuitTestMode::Compare
        );
        assert_eq!(window.circuit_settings[0].references.len(), 1);
        assert_eq!(
            window.reference_control_state,
            ReferenceControlState::Disabled
        );
    }

    #[test]
    fn apply_test_mode_to_all_changes_only_circuit_modes() {
        let untouched_reference = ReferenceSetting {
            tolerance: 12.5,
            ..ReferenceSetting::default()
        };
        let mut window = Window {
            tree_items: vec!["root".to_owned(), "one".to_owned(), "two".to_owned()],
            circuit_items: vec![false, true, true],
            bold_tree_items: vec![true, false, false],
            circuit_settings: vec![
                CircuitSettings::default(),
                CircuitSettings {
                    test_mode: CircuitTestMode::Compare,
                    references: vec![untouched_reference.clone()],
                    ..CircuitSettings::default()
                },
                CircuitSettings {
                    test_mode: CircuitTestMode::SaveReference,
                    references: vec![untouched_reference.clone()],
                    ..CircuitSettings::default()
                },
            ],
            selected_tree_item: 1,
            active_circuit_settings: Some(CircuitSettings {
                test_mode: CircuitTestMode::RunWithoutComparison,
                references: vec![untouched_reference.clone()],
                ..CircuitSettings::default()
            }),
            ..Window::default()
        };

        assert_eq!(window.apply_test_mode_to_all_circuits(), 2);
        assert_eq!(
            window.circuit_settings[1].test_mode,
            CircuitTestMode::RunWithoutComparison
        );
        assert_eq!(
            window.circuit_settings[2].test_mode,
            CircuitTestMode::RunWithoutComparison
        );
        assert_eq!(
            window.circuit_settings[1].references,
            std::slice::from_ref(&untouched_reference)
        );
        assert_eq!(
            window.circuit_settings[2].references,
            std::slice::from_ref(&untouched_reference)
        );
    }

    #[test]
    fn run_scope_handlers_clear_and_set_only_current_circuit_markers() {
        let mut window = Window {
            tree_items: vec!["one".to_owned(), "group".to_owned(), "two".to_owned()],
            circuit_items: vec![true, false, true],
            bold_tree_items: vec![false, true, false],
            circuit_settings: vec![
                CircuitSettings {
                    run_scope: RunScope::CurrentCircuit,
                    ..CircuitSettings::default()
                },
                CircuitSettings::default(),
                CircuitSettings {
                    run_scope: RunScope::CurrentCircuit,
                    ..CircuitSettings::default()
                },
            ],
            selected_tree_item: 0,
            active_circuit_settings: Some(CircuitSettings {
                run_scope: RunScope::CurrentCircuit,
                ..CircuitSettings::default()
            }),
            ..Window::default()
        };

        assert!(window.select_run_all_circuits());
        assert_eq!(window.circuit_settings[0].run_scope, RunScope::AllCircuits);
        assert_eq!(
            window.circuit_settings[2].run_scope,
            RunScope::CurrentCircuit
        );

        assert!(window.select_run_current_circuit());
        assert_eq!(
            window.circuit_settings[0].run_scope,
            RunScope::CurrentCircuit
        );
        assert_eq!(window.circuit_settings[2].run_scope, RunScope::AllCircuits);
    }

    #[test]
    fn remove_reference_data_clears_association_and_rows_without_touching_disk() {
        let mut window = Window {
            data_file_name: "reference.csv".to_owned(),
            tree_items: vec!["one".to_owned(), "two".to_owned()],
            circuit_items: vec![true, true],
            bold_tree_items: vec![false, false],
            circuit_settings: vec![
                CircuitSettings {
                    references: vec![ReferenceSetting::default()],
                    ..CircuitSettings::default()
                },
                CircuitSettings {
                    references: vec![ReferenceSetting::default()],
                    ..CircuitSettings::default()
                },
            ],
            active_circuit_settings: Some(CircuitSettings {
                references: vec![ReferenceSetting::default()],
                ..CircuitSettings::default()
            }),
            ..Window::default()
        };

        assert_eq!(window.remove_reference_data_file(), 2);
        assert!(window.data_file_name.is_empty());
        assert!(
            window
                .circuit_settings
                .iter()
                .all(|settings| settings.references.is_empty())
        );
        assert!(
            window
                .active_circuit_settings
                .as_ref()
                .unwrap()
                .references
                .is_empty()
        );
    }

    #[test]
    fn check_and_uncheck_all_apply_only_the_chosen_reference_block() {
        let mut window = Window {
            tree_items: vec!["filter".to_owned()],
            circuit_items: vec![true],
            bold_tree_items: vec![false],
            circuit_settings: vec![CircuitSettings {
                references: vec![ReferenceSetting::default(), ReferenceSetting::default()],
                ..CircuitSettings::default()
            }],
            active_circuit_settings: Some(CircuitSettings::default()),
            ..Window::default()
        };

        assert_eq!(
            window.select_all_references(ReferenceBlock::ReferenceName),
            2
        );
        assert!(
            window.circuit_settings[0]
                .references
                .iter()
                .all(|reference| reference.selected && !reference.compare_time)
        );

        assert_eq!(window.select_all_references(ReferenceBlock::LocalRange), 2);
        assert!(
            window.circuit_settings[0]
                .references
                .iter()
                .all(|reference| reference.compare_time)
        );

        assert_eq!(
            window.deselect_all_references(ReferenceBlock::ReferenceName),
            2
        );
        assert!(
            window.circuit_settings[0]
                .references
                .iter()
                .all(|reference| !reference.selected && reference.compare_time)
        );
    }

    #[test]
    fn bulk_time_and_tolerance_edits_parse_once_and_update_every_local_row() {
        let mut window = Window {
            tree_items: vec!["filter".to_owned()],
            circuit_items: vec![true],
            bold_tree_items: vec![false],
            circuit_settings: vec![CircuitSettings {
                references: vec![ReferenceSetting::default(), ReferenceSetting::default()],
                ..CircuitSettings::default()
            }],
            active_circuit_settings: Some(CircuitSettings::default()),
            ..Window::default()
        };

        assert_eq!(
            window.apply_time_to_all_references(TimeField::Start, "2.5"),
            Ok(2)
        );
        assert_eq!(
            window.apply_time_to_all_references(TimeField::End, "8"),
            Ok(2)
        );
        assert_eq!(window.apply_tolerance_to_all_references("12.5"), Ok(2));
        assert!(
            window.circuit_settings[0]
                .references
                .iter()
                .all(|reference| {
                    (reference.time_from - 2.5).abs() < f64::EPSILON
                        && (reference.time_to - 8.0).abs() < f64::EPSILON
                        && (reference.tolerance - 12.5).abs() < f64::EPSILON
                })
        );
        assert!(
            window
                .apply_time_to_all_references(TimeField::Start, "invalid")
                .is_err()
        );
    }

    #[test]
    fn default_local_settings_restore_every_recovered_row_default() {
        let changed = ReferenceSetting {
            selected: true,
            include_name: true,
            compare_time: true,
            time_from: 4.0,
            time_to: 9.0,
            tolerance: 17.0,
            ..ReferenceSetting::default()
        };
        let mut window = Window {
            tree_items: vec!["filter".to_owned()],
            circuit_items: vec![true],
            bold_tree_items: vec![false],
            circuit_settings: vec![CircuitSettings {
                references: vec![changed.clone(), changed],
                ..CircuitSettings::default()
            }],
            active_circuit_settings: Some(CircuitSettings::default()),
            ..Window::default()
        };

        assert_eq!(window.reset_current_local_settings(), 2);
        assert_eq!(
            window.circuit_settings[0].references,
            [ReferenceSetting::default(), ReferenceSetting::default()]
        );
    }

    #[test]
    fn setup_corner_test_constructs_and_discards_the_current_circuit_path() {
        let window = Window {
            root_folder: "circuits".to_owned(),
            tree_items: vec!["nested/filter".to_owned()],
            circuit_items: vec![true],
            bold_tree_items: vec![false],
            circuit_settings: vec![CircuitSettings::default()],
            ..Window::default()
        };

        assert_eq!(
            window.construct_corner_test_path(),
            Some(PathBuf::from("circuits").join("nested/filter.TSC"))
        );
        assert!(window.pending_circuit_to_open.is_none());
    }

    #[test]
    fn main_scroll_maps_the_full_content_range_to_a_negative_panel_offset() {
        let mut window = Window::default();

        assert!(
            (window.apply_main_scroll_position(5, 1_100.0, 800.0, 15) + 100.0).abs() < f64::EPSILON
        );
        assert!((window.apply_main_scroll_position(5, 1_100.0, 800.0, 0)).abs() < f64::EPSILON);
    }

    #[test]
    fn local_reference_wheel_uses_recovered_fifteen_unit_steps() {
        let mut window = Window::default();

        assert!((window.apply_reference_mouse_wheel(30) + 2.0).abs() < f64::EPSILON);
        window.reference_scroll_exit();
        assert!((window.reference_scroll_position + 2.0).abs() < f64::EPSILON);
    }

    #[test]
    fn reference_filter_commits_and_updates_all_matching_rows() {
        let active = CircuitSettings {
            references: vec![
                ReferenceSetting {
                    name: "zero".to_owned(),
                    selection_mode: ReferenceSelectionMode::ModeZero,
                    ..ReferenceSetting::default()
                },
                ReferenceSetting {
                    name: "one".to_owned(),
                    selection_mode: ReferenceSelectionMode::ModeOne,
                    ..ReferenceSetting::default()
                },
                ReferenceSetting {
                    name: "two".to_owned(),
                    selection_mode: ReferenceSelectionMode::ModeTwo,
                    ..ReferenceSetting::default()
                },
            ],
            ..CircuitSettings::default()
        };
        let mut window = Window {
            tree_items: vec!["filter".to_owned()],
            circuit_items: vec![true],
            circuit_settings: vec![CircuitSettings::default()],
            active_circuit_settings: Some(active),
            ..Window::default()
        };

        assert_eq!(
            window.apply_reference_visibility_filter(ReferenceVisibilityFilter::ModeOne),
            1
        );
        assert_eq!(
            window.circuit_settings[0]
                .references
                .iter()
                .map(|reference| reference.visibility)
                .collect::<Vec<_>>(),
            [
                ReferenceVisibility::Hidden,
                ReferenceVisibility::Visible,
                ReferenceVisibility::Hidden,
            ]
        );
        assert_eq!(
            window
                .active_circuit_settings
                .as_ref()
                .map(|settings| settings.references.len()),
            Some(3)
        );
    }
}
