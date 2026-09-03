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

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CursorToken(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct MessageHookToken(pub u64);

pub trait DialogShowHost {
    fn localize_dialog(&mut self);
    fn current_cursor(&mut self) -> CursorToken;
    fn install_dialog_message_hook(&mut self) -> MessageHookToken;
}

pub trait DialogHideHost {
    fn remove_dialog_message_hook(&mut self, hook: Option<MessageHookToken>);
    fn restore_cursor(&mut self, cursor: CursorToken);
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

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    cancellation_requested: bool,
    progress_percent: u8,
    progress_visible: bool,
    content_height: i32,
    status_text: String,
    saved_cursor: Option<CursorToken>,
    message_hook: Option<MessageHookToken>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            cancellation_requested: false,
            progress_percent: 0,
            progress_visible: true,
            content_height: 0,
            status_text: STATUS_TEXT.to_owned(),
            saved_cursor: None,
            message_hook: None,
        }
    }
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

    /// Saves the resource label as the initial configured status.
    ///
    /// Ports Ghidra function `0x017DF1C0`, symbol `FUN_017df1c0`. The handler
    /// reads the label text and stores an owned Unicode string for later show
    /// events.
    pub fn on_create(&mut self, initial_label_text: impl Into<String>) {
        self.status_text = initial_label_text.into();
    }

    /// Applies the recovered dialog-show state and host services.
    ///
    /// Ports Ghidra function `0x017DF0D0`, symbol `FUN_017df0d0`. The handler
    /// localizes the form, applies the configured progress visibility, removes
    /// the progress height when it is hidden, saves the current cursor, and
    /// installs a dialog message hook unless the application is terminating.
    /// It then copies the configured status into the visible label.
    pub fn show(
        &mut self,
        progress_visible: bool,
        content_height: i32,
        progress_height: i32,
        status_text: impl Into<String>,
        application_terminating: bool,
        host: &mut impl DialogShowHost,
    ) {
        host.localize_dialog();
        self.progress_visible = progress_visible;
        self.content_height = if progress_visible {
            content_height
        } else {
            content_height - progress_height
        };
        self.saved_cursor = Some(host.current_cursor());
        self.message_hook = if application_terminating {
            None
        } else {
            Some(host.install_dialog_message_hook())
        };
        self.status_text = status_text.into();
    }

    /// Releases the recovered dialog-hide host state.
    ///
    /// Ports Ghidra function `0x017DF180`, symbol `FUN_017df180`. The handler
    /// always releases the saved message-hook chain. It restores the saved
    /// cursor only when its token is nonzero.
    pub fn hide(&mut self, host: &mut impl DialogHideHost) {
        host.remove_dialog_message_hook(self.message_hook.take());
        if let Some(cursor) = self.saved_cursor.take() {
            if cursor.0 != 0 {
                host.restore_cursor(cursor);
            }
        }
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
    pub const fn progress_visible(&self) -> bool {
        self.progress_visible
    }

    #[must_use]
    pub const fn content_height(&self) -> i32 {
        self.content_height
    }

    #[must_use]
    pub fn status_text(&self) -> &str {
        &self.status_text
    }

    #[must_use]
    pub const fn saved_cursor(&self) -> Option<CursorToken> {
        self.saved_cursor
    }

    #[must_use]
    pub const fn message_hook(&self) -> Option<MessageHookToken> {
        self.message_hook
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut content = column![text(&self.status_text)];
        if self.progress_visible {
            content = content.push(progress_bar(0.0..=100.0, f32::from(self.progress_percent)));
        }
        let content = content
            .push(button("Cancel").on_press(Message::CancelPressed))
            .spacing(10);
        container(content).padding(12).width(Length::Fill).into()
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

    #[derive(Default)]
    struct ShowHost {
        calls: Vec<&'static str>,
    }

    impl DialogShowHost for ShowHost {
        fn localize_dialog(&mut self) {
            self.calls.push("localize");
        }

        fn current_cursor(&mut self) -> CursorToken {
            self.calls.push("cursor");
            CursorToken(7)
        }

        fn install_dialog_message_hook(&mut self) -> MessageHookToken {
            self.calls.push("hook");
            MessageHookToken(9)
        }
    }

    #[derive(Default)]
    struct HideHost {
        removed_hooks: Vec<Option<MessageHookToken>>,
        restored_cursors: Vec<CursorToken>,
    }

    impl DialogHideHost for HideHost {
        fn remove_dialog_message_hook(&mut self, hook: Option<MessageHookToken>) {
            self.removed_hooks.push(hook);
        }

        fn restore_cursor(&mut self, cursor: CursorToken) {
            self.restored_cursors.push(cursor);
        }
    }

    #[test]
    fn fun_017df0d0_applies_hidden_progress_layout_and_installs_hook() {
        let mut window = Window::default();
        let mut host = ShowHost::default();

        window.show(false, 76, 17, "Running analysis", false, &mut host);

        assert!(!window.progress_visible());
        assert_eq!(window.content_height(), 59);
        assert_eq!(window.status_text(), "Running analysis");
        assert_eq!(window.saved_cursor(), Some(CursorToken(7)));
        assert_eq!(window.message_hook(), Some(MessageHookToken(9)));
        assert_eq!(host.calls, ["localize", "cursor", "hook"]);
    }

    #[test]
    fn fun_017df0d0_skips_hook_only_while_application_is_terminating() {
        let mut window = Window::default();
        let mut host = ShowHost::default();

        window.show(true, 76, 17, "Calculating...", true, &mut host);

        assert!(window.progress_visible());
        assert_eq!(window.content_height(), 76);
        assert_eq!(window.saved_cursor(), Some(CursorToken(7)));
        assert_eq!(window.message_hook(), None);
        assert_eq!(host.calls, ["localize", "cursor"]);
    }

    #[test]
    fn fun_017df180_releases_hook_and_restores_nonzero_cursor() {
        let mut window = Window::default();
        let mut show_host = ShowHost::default();
        let mut hide_host = HideHost::default();
        window.show(true, 76, 17, STATUS_TEXT, false, &mut show_host);

        window.hide(&mut hide_host);

        assert_eq!(hide_host.removed_hooks, [Some(MessageHookToken(9))]);
        assert_eq!(hide_host.restored_cursors, [CursorToken(7)]);
        assert_eq!(window.message_hook(), None);
        assert_eq!(window.saved_cursor(), None);
    }

    #[test]
    fn fun_017df180_skips_zero_cursor_and_accepts_missing_hook() {
        let mut window = Window {
            saved_cursor: Some(CursorToken(0)),
            ..Window::default()
        };
        let mut host = HideHost::default();

        window.hide(&mut host);

        assert_eq!(host.removed_hooks, [None]);
        assert!(host.restored_cursors.is_empty());
        assert_eq!(window.saved_cursor(), None);
    }

    #[test]
    fn fun_017df1c0_owns_the_initial_label_text_as_status() {
        let mut window = Window::default();
        let mut label_text = String::from("Preparing calculation");

        window.on_create(label_text.as_str());
        label_text.clear();

        assert_eq!(window.status_text(), "Preparing calculation");
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
