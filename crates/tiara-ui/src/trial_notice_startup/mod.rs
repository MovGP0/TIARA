use iced::widget::{button, column, container, row, text};
use iced::{Element, Length, Task};
use tiara_core::trial_notice::{StartupOutcome, TrialPage, TrialPeriod};

pub const TITLE: &str = "TINA Notice";
pub const FORM_RESOURCE: &str = "TrialForm";
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

#[derive(Debug)]
pub struct Window {
    period: TrialPeriod,
    close_allowed: bool,
    visible: bool,
    outcome: Option<StartupOutcome>,
    pending_page: Option<TrialPage>,
}

impl Window {
    #[must_use]
    pub const fn new(period: TrialPeriod) -> Self {
        Self {
            period,
            close_allowed: false,
            visible: true,
            outcome: None,
            pending_page: None,
        }
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

    #[must_use]
    pub const fn query_close(&self) -> bool {
        self.close_allowed
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        container(
            column![
                text(TITLE).size(24),
                text(format!("{} days left", self.period.remaining_days())),
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

    const fn choose_external_page(&mut self, page: TrialPage) {
        self.pending_page = Some(page);
        self.close_allowed = true;
        self.visible = false;
        self.outcome = Some(StartupOutcome::Stop);
    }
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
    use super::{Message, TrialNoticeStartupAdapter, UrlLauncher, Window, run_startup_gate};
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
