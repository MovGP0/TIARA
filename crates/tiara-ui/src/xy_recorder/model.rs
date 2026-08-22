#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PlotMode {
    YOverTime,
    YOverX,
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
    pub recorded_curve: Option<RecordedCurve>,
    pub vertical_scale: f64,
    pub vertical_position: f64,
}

impl Default for RecorderChannel {
    fn default() -> Self {
        Self {
            active: false,
            plot_attached: false,
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
pub enum ControlRoute {
    Local,
    Remote,
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
    PublishCurve { curve_id: String },
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PlotTransfer {
    pub curve_id: String,
    pub mode_code: u8,
}

#[derive(Debug, Clone)]
#[allow(clippy::struct_excessive_bools)]
pub struct RecorderState {
    channels: Vec<RecorderChannel>,
    selected_channel: Option<usize>,
    channel_on: bool,
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
    horizontal_scale: f64,
    stored_time_scale: f64,
    x_source_scale: f64,
    horizontal_position: f64,
    route: ControlRoute,
    mode_change_allowed: bool,
    plot_revision: u64,
    cursor_readout_revision: u64,
    backend_commands: Vec<BackendCommand>,
    plot_transfers: Vec<PlotTransfer>,
}

impl Default for RecorderState {
    fn default() -> Self {
        Self {
            channels: vec![RecorderChannel::default()],
            selected_channel: Some(0),
            channel_on: false,
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
            horizontal_scale: 1.0,
            stored_time_scale: 1.0,
            x_source_scale: 1.0,
            horizontal_position: 0.0,
            route: ControlRoute::Local,
            mode_change_allowed: true,
            plot_revision: 0,
            cursor_readout_revision: 0,
            backend_commands: Vec::new(),
            plot_transfers: Vec::new(),
        }
    }
}

impl RecorderState {
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
    pub const fn plot_mode(&self) -> PlotMode {
        self.plot_mode
    }

    #[must_use]
    pub const fn acquisition_active(&self) -> bool {
        self.acquisition_active
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

#[cfg(test)]
mod tests {
    use super::*;

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
