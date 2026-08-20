use std::time::{Duration, Instant};

use iced::widget::{button, checkbox, column, container, row, text};
use iced::{Element, Length, Subscription, Task};
use tiara_core::step_analysis::{
    AdvanceResult, BackendKind, BackendModel, EventInterval, SimulationScenario,
    common_recorded_interval,
};

pub const TITLE: &str = "Step Analysis";
const DEFAULT_DELAY_MILLISECONDS: u16 = 0x0400;
const STOP_POLL_MILLISECONDS: u64 = 100;
const TIME_EPSILON: f64 = 1.0e-12;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum Transport {
    Play,
    Pause,
    #[default]
    Stop,
    Previous,
    Next,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
#[repr(u8)]
pub enum CloseAction {
    Free = 2,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum Control {
    Play,
    Pause,
    Stop,
    Previous,
    Next,
    SpeedUp,
    SlowDown,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
struct EnabledControls(u8);

impl EnabledControls {
    const STOPPED: Self = Self::from_controls(&[Control::Play, Control::Next]);
    const PLAYING: Self = Self::from_controls(&[
        Control::Pause,
        Control::Stop,
        Control::SpeedUp,
        Control::SlowDown,
    ]);
    const PAUSED_OR_STEPPING: Self = Self::from_controls(&[
        Control::Play,
        Control::Stop,
        Control::Previous,
        Control::Next,
    ]);

    const fn from_controls(controls: &[Control]) -> Self {
        let mut bits = 0;
        let mut index = 0;
        while index < controls.len() {
            bits |= 1 << controls[index] as u8;
            index += 1;
        }
        Self(bits)
    }

    const fn contains(self, control: Control) -> bool {
        self.0 & (1 << control as u8) != 0
    }

    const fn disable(&mut self, control: Control) {
        self.0 &= !(1 << control as u8);
    }
}

#[derive(Debug, Clone, Copy)]
pub enum Message {
    Play,
    Pause,
    Stop,
    Previous,
    Next,
    SpeedUp,
    SlowDown,
    IdealModeChanged(bool),
    Tick(Instant),
    RequestClose,
    DeferredClose,
}

#[derive(Debug)]
struct IdealState {
    checked: bool,
    runtime: bool,
    control_enabled: bool,
}

#[derive(Debug)]
struct PlaybackState {
    timed: bool,
    forward: bool,
    refresh: bool,
}

#[derive(Debug)]
struct LoopState {
    exit: bool,
    bounded_exit: bool,
    idle: bool,
}

#[derive(Debug)]
struct SessionState {
    active: bool,
    stop_pending: bool,
    stop_in_progress: bool,
}

#[derive(Debug)]
struct CloseState {
    requested: bool,
    deferred: bool,
    visible: bool,
}

#[derive(Debug)]
struct CachedButtonState {
    play_not_down: bool,
    stop_not_down: bool,
}

#[derive(Debug)]
pub struct State {
    backend_kind: BackendKind,
    scenario: SimulationScenario,
    backend: Option<BackendModel>,
    result_entries: Vec<String>,
    ideal: IdealState,
    special_mode_override: Option<bool>,
    transport: Transport,
    enabled_controls: EnabledControls,
    selected_tag: u8,
    cached_buttons: CachedButtonState,
    playback: PlaybackState,
    analysis_loop: LoopState,
    session: SessionState,
    controls_enabled: bool,
    current_time: f64,
    previous_time: f64,
    displayed_step_time: f64,
    end_time: f64,
    interval: EventInterval,
    delay_milliseconds: u16,
    progress_count: u64,
    alternate_no_progress_count: u8,
    force_alternate_no_progress: bool,
    analysis_error: Option<String>,
    close: CloseState,
}

impl State {
    #[must_use]
    pub fn new(backend_kind: BackendKind, scenario: SimulationScenario) -> Self {
        let sentinel = scenario.end_time.max(1.0);
        let mut state = Self {
            backend_kind,
            scenario,
            backend: None,
            result_entries: Vec::new(),
            ideal: IdealState {
                checked: true,
                runtime: true,
                control_enabled: true,
            },
            special_mode_override: None,
            transport: Transport::Stop,
            enabled_controls: EnabledControls::STOPPED,
            selected_tag: 3,
            cached_buttons: CachedButtonState {
                play_not_down: true,
                stop_not_down: false,
            },
            playback: PlaybackState {
                timed: false,
                forward: false,
                refresh: false,
            },
            analysis_loop: LoopState {
                exit: false,
                bounded_exit: false,
                idle: true,
            },
            session: SessionState {
                active: false,
                stop_pending: false,
                stop_in_progress: false,
            },
            controls_enabled: true,
            current_time: 0.0,
            previous_time: 0.0,
            displayed_step_time: TIME_EPSILON,
            end_time: sentinel,
            interval: EventInterval {
                lower: -sentinel,
                upper: sentinel,
            },
            delay_milliseconds: DEFAULT_DELAY_MILLISECONDS,
            progress_count: 0,
            alternate_no_progress_count: 0,
            force_alternate_no_progress: false,
            analysis_error: None,
            close: CloseState {
                requested: false,
                deferred: false,
                visible: true,
            },
        };
        state.rebuild_analysis();
        state
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Play => self.play(),
            Message::Pause => {
                self.pause();
                Task::none()
            }
            Message::Stop => self.stop(),
            Message::Previous => self.previous(),
            Message::Next => self.step_forward(),
            Message::SpeedUp => {
                self.speed_up();
                Task::none()
            }
            Message::SlowDown => {
                self.slow_down();
                Task::none()
            }
            Message::IdealModeChanged(checked) => {
                self.change_ideal_mode(checked);
                Task::none()
            }
            Message::Tick(_) => {
                self.dispatch_step();
                if self.session.stop_pending && self.analysis_loop.idle {
                    self.finish_stop();
                }
                if self.close.deferred && !self.session.active {
                    self.close.visible = false;
                }
                Task::none()
            }
            Message::RequestClose => self.request_close(),
            Message::DeferredClose => self.deferred_stop_and_close(),
        }
    }

    pub fn subscription(&self) -> Subscription<Message> {
        if self.session.stop_pending {
            iced::time::every(Duration::from_millis(STOP_POLL_MILLISECONDS)).map(Message::Tick)
        } else if self.playback.timed && !self.analysis_loop.exit {
            iced::time::every(Duration::from_millis(u64::from(self.delay_milliseconds)))
                .map(Message::Tick)
        } else {
            Subscription::none()
        }
    }

    /// Reimplements Ghidra function `FUN_014fd660` at `0x014FD660`.
    pub fn tear_down_backend(&mut self) {
        self.backend = None;
        self.result_entries.clear();
    }

    /// Reimplements Ghidra function `FUN_014fd730` at `0x014FD730`.
    pub fn create_backend(&mut self) {
        self.backend = Some(BackendModel::new(
            self.backend_kind,
            self.ideal.runtime,
            self.scenario.clone(),
        ));
    }

    /// Reimplements Ghidra function `FUN_014fd9d0` at `0x014FD9D0`.
    pub fn reset_initial_display(&mut self) {
        self.current_time = 0.0;
        self.previous_time = 0.0;
        self.displayed_step_time = TIME_EPSILON;
        self.end_time = self.scenario.end_time;
        if let Some(backend) = &mut self.backend {
            backend.reset();
        }
        self.interval = common_recorded_interval(
            &self.scenario.recorded_series,
            self.current_time,
            self.end_time.max(1.0),
        );
    }

    /// Reimplements Ghidra function `FUN_014fe830` at `0x014FE830`.
    pub fn rebuild_analysis(&mut self) {
        self.ideal.runtime = self.special_mode_override.unwrap_or(self.ideal.checked);
        self.create_backend();
        self.result_entries = (0..self.scenario.node_count)
            .map(|index| format!("Node {}", index + 1))
            .collect();
        self.delay_milliseconds = DEFAULT_DELAY_MILLISECONDS;
        self.progress_count = 0;
        self.analysis_error = None;
        self.playback = PlaybackState {
            timed: false,
            forward: false,
            refresh: false,
        };
        self.analysis_loop = LoopState {
            exit: false,
            bounded_exit: false,
            idle: true,
        };
        self.reset_initial_display();
        self.apply_transport_state(Transport::Stop);
    }

    /// Reimplements Ghidra function `FUN_014fedb0` at `0x014FEDB0`.
    pub fn dispatch_step(&mut self) {
        if self.analysis_loop.exit {
            self.analysis_loop.idle = true;
            return;
        }
        match self.backend_kind {
            BackendKind::Normal => self.run_normal_iteration(),
            BackendKind::Alternate => self.run_alternate_iteration(),
        }
    }

    /// Reimplements Ghidra function `FUN_014fede0` at `0x014FEDE0`.
    pub fn run_normal_iteration(&mut self) {
        self.analysis_loop.idle = false;
        self.advance_or_refresh();
        self.finish_bounded_iteration();
    }

    /// Reimplements Ghidra function `FUN_014ff340` at `0x014FF340`.
    pub fn run_alternate_iteration(&mut self) {
        self.analysis_loop.idle = false;
        if self.force_alternate_no_progress {
            self.alternate_no_progress_count = self.alternate_no_progress_count.saturating_add(1);
            if self.alternate_no_progress_count >= 50 {
                self.analysis_error =
                    Some("Analysis can't be performed: use delay by the components".to_owned());
                self.session.active = false;
                self.analysis_loop.exit = true;
                self.analysis_loop.bounded_exit = true;
                self.close.requested = true;
                self.close.visible = false;
            }
        } else {
            self.alternate_no_progress_count = 0;
            self.advance_or_refresh();
        }
        self.finish_bounded_iteration();
    }

    /// Reimplements Ghidra function `FUN_014ffa60` at `0x014FFA60`.
    pub const fn apply_transport_state(&mut self, transport: Transport) {
        self.transport = transport;
        self.selected_tag = match transport {
            Transport::Play => 1,
            Transport::Pause => 2,
            Transport::Stop => 3,
            Transport::Previous => 4,
            Transport::Next => 5,
        };
        self.enabled_controls = match transport {
            Transport::Stop => EnabledControls::STOPPED,
            Transport::Play => EnabledControls::PLAYING,
            Transport::Pause | Transport::Previous | Transport::Next => {
                EnabledControls::PAUSED_OR_STEPPING
            }
        };
        self.cached_buttons.play_not_down = !matches!(transport, Transport::Play);
        self.cached_buttons.stop_not_down = !matches!(transport, Transport::Stop);
    }

    /// Reimplements Ghidra function `FUN_014ffdd0` at `0x014FFDD0`.
    pub fn play(&mut self) -> Task<Message> {
        if !self.enabled_controls.contains(Control::Play) {
            return Task::none();
        }
        self.apply_transport_state(Transport::Play);
        self.playback.timed = true;
        self.playback.forward = true;
        self.analysis_loop.exit = false;
        self.analysis_loop.bounded_exit = false;
        self.ideal.control_enabled = false;
        self.session.active = true;
        self.analysis_loop.idle = false;
        Task::none()
    }

    /// Reimplements Ghidra function `FUN_014ffe40` at `0x014FFE40`.
    pub const fn pause(&mut self) {
        self.apply_transport_state(Transport::Pause);
        self.playback.timed = false;
        self.playback.forward = false;
        self.playback.refresh = false;
        self.analysis_loop.exit = true;
        self.analysis_loop.bounded_exit = true;
    }

    /// Reimplements Ghidra function `FUN_014ffe80` at `0x014FFE80`.
    pub fn stop(&mut self) -> Task<Message> {
        if self.transport == Transport::Stop && !self.session.stop_pending {
            return Task::none();
        }
        if !self.session.stop_pending {
            self.apply_transport_state(Transport::Stop);
            self.analysis_loop.exit = true;
            self.analysis_loop.bounded_exit = true;
        }
        if self.analysis_loop.idle {
            self.finish_stop();
        } else {
            self.session.stop_pending = true;
            self.controls_enabled = false;
        }
        Task::none()
    }

    /// Reimplements Ghidra function `FUN_014fffb0` at `0x014FFFB0`.
    pub fn previous(&mut self) -> Task<Message> {
        self.apply_transport_state(Transport::Previous);
        self.playback.timed = false;
        self.playback.forward = false;
        self.playback.refresh = true;
        self.analysis_loop.exit = false;
        self.analysis_loop.bounded_exit = true;
        self.interval = common_recorded_interval(
            &self.scenario.recorded_series,
            self.current_time - TIME_EPSILON,
            self.end_time.max(1.0),
        );
        self.current_time = self.interval.lower;
        if self.current_time < 0.0 {
            self.enabled_controls.disable(Control::Previous);
        }
        self.ideal.control_enabled = false;
        self.session.active = false;
        Task::done(Message::Tick(Instant::now()))
    }

    /// Reimplements Ghidra function `FUN_01500090` at `0x01500090`.
    pub fn step_forward(&mut self) -> Task<Message> {
        self.apply_transport_state(Transport::Next);
        self.playback.timed = false;
        self.playback.forward = true;
        self.analysis_loop.exit = false;
        self.analysis_loop.bounded_exit = true;
        self.ideal.control_enabled = false;
        self.session.active = false;
        Task::done(Message::Tick(Instant::now()))
    }

    /// Reimplements Ghidra function `FUN_015000f0` at `0x015000F0`.
    pub const fn speed_up(&mut self) {
        if self.delay_milliseconds > 1 {
            self.delay_milliseconds /= 2;
        }
    }

    /// Reimplements Ghidra function `FUN_01500110` at `0x01500110`.
    pub const fn slow_down(&mut self) {
        if self.delay_milliseconds < 65_534 {
            self.delay_milliseconds = self.delay_milliseconds.saturating_mul(2);
        }
    }

    /// Reimplements Ghidra function `FUN_01500130` at `0x01500130`.
    pub fn request_close(&mut self) -> Task<Message> {
        self.close.requested = true;
        if self.query_close() {
            self.close.visible = false;
            Task::none()
        } else {
            Task::done(Message::DeferredClose)
        }
    }

    /// Reimplements Ghidra function `FUN_01500140` at `0x01500140`.
    pub fn deferred_stop_and_close(&mut self) -> Task<Message> {
        self.close.deferred = true;
        if !self.session.stop_in_progress && self.session.active {
            self.session.stop_in_progress = true;
            return self.stop();
        }
        if !self.session.active {
            self.close.visible = false;
        }
        Task::none()
    }

    /// Reimplements Ghidra function `FUN_01500190` at `0x01500190`.
    #[must_use]
    pub const fn close_action(&self) -> CloseAction {
        CloseAction::Free
    }

    /// Reimplements Ghidra function `FUN_015001a0` at `0x015001A0`.
    #[must_use]
    pub const fn query_close(&mut self) -> bool {
        let can_close = !self.session.active;
        if !can_close {
            self.close.deferred = true;
        }
        can_close
    }

    /// Reimplements Ghidra function `FUN_01500280` at `0x01500280`.
    pub fn change_ideal_mode(&mut self, checked: bool) {
        if checked == self.ideal.runtime {
            return;
        }
        self.ideal.checked = checked;
        self.ideal.runtime = checked;
        self.controls_enabled = false;
        self.ideal.control_enabled = false;
        self.tear_down_backend();
        self.rebuild_analysis();
        self.controls_enabled = true;
        self.ideal.control_enabled = true;
    }

    pub fn set_special_mode_override(&mut self, mode: Option<bool>) {
        self.special_mode_override = mode;
        self.rebuild_analysis();
    }

    fn advance_or_refresh(&mut self) {
        if self.playback.forward {
            let result = self
                .backend
                .as_mut()
                .map_or(AdvanceResult::Terminal, |backend| {
                    backend.advance_after(self.current_time)
                });
            match result {
                AdvanceResult::Advanced(time) => {
                    self.previous_time = self.current_time;
                    self.current_time = time;
                    self.progress_count = self.progress_count.saturating_add(1);
                }
                AdvanceResult::Terminal => {
                    self.analysis_loop.exit = true;
                    self.analysis_loop.bounded_exit = true;
                    self.enabled_controls.disable(Control::Play);
                    self.enabled_controls.disable(Control::Next);
                }
            }
        } else if self.playback.refresh
            && let Some(backend) = &mut self.backend
        {
            backend.refresh_at(self.current_time);
        }
    }

    const fn finish_bounded_iteration(&mut self) {
        if self.analysis_loop.bounded_exit || self.analysis_loop.exit {
            self.analysis_loop.idle = true;
        }
    }

    fn finish_stop(&mut self) {
        self.session.stop_in_progress = true;
        self.tear_down_backend();
        self.rebuild_analysis();
        self.controls_enabled = true;
        self.ideal.control_enabled = true;
        self.session.stop_pending = false;
        self.session.active = false;
        self.session.stop_in_progress = false;
        if self.close.deferred {
            self.close.visible = false;
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let transport = row![
            control_button(
                "Play",
                self.controls_enabled && self.enabled_controls.contains(Control::Play),
                Message::Play,
            ),
            control_button(
                "Pause",
                self.controls_enabled && self.enabled_controls.contains(Control::Pause),
                Message::Pause,
            ),
            control_button(
                "Stop",
                self.controls_enabled && self.enabled_controls.contains(Control::Stop),
                Message::Stop,
            ),
            control_button(
                "Step Back",
                self.controls_enabled && self.enabled_controls.contains(Control::Previous),
                Message::Previous,
            ),
            control_button(
                "Step Forward",
                self.controls_enabled && self.enabled_controls.contains(Control::Next),
                Message::Next,
            ),
            control_button(
                "Speed Up",
                self.controls_enabled && self.enabled_controls.contains(Control::SpeedUp),
                Message::SpeedUp,
            ),
            control_button(
                "Slow Down",
                self.controls_enabled && self.enabled_controls.contains(Control::SlowDown),
                Message::SlowDown,
            ),
        ]
        .spacing(4);
        let ideal_control = checkbox("Ideal components", self.ideal.checked);
        let ideal_control = if self.controls_enabled && self.ideal.control_enabled {
            ideal_control.on_toggle(Message::IdealModeChanged)
        } else {
            ideal_control
        };
        container(
            column![
                text(TITLE).size(24),
                ideal_control,
                transport,
                text(format!("Time: {}", self.current_time)),
                self.analysis_error.as_ref().map_or_else(
                    || text(""),
                    |error| text(error).style(iced::widget::text::danger),
                ),
                button("Close").on_press(Message::RequestClose),
            ]
            .spacing(10),
        )
        .padding(16)
        .width(Length::Fill)
        .into()
    }

    #[must_use]
    pub const fn transport(&self) -> Transport {
        self.transport
    }

    #[must_use]
    pub const fn current_time(&self) -> f64 {
        self.current_time
    }

    #[must_use]
    pub const fn delay_milliseconds(&self) -> u16 {
        self.delay_milliseconds
    }

    #[must_use]
    pub const fn selected_tag(&self) -> u8 {
        self.selected_tag
    }

    #[must_use]
    pub const fn play_not_down(&self) -> bool {
        self.cached_buttons.play_not_down
    }

    #[must_use]
    pub const fn stop_not_down(&self) -> bool {
        self.cached_buttons.stop_not_down
    }

    #[must_use]
    pub const fn previous_time(&self) -> f64 {
        self.previous_time
    }

    #[must_use]
    pub const fn displayed_step_time(&self) -> f64 {
        self.displayed_step_time
    }

    #[must_use]
    pub const fn progress_count(&self) -> u64 {
        self.progress_count
    }

    #[must_use]
    pub const fn close_requested(&self) -> bool {
        self.close.requested
    }

    #[must_use]
    pub const fn is_visible(&self) -> bool {
        self.close.visible
    }

    #[cfg(test)]
    const fn force_alternate_no_progress(&mut self, force: bool) {
        self.force_alternate_no_progress = force;
    }
}

fn control_button(label: &str, enabled: bool, message: Message) -> Element<'_, Message> {
    let button = button(label);
    if enabled {
        button.on_press(message).into()
    } else {
        button.into()
    }
}

#[cfg(test)]
mod tests {
    use std::time::Instant;

    use iced::Task;
    use tiara_core::step_analysis::{BackendKind, SimulationScenario};

    use super::{CloseAction, DEFAULT_DELAY_MILLISECONDS, Message, State, TIME_EPSILON, Transport};

    fn discard(task: Task<Message>) {
        drop(task);
    }

    fn assert_time_equal(actual: f64, expected: f64) {
        assert!((actual - expected).abs() <= TIME_EPSILON);
    }

    #[test]
    fn rebuild_creates_buffers_results_and_initial_display() {
        let state = State::new(BackendKind::Normal, SimulationScenario::default());
        assert!(state.backend.is_some());
        assert_eq!(state.result_entries.len(), state.scenario.node_count);
        assert_time_equal(state.current_time(), 0.0);
        assert_eq!(state.delay_milliseconds(), DEFAULT_DELAY_MILLISECONDS);
    }

    #[test]
    fn play_pause_and_resume_keep_current_time() {
        let mut state = State::new(BackendKind::Normal, SimulationScenario::default());
        discard(state.update(Message::Play));
        discard(state.update(Message::Tick(Instant::now())));
        let paused_time = state.current_time();
        discard(state.update(Message::Pause));
        assert_eq!(state.transport(), Transport::Pause);
        discard(state.update(Message::Play));
        assert_time_equal(state.current_time(), paused_time);
    }

    #[test]
    fn next_advances_without_playback_delay() {
        let mut state = State::new(BackendKind::Normal, SimulationScenario::default());
        discard(state.update(Message::Next));
        discard(state.update(Message::Tick(Instant::now())));
        assert_time_equal(state.current_time(), 1.0);
        assert!(!state.playback.timed);
    }

    #[test]
    fn previous_uses_retained_event_history() {
        let mut state = State::new(BackendKind::Normal, SimulationScenario::default());
        state.current_time = 2.0;
        discard(state.update(Message::Previous));
        discard(state.update(Message::Tick(Instant::now())));
        assert_time_equal(state.current_time(), 1.0);
    }

    #[test]
    fn speed_controls_preserve_recovered_bounds() {
        let mut state = State::new(BackendKind::Normal, SimulationScenario::default());
        state.speed_up();
        assert_eq!(state.delay_milliseconds(), 512);
        state.slow_down();
        assert_eq!(state.delay_milliseconds(), 1_024);
        state.delay_milliseconds = 1;
        state.speed_up();
        assert_eq!(state.delay_milliseconds(), 1);
    }

    #[test]
    fn cooperative_stop_rebuilds_ready_state() {
        let mut state = State::new(BackendKind::Normal, SimulationScenario::default());
        discard(state.update(Message::Play));
        discard(state.update(Message::Stop));
        assert!(state.session.stop_pending);
        discard(state.update(Message::Tick(Instant::now())));
        assert_eq!(state.transport(), Transport::Stop);
        assert!(!state.session.active);
        assert_time_equal(state.current_time(), 0.0);
        assert!(state.controls_enabled);
    }

    #[test]
    fn active_close_is_vetoed_until_deferred_stop_finishes() {
        let mut state = State::new(BackendKind::Normal, SimulationScenario::default());
        discard(state.update(Message::Play));
        assert!(!state.query_close());
        discard(state.update(Message::DeferredClose));
        discard(state.update(Message::Tick(Instant::now())));
        assert!(!state.is_visible());
        assert_eq!(state.close_action(), CloseAction::Free);
        assert_eq!(state.close_action() as u8, 2);
    }

    #[test]
    fn ideal_mode_no_change_is_no_op_and_change_rebuilds() {
        let mut state = State::new(BackendKind::Normal, SimulationScenario::default());
        let original_backend = state.backend.clone();
        state.change_ideal_mode(true);
        assert_eq!(state.backend, original_backend);
        state.change_ideal_mode(false);
        assert!(!state.ideal.runtime);
        assert_eq!(state.delay_milliseconds(), DEFAULT_DELAY_MILLISECONDS);
    }

    #[test]
    fn alternate_backend_reports_fifty_no_progress_iterations() {
        let mut state = State::new(BackendKind::Alternate, SimulationScenario::default());
        state.force_alternate_no_progress(true);
        state.analysis_loop.exit = false;
        state.analysis_loop.bounded_exit = false;
        for _ in 0..50 {
            state.run_alternate_iteration();
            state.analysis_loop.idle = false;
        }
        assert!(state.analysis_error.is_some());
        assert!(!state.session.active);
        assert!(state.close_requested());
        assert!(!state.is_visible());
    }

    #[test]
    fn special_mode_override_controls_effective_ideal_mode() {
        let mut state = State::new(BackendKind::Normal, SimulationScenario::default());
        state.set_special_mode_override(Some(false));
        assert!(!state.ideal.runtime);
        assert!(!state.backend.as_ref().expect("backend").ideal_mode);
    }
}
