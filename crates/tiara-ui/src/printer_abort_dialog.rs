//! Iced print-abort dialog state and printer adapter.

use iced::widget::{button, column, text};
use iced::{Element, Length};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Action {
    AbortAndClose,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DialogCloseOutcome {
    Closed,
    Rejected,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct NativeWindowIdentity(pub u64);

pub trait PrintAbortActivationHost {
    fn active_window(&mut self) -> Option<NativeWindowIdentity>;
    fn focus_abort_dialog(&mut self) -> Option<NativeWindowIdentity>;
    fn restore_focus(&mut self, previous_focus: Option<NativeWindowIdentity>);
    fn activate_window(&mut self, window: NativeWindowIdentity);
}

pub trait PrintAbortHost {
    type Error;

    /// Aborts the process-wide active print job.
    ///
    /// # Errors
    ///
    /// Returns the printer-state or native abort error.
    fn abort_active_print_job(&mut self) -> Result<(), Self::Error>;

    /// Runs the modeless dialog close pipeline.
    ///
    /// # Errors
    ///
    /// Returns a close-pipeline error after the print job has been aborted.
    fn request_dialog_close(&mut self) -> Result<DialogCloseOutcome, Self::Error>;
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct Window {
    previous_focus: Option<NativeWindowIdentity>,
    previous_active_window: Option<NativeWindowIdentity>,
}

impl Window {
    #[must_use]
    pub const fn previous_focus(&self) -> Option<NativeWindowIdentity> {
        self.previous_focus
    }

    #[must_use]
    pub const fn previous_active_window(&self) -> Option<NativeWindowIdentity> {
        self.previous_active_window
    }

    /// Captures activation state and focuses the modeless print-abort dialog.
    ///
    /// Ports Ghidra function `0x018006A0`, symbol `FUN_018006a0`, recovered as
    /// `PrinterAbortDlg.OnShow`. It records the active native window first, then
    /// focuses this dialog and records the prior focus target for later restore.
    pub fn on_show(&mut self, host: &mut impl PrintAbortActivationHost) {
        self.previous_active_window = host.active_window();
        self.previous_focus = host.focus_abort_dialog();
    }

    /// Restores focus and activation after the modeless dialog is hidden.
    ///
    /// Ports Ghidra function `0x018006E0`, symbol `FUN_018006e0`, recovered as
    /// `PrinterAbortDlg.OnHide`. It restores the saved focus target first,
    /// including a missing target, then activates the saved window only when one
    /// was captured. The saved identities remain available after the operation.
    pub fn on_hide(&self, host: &mut impl PrintAbortActivationHost) {
        host.restore_focus(self.previous_focus);
        if let Some(window) = self.previous_active_window {
            host.activate_window(window);
        }
    }

    #[must_use]
    pub const fn update(&self, message: Message) -> Action {
        match message {
            Message::Cancel => Action::AbortAndClose,
        }
    }

    /// Aborts printing and then requests closure of the modeless progress dialog.
    ///
    /// Ports Ghidra function `0x01800670`, symbol `FUN_01800670`, recovered as
    /// `TPrinterAbortDlg.CancelBtnClick`. The printer abort always precedes the
    /// close pipeline. An abort error prevents the close request. A rejected
    /// close does not undo the completed print abort.
    ///
    /// # Errors
    ///
    /// Returns printer or close-pipeline errors without local recovery.
    pub fn cancel<Host: PrintAbortHost>(
        &self,
        host: &mut Host,
    ) -> Result<DialogCloseOutcome, Host::Error> {
        host.abort_active_print_job()?;
        host.request_dialog_close()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![text("Printing"), button("Abort").on_press(Message::Cancel),]
            .spacing(8)
            .width(Length::Shrink)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    struct Host {
        calls: Vec<&'static str>,
        abort_result: Result<(), &'static str>,
        close_result: Result<DialogCloseOutcome, &'static str>,
    }

    struct ActivationHost {
        calls: Vec<&'static str>,
        active_window: Option<NativeWindowIdentity>,
        previous_focus: Option<NativeWindowIdentity>,
        restored_focus: Vec<Option<NativeWindowIdentity>>,
        activated_windows: Vec<NativeWindowIdentity>,
    }

    impl PrintAbortActivationHost for ActivationHost {
        fn active_window(&mut self) -> Option<NativeWindowIdentity> {
            self.calls.push("active");
            self.active_window
        }

        fn focus_abort_dialog(&mut self) -> Option<NativeWindowIdentity> {
            self.calls.push("focus");
            self.previous_focus
        }

        fn restore_focus(&mut self, previous_focus: Option<NativeWindowIdentity>) {
            self.calls.push("restore focus");
            self.restored_focus.push(previous_focus);
        }

        fn activate_window(&mut self, window: NativeWindowIdentity) {
            self.calls.push("activate");
            self.activated_windows.push(window);
        }
    }

    impl PrintAbortHost for Host {
        type Error = &'static str;

        fn abort_active_print_job(&mut self) -> Result<(), Self::Error> {
            self.calls.push("abort");
            self.abort_result
        }

        fn request_dialog_close(&mut self) -> Result<DialogCloseOutcome, Self::Error> {
            self.calls.push("close");
            self.close_result
        }
    }

    #[test]
    fn fun_01800670_aborts_before_requesting_close() {
        let window = Window::default();
        let mut host = Host {
            calls: Vec::new(),
            abort_result: Ok(()),
            close_result: Ok(DialogCloseOutcome::Closed),
        };

        let result = window.cancel(&mut host);

        assert_eq!(result, Ok(DialogCloseOutcome::Closed));
        assert_eq!(host.calls, ["abort", "close"]);
        assert_eq!(window.update(Message::Cancel), Action::AbortAndClose);
    }

    #[test]
    fn fun_01800670_abort_error_prevents_close_without_recovery() {
        let window = Window::default();
        let mut host = Host {
            calls: Vec::new(),
            abort_result: Err("not printing"),
            close_result: Ok(DialogCloseOutcome::Closed),
        };

        let result = window.cancel(&mut host);

        assert_eq!(result, Err("not printing"));
        assert_eq!(host.calls, ["abort"]);
    }

    #[test]
    fn fun_01800670_rejected_close_keeps_completed_abort() {
        let window = Window::default();
        let mut host = Host {
            calls: Vec::new(),
            abort_result: Ok(()),
            close_result: Ok(DialogCloseOutcome::Rejected),
        };

        let result = window.cancel(&mut host);

        assert_eq!(result, Ok(DialogCloseOutcome::Rejected));
        assert_eq!(host.calls, ["abort", "close"]);
    }

    #[test]
    fn fun_018006a0_captures_active_window_before_focusing_dialog() {
        let mut window = Window::default();
        let mut host = ActivationHost {
            calls: Vec::new(),
            active_window: Some(NativeWindowIdentity(41)),
            previous_focus: Some(NativeWindowIdentity(42)),
            restored_focus: Vec::new(),
            activated_windows: Vec::new(),
        };

        window.on_show(&mut host);

        assert_eq!(host.calls, ["active", "focus"]);
        assert_eq!(
            window.previous_active_window(),
            Some(NativeWindowIdentity(41))
        );
        assert_eq!(window.previous_focus(), Some(NativeWindowIdentity(42)));
    }

    #[test]
    fn fun_018006e0_restores_focus_before_optional_window_activation() {
        let mut window = Window::default();
        let mut host = ActivationHost {
            calls: Vec::new(),
            active_window: Some(NativeWindowIdentity(51)),
            previous_focus: Some(NativeWindowIdentity(52)),
            restored_focus: Vec::new(),
            activated_windows: Vec::new(),
        };
        window.on_show(&mut host);
        host.calls.clear();

        window.on_hide(&mut host);

        assert_eq!(host.calls, ["restore focus", "activate"]);
        assert_eq!(host.restored_focus, [Some(NativeWindowIdentity(52))]);
        assert_eq!(host.activated_windows, [NativeWindowIdentity(51)]);
        assert_eq!(window.previous_focus(), Some(NativeWindowIdentity(52)));
        assert_eq!(
            window.previous_active_window(),
            Some(NativeWindowIdentity(51))
        );

        let empty_window = Window::default();
        host.calls.clear();
        host.restored_focus.clear();
        host.activated_windows.clear();
        empty_window.on_hide(&mut host);
        assert_eq!(host.calls, ["restore focus"]);
        assert_eq!(host.restored_focus, [None]);
        assert!(host.activated_windows.is_empty());
    }
}
