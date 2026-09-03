use iced::widget::{button, column, container, progress_bar, row, text};
use iced::{Element, Length, Task};
use tiara_core::trial_notice::{StartupOutcome, TrialPage, TrialPeriod};

pub const TITLE: &str = "TINA Notice";
pub const FORM_RESOURCE: &str = "TrialForm";
pub const PROGRESS_MAXIMUM: u16 = 100;
pub const LIBRARY_EVALUATION: &str = "iced 0.13 supplies modal UI state and messages; Rust enums supply typed startup and URL decisions; std has no cross-platform browser launcher, and the maintained webbrowser crate is not otherwise needed, so a narrow UrlLauncher adapter keeps external navigation host-owned and testable";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    BuyNow,
    Continue,
    Distributors,
}

pub trait UrlLauncher {
    type Error;

    /// Opens the fixed page with the host's external browser integration.
    ///
    /// # Errors
    ///
    /// Returns the host launcher error when the browser cannot be opened. The
    /// recovered trial-notice actions intentionally ignore this result.
    fn open(&mut self, page: TrialPage) -> Result<(), Self::Error>;
}

pub trait TrialNoticeStartupAdapter {
    fn trial_period(&mut self) -> TrialPeriod;
    fn show_trial_notice(&mut self, period: TrialPeriod) -> StartupOutcome;
    fn request_termination(&mut self);
}

pub trait TrialExpiryDateSource {
    type Error;

    /// Returns the host's current calendar-day value.
    ///
    /// # Errors
    ///
    /// Returns a host error when the current day is unavailable.
    fn current_day(&mut self) -> Result<i64, Self::Error>;

    /// Returns the modification day when the named application file exists.
    ///
    /// # Errors
    ///
    /// Returns a host error when file metadata cannot be read.
    fn modified_day(&mut self, file_name: &str) -> Result<Option<i64>, Self::Error>;

    /// Returns the date stored in the executable's comment information.
    ///
    /// # Errors
    ///
    /// Returns a host error when the version information is absent or invalid.
    fn executable_comment_day(&mut self) -> Result<i64, Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum NoticeMessageMode {
    Welcome,
    Expired,
}

#[derive(Debug)]
pub struct Window {
    period: TrialPeriod,
    close_allowed: bool,
    visible: bool,
    outcome: Option<StartupOutcome>,
    pending_page: Option<TrialPage>,
    progress_position: u16,
    days_left_label: String,
    total_days_label: String,
    message_mode: NoticeMessageMode,
    expiry_message: String,
}

impl Window {
    #[must_use]
    pub fn new(period: TrialPeriod) -> Self {
        let mut window = Self {
            period,
            close_allowed: false,
            visible: true,
            outcome: None,
            pending_page: None,
            progress_position: PROGRESS_MAXIMUM,
            days_left_label: String::new(),
            total_days_label: String::new(),
            message_mode: NoticeMessageMode::Welcome,
            expiry_message: String::new(),
        };
        window.form_activate();
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::BuyNow => self.buy_now(),
            Message::Continue => self.continue_startup(),
            Message::Distributors => self.open_distributors(),
        }
        Task::none()
    }

    /// Implements Ghidra function `FUN_01545dc0` at `0x01545DC0`.
    ///
    /// The fixed order page is queued for the host launcher. The modal can
    /// close and reports that normal startup must stop, regardless of whether
    /// the later external launch succeeds.
    pub const fn buy_now(&mut self) {
        self.choose_external_page(TrialPage::Order);
    }

    /// Implements Ghidra function `FUN_01545ef0` at `0x01545EF0`.
    ///
    /// Continue permits the modal to close without setting the independent
    /// stop-startup state or requesting an external page.
    pub const fn continue_startup(&mut self) {
        self.close_allowed = true;
        self.visible = false;
        self.outcome = Some(StartupOutcome::Continue);
    }

    /// Implements Ghidra function `FUN_01545f10` at `0x01545F10`.
    ///
    /// The fixed distributor page is queued for the host launcher. The modal
    /// then closes with the stop-startup result even when launching fails.
    pub const fn open_distributors(&mut self) {
        self.choose_external_page(TrialPage::Distributors);
    }

    pub fn launch_pending_page(&mut self, launcher: &mut impl UrlLauncher) -> bool {
        let Some(page) = self.pending_page.take() else {
            return false;
        };
        let _ = launcher.open(page);
        true
    }

    /// Refreshes the progress bar and trial-day labels when the form activates.
    ///
    /// Reimplements Ghidra function `FUN_01546070` at `0x01546070`. The
    /// remaining-day ratio is scaled to the progress bar's recovered maximum
    /// and rounded to the nearest position. The labels show the remaining days
    /// and the total trial length. Iced supplies the progress widget and Rust's
    /// standard formatting supplies the label text.
    pub fn form_activate(&mut self) {
        let days_left = self.period.remaining_days();
        self.progress_position = if self.period.total_days == 0 {
            0
        } else {
            scale_trial_progress(days_left, self.period.total_days)
        };
        self.days_left_label = format!("{days_left} days left");
        self.total_days_label = self.period.total_days.to_string();
    }

    /// Prepares the optional expired-trial display from read-only date data.
    ///
    /// Reimplements Ghidra function `FUN_015461c0` at `0x015461C0`. The
    /// guarded path hides the normal welcome label and shows the expiry label.
    /// It selects `license.ini`, then `setup.ini`, then the executable comment
    /// date as its display reference. It subtracts the total trial length from
    /// the absolute day difference and clamps the displayed result to zero.
    /// This method does not decide whether a license is valid.
    ///
    /// Rust's standard result and integer types provide the error and date-day
    /// contract. The host adapter owns platform file and version-information
    /// access, so no extra filesystem or licensing crate is required.
    ///
    /// # Errors
    ///
    /// Returns the host adapter error. Visibility changes made before a date
    /// error remain in place, as they do in the recovered event order.
    pub fn form_create<S>(&mut self, show_expiry: bool, dates: &mut S) -> Result<bool, S::Error>
    where
        S: TrialExpiryDateSource,
    {
        if !show_expiry {
            return Ok(false);
        }

        self.message_mode = NoticeMessageMode::Expired;

        let reference_day = if let Some(day) = dates.modified_day("license.ini")? {
            day
        } else if let Some(day) = dates.modified_day("setup.ini")? {
            day
        } else {
            dates.executable_comment_day()?
        };
        let elapsed_days = dates.current_day()?.abs_diff(reference_day);
        let expired_days = elapsed_days.saturating_sub(u64::from(self.period.total_days));
        let expired_days = u32::try_from(expired_days).unwrap_or(u32::MAX);
        self.expiry_message = format!("Trial expired {expired_days} days ago.");
        Ok(true)
    }

    /// Returns the close permission without changing dialog state.
    ///
    /// Reimplements Ghidra function `FUN_015461b0` at `0x015461B0`.
    /// The boolean is held directly in iced dialog state, so no additional
    /// close-policy library is required.
    #[must_use]
    pub const fn query_close(&self) -> bool {
        self.close_allowed
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        container(
            column![
                text(TITLE).size(24),
                text(if self.message_mode == NoticeMessageMode::Expired {
                    &self.expiry_message
                } else {
                    "Trial period"
                }),
                text(&self.days_left_label),
                row![
                    text("0"),
                    progress_bar(
                        0.0..=f32::from(PROGRESS_MAXIMUM),
                        f32::from(self.progress_position)
                    ),
                    text(&self.total_days_label),
                ]
                .spacing(8),
                row![
                    button("Buy Now").on_press(Message::BuyNow),
                    button("Continue").on_press(Message::Continue),
                ]
                .spacing(8),
                button("Distributors").on_press(Message::Distributors),
            ]
            .spacing(12),
        )
        .padding(16)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }

    #[must_use]
    pub const fn period(&self) -> TrialPeriod {
        self.period
    }

    #[must_use]
    pub const fn outcome(&self) -> Option<StartupOutcome> {
        self.outcome
    }

    #[must_use]
    pub const fn pending_page(&self) -> Option<TrialPage> {
        self.pending_page
    }

    #[must_use]
    pub const fn is_visible(&self) -> bool {
        self.visible
    }

    #[must_use]
    pub const fn progress_position(&self) -> u16 {
        self.progress_position
    }

    #[must_use]
    pub fn days_left_label(&self) -> &str {
        &self.days_left_label
    }

    #[must_use]
    pub fn total_days_label(&self) -> &str {
        &self.total_days_label
    }

    #[must_use]
    pub const fn welcome_visible(&self) -> bool {
        matches!(self.message_mode, NoticeMessageMode::Welcome)
    }

    #[must_use]
    pub const fn expiry_message_visible(&self) -> bool {
        matches!(self.message_mode, NoticeMessageMode::Expired)
    }

    #[must_use]
    pub fn expiry_message(&self) -> &str {
        &self.expiry_message
    }

    const fn choose_external_page(&mut self, page: TrialPage) {
        self.pending_page = Some(page);
        self.close_allowed = true;
        self.visible = false;
        self.outcome = Some(StartupOutcome::Stop);
    }
}

fn scale_trial_progress(days_left: u32, total_days: u32) -> u16 {
    let denominator = u64::from(total_days);
    let numerator = u64::from(days_left) * u64::from(PROGRESS_MAXIMUM);
    let quotient = numerator / denominator;
    let remainder = numerator % denominator;
    let complement = denominator - remainder;
    let round_up = remainder > complement || (remainder == complement && quotient % 2 == 1);
    let rounded = quotient + u64::from(round_up);
    u16::try_from(rounded).unwrap_or(PROGRESS_MAXIMUM)
}

/// Implements Ghidra function `FUN_01546460` at `0x01546460`.
///
/// When the caller does not request the notice, startup continues without
/// calculating state or constructing a modal. Otherwise, the adapter supplies
/// the trial display, runs the modal, and receives a termination request only
/// for the modal's stop result. Rust ownership destroys the modal after use.
pub fn run_startup_gate(
    show_notice: bool,
    adapter: &mut impl TrialNoticeStartupAdapter,
) -> StartupOutcome {
    if !show_notice {
        return StartupOutcome::Continue;
    }
    let period = adapter.trial_period();
    let outcome = adapter.show_trial_notice(period);
    if outcome == StartupOutcome::Stop {
        adapter.request_termination();
    }
    outcome
}

#[cfg(test)]
mod tests {
    use super::{
        Message, TrialExpiryDateSource, TrialNoticeStartupAdapter, UrlLauncher, Window,
        run_startup_gate,
    };
    use tiara_core::trial_notice::{StartupOutcome, TrialPage, TrialPeriod};

    #[derive(Default)]
    struct Launcher {
        pages: Vec<TrialPage>,
        fail: bool,
    }

    impl UrlLauncher for Launcher {
        type Error = ();

        fn open(&mut self, page: TrialPage) -> Result<(), Self::Error> {
            self.pages.push(page);
            if self.fail { Err(()) } else { Ok(()) }
        }
    }

    struct StartupAdapter {
        period: TrialPeriod,
        modal_outcome: StartupOutcome,
        period_requests: usize,
        modal_periods: Vec<TrialPeriod>,
        termination_requests: usize,
    }

    struct ExpiryDates {
        current: i64,
        license: Option<i64>,
        setup: Option<i64>,
        fallback: i64,
        current_error: bool,
        calls: Vec<String>,
    }

    impl TrialExpiryDateSource for ExpiryDates {
        type Error = &'static str;

        fn current_day(&mut self) -> Result<i64, Self::Error> {
            self.calls.push("current".to_owned());
            if self.current_error {
                Err("current day unavailable")
            } else {
                Ok(self.current)
            }
        }

        fn modified_day(&mut self, file_name: &str) -> Result<Option<i64>, Self::Error> {
            self.calls.push(file_name.to_owned());
            match file_name {
                "license.ini" => Ok(self.license),
                "setup.ini" => Ok(self.setup),
                _ => unreachable!("the recovered lookup uses two fixed names"),
            }
        }

        fn executable_comment_day(&mut self) -> Result<i64, Self::Error> {
            self.calls.push("executable-comment".to_owned());
            Ok(self.fallback)
        }
    }

    fn expiry_dates() -> ExpiryDates {
        ExpiryDates {
            current: 100,
            license: Some(40),
            setup: Some(50),
            fallback: 60,
            current_error: false,
            calls: Vec::new(),
        }
    }

    impl TrialNoticeStartupAdapter for StartupAdapter {
        fn trial_period(&mut self) -> TrialPeriod {
            self.period_requests += 1;
            self.period
        }

        fn show_trial_notice(&mut self, period: TrialPeriod) -> StartupOutcome {
            self.modal_periods.push(period);
            self.modal_outcome
        }

        fn request_termination(&mut self) {
            self.termination_requests += 1;
        }
    }

    fn period() -> TrialPeriod {
        TrialPeriod {
            elapsed_days: 4,
            total_days: 30,
        }
    }

    #[test]
    fn activation_scales_remaining_days_and_refreshes_both_labels() {
        let window = Window::new(TrialPeriod {
            elapsed_days: 11,
            total_days: 30,
        });

        assert_eq!(window.progress_position(), 63);
        assert_eq!(window.days_left_label(), "19 days left");
        assert_eq!(window.total_days_label(), "30");
    }

    #[test]
    fn activation_handles_expired_and_zero_length_periods() {
        let expired = Window::new(TrialPeriod {
            elapsed_days: 35,
            total_days: 30,
        });
        assert_eq!(expired.progress_position(), 0);
        assert_eq!(expired.days_left_label(), "0 days left");
        assert_eq!(expired.total_days_label(), "30");

        let zero_length = Window::new(TrialPeriod::default());
        assert_eq!(zero_length.progress_position(), 0);
        assert_eq!(zero_length.days_left_label(), "0 days left");
        assert_eq!(zero_length.total_days_label(), "0");
    }

    #[test]
    fn close_query_reads_the_permission_without_consuming_it() {
        let mut window = Window::new(period());

        assert!(!window.query_close());
        assert!(!window.query_close());
        window.continue_startup();
        assert!(window.query_close());
        assert!(window.query_close());
    }

    #[test]
    fn form_create_is_a_complete_noop_when_expiry_display_is_disabled() {
        let mut window = Window::new(period());
        let mut dates = expiry_dates();

        assert_eq!(window.form_create(false, &mut dates), Ok(false));
        assert!(window.welcome_visible());
        assert!(!window.expiry_message_visible());
        assert_eq!(window.expiry_message(), "");
        assert!(dates.calls.is_empty());
    }

    #[test]
    fn form_create_prefers_license_date_and_formats_expired_days() {
        let mut window = Window::new(period());
        let mut dates = expiry_dates();

        assert_eq!(window.form_create(true, &mut dates), Ok(true));
        assert!(!window.welcome_visible());
        assert!(window.expiry_message_visible());
        assert_eq!(window.expiry_message(), "Trial expired 30 days ago.");
        assert_eq!(dates.calls, vec!["license.ini", "current"]);
    }

    #[test]
    fn form_create_uses_setup_then_comment_fallback_and_clamps_to_zero() {
        let mut setup_window = Window::new(period());
        let mut setup_dates = ExpiryDates {
            license: None,
            setup: Some(80),
            ..expiry_dates()
        };
        assert_eq!(setup_window.form_create(true, &mut setup_dates), Ok(true));
        assert_eq!(setup_window.expiry_message(), "Trial expired 0 days ago.");
        assert_eq!(
            setup_dates.calls,
            vec!["license.ini", "setup.ini", "current"]
        );

        let mut fallback_window = Window::new(period());
        let mut fallback_dates = ExpiryDates {
            license: None,
            setup: None,
            ..expiry_dates()
        };
        assert_eq!(
            fallback_window.form_create(true, &mut fallback_dates),
            Ok(true)
        );
        assert_eq!(
            fallback_window.expiry_message(),
            "Trial expired 10 days ago."
        );
        assert_eq!(
            fallback_dates.calls,
            vec!["license.ini", "setup.ini", "executable-comment", "current"]
        );
    }

    #[test]
    fn form_create_keeps_visibility_changes_when_date_read_fails() {
        let mut window = Window::new(period());
        let mut dates = ExpiryDates {
            current_error: true,
            ..expiry_dates()
        };

        assert_eq!(
            window.form_create(true, &mut dates),
            Err("current day unavailable")
        );
        assert!(!window.welcome_visible());
        assert!(window.expiry_message_visible());
        assert_eq!(window.expiry_message(), "");
    }

    #[test]
    fn buy_now_queues_typed_order_page_and_stops_even_when_launch_fails() {
        let mut window = Window::new(period());
        drop(window.update(Message::BuyNow));
        assert_eq!(window.pending_page(), Some(TrialPage::Order));
        assert_eq!(window.outcome(), Some(StartupOutcome::Stop));
        assert!(window.query_close());
        assert!(!window.is_visible());

        let mut launcher = Launcher {
            fail: true,
            ..Launcher::default()
        };
        assert!(window.launch_pending_page(&mut launcher));
        assert_eq!(launcher.pages, vec![TrialPage::Order]);
        assert!(!window.launch_pending_page(&mut launcher));
    }

    #[test]
    fn continue_closes_without_external_page_or_stop_result() {
        let mut window = Window::new(period());
        window.continue_startup();
        assert_eq!(window.pending_page(), None);
        assert_eq!(window.outcome(), Some(StartupOutcome::Continue));
        assert!(window.query_close());
    }

    #[test]
    fn distributors_queue_the_recovered_typed_page_and_stop() {
        let mut window = Window::new(period());
        window.open_distributors();
        let mut launcher = Launcher::default();
        assert!(window.launch_pending_page(&mut launcher));
        assert_eq!(launcher.pages, vec![TrialPage::Distributors]);
        assert_eq!(window.outcome(), Some(StartupOutcome::Stop));
    }

    #[test]
    fn disabled_startup_gate_has_no_modal_or_termination_side_effects() {
        let mut adapter = StartupAdapter {
            period: period(),
            modal_outcome: StartupOutcome::Stop,
            period_requests: 0,
            modal_periods: Vec::new(),
            termination_requests: 0,
        };
        assert_eq!(
            run_startup_gate(false, &mut adapter),
            StartupOutcome::Continue
        );
        assert_eq!(adapter.period_requests, 0);
        assert!(adapter.modal_periods.is_empty());
        assert_eq!(adapter.termination_requests, 0);
    }

    #[test]
    fn enabled_startup_gate_requests_termination_only_for_stop() {
        let mut stop = StartupAdapter {
            period: period(),
            modal_outcome: StartupOutcome::Stop,
            period_requests: 0,
            modal_periods: Vec::new(),
            termination_requests: 0,
        };
        assert_eq!(run_startup_gate(true, &mut stop), StartupOutcome::Stop);
        assert_eq!(stop.modal_periods, vec![period()]);
        assert_eq!(stop.termination_requests, 1);

        let mut continue_startup = StartupAdapter {
            modal_outcome: StartupOutcome::Continue,
            ..stop
        };
        continue_startup.termination_requests = 0;
        assert_eq!(
            run_startup_gate(true, &mut continue_startup),
            StartupOutcome::Continue
        );
        assert_eq!(continue_startup.termination_requests, 0);
    }
}
