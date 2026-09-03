//! Iced state for the recovered `FastReport` progress dialog.

use iced::widget::{button, column, progress_bar, text};
use iced::{Element, Length};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct OwnerIdentity(pub u64);

pub trait ProgressLifecycleHost {
    fn active_owner(&mut self) -> Option<OwnerIdentity>;
    fn set_owner_enabled(&mut self, owner: OwnerIdentity, enabled: bool);
    fn refresh_progress(&mut self, position: u16);
    fn creation_policy_allows_follow_up(&mut self) -> bool;
    fn apply_creation_follow_up(&mut self, enabled: bool);
}

pub trait ProgressCloseHost {
    type Error;

    /// Requests the normal Iced window close pipeline.
    ///
    /// # Errors
    ///
    /// Returns a close-pipeline error after cancellation state is stored.
    fn request_close(&mut self) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Action {
    CancelRequested,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    owner: Option<OwnerIdentity>,
    pub message: String,
    pub minimum: u16,
    pub maximum: u16,
    pub position: u16,
    pub termination_requested: bool,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            owner: None,
            message: String::new(),
            minimum: 0,
            maximum: 100,
            position: 0,
            termination_requested: false,
        }
    }
}

impl Window {
    #[must_use]
    pub const fn owner(&self) -> Option<OwnerIdentity> {
        self.owner
    }

    /// Initializes the `FastReport` progress form.
    ///
    /// Ports Ghidra function `0x0181C860`, symbol `FUN_0181c860`, recovered as
    /// `frxProgress.OnCreate`. It captures and disables an active owner, sets the
    /// progress range to 0 through 100, resets and refreshes position zero, then
    /// runs the recovered optional creation follow-up only when its query allows it.
    pub fn form_create(&mut self, host: &mut impl ProgressLifecycleHost) {
        self.owner = host.active_owner();
        if let Some(owner) = self.owner {
            host.set_owner_enabled(owner, false);
        }
        self.minimum = 0;
        self.maximum = 100;
        self.position = 0;
        host.refresh_progress(self.position);
        if host.creation_policy_allows_follow_up() {
            host.apply_creation_follow_up(true);
        }
    }

    /// Re-enables the captured progress-dialog owner during destruction.
    ///
    /// Ports Ghidra function `0x0181C8F0`, symbol `FUN_0181c8f0`, recovered as
    /// `frxProgress.OnDestroy`. A missing owner is a no-op. The saved identity
    /// and all progress state remain unchanged.
    pub fn form_destroy(&self, host: &mut impl ProgressLifecycleHost) {
        self.reenable_owner(host);
    }

    /// Re-enables the captured progress-dialog owner when the form is hidden.
    ///
    /// Ports Ghidra function `0x0181C920`, symbol `FUN_0181c920`, recovered as
    /// `frxProgress.OnHide`. It deliberately matches the destroy handler. A
    /// missing owner is a no-op, and all progress state remains unchanged.
    pub fn form_hide(&self, host: &mut impl ProgressLifecycleHost) {
        self.reenable_owner(host);
    }

    fn reenable_owner(&self, host: &mut impl ProgressLifecycleHost) {
        if let Some(owner) = self.owner {
            host.set_owner_enabled(owner, true);
        }
    }

    /// Requests report termination and closes the progress form.
    ///
    /// Ports Ghidra function `0x0181CCC0`, symbol `FUN_0181ccc0`, recovered as
    /// `TfrxProgress.CancelBClick`. It stores the request before entering the
    /// close pipeline. It does not stop report processing directly; the later
    /// progress callback consumes this state.
    ///
    /// # Errors
    ///
    /// Returns a close-pipeline error after the termination request is stored.
    pub fn cancel<Host: ProgressCloseHost>(&mut self, host: &mut Host) -> Result<(), Host::Error> {
        self.termination_requested = true;
        host.request_close()
    }

    #[must_use]
    pub const fn update(&self, message: Message) -> Action {
        match message {
            Message::Cancel => Action::CancelRequested,
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            text(&self.message),
            progress_bar(
                f32::from(self.minimum)..=f32::from(self.maximum),
                f32::from(self.position)
            ),
            button("Cancel").on_press(Message::Cancel),
        ]
        .spacing(8)
        .width(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    struct Host {
        calls: Vec<String>,
        owner: Option<OwnerIdentity>,
        allow_follow_up: bool,
    }

    struct CloseHost {
        calls: usize,
        result: Result<(), &'static str>,
    }

    impl ProgressCloseHost for CloseHost {
        type Error = &'static str;

        fn request_close(&mut self) -> Result<(), Self::Error> {
            self.calls = self.calls.saturating_add(1);
            self.result
        }
    }

    impl ProgressLifecycleHost for Host {
        fn active_owner(&mut self) -> Option<OwnerIdentity> {
            self.calls.push("active owner".to_owned());
            self.owner
        }

        fn set_owner_enabled(&mut self, owner: OwnerIdentity, enabled: bool) {
            self.calls
                .push(format!("owner {} enabled {enabled}", owner.0));
        }

        fn refresh_progress(&mut self, position: u16) {
            self.calls.push(format!("refresh {position}"));
        }

        fn creation_policy_allows_follow_up(&mut self) -> bool {
            self.calls.push("query follow-up".to_owned());
            self.allow_follow_up
        }

        fn apply_creation_follow_up(&mut self, enabled: bool) {
            self.calls.push(format!("apply follow-up {enabled}"));
        }
    }

    #[test]
    fn fun_0181c860_disables_owner_initializes_progress_and_applies_follow_up() {
        let mut window = Window {
            owner: Some(OwnerIdentity(1)),
            message: "Preparing".to_owned(),
            minimum: 20,
            maximum: 40,
            position: 30,
            termination_requested: true,
        };
        let mut host = Host {
            calls: Vec::new(),
            owner: Some(OwnerIdentity(7)),
            allow_follow_up: true,
        };

        window.form_create(&mut host);

        assert_eq!(window.owner(), Some(OwnerIdentity(7)));
        assert_eq!(
            (window.minimum, window.maximum, window.position),
            (0, 100, 0)
        );
        assert_eq!(window.message, "Preparing");
        assert_eq!(
            host.calls,
            [
                "active owner",
                "owner 7 enabled false",
                "refresh 0",
                "query follow-up",
                "apply follow-up true",
            ]
        );
    }

    #[test]
    fn fun_0181c860_missing_owner_and_false_policy_skip_optional_calls() {
        let mut window = Window::default();
        let mut host = Host {
            calls: Vec::new(),
            owner: None,
            allow_follow_up: false,
        };

        window.form_create(&mut host);

        assert_eq!(window.owner(), None);
        assert_eq!(host.calls, ["active owner", "refresh 0", "query follow-up"]);
        assert_eq!(window.update(Message::Cancel), Action::CancelRequested);
    }

    #[test]
    fn fun_0181c8f0_destroy_reenables_only_a_captured_owner() {
        let mut window = Window::default();
        let mut host = Host {
            calls: Vec::new(),
            owner: Some(OwnerIdentity(9)),
            allow_follow_up: false,
        };
        window.form_create(&mut host);
        host.calls.clear();
        let expected = window.clone();

        window.form_destroy(&mut host);

        assert_eq!(host.calls, ["owner 9 enabled true"]);
        assert_eq!(window, expected);

        host.calls.clear();
        Window::default().form_destroy(&mut host);
        assert!(host.calls.is_empty());
    }

    #[test]
    fn fun_0181c920_hide_reuses_owner_reenable_behavior() {
        let window = Window {
            owner: Some(OwnerIdentity(11)),
            message: "keep".to_owned(),
            minimum: 2,
            maximum: 80,
            position: 30,
            termination_requested: true,
        };
        let expected = window.clone();
        let mut host = Host {
            calls: Vec::new(),
            owner: None,
            allow_follow_up: false,
        };

        window.form_hide(&mut host);

        assert_eq!(host.calls, ["owner 11 enabled true"]);
        assert_eq!(window, expected);
    }

    #[test]
    fn fun_0181ccc0_cancel_sets_termination_before_close() {
        let mut window = Window::default();
        let mut host = CloseHost {
            calls: 0,
            result: Ok(()),
        };

        let result = window.cancel(&mut host);

        assert_eq!(result, Ok(()));
        assert!(window.termination_requested);
        assert_eq!(host.calls, 1);
    }

    #[test]
    fn fun_0181ccc0_close_error_keeps_termination_requested() {
        let mut window = Window::default();
        let mut host = CloseHost {
            calls: 0,
            result: Err("close failed"),
        };

        let result = window.cancel(&mut host);

        assert_eq!(result, Err("close failed"));
        assert!(window.termination_requested);
        assert_eq!(host.calls, 1);
    }
}
