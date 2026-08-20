//! Iced adapter for the `HTerm` serial-monitor window.
//!
//! Library evaluation: Iced 0.13.1 supplies the window state and typed
//! messages. `tiara-core` prepares the exact CR/LF and NUL-terminated payload.
//! The host supplies an adapter for default-ANSI conversion and the existing
//! `HTerm` backend. A serial-port crate was rejected because this window does not
//! open a device; it dispatches through an already configured backend handle.

use std::fmt;
use std::path::Path;

use iced::widget::{button, checkbox, column, row, scrollable, text, text_input};
use iced::{Element, Length};
use tiara_core::hterm::{
    EncodedTimedSequence, LineEndings, RuntimeApplyOutcome, RuntimeBackend, RuntimeError,
    RuntimeFileStore, TimedSequenceConfig, apply_runtime_sequence, prepare_nul_terminated_payload,
};

use crate::hterm_timed_sequence;
use crate::shared::window_shell;

pub const TITLE: &str = "Serial monitor";
pub const SCREENSHOT: &str = "screenshots/Serial_Monitor_Window.png";
pub const FORM_RESOURCE: &str = "HTerm";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("014ba210");
const STATUS: &str = "Serial data";

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum TerminalState {
    #[default]
    Inactive,
    Active {
        handle: u64,
    },
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Error {
    Encoding(String),
    Backend(String),
}

impl fmt::Display for Error {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Encoding(message) | Self::Backend(message) => formatter.write_str(message),
        }
    }
}

pub trait Backend {
    /// Converts Unicode input with the process default ANSI code page.
    ///
    /// # Errors
    ///
    /// Returns an encoding error if the platform adapter cannot convert text.
    fn encode_default_ansi(&mut self, text: &str) -> Result<Vec<u8>, Error>;

    /// Sends a NUL-terminated byte buffer through a configured `HTerm` handle.
    ///
    /// # Errors
    ///
    /// Returns a backend error if dispatch does not return normally.
    fn send_text(&mut self, handle: u64, nul_terminated_payload: &[u8]) -> Result<(), Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SendOutcome {
    Inactive,
    Sent,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PendingAction {
    SendNow,
    OpenTimedSequence,
}

#[derive(Debug)]
pub struct Window {
    send_text: String,
    received_text: String,
    line_endings: LineEndings,
    terminal_state: TerminalState,
    timed_sequence: EncodedTimedSequence,
    pending_action: Option<PendingAction>,
    error: Option<Error>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            send_text: String::new(),
            received_text: String::new(),
            line_endings: LineEndings {
                carriage_return: true,
                line_feed: false,
            },
            terminal_state: TerminalState::Inactive,
            timed_sequence: EncodedTimedSequence::default(),
            pending_action: None,
            error: None,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    SendTextChanged(String),
    AddCarriageReturnChanged(bool),
    AddLineFeedChanged(bool),
    ClearReceived,
    SendRequested,
    OpenTimedSequence,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::SendTextChanged(value) => self.send_text = value,
            Message::AddCarriageReturnChanged(value) => {
                self.line_endings.carriage_return = value;
            }
            Message::AddLineFeedChanged(value) => self.line_endings.line_feed = value,
            Message::ClearReceived => self.clear_received(),
            Message::SendRequested => self.pending_action = Some(PendingAction::SendNow),
            Message::OpenTimedSequence => {
                self.pending_action = Some(PendingAction::OpenTimedSequence);
            }
        }
    }

    /// Ports Ghidra function `FUN_014ba1a0` at `0x014BA1A0`.
    pub fn clear_received(&mut self) {
        self.received_text.clear();
    }

    /// Ports Ghidra function `FUN_014ba4f0` at `0x014BA4F0`.
    ///
    /// # Errors
    ///
    /// Returns an encoding or backend error. The input remains available when
    /// either adapter fails before normal backend return.
    pub fn send_now(&mut self, backend: &mut impl Backend) -> Result<SendOutcome, Error> {
        let TerminalState::Active { handle } = self.terminal_state else {
            return Ok(SendOutcome::Inactive);
        };
        let encoded = backend.encode_default_ansi(&self.send_text)?;
        self.dispatch_prepared(handle, encoded, backend)?;
        Ok(SendOutcome::Sent)
    }

    /// Ports Ghidra function `FUN_014ba390` at `0x014BA390`.
    ///
    /// # Errors
    ///
    /// Returns a backend error without clearing the input if dispatch does not
    /// return normally.
    pub fn dispatch_prepared(
        &mut self,
        handle: u64,
        encoded: Vec<u8>,
        backend: &mut impl Backend,
    ) -> Result<(), Error> {
        let payload = prepare_nul_terminated_payload(encoded, self.line_endings);
        backend.send_text(handle, &payload)?;
        self.send_text.clear();
        self.error = None;
        Ok(())
    }

    /// Ports Ghidra function `FUN_014ba580` at `0x014BA580`.
    #[must_use]
    pub fn open_timed_sequence_editor(&self) -> hterm_timed_sequence::Window {
        hterm_timed_sequence::Window::from_encoded(&self.timed_sequence)
    }

    pub const fn activate(&mut self, handle: u64) {
        self.terminal_state = TerminalState::Active { handle };
    }

    pub const fn deactivate(&mut self) {
        self.terminal_state = TerminalState::Inactive;
    }

    pub fn append_received(&mut self, text: &str) {
        self.received_text.push_str(text);
    }

    pub fn set_send_text(&mut self, text: impl Into<String>) {
        self.send_text = text.into();
    }

    pub fn set_timed_sequence(&mut self, config: &TimedSequenceConfig) {
        self.timed_sequence = EncodedTimedSequence::from_config(config);
    }

    pub fn set_encoded_timed_sequence(&mut self, config: EncodedTimedSequence) {
        self.timed_sequence = config;
    }

    pub fn load_serialized_timed_sequence(&mut self, text: &str, enabled: bool) {
        self.timed_sequence.replace_from_text(text, enabled);
    }

    /// Applies the stored timed sequence to a configured runtime backend.
    ///
    /// # Errors
    ///
    /// Returns a transport-file or backend-adapter error.
    pub fn apply_timed_sequence_runtime(
        &self,
        handle: u64,
        working_directory: &Path,
        store: &mut impl RuntimeFileStore,
        backend: &mut impl RuntimeBackend,
    ) -> Result<RuntimeApplyOutcome, RuntimeError> {
        apply_runtime_sequence(
            &self.timed_sequence,
            handle,
            working_directory,
            store,
            backend,
        )
    }

    #[must_use]
    pub fn send_text(&self) -> &str {
        &self.send_text
    }

    #[must_use]
    pub fn received_text(&self) -> &str {
        &self.received_text
    }

    #[must_use]
    pub fn timed_sequence(&self) -> TimedSequenceConfig {
        self.timed_sequence.decode()
    }

    #[must_use]
    pub const fn encoded_timed_sequence(&self) -> &EncodedTimedSequence {
        &self.timed_sequence
    }

    #[must_use]
    pub const fn line_endings(&self) -> LineEndings {
        self.line_endings
    }

    #[must_use]
    pub const fn take_pending_action(&mut self) -> Option<PendingAction> {
        self.pending_action.take()
    }

    #[must_use]
    pub const fn error(&self) -> Option<&Error> {
        self.error.as_ref()
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let received = column![
            row![
                button("Clear received").on_press(Message::ClearReceived),
                text("Received data"),
            ]
            .spacing(20),
            scrollable(text(&self.received_text)).height(Length::Fill),
        ]
        .height(Length::FillPortion(3));
        let transmitted = column![
            text("Transmitted data"),
            row![
                text("Send now:"),
                text_input("", &self.send_text).on_input(Message::SendTextChanged),
                button("Send").on_press(Message::SendRequested),
                checkbox("Add \\r", self.line_endings.carriage_return)
                    .on_toggle(Message::AddCarriageReturnChanged),
                checkbox("Add \\n", self.line_endings.line_feed)
                    .on_toggle(Message::AddLineFeedChanged),
            ]
            .spacing(8),
            row![
                text("Timed sequence:"),
                button("Set...").on_press(Message::OpenTimedSequence),
            ]
            .spacing(8),
        ]
        .spacing(8)
        .height(Length::FillPortion(1));
        let body = column![received, transmitted]
            .spacing(8)
            .padding(8)
            .height(Length::Fill);

        window_shell::frame(
            TITLE,
            window_shell::empty_menu(),
            window_shell::empty_menu(),
            body.into(),
            STATUS,
        )
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct TestBackend {
        encoded: Vec<String>,
        sends: Vec<(u64, Vec<u8>)>,
        encoding_error: bool,
        send_error: bool,
    }

    impl Backend for TestBackend {
        fn encode_default_ansi(&mut self, text: &str) -> Result<Vec<u8>, Error> {
            self.encoded.push(text.to_owned());
            if self.encoding_error {
                Err(Error::Encoding(String::from("encoding failed")))
            } else {
                Ok(text.as_bytes().to_vec())
            }
        }

        fn send_text(&mut self, handle: u64, payload: &[u8]) -> Result<(), Error> {
            if self.send_error {
                Err(Error::Backend(String::from("send failed")))
            } else {
                self.sends.push((handle, payload.to_vec()));
                Ok(())
            }
        }
    }

    #[test]
    fn clear_received_changes_only_the_visible_history() {
        let mut window = Window::default();
        window.append_received("reply");
        window.set_send_text("command");
        window.activate(7);

        window.clear_received();

        assert!(window.received_text().is_empty());
        assert_eq!(window.send_text(), "command");
        assert_eq!(window.terminal_state, TerminalState::Active { handle: 7 });
    }

    #[test]
    fn inactive_send_is_a_complete_noop() {
        let mut window = Window::default();
        window.set_send_text("AT");
        let mut backend = TestBackend::default();

        assert_eq!(window.send_now(&mut backend), Ok(SendOutcome::Inactive));
        assert_eq!(window.send_text(), "AT");
        assert!(backend.encoded.is_empty());
        assert!(backend.sends.is_empty());
    }

    #[test]
    fn active_send_encodes_adds_line_endings_dispatches_and_clears() {
        let mut window = Window::default();
        window.activate(42);
        window.set_send_text("AT");
        window.update(Message::AddLineFeedChanged(true));
        let mut backend = TestBackend::default();

        assert_eq!(window.send_now(&mut backend), Ok(SendOutcome::Sent));
        assert_eq!(backend.encoded, [String::from("AT")]);
        assert_eq!(backend.sends, [(42, b"AT\r\n\0".to_vec())]);
        assert!(window.send_text().is_empty());
        assert!(window.received_text().is_empty());
    }

    #[test]
    fn active_empty_send_still_calls_backend() {
        let mut window = Window::default();
        window.activate(9);
        let mut backend = TestBackend::default();

        assert_eq!(window.send_now(&mut backend), Ok(SendOutcome::Sent));
        assert_eq!(backend.sends, [(9, b"\r\0".to_vec())]);
    }

    #[test]
    fn adapter_failure_preserves_send_input() {
        let mut window = Window::default();
        window.activate(9);
        window.set_send_text("retry me");
        let mut backend = TestBackend {
            send_error: true,
            ..TestBackend::default()
        };

        assert!(window.send_now(&mut backend).is_err());
        assert_eq!(window.send_text(), "retry me");
    }

    #[test]
    fn timed_sequence_editor_stages_a_fresh_copy() {
        let mut window = Window::default();
        let config = TimedSequenceConfig {
            enabled: true,
            lines: vec![String::from("10, 1")],
        };
        window.set_timed_sequence(&config);

        let mut editor = window.open_timed_sequence_editor();
        editor.clear_staged_lines();

        assert_eq!(window.timed_sequence(), config);
        assert!(editor.staged_lines().is_empty());
    }

    #[test]
    fn iced_commands_expose_distinct_host_actions() {
        let mut window = Window::default();

        window.update(Message::SendRequested);
        assert_eq!(window.take_pending_action(), Some(PendingAction::SendNow));
        window.update(Message::OpenTimedSequence);
        assert_eq!(
            window.take_pending_action(),
            Some(PendingAction::OpenTimedSequence)
        );
    }
}
