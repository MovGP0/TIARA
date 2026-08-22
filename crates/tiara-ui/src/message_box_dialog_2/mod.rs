//! Cooperative cancellation dialog for a running calculation.
//!
//! `iced` supplies the dialog state, messages, progress widget, and button.
//! A small callback trait replaces the recovered code-pointer and context
//! fields. The standard library supplies the owned state, so no cancellation
//! or image crate is needed.

use iced::widget::{button, column, container, progress_bar, text};
use iced::{Element, Length, Task};

pub const TITLE: &str = "Calculating";
pub const STATUS_TEXT: &str = "Calculating...";
pub const FORM_RESOURCE: &str = "MessageBoxDlg2";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseQueryOutcome {
    Allowed,
    Vetoed,
}

pub trait CancellationCallback {
    /// Notifies the calculation owner after the dialog records cancellation.
    fn cancellation_requested(&mut self);
}

pub trait CalculationOwner {
    /// Requests that the owner does not start another calculation attempt.
    fn request_stop(&mut self);
}

/// Adapts a calculation owner to the dialog's optional callback contract.
pub struct OwnerCallback<'a, Owner> {
    owner: &'a mut Owner,
}

impl<'a, Owner> OwnerCallback<'a, Owner> {
    pub const fn new(owner: &'a mut Owner) -> Self {
        Self { owner }
    }
}

impl<Owner: CalculationOwner> CancellationCallback for OwnerCallback<'_, Owner> {
    fn cancellation_requested(&mut self) {
        self.owner.request_stop();
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct CalculationLoopControl {
    stop_requested: bool,
}

impl CalculationLoopControl {
    /// Records the stop request consumed by the calculation loop boundary.
    ///
    /// Ports Ghidra function `FUN_01aab0e0` at `0x01AAB0E0`. The recovered
    /// callback only writes the owner stop byte. It does not change the current
    /// attempt's result or interrupt work already in progress.
    pub const fn request_stop(&mut self) {
        self.stop_requested = true;
    }

    #[must_use]
    pub const fn is_stop_requested(&self) -> bool {
        self.stop_requested
    }
}

impl CalculationOwner for CalculationLoopControl {
    fn request_stop(&mut self) {
        Self::request_stop(self);
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    CancelPressed,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Window {
    cancellation_requested: bool,
    progress_percent: u8,
}

impl Window {
    pub fn update(
        &mut self,
        message: Message,
        callback: Option<&mut dyn CancellationCallback>,
    ) -> Task<Message> {
        match message {
            Message::CancelPressed => self.request_cancellation(callback),
        }
        Task::none()
    }

    /// Records cancellation and invokes an optional owner callback.
    ///
    /// Ports Ghidra function `FUN_017df0a0` at `0x017DF0A0`, recovered as
    /// `TMessageBoxDlg2.CancelBtnClick`. The flag is set before callback
    /// dispatch. A missing callback is a no-op after the flag write. Repeated
    /// requests invoke an available callback again.
    pub fn request_cancellation(&mut self, callback: Option<&mut dyn CancellationCallback>) {
        self.cancellation_requested = true;
        if let Some(callback) = callback {
            callback.cancellation_requested();
        }
    }

    /// Copies the cancellation flag to the close-query decision.
    ///
    /// Ports Ghidra function `FUN_017df1b0` at `0x017DF1B0`, recovered as
    /// `TMessageBoxDlg2.FormCloseQuery`. The query does not change the flag and
    /// makes no callback.
    #[must_use]
    pub const fn query_close(&self) -> CloseQueryOutcome {
        if self.cancellation_requested {
            CloseQueryOutcome::Allowed
        } else {
            CloseQueryOutcome::Vetoed
        }
    }

    pub const fn set_progress(&mut self, percent: u8) {
        self.progress_percent = if percent > 100 { 100 } else { percent };
    }

    #[must_use]
    pub const fn is_cancellation_requested(&self) -> bool {
        self.cancellation_requested
    }

    #[must_use]
    pub const fn progress_percent(&self) -> u8 {
        self.progress_percent
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        container(
            column![
                text(STATUS_TEXT),
                progress_bar(0.0..=100.0, f32::from(self.progress_percent)),
                button("Cancel").on_press(Message::CancelPressed),
            ]
            .spacing(10),
        )
        .padding(12)
        .width(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use std::panic::{AssertUnwindSafe, catch_unwind};

    use super::*;

    #[derive(Default)]
    struct CountingCallback {
        calls: usize,
    }

    impl CancellationCallback for CountingCallback {
        fn cancellation_requested(&mut self) {
            self.calls += 1;
        }
    }

    struct PanickingCallback;

    impl CancellationCallback for PanickingCallback {
        fn cancellation_requested(&mut self) {
            panic!("owner callback failed");
        }
    }

    #[test]
    fn close_is_vetoed_until_cancellation_is_requested() {
        let mut window = Window::default();

        assert_eq!(window.query_close(), CloseQueryOutcome::Vetoed);
        window.request_cancellation(None);
        assert_eq!(window.query_close(), CloseQueryOutcome::Allowed);
        assert_eq!(window.query_close(), CloseQueryOutcome::Allowed);
    }

    #[test]
    fn cancellation_sets_the_flag_and_invokes_an_available_callback() {
        let mut window = Window::default();
        let mut callback = CountingCallback::default();

        let _ = window.update(Message::CancelPressed, Some(&mut callback));

        assert!(window.is_cancellation_requested());
        assert_eq!(callback.calls, 1);
    }

    #[test]
    fn missing_callback_keeps_the_recorded_cancellation_request() {
        let mut window = Window::default();

        window.request_cancellation(None);

        assert!(window.is_cancellation_requested());
    }

    #[test]
    fn repeated_requests_invoke_the_callback_each_time() {
        let mut window = Window::default();
        let mut callback = CountingCallback::default();

        window.request_cancellation(Some(&mut callback));
        window.request_cancellation(Some(&mut callback));

        assert!(window.is_cancellation_requested());
        assert_eq!(callback.calls, 2);
    }

    #[test]
    fn owner_adapter_sets_the_calculation_loop_stop_request() {
        let mut owner = CalculationLoopControl::default();
        let mut window = Window::default();

        {
            let mut callback = OwnerCallback::new(&mut owner);
            window.request_cancellation(Some(&mut callback));
        }

        assert!(owner.is_stop_requested());
        assert!(window.is_cancellation_requested());
    }

    #[test]
    fn callback_failure_propagates_after_the_dialog_flag_is_set() {
        let mut window = Window::default();
        let mut callback = PanickingCallback;

        let result = catch_unwind(AssertUnwindSafe(|| {
            window.request_cancellation(Some(&mut callback));
        }));

        assert!(result.is_err());
        assert!(window.is_cancellation_requested());
    }

    #[test]
    fn progress_is_clamped_without_changing_cancellation_state() {
        let mut window = Window::default();

        window.set_progress(110);

        assert_eq!(window.progress_percent(), 100);
        assert!(!window.is_cancellation_requested());
    }
}
