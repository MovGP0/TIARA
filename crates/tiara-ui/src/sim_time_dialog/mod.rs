use std::num::ParseFloatError;

use iced::widget::{button, column, row, slider, text, text_input};
use iced::{Element, Task};
use tiara_core::simulation_time::{
    ApplicationSimulationMode, ButtonState, ControlAvailability,
    MINIMUM_SIMULATION_INTERVAL_SECONDS, SimulationModeButtons, SimulationTimeCommand,
    SimulationTimeMode, SimulationTimeState, format_macro_event_command,
};

pub const TITLE: &str = "Simulation time control";
pub const FORM_RESOURCE: &str = "SimTimeDlg";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MacroEvent {
    AcDc,
    SingleTransient,
    ContinuousTransient,
    StartStop,
    IntervalScroll(i32),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SimulationControl {
    AcDc,
    SingleTransient,
    ContinuousTransient,
    StartStop,
}

impl SimulationControl {
    const fn origin(self) -> (i32, i32) {
        let left = match self {
            Self::AcDc => 6,
            Self::SingleTransient => 39,
            Self::ContinuousTransient => 72,
            Self::StartStop => 130,
        };
        (left, 2)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PointerMacroEvent {
    pub action_code: u16,
    pub help_context: u32,
    pub target: SimulationControl,
    pub form_x: i32,
    pub form_y: i32,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct LayoutBaseline {
    pub window_height: u32,
    pub feedback_height: u32,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum FocusedControl {
    #[default]
    Interval,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModeTransitionOutcome {
    Unchanged,
    Changed,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MacroReplayOutcome {
    Ignored,
    Applied,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseDisposition {
    Hide,
}

#[derive(Debug, Clone)]
pub enum Message {
    IntervalChanged(String),
    IntervalCommitted,
    IntervalScrolled(i32),
    AcDcPressed,
    SingleTransientPressed,
    ContinuousTransientPressed,
    StartStopPressed,
}

#[derive(Debug, Clone, PartialEq)]
pub struct Window {
    interval_text: String,
    scroll_position: i32,
    simulation: SimulationTimeState,
    saved_mode_buttons: SimulationModeButtons,
    focused_control: FocusedControl,
    macro_events: Vec<MacroEvent>,
    pointer_macro_events: Vec<PointerMacroEvent>,
    pointer_macro_recording_enabled: bool,
    active_interval_updates_enabled: bool,
    help_context: u32,
    layout_baseline: LayoutBaseline,
    pending_commands: Vec<SimulationTimeCommand>,
    last_error: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        let simulation = SimulationTimeState::default();
        let mut window = Self {
            interval_text: "0.000001".to_owned(),
            scroll_position: 0,
            saved_mode_buttons: simulation.buttons,
            simulation,
            focused_control: FocusedControl::Interval,
            macro_events: Vec::new(),
            pointer_macro_events: Vec::new(),
            pointer_macro_recording_enabled: false,
            active_interval_updates_enabled: false,
            help_context: 0,
            layout_baseline: LayoutBaseline::default(),
            pending_commands: Vec::new(),
            last_error: None,
        };
        window.initialize_form(LayoutBaseline::default());
        window
    }
}

impl Window {
    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::IntervalChanged(value) => self.interval_text = value,
            Message::IntervalCommitted => {
                if let Err(error) = self.commit_interval_edit() {
                    self.last_error = Some(error.to_string());
                }
            }
            Message::IntervalScrolled(position) => self.scroll_interval(position),
            Message::AcDcPressed => {
                self.click_ac_dc();
            }
            Message::SingleTransientPressed => {
                self.click_single_transient();
            }
            Message::ContinuousTransientPressed => {
                self.click_continuous_transient();
            }
            Message::StartStopPressed => {
                if let Err(error) = self.click_start_stop() {
                    self.last_error = Some(error.to_string());
                }
            }
        }
        Task::none()
    }

    /// Ports Ghidra function `FUN_0132ad60` at `0x0132AD60`.
    ///
    /// The form initializes help context 120, clamps a stored interval below
    /// one microsecond, resets its scale, formats the interval editor, maps the
    /// interval to the logarithmic scrollbar, and captures the base layout.
    pub fn initialize_form(&mut self, layout_baseline: LayoutBaseline) {
        self.help_context = 0x78;
        self.layout_baseline = layout_baseline;
        self.apply_interval(self.simulation.interval_seconds);
    }

    /// Ports Ghidra function `FUN_0132aef0` at `0x0132AEF0`.
    ///
    /// The show event snapshots the three mode buttons and focuses the interval
    /// editor. It does not change the selected mode.
    pub const fn show_form(&mut self) {
        self.snapshot_mode_buttons_and_focus_interval();
    }

    /// Ports Ghidra function `FUN_0132ad40` at `0x0132AD40`.
    ///
    /// The interval exit event parses and normalizes the editor, maps the value
    /// to the logarithmic scrollbar, applies it to an eligible active
    /// simulation, and publishes the simulation-unit command.
    ///
    /// # Errors
    ///
    /// Returns [`ParseFloatError`] when the interval text is not a number.
    pub fn commit_interval_edit(&mut self) -> Result<(), ParseFloatError> {
        self.normalize_interval_edit()?;
        self.pending_commands
            .push(SimulationTimeCommand::SetSimulationUnit);
        self.last_error = None;
        Ok(())
    }

    /// Ports Ghidra function `FUN_0132abf0` at `0x0132ABF0`.
    ///
    /// It parses the interval editor, resets the scale to one, clamps values
    /// below one microsecond, updates the logarithmic scrollbar, and applies
    /// the interval only when the active simulation accepts live updates.
    ///
    /// # Errors
    ///
    /// Returns [`ParseFloatError`] when the interval text is not a number.
    pub fn normalize_interval_edit(&mut self) -> Result<(), ParseFloatError> {
        let interval = self.interval_text.parse()?;
        self.apply_interval(interval);
        self.queue_active_interval_update();
        Ok(())
    }

    /// Ports Ghidra function `FUN_0132af00` at `0x0132AF00`.
    ///
    /// The scrollbar maps positions 0 through 63 to the 1-2-...-9 logarithmic
    /// sequence from one microsecond through ten seconds. It formats the edit,
    /// applies the interval when the active simulation accepts it, records the
    /// position macro, and publishes the simulation-unit command.
    pub fn scroll_interval(&mut self, position: i32) {
        let position = position.clamp(0, 63);
        let interval = interval_for_scroll_position(position);
        self.apply_interval(interval);
        self.macro_events.push(MacroEvent::IntervalScroll(position));
        self.queue_active_interval_update();
        self.pending_commands
            .push(SimulationTimeCommand::SetSimulationUnit);
    }

    /// Ports Ghidra function `FUN_0132b600` at `0x0132B600`.
    ///
    /// The recovered close-query handler returns without changing the close
    /// permission. The Rust window therefore allows the request unchanged.
    #[must_use]
    pub const fn can_close(&self) -> bool {
        true
    }

    /// Ports Ghidra function `FUN_0132bb70` at `0x0132BB70`.
    ///
    /// The database maps the original function to `TSimTimeDlg.FormClose`.
    /// It selects Delphi close action `1`, which is `caHide`. The persistent
    /// control window is hidden rather than released.
    #[must_use]
    pub const fn close_disposition(&self) -> CloseDisposition {
        CloseDisposition::Hide
    }

    /// Ports Ghidra function `FUN_0132b8f0` at `0x0132B8F0`.
    pub fn mouse_down_ac_dc(&mut self, x: i32, y: i32) {
        self.record_pointer_macro(SimulationControl::AcDc, x, y);
    }

    /// Ports Ghidra function `FUN_0132b990` at `0x0132B990`.
    pub fn mouse_down_single_transient(&mut self, x: i32, y: i32) {
        self.record_pointer_macro(SimulationControl::SingleTransient, x, y);
    }

    /// Ports Ghidra function `FUN_0132ba30` at `0x0132BA30`.
    pub fn mouse_down_continuous_transient(&mut self, x: i32, y: i32) {
        self.record_pointer_macro(SimulationControl::ContinuousTransient, x, y);
    }

    /// Ports Ghidra function `FUN_0132bad0` at `0x0132BAD0`.
    pub fn mouse_down_start_stop(&mut self, x: i32, y: i32) {
        self.record_pointer_macro(SimulationControl::StartStop, x, y);
    }

    /// Ports Ghidra function `FUN_0132b6c0` at `0x0132B6C0`.
    ///
    /// The macro replay token toggles AC/DC, single transient, continuous
    /// transient, or Start/Stop for leading characters `0` through `3`.
    /// Leading `4` parses the remaining text as a scrollbar position and
    /// applies the interval without recording another macro event. Unknown or
    /// invalid tokens are no-ops.
    ///
    /// # Errors
    ///
    /// Returns [`ParseFloatError`] only when a replayed Start/Stop request must
    /// parse invalid interval text.
    pub fn replay_macro_token(
        &mut self,
        token: &str,
    ) -> Result<MacroReplayOutcome, ParseFloatError> {
        let Some(action) = token.chars().next() else {
            return Ok(MacroReplayOutcome::Ignored);
        };

        match action {
            '0' => {
                let down = !self.simulation.buttons.ac_dc.is_down();
                self.select_mode_button(SimulationTimeMode::AcDc, down);
                self.apply_ac_dc_mode_transition();
            }
            '1' => {
                let down = !self.simulation.buttons.single_transient.is_down();
                self.select_mode_button(SimulationTimeMode::SingleTransient, down);
                self.apply_single_transient_mode_transition();
            }
            '2' => {
                let down = !self.simulation.buttons.continuous_transient.is_down();
                self.select_mode_button(SimulationTimeMode::ContinuousTransient, down);
                self.apply_continuous_transient_mode_transition();
            }
            '3' => {
                let down = !self.simulation.buttons.start_stop.is_down();
                let commands = self
                    .simulation
                    .apply_start_stop(down, &self.interval_text)?;
                self.pending_commands.extend(commands);
            }
            '4' => {
                let Some(position) = token
                    .get(1..)
                    .and_then(|value| value.trim().parse::<i32>().ok())
                else {
                    return Ok(MacroReplayOutcome::Ignored);
                };
                let position = position.clamp(0, 63);
                self.apply_interval(interval_for_scroll_position(position));
                self.queue_active_interval_update();
                self.pending_commands
                    .push(SimulationTimeCommand::SetSimulationUnit);
            }
            _ => return Ok(MacroReplayOutcome::Ignored),
        }
        Ok(MacroReplayOutcome::Applied)
    }

    /// Ports Ghidra function `FUN_0132b240` at `0x0132B240`.
    ///
    /// The database maps the original function to
    /// `TSimTimeDlg.SBStartStopClick`. It records the control-specific macro
    /// event and applies the shared start-or-stop state machine.
    ///
    /// # Errors
    ///
    /// Returns [`ParseFloatError`] when a start request contains invalid
    /// interval text. The macro event remains recorded.
    pub fn click_start_stop(&mut self) -> Result<(), ParseFloatError> {
        self.macro_events.push(MacroEvent::StartStop);
        let start_stop_down = !self.simulation.buttons.start_stop.is_down();
        let commands = self
            .simulation
            .apply_start_stop(start_stop_down, &self.interval_text)?;
        self.pending_commands.extend(commands);
        self.last_error = None;
        Ok(())
    }

    /// Ports Ghidra function `FUN_0132b370` at `0x0132B370`.
    ///
    /// The database maps the original function to `TSimTimeDlg.SBAcClick`.
    /// It records the AC/DC macro event and delegates to the guarded AC/DC
    /// transition without branching on the sender.
    pub fn click_ac_dc(&mut self) -> ModeTransitionOutcome {
        self.macro_events.push(MacroEvent::AcDc);
        let down = !self.simulation.buttons.ac_dc.is_down();
        self.select_mode_button(SimulationTimeMode::AcDc, down);
        self.apply_ac_dc_mode_transition()
    }

    /// Ports Ghidra function `FUN_0132b470` at `0x0132B470`.
    ///
    /// The database maps the original function to `TSimTimeDlg.SBTrSingClick`.
    /// It records the single-transient macro event and delegates to the guarded
    /// mode transition without branching on the sender.
    pub fn click_single_transient(&mut self) -> ModeTransitionOutcome {
        self.macro_events.push(MacroEvent::SingleTransient);
        let down = !self.simulation.buttons.single_transient.is_down();
        self.select_mode_button(SimulationTimeMode::SingleTransient, down);
        self.apply_single_transient_mode_transition()
    }

    /// Ports Ghidra function `FUN_0132b570` at `0x0132B570`.
    ///
    /// The database maps the original function to `TSimTimeDlg.SBTrContClick`.
    /// It records the continuous-transient macro event and delegates to the
    /// guarded mode transition without branching on the sender.
    pub fn click_continuous_transient(&mut self) -> ModeTransitionOutcome {
        self.macro_events.push(MacroEvent::ContinuousTransient);
        let down = !self.simulation.buttons.continuous_transient.is_down();
        self.select_mode_button(SimulationTimeMode::ContinuousTransient, down);
        self.apply_continuous_transient_mode_transition()
    }

    /// Ports Ghidra function `FUN_0132b2d0` at `0x0132B2D0`.
    ///
    /// A changed AC/DC button state snapshots all mode buttons, selects mode 0,
    /// forces Start/Stop off, runs the shared stop path, enables both transient
    /// buttons, publishes simulation-state value 1, and emits application mode
    /// 0. An unchanged state performs no application-state work.
    pub fn apply_ac_dc_mode_transition(&mut self) -> ModeTransitionOutcome {
        if self.simulation.buttons.ac_dc == self.saved_mode_buttons.ac_dc {
            return ModeTransitionOutcome::Unchanged;
        }

        self.snapshot_mode_buttons_and_focus_interval();
        self.simulation.mode = SimulationTimeMode::AcDc;
        self.stop_for_mode_transition();
        self.simulation.flags.simulation_state = 1;
        self.pending_commands
            .push(SimulationTimeCommand::SetApplicationMode(
                ApplicationSimulationMode::AcDc,
            ));
        ModeTransitionOutcome::Changed
    }

    /// Ports Ghidra function `FUN_0132b400` at `0x0132B400`.
    ///
    /// A changed single-transient button state snapshots all mode buttons,
    /// selects internal mode 1, forces Start/Stop off, runs the shared stop
    /// path, and emits application mode 1. An unchanged state is a no-op.
    pub fn apply_single_transient_mode_transition(&mut self) -> ModeTransitionOutcome {
        if self.simulation.buttons.single_transient == self.saved_mode_buttons.single_transient {
            return ModeTransitionOutcome::Unchanged;
        }

        self.snapshot_mode_buttons_and_focus_interval();
        self.simulation.mode = SimulationTimeMode::SingleTransient;
        self.stop_for_mode_transition();
        self.pending_commands
            .push(SimulationTimeCommand::SetApplicationMode(
                ApplicationSimulationMode::Transient,
            ));
        ModeTransitionOutcome::Changed
    }

    /// Ports Ghidra function `FUN_0132b500` at `0x0132B500`.
    ///
    /// A changed continuous-transient button state snapshots all mode buttons,
    /// selects internal mode 4, forces Start/Stop off, runs the shared stop
    /// path, and emits application mode 1. An unchanged state is a no-op.
    pub fn apply_continuous_transient_mode_transition(&mut self) -> ModeTransitionOutcome {
        if self.simulation.buttons.continuous_transient
            == self.saved_mode_buttons.continuous_transient
        {
            return ModeTransitionOutcome::Unchanged;
        }

        self.snapshot_mode_buttons_and_focus_interval();
        self.simulation.mode = SimulationTimeMode::ContinuousTransient;
        self.stop_for_mode_transition();
        self.pending_commands
            .push(SimulationTimeCommand::SetApplicationMode(
                ApplicationSimulationMode::Transient,
            ));
        ModeTransitionOutcome::Changed
    }

    /// Ports Ghidra function `FUN_0132b660` at `0x0132B660`.
    ///
    /// It snapshots the three mode-button Down states and makes the interval
    /// editor the active control.
    pub const fn snapshot_mode_buttons_and_focus_interval(&mut self) {
        self.saved_mode_buttons.ac_dc = self.simulation.buttons.ac_dc;
        self.saved_mode_buttons.single_transient = self.simulation.buttons.single_transient;
        self.saved_mode_buttons.continuous_transient = self.simulation.buttons.continuous_transient;
        self.focused_control = FocusedControl::Interval;
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let single_button = button(text(button_label(
            "Single transient",
            self.simulation.buttons.single_transient.is_down(),
        )));
        let single_button = if self.simulation.buttons.single_transient_availability
            == ControlAvailability::Enabled
        {
            single_button.on_press(Message::SingleTransientPressed)
        } else {
            single_button
        };
        let continuous_button = button(text(button_label(
            "Continuous transient",
            self.simulation.buttons.continuous_transient.is_down(),
        )));
        let continuous_button = if self.simulation.buttons.continuous_transient_availability
            == ControlAvailability::Enabled
        {
            continuous_button.on_press(Message::ContinuousTransientPressed)
        } else {
            continuous_button
        };

        let mut content = column![
            text(TITLE).size(24),
            row![
                button(text(button_label(
                    "AC/DC",
                    self.simulation.buttons.ac_dc.is_down(),
                )))
                .on_press(Message::AcDcPressed),
                single_button,
                continuous_button,
                button(text(button_label(
                    "Start/Stop",
                    self.simulation.buttons.start_stop.is_down(),
                )))
                .on_press(Message::StartStopPressed),
            ]
            .spacing(8),
            row![
                text("Interval"),
                text_input("seconds", &self.interval_text)
                    .on_input(Message::IntervalChanged)
                    .on_submit(Message::IntervalCommitted),
                text("s"),
            ]
            .spacing(8),
            slider(0..=63, self.scroll_position, Message::IntervalScrolled),
            text(&self.simulation.feedback.text),
        ]
        .padding(16)
        .spacing(12);

        if let Some(error) = &self.last_error {
            content = content.push(text(error));
        }
        content.into()
    }

    #[must_use]
    pub const fn simulation(&self) -> &SimulationTimeState {
        &self.simulation
    }

    #[must_use]
    pub const fn focused_control(&self) -> FocusedControl {
        self.focused_control
    }

    #[must_use]
    pub fn macro_events(&self) -> &[MacroEvent] {
        &self.macro_events
    }

    #[must_use]
    pub fn pointer_macro_events(&self) -> &[PointerMacroEvent] {
        &self.pointer_macro_events
    }

    pub fn drain_macro_commands(&mut self) -> Vec<String> {
        std::mem::take(&mut self.macro_events)
            .into_iter()
            .map(|event| format_macro_event_command(&event.control_token()))
            .collect()
    }

    pub const fn set_pointer_macro_recording_enabled(&mut self, enabled: bool) {
        self.pointer_macro_recording_enabled = enabled;
    }

    pub const fn set_active_interval_updates_enabled(&mut self, enabled: bool) {
        self.active_interval_updates_enabled = enabled;
    }

    pub fn drain_commands(&mut self) -> Vec<SimulationTimeCommand> {
        std::mem::take(&mut self.pending_commands)
    }

    fn stop_for_mode_transition(&mut self) {
        let commands = self
            .simulation
            .apply_start_stop(false, &self.interval_text)
            .unwrap_or_default();
        self.pending_commands.extend(commands);
    }

    fn select_mode_button(&mut self, mode: SimulationTimeMode, down: bool) {
        match mode {
            SimulationTimeMode::AcDc => self.simulation.buttons.ac_dc = button_state(down),
            SimulationTimeMode::SingleTransient => {
                self.simulation.buttons.single_transient = button_state(down);
            }
            SimulationTimeMode::ContinuousTransient => {
                self.simulation.buttons.continuous_transient = button_state(down);
            }
            SimulationTimeMode::ReservedThree | SimulationTimeMode::Other(_) => return,
        }

        if down {
            self.simulation.buttons.ac_dc = button_state(mode == SimulationTimeMode::AcDc);
            self.simulation.buttons.single_transient =
                button_state(mode == SimulationTimeMode::SingleTransient);
            self.simulation.buttons.continuous_transient =
                button_state(mode == SimulationTimeMode::ContinuousTransient);
        }
    }

    fn apply_interval(&mut self, interval: f64) {
        let interval = if interval < MINIMUM_SIMULATION_INTERVAL_SECONDS {
            MINIMUM_SIMULATION_INTERVAL_SECONDS
        } else {
            interval
        };
        self.simulation.interval_seconds = interval;
        self.simulation.interval_scale = 1.0;
        self.interval_text = interval.to_string();
        self.scroll_position = scroll_position_for_interval(interval);
    }

    fn queue_active_interval_update(&mut self) {
        if self.active_interval_updates_enabled && self.simulation.flags.simulation_state == 2 {
            self.pending_commands
                .push(SimulationTimeCommand::ApplyIntervalToActiveSimulation);
        }
    }

    fn record_pointer_macro(&mut self, target: SimulationControl, x: i32, y: i32) {
        if !self.pointer_macro_recording_enabled {
            return;
        }

        let (left, top) = target.origin();
        self.pointer_macro_events.push(PointerMacroEvent {
            action_code: 0x41a,
            help_context: self.help_context,
            target,
            form_x: left + x,
            form_y: top + y,
        });
    }
}

impl MacroEvent {
    fn control_token(self) -> String {
        match self {
            Self::AcDc => "0".to_owned(),
            Self::SingleTransient => "1".to_owned(),
            Self::ContinuousTransient => "2".to_owned(),
            Self::StartStop => "3".to_owned(),
            Self::IntervalScroll(position) => format!("4{position}"),
        }
    }
}

fn interval_for_scroll_position(position: i32) -> f64 {
    let exponent = position.div_euclid(9) - 6;
    let mantissa = position.rem_euclid(9) + 1;
    f64::from(mantissa) * 10_f64.powi(exponent)
}

fn scroll_position_for_interval(interval: f64) -> i32 {
    if !interval.is_finite() || interval <= 0.0 {
        return 0;
    }

    let mut position = 0;
    for candidate in 1_i32..=63 {
        let exponent = candidate.div_euclid(9) - 6;
        let mantissa = candidate.rem_euclid(9) + 1;
        let threshold = (f64::from(mantissa) - 0.001) * 10_f64.powi(exponent);
        if interval < threshold {
            break;
        }
        position = candidate;
    }
    position
}

fn button_label(label: &str, down: bool) -> String {
    format!("{label} [{}]", if down { "On" } else { "Off" })
}

const fn button_state(down: bool) -> ButtonState {
    if down {
        ButtonState::Down
    } else {
        ButtonState::Up
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use tiara_core::simulation_time::{RunRequestState, TransientRunKind};

    #[test]
    fn unchanged_mode_click_records_macro_without_application_commands() {
        let mut window = Window::default();

        window.simulation.buttons.ac_dc = ButtonState::Down;
        assert_eq!(
            window.apply_ac_dc_mode_transition(),
            ModeTransitionOutcome::Unchanged
        );
        assert!(window.drain_commands().is_empty());

        window.click_ac_dc();
        assert_eq!(window.macro_events(), [MacroEvent::AcDc]);
    }

    #[test]
    fn single_mode_transition_snapshots_stops_and_emits_transient_mode() {
        let mut window = Window::default();

        assert_eq!(
            window.click_single_transient(),
            ModeTransitionOutcome::Changed
        );
        assert_eq!(window.simulation.mode, SimulationTimeMode::SingleTransient);
        assert_eq!(window.focused_control(), FocusedControl::Interval);
        assert_eq!(window.simulation.buttons.start_stop, ButtonState::Up);
        assert_eq!(
            window.drain_commands(),
            [
                SimulationTimeCommand::SetInteractive(false),
                SimulationTimeCommand::RefreshSimulationState,
                SimulationTimeCommand::SetApplicationMode(ApplicationSimulationMode::Transient),
            ]
        );
    }

    #[test]
    fn continuous_start_disables_single_mode_and_publishes_run_flags() {
        let mut window = Window::default();
        window.click_continuous_transient();
        window.drain_commands();
        window.interval_text = "0".to_owned();

        window.click_start_stop().expect("valid interval");

        assert_eq!(window.macro_events().last(), Some(&MacroEvent::StartStop));
        assert_eq!(
            window.simulation.flags.run_request,
            RunRequestState::Requested
        );
        assert_eq!(
            window.simulation.flags.transient_run_kind,
            TransientRunKind::Continuous
        );
        assert_eq!(
            window.simulation.buttons.single_transient_availability,
            ControlAvailability::Disabled
        );
        assert_eq!(
            window.drain_commands(),
            [SimulationTimeCommand::SetInteractive(true)]
        );
        assert_eq!(window.simulation.feedback.command, "Message( t =  0)");
    }

    #[test]
    fn invalid_start_interval_propagates_after_the_macro_event() {
        let mut window = Window::default();
        window.click_single_transient();
        window.drain_commands();
        window.interval_text = "invalid".to_owned();

        assert!(window.click_start_stop().is_err());
        assert_eq!(window.macro_events().last(), Some(&MacroEvent::StartStop));
        assert!(window.drain_commands().is_empty());
    }

    #[test]
    fn ac_dc_transition_publishes_state_one_and_mode_zero() {
        let mut window = Window::default();
        window.click_single_transient();
        window.drain_commands();

        assert_eq!(window.click_ac_dc(), ModeTransitionOutcome::Changed);
        assert_eq!(window.simulation.mode, SimulationTimeMode::AcDc);
        assert_eq!(window.simulation.flags.simulation_state, 1);
        assert_eq!(
            window.drain_commands().last(),
            Some(&SimulationTimeCommand::SetApplicationMode(
                ApplicationSimulationMode::AcDc
            ))
        );
    }

    #[test]
    fn form_creation_normalizes_interval_and_captures_layout() {
        let mut window = Window::default();
        window.simulation.interval_seconds = 0.0;

        window.initialize_form(LayoutBaseline {
            window_height: 75,
            feedback_height: 19,
        });

        assert_eq!(window.help_context, 0x78);
        assert!((window.simulation.interval_seconds - 1.0e-6).abs() < f64::EPSILON);
        assert!((window.simulation.interval_scale - 1.0).abs() < f64::EPSILON);
        assert_eq!(window.scroll_position, 0);
        assert_eq!(window.layout_baseline.window_height, 75);
    }

    #[test]
    fn interval_commit_clamps_and_publishes_both_runtime_effects() {
        let mut window = Window::default();
        let _ = window.update(Message::IntervalChanged("0".to_owned()));
        window.simulation.flags.simulation_state = 2;
        window.set_active_interval_updates_enabled(true);

        window.commit_interval_edit().expect("valid interval");

        assert!((window.simulation.interval_seconds - 1.0e-6).abs() < f64::EPSILON);
        assert_eq!(window.scroll_position, 0);
        assert_eq!(
            window.drain_commands(),
            [
                SimulationTimeCommand::ApplyIntervalToActiveSimulation,
                SimulationTimeCommand::SetSimulationUnit,
            ]
        );
    }

    #[test]
    fn scrollbar_uses_one_through_nine_decade_steps() {
        let mut window = Window::default();

        window.scroll_interval(8);
        assert!((window.simulation.interval_seconds - 9.0e-6).abs() < f64::EPSILON);
        assert_eq!(
            window.macro_events().last(),
            Some(&MacroEvent::IntervalScroll(8))
        );

        window.scroll_interval(9);
        assert!((window.simulation.interval_seconds - 1.0e-5).abs() < f64::EPSILON);
        assert_eq!(window.scroll_position, 9);
    }

    #[test]
    fn pointer_macro_uses_form_coordinates_only_while_recording() {
        let mut window = Window::default();

        window.mouse_down_single_transient(4, 5);
        assert!(window.pointer_macro_events().is_empty());

        window.set_pointer_macro_recording_enabled(true);
        window.mouse_down_single_transient(4, 5);
        assert_eq!(
            window.pointer_macro_events(),
            [PointerMacroEvent {
                action_code: 0x41a,
                help_context: 0x78,
                target: SimulationControl::SingleTransient,
                form_x: 43,
                form_y: 7,
            }]
        );
    }

    #[test]
    fn close_query_allows_the_existing_request() {
        assert!(Window::default().can_close());
    }

    #[test]
    fn close_hides_the_persistent_window() {
        assert_eq!(
            Window::default().close_disposition(),
            CloseDisposition::Hide
        );
    }

    #[test]
    fn macro_commands_use_the_shared_core_protocol_formatter() {
        let mut window = Window::default();
        window.click_single_transient();

        assert_eq!(window.drain_macro_commands(), ["[MacroEvent(1000,1)]"]);
    }

    #[test]
    fn macro_replay_routes_buttons_without_recording_a_new_macro() {
        let mut window = Window::default();

        assert_eq!(
            window.replay_macro_token("1").expect("valid interval"),
            MacroReplayOutcome::Applied
        );
        assert_eq!(window.simulation.mode, SimulationTimeMode::SingleTransient);
        assert!(window.macro_events().is_empty());
    }

    #[test]
    fn macro_replay_position_uses_the_slider_path_and_ignores_bad_text() {
        let mut window = Window::default();

        assert_eq!(
            window.replay_macro_token("48").expect("valid interval"),
            MacroReplayOutcome::Applied
        );
        assert!((window.simulation.interval_seconds - 9.0e-6).abs() < f64::EPSILON);
        assert_eq!(window.scroll_position, 8);
        assert_eq!(
            window.replay_macro_token("4bad").expect("valid interval"),
            MacroReplayOutcome::Ignored
        );
    }
}
