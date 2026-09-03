//! Lifecycle state for `FastReport` popup forms.

use std::time::Instant;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PopupCloseOutcome {
    Closed,
    Rejected,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PopupCloseAction {
    None,
    Hide,
    Free,
    Minimize,
}

pub trait PopupDeactivationHost {
    type Error;

    fn monotonic_now(&mut self) -> Instant;

    /// Runs the popup form close pipeline.
    ///
    /// # Errors
    ///
    /// Returns a close-pipeline error after the deactivation time is retained.
    fn request_close(&mut self) -> Result<PopupCloseOutcome, Self::Error>;
}

#[derive(Debug, Clone, Default)]
pub struct PopupLifecycleState {
    last_deactivated_at: Option<Instant>,
    pub modal_result: i32,
}

impl PopupLifecycleState {
    #[must_use]
    pub const fn last_deactivated_at(&self) -> Option<Instant> {
        self.last_deactivated_at
    }

    /// Chooses lifetime handling when the popup closes.
    ///
    /// Ports Ghidra function `0x0186C0B0`, symbol `FUN_0186c0b0`, recovered as
    /// `frxPopupForm.OnClose`. A zero modal result changes the close action to
    /// Free. A nonzero modal result preserves the action supplied by the caller.
    pub const fn form_close(&self, action: &mut PopupCloseAction) {
        if self.modal_result == 0 {
            *action = PopupCloseAction::Free;
        }
    }

    /// Records popup deactivation time and requests form closure.
    ///
    /// Ports Ghidra function `0x0186BF90`, symbol `FUN_0186bf90`, recovered as
    /// `frxPopupForm.OnDeactivate`. The monotonic timestamp is stored before the
    /// close pipeline starts. A rejected close or close error does not roll it back.
    ///
    /// # Errors
    ///
    /// Returns a close-pipeline error after the timestamp is retained.
    pub fn deactivate<Host: PopupDeactivationHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<PopupCloseOutcome, Host::Error> {
        self.last_deactivated_at = Some(host.monotonic_now());
        host.request_close()
    }
}

#[cfg(test)]
mod tests {
    use std::time::Duration;

    use super::*;

    struct Host {
        now: Instant,
        calls: Vec<&'static str>,
        close_result: Result<PopupCloseOutcome, &'static str>,
    }

    impl PopupDeactivationHost for Host {
        type Error = &'static str;

        fn monotonic_now(&mut self) -> Instant {
            self.calls.push("now");
            self.now
        }

        fn request_close(&mut self) -> Result<PopupCloseOutcome, Self::Error> {
            self.calls.push("close");
            self.close_result
        }
    }

    #[test]
    fn fun_0186bf90_records_time_before_successful_close() {
        let now = Instant::now();
        let mut state = PopupLifecycleState::default();
        let mut host = Host {
            now,
            calls: Vec::new(),
            close_result: Ok(PopupCloseOutcome::Closed),
        };

        let result = state.deactivate(&mut host);

        assert_eq!(result, Ok(PopupCloseOutcome::Closed));
        assert_eq!(host.calls, ["now", "close"]);
        assert_eq!(state.last_deactivated_at(), Some(now));
    }

    #[test]
    fn fun_0186bf90_close_failure_keeps_latest_monotonic_time() {
        let old = Instant::now();
        let now = old + Duration::from_millis(25);
        let mut state = PopupLifecycleState {
            last_deactivated_at: Some(old),
            modal_result: 0,
        };
        let mut host = Host {
            now,
            calls: Vec::new(),
            close_result: Err("close failed"),
        };

        let result = state.deactivate(&mut host);

        assert_eq!(result, Err("close failed"));
        assert_eq!(host.calls, ["now", "close"]);
        assert_eq!(state.last_deactivated_at(), Some(now));
    }

    #[test]
    fn fun_0186c0b0_modeless_close_changes_action_to_free() {
        let state = PopupLifecycleState::default();
        let mut action = PopupCloseAction::Hide;

        state.form_close(&mut action);

        assert_eq!(action, PopupCloseAction::Free);
    }

    #[test]
    fn fun_0186c0b0_modal_close_preserves_supplied_action() {
        let state = PopupLifecycleState {
            last_deactivated_at: Some(Instant::now()),
            modal_result: 2,
        };

        for expected in [
            PopupCloseAction::None,
            PopupCloseAction::Hide,
            PopupCloseAction::Free,
            PopupCloseAction::Minimize,
        ] {
            let mut action = expected;
            state.form_close(&mut action);
            assert_eq!(action, expected);
        }
    }
}
