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
const NOTEBOOK_PAGE_WIDTH: u16 = 150;

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

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ProgressTimeMarker(pub u64);

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

pub trait ProgressDialogLifecycleHost {
    fn current_time_marker(&mut self) -> ProgressTimeMarker;
    fn automation_mode_active(&mut self) -> bool;
    fn main_window_available(&mut self) -> bool;
    fn set_main_controls_enabled(&mut self, enabled: bool);
    fn application_window_count(&mut self) -> usize;
    fn set_application_window_enabled(&mut self, index: usize, enabled: bool);
    fn set_main_close_command_enabled(&mut self, enabled: bool);
}

pub trait ProgressDialogCreationHost {
    fn layout_metrics(&mut self) -> [i32; 3];
    fn initialize_progress_display(&mut self);
    fn pause_caption(&mut self) -> String;
    fn reset_shared_percentage(&mut self);
    fn apply_dialog_theme(&mut self);
    fn application_title(&mut self) -> String;
    fn title_separator(&mut self) -> String;
    fn dialog_caption(&mut self) -> String;
}

pub trait ProgressDialogDestroyHost {
    fn remove_display_updates(&mut self);
    fn restore_application_title(&mut self, title: &str);
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
    shown_at: Option<ProgressTimeMarker>,
    layout_metrics: [i32; 3],
    title_template: String,
    application_title: String,
    button_page_width: u16,
    message_page_width: u16,
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
            shown_at: None,
            layout_metrics: [0; 3],
            title_template: String::new(),
            application_title: String::new(),
            button_page_width: 0,
            message_page_width: 0,
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

    /// Implements Ghidra function `FUN_01af1560` at `0x01AF1560`.
    ///
    /// Captures the three recovered layout metrics, initializes the progress
    /// display, stores the two-part Pause/Run caption while displaying its
    /// first part, resets the shared percentage, and applies the dialog theme.
    /// It also stores the application title and builds the percentage-bearing
    /// window-title template from the application and dialog captions.
    pub fn create(&mut self, host: &mut impl ProgressDialogCreationHost) {
        self.layout_metrics = host.layout_metrics();
        host.initialize_progress_display();
        self.stored_pause_caption = host.pause_caption();
        caption_before_separator(&self.stored_pause_caption)
            .clone_into(&mut self.displayed_pause_caption);
        host.reset_shared_percentage();
        host.apply_dialog_theme();

        let application_title = host.application_title();
        let separator = host.title_separator();
        let dialog_caption = host.dialog_caption();
        self.title_template =
            format!("{application_title}{separator}{dialog_caption} - {{percent}}%");
        self.application_title = application_title;
    }

    /// Implements Ghidra function `FUN_01af12a0` at `0x01AF12A0`.
    ///
    /// Records the progress dialog's show-time marker. In normal interactive
    /// mode with a main window, it disables the calculation-sensitive main
    /// controls, every current application window, and the main window close
    /// command. Automation mode and a missing main window keep the application
    /// controls unchanged.
    pub fn show(&mut self, host: &mut impl ProgressDialogLifecycleHost) {
        self.shown_at = Some(host.current_time_marker());
        if host.automation_mode_active() || !host.main_window_available() {
            return;
        }

        host.set_main_controls_enabled(false);
        let window_count = host.application_window_count();
        for index in 0..window_count {
            host.set_application_window_enabled(index, false);
        }
        host.set_main_close_command_enabled(false);
    }

    /// Implements Ghidra function `FUN_01af1410` at `0x01AF1410`.
    ///
    /// Restores the calculation-sensitive main controls, every current
    /// application window, and the main close command when the progress dialog
    /// hides. A missing main window is a no-op. This path does not repeat the
    /// show-time automation-mode check.
    pub fn hide(&mut self, host: &mut impl ProgressDialogLifecycleHost) {
        if !host.main_window_available() {
            return;
        }

        host.set_main_controls_enabled(true);
        let window_count = host.application_window_count();
        for index in 0..window_count {
            host.set_application_window_enabled(index, true);
        }
        host.set_main_close_command_enabled(true);
    }

    /// Implements Ghidra function `FUN_01af1790` at `0x01AF1790`.
    ///
    /// Removes the progress dialog's periodic display callback, then restores
    /// the application title captured during creation.
    pub fn destroy(&mut self, host: &mut impl ProgressDialogDestroyHost) {
        host.remove_display_updates();
        host.restore_application_title(&self.application_title);
    }

    /// Implements Ghidra function `FUN_01af17e0` at `0x01AF17E0`.
    ///
    /// Refreshes the Iced pause button from the stored two-part caption when
    /// the dialog activates. Running state displays the text before the `|`;
    /// paused state displays the text after it.
    pub fn activate(&mut self) {
        let caption = match self.phase {
            CalculationPhase::Running => caption_before_separator(&self.stored_pause_caption),
            CalculationPhase::Paused => caption_after_separator(&self.stored_pause_caption),
        };
        caption.clone_into(&mut self.displayed_pause_caption);
    }

    /// Implements Ghidra function `FUN_01af19d0` at `0x01AF19D0`.
    ///
    /// Sets the active Iced button notebook page to the recovered fixed width
    /// of 150 pixels after the selected page changes.
    pub const fn button_notebook_changed(&mut self) {
        self.button_page_width = NOTEBOOK_PAGE_WIDTH;
    }

    /// Implements Ghidra function `FUN_01af1a00` at `0x01AF1A00`.
    ///
    /// Sets the active Iced message notebook page to the recovered fixed width
    /// of 150 pixels after the selected page changes.
    pub const fn message_notebook_changed(&mut self) {
        self.message_page_width = NOTEBOOK_PAGE_WIDTH;
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

    /// Implements Ghidra function `FUN_01af18a0` at `0x01AF18A0`.
    ///
    /// Supplies the Iced close request with the stored close-permission state.
    /// Cancellation changes this state to allowed; otherwise the dialog blocks
    /// an external close request.
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
    pub const fn shown_at(&self) -> Option<ProgressTimeMarker> {
        self.shown_at
    }

    #[must_use]
    pub const fn layout_metrics(&self) -> [i32; 3] {
        self.layout_metrics
    }

    #[must_use]
    pub fn title_template(&self) -> &str {
        &self.title_template
    }

    #[must_use]
    pub fn application_title(&self) -> &str {
        &self.application_title
    }

    #[must_use]
    pub const fn button_page_width(&self) -> u16 {
        self.button_page_width
    }

    #[must_use]
    pub const fn message_page_width(&self) -> u16 {
        self.message_page_width
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

    struct LifecycleHost {
        automation_mode: bool,
        main_window_available: bool,
        window_count: usize,
        events: Vec<String>,
    }

    #[derive(Default)]
    struct CreationHost(Vec<String>);

    #[derive(Default)]
    struct DestroyHost(Vec<String>);

    impl ProgressDialogDestroyHost for DestroyHost {
        fn remove_display_updates(&mut self) {
            self.0.push("remove-updates".to_owned());
        }

        fn restore_application_title(&mut self, title: &str) {
            self.0.push(format!("restore-title:{title}"));
        }
    }

    impl ProgressDialogCreationHost for CreationHost {
        fn layout_metrics(&mut self) -> [i32; 3] {
            self.0.push("layout".to_owned());
            [11, 13, 17]
        }

        fn initialize_progress_display(&mut self) {
            self.0.push("progress".to_owned());
        }

        fn pause_caption(&mut self) -> String {
            self.0.push("pause-caption".to_owned());
            "Wait|Continue".to_owned()
        }

        fn reset_shared_percentage(&mut self) {
            self.0.push("reset-percentage".to_owned());
        }

        fn apply_dialog_theme(&mut self) {
            self.0.push("theme".to_owned());
        }

        fn application_title(&mut self) -> String {
            self.0.push("application-title".to_owned());
            "TINA".to_owned()
        }

        fn title_separator(&mut self) -> String {
            self.0.push("separator".to_owned());
            " - ".to_owned()
        }

        fn dialog_caption(&mut self) -> String {
            self.0.push("dialog-caption".to_owned());
            "Calculating".to_owned()
        }
    }

    impl ProgressDialogLifecycleHost for LifecycleHost {
        fn current_time_marker(&mut self) -> ProgressTimeMarker {
            self.events.push("time".to_owned());
            ProgressTimeMarker(37)
        }

        fn automation_mode_active(&mut self) -> bool {
            self.events.push("automation".to_owned());
            self.automation_mode
        }

        fn main_window_available(&mut self) -> bool {
            self.events.push("main-window".to_owned());
            self.main_window_available
        }

        fn set_main_controls_enabled(&mut self, enabled: bool) {
            self.events.push(format!("main-controls:{enabled}"));
        }

        fn application_window_count(&mut self) -> usize {
            self.events.push("window-count".to_owned());
            self.window_count
        }

        fn set_application_window_enabled(&mut self, index: usize, enabled: bool) {
            self.events.push(format!("window:{index}:{enabled}"));
        }

        fn set_main_close_command_enabled(&mut self, enabled: bool) {
            self.events.push(format!("close:{enabled}"));
        }
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

    #[test]
    fn show_records_time_then_disables_interactive_application_controls() {
        let mut window = Window::default();
        let mut host = LifecycleHost {
            automation_mode: false,
            main_window_available: true,
            window_count: 3,
            events: Vec::new(),
        };

        window.show(&mut host);

        assert_eq!(window.shown_at(), Some(ProgressTimeMarker(37)));
        assert_eq!(
            host.events,
            [
                "time",
                "automation",
                "main-window",
                "main-controls:false",
                "window-count",
                "window:0:false",
                "window:1:false",
                "window:2:false",
                "close:false",
            ]
        );
    }

    #[test]
    fn show_in_automation_mode_only_records_time() {
        let mut window = Window::default();
        let mut host = LifecycleHost {
            automation_mode: true,
            main_window_available: true,
            window_count: 3,
            events: Vec::new(),
        };

        window.show(&mut host);

        assert_eq!(window.shown_at(), Some(ProgressTimeMarker(37)));
        assert_eq!(host.events, ["time", "automation"]);
    }

    #[test]
    fn show_without_main_window_only_records_time_and_checks_environment() {
        let mut window = Window::default();
        let mut host = LifecycleHost {
            automation_mode: false,
            main_window_available: false,
            window_count: 3,
            events: Vec::new(),
        };

        window.show(&mut host);

        assert_eq!(window.shown_at(), Some(ProgressTimeMarker(37)));
        assert_eq!(host.events, ["time", "automation", "main-window"]);
    }

    #[test]
    fn hide_restores_application_controls_when_main_window_exists() {
        let mut window = Window::default();
        let mut host = LifecycleHost {
            automation_mode: true,
            main_window_available: true,
            window_count: 2,
            events: Vec::new(),
        };

        window.hide(&mut host);

        assert_eq!(
            host.events,
            [
                "main-window",
                "main-controls:true",
                "window-count",
                "window:0:true",
                "window:1:true",
                "close:true",
            ]
        );
    }

    #[test]
    fn hide_without_main_window_is_a_no_op() {
        let mut window = Window::default();
        let mut host = LifecycleHost {
            automation_mode: false,
            main_window_available: false,
            window_count: 2,
            events: Vec::new(),
        };

        window.hide(&mut host);

        assert_eq!(host.events, ["main-window"]);
    }

    #[test]
    fn create_initializes_layout_caption_progress_theme_and_title_state() {
        let mut window = Window::default();
        let mut host = CreationHost::default();

        window.create(&mut host);

        assert_eq!(window.layout_metrics(), [11, 13, 17]);
        assert_eq!(window.pause_button_caption(), "Wait");
        assert_eq!(window.title_template(), "TINA - Calculating - {percent}%");
        assert_eq!(window.application_title(), "TINA");
        assert_eq!(
            host.0,
            [
                "layout",
                "progress",
                "pause-caption",
                "reset-percentage",
                "theme",
                "application-title",
                "separator",
                "dialog-caption",
            ]
        );
    }

    #[test]
    fn destroy_removes_display_updates_before_restoring_application_title() {
        let mut window = Window::default();
        let mut creation_host = CreationHost::default();
        let mut destroy_host = DestroyHost::default();
        window.create(&mut creation_host);

        window.destroy(&mut destroy_host);

        assert_eq!(destroy_host.0, ["remove-updates", "restore-title:TINA"]);
    }

    #[test]
    fn activation_refreshes_running_and_paused_caption_parts() {
        let mut running = Window {
            stored_pause_caption: "Wait|Continue".to_owned(),
            displayed_pause_caption: "stale".to_owned(),
            ..Window::default()
        };
        let mut paused = Window {
            phase: CalculationPhase::Paused,
            stored_pause_caption: "Wait|Continue".to_owned(),
            displayed_pause_caption: "stale".to_owned(),
            ..Window::default()
        };

        running.activate();
        paused.activate();

        assert_eq!(running.pause_button_caption(), "Wait");
        assert_eq!(paused.pause_button_caption(), "Continue");
    }

    #[test]
    fn button_notebook_change_sets_active_page_width_to_150_pixels() {
        let mut window = Window::default();

        window.button_notebook_changed();

        assert_eq!(window.button_page_width(), 150);
    }

    #[test]
    fn message_notebook_change_sets_active_page_width_to_150_pixels() {
        let mut window = Window::default();

        window.message_notebook_changed();

        assert_eq!(window.message_page_width(), 150);
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
