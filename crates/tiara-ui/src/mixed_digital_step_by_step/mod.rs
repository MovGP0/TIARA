use iced::widget::{button, column, row, text};
use iced::{Element, Task};

pub const TITLE: &str = "Control Panel";
pub const FORM_RESOURCE: &str = "MixedDigitalStepByStep";
pub const HELP_CONTEXT: u32 = 0x453;
pub const LIBRARY_EVALUATION: &str = "iced owns grouped transport messages and the event loop. A typed Rust state adapter represents Schematic Editor interaction selection because iced does not provide application-specific editor modes, mixed-mode panel synchronization, or recovered activity-byte readiness.";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum RunGate {
    Running,
    #[default]
    Paused,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum StepRequest {
    #[default]
    None,
    NextDigitalChange,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum StopRequest {
    #[default]
    None,
    Requested,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TransportSelection {
    Play,
    Pause,
    Stop,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EditorInteractionCommand {
    LeaveInteraction,
    ActivateDigitalStepByStep,
}

impl EditorInteractionCommand {
    /// Applies one panel command to the Schematic Editor interaction adapter.
    ///
    /// Leave returns the recovered readiness result. Activation has no return
    /// value in the recovered function and therefore returns `None`.
    #[must_use = "the interaction shutdown readiness result must be handled"]
    pub const fn apply(self, editor: &mut SchematicEditorInteractionState) -> Option<bool> {
        match self {
            Self::LeaveInteraction => Some(editor.leave_current_interaction()),
            Self::ActivateDigitalStepByStep => {
                editor.activate_digital_step_by_step();
                None
            }
        }
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct SchematicEditorInteractionState {
    interaction_mode: u8,
    synchronized_toolbar_mode: Option<u8>,
    primary_tool_down: bool,
    interaction_change_generation: u64,
    editor_state_18e8: bool,
    mixed_mode_panel_selection: Option<bool>,
    mixed_mode_change_generation: u64,
    activity: [bool; 2],
}

impl SchematicEditorInteractionState {
    /// Ports Ghidra `FUN_01c80a70` at `0x01C80A70`.
    ///
    /// Selects interaction mode 2, synchronizes the toolbar to that mode,
    /// checks the primary interactive-tool button, invokes the common change
    /// path, and sets the recovered editor-state byte at offset `0x18e8`.
    pub const fn activate_digital_step_by_step(&mut self) {
        self.interaction_mode = 2;
        self.synchronized_toolbar_mode = Some(2);
        self.primary_tool_down = true;
        self.interaction_change_generation = self.interaction_change_generation.saturating_add(1);
        self.editor_state_18e8 = true;
    }

    /// Ports Ghidra `FUN_01c87d20` at `0x01C87D20`.
    ///
    /// Unchecks the primary interactive tool and invokes its common change
    /// path. When the optional mixed-mode panel exists, it also clears that
    /// panel selection and invokes its change path. It returns `true` only
    /// when both recovered editor activity bytes are clear.
    #[must_use]
    pub const fn leave_current_interaction(&mut self) -> bool {
        self.primary_tool_down = false;
        self.interaction_change_generation = self.interaction_change_generation.saturating_add(1);
        if let Some(selection) = &mut self.mixed_mode_panel_selection {
            *selection = false;
            self.mixed_mode_change_generation = self.mixed_mode_change_generation.saturating_add(1);
        }
        !self.activity[0] && !self.activity[1]
    }

    pub const fn set_mixed_mode_panel_selection(&mut self, selection: Option<bool>) {
        self.mixed_mode_panel_selection = selection;
    }

    pub const fn set_activity(&mut self, primary: bool, secondary: bool) {
        self.activity = [primary, secondary];
    }

    #[must_use]
    pub const fn interaction_mode(&self) -> u8 {
        self.interaction_mode
    }

    #[must_use]
    pub const fn synchronized_toolbar_mode(&self) -> Option<u8> {
        self.synchronized_toolbar_mode
    }

    #[must_use]
    pub const fn primary_tool_down(&self) -> bool {
        self.primary_tool_down
    }

    #[must_use]
    pub const fn interaction_change_generation(&self) -> u64 {
        self.interaction_change_generation
    }

    #[must_use]
    pub const fn editor_state_18e8(&self) -> bool {
        self.editor_state_18e8
    }

    #[must_use]
    pub const fn mixed_mode_panel_selection(&self) -> Option<bool> {
        self.mixed_mode_panel_selection
    }

    #[must_use]
    pub const fn mixed_mode_change_generation(&self) -> u64 {
        self.mixed_mode_change_generation
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum CloseRequest {
    #[default]
    Open,
    Requested,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseDisposition {
    Release,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalysisLoopDirective {
    AwaitUiResume,
    Continue,
    PausedAfterDigitalChange,
}

#[derive(Debug, Clone)]
pub enum Message {
    Play,
    Pause,
    Stop,
    StepForward,
    Cancel,
    DigitalValuesObserved { time: f64, values: String },
}

#[derive(Debug, Clone, PartialEq)]
pub struct Window {
    time_label: String,
    displayed_time: String,
    current_time: f64,
    digital_node_values: String,
    cached_digital_node_values: String,
    current_transport: Option<TransportSelection>,
    run_gate: RunGate,
    step_request: StepRequest,
    stop_request: StopRequest,
    editor_commands: Vec<EditorInteractionCommand>,
    close_request: CloseRequest,
    help_context: u32,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(String::new())
    }
}

impl Window {
    #[must_use]
    pub fn new(initial_digital_node_values: String) -> Self {
        let mut window = Self {
            time_label: "Time".to_owned(),
            displayed_time: String::new(),
            current_time: 0.0,
            digital_node_values: initial_digital_node_values,
            cached_digital_node_values: String::new(),
            current_transport: None,
            run_gate: RunGate::Paused,
            step_request: StepRequest::None,
            stop_request: StopRequest::None,
            editor_commands: Vec::new(),
            close_request: CloseRequest::Open,
            help_context: 0,
        };
        window.initialize_form();
        window.show_form();
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Play => self.play(),
            Message::Pause => self.pause(),
            Message::Stop => {
                self.stop();
            }
            Message::StepForward => self.step_forward(),
            Message::Cancel => self.cancel_and_close(),
            Message::DigitalValuesObserved { time, values } => {
                self.observe_digital_values(time, values);
            }
        }
        Task::none()
    }

    /// Ports Ghidra function `FUN_0133b970` at `0x0133B970`.
    ///
    /// The database maps the original function to
    /// `TMixedDigitalStepByStep.FormCreate`. It clears only the pointer that
    /// tracks the selected grouped transport control.
    pub const fn initialize_form(&mut self) {
        self.current_transport = None;
    }

    /// Ports Ghidra function `FUN_0133b980` at `0x0133B980`.
    ///
    /// The database maps the original function to
    /// `TMixedDigitalStepByStep.FormShow`. It selects help context `0x453` and
    /// resets the panel to its paused time-zero state.
    pub fn show_form(&mut self) {
        self.help_context = HELP_CONTEXT;
        self.reset_panel();
    }

    /// Ports Ghidra function `FUN_0133b9b0` at `0x0133B9B0`.
    ///
    /// It writes time zero, pauses the cooperative loop, clears pending step
    /// and stop requests, and refreshes the cached digital-node value string.
    pub fn reset_panel(&mut self) {
        self.write_analysis_time(0.0);
        self.run_gate = RunGate::Paused;
        self.step_request = StepRequest::None;
        self.stop_request = StopRequest::None;
        self.refresh_digital_node_cache();
    }

    /// Ports Ghidra function `FUN_0133ba00` at `0x0133BA00`.
    ///
    /// The recovered function writes the localized time label to grid cell
    /// `0,0`, formats the supplied analysis time, and writes it to cell `1,0`.
    /// The Rust standard formatter provides the display adapter.
    pub fn write_analysis_time(&mut self, time: f64) {
        self.current_time = time;
        self.displayed_time = time.to_string();
    }

    /// Ports Ghidra function `FUN_0133bad0` at `0x0133BAD0`.
    ///
    /// It compares the latest digital-node value string with the cached value,
    /// replaces the cache, and reports whether the string changed.
    pub fn detect_digital_node_change(&mut self, values: String) -> bool {
        let changed = self.cached_digital_node_values != values;
        self.cached_digital_node_values = values;
        changed
    }

    /// Ports Ghidra function `FUN_0133bb70` at `0x0133BB70`.
    ///
    /// It reads the current digital-node value string and replaces the cached
    /// value without performing a comparison.
    pub fn refresh_digital_node_cache(&mut self) {
        self.cached_digital_node_values = self.digital_node_values.clone();
    }

    /// Ports Ghidra function `FUN_0133bc00` at `0x0133BC00`.
    ///
    /// The database maps the original function to
    /// `TMixedDigitalStepByStep.CancelBtnClick`. It leaves the active editor
    /// interaction and requests a modeless close without resetting the panel.
    pub fn cancel_and_close(&mut self) {
        self.editor_commands
            .push(EditorInteractionCommand::LeaveInteraction);
        self.close_request = CloseRequest::Requested;
    }

    /// Ports Ghidra function `FUN_0133bc30` at `0x0133BC30`.
    ///
    /// It clears the cooperative pause gate and records Play as the selected
    /// grouped transport control. It does not restart or reset the analysis.
    pub const fn play(&mut self) {
        self.run_gate = RunGate::Running;
        self.current_transport = Some(TransportSelection::Play);
    }

    /// Ports Ghidra function `FUN_0133bc50` at `0x0133BC50`.
    ///
    /// It sets the cooperative pause gate and records Pause as the selected
    /// grouped transport control. Current analysis state and time are kept.
    pub const fn pause(&mut self) {
        self.run_gate = RunGate::Paused;
        self.current_transport = Some(TransportSelection::Pause);
    }

    /// Ports Ghidra function `FUN_0133bc70` at `0x0133BC70`.
    ///
    /// A repeated Stop selection is a no-op. Otherwise the handler stages a
    /// stop request, leaves and reactivates digital step-by-step interaction,
    /// resets the panel, and records Stop as the current transport control.
    pub fn stop(&mut self) -> bool {
        if self.current_transport == Some(TransportSelection::Stop) {
            return false;
        }

        self.stop_request = StopRequest::Requested;
        self.editor_commands
            .push(EditorInteractionCommand::LeaveInteraction);
        self.editor_commands
            .push(EditorInteractionCommand::ActivateDigitalStepByStep);
        self.reset_panel();
        self.current_transport = Some(TransportSelection::Stop);
        true
    }

    /// Ports Ghidra function `FUN_0133bcd0` at `0x0133BCD0`.
    ///
    /// It releases the pause gate, arms one step to the next detected digital
    /// value-string change, and releases any selected grouped transport
    /// button. Repeated requests do not queue a count.
    pub const fn step_forward(&mut self) {
        self.run_gate = RunGate::Running;
        self.step_request = StepRequest::NextDigitalChange;
        self.current_transport = None;
    }

    /// Ports Ghidra function `FUN_0133bd20` at `0x0133BD20`.
    ///
    /// The database maps the original function to
    /// `TMixedDigitalStepByStep.FormClose`. It selects the modeless release
    /// disposition, equivalent to Delphi `caFree`.
    #[must_use]
    pub const fn close_disposition(&self) -> CloseDisposition {
        CloseDisposition::Release
    }

    /// Ports Ghidra function `FUN_01342880` at `0x01342880`.
    ///
    /// The accepted database role identifies the recovered main analysis
    /// loop's mixed-digital transport-state consumer. The original loop pumps
    /// VCL messages while Pause is set. Iced already owns the event loop, so
    /// this adapter returns [`AnalysisLoopDirective::AwaitUiResume`] instead
    /// of blocking. While running, it refreshes the time only after a digital
    /// value-string change and consumes a one-step request at that boundary.
    pub fn consume_analysis_loop_state(
        &mut self,
        time: f64,
        values: String,
    ) -> AnalysisLoopDirective {
        if self.run_gate == RunGate::Paused {
            return AnalysisLoopDirective::AwaitUiResume;
        }

        self.digital_node_values.clone_from(&values);
        if !self.detect_digital_node_change(values) {
            return AnalysisLoopDirective::Continue;
        }

        self.write_analysis_time(time);
        if self.step_request == StepRequest::NextDigitalChange {
            self.run_gate = RunGate::Paused;
            self.step_request = StepRequest::None;
            return AnalysisLoopDirective::PausedAfterDigitalChange;
        }

        AnalysisLoopDirective::Continue
    }

    pub fn observe_digital_values(&mut self, time: f64, values: String) {
        let _ = self.consume_analysis_loop_state(time, values);
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let selection = self
            .current_transport
            .map_or("Step Forward", transport_label);
        column![
            text(TITLE).size(24),
            row![text(&self.time_label), text(&self.displayed_time)].spacing(12),
            text(format!("Selected: {selection}")),
            row![
                button("Play").on_press(Message::Play),
                button("Pause").on_press(Message::Pause),
                button("Stop").on_press(Message::Stop),
                button("Step Forward").on_press(Message::StepForward),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(8),
        ]
        .padding(16)
        .spacing(12)
        .into()
    }

    #[must_use]
    pub const fn current_transport(&self) -> Option<TransportSelection> {
        self.current_transport
    }

    #[must_use]
    pub const fn run_gate(&self) -> RunGate {
        self.run_gate
    }

    #[must_use]
    pub const fn step_request(&self) -> StepRequest {
        self.step_request
    }

    #[must_use]
    pub const fn close_request(&self) -> CloseRequest {
        self.close_request
    }

    #[must_use]
    pub fn displayed_time(&self) -> &str {
        &self.displayed_time
    }

    #[must_use]
    pub fn cached_digital_node_values(&self) -> &str {
        &self.cached_digital_node_values
    }

    #[must_use]
    pub fn editor_commands(&self) -> &[EditorInteractionCommand] {
        &self.editor_commands
    }
}

const fn transport_label(selection: TransportSelection) -> &'static str {
    match selection {
        TransportSelection::Play => "Play",
        TransportSelection::Pause => "Pause",
        TransportSelection::Stop => "Stop",
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn create_and_show_clear_selection_set_help_and_reset_panel() {
        let window = Window::new("0011".to_owned());

        assert_eq!(window.current_transport(), None);
        assert_eq!(window.help_context, HELP_CONTEXT);
        assert_eq!(window.run_gate(), RunGate::Paused);
        assert_eq!(window.step_request(), StepRequest::None);
        assert_eq!(window.stop_request, StopRequest::None);
        assert_eq!(window.displayed_time(), "0");
        assert_eq!(window.cached_digital_node_values(), "0011");
    }

    #[test]
    fn time_writer_updates_both_numeric_and_display_state() {
        let mut window = Window::default();

        window.write_analysis_time(1.25);

        assert!((window.current_time - 1.25).abs() <= f64::EPSILON);
        assert_eq!(window.displayed_time(), "1.25");
        assert_eq!(window.time_label, "Time");
    }

    #[test]
    fn digital_value_comparison_always_refreshes_the_cache() {
        let mut window = Window::new("old".to_owned());

        assert!(!window.detect_digital_node_change("old".to_owned()));
        assert!(window.detect_digital_node_change("new".to_owned()));
        assert_eq!(window.cached_digital_node_values(), "new");

        window.digital_node_values = "latest".to_owned();
        window.refresh_digital_node_cache();
        assert_eq!(window.cached_digital_node_values(), "latest");
    }

    #[test]
    fn play_and_pause_change_only_the_cooperative_transport_state() {
        let mut window = Window::new("state".to_owned());
        window.write_analysis_time(3.0);

        window.play();
        assert_eq!(window.run_gate(), RunGate::Running);
        assert_eq!(window.current_transport(), Some(TransportSelection::Play));
        assert_eq!(window.displayed_time(), "3");

        window.pause();
        assert_eq!(window.run_gate(), RunGate::Paused);
        assert_eq!(window.current_transport(), Some(TransportSelection::Pause));
        assert_eq!(window.displayed_time(), "3");
    }

    #[test]
    fn step_forward_releases_selection_and_repauses_on_next_change() {
        let mut window = Window::new("old".to_owned());
        window.pause();

        window.step_forward();

        assert_eq!(window.run_gate(), RunGate::Running);
        assert_eq!(window.step_request(), StepRequest::NextDigitalChange);
        assert_eq!(window.current_transport(), None);

        window.observe_digital_values(1.0, "old".to_owned());
        assert_eq!(window.run_gate(), RunGate::Running);
        assert_eq!(window.step_request(), StepRequest::NextDigitalChange);

        window.observe_digital_values(2.0, "new".to_owned());
        assert_eq!(window.run_gate(), RunGate::Paused);
        assert_eq!(window.step_request(), StepRequest::None);
        assert_eq!(window.displayed_time(), "2");
    }

    #[test]
    fn analysis_loop_yields_to_iced_while_paused() {
        let mut window = Window::new("old".to_owned());

        assert_eq!(
            window.consume_analysis_loop_state(1.0, "new".to_owned()),
            AnalysisLoopDirective::AwaitUiResume
        );
        assert_eq!(window.displayed_time(), "0");
        assert_eq!(window.cached_digital_node_values(), "old");
    }

    #[test]
    fn analysis_loop_consumes_step_only_after_a_digital_change() {
        let mut window = Window::new("old".to_owned());
        window.step_forward();

        assert_eq!(
            window.consume_analysis_loop_state(1.0, "old".to_owned()),
            AnalysisLoopDirective::Continue
        );
        assert_eq!(
            window.consume_analysis_loop_state(2.0, "new".to_owned()),
            AnalysisLoopDirective::PausedAfterDigitalChange
        );
        assert_eq!(window.run_gate(), RunGate::Paused);
        assert_eq!(window.step_request(), StepRequest::None);
        assert_eq!(window.displayed_time(), "2");
    }

    #[test]
    fn stop_transitions_editor_resets_panel_and_then_becomes_noop() {
        let mut window = Window::new("current".to_owned());
        window.play();
        window.write_analysis_time(4.0);

        assert!(window.stop());

        assert_eq!(window.run_gate(), RunGate::Paused);
        assert_eq!(window.step_request(), StepRequest::None);
        assert_eq!(window.stop_request, StopRequest::None);
        assert_eq!(window.displayed_time(), "0");
        assert_eq!(window.current_transport(), Some(TransportSelection::Stop));
        assert_eq!(
            window.editor_commands(),
            &[
                EditorInteractionCommand::LeaveInteraction,
                EditorInteractionCommand::ActivateDigitalStepByStep,
            ]
        );

        assert!(!window.stop());
        assert_eq!(window.editor_commands().len(), 2);
    }

    #[test]
    fn cancel_requests_close_without_reset_and_close_releases_form() {
        let mut window = Window::new("state".to_owned());
        window.play();
        window.write_analysis_time(7.0);

        window.cancel_and_close();

        assert_eq!(window.close_request(), CloseRequest::Requested);
        assert_eq!(
            window.editor_commands(),
            &[EditorInteractionCommand::LeaveInteraction]
        );
        assert_eq!(window.run_gate(), RunGate::Running);
        assert_eq!(window.displayed_time(), "7");
        assert_eq!(window.close_disposition(), CloseDisposition::Release);
    }

    #[test]
    fn digital_step_activation_synchronizes_editor_mode_toolbar_and_tool() {
        let mut editor = SchematicEditorInteractionState::default();

        editor.activate_digital_step_by_step();

        assert_eq!(editor.interaction_mode(), 2);
        assert_eq!(editor.synchronized_toolbar_mode(), Some(2));
        assert!(editor.primary_tool_down());
        assert_eq!(editor.interaction_change_generation(), 1);
        assert!(editor.editor_state_18e8());
    }

    #[test]
    fn leave_clears_both_controls_and_reports_activity_byte_readiness() {
        let mut editor = SchematicEditorInteractionState::default();
        editor.activate_digital_step_by_step();
        editor.set_mixed_mode_panel_selection(Some(true));
        editor.set_activity(true, false);

        assert!(!editor.leave_current_interaction());
        assert!(!editor.primary_tool_down());
        assert_eq!(editor.mixed_mode_panel_selection(), Some(false));
        assert_eq!(editor.interaction_change_generation(), 2);
        assert_eq!(editor.mixed_mode_change_generation(), 1);

        editor.set_activity(false, false);
        assert!(editor.leave_current_interaction());
        assert_eq!(editor.interaction_change_generation(), 3);
        assert_eq!(editor.mixed_mode_change_generation(), 2);
    }

    #[test]
    fn absent_mixed_mode_panel_skips_secondary_synchronization() {
        let mut editor = SchematicEditorInteractionState::default();

        assert!(editor.leave_current_interaction());

        assert_eq!(editor.mixed_mode_panel_selection(), None);
        assert_eq!(editor.mixed_mode_change_generation(), 0);
        assert_eq!(editor.interaction_change_generation(), 1);
    }

    #[test]
    fn stop_commands_leave_then_reactivate_digital_step_interaction() {
        let mut window = Window::new("state".to_owned());
        let mut editor = SchematicEditorInteractionState::default();
        editor.set_mixed_mode_panel_selection(Some(true));
        assert!(window.stop());

        let results: Vec<_> = window
            .editor_commands()
            .iter()
            .copied()
            .map(|command| command.apply(&mut editor))
            .collect();

        assert_eq!(results, [Some(true), None]);
        assert_eq!(editor.interaction_mode(), 2);
        assert_eq!(editor.synchronized_toolbar_mode(), Some(2));
        assert!(editor.primary_tool_down());
        assert!(editor.editor_state_18e8());
        assert_eq!(editor.mixed_mode_panel_selection(), Some(false));
        assert_eq!(editor.interaction_change_generation(), 2);
        assert_eq!(editor.mixed_mode_change_generation(), 1);
    }
}
