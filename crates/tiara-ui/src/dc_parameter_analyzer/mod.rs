//! DC Parameter Analyzer state and plot adapters.

use iced::Color;
use std::time::Duration;
use tiara_core::numeric_format::{ParseEngineeringNumberError, parse_engineering_number};
use tiara_core::source_ranges::SourceRanges;

use crate::signal_analyzer::{
    ResizeDecision, ResizePolicy, ResizeRequest, constrain_measurement_window_resize,
};
use crate::xy_recorder::model::{
    RecorderScreenInteractionHost, ScreenDoubleClickAction, ScreenDoubleClickInput,
    ScreenMouseDownInput, ScreenMouseMoveInput, route_measurement_surface_double_click,
};

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct ChannelId(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct TraceSourceId(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct TraceAttributesId(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct PlotAttachmentId(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct TraceSource {
    pub id: TraceSourceId,
    pub active: bool,
}

#[derive(Debug, Clone, PartialEq)]
pub struct DcAnalyzerChannel {
    pub id: ChannelId,
    pub enabled: bool,
    pub sensitivity_index: u8,
    pub sensitivity_count: u8,
    pub source_type_code: u16,
    pub primary_source: Option<TraceSource>,
    pub secondary_source: Option<TraceSourceId>,
    pub subtraces: Vec<TraceSourceId>,
    pub selected_subtrace: usize,
    pub attributes: TraceAttributesId,
    pub color: Color,
    pub unit_per_division: f64,
    pub position: f64,
    pub attachment: Option<PlotAttachmentId>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct TraceAttachFlags {
    pub first: bool,
    pub second: bool,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct AttachYTraceRequest {
    pub channel: ChannelId,
    pub source: TraceSourceId,
    pub attributes: TraceAttributesId,
    pub color: Color,
    pub minimum: f64,
    pub maximum: f64,
    pub channel_position: f64,
    pub form_vertical_position: f64,
    pub flags: TraceAttachFlags,
    pub caller_context: u64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AttachYChannelOutcome {
    MissingPrimarySource,
    MissingSelectedSubtrace,
    Attached(PlotAttachmentId),
}

pub trait DcAnalyzerPlotHost {
    fn attach_y_trace(&mut self, request: AttachYTraceRequest) -> PlotAttachmentId;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcScreenPaintPlan {
    pub right: u32,
    pub bottom: u32,
    pub background_rgb: u32,
    pub paint_plot: bool,
    pub paint_readouts: bool,
    pub invalidate_front_overlay: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcResizeInput {
    pub ui_scale_percent: u32,
    pub header_height: Option<u32>,
    pub compact_layout: bool,
    pub reference_height: u32,
    pub plot_available: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcResizeLayout {
    pub scaled_text_metric: u32,
    pub plot_top: Option<u32>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MeasurementRecordingMode {
    Average,
    Rms,
    Momentary,
}

impl MeasurementRecordingMode {
    #[must_use]
    pub const fn index(self) -> usize {
        match self {
            Self::Average => 0,
            Self::Rms => 1,
            Self::Momentary => 2,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcRecordingModeChangeOutcome {
    NoSelection,
    Applied {
        mode: MeasurementRecordingMode,
        auxiliary_window_restored: bool,
    },
}

pub trait DcRecordingModeChangeHost {
    fn close_auxiliary_measurement_window(&mut self) -> bool;
    fn set_recording_mode(&mut self, mode: MeasurementRecordingMode);
    fn synchronize_measurement_sources(&mut self);
    fn refresh_x_source(&mut self);
    fn refresh_y_channel(&mut self);
    fn apply_sweep_bounds(&mut self);
    fn clear_channel_overlays(&mut self);
    fn synchronize_plot_source(&mut self);
    fn apply_plot_layout(&mut self);
    fn reset_cursor_readouts(&mut self);
    fn ensure_auxiliary_measurement_window(&mut self) -> bool;
    fn show_auxiliary_measurement_window(&mut self);
    fn position_auxiliary_measurement_window(&mut self);
    fn refresh_recording_mode_status(&mut self, mode: MeasurementRecordingMode);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct MeasurementDescriptorId(pub u64);

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct NamedMeasurementValue {
    pub name: String,
    pub value: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DcMeasurementResult {
    pub source: NamedMeasurementValue,
    pub channel: NamedMeasurementValue,
    pub payload_id: u64,
    pub continue_acquisition: bool,
}

#[derive(Debug, Clone, Copy)]
pub struct DcMeasurementRequest<'a> {
    pub descriptors: &'a [MeasurementDescriptorId],
    pub recording_mode: MeasurementRecordingMode,
    pub reset: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AcquisitionState {
    Inactive,
    Active,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcCloseQueryBlock {
    ActiveMeasurementInstrument,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcCloseQueryResult {
    pub allow_close: bool,
    pub block: Option<DcCloseQueryBlock>,
}

pub const DC_ACQUISITION_START_MESSAGE: u16 = 0x0538;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcAcquisitionStartOutcome {
    AlreadyActive,
    Queued,
}

pub trait DcAcquisitionStartHost {
    fn queue_acquisition_start(&mut self, message_code: u16);
}

pub const DC_MEASUREMENT_ERASE_MESSAGE: u16 = 0x0539;

pub trait DcMeasurementEraseRequestHost {
    fn queue_measurement_erase(&mut self, message_code: u16);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcMeasurementEraseMessage {
    pub code: u16,
    pub token: u64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcMeasurementEraseOutcome {
    StaleMessage,
    Reposted,
    Erased(DcMeasurementUpdateOutcome),
}

pub trait DcMeasurementEraseWorkerHost: DcMeasurementUpdateHost {
    fn erase_message_is_current(&mut self, message: DcMeasurementEraseMessage) -> bool;
    fn repost_erase(&mut self, message: DcMeasurementEraseMessage, delay: Duration);
    fn cancel_status_display(&mut self);
    fn remove_all_graph_curves(&mut self);
    fn update_active_graph(&mut self);
    fn refresh_recording_mode_status(&mut self, mode: MeasurementRecordingMode);
}

pub const DC_ACQUISITION_CALLBACK_MESSAGE: u16 = 0x052f;
pub const DC_CURSOR_REPEAT_MESSAGE: u16 = 0x0531;
pub const DC_CURSOR_REPEAT_CONTINUATION_MESSAGE: u16 = 0x0532;
pub const DC_CURSOR_TOGGLE_MESSAGE: u16 = 0x053a;
pub const DC_CURSOR_CURVE_MESSAGE: u16 = 0x053b;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcCursorMoveDirection {
    Left,
    Right,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcCursorRepeatState {
    pub direction: Option<DcCursorMoveDirection>,
    pub step: i32,
    pub delay: Duration,
}

impl Default for DcCursorRepeatState {
    fn default() -> Self {
        Self {
            direction: None,
            step: 0,
            delay: Duration::ZERO,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcCursorMoveStartOutcome {
    IgnoredButton,
    Started,
}

pub trait DcCursorMoveHost {
    fn schedule_cursor_repeat(&mut self, message_code: u16, delay: Duration);
    fn move_cursor_once(&mut self, direction: DcCursorMoveDirection, step: i32);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcCursorMoveEndOutcome {
    IgnoredButton,
    Ended,
}

pub trait DcCursorReleaseHost {
    fn cancel_cursor_message(&mut self, message_code: u16);
    fn finish_cursor_move(&mut self, direction: DcCursorMoveDirection);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcControlRoute {
    Local,
    Remote,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcCursorSelection {
    A,
    B,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcCursorCurveState {
    pub route: DcControlRoute,
    pub selected_cursor: Option<DcCursorSelection>,
    pub plot_state_code: u8,
    pub curve_count: usize,
    pub cursor_a_curve: Option<usize>,
    pub cursor_b_curve: Option<usize>,
    pub cursor_a_active: bool,
    pub cursor_b_active: bool,
    pub readout_revision: u64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcCursorCurveOutcome {
    RemoteQueued,
    RefreshedWithoutSelection,
    Selected {
        cursor: DcCursorSelection,
        curve_index: usize,
    },
}

pub trait DcCursorCurveHost {
    fn send_remote_cursor_curve_command(
        &mut self,
        message_code: u16,
        direction: u8,
        timeout_ms: u32,
    );
    fn replace_cursor_curve(&mut self, cursor: DcCursorSelection, curve_index: usize);
    fn refresh_cursor_readouts(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcCursorToggleOutcome {
    RemoteQueued,
    RefreshedWithoutSelection,
    Unchanged,
    Enabled(DcCursorSelection),
    Disabled(DcCursorSelection),
}

pub trait DcCursorToggleHost {
    fn send_remote_cursor_toggle(&mut self, message_code: u16, enabled: bool, timeout_ms: u32);
    fn create_cursor(&mut self, cursor: DcCursorSelection);
    fn remove_cursor(&mut self, cursor: DcCursorSelection);
    fn refresh_cursor_readouts(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcCursorSelectionOutcome {
    NotSelected,
    Synchronized,
}

pub trait DcCursorSelectionHost {
    fn set_cursor_on_down(&mut self, down: bool);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct DcXSourceId(pub u64);

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DcXSource {
    pub id: DcXSourceId,
    pub active: bool,
    pub measurement_mode: usize,
    pub unit_kind: u8,
    pub sensitivity: f64,
    pub horizontal_position: f64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcXChannelMode {
    Constant,
    LinearSweep,
    LogarithmicSweep,
}

impl DcXChannelMode {
    #[must_use]
    pub const fn index(self) -> usize {
        match self {
            Self::Constant => 0,
            Self::LinearSweep => 1,
            Self::LogarithmicSweep => 2,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcXChannelModeState {
    pub mode: DcXChannelMode,
    pub horizontal_position_controls_enabled: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcXChannelModeChangeOutcome {
    NoSelection,
    MissingSource,
    Updated(DcXChannelMode),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcSweepEndpoint {
    Start,
    Stop,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DcXSourceSelectionState {
    pub selected_source: Option<DcXSourceId>,
    pub stop_button_down: bool,
    pub displayed_measurement_mode: Option<usize>,
    pub source_controls_enabled: bool,
    pub displayed_sensitivity: f64,
    pub displayed_horizontal_position: f64,
    pub sweep_measurement_unit: &'static str,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcXSourceSelectionOutcome {
    NoSelection,
    RefreshedCurrent(DcXSourceId),
    Selected(DcXSourceId),
}

pub trait DcXSourceSelectionHost {
    fn stop_acquisition(&mut self);
    fn select_controller_source(&mut self, source_index: usize);
    fn set_measurement_mode(&mut self, mode_index: usize);
    fn set_source_controls_enabled(&mut self, enabled: bool);
    fn set_x_sensitivity(&mut self, value: f64);
    fn set_horizontal_position(&mut self, value: f64);
    fn set_sweep_measurement_unit(&mut self, unit: &'static str);
    fn refresh_sweep_endpoint(&mut self, endpoint: DcSweepEndpoint, source_index: usize);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcAcquisitionStartMessage {
    pub code: u16,
    pub token: u64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcSweepSourceDescriptor {
    pub output_id: Option<u16>,
    pub sweep_enabled: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DcDataControlsState {
    pub load_enabled: bool,
    pub save_enabled: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcDataLoadOutcome {
    Disabled,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcDataSaveOutcome {
    NoCompletedCurve,
    Published(DcCurveHandle),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcSupportWriterSlot {
    Primary,
    Secondary,
}

#[derive(Debug, Clone, PartialEq)]
pub struct DcAcquisitionStartState {
    pub acquisition: AcquisitionState,
    pub aborted: bool,
    pub transient_curve: Option<DcCurveHandle>,
    pub data_controls: DcDataControlsState,
    pub stop_button_down: bool,
    pub primary_mode: u8,
    pub secondary_mode: u8,
    pub interval_per_point: f64,
    pub sources: Vec<DcSweepSourceDescriptor>,
    pub selected_source: Option<usize>,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DcSweepStartRequest {
    pub source_index: usize,
    pub output_id: u16,
    pub interval_per_point: f64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcAcquisitionWorkerOutcome {
    AlreadyActive,
    StaleMessage,
    Reposted,
    Started { generator_started: bool },
    StartedThenStopped { generator_started: bool },
}

pub trait DcAcquisitionWorkerHost {
    fn start_message_is_current(&mut self, message: DcAcquisitionStartMessage) -> bool;
    fn preflight_ready(&mut self) -> bool;
    fn repost_start(&mut self, message: DcAcquisitionStartMessage, delay: Duration);
    fn ensure_function_generator(&mut self) -> bool;
    fn prepare_fixed_source(&mut self, source_index: usize, output_id: u16);
    fn prepare_sweep_source(&mut self, request: DcSweepStartRequest);
    fn register_generator_callback(&mut self, message_code: u16);
    fn start_generator(&mut self);
    fn set_data_controls_enabled(&mut self, enabled: bool);
    fn update_graph(&mut self, destructive: bool);
    fn publish_runtime_modes(&mut self, primary: u8, secondary: u8);
    fn apply_sweep_bounds(&mut self, update: bool);
    fn acquisition_can_continue(&mut self) -> bool;
    fn stop_acquisition(&mut self);
}

/// Implements Ghidra function `FUN_01b68d60` at `0x01B68D60`.
///
/// Handles the DC Parameter Analyzer data-load command. The recovered form's
/// virtual load provider is disabled, so the command returns without opening a
/// dialog or changing data, plot, cursor, error, or persistent state.
#[must_use]
pub const fn load_dc_measurement_data() -> DcDataLoadOutcome {
    DcDataLoadOutcome::Disabled
}

/// Implements Ghidra function `FUN_01b68d80` at `0x01B68D80`.
///
/// Preserves the caller's close decision during a normal window query. During
/// application shutdown, it permits an inactive analyzer and blocks an active
/// measurement instrument with a typed reason for the Iced message mapper.
#[must_use]
pub const fn query_dc_parameter_analyzer_close(
    application_exiting: bool,
    acquisition: AcquisitionState,
    current_decision: bool,
) -> DcCloseQueryResult {
    if !application_exiting {
        return DcCloseQueryResult {
            allow_close: current_decision,
            block: None,
        };
    }
    if matches!(acquisition, AcquisitionState::Active) {
        return DcCloseQueryResult {
            allow_close: false,
            block: Some(DcCloseQueryBlock::ActiveMeasurementInstrument),
        };
    }
    DcCloseQueryResult {
        allow_close: true,
        block: None,
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct DcSweepProgressState {
    pub current_value: f64,
    pub step: f64,
    pub remaining_points: u32,
    pub series_point_count: u32,
    pub series_initialized: bool,
    pub sweep_unit: String,
    pub interval_per_point: f64,
    pub stop_button_down: bool,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DcSweepPointRequest<'a> {
    pub value: f64,
    pub unit: &'a str,
    pub create_series: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcSweepAdvanceOutcome {
    Stopped,
    Advanced { remaining_points: u32 },
}

pub trait DcSweepAdvanceHost {
    fn stop_acquisition(&mut self);
    fn append_sweep_point(&mut self, request: DcSweepPointRequest<'_>);
    fn set_series_point_count(&mut self, count: u32);
    fn apply_next_fixed_source(&mut self, value: f64);
    fn apply_next_sweep_source(&mut self, interval_per_point: f64);
    fn register_generator_callback(&mut self, message_code: u16);
    fn start_generator(&mut self);
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DcAcquisitionStopState {
    pub acquisition: AcquisitionState,
    pub aborted: bool,
    pub stop_button_down: bool,
    pub data_controls: DcDataControlsState,
    pub form_is_closing: bool,
    pub current_result: Option<DcCurveHandle>,
    pub fallback_result: Option<DcCurveHandle>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcAcquisitionStopOutcome {
    pub generator_stopped: bool,
    pub fallback_retained: bool,
}

pub trait DcAcquisitionStopHost {
    fn detach_generator_callback(&mut self);
    fn function_generator_available(&mut self) -> bool;
    fn stop_generator(&mut self);
    fn stop_measurement_controller(&mut self);
    fn refresh_recording_mode_status(&mut self);
    fn set_data_controls_enabled(&mut self, enabled: bool);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MeasurementEngineState {
    NotReady,
    Ready,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcMeasurementEngineKind {
    ExpectedDc,
    Other,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MeasurementUpdatePhase {
    Idle,
    Busy,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DcMeasurementUpdateState {
    pub acquisition: AcquisitionState,
    pub engine: MeasurementEngineState,
    pub engine_kind: DcMeasurementEngineKind,
    pub callback_ready: bool,
    pub callback_token: u64,
    pub update_phase: MeasurementUpdatePhase,
    pub reset_pending: bool,
    pub stop_button_down: bool,
    pub recording_mode: MeasurementRecordingMode,
    pub descriptors: Vec<MeasurementDescriptorId>,
    pub last_status: Option<String>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcMeasurementUpdateOutcome {
    Inactive,
    EngineNotReady,
    Stopped,
    Processed,
}

pub trait DcMeasurementUpdateHost {
    fn read_result(&mut self, request: DcMeasurementRequest<'_>) -> DcMeasurementResult;
    fn refresh_source_state(&mut self);
    fn show_status(&mut self, status: &str);
    fn stop_acquisition(&mut self);
    fn process_enabled_channels(&mut self, result: &DcMeasurementResult);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct GeneratorNotification {
    pub token: u64,
    pub payload: Option<u64>,
    pub serialized: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AcquisitionCallbackOutcome {
    Ignored,
    HandledImmediately,
    TokenRejected,
    Reposted,
    Result(DcMeasurementUpdateOutcome),
}

pub trait DcAcquisitionCallbackHost: DcMeasurementUpdateHost {
    fn message_is_blocked(&mut self, notification: GeneratorNotification) -> bool;
    fn handle_immediate_notification(&mut self);
    fn repost_notification(&mut self, notification: GeneratorNotification);
}

/// Implements Ghidra function `FUN_01b65d90` at `0x01B65D90`.
///
/// Queues the DC Parameter Analyzer start message only while acquisition is
/// inactive. The worker that receives the message owns source preparation and
/// the later active-state commit.
pub fn request_dc_acquisition_start(
    acquisition: AcquisitionState,
    host: &mut impl DcAcquisitionStartHost,
) -> DcAcquisitionStartOutcome {
    if acquisition == AcquisitionState::Active {
        return DcAcquisitionStartOutcome::AlreadyActive;
    }
    host.queue_acquisition_start(DC_ACQUISITION_START_MESSAGE);
    DcAcquisitionStartOutcome::Queued
}

/// Implements Ghidra function `FUN_01b675e0` at `0x01B675E0`.
///
/// Queues the serialized DC measurement erase message. Confirmation and
/// individual curve selection are not part of this wrapper.
pub fn request_dc_measurement_erase(host: &mut impl DcMeasurementEraseRequestHost) {
    host.queue_measurement_erase(DC_MEASUREMENT_ERASE_MESSAGE);
}

/// Implements Ghidra function `FUN_01b67610` at `0x01B67610`.
///
/// Validates and serializes a DC measurement erase against result processing.
/// A busy update reposts the command after 100 ms without mutation. A ready
/// pass requests a one-shot engine reset, disables status display, removes all
/// graph curves, updates the active graph, conditionally processes one result,
/// and refreshes the recording-mode status.
pub fn execute_dc_measurement_erase(
    state: &mut DcMeasurementUpdateState,
    message: DcMeasurementEraseMessage,
    host: &mut impl DcMeasurementEraseWorkerHost,
) -> DcMeasurementEraseOutcome {
    if !host.erase_message_is_current(message) {
        return DcMeasurementEraseOutcome::StaleMessage;
    }
    if state.update_phase == MeasurementUpdatePhase::Busy {
        host.repost_erase(message, Duration::from_millis(100));
        return DcMeasurementEraseOutcome::Reposted;
    }

    state.reset_pending = true;
    host.cancel_status_display();
    host.remove_all_graph_curves();
    host.update_active_graph();
    let result = process_measurement_result(state, host);
    host.refresh_recording_mode_status(state.recording_mode);
    DcMeasurementEraseOutcome::Erased(result)
}

/// Implements Ghidra function `FUN_01b65dd0` at `0x01B65DD0`.
///
/// Validates and executes a queued DC acquisition start. A blocked preflight is
/// reposted after 100 ms without committing state. A ready pass prepares fixed
/// sources and the first valid sweep source, starts the generator when that
/// source exists, then commits the common active UI and plot state. A failed
/// measurement-model query enters the normal Stop path after this commit.
pub fn execute_dc_acquisition_start(
    state: &mut DcAcquisitionStartState,
    message: DcAcquisitionStartMessage,
    host: &mut impl DcAcquisitionWorkerHost,
) -> DcAcquisitionWorkerOutcome {
    if state.acquisition == AcquisitionState::Active {
        return DcAcquisitionWorkerOutcome::AlreadyActive;
    }
    if !host.start_message_is_current(message) {
        return DcAcquisitionWorkerOutcome::StaleMessage;
    }
    if !host.preflight_ready() {
        host.repost_start(message, Duration::from_millis(100));
        return DcAcquisitionWorkerOutcome::Reposted;
    }

    let mut sweep_source = None;
    if host.ensure_function_generator() {
        for (source_index, source) in state.sources.iter().enumerate() {
            let Some(output_id) = source.output_id else {
                continue;
            };
            if sweep_source.is_none() && source.sweep_enabled {
                sweep_source = Some((source_index, output_id));
                state.selected_source = Some(source_index);
            } else if !source.sweep_enabled {
                host.prepare_fixed_source(source_index, output_id);
            }
        }
    }

    let generator_started = if let Some((source_index, output_id)) = sweep_source {
        host.prepare_sweep_source(DcSweepStartRequest {
            source_index,
            output_id,
            interval_per_point: state.interval_per_point,
        });
        host.register_generator_callback(DC_ACQUISITION_CALLBACK_MESSAGE);
        host.start_generator();
        true
    } else {
        false
    };

    state.acquisition = AcquisitionState::Active;
    state.aborted = false;
    state.transient_curve = None;
    state.data_controls.load_enabled = false;
    state.data_controls.save_enabled = false;
    host.set_data_controls_enabled(false);
    host.update_graph(false);
    host.publish_runtime_modes(state.primary_mode, state.secondary_mode);
    host.apply_sweep_bounds(true);

    if host.acquisition_can_continue() {
        DcAcquisitionWorkerOutcome::Started { generator_started }
    } else {
        state.stop_button_down = true;
        host.stop_acquisition();
        DcAcquisitionWorkerOutcome::StartedThenStopped { generator_started }
    }
}

/// Implements Ghidra function `FUN_01b66c10` at `0x01B66C10`.
///
/// Stops when no sweep point remains. Otherwise, appends the current typed
/// sweep point, advances the source value, decrements the remaining count,
/// updates the graph-series count, configures the next source values, and
/// starts the next generator callback cycle.
pub fn advance_dc_parameter_sweep(
    state: &mut DcSweepProgressState,
    host: &mut impl DcSweepAdvanceHost,
) -> DcSweepAdvanceOutcome {
    if state.remaining_points == 0 {
        state.stop_button_down = true;
        host.stop_acquisition();
        return DcSweepAdvanceOutcome::Stopped;
    }

    host.append_sweep_point(DcSweepPointRequest {
        value: state.current_value,
        unit: &state.sweep_unit,
        create_series: !state.series_initialized,
    });
    state.series_initialized = true;
    state.current_value += state.step;
    state.remaining_points -= 1;
    state.series_point_count = state.series_point_count.saturating_add(1);
    host.set_series_point_count(state.series_point_count);
    host.apply_next_fixed_source(state.current_value);
    host.apply_next_sweep_source(state.interval_per_point);
    host.register_generator_callback(DC_ACQUISITION_CALLBACK_MESSAGE);
    host.start_generator();
    DcSweepAdvanceOutcome::Advanced {
        remaining_points: state.remaining_points,
    }
}

/// Implements Ghidra function `FUN_01b674b0` at `0x01B674B0`.
///
/// Detaches the generator callback and stops an available running generator.
/// It then clears active state, selects Stop, stops the measurement controller,
/// refreshes status, sets the cooperative abort flag, retains a fallback result
/// when needed, and re-enables Data Load and Data Save.
pub fn stop_dc_parameter_acquisition(
    state: &mut DcAcquisitionStopState,
    host: &mut impl DcAcquisitionStopHost,
) -> DcAcquisitionStopOutcome {
    host.detach_generator_callback();
    let generator_stopped =
        state.acquisition == AcquisitionState::Active && host.function_generator_available();
    if generator_stopped {
        host.stop_generator();
    }

    state.acquisition = AcquisitionState::Inactive;
    state.stop_button_down = true;
    host.stop_measurement_controller();
    host.refresh_recording_mode_status();
    state.aborted = true;

    let fallback_retained =
        !state.form_is_closing && state.current_result.is_none() && state.fallback_result.is_some();
    if fallback_retained {
        state.current_result = state.fallback_result;
    }

    state.data_controls.load_enabled = true;
    state.data_controls.save_enabled = true;
    host.set_data_controls_enabled(true);
    DcAcquisitionStopOutcome {
        generator_stopped,
        fallback_retained,
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ChannelContinuationRequest {
    pub channel: ChannelId,
    pub initial: bool,
    pub result_flag: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ChannelDispatchOutcome {
    NoSelection,
    Disabled,
    Dispatched,
}

pub trait DcMeasurementChannelHost {
    fn continue_channel(&mut self, request: ChannelContinuationRequest);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SweepAxisRangeMode {
    PositionForward,
    CenteredOnOffset,
}

#[derive(Debug, Clone, PartialEq)]
pub struct SweepAxisInput {
    pub mode: SweepAxisRangeMode,
    pub scale_per_division: f64,
    pub vertical_offset: f64,
    pub position_text: String,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct SweepAxisBounds {
    pub lower: f64,
    pub upper: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DcHorizontalPositionState {
    pub mode: SweepAxisRangeMode,
    pub scale_per_division: f64,
    pub position: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DcXSensitivityState {
    pub mode: SweepAxisRangeMode,
    pub index: u8,
    pub scale_per_division: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DcRecordingIntervalState {
    pub index: u8,
    pub count: u8,
    pub value: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct NormalizedRecordingInterval {
    pub index: u8,
    pub value: f64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcRecordingIntervalChangeOutcome {
    AtMinimum,
    AtMaximum,
    Updated,
}

pub trait DcRecordingIntervalHost {
    fn normalize_recording_interval(
        &mut self,
        requested_index: u8,
        current_value: f64,
        from_spin_button: bool,
    ) -> NormalizedRecordingInterval;
    fn set_recording_interval(&mut self, value: f64);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcRecordingIntervalKeyOutcome {
    IgnoredKey,
    Applied,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcXSensitivityChangeOutcome {
    NoSource,
    AtMinimum,
    AtMaximum,
    Updated,
}

pub trait DcXSensitivityHost {
    fn normalize_x_source_sensitivity(&mut self, index: u8) -> NormalizedSensitivity;
    fn set_x_sensitivity(&mut self, value: f64);
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub enum HorizontalPositionKeyOutcome {
    IgnoredKey,
    Applied(SweepAxisBounds),
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub enum DcXSensitivityCommitOutcome {
    NoSelection,
    Committed(SweepAxisBounds),
}

pub trait DcSweepAxisHost {
    fn set_sweep_bound(&mut self, index: usize, value: f64);
    fn redraw(&mut self, update: bool);
}

pub trait DcHorizontalPositionEditorHost {
    fn set_horizontal_position(&mut self, value: f64);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct DcCurveHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcCurveExportState {
    pub acquisition: AcquisitionState,
    pub sweep_mode: SweepAxisRangeMode,
    pub completed_curve: Option<DcCurveHandle>,
}

pub trait DcCurveExportHost {
    fn register_curve(&mut self, mode: u8, curve: DcCurveHandle);
}

pub trait DcDataSaveHost: DcCurveExportHost {
    fn install_current_analysis_curve(&mut self, curve: DcCurveHandle);
    fn clear_previous_nested_curve(&mut self);
    fn create_memory_support_writer(&mut self, slot: DcSupportWriterSlot);
}

pub trait DcAnalyzerShowHost {
    fn prepare_form_show(&mut self);
    fn restore_saved_configuration(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcAnalyzerModelKind {
    DeviceBacked,
    Alternate,
    Unsupported(u8),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcAnalyzerCreationConfig {
    pub model_kind: DcAnalyzerModelKind,
    pub y_channel_count: usize,
    pub x_source_count: usize,
    pub measurement_count: usize,
    pub alternate_generator_was_running: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum DcAnalyzerSetupPhase {
    #[default]
    NotStarted,
    CommonInitialized,
    ControllerInitialized,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcAnalyzerCreationState {
    pub setup_phase: DcAnalyzerSetupPhase,
    pub timer_interval_ms: u32,
    pub analysis_mode_code: u8,
    pub message_mode_code: u8,
    pub y_channel_count: usize,
    pub x_source_count: usize,
    pub measurement_count: usize,
    pub selected_y_channel: Option<usize>,
    pub selected_x_source: Option<usize>,
    pub selected_measurement: Option<usize>,
    pub acquisition: AcquisitionState,
    pub stop_button_down: bool,
    pub alternate_generator_restored: bool,
}

impl Default for DcAnalyzerCreationState {
    fn default() -> Self {
        Self {
            setup_phase: DcAnalyzerSetupPhase::NotStarted,
            timer_interval_ms: 0,
            analysis_mode_code: 0,
            message_mode_code: 0,
            y_channel_count: 0,
            x_source_count: 0,
            measurement_count: 0,
            selected_y_channel: None,
            selected_x_source: None,
            selected_measurement: None,
            acquisition: AcquisitionState::Inactive,
            stop_button_down: false,
            alternate_generator_restored: false,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcAnalyzerCreationOutcome {
    Initialized(DcAnalyzerCreationState),
    UnsupportedModel(DcAnalyzerCreationState),
}

pub trait DcAnalyzerCreationHost {
    fn select_bitmap_resource(&mut self, resource: &'static str);
    fn initialize_shared_form(&mut self);
    fn initialize_measurement_controller(&mut self, model_kind: DcAnalyzerModelKind);
    fn refresh_sweep_unit_caption(&mut self);
    fn select_start_sweep_endpoint(&mut self);
    fn prepare_initial_plot(&mut self);
    fn restore_alternate_generator_timing(&mut self);
}

pub trait DcAnalyzerCloseHost {
    type GeneratorSweepState;

    fn save_configuration(&mut self);
    fn capture_generator_sweep_state(&mut self) -> Option<Self::GeneratorSweepState>;
    fn restore_generator_sweep_state(&mut self, state: &Self::GeneratorSweepState);
    fn close_generator_window(&mut self);
    fn complete_form_close(&mut self);
}

pub trait DcAnalyzerDestroyHost {
    fn complete_form_destroy(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcSweepSourceControllerRequest {
    pub output_id: u16,
    pub linear_sweep: bool,
    pub instrument_type: u8,
    pub analyzer_top: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcSweepSourceControllerOutcome {
    GeneratorUnavailable,
    Ready {
        source_prepared: bool,
        window_shown: bool,
    },
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcSweepSourceControllerError {
    MissingSelectedSource,
}

pub trait DcSweepSourceControllerHost {
    fn ensure_function_generator(&mut self) -> bool;
    fn select_generator_output(&mut self, output_id: u16);
    fn generator_sweep_running(&mut self) -> bool;
    fn prepare_selected_output_as_dc(&mut self, linear_sweep: bool);
    fn generator_window_visible(&mut self) -> bool;
    fn show_generator_window(&mut self);
    fn set_generator_window_top(&mut self, top: i32);
    fn focus_generator_window(&mut self);
    fn select_generator_for_instrument_type(&mut self, instrument_type: u8);
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DcChannelSelectionState {
    pub selected_channel: Option<usize>,
    pub displayed_unit_per_division: f64,
    pub displayed_position: f64,
    pub on_button_down: bool,
}

pub trait DcChannelSelectionHost {
    fn select_controller_channel(&mut self, index: usize);
    fn set_controller_sensitivity(&mut self, index: u8);
    fn synchronize_channel_toggle(&mut self, index: usize, enabled: bool);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ChannelToggleOutcome {
    NoSelection,
    Synchronized,
    Attached,
    Detached { graph_changed: bool },
}

pub trait DcChannelToggleHost {
    fn synchronize_controller(&mut self, index: usize, enabled: bool);
    fn attach_channel(&mut self, channel: &mut DcAnalyzerChannel);
    fn detach_channel(&mut self, channel: &mut DcAnalyzerChannel) -> bool;
    fn redraw_after_detach(&mut self, graph_changed: bool);
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct NormalizedSensitivity {
    pub index: u8,
    pub value: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DcCurveRange {
    pub horizontal_minimum: f64,
    pub horizontal_maximum: f64,
    pub vertical_minimum: f64,
    pub vertical_maximum: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DcAutoRangeCurve {
    pub has_data: bool,
    pub has_provider: bool,
    pub sensitivity_index: u8,
    pub sensitivity: f64,
    pub vertical_position: f64,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DcAutoRangeState {
    pub volts_per_division_mode: bool,
    pub selected_curve: Option<usize>,
    pub horizontal_sensitivity_index: u8,
    pub horizontal_sensitivity: f64,
    pub horizontal_position: f64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcAutoRangeAxis {
    Vertical(usize),
    Horizontal,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DcAutoRangeOutcome {
    pub ranged_curve_count: usize,
    pub horizontal_range_updated: bool,
}

pub trait DcAutoRangeHost {
    fn read_curve_range(
        &mut self,
        curve_index: usize,
        volts_per_division_mode: bool,
    ) -> DcCurveRange;
    fn normalize_auto_sensitivity(
        &mut self,
        axis: DcAutoRangeAxis,
        candidate: f64,
    ) -> NormalizedSensitivity;
    fn set_selected_y_controls(&mut self, sensitivity: f64, position: f64);
    fn set_horizontal_controls(&mut self, sensitivity: f64, position: f64);
    fn apply_plot_range(&mut self, update: bool);
    fn restore_display_selector(&mut self);
    fn refresh_curves(&mut self, update_data: bool, redraw: bool);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SensitivityChangeOutcome {
    NoSelection,
    AtMinimum,
    AtMaximum,
    Updated,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VerticalPositionChangeOutcome {
    NoSelection,
    Updated,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct ApplyVerticalPositionRequest {
    pub channel: ChannelId,
    pub source: TraceSourceId,
    pub position: f64,
    pub flags: TraceAttachFlags,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VerticalPositionCommitOutcome {
    NoSelection,
    Committed { source_count: usize },
}

pub trait DcVerticalPositionCommitHost {
    fn apply_vertical_position(&mut self, request: ApplyVerticalPositionRequest);
    fn redraw(&mut self, update: bool);
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct ApplySensitivityBoundsRequest {
    pub channel: ChannelId,
    pub source: TraceSourceId,
    pub lower: f64,
    pub upper: f64,
    pub flags: TraceAttachFlags,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SensitivityCommitOutcome {
    NoSelection,
    Committed { source_count: usize },
}

pub trait DcSensitivityCommitHost {
    fn apply_sensitivity_bounds(&mut self, request: ApplySensitivityBoundsRequest);
    fn reset_axis_transform(&mut self);
    fn redraw(&mut self, update: bool);
}

pub trait DcSensitivityHost {
    fn select_controller_channel(&mut self, channel_index: usize);
    fn normalize_controller_sensitivity(
        &mut self,
        channel_index: usize,
        sensitivity_index: u8,
    ) -> NormalizedSensitivity;
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub enum SweepEndpointSelectionOutcome {
    Primary(f64),
    Secondary(f64),
    UnsupportedUnit,
}

pub trait SweepAmplitudeEditorHost {
    fn set_sweep_amplitude_enabled(&mut self, enabled: bool);
    fn set_sweep_amplitude(&mut self, value: f64);
}

pub trait SweepAmplitudeUnitHost {
    fn set_sweep_amplitude_unit(&mut self, unit: &'static str);
}

/// Implements Ghidra function `FUN_01b64cd0` at `0x01B64CD0`.
///
/// Marks the channel's primary data source active and attaches either that
/// source or the selected subtrace to the analyzer plot. The vertical range is
/// five divisions below and above zero. Channel position and the form's
/// vertical offset remain separate inputs to the plot adapter. A missing
/// primary source is a no-op. Invalid subtrace state is also rejected safely.
pub fn attach_y_channel_trace(
    channel: &mut DcAnalyzerChannel,
    form_vertical_position: f64,
    flags: TraceAttachFlags,
    caller_context: u64,
    host: &mut impl DcAnalyzerPlotHost,
) -> AttachYChannelOutcome {
    let Some(primary_source) = channel.primary_source.as_mut() else {
        return AttachYChannelOutcome::MissingPrimarySource;
    };
    primary_source.active = true;

    let source = if channel.subtraces.is_empty() {
        primary_source.id
    } else {
        let Some(source) = channel.subtraces.get(channel.selected_subtrace).copied() else {
            return AttachYChannelOutcome::MissingSelectedSubtrace;
        };
        source
    };
    let half_span = channel.unit_per_division * 5.0;
    let attachment = host.attach_y_trace(AttachYTraceRequest {
        channel: channel.id,
        source,
        attributes: channel.attributes,
        color: channel.color,
        minimum: -half_span,
        maximum: half_span,
        channel_position: channel.position,
        form_vertical_position,
        flags,
        caller_context,
    });
    channel.attachment = Some(attachment);
    if channel.subtraces.is_empty() {
        channel.secondary_source = None;
    }
    AttachYChannelOutcome::Attached(attachment)
}

/// Implements Ghidra function `FUN_01b67890` at `0x01B67890`.
///
/// Builds the Iced screen-paint sequence: clear the complete client rectangle
/// to white, paint the DC plot and readouts, and invalidate the front overlay
/// when it is visible. Saturating bounds keep an empty surface valid.
#[must_use]
pub const fn plan_dc_screen_paint(
    width: u32,
    height: u32,
    front_overlay_visible: bool,
) -> DcScreenPaintPlan {
    DcScreenPaintPlan {
        right: width.saturating_sub(1),
        bottom: height.saturating_sub(1),
        background_rgb: 0xFF_FF_FF,
        paint_plot: true,
        paint_readouts: true,
        invalidate_front_overlay: front_overlay_visible,
    }
}

/// Implements Ghidra function `FUN_01b69070` at `0x01B69070`.
///
/// Calculates the DC Parameter Analyzer layout after the shared Iced resize.
/// It scales the recovered text metric and selects the plot top from the header
/// controls. A missing plot retains no top assignment.
#[must_use]
pub fn resize_dc_parameter_analyzer(input: DcResizeInput) -> DcResizeLayout {
    let plot_top = match input.header_height {
        None => 24,
        Some(height) if input.compact_layout => height,
        Some(height) => round_layout_ratio(height, 24, 10).saturating_add(round_layout_ratio(
            input.reference_height,
            3,
            10,
        )),
    };
    DcResizeLayout {
        scaled_text_metric: round_layout_ratio(input.ui_scale_percent, 4, 100),
        plot_top: input.plot_available.then_some(plot_top),
    }
}

/// Implements Ghidra function `FUN_01b69080` at `0x01B69080`.
///
/// Applies the shared measurement-window hide behavior to the Iced-facing DC
/// Parameter Analyzer state. Measurement data and owned resources remain
/// available for the next show event.
pub const fn hide_dc_parameter_analyzer(visible: &mut bool) {
    *visible = false;
}

/// Implements Ghidra function `FUN_01b69090` at `0x01B69090`.
///
/// Adapts the DC Parameter Analyzer `OnCanResize` event to the shared
/// measurement-window resize coordinator.
#[must_use]
pub fn can_resize_dc_parameter_analyzer(
    policy: ResizePolicy,
    request: ResizeRequest,
    work_area_height: i32,
) -> ResizeDecision {
    constrain_measurement_window_resize(policy, request, work_area_height)
}

/// Implements Ghidra function `FUN_01b690b0` at `0x01B690B0`.
///
/// Adapts the DC Parameter Analyzer surface double-click event to the shared
/// measurement-surface editor routing.
#[must_use]
pub const fn double_click_dc_parameter_surface(
    input: ScreenDoubleClickInput,
) -> ScreenDoubleClickAction {
    route_measurement_surface_double_click(input)
}

/// Implements Ghidra function `FUN_01b690c0` at `0x01B690C0`.
///
/// Forwards the DC Parameter Analyzer mouse-down event to the shared
/// measurement-surface interaction coordinator. The coordinator owns hit
/// testing, selection, drag setup, drawing modes, and no-op decisions.
pub fn press_dc_parameter_surface(
    input: ScreenMouseDownInput,
    host: &mut impl RecorderScreenInteractionHost,
) {
    host.mouse_down(input);
}

/// Implements Ghidra function `FUN_01b690f0` at `0x01B690F0`.
///
/// Forwards the DC Parameter Analyzer mouse-move event to the shared
/// measurement-surface interaction coordinator. The coordinator owns cursor
/// feedback, previews, geometry updates, and no-op decisions for its mode.
pub fn move_over_dc_parameter_surface(
    input: ScreenMouseMoveInput,
    host: &mut impl RecorderScreenInteractionHost,
) {
    host.mouse_move(input);
}

/// Implements Ghidra function `FUN_01b69120` at `0x01B69120`.
///
/// Forwards the DC Parameter Analyzer mouse-up event to the shared
/// measurement-surface interaction coordinator. The coordinator finalizes the
/// active edit or keeps the event as a mode-specific no-op.
pub fn release_dc_parameter_surface(host: &mut impl RecorderScreenInteractionHost) {
    host.mouse_up();
}

/// Implements Ghidra function `FUN_01b69150` at `0x01B69150`.
///
/// Applies a selected DC recording mode and rebuilds all dependent analyzer
/// state. An auxiliary measurement window is closed before the rebuild and is
/// restored only when it was visible and can be created again. An empty Iced
/// combo selection has no effect.
pub fn change_dc_recording_mode(
    selection: Option<MeasurementRecordingMode>,
    host: &mut impl DcRecordingModeChangeHost,
) -> DcRecordingModeChangeOutcome {
    let Some(mode) = selection else {
        return DcRecordingModeChangeOutcome::NoSelection;
    };
    let restore_auxiliary_window = host.close_auxiliary_measurement_window();
    host.set_recording_mode(mode);
    host.synchronize_measurement_sources();
    host.refresh_x_source();
    host.refresh_y_channel();
    host.apply_sweep_bounds();
    host.clear_channel_overlays();
    host.synchronize_plot_source();
    host.apply_plot_layout();
    host.reset_cursor_readouts();

    let auxiliary_window_restored =
        if restore_auxiliary_window && host.ensure_auxiliary_measurement_window() {
            host.show_auxiliary_measurement_window();
            host.position_auxiliary_measurement_window();
            true
        } else {
            false
        };
    host.refresh_recording_mode_status(mode);
    DcRecordingModeChangeOutcome::Applied {
        mode,
        auxiliary_window_restored,
    }
}

/// Implements Ghidra function `FUN_01b692b0` at `0x01B692B0`.
///
/// Moves the DC recording interval to the next controller entry. The
/// controller can normalize both the requested index and interval value before
/// the Iced editor is refreshed. The final entry has no effect.
pub fn increase_dc_recording_interval(
    state: &mut DcRecordingIntervalState,
    host: &mut impl DcRecordingIntervalHost,
) -> DcRecordingIntervalChangeOutcome {
    let maximum_index = state.count.saturating_sub(1);
    if state.index >= maximum_index {
        return DcRecordingIntervalChangeOutcome::AtMaximum;
    }
    state.index += 1;
    let normalized = host.normalize_recording_interval(state.index, state.value, true);
    state.index = normalized.index;
    state.value = normalized.value;
    host.set_recording_interval(state.value);
    DcRecordingIntervalChangeOutcome::Updated
}

/// Implements Ghidra function `FUN_01b69340` at `0x01B69340`.
///
/// Moves the DC recording interval to the preceding controller entry. The
/// controller can normalize both the requested index and interval value before
/// the Iced editor is refreshed. Index zero has no effect.
pub fn decrease_dc_recording_interval(
    state: &mut DcRecordingIntervalState,
    host: &mut impl DcRecordingIntervalHost,
) -> DcRecordingIntervalChangeOutcome {
    let Some(previous_index) = state.index.checked_sub(1) else {
        return DcRecordingIntervalChangeOutcome::AtMinimum;
    };
    state.index = previous_index;
    let normalized = host.normalize_recording_interval(state.index, state.value, true);
    state.index = normalized.index;
    state.value = normalized.value;
    host.set_recording_interval(state.value);
    DcRecordingIntervalChangeOutcome::Updated
}

/// Implements Ghidra function `FUN_01b693c0` at `0x01B693C0`.
///
/// Consumes Enter from the Iced recording-interval editor, parses its
/// engineering value, lets the controller normalize the value and current
/// index, and displays the accepted interval. Other keys have no effect.
///
/// # Errors
///
/// Returns an error when Enter receives invalid engineering-number text.
pub fn apply_dc_recording_interval_key(
    key: char,
    text: &str,
    state: &mut DcRecordingIntervalState,
    host: &mut impl DcRecordingIntervalHost,
) -> Result<DcRecordingIntervalKeyOutcome, ParseEngineeringNumberError> {
    if key != '\r' {
        return Ok(DcRecordingIntervalKeyOutcome::IgnoredKey);
    }
    let entered_value = parse_engineering_number(text)?;
    let normalized = host.normalize_recording_interval(state.index, entered_value, false);
    state.index = normalized.index;
    state.value = normalized.value;
    host.set_recording_interval(state.value);
    Ok(DcRecordingIntervalKeyOutcome::Applied)
}

/// Implements Ghidra function `FUN_01b69430` at `0x01B69430`.
///
/// Commits the DC recording-interval editor on focus exit through the same
/// Enter path. Parsing, controller normalization, state updates, display, and
/// error behavior remain identical for both Iced events.
///
/// # Errors
///
/// Returns an error when the editor contains invalid engineering-number text.
pub fn apply_dc_recording_interval_exit(
    text: &str,
    state: &mut DcRecordingIntervalState,
    host: &mut impl DcRecordingIntervalHost,
) -> Result<DcRecordingIntervalKeyOutcome, ParseEngineeringNumberError> {
    apply_dc_recording_interval_key('\r', text, state, host)
}

/// Implements Ghidra function `FUN_01b69460` at `0x01B69460`.
///
/// Restores the recording-interval editor after input validation fails. The
/// controller resolves the accepted value for the current index in direct-edit
/// mode, and the Iced editor displays that value.
pub fn restore_dc_recording_interval_after_error(
    state: &mut DcRecordingIntervalState,
    host: &mut impl DcRecordingIntervalHost,
) {
    let normalized = host.normalize_recording_interval(state.index, state.value, false);
    state.index = normalized.index;
    state.value = normalized.value;
    host.set_recording_interval(state.value);
}

/// Implements Ghidra function `FUN_01b69790` at `0x01B69790`.
///
/// Opens the shared modeless Function Generator on the DC analyzer's selected
/// sweep output. An idle generator is prepared as a DC source with zero offset
/// while its other waveform and sweep values remain owned by the host. A
/// running sweep is not changed. A hidden generator is shown 80 pixels above
/// the analyzer, and the selected output is applied again after setup.
///
/// # Errors
///
/// Returns an error when the Iced source selection has no descriptor.
pub fn open_dc_sweep_source_controller(
    request: Option<DcSweepSourceControllerRequest>,
    host: &mut impl DcSweepSourceControllerHost,
) -> Result<DcSweepSourceControllerOutcome, DcSweepSourceControllerError> {
    let request = request.ok_or(DcSweepSourceControllerError::MissingSelectedSource)?;
    if !host.ensure_function_generator() {
        return Ok(DcSweepSourceControllerOutcome::GeneratorUnavailable);
    }

    host.select_generator_output(request.output_id);
    let source_prepared = !host.generator_sweep_running();
    if source_prepared {
        host.prepare_selected_output_as_dc(request.linear_sweep);
    }

    let window_shown = !host.generator_window_visible();
    if window_shown {
        host.show_generator_window();
        host.set_generator_window_top(request.analyzer_top.saturating_sub(80));
        host.focus_generator_window();
    }

    host.select_generator_for_instrument_type(request.instrument_type);
    host.select_generator_output(request.output_id);
    Ok(DcSweepSourceControllerOutcome::Ready {
        source_prepared,
        window_shown,
    })
}

/// Implements Ghidra function `FUN_01b699a0` at `0x01B699A0`.
///
/// Stores the selected X-channel mode on the active sweep-source descriptor.
/// Constant mode disables the horizontal-position editor and spin control;
/// linear and logarithmic sweep modes enable both controls.
pub fn change_dc_x_channel_mode(
    selection: Option<DcXChannelMode>,
    source: Option<&mut DcXSource>,
    state: &mut DcXChannelModeState,
) -> DcXChannelModeChangeOutcome {
    let Some(mode) = selection else {
        return DcXChannelModeChangeOutcome::NoSelection;
    };
    let Some(source) = source else {
        return DcXChannelModeChangeOutcome::MissingSource;
    };
    source.measurement_mode = mode.index();
    state.mode = mode;
    state.horizontal_position_controls_enabled = mode != DcXChannelMode::Constant;
    DcXChannelModeChangeOutcome::Updated(mode)
}

/// Implements Ghidra function `FUN_01b64fa0` at `0x01B64FA0`.
///
/// Consumes one ready DC measurement result while acquisition is active. The
/// engine receives the configured recording mode and one-shot reset flag. The
/// function refreshes source state and publishes source and channel names and
/// values as status text. It clears busy and reset state before it either
/// stops acquisition or sends the result to enabled-channel processing.
pub fn process_measurement_result(
    state: &mut DcMeasurementUpdateState,
    host: &mut impl DcMeasurementUpdateHost,
) -> DcMeasurementUpdateOutcome {
    if state.acquisition == AcquisitionState::Inactive {
        return DcMeasurementUpdateOutcome::Inactive;
    }
    if state.engine == MeasurementEngineState::NotReady {
        return DcMeasurementUpdateOutcome::EngineNotReady;
    }

    state.update_phase = MeasurementUpdatePhase::Busy;
    let result = host.read_result(DcMeasurementRequest {
        descriptors: &state.descriptors,
        recording_mode: state.recording_mode,
        reset: state.reset_pending,
    });
    host.refresh_source_state();
    let status = format!(
        "{}: {}; {}: {}",
        result.source.name, result.source.value, result.channel.name, result.channel.value
    );
    host.show_status(&status);
    state.last_status = Some(status);
    state.update_phase = MeasurementUpdatePhase::Idle;
    state.reset_pending = false;

    if result.continue_acquisition {
        host.process_enabled_channels(&result);
        DcMeasurementUpdateOutcome::Processed
    } else {
        state.stop_button_down = true;
        state.acquisition = AcquisitionState::Inactive;
        host.stop_acquisition();
        DcMeasurementUpdateOutcome::Stopped
    }
}

/// Implements Ghidra function `FUN_01b65390` at `0x01B65390`.
///
/// Accepts Function Generator callbacks only for the expected DC engine while
/// acquisition is active. It handles immediate notifications, clears consumed
/// serialized payload state, rejects stale tokens, and reposts an accepted
/// callback until the engine is ready. A ready callback uses the shared DC
/// measurement-result processor.
pub fn receive_generator_callback(
    state: &mut DcMeasurementUpdateState,
    mut notification: GeneratorNotification,
    host: &mut impl DcAcquisitionCallbackHost,
) -> AcquisitionCallbackOutcome {
    if state.engine_kind != DcMeasurementEngineKind::ExpectedDc
        || state.engine != MeasurementEngineState::Ready
        || host.message_is_blocked(notification)
    {
        return AcquisitionCallbackOutcome::Ignored;
    }

    if notification.payload.is_some() {
        if !notification.serialized {
            host.handle_immediate_notification();
            return AcquisitionCallbackOutcome::HandledImmediately;
        }
        notification.payload = None;
        notification.serialized = false;
    }

    if notification.token != state.callback_token {
        return AcquisitionCallbackOutcome::TokenRejected;
    }
    if !state.callback_ready {
        host.repost_notification(notification);
        return AcquisitionCallbackOutcome::Reposted;
    }

    AcquisitionCallbackOutcome::Result(process_measurement_result(state, host))
}

/// Implements Ghidra function `FUN_01b65490` at `0x01B65490`.
///
/// Dispatches a DC measurement result only to the currently selected enabled
/// channel. A missing selection, an out-of-range selection, and a disabled
/// channel do not call the continuation host.
pub fn dispatch_selected_enabled_channel(
    channels: &[DcAnalyzerChannel],
    selected_channel: Option<usize>,
    result_flag: bool,
    host: &mut impl DcMeasurementChannelHost,
) -> ChannelDispatchOutcome {
    let Some(channel) = selected_channel.and_then(|index| channels.get(index)) else {
        return ChannelDispatchOutcome::NoSelection;
    };
    if !channel.enabled {
        return ChannelDispatchOutcome::Disabled;
    }
    host.continue_channel(ChannelContinuationRequest {
        channel: channel.id,
        initial: true,
        result_flag,
    });
    ChannelDispatchOutcome::Dispatched
}

/// Implements Ghidra function `FUN_01b655a0` at `0x01B655A0`.
///
/// Applies both DC sweep-axis bounds, then requests a redraw with the caller's
/// update flag. Position-forward mode starts at the parsed position and spans
/// ten divisions. Centered mode spans five divisions on each side and removes
/// the current vertical offset.
///
/// # Errors
///
/// Returns an error when position-forward mode receives invalid engineering
/// text. No graph state is changed on this path.
pub fn apply_sweep_axis_bounds(
    input: &SweepAxisInput,
    update: bool,
    host: &mut impl DcSweepAxisHost,
) -> Result<SweepAxisBounds, ParseEngineeringNumberError> {
    let bounds = match input.mode {
        SweepAxisRangeMode::PositionForward => {
            let lower = parse_engineering_number(&input.position_text)?;
            SweepAxisBounds {
                lower,
                upper: input.scale_per_division.mul_add(10.0, lower),
            }
        }
        SweepAxisRangeMode::CenteredOnOffset => SweepAxisBounds {
            lower: input
                .scale_per_division
                .mul_add(-5.0, -input.vertical_offset),
            upper: input
                .scale_per_division
                .mul_add(5.0, -input.vertical_offset),
        },
    };
    host.set_sweep_bound(0, bounds.lower);
    host.set_sweep_bound(1, bounds.upper);
    host.redraw(update);
    Ok(bounds)
}

/// Implements Ghidra function `FUN_01b68d90` at `0x01B68D90`.
///
/// Commits the DC horizontal position after an Iced spin operation ends. It
/// applies both sweep-axis bounds with the full update path, then requests the
/// recovered non-updating curve refresh. An invalid position-forward value
/// stops before either refresh.
///
/// # Errors
///
/// Returns an error when position-forward mode has invalid engineering text.
pub fn commit_horizontal_position_spin(
    input: &SweepAxisInput,
    host: &mut impl DcSweepAxisHost,
) -> Result<SweepAxisBounds, ParseEngineeringNumberError> {
    let bounds = apply_sweep_axis_bounds(input, true, host)?;
    host.redraw(false);
    Ok(bounds)
}

/// Implements Ghidra function `FUN_01b68e40` at `0x01B68E40`.
///
/// Commits the displayed X sensitivity to the selected source, then applies
/// the current sweep bounds through the same full-update and final-refresh path
/// as the horizontal-position spin End event. A missing selection has no
/// effect. Invalid position-forward text can fail after the source scale is
/// stored, matching the recovered non-transactional order.
///
/// # Errors
///
/// Returns an error when position-forward mode has invalid engineering text.
pub fn commit_x_sensitivity_spin(
    sources: &mut [DcXSource],
    selected_source: Option<usize>,
    input: &SweepAxisInput,
    host: &mut impl DcSweepAxisHost,
) -> Result<DcXSensitivityCommitOutcome, ParseEngineeringNumberError> {
    let Some(source) = selected_source.and_then(|index| sources.get_mut(index)) else {
        return Ok(DcXSensitivityCommitOutcome::NoSelection);
    };
    source.sensitivity = input.scale_per_division;
    let bounds = commit_horizontal_position_spin(input, host)?;
    Ok(DcXSensitivityCommitOutcome::Committed(bounds))
}

/// Implements Ghidra function `FUN_01b68dc0` at `0x01B68DC0`.
///
/// Moves the DC horizontal position down by one quarter of the active scale,
/// snaps and rounds it through the shared position rule, and mirrors the value
/// to the Iced editor. Plot bounds remain unchanged until the spin End event.
pub fn decrease_horizontal_position(
    state: &mut DcHorizontalPositionState,
    host: &mut impl DcHorizontalPositionEditorHost,
) -> f64 {
    adjust_horizontal_position(state, -1.0, host)
}

/// Implements Ghidra function `FUN_01b68e00` at `0x01B68E00`.
///
/// Moves the DC horizontal position up by one quarter of the active scale,
/// snaps and rounds it through the shared position rule, and mirrors the value
/// to the Iced editor. Plot bounds remain unchanged until the spin End event.
pub fn increase_horizontal_position(
    state: &mut DcHorizontalPositionState,
    host: &mut impl DcHorizontalPositionEditorHost,
) -> f64 {
    adjust_horizontal_position(state, 1.0, host)
}

fn adjust_horizontal_position(
    state: &mut DcHorizontalPositionState,
    direction: f64,
    host: &mut impl DcHorizontalPositionEditorHost,
) -> f64 {
    let step = state.scale_per_division / 4.0;
    state.position = snap_y_position(direction.mul_add(step, state.position), step);
    host.set_horizontal_position(state.position);
    state.position
}

/// Implements Ghidra function `FUN_01b68ec0` at `0x01B68EC0`.
///
/// Advances the Iced X-sensitivity control by one supported entry. Time mode
/// uses the recovered 30-entry logarithmic table. Centered volts mode uses the
/// selected source's controller table. The final entry, or a missing source in
/// volts mode, is a no-op. Plot bounds remain unchanged until the End event.
pub fn increase_x_sensitivity(
    state: &mut DcXSensitivityState,
    selected_source_sensitivity_count: Option<u8>,
    host: &mut impl DcXSensitivityHost,
) -> DcXSensitivityChangeOutcome {
    let next_index = match state.mode {
        SweepAxisRangeMode::PositionForward => {
            if state.index >= 29 {
                return DcXSensitivityChangeOutcome::AtMaximum;
            }
            state.index + 1
        }
        SweepAxisRangeMode::CenteredOnOffset => {
            let Some(count) = selected_source_sensitivity_count else {
                return DcXSensitivityChangeOutcome::NoSource;
            };
            if state.index.checked_add(1).is_none_or(|next| next >= count) {
                return DcXSensitivityChangeOutcome::AtMaximum;
            }
            state.index + 1
        }
    };
    state.index = next_index;
    state.scale_per_division = match state.mode {
        SweepAxisRangeMode::PositionForward => logarithmic_sensitivity(state.index, 30, 0.1),
        SweepAxisRangeMode::CenteredOnOffset => {
            let normalized = host.normalize_x_source_sensitivity(state.index);
            state.index = normalized.index;
            normalized.value
        }
    };
    host.set_x_sensitivity(state.scale_per_division);
    DcXSensitivityChangeOutcome::Updated
}

/// Implements Ghidra function `FUN_01b68fb0` at `0x01B68FB0`.
///
/// Moves the Iced X-sensitivity control to the preceding supported entry. Time
/// mode uses the recovered fixed logarithmic table. Centered volts mode uses
/// the selected source controller. Index zero, or a missing volts-mode source,
/// is a no-op. Plot bounds remain unchanged until the End event.
pub fn decrease_x_sensitivity(
    state: &mut DcXSensitivityState,
    selected_source_available: bool,
    host: &mut impl DcXSensitivityHost,
) -> DcXSensitivityChangeOutcome {
    if state.index == 0 {
        return DcXSensitivityChangeOutcome::AtMinimum;
    }
    if state.mode == SweepAxisRangeMode::CenteredOnOffset && !selected_source_available {
        return DcXSensitivityChangeOutcome::NoSource;
    }
    state.index -= 1;
    state.scale_per_division = match state.mode {
        SweepAxisRangeMode::PositionForward => logarithmic_sensitivity(state.index, 30, 0.1),
        SweepAxisRangeMode::CenteredOnOffset => {
            let normalized = host.normalize_x_source_sensitivity(state.index);
            state.index = normalized.index;
            normalized.value
        }
    };
    host.set_x_sensitivity(state.scale_per_division);
    DcXSensitivityChangeOutcome::Updated
}

/// Implements Ghidra function `FUN_01b684b0` at `0x01B684B0`.
///
/// Consumes Enter from the Iced horizontal-position editor. The accepted value
/// is snapped to one quarter of the current scale. Position-forward mode keeps
/// the raw editor value as its lower bound. Centered mode offsets both bounds
/// by the snapped value. Other keys and invalid text do not change state.
///
/// # Errors
///
/// Returns an error when Enter receives invalid engineering-number text.
pub fn apply_horizontal_position_key(
    key: char,
    text: &str,
    state: &mut DcHorizontalPositionState,
    host: &mut impl DcSweepAxisHost,
) -> Result<HorizontalPositionKeyOutcome, ParseEngineeringNumberError> {
    if key != '\r' {
        return Ok(HorizontalPositionKeyOutcome::IgnoredKey);
    }
    let entered_position = parse_engineering_number(text)?;
    state.position = snap_y_position(entered_position, state.scale_per_division / 4.0);
    let bounds = match state.mode {
        SweepAxisRangeMode::PositionForward => SweepAxisBounds {
            lower: entered_position,
            upper: state.scale_per_division.mul_add(10.0, entered_position),
        },
        SweepAxisRangeMode::CenteredOnOffset => SweepAxisBounds {
            lower: state.scale_per_division.mul_add(-5.0, -state.position),
            upper: state.scale_per_division.mul_add(5.0, -state.position),
        },
    };
    host.set_sweep_bound(0, bounds.lower);
    host.set_sweep_bound(1, bounds.upper);
    host.redraw(true);
    Ok(HorizontalPositionKeyOutcome::Applied(bounds))
}

/// Implements Ghidra function `FUN_01b68510` at `0x01B68510`.
///
/// Commits the horizontal-position editor on focus exit through the same Enter
/// path. This keeps parsing, snapping, bounds, redraw, and error behavior
/// identical for both Iced events.
///
/// # Errors
///
/// Returns an error when the editor contains invalid engineering-number text.
pub fn apply_horizontal_position_exit(
    text: &str,
    state: &mut DcHorizontalPositionState,
    host: &mut impl DcSweepAxisHost,
) -> Result<HorizontalPositionKeyOutcome, ParseEngineeringNumberError> {
    apply_horizontal_position_key('\r', text, state, host)
}

/// Implements Ghidra function `FUN_01b68540` at `0x01B68540`.
///
/// Restores the Iced horizontal-position editor from the last accepted model
/// value after numeric validation fails. Plot state remains unchanged.
pub fn restore_horizontal_position_after_error(
    state: &DcHorizontalPositionState,
    host: &mut impl DcHorizontalPositionEditorHost,
) {
    host.set_horizontal_position(state.position);
}

/// Implements Ghidra function `FUN_01b65780` at `0x01B65780`.
///
/// The DC Parameter Analyzer data-load virtual slot is intentionally disabled.
pub const fn load_data_provider() {}

/// Implements Ghidra function `FUN_01b65ca0` at `0x01B65CA0`.
///
/// Runs the shared form-show preparation before it restores the saved DC
/// Parameter Analyzer configuration. The host keeps native window handling and
/// configuration storage outside the Iced update logic.
pub fn show_dc_parameter_analyzer(host: &mut impl DcAnalyzerShowHost) {
    host.prepare_form_show();
    host.restore_saved_configuration();
}

/// Implements Ghidra function `FUN_01b67a10` at `0x01B67A10`.
///
/// Initializes the DC analyzer model and its Iced-facing selection state. It
/// selects the recovered bitmap role, prepares shared form state, creates one
/// of the two supported measurement controllers, supplies fallback selector
/// entries, initializes sweep controls, selects Stop, and prepares the plot.
/// An unsupported model stops after shared initialization. Alternate models
/// restore generator timing only when it was active before controller setup.
pub fn create_dc_parameter_analyzer(
    config: DcAnalyzerCreationConfig,
    host: &mut impl DcAnalyzerCreationHost,
) -> DcAnalyzerCreationOutcome {
    host.select_bitmap_resource("bmOsc");
    host.initialize_shared_form();
    let mut state = DcAnalyzerCreationState {
        setup_phase: DcAnalyzerSetupPhase::CommonInitialized,
        timer_interval_ms: 24,
        analysis_mode_code: 0x10,
        message_mode_code: 0x0f,
        ..DcAnalyzerCreationState::default()
    };
    if matches!(config.model_kind, DcAnalyzerModelKind::Unsupported(_)) {
        return DcAnalyzerCreationOutcome::UnsupportedModel(state);
    }

    host.initialize_measurement_controller(config.model_kind);
    state.setup_phase = DcAnalyzerSetupPhase::ControllerInitialized;
    state.y_channel_count = config.y_channel_count.max(1);
    state.x_source_count = config.x_source_count.max(1);
    state.measurement_count = config.measurement_count.max(1);
    state.selected_y_channel = Some(0);
    state.selected_x_source = Some(0);
    state.selected_measurement = Some(0);
    state.acquisition = AcquisitionState::Inactive;
    state.stop_button_down = true;

    host.refresh_sweep_unit_caption();
    host.select_start_sweep_endpoint();
    host.prepare_initial_plot();
    if config.model_kind == DcAnalyzerModelKind::Alternate && config.alternate_generator_was_running
    {
        host.restore_alternate_generator_timing();
        state.alternate_generator_restored = true;
    }
    DcAnalyzerCreationOutcome::Initialized(state)
}

/// Implements Ghidra function `FUN_01b65cc0` at `0x01B65CC0`.
///
/// Saves the DC analyzer configuration before closing. When an associated
/// generator window exists, the function round-trips its sweep state and asks
/// it to close. Shared form-close handling always runs last.
pub fn close_dc_parameter_analyzer(host: &mut impl DcAnalyzerCloseHost) {
    host.save_configuration();
    if let Some(sweep_state) = host.capture_generator_sweep_state() {
        host.restore_generator_sweep_state(&sweep_state);
        host.close_generator_window();
    }
    host.complete_form_close();
}

/// Implements Ghidra function `FUN_01b678a0` at `0x01B678A0`.
///
/// Releases the DC display helper first and its shared resource second. Rust
/// ownership supplies the recovered nil-safe destruction and reference-count
/// release behavior. Shared form destruction always runs last.
pub fn destroy_dc_parameter_analyzer<DisplayHelper, SharedResource>(
    display_helper: &mut Option<DisplayHelper>,
    shared_resource: &mut Option<SharedResource>,
    host: &mut impl DcAnalyzerDestroyHost,
) {
    drop(display_helper.take());
    drop(shared_resource.take());
    host.complete_form_destroy();
}

/// Implements Ghidra function `FUN_01b65790` at `0x01B65790`.
///
/// Transfers one completed DC curve only while acquisition is inactive. The
/// graph receives mode `0x0B` for position-forward range mode or `0x0F` for
/// centered range mode before Rust moves the curve out of form ownership.
/// Active acquisition and a missing curve are no-ops.
pub fn take_completed_curve_for_export(
    state: &mut DcCurveExportState,
    host: &mut impl DcCurveExportHost,
) -> Option<DcCurveHandle> {
    if state.acquisition == AcquisitionState::Active {
        return None;
    }
    let curve = state.completed_curve?;
    let mode = match state.sweep_mode {
        SweepAxisRangeMode::PositionForward => 0x0b,
        SweepAxisRangeMode::CenteredOnOffset => 0x0f,
    };
    host.register_curve(mode, curve);
    state.completed_curve.take()
}

/// Implements Ghidra function `FUN_01b68d70` at `0x01B68D70`.
///
/// Publishes the buffered completed DC measurement as the current in-memory
/// analysis curve. The shared transfer keeps its structured samples and axis
/// metadata, consumes the form-owned curve, clears the prior nested selection,
/// and creates two memory-backed support writers. Active acquisition and a
/// missing completed curve have no effect. This command performs no file I/O.
pub fn save_dc_measurement_data(
    state: &mut DcCurveExportState,
    host: &mut impl DcDataSaveHost,
) -> DcDataSaveOutcome {
    let Some(curve) = take_completed_curve_for_export(state, host) else {
        return DcDataSaveOutcome::NoCompletedCurve;
    };
    host.install_current_analysis_curve(curve);
    host.clear_previous_nested_curve();
    host.create_memory_support_writer(DcSupportWriterSlot::Primary);
    host.create_memory_support_writer(DcSupportWriterSlot::Secondary);
    DcDataSaveOutcome::Published(curve)
}

/// Implements Ghidra function `FUN_01b65820` at `0x01B65820`.
///
/// Applies an Iced Y-channel combo selection to the analyzer controller and
/// form state. The selected channel supplies its controller mode,
/// unit-per-division value, and vertical position. Selection also marks the
/// channel and On button active before the shared toggle synchronization runs.
/// A missing or out-of-range selection is a no-op.
pub fn select_y_channel(
    channels: &mut [DcAnalyzerChannel],
    state: &mut DcChannelSelectionState,
    selected_channel: Option<usize>,
    host: &mut impl DcChannelSelectionHost,
) -> bool {
    let Some(index) = selected_channel.filter(|index| *index < channels.len()) else {
        return false;
    };
    host.select_controller_channel(index);
    let channel = &mut channels[index];
    state.selected_channel = Some(index);
    host.set_controller_sensitivity(channel.sensitivity_index);
    state.displayed_unit_per_division = channel.unit_per_division;
    state.displayed_position = channel.position;
    channel.enabled = true;
    state.on_button_down = true;
    host.synchronize_channel_toggle(index, true);
    true
}

/// Implements Ghidra function `FUN_01b65a50` at `0x01B65A50`.
///
/// Moves the selected DC Y channel to the preceding sensitivity index. Source
/// types `0x64` through `0x66` use the shared logarithmic scale. Other source
/// types delegate index and value normalization to the analyzer controller.
/// Index zero and missing selection are no-ops.
pub fn decrease_y_sensitivity(
    channels: &mut [DcAnalyzerChannel],
    selection: &mut DcChannelSelectionState,
    host: &mut impl DcSensitivityHost,
) -> SensitivityChangeOutcome {
    let Some(channel_index) = selection
        .selected_channel
        .filter(|index| *index < channels.len())
    else {
        return SensitivityChangeOutcome::NoSelection;
    };
    let channel = &mut channels[channel_index];
    let Some(next_index) = channel.sensitivity_index.checked_sub(1) else {
        return SensitivityChangeOutcome::AtMinimum;
    };
    channel.sensitivity_index = next_index;
    host.select_controller_channel(channel_index);

    if (0x64..=0x66).contains(&channel.source_type_code) {
        channel.unit_per_division =
            logarithmic_sensitivity(channel.sensitivity_index, channel.sensitivity_count, 0.1);
    } else {
        let normalized =
            host.normalize_controller_sensitivity(channel_index, channel.sensitivity_index);
        channel.sensitivity_index = normalized.index;
        channel.unit_per_division = normalized.value;
    }
    selection.displayed_unit_per_division = channel.unit_per_division;
    SensitivityChangeOutcome::Updated
}

/// Implements Ghidra function `FUN_01b65b70` at `0x01B65B70`.
///
/// Moves the selected DC Y channel to the next sensitivity index when one is
/// available. Source types `0x64` through `0x66` use the shared logarithmic
/// scale. Other source types delegate index and value normalization to the
/// analyzer controller. A channel at its final index is unchanged.
pub fn increase_y_sensitivity(
    channels: &mut [DcAnalyzerChannel],
    selection: &mut DcChannelSelectionState,
    host: &mut impl DcSensitivityHost,
) -> SensitivityChangeOutcome {
    let Some(channel_index) = selection
        .selected_channel
        .filter(|index| *index < channels.len())
    else {
        return SensitivityChangeOutcome::NoSelection;
    };
    let channel = &mut channels[channel_index];
    let maximum_index = channel.sensitivity_count.saturating_sub(1);
    if channel.sensitivity_index >= maximum_index {
        return SensitivityChangeOutcome::AtMaximum;
    }
    channel.sensitivity_index += 1;
    host.select_controller_channel(channel_index);

    if (0x64..=0x66).contains(&channel.source_type_code) {
        channel.unit_per_division =
            logarithmic_sensitivity(channel.sensitivity_index, channel.sensitivity_count, 0.1);
    } else {
        let normalized =
            host.normalize_controller_sensitivity(channel_index, channel.sensitivity_index);
        channel.sensitivity_index = normalized.index;
        channel.unit_per_division = normalized.value;
    }
    selection.displayed_unit_per_division = channel.unit_per_division;
    SensitivityChangeOutcome::Updated
}

/// Implements Ghidra function `FUN_01b689b0` at `0x01B689B0`.
///
/// Auto-ranges existing DC measurement curves without acquiring, adding, or
/// removing data. Curves without both data and provider references are skipped.
/// Eligible curves receive a supported vertical scale and zero position. In
/// volts-per-division mode, their combined horizontal extent also sets a
/// supported centered X range. The plot range and existing curves are always
/// refreshed, including for an empty list.
pub fn auto_range_measurement_curves(
    curves: &mut [DcAutoRangeCurve],
    state: &mut DcAutoRangeState,
    host: &mut impl DcAutoRangeHost,
) -> DcAutoRangeOutcome {
    let mut largest_horizontal_magnitude: f64 = 0.0;
    let mut ranged_curve_count = 0;

    for (curve_index, curve) in curves.iter_mut().enumerate() {
        if !curve.has_data || !curve.has_provider {
            continue;
        }

        let range = host.read_curve_range(curve_index, state.volts_per_division_mode);
        largest_horizontal_magnitude = largest_horizontal_magnitude.max(
            range
                .horizontal_minimum
                .abs()
                .max(range.horizontal_maximum.abs()),
        );
        let vertical_candidate = range
            .vertical_minimum
            .abs()
            .max(range.vertical_maximum.abs())
            / 5.0;
        let normalized = host
            .normalize_auto_sensitivity(DcAutoRangeAxis::Vertical(curve_index), vertical_candidate);
        curve.sensitivity_index = normalized.index;
        curve.sensitivity = normalized.value;
        curve.vertical_position = 0.0;
        if state.selected_curve == Some(curve_index) {
            host.set_selected_y_controls(curve.sensitivity, curve.vertical_position);
        }
        ranged_curve_count += 1;
    }

    if state.volts_per_division_mode {
        let normalized = host.normalize_auto_sensitivity(
            DcAutoRangeAxis::Horizontal,
            largest_horizontal_magnitude / 5.0,
        );
        state.horizontal_sensitivity_index = normalized.index;
        state.horizontal_sensitivity = normalized.value;
        state.horizontal_position = 0.0;
        host.set_horizontal_controls(state.horizontal_sensitivity, state.horizontal_position);
    }

    host.apply_plot_range(false);
    host.restore_display_selector();
    host.refresh_curves(true, true);
    DcAutoRangeOutcome {
        ranged_curve_count,
        horizontal_range_updated: state.volts_per_division_mode,
    }
}

/// Implements Ghidra function `FUN_01b676b0` at `0x01B676B0`.
///
/// Moves the selected DC Y channel up by one quarter of its Unit/Div value,
/// snaps the result to that step, rounds it to two significant digits, and
/// mirrors the accepted value to the position editor.
pub fn increase_y_position(
    channels: &mut [DcAnalyzerChannel],
    selection: &mut DcChannelSelectionState,
) -> VerticalPositionChangeOutcome {
    let Some(channel_index) = selection
        .selected_channel
        .filter(|index| *index < channels.len())
    else {
        return VerticalPositionChangeOutcome::NoSelection;
    };
    let channel = &mut channels[channel_index];
    let step = channel.unit_per_division / 4.0;
    channel.position = snap_y_position(channel.position + step, step);
    selection.displayed_position = channel.position;
    VerticalPositionChangeOutcome::Updated
}

/// Implements Ghidra function `FUN_01b67710` at `0x01B67710`.
///
/// Moves the selected DC Y channel down by one quarter of its Unit/Div value,
/// snaps the result to that step, rounds it to two significant digits, and
/// mirrors the accepted value to the position editor.
pub fn decrease_y_position(
    channels: &mut [DcAnalyzerChannel],
    selection: &mut DcChannelSelectionState,
) -> VerticalPositionChangeOutcome {
    let Some(channel_index) = selection
        .selected_channel
        .filter(|index| *index < channels.len())
    else {
        return VerticalPositionChangeOutcome::NoSelection;
    };
    let channel = &mut channels[channel_index];
    let step = channel.unit_per_division / 4.0;
    channel.position = snap_y_position(channel.position - step, step);
    selection.displayed_position = channel.position;
    VerticalPositionChangeOutcome::Updated
}

/// Implements Ghidra function `FUN_01b67900` at `0x01B67900`.
///
/// Commits the selected DC channel's edited vertical position when the Iced
/// spin interaction ends. A channel without subtraces applies its primary
/// source when present. A channel with subtraces applies every displayed
/// subtrace. The plot receives one non-destructive redraw after the updates.
pub fn commit_y_position(
    channels: &[DcAnalyzerChannel],
    selected_channel: Option<usize>,
    host: &mut impl DcVerticalPositionCommitHost,
) -> VerticalPositionCommitOutcome {
    let Some(channel) = selected_channel.and_then(|index| channels.get(index)) else {
        return VerticalPositionCommitOutcome::NoSelection;
    };
    let flags = TraceAttachFlags {
        first: true,
        second: true,
    };
    let mut source_count = 0;
    if channel.subtraces.is_empty() {
        if let Some(source) = channel.primary_source.as_ref() {
            host.apply_vertical_position(ApplyVerticalPositionRequest {
                channel: channel.id,
                source: source.id,
                position: channel.position,
                flags,
            });
            source_count = 1;
        }
    } else {
        for source in &channel.subtraces {
            host.apply_vertical_position(ApplyVerticalPositionRequest {
                channel: channel.id,
                source: *source,
                position: channel.position,
                flags,
            });
            source_count += 1;
        }
    }
    host.redraw(false);
    VerticalPositionCommitOutcome::Committed { source_count }
}

/// Implements Ghidra function `FUN_01b68560` at `0x01B68560`.
///
/// Commits the selected DC channel's sensitivity when the Iced spin interaction
/// ends. The centered bounds span five divisions on each side of zero and are
/// applied to the primary source or every displayed subtrace. The shared axis
/// transform is reset before one non-destructive redraw.
pub fn commit_y_sensitivity(
    channels: &[DcAnalyzerChannel],
    selected_channel: Option<usize>,
    host: &mut impl DcSensitivityCommitHost,
) -> SensitivityCommitOutcome {
    let Some(channel) = selected_channel.and_then(|index| channels.get(index)) else {
        return SensitivityCommitOutcome::NoSelection;
    };
    let half_span = channel.unit_per_division * 5.0;
    let flags = TraceAttachFlags {
        first: true,
        second: true,
    };
    let mut source_count = 0;
    if channel.subtraces.is_empty() {
        if let Some(source) = channel.primary_source.as_ref() {
            host.apply_sensitivity_bounds(ApplySensitivityBoundsRequest {
                channel: channel.id,
                source: source.id,
                lower: -half_span,
                upper: half_span,
                flags,
            });
            source_count = 1;
        }
    } else {
        for source in &channel.subtraces {
            host.apply_sensitivity_bounds(ApplySensitivityBoundsRequest {
                channel: channel.id,
                source: *source,
                lower: -half_span,
                upper: half_span,
                flags,
            });
            source_count += 1;
        }
    }
    host.reset_axis_transform();
    host.redraw(false);
    SensitivityCommitOutcome::Committed { source_count }
}

/// Implements Ghidra function `FUN_01b68720` at `0x01B68720`.
///
/// Starts leftward cursor movement for the primary mouse button. The repeat
/// state uses a one-unit step and a 300 ms initial delay. The host schedules
/// the repeat message before it performs the immediate first move. Other mouse
/// buttons have no effect.
pub fn start_cursor_left_move(
    primary_button: bool,
    state: &mut DcCursorRepeatState,
    host: &mut impl DcCursorMoveHost,
) -> DcCursorMoveStartOutcome {
    start_cursor_move(DcCursorMoveDirection::Left, primary_button, state, host)
}

/// Implements Ghidra function `FUN_01b68750` at `0x01B68750`.
///
/// Starts rightward cursor movement for the primary mouse button. It shares the
/// one-unit move and 300 ms repeat contract with the left control. Other mouse
/// buttons have no effect.
pub fn start_cursor_right_move(
    primary_button: bool,
    state: &mut DcCursorRepeatState,
    host: &mut impl DcCursorMoveHost,
) -> DcCursorMoveStartOutcome {
    start_cursor_move(DcCursorMoveDirection::Right, primary_button, state, host)
}

fn start_cursor_move(
    direction: DcCursorMoveDirection,
    primary_button: bool,
    state: &mut DcCursorRepeatState,
    host: &mut impl DcCursorMoveHost,
) -> DcCursorMoveStartOutcome {
    if !primary_button {
        return DcCursorMoveStartOutcome::IgnoredButton;
    }
    state.direction = Some(direction);
    state.step = 1;
    state.delay = Duration::from_millis(300);
    host.schedule_cursor_repeat(DC_CURSOR_REPEAT_MESSAGE, state.delay);
    host.move_cursor_once(direction, state.step);
    DcCursorMoveStartOutcome::Started
}

/// Implements Ghidra function `FUN_01b687b0` at `0x01B687B0`.
///
/// Ends leftward cursor movement for the primary mouse button through the
/// shared repeat-cancellation and release path. Other buttons have no effect.
pub fn end_cursor_left_move(
    primary_button: bool,
    state: &mut DcCursorRepeatState,
    host: &mut impl DcCursorReleaseHost,
) -> DcCursorMoveEndOutcome {
    end_cursor_move(DcCursorMoveDirection::Left, primary_button, state, host)
}

/// Implements Ghidra function `FUN_01b68780` at `0x01B68780`.
///
/// Ends rightward cursor movement for the primary mouse button. It clears local
/// repeat state, cancels both recovered repeat messages, and forwards the
/// release to the shared cursor interaction host. Other buttons have no effect.
pub fn end_cursor_right_move(
    primary_button: bool,
    state: &mut DcCursorRepeatState,
    host: &mut impl DcCursorReleaseHost,
) -> DcCursorMoveEndOutcome {
    end_cursor_move(DcCursorMoveDirection::Right, primary_button, state, host)
}

fn end_cursor_move(
    direction: DcCursorMoveDirection,
    primary_button: bool,
    state: &mut DcCursorRepeatState,
    host: &mut impl DcCursorReleaseHost,
) -> DcCursorMoveEndOutcome {
    if !primary_button {
        return DcCursorMoveEndOutcome::IgnoredButton;
    }
    *state = DcCursorRepeatState::default();
    host.cancel_cursor_message(DC_CURSOR_REPEAT_MESSAGE);
    host.cancel_cursor_message(DC_CURSOR_REPEAT_CONTINUATION_MESSAGE);
    host.finish_cursor_move(direction);
    DcCursorMoveEndOutcome::Ended
}

/// Implements Ghidra function `FUN_01b687e0` at `0x01B687E0`.
///
/// Selects the Previous curve for the active plot cursor. Local mode advances
/// the ordered collection index and wraps the last item to zero. Invalid plot
/// state, missing cursors, empty collections, and stale indexes skip replacement
/// but still refresh local readouts. Remote mode sends command `0x053B` with
/// direction `1` and timeout `100` without changing local state.
pub fn select_previous_cursor_curve(
    state: &mut DcCursorCurveState,
    host: &mut impl DcCursorCurveHost,
) -> DcCursorCurveOutcome {
    select_cursor_curve(state, 1, host)
}

/// Implements Ghidra function `FUN_01b687f0` at `0x01B687F0`.
///
/// Selects the Next curve for the active plot cursor. Local mode decrements the
/// ordered collection index and wraps index zero to the last item. All local
/// no-selection paths still refresh readouts. Remote mode sends command
/// `0x053B` with direction `0` and timeout `100` without local updates.
pub fn select_next_cursor_curve(
    state: &mut DcCursorCurveState,
    host: &mut impl DcCursorCurveHost,
) -> DcCursorCurveOutcome {
    select_cursor_curve(state, 0, host)
}

fn select_cursor_curve(
    state: &mut DcCursorCurveState,
    direction: u8,
    host: &mut impl DcCursorCurveHost,
) -> DcCursorCurveOutcome {
    if state.route == DcControlRoute::Remote {
        host.send_remote_cursor_curve_command(DC_CURSOR_CURVE_MESSAGE, direction, 100);
        return DcCursorCurveOutcome::RemoteQueued;
    }

    let Some(cursor) = state.selected_cursor else {
        host.refresh_cursor_readouts();
        state.readout_revision = state.readout_revision.saturating_add(1);
        return DcCursorCurveOutcome::RefreshedWithoutSelection;
    };
    let current = match cursor {
        DcCursorSelection::A => state.cursor_a_curve,
        DcCursorSelection::B => state.cursor_b_curve,
    };
    let allowed_plot_state = matches!(state.plot_state_code, 0 | 5 | 6);
    let selected = current
        .filter(|index| allowed_plot_state && *index < state.curve_count)
        .map(|index| {
            if direction == 1 {
                (index + 1) % state.curve_count
            } else {
                (index + state.curve_count - 1) % state.curve_count
            }
        });
    if let Some(curve_index) = selected {
        match cursor {
            DcCursorSelection::A => state.cursor_a_curve = Some(curve_index),
            DcCursorSelection::B => state.cursor_b_curve = Some(curve_index),
        }
        host.replace_cursor_curve(cursor, curve_index);
    }
    host.refresh_cursor_readouts();
    state.readout_revision = state.readout_revision.saturating_add(1);
    selected.map_or(
        DcCursorCurveOutcome::RefreshedWithoutSelection,
        |curve_index| DcCursorCurveOutcome::Selected {
            cursor,
            curve_index,
        },
    )
}

/// Implements Ghidra function `FUN_01b68800` at `0x01B68800`.
///
/// Applies the Iced On button's toggled state to the selected A or B cursor.
/// Local transitions create or remove only that cursor and always refresh the
/// readouts. A missing selection and an already matching state also refresh.
/// Remote mode sends command `0x053A` with timeout `100` and makes no local
/// change.
pub fn set_selected_cursor_enabled(
    state: &mut DcCursorCurveState,
    enabled: bool,
    host: &mut impl DcCursorToggleHost,
) -> DcCursorToggleOutcome {
    if state.route == DcControlRoute::Remote {
        host.send_remote_cursor_toggle(DC_CURSOR_TOGGLE_MESSAGE, enabled, 100);
        return DcCursorToggleOutcome::RemoteQueued;
    }
    let Some(cursor) = state.selected_cursor else {
        host.refresh_cursor_readouts();
        state.readout_revision = state.readout_revision.saturating_add(1);
        return DcCursorToggleOutcome::RefreshedWithoutSelection;
    };
    let active = match cursor {
        DcCursorSelection::A => &mut state.cursor_a_active,
        DcCursorSelection::B => &mut state.cursor_b_active,
    };
    let outcome = if *active == enabled {
        DcCursorToggleOutcome::Unchanged
    } else {
        *active = enabled;
        if enabled {
            host.create_cursor(cursor);
            DcCursorToggleOutcome::Enabled(cursor)
        } else {
            host.remove_cursor(cursor);
            DcCursorToggleOutcome::Disabled(cursor)
        }
    };
    host.refresh_cursor_readouts();
    state.readout_revision = state.readout_revision.saturating_add(1);
    outcome
}

/// Implements Ghidra function `FUN_01b68810` at `0x01B68810`.
///
/// Selects cursor A after the Iced selector enters its down state and mirrors
/// cursor A's current active flag to the separate On button. An event received
/// while the A selector is not down has no effect. This path does not create,
/// remove, move, or refresh a cursor.
pub fn select_cursor_a(
    state: &mut DcCursorCurveState,
    button_down: bool,
    host: &mut impl DcCursorSelectionHost,
) -> DcCursorSelectionOutcome {
    select_cursor(state, DcCursorSelection::A, button_down, host)
}

/// Implements Ghidra function `FUN_01b68820` at `0x01B68820`.
///
/// Selects cursor B after the Iced selector enters its down state and mirrors
/// cursor B's current active flag to the separate On button. An event received
/// while the B selector is not down has no effect. This path does not create,
/// remove, move, or refresh a cursor.
pub fn select_cursor_b(
    state: &mut DcCursorCurveState,
    button_down: bool,
    host: &mut impl DcCursorSelectionHost,
) -> DcCursorSelectionOutcome {
    select_cursor(state, DcCursorSelection::B, button_down, host)
}

fn select_cursor(
    state: &mut DcCursorCurveState,
    cursor: DcCursorSelection,
    button_down: bool,
    host: &mut impl DcCursorSelectionHost,
) -> DcCursorSelectionOutcome {
    if !button_down {
        return DcCursorSelectionOutcome::NotSelected;
    }
    state.selected_cursor = Some(cursor);
    let active = match cursor {
        DcCursorSelection::A => state.cursor_a_active,
        DcCursorSelection::B => state.cursor_b_active,
    };
    host.set_cursor_on_down(active);
    DcCursorSelectionOutcome::Synchronized
}

/// Implements Ghidra function `FUN_01b68830` at `0x01B68830`.
///
/// Applies a valid Iced X-source selection to the live analyzer state. A new
/// source stops the current acquisition, selects the matching controller item,
/// activates the source, and synchronizes its mode, controls, values, and unit
/// caption. A repeated selection keeps that state. Both paths reload the
/// currently selected Start or Stop sweep endpoint.
pub fn select_x_source(
    sources: &mut [DcXSource],
    selected_index: Option<usize>,
    endpoint: DcSweepEndpoint,
    state: &mut DcXSourceSelectionState,
    host: &mut impl DcXSourceSelectionHost,
) -> DcXSourceSelectionOutcome {
    let Some((source_index, source)) =
        selected_index.and_then(|index| sources.get_mut(index).map(|source| (index, source)))
    else {
        return DcXSourceSelectionOutcome::NoSelection;
    };

    let source_id = source.id;
    let outcome = if state.selected_source == Some(source_id) {
        DcXSourceSelectionOutcome::RefreshedCurrent(source_id)
    } else {
        state.stop_button_down = true;
        host.stop_acquisition();
        state.selected_source = Some(source_id);
        host.select_controller_source(source_index);
        source.active = true;

        state.displayed_measurement_mode = Some(source.measurement_mode);
        host.set_measurement_mode(source.measurement_mode);
        state.source_controls_enabled = source.measurement_mode != 0;
        host.set_source_controls_enabled(state.source_controls_enabled);

        state.displayed_sensitivity = source.sensitivity;
        host.set_x_sensitivity(source.sensitivity);
        state.displayed_horizontal_position = source.horizontal_position;
        host.set_horizontal_position(source.horizontal_position);

        state.sweep_measurement_unit = measurement_unit(source.unit_kind);
        host.set_sweep_measurement_unit(state.sweep_measurement_unit);
        DcXSourceSelectionOutcome::Selected(source_id)
    };

    host.refresh_sweep_endpoint(endpoint, source_index);
    outcome
}

const fn measurement_unit(unit_kind: u8) -> &'static str {
    if unit_kind == 3 { "A" } else { "V" }
}

fn logarithmic_sensitivity(index: u8, count: u8, base: f64) -> f64 {
    let center = (f64::from(count) / 2.0).round();
    let exponent = (f64::from(index) - center) / 3.0;
    10.0_f64.powf(exponent) * base
}

fn snap_y_position(value: f64, step: f64) -> f64 {
    let snapped = if step == 0.0 {
        0.0
    } else {
        (value / step).round() * step
    };
    round_significant(snapped, 2)
}

fn round_significant(value: f64, digits: i32) -> f64 {
    if value == 0.0 || !value.is_finite() {
        return value;
    }
    let magnitude = value.abs().log10().floor();
    let scale = 10.0_f64.powf(magnitude - f64::from(digits) + 1.0);
    (value / scale).round() * scale
}

fn round_layout_ratio(value: u32, numerator: u32, denominator: u32) -> u32 {
    let scaled = u64::from(value)
        .saturating_mul(u64::from(numerator))
        .saturating_add(u64::from(denominator) / 2)
        / u64::from(denominator);
    u32::try_from(scaled).unwrap_or(u32::MAX)
}

/// Implements Ghidra function `FUN_01b66800` at `0x01B66800`.
///
/// Loads the start endpoint for the selected X-source unit. Configured unit
/// labels are compared after recovered suffix removal. The primary range has
/// priority. When neither range contains the selected unit, the editor is
/// disabled and its current value and text remain unchanged.
pub fn select_sweep_start_amplitude(
    ranges: &SourceRanges,
    selected_unit: &str,
    host: &mut impl SweepAmplitudeEditorHost,
) -> SweepEndpointSelectionOutcome {
    host.set_sweep_amplitude_enabled(true);
    if let Some(primary) = ranges
        .primary
        .as_ref()
        .filter(|range| normalize_range_unit(&range.unit).contains(selected_unit))
    {
        host.set_sweep_amplitude(primary.start);
        return SweepEndpointSelectionOutcome::Primary(primary.start);
    }
    if let Some(secondary) = ranges
        .secondary
        .as_ref()
        .filter(|range| normalize_range_unit(&range.unit).contains(selected_unit))
    {
        host.set_sweep_amplitude(secondary.start);
        return SweepEndpointSelectionOutcome::Secondary(secondary.start);
    }
    host.set_sweep_amplitude_enabled(false);
    SweepEndpointSelectionOutcome::UnsupportedUnit
}

/// Implements Ghidra function `FUN_01b669b0` at `0x01B669B0`.
///
/// Loads the stop endpoint for the selected X-source unit. Configured unit
/// labels are compared after recovered suffix removal. The primary range has
/// priority. When neither range contains the selected unit, the editor is
/// disabled and its current value and text remain unchanged.
pub fn select_sweep_stop_amplitude(
    ranges: &SourceRanges,
    selected_unit: &str,
    host: &mut impl SweepAmplitudeEditorHost,
) -> SweepEndpointSelectionOutcome {
    host.set_sweep_amplitude_enabled(true);
    if let Some(primary) = ranges
        .primary
        .as_ref()
        .filter(|range| normalize_range_unit(&range.unit).contains(selected_unit))
    {
        host.set_sweep_amplitude(primary.stop);
        return SweepEndpointSelectionOutcome::Primary(primary.stop);
    }
    if let Some(secondary) = ranges
        .secondary
        .as_ref()
        .filter(|range| normalize_range_unit(&range.unit).contains(selected_unit))
    {
        host.set_sweep_amplitude(secondary.stop);
        return SweepEndpointSelectionOutcome::Secondary(secondary.stop);
    }
    host.set_sweep_amplitude_enabled(false);
    SweepEndpointSelectionOutcome::UnsupportedUnit
}

fn normalize_range_unit(unit: &str) -> &str {
    unit.split('»')
        .next()
        .unwrap_or(unit)
        .split(':')
        .next()
        .unwrap_or(unit)
        .trim_end()
}

/// Implements Ghidra function `FUN_01b66b60` at `0x01B66B60`.
///
/// Refreshes the sweep-amplitude unit caption after an edit change. Recovered
/// source type `3` uses amperes. Every other source type uses volts.
pub fn refresh_sweep_amplitude_unit(
    source_type: u8,
    host: &mut impl SweepAmplitudeUnitHost,
) -> &'static str {
    let unit = measurement_unit(source_type);
    host.set_sweep_amplitude_unit(unit);
    unit
}

/// Implements Ghidra function `FUN_01b673e0` at `0x01B673E0`.
///
/// Refreshes the sweep-measurement speed-button caption from the selected
/// measurement object. Recovered unit kind `3` uses amperes. Every other kind
/// uses volts. The shared caption adapter suppresses no state beyond the text
/// assignment owned by the Iced view.
pub fn refresh_sweep_measurement_unit_caption(
    unit_kind: u8,
    host: &mut impl SweepAmplitudeUnitHost,
) -> &'static str {
    refresh_sweep_amplitude_unit(unit_kind, host)
}

/// Implements Ghidra function `FUN_01b65960` at `0x01B65960`.
///
/// Applies the Iced Y-channel On-button state to the selected analyzer channel.
/// Every valid selection first synchronizes the controller. An unchanged model
/// state then stops. A changed On state attaches the channel, while a changed
/// Off state detaches it and redraws with the detach result.
pub fn set_selected_channel_enabled(
    channels: &mut [DcAnalyzerChannel],
    selected_channel: Option<usize>,
    enabled: bool,
    host: &mut impl DcChannelToggleHost,
) -> ChannelToggleOutcome {
    let Some(index) = selected_channel.filter(|index| *index < channels.len()) else {
        return ChannelToggleOutcome::NoSelection;
    };
    host.synchronize_controller(index, enabled);
    let channel = &mut channels[index];
    if channel.enabled == enabled {
        return ChannelToggleOutcome::Synchronized;
    }
    channel.enabled = enabled;
    if enabled {
        host.attach_channel(channel);
        ChannelToggleOutcome::Attached
    } else {
        let graph_changed = host.detach_channel(channel);
        host.redraw_after_detach(graph_changed);
        ChannelToggleOutcome::Detached { graph_changed }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::cell::RefCell;
    use std::rc::Rc;

    use crate::xy_recorder::model::{PointerButton, PointerModifiers, PressedPointerButtons};

    fn assert_close(actual: f64, expected: f64) {
        assert!((actual - expected).abs() < 1e-12);
    }

    #[derive(Default)]
    struct PlotHost {
        requests: Vec<AttachYTraceRequest>,
    }

    #[derive(Default)]
    struct ScreenInteractionHost {
        down_events: Vec<ScreenMouseDownInput>,
        move_events: Vec<ScreenMouseMoveInput>,
        releases: usize,
    }

    struct RecordingModeChangeHost {
        events: Vec<String>,
        auxiliary_was_visible: bool,
        auxiliary_available: bool,
    }

    #[derive(Default)]
    struct RecordingIntervalHost {
        requests: Vec<(u8, f64, bool)>,
        displayed: Vec<f64>,
        normalized: Option<NormalizedRecordingInterval>,
    }

    struct SweepSourceControllerHost {
        events: Vec<String>,
        available: bool,
        sweep_running: bool,
        visible: bool,
    }

    impl DcSweepSourceControllerHost for SweepSourceControllerHost {
        fn ensure_function_generator(&mut self) -> bool {
            self.events.push("ensure".to_owned());
            self.available
        }

        fn select_generator_output(&mut self, output_id: u16) {
            self.events.push(format!("output:{output_id}"));
        }

        fn generator_sweep_running(&mut self) -> bool {
            self.events.push("running".to_owned());
            self.sweep_running
        }

        fn prepare_selected_output_as_dc(&mut self, linear_sweep: bool) {
            self.events
                .push(format!("prepare-dc-linear:{linear_sweep}"));
        }

        fn generator_window_visible(&mut self) -> bool {
            self.events.push("visible".to_owned());
            self.visible
        }

        fn show_generator_window(&mut self) {
            self.events.push("show".to_owned());
        }

        fn set_generator_window_top(&mut self, top: i32) {
            self.events.push(format!("top:{top}"));
        }

        fn focus_generator_window(&mut self) {
            self.events.push("focus".to_owned());
        }

        fn select_generator_for_instrument_type(&mut self, instrument_type: u8) {
            self.events.push(format!("instrument:{instrument_type}"));
        }
    }

    impl DcRecordingIntervalHost for RecordingIntervalHost {
        fn normalize_recording_interval(
            &mut self,
            requested_index: u8,
            current_value: f64,
            from_spin_button: bool,
        ) -> NormalizedRecordingInterval {
            self.requests
                .push((requested_index, current_value, from_spin_button));
            self.normalized.unwrap_or(NormalizedRecordingInterval {
                index: requested_index,
                value: current_value,
            })
        }

        fn set_recording_interval(&mut self, value: f64) {
            self.displayed.push(value);
        }
    }

    impl DcRecordingModeChangeHost for RecordingModeChangeHost {
        fn close_auxiliary_measurement_window(&mut self) -> bool {
            self.events.push("close-auxiliary".to_owned());
            self.auxiliary_was_visible
        }

        fn set_recording_mode(&mut self, mode: MeasurementRecordingMode) {
            self.events.push(format!("mode:{}", mode.index()));
        }

        fn synchronize_measurement_sources(&mut self) {
            self.events.push("sources".to_owned());
        }

        fn refresh_x_source(&mut self) {
            self.events.push("x-source".to_owned());
        }

        fn refresh_y_channel(&mut self) {
            self.events.push("y-channel".to_owned());
        }

        fn apply_sweep_bounds(&mut self) {
            self.events.push("sweep-bounds".to_owned());
        }

        fn clear_channel_overlays(&mut self) {
            self.events.push("clear-overlays".to_owned());
        }

        fn synchronize_plot_source(&mut self) {
            self.events.push("plot-source".to_owned());
        }

        fn apply_plot_layout(&mut self) {
            self.events.push("plot-layout".to_owned());
        }

        fn reset_cursor_readouts(&mut self) {
            self.events.push("reset-cursors".to_owned());
        }

        fn ensure_auxiliary_measurement_window(&mut self) -> bool {
            self.events.push("ensure-auxiliary".to_owned());
            self.auxiliary_available
        }

        fn show_auxiliary_measurement_window(&mut self) {
            self.events.push("show-auxiliary".to_owned());
        }

        fn position_auxiliary_measurement_window(&mut self) {
            self.events.push("position-auxiliary".to_owned());
        }

        fn refresh_recording_mode_status(&mut self, mode: MeasurementRecordingMode) {
            self.events.push(format!("status:{}", mode.index() + 9));
        }
    }

    impl RecorderScreenInteractionHost for ScreenInteractionHost {
        fn mouse_down(&mut self, input: ScreenMouseDownInput) {
            self.down_events.push(input);
        }

        fn mouse_move(&mut self, input: ScreenMouseMoveInput) {
            self.move_events.push(input);
        }

        fn mouse_up(&mut self) {
            self.releases += 1;
        }
    }

    #[derive(Default)]
    struct ChannelHost(Vec<ChannelContinuationRequest>);

    impl DcMeasurementChannelHost for ChannelHost {
        fn continue_channel(&mut self, request: ChannelContinuationRequest) {
            self.0.push(request);
        }
    }

    #[derive(Default)]
    struct SweepHost {
        bounds: Vec<(usize, f64)>,
        redraws: Vec<bool>,
    }

    #[derive(Default)]
    struct PositionCommitHost {
        requests: Vec<ApplyVerticalPositionRequest>,
        redraws: Vec<bool>,
    }

    impl DcVerticalPositionCommitHost for PositionCommitHost {
        fn apply_vertical_position(&mut self, request: ApplyVerticalPositionRequest) {
            self.requests.push(request);
        }

        fn redraw(&mut self, update: bool) {
            self.redraws.push(update);
        }
    }

    #[derive(Default)]
    struct SensitivityCommitHost {
        requests: Vec<ApplySensitivityBoundsRequest>,
        events: Vec<&'static str>,
    }

    impl DcSensitivityCommitHost for SensitivityCommitHost {
        fn apply_sensitivity_bounds(&mut self, request: ApplySensitivityBoundsRequest) {
            self.requests.push(request);
        }

        fn reset_axis_transform(&mut self) {
            self.events.push("reset-axis");
        }

        fn redraw(&mut self, update: bool) {
            assert!(!update);
            self.events.push("redraw");
        }
    }

    #[derive(Default)]
    struct CursorMoveHost(Vec<String>);

    impl DcCursorMoveHost for CursorMoveHost {
        fn schedule_cursor_repeat(&mut self, message_code: u16, delay: Duration) {
            self.0
                .push(format!("schedule:{message_code}:{}", delay.as_millis()));
        }

        fn move_cursor_once(&mut self, direction: DcCursorMoveDirection, step: i32) {
            self.0.push(format!("move:{direction:?}:{step}"));
        }
    }

    #[derive(Default)]
    struct CursorReleaseHost(Vec<String>);

    impl DcCursorReleaseHost for CursorReleaseHost {
        fn cancel_cursor_message(&mut self, message_code: u16) {
            self.0.push(format!("cancel:{message_code}"));
        }

        fn finish_cursor_move(&mut self, direction: DcCursorMoveDirection) {
            self.0.push(format!("finish:{direction:?}"));
        }
    }

    #[derive(Default)]
    struct CursorCurveHost(Vec<String>);

    impl DcCursorCurveHost for CursorCurveHost {
        fn send_remote_cursor_curve_command(
            &mut self,
            message_code: u16,
            direction: u8,
            timeout_ms: u32,
        ) {
            self.0
                .push(format!("remote:{message_code}:{direction}:{timeout_ms}"));
        }

        fn replace_cursor_curve(&mut self, cursor: DcCursorSelection, curve_index: usize) {
            self.0.push(format!("replace:{cursor:?}:{curve_index}"));
        }

        fn refresh_cursor_readouts(&mut self) {
            self.0.push("refresh".into());
        }
    }

    #[derive(Default)]
    struct CursorToggleHost(Vec<String>);

    impl DcCursorToggleHost for CursorToggleHost {
        fn send_remote_cursor_toggle(&mut self, message_code: u16, enabled: bool, timeout_ms: u32) {
            self.0
                .push(format!("remote:{message_code}:{enabled}:{timeout_ms}"));
        }

        fn create_cursor(&mut self, cursor: DcCursorSelection) {
            self.0.push(format!("create:{cursor:?}"));
        }

        fn remove_cursor(&mut self, cursor: DcCursorSelection) {
            self.0.push(format!("remove:{cursor:?}"));
        }

        fn refresh_cursor_readouts(&mut self) {
            self.0.push("refresh".into());
        }
    }

    #[derive(Default)]
    struct CursorSelectionHost(Vec<bool>);

    impl DcCursorSelectionHost for CursorSelectionHost {
        fn set_cursor_on_down(&mut self, down: bool) {
            self.0.push(down);
        }
    }

    #[derive(Default)]
    struct XSourceSelectionHost(Vec<String>);

    impl DcXSourceSelectionHost for XSourceSelectionHost {
        fn stop_acquisition(&mut self) {
            self.0.push("stop".into());
        }

        fn select_controller_source(&mut self, source_index: usize) {
            self.0.push(format!("controller:{source_index}"));
        }

        fn set_measurement_mode(&mut self, mode_index: usize) {
            self.0.push(format!("mode:{mode_index}"));
        }

        fn set_source_controls_enabled(&mut self, enabled: bool) {
            self.0.push(format!("controls:{enabled}"));
        }

        fn set_x_sensitivity(&mut self, value: f64) {
            self.0.push(format!("sensitivity:{value}"));
        }

        fn set_horizontal_position(&mut self, value: f64) {
            self.0.push(format!("position:{value}"));
        }

        fn set_sweep_measurement_unit(&mut self, unit: &'static str) {
            self.0.push(format!("unit:{unit}"));
        }

        fn refresh_sweep_endpoint(&mut self, endpoint: DcSweepEndpoint, source_index: usize) {
            self.0.push(format!("endpoint:{endpoint:?}:{source_index}"));
        }
    }

    #[derive(Default)]
    struct HorizontalPositionEditorHost(Vec<f64>);

    impl DcHorizontalPositionEditorHost for HorizontalPositionEditorHost {
        fn set_horizontal_position(&mut self, value: f64) {
            self.0.push(value);
        }
    }

    struct XSensitivityHost {
        normalized: NormalizedSensitivity,
        events: Vec<String>,
    }

    impl DcXSensitivityHost for XSensitivityHost {
        fn normalize_x_source_sensitivity(&mut self, index: u8) -> NormalizedSensitivity {
            self.events.push(format!("normalize:{index}"));
            self.normalized
        }

        fn set_x_sensitivity(&mut self, value: f64) {
            self.events.push(format!("edit:{value}"));
        }
    }

    #[derive(Default)]
    struct ExportHost(Vec<(u8, DcCurveHandle)>);

    impl DcCurveExportHost for ExportHost {
        fn register_curve(&mut self, mode: u8, curve: DcCurveHandle) {
            self.0.push((mode, curve));
        }
    }

    #[derive(Default)]
    struct DataSaveHost(Vec<String>);

    impl DcCurveExportHost for DataSaveHost {
        fn register_curve(&mut self, mode: u8, curve: DcCurveHandle) {
            self.0.push(format!("register:{mode}:{}", curve.0));
        }
    }

    impl DcDataSaveHost for DataSaveHost {
        fn install_current_analysis_curve(&mut self, curve: DcCurveHandle) {
            self.0.push(format!("install:{}", curve.0));
        }

        fn clear_previous_nested_curve(&mut self) {
            self.0.push("clear-nested".into());
        }

        fn create_memory_support_writer(&mut self, slot: DcSupportWriterSlot) {
            self.0.push(format!("writer:{slot:?}"));
        }
    }

    #[derive(Default)]
    struct ShowHost(Vec<&'static str>);

    impl DcAnalyzerShowHost for ShowHost {
        fn prepare_form_show(&mut self) {
            self.0.push("prepare");
        }

        fn restore_saved_configuration(&mut self) {
            self.0.push("restore");
        }
    }

    #[derive(Default)]
    struct CreationHost(Vec<String>);

    impl DcAnalyzerCreationHost for CreationHost {
        fn select_bitmap_resource(&mut self, resource: &'static str) {
            self.0.push(format!("bitmap:{resource}"));
        }

        fn initialize_shared_form(&mut self) {
            self.0.push("shared".into());
        }

        fn initialize_measurement_controller(&mut self, model_kind: DcAnalyzerModelKind) {
            self.0.push(format!("controller:{model_kind:?}"));
        }

        fn refresh_sweep_unit_caption(&mut self) {
            self.0.push("unit-caption".into());
        }

        fn select_start_sweep_endpoint(&mut self) {
            self.0.push("start-endpoint".into());
        }

        fn prepare_initial_plot(&mut self) {
            self.0.push("plot".into());
        }

        fn restore_alternate_generator_timing(&mut self) {
            self.0.push("restore-generator".into());
        }
    }

    struct CloseHost {
        events: Vec<&'static str>,
        generator_sweep_state: Option<u8>,
    }

    impl DcAnalyzerCloseHost for CloseHost {
        type GeneratorSweepState = u8;

        fn save_configuration(&mut self) {
            self.events.push("save");
        }

        fn capture_generator_sweep_state(&mut self) -> Option<Self::GeneratorSweepState> {
            self.events.push("capture");
            self.generator_sweep_state
        }

        fn restore_generator_sweep_state(&mut self, state: &Self::GeneratorSweepState) {
            assert_eq!(*state, 17);
            self.events.push("restore-generator");
        }

        fn close_generator_window(&mut self) {
            self.events.push("close-generator");
        }

        fn complete_form_close(&mut self) {
            self.events.push("complete");
        }
    }

    struct DropProbe {
        event: &'static str,
        events: Rc<RefCell<Vec<&'static str>>>,
    }

    impl Drop for DropProbe {
        fn drop(&mut self) {
            self.events.borrow_mut().push(self.event);
        }
    }

    struct DestroyHost(Rc<RefCell<Vec<&'static str>>>);

    impl DcAnalyzerDestroyHost for DestroyHost {
        fn complete_form_destroy(&mut self) {
            self.0.borrow_mut().push("complete");
        }
    }

    #[derive(Default)]
    struct SelectionHost(Vec<String>);

    impl DcChannelSelectionHost for SelectionHost {
        fn select_controller_channel(&mut self, index: usize) {
            self.0.push(format!("select:{index}"));
        }

        fn set_controller_sensitivity(&mut self, index: u8) {
            self.0.push(format!("sensitivity:{index}"));
        }

        fn synchronize_channel_toggle(&mut self, index: usize, enabled: bool) {
            self.0.push(format!("toggle:{index}:{enabled}"));
        }
    }

    struct SensitivityHost {
        events: Vec<String>,
        normalized: NormalizedSensitivity,
    }

    #[derive(Default)]
    struct StartHost(Vec<u16>);

    impl DcAcquisitionStartHost for StartHost {
        fn queue_acquisition_start(&mut self, message_code: u16) {
            self.0.push(message_code);
        }
    }

    #[derive(Default)]
    struct EraseHost(Vec<u16>);

    impl DcMeasurementEraseRequestHost for EraseHost {
        fn queue_measurement_erase(&mut self, message_code: u16) {
            self.0.push(message_code);
        }
    }

    enum WorkerBehavior {
        Blocked,
        Ready { generator: bool, can_continue: bool },
    }

    struct WorkerHost {
        events: Vec<String>,
        current: bool,
        behavior: WorkerBehavior,
    }

    impl DcAcquisitionWorkerHost for WorkerHost {
        fn start_message_is_current(&mut self, message: DcAcquisitionStartMessage) -> bool {
            self.events
                .push(format!("current:{}:{}", message.code, message.token));
            self.current
        }

        fn preflight_ready(&mut self) -> bool {
            self.events.push("preflight".into());
            !matches!(self.behavior, WorkerBehavior::Blocked)
        }

        fn repost_start(&mut self, message: DcAcquisitionStartMessage, delay: Duration) {
            self.events.push(format!(
                "repost:{}:{}:{}",
                message.code,
                message.token,
                delay.as_millis()
            ));
        }

        fn ensure_function_generator(&mut self) -> bool {
            self.events.push("ensure-generator".into());
            match self.behavior {
                WorkerBehavior::Blocked => false,
                WorkerBehavior::Ready { generator, .. } => generator,
            }
        }

        fn prepare_fixed_source(&mut self, source_index: usize, output_id: u16) {
            self.events
                .push(format!("fixed:{source_index}:{output_id}"));
        }

        fn prepare_sweep_source(&mut self, request: DcSweepStartRequest) {
            self.events.push(format!(
                "sweep:{}:{}:{}",
                request.source_index, request.output_id, request.interval_per_point
            ));
        }

        fn register_generator_callback(&mut self, message_code: u16) {
            self.events.push(format!("callback:{message_code}"));
        }

        fn start_generator(&mut self) {
            self.events.push("start-generator".into());
        }

        fn set_data_controls_enabled(&mut self, enabled: bool) {
            self.events.push(format!("controls:{enabled}"));
        }

        fn update_graph(&mut self, destructive: bool) {
            self.events.push(format!("graph:{destructive}"));
        }

        fn publish_runtime_modes(&mut self, primary: u8, secondary: u8) {
            self.events.push(format!("modes:{primary}:{secondary}"));
        }

        fn apply_sweep_bounds(&mut self, update: bool) {
            self.events.push(format!("bounds:{update}"));
        }

        fn acquisition_can_continue(&mut self) -> bool {
            self.events.push("can-continue".into());
            match self.behavior {
                WorkerBehavior::Blocked => false,
                WorkerBehavior::Ready { can_continue, .. } => can_continue,
            }
        }

        fn stop_acquisition(&mut self) {
            self.events.push("stop".into());
        }
    }

    #[derive(Default)]
    struct AdvanceHost(Vec<String>);

    impl DcSweepAdvanceHost for AdvanceHost {
        fn stop_acquisition(&mut self) {
            self.0.push("stop".into());
        }

        fn append_sweep_point(&mut self, request: DcSweepPointRequest<'_>) {
            self.0.push(format!(
                "append:{}:{}:{}",
                request.value, request.unit, request.create_series
            ));
        }

        fn set_series_point_count(&mut self, count: u32) {
            self.0.push(format!("count:{count}"));
        }

        fn apply_next_fixed_source(&mut self, value: f64) {
            self.0.push(format!("fixed:{value}"));
        }

        fn apply_next_sweep_source(&mut self, interval_per_point: f64) {
            self.0.push(format!("sweep:{interval_per_point}"));
        }

        fn register_generator_callback(&mut self, message_code: u16) {
            self.0.push(format!("callback:{message_code}"));
        }

        fn start_generator(&mut self) {
            self.0.push("start".into());
        }
    }

    struct StopHost {
        events: Vec<&'static str>,
        generator_available: bool,
    }

    impl DcAcquisitionStopHost for StopHost {
        fn detach_generator_callback(&mut self) {
            self.events.push("detach-callback");
        }

        fn function_generator_available(&mut self) -> bool {
            self.events.push("find-generator");
            self.generator_available
        }

        fn stop_generator(&mut self) {
            self.events.push("stop-generator");
        }

        fn stop_measurement_controller(&mut self) {
            self.events.push("stop-measurement");
        }

        fn refresh_recording_mode_status(&mut self) {
            self.events.push("refresh-status");
        }

        fn set_data_controls_enabled(&mut self, enabled: bool) {
            assert!(enabled);
            self.events.push("enable-data");
        }
    }

    impl DcSensitivityHost for SensitivityHost {
        fn select_controller_channel(&mut self, channel_index: usize) {
            self.events.push(format!("select:{channel_index}"));
        }

        fn normalize_controller_sensitivity(
            &mut self,
            channel_index: usize,
            sensitivity_index: u8,
        ) -> NormalizedSensitivity {
            self.events
                .push(format!("normalize:{channel_index}:{sensitivity_index}"));
            self.normalized
        }
    }

    struct AutoRangeHost {
        ranges: Vec<DcCurveRange>,
        events: Vec<String>,
    }

    impl DcAutoRangeHost for AutoRangeHost {
        fn read_curve_range(
            &mut self,
            curve_index: usize,
            volts_per_division_mode: bool,
        ) -> DcCurveRange {
            self.events
                .push(format!("read:{curve_index}:{volts_per_division_mode}"));
            self.ranges[curve_index]
        }

        fn normalize_auto_sensitivity(
            &mut self,
            axis: DcAutoRangeAxis,
            candidate: f64,
        ) -> NormalizedSensitivity {
            self.events.push(format!("normalize:{axis:?}:{candidate}"));
            NormalizedSensitivity {
                index: match axis {
                    DcAutoRangeAxis::Vertical(0) => 10,
                    DcAutoRangeAxis::Vertical(_) => 12,
                    DcAutoRangeAxis::Horizontal => 99,
                },
                value: candidate * 2.0,
            }
        }

        fn set_selected_y_controls(&mut self, sensitivity: f64, position: f64) {
            self.events.push(format!("y:{sensitivity}:{position}"));
        }

        fn set_horizontal_controls(&mut self, sensitivity: f64, position: f64) {
            self.events.push(format!("x:{sensitivity}:{position}"));
        }

        fn apply_plot_range(&mut self, update: bool) {
            self.events.push(format!("plot:{update}"));
        }

        fn restore_display_selector(&mut self) {
            self.events.push("selector".into());
        }

        fn refresh_curves(&mut self, update_data: bool, redraw: bool) {
            self.events.push(format!("refresh:{update_data}:{redraw}"));
        }
    }

    struct ToggleHost {
        events: Vec<String>,
        detach_changed: bool,
    }

    #[derive(Default)]
    struct SweepAmplitudeHost(Vec<String>);

    impl SweepAmplitudeEditorHost for SweepAmplitudeHost {
        fn set_sweep_amplitude_enabled(&mut self, enabled: bool) {
            self.0.push(format!("enabled:{enabled}"));
        }

        fn set_sweep_amplitude(&mut self, value: f64) {
            self.0.push(format!("value:{value}"));
        }
    }

    #[derive(Default)]
    struct SweepUnitHost(Vec<&'static str>);

    impl SweepAmplitudeUnitHost for SweepUnitHost {
        fn set_sweep_amplitude_unit(&mut self, unit: &'static str) {
            self.0.push(unit);
        }
    }

    impl DcChannelToggleHost for ToggleHost {
        fn synchronize_controller(&mut self, index: usize, enabled: bool) {
            self.events.push(format!("sync:{index}:{enabled}"));
        }

        fn attach_channel(&mut self, channel: &mut DcAnalyzerChannel) {
            self.events.push(format!("attach:{}", channel.id.0));
        }

        fn detach_channel(&mut self, channel: &mut DcAnalyzerChannel) -> bool {
            self.events.push(format!("detach:{}", channel.id.0));
            self.detach_changed
        }

        fn redraw_after_detach(&mut self, graph_changed: bool) {
            self.events.push(format!("redraw:{graph_changed}"));
        }
    }

    impl DcSweepAxisHost for SweepHost {
        fn set_sweep_bound(&mut self, index: usize, value: f64) {
            self.bounds.push((index, value));
        }

        fn redraw(&mut self, update: bool) {
            self.redraws.push(update);
        }
    }

    impl DcAnalyzerPlotHost for PlotHost {
        fn attach_y_trace(&mut self, request: AttachYTraceRequest) -> PlotAttachmentId {
            self.requests.push(request);
            PlotAttachmentId(41)
        }
    }

    struct MeasurementHost {
        result: DcMeasurementResult,
        events: Vec<String>,
        requests: Vec<(Vec<MeasurementDescriptorId>, MeasurementRecordingMode, bool)>,
        message_blocked: bool,
        reposted: Vec<GeneratorNotification>,
        erase_message_current: bool,
    }

    impl DcMeasurementUpdateHost for MeasurementHost {
        fn read_result(&mut self, request: DcMeasurementRequest<'_>) -> DcMeasurementResult {
            self.requests.push((
                request.descriptors.to_vec(),
                request.recording_mode,
                request.reset,
            ));
            self.events.push("read".to_owned());
            self.result.clone()
        }

        fn refresh_source_state(&mut self) {
            self.events.push("refresh".to_owned());
        }

        fn show_status(&mut self, status: &str) {
            self.events.push(format!("status:{status}"));
        }

        fn stop_acquisition(&mut self) {
            self.events.push("stop".to_owned());
        }

        fn process_enabled_channels(&mut self, result: &DcMeasurementResult) {
            self.events.push(format!("process:{}", result.payload_id));
        }
    }

    impl DcAcquisitionCallbackHost for MeasurementHost {
        fn message_is_blocked(&mut self, _notification: GeneratorNotification) -> bool {
            self.message_blocked
        }

        fn handle_immediate_notification(&mut self) {
            self.events.push("immediate".to_owned());
        }

        fn repost_notification(&mut self, notification: GeneratorNotification) {
            self.events.push("repost".to_owned());
            self.reposted.push(notification);
        }
    }

    impl DcMeasurementEraseWorkerHost for MeasurementHost {
        fn erase_message_is_current(&mut self, message: DcMeasurementEraseMessage) -> bool {
            self.events
                .push(format!("erase-current:{}:{}", message.code, message.token));
            self.erase_message_current
        }

        fn repost_erase(&mut self, message: DcMeasurementEraseMessage, delay: Duration) {
            self.events.push(format!(
                "erase-repost:{}:{}:{}",
                message.code,
                message.token,
                delay.as_millis()
            ));
        }

        fn cancel_status_display(&mut self) {
            self.events.push("cancel-status".into());
        }

        fn remove_all_graph_curves(&mut self) {
            self.events.push("remove-all-curves".into());
        }

        fn update_active_graph(&mut self) {
            self.events.push("update-graph".into());
        }

        fn refresh_recording_mode_status(&mut self, mode: MeasurementRecordingMode) {
            self.events.push(format!("mode-status:{mode:?}"));
        }
    }

    fn channel() -> DcAnalyzerChannel {
        DcAnalyzerChannel {
            id: ChannelId(7),
            enabled: true,
            sensitivity_index: 4,
            sensitivity_count: 10,
            source_type_code: 0x60,
            primary_source: Some(TraceSource {
                id: TraceSourceId(10),
                active: false,
            }),
            secondary_source: Some(TraceSourceId(11)),
            subtraces: Vec::new(),
            selected_subtrace: 0,
            attributes: TraceAttributesId(12),
            color: Color::from_rgb(0.25, 0.5, 0.75),
            unit_per_division: 2.0,
            position: 1.5,
            attachment: None,
        }
    }

    fn measurement_state() -> DcMeasurementUpdateState {
        DcMeasurementUpdateState {
            acquisition: AcquisitionState::Active,
            engine: MeasurementEngineState::Ready,
            engine_kind: DcMeasurementEngineKind::ExpectedDc,
            callback_ready: true,
            callback_token: 23,
            update_phase: MeasurementUpdatePhase::Idle,
            reset_pending: true,
            stop_button_down: false,
            recording_mode: MeasurementRecordingMode::Rms,
            descriptors: vec![MeasurementDescriptorId(3), MeasurementDescriptorId(5)],
            last_status: None,
        }
    }

    fn acquisition_start_state() -> DcAcquisitionStartState {
        DcAcquisitionStartState {
            acquisition: AcquisitionState::Inactive,
            aborted: true,
            transient_curve: Some(DcCurveHandle(31)),
            data_controls: DcDataControlsState {
                load_enabled: true,
                save_enabled: true,
            },
            stop_button_down: false,
            primary_mode: 7,
            secondary_mode: 8,
            interval_per_point: 0.25,
            sources: vec![
                DcSweepSourceDescriptor {
                    output_id: None,
                    sweep_enabled: true,
                },
                DcSweepSourceDescriptor {
                    output_id: Some(2),
                    sweep_enabled: false,
                },
                DcSweepSourceDescriptor {
                    output_id: Some(3),
                    sweep_enabled: true,
                },
                DcSweepSourceDescriptor {
                    output_id: Some(4),
                    sweep_enabled: true,
                },
                DcSweepSourceDescriptor {
                    output_id: Some(5),
                    sweep_enabled: false,
                },
            ],
            selected_source: None,
        }
    }

    fn measurement_host(continue_acquisition: bool) -> MeasurementHost {
        MeasurementHost {
            result: DcMeasurementResult {
                source: NamedMeasurementValue {
                    name: "V1".to_owned(),
                    value: "1.2V".to_owned(),
                },
                channel: NamedMeasurementValue {
                    name: "I1".to_owned(),
                    value: "3mA".to_owned(),
                },
                payload_id: 17,
                continue_acquisition,
            },
            events: Vec::new(),
            requests: Vec::new(),
            message_blocked: false,
            reposted: Vec::new(),
            erase_message_current: true,
        }
    }

    #[test]
    fn screen_paint_plan_clears_surface_and_invalidates_visible_overlay() {
        assert_eq!(
            plan_dc_screen_paint(305, 279, true),
            DcScreenPaintPlan {
                right: 304,
                bottom: 278,
                background_rgb: 0xFF_FF_FF,
                paint_plot: true,
                paint_readouts: true,
                invalidate_front_overlay: true,
            }
        );
        assert_eq!(plan_dc_screen_paint(0, 0, false).right, 0);
    }

    #[test]
    fn dc_resize_scales_text_and_selects_available_plot_top() {
        assert_eq!(
            resize_dc_parameter_analyzer(DcResizeInput {
                ui_scale_percent: 150,
                header_height: None,
                compact_layout: false,
                reference_height: 20,
                plot_available: true,
            }),
            DcResizeLayout {
                scaled_text_metric: 6,
                plot_top: Some(24),
            }
        );
        assert_eq!(
            resize_dc_parameter_analyzer(DcResizeInput {
                ui_scale_percent: 100,
                header_height: Some(100),
                compact_layout: false,
                reference_height: 20,
                plot_available: true,
            })
            .plot_top,
            Some(246)
        );
        assert_eq!(
            resize_dc_parameter_analyzer(DcResizeInput {
                ui_scale_percent: 100,
                header_height: Some(80),
                compact_layout: true,
                reference_height: 20,
                plot_available: false,
            })
            .plot_top,
            None
        );
    }

    #[test]
    fn form_hide_clears_visibility_without_releasing_analyzer_state() {
        let mut visible = true;
        let channel = channel();

        hide_dc_parameter_analyzer(&mut visible);

        assert!(!visible);
        assert_eq!(channel.id, ChannelId(7));
        assert!(channel.enabled);
    }

    #[test]
    fn form_can_resize_uses_shared_measurement_window_constraints() {
        let policy = ResizePolicy {
            current_width: 800,
            reference_width: 900,
            layout_top: 600,
            plot_top: 100,
            preserve_aspect: true,
        };

        assert_eq!(
            can_resize_dc_parameter_analyzer(
                policy,
                ResizeRequest {
                    width: 300,
                    height: 1_200,
                },
                900,
            ),
            ResizeDecision {
                allowed: true,
                request: ResizeRequest {
                    width: 600,
                    height: 567,
                },
            }
        );
        assert!(
            !can_resize_dc_parameter_analyzer(
                policy,
                ResizeRequest {
                    width: 800,
                    height: 999,
                },
                900,
            )
            .allowed
        );
    }

    #[test]
    fn screen_double_click_routes_supported_targets_and_preserves_no_op_guards() {
        let editable = ScreenDoubleClickInput {
            busy: false,
            plot_available: true,
            plot_locked: false,
            target: crate::xy_recorder::model::ScreenHitTarget::VerticalAxis,
        };

        assert_eq!(
            double_click_dc_parameter_surface(editable),
            ScreenDoubleClickAction::EditVerticalAxis
        );
        assert_eq!(
            double_click_dc_parameter_surface(ScreenDoubleClickInput {
                busy: true,
                ..editable
            }),
            ScreenDoubleClickAction::None
        );
        assert_eq!(
            double_click_dc_parameter_surface(ScreenDoubleClickInput {
                plot_locked: true,
                ..editable
            }),
            ScreenDoubleClickAction::None
        );
    }

    #[test]
    fn screen_mouse_down_forwards_the_complete_pointer_input() {
        let input = ScreenMouseDownInput {
            button: PointerButton::Primary,
            double_click: false,
            shift: true,
            control: false,
            x: 41,
            y: 73,
        };
        let mut host = ScreenInteractionHost::default();

        press_dc_parameter_surface(input, &mut host);

        assert_eq!(host.down_events, vec![input]);
    }

    #[test]
    fn screen_mouse_move_forwards_modifiers_buttons_and_signed_coordinates() {
        let input = ScreenMouseMoveInput {
            modifiers: PointerModifiers {
                shift: true,
                control: false,
                alt: true,
            },
            pressed_buttons: PressedPointerButtons {
                primary: true,
                secondary: false,
                middle: true,
            },
            x: -14,
            y: 93,
        };
        let mut host = ScreenInteractionHost::default();

        move_over_dc_parameter_surface(input, &mut host);

        assert_eq!(host.move_events, vec![input]);
    }

    #[test]
    fn screen_mouse_up_forwards_release_to_the_shared_interaction_host() {
        let mut host = ScreenInteractionHost::default();

        release_dc_parameter_surface(&mut host);

        assert_eq!(host.releases, 1);
        assert!(host.down_events.is_empty());
        assert!(host.move_events.is_empty());
    }

    #[test]
    fn recording_mode_change_rebuilds_state_and_restores_visible_auxiliary_window() {
        let mut host = RecordingModeChangeHost {
            events: Vec::new(),
            auxiliary_was_visible: true,
            auxiliary_available: true,
        };

        assert_eq!(
            change_dc_recording_mode(Some(MeasurementRecordingMode::Rms), &mut host),
            DcRecordingModeChangeOutcome::Applied {
                mode: MeasurementRecordingMode::Rms,
                auxiliary_window_restored: true,
            }
        );
        assert_eq!(
            host.events,
            vec![
                "close-auxiliary",
                "mode:1",
                "sources",
                "x-source",
                "y-channel",
                "sweep-bounds",
                "clear-overlays",
                "plot-source",
                "plot-layout",
                "reset-cursors",
                "ensure-auxiliary",
                "show-auxiliary",
                "position-auxiliary",
                "status:10",
            ]
        );
    }

    #[test]
    fn recording_mode_change_ignores_empty_selection_and_skips_hidden_auxiliary_window() {
        let mut host = RecordingModeChangeHost {
            events: Vec::new(),
            auxiliary_was_visible: false,
            auxiliary_available: true,
        };

        assert_eq!(
            change_dc_recording_mode(None, &mut host),
            DcRecordingModeChangeOutcome::NoSelection
        );
        assert!(host.events.is_empty());

        assert_eq!(
            change_dc_recording_mode(Some(MeasurementRecordingMode::Momentary), &mut host),
            DcRecordingModeChangeOutcome::Applied {
                mode: MeasurementRecordingMode::Momentary,
                auxiliary_window_restored: false,
            }
        );
        assert!(!host.events.iter().any(|event| event == "ensure-auxiliary"));
        assert_eq!(host.events.last().map(String::as_str), Some("status:11"));
    }

    #[test]
    fn recording_interval_up_accepts_controller_normalization_and_stops_at_maximum() {
        let mut state = DcRecordingIntervalState {
            index: 0,
            count: 3,
            value: 0.01,
        };
        let mut host = RecordingIntervalHost {
            normalized: Some(NormalizedRecordingInterval {
                index: 1,
                value: 0.1,
            }),
            ..RecordingIntervalHost::default()
        };

        assert_eq!(
            increase_dc_recording_interval(&mut state, &mut host),
            DcRecordingIntervalChangeOutcome::Updated
        );
        assert_eq!(state.index, 1);
        assert_close(state.value, 0.1);
        assert_eq!(host.requests, vec![(1, 0.01, true)]);
        assert_eq!(host.displayed, vec![0.1]);

        state.index = 2;
        assert_eq!(
            increase_dc_recording_interval(&mut state, &mut host),
            DcRecordingIntervalChangeOutcome::AtMaximum
        );
        assert_eq!(host.requests, vec![(1, 0.01, true)]);
        assert_eq!(host.displayed, vec![0.1]);
    }

    #[test]
    fn recording_interval_down_accepts_controller_normalization_and_stops_at_zero() {
        let mut state = DcRecordingIntervalState {
            index: 2,
            count: 3,
            value: 1.0,
        };
        let mut host = RecordingIntervalHost {
            normalized: Some(NormalizedRecordingInterval {
                index: 1,
                value: 0.1,
            }),
            ..RecordingIntervalHost::default()
        };

        assert_eq!(
            decrease_dc_recording_interval(&mut state, &mut host),
            DcRecordingIntervalChangeOutcome::Updated
        );
        assert_eq!(state.index, 1);
        assert_close(state.value, 0.1);
        assert_eq!(host.requests, vec![(1, 1.0, true)]);
        assert_eq!(host.displayed, vec![0.1]);

        state.index = 0;
        assert_eq!(
            decrease_dc_recording_interval(&mut state, &mut host),
            DcRecordingIntervalChangeOutcome::AtMinimum
        );
        assert_eq!(host.requests, vec![(1, 1.0, true)]);
        assert_eq!(host.displayed, vec![0.1]);
    }

    #[test]
    fn recording_interval_enter_parses_normalizes_and_consumes_only_enter() {
        let mut state = DcRecordingIntervalState {
            index: 1,
            count: 3,
            value: 0.1,
        };
        let mut host = RecordingIntervalHost {
            normalized: Some(NormalizedRecordingInterval {
                index: 2,
                value: 1.0,
            }),
            ..RecordingIntervalHost::default()
        };

        assert_eq!(
            apply_dc_recording_interval_key('x', "900m", &mut state, &mut host),
            Ok(DcRecordingIntervalKeyOutcome::IgnoredKey)
        );
        assert_eq!(
            apply_dc_recording_interval_key('\r', "900m", &mut state, &mut host),
            Ok(DcRecordingIntervalKeyOutcome::Applied)
        );
        assert_eq!(state.index, 2);
        assert_close(state.value, 1.0);
        assert_eq!(host.requests, vec![(1, 0.9, false)]);
        assert_eq!(host.displayed, vec![1.0]);

        assert!(apply_dc_recording_interval_key('\r', "invalid", &mut state, &mut host).is_err());
        assert_eq!(host.requests, vec![(1, 0.9, false)]);
    }

    #[test]
    fn recording_interval_exit_uses_the_enter_commit_path() {
        let mut state = DcRecordingIntervalState {
            index: 0,
            count: 3,
            value: 0.01,
        };
        let mut host = RecordingIntervalHost {
            normalized: Some(NormalizedRecordingInterval {
                index: 1,
                value: 0.1,
            }),
            ..RecordingIntervalHost::default()
        };

        assert_eq!(
            apply_dc_recording_interval_exit("90m", &mut state, &mut host),
            Ok(DcRecordingIntervalKeyOutcome::Applied)
        );
        assert_eq!(state.index, 1);
        assert_close(state.value, 0.1);
        assert_eq!(host.requests, vec![(0, 0.09, false)]);
        assert_eq!(host.displayed, vec![0.1]);
    }

    #[test]
    fn recording_interval_error_restores_the_controller_value_for_the_current_index() {
        let mut state = DcRecordingIntervalState {
            index: 1,
            count: 3,
            value: 0.1,
        };
        let mut host = RecordingIntervalHost {
            normalized: Some(NormalizedRecordingInterval {
                index: 1,
                value: 0.1,
            }),
            ..RecordingIntervalHost::default()
        };

        restore_dc_recording_interval_after_error(&mut state, &mut host);

        assert_eq!(state.index, 1);
        assert_close(state.value, 0.1);
        assert_eq!(host.requests, vec![(1, 0.1, false)]);
        assert_eq!(host.displayed, vec![0.1]);
    }

    #[test]
    fn source_controller_prepares_idle_output_and_shows_hidden_generator() {
        let mut host = SweepSourceControllerHost {
            events: Vec::new(),
            available: true,
            sweep_running: false,
            visible: false,
        };
        let request = DcSweepSourceControllerRequest {
            output_id: 7,
            linear_sweep: true,
            instrument_type: 0x10,
            analyzer_top: 250,
        };

        assert_eq!(
            open_dc_sweep_source_controller(Some(request), &mut host),
            Ok(DcSweepSourceControllerOutcome::Ready {
                source_prepared: true,
                window_shown: true,
            })
        );
        assert_eq!(
            host.events,
            vec![
                "ensure",
                "output:7",
                "running",
                "prepare-dc-linear:true",
                "visible",
                "show",
                "top:170",
                "focus",
                "instrument:16",
                "output:7",
            ]
        );
    }

    #[test]
    fn source_controller_preserves_running_visible_generator_and_reports_failures() {
        let request = DcSweepSourceControllerRequest {
            output_id: 3,
            linear_sweep: false,
            instrument_type: 0x10,
            analyzer_top: 40,
        };
        let mut host = SweepSourceControllerHost {
            events: Vec::new(),
            available: true,
            sweep_running: true,
            visible: true,
        };

        assert_eq!(
            open_dc_sweep_source_controller(Some(request), &mut host),
            Ok(DcSweepSourceControllerOutcome::Ready {
                source_prepared: false,
                window_shown: false,
            })
        );
        assert_eq!(
            host.events,
            vec![
                "ensure",
                "output:3",
                "running",
                "visible",
                "instrument:16",
                "output:3",
            ]
        );

        host.events.clear();
        host.available = false;
        assert_eq!(
            open_dc_sweep_source_controller(Some(request), &mut host),
            Ok(DcSweepSourceControllerOutcome::GeneratorUnavailable)
        );
        assert_eq!(host.events, vec!["ensure"]);

        host.events.clear();
        assert_eq!(
            open_dc_sweep_source_controller(None, &mut host),
            Err(DcSweepSourceControllerError::MissingSelectedSource)
        );
        assert!(host.events.is_empty());
    }

    #[test]
    fn x_channel_mode_updates_source_and_horizontal_position_control_state() {
        let mut source = DcXSource {
            id: DcXSourceId(11),
            active: true,
            measurement_mode: 0,
            unit_kind: 1,
            sensitivity: 1.0,
            horizontal_position: 0.0,
        };
        let mut state = DcXChannelModeState {
            mode: DcXChannelMode::Constant,
            horizontal_position_controls_enabled: false,
        };

        assert_eq!(
            change_dc_x_channel_mode(
                Some(DcXChannelMode::LinearSweep),
                Some(&mut source),
                &mut state,
            ),
            DcXChannelModeChangeOutcome::Updated(DcXChannelMode::LinearSweep)
        );
        assert_eq!(source.measurement_mode, 1);
        assert!(state.horizontal_position_controls_enabled);

        assert_eq!(
            change_dc_x_channel_mode(
                Some(DcXChannelMode::Constant),
                Some(&mut source),
                &mut state,
            ),
            DcXChannelModeChangeOutcome::Updated(DcXChannelMode::Constant)
        );
        assert_eq!(source.measurement_mode, 0);
        assert!(!state.horizontal_position_controls_enabled);
    }

    #[test]
    fn x_channel_mode_rejects_missing_selection_or_source_without_state_changes() {
        let mut state = DcXChannelModeState {
            mode: DcXChannelMode::LogarithmicSweep,
            horizontal_position_controls_enabled: true,
        };

        assert_eq!(
            change_dc_x_channel_mode(None, None, &mut state),
            DcXChannelModeChangeOutcome::NoSelection
        );
        assert_eq!(
            change_dc_x_channel_mode(Some(DcXChannelMode::Constant), None, &mut state),
            DcXChannelModeChangeOutcome::MissingSource
        );
        assert_eq!(state.mode, DcXChannelMode::LogarithmicSweep);
        assert!(state.horizontal_position_controls_enabled);
    }

    #[test]
    fn primary_source_attachment_preserves_scale_position_style_and_flags() {
        let mut channel = channel();
        let mut host = PlotHost::default();
        let flags = TraceAttachFlags {
            first: true,
            second: false,
        };

        let outcome = attach_y_channel_trace(&mut channel, -0.5, flags, 99, &mut host);

        assert_eq!(
            outcome,
            AttachYChannelOutcome::Attached(PlotAttachmentId(41))
        );
        assert_eq!(
            channel.primary_source.as_ref().map(|source| source.active),
            Some(true)
        );
        assert_eq!(channel.secondary_source, None);
        assert_eq!(channel.attachment, Some(PlotAttachmentId(41)));
        assert_eq!(
            host.requests,
            vec![AttachYTraceRequest {
                channel: ChannelId(7),
                source: TraceSourceId(10),
                attributes: TraceAttributesId(12),
                color: Color::from_rgb(0.25, 0.5, 0.75),
                minimum: -10.0,
                maximum: 10.0,
                channel_position: 1.5,
                form_vertical_position: -0.5,
                flags,
                caller_context: 99,
            }]
        );
    }

    #[test]
    fn selected_subtrace_is_attached_without_clearing_secondary_source() {
        let mut channel = channel();
        channel.subtraces = vec![TraceSourceId(20), TraceSourceId(21)];
        channel.selected_subtrace = 1;
        let mut host = PlotHost::default();

        let outcome = attach_y_channel_trace(
            &mut channel,
            0.0,
            TraceAttachFlags {
                first: false,
                second: true,
            },
            0,
            &mut host,
        );

        assert_eq!(
            outcome,
            AttachYChannelOutcome::Attached(PlotAttachmentId(41))
        );
        assert_eq!(host.requests[0].source, TraceSourceId(21));
        assert_eq!(channel.secondary_source, Some(TraceSourceId(11)));
    }

    #[test]
    fn missing_primary_source_is_a_no_op() {
        let mut channel = channel();
        channel.primary_source = None;
        let mut host = PlotHost::default();

        let outcome = attach_y_channel_trace(
            &mut channel,
            0.0,
            TraceAttachFlags {
                first: false,
                second: false,
            },
            0,
            &mut host,
        );

        assert_eq!(outcome, AttachYChannelOutcome::MissingPrimarySource);
        assert!(host.requests.is_empty());
        assert_eq!(channel.attachment, None);
    }

    #[test]
    fn ready_measurement_clears_transient_flags_before_processing_result() {
        let mut state = measurement_state();
        let mut host = measurement_host(true);

        let outcome = process_measurement_result(&mut state, &mut host);

        assert_eq!(outcome, DcMeasurementUpdateOutcome::Processed);
        assert_eq!(state.update_phase, MeasurementUpdatePhase::Idle);
        assert!(!state.reset_pending);
        assert_eq!(state.acquisition, AcquisitionState::Active);
        assert_eq!(state.last_status.as_deref(), Some("V1: 1.2V; I1: 3mA"));
        assert_eq!(
            host.requests,
            vec![(
                vec![MeasurementDescriptorId(3), MeasurementDescriptorId(5)],
                MeasurementRecordingMode::Rms,
                true,
            )]
        );
        assert_eq!(
            host.events,
            vec!["read", "refresh", "status:V1: 1.2V; I1: 3mA", "process:17",]
        );
    }

    #[test]
    fn rejected_measurement_selects_stop_after_status_update() {
        let mut state = measurement_state();
        let mut host = measurement_host(false);

        let outcome = process_measurement_result(&mut state, &mut host);

        assert_eq!(outcome, DcMeasurementUpdateOutcome::Stopped);
        assert_eq!(state.acquisition, AcquisitionState::Inactive);
        assert!(state.stop_button_down);
        assert_eq!(state.update_phase, MeasurementUpdatePhase::Idle);
        assert!(!state.reset_pending);
        assert_eq!(
            host.events,
            vec!["read", "refresh", "status:V1: 1.2V; I1: 3mA", "stop"]
        );
    }

    #[test]
    fn inactive_or_unready_measurement_is_a_no_op() {
        let mut state = measurement_state();
        let mut host = measurement_host(true);
        state.acquisition = AcquisitionState::Inactive;
        assert_eq!(
            process_measurement_result(&mut state, &mut host),
            DcMeasurementUpdateOutcome::Inactive
        );

        state.acquisition = AcquisitionState::Active;
        state.engine = MeasurementEngineState::NotReady;
        assert_eq!(
            process_measurement_result(&mut state, &mut host),
            DcMeasurementUpdateOutcome::EngineNotReady
        );
        assert!(host.events.is_empty());
        assert!(state.reset_pending);
    }

    #[test]
    fn callback_reposts_accepted_token_until_engine_callback_is_ready() {
        let mut state = measurement_state();
        state.callback_ready = false;
        let mut host = measurement_host(true);
        let notification = GeneratorNotification {
            token: 23,
            payload: Some(91),
            serialized: true,
        };

        let outcome = receive_generator_callback(&mut state, notification, &mut host);

        assert_eq!(outcome, AcquisitionCallbackOutcome::Reposted);
        assert_eq!(host.events, vec!["repost"]);
        assert_eq!(
            host.reposted,
            vec![GeneratorNotification {
                token: 23,
                payload: None,
                serialized: false,
            }]
        );
        assert!(state.reset_pending);
    }

    #[test]
    fn ready_callback_uses_shared_measurement_result_processor() {
        let mut state = measurement_state();
        let mut host = measurement_host(true);
        let notification = GeneratorNotification {
            token: 23,
            payload: None,
            serialized: false,
        };

        let outcome = receive_generator_callback(&mut state, notification, &mut host);

        assert_eq!(
            outcome,
            AcquisitionCallbackOutcome::Result(DcMeasurementUpdateOutcome::Processed)
        );
        assert_eq!(
            host.events,
            vec!["read", "refresh", "status:V1: 1.2V; I1: 3mA", "process:17",]
        );
    }

    #[test]
    fn callback_rejects_wrong_engine_blocked_message_and_stale_token() {
        let notification = GeneratorNotification {
            token: 23,
            payload: None,
            serialized: false,
        };

        let mut state = measurement_state();
        let mut host = measurement_host(true);
        state.engine_kind = DcMeasurementEngineKind::Other;
        assert_eq!(
            receive_generator_callback(&mut state, notification, &mut host),
            AcquisitionCallbackOutcome::Ignored
        );

        state.engine_kind = DcMeasurementEngineKind::ExpectedDc;
        host.message_blocked = true;
        assert_eq!(
            receive_generator_callback(&mut state, notification, &mut host),
            AcquisitionCallbackOutcome::Ignored
        );

        host.message_blocked = false;
        assert_eq!(
            receive_generator_callback(
                &mut state,
                GeneratorNotification {
                    token: 24,
                    ..notification
                },
                &mut host,
            ),
            AcquisitionCallbackOutcome::TokenRejected
        );
        assert!(host.events.is_empty());
    }

    #[test]
    fn selected_channel_dispatch_requires_enabled_channel() {
        let mut channels = vec![channel()];
        let mut host = ChannelHost::default();

        assert_eq!(
            dispatch_selected_enabled_channel(&channels, None, true, &mut host),
            ChannelDispatchOutcome::NoSelection
        );
        channels[0].enabled = false;
        assert_eq!(
            dispatch_selected_enabled_channel(&channels, Some(0), true, &mut host),
            ChannelDispatchOutcome::Disabled
        );
        channels[0].enabled = true;
        assert_eq!(
            dispatch_selected_enabled_channel(&channels, Some(0), false, &mut host),
            ChannelDispatchOutcome::Dispatched
        );
        assert_eq!(
            host.0,
            vec![ChannelContinuationRequest {
                channel: ChannelId(7),
                initial: true,
                result_flag: false,
            }]
        );
    }

    #[test]
    fn sweep_axis_supports_position_forward_and_centered_formulas() {
        let mut host = SweepHost::default();
        let forward = SweepAxisInput {
            mode: SweepAxisRangeMode::PositionForward,
            scale_per_division: 0.2,
            vertical_offset: 99.0,
            position_text: "100m".to_owned(),
        };

        assert_eq!(
            apply_sweep_axis_bounds(&forward, false, &mut host),
            Ok(SweepAxisBounds {
                lower: 0.1,
                upper: 2.1,
            })
        );
        assert_eq!(host.bounds, vec![(0, 0.1), (1, 2.1)]);
        assert_eq!(host.redraws, vec![false]);

        host = SweepHost::default();
        let centered = SweepAxisInput {
            mode: SweepAxisRangeMode::CenteredOnOffset,
            scale_per_division: 2.0,
            vertical_offset: 1.5,
            position_text: "ignored".to_owned(),
        };
        assert_eq!(
            apply_sweep_axis_bounds(&centered, true, &mut host),
            Ok(SweepAxisBounds {
                lower: -11.5,
                upper: 8.5,
            })
        );
        assert_eq!(host.bounds, vec![(0, -11.5), (1, 8.5)]);
        assert_eq!(host.redraws, vec![true]);
    }

    #[test]
    fn invalid_forward_position_does_not_change_graph() {
        let mut host = SweepHost::default();
        let input = SweepAxisInput {
            mode: SweepAxisRangeMode::PositionForward,
            scale_per_division: 1.0,
            vertical_offset: 0.0,
            position_text: "invalid".to_owned(),
        };

        assert!(apply_sweep_axis_bounds(&input, true, &mut host).is_err());
        assert!(host.bounds.is_empty());
        assert!(host.redraws.is_empty());
    }

    #[test]
    fn horizontal_position_enter_snaps_centered_offset_and_refreshes_bounds() {
        let mut state = DcHorizontalPositionState {
            mode: SweepAxisRangeMode::CenteredOnOffset,
            scale_per_division: 2.0,
            position: 0.0,
        };
        let mut host = SweepHost::default();

        assert_eq!(
            apply_horizontal_position_key('\r', "600m", &mut state, &mut host),
            Ok(HorizontalPositionKeyOutcome::Applied(SweepAxisBounds {
                lower: -10.5,
                upper: 9.5,
            }))
        );
        assert_close(state.position, 0.5);
        assert_eq!(host.bounds, vec![(0, -10.5), (1, 9.5)]);
        assert_eq!(host.redraws, vec![true]);
    }

    #[test]
    fn horizontal_position_spin_end_applies_bounds_then_refreshes_curves() {
        let input = SweepAxisInput {
            mode: SweepAxisRangeMode::PositionForward,
            scale_per_division: 2.0,
            vertical_offset: 99.0,
            position_text: "500m".into(),
        };
        let mut host = SweepHost::default();

        assert_eq!(
            commit_horizontal_position_spin(&input, &mut host),
            Ok(SweepAxisBounds {
                lower: 0.5,
                upper: 20.5,
            })
        );
        assert_eq!(host.bounds, vec![(0, 0.5), (1, 20.5)]);
        assert_eq!(host.redraws, vec![true, false]);

        let invalid = SweepAxisInput {
            position_text: "bad".into(),
            ..input
        };
        host.bounds.clear();
        host.redraws.clear();
        assert!(commit_horizontal_position_spin(&invalid, &mut host).is_err());
        assert!(host.bounds.is_empty());
        assert!(host.redraws.is_empty());
    }

    #[test]
    fn x_sensitivity_spin_end_stores_source_scale_then_commits_bounds() {
        let mut sources = vec![DcXSource {
            id: DcXSourceId(10),
            active: true,
            measurement_mode: 1,
            unit_kind: 0,
            sensitivity: 1.0,
            horizontal_position: 0.0,
        }];
        let input = SweepAxisInput {
            mode: SweepAxisRangeMode::CenteredOnOffset,
            scale_per_division: 2.0,
            vertical_offset: 0.5,
            position_text: "ignored".into(),
        };
        let mut host = SweepHost::default();

        assert_eq!(
            commit_x_sensitivity_spin(&mut sources, Some(0), &input, &mut host),
            Ok(DcXSensitivityCommitOutcome::Committed(SweepAxisBounds {
                lower: -10.5,
                upper: 9.5,
            }))
        );
        assert_close(sources[0].sensitivity, 2.0);
        assert_eq!(host.bounds, vec![(0, -10.5), (1, 9.5)]);
        assert_eq!(host.redraws, vec![true, false]);

        host.bounds.clear();
        host.redraws.clear();
        assert_eq!(
            commit_x_sensitivity_spin(&mut sources, None, &input, &mut host),
            Ok(DcXSensitivityCommitOutcome::NoSelection)
        );
        assert!(host.bounds.is_empty());
        assert!(host.redraws.is_empty());
    }

    #[test]
    fn horizontal_position_down_snaps_and_updates_only_the_editor() {
        let mut state = DcHorizontalPositionState {
            mode: SweepAxisRangeMode::CenteredOnOffset,
            scale_per_division: 2.0,
            position: -0.6,
        };
        let mut host = HorizontalPositionEditorHost::default();

        assert_close(decrease_horizontal_position(&mut state, &mut host), -1.0);
        assert_close(state.position, -1.0);
        assert_eq!(host.0, vec![-1.0]);
    }

    #[test]
    fn horizontal_position_up_uses_the_shared_snap_and_editor_update() {
        let mut state = DcHorizontalPositionState {
            mode: SweepAxisRangeMode::PositionForward,
            scale_per_division: 2.0,
            position: 0.6,
        };
        let mut host = HorizontalPositionEditorHost::default();

        assert_close(increase_horizontal_position(&mut state, &mut host), 1.0);
        assert_close(state.position, 1.0);
        assert_eq!(host.0, vec![1.0]);
    }

    #[test]
    fn x_sensitivity_up_uses_fixed_time_and_selected_source_tables() {
        let mut host = XSensitivityHost {
            normalized: NormalizedSensitivity {
                index: 2,
                value: 5.0,
            },
            events: Vec::new(),
        };
        let mut state = DcXSensitivityState {
            mode: SweepAxisRangeMode::PositionForward,
            index: 15,
            scale_per_division: 0.1,
        };

        assert_eq!(
            increase_x_sensitivity(&mut state, None, &mut host),
            DcXSensitivityChangeOutcome::Updated
        );
        assert_eq!(state.index, 16);
        assert_close(state.scale_per_division, 0.1 * 10.0_f64.cbrt());
        assert_eq!(host.events.len(), 1);

        state.mode = SweepAxisRangeMode::CenteredOnOffset;
        state.index = 1;
        host.events.clear();
        assert_eq!(
            increase_x_sensitivity(&mut state, Some(4), &mut host),
            DcXSensitivityChangeOutcome::Updated
        );
        assert_eq!(state.index, 2);
        assert_close(state.scale_per_division, 5.0);
        assert_eq!(host.events, vec!["normalize:2", "edit:5"]);
    }

    #[test]
    fn x_sensitivity_up_stops_at_limits_and_requires_a_source() {
        let mut host = XSensitivityHost {
            normalized: NormalizedSensitivity {
                index: 0,
                value: 1.0,
            },
            events: Vec::new(),
        };
        let mut state = DcXSensitivityState {
            mode: SweepAxisRangeMode::PositionForward,
            index: 29,
            scale_per_division: 1.0,
        };

        assert_eq!(
            increase_x_sensitivity(&mut state, None, &mut host),
            DcXSensitivityChangeOutcome::AtMaximum
        );
        state.mode = SweepAxisRangeMode::CenteredOnOffset;
        assert_eq!(
            increase_x_sensitivity(&mut state, None, &mut host),
            DcXSensitivityChangeOutcome::NoSource
        );
        assert!(host.events.is_empty());
    }

    #[test]
    fn x_sensitivity_down_uses_fixed_and_controller_tables_and_stops_at_zero() {
        let mut host = XSensitivityHost {
            normalized: NormalizedSensitivity {
                index: 1,
                value: 2.0,
            },
            events: Vec::new(),
        };
        let mut state = DcXSensitivityState {
            mode: SweepAxisRangeMode::PositionForward,
            index: 16,
            scale_per_division: 1.0,
        };

        assert_eq!(
            decrease_x_sensitivity(&mut state, false, &mut host),
            DcXSensitivityChangeOutcome::Updated
        );
        assert_eq!(state.index, 15);
        assert_close(state.scale_per_division, 0.1);
        assert_eq!(host.events, vec!["edit:0.1"]);

        state.mode = SweepAxisRangeMode::CenteredOnOffset;
        state.index = 2;
        host.events.clear();
        assert_eq!(
            decrease_x_sensitivity(&mut state, true, &mut host),
            DcXSensitivityChangeOutcome::Updated
        );
        assert_eq!(state.index, 1);
        assert_close(state.scale_per_division, 2.0);
        assert_eq!(host.events, vec!["normalize:1", "edit:2"]);

        state.index = 0;
        host.events.clear();
        assert_eq!(
            decrease_x_sensitivity(&mut state, true, &mut host),
            DcXSensitivityChangeOutcome::AtMinimum
        );
        assert!(host.events.is_empty());
    }

    #[test]
    fn horizontal_position_key_preserves_state_for_other_keys_and_invalid_enter() {
        let mut state = DcHorizontalPositionState {
            mode: SweepAxisRangeMode::PositionForward,
            scale_per_division: 2.0,
            position: 3.0,
        };
        let mut host = SweepHost::default();

        assert_eq!(
            apply_horizontal_position_key('x', "7", &mut state, &mut host),
            Ok(HorizontalPositionKeyOutcome::IgnoredKey)
        );
        assert!(apply_horizontal_position_key('\r', "bad", &mut state, &mut host).is_err());
        assert_close(state.position, 3.0);
        assert!(host.bounds.is_empty());
        assert!(host.redraws.is_empty());
    }

    #[test]
    fn horizontal_position_exit_uses_enter_commit_path() {
        let mut state = DcHorizontalPositionState {
            mode: SweepAxisRangeMode::PositionForward,
            scale_per_division: 2.0,
            position: 0.0,
        };
        let mut host = SweepHost::default();

        assert_eq!(
            apply_horizontal_position_exit("600m", &mut state, &mut host),
            Ok(HorizontalPositionKeyOutcome::Applied(SweepAxisBounds {
                lower: 0.6,
                upper: 20.6,
            }))
        );
        assert_close(state.position, 0.5);
        assert_eq!(host.redraws, vec![true]);
    }

    #[test]
    fn horizontal_position_error_restores_last_accepted_value_only() {
        let state = DcHorizontalPositionState {
            mode: SweepAxisRangeMode::CenteredOnOffset,
            scale_per_division: 2.0,
            position: -1.25,
        };
        let mut host = HorizontalPositionEditorHost::default();

        restore_horizontal_position_after_error(&state, &mut host);

        assert_eq!(host.0, vec![-1.25]);
    }

    #[test]
    fn data_load_provider_is_an_explicit_no_op() {
        load_data_provider();
    }

    #[test]
    fn form_show_prepares_window_before_restoring_configuration() {
        let mut host = ShowHost::default();

        show_dc_parameter_analyzer(&mut host);

        assert_eq!(host.0, vec!["prepare", "restore"]);
    }

    #[test]
    fn form_create_initializes_alternate_model_and_restores_running_generator() {
        let mut host = CreationHost::default();

        let outcome = create_dc_parameter_analyzer(
            DcAnalyzerCreationConfig {
                model_kind: DcAnalyzerModelKind::Alternate,
                y_channel_count: 0,
                x_source_count: 2,
                measurement_count: 0,
                alternate_generator_was_running: true,
            },
            &mut host,
        );

        assert_eq!(
            outcome,
            DcAnalyzerCreationOutcome::Initialized(DcAnalyzerCreationState {
                setup_phase: DcAnalyzerSetupPhase::ControllerInitialized,
                timer_interval_ms: 24,
                analysis_mode_code: 0x10,
                message_mode_code: 0x0f,
                y_channel_count: 1,
                x_source_count: 2,
                measurement_count: 1,
                selected_y_channel: Some(0),
                selected_x_source: Some(0),
                selected_measurement: Some(0),
                acquisition: AcquisitionState::Inactive,
                stop_button_down: true,
                alternate_generator_restored: true,
            })
        );
        assert_eq!(
            host.0,
            vec![
                "bitmap:bmOsc",
                "shared",
                "controller:Alternate",
                "unit-caption",
                "start-endpoint",
                "plot",
                "restore-generator",
            ]
        );
    }

    #[test]
    fn form_create_stops_after_common_setup_for_unsupported_model() {
        let mut host = CreationHost::default();

        let outcome = create_dc_parameter_analyzer(
            DcAnalyzerCreationConfig {
                model_kind: DcAnalyzerModelKind::Unsupported(3),
                y_channel_count: 4,
                x_source_count: 4,
                measurement_count: 4,
                alternate_generator_was_running: true,
            },
            &mut host,
        );

        let DcAnalyzerCreationOutcome::UnsupportedModel(state) = outcome else {
            panic!("unsupported model must stop initialization");
        };
        assert_eq!(state.setup_phase, DcAnalyzerSetupPhase::CommonInitialized);
        assert_eq!(state.timer_interval_ms, 24);
        assert_eq!(host.0, vec!["bitmap:bmOsc", "shared"]);
    }

    #[test]
    fn form_close_saves_round_trips_generator_state_and_completes_in_order() {
        let mut host = CloseHost {
            events: Vec::new(),
            generator_sweep_state: Some(17),
        };

        close_dc_parameter_analyzer(&mut host);

        assert_eq!(
            host.events,
            vec![
                "save",
                "capture",
                "restore-generator",
                "close-generator",
                "complete"
            ]
        );
    }

    #[test]
    fn form_close_skips_generator_work_when_no_generator_is_connected() {
        let mut host = CloseHost {
            events: Vec::new(),
            generator_sweep_state: None,
        };

        close_dc_parameter_analyzer(&mut host);

        assert_eq!(host.events, vec!["save", "capture", "complete"]);
    }

    #[test]
    fn form_destroy_releases_owned_resources_before_shared_cleanup() {
        let events = Rc::new(RefCell::new(Vec::new()));
        let mut display_helper = Some(DropProbe {
            event: "display-helper",
            events: Rc::clone(&events),
        });
        let mut shared_resource = Some(DropProbe {
            event: "shared-resource",
            events: Rc::clone(&events),
        });
        let mut host = DestroyHost(Rc::clone(&events));

        destroy_dc_parameter_analyzer(&mut display_helper, &mut shared_resource, &mut host);

        assert!(display_helper.is_none());
        assert!(shared_resource.is_none());
        assert_eq!(
            *events.borrow(),
            vec!["display-helper", "shared-resource", "complete"]
        );
    }

    #[test]
    fn start_click_queues_serialized_worker_message_only_while_idle() {
        let mut host = StartHost::default();

        assert_eq!(
            request_dc_acquisition_start(AcquisitionState::Inactive, &mut host),
            DcAcquisitionStartOutcome::Queued
        );
        assert_eq!(host.0, vec![DC_ACQUISITION_START_MESSAGE]);
        assert_eq!(
            request_dc_acquisition_start(AcquisitionState::Active, &mut host),
            DcAcquisitionStartOutcome::AlreadyActive
        );
        assert_eq!(host.0, vec![DC_ACQUISITION_START_MESSAGE]);
    }

    #[test]
    fn erase_click_queues_serialized_measurement_erase_message() {
        let mut host = EraseHost::default();

        request_dc_measurement_erase(&mut host);

        assert_eq!(host.0, vec![DC_MEASUREMENT_ERASE_MESSAGE]);
    }

    #[test]
    fn erase_worker_reposts_busy_update_without_changing_measurement_state() {
        let mut state = measurement_state();
        state.update_phase = MeasurementUpdatePhase::Busy;
        let original = state.clone();
        let message = DcMeasurementEraseMessage {
            code: DC_MEASUREMENT_ERASE_MESSAGE,
            token: 51,
        };
        let mut host = measurement_host(true);

        assert_eq!(
            execute_dc_measurement_erase(&mut state, message, &mut host),
            DcMeasurementEraseOutcome::Reposted
        );
        assert_eq!(state, original);
        assert_eq!(
            host.events,
            vec!["erase-current:1337:51", "erase-repost:1337:51:100"]
        );
    }

    #[test]
    fn erase_worker_clears_all_curves_and_consumes_reset_during_active_step() {
        let mut state = measurement_state();
        state.reset_pending = false;
        let message = DcMeasurementEraseMessage {
            code: DC_MEASUREMENT_ERASE_MESSAGE,
            token: 51,
        };
        let mut host = measurement_host(true);

        assert_eq!(
            execute_dc_measurement_erase(&mut state, message, &mut host),
            DcMeasurementEraseOutcome::Erased(DcMeasurementUpdateOutcome::Processed)
        );
        assert!(!state.reset_pending);
        assert!(host.requests[0].2);
        assert_eq!(
            &host.events[..4],
            [
                "erase-current:1337:51",
                "cancel-status",
                "remove-all-curves",
                "update-graph"
            ]
        );
        assert_eq!(
            host.events.last().map(String::as_str),
            Some("mode-status:Rms")
        );
    }

    #[test]
    fn acquisition_worker_reposts_blocked_preflight_without_committing_state() {
        let mut state = acquisition_start_state();
        let original = state.clone();
        let message = DcAcquisitionStartMessage {
            code: DC_ACQUISITION_START_MESSAGE,
            token: 41,
        };
        let mut host = WorkerHost {
            events: Vec::new(),
            current: true,
            behavior: WorkerBehavior::Blocked,
        };

        assert_eq!(
            execute_dc_acquisition_start(&mut state, message, &mut host),
            DcAcquisitionWorkerOutcome::Reposted
        );
        assert_eq!(state, original);
        assert_eq!(
            host.events,
            vec!["current:1336:41", "preflight", "repost:1336:41:100"]
        );
    }

    #[test]
    fn acquisition_worker_prepares_first_sweep_source_and_commits_ui_state() {
        let mut state = acquisition_start_state();
        let message = DcAcquisitionStartMessage {
            code: DC_ACQUISITION_START_MESSAGE,
            token: 41,
        };
        let mut host = WorkerHost {
            events: Vec::new(),
            current: true,
            behavior: WorkerBehavior::Ready {
                generator: true,
                can_continue: true,
            },
        };

        assert_eq!(
            execute_dc_acquisition_start(&mut state, message, &mut host),
            DcAcquisitionWorkerOutcome::Started {
                generator_started: true
            }
        );
        assert_eq!(state.acquisition, AcquisitionState::Active);
        assert!(!state.aborted);
        assert_eq!(state.transient_curve, None);
        assert!(!state.data_controls.load_enabled);
        assert!(!state.data_controls.save_enabled);
        assert_eq!(state.selected_source, Some(2));
        assert_eq!(
            host.events,
            vec![
                "current:1336:41",
                "preflight",
                "ensure-generator",
                "fixed:1:2",
                "fixed:4:5",
                "sweep:2:3:0.25",
                "callback:1327",
                "start-generator",
                "controls:false",
                "graph:false",
                "modes:7:8",
                "bounds:true",
                "can-continue"
            ]
        );
    }

    #[test]
    fn acquisition_worker_commits_then_stops_without_a_valid_sweep_source() {
        let mut state = acquisition_start_state();
        state.sources.retain(|source| !source.sweep_enabled);
        let message = DcAcquisitionStartMessage {
            code: DC_ACQUISITION_START_MESSAGE,
            token: 41,
        };
        let mut host = WorkerHost {
            events: Vec::new(),
            current: true,
            behavior: WorkerBehavior::Ready {
                generator: false,
                can_continue: false,
            },
        };

        assert_eq!(
            execute_dc_acquisition_start(&mut state, message, &mut host),
            DcAcquisitionWorkerOutcome::StartedThenStopped {
                generator_started: false
            }
        );
        assert_eq!(state.acquisition, AcquisitionState::Active);
        assert!(state.stop_button_down);
        assert_eq!(state.selected_source, None);
        assert_eq!(host.events.last().map(String::as_str), Some("stop"));
    }

    #[test]
    fn sweep_advance_appends_current_point_then_starts_next_value() {
        let mut state = DcSweepProgressState {
            current_value: 1.5,
            step: 0.25,
            remaining_points: 3,
            series_point_count: 4,
            series_initialized: false,
            sweep_unit: "V".into(),
            interval_per_point: 0.1,
            stop_button_down: false,
        };
        let mut host = AdvanceHost::default();

        assert_eq!(
            advance_dc_parameter_sweep(&mut state, &mut host),
            DcSweepAdvanceOutcome::Advanced {
                remaining_points: 2
            }
        );
        assert_close(state.current_value, 1.75);
        assert_eq!(state.series_point_count, 5);
        assert!(state.series_initialized);
        assert_eq!(
            host.0,
            vec![
                "append:1.5:V:true",
                "count:5",
                "fixed:1.75",
                "sweep:0.1",
                "callback:1327",
                "start"
            ]
        );
    }

    #[test]
    fn sweep_advance_selects_stop_when_no_point_remains() {
        let mut state = DcSweepProgressState {
            current_value: 1.5,
            step: 0.25,
            remaining_points: 0,
            series_point_count: 4,
            series_initialized: true,
            sweep_unit: "A".into(),
            interval_per_point: 0.1,
            stop_button_down: false,
        };
        let mut host = AdvanceHost::default();

        assert_eq!(
            advance_dc_parameter_sweep(&mut state, &mut host),
            DcSweepAdvanceOutcome::Stopped
        );
        assert!(state.stop_button_down);
        assert_close(state.current_value, 1.5);
        assert_eq!(host.0, vec!["stop"]);
    }

    #[test]
    fn acquisition_stop_detaches_stops_and_retains_fallback_in_order() {
        let mut state = DcAcquisitionStopState {
            acquisition: AcquisitionState::Active,
            aborted: false,
            stop_button_down: false,
            data_controls: DcDataControlsState {
                load_enabled: false,
                save_enabled: false,
            },
            form_is_closing: false,
            current_result: None,
            fallback_result: Some(DcCurveHandle(71)),
        };
        let mut host = StopHost {
            events: Vec::new(),
            generator_available: true,
        };

        assert_eq!(
            stop_dc_parameter_acquisition(&mut state, &mut host),
            DcAcquisitionStopOutcome {
                generator_stopped: true,
                fallback_retained: true,
            }
        );
        assert_eq!(state.acquisition, AcquisitionState::Inactive);
        assert!(state.aborted);
        assert!(state.stop_button_down);
        assert_eq!(state.current_result, Some(DcCurveHandle(71)));
        assert!(state.data_controls.load_enabled);
        assert!(state.data_controls.save_enabled);
        assert_eq!(
            host.events,
            vec![
                "detach-callback",
                "find-generator",
                "stop-generator",
                "stop-measurement",
                "refresh-status",
                "enable-data"
            ]
        );
    }

    #[test]
    fn inactive_acquisition_preserves_current_result_without_generator_lookup() {
        let mut state = DcAcquisitionStopState {
            acquisition: AcquisitionState::Inactive,
            aborted: false,
            stop_button_down: false,
            data_controls: DcDataControlsState {
                load_enabled: false,
                save_enabled: false,
            },
            form_is_closing: false,
            current_result: Some(DcCurveHandle(72)),
            fallback_result: Some(DcCurveHandle(71)),
        };
        let mut host = StopHost {
            events: Vec::new(),
            generator_available: true,
        };

        assert_eq!(
            stop_dc_parameter_acquisition(&mut state, &mut host),
            DcAcquisitionStopOutcome {
                generator_stopped: false,
                fallback_retained: false,
            }
        );
        assert_eq!(state.current_result, Some(DcCurveHandle(72)));
        assert_eq!(
            host.events,
            vec![
                "detach-callback",
                "stop-measurement",
                "refresh-status",
                "enable-data"
            ]
        );
    }

    #[test]
    fn completed_curve_export_registers_mode_and_moves_ownership() {
        let mut state = DcCurveExportState {
            acquisition: AcquisitionState::Inactive,
            sweep_mode: SweepAxisRangeMode::CenteredOnOffset,
            completed_curve: Some(DcCurveHandle(29)),
        };
        let mut host = ExportHost::default();

        assert_eq!(
            take_completed_curve_for_export(&mut state, &mut host),
            Some(DcCurveHandle(29))
        );
        assert_eq!(host.0, vec![(0x0f, DcCurveHandle(29))]);
        assert_eq!(state.completed_curve, None);
    }

    #[test]
    fn completed_curve_export_waits_for_inactive_acquisition() {
        let mut state = DcCurveExportState {
            acquisition: AcquisitionState::Active,
            sweep_mode: SweepAxisRangeMode::PositionForward,
            completed_curve: Some(DcCurveHandle(29)),
        };
        let mut host = ExportHost::default();

        assert_eq!(take_completed_curve_for_export(&mut state, &mut host), None);
        assert_eq!(state.completed_curve, Some(DcCurveHandle(29)));
        assert!(host.0.is_empty());
    }

    #[test]
    fn data_save_publishes_completed_curve_to_memory_and_consumes_it() {
        let mut state = DcCurveExportState {
            acquisition: AcquisitionState::Inactive,
            sweep_mode: SweepAxisRangeMode::PositionForward,
            completed_curve: Some(DcCurveHandle(42)),
        };
        let mut host = DataSaveHost::default();

        assert_eq!(
            save_dc_measurement_data(&mut state, &mut host),
            DcDataSaveOutcome::Published(DcCurveHandle(42))
        );
        assert_eq!(state.completed_curve, None);
        assert_eq!(
            host.0,
            vec![
                "register:11:42",
                "install:42",
                "clear-nested",
                "writer:Primary",
                "writer:Secondary",
            ]
        );
    }

    #[test]
    fn data_save_does_nothing_during_acquisition_or_without_a_curve() {
        let mut state = DcCurveExportState {
            acquisition: AcquisitionState::Active,
            sweep_mode: SweepAxisRangeMode::CenteredOnOffset,
            completed_curve: Some(DcCurveHandle(42)),
        };
        let mut host = DataSaveHost::default();

        assert_eq!(
            save_dc_measurement_data(&mut state, &mut host),
            DcDataSaveOutcome::NoCompletedCurve
        );
        assert_eq!(state.completed_curve, Some(DcCurveHandle(42)));
        assert!(host.0.is_empty());

        state.acquisition = AcquisitionState::Inactive;
        state.completed_curve = None;
        assert_eq!(
            save_dc_measurement_data(&mut state, &mut host),
            DcDataSaveOutcome::NoCompletedCurve
        );
        assert!(host.0.is_empty());
    }

    #[test]
    fn y_channel_selection_updates_controller_editors_and_on_state_in_order() {
        let mut channels = vec![channel()];
        channels[0].enabled = false;
        let mut state = DcChannelSelectionState {
            selected_channel: None,
            displayed_unit_per_division: 0.0,
            displayed_position: 0.0,
            on_button_down: false,
        };
        let mut host = SelectionHost::default();

        assert!(!select_y_channel(
            &mut channels,
            &mut state,
            None,
            &mut host
        ));
        assert!(select_y_channel(
            &mut channels,
            &mut state,
            Some(0),
            &mut host
        ));

        assert_eq!(state.selected_channel, Some(0));
        assert_close(state.displayed_unit_per_division, 2.0);
        assert_close(state.displayed_position, 1.5);
        assert!(state.on_button_down);
        assert!(channels[0].enabled);
        assert_eq!(host.0, vec!["select:0", "sensitivity:4", "toggle:0:true"]);
    }

    #[test]
    fn sensitivity_down_uses_controller_or_shared_logarithmic_scale() {
        let mut channels = vec![channel()];
        let mut selection = DcChannelSelectionState {
            selected_channel: Some(0),
            displayed_unit_per_division: 0.0,
            displayed_position: 0.0,
            on_button_down: true,
        };
        let mut host = SensitivityHost {
            events: Vec::new(),
            normalized: NormalizedSensitivity {
                index: 3,
                value: 0.5,
            },
        };

        assert_eq!(
            decrease_y_sensitivity(&mut channels, &mut selection, &mut host),
            SensitivityChangeOutcome::Updated
        );
        assert_eq!(channels[0].sensitivity_index, 3);
        assert_close(channels[0].unit_per_division, 0.5);
        assert_close(selection.displayed_unit_per_division, 0.5);
        assert_eq!(host.events, vec!["select:0", "normalize:0:3"]);

        channels[0].source_type_code = 0x64;
        host.events.clear();
        assert_eq!(
            decrease_y_sensitivity(&mut channels, &mut selection, &mut host),
            SensitivityChangeOutcome::Updated
        );
        assert_eq!(channels[0].sensitivity_index, 2);
        assert_close(channels[0].unit_per_division, 0.01);
        assert_eq!(host.events, vec!["select:0"]);
    }

    #[test]
    fn sensitivity_down_stops_at_zero_without_controller_calls() {
        let mut channels = vec![channel()];
        channels[0].sensitivity_index = 0;
        let mut selection = DcChannelSelectionState {
            selected_channel: Some(0),
            displayed_unit_per_division: 2.0,
            displayed_position: 0.0,
            on_button_down: true,
        };
        let mut host = SensitivityHost {
            events: Vec::new(),
            normalized: NormalizedSensitivity {
                index: 0,
                value: 2.0,
            },
        };

        assert_eq!(
            decrease_y_sensitivity(&mut channels, &mut selection, &mut host),
            SensitivityChangeOutcome::AtMinimum
        );
        assert!(host.events.is_empty());
    }

    #[test]
    fn sensitivity_up_uses_controller_or_shared_logarithmic_scale() {
        let mut channels = vec![channel()];
        let mut selection = DcChannelSelectionState {
            selected_channel: Some(0),
            displayed_unit_per_division: 0.0,
            displayed_position: 0.0,
            on_button_down: true,
        };
        let mut host = SensitivityHost {
            events: Vec::new(),
            normalized: NormalizedSensitivity {
                index: 5,
                value: 5.0,
            },
        };

        assert_eq!(
            increase_y_sensitivity(&mut channels, &mut selection, &mut host),
            SensitivityChangeOutcome::Updated
        );
        assert_eq!(channels[0].sensitivity_index, 5);
        assert_close(channels[0].unit_per_division, 5.0);
        assert_close(selection.displayed_unit_per_division, 5.0);
        assert_eq!(host.events, vec!["select:0", "normalize:0:5"]);

        channels[0].source_type_code = 0x66;
        host.events.clear();
        assert_eq!(
            increase_y_sensitivity(&mut channels, &mut selection, &mut host),
            SensitivityChangeOutcome::Updated
        );
        assert_eq!(channels[0].sensitivity_index, 6);
        assert_close(channels[0].unit_per_division, 0.215_443_469_003_188_4);
        assert_eq!(host.events, vec!["select:0"]);
    }

    #[test]
    fn sensitivity_up_stops_at_final_index_without_controller_calls() {
        let mut channels = vec![channel()];
        channels[0].sensitivity_index = 9;
        let mut selection = DcChannelSelectionState {
            selected_channel: Some(0),
            displayed_unit_per_division: 2.0,
            displayed_position: 0.0,
            on_button_down: true,
        };
        let mut host = SensitivityHost {
            events: Vec::new(),
            normalized: NormalizedSensitivity {
                index: 9,
                value: 2.0,
            },
        };

        assert_eq!(
            increase_y_sensitivity(&mut channels, &mut selection, &mut host),
            SensitivityChangeOutcome::AtMaximum
        );
        assert!(host.events.is_empty());
    }

    #[test]
    fn sensitivity_end_applies_all_subtrace_bounds_then_resets_and_redraws() {
        let mut channels = vec![channel()];
        channels[0].unit_per_division = 0.2;
        channels[0].subtraces = vec![TraceSourceId(20), TraceSourceId(21)];
        let mut host = SensitivityCommitHost::default();

        assert_eq!(
            commit_y_sensitivity(&channels, Some(0), &mut host),
            SensitivityCommitOutcome::Committed { source_count: 2 }
        );
        assert_eq!(host.requests.len(), 2);
        assert_eq!(host.requests[0].source, TraceSourceId(20));
        assert_close(host.requests[0].lower, -1.0);
        assert_close(host.requests[0].upper, 1.0);
        assert_eq!(host.requests[1].source, TraceSourceId(21));
        assert_eq!(host.events, vec!["reset-axis", "redraw"]);

        assert_eq!(
            commit_y_sensitivity(&channels, None, &mut host),
            SensitivityCommitOutcome::NoSelection
        );
        assert_eq!(host.events, vec!["reset-axis", "redraw"]);
    }

    #[test]
    fn cursor_left_press_filters_button_and_starts_delayed_repeat_before_move() {
        let mut state = DcCursorRepeatState::default();
        let mut host = CursorMoveHost::default();

        assert_eq!(
            start_cursor_left_move(false, &mut state, &mut host),
            DcCursorMoveStartOutcome::IgnoredButton
        );
        assert_eq!(state, DcCursorRepeatState::default());
        assert!(host.0.is_empty());

        assert_eq!(
            start_cursor_left_move(true, &mut state, &mut host),
            DcCursorMoveStartOutcome::Started
        );
        assert_eq!(
            state,
            DcCursorRepeatState {
                direction: Some(DcCursorMoveDirection::Left),
                step: 1,
                delay: Duration::from_millis(300),
            }
        );
        assert_eq!(host.0, vec!["schedule:1329:300", "move:Left:1"]);
    }

    #[test]
    fn cursor_right_press_uses_shared_repeat_contract() {
        let mut state = DcCursorRepeatState::default();
        let mut host = CursorMoveHost::default();

        assert_eq!(
            start_cursor_right_move(true, &mut state, &mut host),
            DcCursorMoveStartOutcome::Started
        );
        assert_eq!(state.direction, Some(DcCursorMoveDirection::Right));
        assert_eq!(state.step, 1);
        assert_eq!(state.delay, Duration::from_millis(300));
        assert_eq!(host.0, vec!["schedule:1329:300", "move:Right:1"]);
    }

    #[test]
    fn cursor_right_release_cancels_repeat_messages_before_finishing_move() {
        let mut state = DcCursorRepeatState {
            direction: Some(DcCursorMoveDirection::Right),
            step: 1,
            delay: Duration::from_millis(300),
        };
        let mut host = CursorReleaseHost::default();

        assert_eq!(
            end_cursor_right_move(false, &mut state, &mut host),
            DcCursorMoveEndOutcome::IgnoredButton
        );
        assert_eq!(state.direction, Some(DcCursorMoveDirection::Right));
        assert!(host.0.is_empty());

        assert_eq!(
            end_cursor_right_move(true, &mut state, &mut host),
            DcCursorMoveEndOutcome::Ended
        );
        assert_eq!(state, DcCursorRepeatState::default());
        assert_eq!(host.0, vec!["cancel:1329", "cancel:1330", "finish:Right"]);
    }

    #[test]
    fn cursor_left_release_uses_shared_repeat_cancellation() {
        let mut state = DcCursorRepeatState {
            direction: Some(DcCursorMoveDirection::Left),
            step: 1,
            delay: Duration::from_millis(300),
        };
        let mut host = CursorReleaseHost::default();

        assert_eq!(
            end_cursor_left_move(true, &mut state, &mut host),
            DcCursorMoveEndOutcome::Ended
        );
        assert_eq!(state, DcCursorRepeatState::default());
        assert_eq!(host.0, vec!["cancel:1329", "cancel:1330", "finish:Left"]);
    }

    #[test]
    fn previous_cursor_curve_advances_selected_cursor_and_wraps() {
        let mut state = DcCursorCurveState {
            route: DcControlRoute::Local,
            selected_cursor: Some(DcCursorSelection::A),
            plot_state_code: 5,
            curve_count: 3,
            cursor_a_curve: Some(2),
            cursor_b_curve: Some(1),
            cursor_a_active: true,
            cursor_b_active: true,
            readout_revision: 4,
        };
        let mut host = CursorCurveHost::default();

        assert_eq!(
            select_previous_cursor_curve(&mut state, &mut host),
            DcCursorCurveOutcome::Selected {
                cursor: DcCursorSelection::A,
                curve_index: 0,
            }
        );
        assert_eq!(state.cursor_a_curve, Some(0));
        assert_eq!(state.cursor_b_curve, Some(1));
        assert_eq!(state.readout_revision, 5);
        assert_eq!(host.0, vec!["replace:A:0", "refresh"]);

        state.plot_state_code = 3;
        assert_eq!(
            select_previous_cursor_curve(&mut state, &mut host),
            DcCursorCurveOutcome::RefreshedWithoutSelection
        );
        assert_eq!(state.cursor_a_curve, Some(0));
        assert_eq!(state.readout_revision, 6);
        assert_eq!(host.0.last().map(String::as_str), Some("refresh"));
    }

    #[test]
    fn previous_cursor_curve_remote_route_has_no_local_update() {
        let mut state = DcCursorCurveState {
            route: DcControlRoute::Remote,
            selected_cursor: Some(DcCursorSelection::B),
            plot_state_code: 0,
            curve_count: 2,
            cursor_a_curve: Some(0),
            cursor_b_curve: Some(1),
            cursor_a_active: true,
            cursor_b_active: true,
            readout_revision: 7,
        };
        let original = state;
        let mut host = CursorCurveHost::default();

        assert_eq!(
            select_previous_cursor_curve(&mut state, &mut host),
            DcCursorCurveOutcome::RemoteQueued
        );
        assert_eq!(state, original);
        assert_eq!(host.0, vec!["remote:1339:1:100"]);
    }

    #[test]
    fn next_cursor_curve_decrements_selected_b_cursor_and_wraps() {
        let mut state = DcCursorCurveState {
            route: DcControlRoute::Local,
            selected_cursor: Some(DcCursorSelection::B),
            plot_state_code: 6,
            curve_count: 3,
            cursor_a_curve: Some(1),
            cursor_b_curve: Some(0),
            cursor_a_active: true,
            cursor_b_active: true,
            readout_revision: 2,
        };
        let mut host = CursorCurveHost::default();

        assert_eq!(
            select_next_cursor_curve(&mut state, &mut host),
            DcCursorCurveOutcome::Selected {
                cursor: DcCursorSelection::B,
                curve_index: 2,
            }
        );
        assert_eq!(state.cursor_a_curve, Some(1));
        assert_eq!(state.cursor_b_curve, Some(2));
        assert_eq!(state.readout_revision, 3);
        assert_eq!(host.0, vec!["replace:B:2", "refresh"]);

        state.route = DcControlRoute::Remote;
        assert_eq!(
            select_next_cursor_curve(&mut state, &mut host),
            DcCursorCurveOutcome::RemoteQueued
        );
        assert_eq!(host.0.last().map(String::as_str), Some("remote:1339:0:100"));
    }

    #[test]
    fn cursor_on_toggle_changes_only_selected_cursor_and_refreshes() {
        let mut state = DcCursorCurveState {
            route: DcControlRoute::Local,
            selected_cursor: Some(DcCursorSelection::B),
            plot_state_code: 0,
            curve_count: 2,
            cursor_a_curve: Some(0),
            cursor_b_curve: None,
            cursor_a_active: true,
            cursor_b_active: false,
            readout_revision: 1,
        };
        let mut host = CursorToggleHost::default();

        assert_eq!(
            set_selected_cursor_enabled(&mut state, true, &mut host),
            DcCursorToggleOutcome::Enabled(DcCursorSelection::B)
        );
        assert!(state.cursor_a_active);
        assert!(state.cursor_b_active);
        assert_eq!(host.0, vec!["create:B", "refresh"]);

        assert_eq!(
            set_selected_cursor_enabled(&mut state, true, &mut host),
            DcCursorToggleOutcome::Unchanged
        );
        assert_eq!(host.0.last().map(String::as_str), Some("refresh"));

        state.selected_cursor = None;
        assert_eq!(
            set_selected_cursor_enabled(&mut state, false, &mut host),
            DcCursorToggleOutcome::RefreshedWithoutSelection
        );
        assert_eq!(state.readout_revision, 4);
    }

    #[test]
    fn cursor_on_toggle_remote_route_has_no_local_effect() {
        let mut state = DcCursorCurveState {
            route: DcControlRoute::Remote,
            selected_cursor: Some(DcCursorSelection::A),
            plot_state_code: 0,
            curve_count: 1,
            cursor_a_curve: Some(0),
            cursor_b_curve: None,
            cursor_a_active: false,
            cursor_b_active: false,
            readout_revision: 8,
        };
        let original = state;
        let mut host = CursorToggleHost::default();

        assert_eq!(
            set_selected_cursor_enabled(&mut state, true, &mut host),
            DcCursorToggleOutcome::RemoteQueued
        );
        assert_eq!(state, original);
        assert_eq!(host.0, vec!["remote:1338:true:100"]);
    }

    #[test]
    fn cursor_a_selection_mirrors_active_state_without_cursor_work() {
        let mut state = DcCursorCurveState {
            route: DcControlRoute::Local,
            selected_cursor: Some(DcCursorSelection::B),
            plot_state_code: 0,
            curve_count: 1,
            cursor_a_curve: Some(0),
            cursor_b_curve: Some(0),
            cursor_a_active: true,
            cursor_b_active: false,
            readout_revision: 3,
        };
        let mut host = CursorSelectionHost::default();

        assert_eq!(
            select_cursor_a(&mut state, false, &mut host),
            DcCursorSelectionOutcome::NotSelected
        );
        assert_eq!(state.selected_cursor, Some(DcCursorSelection::B));
        assert!(host.0.is_empty());

        assert_eq!(
            select_cursor_a(&mut state, true, &mut host),
            DcCursorSelectionOutcome::Synchronized
        );
        assert_eq!(state.selected_cursor, Some(DcCursorSelection::A));
        assert_eq!(state.readout_revision, 3);
        assert_eq!(host.0, vec![true]);
    }

    #[test]
    fn cursor_b_selection_mirrors_active_state_without_cursor_work() {
        let mut state = DcCursorCurveState {
            route: DcControlRoute::Local,
            selected_cursor: Some(DcCursorSelection::A),
            plot_state_code: 0,
            curve_count: 1,
            cursor_a_curve: Some(0),
            cursor_b_curve: Some(0),
            cursor_a_active: true,
            cursor_b_active: false,
            readout_revision: 3,
        };
        let mut host = CursorSelectionHost::default();

        assert_eq!(
            select_cursor_b(&mut state, false, &mut host),
            DcCursorSelectionOutcome::NotSelected
        );
        assert_eq!(state.selected_cursor, Some(DcCursorSelection::A));
        assert!(host.0.is_empty());

        assert_eq!(
            select_cursor_b(&mut state, true, &mut host),
            DcCursorSelectionOutcome::Synchronized
        );
        assert_eq!(state.selected_cursor, Some(DcCursorSelection::B));
        assert_eq!(state.readout_revision, 3);
        assert_eq!(host.0, vec![false]);
    }

    #[test]
    fn x_source_selection_stops_and_synchronizes_a_new_source() {
        let mut sources = vec![
            DcXSource {
                id: DcXSourceId(10),
                active: false,
                measurement_mode: 0,
                unit_kind: 0,
                sensitivity: 1.0,
                horizontal_position: 2.0,
            },
            DcXSource {
                id: DcXSourceId(11),
                active: false,
                measurement_mode: 2,
                unit_kind: 3,
                sensitivity: 0.25,
                horizontal_position: -1.5,
            },
        ];
        let mut state = DcXSourceSelectionState {
            selected_source: Some(DcXSourceId(10)),
            stop_button_down: false,
            displayed_measurement_mode: Some(0),
            source_controls_enabled: false,
            displayed_sensitivity: 1.0,
            displayed_horizontal_position: 2.0,
            sweep_measurement_unit: "V",
        };
        let mut host = XSourceSelectionHost::default();

        assert_eq!(
            select_x_source(
                &mut sources,
                Some(1),
                DcSweepEndpoint::Start,
                &mut state,
                &mut host,
            ),
            DcXSourceSelectionOutcome::Selected(DcXSourceId(11))
        );
        assert!(state.stop_button_down);
        assert_eq!(state.selected_source, Some(DcXSourceId(11)));
        assert_eq!(state.displayed_measurement_mode, Some(2));
        assert!(state.source_controls_enabled);
        assert_close(state.displayed_sensitivity, 0.25);
        assert_close(state.displayed_horizontal_position, -1.5);
        assert_eq!(state.sweep_measurement_unit, "A");
        assert!(sources[1].active);
        assert_eq!(
            host.0,
            vec![
                "stop",
                "controller:1",
                "mode:2",
                "controls:true",
                "sensitivity:0.25",
                "position:-1.5",
                "unit:A",
                "endpoint:Start:1",
            ]
        );
    }

    #[test]
    fn x_source_selection_only_refreshes_endpoint_for_current_source() {
        let mut sources = vec![DcXSource {
            id: DcXSourceId(10),
            active: true,
            measurement_mode: 0,
            unit_kind: 0,
            sensitivity: 1.0,
            horizontal_position: 2.0,
        }];
        let mut state = DcXSourceSelectionState {
            selected_source: Some(DcXSourceId(10)),
            stop_button_down: false,
            displayed_measurement_mode: Some(0),
            source_controls_enabled: false,
            displayed_sensitivity: 1.0,
            displayed_horizontal_position: 2.0,
            sweep_measurement_unit: "V",
        };
        let original = state;
        let mut host = XSourceSelectionHost::default();

        assert_eq!(
            select_x_source(
                &mut sources,
                Some(0),
                DcSweepEndpoint::Stop,
                &mut state,
                &mut host,
            ),
            DcXSourceSelectionOutcome::RefreshedCurrent(DcXSourceId(10))
        );
        assert_eq!(state, original);
        assert_eq!(host.0, vec!["endpoint:Stop:0"]);

        host.0.clear();
        assert_eq!(
            select_x_source(
                &mut sources,
                None,
                DcSweepEndpoint::Stop,
                &mut state,
                &mut host,
            ),
            DcXSourceSelectionOutcome::NoSelection
        );
        assert!(host.0.is_empty());
    }

    #[test]
    fn dc_data_load_is_an_explicit_disabled_command() {
        assert_eq!(load_dc_measurement_data(), DcDataLoadOutcome::Disabled);
    }

    #[test]
    fn dc_close_query_blocks_only_active_instrument_during_application_exit() {
        assert_eq!(
            query_dc_parameter_analyzer_close(false, AcquisitionState::Active, true),
            DcCloseQueryResult {
                allow_close: true,
                block: None,
            }
        );
        assert_eq!(
            query_dc_parameter_analyzer_close(true, AcquisitionState::Active, true),
            DcCloseQueryResult {
                allow_close: false,
                block: Some(DcCloseQueryBlock::ActiveMeasurementInstrument),
            }
        );
        assert_eq!(
            query_dc_parameter_analyzer_close(true, AcquisitionState::Inactive, false),
            DcCloseQueryResult {
                allow_close: true,
                block: None,
            }
        );
    }

    #[test]
    fn auto_range_updates_eligible_curves_and_centered_horizontal_range() {
        let mut curves = vec![
            DcAutoRangeCurve {
                has_data: true,
                has_provider: true,
                sensitivity_index: 1,
                sensitivity: 1.0,
                vertical_position: 4.0,
            },
            DcAutoRangeCurve {
                has_data: false,
                has_provider: true,
                sensitivity_index: 2,
                sensitivity: 2.0,
                vertical_position: 5.0,
            },
            DcAutoRangeCurve {
                has_data: true,
                has_provider: true,
                sensitivity_index: 3,
                sensitivity: 3.0,
                vertical_position: 6.0,
            },
        ];
        let mut state = DcAutoRangeState {
            volts_per_division_mode: true,
            selected_curve: Some(2),
            horizontal_sensitivity_index: 4,
            horizontal_sensitivity: 5.0,
            horizontal_position: 6.0,
        };
        let mut host = AutoRangeHost {
            ranges: vec![
                DcCurveRange {
                    horizontal_minimum: -20.0,
                    horizontal_maximum: 8.0,
                    vertical_minimum: -10.0,
                    vertical_maximum: 4.0,
                },
                DcCurveRange {
                    horizontal_minimum: 0.0,
                    horizontal_maximum: 0.0,
                    vertical_minimum: 0.0,
                    vertical_maximum: 0.0,
                },
                DcCurveRange {
                    horizontal_minimum: -3.0,
                    horizontal_maximum: 12.0,
                    vertical_minimum: -6.0,
                    vertical_maximum: 2.0,
                },
            ],
            events: Vec::new(),
        };

        assert_eq!(
            auto_range_measurement_curves(&mut curves, &mut state, &mut host),
            DcAutoRangeOutcome {
                ranged_curve_count: 2,
                horizontal_range_updated: true,
            }
        );
        assert_eq!(curves[0].sensitivity_index, 10);
        assert_close(curves[0].sensitivity, 4.0);
        assert_close(curves[0].vertical_position, 0.0);
        assert_eq!(curves[1].sensitivity_index, 2);
        assert_eq!(curves[2].sensitivity_index, 12);
        assert_close(curves[2].sensitivity, 2.4);
        assert_close(state.horizontal_sensitivity, 8.0);
        assert_eq!(state.horizontal_sensitivity_index, 99);
        assert_close(state.horizontal_position, 0.0);
        assert_eq!(
            host.events,
            vec![
                "read:0:true",
                "normalize:Vertical(0):2",
                "read:2:true",
                "normalize:Vertical(2):1.2",
                "y:2.4:0",
                "normalize:Horizontal:4",
                "x:8:0",
                "plot:false",
                "selector",
                "refresh:true:true",
            ]
        );
    }

    #[test]
    fn auto_range_empty_time_mode_keeps_horizontal_state_and_refreshes() {
        let mut curves = Vec::new();
        let mut state = DcAutoRangeState {
            volts_per_division_mode: false,
            selected_curve: None,
            horizontal_sensitivity_index: 4,
            horizontal_sensitivity: 5.0,
            horizontal_position: 6.0,
        };
        let original = state;
        let mut host = AutoRangeHost {
            ranges: Vec::new(),
            events: Vec::new(),
        };

        assert_eq!(
            auto_range_measurement_curves(&mut curves, &mut state, &mut host),
            DcAutoRangeOutcome {
                ranged_curve_count: 0,
                horizontal_range_updated: false,
            }
        );
        assert_eq!(state, original);
        assert_eq!(
            host.events,
            vec!["plot:false", "selector", "refresh:true:true"]
        );
    }

    #[test]
    fn vertical_position_up_snaps_and_mirrors_selected_channel_value() {
        let mut channels = vec![channel()];
        channels[0].unit_per_division = 2.0;
        channels[0].position = 0.6;
        let mut selection = DcChannelSelectionState {
            selected_channel: Some(0),
            displayed_unit_per_division: 2.0,
            displayed_position: 0.6,
            on_button_down: true,
        };

        assert_eq!(
            increase_y_position(&mut channels, &mut selection),
            VerticalPositionChangeOutcome::Updated
        );
        assert_close(channels[0].position, 1.0);
        assert_close(selection.displayed_position, 1.0);

        selection.selected_channel = None;
        assert_eq!(
            increase_y_position(&mut channels, &mut selection),
            VerticalPositionChangeOutcome::NoSelection
        );
    }

    #[test]
    fn vertical_position_down_snaps_and_mirrors_selected_channel_value() {
        let mut channels = vec![channel()];
        channels[0].unit_per_division = 2.0;
        channels[0].position = -0.6;
        let mut selection = DcChannelSelectionState {
            selected_channel: Some(0),
            displayed_unit_per_division: 2.0,
            displayed_position: -0.6,
            on_button_down: true,
        };

        assert_eq!(
            decrease_y_position(&mut channels, &mut selection),
            VerticalPositionChangeOutcome::Updated
        );
        assert_close(channels[0].position, -1.0);
        assert_close(selection.displayed_position, -1.0);
    }

    #[test]
    fn vertical_position_end_applies_all_displayed_sources_then_redraws() {
        let mut channels = vec![channel()];
        channels[0].position = -1.25;
        channels[0].subtraces = vec![TraceSourceId(20), TraceSourceId(21)];
        let mut host = PositionCommitHost::default();

        assert_eq!(
            commit_y_position(&channels, Some(0), &mut host),
            VerticalPositionCommitOutcome::Committed { source_count: 2 }
        );
        assert_eq!(
            host.requests,
            vec![
                ApplyVerticalPositionRequest {
                    channel: ChannelId(7),
                    source: TraceSourceId(20),
                    position: -1.25,
                    flags: TraceAttachFlags {
                        first: true,
                        second: true,
                    },
                },
                ApplyVerticalPositionRequest {
                    channel: ChannelId(7),
                    source: TraceSourceId(21),
                    position: -1.25,
                    flags: TraceAttachFlags {
                        first: true,
                        second: true,
                    },
                },
            ]
        );
        assert_eq!(host.redraws, vec![false]);
    }

    #[test]
    fn vertical_position_end_uses_primary_source_and_rejects_no_selection() {
        let channels = vec![channel()];
        let mut host = PositionCommitHost::default();

        assert_eq!(
            commit_y_position(&channels, Some(0), &mut host),
            VerticalPositionCommitOutcome::Committed { source_count: 1 }
        );
        assert_eq!(host.requests[0].source, TraceSourceId(10));
        assert_eq!(host.redraws, vec![false]);

        assert_eq!(
            commit_y_position(&channels, None, &mut host),
            VerticalPositionCommitOutcome::NoSelection
        );
        assert_eq!(host.redraws, vec![false]);
    }

    #[test]
    fn sweep_start_prefers_normalized_primary_unit_then_uses_secondary() {
        use tiara_core::source_ranges::SourceRange;

        let mut ranges = SourceRanges {
            primary: Some(SourceRange {
                start: -2.0,
                stop: 3.0,
                numeric_format: 1,
                unit: "Voltage : primary » details".into(),
            }),
            secondary: Some(SourceRange {
                start: 0.25,
                stop: 0.75,
                numeric_format: 2,
                unit: "Current: secondary".into(),
            }),
        };
        let mut host = SweepAmplitudeHost::default();

        assert_eq!(
            select_sweep_start_amplitude(&ranges, "Voltage", &mut host),
            SweepEndpointSelectionOutcome::Primary(-2.0)
        );
        assert_eq!(host.0, vec!["enabled:true", "value:-2"]);

        ranges.primary = None;
        host.0.clear();
        assert_eq!(
            select_sweep_start_amplitude(&ranges, "Current", &mut host),
            SweepEndpointSelectionOutcome::Secondary(0.25)
        );
        assert_eq!(host.0, vec!["enabled:true", "value:0.25"]);
    }

    #[test]
    fn sweep_start_disables_editor_without_overwriting_unsupported_unit() {
        let ranges = SourceRanges::default();
        let mut host = SweepAmplitudeHost::default();

        assert_eq!(
            select_sweep_start_amplitude(&ranges, "Resistance", &mut host),
            SweepEndpointSelectionOutcome::UnsupportedUnit
        );
        assert_eq!(host.0, vec!["enabled:true", "enabled:false"]);
    }

    #[test]
    fn sweep_stop_selects_matched_stop_field_and_preserves_range_priority() {
        use tiara_core::source_ranges::SourceRange;

        let ranges = SourceRanges {
            primary: Some(SourceRange {
                start: -2.0,
                stop: 3.0,
                numeric_format: 1,
                unit: "Voltage : primary » details".into(),
            }),
            secondary: Some(SourceRange {
                start: 0.25,
                stop: 0.75,
                numeric_format: 2,
                unit: "Voltage: secondary".into(),
            }),
        };
        let mut host = SweepAmplitudeHost::default();

        assert_eq!(
            select_sweep_stop_amplitude(&ranges, "Voltage", &mut host),
            SweepEndpointSelectionOutcome::Primary(3.0)
        );
        assert_eq!(host.0, vec!["enabled:true", "value:3"]);
    }

    #[test]
    fn sweep_amplitude_change_selects_current_or_voltage_unit_caption() {
        let mut host = SweepUnitHost::default();

        assert_eq!(refresh_sweep_amplitude_unit(3, &mut host), "A");
        assert_eq!(refresh_sweep_amplitude_unit(2, &mut host), "V");
        assert_eq!(host.0, vec!["A", "V"]);
    }

    #[test]
    fn sweep_measurement_unit_click_uses_shared_caption_mapping() {
        let mut host = SweepUnitHost::default();

        assert_eq!(refresh_sweep_measurement_unit_caption(3, &mut host), "A");
        assert_eq!(refresh_sweep_measurement_unit_caption(0, &mut host), "V");
        assert_eq!(host.0, vec!["A", "V"]);
    }

    #[test]
    fn channel_toggle_always_synchronizes_then_changes_plot_only_when_needed() {
        let mut channels = vec![channel()];
        let mut host = ToggleHost {
            events: Vec::new(),
            detach_changed: true,
        };

        assert_eq!(
            set_selected_channel_enabled(&mut channels, Some(0), true, &mut host),
            ChannelToggleOutcome::Synchronized
        );
        assert_eq!(host.events, vec!["sync:0:true"]);

        host.events.clear();
        assert_eq!(
            set_selected_channel_enabled(&mut channels, Some(0), false, &mut host),
            ChannelToggleOutcome::Detached {
                graph_changed: true,
            }
        );
        assert!(!channels[0].enabled);
        assert_eq!(host.events, vec!["sync:0:false", "detach:7", "redraw:true"]);

        host.events.clear();
        assert_eq!(
            set_selected_channel_enabled(&mut channels, Some(0), true, &mut host),
            ChannelToggleOutcome::Attached
        );
        assert!(channels[0].enabled);
        assert_eq!(host.events, vec!["sync:0:true", "attach:7"]);
    }
}
