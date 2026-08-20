//! Iced editor for the `HTerm` timed-sequence configuration.
//!
//! Library evaluation: Iced 0.13.1 supplies typed messages and controls, and
//! `rfd` supplies the maintained asynchronous native file picker. The host
//! provides small file-store and `HTerm`-parser adapters because the recovered
//! parser belongs to the existing backend. Rust ownership keeps edits staged
//! until validation succeeds, so no transaction crate is required.

use std::fmt;
use std::path::{Path, PathBuf};

use iced::widget::{button, checkbox, column, row, scrollable, text, text_editor};
use iced::{Element, Length, Task};
use rfd::AsyncFileDialog;
use tiara_core::hterm::{EncodedTimedSequence, ParseMode, TimedSequenceConfig, ValidationError};

pub const TITLE: &str = "Timed sequence";
pub const FORM_RESOURCE: &str = "HTermData";

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Error {
    File(String),
    Parser(ValidationError),
}

impl fmt::Display for Error {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::File(message) => formatter.write_str(message),
            Self::Parser(error) => error.fmt(formatter),
        }
    }
}

pub trait SequenceFileStore {
    /// Loads all text lines from the selected file.
    ///
    /// # Errors
    ///
    /// Returns a file error when the selected file cannot be read.
    fn load_lines(&mut self, path: &Path) -> Result<Vec<String>, Error>;

    /// Saves all staged lines to the parser transport file.
    ///
    /// # Errors
    ///
    /// Returns a file error when the transport file cannot be written.
    fn save_lines(&mut self, path: &Path, lines: &[String]) -> Result<(), Error>;

    fn remove_if_present(&mut self, path: &Path);
}

pub trait SequenceParser {
    /// Validates the parser transport file in `HTerm` mode 1.
    ///
    /// # Errors
    ///
    /// Returns a parser error when the backend rejects the file by exception.
    fn validate(&mut self, path: &Path, mode: ParseMode) -> Result<bool, ValidationError>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum PendingAction {
    Load(PathBuf),
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum AcceptOutcome {
    Committed,
    CloseVetoed,
}

#[derive(Debug, Clone)]
pub enum Message {
    SequenceEdited(text_editor::Action),
    EnableChanged(bool),
    Clear,
    Load,
    LoadPathSelected(Option<PathBuf>),
    Accept,
    Cancel,
}

#[derive(Debug)]
pub struct Window {
    sequence: text_editor::Content,
    enabled: bool,
    close_veto_once: bool,
    pending_action: Option<PendingAction>,
    error: Option<Error>,
}

impl Window {
    /// Ports Ghidra function `FUN_014b8c20` at `0x014B8C20`.
    #[must_use]
    pub fn from_config(config: &TimedSequenceConfig) -> Self {
        Self {
            sequence: text_editor::Content::with_text(&config.lines.join("\n")),
            enabled: config.enabled,
            close_veto_once: false,
            pending_action: None,
            error: None,
        }
    }

    #[must_use]
    pub fn from_encoded(encoded: &EncodedTimedSequence) -> Self {
        Self::from_config(&encoded.decode())
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::SequenceEdited(action) => self.sequence.perform(action),
            Message::EnableChanged(enabled) => self.enabled = enabled,
            Message::Clear => self.clear_staged_lines(),
            Message::Load => return Task::perform(pick_text_file(), Message::LoadPathSelected),
            Message::LoadPathSelected(Some(path)) => {
                self.pending_action = Some(PendingAction::Load(path));
            }
            Message::LoadPathSelected(None) => {}
            Message::Accept => self.pending_action = Some(PendingAction::Accept),
            Message::Cancel => self.pending_action = Some(PendingAction::Cancel),
        }
        Task::none()
    }

    /// Ports Ghidra function `FUN_014b8ca0` at `0x014B8CA0`.
    pub fn clear_staged_lines(&mut self) {
        self.sequence = text_editor::Content::new();
    }

    /// Ports Ghidra function `FUN_014b8cd0` at `0x014B8CD0`.
    ///
    /// # Errors
    ///
    /// Returns a file error without changing staged lines when loading fails.
    pub fn load_selected(
        &mut self,
        path: Option<&Path>,
        store: &mut impl SequenceFileStore,
    ) -> Result<bool, Error> {
        let Some(path) = path else {
            return Ok(false);
        };
        let lines = store.load_lines(path)?;
        self.sequence = text_editor::Content::with_text(&lines.join("\n"));
        self.error = None;
        Ok(true)
    }

    /// Ports Ghidra function `FUN_014b8d70` at `0x014B8D70`.
    ///
    /// # Errors
    ///
    /// Returns a file or parser error without changing the caller model. A
    /// parser exception can leave the transport file for backend diagnosis.
    pub fn accept(
        &mut self,
        session_directory: &Path,
        config: &mut EncodedTimedSequence,
        store: &mut impl SequenceFileStore,
        parser: &mut impl SequenceParser,
    ) -> Result<AcceptOutcome, Error> {
        let lines = self.staged_lines();
        let transport_path = session_directory.join("serial.txt");
        store.save_lines(&transport_path, &lines)?;
        let valid = match parser.validate(&transport_path, ParseMode::Validation) {
            Ok(valid) => valid,
            Err(validation_error) => {
                let error = Error::Parser(validation_error);
                self.error = Some(error.clone());
                return Err(error);
            }
        };

        self.close_veto_once = !valid;
        if valid {
            config.replace_from_lines(&lines, self.enabled);
            self.error = None;
        }
        store.remove_if_present(&transport_path);

        Ok(if valid {
            AcceptOutcome::Committed
        } else {
            AcceptOutcome::CloseVetoed
        })
    }

    /// Ports Ghidra function `FUN_014b8fc0` at `0x014B8FC0`.
    #[must_use]
    pub const fn close_query(&mut self) -> bool {
        let can_close = !self.close_veto_once;
        self.close_veto_once = false;
        can_close
    }

    #[must_use]
    pub fn staged_lines(&self) -> Vec<String> {
        let text = self.sequence.text();
        if matches!(text.as_str(), "" | "\n" | "\r\n") {
            Vec::new()
        } else {
            text.lines()
                .map(|line| line.trim_end_matches('\r').to_owned())
                .collect()
        }
    }

    #[must_use]
    pub const fn enabled(&self) -> bool {
        self.enabled
    }

    #[must_use]
    pub const fn take_pending_action(&mut self) -> Option<PendingAction> {
        self.pending_action.take()
    }

    #[must_use]
    pub const fn error(&self) -> Option<&Error> {
        self.error.as_ref()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let error = self
            .error
            .as_ref()
            .map_or_else(String::new, ToString::to_string);
        column![
            text("Sequence:"),
            text_editor(&self.sequence)
                .on_action(Message::SequenceEdited)
                .height(Length::Fill),
            checkbox("Enable", self.enabled).on_toggle(Message::EnableChanged),
            row![
                button("Clear").on_press(Message::Clear),
                button("Load").on_press(Message::Load),
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(8),
            scrollable(text(error)).height(Length::Shrink),
        ]
        .padding(12)
        .spacing(8)
        .into()
    }
}

async fn pick_text_file() -> Option<PathBuf> {
    AsyncFileDialog::new()
        .add_filter("Text files", &["txt"])
        .pick_file()
        .await
        .map(|file| file.path().to_path_buf())
}

#[cfg(test)]
mod tests {
    use std::collections::BTreeMap;

    use super::*;

    #[derive(Debug, Default)]
    struct Store {
        files: BTreeMap<PathBuf, Vec<String>>,
        saves: Vec<(PathBuf, Vec<String>)>,
        removed: Vec<PathBuf>,
    }

    impl SequenceFileStore for Store {
        fn load_lines(&mut self, path: &Path) -> Result<Vec<String>, Error> {
            self.files
                .get(path)
                .cloned()
                .ok_or_else(|| Error::File(String::from("load failed")))
        }

        fn save_lines(&mut self, path: &Path, lines: &[String]) -> Result<(), Error> {
            self.saves.push((path.to_path_buf(), lines.to_vec()));
            Ok(())
        }

        fn remove_if_present(&mut self, path: &Path) {
            self.removed.push(path.to_path_buf());
        }
    }

    #[derive(Debug)]
    struct Parser {
        result: Result<bool, ValidationError>,
        calls: Vec<(PathBuf, ParseMode)>,
    }

    impl Default for Parser {
        fn default() -> Self {
            Self {
                result: Ok(true),
                calls: Vec::new(),
            }
        }
    }

    impl SequenceParser for Parser {
        fn validate(&mut self, path: &Path, mode: ParseMode) -> Result<bool, ValidationError> {
            self.calls.push((path.to_path_buf(), mode));
            self.result.clone()
        }
    }

    fn config() -> TimedSequenceConfig {
        TimedSequenceConfig {
            enabled: true,
            lines: vec![String::from("10, 1"), String::from("20, 2")],
        }
    }

    #[test]
    fn setup_stages_model_without_mutating_it() {
        let model = config();
        let window = Window::from_config(&model);

        assert!(window.enabled());
        assert_eq!(window.staged_lines(), model.lines);
        assert_eq!(model, config());
    }

    #[test]
    fn clear_only_empties_the_staged_sequence() {
        let model = config();
        let mut window = Window::from_config(&model);

        window.clear_staged_lines();

        assert!(window.staged_lines().is_empty());
        assert!(window.enabled());
        assert_eq!(model, config());
    }

    #[test]
    fn load_cancel_is_a_noop_and_success_replaces_only_staged_lines() {
        let model = config();
        let mut window = Window::from_config(&model);
        let mut store = Store::default();
        let path = PathBuf::from("C:/sequence.txt");
        store
            .files
            .insert(path.clone(), vec![String::from("loaded")]);

        assert_eq!(window.load_selected(None, &mut store), Ok(false));
        assert_eq!(window.load_selected(Some(&path), &mut store), Ok(true));
        assert_eq!(window.staged_lines(), [String::from("loaded")]);
        assert_eq!(model, config());
    }

    #[test]
    fn valid_accept_uses_serial_transport_file_then_commits_and_removes_it() {
        let mut model = EncodedTimedSequence::from_config(&config());
        let mut window = Window::from_encoded(&model);
        let mut store = Store::default();
        let mut parser = Parser::default();
        let session = Path::new("C:/session");
        let _ = window.update(Message::EnableChanged(false));
        window.clear_staged_lines();

        assert_eq!(
            window.accept(session, &mut model, &mut store, &mut parser),
            Ok(AcceptOutcome::Committed)
        );

        let transport = session.join("serial.txt");
        assert_eq!(store.saves, [(transport.clone(), Vec::new())]);
        assert_eq!(parser.calls, [(transport.clone(), ParseMode::Validation)]);
        assert_eq!(store.removed, [transport]);
        assert_eq!(model.decode(), TimedSequenceConfig::default());
        assert!(window.close_query());
    }

    #[test]
    fn rejected_validation_preserves_model_and_vetoes_one_close() {
        let mut model = EncodedTimedSequence::from_config(&config());
        let original = model.clone();
        let mut window = Window::from_encoded(&model);
        let mut store = Store::default();
        let mut parser = Parser {
            result: Ok(false),
            ..Parser::default()
        };

        assert_eq!(
            window.accept(Path::new("C:/session"), &mut model, &mut store, &mut parser,),
            Ok(AcceptOutcome::CloseVetoed)
        );
        assert_eq!(model, original);
        assert!(!window.close_query());
        assert!(window.close_query());
    }

    #[test]
    fn parser_exception_preserves_model_and_transport_file() {
        let mut model = EncodedTimedSequence::from_config(&config());
        let original = model.clone();
        let mut window = Window::from_encoded(&model);
        let mut store = Store::default();
        let mut parser = Parser {
            result: Err(ValidationError::Backend(String::from("invalid literal"))),
            ..Parser::default()
        };

        assert!(
            window
                .accept(Path::new("C:/session"), &mut model, &mut store, &mut parser,)
                .is_err()
        );
        assert_eq!(model, original);
        assert!(store.removed.is_empty());
        assert!(matches!(window.error(), Some(Error::Parser(_))));
    }

    #[test]
    fn iced_messages_stage_host_actions_without_a_live_window() {
        let mut window = Window::from_config(&config());
        let path = PathBuf::from("C:/sequence.txt");

        let _ = window.update(Message::LoadPathSelected(Some(path.clone())));
        assert_eq!(
            window.take_pending_action(),
            Some(PendingAction::Load(path))
        );
        let _ = window.update(Message::Accept);
        assert_eq!(window.take_pending_action(), Some(PendingAction::Accept));
        let _ = window.update(Message::Cancel);
        assert_eq!(window.take_pending_action(), Some(PendingAction::Cancel));
    }
}
