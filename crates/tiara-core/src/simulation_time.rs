use std::num::ParseFloatError;

pub const MINIMUM_SIMULATION_INTERVAL_SECONDS: f64 = 1.0e-6;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum SimulationTimeMode {
    #[default]
    AcDc,
    SingleTransient,
    ReservedThree,
    ContinuousTransient,
    Other(u8),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ApplicationSimulationMode {
    AcDc,
    Transient,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CommandDispatchTiming {
    Immediate,
    Deferred,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ApplicationModeCommand {
    pub command: String,
    pub mode: ApplicationSimulationMode,
    pub refresh_application: bool,
    pub timing: CommandDispatchTiming,
}

/// Ports Ghidra function `FUN_013a4400` at `0x013A4400`.
///
/// The AC/DC command is sent and mode 0 is stored immediately when no active
/// calculation blocks the change. Otherwise, the original code schedules the
/// same operation through a callback. This adapter keeps that timing decision
/// explicit for the application shell.
#[must_use]
pub fn build_ac_dc_mode_command(active_calculation: bool) -> ApplicationModeCommand {
    ApplicationModeCommand {
        command: "[SetTINAMode(0)]".to_owned(),
        mode: ApplicationSimulationMode::AcDc,
        refresh_application: false,
        timing: if active_calculation {
            CommandDispatchTiming::Deferred
        } else {
            CommandDispatchTiming::Immediate
        },
    }
}

/// Ports Ghidra function `FUN_013a44e0` at `0x013A44E0`.
///
/// The transient-mode command is dispatched immediately, mode 1 is stored,
/// and the active application state is refreshed.
#[must_use]
pub fn build_transient_mode_command() -> ApplicationModeCommand {
    ApplicationModeCommand {
        command: "[SetTINAMode(1)]".to_owned(),
        mode: ApplicationSimulationMode::Transient,
        refresh_application: true,
        timing: CommandDispatchTiming::Immediate,
    }
}

/// Ports Ghidra function `FUN_013a4910` at `0x013A4910`.
///
/// It formats the current interval with four exponential decimal places,
/// forces a period decimal separator, and builds the application command.
#[must_use]
pub fn format_simulation_unit_command(interval_seconds: f64) -> String {
    let value = format!("{interval_seconds:10.4e}").replace(',', ".");
    format!("[SetSimulationUnit({value})]")
}

/// Ports Ghidra function `FUN_013a4ea0` at `0x013A4EA0`.
///
/// It wraps one control token in the shared macro-event command.
#[must_use]
pub fn format_macro_event_command(control_token: &str) -> String {
    format!("[MacroEvent(1000,{control_token})]")
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum FeedbackSeverity {
    #[default]
    Message,
    Error,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct SimulationFeedback {
    pub text: String,
    pub severity: FeedbackSeverity,
    pub command: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SimulationTimeCommand {
    SetInteractive(bool),
    RefreshSimulationState,
    SetApplicationMode(ApplicationSimulationMode),
    ApplyIntervalToActiveSimulation,
    SetSimulationUnit,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ButtonState {
    #[default]
    Up,
    Down,
}

impl ButtonState {
    #[must_use]
    pub const fn is_down(self) -> bool {
        matches!(self, Self::Down)
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ControlAvailability {
    Disabled,
    #[default]
    Enabled,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SimulationModeButtons {
    pub ac_dc: ButtonState,
    pub single_transient: ButtonState,
    pub continuous_transient: ButtonState,
    pub start_stop: ButtonState,
    pub single_transient_availability: ControlAvailability,
    pub continuous_transient_availability: ControlAvailability,
}

impl Default for SimulationModeButtons {
    fn default() -> Self {
        Self {
            ac_dc: ButtonState::Down,
            single_transient: ButtonState::Up,
            continuous_transient: ButtonState::Up,
            start_stop: ButtonState::Up,
            single_transient_availability: ControlAvailability::Enabled,
            continuous_transient_availability: ControlAvailability::Enabled,
        }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum TransientRunKind {
    #[default]
    Continuous,
    Single,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum RunRequestState {
    #[default]
    Idle,
    Requested,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum InteractiveState {
    #[default]
    Disabled,
    Enabled,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum EngineState {
    #[default]
    Ready,
    Cleared,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct PublishedSimulationFlags {
    pub transient_run_kind: TransientRunKind,
    pub run_request: RunRequestState,
    pub simulation_state: u8,
    pub interactive: InteractiveState,
    pub engine_state: EngineState,
}

#[derive(Debug, Clone, PartialEq)]
pub struct SimulationTimeState {
    pub mode: SimulationTimeMode,
    pub interval_seconds: f64,
    pub interval_scale: f64,
    pub buttons: SimulationModeButtons,
    pub flags: PublishedSimulationFlags,
    pub feedback: SimulationFeedback,
}

impl Default for SimulationTimeState {
    fn default() -> Self {
        Self {
            mode: SimulationTimeMode::AcDc,
            interval_seconds: MINIMUM_SIMULATION_INTERVAL_SECONDS,
            interval_scale: 1.0,
            buttons: SimulationModeButtons::default(),
            flags: PublishedSimulationFlags::default(),
            feedback: SimulationFeedback::default(),
        }
    }
}

impl SimulationTimeState {
    /// Ports Ghidra function `FUN_0132b640` at `0x0132B640`.
    ///
    /// It clears the shared run-request marker and resets the published
    /// simulation-state value to zero.
    pub const fn clear_run_marker(&mut self) {
        self.flags.run_request = RunRequestState::Idle;
        self.flags.simulation_state = 0;
    }

    /// Ports Ghidra function `FUN_0132b070` at `0x0132B070`.
    ///
    /// The recovered routine applies the shared `SimTimeDlg` Start/Stop state
    /// machine. Stopping mode 3 is a no-op. Other stop modes disable
    /// interactive operation and enable both transient-mode buttons. Starting
    /// reads and clamps the interval, publishes flags for modes 1 and 4,
    /// enables interactive operation, and reports time zero. Unsupported start
    /// modes report time zero without enabling interactive operation.
    ///
    /// # Errors
    ///
    /// Returns [`ParseFloatError`] when a start request contains invalid
    /// interval text. Stop requests do not parse the text.
    pub fn apply_start_stop(
        &mut self,
        start_stop_down: bool,
        interval_text: &str,
    ) -> Result<Vec<SimulationTimeCommand>, ParseFloatError> {
        self.buttons.start_stop = if start_stop_down {
            ButtonState::Down
        } else {
            ButtonState::Up
        };
        if !start_stop_down {
            if self.mode == SimulationTimeMode::ReservedThree {
                return Ok(Vec::new());
            }

            self.flags.interactive = InteractiveState::Disabled;
            self.buttons.single_transient_availability = ControlAvailability::Enabled;
            self.buttons.continuous_transient_availability = ControlAvailability::Enabled;
            return Ok(vec![
                SimulationTimeCommand::SetInteractive(false),
                SimulationTimeCommand::RefreshSimulationState,
            ]);
        }

        self.interval_seconds = interval_text.parse()?;
        self.interval_scale = 1.0;
        if self.interval_seconds < MINIMUM_SIMULATION_INTERVAL_SECONDS {
            self.interval_seconds = MINIMUM_SIMULATION_INTERVAL_SECONDS;
        }

        let mut commands = Vec::new();
        match self.mode {
            SimulationTimeMode::SingleTransient => {
                self.buttons.continuous_transient_availability = ControlAvailability::Disabled;
                self.publish_transient_flags();
                self.flags.engine_state = EngineState::Cleared;
                self.flags.interactive = InteractiveState::Enabled;
                commands.push(SimulationTimeCommand::SetInteractive(true));
            }
            SimulationTimeMode::ContinuousTransient => {
                self.buttons.single_transient_availability = ControlAvailability::Disabled;
                self.publish_transient_flags();
                self.flags.engine_state = EngineState::Cleared;
                self.flags.interactive = InteractiveState::Enabled;
                commands.push(SimulationTimeCommand::SetInteractive(true));
            }
            SimulationTimeMode::AcDc
            | SimulationTimeMode::ReservedThree
            | SimulationTimeMode::Other(_) => {}
        }

        self.publish_feedback(" t =  0", FeedbackSeverity::Message);
        Ok(commands)
    }

    /// Ports Ghidra function `FUN_0132b610` at `0x0132B610`.
    ///
    /// It marks whether the current run is a single transient, publishes the
    /// run request, and changes the shared simulation-state value to 2.
    pub fn publish_transient_flags(&mut self) {
        self.flags.transient_run_kind = if self.mode == SimulationTimeMode::SingleTransient {
            TransientRunKind::Single
        } else {
            TransientRunKind::Continuous
        };
        self.flags.run_request = RunRequestState::Requested;
        self.flags.simulation_state = 2;
    }

    /// Ports Ghidra function `FUN_0132bb80` at `0x0132BB80`.
    ///
    /// The recovered routine updates the shared time text and publishes a
    /// `Message(...)` or `ErrorMessage(...)` command according to severity.
    pub fn publish_feedback(&mut self, text: &str, severity: FeedbackSeverity) {
        let prefix = match severity {
            FeedbackSeverity::Message => "Message",
            FeedbackSeverity::Error => "ErrorMessage",
        };
        self.feedback = SimulationFeedback {
            text: text.to_owned(),
            severity,
            command: format!("{prefix}({text})"),
        };
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn reserved_stop_mode_is_a_noop() {
        let mut state = SimulationTimeState {
            mode: SimulationTimeMode::ReservedThree,
            ..SimulationTimeState::default()
        };

        assert_eq!(state.apply_start_stop(false, "invalid"), Ok(Vec::new()));
        assert_eq!(state.buttons.start_stop, ButtonState::Up);
    }

    #[test]
    fn single_transient_start_clamps_interval_and_publishes_flags() {
        let mut state = SimulationTimeState {
            mode: SimulationTimeMode::SingleTransient,
            ..SimulationTimeState::default()
        };

        assert_eq!(
            state.apply_start_stop(true, "0"),
            Ok(vec![SimulationTimeCommand::SetInteractive(true)])
        );
        assert!(
            (state.interval_seconds - MINIMUM_SIMULATION_INTERVAL_SECONDS).abs() < f64::EPSILON
        );
        assert_eq!(state.flags.transient_run_kind, TransientRunKind::Single);
        assert_eq!(state.flags.run_request, RunRequestState::Requested);
        assert_eq!(state.flags.simulation_state, 2);
        assert_eq!(state.flags.interactive, InteractiveState::Enabled);
        assert_eq!(
            state.buttons.continuous_transient_availability,
            ControlAvailability::Disabled
        );
        assert_eq!(state.feedback.command, "Message( t =  0)");
    }

    #[test]
    fn unsupported_start_mode_reports_time_zero_without_starting_interactive_mode() {
        let mut state = SimulationTimeState {
            mode: SimulationTimeMode::Other(7),
            ..SimulationTimeState::default()
        };

        assert_eq!(state.apply_start_stop(true, "0.25"), Ok(Vec::new()));
        assert_eq!(state.flags.interactive, InteractiveState::Disabled);
        assert_eq!(state.feedback.text, " t =  0");
    }

    #[test]
    fn feedback_selects_the_error_command_prefix() {
        let mut state = SimulationTimeState::default();

        state.publish_feedback("failure", FeedbackSeverity::Error);

        assert_eq!(state.feedback.command, "ErrorMessage(failure)");
    }

    #[test]
    fn application_mode_commands_preserve_dispatch_and_refresh_rules() {
        assert_eq!(
            build_ac_dc_mode_command(false),
            ApplicationModeCommand {
                command: "[SetTINAMode(0)]".to_owned(),
                mode: ApplicationSimulationMode::AcDc,
                refresh_application: false,
                timing: CommandDispatchTiming::Immediate,
            }
        );
        assert_eq!(
            build_ac_dc_mode_command(true).timing,
            CommandDispatchTiming::Deferred
        );
        assert!(build_transient_mode_command().refresh_application);
    }

    #[test]
    fn command_formatters_preserve_protocol_wrappers() {
        assert_eq!(
            format_simulation_unit_command(1.0e-6),
            "[SetSimulationUnit( 1.0000e-6)]"
        );
        assert_eq!(format_macro_event_command("42"), "[MacroEvent(1000,42)]");
    }

    #[test]
    fn clear_run_marker_resets_only_the_shared_run_state() {
        let mut state = SimulationTimeState::default();
        state.flags.run_request = RunRequestState::Requested;
        state.flags.simulation_state = 2;
        state.flags.interactive = InteractiveState::Enabled;

        state.clear_run_marker();

        assert_eq!(state.flags.run_request, RunRequestState::Idle);
        assert_eq!(state.flags.simulation_state, 0);
        assert_eq!(state.flags.interactive, InteractiveState::Enabled);
    }
}
