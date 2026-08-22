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
const DEFAULT_SERIAL_MONITOR_OPTIONS: u32 = 1;
const ENTER_KEY_CODE: u16 = 0x0d;

/// The recovered `HTerm` configuration words whose Delphi field names are not
/// present in the executable evidence.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct NativeStartupConfiguration {
    pub field_0730: u32,
    pub field_0734: u32,
    pub field_0738: u32,
    pub field_073c: u32,
    pub field_0744: u32,
}

impl Default for NativeStartupConfiguration {
    fn default() -> Self {
        Self {
            field_0730: 0,
            field_0734: 8,
            field_0738: 1,
            field_073c: 115_200,
            field_0744: 0,
        }
    }
}

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

/// Supplies the registry and global-window effects owned by the application
/// shell rather than this Iced model.
pub trait LifecycleAdapter {
    /// Reads the `SermonOptions` registry value. `None` means that the value is
    /// absent and the recovered default value must be used.
    ///
    /// # Errors
    ///
    /// Returns a backend error when the settings store cannot be opened or
    /// read.
    fn load_serial_monitor_options(&mut self) -> Result<Option<u32>, Error>;

    /// Writes the `SermonOptions` registry value.
    ///
    /// # Errors
    ///
    /// Returns a backend error when the settings store cannot be opened or
    /// written.
    fn save_serial_monitor_options(&mut self, options: u32) -> Result<(), Error>;

    /// Selects the Delphi `caFree` close action.
    fn request_release_on_close(&mut self);

    /// Clears the application-owned reference to the serial-monitor window.
    fn clear_window_registration(&mut self);
}

/// Supplies native receive polling and the application refresh performed by
/// each active timer tick.
pub trait PollAdapter {
    /// Polls one configured `HTerm` handle and converts the returned native
    /// string to Unicode.
    ///
    /// # Errors
    ///
    /// Returns a backend error if native polling or conversion fails.
    fn poll_text(&mut self, handle: u64) -> Result<Option<String>, Error>;

    fn refresh_application(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SendOutcome {
    Inactive,
    Sent,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum KeyDownOutcome {
    Ignored,
    Sent,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PollOutcome {
    Inactive,
    NoData,
    Appended,
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
    native_startup_configuration: NativeStartupConfiguration,
    terminal_state: TerminalState,
    timed_sequence: EncodedTimedSequence,
    pending_action: Option<PendingAction>,
    error: Option<Error>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new()
    }
}

impl Window {
    /// Ports Ghidra function `FUN_014ba210` at `0x014BA210`.
    #[must_use]
    pub fn new() -> Self {
        Self {
            send_text: String::new(),
            received_text: String::new(),
            line_endings: LineEndings {
                carriage_return: true,
                line_feed: false,
            },
            native_startup_configuration: NativeStartupConfiguration::default(),
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

    /// Ports Ghidra function `FUN_014ba1e0` at `0x014BA1E0`.
    ///
    /// # Errors
    ///
    /// Returns a settings error before changing the close action or clearing
    /// the application window reference.
    pub fn close(&mut self, adapter: &mut impl LifecycleAdapter) -> Result<(), Error> {
        adapter.save_serial_monitor_options(line_ending_options(self.line_endings))?;
        adapter.request_release_on_close();
        adapter.clear_window_registration();
        self.deactivate();
        Ok(())
    }

    /// Ports Ghidra function `FUN_014ba280` at `0x014BA280`.
    ///
    /// # Errors
    ///
    /// Returns a settings error without changing the current check-box state.
    pub fn show(&mut self, adapter: &mut impl LifecycleAdapter) -> Result<(), Error> {
        let options = adapter
            .load_serial_monitor_options()?
            .unwrap_or(DEFAULT_SERIAL_MONITOR_OPTIONS);
        self.line_endings = line_endings_from_options(options);
        Ok(())
    }

    /// Ports Ghidra function `FUN_014ba290` at `0x014BA290`.
    ///
    /// # Errors
    ///
    /// Returns a backend error if the active handle cannot be polled. As in
    /// the recovered handler, the application refresh occurs after a normal
    /// poll even when it returns no text.
    pub fn poll_timer(&mut self, adapter: &mut impl PollAdapter) -> Result<PollOutcome, Error> {
        let TerminalState::Active { handle } = self.terminal_state else {
            return Ok(PollOutcome::Inactive);
        };
        let received = adapter.poll_text(handle)?;
        let outcome = match received.as_deref() {
            Some(text) if !text.is_empty() => {
                self.received_text.push_str(text);
                PollOutcome::Appended
            }
            Some(_) | None => PollOutcome::NoData,
        };
        adapter.refresh_application();
        Ok(outcome)
    }

    /// Ports Ghidra function `FUN_014ba450` at `0x014BA450`.
    ///
    /// The recovered handler does not consume or rewrite the key value.
    ///
    /// # Errors
    ///
    /// Returns an encoding or backend error from the Enter-key send path.
    pub fn send_key_down(
        &mut self,
        key_code: u16,
        backend: &mut impl Backend,
    ) -> Result<KeyDownOutcome, Error> {
        if key_code != ENTER_KEY_CODE {
            return Ok(KeyDownOutcome::Ignored);
        }
        match self.send_now(backend)? {
            SendOutcome::Inactive => Ok(KeyDownOutcome::Ignored),
            SendOutcome::Sent => Ok(KeyDownOutcome::Sent),
        }
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
    pub const fn native_startup_configuration(&self) -> NativeStartupConfiguration {
        self.native_startup_configuration
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

const fn line_endings_from_options(options: u32) -> LineEndings {
    LineEndings {
        carriage_return: options & 1 != 0,
        line_feed: options & 2 != 0,
    }
}

const fn line_ending_options(line_endings: LineEndings) -> u32 {
    let carriage_return = if line_endings.carriage_return { 1 } else { 0 };
    let line_feed = if line_endings.line_feed { 2 } else { 0 };
    carriage_return | line_feed
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

    #[derive(Debug, Default)]
    struct TestLifecycleAdapter {
        loaded: Option<u32>,
        load_error: bool,
        save_error: bool,
        saved: Vec<u32>,
        events: Vec<&'static str>,
    }

    impl LifecycleAdapter for TestLifecycleAdapter {
        fn load_serial_monitor_options(&mut self) -> Result<Option<u32>, Error> {
            if self.load_error {
                Err(Error::Backend(String::from("load failed")))
            } else {
                Ok(self.loaded)
            }
        }

        fn save_serial_monitor_options(&mut self, options: u32) -> Result<(), Error> {
            if self.save_error {
                Err(Error::Backend(String::from("save failed")))
            } else {
                self.saved.push(options);
                self.events.push("save");
                Ok(())
            }
        }

        fn request_release_on_close(&mut self) {
            self.events.push("release");
        }

        fn clear_window_registration(&mut self) {
            self.events.push("clear registration");
        }
    }

    #[derive(Debug, Default)]
    struct TestPollAdapter {
        results: Vec<Option<String>>,
        handles: Vec<u64>,
        refreshes: usize,
    }

    impl PollAdapter for TestPollAdapter {
        fn poll_text(&mut self, handle: u64) -> Result<Option<String>, Error> {
            self.handles.push(handle);
            Ok(self.results.pop().flatten())
        }

        fn refresh_application(&mut self) {
            self.refreshes += 1;
        }
    }

    #[test]
    fn create_applies_recovered_native_and_checkbox_defaults() {
        let window = Window::new();

        assert_eq!(window.terminal_state, TerminalState::Inactive);
        assert_eq!(
            window.native_startup_configuration(),
            NativeStartupConfiguration {
                field_0730: 0,
                field_0734: 8,
                field_0738: 1,
                field_073c: 115_200,
                field_0744: 0,
            }
        );
        assert_eq!(
            window.line_endings(),
            LineEndings {
                carriage_return: true,
                line_feed: false,
            }
        );
    }

    #[test]
    fn show_loads_option_bits_and_uses_one_when_value_is_absent() {
        let mut window = Window::new();
        let mut adapter = TestLifecycleAdapter::default();

        window.show(&mut adapter).unwrap();
        assert_eq!(window.line_endings(), line_endings_from_options(1));

        adapter.loaded = Some(2);
        window.show(&mut adapter).unwrap();
        assert_eq!(window.line_endings(), line_endings_from_options(2));
    }

    #[test]
    fn close_saves_option_bits_then_releases_and_unregisters_window() {
        let mut window = Window::new();
        window.activate(27);
        window.update(Message::AddLineFeedChanged(true));
        let mut adapter = TestLifecycleAdapter::default();

        window.close(&mut adapter).unwrap();

        assert_eq!(adapter.saved, [3]);
        assert_eq!(adapter.events, ["save", "release", "clear registration"]);
        assert_eq!(window.terminal_state, TerminalState::Inactive);
    }

    #[test]
    fn close_stops_before_lifecycle_changes_when_settings_write_fails() {
        let mut window = Window::new();
        window.activate(27);
        let mut adapter = TestLifecycleAdapter {
            save_error: true,
            ..TestLifecycleAdapter::default()
        };

        assert!(window.close(&mut adapter).is_err());
        assert!(adapter.events.is_empty());
        assert_eq!(window.terminal_state, TerminalState::Active { handle: 27 });
    }

    #[test]
    fn timer_skips_inactive_window_and_refreshes_each_normal_active_poll() {
        let mut window = Window::new();
        let mut adapter = TestPollAdapter::default();

        assert_eq!(window.poll_timer(&mut adapter), Ok(PollOutcome::Inactive));
        assert!(adapter.handles.is_empty());
        assert_eq!(adapter.refreshes, 0);

        window.activate(41);
        adapter.results.push(None);
        assert_eq!(window.poll_timer(&mut adapter), Ok(PollOutcome::NoData));
        assert_eq!(adapter.handles, [41]);
        assert_eq!(adapter.refreshes, 1);

        adapter.results.push(Some(String::from("answer")));
        assert_eq!(window.poll_timer(&mut adapter), Ok(PollOutcome::Appended));
        assert_eq!(window.received_text(), "answer");
        assert_eq!(adapter.handles, [41, 41]);
        assert_eq!(adapter.refreshes, 2);
    }

    #[test]
    fn key_down_sends_only_enter_while_terminal_is_active() {
        let mut window = Window::new();
        window.set_send_text("AT");
        let mut backend = TestBackend::default();

        assert_eq!(
            window.send_key_down(u16::from(b'A'), &mut backend),
            Ok(KeyDownOutcome::Ignored)
        );
        assert_eq!(
            window.send_key_down(ENTER_KEY_CODE, &mut backend),
            Ok(KeyDownOutcome::Ignored)
        );
        assert_eq!(window.send_text(), "AT");

        window.activate(55);
        assert_eq!(
            window.send_key_down(ENTER_KEY_CODE, &mut backend),
            Ok(KeyDownOutcome::Sent)
        );
        assert_eq!(backend.sends, [(55, b"AT\r\0".to_vec())]);
        assert!(window.send_text().is_empty());
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
