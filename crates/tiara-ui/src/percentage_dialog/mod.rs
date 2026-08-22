//! Single-calculation progress dialog controls.
//!
//! `iced` supplies the window state, messages, and widgets. The calculation
//! callback, main-window command route, and display timer remain host adapters
//! because they belong to the application runtime.

use std::time::Duration;

use iced::widget::{button, column, container, progress_bar, row, text};
use iced::{Alignment, Element, Length};

pub const TITLE: &str = "Calculating";
pub const FORM_RESOURCE: &str = "PercentageDlg";
pub const MAIN_WINDOW_CONTROL_MESSAGE: u32 = 0x123b;

const REQUEST_MODAL_RESULT: i16 = -11;
const NORMAL_MODAL_RESULT: i16 = 0;
const DISPLAY_UPDATE_INTERVAL: Duration = Duration::from_millis(100);
const PAUSE_CAPTION: &str = "Pause|Run";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum CalculationPhase {
    #[default]
    Running,
    Paused,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum RequestState {
    #[default]
    Idle,
    Pending,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ClosePermission {
    #[default]
    Blocked,
    Allowed,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MainWindowCommand {
    Cancel = 1,
    Preview = 2,
    Resume = 3,
}

pub trait ProgressDialogHost {
    /// Invokes the calculation-owned cancel callback when one is available.
    fn cancel_running_calculation(&mut self);

    /// Sends one `0x123b` command when the main window is available.
    fn send_main_window_command(&mut self, command: MainWindowCommand);

    /// Removes the periodic display-update callback.
    fn remove_display_updates(&mut self);

    /// Registers the periodic display-update callback.
    fn schedule_display_updates(&mut self, interval: Duration);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    CancelPressed,
    PreviewPressed,
    PauseResumePressed,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    phase: CalculationPhase,
    close_permission: ClosePermission,
    preview_request: RequestState,
    pause_request: RequestState,
    modal_result: i16,
    stored_pause_caption: String,
    displayed_pause_caption: String,
    progress_percent: u8,
    status_text: String,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            phase: CalculationPhase::Running,
            close_permission: ClosePermission::Blocked,
            preview_request: RequestState::Idle,
            pause_request: RequestState::Idle,
            modal_result: NORMAL_MODAL_RESULT,
            stored_pause_caption: PAUSE_CAPTION.to_owned(),
            displayed_pause_caption: caption_before_separator(PAUSE_CAPTION).to_owned(),
            progress_percent: 0,
            status_text: String::new(),
        }
    }
}

impl Window {
    pub fn update(&mut self, message: Message, host: &mut impl ProgressDialogHost) {
        match message {
            Message::CancelPressed => self.request_cancellation(host),
            Message::PreviewPressed => self.request_preview(host),
            Message::PauseResumePressed => self.request_pause_or_resume(host),
        }
    }

    /// Ports Ghidra function `FUN_01af11d0` at `0x01AF11D0`.
    ///
    /// Cancellation always permits the modal dialog to close. Running state
    /// invokes the optional calculation callback through the host. Paused
    /// state sends main-window command 1 when that route is available.
    pub fn request_cancellation(&mut self, host: &mut impl ProgressDialogHost) {
        self.close_permission = ClosePermission::Allowed;
        match self.phase {
            CalculationPhase::Running => host.cancel_running_calculation(),
            CalculationPhase::Paused => {
                host.send_main_window_command(MainWindowCommand::Cancel);
            }
        }
    }

    /// Ports Ghidra function `FUN_01af1240` at `0x01AF1240`.
    ///
    /// Running state creates one pending preview request and sets modal result
    /// -11. A repeated request is a no-op. Paused state sends main-window
    /// command 2 without changing the one-shot request flag.
    pub fn request_preview(&mut self, host: &mut impl ProgressDialogHost) {
        match self.phase {
            CalculationPhase::Running => {
                if self.preview_request == RequestState::Idle {
                    self.preview_request = RequestState::Pending;
                    self.modal_result = REQUEST_MODAL_RESULT;
                }
            }
            CalculationPhase::Paused => {
                host.send_main_window_command(MainWindowCommand::Preview);
            }
        }
    }

    /// Ports Ghidra function `FUN_01af18b0` at `0x01AF18B0`.
    ///
    /// A new running-state pause request removes display updates, sets the
    /// one-shot request, and sets modal result -11. A repeated request is a
    /// no-op. Paused state sends command 3 when possible, resumes locally,
    /// displays `Pause`, and restarts 100 millisecond updates.
    pub fn request_pause_or_resume(&mut self, host: &mut impl ProgressDialogHost) {
        match self.phase {
            CalculationPhase::Running => {
                if self.pause_request == RequestState::Idle {
                    host.remove_display_updates();
                    self.pause_request = RequestState::Pending;
                    self.modal_result = REQUEST_MODAL_RESULT;
                }
            }
            CalculationPhase::Paused => {
                host.send_main_window_command(MainWindowCommand::Resume);
                self.phase = CalculationPhase::Running;
                caption_before_separator(&self.stored_pause_caption)
                    .clone_into(&mut self.displayed_pause_caption);
                host.schedule_display_updates(DISPLAY_UPDATE_INTERVAL);
            }
        }
    }

    /// Records that calculation code consumed the preview request.
    pub fn complete_preview_request(&mut self) {
        if self.preview_request == RequestState::Pending {
            self.preview_request = RequestState::Idle;
            self.modal_result = NORMAL_MODAL_RESULT;
        }
    }

    /// Records that calculation code consumed the pause request and paused.
    pub fn enter_paused_state(&mut self) {
        if self.pause_request == RequestState::Pending {
            self.pause_request = RequestState::Idle;
            self.modal_result = NORMAL_MODAL_RESULT;
            self.phase = CalculationPhase::Paused;
            caption_after_separator(&self.stored_pause_caption)
                .clone_into(&mut self.displayed_pause_caption);
        }
    }

    pub fn set_progress(&mut self, percent: u8, status: impl Into<String>) {
        self.progress_percent = percent.min(100);
        self.status_text = status.into();
    }

    #[must_use]
    pub const fn phase(&self) -> CalculationPhase {
        self.phase
    }

    #[must_use]
    pub const fn can_close(&self) -> bool {
        matches!(self.close_permission, ClosePermission::Allowed)
    }

    #[must_use]
    pub const fn preview_request(&self) -> RequestState {
        self.preview_request
    }

    #[must_use]
    pub const fn pause_request(&self) -> RequestState {
        self.pause_request
    }

    #[must_use]
    pub const fn modal_result(&self) -> i16 {
        self.modal_result
    }

    #[must_use]
    pub fn pause_button_caption(&self) -> &str {
        &self.displayed_pause_caption
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        container(
            column![
                text(&self.status_text),
                progress_bar(0.0..=100.0, f32::from(self.progress_percent)),
                row![
                    button("Cancel").on_press(Message::CancelPressed),
                    button("Preview").on_press(Message::PreviewPressed),
                    button(self.displayed_pause_caption.as_str())
                        .on_press(Message::PauseResumePressed),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
            ]
            .spacing(12),
        )
        .padding(16)
        .width(Length::Fill)
        .into()
    }
}

fn caption_before_separator(caption: &str) -> &str {
    caption
        .split_once('|')
        .map_or(caption, |(before, _)| before)
}

fn caption_after_separator(caption: &str) -> &str {
    caption.split_once('|').map_or(caption, |(_, after)| after)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum HostEvent {
        CancelCallback,
        Command(MainWindowCommand),
        RemoveUpdates,
        ScheduleUpdates(Duration),
    }

    #[derive(Default)]
    struct Host {
        cancel_callback_available: bool,
        main_window_available: bool,
        events: Vec<HostEvent>,
    }

    impl ProgressDialogHost for Host {
        fn cancel_running_calculation(&mut self) {
            if self.cancel_callback_available {
                self.events.push(HostEvent::CancelCallback);
            }
        }

        fn send_main_window_command(&mut self, command: MainWindowCommand) {
            if self.main_window_available {
                self.events.push(HostEvent::Command(command));
            }
        }

        fn remove_display_updates(&mut self) {
            self.events.push(HostEvent::RemoveUpdates);
        }

        fn schedule_display_updates(&mut self, interval: Duration) {
            self.events.push(HostEvent::ScheduleUpdates(interval));
        }
    }

    #[test]
    fn running_cancel_allows_close_and_invokes_only_an_available_callback() {
        let mut window = Window::default();
        let mut host = Host {
            cancel_callback_available: true,
            ..Host::default()
        };

        window.update(Message::CancelPressed, &mut host);

        assert!(window.can_close());
        assert_eq!(host.events, [HostEvent::CancelCallback]);

        let mut no_callback_window = Window::default();
        let mut no_callback_host = Host::default();
        no_callback_window.request_cancellation(&mut no_callback_host);
        assert!(no_callback_window.can_close());
        assert!(no_callback_host.events.is_empty());
    }

    #[test]
    fn paused_cancel_allows_close_and_uses_command_one_when_host_exists() {
        let mut window = paused_window();
        let mut host = Host {
            main_window_available: true,
            ..Host::default()
        };

        window.request_cancellation(&mut host);

        assert!(window.can_close());
        assert_eq!(host.events, [HostEvent::Command(MainWindowCommand::Cancel)]);
    }

    #[test]
    fn running_preview_is_one_shot_and_consumer_resets_modal_state() {
        let mut window = Window::default();
        let mut host = Host::default();

        window.request_preview(&mut host);
        window.request_preview(&mut host);

        assert_eq!(window.preview_request(), RequestState::Pending);
        assert_eq!(window.modal_result(), REQUEST_MODAL_RESULT);
        assert!(host.events.is_empty());

        window.complete_preview_request();
        assert_eq!(window.preview_request(), RequestState::Idle);
        assert_eq!(window.modal_result(), NORMAL_MODAL_RESULT);
    }

    #[test]
    fn paused_preview_sends_command_two_without_setting_request_flag() {
        let mut window = paused_window();
        let mut host = Host {
            main_window_available: true,
            ..Host::default()
        };

        window.request_preview(&mut host);

        assert_eq!(window.preview_request(), RequestState::Idle);
        assert_eq!(window.modal_result(), NORMAL_MODAL_RESULT);
        assert_eq!(
            host.events,
            [HostEvent::Command(MainWindowCommand::Preview)]
        );
    }

    #[test]
    fn running_pause_request_removes_updates_once_and_enters_paused_state() {
        let mut window = Window::default();
        let mut host = Host::default();

        window.request_pause_or_resume(&mut host);
        window.request_pause_or_resume(&mut host);

        assert_eq!(host.events, [HostEvent::RemoveUpdates]);
        assert_eq!(window.pause_request(), RequestState::Pending);
        assert_eq!(window.modal_result(), REQUEST_MODAL_RESULT);

        window.enter_paused_state();
        assert_eq!(window.phase(), CalculationPhase::Paused);
        assert_eq!(window.pause_request(), RequestState::Idle);
        assert_eq!(window.modal_result(), NORMAL_MODAL_RESULT);
        assert_eq!(window.pause_button_caption(), "Run");
    }

    #[test]
    fn resume_sends_command_three_then_resumes_and_schedules_updates() {
        let mut window = paused_window();
        let mut host = Host {
            main_window_available: true,
            ..Host::default()
        };

        window.request_pause_or_resume(&mut host);

        assert_eq!(window.phase(), CalculationPhase::Running);
        assert_eq!(window.pause_button_caption(), "Pause");
        assert_eq!(
            host.events,
            [
                HostEvent::Command(MainWindowCommand::Resume),
                HostEvent::ScheduleUpdates(DISPLAY_UPDATE_INTERVAL),
            ]
        );
    }

    #[test]
    fn resume_without_main_window_still_restores_local_state_and_timer() {
        let mut window = paused_window();
        let mut host = Host::default();

        window.request_pause_or_resume(&mut host);

        assert_eq!(window.phase(), CalculationPhase::Running);
        assert_eq!(window.pause_button_caption(), "Pause");
        assert_eq!(
            host.events,
            [HostEvent::ScheduleUpdates(DISPLAY_UPDATE_INTERVAL)]
        );
    }

    fn paused_window() -> Window {
        let mut window = Window {
            pause_request: RequestState::Pending,
            ..Window::default()
        };
        window.enter_paused_state();
        window
    }
}
