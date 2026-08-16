use iced::widget::{
    button, column, container, mouse_area, pick_list, radio, row, scrollable, text, text_input,
};
use iced::{Alignment, Element, Length};
use tiara_core::numeric_format::{DecimalStepDirection, format_display_value, step_decimal_value};

use crate::shared::window_shell;

pub const TITLE: &str = "Signal Analyzer";
pub const SCREENSHOT: &str = "screenshots/Signal_Analyzer_Window.png";
pub const FORM_RESOURCE: &str = "SignalAnalyzerWin";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("0138a340");
const STATUS: &str = "Signal measurement";
const CHANNEL_OPTIONS: [&str; 17] = [
    "In", "#1", "#2", "#3", "#4", "#5", "#6", "#7", "#8", "#9", "#10", "#11", "#12", "#13", "#14",
    "#15", "#16",
];
const MEASUREMENT_MODE_OPTIONS: [&str; 1] = ["Swept-Sine"];
const TRACE_TYPE_OPTIONS: [&str; 6] =
    ["dB Magnitude", "Phase", "Bode", "Nyquist", "Polar", "Smith"];
const PROCESS_OPTIONS: [&str; 2] = ["Hide distortion", "THD"];
const TRIGGER_SOURCE_OPTIONS: [&str; 2] = ["Single", "Auto"];
const MEASUREMENT_WINDOW_OPTIONS: [&str; 3] = ["Internal", "External", "Input"];
const CLOSE_WARNING: &str = "Please close all measurement\r\ninstruments before exiting TINA.";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalyzerKind {
    Signal,
    Spectrum,
    Network,
}

impl AnalyzerKind {
    #[must_use]
    pub const fn from_mode(mode: u8) -> Self {
        match mode {
            4 => Self::Signal,
            15 => Self::Spectrum,
            _ => Self::Network,
        }
    }

    #[must_use]
    pub const fn title(self) -> &'static str {
        match self {
            Self::Signal => "Signal Analyzer",
            Self::Spectrum => "Spectrum Analyzer",
            Self::Network => "Network Analyzer",
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseDisposition {
    KeepOpen,
    Free,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DisplayRangeError {
    LowMustBeBelowHigh,
    HighMustBeAboveLow,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InputCommitResult {
    Ignored,
    Committed,
    Invalid,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorMoveDirection {
    Left,
    Right,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum LevelAction {
    Decrease,
    Commit,
    Increase,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SurfacePointerAction {
    DoubleClick,
    Down,
    Move,
    Up,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ResizeRequest {
    pub width: i32,
    pub height: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ResizePolicy {
    pub current_width: i32,
    pub reference_width: i32,
    pub layout_top: i32,
    pub plot_top: i32,
    pub preserve_aspect: bool,
}

impl Default for ResizePolicy {
    fn default() -> Self {
        Self {
            current_width: 800,
            reference_width: 800,
            layout_top: 600,
            plot_top: 0,
            preserve_aspect: true,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ResizeDecision {
    pub allowed: bool,
    pub request: ResizeRequest,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Coupling {
    Dc,
    Ac,
}

impl Coupling {
    #[must_use]
    pub const fn backend_mode(self) -> u8 {
        match self {
            Self::Dc => 0,
            Self::Ac => 1,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AmplitudeRange {
    Automatic,
    Manual,
}

impl AmplitudeRange {
    #[must_use]
    pub const fn backend_mode(self) -> u8 {
        match self {
            Self::Automatic => 0,
            Self::Manual => 1,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TriggerSlopeState {
    ButtonUp,
    ButtonDown,
}

impl TriggerSlopeState {
    #[must_use]
    pub const fn backend_value(self) -> u8 {
        match self {
            Self::ButtonUp => 0,
            Self::ButtonDown => 1,
        }
    }

    #[must_use]
    const fn toggled(self) -> Self {
        match self {
            Self::ButtonUp => Self::ButtonDown,
            Self::ButtonDown => Self::ButtonUp,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ControlPanel {
    Display,
    Trigger,
    ReferenceWindow,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ToggleState {
    Off,
    On,
}

impl ToggleState {
    #[must_use]
    pub const fn is_on(self) -> bool {
        matches!(self, Self::On)
    }

    #[must_use]
    pub const fn toggled(self) -> Self {
        match self {
            Self::Off => Self::On,
            Self::On => Self::Off,
        }
    }

    #[must_use]
    pub const fn from_bool(value: bool) -> Self {
        if value { Self::On } else { Self::Off }
    }
}

pub const CURVE_COMMAND_ID: u16 = 0x053b;
pub const CURSOR_COMMAND_ID: u16 = 0x053a;
pub const START_MEASUREMENT_COMMAND_ID: u16 = 0x0538;
pub const READ_DATA_FAILED: &str = "Signal Analyzer: Read Data Failed!";

#[derive(Debug, Clone, PartialEq, Default)]
pub struct CoordinateData {
    pub caption: String,
    pub high: f64,
    pub low: f64,
}

impl CoordinateData {
    #[must_use]
    pub fn new(caption: impl Into<String>, high: f64, low: f64) -> Self {
        Self {
            caption: caption.into(),
            high,
            low,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CurveDirection {
    Previous,
    Next,
}

impl CurveDirection {
    #[must_use]
    pub const fn command_direction(self) -> u8 {
        match self {
            Self::Previous => 1,
            Self::Next => 0,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorId {
    A,
    B,
}

impl CursorId {
    const fn index(self) -> usize {
        match self {
            Self::A => 0,
            Self::B => 1,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FrequencyRepresentation {
    StartStop,
    CenterSpan,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FrequencyScale {
    Linear,
    Logarithmic,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ChannelTraceState {
    Detached,
    Attached,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AmplitudeUnit {
    Unit0,
    Unit1,
}

impl AmplitudeUnit {
    #[must_use]
    pub const fn next(self) -> Self {
        match self {
            Self::Unit0 => Self::Unit1,
            Self::Unit1 => Self::Unit0,
        }
    }

    #[must_use]
    pub const fn index(self) -> u8 {
        match self {
            Self::Unit0 => 0,
            Self::Unit1 => 1,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TriggerEditorKind {
    Source,
    Mode,
}

#[derive(Debug, Clone, Copy, PartialEq, Default)]
pub struct TriggerEditorData {
    pub primary: f64,
    pub secondary: i32,
}

impl TriggerEditorData {
    #[must_use]
    pub const fn new(primary: f64, secondary: i32) -> Self {
        Self { primary, secondary }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ReferenceUnit {
    Unit0,
    Unit1,
    Source,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AcquisitionRoute {
    NotReady,
    Remote,
    Local,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MeasurementState {
    Idle,
    Active,
    StopRequested,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MeasurementOutcome {
    Completed,
    ReadFailed,
}

impl ReferenceUnit {
    #[must_use]
    pub const fn next(self) -> Self {
        match self {
            Self::Unit0 => Self::Unit1,
            Self::Unit1 => Self::Source,
            Self::Source => Self::Unit0,
        }
    }

    #[must_use]
    pub const fn index(self) -> u8 {
        match self {
            Self::Unit0 => 0,
            Self::Unit1 => 1,
            Self::Source => 2,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Default)]
pub struct FrequencyPair {
    pub first: f64,
    pub second: f64,
}

impl FrequencyPair {
    #[must_use]
    pub const fn new(first: f64, second: f64) -> Self {
        Self { first, second }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct TraceDefinition {
    pub caption: String,
    pub code: u8,
    pub low: f64,
    pub high: f64,
    pub alternate: Option<FrequencyPair>,
}

impl TraceDefinition {
    #[must_use]
    pub fn new(caption: impl Into<String>, code: u8, low: f64, high: f64) -> Self {
        Self {
            caption: caption.into(),
            code,
            low,
            high,
            alternate: None,
        }
    }

    #[must_use]
    pub const fn with_alternate(mut self, low: f64, high: f64) -> Self {
        self.alternate = Some(FrequencyPair::new(low, high));
        self
    }
}

#[derive(Debug, Clone, PartialEq, Default)]
struct DisplayCoordinateState {
    base: CoordinateData,
    alternate: Option<CoordinateData>,
    displayed: CoordinateData,
    alternate_selected: bool,
}

#[derive(Debug, Clone, PartialEq)]
struct ChannelState {
    enabled: bool,
    traces: ChannelTraceState,
    coupling: Coupling,
    amplitude_ranges: Vec<f64>,
    amplitude_range_index: usize,
}

impl Default for ChannelState {
    fn default() -> Self {
        Self {
            enabled: false,
            traces: ChannelTraceState::Detached,
            coupling: Coupling::Dc,
            amplitude_ranges: vec![1.0],
            amplitude_range_index: 0,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub enum BackendCommand {
    SelectChannel {
        channel_index: usize,
    },
    Coupling(Coupling),
    AmplitudeRange(AmplitudeRange),
    AmplitudeRangeIndex {
        channel_index: usize,
        range_index: usize,
        value: f64,
    },
    TriggerSlope(TriggerSlopeState),
    TriggerSource {
        index: usize,
        alternate_backend: bool,
    },
    TriggerLevel(LevelAction),
    CurveNavigation {
        command: u16,
        direction: CurveDirection,
    },
    CursorToggle {
        command: u16,
        cursor: Option<CursorId>,
        enabled: bool,
    },
    CursorMoveStart {
        direction: CursorMoveDirection,
        repeat_ms: u64,
    },
    CursorMoveStop,
    FrequencyScale(FrequencyScale),
    FrequencyWindow {
        start: f64,
        stop: f64,
    },
    Resolution(i32),
    MeasurementMode(usize),
    TraceType {
        index: usize,
        code: u8,
    },
    ProcessSelection(Option<usize>),
    DisplayRange {
        low: f64,
        high: f64,
        alternate: bool,
    },
    ChannelEnabled {
        channel_index: usize,
        enabled: bool,
    },
    AmplitudeConversion {
        channel_index: Option<usize>,
        unit: AmplitudeUnit,
    },
    TriggerEditor(TriggerEditorKind),
    ReferenceUnit {
        unit: ReferenceUnit,
        source_reference: f64,
        analyzer_mode: u8,
    },
    MeasurementWindow(usize),
    ReferenceLevel(LevelAction),
    StartMeasurement {
        command: u16,
        route: AcquisitionRoute,
    },
    StopMeasurement,
    LoadData,
    PublishCurve {
        curve_id: String,
    },
    ShowSourceControl {
        analyzer_mode: u8,
    },
    RefreshShownLayout,
    ResizeLayout(ResizeRequest),
    SurfacePointer(SurfacePointerAction),
    SaveSettings,
    DestroyResources,
}

#[derive(Debug)]
pub struct Window {
    analyzer_kind: AnalyzerKind,
    values: Vec<String>,
    selections: Vec<Option<&'static str>>,
    coupling: Option<Coupling>,
    amplitude_range: Option<AmplitudeRange>,
    trigger_slope: TriggerSlopeState,
    control_panel: ControlPanel,
    selected_channel_flag_0x38: ToggleState,
    selected_channel_index: Option<usize>,
    channel_button_state: ToggleState,
    channels: Vec<ChannelState>,
    display_coordinates: DisplayCoordinateState,
    curve_labels: Vec<String>,
    selected_curve_index: Option<usize>,
    selected_cursor: Option<CursorId>,
    cursor_enabled: [bool; 2],
    cursor_button_state: ToggleState,
    frequency_representation: FrequencyRepresentation,
    start_stop_frequencies: FrequencyPair,
    center_span_frequencies: FrequencyPair,
    frequency_first_text: String,
    frequency_second_text: String,
    frequency_scale: FrequencyScale,
    resolution: i32,
    resolution_text: String,
    plot_refresh_generation: u64,
    surface_paint_generation: u64,
    measurement_rebuild_generation: u64,
    amplitude_unit: AmplitudeUnit,
    amplitude_display_value: f64,
    trigger_editor_kind: TriggerEditorKind,
    trigger_editor_data: TriggerEditorData,
    trigger_mode_data: TriggerEditorData,
    trigger_source_data: TriggerEditorData,
    trigger_source_index: Option<usize>,
    trigger_source_uses_alternate_backend: ToggleState,
    trigger_level_text: String,
    reference_unit: ReferenceUnit,
    reference_source_value: f64,
    reference_display_value: f64,
    analyzer_mode: u8,
    reference_power_mode: ToggleState,
    reference_update_generation: u64,
    measurement_window_index: Option<usize>,
    reference_level_text: String,
    acquisition_route: AcquisitionRoute,
    measurement_state: MeasurementState,
    stop_requested: ToggleState,
    progress_visible: ToggleState,
    measurement_controls_enabled: ToggleState,
    source_acquisition_active: ToggleState,
    source_stop_clear_allowed: ToggleState,
    last_measurement_error: Option<&'static str>,
    analyzer_type: u8,
    current_curve: Option<String>,
    analysis_workspace_curve: Option<String>,
    memory_curve_writer_count: u8,
    data_load_request_generation: u64,
    source_window_available: ToggleState,
    source_window_visible: ToggleState,
    source_window_selected_mode: Option<u8>,
    measurement_mode_index: Option<usize>,
    trace_type_index: Option<usize>,
    trace_definitions: Vec<TraceDefinition>,
    display_low_text: String,
    display_high_text: String,
    last_range_error: Option<DisplayRangeError>,
    process_selection: Option<usize>,
    process_label_enabled: bool,
    process_label: String,
    process_value: f64,
    process_refresh_generation: u64,
    cursor_move_direction: Option<CursorMoveDirection>,
    cursor_move_pressed: bool,
    cursor_move_generation: u64,
    cursor_release_generation: u64,
    settings_save_generation: u64,
    close_disposition: CloseDisposition,
    close_warning: Option<&'static str>,
    first_show_pending: ToggleState,
    shown: ToggleState,
    source_group_visible: ToggleState,
    reference_group_visible: ToggleState,
    alternate_group_visible: ToggleState,
    resize_policy: ResizePolicy,
    resize_request: ResizeRequest,
    resize_generation: u64,
    surface_pointer_action: Option<SurfacePointerAction>,
    surface_pointer_generation: u64,
    destroyed: bool,
    backend_commands: Vec<BackendCommand>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            analyzer_kind: AnalyzerKind::Signal,
            values: vec![String::new(); 4],
            selections: vec![None; 4],
            coupling: None,
            amplitude_range: None,
            trigger_slope: TriggerSlopeState::ButtonUp,
            control_panel: ControlPanel::Display,
            selected_channel_flag_0x38: ToggleState::Off,
            selected_channel_index: None,
            channel_button_state: ToggleState::Off,
            channels: vec![ChannelState::default(); CHANNEL_OPTIONS.len()],
            display_coordinates: DisplayCoordinateState::default(),
            curve_labels: Vec::new(),
            selected_curve_index: None,
            selected_cursor: None,
            cursor_enabled: [false; 2],
            cursor_button_state: ToggleState::Off,
            frequency_representation: FrequencyRepresentation::StartStop,
            start_stop_frequencies: FrequencyPair::default(),
            center_span_frequencies: FrequencyPair::default(),
            frequency_first_text: String::from("0"),
            frequency_second_text: String::from("0"),
            frequency_scale: FrequencyScale::Linear,
            resolution: 2,
            resolution_text: String::from("2"),
            plot_refresh_generation: 0,
            surface_paint_generation: 0,
            measurement_rebuild_generation: 0,
            amplitude_unit: AmplitudeUnit::Unit0,
            amplitude_display_value: 0.0,
            trigger_editor_kind: TriggerEditorKind::Source,
            trigger_editor_data: TriggerEditorData::default(),
            trigger_mode_data: TriggerEditorData::default(),
            trigger_source_data: TriggerEditorData::default(),
            trigger_source_index: None,
            trigger_source_uses_alternate_backend: ToggleState::Off,
            trigger_level_text: String::from("0"),
            reference_unit: ReferenceUnit::Unit0,
            reference_source_value: 0.0,
            reference_display_value: 0.0,
            analyzer_mode: 0,
            reference_power_mode: ToggleState::Off,
            reference_update_generation: 0,
            measurement_window_index: None,
            reference_level_text: String::from("0"),
            acquisition_route: AcquisitionRoute::Local,
            measurement_state: MeasurementState::Idle,
            stop_requested: ToggleState::Off,
            progress_visible: ToggleState::Off,
            measurement_controls_enabled: ToggleState::On,
            source_acquisition_active: ToggleState::Off,
            source_stop_clear_allowed: ToggleState::On,
            last_measurement_error: None,
            analyzer_type: 0,
            current_curve: None,
            analysis_workspace_curve: None,
            memory_curve_writer_count: 0,
            data_load_request_generation: 0,
            source_window_available: ToggleState::Off,
            source_window_visible: ToggleState::Off,
            source_window_selected_mode: None,
            measurement_mode_index: Some(0),
            trace_type_index: None,
            trace_definitions: Vec::new(),
            display_low_text: String::from("0"),
            display_high_text: String::from("0"),
            last_range_error: None,
            process_selection: None,
            process_label_enabled: false,
            process_label: String::new(),
            process_value: 0.0,
            process_refresh_generation: 0,
            cursor_move_direction: None,
            cursor_move_pressed: false,
            cursor_move_generation: 0,
            cursor_release_generation: 0,
            settings_save_generation: 0,
            close_disposition: CloseDisposition::KeepOpen,
            close_warning: None,
            first_show_pending: ToggleState::On,
            shown: ToggleState::Off,
            source_group_visible: ToggleState::On,
            reference_group_visible: ToggleState::Off,
            alternate_group_visible: ToggleState::On,
            resize_policy: ResizePolicy::default(),
            resize_request: ResizeRequest {
                width: 800,
                height: 600,
            },
            resize_generation: 0,
            surface_pointer_action: None,
            surface_pointer_generation: 0,
            destroyed: false,
            backend_commands: Vec::new(),
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
    OptionSelected(usize, &'static str),
    SelectCoupling(Coupling),
    SelectAmplitudeRange(AmplitudeRange),
    AdjustAmplitudeRange(DecimalStepDirection),
    ToggleTriggerSlope,
    ShowControlPanel(ControlPanel),
    ToggleDisplayCoordinates,
    SelectPreviousCurve,
    SelectNextCurve,
    SelectCursor(CursorId),
    ToggleSelectedCursor,
    ToggleFrequencyRepresentation,
    ToggleFrequencyScale,
    AdjustFirstFrequency(DecimalStepDirection),
    AdjustSecondFrequency(DecimalStepDirection),
    AdjustResolution(DecimalStepDirection),
    SelectMeasurementMode(usize),
    SelectTraceType(usize),
    AdjustDisplayLow(DecimalStepDirection),
    AdjustDisplayHigh(DecimalStepDirection),
    FrequencyFirstTextChanged(String),
    FrequencySecondTextChanged(String),
    ResolutionTextChanged(String),
    DisplayLowTextChanged(String),
    DisplayHighTextChanged(String),
    CommitFirstFrequency,
    CommitSecondFrequency,
    CommitResolution,
    CommitDisplayLow,
    CommitDisplayHigh,
    SelectProcess(Option<usize>),
    CursorMovePressed(CursorMoveDirection),
    CursorMoveReleased(CursorMoveDirection),
    PaintSurface,
    Close,
    Destroy,
    ToggleSelectedChannel,
    CycleAmplitudeUnit,
    AmplitudeConverted(f64),
    SelectTriggerEditor(TriggerEditorKind),
    SelectTriggerSource(usize),
    AdjustTriggerLevel(LevelAction),
    TriggerLevelTextChanged(String),
    CommitTriggerLevel,
    CycleReferenceUnit,
    ReferenceConverted(f64),
    SelectMeasurementWindow(usize),
    AdjustReferenceLevel(LevelAction),
    ReferenceLevelTextChanged(String),
    CommitReferenceLevel,
    Show,
    Hide,
    Resize(ResizeRequest, i32),
    SurfaceDoubleClick,
    SurfaceMouseDown,
    SurfaceMouseMove,
    SurfaceMouseUp,
    StartMeasurement,
    StopMeasurement,
    MeasurementFinished(MeasurementOutcome),
    LoadData,
    SaveData,
    OpenSourceControl,
    NoOp,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::TextChanged(index, value) => {
                if let Some(field) = self.values.get_mut(index) {
                    *field = value;
                }
            }
            Message::OptionSelected(index, value) => self.select_option(index, value),
            Message::SelectCoupling(Coupling::Dc) => self.select_dc_coupling(),
            Message::SelectCoupling(Coupling::Ac) => self.select_ac_coupling(),
            Message::SelectAmplitudeRange(AmplitudeRange::Automatic) => {
                self.select_automatic_amplitude_range();
            }
            Message::SelectAmplitudeRange(AmplitudeRange::Manual) => {
                self.select_manual_amplitude_range();
            }
            Message::AdjustAmplitudeRange(direction) => match direction {
                DecimalStepDirection::Decrease => self.decrease_amplitude_range(),
                DecimalStepDirection::Increase => self.increase_amplitude_range(),
            },
            Message::ToggleTriggerSlope => {
                self.trigger_slope = self.trigger_slope.toggled();
                self.apply_trigger_slope_button();
            }
            Message::ShowControlPanel(ControlPanel::Display) => {
                self.show_display_control_panel();
            }
            Message::ShowControlPanel(ControlPanel::Trigger) => {
                self.show_trigger_control_panel();
            }
            Message::ShowControlPanel(ControlPanel::ReferenceWindow) => {
                self.show_reference_window_panel();
            }
            Message::ToggleDisplayCoordinates => {
                self.display_coordinates.alternate_selected =
                    !self.display_coordinates.alternate_selected;
                self.apply_display_coordinate_button();
            }
            Message::SelectPreviousCurve => self.select_previous_curve(),
            Message::SelectNextCurve => self.select_next_curve(),
            Message::SelectCursor(CursorId::A) => self.select_cursor_a(),
            Message::SelectCursor(CursorId::B) => self.select_cursor_b(),
            Message::ToggleSelectedCursor => {
                self.cursor_button_state = self.cursor_button_state.toggled();
                self.toggle_selected_cursor();
            }
            Message::ToggleFrequencyRepresentation => {
                let button_down =
                    self.frequency_representation == FrequencyRepresentation::StartStop;
                self.apply_frequency_mode_button(button_down);
            }
            Message::ToggleFrequencyScale => {
                let button_down = self.frequency_scale == FrequencyScale::Linear;
                self.apply_frequency_scale_button(button_down);
            }
            remaining => self.update_secondary(remaining),
        }
    }

    fn update_secondary(&mut self, message: Message) {
        match message {
            Message::AdjustFirstFrequency(direction) => match direction {
                DecimalStepDirection::Decrease => self.decrease_first_frequency(),
                DecimalStepDirection::Increase => self.increase_first_frequency(),
            },
            Message::AdjustSecondFrequency(direction) => match direction {
                DecimalStepDirection::Decrease => self.decrease_second_frequency(),
                DecimalStepDirection::Increase => self.increase_second_frequency(),
            },
            Message::AdjustResolution(direction) => match direction {
                DecimalStepDirection::Decrease => self.decrease_resolution(),
                DecimalStepDirection::Increase => self.increase_resolution(),
            },
            Message::SelectMeasurementMode(index) => self.select_measurement_mode(index),
            Message::SelectTraceType(index) => self.select_trace_type(index),
            Message::AdjustDisplayLow(direction) => match direction {
                DecimalStepDirection::Decrease => self.decrease_display_low(),
                DecimalStepDirection::Increase => self.increase_display_low(),
            },
            Message::AdjustDisplayHigh(direction) => match direction {
                DecimalStepDirection::Decrease => self.decrease_display_high(),
                DecimalStepDirection::Increase => self.increase_display_high(),
            },
            Message::FrequencyFirstTextChanged(value) => self.frequency_first_text = value,
            Message::FrequencySecondTextChanged(value) => self.frequency_second_text = value,
            Message::ResolutionTextChanged(value) => self.resolution_text = value,
            Message::DisplayLowTextChanged(value) => self.display_low_text = value,
            Message::DisplayHighTextChanged(value) => self.display_high_text = value,
            Message::CommitFirstFrequency => {
                let _ = self.commit_first_frequency_on_exit();
            }
            Message::CommitSecondFrequency => {
                let _ = self.commit_second_frequency_on_exit();
            }
            Message::CommitResolution => {
                let _ = self.commit_resolution_on_exit();
            }
            Message::CommitDisplayLow => {
                let _ = self.commit_display_low_on_exit();
            }
            Message::CommitDisplayHigh => {
                let _ = self.commit_display_high_on_exit();
            }
            Message::SelectProcess(index) => self.select_process(index),
            Message::CursorMovePressed(direction) => self.press_cursor_move(direction),
            Message::CursorMoveReleased(direction) => self.release_cursor_move(direction),
            Message::PaintSurface => self.paint_surface(),
            Message::Close => self.close_form(),
            Message::Destroy => self.destroy_form(),
            Message::ToggleSelectedChannel => {
                self.channel_button_state = self.channel_button_state.toggled();
                self.apply_channel_on_button();
            }
            Message::CycleAmplitudeUnit => self.cycle_amplitude_unit(),
            Message::AmplitudeConverted(value) => self.apply_amplitude_conversion(value),
            Message::SelectTriggerEditor(TriggerEditorKind::Mode) => {
                self.select_trigger_mode_data(true);
            }
            Message::SelectTriggerEditor(TriggerEditorKind::Source) => {
                self.select_trigger_source_data(true);
            }
            Message::SelectTriggerSource(index) => self.select_trigger_source(index),
            Message::AdjustTriggerLevel(action) => self.adjust_trigger_level(action),
            Message::TriggerLevelTextChanged(value) => self.trigger_level_text = value,
            Message::CommitTriggerLevel => {
                let _ = self.commit_trigger_level_on_exit();
            }
            Message::CycleReferenceUnit => self.cycle_reference_unit(),
            Message::ReferenceConverted(value) => self.apply_reference_conversion(value),
            Message::SelectMeasurementWindow(index) => self.select_measurement_window(index),
            Message::AdjustReferenceLevel(action) => self.adjust_reference_level(action),
            Message::ReferenceLevelTextChanged(value) => self.reference_level_text = value,
            Message::CommitReferenceLevel => {
                let _ = self.commit_reference_level_on_exit();
            }
            Message::StartMeasurement => self.start_measurement(),
            Message::StopMeasurement => self.request_measurement_stop(),
            Message::MeasurementFinished(outcome) => self.finish_measurement(outcome),
            Message::LoadData => self.dispatch_data_load(),
            Message::SaveData => self.publish_current_curve(),
            Message::OpenSourceControl => self.open_source_control(),
            Message::NoOp => {}
            remaining => self.update_window_events(&remaining),
        }
    }

    fn update_window_events(&mut self, message: &Message) {
        match message {
            Message::Show => self.show_form(),
            Message::Hide => self.hide_form(),
            Message::Resize(request, work_area_height) => {
                let decision = self.can_resize(*request, *work_area_height);
                if decision.allowed {
                    self.resize_form(decision.request);
                }
            }
            Message::SurfaceDoubleClick => self.surface_double_click(),
            Message::SurfaceMouseDown => self.surface_mouse_down(),
            Message::SurfaceMouseMove => self.surface_mouse_move(),
            Message::SurfaceMouseUp => self.surface_mouse_up(),
            _ => unreachable!("primary message reached the window-event update path"),
        }
    }

    fn select_option(&mut self, index: usize, value: &'static str) {
        if let Some(selection) = self.selections.get_mut(index) {
            *selection = Some(value);
        }
        if index == 0
            && let Some(channel_index) = CHANNEL_OPTIONS
                .iter()
                .position(|candidate| *candidate == value)
        {
            self.select_channel(channel_index);
        }
    }

    /// Ports Ghidra function `FUN_0138a340` at `0x0138A340`.
    #[must_use]
    pub fn create_form(analyzer_mode: u8) -> Self {
        let mut window = Self {
            analyzer_kind: AnalyzerKind::from_mode(analyzer_mode),
            analyzer_mode,
            trace_definitions: default_trace_definitions(),
            ..Self::default()
        };
        let initial_trace = match window.analyzer_kind {
            AnalyzerKind::Signal => 2,
            AnalyzerKind::Spectrum => 1,
            AnalyzerKind::Network => 9,
        };
        window.select_trace_type(initial_trace);
        window.backend_commands.clear();
        window
    }

    /// Ports Ghidra function `FUN_0138afa0` at `0x0138AFA0`.
    pub fn close_form(&mut self) {
        self.settings_save_generation = self.settings_save_generation.saturating_add(1);
        self.close_disposition = CloseDisposition::Free;
        self.backend_commands.push(BackendCommand::SaveSettings);
    }

    /// Ports Ghidra function `FUN_0138cc20` at `0x0138CC20`.
    #[must_use]
    pub fn query_close(
        &mut self,
        application_exit_active: bool,
        instrument_close_blocked: bool,
    ) -> bool {
        let can_close = !application_exit_active || !instrument_close_blocked;
        self.close_warning = (!can_close).then_some(CLOSE_WARNING);
        can_close
    }

    /// Ports Ghidra function `FUN_0138d300` at `0x0138D300`.
    pub fn show_form(&mut self) {
        self.shown = ToggleState::On;
        if self.first_show_pending.is_on() {
            match self.analyzer_mode {
                4 | 15 => {
                    self.source_group_visible = ToggleState::On;
                    self.reference_group_visible = ToggleState::Off;
                    self.alternate_group_visible = ToggleState::On;
                }
                8 => {
                    self.source_group_visible = ToggleState::Off;
                    self.reference_group_visible = ToggleState::On;
                    self.alternate_group_visible = ToggleState::Off;
                }
                _ => {}
            }
            self.first_show_pending = ToggleState::Off;
        }
        self.backend_commands
            .push(BackendCommand::RefreshShownLayout);
    }

    /// Ports Ghidra function `FUN_0138d700` at `0x0138D700`.
    #[must_use]
    pub fn can_resize(&self, request: ResizeRequest, work_area_height: i32) -> ResizeDecision {
        let policy = self.resize_policy;
        let enough_vertical_space =
            (policy.layout_top - policy.plot_top).saturating_mul(2) <= request.height;
        let allowed = request.width != policy.current_width || enough_vertical_space;
        let mut constrained = request;

        if policy.reference_width != 0 && policy.preserve_aspect && enough_vertical_space {
            let minimum_width = round_ratio_i32(i64::from(policy.reference_width) * 2, 3);
            constrained.width = constrained.width.max(minimum_width);
            constrained.height = round_ratio_i32(
                i64::from(policy.plot_top) * i64::from(constrained.width),
                i64::from(policy.reference_width),
            ) + policy.layout_top
                - policy.plot_top;

            let maximum_height = work_area_height.saturating_sub(40);
            if maximum_height > 0 && constrained.height > maximum_height {
                constrained.width = round_ratio_i32(
                    i64::from(constrained.width) * i64::from(maximum_height),
                    i64::from(constrained.height),
                );
                constrained.height = maximum_height;
            }
        }

        ResizeDecision {
            allowed,
            request: constrained,
        }
    }

    /// Ports Ghidra function `FUN_0138d720` at `0x0138D720`.
    pub fn resize_form(&mut self, request: ResizeRequest) {
        self.resize_request = request;
        self.resize_policy.current_width = request.width;
        self.resize_generation = self.resize_generation.saturating_add(1);
        self.backend_commands
            .push(BackendCommand::ResizeLayout(request));
    }

    /// Ports Ghidra function `FUN_0138d730` at `0x0138D730`.
    pub const fn hide_form(&mut self) {
        self.shown = ToggleState::Off;
    }

    /// Ports Ghidra function `FUN_0138d740` at `0x0138D740`.
    pub fn surface_double_click(&mut self) {
        self.record_surface_pointer(SurfacePointerAction::DoubleClick);
    }

    /// Ports Ghidra function `FUN_0138d750` at `0x0138D750`.
    pub fn surface_mouse_down(&mut self) {
        self.record_surface_pointer(SurfacePointerAction::Down);
    }

    /// Ports Ghidra function `FUN_0138d780` at `0x0138D780`.
    pub fn surface_mouse_move(&mut self) {
        self.record_surface_pointer(SurfacePointerAction::Move);
    }

    /// Ports Ghidra function `FUN_0138d7b0` at `0x0138D7B0`.
    pub fn surface_mouse_up(&mut self) {
        self.record_surface_pointer(SurfacePointerAction::Up);
    }

    fn record_surface_pointer(&mut self, action: SurfacePointerAction) {
        self.surface_pointer_action = Some(action);
        self.surface_pointer_generation = self.surface_pointer_generation.saturating_add(1);
        self.backend_commands
            .push(BackendCommand::SurfacePointer(action));
    }

    /// Ports Ghidra function `FUN_0138c940` at `0x0138C940`.
    pub fn destroy_form(&mut self) {
        self.channels.clear();
        self.trace_definitions.clear();
        self.curve_labels.clear();
        self.current_curve = None;
        self.analysis_workspace_curve = None;
        self.destroyed = true;
        self.backend_commands.push(BackendCommand::DestroyResources);
    }

    /// Ports Ghidra function `FUN_0138c4e0` at `0x0138C4E0`.
    pub fn commit_first_frequency_on_key(&mut self, key: char) -> InputCommitResult {
        if key != '\r' {
            return InputCommitResult::Ignored;
        }
        self.commit_frequency_text(true)
    }

    /// Ports Ghidra function `FUN_0138c500` at `0x0138C500`.
    pub fn restore_first_frequency_after_error(&mut self) {
        self.frequency_first_text = format_display_value(self.displayed_frequencies().first, 6);
    }

    /// Ports Ghidra function `FUN_0138c520` at `0x0138C520`.
    pub fn commit_first_frequency_on_exit(&mut self) -> InputCommitResult {
        self.commit_first_frequency_on_key('\r')
    }

    /// Ports Ghidra function `FUN_0138c550` at `0x0138C550`.
    pub fn commit_second_frequency_on_key(&mut self, key: char) -> InputCommitResult {
        if key != '\r' {
            return InputCommitResult::Ignored;
        }
        self.commit_frequency_text(false)
    }

    /// Ports Ghidra function `FUN_0138c570` at `0x0138C570`.
    pub fn commit_second_frequency_on_exit(&mut self) -> InputCommitResult {
        self.commit_second_frequency_on_key('\r')
    }

    /// Ports Ghidra function `FUN_0138c5a0` at `0x0138C5A0`.
    pub fn restore_second_frequency_after_error(&mut self) {
        self.frequency_second_text = format_display_value(self.displayed_frequencies().second, 6);
    }

    fn commit_frequency_text(&mut self, first: bool) -> InputCommitResult {
        let text = if first {
            &self.frequency_first_text
        } else {
            &self.frequency_second_text
        };
        let Ok(value) = text.trim().parse::<f64>() else {
            if first {
                self.restore_first_frequency_after_error();
            } else {
                self.restore_second_frequency_after_error();
            }
            return InputCommitResult::Invalid;
        };
        self.apply_frequency_value(first, value);
        InputCommitResult::Committed
    }

    /// Ports Ghidra function `FUN_0138c5c0` at `0x0138C5C0`.
    pub fn commit_resolution_on_key(&mut self, key: char) -> InputCommitResult {
        if key != '\r' {
            return InputCommitResult::Ignored;
        }
        let Ok(value) = self.resolution_text.trim().parse::<i32>() else {
            self.restore_resolution_after_error();
            return InputCommitResult::Invalid;
        };
        self.resolution = value.max(1);
        self.resolution_text = self.resolution.to_string();
        self.backend_commands
            .push(BackendCommand::Resolution(self.resolution));
        InputCommitResult::Committed
    }

    /// Ports Ghidra function `FUN_0138c670` at `0x0138C670`.
    pub fn commit_resolution_on_exit(&mut self) -> InputCommitResult {
        self.commit_resolution_on_key('\r')
    }

    /// Ports Ghidra function `FUN_0138c6a0` at `0x0138C6A0`.
    pub fn restore_resolution_after_error(&mut self) {
        self.resolution_text = self.resolution.to_string();
    }

    /// Ports Ghidra function `FUN_0138c6f0` at `0x0138C6F0`.
    pub fn commit_display_low_on_key(&mut self, key: char) -> InputCommitResult {
        if key != '\r' {
            return InputCommitResult::Ignored;
        }
        self.commit_display_text(false)
    }

    /// Ports Ghidra function `FUN_0138c710` at `0x0138C710`.
    pub fn commit_display_low_on_exit(&mut self) -> InputCommitResult {
        self.commit_display_low_on_key('\r')
    }

    /// Ports Ghidra function `FUN_0138c740` at `0x0138C740`.
    pub fn restore_display_low_after_error(&mut self) {
        self.display_low_text = format_display_value(self.display_coordinates.displayed.low, 6);
    }

    /// Ports Ghidra function `FUN_0138c7b0` at `0x0138C7B0`.
    pub fn commit_display_high_on_key(&mut self, key: char) -> InputCommitResult {
        if key != '\r' {
            return InputCommitResult::Ignored;
        }
        self.commit_display_text(true)
    }

    /// Ports Ghidra function `FUN_0138c7d0` at `0x0138C7D0`.
    pub fn commit_display_high_on_exit(&mut self) -> InputCommitResult {
        self.commit_display_high_on_key('\r')
    }

    /// Ports Ghidra function `FUN_0138c800` at `0x0138C800`.
    pub fn restore_display_high_after_error(&mut self) {
        self.display_high_text = format_display_value(self.display_coordinates.displayed.high, 6);
    }

    fn commit_display_text(&mut self, high: bool) -> InputCommitResult {
        let text = if high {
            &self.display_high_text
        } else {
            &self.display_low_text
        };
        let Ok(value) = text.trim().parse::<f64>() else {
            if high {
                self.restore_display_high_after_error();
            } else {
                self.restore_display_low_after_error();
            }
            return InputCommitResult::Invalid;
        };
        if self.apply_display_bound(high, value) {
            InputCommitResult::Committed
        } else {
            if high {
                self.restore_display_high_after_error();
            } else {
                self.restore_display_low_after_error();
            }
            InputCommitResult::Invalid
        }
    }

    /// Ports Ghidra function `FUN_0138ca20` at `0x0138CA20`.
    pub fn select_process(&mut self, index: Option<usize>) {
        self.process_selection = index.filter(|value| *value < PROCESS_OPTIONS.len());
        let Some(index) = self.process_selection else {
            self.process_label_enabled = false;
            self.process_label.clear();
            self.process_value = 0.0;
            self.backend_commands
                .push(BackendCommand::ProcessSelection(None));
            return;
        };

        self.process_label_enabled = index > 0;
        PROCESS_OPTIONS[index].clone_into(&mut self.process_label);
        self.process_value = 0.0;
        self.process_refresh_generation = self.process_refresh_generation.saturating_add(1);
        self.backend_commands
            .push(BackendCommand::ProcessSelection(Some(index)));
    }

    /// Ports Ghidra function `FUN_0138cb70` at `0x0138CB70`.
    pub fn press_cursor_move_left(&mut self) {
        self.press_cursor_move(CursorMoveDirection::Left);
    }

    /// Ports Ghidra function `FUN_0138cba0` at `0x0138CBA0`.
    pub fn press_cursor_move_right(&mut self) {
        self.press_cursor_move(CursorMoveDirection::Right);
    }

    fn press_cursor_move(&mut self, direction: CursorMoveDirection) {
        self.cursor_move_direction = Some(direction);
        self.cursor_move_pressed = true;
        self.cursor_move_generation = self.cursor_move_generation.saturating_add(1);
        self.backend_commands.push(BackendCommand::CursorMoveStart {
            direction,
            repeat_ms: 300,
        });
    }

    /// Ports Ghidra function `FUN_0138cb40` at `0x0138CB40`.
    pub fn release_cursor_move_left(&mut self) {
        self.release_cursor_move(CursorMoveDirection::Left);
    }

    /// Ports Ghidra function `FUN_0138cb10` at `0x0138CB10`.
    pub fn release_cursor_move_right(&mut self) {
        self.release_cursor_move(CursorMoveDirection::Right);
    }

    fn release_cursor_move(&mut self, direction: CursorMoveDirection) {
        if self.cursor_move_direction != Some(direction) {
            return;
        }
        self.cursor_move_pressed = false;
        self.cursor_move_direction = None;
        self.cursor_release_generation = self.cursor_release_generation.saturating_add(1);
        self.backend_commands.push(BackendCommand::CursorMoveStop);
    }

    pub fn set_channel_configuration(
        &mut self,
        channel_index: usize,
        coupling: Coupling,
        amplitude_ranges: impl IntoIterator<Item = f64>,
        amplitude_range_index: usize,
        enabled: bool,
    ) {
        let Some(channel) = self.channels.get_mut(channel_index) else {
            return;
        };
        let ranges: Vec<_> = amplitude_ranges.into_iter().collect();
        channel.coupling = coupling;
        channel.amplitude_ranges = if ranges.is_empty() { vec![1.0] } else { ranges };
        channel.amplitude_range_index =
            amplitude_range_index.min(channel.amplitude_ranges.len() - 1);
        channel.enabled = enabled;
        channel.traces = if enabled {
            ChannelTraceState::Attached
        } else {
            ChannelTraceState::Detached
        };
    }

    /// Ports Ghidra function `FUN_01389990` at `0x01389990`.
    pub fn select_channel(&mut self, channel_index: usize) {
        let Some(channel) = self.channels.get_mut(channel_index) else {
            return;
        };

        self.selected_channel_index = Some(channel_index);
        channel.enabled = true;
        channel.traces = ChannelTraceState::Attached;
        self.channel_button_state = ToggleState::On;
        self.coupling = Some(channel.coupling);
        self.amplitude_display_value = channel.amplitude_ranges[channel.amplitude_range_index];
        self.backend_commands
            .push(BackendCommand::SelectChannel { channel_index });
        self.backend_commands.push(BackendCommand::ChannelEnabled {
            channel_index,
            enabled: true,
        });
        self.backend_commands
            .push(BackendCommand::Coupling(channel.coupling));
    }

    /// Ports Ghidra function `FUN_01389e40` at `0x01389E40`.
    pub fn decrease_amplitude_range(&mut self) {
        self.adjust_amplitude_range(DecimalStepDirection::Decrease);
    }

    /// Ports Ghidra function `FUN_01389e50` at `0x01389E50`.
    pub fn increase_amplitude_range(&mut self) {
        self.adjust_amplitude_range(DecimalStepDirection::Increase);
    }

    fn adjust_amplitude_range(&mut self, direction: DecimalStepDirection) {
        let Some(channel_index) = self.selected_channel_index else {
            return;
        };
        let channel = &mut self.channels[channel_index];
        let previous_index = channel.amplitude_range_index;
        channel.amplitude_range_index = match direction {
            DecimalStepDirection::Decrease => previous_index.saturating_sub(1),
            DecimalStepDirection::Increase => {
                (previous_index + 1).min(channel.amplitude_ranges.len() - 1)
            }
        };
        self.amplitude_display_value = channel.amplitude_ranges[channel.amplitude_range_index];
        self.backend_commands
            .push(BackendCommand::AmplitudeRangeIndex {
                channel_index,
                range_index: channel.amplitude_range_index,
                value: self.amplitude_display_value,
            });
    }

    /// Ports Ghidra function `FUN_0138a320` at `0x0138A320`.
    pub fn decrease_first_frequency(&mut self) {
        self.adjust_frequency(true, DecimalStepDirection::Decrease);
    }

    /// Ports Ghidra function `FUN_0138a330` at `0x0138A330`.
    pub fn increase_first_frequency(&mut self) {
        self.adjust_frequency(true, DecimalStepDirection::Increase);
    }

    /// Ports Ghidra function `FUN_0138bef0` at `0x0138BEF0`.
    pub fn decrease_second_frequency(&mut self) {
        self.adjust_frequency(false, DecimalStepDirection::Decrease);
    }

    /// Ports Ghidra function `FUN_0138bf00` at `0x0138BF00`.
    pub fn increase_second_frequency(&mut self) {
        self.adjust_frequency(false, DecimalStepDirection::Increase);
    }

    fn adjust_frequency(&mut self, first: bool, direction: DecimalStepDirection) {
        let displayed = self.displayed_frequencies();
        let value = if first {
            displayed.first
        } else {
            displayed.second
        };
        let adjusted = step_decimal_value(value, direction, 1e-6);

        self.apply_frequency_value(first, adjusted);
    }

    fn apply_frequency_value(&mut self, first: bool, adjusted: f64) {
        match (self.frequency_representation, first) {
            (FrequencyRepresentation::StartStop, true) => {
                self.start_stop_frequencies.first = adjusted;
            }
            (FrequencyRepresentation::StartStop, false) => {
                self.start_stop_frequencies.second = adjusted;
            }
            (FrequencyRepresentation::CenterSpan, true) => {
                let half_span = self.center_span_frequencies.second / 2.0;
                self.start_stop_frequencies =
                    FrequencyPair::new(adjusted - half_span, adjusted + half_span);
            }
            (FrequencyRepresentation::CenterSpan, false) => {
                let half_span = adjusted / 2.0;
                self.start_stop_frequencies = FrequencyPair::new(
                    self.center_span_frequencies.first - half_span,
                    self.center_span_frequencies.first + half_span,
                );
            }
        }

        if self.start_stop_frequencies.first > self.start_stop_frequencies.second {
            std::mem::swap(
                &mut self.start_stop_frequencies.first,
                &mut self.start_stop_frequencies.second,
            );
        }
        self.center_span_frequencies = FrequencyPair::new(
            self.start_stop_frequencies
                .first
                .midpoint(self.start_stop_frequencies.second),
            self.start_stop_frequencies.second - self.start_stop_frequencies.first,
        );
        self.sync_frequency_text();
        self.backend_commands.push(BackendCommand::FrequencyWindow {
            start: self.start_stop_frequencies.first,
            stop: self.start_stop_frequencies.second,
        });
        self.plot_refresh_generation = self.plot_refresh_generation.saturating_add(1);
    }

    /// Ports Ghidra function `FUN_0138bb50` at `0x0138BB50`.
    pub fn increase_resolution(&mut self) {
        self.resolution = self.resolution.saturating_add(1);
        self.resolution_text = self.resolution.to_string();
        self.backend_commands
            .push(BackendCommand::Resolution(self.resolution));
    }

    /// Ports Ghidra function `FUN_0138bbe0` at `0x0138BBE0`.
    pub fn decrease_resolution(&mut self) {
        self.resolution = self.resolution.saturating_sub(1).max(1);
        self.resolution_text = self.resolution.to_string();
        self.backend_commands
            .push(BackendCommand::Resolution(self.resolution));
    }

    /// Ports Ghidra function `FUN_0138bc70` at `0x0138BC70`.
    pub const fn paint_surface(&mut self) {
        self.surface_paint_generation = self.surface_paint_generation.saturating_add(1);
    }

    /// Ports Ghidra function `FUN_0138bc80` at `0x0138BC80`.
    pub fn select_measurement_mode(&mut self, index: usize) {
        if index >= MEASUREMENT_MODE_OPTIONS.len() {
            return;
        }
        self.measurement_mode_index = Some(index);
        self.measurement_rebuild_generation = self.measurement_rebuild_generation.saturating_add(1);
        self.plot_refresh_generation = self.plot_refresh_generation.saturating_add(1);
        self.backend_commands
            .push(BackendCommand::MeasurementMode(index));
    }

    pub fn set_trace_definitions(
        &mut self,
        definitions: impl IntoIterator<Item = TraceDefinition>,
    ) {
        self.trace_definitions = definitions.into_iter().collect();
        self.trace_type_index = None;
    }

    /// Ports Ghidra function `FUN_0138bf10` at `0x0138BF10`.
    pub fn select_trace_type(&mut self, index: usize) {
        let Some(definition) = self.trace_definitions.get(index).cloned() else {
            return;
        };
        self.trace_type_index = Some(index);
        self.set_display_coordinate_data(
            CoordinateData::new(&definition.caption, definition.high, definition.low),
            definition.alternate.map(|range| {
                CoordinateData::new(
                    format!("{} secondary", definition.caption),
                    range.second,
                    range.first,
                )
            }),
        );
        self.plot_refresh_generation = self.plot_refresh_generation.saturating_add(1);
        self.backend_commands.push(BackendCommand::TraceType {
            index,
            code: definition.code,
        });
    }

    /// Ports Ghidra function `FUN_0138c280` at `0x0138C280`.
    pub fn decrease_display_low(&mut self) {
        self.adjust_display_bound(false, DecimalStepDirection::Decrease);
    }

    /// Ports Ghidra function `FUN_0138c290` at `0x0138C290`.
    pub fn increase_display_low(&mut self) {
        self.adjust_display_bound(false, DecimalStepDirection::Increase);
    }

    /// Ports Ghidra function `FUN_0138c4c0` at `0x0138C4C0`.
    pub fn decrease_display_high(&mut self) {
        self.adjust_display_bound(true, DecimalStepDirection::Decrease);
    }

    /// Ports Ghidra function `FUN_0138c4d0` at `0x0138C4D0`.
    pub fn increase_display_high(&mut self) {
        self.adjust_display_bound(true, DecimalStepDirection::Increase);
    }

    fn adjust_display_bound(&mut self, high: bool, direction: DecimalStepDirection) {
        let current = if high {
            self.display_coordinates.displayed.high
        } else {
            self.display_coordinates.displayed.low
        };
        let adjusted = step_decimal_value(current, direction, 1e-12);

        let _ = self.apply_display_bound(high, adjusted);
    }

    fn apply_display_bound(&mut self, high: bool, adjusted: f64) -> bool {
        let polar_range = self
            .trace_type_index
            .and_then(|index| self.trace_definitions.get(index))
            .is_some_and(|definition| definition.code == 9);
        let adjusted = if polar_range {
            adjusted.clamp(-1.0, 1.0)
        } else {
            adjusted
        };
        let low = if high {
            self.display_coordinates.displayed.low
        } else {
            adjusted
        };
        let upper = if high {
            adjusted
        } else {
            self.display_coordinates.displayed.high
        };
        if low >= upper {
            self.last_range_error = Some(if high {
                DisplayRangeError::HighMustBeAboveLow
            } else {
                DisplayRangeError::LowMustBeBelowHigh
            });
            return false;
        }

        self.last_range_error = None;
        let alternate = self.display_coordinates.alternate_selected;
        let target = if alternate {
            self.display_coordinates.alternate.as_mut()
        } else {
            Some(&mut self.display_coordinates.base)
        };
        if let Some(target) = target {
            target.low = low;
            target.high = upper;
            self.display_coordinates.displayed = target.clone();
        }
        self.display_low_text = format_display_value(low, 6);
        self.display_high_text = format_display_value(upper, 6);
        self.backend_commands.push(BackendCommand::DisplayRange {
            low,
            high: upper,
            alternate,
        });
        true
    }

    /// Ports Ghidra function `FUN_01389b00` at `0x01389B00`.
    pub fn select_dc_coupling(&mut self) {
        self.coupling = Some(Coupling::Dc);
        self.backend_commands
            .push(BackendCommand::Coupling(Coupling::Dc));
        self.selected_channel_flag_0x38 = ToggleState::Off;
    }

    /// Ports Ghidra function `FUN_01389b30` at `0x01389B30`.
    pub fn select_ac_coupling(&mut self) {
        self.coupling = Some(Coupling::Ac);
        self.backend_commands
            .push(BackendCommand::Coupling(Coupling::Ac));
    }

    /// Ports Ghidra function `FUN_01389b50` at `0x01389B50`.
    pub fn apply_channel_on_button(&mut self) {
        let Some(channel_index) = self.selected_channel_index else {
            return;
        };

        let channel = &mut self.channels[channel_index];
        channel.enabled = self.channel_button_state.is_on();
        channel.traces = if channel.enabled {
            ChannelTraceState::Attached
        } else {
            ChannelTraceState::Detached
        };
        self.backend_commands.push(BackendCommand::ChannelEnabled {
            channel_index,
            enabled: channel.enabled,
        });
    }

    /// Ports Ghidra function `FUN_0138beb0` at `0x0138BEB0`.
    pub fn select_manual_amplitude_range(&mut self) {
        self.amplitude_range = Some(AmplitudeRange::Manual);
        self.backend_commands
            .push(BackendCommand::AmplitudeRange(AmplitudeRange::Manual));
    }

    /// Ports Ghidra function `FUN_0138bed0` at `0x0138BED0`.
    pub fn select_automatic_amplitude_range(&mut self) {
        self.amplitude_range = Some(AmplitudeRange::Automatic);
        self.backend_commands
            .push(BackendCommand::AmplitudeRange(AmplitudeRange::Automatic));
    }

    /// Ports Ghidra function `FUN_0138cec0` at `0x0138CEC0`.
    pub fn cycle_amplitude_unit(&mut self) {
        self.amplitude_unit = self.amplitude_unit.next();
        self.backend_commands
            .push(BackendCommand::AmplitudeConversion {
                channel_index: self.selected_channel_index,
                unit: self.amplitude_unit,
            });
    }

    pub const fn apply_amplitude_conversion(&mut self, value: f64) {
        self.amplitude_display_value = value;
    }

    /// Ports Ghidra function `FUN_0138d0f0` at `0x0138D0F0`.
    pub fn apply_trigger_slope_button(&mut self) {
        self.backend_commands
            .push(BackendCommand::TriggerSlope(self.trigger_slope));
    }

    pub const fn set_trigger_backend_data(
        &mut self,
        mode: TriggerEditorData,
        source: TriggerEditorData,
    ) {
        self.trigger_mode_data = mode;
        self.trigger_source_data = source;
        self.trigger_editor_data = match self.trigger_editor_kind {
            TriggerEditorKind::Mode => mode,
            TriggerEditorKind::Source => source,
        };
    }

    /// Ports Ghidra function `FUN_0138cf50` at `0x0138CF50`.
    pub fn select_trigger_source(&mut self, index: usize) {
        if index >= TRIGGER_SOURCE_OPTIONS.len() {
            return;
        }
        self.trigger_source_index = Some(index);
        self.backend_commands.push(BackendCommand::TriggerSource {
            index,
            alternate_backend: self.trigger_source_uses_alternate_backend.is_on(),
        });
    }

    /// Ports Ghidra function `FUN_0138d210` at `0x0138D210`.
    pub fn decrease_trigger_level(&mut self) {
        self.adjust_trigger_level(LevelAction::Decrease);
    }

    /// Ports Ghidra function `FUN_0138d220` at `0x0138D220`.
    pub fn increase_trigger_level(&mut self) {
        self.adjust_trigger_level(LevelAction::Increase);
    }

    fn adjust_trigger_level(&mut self, action: LevelAction) {
        let value = match action {
            LevelAction::Decrease => step_decimal_value(
                self.trigger_editor_data.primary,
                DecimalStepDirection::Decrease,
                1e-6,
            ),
            LevelAction::Increase => step_decimal_value(
                self.trigger_editor_data.primary,
                DecimalStepDirection::Increase,
                1e-6,
            ),
            LevelAction::Commit => {
                let Ok(value) = self.trigger_level_text.trim().parse::<f64>() else {
                    self.trigger_level_text =
                        format_display_value(self.trigger_editor_data.primary, 6);
                    return;
                };
                value
            }
        };
        self.trigger_editor_data.primary = value;
        self.trigger_level_text = format_display_value(value, 6);
        self.backend_commands
            .push(BackendCommand::TriggerLevel(action));
    }

    #[must_use]
    pub fn commit_trigger_level_on_exit(&mut self) -> InputCommitResult {
        if self.trigger_level_text.trim().parse::<f64>().is_err() {
            self.trigger_level_text = format_display_value(self.trigger_editor_data.primary, 6);
            return InputCommitResult::Invalid;
        }
        self.adjust_trigger_level(LevelAction::Commit);
        InputCommitResult::Committed
    }

    /// Ports Ghidra function `FUN_0138cfd0` at `0x0138CFD0`.
    pub fn select_trigger_mode_data(&mut self, button_down: bool) {
        if !button_down || self.trigger_editor_kind == TriggerEditorKind::Mode {
            return;
        }
        self.trigger_editor_kind = TriggerEditorKind::Mode;
        self.trigger_editor_data = self.trigger_mode_data;
        self.backend_commands
            .push(BackendCommand::TriggerEditor(TriggerEditorKind::Mode));
    }

    /// Ports Ghidra function `FUN_0138d060` at `0x0138D060`.
    pub fn select_trigger_source_data(&mut self, button_down: bool) {
        if !button_down || self.trigger_editor_kind == TriggerEditorKind::Source {
            return;
        }
        self.trigger_editor_kind = TriggerEditorKind::Source;
        self.trigger_editor_data = self.trigger_source_data;
        self.backend_commands
            .push(BackendCommand::TriggerEditor(TriggerEditorKind::Source));
    }

    /// Ports Ghidra function `FUN_0138d230` at `0x0138D230`.
    pub const fn show_display_control_panel(&mut self) {
        self.control_panel = ControlPanel::Display;
    }

    /// Ports Ghidra function `FUN_0138d270` at `0x0138D270`.
    pub const fn show_trigger_control_panel(&mut self) {
        self.control_panel = ControlPanel::Trigger;
    }

    /// Ports Ghidra function `FUN_0138d3d0` at `0x0138D3D0`.
    pub const fn show_reference_window_panel(&mut self) {
        self.control_panel = ControlPanel::ReferenceWindow;
    }

    pub const fn set_reference_context(&mut self, source_reference: f64, analyzer_mode: u8) {
        self.reference_source_value = source_reference;
        self.analyzer_mode = analyzer_mode;
    }

    /// Ports Ghidra function `FUN_0138d5d0` at `0x0138D5D0`.
    pub fn select_measurement_window(&mut self, index: usize) {
        if index >= MEASUREMENT_WINDOW_OPTIONS.len() {
            return;
        }
        self.measurement_window_index = Some(index);
        self.backend_commands
            .push(BackendCommand::MeasurementWindow(index));
    }

    /// Ports Ghidra function `FUN_0138d410` at `0x0138D410`.
    pub fn cycle_reference_unit(&mut self) {
        self.reference_unit = self.reference_unit.next();
        self.reference_power_mode = ToggleState::from_bool(matches!(self.analyzer_mode, 4 | 5));
        if self.reference_unit == ReferenceUnit::Source {
            self.reference_display_value = if self.reference_power_mode.is_on() {
                self.reference_source_value.powi(2) / 100.0
            } else {
                self.reference_source_value
            };
        }
        self.reference_update_generation = self.reference_update_generation.saturating_add(1);
        self.backend_commands.push(BackendCommand::ReferenceUnit {
            unit: self.reference_unit,
            source_reference: self.reference_source_value,
            analyzer_mode: self.analyzer_mode,
        });
    }

    pub fn apply_reference_conversion(&mut self, value: f64) {
        self.reference_display_value = value;
        self.reference_level_text = format_display_value(value, 6);
    }

    /// Ports Ghidra function `FUN_0138d630` at `0x0138D630`.
    pub fn decrease_reference_level(&mut self) {
        self.adjust_reference_level(LevelAction::Decrease);
    }

    /// Ports Ghidra function `FUN_0138d640` at `0x0138D640`.
    pub fn increase_reference_level(&mut self) {
        self.adjust_reference_level(LevelAction::Increase);
    }

    fn adjust_reference_level(&mut self, action: LevelAction) {
        if self.reference_unit == ReferenceUnit::Source {
            return;
        }
        let value = match action {
            LevelAction::Decrease => step_decimal_value(
                self.reference_display_value,
                DecimalStepDirection::Decrease,
                1e-6,
            ),
            LevelAction::Increase => step_decimal_value(
                self.reference_display_value,
                DecimalStepDirection::Increase,
                1e-6,
            ),
            LevelAction::Commit => {
                let Ok(value) = self.reference_level_text.trim().parse::<f64>() else {
                    self.restore_reference_level_after_error();
                    return;
                };
                value
            }
        };
        self.reference_display_value = value;
        self.reference_level_text = format_display_value(value, 6);
        self.reference_power_mode = ToggleState::from_bool(matches!(self.analyzer_mode, 4 | 5));
        self.backend_commands
            .push(BackendCommand::ReferenceLevel(action));
    }

    /// Ports Ghidra function `FUN_0138d650` at `0x0138D650`.
    pub fn restore_reference_level_after_error(&mut self) {
        if self.reference_unit != ReferenceUnit::Source {
            self.reference_level_text = format_display_value(self.reference_display_value, 6);
        }
    }

    /// Ports Ghidra function `FUN_0138d6a0` at `0x0138D6A0`.
    pub fn commit_reference_level_on_exit(&mut self) -> InputCommitResult {
        self.commit_reference_level_on_key('\r')
    }

    /// Ports Ghidra function `FUN_0138d6d0` at `0x0138D6D0`.
    pub fn commit_reference_level_on_key(&mut self, key: char) -> InputCommitResult {
        if self.reference_unit == ReferenceUnit::Source || key != '\r' {
            return InputCommitResult::Ignored;
        }
        if self.reference_level_text.trim().parse::<f64>().is_err() {
            self.restore_reference_level_after_error();
            return InputCommitResult::Invalid;
        }
        self.adjust_reference_level(LevelAction::Commit);
        InputCommitResult::Committed
    }

    pub const fn set_acquisition_route(&mut self, route: AcquisitionRoute) {
        self.acquisition_route = route;
    }

    /// Ports Ghidra function `FUN_0138afc0` at `0x0138AFC0`.
    pub fn start_measurement(&mut self) {
        self.stop_requested = ToggleState::Off;
        self.last_measurement_error = None;
        self.backend_commands
            .push(BackendCommand::StartMeasurement {
                command: START_MEASUREMENT_COMMAND_ID,
                route: self.acquisition_route,
            });

        if self.acquisition_route == AcquisitionRoute::Local {
            self.measurement_state = MeasurementState::Active;
            self.progress_visible = ToggleState::On;
            self.measurement_controls_enabled = ToggleState::Off;
            self.source_acquisition_active = ToggleState::On;
        }
    }

    pub const fn set_source_stop_clear_allowed(&mut self, allowed: bool) {
        self.source_stop_clear_allowed = ToggleState::from_bool(allowed);
    }

    /// Ports Ghidra function `FUN_0138ba20` at `0x0138BA20`.
    pub fn request_measurement_stop(&mut self) {
        if self.measurement_state == MeasurementState::Active {
            self.progress_visible = ToggleState::Off;
            self.measurement_state = MeasurementState::StopRequested;
            self.backend_commands.push(BackendCommand::StopMeasurement);
            let clear_source = self.analyzer_mode == 8
                || (self.analyzer_mode == 4 && self.source_stop_clear_allowed.is_on());
            if clear_source {
                self.source_acquisition_active = ToggleState::Off;
            }
        }
        self.stop_requested = ToggleState::On;
    }

    pub const fn finish_measurement(&mut self, outcome: MeasurementOutcome) {
        self.measurement_state = MeasurementState::Idle;
        self.progress_visible = ToggleState::Off;
        self.measurement_controls_enabled = ToggleState::On;
        self.source_acquisition_active = ToggleState::Off;
        self.last_measurement_error = match outcome {
            MeasurementOutcome::Completed => None,
            MeasurementOutcome::ReadFailed => Some(READ_DATA_FAILED),
        };
    }

    /// Ports Ghidra function `FUN_0138cc00` at `0x0138CC00`.
    pub fn dispatch_data_load(&mut self) {
        self.data_load_request_generation = self.data_load_request_generation.saturating_add(1);
        self.backend_commands.push(BackendCommand::LoadData);
    }

    pub fn set_curve_export_context(&mut self, analyzer_type: u8, curve_id: Option<String>) {
        self.analyzer_type = analyzer_type;
        self.current_curve = curve_id;
    }

    /// Ports Ghidra function `FUN_0138cc10` at `0x0138CC10`.
    pub fn publish_current_curve(&mut self) {
        if self.analyzer_type != 5 {
            return;
        }
        let Some(curve_id) = self.current_curve.take() else {
            return;
        };

        self.analysis_workspace_curve = Some(curve_id.clone());
        self.memory_curve_writer_count = 2;
        self.backend_commands
            .push(BackendCommand::PublishCurve { curve_id });
    }

    pub const fn set_source_window_available(&mut self, available: bool) {
        self.source_window_available = ToggleState::from_bool(available);
    }

    /// Ports Ghidra function `FUN_0138d2b0` at `0x0138D2B0`.
    pub fn open_source_control(&mut self) {
        if !self.source_window_available.is_on() {
            return;
        }

        self.source_window_visible = ToggleState::On;
        self.source_window_selected_mode =
            matches!(self.analyzer_mode, 4 | 8).then_some(self.analyzer_mode);
        self.backend_commands
            .push(BackendCommand::ShowSourceControl {
                analyzer_mode: self.analyzer_mode,
            });
    }

    pub fn set_display_coordinate_data(
        &mut self,
        base: CoordinateData,
        alternate: Option<CoordinateData>,
    ) {
        self.display_coordinates.base = base.clone();
        self.display_coordinates.alternate = alternate;
        self.display_coordinates.displayed = base;
        self.display_coordinates.alternate_selected = false;
        self.display_low_text = format_display_value(self.display_coordinates.displayed.low, 6);
        self.display_high_text = format_display_value(self.display_coordinates.displayed.high, 6);
    }

    /// Ports Ghidra function `FUN_0138c870` at `0x0138C870`.
    pub fn apply_display_coordinate_button(&mut self) {
        let Some(alternate) = self.display_coordinates.alternate.as_ref() else {
            self.display_coordinates.alternate_selected = false;
            self.display_coordinates.displayed = self.display_coordinates.base.clone();
            self.display_low_text = format_display_value(self.display_coordinates.displayed.low, 6);
            self.display_high_text =
                format_display_value(self.display_coordinates.displayed.high, 6);
            return;
        };

        self.display_coordinates.displayed = if self.display_coordinates.alternate_selected {
            alternate.clone()
        } else {
            self.display_coordinates.base.clone()
        };
        self.display_low_text = format_display_value(self.display_coordinates.displayed.low, 6);
        self.display_high_text = format_display_value(self.display_coordinates.displayed.high, 6);
    }

    pub fn set_curves(&mut self, labels: impl IntoIterator<Item = String>) {
        self.curve_labels = labels.into_iter().collect();
        self.selected_curve_index = (!self.curve_labels.is_empty()).then_some(0);
    }

    /// Ports Ghidra function `FUN_0138ca10` at `0x0138CA10`.
    pub fn select_previous_curve(&mut self) {
        self.navigate_curve(CurveDirection::Previous);
    }

    /// Ports Ghidra function `FUN_0138cb00` at `0x0138CB00`.
    pub fn select_next_curve(&mut self) {
        self.navigate_curve(CurveDirection::Next);
    }

    fn navigate_curve(&mut self, direction: CurveDirection) {
        self.backend_commands.push(BackendCommand::CurveNavigation {
            command: CURVE_COMMAND_ID,
            direction,
        });

        let Some(current) = self.selected_curve_index else {
            return;
        };
        let count = self.curve_labels.len();
        if count == 0 {
            self.selected_curve_index = None;
            return;
        }

        self.selected_curve_index = Some(match direction {
            CurveDirection::Previous => (current + 1) % count,
            CurveDirection::Next => (current + count - 1) % count,
        });
    }

    /// Ports Ghidra function `FUN_0138cbd0` at `0x0138CBD0`.
    pub fn toggle_selected_cursor(&mut self) {
        if let Some(cursor) = self.selected_cursor {
            self.cursor_enabled[cursor.index()] = self.cursor_button_state.is_on();
        }
        self.backend_commands.push(BackendCommand::CursorToggle {
            command: CURSOR_COMMAND_ID,
            cursor: self.selected_cursor,
            enabled: self.cursor_button_state.is_on(),
        });
    }

    /// Ports Ghidra function `FUN_0138cbe0` at `0x0138CBE0`.
    pub const fn select_cursor_a(&mut self) {
        self.select_cursor(CursorId::A);
    }

    /// Ports Ghidra function `FUN_0138cbf0` at `0x0138CBF0`.
    pub const fn select_cursor_b(&mut self) {
        self.select_cursor(CursorId::B);
    }

    const fn select_cursor(&mut self, cursor: CursorId) {
        self.selected_cursor = Some(cursor);
        self.cursor_button_state = ToggleState::from_bool(self.cursor_enabled[cursor.index()]);
    }

    pub fn set_frequency_values(&mut self, start_stop: FrequencyPair, center_span: FrequencyPair) {
        self.start_stop_frequencies = start_stop;
        self.center_span_frequencies = center_span;
        self.sync_frequency_text();
    }

    fn sync_frequency_text(&mut self) {
        let displayed = self.displayed_frequencies();
        self.frequency_first_text = format_display_value(displayed.first, 6);
        self.frequency_second_text = format_display_value(displayed.second, 6);
    }

    /// Ports Ghidra function `FUN_0138cc30` at `0x0138CC30`.
    pub fn apply_frequency_mode_button(&mut self, button_down: bool) {
        let requested = if button_down {
            FrequencyRepresentation::CenterSpan
        } else {
            FrequencyRepresentation::StartStop
        };
        if self.frequency_representation != requested {
            self.frequency_representation = requested;
            self.sync_frequency_text();
        }
    }

    /// Ports Ghidra function `FUN_0138cd80` at `0x0138CD80`.
    pub fn apply_frequency_scale_button(&mut self, button_down: bool) {
        let requested = if button_down {
            FrequencyScale::Logarithmic
        } else {
            FrequencyScale::Linear
        };
        let changed = self.frequency_scale != requested;
        self.frequency_scale = requested;
        self.backend_commands
            .push(BackendCommand::FrequencyScale(requested));
        if changed {
            self.plot_refresh_generation = self.plot_refresh_generation.saturating_add(1);
        }
    }

    #[must_use]
    pub const fn displayed_frequencies(&self) -> FrequencyPair {
        match self.frequency_representation {
            FrequencyRepresentation::StartStop => self.start_stop_frequencies,
            FrequencyRepresentation::CenterSpan => self.center_span_frequencies,
        }
    }

    #[must_use]
    pub fn take_backend_commands(&mut self) -> Vec<BackendCommand> {
        std::mem::take(&mut self.backend_commands)
    }

    fn toolbar(&self) -> Element<'static, Message> {
        let start_button = if self.measurement_controls_enabled.is_on() {
            button(text("Start")).on_press(Message::StartMeasurement)
        } else {
            button(text("Start"))
        };
        let stop_button = if self.measurement_state == MeasurementState::Active {
            button(text("Stop")).on_press(Message::StopMeasurement)
        } else {
            button(text("Stop"))
        };

        container(
            row![
                button(text("Source...")).on_press(Message::OpenSourceControl),
                button(text("Display..."))
                    .on_press(Message::ShowControlPanel(ControlPanel::Display)),
                button(text("Trigger..."))
                    .on_press(Message::ShowControlPanel(ControlPanel::Trigger)),
                button(text("Ref.-Window"))
                    .on_press(Message::ShowControlPanel(ControlPanel::ReferenceWindow)),
                start_button,
                stop_button,
            ]
            .spacing(4),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .into()
    }

    fn control_panel(&self) -> Element<'_, Message> {
        match self.control_panel {
            ControlPanel::Display => self.display_control_panel(),
            ControlPanel::Trigger => self.trigger_control_panel(),
            ControlPanel::ReferenceWindow => self.reference_control_panel(),
        }
    }

    fn display_control_panel(&self) -> Element<'_, Message> {
        column![
            text("Display control").size(16),
            self.trace_controls(),
            self.display_bounds_controls(),
            self.amplitude_controls(),
            self.frequency_controls(),
            self.measurement_controls(),
        ]
        .spacing(8)
        .into()
    }

    fn trace_controls(&self) -> Element<'_, Message> {
        column![
            row![
                text("Trace").width(Length::FillPortion(2)),
                pick_list(
                    TRACE_TYPE_OPTIONS,
                    self.trace_type_index
                        .and_then(|index| TRACE_TYPE_OPTIONS.get(index).copied()),
                    |value| Message::SelectTraceType(
                        TRACE_TYPE_OPTIONS
                            .iter()
                            .position(|candidate| *candidate == value)
                            .unwrap_or_default(),
                    ),
                )
                .width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
            row![
                text(&self.display_coordinates.displayed.caption).width(Length::FillPortion(2)),
                button(text(selected_label(
                    "dB",
                    self.display_coordinates.alternate_selected,
                )))
                .on_press(Message::ToggleDisplayCoordinates)
                .width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
        ]
        .spacing(8)
        .into()
    }

    fn display_bounds_controls(&self) -> Element<'_, Message> {
        column![
            row![
                text("High"),
                button(text("−"))
                    .on_press(Message::AdjustDisplayHigh(DecimalStepDirection::Decrease,)),
                text_input("", &self.display_high_text)
                    .on_input(Message::DisplayHighTextChanged)
                    .on_submit(Message::CommitDisplayHigh),
                button(text("+"))
                    .on_press(Message::AdjustDisplayHigh(DecimalStepDirection::Increase,)),
            ]
            .spacing(4)
            .align_y(Alignment::Center),
            row![
                text("Low"),
                button(text("−"))
                    .on_press(Message::AdjustDisplayLow(DecimalStepDirection::Decrease,)),
                text_input("", &self.display_low_text)
                    .on_input(Message::DisplayLowTextChanged)
                    .on_submit(Message::CommitDisplayLow),
                button(text("+"))
                    .on_press(Message::AdjustDisplayLow(DecimalStepDirection::Increase,)),
            ]
            .spacing(4)
            .align_y(Alignment::Center),
        ]
        .spacing(4)
        .into()
    }

    fn amplitude_controls(&self) -> Element<'_, Message> {
        column![
            row![
                text("Amplitude range").width(Length::FillPortion(2)),
                button(text(selected_label(
                    "Auto",
                    self.amplitude_range == Some(AmplitudeRange::Automatic),
                )))
                .on_press(Message::SelectAmplitudeRange(AmplitudeRange::Automatic)),
                button(text(selected_label(
                    "Man",
                    self.amplitude_range == Some(AmplitudeRange::Manual),
                )))
                .on_press(Message::SelectAmplitudeRange(AmplitudeRange::Manual)),
            ]
            .spacing(4)
            .align_y(Alignment::Center),
            row![
                text("Amplitude").width(Length::FillPortion(2)),
                button(text("−")).on_press(Message::AdjustAmplitudeRange(
                    DecimalStepDirection::Decrease,
                )),
                text(format_display_value(self.amplitude_display_value, 6)),
                button(text("+")).on_press(Message::AdjustAmplitudeRange(
                    DecimalStepDirection::Increase,
                )),
                button(text(match self.amplitude_unit {
                    AmplitudeUnit::Unit0 => "Unit 0",
                    AmplitudeUnit::Unit1 => "Unit 1",
                }))
                .on_press(Message::CycleAmplitudeUnit),
            ]
            .spacing(4)
            .align_y(Alignment::Center),
        ]
        .spacing(4)
        .into()
    }

    fn measurement_controls(&self) -> Element<'_, Message> {
        column![
            row![
                text("Data").width(Length::FillPortion(2)),
                button(text("Load")).on_press(Message::LoadData),
                button(text("Save")).on_press(Message::SaveData),
            ]
            .spacing(4)
            .align_y(Alignment::Center),
            row![
                text("Display").width(Length::FillPortion(2)),
                pick_list(
                    PROCESS_OPTIONS,
                    self.process_selection
                        .and_then(|index| PROCESS_OPTIONS.get(index).copied()),
                    |value| Message::SelectProcess(
                        PROCESS_OPTIONS
                            .iter()
                            .position(|candidate| *candidate == value),
                    ),
                )
                .width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
            row![
                text("Measurement").width(Length::FillPortion(2)),
                pick_list(
                    MEASUREMENT_MODE_OPTIONS,
                    self.measurement_mode_index
                        .and_then(|index| MEASUREMENT_MODE_OPTIONS.get(index).copied()),
                    |value| Message::SelectMeasurementMode(
                        MEASUREMENT_MODE_OPTIONS
                            .iter()
                            .position(|candidate| *candidate == value)
                            .unwrap_or_default(),
                    ),
                )
                .width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
            row![
                text("Resolution").width(Length::FillPortion(2)),
                button(text("−"))
                    .on_press(Message::AdjustResolution(DecimalStepDirection::Decrease,)),
                text_input("", &self.resolution_text)
                    .on_input(Message::ResolutionTextChanged)
                    .on_submit(Message::CommitResolution),
                button(text("+"))
                    .on_press(Message::AdjustResolution(DecimalStepDirection::Increase,)),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
        ]
        .spacing(8)
        .into()
    }

    fn frequency_controls(&self) -> Element<'_, Message> {
        column![
            row![
                text("Frequency").width(Length::FillPortion(2)),
                button(text(match self.frequency_representation {
                    FrequencyRepresentation::StartStop => "Start / Stop",
                    FrequencyRepresentation::CenterSpan => "Center / Span",
                }))
                .on_press(Message::ToggleFrequencyRepresentation)
                .width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
            row![
                text(match self.frequency_representation {
                    FrequencyRepresentation::StartStop => "Start",
                    FrequencyRepresentation::CenterSpan => "Center",
                })
                .width(Length::FillPortion(2)),
                button(text("−")).on_press(Message::AdjustFirstFrequency(
                    DecimalStepDirection::Decrease,
                )),
                text_input("", &self.frequency_first_text)
                    .on_input(Message::FrequencyFirstTextChanged)
                    .on_submit(Message::CommitFirstFrequency)
                    .width(Length::FillPortion(3)),
                button(text("+")).on_press(Message::AdjustFirstFrequency(
                    DecimalStepDirection::Increase,
                )),
            ]
            .spacing(4)
            .align_y(Alignment::Center),
            row![
                text(match self.frequency_representation {
                    FrequencyRepresentation::StartStop => "Stop",
                    FrequencyRepresentation::CenterSpan => "Span",
                })
                .width(Length::FillPortion(2)),
                button(text("−")).on_press(Message::AdjustSecondFrequency(
                    DecimalStepDirection::Decrease,
                )),
                text_input("", &self.frequency_second_text)
                    .on_input(Message::FrequencySecondTextChanged)
                    .on_submit(Message::CommitSecondFrequency)
                    .width(Length::FillPortion(3)),
                button(text("+")).on_press(Message::AdjustSecondFrequency(
                    DecimalStepDirection::Increase,
                )),
            ]
            .spacing(4)
            .align_y(Alignment::Center),
            row![
                text("Scale").width(Length::FillPortion(2)),
                button(text(match self.frequency_scale {
                    FrequencyScale::Linear => "Lin",
                    FrequencyScale::Logarithmic => "Log",
                }))
                .on_press(Message::ToggleFrequencyScale)
                .width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
        ]
        .spacing(8)
        .into()
    }

    fn trigger_control_panel(&self) -> Element<'_, Message> {
        column![
            text("Trigger control").size(16),
            row![
                button(text(selected_label(
                    "Mode",
                    self.trigger_editor_kind == TriggerEditorKind::Mode,
                )))
                .on_press(Message::SelectTriggerEditor(TriggerEditorKind::Mode)),
                button(text(selected_label(
                    "Source",
                    self.trigger_editor_kind == TriggerEditorKind::Source,
                )))
                .on_press(Message::SelectTriggerEditor(TriggerEditorKind::Source)),
            ]
            .spacing(4),
            row![
                text("Source mode").width(Length::FillPortion(2)),
                pick_list(
                    TRIGGER_SOURCE_OPTIONS,
                    self.trigger_source_index
                        .and_then(|index| TRIGGER_SOURCE_OPTIONS.get(index).copied()),
                    |value| Message::SelectTriggerSource(
                        TRIGGER_SOURCE_OPTIONS
                            .iter()
                            .position(|candidate| *candidate == value)
                            .unwrap_or_default(),
                    ),
                )
                .width(Length::FillPortion(3)),
            ]
            .spacing(8),
            row![
                text("Level").width(Length::FillPortion(2)),
                button(text("−")).on_press(Message::AdjustTriggerLevel(LevelAction::Decrease)),
                text_input("", &self.trigger_level_text)
                    .on_input(Message::TriggerLevelTextChanged)
                    .on_submit(Message::CommitTriggerLevel)
                    .width(Length::FillPortion(3)),
                button(text("+")).on_press(Message::AdjustTriggerLevel(LevelAction::Increase)),
            ]
            .spacing(4)
            .align_y(Alignment::Center),
            row![
                text("Setting").width(Length::FillPortion(2)),
                text(self.trigger_editor_data.secondary.to_string()).width(Length::FillPortion(3)),
            ]
            .spacing(8),
            row![
                text("Slope state").width(Length::FillPortion(2)),
                button(text(match self.trigger_slope {
                    TriggerSlopeState::ButtonUp => "Slope 0",
                    TriggerSlopeState::ButtonDown => "Slope 1",
                }))
                .on_press(Message::ToggleTriggerSlope)
                .width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
        ]
        .spacing(8)
        .into()
    }

    fn reference_control_panel(&self) -> Element<'_, Message> {
        column![
            text("Reference window").size(16),
            row![
                text("Reference").width(Length::FillPortion(2)),
                button(text("−")).on_press(Message::AdjustReferenceLevel(LevelAction::Decrease)),
                text_input("", &self.reference_level_text)
                    .on_input(Message::ReferenceLevelTextChanged)
                    .on_submit(Message::CommitReferenceLevel)
                    .width(Length::FillPortion(3)),
                button(text("+")).on_press(Message::AdjustReferenceLevel(LevelAction::Increase)),
            ]
            .spacing(4)
            .align_y(Alignment::Center),
            row![
                text("Window").width(Length::FillPortion(2)),
                pick_list(
                    MEASUREMENT_WINDOW_OPTIONS,
                    self.measurement_window_index
                        .and_then(|index| MEASUREMENT_WINDOW_OPTIONS.get(index).copied()),
                    |value| Message::SelectMeasurementWindow(
                        MEASUREMENT_WINDOW_OPTIONS
                            .iter()
                            .position(|candidate| *candidate == value)
                            .unwrap_or_default(),
                    ),
                )
                .width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
            row![
                text("Unit").width(Length::FillPortion(2)),
                button(text(match self.reference_unit {
                    ReferenceUnit::Unit0 => "Unit 0",
                    ReferenceUnit::Unit1 => "Unit 1",
                    ReferenceUnit::Source => "Source",
                }))
                .on_press(Message::CycleReferenceUnit)
                .width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
        ]
        .spacing(8)
        .into()
    }

    fn cursor_controls(&self) -> Element<'_, Message> {
        let selected_curve = self
            .selected_curve_index
            .and_then(|index| self.curve_labels.get(index))
            .map_or("No curve", String::as_str);

        column![
            text("Cursor").size(16),
            row![
                button(text("Previous")).on_press(Message::SelectPreviousCurve),
                text(selected_curve).width(Length::Fill),
                button(text("Next")).on_press(Message::SelectNextCurve),
            ]
            .spacing(4)
            .align_y(Alignment::Center),
            row![
                button(text(selected_label(
                    "A",
                    self.selected_cursor == Some(CursorId::A),
                )))
                .on_press(Message::SelectCursor(CursorId::A)),
                button(text(selected_label(
                    "B",
                    self.selected_cursor == Some(CursorId::B),
                )))
                .on_press(Message::SelectCursor(CursorId::B)),
                button(text(selected_label("On", self.cursor_button_state.is_on())))
                    .on_press(Message::ToggleSelectedCursor),
            ]
            .spacing(4),
            row![
                mouse_area(button(text("Move left")))
                    .on_press(Message::CursorMovePressed(CursorMoveDirection::Left))
                    .on_release(Message::CursorMoveReleased(CursorMoveDirection::Left)),
                mouse_area(button(text("Move right")))
                    .on_press(Message::CursorMovePressed(CursorMoveDirection::Right))
                    .on_release(Message::CursorMoveReleased(CursorMoveDirection::Right)),
            ]
            .spacing(4),
        ]
        .spacing(8)
        .into()
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    #[allow(clippy::too_many_lines)]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = self.toolbar();
        let body: Element<'_, Message> = row![
            container(scrollable(
                column![
                    row![
                        text("Channel").width(Length::FillPortion(2)),
                        pick_list(CHANNEL_OPTIONS, self.selections[0], |value| {
                            Message::OptionSelected(0, value)
                        })
                        .width(Length::FillPortion(3)),
                        button(text(selected_label(
                            "On",
                            self.channel_button_state.is_on()
                        )))
                        .on_press(Message::ToggleSelectedChannel),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    radio(
                        "Coupling AC",
                        Coupling::Ac,
                        self.coupling,
                        Message::SelectCoupling,
                    ),
                    radio(
                        "Coupling DC",
                        Coupling::Dc,
                        self.coupling,
                        Message::SelectCoupling,
                    ),
                    row![
                        text("Port1").width(Length::FillPortion(2)),
                        pick_list(["Port 1", "Port 2"], self.selections[1], |value| {
                            Message::OptionSelected(1, value)
                        })
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Port2").width(Length::FillPortion(2)),
                        pick_list(["Port 1", "Port 2"], self.selections[2], |value| {
                            Message::OptionSelected(2, value)
                        })
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Cursor A").width(Length::FillPortion(2)),
                        text_input("", &self.values[0])
                            .on_input(|value| Message::TextChanged(0, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Cursor B").width(Length::FillPortion(2)),
                        text_input("", &self.values[1])
                            .on_input(|value| Message::TextChanged(1, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    self.cursor_controls(),
                    self.control_panel(),
                ]
                .spacing(8)
            ))
            .padding(8)
            .width(Length::Fixed(300.0))
            .height(Length::Fill),
            mouse_area(window_shell::surface("Signal Analyzer display surface"))
                .on_press(Message::SurfaceMouseDown)
                .on_release(Message::SurfaceMouseUp),
        ]
        .spacing(6)
        .padding(6)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(self.analyzer_kind.title(), menu, toolbar, body, STATUS)
    }
}

fn round_ratio_i32(numerator: i64, denominator: i64) -> i32 {
    if denominator == 0 {
        return 0;
    }
    let quotient = numerator / denominator;
    let remainder = numerator % denominator;
    let rounded = if remainder.abs().saturating_mul(2) >= denominator.abs() {
        quotient + numerator.signum() * denominator.signum()
    } else {
        quotient
    };
    i32::try_from(rounded).unwrap_or_else(|_| {
        if rounded.is_negative() {
            i32::MIN
        } else {
            i32::MAX
        }
    })
}

fn default_trace_definitions() -> Vec<TraceDefinition> {
    vec![
        TraceDefinition::new("dB Magnitude", 0, 0.01, 10.0),
        TraceDefinition::new("Linear Magnitude", 1, 0.0, 1.0),
        TraceDefinition::new("Gain", 2, -20.0, 20.0),
        TraceDefinition::new("Insertion Loss", 3, -20.0, 20.0),
        TraceDefinition::new("Phase", 4, -180.0, 180.0),
        TraceDefinition::new("Bode", 5, -20.0, 20.0).with_alternate(-180.0, 180.0),
        TraceDefinition::new("Nyquist", 6, -1.0, 1.0).with_alternate(-1.0, 1.0),
        TraceDefinition::new("Group Delay", 7, -0.001, 0.001),
        TraceDefinition::new("Polar", 8, -1.0, 1.0).with_alternate(-1.0, 1.0),
        TraceDefinition::new("Smith", 9, -1.0, 1.0).with_alternate(-1.0, 1.0),
    ]
}

fn selected_label(label: &str, is_selected: bool) -> String {
    if is_selected {
        format!("{label} [selected]")
    } else {
        label.to_owned()
    }
}

#[cfg(test)]
mod tests {
    use super::{
        AcquisitionRoute, AmplitudeRange, AmplitudeUnit, AnalyzerKind, BackendCommand,
        CHANNEL_OPTIONS, CLOSE_WARNING, CURSOR_COMMAND_ID, CURVE_COMMAND_ID, ChannelTraceState,
        CloseDisposition, ControlPanel, CoordinateData, Coupling, CursorId, CursorMoveDirection,
        CurveDirection, DisplayRangeError, FrequencyPair, FrequencyRepresentation, FrequencyScale,
        InputCommitResult, LevelAction, MeasurementOutcome, MeasurementState, Message,
        READ_DATA_FAILED, ReferenceUnit, ResizePolicy, ResizeRequest, START_MEASUREMENT_COMMAND_ID,
        SurfacePointerAction, ToggleState, TraceDefinition, TriggerEditorData, TriggerEditorKind,
        TriggerSlopeState, Window,
    };
    use tiara_core::numeric_format::DecimalStepDirection;

    fn assert_close(actual: f64, expected: f64) {
        assert!((actual - expected).abs() < f64::EPSILON);
    }

    #[test]
    fn create_handler_initializes_each_analyzer_kind_and_default_trace() {
        let signal = Window::create_form(4);
        let spectrum = Window::create_form(15);
        let network = Window::create_form(8);

        assert_eq!(signal.analyzer_kind, AnalyzerKind::Signal);
        assert_eq!(signal.trace_type_index, Some(2));
        assert_eq!(spectrum.analyzer_kind, AnalyzerKind::Spectrum);
        assert_eq!(spectrum.trace_type_index, Some(1));
        assert_eq!(network.analyzer_kind, AnalyzerKind::Network);
        assert_eq!(network.trace_type_index, Some(9));
        assert!(signal.backend_commands.is_empty());
    }

    #[test]
    fn close_handler_saves_settings_and_releases_the_window() {
        let mut window = Window::default();

        window.update(Message::Close);

        assert_eq!(window.settings_save_generation, 1);
        assert_eq!(window.close_disposition, CloseDisposition::Free);
        assert_eq!(
            window.take_backend_commands(),
            vec![BackendCommand::SaveSettings]
        );
    }

    #[test]
    fn channel_change_loads_channel_state_and_activates_it() {
        let mut window = Window::default();
        window.set_channel_configuration(3, Coupling::Ac, [0.1, 1.0, 10.0], 1, false);

        window.select_channel(3);

        assert_eq!(window.selected_channel_index, Some(3));
        assert!(window.channels[3].enabled);
        assert_eq!(window.channels[3].traces, ChannelTraceState::Attached);
        assert_eq!(window.coupling, Some(Coupling::Ac));
        assert_close(window.amplitude_display_value, 1.0);
        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::SelectChannel { channel_index: 3 },
                BackendCommand::ChannelEnabled {
                    channel_index: 3,
                    enabled: true,
                },
                BackendCommand::Coupling(Coupling::Ac),
            ]
        );
    }

    #[test]
    fn amplitude_arrow_handlers_keep_the_range_index_in_bounds() {
        let mut window = Window::default();
        window.set_channel_configuration(0, Coupling::Dc, [0.1, 1.0, 10.0], 1, true);
        window.select_channel(0);
        let _ = window.take_backend_commands();

        window.decrease_amplitude_range();
        window.decrease_amplitude_range();
        assert_eq!(window.channels[0].amplitude_range_index, 0);
        assert_close(window.amplitude_display_value, 0.1);

        window.increase_amplitude_range();
        window.increase_amplitude_range();
        window.increase_amplitude_range();
        assert_eq!(window.channels[0].amplitude_range_index, 2);
        assert_close(window.amplitude_display_value, 10.0);
    }

    #[test]
    fn frequency_arrow_handlers_update_start_stop_and_center_span_pairs() {
        let mut window = Window::default();
        window.set_frequency_values(
            FrequencyPair::new(10.0, 100.0),
            FrequencyPair::new(55.0, 90.0),
        );

        window.increase_first_frequency();
        assert_eq!(
            window.start_stop_frequencies,
            FrequencyPair::new(20.0, 100.0)
        );
        assert_eq!(
            window.center_span_frequencies,
            FrequencyPair::new(60.0, 80.0)
        );

        window.frequency_representation = FrequencyRepresentation::CenterSpan;
        window.decrease_second_frequency();
        assert_close(window.center_span_frequencies.second, 70.0);
        assert_eq!(
            window.start_stop_frequencies,
            FrequencyPair::new(25.0, 95.0)
        );
    }

    #[test]
    fn resolution_arrow_handlers_apply_a_minimum_of_one() {
        let mut window = Window::default();

        window.decrease_resolution();
        window.decrease_resolution();
        assert_eq!(window.resolution, 1);
        window.increase_resolution();
        assert_eq!(window.resolution, 2);
    }

    #[test]
    fn paint_and_measurement_mode_handlers_request_targeted_refreshes() {
        let mut window = Window::default();

        window.paint_surface();
        window.select_measurement_mode(0);
        window.select_measurement_mode(1);

        assert_eq!(window.surface_paint_generation, 1);
        assert_eq!(window.measurement_mode_index, Some(0));
        assert_eq!(window.measurement_rebuild_generation, 1);
        assert_eq!(window.plot_refresh_generation, 1);
    }

    #[test]
    fn trace_type_change_applies_primary_and_secondary_ranges() {
        let mut window = Window::default();
        window.set_trace_definitions([
            TraceDefinition::new("Magnitude", 2, -20.0, 20.0),
            TraceDefinition::new("Bode", 5, -40.0, 40.0).with_alternate(-180.0, 180.0),
        ]);

        window.select_trace_type(1);

        assert_eq!(window.trace_type_index, Some(1));
        assert_eq!(window.display_coordinates.base.caption, "Bode");
        assert_close(window.display_coordinates.base.low, -40.0);
        assert_close(window.display_coordinates.base.high, 40.0);
        assert_eq!(
            window
                .display_coordinates
                .alternate
                .as_ref()
                .map(|value| (value.low, value.high)),
            Some((-180.0, 180.0))
        );
    }

    #[test]
    fn display_arrow_handlers_reject_crossed_bounds_and_clamp_smith_ranges() {
        let mut window = Window::default();
        window.set_trace_definitions([TraceDefinition::new("Smith", 9, -1.0, 1.0)]);
        window.select_trace_type(0);
        let _ = window.take_backend_commands();

        window.increase_display_high();
        assert_close(window.display_coordinates.displayed.high, 1.0);
        window.display_coordinates.displayed.low = 0.9;
        window.display_coordinates.base.low = 0.9;
        window.decrease_display_high();

        assert_eq!(
            window.last_range_error,
            Some(DisplayRangeError::HighMustBeAboveLow)
        );
        assert_close(window.display_coordinates.displayed.high, 1.0);

        window.adjust_display_bound(false, DecimalStepDirection::Decrease);
        assert!(window.display_coordinates.displayed.low < 0.9);
        assert_eq!(window.last_range_error, None);
    }

    #[test]
    fn frequency_edit_handlers_commit_enter_and_exit_and_restore_parser_errors() {
        let mut window = Window::default();
        window.set_frequency_values(
            FrequencyPair::new(10.0, 100.0),
            FrequencyPair::new(55.0, 90.0),
        );

        window.frequency_first_text = String::from("20");
        assert_eq!(
            window.commit_first_frequency_on_key('x'),
            InputCommitResult::Ignored
        );
        assert_eq!(
            window.commit_first_frequency_on_key('\r'),
            InputCommitResult::Committed
        );
        assert_close(window.start_stop_frequencies.first, 20.0);

        window.frequency_second_text = String::from("not a number");
        assert_eq!(
            window.commit_second_frequency_on_exit(),
            InputCommitResult::Invalid
        );
        assert_eq!(window.frequency_second_text, "100");
        window.frequency_second_text = String::from("120");
        assert_eq!(
            window.commit_second_frequency_on_exit(),
            InputCommitResult::Committed
        );
        assert_close(window.start_stop_frequencies.second, 120.0);
    }

    #[test]
    fn resolution_edit_handlers_normalize_values_and_restore_invalid_text() {
        let mut window = Window {
            resolution_text: String::from("invalid"),
            ..Window::default()
        };
        assert_eq!(
            window.commit_resolution_on_key('\r'),
            InputCommitResult::Invalid
        );
        assert_eq!(window.resolution_text, "2");

        window.resolution_text = String::from("0");
        assert_eq!(
            window.commit_resolution_on_exit(),
            InputCommitResult::Committed
        );
        assert_eq!(window.resolution, 1);
        assert_eq!(window.resolution_text, "1");
    }

    #[test]
    fn display_edit_handlers_commit_valid_bounds_and_restore_invalid_values() {
        let mut window = Window::default();
        window.set_trace_definitions([TraceDefinition::new("Gain", 2, -20.0, 20.0)]);
        window.select_trace_type(0);
        let _ = window.take_backend_commands();

        window.display_low_text = String::from("-10");
        assert_eq!(
            window.commit_display_low_on_exit(),
            InputCommitResult::Committed
        );
        assert_close(window.display_coordinates.displayed.low, -10.0);

        window.display_high_text = String::from("-15");
        assert_eq!(
            window.commit_display_high_on_key('\r'),
            InputCommitResult::Invalid
        );
        assert_eq!(window.display_high_text, "20");
        assert_eq!(
            window.last_range_error,
            Some(DisplayRangeError::HighMustBeAboveLow)
        );

        window.display_low_text = String::from("invalid");
        assert_eq!(
            window.commit_display_low_on_key('\r'),
            InputCommitResult::Invalid
        );
        assert_eq!(window.display_low_text, "-10");
    }

    #[test]
    fn destroy_handler_releases_owned_window_collections() {
        let mut window = Window::create_form(4);
        window.set_curves([String::from("Curve")]);
        window.set_curve_export_context(5, Some(String::from("Current")));

        window.update(Message::Destroy);

        assert!(window.destroyed);
        assert!(window.channels.is_empty());
        assert!(window.trace_definitions.is_empty());
        assert!(window.curve_labels.is_empty());
        assert_eq!(window.current_curve, None);
    }

    #[test]
    fn process_selection_clears_none_and_enables_only_nonzero_modes() {
        let mut window = Window::default();

        window.select_process(Some(0));
        assert!(!window.process_label_enabled);
        assert_eq!(window.process_label, "Hide distortion");
        window.select_process(Some(1));
        assert!(window.process_label_enabled);
        assert_eq!(window.process_label, "THD");
        assert_eq!(window.process_refresh_generation, 2);

        window.select_process(None);
        assert_eq!(window.process_selection, None);
        assert!(!window.process_label_enabled);
        assert!(window.process_label.is_empty());
    }

    #[test]
    fn cursor_mouse_handlers_start_repeat_and_stop_only_the_matching_direction() {
        let mut window = Window::default();

        window.press_cursor_move_left();
        window.release_cursor_move_right();
        assert!(window.cursor_move_pressed);
        window.release_cursor_move_left();
        assert!(!window.cursor_move_pressed);

        window.press_cursor_move_right();
        window.release_cursor_move_right();
        assert_eq!(window.cursor_move_generation, 2);
        assert_eq!(window.cursor_release_generation, 2);
        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::CursorMoveStart {
                    direction: CursorMoveDirection::Left,
                    repeat_ms: 300,
                },
                BackendCommand::CursorMoveStop,
                BackendCommand::CursorMoveStart {
                    direction: CursorMoveDirection::Right,
                    repeat_ms: 300,
                },
                BackendCommand::CursorMoveStop,
            ]
        );
    }

    #[test]
    fn coupling_handlers_preserve_backend_modes_and_dc_state_clear() {
        let mut window = Window {
            selected_channel_flag_0x38: ToggleState::On,
            ..Window::default()
        };

        window.update(Message::SelectCoupling(Coupling::Ac));
        assert!(window.selected_channel_flag_0x38.is_on());
        window.update(Message::SelectCoupling(Coupling::Dc));

        assert_eq!(window.coupling, Some(Coupling::Dc));
        assert!(!window.selected_channel_flag_0x38.is_on());
        assert_eq!(Coupling::Dc.backend_mode(), 0);
        assert_eq!(Coupling::Ac.backend_mode(), 1);
        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::Coupling(Coupling::Ac),
                BackendCommand::Coupling(Coupling::Dc),
            ]
        );
    }

    #[test]
    fn amplitude_handlers_preserve_automatic_and_manual_modes() {
        let mut window = Window::default();

        window.update(Message::SelectAmplitudeRange(AmplitudeRange::Automatic));
        window.update(Message::SelectAmplitudeRange(AmplitudeRange::Manual));

        assert_eq!(window.amplitude_range, Some(AmplitudeRange::Manual));
        assert_eq!(AmplitudeRange::Automatic.backend_mode(), 0);
        assert_eq!(AmplitudeRange::Manual.backend_mode(), 1);
        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::AmplitudeRange(AmplitudeRange::Automatic),
                BackendCommand::AmplitudeRange(AmplitudeRange::Manual),
            ]
        );
    }

    #[test]
    fn trigger_slope_uses_the_toggled_button_state() {
        let mut window = Window::default();

        window.update(Message::ToggleTriggerSlope);
        window.update(Message::ToggleTriggerSlope);

        assert_eq!(window.trigger_slope, TriggerSlopeState::ButtonUp);
        assert_eq!(TriggerSlopeState::ButtonUp.backend_value(), 0);
        assert_eq!(TriggerSlopeState::ButtonDown.backend_value(), 1);
        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::TriggerSlope(TriggerSlopeState::ButtonDown),
                BackendCommand::TriggerSlope(TriggerSlopeState::ButtonUp),
            ]
        );
    }

    #[test]
    fn panel_handlers_keep_exactly_one_control_panel_active() {
        let mut window = Window::default();

        window.update(Message::ShowControlPanel(ControlPanel::Trigger));
        assert_eq!(window.control_panel, ControlPanel::Trigger);

        window.update(Message::ShowControlPanel(ControlPanel::ReferenceWindow));
        assert_eq!(window.control_panel, ControlPanel::ReferenceWindow);

        window.update(Message::ShowControlPanel(ControlPanel::Display));
        assert_eq!(window.control_panel, ControlPanel::Display);
        assert!(window.take_backend_commands().is_empty());
    }

    #[test]
    fn display_coordinate_handler_selects_available_data_and_rejects_missing_alternate() {
        let mut window = Window::default();
        window.set_display_coordinate_data(CoordinateData::new("Voltage", 12.0, -3.0), None);
        window.display_coordinates.alternate_selected = true;

        window.apply_display_coordinate_button();

        assert!(!window.display_coordinates.alternate_selected);
        assert_eq!(window.display_coordinates.displayed.caption, "Voltage");

        window.set_display_coordinate_data(
            CoordinateData::new("Voltage", 12.0, -3.0),
            Some(CoordinateData::new("Gain", 20.0, -40.0)),
        );
        window.update(Message::ToggleDisplayCoordinates);

        assert!(window.display_coordinates.alternate_selected);
        assert_eq!(window.display_coordinates.displayed.caption, "Gain");
        assert!((window.display_coordinates.displayed.high - 20.0).abs() < f64::EPSILON);
        assert!((window.display_coordinates.displayed.low + 40.0).abs() < f64::EPSILON);
    }

    #[test]
    fn curve_handlers_preserve_direction_values_and_wrap_local_selection() {
        let mut window = Window::default();
        window.set_curves(["Curve 1", "Curve 2", "Curve 3"].map(str::to_owned));

        window.update(Message::SelectPreviousCurve);
        assert_eq!(window.selected_curve_index, Some(1));
        window.update(Message::SelectNextCurve);
        assert_eq!(window.selected_curve_index, Some(0));
        window.update(Message::SelectNextCurve);
        assert_eq!(window.selected_curve_index, Some(2));

        assert_eq!(CurveDirection::Previous.command_direction(), 1);
        assert_eq!(CurveDirection::Next.command_direction(), 0);
        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::CurveNavigation {
                    command: CURVE_COMMAND_ID,
                    direction: CurveDirection::Previous,
                },
                BackendCommand::CurveNavigation {
                    command: CURVE_COMMAND_ID,
                    direction: CurveDirection::Next,
                },
                BackendCommand::CurveNavigation {
                    command: CURVE_COMMAND_ID,
                    direction: CurveDirection::Next,
                },
            ]
        );
    }

    #[test]
    fn cursor_handlers_synchronize_shared_state_for_each_selection() {
        let mut window = Window::default();

        window.update(Message::SelectCursor(CursorId::A));
        window.update(Message::ToggleSelectedCursor);
        assert!(window.cursor_enabled[CursorId::A.index()]);

        window.update(Message::SelectCursor(CursorId::B));
        assert!(!window.cursor_button_state.is_on());
        window.update(Message::ToggleSelectedCursor);
        assert!(window.cursor_enabled[CursorId::B.index()]);

        window.update(Message::SelectCursor(CursorId::A));
        assert!(window.cursor_button_state.is_on());
        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::CursorToggle {
                    command: CURSOR_COMMAND_ID,
                    cursor: Some(CursorId::A),
                    enabled: true,
                },
                BackendCommand::CursorToggle {
                    command: CURSOR_COMMAND_ID,
                    cursor: Some(CursorId::B),
                    enabled: true,
                },
            ]
        );
    }

    #[test]
    fn cursor_toggle_without_a_selection_has_no_local_cursor_effect() {
        let mut window = Window::default();

        window.update(Message::ToggleSelectedCursor);

        assert_eq!(window.cursor_enabled, [false; 2]);
        assert_eq!(
            window.take_backend_commands(),
            vec![BackendCommand::CursorToggle {
                command: CURSOR_COMMAND_ID,
                cursor: None,
                enabled: true,
            }]
        );
    }

    #[test]
    fn frequency_mode_switches_between_saved_value_pairs_and_repeated_state_is_noop() {
        let mut window = Window::default();
        window.set_frequency_values(
            FrequencyPair::new(10.0, 100.0),
            FrequencyPair::new(55.0, 90.0),
        );

        window.apply_frequency_mode_button(false);
        assert_eq!(
            window.frequency_representation,
            FrequencyRepresentation::StartStop
        );

        window.update(Message::ToggleFrequencyRepresentation);
        assert_eq!(
            window.frequency_representation,
            FrequencyRepresentation::CenterSpan
        );
        let displayed = window.displayed_frequencies();
        assert!((displayed.first - 55.0).abs() < f64::EPSILON);
        assert!((displayed.second - 90.0).abs() < f64::EPSILON);

        window.update(Message::ToggleFrequencyRepresentation);
        assert_eq!(
            window.frequency_representation,
            FrequencyRepresentation::StartStop
        );
    }

    #[test]
    fn frequency_scale_always_applies_backend_state_and_refreshes_only_when_changed() {
        let mut window = Window::default();

        window.apply_frequency_scale_button(false);
        assert_eq!(window.plot_refresh_generation, 0);
        window.apply_frequency_scale_button(true);
        assert_eq!(window.plot_refresh_generation, 1);
        window.apply_frequency_scale_button(true);
        assert_eq!(window.plot_refresh_generation, 1);

        assert_eq!(window.frequency_scale, FrequencyScale::Logarithmic);
        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::FrequencyScale(FrequencyScale::Linear),
                BackendCommand::FrequencyScale(FrequencyScale::Logarithmic),
                BackendCommand::FrequencyScale(FrequencyScale::Logarithmic),
            ]
        );
    }

    #[test]
    fn channel_handler_is_noop_without_selection_and_updates_selected_channel_traces() {
        let mut window = Window::default();

        window.apply_channel_on_button();
        assert!(window.take_backend_commands().is_empty());

        window.update(Message::OptionSelected(0, CHANNEL_OPTIONS[1]));
        window.update(Message::ToggleSelectedChannel);
        assert!(!window.channels[1].enabled);
        assert_eq!(window.channels[1].traces, ChannelTraceState::Detached);

        window.update(Message::ToggleSelectedChannel);
        assert!(window.channels[1].enabled);
        assert_eq!(window.channels[1].traces, ChannelTraceState::Attached);
        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::SelectChannel { channel_index: 1 },
                BackendCommand::ChannelEnabled {
                    channel_index: 1,
                    enabled: true,
                },
                BackendCommand::Coupling(Coupling::Dc),
                BackendCommand::ChannelEnabled {
                    channel_index: 1,
                    enabled: false,
                },
                BackendCommand::ChannelEnabled {
                    channel_index: 1,
                    enabled: true,
                },
            ]
        );
    }

    #[test]
    fn amplitude_unit_cycles_modulo_two_and_accepts_backend_conversion() {
        let mut window = Window::default();
        window.update(Message::OptionSelected(0, CHANNEL_OPTIONS[0]));
        let _ = window.take_backend_commands();

        window.update(Message::CycleAmplitudeUnit);
        assert_eq!(window.amplitude_unit, AmplitudeUnit::Unit1);
        window.update(Message::AmplitudeConverted(2.5));
        assert!((window.amplitude_display_value - 2.5).abs() < f64::EPSILON);
        window.update(Message::CycleAmplitudeUnit);
        assert_eq!(window.amplitude_unit, AmplitudeUnit::Unit0);
        assert_eq!(AmplitudeUnit::Unit0.index(), 0);
        assert_eq!(AmplitudeUnit::Unit1.index(), 1);

        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::AmplitudeConversion {
                    channel_index: Some(0),
                    unit: AmplitudeUnit::Unit1,
                },
                BackendCommand::AmplitudeConversion {
                    channel_index: Some(0),
                    unit: AmplitudeUnit::Unit0,
                },
            ]
        );
    }

    #[test]
    fn trigger_editor_changes_only_for_an_active_different_selector() {
        let mut window = Window::default();
        window.set_trigger_backend_data(
            TriggerEditorData::new(1.5, 2),
            TriggerEditorData::new(3.5, 4),
        );

        window.select_trigger_source_data(true);
        window.select_trigger_mode_data(false);
        assert!(window.take_backend_commands().is_empty());

        window.select_trigger_mode_data(true);
        assert_eq!(window.trigger_editor_kind, TriggerEditorKind::Mode);
        assert!((window.trigger_editor_data.primary - 1.5).abs() < f64::EPSILON);
        assert_eq!(window.trigger_editor_data.secondary, 2);
        window.select_trigger_mode_data(true);

        window.select_trigger_source_data(true);
        assert_eq!(window.trigger_editor_kind, TriggerEditorKind::Source);
        assert!((window.trigger_editor_data.primary - 3.5).abs() < f64::EPSILON);
        assert_eq!(window.trigger_editor_data.secondary, 4);
        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::TriggerEditor(TriggerEditorKind::Mode),
                BackendCommand::TriggerEditor(TriggerEditorKind::Source),
            ]
        );
    }

    #[test]
    fn reference_unit_cycles_modulo_three_and_applies_source_power_transform() {
        let mut window = Window::default();
        window.set_reference_context(10.0, 4);

        window.update(Message::CycleReferenceUnit);
        assert_eq!(window.reference_unit, ReferenceUnit::Unit1);
        window.update(Message::ReferenceConverted(2.5));
        assert!((window.reference_display_value - 2.5).abs() < f64::EPSILON);

        window.update(Message::CycleReferenceUnit);
        assert_eq!(window.reference_unit, ReferenceUnit::Source);
        assert!((window.reference_display_value - 1.0).abs() < f64::EPSILON);
        assert!(window.reference_power_mode.is_on());

        window.update(Message::CycleReferenceUnit);
        assert_eq!(window.reference_unit, ReferenceUnit::Unit0);
        assert_eq!(window.reference_update_generation, 3);
        assert_eq!(ReferenceUnit::Unit0.index(), 0);
        assert_eq!(ReferenceUnit::Unit1.index(), 1);
        assert_eq!(ReferenceUnit::Source.index(), 2);
        assert_eq!(window.take_backend_commands().len(), 3);
    }

    #[test]
    fn source_reference_keeps_the_untransformed_value_outside_power_modes() {
        let mut window = Window::default();
        window.set_reference_context(10.0, 3);

        window.cycle_reference_unit();
        window.cycle_reference_unit();

        assert_eq!(window.reference_unit, ReferenceUnit::Source);
        assert!((window.reference_display_value - 10.0).abs() < f64::EPSILON);
        assert!(!window.reference_power_mode.is_on());
    }

    #[test]
    fn local_measurement_start_activates_progress_and_backend_acquisition() {
        let mut window = Window::default();

        window.update(Message::StartMeasurement);

        assert_eq!(window.measurement_state, MeasurementState::Active);
        assert!(window.progress_visible.is_on());
        assert!(!window.measurement_controls_enabled.is_on());
        assert!(window.source_acquisition_active.is_on());
        assert!(!window.stop_requested.is_on());
        assert_eq!(
            window.take_backend_commands(),
            vec![BackendCommand::StartMeasurement {
                command: START_MEASUREMENT_COMMAND_ID,
                route: AcquisitionRoute::Local,
            }]
        );
    }

    #[test]
    fn non_local_measurement_routes_do_not_activate_local_progress_state() {
        for route in [AcquisitionRoute::NotReady, AcquisitionRoute::Remote] {
            let mut window = Window::default();
            window.set_acquisition_route(route);

            window.start_measurement();

            assert_eq!(window.measurement_state, MeasurementState::Idle);
            assert!(!window.progress_visible.is_on());
            assert!(window.measurement_controls_enabled.is_on());
            assert!(!window.source_acquisition_active.is_on());
            assert_eq!(
                window.take_backend_commands(),
                vec![BackendCommand::StartMeasurement {
                    command: START_MEASUREMENT_COMMAND_ID,
                    route,
                }]
            );
        }
    }

    #[test]
    fn stop_request_is_always_recorded_but_only_active_measurement_calls_backend() {
        let mut window = Window::default();

        window.request_measurement_stop();

        assert!(window.stop_requested.is_on());
        assert_eq!(window.measurement_state, MeasurementState::Idle);
        assert!(window.take_backend_commands().is_empty());

        window.start_measurement();
        let _ = window.take_backend_commands();
        window.set_reference_context(0.0, 8);
        window.request_measurement_stop();

        assert_eq!(window.measurement_state, MeasurementState::StopRequested);
        assert!(!window.progress_visible.is_on());
        assert!(!window.source_acquisition_active.is_on());
        assert_eq!(
            window.take_backend_commands(),
            vec![BackendCommand::StopMeasurement]
        );
    }

    #[test]
    fn mode_four_stop_preserves_source_when_backend_clear_condition_is_false() {
        let mut window = Window::default();
        window.start_measurement();
        let _ = window.take_backend_commands();
        window.set_reference_context(0.0, 4);
        window.set_source_stop_clear_allowed(false);

        window.request_measurement_stop();

        assert!(window.source_acquisition_active.is_on());
        assert_eq!(window.measurement_state, MeasurementState::StopRequested);
    }

    #[test]
    fn measurement_finish_restores_controls_and_records_read_failure() {
        let mut window = Window::default();
        window.start_measurement();

        window.update(Message::MeasurementFinished(MeasurementOutcome::ReadFailed));

        assert_eq!(window.measurement_state, MeasurementState::Idle);
        assert!(!window.progress_visible.is_on());
        assert!(window.measurement_controls_enabled.is_on());
        assert!(!window.source_acquisition_active.is_on());
        assert_eq!(window.last_measurement_error, Some(READ_DATA_FAILED));

        window.finish_measurement(MeasurementOutcome::Completed);
        assert_eq!(window.last_measurement_error, None);
    }

    #[test]
    fn data_load_only_dispatches_the_unresolved_virtual_operation() {
        let mut window = Window::default();

        window.update(Message::LoadData);

        assert_eq!(window.data_load_request_generation, 1);
        assert_eq!(
            window.take_backend_commands(),
            vec![BackendCommand::LoadData]
        );
    }

    #[test]
    fn data_save_publishes_only_a_type_five_current_curve() {
        let mut window = Window::default();
        window.set_curve_export_context(4, Some("Curve 1".to_owned()));
        window.publish_current_curve();
        assert_eq!(window.current_curve.as_deref(), Some("Curve 1"));
        assert!(window.take_backend_commands().is_empty());

        window.set_curve_export_context(5, None);
        window.publish_current_curve();
        assert!(window.take_backend_commands().is_empty());

        window.set_curve_export_context(5, Some("Curve 2".to_owned()));
        window.update(Message::SaveData);

        assert_eq!(window.current_curve, None);
        assert_eq!(window.analysis_workspace_curve.as_deref(), Some("Curve 2"));
        assert_eq!(window.memory_curve_writer_count, 2);
        assert_eq!(
            window.take_backend_commands(),
            vec![BackendCommand::PublishCurve {
                curve_id: "Curve 2".to_owned(),
            }]
        );
    }

    #[test]
    fn source_control_is_noop_when_unavailable_and_selects_supported_modes() {
        let mut window = Window::default();

        window.update(Message::OpenSourceControl);
        assert!(!window.source_window_visible.is_on());
        assert!(window.take_backend_commands().is_empty());

        window.set_source_window_available(true);
        window.set_reference_context(0.0, 4);
        window.open_source_control();
        assert!(window.source_window_visible.is_on());
        assert_eq!(window.source_window_selected_mode, Some(4));

        window.set_reference_context(0.0, 3);
        window.open_source_control();
        assert_eq!(window.source_window_selected_mode, None);
        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::ShowSourceControl { analyzer_mode: 4 },
                BackendCommand::ShowSourceControl { analyzer_mode: 3 },
            ]
        );
    }

    #[test]
    fn close_query_blocks_application_exit_until_the_instrument_allows_close() {
        let mut window = Window::default();

        assert!(!window.query_close(true, true));
        assert_eq!(window.close_warning, Some(CLOSE_WARNING));
        assert!(window.query_close(true, false));
        assert_eq!(window.close_warning, None);
        assert!(window.query_close(false, true));
    }

    #[test]
    fn trigger_source_and_level_controls_preserve_the_recovered_backend_routes() {
        let mut window = Window {
            trigger_source_uses_alternate_backend: ToggleState::On,
            trigger_editor_data: TriggerEditorData::new(10.0, 0),
            trigger_level_text: String::from("12.5"),
            ..Window::default()
        };

        window.select_trigger_source(1);
        window.decrease_trigger_level();
        assert!((window.trigger_editor_data.primary - 9.0).abs() < f64::EPSILON);
        assert_eq!(
            window.commit_trigger_level_on_exit(),
            InputCommitResult::Committed
        );
        assert!((window.trigger_editor_data.primary - 9.0).abs() < f64::EPSILON);

        window.trigger_level_text = String::from("12.5");
        assert_eq!(
            window.commit_trigger_level_on_exit(),
            InputCommitResult::Committed
        );
        assert!((window.trigger_editor_data.primary - 12.5).abs() < f64::EPSILON);
        window.increase_trigger_level();
        assert!((window.trigger_editor_data.primary - 20.0).abs() < f64::EPSILON);
        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::TriggerSource {
                    index: 1,
                    alternate_backend: true,
                },
                BackendCommand::TriggerLevel(LevelAction::Decrease),
                BackendCommand::TriggerLevel(LevelAction::Commit),
                BackendCommand::TriggerLevel(LevelAction::Commit),
                BackendCommand::TriggerLevel(LevelAction::Increase),
            ]
        );
    }

    #[test]
    fn first_show_selects_mode_specific_groups_and_measurement_window() {
        let mut window = Window::create_form(8);

        window.show_form();
        window.select_measurement_window(2);

        assert!(window.shown.is_on());
        assert!(!window.first_show_pending.is_on());
        assert!(!window.source_group_visible.is_on());
        assert!(window.reference_group_visible.is_on());
        assert!(!window.alternate_group_visible.is_on());
        assert_eq!(window.measurement_window_index, Some(2));
        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::RefreshShownLayout,
                BackendCommand::MeasurementWindow(2),
            ]
        );
    }

    #[test]
    fn reference_level_handlers_ignore_source_mode_and_restore_invalid_text() {
        let mut window = Window {
            reference_display_value: 10.0,
            reference_level_text: String::from("invalid"),
            ..Window::default()
        };

        assert_eq!(
            window.commit_reference_level_on_exit(),
            InputCommitResult::Invalid
        );
        assert_eq!(window.reference_level_text, "10");
        window.decrease_reference_level();
        assert!((window.reference_display_value - 9.0).abs() < f64::EPSILON);

        window.reference_unit = ReferenceUnit::Source;
        window.increase_reference_level();
        assert!((window.reference_display_value - 9.0).abs() < f64::EPSILON);
        assert_eq!(
            window.take_backend_commands(),
            vec![BackendCommand::ReferenceLevel(LevelAction::Decrease)]
        );
    }

    #[test]
    fn resize_policy_keeps_the_recovered_minimum_width_and_aspect_relation() {
        let mut window = Window {
            resize_policy: ResizePolicy {
                current_width: 800,
                reference_width: 900,
                layout_top: 600,
                plot_top: 100,
                preserve_aspect: true,
            },
            ..Window::default()
        };

        let decision = window.can_resize(
            ResizeRequest {
                width: 300,
                height: 1_200,
            },
            900,
        );

        assert!(decision.allowed);
        assert_eq!(decision.request.width, 600);
        assert_eq!(decision.request.height, 567);
        window.resize_form(decision.request);
        assert_eq!(window.resize_generation, 1);
        assert_eq!(
            window.take_backend_commands(),
            vec![BackendCommand::ResizeLayout(decision.request)]
        );
    }

    #[test]
    fn surface_and_hide_wrappers_preserve_event_order() {
        let mut window = Window {
            shown: ToggleState::On,
            ..Window::default()
        };

        window.surface_double_click();
        window.surface_mouse_down();
        window.surface_mouse_move();
        window.surface_mouse_up();
        window.hide_form();

        assert!(!window.shown.is_on());
        assert_eq!(window.surface_pointer_generation, 4);
        assert_eq!(
            window.surface_pointer_action,
            Some(SurfacePointerAction::Up)
        );
        assert_eq!(
            window.take_backend_commands(),
            vec![
                BackendCommand::SurfacePointer(SurfacePointerAction::DoubleClick),
                BackendCommand::SurfacePointer(SurfacePointerAction::Down),
                BackendCommand::SurfacePointer(SurfacePointerAction::Move),
                BackendCommand::SurfacePointer(SurfacePointerAction::Up),
            ]
        );
    }
}
