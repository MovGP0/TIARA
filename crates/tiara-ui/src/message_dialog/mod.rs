//! Iced state for the recovered two-line message form.
//!
//! The recovered form is a panel with two labels and no buttons. Its whole
//! recovered behavior is a pair of resources acquired while it is visible and a
//! close gate that other code opens.

use iced::widget::{column, container, text};
use iced::{Element, Length};

pub const FORM_RESOURCE: &str = "MessageDlg";

/// One resource handle the show handler acquires.
///
/// The recovered code establishes when each handle is acquired and released,
/// but not what it is used for, so this port keeps the handles opaque.
pub type ResourceHandle = u64;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct MessageDialogState {
    /// The handle the show handler acquires without arguments.
    pub process_resource: Option<ResourceHandle>,
    /// The handle the show handler derives from the form window.
    pub window_resource: Option<ResourceHandle>,
    /// The recovered close gate.
    pub close_allowed: bool,
}

pub trait MessageDialogResourceHost {
    /// Acquires the process-level handle. The recovered call takes no argument
    /// and its result is stored without a success check.
    fn acquire_process_resource(&mut self) -> Option<ResourceHandle>;

    /// Acquires the handle derived from the form's window handle.
    fn acquire_window_resource(&mut self, window: ResourceHandle) -> Option<ResourceHandle>;

    /// Releases the window-derived handle. The recovered call is not guarded by
    /// a null check.
    fn release_window_resource(&mut self, resource: Option<ResourceHandle>);

    /// Releases the process-level handle.
    fn release_process_resource(&mut self, resource: ResourceHandle);
}

/// Implements Ghidra function `FUN_01b914b0` at `0x01B914B0`.
///
/// Acquires both handles when the form becomes visible and clears the close
/// gate. The recovered handler checks neither acquisition result, so a failed
/// acquisition is stored as-is and surfaces only at release time.
///
/// Because the gate starts closed on every show, the form refuses to close
/// until other code opens it. The handler sets no caption and reads no message
/// text.
pub fn show_message_dialog(
    window: ResourceHandle,
    host: &mut impl MessageDialogResourceHost,
) -> MessageDialogState {
    MessageDialogState {
        process_resource: host.acquire_process_resource(),
        window_resource: host.acquire_window_resource(window),
        close_allowed: false,
    }
}

/// Implements Ghidra function `FUN_01b914f0` at `0x01B914F0`.
///
/// Releases the window-derived handle unconditionally and the process-level
/// handle only when it is present. The recovered handler does not clear either
/// field, so a second hide repeats both releases; this port preserves that
/// rather than adding a guard the recovered code does not have.
pub fn hide_message_dialog(state: &MessageDialogState, host: &mut impl MessageDialogResourceHost) {
    host.release_window_resource(state.window_resource);
    if let Some(process_resource) = state.process_resource {
        host.release_process_resource(process_resource);
    }
}

/// Implements Ghidra function `FUN_01b91520` at `0x01B91520`.
///
/// Reports the stored close gate as the close-query answer. The recovered
/// handler reads no control, writes nothing, and does not change the gate, so
/// repeated close attempts keep getting the same answer.
#[must_use]
pub const fn can_close_message_dialog(state: &MessageDialogState) -> bool {
    state.close_allowed
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    FirstLineChanged(String),
    SecondLineChanged(String),
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Window {
    first_line: String,
    second_line: String,
    state: MessageDialogState,
}

impl Window {
    #[must_use]
    pub const fn new(first_line: String, second_line: String) -> Self {
        Self {
            first_line,
            second_line,
            state: MessageDialogState {
                process_resource: None,
                window_resource: None,
                close_allowed: false,
            },
        }
    }

    #[must_use]
    pub const fn state(&self) -> &MessageDialogState {
        &self.state
    }

    /// Opens the recovered close gate. The recovered form has no control that
    /// does this, so the owner of the dialog holds the responsibility.
    pub const fn allow_close(&mut self) {
        self.state.close_allowed = true;
    }

    pub fn show(&mut self, window: ResourceHandle, host: &mut impl MessageDialogResourceHost) {
        self.state = show_message_dialog(window, host);
    }

    pub fn hide(&self, host: &mut impl MessageDialogResourceHost) {
        hide_message_dialog(&self.state, host);
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::FirstLineChanged(value) => self.first_line = value,
            Message::SecondLineChanged(value) => self.second_line = value,
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        container(
            column![text(&self.first_line), text(&self.second_line)]
                .spacing(6)
                .width(Length::Fill),
        )
        .padding(12)
        .width(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Call {
        AcquireProcess,
        AcquireWindow(ResourceHandle),
        ReleaseWindow(Option<ResourceHandle>),
        ReleaseProcess(ResourceHandle),
    }

    #[derive(Debug, Default)]
    struct Host {
        calls: Vec<Call>,
        process: Option<ResourceHandle>,
        window: Option<ResourceHandle>,
    }

    impl MessageDialogResourceHost for Host {
        fn acquire_process_resource(&mut self) -> Option<ResourceHandle> {
            self.calls.push(Call::AcquireProcess);
            self.process
        }

        fn acquire_window_resource(&mut self, window: ResourceHandle) -> Option<ResourceHandle> {
            self.calls.push(Call::AcquireWindow(window));
            self.window
        }

        fn release_window_resource(&mut self, resource: Option<ResourceHandle>) {
            self.calls.push(Call::ReleaseWindow(resource));
        }

        fn release_process_resource(&mut self, resource: ResourceHandle) {
            self.calls.push(Call::ReleaseProcess(resource));
        }
    }

    #[test]
    fn show_acquires_both_handles_and_closes_the_gate() {
        let mut host = Host {
            process: Some(11),
            window: Some(22),
            ..Host::default()
        };

        let state = show_message_dialog(7, &mut host);

        assert_eq!(
            state,
            MessageDialogState {
                process_resource: Some(11),
                window_resource: Some(22),
                close_allowed: false,
            }
        );
        assert_eq!(host.calls, [Call::AcquireProcess, Call::AcquireWindow(7)]);
        assert!(!can_close_message_dialog(&state));
    }

    #[test]
    fn a_failed_acquisition_is_stored_without_a_check() {
        let mut host = Host::default();

        let state = show_message_dialog(7, &mut host);

        assert_eq!(state.process_resource, None);
        assert_eq!(state.window_resource, None);
    }

    #[test]
    fn hide_releases_the_window_handle_even_when_absent_but_guards_the_process_handle() {
        let mut host = Host::default();

        hide_message_dialog(
            &MessageDialogState {
                process_resource: None,
                window_resource: None,
                close_allowed: false,
            },
            &mut host,
        );
        assert_eq!(host.calls, [Call::ReleaseWindow(None)]);

        host.calls.clear();
        hide_message_dialog(
            &MessageDialogState {
                process_resource: Some(11),
                window_resource: Some(22),
                close_allowed: true,
            },
            &mut host,
        );
        assert_eq!(
            host.calls,
            [Call::ReleaseWindow(Some(22)), Call::ReleaseProcess(11)]
        );
    }

    #[test]
    fn hide_repeats_its_releases_because_the_recovered_handler_clears_nothing() {
        let mut host = Host::default();
        let state = MessageDialogState {
            process_resource: Some(11),
            window_resource: Some(22),
            close_allowed: false,
        };

        hide_message_dialog(&state, &mut host);
        hide_message_dialog(&state, &mut host);

        assert_eq!(
            host.calls,
            [
                Call::ReleaseWindow(Some(22)),
                Call::ReleaseProcess(11),
                Call::ReleaseWindow(Some(22)),
                Call::ReleaseProcess(11),
            ]
        );
    }

    #[test]
    fn the_close_query_only_reports_the_stored_gate() {
        let mut host = Host::default();
        let mut window = Window::new("Msg1".to_owned(), "Msg2".to_owned());

        window.show(3, &mut host);
        assert!(!can_close_message_dialog(window.state()));

        window.allow_close();
        assert!(can_close_message_dialog(window.state()));

        window.show(3, &mut host);
        assert!(!can_close_message_dialog(window.state()));
    }

    #[test]
    fn iced_messages_replace_the_two_recovered_label_lines() {
        let mut window = Window::new("Msg1".to_owned(), "Msg2".to_owned());

        window.update(Message::FirstLineChanged("Working".to_owned()));
        window.update(Message::SecondLineChanged("Please wait".to_owned()));

        assert_eq!(window.first_line, "Working");
        assert_eq!(window.second_line, "Please wait");
    }
}
