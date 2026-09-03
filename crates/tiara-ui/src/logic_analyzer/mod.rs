//! Iced adapter for the recovered Logic Analyzer window.
//!
//! The Digital Signal Generator controls were evaluated as a maintained-library
//! source. This module reuses its direction and editor concepts, but it keeps a
//! separate analyzer model because acquired curves, trigger groups, patterns,
//! and acquisition lifecycle state do not belong to generator state.

use std::fmt;

use iced::keyboard::{Key, Modifiers};
use iced::widget::{
    button, checkbox, column, container, pick_list, row, scrollable, text, text_input,
};
use iced::{Alignment, Element, Length};
use tiara_core::logic_analyzer::{
    AcquisitionLifecycle, AnalyzerModel, AxisWindow, DigitalCurve, HorizontalBounds,
    VerticalDirection,
};

use crate::shared::window_shell;

pub const TITLE: &str = "Logic Analyzer";
pub const SCREENSHOT: &str = "screenshots/Logic_Analyzer_Window.png";
pub const FORM_RESOURCE: &str = "LogicAnalyzerWin";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("0151e740");
const STATUS: &str = "Digital waveform display";
const TOOLBAR: &[&str] = &["Start", "Stop", "Display...", "Trigger..."];
const ICON_RESOURCE: &str = "bmLogAn";
const CLOSE_WARNING: &str = "Please close all measurement\r\ninstruments before exiting TINA.";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TriggerChoiceEditor {
    Source,
    Mode,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TriggerValueEditor {
    Delay,
    Position,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MeasurementChoiceEditor {
    Clock,
    Threshold,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MeasurementValueEditor {
    Period,
    Length,
    Timeout,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CoordinateSide {
    Left,
    Right,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HorizontalDirection {
    Left,
    Right,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CoordinateStepDirection {
    Decrease,
    Increase,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MeasurementStepDirection {
    Decrease,
    Increase,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum GroupLabelCommitStep {
    CopyPatternGroups,
    SelectFirstPatternGroup,
    RefreshPatternView,
    ReindexEnabledChannels,
    ApplyEnabledChannels,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ChannelGroupSelectionStep {
    LoadChannelRange,
    SelectEndpointChannel,
    RefreshSelectedChannel,
    LoadEnabledState,
    LoadGroupLabel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ChannelLabelKeyRequest {
    pub key: char,
    pub edited_channel_index: usize,
    pub active_channel_index: usize,
    pub text: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PatternEditableRegion {
    pub protected_prefix: usize,
    pub protected_suffix: usize,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PatternEditSelection {
    pub index: usize,
    pub text: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorMarker {
    A,
    B,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorMoveDirection {
    Left,
    Right,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorMoveStartBound {
    VisibleLeft,
    VisibleRight,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorOrderConstraint {
    CursorBAfterAByOnePeriod,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct LogicAnalyzerResizePolicy {
    pub run_base_layout: bool,
    pub scroll_scale_factor: u8,
    pub default_display_inset: u16,
    pub preserve_panel_height_in_compact_mode: bool,
    pub panel_height_scale_tenths: u8,
    pub reference_height_scale_tenths: u8,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DisplaySurfaceEvent {
    DoubleClick,
    MouseDown,
    MouseMove,
    MouseUp {
        constrained_mode: u8,
        order_constraint: CursorOrderConstraint,
        synchronize_cursors: bool,
    },
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum UiAction {
    LoadData,
    SaveData,
    Start,
    Stop,
    RefreshGroups,
    StepMeasurementValue {
        target: MeasurementValueEditor,
        direction: MeasurementStepDirection,
    },
    ApplyTraceTypeSelection {
        trace_type_code: u8,
        display_mode_code: u8,
    },
    ApplyClockPeriodEdit,
    RestoreClockPeriodEditorValue,
    ApplyIntegerMeasurementEdit(MeasurementValueEditor),
    RestoreIntegerMeasurementEditorValue(MeasurementValueEditor),
    RestoreTriggerPosition(TriggerPositionValueSource),
    ApplyTriggerPositionEdit(TriggerPositionValueSource),
    StepTriggerPosition {
        source: TriggerPositionValueSource,
        direction: TriggerPositionStepDirection,
    },
    StepCoordinate(CoordinateStepDirection),
    ApplyTypedCoordinateEdit {
        commit: bool,
    },
    CommitGroupLabel {
        label: String,
        follow_up: [GroupLabelCommitStep; 5],
    },
    HandleChannelLabelKey {
        consumed: bool,
        committed_label: Option<String>,
    },
    SynchronizeChannelSelection(usize),
    SelectChannelGroup {
        index: usize,
        synchronize: [ChannelGroupSelectionStep; 5],
    },
    ConstrainPatternEditor {
        key: Key,
        modifiers: Modifiers,
        editable_region: PatternEditableRegion,
    },
    RefreshPatternGroupFromBackend(usize),
    BeginCursorMove {
        cursor: CursorMarker,
        direction: CursorMoveDirection,
        start_bound: CursorMoveStartBound,
    },
    EndCursorMove {
        cursor: CursorMarker,
        direction: CursorMoveDirection,
        order_constraint: Option<CursorOrderConstraint>,
    },
    ResizeLayout(LogicAnalyzerResizePolicy),
    ApplySharedResizeConstraints,
    SetInstrumentVisible(bool),
    DisplaySurface(DisplaySurfaceEvent),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum LogicAnalyzerCreateStep {
    LoadIcon(&'static str),
    InitializeInheritedWindow,
    InitializeInstrumentBase { mode: u8 },
    ConstructVirtualBackend,
    ConstructHardwareBackend,
    InitializeHardwareBackend,
    InitializeBackend,
    AppendBackendNameToCaption,
    ApplyRecoveredPalette,
    SetCursorControlsEnabled(bool),
    InitializePrimaryDisplay,
    InitializeSecondaryDisplay,
    ResetAcquisitionState,
    SetHelpContext(u16),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum LogicAnalyzerDestroyStep {
    ShutdownBackend,
    ReleaseBackend,
    DestroyInheritedWindow,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct LogicAnalyzerShowConfiguration {
    pub trace_count: usize,
    pub reference_duration: f64,
    pub sample_count: u16,
    pub clock_period: f64,
    pub measurement_length: i32,
    pub timeout: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct LogicAnalyzerTraceLink {
    pub index: usize,
    pub previous_index: Option<usize>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum LogicAnalyzerShowRefreshStep {
    RefreshTriggerBounds,
    SynchronizeDisplayBounds,
    RebuildTraceData,
    ReindexActiveChannels,
    ValidateChannelLayout,
    ShowInheritedWindow,
}

#[derive(Debug, Clone, PartialEq)]
pub struct LogicAnalyzerShowState {
    pub trace_links: Vec<LogicAnalyzerTraceLink>,
    pub selected_trace: Option<usize>,
    pub sample_interval: f64,
    pub clock_period: f64,
    pub measurement_length: i32,
    pub timeout: i32,
    pub group_selection: usize,
    pub transient_state: u32,
    pub refresh_steps: Vec<LogicAnalyzerShowRefreshStep>,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub enum ClockThresholdUpdateMode {
    Direct,
    Synchronized {
        current_selection: usize,
        clock_period: f64,
    },
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub enum ClockThresholdChangeStep {
    SetSelection(usize),
    RefreshInputBindings {
        group_code: u8,
        state: bool,
        invalidate: bool,
    },
    RescaleDisplay {
        factor: f64,
        reference: f64,
    },
    InvalidateDisplay,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TriggerSourceModeUpdateMode {
    SelectionAndControls,
    SelectionOnly,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TriggerSourceModeChangeStep {
    SetSelection(usize),
    SetDelayAndPositionEnabled(bool),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TriggerPositionValueSource {
    Primary,
    Alternate,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TriggerPositionStepDirection {
    Decrease,
    Increase,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CloseDisposition {
    Free,
    VetoAndStop {
        action: UiAction,
        retry_after_stop: bool,
    },
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CloseQueryRequest {
    pub application_exit_active: bool,
    pub instrument_close_blocked: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CloseQueryResult {
    pub can_close: bool,
    pub warning: Option<&'static str>,
}

pub trait CurveExchange {
    fn load_shared_curve(&mut self) -> Option<DigitalCurve>;
}

pub trait DigitalResultPublisher {
    fn publish_digital_transient(&mut self, curve: DigitalCurve);
}

pub trait AnalyzerViewAdapter {
    fn refresh_channels(&mut self, model: &AnalyzerModel);
    fn refresh_display(&mut self, model: &AnalyzerModel);
    fn redraw_vertical_axis(&mut self, window: AxisWindow);
    fn scroll_horizontal(&mut self, direction: HorizontalDirection);
}

pub trait AnalyzerEngine {
    fn trigger_choices(&self, editor: TriggerChoiceEditor) -> (Vec<String>, usize);
    fn trigger_value(&self, editor: TriggerValueEditor) -> f64;
    fn measurement_choices(&self, editor: MeasurementChoiceEditor) -> (Vec<String>, usize);
    fn integer_value(&self, editor: MeasurementValueEditor) -> i64;

    /// Validates the acquisition command.
    ///
    /// # Errors
    ///
    /// Returns an error when the command is invalid.
    fn validate_command(&mut self) -> Result<(), AcquisitionError>;

    /// Validates the active circuit.
    ///
    /// # Errors
    ///
    /// Returns an error when the active circuit cannot be analyzed.
    fn validate_circuit(&mut self) -> Result<(), AcquisitionError>;

    /// Runs one acquisition.
    ///
    /// # Errors
    ///
    /// Returns an error when acquisition cannot produce a digital curve.
    fn run(&mut self, model: &AnalyzerModel) -> Result<DigitalCurve, AcquisitionError>;

    fn stop(&mut self);
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AcquisitionError(pub String);

impl fmt::Display for AcquisitionError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(&self.0)
    }
}

impl std::error::Error for AcquisitionError {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum AcquisitionOutcome {
    Completed,
    Rejected(AcquisitionError),
    NoData,
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
    OptionSelected(usize, &'static str),
    Toggle(usize, bool),
    Action(UiAction),
    NoOp,
}

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    selections: Vec<Option<&'static str>>,
    checks: Vec<bool>,
    model: AnalyzerModel,
    trigger_choice_editor: TriggerChoiceEditor,
    trigger_value_editor: TriggerValueEditor,
    measurement_choice_editor: MeasurementChoiceEditor,
    measurement_value_editor: MeasurementValueEditor,
    choices: Vec<String>,
    choice_index: usize,
    trigger_numeric_value: f64,
    integer_value: i64,
    coordinate_side: Option<CoordinateSide>,
    coordinate_text: String,
    coordinate_commit_pending: bool,
    pattern_text: String,
    pattern_cursor: usize,
    vertical_axis: AxisWindow,
    pending_action: Option<UiAction>,
}

impl Default for Window {
    fn default() -> Self {
        Self::with_model(AnalyzerModel::new(
            0,
            Vec::new(),
            Vec::new(),
            HorizontalBounds {
                left: 0.0,
                right: 1.0,
            },
        ))
    }
}

impl Window {
    /// Reimplements Ghidra function `FUN_015216e0` at `0x015216E0`.
    ///
    /// A normal window close remains allowed. During application exit, a
    /// protected measurement instrument vetoes the close and requests the
    /// recovered warning. The typed result is ready for iced's close-request
    /// subscription and needs no additional crate.
    #[must_use]
    pub const fn form_close_query(request: CloseQueryRequest) -> CloseQueryResult {
        let can_close = !request.application_exit_active || !request.instrument_close_blocked;
        CloseQueryResult {
            can_close,
            warning: if can_close { None } else { Some(CLOSE_WARNING) },
        }
    }

    /// Reimplements Ghidra function `FUN_01521750` at `0x01521750`.
    ///
    /// The iced hide event clears only the measurement-instrument visibility
    /// flag. It does not stop acquisition or release analyzer resources.
    #[must_use]
    pub const fn form_hidden() -> UiAction {
        UiAction::SetInstrumentVisible(false)
    }

    /// Reimplements Ghidra function `FUN_01521760` at `0x01521760`.
    ///
    /// Maps the iced size-query event to the shared measurement-instrument
    /// resize coordinator. That coordinator owns the recovered size limits,
    /// aspect adjustment, work-area cap, and allow-or-veto decision.
    #[must_use]
    pub const fn form_can_resize() -> UiAction {
        UiAction::ApplySharedResizeConstraints
    }

    /// Reimplements Ghidra function `FUN_01521780` at `0x01521780`.
    ///
    /// Maps an iced display double-click to the shared measurement-surface
    /// coordinator. The coordinator owns the recovered interaction gates, hit
    /// classification, and operation dispatch.
    #[must_use]
    pub const fn screen_double_clicked() -> UiAction {
        UiAction::DisplaySurface(DisplaySurfaceEvent::DoubleClick)
    }

    /// Reimplements Ghidra function `FUN_01521790` at `0x01521790`.
    ///
    /// Maps an iced pointer-down event to the shared measurement-surface
    /// coordinator. The coordinator owns mode-dependent hit testing, drag
    /// setup, object activation, selection, and no-op gates.
    #[must_use]
    pub const fn screen_mouse_pressed() -> UiAction {
        UiAction::DisplaySurface(DisplaySurfaceEvent::MouseDown)
    }

    /// Reimplements Ghidra function `FUN_015217c0` at `0x015217C0`.
    ///
    /// Maps iced pointer movement to the shared measurement-surface
    /// coordinator. The coordinator owns cursor feedback, drag geometry,
    /// selection previews, and mode-specific no-op paths.
    #[must_use]
    pub const fn screen_mouse_moved() -> UiAction {
        UiAction::DisplaySurface(DisplaySurfaceEvent::MouseMove)
    }

    /// Reimplements Ghidra function `FUN_015217f0` at `0x015217F0`.
    ///
    /// Maps iced pointer release to the shared measurement-surface coordinator.
    /// In recovered interaction mode 4, cursor B stays one period after cursor
    /// A and both cursor readouts are synchronized before normal release work.
    #[must_use]
    pub const fn screen_mouse_released() -> UiAction {
        UiAction::DisplaySurface(DisplaySurfaceEvent::MouseUp {
            constrained_mode: 4,
            order_constraint: CursorOrderConstraint::CursorBAfterAByOnePeriod,
            synchronize_cursors: true,
        })
    }

    /// Reimplements Ghidra function `FUN_0151eb60` at `0x0151EB60`.
    #[must_use]
    pub const fn request_close(running: bool) -> CloseDisposition {
        if running {
            CloseDisposition::VetoAndStop {
                action: UiAction::Stop,
                retry_after_stop: true,
            }
        } else {
            CloseDisposition::Free
        }
    }

    /// Reimplements Ghidra function `FUN_0151e740` at `0x0151E740`.
    #[must_use]
    pub fn form_create(runtime_code: u8) -> Vec<LogicAnalyzerCreateStep> {
        let mut steps = vec![
            LogicAnalyzerCreateStep::LoadIcon(ICON_RESOURCE),
            LogicAnalyzerCreateStep::InitializeInheritedWindow,
            LogicAnalyzerCreateStep::InitializeInstrumentBase { mode: 5 },
        ];
        match runtime_code {
            0 => steps.push(LogicAnalyzerCreateStep::ConstructVirtualBackend),
            1 => {
                steps.push(LogicAnalyzerCreateStep::ConstructHardwareBackend);
                steps.push(LogicAnalyzerCreateStep::InitializeHardwareBackend);
            }
            _ => return steps,
        }
        steps.extend([
            LogicAnalyzerCreateStep::InitializeBackend,
            LogicAnalyzerCreateStep::AppendBackendNameToCaption,
            LogicAnalyzerCreateStep::ApplyRecoveredPalette,
            LogicAnalyzerCreateStep::SetCursorControlsEnabled(runtime_code == 1),
            LogicAnalyzerCreateStep::InitializePrimaryDisplay,
            LogicAnalyzerCreateStep::InitializeSecondaryDisplay,
            LogicAnalyzerCreateStep::ResetAcquisitionState,
            LogicAnalyzerCreateStep::SetHelpContext(2001),
        ]);
        steps
    }

    /// Reimplements Ghidra function `FUN_0151fd80` at `0x0151FD80`.
    ///
    /// Rust ownership releases the backend after its shutdown hook. Inherited
    /// window cleanup always runs, including when no backend was constructed.
    #[must_use]
    pub fn form_destroy(has_backend: bool) -> Vec<LogicAnalyzerDestroyStep> {
        let mut steps = Vec::new();
        if has_backend {
            steps.extend([
                LogicAnalyzerDestroyStep::ShutdownBackend,
                LogicAnalyzerDestroyStep::ReleaseBackend,
            ]);
        }
        steps.push(LogicAnalyzerDestroyStep::DestroyInheritedWindow);
        steps
    }

    /// Reimplements Ghidra function `FUN_01520350` at `0x01520350`.
    ///
    /// The form-show transition rebuilds the ordered trace links, selects the
    /// first trace when one exists, copies the backend measurement values, and
    /// schedules the recovered refresh pipeline. A zero sample count preserves
    /// the original floating-point division result instead of adding a guard
    /// that the recovered handler does not have. Iced owns the resulting view
    /// state, so no additional GUI crate is required.
    #[must_use]
    pub fn form_show(configuration: LogicAnalyzerShowConfiguration) -> LogicAnalyzerShowState {
        let trace_links = (0..configuration.trace_count)
            .map(|index| LogicAnalyzerTraceLink {
                index,
                previous_index: index.checked_sub(1),
            })
            .collect();
        LogicAnalyzerShowState {
            trace_links,
            selected_trace: (configuration.trace_count != 0).then_some(0),
            sample_interval: configuration.reference_duration
                / f64::from(configuration.sample_count),
            clock_period: configuration.clock_period,
            measurement_length: configuration.measurement_length,
            timeout: configuration.timeout,
            group_selection: 0,
            transient_state: 0,
            refresh_steps: vec![
                LogicAnalyzerShowRefreshStep::RefreshTriggerBounds,
                LogicAnalyzerShowRefreshStep::SynchronizeDisplayBounds,
                LogicAnalyzerShowRefreshStep::RebuildTraceData,
                LogicAnalyzerShowRefreshStep::ReindexActiveChannels,
                LogicAnalyzerShowRefreshStep::ValidateChannelLayout,
                LogicAnalyzerShowRefreshStep::ShowInheritedWindow,
            ],
        }
    }

    /// Maps Ghidra function `FUN_0151f9a0` at `0x0151F9A0` to iced's
    /// declarative paint lifecycle.
    fn display_surface() -> Element<'static, Message> {
        window_shell::surface("Logic Analyzer display surface")
    }

    #[must_use]
    pub fn with_model(model: AnalyzerModel) -> Self {
        Self {
            values: vec![String::new(); 7],
            selections: vec![None],
            checks: vec![false],
            model,
            trigger_choice_editor: TriggerChoiceEditor::Source,
            trigger_value_editor: TriggerValueEditor::Position,
            measurement_choice_editor: MeasurementChoiceEditor::Clock,
            measurement_value_editor: MeasurementValueEditor::Period,
            choices: Vec::new(),
            choice_index: 0,
            trigger_numeric_value: 0.0,
            integer_value: 0,
            coordinate_side: None,
            coordinate_text: String::new(),
            coordinate_commit_pending: false,
            pattern_text: String::new(),
            pattern_cursor: 0,
            vertical_axis: AxisWindow {
                start: 0,
                visible_count: 0,
                active_axis_count: 0,
            },
            pending_action: None,
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::TextChanged(index, value) => {
                if let Some(field) = self.values.get_mut(index) {
                    *field = value;
                }
            }
            Message::OptionSelected(index, value) => {
                if let Some(selection) = self.selections.get_mut(index) {
                    *selection = Some(value);
                }
            }
            Message::Toggle(index, value) => {
                if let Some(check) = self.checks.get_mut(index) {
                    *check = value;
                }
            }
            Message::Action(action) => self.pending_action = Some(action),
            Message::NoOp => {}
        }
    }

    #[must_use]
    pub const fn take_action(&mut self) -> Option<UiAction> {
        self.pending_action.take()
    }

    /// Reimplements `FUN_0151e2a0` at `0x0151E2A0`.
    #[must_use]
    pub fn load_shared_curve(
        &mut self,
        exchange: &mut dyn CurveExchange,
        view: &mut dyn AnalyzerViewAdapter,
    ) -> bool {
        let loaded = self
            .model
            .load_compatible_curve(exchange.load_shared_curve());
        if loaded {
            view.refresh_channels(&self.model);
            view.refresh_display(&self.model);
        }
        loaded
    }

    /// Reimplements `FUN_0151e600` at `0x0151E600`.
    #[must_use]
    pub fn publish_current_curve(&self, publisher: &mut dyn DigitalResultPublisher) -> bool {
        let Some(curve) = self.model.numbered_curve_for_publish() else {
            return false;
        };
        publisher.publish_digital_transient(curve);
        true
    }

    /// Reimplements `FUN_0151e730` at `0x0151E730`.
    #[must_use]
    pub fn apply_channel_enabled(
        &mut self,
        enabled: bool,
        view: &mut dyn AnalyzerViewAdapter,
    ) -> bool {
        let changed = self.model.apply_selected_enabled(enabled);
        if changed {
            view.refresh_channels(&self.model);
            view.refresh_display(&self.model);
        }
        changed
    }

    /// Reimplements `FUN_0151f270` at `0x0151F270`.
    #[must_use]
    pub fn start_click(&mut self) -> bool {
        if self.model.begin_acquisition() {
            self.pending_action = Some(UiAction::Start);
            true
        } else {
            false
        }
    }

    /// Reimplements `FUN_0151f2b0` at `0x0151F2B0`.
    #[must_use]
    pub fn run_acquisition(
        &mut self,
        engine: &mut dyn AnalyzerEngine,
        view: &mut dyn AnalyzerViewAdapter,
    ) -> AcquisitionOutcome {
        if self.model.channels().is_empty() || !self.model.has_patterns() {
            return AcquisitionOutcome::NoData;
        }
        match self.model.lifecycle() {
            AcquisitionLifecycle::Idle if !self.model.begin_acquisition() => {
                return AcquisitionOutcome::NoData;
            }
            AcquisitionLifecycle::StopRequested => return AcquisitionOutcome::NoData,
            AcquisitionLifecycle::Idle | AcquisitionLifecycle::Active => {}
        }
        let result = engine
            .validate_command()
            .and_then(|()| engine.validate_circuit())
            .and_then(|()| engine.run(&self.model));
        match result {
            Ok(curve) => {
                self.model.set_acquired_curve(curve);
                self.model.finish_acquisition(0);
                view.refresh_channels(&self.model);
                view.refresh_display(&self.model);
                AcquisitionOutcome::Completed
            }
            Err(error) => {
                self.model.finish_acquisition(1);
                AcquisitionOutcome::Rejected(error)
            }
        }
    }

    /// Reimplements `FUN_0151f810` at `0x0151F810`.
    pub fn stop_click(&mut self, engine: &mut dyn AnalyzerEngine) {
        if self.model.request_stop() {
            engine.stop();
        }
        self.pending_action = Some(UiAction::Stop);
    }

    /// Reimplements `FUN_0151fef0` at `0x0151FEF0`.
    #[must_use]
    pub fn trigger_source_click(&mut self, engine: &dyn AnalyzerEngine) -> bool {
        if self.trigger_choice_editor != TriggerChoiceEditor::Mode {
            return false;
        }
        self.trigger_choice_editor = TriggerChoiceEditor::Source;
        (self.choices, self.choice_index) = engine.trigger_choices(TriggerChoiceEditor::Source);
        true
    }

    /// Reimplements `FUN_0151ff80` at `0x0151FF80`.
    #[must_use]
    pub fn trigger_mode_click(&mut self, engine: &dyn AnalyzerEngine) -> bool {
        if self.trigger_choice_editor != TriggerChoiceEditor::Source {
            return false;
        }
        self.trigger_choice_editor = TriggerChoiceEditor::Mode;
        (self.choices, self.choice_index) = engine.trigger_choices(TriggerChoiceEditor::Mode);
        true
    }

    /// Reimplements `FUN_015200c0` at `0x015200C0`.
    #[must_use]
    pub fn trigger_delay_click(&mut self, engine: &dyn AnalyzerEngine) -> bool {
        if self.trigger_value_editor != TriggerValueEditor::Position {
            return false;
        }
        self.trigger_value_editor = TriggerValueEditor::Delay;
        self.trigger_numeric_value = engine.trigger_value(TriggerValueEditor::Delay);
        true
    }

    /// Reimplements `FUN_01520110` at `0x01520110`.
    #[must_use]
    pub fn trigger_position_click(&mut self, engine: &dyn AnalyzerEngine) -> bool {
        if self.trigger_value_editor != TriggerValueEditor::Delay {
            return false;
        }
        self.trigger_value_editor = TriggerValueEditor::Position;
        self.trigger_numeric_value = engine.trigger_value(TriggerValueEditor::Position);
        true
    }

    /// Reimplements `FUN_015202a0` at `0x015202A0`.
    #[must_use]
    pub fn scroll_up(&mut self, view: &mut dyn AnalyzerViewAdapter) -> bool {
        self.scroll_vertical(VerticalDirection::Up, view)
    }

    /// Reimplements `FUN_015202b0` at `0x015202B0`.
    #[must_use]
    pub fn scroll_down(&mut self, view: &mut dyn AnalyzerViewAdapter) -> bool {
        self.scroll_vertical(VerticalDirection::Down, view)
    }

    /// Reimplements `FUN_015202c0` at `0x015202C0`.
    #[must_use]
    pub fn scroll_right(&self, view: &mut dyn AnalyzerViewAdapter) -> bool {
        self.scroll_horizontal(HorizontalDirection::Right, view)
    }

    /// Reimplements `FUN_015202e0` at `0x015202E0`.
    #[must_use]
    pub fn scroll_left(&self, view: &mut dyn AnalyzerViewAdapter) -> bool {
        self.scroll_horizontal(HorizontalDirection::Left, view)
    }

    /// Reimplements `FUN_01520660` at `0x01520660`.
    pub fn show_left_bound(&mut self) {
        self.show_bound(CoordinateSide::Left);
    }

    /// Reimplements Ghidra function `FUN_01520670` at `0x01520670`.
    ///
    /// The spin-control Down callback selects the recovered decrease operation
    /// in the shared coordinate editor. That established adapter owns
    /// span-based stepping, bound validation, cursor clamping, display refresh,
    /// and commit gating. The iced action preserves only the direction, so no
    /// additional crate is required.
    #[must_use]
    pub const fn coordinate_step_down() -> UiAction {
        UiAction::StepCoordinate(CoordinateStepDirection::Decrease)
    }

    /// Reimplements Ghidra function `FUN_01520680` at `0x01520680`.
    ///
    /// The spin-control Up callback selects the recovered increase operation in
    /// the shared coordinate editor. The established adapter owns step
    /// normalization, validation, refresh, cursor clamping, and commit gating.
    #[must_use]
    pub const fn coordinate_step_up() -> UiAction {
        UiAction::StepCoordinate(CoordinateStepDirection::Increase)
    }

    /// Reimplements Ghidra function `FUN_01520690` at `0x01520690`.
    ///
    /// Enter is consumed by iced's submit event, arms the recovered commit
    /// flag, and selects the shared editor operation. Other keys remain normal
    /// text input. The existing adapter owns parsing, validation, cursor
    /// clamping, and display refresh, so no additional crate is required.
    #[must_use]
    pub const fn coordinate_key_pressed(key: char) -> Option<UiAction> {
        if key == '\r' {
            Some(UiAction::ApplyTypedCoordinateEdit { commit: true })
        } else {
            None
        }
    }

    /// Reimplements Ghidra function `FUN_015206a0` at `0x015206A0`.
    ///
    /// Focus loss synthesizes Enter and dispatches the same committed typed
    /// coordinate edit as direct submission. The iced host focus subscription
    /// supplies this event because the text input has no blur callback.
    #[must_use]
    pub const fn coordinate_exited() -> Option<UiAction> {
        Self::coordinate_key_pressed('\r')
    }

    /// Reimplements Ghidra function `FUN_015206b0` at `0x015206B0`.
    ///
    /// A rejected coordinate restores the selected stored bound. Explicit
    /// Right selection restores the upper bound; every other state follows the
    /// recovered Left branch. The existing analyzer model and iced editor state
    /// provide the value and formatting boundary without an additional crate.
    pub fn coordinate_error(&mut self) {
        if self.coordinate_side == Some(CoordinateSide::Right) {
            self.show_right_bound();
        } else {
            self.show_left_bound();
        }
    }

    /// Reimplements Ghidra function `FUN_015206c0` at `0x015206C0`.
    ///
    /// The spin-control end callback only arms the next shared coordinate
    /// update for commit. It does not parse text, change a bound, or refresh
    /// the display. The iced host pointer-release subscription supplies this
    /// callback because a standard button has no end-click event.
    pub const fn coordinate_step_ended(&mut self) {
        self.coordinate_commit_pending = true;
    }

    /// Reimplements Ghidra function `FUN_015206d0` at `0x015206D0`.
    ///
    /// A valid group selection replaces the pattern choices with that group's
    /// patterns, selects the first pattern, and copies its formatted text into
    /// the editor. A missing group or a group without patterns is a no-op. The
    /// analyzer model and iced-owned selection state need no additional crate.
    #[must_use]
    pub fn pattern_group_changed(&mut self, index: Option<usize>) -> bool {
        let Some(pattern) =
            index.and_then(|index| self.model.select_pattern_group_and_first_pattern(index))
        else {
            return false;
        };
        let _ = self.pattern_selection_changed(Some(PatternEditSelection {
            index: 0,
            text: pattern,
        }));
        self.pattern_cursor = self
            .pattern_text
            .find('[')
            .map_or(0, |opening_bracket| opening_bracket + 2);
        true
    }

    /// Reimplements Ghidra function `FUN_01521460` at `0x01521460`.
    ///
    /// A selected iced combo row is copied to the pattern editor and its index
    /// becomes the active pattern. A missing selection clears only the editor;
    /// it preserves the last active index for the next valid selection. Iced
    /// supplies the selected row and text, so no additional crate is required.
    #[must_use]
    pub fn pattern_selection_changed(&mut self, selection: Option<PatternEditSelection>) -> bool {
        let Some(selection) = selection else {
            self.pattern_text.clear();
            return false;
        };

        self.pattern_text = selection.text;
        self.model.select_pattern(Some(selection.index));
        true
    }

    /// Reimplements Ghidra function `FUN_01520770` at `0x01520770`.
    ///
    /// Enter is consumed without a commit. A normal key replaces the selected
    /// marker only when the current marker and typed key are `0`, `1`, or `X`.
    /// Lowercase `x` becomes uppercase. A replacement advances the one-character
    /// selection and updates the selected pattern in the analyzer model. Iced
    /// supplies the keyboard event and the standard library handles the text.
    #[must_use]
    pub fn pattern_key_pressed(&mut self, key: char) -> bool {
        if key == '\r' {
            return false;
        }

        let key = key.to_ascii_uppercase();
        let mut characters = self.pattern_text.chars().collect::<Vec<_>>();
        let Some(selected) = characters.get(self.pattern_cursor).copied() else {
            return false;
        };
        if !Self::is_analyzer_pattern_symbol(selected) || !Self::is_analyzer_pattern_symbol(key) {
            return false;
        }

        characters[self.pattern_cursor] = key;
        self.pattern_text = characters.iter().collect();
        let marker_start = self.pattern_text.find('[').map_or(0, |index| index + 2);
        let marker_index = self.pattern_cursor.saturating_sub(marker_start);
        let _ = self
            .model
            .replace_selected_pattern_marker(marker_index, key);
        self.pattern_cursor += 1;
        true
    }

    const fn is_analyzer_pattern_symbol(value: char) -> bool {
        matches!(value, '0' | '1' | 'X')
    }

    /// Reimplements Ghidra function `FUN_015209c0` at `0x015209C0`.
    ///
    /// A non-Enter key does not change the group. Enter commits the current
    /// label through the shared group editor and requests the five dependent
    /// updates in recovered order. Iced supplies the submit event, and the
    /// typed action keeps model changes outside the view adapter.
    #[must_use]
    pub fn group_label_key_pressed(&self, key: char) -> Option<UiAction> {
        if key != '\r' {
            return None;
        }

        Some(UiAction::CommitGroupLabel {
            label: self.values[0].clone(),
            follow_up: [
                GroupLabelCommitStep::CopyPatternGroups,
                GroupLabelCommitStep::SelectFirstPatternGroup,
                GroupLabelCommitStep::RefreshPatternView,
                GroupLabelCommitStep::ReindexEnabledChannels,
                GroupLabelCommitStep::ApplyEnabledChannels,
            ],
        })
    }

    /// Reimplements Ghidra function `FUN_01521580` at `0x01521580`.
    ///
    /// Leaving the iced group-label editor synthesizes Enter and uses the same
    /// commit and dependent refresh path as direct submission. The host focus
    /// subscription supplies this event, so no additional crate is required.
    #[must_use]
    pub fn group_label_exited(&self) -> Option<UiAction> {
        self.group_label_key_pressed('\r')
    }

    /// Reimplements Ghidra function `FUN_015216f0` at `0x015216F0`.
    ///
    /// Non-Enter keys stay in iced's normal text-input path. Enter is consumed,
    /// but the channel label is committed and refreshed only when the edited
    /// channel is still active. The typed action needs no additional crate.
    #[must_use]
    pub fn channel_edit_key_pressed(request: ChannelLabelKeyRequest) -> Option<UiAction> {
        if request.key != '\r' {
            return None;
        }

        Some(UiAction::HandleChannelLabelKey {
            consumed: true,
            committed_label: (request.edited_channel_index == request.active_channel_index)
                .then_some(request.text),
        })
    }

    /// Reimplements Ghidra function `FUN_01520a80` at `0x01520A80`.
    ///
    /// A missing iced combo selection is a no-op. A valid channel index is
    /// delegated to the shared channel and group synchronizer. That service
    /// owns range constraints, attached-group selection, enabled state, and
    /// dependent control updates, so this adapter needs no additional crate.
    #[must_use]
    pub const fn channel_box_changed(index: Option<usize>) -> Option<UiAction> {
        match index {
            Some(index) => Some(UiAction::SynchronizeChannelSelection(index)),
            None => None,
        }
    }

    /// Reimplements Ghidra function `FUN_01520d10` at `0x01520D10`.
    ///
    /// A missing iced group selection is a no-op. A selected row becomes the
    /// current analyzer group and requests the recovered channel-range and
    /// control synchronization sequence. The analyzer model resolves group
    /// data, so this adapter needs no additional crate.
    #[must_use]
    pub fn group_label_box_changed(&mut self, index: Option<usize>) -> Option<UiAction> {
        let index = index?;
        self.model.select_group(Some(index));
        Some(UiAction::SelectChannelGroup {
            index,
            synchronize: [
                ChannelGroupSelectionStep::LoadChannelRange,
                ChannelGroupSelectionStep::SelectEndpointChannel,
                ChannelGroupSelectionStep::RefreshSelectedChannel,
                ChannelGroupSelectionStep::LoadEnabledState,
                ChannelGroupSelectionStep::LoadGroupLabel,
            ],
        })
    }

    /// Reimplements Ghidra function `FUN_01520d30` at `0x01520D30`.
    ///
    /// The `PatternEdit` key-down event delegates the iced key and modifier state
    /// to the shared bounded-editor path. The three-character formatted prefix
    /// and one closing delimiter stay outside the editable region. This typed
    /// adapter needs no additional crate.
    #[must_use]
    pub const fn pattern_key_down(key: Key, modifiers: Modifiers) -> UiAction {
        UiAction::ConstrainPatternEditor {
            key,
            modifiers,
            editable_region: PatternEditableRegion {
                protected_prefix: 3,
                protected_suffix: 1,
            },
        }
    }

    /// Reimplements Ghidra function `FUN_01521270` at `0x01521270`.
    ///
    /// Opening the iced pattern-group list asks the currently selected group
    /// to refresh its patterns from the active analyzer backend. No selection,
    /// or an index that is not in the current model, is a no-op. The host owns
    /// the backend boundary, so this adapter needs no additional crate.
    #[must_use]
    pub fn pattern_group_drop_down(&self, index: Option<usize>) -> Option<UiAction> {
        let index = index?;
        self.model.groups().get(index)?;
        Some(UiAction::RefreshPatternGroupFromBackend(index))
    }

    /// Reimplements Ghidra function `FUN_015212f0` at `0x015212F0`.
    ///
    /// Pressing the iced move control selects cursor A, resets it to the
    /// visible left bound, and starts the shared left-move interaction. The
    /// typed action lets the host own pointer capture and repeat timing without
    /// another crate.
    #[must_use]
    pub const fn move_a_cursor_left_started() -> UiAction {
        UiAction::BeginCursorMove {
            cursor: CursorMarker::A,
            direction: CursorMoveDirection::Left,
            start_bound: CursorMoveStartBound::VisibleLeft,
        }
    }

    /// Reimplements Ghidra function `FUN_01521320` at `0x01521320`.
    ///
    /// Pressing the iced move control selects cursor B, resets it to the
    /// visible left bound, and starts the shared left-move interaction. The
    /// analyzer uses the general left bound rather than a cursor-A constraint.
    #[must_use]
    pub const fn move_b_cursor_left_started() -> UiAction {
        UiAction::BeginCursorMove {
            cursor: CursorMarker::B,
            direction: CursorMoveDirection::Left,
            start_bound: CursorMoveStartBound::VisibleLeft,
        }
    }

    /// Reimplements Ghidra function `FUN_01521350` at `0x01521350`.
    ///
    /// Releasing the iced move control ends cursor A's leftward movement,
    /// synchronizes both cursor readouts, and refreshes the graph. This path
    /// does not add a cursor-order constraint.
    #[must_use]
    pub const fn move_a_cursor_left_ended() -> UiAction {
        UiAction::EndCursorMove {
            cursor: CursorMarker::A,
            direction: CursorMoveDirection::Left,
            order_constraint: None,
        }
    }

    /// Reimplements Ghidra function `FUN_01521380` at `0x01521380`.
    ///
    /// Releasing the iced move control ends cursor B's leftward movement,
    /// synchronizes both cursor readouts, and refreshes the graph. This path
    /// does not add a cursor-order constraint.
    #[must_use]
    pub const fn move_b_cursor_left_ended() -> UiAction {
        UiAction::EndCursorMove {
            cursor: CursorMarker::B,
            direction: CursorMoveDirection::Left,
            order_constraint: None,
        }
    }

    /// Reimplements Ghidra function `FUN_015213b0` at `0x015213B0`.
    ///
    /// Pressing the iced move control selects cursor A, resets it to the
    /// visible right bound, and starts the shared right-move interaction. The
    /// typed action lets the host own pointer capture and repeat timing.
    #[must_use]
    pub const fn move_a_cursor_right_started() -> UiAction {
        UiAction::BeginCursorMove {
            cursor: CursorMarker::A,
            direction: CursorMoveDirection::Right,
            start_bound: CursorMoveStartBound::VisibleRight,
        }
    }

    /// Reimplements Ghidra function `FUN_01521520` at `0x01521520`.
    ///
    /// Pressing the iced move control selects cursor B, resets it to the
    /// visible right bound, and starts the shared right-move interaction. The
    /// typed action lets the host own pointer capture and repeat timing without
    /// another crate.
    #[must_use]
    pub const fn move_b_cursor_right_started() -> UiAction {
        UiAction::BeginCursorMove {
            cursor: CursorMarker::B,
            direction: CursorMoveDirection::Right,
            start_bound: CursorMoveStartBound::VisibleRight,
        }
    }

    /// Reimplements Ghidra function `FUN_01521550` at `0x01521550`.
    ///
    /// Releasing the iced move control ends cursor B's rightward movement,
    /// synchronizes the cursor readouts, and refreshes the graph. Unlike cursor
    /// A, cursor B needs no order correction during this release path.
    #[must_use]
    pub const fn move_b_cursor_right_ended() -> UiAction {
        UiAction::EndCursorMove {
            cursor: CursorMarker::B,
            direction: CursorMoveDirection::Right,
            order_constraint: None,
        }
    }

    /// Reimplements Ghidra function `FUN_015213e0` at `0x015213E0`.
    ///
    /// Releasing the iced move control ends cursor A's rightward movement,
    /// keeps cursor B one period after cursor A when both positions exist,
    /// synchronizes the cursor readouts, and refreshes the graph.
    #[must_use]
    pub const fn move_a_cursor_right_ended() -> UiAction {
        UiAction::EndCursorMove {
            cursor: CursorMarker::A,
            direction: CursorMoveDirection::Right,
            order_constraint: Some(CursorOrderConstraint::CursorBAfterAByOnePeriod),
        }
    }

    /// Reimplements Ghidra function `FUN_01521410` at `0x01521410`.
    ///
    /// Maps the recovered form-resize handler to an iced responsive-layout
    /// request with the shared instrument-window dimensions.
    #[must_use]
    pub const fn form_resized() -> UiAction {
        UiAction::ResizeLayout(LogicAnalyzerResizePolicy {
            run_base_layout: true,
            scroll_scale_factor: 4,
            default_display_inset: 24,
            preserve_panel_height_in_compact_mode: true,
            panel_height_scale_tenths: 24,
            reference_height_scale_tenths: 3,
        })
    }

    /// Reimplements `FUN_015209b0` at `0x015209B0`.
    pub fn show_right_bound(&mut self) {
        self.show_bound(CoordinateSide::Right);
    }

    /// Reimplements `FUN_01520a90` at `0x01520A90`.
    pub const fn select_period_editor(&mut self) {
        self.measurement_value_editor = MeasurementValueEditor::Period;
    }

    /// Reimplements `FUN_01520af0` at `0x01520AF0`.
    pub fn select_length_editor(&mut self, engine: &dyn AnalyzerEngine) {
        self.measurement_value_editor = MeasurementValueEditor::Length;
        self.integer_value = engine.integer_value(MeasurementValueEditor::Length);
    }

    /// Reimplements `FUN_01520b70` at `0x01520B70`.
    pub fn select_timeout_editor(&mut self, engine: &dyn AnalyzerEngine) {
        self.measurement_value_editor = MeasurementValueEditor::Timeout;
        self.integer_value = engine.integer_value(MeasurementValueEditor::Timeout);
    }

    /// Reimplements Ghidra function `FUN_0151faa0` at `0x0151FAA0`.
    ///
    /// The active measurement editor selects the value that receives the Down
    /// step. Iced routes the typed action to the existing numeric adapter, so
    /// no additional crate is required.
    #[must_use]
    pub const fn clock_period_step_down(&self) -> UiAction {
        UiAction::StepMeasurementValue {
            target: self.measurement_value_editor,
            direction: MeasurementStepDirection::Decrease,
        }
    }

    /// Reimplements Ghidra function `FUN_0151fb00` at `0x0151FB00`.
    ///
    /// The active measurement editor selects the value that receives the Up
    /// step. Iced routes the typed action to the existing numeric adapter, so
    /// no additional crate is required.
    #[must_use]
    pub const fn clock_period_step_up(&self) -> UiAction {
        UiAction::StepMeasurementValue {
            target: self.measurement_value_editor,
            direction: MeasurementStepDirection::Increase,
        }
    }

    /// Reimplements Ghidra function `FUN_0151fb60` at `0x0151FB60`.
    ///
    /// A missing selection and indexes other than one do not change state.
    /// Index one preserves the two recovered presentation codes. Its label is
    /// not recovered, so the adapter does not assign unsupported semantics.
    #[must_use]
    pub const fn trace_type_changed(index: Option<usize>) -> Option<UiAction> {
        if matches!(index, Some(1)) {
            Some(UiAction::ApplyTraceTypeSelection {
                trace_type_code: 10,
                display_mode_code: 2,
            })
        } else {
            None
        }
    }

    /// Reimplements Ghidra function `FUN_0151fbf0` at `0x0151FBF0`.
    ///
    /// Enter is consumed by iced's submit event and requests the established
    /// clock-period adapter. Other keys remain normal text-editor input. The
    /// adapter owns parsing and normalization, so no additional crate is used.
    #[must_use]
    pub const fn clock_period_key_pressed(key: char) -> Option<UiAction> {
        if key == '\r' {
            Some(UiAction::ApplyClockPeriodEdit)
        } else {
            None
        }
    }

    /// Reimplements Ghidra function `FUN_0151fc10` at `0x0151FC10`.
    ///
    /// Focus loss forces the same submit path as Enter so validation and model
    /// updates cannot diverge. The host focus subscription supplies this event.
    #[must_use]
    pub const fn clock_period_exited() -> Option<UiAction> {
        Self::clock_period_key_pressed('\r')
    }

    /// Reimplements Ghidra function `FUN_0151fc40` at `0x0151FC40`.
    ///
    /// A rejected edit restores the visible field from the last accepted
    /// backend value. It does not report another error or change analyzer state.
    #[must_use]
    pub const fn clock_period_error() -> UiAction {
        UiAction::RestoreClockPeriodEditorValue
    }

    /// Reimplements Ghidra function `FUN_0151fc80` at `0x0151FC80`.
    ///
    /// Enter submits only an active integer editor. Period and all other keys
    /// are no-ops here. The existing adapter owns parsing and normalization.
    #[must_use]
    pub const fn measurement_length_key_pressed(&self, key: char) -> Option<UiAction> {
        if key != '\r' {
            return None;
        }
        match self.measurement_value_editor {
            MeasurementValueEditor::Length | MeasurementValueEditor::Timeout => Some(
                UiAction::ApplyIntegerMeasurementEdit(self.measurement_value_editor),
            ),
            MeasurementValueEditor::Period => None,
        }
    }

    /// Reimplements Ghidra function `FUN_0151fcd0` at `0x0151FCD0`.
    ///
    /// Focus loss forces the same guarded integer submission path as Enter.
    #[must_use]
    pub const fn measurement_length_exited(&self) -> Option<UiAction> {
        self.measurement_length_key_pressed('\r')
    }

    /// Reimplements Ghidra function `FUN_0151fd00` at `0x0151FD00`.
    ///
    /// A rejected integer edit restores the active Length or Timeout field from
    /// its last accepted backend value. Period is not handled by this event.
    #[must_use]
    pub const fn measurement_length_error(&self) -> Option<UiAction> {
        match self.measurement_value_editor {
            MeasurementValueEditor::Length | MeasurementValueEditor::Timeout => Some(
                UiAction::RestoreIntegerMeasurementEditorValue(self.measurement_value_editor),
            ),
            MeasurementValueEditor::Period => None,
        }
    }

    /// Reimplements Ghidra function `FUN_0151fdd0` at `0x0151FDD0`.
    ///
    /// A direct update forwards any valid selection. A synchronized update is
    /// a no-op when the selection did not change. A changed selection refreshes
    /// input bindings, rescales the display, and invalidates it in that order.
    #[must_use]
    pub fn clock_and_threshold_changed(
        selection: Option<usize>,
        mode: ClockThresholdUpdateMode,
    ) -> Vec<ClockThresholdChangeStep> {
        let Some(selection) = selection else {
            return Vec::new();
        };
        let ClockThresholdUpdateMode::Synchronized {
            current_selection,
            clock_period,
        } = mode
        else {
            return vec![ClockThresholdChangeStep::SetSelection(selection)];
        };
        if selection == current_selection {
            return Vec::new();
        }
        let (factor, reference) = if selection == 1 {
            (1.0 / clock_period, 1.0)
        } else {
            (clock_period, clock_period)
        };
        vec![
            ClockThresholdChangeStep::SetSelection(selection),
            ClockThresholdChangeStep::RefreshInputBindings {
                group_code: 2,
                state: false,
                invalidate: true,
            },
            ClockThresholdChangeStep::RescaleDisplay { factor, reference },
            ClockThresholdChangeStep::InvalidateDisplay,
        ]
    }

    /// Reimplements Ghidra function `FUN_01520010` at `0x01520010`.
    ///
    /// Both update modes forward a valid selection. The mode that owns local
    /// controls also enables Delay and Position only for Sequential index one.
    #[must_use]
    pub fn trigger_source_mode_changed(
        selection: Option<usize>,
        mode: TriggerSourceModeUpdateMode,
    ) -> Vec<TriggerSourceModeChangeStep> {
        let Some(selection) = selection else {
            return Vec::new();
        };
        let mut steps = vec![TriggerSourceModeChangeStep::SetSelection(selection)];
        if mode == TriggerSourceModeUpdateMode::SelectionAndControls {
            steps.push(TriggerSourceModeChangeStep::SetDelayAndPositionEnabled(
                selection == 1,
            ));
        }
        steps
    }

    /// Reimplements Ghidra function `FUN_01520160` at `0x01520160`.
    ///
    /// A rejected edit restores the visible Trigger Position field from the
    /// runtime-selected accepted value. It does not change analyzer state.
    #[must_use]
    pub const fn trigger_position_error(use_alternate_source: bool) -> UiAction {
        let source = if use_alternate_source {
            TriggerPositionValueSource::Alternate
        } else {
            TriggerPositionValueSource::Primary
        };
        UiAction::RestoreTriggerPosition(source)
    }

    /// Reimplements Ghidra function `FUN_01520280` at `0x01520280`.
    ///
    /// Enter submits the visible integer through the runtime-selected Trigger
    /// Position adapter. Other keys remain normal text-editor input.
    #[must_use]
    pub const fn trigger_position_key_pressed(
        key: char,
        use_alternate_source: bool,
    ) -> Option<UiAction> {
        if key != '\r' {
            return None;
        }
        let source = if use_alternate_source {
            TriggerPositionValueSource::Alternate
        } else {
            TriggerPositionValueSource::Primary
        };
        Some(UiAction::ApplyTriggerPositionEdit(source))
    }

    /// Reimplements Ghidra function `FUN_01520300` at `0x01520300`.
    ///
    /// Focus loss forces the same runtime-selected submit path as Enter.
    #[must_use]
    pub const fn trigger_position_exited(use_alternate_source: bool) -> Option<UiAction> {
        Self::trigger_position_key_pressed('\r', use_alternate_source)
    }

    /// Reimplements Ghidra function `FUN_01520330` at `0x01520330`.
    ///
    /// The Down spin event decrements through the runtime-selected Trigger
    /// Position adapter.
    #[must_use]
    pub const fn trigger_position_step_down(use_alternate_source: bool) -> UiAction {
        let source = if use_alternate_source {
            TriggerPositionValueSource::Alternate
        } else {
            TriggerPositionValueSource::Primary
        };
        UiAction::StepTriggerPosition {
            source,
            direction: TriggerPositionStepDirection::Decrease,
        }
    }

    /// Reimplements Ghidra function `FUN_01520340` at `0x01520340`.
    ///
    /// The Up spin event increments through the runtime-selected Trigger
    /// Position adapter.
    #[must_use]
    pub const fn trigger_position_step_up(use_alternate_source: bool) -> UiAction {
        let source = if use_alternate_source {
            TriggerPositionValueSource::Alternate
        } else {
            TriggerPositionValueSource::Primary
        };
        UiAction::StepTriggerPosition {
            source,
            direction: TriggerPositionStepDirection::Increase,
        }
    }

    /// Reimplements `FUN_01520bf0` at `0x01520BF0`.
    #[must_use]
    pub fn clock_source_click(&mut self, engine: &dyn AnalyzerEngine) -> bool {
        if self.measurement_choice_editor != MeasurementChoiceEditor::Threshold {
            return false;
        }
        self.measurement_choice_editor = MeasurementChoiceEditor::Clock;
        (self.choices, self.choice_index) =
            engine.measurement_choices(MeasurementChoiceEditor::Clock);
        true
    }

    /// Reimplements `FUN_01520c80` at `0x01520C80`.
    #[must_use]
    pub fn threshold_click(&mut self, engine: &dyn AnalyzerEngine) -> bool {
        if self.measurement_choice_editor != MeasurementChoiceEditor::Clock {
            return false;
        }
        self.measurement_choice_editor = MeasurementChoiceEditor::Threshold;
        (self.choices, self.choice_index) =
            engine.measurement_choices(MeasurementChoiceEditor::Threshold);
        true
    }

    /// Reimplements `FUN_01520d20` at `0x01520D20`.
    #[must_use]
    pub fn delete_selected_group(&mut self, view: &mut dyn AnalyzerViewAdapter) -> bool {
        self.values[0].clear();
        let deleted = self.model.delete_selected_group();
        view.refresh_channels(&self.model);
        view.refresh_display(&self.model);
        self.pending_action = Some(UiAction::RefreshGroups);
        deleted
    }

    /// Reimplements `FUN_01520d80` at `0x01520D80`.
    #[must_use]
    pub fn insert_pattern(&mut self) -> bool {
        let Some(text) = self.model.insert_default_pattern() else {
            return false;
        };
        self.pattern_text = text;
        true
    }

    /// Reimplements `FUN_01521090` at `0x01521090`.
    #[must_use]
    pub fn delete_pattern(&mut self) -> bool {
        let Some(text) = self.model.delete_selected_pattern() else {
            return false;
        };
        self.pattern_text = text;
        true
    }

    /// Reimplements `FUN_01521420` at `0x01521420`.
    #[must_use]
    pub fn select_group_to_endpoint(&mut self) -> bool {
        let Some(value) = self.model.selected_group_endpoint(true) else {
            return false;
        };
        self.values[2] = value.to_string();
        true
    }

    /// Reimplements `FUN_01521440` at `0x01521440`.
    #[must_use]
    pub fn select_group_from_endpoint(&mut self) -> bool {
        let Some(value) = self.model.selected_group_endpoint(false) else {
            return false;
        };
        self.values[1] = value.to_string();
        true
    }

    /// Reimplements `FUN_015215b0` at `0x015215B0`.
    pub fn dispatch_data_load(&mut self) {
        self.pending_action = Some(UiAction::LoadData);
    }

    /// Reimplements `FUN_015215c0` at `0x015215C0`.
    pub fn dispatch_data_save(&mut self) {
        self.pending_action = Some(UiAction::SaveData);
    }

    /// Reimplements the intentional no-op `FUN_01521740` at `0x01521740`.
    pub const fn pattern_editor_click() {}

    fn scroll_vertical(
        &mut self,
        direction: VerticalDirection,
        view: &mut dyn AnalyzerViewAdapter,
    ) -> bool {
        let changed = self.vertical_axis.scroll(direction);
        if changed {
            view.redraw_vertical_axis(self.vertical_axis);
        }
        changed
    }

    fn scroll_horizontal(
        &self,
        direction: HorizontalDirection,
        view: &mut dyn AnalyzerViewAdapter,
    ) -> bool {
        if self.model.buffered_curve().is_none() {
            return false;
        }
        view.scroll_horizontal(direction);
        true
    }

    fn show_bound(&mut self, side: CoordinateSide) {
        self.coordinate_side = Some(side);
        let bounds = self.model.bounds();
        self.coordinate_text = match side {
            CoordinateSide::Left => bounds.left,
            CoordinateSide::Right => bounds.right,
        }
        .to_string();
    }

    #[must_use]
    pub const fn model(&self) -> &AnalyzerModel {
        &self.model
    }

    #[must_use]
    pub fn coordinate_text(&self) -> &str {
        &self.coordinate_text
    }

    #[must_use]
    pub const fn coordinate_side(&self) -> Option<CoordinateSide> {
        self.coordinate_side
    }

    #[must_use]
    pub fn choices(&self) -> (&[String], usize) {
        (&self.choices, self.choice_index)
    }

    #[must_use]
    pub const fn trigger_numeric_value(&self) -> f64 {
        self.trigger_numeric_value
    }

    #[must_use]
    pub const fn integer_value(&self) -> i64 {
        self.integer_value
    }

    #[must_use]
    pub fn pattern_text(&self) -> &str {
        &self.pattern_text
    }

    pub const fn set_vertical_axis(&mut self, window: AxisWindow) {
        self.vertical_axis = window;
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(TOOLBAR, Message::NoOp);
        let body: Element<'_, Message> = row![
            container(scrollable(
                column![
                    row![
                        text("Channel").width(Length::FillPortion(2)),
                        pick_list(
                            ["Channel 1", "Channel 2", "Channel 3", "Channel 4"],
                            self.selections[0],
                            move |value| Message::OptionSelected(0, value)
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Group Label").width(Length::FillPortion(2)),
                        text_input("", &self.values[0])
                            .on_input(move |value| Message::TextChanged(0, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    checkbox("On", self.checks[0])
                        .on_toggle(move |value| Message::Toggle(0, value)),
                    text(format!("Pattern: {}", self.pattern_text)),
                    row![
                        button("Load").on_press(Message::Action(UiAction::LoadData)),
                        button("Save").on_press(Message::Action(UiAction::SaveData)),
                    ]
                    .spacing(4),
                ]
                .spacing(8)
            ))
            .padding(8)
            .width(Length::Fixed(300.0))
            .height(Length::Fill),
            column![
                row![
                    button("Up").on_press(Message::NoOp),
                    button("Down").on_press(Message::NoOp),
                    button("Left").on_press(Message::NoOp),
                    button("Right").on_press(Message::NoOp),
                ]
                .spacing(4),
                Self::display_surface(),
                text_input("", &self.coordinate_text).width(Length::Fixed(140.0)),
            ]
            .spacing(4),
        ]
        .spacing(6)
        .padding(6)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use tiara_core::logic_analyzer::{
        AnalyzerChannel, ChannelGroup, DIGITAL_CURVE_TYPE, DigitalTrace, TriggerPattern,
    };

    #[derive(Default)]
    struct View {
        channel_refreshes: usize,
        display_refreshes: usize,
        vertical_redraws: usize,
        horizontal_scrolls: Vec<HorizontalDirection>,
    }

    impl AnalyzerViewAdapter for View {
        fn refresh_channels(&mut self, _model: &AnalyzerModel) {
            self.channel_refreshes += 1;
        }

        fn refresh_display(&mut self, _model: &AnalyzerModel) {
            self.display_refreshes += 1;
        }

        fn redraw_vertical_axis(&mut self, _window: AxisWindow) {
            self.vertical_redraws += 1;
        }

        fn scroll_horizontal(&mut self, direction: HorizontalDirection) {
            self.horizontal_scrolls.push(direction);
        }
    }

    struct Exchange(Option<DigitalCurve>);

    impl CurveExchange for Exchange {
        fn load_shared_curve(&mut self) -> Option<DigitalCurve> {
            self.0.take()
        }
    }

    #[derive(Default)]
    struct Publisher(Vec<DigitalCurve>);

    impl DigitalResultPublisher for Publisher {
        fn publish_digital_transient(&mut self, curve: DigitalCurve) {
            self.0.push(curve);
        }
    }

    struct Engine;

    impl AnalyzerEngine for Engine {
        fn trigger_choices(&self, editor: TriggerChoiceEditor) -> (Vec<String>, usize) {
            (vec![format!("{editor:?}")], 0)
        }

        fn trigger_value(&self, editor: TriggerValueEditor) -> f64 {
            match editor {
                TriggerValueEditor::Delay => 1.5,
                TriggerValueEditor::Position => 2.5,
            }
        }

        fn measurement_choices(&self, editor: MeasurementChoiceEditor) -> (Vec<String>, usize) {
            (vec![format!("{editor:?}")], 0)
        }

        fn integer_value(&self, editor: MeasurementValueEditor) -> i64 {
            match editor {
                MeasurementValueEditor::Length => 32,
                MeasurementValueEditor::Timeout => 100,
                MeasurementValueEditor::Period => 0,
            }
        }

        fn validate_command(&mut self) -> Result<(), AcquisitionError> {
            Ok(())
        }

        fn validate_circuit(&mut self) -> Result<(), AcquisitionError> {
            Ok(())
        }

        fn run(&mut self, _model: &AnalyzerModel) -> Result<DigitalCurve, AcquisitionError> {
            Ok(curve())
        }

        fn stop(&mut self) {}
    }

    fn curve() -> DigitalCurve {
        DigitalCurve {
            curve_type: DIGITAL_CURVE_TYPE,
            traces: vec![DigitalTrace {
                active: true,
                name: "D0".to_owned(),
                color: 7,
                lower_bound: -1.0,
                upper_bound: 3.0,
            }],
        }
    }

    fn window() -> Window {
        let mut model = AnalyzerModel::new(
            1,
            vec![AnalyzerChannel {
                enabled: true,
                name: "D0".to_owned(),
                color: 7,
                active_index: 0,
            }],
            vec![ChannelGroup {
                label: "bus".to_owned(),
                first_channel: 0,
                last_channel: 0,
                enabled: true,
                patterns: vec![
                    TriggerPattern::default_for_width(1),
                    TriggerPattern::default_for_width(1),
                ],
            }],
            HorizontalBounds {
                left: 0.0,
                right: 1.0,
            },
        );
        model.select_group(Some(0));
        model.select_pattern_group(Some(0));
        model.select_pattern(Some(0));
        Window::with_model(model)
    }

    #[test]
    fn curve_load_and_publish_apply_type_and_numbering_contracts() {
        let mut window = window();
        let mut exchange = Exchange(Some(curve()));
        let mut view = View::default();
        assert!(window.load_shared_curve(&mut exchange, &mut view));
        assert_eq!((view.channel_refreshes, view.display_refreshes), (1, 1));

        let mut publisher = Publisher::default();
        assert!(window.publish_current_curve(&mut publisher));
        assert_eq!(publisher.0[0].traces[0].name, "1.D0");
    }

    #[test]
    fn form_create_selects_runtime_backend_and_stops_on_an_unknown_code() {
        let virtual_steps = Window::form_create(0);
        assert_eq!(
            &virtual_steps[..4],
            &[
                LogicAnalyzerCreateStep::LoadIcon(ICON_RESOURCE),
                LogicAnalyzerCreateStep::InitializeInheritedWindow,
                LogicAnalyzerCreateStep::InitializeInstrumentBase { mode: 5 },
                LogicAnalyzerCreateStep::ConstructVirtualBackend,
            ]
        );
        assert!(virtual_steps.contains(&LogicAnalyzerCreateStep::SetCursorControlsEnabled(false)));
        assert_eq!(
            virtual_steps.last(),
            Some(&LogicAnalyzerCreateStep::SetHelpContext(2001))
        );

        let hardware_steps = Window::form_create(1);
        assert_eq!(
            &hardware_steps[3..5],
            &[
                LogicAnalyzerCreateStep::ConstructHardwareBackend,
                LogicAnalyzerCreateStep::InitializeHardwareBackend,
            ]
        );
        assert!(hardware_steps.contains(&LogicAnalyzerCreateStep::SetCursorControlsEnabled(true)));

        assert_eq!(
            Window::form_create(2),
            vec![
                LogicAnalyzerCreateStep::LoadIcon(ICON_RESOURCE),
                LogicAnalyzerCreateStep::InitializeInheritedWindow,
                LogicAnalyzerCreateStep::InitializeInstrumentBase { mode: 5 },
            ]
        );
    }

    #[test]
    fn close_frees_an_idle_analyzer_and_defers_a_running_analyzer() {
        assert_eq!(Window::request_close(false), CloseDisposition::Free);
        assert_eq!(
            Window::request_close(true),
            CloseDisposition::VetoAndStop {
                action: UiAction::Stop,
                retry_after_stop: true,
            }
        );
    }

    #[test]
    fn close_query_vetoes_only_a_blocked_application_exit() {
        assert_eq!(
            Window::form_close_query(CloseQueryRequest {
                application_exit_active: false,
                instrument_close_blocked: true,
            }),
            CloseQueryResult {
                can_close: true,
                warning: None,
            }
        );
        assert_eq!(
            Window::form_close_query(CloseQueryRequest {
                application_exit_active: true,
                instrument_close_blocked: false,
            }),
            CloseQueryResult {
                can_close: true,
                warning: None,
            }
        );
        assert_eq!(
            Window::form_close_query(CloseQueryRequest {
                application_exit_active: true,
                instrument_close_blocked: true,
            }),
            CloseQueryResult {
                can_close: false,
                warning: Some(CLOSE_WARNING),
            }
        );
    }

    #[test]
    fn hide_clears_only_the_instrument_visibility_flag() {
        assert_eq!(Window::form_hidden(), UiAction::SetInstrumentVisible(false));
    }

    #[test]
    fn can_resize_delegates_to_the_shared_instrument_constraints() {
        assert_eq!(
            Window::form_can_resize(),
            UiAction::ApplySharedResizeConstraints
        );
    }

    #[test]
    fn display_double_click_delegates_to_the_shared_surface_coordinator() {
        assert_eq!(
            Window::screen_double_clicked(),
            UiAction::DisplaySurface(DisplaySurfaceEvent::DoubleClick)
        );
    }

    #[test]
    fn display_mouse_down_delegates_to_the_shared_surface_coordinator() {
        assert_eq!(
            Window::screen_mouse_pressed(),
            UiAction::DisplaySurface(DisplaySurfaceEvent::MouseDown)
        );
    }

    #[test]
    fn display_mouse_move_delegates_to_the_shared_surface_coordinator() {
        assert_eq!(
            Window::screen_mouse_moved(),
            UiAction::DisplaySurface(DisplaySurfaceEvent::MouseMove)
        );
    }

    #[test]
    fn display_mouse_up_preserves_cursor_order_and_synchronization_policy() {
        assert_eq!(
            Window::screen_mouse_released(),
            UiAction::DisplaySurface(DisplaySurfaceEvent::MouseUp {
                constrained_mode: 4,
                order_constraint: CursorOrderConstraint::CursorBAfterAByOnePeriod,
                synchronize_cursors: true,
            })
        );
    }

    #[test]
    fn destroy_releases_an_existing_backend_before_inherited_cleanup() {
        assert_eq!(
            Window::form_destroy(true),
            vec![
                LogicAnalyzerDestroyStep::ShutdownBackend,
                LogicAnalyzerDestroyStep::ReleaseBackend,
                LogicAnalyzerDestroyStep::DestroyInheritedWindow,
            ]
        );
        assert_eq!(
            Window::form_destroy(false),
            vec![LogicAnalyzerDestroyStep::DestroyInheritedWindow]
        );
    }

    #[test]
    fn form_show_rebuilds_trace_links_and_runs_the_refresh_pipeline() {
        let state = Window::form_show(LogicAnalyzerShowConfiguration {
            trace_count: 3,
            reference_duration: 12.0,
            sample_count: 4,
            clock_period: 0.25,
            measurement_length: 32,
            timeout: 100,
        });

        assert_eq!(
            state.trace_links,
            vec![
                LogicAnalyzerTraceLink {
                    index: 0,
                    previous_index: None,
                },
                LogicAnalyzerTraceLink {
                    index: 1,
                    previous_index: Some(0),
                },
                LogicAnalyzerTraceLink {
                    index: 2,
                    previous_index: Some(1),
                },
            ]
        );
        assert_eq!(state.selected_trace, Some(0));
        assert!((state.sample_interval - 3.0).abs() <= f64::EPSILON);
        assert!((state.clock_period - 0.25).abs() <= f64::EPSILON);
        assert_eq!(state.measurement_length, 32);
        assert_eq!(state.timeout, 100);
        assert_eq!((state.group_selection, state.transient_state), (0, 0));
        assert_eq!(
            state.refresh_steps,
            vec![
                LogicAnalyzerShowRefreshStep::RefreshTriggerBounds,
                LogicAnalyzerShowRefreshStep::SynchronizeDisplayBounds,
                LogicAnalyzerShowRefreshStep::RebuildTraceData,
                LogicAnalyzerShowRefreshStep::ReindexActiveChannels,
                LogicAnalyzerShowRefreshStep::ValidateChannelLayout,
                LogicAnalyzerShowRefreshStep::ShowInheritedWindow,
            ]
        );
    }

    #[test]
    fn form_show_leaves_trace_selection_empty_and_preserves_zero_division() {
        let state = Window::form_show(LogicAnalyzerShowConfiguration {
            trace_count: 0,
            reference_duration: 1.0,
            sample_count: 0,
            clock_period: 0.0,
            measurement_length: 0,
            timeout: 0,
        });

        assert!(state.trace_links.is_empty());
        assert_eq!(state.selected_trace, None);
        assert!(state.sample_interval.is_infinite());
    }

    #[test]
    fn paint_adapter_builds_the_declarative_logic_analyzer_surface() {
        drop(Window::display_surface());
    }

    #[test]
    fn acquisition_and_stop_preserve_the_recovered_lifecycle() {
        let mut window = window();
        let mut engine = Engine;
        let mut view = View::default();
        assert_eq!(
            window.run_acquisition(&mut engine, &mut view),
            AcquisitionOutcome::Completed
        );
        assert_eq!(window.model().status(), 0);
        assert!(window.start_click());
        window.stop_click(&mut engine);
        assert_eq!(
            window.model().lifecycle(),
            AcquisitionLifecycle::StopRequested
        );
        assert_eq!(window.model().status(), 2);
    }

    #[test]
    fn scroll_and_coordinate_controls_are_guarded() {
        let mut window = window();
        let mut view = View::default();
        window.set_vertical_axis(AxisWindow {
            start: 0,
            visible_count: 1,
            active_axis_count: 2,
        });
        assert!(!window.scroll_up(&mut view));
        assert!(window.scroll_down(&mut view));
        assert!(!window.scroll_left(&mut view));
        window.show_right_bound();
        assert_eq!(window.coordinate_text(), "1");
    }

    #[test]
    fn coordinate_steps_select_the_shared_direction_operations() {
        assert_eq!(
            Window::coordinate_step_down(),
            UiAction::StepCoordinate(CoordinateStepDirection::Decrease)
        );
        assert_eq!(
            Window::coordinate_step_up(),
            UiAction::StepCoordinate(CoordinateStepDirection::Increase)
        );
    }

    #[test]
    fn coordinate_enter_submits_a_committed_typed_edit() {
        assert_eq!(Window::coordinate_key_pressed('x'), None);
        assert_eq!(
            Window::coordinate_key_pressed('\r'),
            Some(UiAction::ApplyTypedCoordinateEdit { commit: true })
        );
    }

    #[test]
    fn coordinate_exit_forces_the_same_commit_as_enter() {
        assert_eq!(
            Window::coordinate_exited(),
            Window::coordinate_key_pressed('\r')
        );
    }

    #[test]
    fn coordinate_error_restores_left_by_default_and_explicit_right() {
        let mut window = window();

        window.coordinate_text = "bad".to_owned();
        Window::coordinate_error(&mut window);
        assert_eq!(window.coordinate_text(), "0");

        window.show_right_bound();
        window.coordinate_text = "bad".to_owned();
        window.coordinate_error();
        assert_eq!(window.coordinate_text(), "1");
    }

    #[test]
    fn coordinate_step_end_only_arms_the_commit_flag() {
        let mut window = window();

        assert!(!window.coordinate_commit_pending);
        Window::coordinate_step_ended(&mut window);
        assert!(window.coordinate_commit_pending);
        assert_eq!(window.coordinate_text(), "");
    }

    #[test]
    fn pattern_group_change_selects_the_first_pattern_and_rejects_missing_groups() {
        let mut window = window();

        assert!(!window.pattern_group_changed(None));
        assert!(!window.pattern_group_changed(Some(1)));
        assert!(Window::pattern_group_changed(&mut window, Some(0)));
        assert_eq!(window.pattern_text(), "1.[ X]");
    }

    #[test]
    fn pattern_selection_copies_valid_text_and_clears_only_for_no_selection() {
        let mut window = window();

        assert!(window.pattern_selection_changed(Some(PatternEditSelection {
            index: 1,
            text: "2.[ 1]".to_owned(),
        })));
        assert_eq!(window.pattern_text(), "2.[ 1]");

        assert!(!window.pattern_selection_changed(None));
        assert_eq!(window.pattern_text(), "");
        assert!(window.insert_pattern());
    }

    #[test]
    fn pattern_key_press_replaces_only_analyzer_symbols_and_updates_the_model() {
        let mut window = window();
        assert!(window.pattern_group_changed(Some(0)));

        assert!(Window::pattern_key_pressed(&mut window, '0'));
        assert_eq!(window.pattern_text(), "1.[ 0]");
        assert_eq!(window.model().groups()[0].patterns[0].markers, vec!['0']);

        assert!(!window.pattern_key_pressed('Z'));
        window.pattern_cursor = 4;
        assert!(window.pattern_key_pressed('x'));
        assert_eq!(window.pattern_text(), "1.[ X]");
        assert!(!window.pattern_key_pressed('\r'));
        assert_eq!(window.pattern_text(), "1.[ X]");
    }

    #[test]
    fn group_label_enter_commits_and_runs_analyzer_refresh_in_order() {
        let mut window = window();
        window.update(Message::TextChanged(0, "Inputs".to_owned()));

        assert_eq!(window.group_label_key_pressed('x'), None);
        assert_eq!(
            Window::group_label_key_pressed(&window, '\r'),
            Some(UiAction::CommitGroupLabel {
                label: "Inputs".to_owned(),
                follow_up: [
                    GroupLabelCommitStep::CopyPatternGroups,
                    GroupLabelCommitStep::SelectFirstPatternGroup,
                    GroupLabelCommitStep::RefreshPatternView,
                    GroupLabelCommitStep::ReindexEnabledChannels,
                    GroupLabelCommitStep::ApplyEnabledChannels,
                ],
            })
        );
    }

    #[test]
    fn group_label_exit_uses_the_enter_commit_path() {
        let mut window = window();
        window.update(Message::TextChanged(0, "Bus".to_owned()));

        assert_eq!(
            window.group_label_exited(),
            window.group_label_key_pressed('\r')
        );
    }

    #[test]
    fn channel_label_enter_commits_only_for_the_active_channel() {
        let request = |key, edited_channel_index, active_channel_index| ChannelLabelKeyRequest {
            key,
            edited_channel_index,
            active_channel_index,
            text: "Clock".to_owned(),
        };

        assert_eq!(Window::channel_edit_key_pressed(request('x', 2, 2)), None);
        assert_eq!(
            Window::channel_edit_key_pressed(request('\r', 2, 1)),
            Some(UiAction::HandleChannelLabelKey {
                consumed: true,
                committed_label: None,
            })
        );
        assert_eq!(
            Window::channel_edit_key_pressed(request('\r', 2, 2)),
            Some(UiAction::HandleChannelLabelKey {
                consumed: true,
                committed_label: Some("Clock".to_owned()),
            })
        );
    }

    #[test]
    fn channel_change_ignores_none_and_delegates_a_valid_index() {
        assert_eq!(Window::channel_box_changed(None), None);
        assert_eq!(
            Window::channel_box_changed(Some(3)),
            Some(UiAction::SynchronizeChannelSelection(3))
        );
    }

    #[test]
    fn channel_group_change_ignores_none_and_synchronizes_a_selection() {
        let mut window = window();
        window.model.select_group(None);

        assert_eq!(window.group_label_box_changed(None), None);
        assert_eq!(
            window.group_label_box_changed(Some(0)),
            Some(UiAction::SelectChannelGroup {
                index: 0,
                synchronize: [
                    ChannelGroupSelectionStep::LoadChannelRange,
                    ChannelGroupSelectionStep::SelectEndpointChannel,
                    ChannelGroupSelectionStep::RefreshSelectedChannel,
                    ChannelGroupSelectionStep::LoadEnabledState,
                    ChannelGroupSelectionStep::LoadGroupLabel,
                ],
            })
        );
        assert!(window.select_group_to_endpoint());
        assert_eq!(window.values[2], "0");
    }

    #[test]
    fn pattern_key_down_preserves_the_formatted_prefix_and_closing_delimiter() {
        use iced::keyboard::key::Named;

        assert_eq!(
            Window::pattern_key_down(Key::Named(Named::ArrowLeft), Modifiers::SHIFT),
            UiAction::ConstrainPatternEditor {
                key: Key::Named(Named::ArrowLeft),
                modifiers: Modifiers::SHIFT,
                editable_region: PatternEditableRegion {
                    protected_prefix: 3,
                    protected_suffix: 1,
                },
            }
        );
    }

    #[test]
    fn pattern_group_drop_down_refreshes_only_a_selected_model_group() {
        let window = window();

        assert_eq!(window.pattern_group_drop_down(None), None);
        assert_eq!(window.pattern_group_drop_down(Some(1)), None);
        assert_eq!(
            window.pattern_group_drop_down(Some(0)),
            Some(UiAction::RefreshPatternGroupFromBackend(0))
        );
    }

    #[test]
    fn cursor_a_left_press_selects_the_left_bound_and_starts_move() {
        assert_eq!(
            Window::move_a_cursor_left_started(),
            UiAction::BeginCursorMove {
                cursor: CursorMarker::A,
                direction: CursorMoveDirection::Left,
                start_bound: CursorMoveStartBound::VisibleLeft,
            }
        );
    }

    #[test]
    fn cursor_b_left_press_selects_the_visible_left_bound_and_starts_move() {
        assert_eq!(
            Window::move_b_cursor_left_started(),
            UiAction::BeginCursorMove {
                cursor: CursorMarker::B,
                direction: CursorMoveDirection::Left,
                start_bound: CursorMoveStartBound::VisibleLeft,
            }
        );
    }

    #[test]
    fn cursor_a_left_release_ends_move_without_an_order_constraint() {
        assert_eq!(
            Window::move_a_cursor_left_ended(),
            UiAction::EndCursorMove {
                cursor: CursorMarker::A,
                direction: CursorMoveDirection::Left,
                order_constraint: None,
            }
        );
    }

    #[test]
    fn cursor_b_left_release_ends_move_without_an_order_constraint() {
        assert_eq!(
            Window::move_b_cursor_left_ended(),
            UiAction::EndCursorMove {
                cursor: CursorMarker::B,
                direction: CursorMoveDirection::Left,
                order_constraint: None,
            }
        );
    }

    #[test]
    fn cursor_a_right_press_selects_the_right_bound_and_starts_move() {
        assert_eq!(
            Window::move_a_cursor_right_started(),
            UiAction::BeginCursorMove {
                cursor: CursorMarker::A,
                direction: CursorMoveDirection::Right,
                start_bound: CursorMoveStartBound::VisibleRight,
            }
        );
    }

    #[test]
    fn cursor_b_right_press_selects_the_right_bound_and_starts_move() {
        assert_eq!(
            Window::move_b_cursor_right_started(),
            UiAction::BeginCursorMove {
                cursor: CursorMarker::B,
                direction: CursorMoveDirection::Right,
                start_bound: CursorMoveStartBound::VisibleRight,
            }
        );
    }

    #[test]
    fn cursor_b_right_release_ends_move_without_an_order_constraint() {
        assert_eq!(
            Window::move_b_cursor_right_ended(),
            UiAction::EndCursorMove {
                cursor: CursorMarker::B,
                direction: CursorMoveDirection::Right,
                order_constraint: None,
            }
        );
    }

    #[test]
    fn cursor_a_right_release_keeps_cursor_b_one_period_after_cursor_a() {
        assert_eq!(
            Window::move_a_cursor_right_ended(),
            UiAction::EndCursorMove {
                cursor: CursorMarker::A,
                direction: CursorMoveDirection::Right,
                order_constraint: Some(CursorOrderConstraint::CursorBAfterAByOnePeriod),
            }
        );
    }

    #[test]
    fn resize_uses_the_shared_instrument_window_layout_policy() {
        assert_eq!(
            Window::form_resized(),
            UiAction::ResizeLayout(LogicAnalyzerResizePolicy {
                run_base_layout: true,
                scroll_scale_factor: 4,
                default_display_inset: 24,
                preserve_panel_height_in_compact_mode: true,
                panel_height_scale_tenths: 24,
                reference_height_scale_tenths: 3,
            })
        );
    }

    #[test]
    fn editor_switches_are_paired_and_engine_backed() {
        let mut window = window();
        let engine = Engine;
        assert!(window.trigger_mode_click(&engine));
        assert!(!window.trigger_mode_click(&engine));
        assert!(window.trigger_source_click(&engine));
        assert!(window.trigger_delay_click(&engine));
        assert!((window.trigger_numeric_value() - 1.5).abs() <= f64::EPSILON);
        assert!(window.trigger_position_click(&engine));
        assert!((window.trigger_numeric_value() - 2.5).abs() <= f64::EPSILON);
        assert!(window.threshold_click(&engine));
        assert!(window.clock_source_click(&engine));
        window.select_length_editor(&engine);
        assert_eq!(window.integer_value, 32);
        window.select_timeout_editor(&engine);
        assert_eq!(window.integer_value, 100);
    }

    #[test]
    fn clock_period_steps_route_to_each_active_measurement_editor() {
        let mut window = window();
        let engine = Engine;

        assert_eq!(
            window.clock_period_step_down(),
            UiAction::StepMeasurementValue {
                target: MeasurementValueEditor::Period,
                direction: MeasurementStepDirection::Decrease,
            }
        );
        window.select_length_editor(&engine);
        assert_eq!(
            window.clock_period_step_up(),
            UiAction::StepMeasurementValue {
                target: MeasurementValueEditor::Length,
                direction: MeasurementStepDirection::Increase,
            }
        );
        window.select_timeout_editor(&engine);
        assert_eq!(
            window.clock_period_step_down(),
            UiAction::StepMeasurementValue {
                target: MeasurementValueEditor::Timeout,
                direction: MeasurementStepDirection::Decrease,
            }
        );
    }

    #[test]
    fn trace_type_change_only_applies_the_recovered_second_selection_codes() {
        assert_eq!(Window::trace_type_changed(None), None);
        assert_eq!(Window::trace_type_changed(Some(0)), None);
        assert_eq!(
            Window::trace_type_changed(Some(1)),
            Some(UiAction::ApplyTraceTypeSelection {
                trace_type_code: 10,
                display_mode_code: 2,
            })
        );
    }

    #[test]
    fn clock_period_enter_submits_the_typed_edit_and_other_keys_do_not() {
        assert_eq!(Window::clock_period_key_pressed('x'), None);
        assert_eq!(
            Window::clock_period_key_pressed('\r'),
            Some(UiAction::ApplyClockPeriodEdit)
        );
    }

    #[test]
    fn clock_period_exit_forces_the_same_typed_edit_as_enter() {
        assert_eq!(
            Window::clock_period_exited(),
            Window::clock_period_key_pressed('\r')
        );
        assert_eq!(
            Window::clock_period_exited(),
            Some(UiAction::ApplyClockPeriodEdit)
        );
    }

    #[test]
    fn clock_period_error_requests_the_last_accepted_value_for_display() {
        assert_eq!(
            Window::clock_period_error(),
            UiAction::RestoreClockPeriodEditorValue
        );
    }

    #[test]
    fn measurement_length_enter_submits_only_the_active_integer_editor() {
        let mut window = window();
        let engine = Engine;

        assert_eq!(window.measurement_length_key_pressed('\r'), None);
        window.select_length_editor(&engine);
        assert_eq!(window.measurement_length_key_pressed('x'), None);
        assert_eq!(
            window.measurement_length_key_pressed('\r'),
            Some(UiAction::ApplyIntegerMeasurementEdit(
                MeasurementValueEditor::Length
            ))
        );
        window.select_timeout_editor(&engine);
        assert_eq!(
            window.measurement_length_key_pressed('\r'),
            Some(UiAction::ApplyIntegerMeasurementEdit(
                MeasurementValueEditor::Timeout
            ))
        );
    }

    #[test]
    fn measurement_length_exit_reuses_the_guarded_enter_path() {
        let mut window = window();
        let engine = Engine;

        assert_eq!(window.measurement_length_exited(), None);
        window.select_length_editor(&engine);
        assert_eq!(
            window.measurement_length_exited(),
            window.measurement_length_key_pressed('\r')
        );
        assert_eq!(
            window.measurement_length_exited(),
            Some(UiAction::ApplyIntegerMeasurementEdit(
                MeasurementValueEditor::Length
            ))
        );
    }

    #[test]
    fn measurement_length_error_restores_only_the_active_integer_editor() {
        let mut window = window();
        let engine = Engine;

        assert_eq!(window.measurement_length_error(), None);
        window.select_length_editor(&engine);
        assert_eq!(
            window.measurement_length_error(),
            Some(UiAction::RestoreIntegerMeasurementEditorValue(
                MeasurementValueEditor::Length
            ))
        );
        window.select_timeout_editor(&engine);
        assert_eq!(
            window.measurement_length_error(),
            Some(UiAction::RestoreIntegerMeasurementEditorValue(
                MeasurementValueEditor::Timeout
            ))
        );
    }

    #[test]
    fn clock_threshold_change_preserves_direct_guarded_and_scaled_paths() {
        assert!(
            Window::clock_and_threshold_changed(None, ClockThresholdUpdateMode::Direct).is_empty()
        );
        assert_eq!(
            Window::clock_and_threshold_changed(Some(1), ClockThresholdUpdateMode::Direct),
            vec![ClockThresholdChangeStep::SetSelection(1)]
        );
        assert!(
            Window::clock_and_threshold_changed(
                Some(0),
                ClockThresholdUpdateMode::Synchronized {
                    current_selection: 0,
                    clock_period: 0.25,
                },
            )
            .is_empty()
        );
        assert_eq!(
            Window::clock_and_threshold_changed(
                Some(1),
                ClockThresholdUpdateMode::Synchronized {
                    current_selection: 0,
                    clock_period: 0.25,
                },
            ),
            vec![
                ClockThresholdChangeStep::SetSelection(1),
                ClockThresholdChangeStep::RefreshInputBindings {
                    group_code: 2,
                    state: false,
                    invalidate: true,
                },
                ClockThresholdChangeStep::RescaleDisplay {
                    factor: 4.0,
                    reference: 1.0,
                },
                ClockThresholdChangeStep::InvalidateDisplay,
            ]
        );
        assert!(matches!(
            Window::clock_and_threshold_changed(
                Some(0),
                ClockThresholdUpdateMode::Synchronized {
                    current_selection: 1,
                    clock_period: 0.25,
                },
            )[2],
            ClockThresholdChangeStep::RescaleDisplay {
                factor: 0.25,
                reference: 0.25,
            }
        ));
    }

    #[test]
    fn trigger_source_mode_forwards_selection_and_updates_owned_controls() {
        assert!(
            Window::trigger_source_mode_changed(
                None,
                TriggerSourceModeUpdateMode::SelectionAndControls,
            )
            .is_empty()
        );
        assert_eq!(
            Window::trigger_source_mode_changed(
                Some(0),
                TriggerSourceModeUpdateMode::SelectionAndControls,
            ),
            vec![
                TriggerSourceModeChangeStep::SetSelection(0),
                TriggerSourceModeChangeStep::SetDelayAndPositionEnabled(false),
            ]
        );
        assert_eq!(
            Window::trigger_source_mode_changed(
                Some(1),
                TriggerSourceModeUpdateMode::SelectionAndControls,
            ),
            vec![
                TriggerSourceModeChangeStep::SetSelection(1),
                TriggerSourceModeChangeStep::SetDelayAndPositionEnabled(true),
            ]
        );
        assert_eq!(
            Window::trigger_source_mode_changed(
                Some(1),
                TriggerSourceModeUpdateMode::SelectionOnly,
            ),
            vec![TriggerSourceModeChangeStep::SetSelection(1)]
        );
    }

    #[test]
    fn trigger_position_error_restores_from_the_runtime_selected_source() {
        assert_eq!(
            Window::trigger_position_error(false),
            UiAction::RestoreTriggerPosition(TriggerPositionValueSource::Primary)
        );
        assert_eq!(
            Window::trigger_position_error(true),
            UiAction::RestoreTriggerPosition(TriggerPositionValueSource::Alternate)
        );
    }

    #[test]
    fn trigger_position_enter_submits_through_the_runtime_selected_source() {
        assert_eq!(Window::trigger_position_key_pressed('x', false), None);
        assert_eq!(
            Window::trigger_position_key_pressed('\r', false),
            Some(UiAction::ApplyTriggerPositionEdit(
                TriggerPositionValueSource::Primary
            ))
        );
        assert_eq!(
            Window::trigger_position_key_pressed('\r', true),
            Some(UiAction::ApplyTriggerPositionEdit(
                TriggerPositionValueSource::Alternate
            ))
        );
    }

    #[test]
    fn trigger_position_exit_reuses_the_runtime_selected_enter_path() {
        assert_eq!(
            Window::trigger_position_exited(false),
            Window::trigger_position_key_pressed('\r', false)
        );
        assert_eq!(
            Window::trigger_position_exited(true),
            Window::trigger_position_key_pressed('\r', true)
        );
    }

    #[test]
    fn trigger_position_steps_use_the_runtime_selected_adapter() {
        assert_eq!(
            Window::trigger_position_step_down(false),
            UiAction::StepTriggerPosition {
                source: TriggerPositionValueSource::Primary,
                direction: TriggerPositionStepDirection::Decrease,
            }
        );
        assert_eq!(
            Window::trigger_position_step_up(true),
            UiAction::StepTriggerPosition {
                source: TriggerPositionValueSource::Alternate,
                direction: TriggerPositionStepDirection::Increase,
            }
        );
    }

    #[test]
    fn pattern_and_group_edits_apply_guards_and_refresh_rules() {
        let mut window = window();
        assert!(window.insert_pattern());
        assert_eq!(window.pattern_text(), "1.[ X]");
        assert!(window.delete_pattern());
        let mut view = View::default();
        assert!(window.delete_selected_group(&mut view));
        assert_eq!((view.channel_refreshes, view.display_refreshes), (1, 1));
        assert_eq!(window.take_action(), Some(UiAction::RefreshGroups));
    }
}
