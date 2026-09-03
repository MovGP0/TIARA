use tiara_core::numeric_format::{format_display_value, parse_engineering_number};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PlotMode {
    YOverTime,
    YOverX,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RecordingMode {
    Average,
    Rms,
    Momentary,
}

impl PlotMode {
    #[must_use]
    pub const fn export_code(self) -> u8 {
        match self {
            Self::YOverTime => 0x0b,
            Self::YOverX => 0x0c,
        }
    }

    #[must_use]
    pub const fn horizontal_label(self) -> &'static str {
        match self {
            Self::YOverTime => "Time/Div",
            Self::YOverX => "Volts/Div",
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct CurveBounds {
    pub minimum_x: f64,
    pub maximum_x: f64,
    pub minimum_y: f64,
    pub maximum_y: f64,
}

impl CurveBounds {
    #[must_use]
    pub const fn new(minimum_x: f64, maximum_x: f64, minimum_y: f64, maximum_y: f64) -> Self {
        Self {
            minimum_x,
            maximum_x,
            minimum_y,
            maximum_y,
        }
    }

    fn vertical_span(self) -> f64 {
        (self.maximum_y - self.minimum_y).abs()
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct RecordedCurve {
    pub id: String,
    pub bounds: CurveBounds,
}

impl RecordedCurve {
    #[must_use]
    pub fn new(id: impl Into<String>, bounds: CurveBounds) -> Self {
        Self {
            id: id.into(),
            bounds,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct RecorderChannel {
    pub active: bool,
    pub plot_attached: bool,
    pub vertical_scale_index: u8,
    pub vertical_scale_steps: Vec<f64>,
    pub recorded_curve: Option<RecordedCurve>,
    pub vertical_scale: f64,
    pub vertical_position: f64,
}

impl Default for RecorderChannel {
    fn default() -> Self {
        Self {
            active: false,
            plot_attached: false,
            vertical_scale_index: 0,
            vertical_scale_steps: vec![1.0],
            recorded_curve: None,
            vertical_scale: 1.0,
            vertical_position: 0.0,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct PlotCursor {
    pub active: bool,
    pub curve_index: Option<usize>,
    pub position: f64,
    pub cache_valid: bool,
}

impl Default for PlotCursor {
    fn default() -> Self {
        Self {
            active: false,
            curve_index: None,
            position: 0.0,
            cache_valid: false,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorSelection {
    A,
    B,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorMoveDirection {
    Left,
    Right,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct CursorRepeatState {
    pub direction: Option<CursorMoveDirection>,
    pub delay_ms: u32,
    pub step: u32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ControlRoute {
    Local,
    Remote,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum RecorderCloseAction {
    #[default]
    None,
    Free,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseQueryBlock {
    ActiveMeasurementInstrument,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CloseQueryResult {
    pub allow_close: bool,
    pub block: Option<CloseQueryBlock>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum BackendCommand {
    SetChannel { index: usize, enabled: bool },
    Start { code: u16 },
    Stop,
    Erase { code: u16 },
    NavigateCurve { code: u16, direction: u8 },
    SetCursor { code: u16, enabled: bool },
    RequestMode(PlotMode),
    SelectXSource { index: usize },
    SetRecordingMode { mode: Option<RecordingMode> },
    SetRecordingIntervalIndex { index: u8 },
    PublishCurve { curve_id: String },
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PlotTransfer {
    pub curve_id: String,
    pub mode_code: u8,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ShowLifecycleState {
    pub shared_initialized: bool,
    pub recorder_initialized: bool,
    pub requested_height: Option<u32>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RecorderModelKind {
    Standard,
    Alternate,
    Unsupported(u8),
}

#[derive(Debug, Clone, PartialEq)]
pub struct RecorderCreationConfig {
    pub model_kind: RecorderModelKind,
    pub channels: Vec<RecorderChannel>,
    pub x_source_count: usize,
    pub time_scale: f64,
    pub x_source_scale: f64,
    pub horizontal_position: f64,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct RecorderCreationState {
    pub shared_initialized: bool,
    pub model_initialized: bool,
    pub bitmap_resource_selected: bool,
    pub timer_interval_ms: u32,
    pub y_channel_count: usize,
    pub x_source_count: usize,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RecorderCreationOutcome {
    Initialized,
    UnsupportedModel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ScreenPaintPlan {
    pub right: u32,
    pub bottom: u32,
    pub background_rgb: u32,
    pub paint_plot: bool,
    pub paint_readouts: bool,
    pub invalidate_front_overlay: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct RecorderResizeLayout {
    pub scaled_text_metric: u32,
    pub plot_top: Option<u32>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct RecorderResizeInput {
    pub ui_scale_percent: u32,
    pub header_height: Option<u32>,
    pub compact_layout: bool,
    pub reference_height: u32,
    pub plot_available: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct RecorderCanResizeInput {
    pub proposed_width: u32,
    pub proposed_height: u32,
    pub current_width: u32,
    pub content_bottom: u32,
    pub content_top: u32,
    pub reference_width: u32,
    pub reference_height: u32,
    pub available_screen_height: u32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct RecorderCanResizeResult {
    pub width: u32,
    pub height: u32,
    pub allowed: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ScreenHitTarget {
    HorizontalAxis,
    VerticalAxis,
    DiagramText,
    Arrow,
    CircleOrLine,
    WmfFigure,
    Unsupported,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ScreenDoubleClickInput {
    pub busy: bool,
    pub plot_available: bool,
    pub plot_locked: bool,
    pub target: ScreenHitTarget,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ScreenDoubleClickAction {
    None,
    EditHorizontalAxis,
    EditVerticalAxis,
    EditDiagramText,
    EditArrow,
    EditCircleOrLinePen,
    EditWmfFigure,
}

/// Implements the shared Ghidra function `FUN_010f9c80` at `0x010F9C80`.
///
/// Routes a measurement-surface double click to the matching editor. Busy,
/// missing, locked, and unsupported surface states have no effect.
#[must_use]
pub const fn route_measurement_surface_double_click(
    input: ScreenDoubleClickInput,
) -> ScreenDoubleClickAction {
    if input.busy || !input.plot_available || input.plot_locked {
        return ScreenDoubleClickAction::None;
    }
    match input.target {
        ScreenHitTarget::HorizontalAxis => ScreenDoubleClickAction::EditHorizontalAxis,
        ScreenHitTarget::VerticalAxis => ScreenDoubleClickAction::EditVerticalAxis,
        ScreenHitTarget::DiagramText => ScreenDoubleClickAction::EditDiagramText,
        ScreenHitTarget::Arrow => ScreenDoubleClickAction::EditArrow,
        ScreenHitTarget::CircleOrLine => ScreenDoubleClickAction::EditCircleOrLinePen,
        ScreenHitTarget::WmfFigure => ScreenDoubleClickAction::EditWmfFigure,
        ScreenHitTarget::Unsupported => ScreenDoubleClickAction::None,
    }
}

pub trait RecorderDestroyHost {
    fn save_display_configuration(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PointerButton {
    Primary,
    Secondary,
    Middle,
    Other(u8),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ScreenMouseDownInput {
    pub button: PointerButton,
    pub double_click: bool,
    pub shift: bool,
    pub control: bool,
    pub x: u32,
    pub y: u32,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct PointerModifiers {
    pub shift: bool,
    pub control: bool,
    pub alt: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct PressedPointerButtons {
    pub primary: bool,
    pub secondary: bool,
    pub middle: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ScreenMouseMoveInput {
    pub modifiers: PointerModifiers,
    pub pressed_buttons: PressedPointerButtons,
    pub x: i32,
    pub y: i32,
}

pub trait RecorderScreenInteractionHost {
    fn mouse_down(&mut self, input: ScreenMouseDownInput);
    fn mouse_move(&mut self, input: ScreenMouseMoveInput);
    fn mouse_up(&mut self);
}

#[derive(Debug, Clone)]
#[allow(clippy::struct_excessive_bools)]
pub struct RecorderState {
    channels: Vec<RecorderChannel>,
    selected_channel: Option<usize>,
    x_source_count: usize,
    selected_x_source: Option<usize>,
    selected_recording_mode: Option<RecordingMode>,
    recording_interval_steps: Vec<f64>,
    recording_interval_index: u8,
    recording_interval: f64,
    recording_interval_text: String,
    plot_selected_channel: Option<usize>,
    displayed_vertical_scale_index: u8,
    channel_on: bool,
    channel_control_enabled: bool,
    displayed_vertical_scale: f64,
    displayed_vertical_position: f64,
    applied_vertical_position: Option<f64>,
    vertical_plot_bounds: Option<(f64, f64)>,
    acquisition_active: bool,
    acquisition_controls_enabled: bool,
    stop_button_down: bool,
    plot_refresh_suspended: bool,
    erase_requested: bool,
    plot_mode: PlotMode,
    buffered_curve: Option<RecordedCurve>,
    latest_completed_curve: Option<RecordedCurve>,
    analysis_workspace_curve: Option<RecordedCurve>,
    memory_writer_count: usize,
    curves: Vec<String>,
    cursor_a: PlotCursor,
    cursor_b: PlotCursor,
    selected_cursor: CursorSelection,
    cursor_on: bool,
    cursor_repeat: CursorRepeatState,
    last_cursor_release: Option<CursorMoveDirection>,
    horizontal_scale_index: u8,
    time_scale_steps: Vec<f64>,
    x_source_scale_steps: Vec<f64>,
    horizontal_scale: f64,
    stored_time_scale: f64,
    x_source_scale: f64,
    horizontal_position: f64,
    displayed_horizontal_position: f64,
    horizontal_plot_bounds: Option<(f64, f64)>,
    route: ControlRoute,
    mode_change_allowed: bool,
    plot_revision: u64,
    cursor_readout_revision: u64,
    backend_commands: Vec<BackendCommand>,
    plot_transfers: Vec<PlotTransfer>,
    show_lifecycle: ShowLifecycleState,
    creation_state: RecorderCreationState,
    close_after_stop_requested: bool,
    close_action: RecorderCloseAction,
    last_close_query: Option<CloseQueryResult>,
    last_screen_paint: Option<ScreenPaintPlan>,
    last_resize_layout: Option<RecorderResizeLayout>,
    last_can_resize: Option<RecorderCanResizeResult>,
    last_double_click_action: ScreenDoubleClickAction,
    last_screen_mouse_down: Option<ScreenMouseDownInput>,
    last_screen_mouse_move: Option<ScreenMouseMoveInput>,
    screen_mouse_up_count: u64,
    visible: bool,
    destroyed: bool,
}

impl Default for RecorderState {
    fn default() -> Self {
        Self {
            channels: vec![RecorderChannel::default()],
            selected_channel: Some(0),
            x_source_count: 1,
            selected_x_source: Some(0),
            selected_recording_mode: None,
            recording_interval_steps: vec![0.1],
            recording_interval_index: 0,
            recording_interval: 0.1,
            recording_interval_text: "100m".to_owned(),
            plot_selected_channel: None,
            displayed_vertical_scale_index: 0,
            channel_on: false,
            channel_control_enabled: false,
            displayed_vertical_scale: 1.0,
            displayed_vertical_position: 0.0,
            applied_vertical_position: None,
            vertical_plot_bounds: None,
            acquisition_active: false,
            acquisition_controls_enabled: true,
            stop_button_down: false,
            plot_refresh_suspended: false,
            erase_requested: false,
            plot_mode: PlotMode::YOverTime,
            buffered_curve: None,
            latest_completed_curve: None,
            analysis_workspace_curve: None,
            memory_writer_count: 0,
            curves: Vec::new(),
            cursor_a: PlotCursor::default(),
            cursor_b: PlotCursor::default(),
            selected_cursor: CursorSelection::A,
            cursor_on: false,
            cursor_repeat: CursorRepeatState::default(),
            last_cursor_release: None,
            horizontal_scale_index: 0,
            time_scale_steps: vec![1.0],
            x_source_scale_steps: vec![1.0],
            horizontal_scale: 1.0,
            stored_time_scale: 1.0,
            x_source_scale: 1.0,
            horizontal_position: 0.0,
            displayed_horizontal_position: 0.0,
            horizontal_plot_bounds: None,
            route: ControlRoute::Local,
            mode_change_allowed: true,
            plot_revision: 0,
            cursor_readout_revision: 0,
            backend_commands: Vec::new(),
            plot_transfers: Vec::new(),
            show_lifecycle: ShowLifecycleState::default(),
            creation_state: RecorderCreationState::default(),
            close_after_stop_requested: false,
            close_action: RecorderCloseAction::None,
            last_close_query: None,
            last_screen_paint: None,
            last_resize_layout: None,
            last_can_resize: None,
            last_double_click_action: ScreenDoubleClickAction::None,
            last_screen_mouse_down: None,
            last_screen_mouse_move: None,
            screen_mouse_up_count: 0,
            visible: false,
            destroyed: false,
        }
    }
}

impl RecorderState {
    /// Implements Ghidra function `FUN_01b590b0` at `0x01B590B0`.
    ///
    /// Initializes the recovered XY Recorder model and its Iced-facing state.
    /// It selects the recorder bitmap role, creates one of the two supported
    /// model variants, fills both source selectors with a fallback entry,
    /// restores the initial scale and position controls, and prepares the plot.
    /// An unknown model variant stops before model-specific initialization.
    pub fn create(&mut self, config: RecorderCreationConfig) -> RecorderCreationOutcome {
        self.creation_state = RecorderCreationState {
            shared_initialized: true,
            bitmap_resource_selected: true,
            timer_interval_ms: 24,
            ..RecorderCreationState::default()
        };
        if matches!(config.model_kind, RecorderModelKind::Unsupported(_)) {
            return RecorderCreationOutcome::UnsupportedModel;
        }

        self.channels = config.channels;
        if self.channels.is_empty() {
            self.channels.push(RecorderChannel::default());
        }
        self.selected_channel = Some(0);
        self.plot_selected_channel = Some(0);
        self.displayed_vertical_scale_index = self.channels[0].vertical_scale_index;
        self.displayed_vertical_scale = self.channels[0].vertical_scale;
        self.displayed_vertical_position = self.channels[0].vertical_position;
        self.channel_on = self.channels[0].active;
        self.channel_control_enabled = true;
        self.stored_time_scale = config.time_scale;
        self.x_source_scale = config.x_source_scale;
        self.horizontal_scale = match self.plot_mode {
            PlotMode::YOverTime => config.time_scale,
            PlotMode::YOverX => config.x_source_scale,
        };
        self.horizontal_position =
            snap_and_round(config.horizontal_position, self.horizontal_scale / 4.0);
        self.displayed_horizontal_position = self.horizontal_position;
        self.acquisition_active = false;
        self.acquisition_controls_enabled = true;
        self.stop_button_down = false;
        self.close_after_stop_requested = false;
        self.close_action = RecorderCloseAction::None;
        self.destroyed = false;
        self.plot_revision = self.plot_revision.saturating_add(1);
        self.creation_state.model_initialized = true;
        self.creation_state.y_channel_count = self.channels.len();
        self.creation_state.x_source_count = config.x_source_count.max(1);
        self.x_source_count = self.creation_state.x_source_count;
        self.selected_x_source = Some(0);
        RecorderCreationOutcome::Initialized
    }

    /// Implements Ghidra function `FUN_01b59c90` at `0x01B59C90`.
    ///
    /// Selects a different valid X-source descriptor, re-enables recorder
    /// interaction, and sends the source index to the model. Missing,
    /// out-of-range, and repeated selections have no effect.
    pub fn select_x_source(&mut self, index: Option<usize>) {
        let Some(index) = index.filter(|index| *index < self.x_source_count) else {
            return;
        };
        if self.selected_x_source == Some(index) {
            return;
        }
        self.acquisition_controls_enabled = true;
        self.selected_x_source = Some(index);
        self.backend_commands
            .push(BackendCommand::SelectXSource { index });
    }

    /// Implements Ghidra function `FUN_01b5a4d0` at `0x01B5A4D0`.
    ///
    /// Applies the Iced recording-mode selection to the recorder model. Each
    /// combo change is forwarded, including an empty selection.
    pub fn select_recording_mode(&mut self, mode: Option<RecordingMode>) {
        self.selected_recording_mode = mode;
        self.backend_commands
            .push(BackendCommand::SetRecordingMode { mode });
    }

    pub fn set_recording_interval_steps(&mut self, steps: impl IntoIterator<Item = f64>) {
        let steps: Vec<_> = steps.into_iter().collect();
        if steps.is_empty() {
            return;
        }
        self.recording_interval_steps = steps;
        self.recording_interval_index = self
            .recording_interval_index
            .min(u8::try_from(self.recording_interval_steps.len() - 1).unwrap_or(u8::MAX));
        self.recording_interval =
            self.recording_interval_steps[usize::from(self.recording_interval_index)];
        self.recording_interval_text = format_display_value(self.recording_interval, 6);
    }

    /// Implements Ghidra function `FUN_01b5a510` at `0x01B5A510`.
    ///
    /// Moves to the next configured recording interval, applies the index to
    /// the recorder model, and refreshes the engineering-formatted edit text.
    /// The final interval is a no-op.
    pub fn increase_recording_interval(&mut self) {
        let next_index = usize::from(self.recording_interval_index) + 1;
        let Some(interval) = self.recording_interval_steps.get(next_index).copied() else {
            return;
        };
        let Ok(next_index) = u8::try_from(next_index) else {
            return;
        };
        self.recording_interval_index = next_index;
        self.recording_interval = interval;
        self.recording_interval_text = format_display_value(interval, 6);
        self.backend_commands
            .push(BackendCommand::SetRecordingIntervalIndex { index: next_index });
    }

    /// Implements Ghidra function `FUN_01b5a5a0` at `0x01B5A5A0`.
    ///
    /// Moves to the preceding configured recording interval, applies the index
    /// to the recorder model, and refreshes the engineering-formatted edit
    /// text. Index zero is a no-op.
    pub fn decrease_recording_interval(&mut self) {
        let Some(previous_index) = self.recording_interval_index.checked_sub(1) else {
            return;
        };
        let Some(interval) = self
            .recording_interval_steps
            .get(usize::from(previous_index))
            .copied()
        else {
            return;
        };
        self.recording_interval_index = previous_index;
        self.recording_interval = interval;
        self.recording_interval_text = format_display_value(interval, 6);
        self.backend_commands
            .push(BackendCommand::SetRecordingIntervalIndex {
                index: previous_index,
            });
    }

    /// Implements Ghidra function `FUN_01b5a620` at `0x01B5A620`.
    ///
    /// Consumes Enter, parses the engineering-number edit, and asks the local
    /// recorder model to select the nearest configured positive interval. The
    /// accepted value is formatted back into the edit. Other keys and invalid
    /// values do not change interval state.
    pub fn recording_interval_key_pressed(&mut self, key: char, text: &str) -> bool {
        if key != '\r' {
            return false;
        }
        let Ok(requested) = parse_engineering_number(text) else {
            return true;
        };
        if !requested.is_finite() || requested <= 0.0 {
            return true;
        }
        let Some((index, interval)) = self
            .recording_interval_steps
            .iter()
            .copied()
            .enumerate()
            .filter(|(_, interval)| interval.is_finite() && *interval > 0.0)
            .min_by(|(_, left), (_, right)| {
                (left - requested)
                    .abs()
                    .total_cmp(&(right - requested).abs())
            })
        else {
            return true;
        };
        let Ok(index) = u8::try_from(index) else {
            return true;
        };
        self.recording_interval_index = index;
        self.recording_interval = interval;
        self.recording_interval_text = format_display_value(interval, 6);
        self.backend_commands
            .push(BackendCommand::SetRecordingIntervalIndex { index });
        true
    }

    /// Implements Ghidra function `FUN_01b5a690` at `0x01B5A690`.
    ///
    /// Commits the interval editor on focus exit through the same Enter-key
    /// path. Parsing, model normalization, formatting, and invalid-input
    /// behavior therefore remain identical for both UI events.
    pub fn recording_interval_edit_exited(&mut self, text: &str) {
        self.recording_interval_key_pressed('\r', text);
    }

    /// Implements Ghidra function `FUN_01b5a6c0` at `0x01B5A6C0`.
    ///
    /// Restores the interval editor from the model's canonical value at the
    /// current interval index after numeric input reports an error. No backend
    /// selection command is sent.
    pub fn restore_recording_interval_after_error(&mut self) {
        let Some(interval) = self
            .recording_interval_steps
            .get(usize::from(self.recording_interval_index))
            .copied()
        else {
            return;
        };
        self.recording_interval = interval;
        self.recording_interval_text = format_display_value(interval, 6);
    }

    /// Implements Ghidra function `FUN_01b59a10` at `0x01B59A10`.
    ///
    /// Consumes Enter from the horizontal-position editor. A valid number is
    /// snapped to one quarter of the active horizontal scale, then the plot's
    /// centered ten-division bounds are rebuilt and refreshed. Other keys and
    /// invalid text do not change recorder state.
    pub fn horizontal_position_key_pressed(&mut self, key: char, text: &str) -> bool {
        if key != '\r' {
            return false;
        }
        let Ok(value) = text.trim().parse::<f64>() else {
            return true;
        };
        self.horizontal_position = snap_and_round(value, self.horizontal_scale / 4.0);
        self.displayed_horizontal_position = self.horizontal_position;
        self.refresh_horizontal_bounds();
        true
    }

    /// Implements Ghidra function `FUN_01b59a70` at `0x01B59A70`.
    ///
    /// Commits the horizontal-position editor on focus exit through the same
    /// Enter-key path. This keeps snapping, plot bounds, refresh behavior, and
    /// invalid-text handling identical for both UI events.
    pub fn horizontal_position_edit_exited(&mut self, text: &str) {
        self.horizontal_position_key_pressed('\r', text);
    }

    /// Implements Ghidra function `FUN_01b59aa0` at `0x01B59AA0`.
    ///
    /// Restores the horizontal-position editor from the last accepted value
    /// after its numeric input reports an error. Plot state is unchanged.
    pub const fn restore_horizontal_position_after_error(&mut self) {
        self.displayed_horizontal_position = self.horizontal_position;
    }

    /// Implements Ghidra function `FUN_01b5a160` at `0x01B5A160`.
    ///
    /// Applies the stored horizontal position after a spin operation ends. It
    /// rebuilds the centered ten-division plot bounds and requests one refresh.
    pub fn commit_horizontal_position(&mut self) {
        self.refresh_horizontal_bounds();
    }

    /// Implements Ghidra function `FUN_01b5a190` at `0x01B5A190`.
    ///
    /// Decreases the horizontal position by one quarter of the active scale,
    /// snaps and rounds the result, and mirrors it to the editor. Plot bounds
    /// are not applied until the separate spin-button end event.
    pub fn decrease_horizontal_position(&mut self) {
        let step = self.horizontal_scale / 4.0;
        self.horizontal_position = snap_and_round(self.horizontal_position - step, step);
        self.displayed_horizontal_position = self.horizontal_position;
    }

    /// Implements Ghidra function `FUN_01b5a1d0` at `0x01B5A1D0`.
    ///
    /// Increases the horizontal position by one quarter of the active scale,
    /// snaps and rounds the result, and mirrors it to the editor. Plot bounds
    /// are not applied until the separate spin-button end event.
    pub fn increase_horizontal_position(&mut self) {
        let step = self.horizontal_scale / 4.0;
        self.horizontal_position = snap_and_round(self.horizontal_position + step, step);
        self.displayed_horizontal_position = self.horizontal_position;
    }

    /// Implements Ghidra function `FUN_01b5a210` at `0x01B5A210`.
    ///
    /// Applies the active X sensitivity after a spin operation ends. It
    /// rebuilds the centered ten-division horizontal bounds with the current
    /// offset and requests one plot refresh.
    pub fn commit_x_sensitivity(&mut self) {
        self.refresh_horizontal_bounds();
    }

    /// Implements Ghidra function `FUN_01b59b80` at `0x01B59B80`.
    ///
    /// Starts leftward cursor movement for the primary mouse button. The first
    /// unit move happens immediately and the repeat state starts with a 300 ms
    /// delay. Other mouse buttons have no effect.
    pub fn cursor_left_mouse_down(&mut self, primary_button: bool) {
        self.cursor_mouse_down(CursorMoveDirection::Left, primary_button);
    }

    /// Implements Ghidra function `FUN_01b59bb0` at `0x01B59BB0`.
    ///
    /// Starts rightward cursor movement for the primary mouse button. The first
    /// unit move happens immediately and the repeat state starts with a 300 ms
    /// delay. Other mouse buttons have no effect.
    pub fn cursor_right_mouse_down(&mut self, primary_button: bool) {
        self.cursor_mouse_down(CursorMoveDirection::Right, primary_button);
    }

    /// Implements Ghidra function `FUN_01b59be0` at `0x01B59BE0`.
    ///
    /// Handles primary-button release for the right cursor control. It cancels
    /// pending repeat work and records that the release was forwarded. Other
    /// mouse buttons have no effect.
    pub fn cursor_right_mouse_up(&mut self, primary_button: bool) {
        self.cursor_mouse_up(CursorMoveDirection::Right, primary_button);
    }

    /// Implements Ghidra function `FUN_01b59c10` at `0x01B59C10`.
    ///
    /// Handles primary-button release for the left cursor control. It cancels
    /// pending repeat work and records that the release was forwarded. Other
    /// mouse buttons have no effect.
    pub fn cursor_left_mouse_up(&mut self, primary_button: bool) {
        self.cursor_mouse_up(CursorMoveDirection::Left, primary_button);
    }

    pub fn replace_channels(&mut self, channels: impl IntoIterator<Item = RecorderChannel>) {
        self.channels = channels.into_iter().collect();
        if self
            .selected_channel
            .is_some_and(|index| index >= self.channels.len())
        {
            self.selected_channel = None;
            self.channel_on = false;
        }
    }

    pub fn select_channel(&mut self, index: Option<usize>) {
        self.selected_channel = index;
        self.channel_on = match index {
            Some(index) if index < self.channels.len() => self.channels[index].active,
            _ => false,
        };
    }

    /// Implements Ghidra function `FUN_01b58450` at `0x01B58450`.
    ///
    /// Selects a valid Y-channel in the plot, mirrors its style, vertical
    /// scale, and vertical position into the recorder controls, enables the
    /// shared On control, and applies that control's current state to the new
    /// channel. A missing or out-of-range combo selection has no effect.
    pub fn select_y_channel_from_combo(&mut self, index: Option<usize>) {
        let Some(index) = index.filter(|index| *index < self.channels.len()) else {
            return;
        };
        let requested_enabled = self.channel_on;
        let channel = &self.channels[index];
        self.selected_channel = Some(index);
        self.plot_selected_channel = Some(index);
        self.displayed_vertical_scale_index = channel.vertical_scale_index;
        self.displayed_vertical_scale = channel.vertical_scale;
        self.displayed_vertical_position = channel.vertical_position;
        self.channel_control_enabled = true;
        self.channels[index].active = true;
        self.set_selected_channel_enabled(requested_enabled);
    }

    /// Implements Ghidra function `FUN_01b58650` at `0x01B58650`.
    ///
    /// Moves the selected Y-channel to the preceding sensitivity step, then
    /// refreshes the plot selection and displayed vertical scale. Index zero
    /// and a missing selected channel are no-ops.
    pub fn decrease_y_sensitivity(&mut self) {
        let Some(index) = self
            .selected_channel
            .filter(|index| *index < self.channels.len())
        else {
            return;
        };
        let channel = &mut self.channels[index];
        if channel.vertical_scale_index == 0 {
            return;
        }
        channel.vertical_scale_index -= 1;
        if let Some(scale) = channel
            .vertical_scale_steps
            .get(usize::from(channel.vertical_scale_index))
        {
            channel.vertical_scale = *scale;
        }
        self.displayed_vertical_scale_index = channel.vertical_scale_index;
        self.displayed_vertical_scale = channel.vertical_scale;
        self.plot_revision = self.plot_revision.saturating_add(1);
    }

    /// Implements Ghidra function `FUN_01b586e0` at `0x01B586E0`.
    ///
    /// Moves the selected Y-channel to the next sensitivity step, then
    /// refreshes the plot selection and displayed vertical scale. The final
    /// available step and a missing selected channel are no-ops.
    pub fn increase_y_sensitivity(&mut self) {
        let Some(index) = self
            .selected_channel
            .filter(|index| *index < self.channels.len())
        else {
            return;
        };
        let channel = &mut self.channels[index];
        let next_index = usize::from(channel.vertical_scale_index) + 1;
        let Some(scale) = channel.vertical_scale_steps.get(next_index) else {
            return;
        };
        let Ok(next_index) = u8::try_from(next_index) else {
            return;
        };
        channel.vertical_scale_index = next_index;
        channel.vertical_scale = *scale;
        self.displayed_vertical_scale_index = channel.vertical_scale_index;
        self.displayed_vertical_scale = channel.vertical_scale;
        self.plot_revision = self.plot_revision.saturating_add(1);
    }

    /// Implements Ghidra function `FUN_01b59ac0` at `0x01B59AC0`.
    ///
    /// Applies the selected channel's sensitivity after a spin operation ends.
    /// The recovered plot spans ten vertical divisions centered on zero, then
    /// requests one refresh. A missing selected channel has no effect.
    pub fn commit_y_sensitivity(&mut self) {
        let Some(channel) = self
            .selected_channel
            .and_then(|index| self.channels.get(index))
        else {
            return;
        };
        let half_span = channel.vertical_scale * 5.0;
        self.vertical_plot_bounds = Some((-half_span, half_span));
        self.plot_revision = self.plot_revision.saturating_add(1);
    }

    /// Implements Ghidra function `FUN_01b58770` at `0x01B58770`.
    ///
    /// Runs the recovered XY Recorder show lifecycle. The saved height is
    /// requested only when the current width already equals the saved width
    /// and the current height differs. Both shared and recorder initialization
    /// markers are then set.
    pub const fn show(
        &mut self,
        current_width: u32,
        current_height: u32,
        saved_width: u32,
        saved_height: u32,
    ) {
        self.visible = true;
        self.show_lifecycle = ShowLifecycleState {
            shared_initialized: true,
            recorder_initialized: true,
            requested_height: if current_width == saved_width && current_height != saved_height {
                Some(saved_height)
            } else {
                None
            },
        };
    }

    /// Implements Ghidra function `FUN_01b5a400` at `0x01B5A400`.
    ///
    /// Applies the recovered shared measurement-window hide behavior by
    /// clearing the recorder visibility flag. Recorder data remains owned.
    pub const fn hide(&mut self) {
        self.visible = false;
    }

    /// Implements Ghidra function `FUN_01b58780` at `0x01B58780`.
    ///
    /// Frees an idle XY Recorder window. An active acquisition cancels the
    /// immediate close, marks a deferred close request, and invokes the normal
    /// stop path so completion can finish closing the window later.
    pub fn close(&mut self) -> RecorderCloseAction {
        if !self.acquisition_active {
            self.close_action = RecorderCloseAction::Free;
            return self.close_action;
        }
        self.close_action = RecorderCloseAction::None;
        self.close_after_stop_requested = true;
        self.stop_acquisition();
        self.close_action
    }

    /// Implements Ghidra function `FUN_01b5a150` at `0x01B5A150`.
    ///
    /// Preserves the caller's close decision during a normal window query.
    /// During application shutdown, it allows an idle recorder and blocks an
    /// active measurement instrument with a typed reason for the UI mapper.
    pub const fn query_close(
        &mut self,
        application_exiting: bool,
        current_decision: bool,
    ) -> CloseQueryResult {
        let result = if application_exiting {
            CloseQueryResult {
                allow_close: !self.acquisition_active,
                block: if self.acquisition_active {
                    Some(CloseQueryBlock::ActiveMeasurementInstrument)
                } else {
                    None
                },
            }
        } else {
            CloseQueryResult {
                allow_close: current_decision,
                block: None,
            }
        };
        self.last_close_query = Some(result);
        result
    }

    /// Implements Ghidra function `FUN_01b58df0` at `0x01B58DF0`.
    ///
    /// Increases the selected channel's vertical position by one quarter of
    /// its current scale, snaps the result to that step, rounds it to two
    /// significant digits, and mirrors it to the position edit. Plot state is
    /// not applied until the separate spin-button end event.
    pub fn increase_vertical_position(&mut self) {
        let Some(channel) = self
            .selected_channel
            .and_then(|index| self.channels.get_mut(index))
        else {
            return;
        };
        let step = channel.vertical_scale / 4.0;
        channel.vertical_position = snap_and_round(channel.vertical_position + step, step);
        self.displayed_vertical_position = channel.vertical_position;
    }

    /// Implements Ghidra function `FUN_01b58e50` at `0x01B58E50`.
    ///
    /// Decreases the selected channel's vertical position by one quarter of
    /// its current scale, snaps the result to that step, rounds it to two
    /// significant digits, and mirrors it to the position edit. Plot state is
    /// not applied until the separate spin-button end event.
    pub fn decrease_vertical_position(&mut self) {
        let Some(channel) = self
            .selected_channel
            .and_then(|index| self.channels.get_mut(index))
        else {
            return;
        };
        let step = channel.vertical_scale / 4.0;
        channel.vertical_position = snap_and_round(channel.vertical_position - step, step);
        self.displayed_vertical_position = channel.vertical_position;
    }

    /// Implements Ghidra function `FUN_01b59040` at `0x01B59040`.
    ///
    /// Applies the selected channel's edited vertical position to the plot
    /// after a vertical-position spin operation ends, then requests the
    /// recovered plot refresh. A missing selected channel has no effect.
    pub fn commit_vertical_position(&mut self) {
        let Some(channel) = self
            .selected_channel
            .and_then(|index| self.channels.get(index))
        else {
            return;
        };
        self.applied_vertical_position = Some(channel.vertical_position);
        self.plot_revision = self.plot_revision.saturating_add(1);
    }

    /// Implements Ghidra function `FUN_01b58fd0` at `0x01B58FD0`.
    ///
    /// Builds the recovered screen-paint sequence: clear the complete client
    /// rectangle to white, paint the recorder plot, update its readouts, and
    /// invalidate the optional front overlay when it is visible. Saturating
    /// bounds keep an empty Iced surface safe.
    pub const fn paint_screen(
        &mut self,
        width: u32,
        height: u32,
        front_overlay_visible: bool,
    ) -> ScreenPaintPlan {
        let plan = ScreenPaintPlan {
            right: width.saturating_sub(1),
            bottom: height.saturating_sub(1),
            background_rgb: 0xFF_FF_FF,
            paint_plot: true,
            paint_readouts: true,
            invalidate_front_overlay: front_overlay_visible,
        };
        self.last_screen_paint = Some(plan);
        plan
    }

    /// Implements Ghidra function `FUN_01b5a3f0` at `0x01B5A3F0`.
    ///
    /// Runs the recovered resize calculation after shared layout. It scales
    /// the recorder text metric and selects a plot top offset from the header
    /// controls. The plot offset remains absent when no plot is available.
    pub fn resize(&mut self, input: RecorderResizeInput) -> RecorderResizeLayout {
        let plot_top = match input.header_height {
            None => 24,
            Some(height) if input.compact_layout => height,
            Some(height) => round_ratio(height, 24, 10).saturating_add(round_ratio(
                input.reference_height,
                3,
                10,
            )),
        };
        let layout = RecorderResizeLayout {
            scaled_text_metric: round_ratio(input.ui_scale_percent, 4, 100),
            plot_top: input.plot_available.then_some(plot_top),
        };
        self.last_resize_layout = Some(layout);
        layout
    }

    /// Implements Ghidra function `FUN_01b5a410` at `0x01B5A410`.
    ///
    /// Applies the recovered recorder resize constraints. It checks the
    /// vertical content threshold, enforces a two-thirds reference width,
    /// preserves the content aspect ratio plus its header offset, and scales
    /// oversized results below the available screen height.
    pub fn can_resize(&mut self, input: RecorderCanResizeInput) -> RecorderCanResizeResult {
        let header_offset = input.content_bottom.saturating_sub(input.content_top);
        let enough_vertical = header_offset.saturating_mul(2) <= input.proposed_height;
        let mut result = RecorderCanResizeResult {
            width: input.proposed_width,
            height: input.proposed_height,
            allowed: input.proposed_width != input.current_width || enough_vertical,
        };
        if input.reference_width != 0 && input.reference_height != 0 && enough_vertical {
            let minimum_width = round_ratio(input.reference_width, 2, 3);
            result.width = result.width.max(minimum_width);
            result.height =
                round_ratio(input.reference_height, result.width, input.reference_width)
                    .saturating_add(header_offset);
            if result.height > input.available_screen_height {
                let limited_height = input.available_screen_height.saturating_sub(40);
                result.width = floor_ratio(result.width, limited_height, result.height);
                result.height = limited_height;
            }
        }
        self.last_can_resize = Some(result);
        result
    }

    /// Implements Ghidra function `FUN_01b5a430` at `0x01B5A430`.
    ///
    /// Routes a recorder-screen double click to the recovered axis or selected
    /// object property editor. Busy, missing-plot, locked-plot, and unsupported
    /// targets have no effect.
    pub const fn screen_double_clicked(
        &mut self,
        input: ScreenDoubleClickInput,
    ) -> ScreenDoubleClickAction {
        let action = route_measurement_surface_double_click(input);
        self.last_double_click_action = action;
        action
    }

    /// Implements Ghidra function `FUN_01b5a440` at `0x01B5A440`.
    ///
    /// Adapts the recorder screen's Iced pointer event to the shared diagram
    /// interaction host. The shared host owns selection, dragging, drawing,
    /// and object editing, so the complete event is forwarded unchanged.
    pub fn screen_mouse_down(
        &mut self,
        input: ScreenMouseDownInput,
        host: &mut impl RecorderScreenInteractionHost,
    ) {
        self.last_screen_mouse_down = Some(input);
        host.mouse_down(input);
    }

    /// Implements Ghidra function `FUN_01b5a470` at `0x01B5A470`.
    ///
    /// Adapts the recorder screen's Iced pointer event to the shared diagram
    /// interaction host. The shared host owns hover, dragging, selection,
    /// drawing, and object editing, so the complete event is forwarded unchanged.
    pub fn screen_mouse_move(
        &mut self,
        input: ScreenMouseMoveInput,
        host: &mut impl RecorderScreenInteractionHost,
    ) {
        self.last_screen_mouse_move = Some(input);
        host.mouse_move(input);
    }

    /// Implements Ghidra function `FUN_01b5a4a0` at `0x01B5A4A0`.
    ///
    /// Delegates pointer release to the shared diagram interaction host. The
    /// recovered adapter does not inspect or change the mouse event arguments.
    pub fn screen_mouse_up(&mut self, host: &mut impl RecorderScreenInteractionHost) {
        self.screen_mouse_up_count = self.screen_mouse_up_count.saturating_add(1);
        host.mouse_up();
    }

    /// Implements Ghidra function `FUN_01b58fe0` at `0x01B58FE0`.
    ///
    /// Saves the display-helper configuration, then releases recorder and
    /// shared measurement-window ownership. Rust drops the replaced vectors
    /// and optional results. The recovered handler does not create replacement
    /// resources.
    pub fn destroy(&mut self, host: &mut impl RecorderDestroyHost) {
        host.save_display_configuration();
        self.channels = Vec::new();
        self.curves = Vec::new();
        self.buffered_curve = None;
        self.latest_completed_curve = None;
        self.analysis_workspace_curve = None;
        self.backend_commands = Vec::new();
        self.plot_transfers = Vec::new();
        self.last_screen_paint = None;
        self.last_resize_layout = None;
        self.applied_vertical_position = None;
        self.vertical_plot_bounds = None;
        self.selected_channel = None;
        self.plot_selected_channel = None;
        self.x_source_count = 0;
        self.selected_x_source = None;
        self.acquisition_active = false;
        self.destroyed = true;
    }

    pub fn replace_curve_names(&mut self, curves: impl IntoIterator<Item = String>) {
        self.curves = curves.into_iter().collect();
    }

    pub fn set_buffered_curve(&mut self, curve: Option<RecordedCurve>) {
        self.buffered_curve = curve;
    }

    pub fn set_latest_completed_curve(&mut self, curve: Option<RecordedCurve>) {
        self.latest_completed_curve = curve;
    }

    pub const fn set_control_route(&mut self, route: ControlRoute) {
        self.route = route;
    }

    pub const fn set_mode_change_allowed(&mut self, allowed: bool) {
        self.mode_change_allowed = allowed;
    }

    pub const fn set_source_scales(&mut self, time_scale: f64, x_source_scale: f64) {
        self.stored_time_scale = time_scale;
        self.x_source_scale = x_source_scale;
    }

    pub fn set_horizontal_scale_steps(
        &mut self,
        time_steps: impl IntoIterator<Item = f64>,
        x_source_steps: impl IntoIterator<Item = f64>,
    ) {
        self.time_scale_steps = time_steps.into_iter().collect();
        self.x_source_scale_steps = x_source_steps.into_iter().collect();
    }

    /// Implements Ghidra function `FUN_01b5a240` at `0x01B5A240`.
    ///
    /// Moves to the next available X-sensitivity entry for the current plot
    /// mode. Y/T uses its fixed scale table and Y/X uses the selected source's
    /// scale table. The last entry is a no-op, and plot application waits for
    /// the separate spin-button end event.
    pub fn increase_x_sensitivity(&mut self) {
        let next_index = usize::from(self.horizontal_scale_index) + 1;
        let scale = match self.plot_mode {
            PlotMode::YOverTime => self.time_scale_steps.get(next_index),
            PlotMode::YOverX => self.x_source_scale_steps.get(next_index),
        };
        let Some(scale) = scale.copied() else {
            return;
        };
        let Ok(next_index) = u8::try_from(next_index) else {
            return;
        };
        self.horizontal_scale_index = next_index;
        self.horizontal_scale = scale;
        match self.plot_mode {
            PlotMode::YOverTime => self.stored_time_scale = scale,
            PlotMode::YOverX => self.x_source_scale = scale,
        }
    }

    /// Implements Ghidra function `FUN_01b5a330` at `0x01B5A330`.
    ///
    /// Moves to the preceding X-sensitivity entry for the current plot mode.
    /// Y/T uses its fixed scale table and Y/X uses the selected source's scale
    /// table. Index zero is a no-op, and plot application waits for the
    /// separate spin-button end event.
    pub fn decrease_x_sensitivity(&mut self) {
        if self.horizontal_scale_index == 0 {
            return;
        }
        let previous_index = usize::from(self.horizontal_scale_index - 1);
        let scale = match self.plot_mode {
            PlotMode::YOverTime => self.time_scale_steps.get(previous_index),
            PlotMode::YOverX => self.x_source_scale_steps.get(previous_index),
        };
        let Some(scale) = scale.copied() else {
            return;
        };
        self.horizontal_scale_index -= 1;
        self.horizontal_scale = scale;
        match self.plot_mode {
            PlotMode::YOverTime => self.stored_time_scale = scale,
            PlotMode::YOverX => self.x_source_scale = scale,
        }
    }

    /// Implements Ghidra function `FUN_01b583b0` at `0x01B583B0`.
    /// The XY Recorder data-load virtual slot is intentionally disabled.
    pub const fn load_data_provider(&mut self) {}

    /// Implements Ghidra function `FUN_01b583c0` at `0x01B583C0`.
    /// Returns and clears a completed curve only while acquisition is stopped.
    pub fn take_completed_curve_for_export(&mut self) -> Option<RecordedCurve> {
        if self.acquisition_active {
            return None;
        }
        let curve = self.buffered_curve.take()?;
        self.plot_transfers.push(PlotTransfer {
            curve_id: curve.id.clone(),
            mode_code: self.plot_mode.export_code(),
        });
        Some(curve)
    }

    /// Implements Ghidra function `FUN_01b58560` at `0x01B58560`.
    /// Applies the requested state to the selected channel and its plot entry.
    pub fn set_selected_channel_enabled(&mut self, enabled: bool) {
        self.channel_on = enabled;
        let Some(index) = self.selected_channel else {
            return;
        };
        let Some(channel) = self.channels.get_mut(index) else {
            return;
        };
        self.backend_commands
            .push(BackendCommand::SetChannel { index, enabled });
        if channel.active == enabled {
            return;
        }
        channel.active = enabled;
        channel.plot_attached = enabled;
        self.plot_revision = self.plot_revision.saturating_add(1);
    }

    /// Implements Ghidra function `FUN_01b58790` at `0x01B58790`.
    /// Starts an idle acquisition and resets its transient display state.
    pub fn start_acquisition(&mut self) {
        if self.acquisition_active {
            return;
        }
        self.backend_commands
            .push(BackendCommand::Start { code: 0x538 });
        if self.route == ControlRoute::Remote {
            return;
        }
        self.acquisition_active = true;
        self.buffered_curve = None;
        self.horizontal_position = 0.0;
        self.acquisition_controls_enabled = false;
        self.plot_refresh_suspended = true;
        self.stop_button_down = false;
    }

    /// Implements Ghidra function `FUN_01b58c00` at `0x01B58C00`.
    /// Stops acquisition, retains a completed result, and restores the controls.
    pub fn stop_acquisition(&mut self) {
        self.acquisition_active = false;
        self.stop_button_down = true;
        self.backend_commands.push(BackendCommand::Stop);
        self.plot_refresh_suspended = false;
        if let Some(curve) = self.latest_completed_curve.take() {
            self.buffered_curve = Some(curve);
        }
        for channel in &mut self.channels {
            channel.plot_attached = channel.active && channel.recorded_curve.is_some();
        }
        self.acquisition_controls_enabled = true;
        self.plot_revision = self.plot_revision.saturating_add(1);
    }

    /// Implements Ghidra function `FUN_01b58d30` at `0x01B58D30`.
    /// Clears plot attachments and rebuilds the recorder display.
    pub fn erase_display(&mut self) {
        self.backend_commands
            .push(BackendCommand::Erase { code: 0x539 });
        if self.route == ControlRoute::Remote {
            return;
        }
        self.erase_requested = true;
        for channel in &mut self.channels {
            channel.plot_attached = false;
        }
        self.plot_revision = self.plot_revision.saturating_add(1);
    }

    /// Implements Ghidra function `FUN_01b59c40` at `0x01B59C40`.
    /// Advances the selected cursor by one curve-list index with wraparound.
    pub fn select_following_curve(&mut self) {
        self.navigate_selected_cursor(1);
    }

    /// Implements Ghidra function `FUN_01b59c50` at `0x01B59C50`.
    /// Moves the selected cursor back one curve-list index with wraparound.
    pub fn select_preceding_curve(&mut self) {
        self.navigate_selected_cursor(0);
    }

    /// Implements Ghidra function `FUN_01b59c60` at `0x01B59C60`.
    /// Attaches or removes the selected plot cursor and refreshes its readout.
    pub fn set_selected_cursor_enabled(&mut self, enabled: bool) {
        self.cursor_on = enabled;
        self.backend_commands.push(BackendCommand::SetCursor {
            code: 0x53a,
            enabled,
        });
        if self.route == ControlRoute::Remote {
            return;
        }
        let first_curve = (!self.curves.is_empty()).then_some(0);
        let cursor = self.selected_cursor_mut();
        if cursor.active != enabled {
            cursor.active = enabled;
            if enabled && cursor.curve_index.is_none() {
                cursor.curve_index = first_curve;
            }
        }
        self.cursor_readout_revision = self.cursor_readout_revision.saturating_add(1);
    }

    /// Implements Ghidra function `FUN_01b59c70` at `0x01B59C70`.
    /// Selects cursor A and mirrors its state to the shared On control.
    pub const fn select_cursor_a(&mut self, selector_down: bool) {
        if selector_down {
            self.selected_cursor = CursorSelection::A;
            self.cursor_on = self.cursor_a.active;
        }
    }

    /// Implements Ghidra function `FUN_01b59c80` at `0x01B59C80`.
    /// Selects cursor B and mirrors its state to the shared On control.
    pub const fn select_cursor_b(&mut self, selector_down: bool) {
        if selector_down {
            self.selected_cursor = CursorSelection::B;
            self.cursor_on = self.cursor_b.active;
        }
    }

    /// Implements Ghidra function `FUN_01b59d80` at `0x01B59D80`.
    /// Derives five-division channel scales from usable recorded curve bounds.
    pub fn auto_scale(&mut self) {
        let mut horizontal_minimum = f64::INFINITY;
        let mut horizontal_maximum = f64::NEG_INFINITY;
        let mut usable_channel_found = false;
        for channel in &mut self.channels {
            let Some(curve) = channel
                .recorded_curve
                .as_ref()
                .filter(|_| channel.plot_attached)
            else {
                continue;
            };
            channel.vertical_scale = normalize_division(curve.bounds.vertical_span() / 5.0);
            channel.vertical_position = 0.0;
            horizontal_minimum = horizontal_minimum.min(curve.bounds.minimum_x);
            horizontal_maximum = horizontal_maximum.max(curve.bounds.maximum_x);
            usable_channel_found = true;
        }
        if !usable_channel_found {
            return;
        }
        if self.plot_mode == PlotMode::YOverX {
            self.horizontal_scale =
                normalize_division((horizontal_maximum - horizontal_minimum).abs() / 5.0);
            self.horizontal_position = 0.0;
        }
        self.plot_revision = self.plot_revision.saturating_add(1);
    }

    /// Implements Ghidra function `FUN_01b5a130` at `0x01B5A130`.
    /// Dispatches to the disabled XY Recorder data-load provider.
    pub const fn data_load_clicked(&mut self) {
        self.load_data_provider();
    }

    /// Implements Ghidra function `FUN_01b5a140` at `0x01B5A140`.
    /// Publishes a completed curve to the in-memory analysis workspace.
    pub fn data_save_clicked(&mut self) {
        let Some(curve) = self.take_completed_curve_for_export() else {
            return;
        };
        self.backend_commands.push(BackendCommand::PublishCurve {
            curve_id: curve.id.clone(),
        });
        self.analysis_workspace_curve = Some(curve);
        self.memory_writer_count = 2;
    }

    /// Implements Ghidra function `FUN_01b5a710` at `0x01B5A710`.
    /// Selects Y/T plotting, restores the time scale, and rebuilds plot state.
    pub fn select_y_over_time(&mut self) {
        self.switch_plot_mode(PlotMode::YOverTime);
    }

    /// Implements Ghidra function `FUN_01b5a890` at `0x01B5A890`.
    /// Selects Y/X plotting, applies the X-source scale, and rebuilds plot state.
    pub fn select_y_over_x(&mut self) {
        self.switch_plot_mode(PlotMode::YOverX);
    }

    fn navigate_selected_cursor(&mut self, direction: u8) {
        self.backend_commands.push(BackendCommand::NavigateCurve {
            code: 0x53b,
            direction,
        });
        if self.route == ControlRoute::Remote || self.curves.is_empty() {
            return;
        }
        let curve_count = self.curves.len();
        let cursor = self.selected_cursor_mut();
        let Some(current) = cursor.curve_index.filter(|index| *index < curve_count) else {
            return;
        };
        cursor.curve_index = Some(if direction == 1 {
            (current + 1) % curve_count
        } else {
            (current + curve_count - 1) % curve_count
        });
        cursor.cache_valid = true;
        self.cursor_readout_revision = self.cursor_readout_revision.saturating_add(1);
    }

    fn cursor_mouse_down(&mut self, direction: CursorMoveDirection, primary_button: bool) {
        if !primary_button {
            return;
        }
        self.cursor_repeat = CursorRepeatState {
            direction: Some(direction),
            delay_ms: 300,
            step: 1,
        };
        let delta = match direction {
            CursorMoveDirection::Left => -1.0,
            CursorMoveDirection::Right => 1.0,
        };
        let cursor = self.selected_cursor_mut();
        cursor.position += delta;
        cursor.cache_valid = false;
        self.cursor_readout_revision = self.cursor_readout_revision.saturating_add(1);
    }

    fn cursor_mouse_up(&mut self, direction: CursorMoveDirection, primary_button: bool) {
        if !primary_button {
            return;
        }
        self.cursor_repeat = CursorRepeatState::default();
        self.last_cursor_release = Some(direction);
    }

    fn refresh_horizontal_bounds(&mut self) {
        let half_span = self.horizontal_scale * 5.0;
        self.horizontal_plot_bounds = Some((
            -half_span - self.horizontal_position,
            half_span - self.horizontal_position,
        ));
        self.plot_revision = self.plot_revision.saturating_add(1);
    }

    fn switch_plot_mode(&mut self, mode: PlotMode) {
        if self.plot_mode == mode {
            return;
        }
        self.backend_commands
            .push(BackendCommand::RequestMode(mode));
        if !self.mode_change_allowed {
            return;
        }
        if self.acquisition_active {
            self.stop_acquisition();
        }
        self.plot_mode = mode;
        self.horizontal_scale = normalize_division(match mode {
            PlotMode::YOverTime => self.stored_time_scale,
            PlotMode::YOverX => self.x_source_scale,
        });
        self.horizontal_position = 0.0;
        for channel in &mut self.channels {
            channel.plot_attached = channel.active && channel.recorded_curve.is_some();
        }
        self.cursor_a.cache_valid = false;
        self.cursor_b.cache_valid = false;
        self.plot_revision = self.plot_revision.saturating_add(1);
    }

    const fn selected_cursor_mut(&mut self) -> &mut PlotCursor {
        match self.selected_cursor {
            CursorSelection::A => &mut self.cursor_a,
            CursorSelection::B => &mut self.cursor_b,
        }
    }

    #[must_use]
    pub const fn channel_on(&self) -> bool {
        self.channel_on
    }

    #[must_use]
    pub const fn cursor_on(&self) -> bool {
        self.cursor_on
    }

    #[must_use]
    pub const fn cursor_repeat(&self) -> CursorRepeatState {
        self.cursor_repeat
    }

    #[must_use]
    pub const fn last_cursor_release(&self) -> Option<CursorMoveDirection> {
        self.last_cursor_release
    }

    #[must_use]
    pub const fn plot_mode(&self) -> PlotMode {
        self.plot_mode
    }

    #[must_use]
    pub const fn acquisition_active(&self) -> bool {
        self.acquisition_active
    }

    #[must_use]
    pub const fn selected_channel(&self) -> Option<usize> {
        self.selected_channel
    }

    #[must_use]
    pub const fn selected_x_source(&self) -> Option<usize> {
        self.selected_x_source
    }

    #[must_use]
    pub const fn selected_recording_mode(&self) -> Option<RecordingMode> {
        self.selected_recording_mode
    }

    #[must_use]
    pub const fn recording_interval_index(&self) -> u8 {
        self.recording_interval_index
    }

    #[must_use]
    pub const fn recording_interval(&self) -> f64 {
        self.recording_interval
    }

    #[must_use]
    pub fn recording_interval_text(&self) -> &str {
        &self.recording_interval_text
    }

    #[must_use]
    pub const fn plot_selected_channel(&self) -> Option<usize> {
        self.plot_selected_channel
    }

    #[must_use]
    pub const fn displayed_vertical_scale_index(&self) -> u8 {
        self.displayed_vertical_scale_index
    }

    #[must_use]
    pub const fn channel_control_enabled(&self) -> bool {
        self.channel_control_enabled
    }

    #[must_use]
    pub const fn displayed_vertical_scale(&self) -> f64 {
        self.displayed_vertical_scale
    }

    #[must_use]
    pub const fn displayed_vertical_position(&self) -> f64 {
        self.displayed_vertical_position
    }

    #[must_use]
    pub const fn applied_vertical_position(&self) -> Option<f64> {
        self.applied_vertical_position
    }

    #[must_use]
    pub const fn vertical_plot_bounds(&self) -> Option<(f64, f64)> {
        self.vertical_plot_bounds
    }

    #[must_use]
    pub const fn horizontal_plot_bounds(&self) -> Option<(f64, f64)> {
        self.horizontal_plot_bounds
    }

    #[must_use]
    pub const fn displayed_horizontal_position(&self) -> f64 {
        self.displayed_horizontal_position
    }

    #[must_use]
    pub const fn horizontal_scale_index(&self) -> u8 {
        self.horizontal_scale_index
    }

    #[must_use]
    pub const fn show_lifecycle(&self) -> ShowLifecycleState {
        self.show_lifecycle
    }

    #[must_use]
    pub const fn creation_state(&self) -> RecorderCreationState {
        self.creation_state
    }

    #[must_use]
    pub const fn close_after_stop_requested(&self) -> bool {
        self.close_after_stop_requested
    }

    #[must_use]
    pub const fn close_action(&self) -> RecorderCloseAction {
        self.close_action
    }

    #[must_use]
    pub const fn last_close_query(&self) -> Option<CloseQueryResult> {
        self.last_close_query
    }

    #[must_use]
    pub const fn last_screen_paint(&self) -> Option<ScreenPaintPlan> {
        self.last_screen_paint
    }

    #[must_use]
    pub const fn last_resize_layout(&self) -> Option<RecorderResizeLayout> {
        self.last_resize_layout
    }

    #[must_use]
    pub const fn last_can_resize(&self) -> Option<RecorderCanResizeResult> {
        self.last_can_resize
    }

    #[must_use]
    pub const fn last_double_click_action(&self) -> ScreenDoubleClickAction {
        self.last_double_click_action
    }

    #[must_use]
    pub const fn last_screen_mouse_down(&self) -> Option<ScreenMouseDownInput> {
        self.last_screen_mouse_down
    }

    #[must_use]
    pub const fn last_screen_mouse_move(&self) -> Option<ScreenMouseMoveInput> {
        self.last_screen_mouse_move
    }

    #[must_use]
    pub const fn screen_mouse_up_count(&self) -> u64 {
        self.screen_mouse_up_count
    }

    #[must_use]
    pub const fn visible(&self) -> bool {
        self.visible
    }

    #[must_use]
    pub const fn destroyed(&self) -> bool {
        self.destroyed
    }

    #[must_use]
    pub fn channel_count(&self) -> usize {
        self.channels.len()
    }
}

fn normalize_division(value: f64) -> f64 {
    if !value.is_finite() || value <= 0.0 {
        return 1.0;
    }
    let magnitude = 10.0_f64.powf(value.log10().floor());
    let fraction = value / magnitude;
    let normalized = if fraction <= 1.0 {
        1.0
    } else if fraction <= 2.0 {
        2.0
    } else if fraction <= 5.0 {
        5.0
    } else {
        10.0
    };
    normalized * magnitude
}

fn round_ratio(value: u32, numerator: u32, denominator: u32) -> u32 {
    let scaled = u64::from(value)
        .saturating_mul(u64::from(numerator))
        .saturating_add(u64::from(denominator) / 2)
        / u64::from(denominator);
    u32::try_from(scaled).unwrap_or(u32::MAX)
}

fn floor_ratio(value: u32, numerator: u32, denominator: u32) -> u32 {
    let scaled = u64::from(value).saturating_mul(u64::from(numerator)) / u64::from(denominator);
    u32::try_from(scaled).unwrap_or(u32::MAX)
}

fn snap_and_round(value: f64, step: f64) -> f64 {
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

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Default)]
    struct DestroyHost(usize);

    impl RecorderDestroyHost for DestroyHost {
        fn save_display_configuration(&mut self) {
            self.0 += 1;
        }
    }

    #[derive(Default)]
    struct ScreenHost {
        down: Option<ScreenMouseDownInput>,
        movement: Option<ScreenMouseMoveInput>,
        up_count: u64,
    }

    impl RecorderScreenInteractionHost for ScreenHost {
        fn mouse_down(&mut self, input: ScreenMouseDownInput) {
            self.down = Some(input);
        }

        fn mouse_move(&mut self, input: ScreenMouseMoveInput) {
            self.movement = Some(input);
        }

        fn mouse_up(&mut self) {
            self.up_count += 1;
        }
    }

    fn curve(id: &str, bounds: CurveBounds) -> RecordedCurve {
        RecordedCurve::new(id, bounds)
    }

    fn assert_close(actual: f64, expected: f64) {
        assert!((actual - expected).abs() < 1.0e-12);
    }

    #[test]
    fn load_is_a_noop_and_stopped_save_publishes_in_memory() {
        let mut state = RecorderState {
            buffered_curve: Some(curve("xy", CurveBounds::new(-2.0, 2.0, -3.0, 3.0))),
            ..RecorderState::default()
        };
        state.load_data_provider();
        state.data_load_clicked();
        assert_eq!(
            state.buffered_curve.as_ref().map(|curve| curve.id.as_str()),
            Some("xy")
        );

        state.acquisition_active = true;
        assert!(state.take_completed_curve_for_export().is_none());
        state.acquisition_active = false;
        state.plot_mode = PlotMode::YOverX;
        state.data_save_clicked();
        assert_eq!(
            state
                .analysis_workspace_curve
                .as_ref()
                .map(|curve| curve.id.as_str()),
            Some("xy")
        );
        assert_eq!(state.memory_writer_count, 2);
        assert_eq!(state.plot_transfers[0].mode_code, 0x0c);
    }

    #[test]
    fn create_initializes_supported_model_and_keeps_unknown_model_explicit() {
        let mut state = RecorderState::default();
        let outcome = state.create(RecorderCreationConfig {
            model_kind: RecorderModelKind::Alternate,
            channels: Vec::new(),
            x_source_count: 0,
            time_scale: 2.0,
            x_source_scale: 2.0,
            horizontal_position: 0.6,
        });

        assert_eq!(outcome, RecorderCreationOutcome::Initialized);
        assert_eq!(state.channel_count(), 1);
        assert_eq!(state.selected_channel(), Some(0));
        assert_eq!(
            state.creation_state(),
            RecorderCreationState {
                shared_initialized: true,
                model_initialized: true,
                bitmap_resource_selected: true,
                timer_interval_ms: 24,
                y_channel_count: 1,
                x_source_count: 1,
            }
        );
        assert_close(state.horizontal_position, 0.5);
        assert_eq!(state.plot_revision, 1);

        let outcome = state.create(RecorderCreationConfig {
            model_kind: RecorderModelKind::Unsupported(3),
            channels: Vec::new(),
            x_source_count: 0,
            time_scale: 1.0,
            x_source_scale: 1.0,
            horizontal_position: 0.0,
        });
        assert_eq!(outcome, RecorderCreationOutcome::UnsupportedModel);
        assert!(state.creation_state().shared_initialized);
        assert!(!state.creation_state().model_initialized);
    }

    #[test]
    fn horizontal_position_enter_snaps_value_and_rebuilds_plot_bounds() {
        let mut state = RecorderState {
            horizontal_scale: 2.0,
            ..RecorderState::default()
        };

        assert!(!state.horizontal_position_key_pressed('x', "0.6"));
        assert_eq!(state.plot_revision, 0);
        assert!(state.horizontal_position_key_pressed('\r', "0.6"));
        assert_close(state.horizontal_position, 0.5);
        assert_eq!(state.horizontal_plot_bounds(), Some((-10.5, 9.5)));
        assert_eq!(state.plot_revision, 1);

        assert!(state.horizontal_position_key_pressed('\r', "not a number"));
        assert_eq!(state.plot_revision, 1);
    }

    #[test]
    fn horizontal_position_exit_uses_enter_commit_path() {
        let mut state = RecorderState {
            horizontal_scale: 4.0,
            ..RecorderState::default()
        };

        state.horizontal_position_edit_exited("1.4");

        assert_close(state.horizontal_position, 1.0);
        assert_eq!(state.horizontal_plot_bounds(), Some((-21.0, 19.0)));
        assert_eq!(state.plot_revision, 1);
    }

    #[test]
    fn horizontal_position_error_restores_last_accepted_value() {
        let mut state = RecorderState {
            horizontal_position: -2.5,
            displayed_horizontal_position: 99.0,
            plot_revision: 7,
            ..RecorderState::default()
        };

        state.restore_horizontal_position_after_error();

        assert_close(state.displayed_horizontal_position(), -2.5);
        assert_eq!(state.plot_revision, 7);
    }

    #[test]
    fn horizontal_position_spin_end_rebuilds_bounds_and_refreshes_plot() {
        let mut state = RecorderState {
            horizontal_scale: 0.5,
            horizontal_position: -1.0,
            ..RecorderState::default()
        };

        state.commit_horizontal_position();

        assert_eq!(state.horizontal_plot_bounds(), Some((-1.5, 3.5)));
        assert_eq!(state.plot_revision, 1);
    }

    #[test]
    fn horizontal_position_down_snaps_and_waits_for_end_event() {
        let mut state = RecorderState {
            horizontal_scale: 2.0,
            horizontal_position: -0.6,
            ..RecorderState::default()
        };

        state.decrease_horizontal_position();

        assert_close(state.horizontal_position, -1.0);
        assert_close(state.displayed_horizontal_position(), -1.0);
        assert!(state.horizontal_plot_bounds().is_none());
        assert_eq!(state.plot_revision, 0);
    }

    #[test]
    fn horizontal_position_up_snaps_and_waits_for_end_event() {
        let mut state = RecorderState {
            horizontal_scale: 2.0,
            horizontal_position: 0.6,
            ..RecorderState::default()
        };

        state.increase_horizontal_position();

        assert_close(state.horizontal_position, 1.0);
        assert_close(state.displayed_horizontal_position(), 1.0);
        assert!(state.horizontal_plot_bounds().is_none());
        assert_eq!(state.plot_revision, 0);
    }

    #[test]
    fn x_sensitivity_end_rebuilds_horizontal_bounds_and_refreshes_plot() {
        let mut state = RecorderState {
            horizontal_scale: 0.2,
            horizontal_position: 0.5,
            ..RecorderState::default()
        };

        state.commit_x_sensitivity();

        assert_eq!(state.horizontal_plot_bounds(), Some((-1.5, 0.5)));
        assert_eq!(state.plot_revision, 1);
    }

    #[test]
    fn x_sensitivity_up_uses_current_mode_table_and_stops_at_last_entry() {
        let mut state = RecorderState::default();
        state.set_horizontal_scale_steps([0.1, 0.2], [1.0, 2.0, 5.0]);

        state.increase_x_sensitivity();
        assert_eq!(state.horizontal_scale_index(), 1);
        assert_close(state.horizontal_scale, 0.2);
        assert_close(state.stored_time_scale, 0.2);
        state.increase_x_sensitivity();
        assert_eq!(state.horizontal_scale_index(), 1);

        state.plot_mode = PlotMode::YOverX;
        state.increase_x_sensitivity();
        assert_eq!(state.horizontal_scale_index(), 2);
        assert_close(state.horizontal_scale, 5.0);
        assert_close(state.x_source_scale, 5.0);
        assert_eq!(state.plot_revision, 0);
    }

    #[test]
    fn x_sensitivity_down_uses_current_mode_table_and_stops_at_zero() {
        let mut state = RecorderState {
            horizontal_scale_index: 2,
            horizontal_scale: 0.5,
            ..RecorderState::default()
        };
        state.set_horizontal_scale_steps([0.1, 0.2, 0.5], [1.0, 2.0, 5.0]);

        state.decrease_x_sensitivity();
        assert_eq!(state.horizontal_scale_index(), 1);
        assert_close(state.horizontal_scale, 0.2);
        state.decrease_x_sensitivity();
        state.decrease_x_sensitivity();
        assert_eq!(state.horizontal_scale_index(), 0);
        assert_close(state.stored_time_scale, 0.1);

        state.plot_mode = PlotMode::YOverX;
        state.horizontal_scale_index = 2;
        state.decrease_x_sensitivity();
        assert_eq!(state.horizontal_scale_index(), 1);
        assert_close(state.x_source_scale, 2.0);
        assert_eq!(state.plot_revision, 0);
    }

    #[test]
    fn cursor_left_mouse_down_moves_once_and_starts_repeat_delay() {
        let mut state = RecorderState::default();
        state.cursor_a.position = 4.0;

        state.cursor_left_mouse_down(false);
        assert_close(state.cursor_a.position, 4.0);

        state.cursor_left_mouse_down(true);
        assert_close(state.cursor_a.position, 3.0);
        assert!(!state.cursor_a.cache_valid);
        assert_eq!(
            state.cursor_repeat(),
            CursorRepeatState {
                direction: Some(CursorMoveDirection::Left),
                delay_ms: 300,
                step: 1,
            }
        );
        assert_eq!(state.cursor_readout_revision, 1);
    }

    #[test]
    fn cursor_right_mouse_down_moves_once_and_starts_repeat_delay() {
        let mut state = RecorderState::default();
        state.cursor_a.position = -2.0;

        state.cursor_right_mouse_down(false);
        assert_close(state.cursor_a.position, -2.0);

        state.cursor_right_mouse_down(true);
        assert_close(state.cursor_a.position, -1.0);
        assert_eq!(
            state.cursor_repeat(),
            CursorRepeatState {
                direction: Some(CursorMoveDirection::Right),
                delay_ms: 300,
                step: 1,
            }
        );
        assert_eq!(state.cursor_readout_revision, 1);
    }

    #[test]
    fn cursor_right_mouse_up_cancels_repeat_and_forwards_primary_release() {
        let mut state = RecorderState::default();
        state.cursor_right_mouse_down(true);

        state.cursor_right_mouse_up(false);
        assert_eq!(
            state.cursor_repeat().direction,
            Some(CursorMoveDirection::Right)
        );

        state.cursor_right_mouse_up(true);
        assert_eq!(state.cursor_repeat(), CursorRepeatState::default());
        assert_eq!(
            state.last_cursor_release(),
            Some(CursorMoveDirection::Right)
        );
    }

    #[test]
    fn cursor_left_mouse_up_cancels_repeat_and_forwards_primary_release() {
        let mut state = RecorderState::default();
        state.cursor_left_mouse_down(true);

        state.cursor_left_mouse_up(false);
        assert_eq!(
            state.cursor_repeat().direction,
            Some(CursorMoveDirection::Left)
        );

        state.cursor_left_mouse_up(true);
        assert_eq!(state.cursor_repeat(), CursorRepeatState::default());
        assert_eq!(state.last_cursor_release(), Some(CursorMoveDirection::Left));
    }

    #[test]
    fn x_source_selection_updates_model_only_for_a_different_valid_item() {
        let mut state = RecorderState {
            x_source_count: 3,
            selected_x_source: Some(0),
            acquisition_controls_enabled: false,
            ..RecorderState::default()
        };

        state.select_x_source(None);
        state.select_x_source(Some(3));
        state.select_x_source(Some(0));
        assert!(state.backend_commands.is_empty());
        assert!(!state.acquisition_controls_enabled);

        state.select_x_source(Some(2));
        assert_eq!(state.selected_x_source(), Some(2));
        assert!(state.acquisition_controls_enabled);
        assert_eq!(
            state.backend_commands,
            vec![BackendCommand::SelectXSource { index: 2 }]
        );
    }

    #[test]
    fn recording_mode_change_forwards_typed_and_empty_selections() {
        let mut state = RecorderState::default();

        state.select_recording_mode(Some(RecordingMode::Rms));
        state.select_recording_mode(None);

        assert_eq!(state.selected_recording_mode(), None);
        assert_eq!(
            state.backend_commands,
            vec![
                BackendCommand::SetRecordingMode {
                    mode: Some(RecordingMode::Rms),
                },
                BackendCommand::SetRecordingMode { mode: None },
            ]
        );
    }

    #[test]
    fn recording_interval_up_advances_model_and_refreshes_edit_text() {
        let mut state = RecorderState::default();
        state.set_recording_interval_steps([0.01, 0.1]);

        state.increase_recording_interval();

        assert_eq!(state.recording_interval_index(), 1);
        assert_close(state.recording_interval(), 0.1);
        assert_eq!(state.recording_interval_text(), "100m");
        assert_eq!(
            state.backend_commands,
            vec![BackendCommand::SetRecordingIntervalIndex { index: 1 }]
        );

        state.increase_recording_interval();
        assert_eq!(state.backend_commands.len(), 1);
    }

    #[test]
    fn recording_interval_down_updates_model_and_stops_at_zero() {
        let mut state = RecorderState::default();
        state.set_recording_interval_steps([0.01, 0.1]);
        state.increase_recording_interval();
        state.backend_commands.clear();

        state.decrease_recording_interval();

        assert_eq!(state.recording_interval_index(), 0);
        assert_close(state.recording_interval(), 0.01);
        assert_eq!(state.recording_interval_text(), "10m");
        assert_eq!(
            state.backend_commands,
            vec![BackendCommand::SetRecordingIntervalIndex { index: 0 }]
        );

        state.decrease_recording_interval();
        assert_eq!(state.backend_commands.len(), 1);
    }

    #[test]
    fn recording_interval_enter_parses_snaps_and_normalizes_text() {
        let mut state = RecorderState::default();
        state.set_recording_interval_steps([0.01, 0.1, 1.0]);

        assert!(!state.recording_interval_key_pressed('x', "90m"));
        assert!(state.recording_interval_key_pressed('\r', "90m"));

        assert_eq!(state.recording_interval_index(), 1);
        assert_close(state.recording_interval(), 0.1);
        assert_eq!(state.recording_interval_text(), "100m");
        assert_eq!(
            state.backend_commands,
            vec![BackendCommand::SetRecordingIntervalIndex { index: 1 }]
        );

        assert!(state.recording_interval_key_pressed('\r', "invalid"));
        assert!(state.recording_interval_key_pressed('\r', "-1"));
        assert_eq!(state.backend_commands.len(), 1);
    }

    #[test]
    fn recording_interval_exit_uses_the_enter_commit_path() {
        let mut state = RecorderState::default();
        state.set_recording_interval_steps([0.01, 0.1, 1.0]);

        state.recording_interval_edit_exited("900m");

        assert_eq!(state.recording_interval_index(), 2);
        assert_close(state.recording_interval(), 1.0);
        assert_eq!(state.recording_interval_text(), "1");
        assert_eq!(
            state.backend_commands,
            vec![BackendCommand::SetRecordingIntervalIndex { index: 2 }]
        );
    }

    #[test]
    fn recording_interval_error_restores_current_model_value_without_command() {
        let mut state = RecorderState::default();
        state.set_recording_interval_steps([0.01, 0.1]);
        state.increase_recording_interval();
        state.backend_commands.clear();
        state.recording_interval = 99.0;
        state.recording_interval_text = "invalid".to_owned();

        state.restore_recording_interval_after_error();

        assert_close(state.recording_interval(), 0.1);
        assert_eq!(state.recording_interval_text(), "100m");
        assert!(state.backend_commands.is_empty());
    }

    #[test]
    fn channel_toggle_avoids_repeated_plot_work() {
        let mut state = RecorderState::default();
        state.set_selected_channel_enabled(true);
        state.set_selected_channel_enabled(true);
        assert!(state.channels[0].plot_attached);
        assert_eq!(state.plot_revision, 1);
        assert_eq!(state.backend_commands.len(), 2);
        state.set_selected_channel_enabled(false);
        assert!(!state.channels[0].plot_attached);
    }

    #[test]
    fn channel_combo_selection_mirrors_channel_and_applies_shared_on_state() {
        let mut state = RecorderState {
            channels: vec![
                RecorderChannel::default(),
                RecorderChannel {
                    vertical_scale_index: 1,
                    vertical_scale_steps: vec![0.001, 0.002],
                    vertical_scale: 0.002,
                    vertical_position: -1.5,
                    ..RecorderChannel::default()
                },
            ],
            channel_on: false,
            ..RecorderState::default()
        };

        state.select_y_channel_from_combo(Some(1));

        assert_eq!(state.selected_channel(), Some(1));
        assert_eq!(state.plot_selected_channel(), Some(1));
        assert_eq!(state.displayed_vertical_scale_index(), 1);
        assert!(state.channel_control_enabled());
        assert_close(state.displayed_vertical_scale(), 0.002);
        assert_close(state.displayed_vertical_position(), -1.5);
        assert!(!state.channels[1].active);
        assert_eq!(
            state.backend_commands.last(),
            Some(&BackendCommand::SetChannel {
                index: 1,
                enabled: false,
            })
        );

        let revision = state.plot_revision;
        state.select_y_channel_from_combo(None);
        state.select_y_channel_from_combo(Some(5));
        assert_eq!(state.plot_revision, revision);
    }

    #[test]
    fn sensitivity_down_selects_previous_scale_and_stops_at_zero() {
        let mut state = RecorderState {
            channels: vec![RecorderChannel {
                vertical_scale_index: 2,
                vertical_scale_steps: vec![0.001, 0.002, 0.005],
                vertical_scale: 0.005,
                ..RecorderChannel::default()
            }],
            ..RecorderState::default()
        };

        state.decrease_y_sensitivity();
        assert_eq!(state.displayed_vertical_scale_index(), 1);
        assert_close(state.displayed_vertical_scale(), 0.002);
        assert_eq!(state.plot_revision, 1);

        state.decrease_y_sensitivity();
        state.decrease_y_sensitivity();
        assert_eq!(state.displayed_vertical_scale_index(), 0);
        assert_close(state.displayed_vertical_scale(), 0.001);
        assert_eq!(state.plot_revision, 2);
    }

    #[test]
    fn sensitivity_up_selects_next_scale_and_stops_at_last_step() {
        let mut state = RecorderState {
            channels: vec![RecorderChannel {
                vertical_scale_index: 0,
                vertical_scale_steps: vec![0.001, 0.002],
                vertical_scale: 0.001,
                ..RecorderChannel::default()
            }],
            ..RecorderState::default()
        };

        state.increase_y_sensitivity();
        assert_eq!(state.displayed_vertical_scale_index(), 1);
        assert_close(state.displayed_vertical_scale(), 0.002);
        assert_eq!(state.plot_revision, 1);

        state.increase_y_sensitivity();
        assert_eq!(state.displayed_vertical_scale_index(), 1);
        assert_eq!(state.plot_revision, 1);
    }

    #[test]
    fn sensitivity_end_applies_ten_division_bounds_and_refreshes_plot() {
        let mut state = RecorderState {
            channels: vec![RecorderChannel {
                vertical_scale: 0.2,
                ..RecorderChannel::default()
            }],
            ..RecorderState::default()
        };

        state.commit_y_sensitivity();

        assert_eq!(state.vertical_plot_bounds(), Some((-1.0, 1.0)));
        assert_eq!(state.plot_revision, 1);

        state.select_channel(None);
        state.commit_y_sensitivity();
        assert_eq!(state.plot_revision, 1);
    }

    #[test]
    fn show_restores_only_height_for_matching_saved_width() {
        let mut state = RecorderState::default();

        state.show(554, 373, 554, 400);

        assert_eq!(
            state.show_lifecycle(),
            ShowLifecycleState {
                shared_initialized: true,
                recorder_initialized: true,
                requested_height: Some(400),
            }
        );

        state.show(600, 373, 554, 400);
        assert_eq!(state.show_lifecycle().requested_height, None);
    }

    #[test]
    fn hide_clears_visibility_without_releasing_recorder_data() {
        let mut state = RecorderState::default();
        state.show(554, 373, 554, 373);
        assert!(state.visible());

        state.hide();

        assert!(!state.visible());
        assert_eq!(state.channel_count(), 1);
        assert!(!state.destroyed());
    }

    #[test]
    fn close_frees_idle_window_and_defers_active_window_until_stop() {
        let mut idle = RecorderState::default();
        assert_eq!(idle.close(), RecorderCloseAction::Free);
        assert!(!idle.close_after_stop_requested());

        let mut active = RecorderState {
            acquisition_active: true,
            ..RecorderState::default()
        };
        assert_eq!(active.close(), RecorderCloseAction::None);
        assert!(active.close_after_stop_requested());
        assert!(!active.acquisition_active());
        assert_eq!(active.backend_commands.last(), Some(&BackendCommand::Stop));
    }

    #[test]
    fn close_query_blocks_only_active_instrument_during_application_exit() {
        let mut state = RecorderState {
            acquisition_active: true,
            ..RecorderState::default()
        };

        assert_eq!(
            state.query_close(false, true),
            CloseQueryResult {
                allow_close: true,
                block: None,
            }
        );
        assert_eq!(
            state.query_close(true, true),
            CloseQueryResult {
                allow_close: false,
                block: Some(CloseQueryBlock::ActiveMeasurementInstrument),
            }
        );

        state.acquisition_active = false;
        let result = state.query_close(true, false);
        assert!(result.allow_close);
        assert_eq!(state.last_close_query(), Some(result));
    }

    #[test]
    fn vertical_position_up_snaps_and_waits_for_end_event_to_refresh_plot() {
        let mut state = RecorderState {
            channels: vec![RecorderChannel {
                vertical_scale: 2.0,
                vertical_position: 0.6,
                ..RecorderChannel::default()
            }],
            ..RecorderState::default()
        };

        state.increase_vertical_position();

        assert_close(state.channels[0].vertical_position, 1.0);
        assert_close(state.displayed_vertical_position(), 1.0);
        assert_eq!(state.plot_revision, 0);
    }

    #[test]
    fn vertical_position_down_snaps_and_waits_for_end_event_to_refresh_plot() {
        let mut state = RecorderState {
            channels: vec![RecorderChannel {
                vertical_scale: 2.0,
                vertical_position: -0.6,
                ..RecorderChannel::default()
            }],
            ..RecorderState::default()
        };

        state.decrease_vertical_position();

        assert_close(state.channels[0].vertical_position, -1.0);
        assert_close(state.displayed_vertical_position(), -1.0);
        assert_eq!(state.plot_revision, 0);
    }

    #[test]
    fn vertical_position_end_applies_value_and_refreshes_plot() {
        let mut state = RecorderState {
            channels: vec![RecorderChannel {
                vertical_position: -1.25,
                ..RecorderChannel::default()
            }],
            ..RecorderState::default()
        };

        state.commit_vertical_position();

        assert_eq!(state.applied_vertical_position(), Some(-1.25));
        assert_eq!(state.plot_revision, 1);

        state.select_channel(None);
        state.commit_vertical_position();
        assert_eq!(state.plot_revision, 1);
    }

    #[test]
    fn screen_paint_clears_full_surface_and_invalidates_visible_overlay() {
        let mut state = RecorderState::default();

        let plan = state.paint_screen(305, 279, true);

        assert_eq!(
            plan,
            ScreenPaintPlan {
                right: 304,
                bottom: 278,
                background_rgb: 0xFF_FF_FF,
                paint_plot: true,
                paint_readouts: true,
                invalidate_front_overlay: true,
            }
        );
        assert_eq!(state.last_screen_paint(), Some(plan));

        assert_eq!(state.paint_screen(0, 0, false).right, 0);
    }

    #[test]
    fn resize_calculates_scaled_metric_and_available_plot_offset() {
        let mut state = RecorderState::default();

        assert_eq!(
            state.resize(RecorderResizeInput {
                ui_scale_percent: 150,
                header_height: None,
                compact_layout: false,
                reference_height: 20,
                plot_available: true,
            }),
            RecorderResizeLayout {
                scaled_text_metric: 6,
                plot_top: Some(24),
            }
        );
        assert_eq!(
            state
                .resize(RecorderResizeInput {
                    ui_scale_percent: 100,
                    header_height: Some(10),
                    compact_layout: false,
                    reference_height: 20,
                    plot_available: true,
                })
                .plot_top,
            Some(30)
        );
        assert_eq!(
            state
                .resize(RecorderResizeInput {
                    ui_scale_percent: 100,
                    header_height: Some(10),
                    compact_layout: true,
                    reference_height: 20,
                    plot_available: false,
                })
                .plot_top,
            None
        );
        assert_eq!(
            state.last_resize_layout(),
            Some(RecorderResizeLayout {
                scaled_text_metric: 4,
                plot_top: None,
            })
        );
    }

    #[test]
    fn can_resize_enforces_content_aspect_and_screen_height() {
        let mut state = RecorderState::default();
        let base = RecorderCanResizeInput {
            proposed_width: 400,
            proposed_height: 500,
            current_width: 400,
            content_bottom: 150,
            content_top: 100,
            reference_width: 900,
            reference_height: 600,
            available_screen_height: 1_000,
        };

        let constrained = state.can_resize(base);
        assert_eq!(
            constrained,
            RecorderCanResizeResult {
                width: 600,
                height: 450,
                allowed: true,
            }
        );

        let rejected = state.can_resize(RecorderCanResizeInput {
            proposed_height: 50,
            ..base
        });
        assert!(!rejected.allowed);
        assert_eq!((rejected.width, rejected.height), (400, 50));

        let limited = state.can_resize(RecorderCanResizeInput {
            proposed_width: 900,
            proposed_height: 500,
            available_screen_height: 400,
            ..base
        });
        assert_eq!((limited.width, limited.height), (498, 360));
        assert_eq!(state.last_can_resize(), Some(limited));
    }

    #[test]
    fn screen_double_click_routes_editable_targets_and_honors_guards() {
        let mut state = RecorderState::default();
        let input = ScreenDoubleClickInput {
            busy: false,
            plot_available: true,
            plot_locked: false,
            target: ScreenHitTarget::DiagramText,
        };

        assert_eq!(
            state.screen_double_clicked(input),
            ScreenDoubleClickAction::EditDiagramText
        );
        assert_eq!(
            state.screen_double_clicked(ScreenDoubleClickInput {
                target: ScreenHitTarget::Arrow,
                ..input
            }),
            ScreenDoubleClickAction::EditArrow
        );
        assert_eq!(
            state.screen_double_clicked(ScreenDoubleClickInput {
                plot_locked: true,
                ..input
            }),
            ScreenDoubleClickAction::None
        );
        assert_eq!(
            state.last_double_click_action(),
            ScreenDoubleClickAction::None
        );
    }

    #[test]
    fn screen_mouse_down_forwards_complete_pointer_event_to_shared_host() {
        let mut state = RecorderState::default();
        let mut host = ScreenHost::default();
        let input = ScreenMouseDownInput {
            button: PointerButton::Primary,
            double_click: false,
            shift: true,
            control: false,
            x: 120,
            y: 45,
        };

        state.screen_mouse_down(input, &mut host);

        assert_eq!(host.down, Some(input));
        assert_eq!(state.last_screen_mouse_down(), Some(input));
    }

    #[test]
    fn screen_mouse_move_forwards_complete_pointer_event_to_shared_host() {
        let mut state = RecorderState::default();
        let mut host = ScreenHost::default();
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
            x: -12,
            y: 45,
        };

        state.screen_mouse_move(input, &mut host);

        assert_eq!(host.movement, Some(input));
        assert_eq!(state.last_screen_mouse_move(), Some(input));
    }

    #[test]
    fn screen_mouse_up_delegates_without_event_arguments() {
        let mut state = RecorderState::default();
        let mut host = ScreenHost::default();

        state.screen_mouse_up(&mut host);

        assert_eq!(host.up_count, 1);
        assert_eq!(state.screen_mouse_up_count(), 1);
    }

    #[test]
    fn destroy_saves_display_configuration_and_releases_owned_state() {
        let mut state = RecorderState {
            buffered_curve: Some(curve("buffered", CurveBounds::new(0.0, 1.0, 0.0, 1.0))),
            curves: vec!["curve".to_owned()],
            ..RecorderState::default()
        };
        state.paint_screen(10, 10, false);
        let mut host = DestroyHost::default();

        state.destroy(&mut host);

        assert_eq!(host.0, 1);
        assert!(state.destroyed());
        assert_eq!(state.channel_count(), 0);
        assert!(state.curves.is_empty());
        assert!(state.buffered_curve.is_none());
        assert!(state.last_screen_paint().is_none());
    }

    #[test]
    fn start_is_idle_only_and_stop_retains_completed_result() {
        let mut state = RecorderState::default();
        state.start_acquisition();
        state.start_acquisition();
        assert!(state.acquisition_active);
        assert!(!state.acquisition_controls_enabled);
        assert_eq!(
            state.backend_commands,
            vec![BackendCommand::Start { code: 0x538 }]
        );

        state.latest_completed_curve = Some(curve("result", CurveBounds::new(0.0, 5.0, -2.0, 2.0)));
        state.stop_acquisition();
        assert!(!state.acquisition_active);
        assert!(state.acquisition_controls_enabled);
        assert_eq!(
            state.buffered_curve.as_ref().map(|curve| curve.id.as_str()),
            Some("result")
        );
    }

    #[test]
    fn erase_is_local_or_forwarded_and_keeps_active_acquisition() {
        let mut state = RecorderState {
            acquisition_active: true,
            channels: vec![RecorderChannel {
                plot_attached: true,
                ..RecorderChannel::default()
            }],
            ..RecorderState::default()
        };
        state.erase_display();
        assert!(state.erase_requested);
        assert!(state.acquisition_active);
        assert!(!state.channels[0].plot_attached);

        let mut remote = RecorderState {
            route: ControlRoute::Remote,
            ..RecorderState::default()
        };
        remote.channels[0].plot_attached = true;
        remote.erase_display();
        assert!(!remote.erase_requested);
        assert!(remote.channels[0].plot_attached);
    }

    #[test]
    fn cursor_handlers_select_toggle_and_wrap_without_moving_position() {
        let mut state = RecorderState {
            curves: vec!["one".to_owned(), "two".to_owned(), "three".to_owned()],
            cursor_a: PlotCursor {
                curve_index: Some(2),
                position: 4.5,
                ..PlotCursor::default()
            },
            ..RecorderState::default()
        };
        state.select_following_curve();
        assert_eq!(state.cursor_a.curve_index, Some(0));
        state.select_preceding_curve();
        assert_eq!(state.cursor_a.curve_index, Some(2));
        assert_close(state.cursor_a.position, 4.5);

        state.cursor_b.active = true;
        state.select_cursor_b(false);
        assert_eq!(state.selected_cursor, CursorSelection::A);
        state.select_cursor_b(true);
        assert!(state.cursor_on);
        state.set_selected_cursor_enabled(false);
        assert!(!state.cursor_b.active);
        state.select_cursor_a(true);
        assert!(!state.cursor_on);
    }

    #[test]
    fn auto_scale_uses_only_attached_recorded_channels() {
        let usable = RecorderChannel {
            active: true,
            plot_attached: true,
            recorded_curve: Some(curve("a", CurveBounds::new(-5.0, 20.0, -4.0, 6.0))),
            ..RecorderChannel::default()
        };
        let skipped = RecorderChannel {
            plot_attached: false,
            recorded_curve: Some(curve(
                "hidden",
                CurveBounds::new(-100.0, 100.0, -100.0, 100.0),
            )),
            vertical_scale: 9.0,
            ..RecorderChannel::default()
        };
        let mut state = RecorderState {
            channels: vec![usable, skipped],
            plot_mode: PlotMode::YOverX,
            ..RecorderState::default()
        };
        state.auto_scale();
        assert_close(state.channels[0].vertical_scale, 2.0);
        assert_close(state.channels[1].vertical_scale, 9.0);
        assert_close(state.horizontal_scale, 5.0);
    }

    #[test]
    fn mode_change_can_be_rejected_or_stop_and_rebuild() {
        let mut state = RecorderState {
            mode_change_allowed: false,
            ..RecorderState::default()
        };
        state.select_y_over_x();
        assert_eq!(state.plot_mode, PlotMode::YOverTime);

        state.mode_change_allowed = true;
        state.acquisition_active = true;
        state.x_source_scale = 2.2;
        state.cursor_a.cache_valid = true;
        state.select_y_over_x();
        assert_eq!(state.plot_mode, PlotMode::YOverX);
        assert_close(state.horizontal_scale, 5.0);
        assert!(!state.acquisition_active);
        assert!(!state.cursor_a.cache_valid);

        state.stored_time_scale = 0.15;
        state.select_y_over_time();
        assert_close(state.horizontal_scale, 0.2);
    }
}
