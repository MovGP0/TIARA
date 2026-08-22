use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, row, text, text_input};
use iced::{Element, Length, Task};

use crate::shared::window_shell;

pub const TITLE: &str = "New name";
pub const FORM_RESOURCE: &str = "NewName";
pub const LIBRARY_EVALUATION: &str = "Rust encode_utf16 and inclusive u16 ranges preserve the recovered UTF-16 ASCII predicates; std::fs::metadata follows links and supplies the existing non-directory file check; iced 0.13 supplies the dialog controls and message/update state, so no additional validation or file-system crate is required";

const STATUS: &str = "Enter a new name";
const TOOLBAR: &[&str] = &[];

/// Tests one UTF-16 code unit for an ASCII letter or allowed underscore.
///
/// Reimplements Ghidra function `FUN_01b215c0` at `0x01B215C0`.
#[must_use]
pub const fn is_ascii_letter(code_unit: u16, allow_underscore: bool) -> bool {
    matches!(code_unit, 0x41..=0x5a | 0x61..=0x7a) || allow_underscore && code_unit == 0x5f
}

/// Tests one UTF-16 code unit for an ASCII decimal digit.
///
/// Reimplements Ghidra function `FUN_01b215f0` at `0x01B215F0`.
#[must_use]
pub const fn is_ascii_digit(code_unit: u16) -> bool {
    matches!(code_unit, 0x30..=0x39)
}

#[must_use]
pub fn is_valid_identifier(value: &str) -> bool {
    let mut code_units = value.encode_utf16();
    let Some(first) = code_units.next() else {
        return false;
    };
    is_ascii_letter(first, true)
        && code_units.all(|code_unit| is_ascii_letter(code_unit, true) || is_ascii_digit(code_unit))
}

pub trait FileProbe {
    fn is_existing_file(&self, path: &Path) -> bool;
}

#[derive(Debug, Clone, Copy, Default)]
pub struct StandardFileProbe;

impl FileProbe for StandardFileProbe {
    fn is_existing_file(&self, path: &Path) -> bool {
        std::fs::metadata(path).is_ok_and(|metadata| metadata.is_file())
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ValidationMode {
    Identifier,
    ExistingFile { configured_tail: String },
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseDecision {
    Allow,
    KeepOpen,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Action {
    Validate,
    CloseCancelled,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    NameChanged(String),
    Accept,
    Cancel,
    NoOp,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    edit_text: String,
    stored_result: String,
    mode: ValidationMode,
    error_message: String,
    shown_message: Option<String>,
    validation_failed: bool,
    accepted: bool,
    pending_action: Option<Action>,
}

impl Window {
    #[must_use]
    pub fn new(
        initial_name: impl Into<String>,
        error_message: impl Into<String>,
        mode: ValidationMode,
    ) -> Self {
        let initial_name = initial_name.into();
        Self {
            edit_text: initial_name.clone(),
            stored_result: initial_name,
            mode,
            error_message: error_message.into(),
            shown_message: None,
            validation_failed: false,
            accepted: false,
            pending_action: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::NameChanged(value) => self.edit_text = value,
            Message::Accept => self.pending_action = Some(Action::Validate),
            Message::Cancel => self.pending_action = Some(Action::CloseCancelled),
            Message::NoOp => {}
        }
        Task::none()
    }

    #[must_use]
    pub const fn take_action(&mut self) -> Option<Action> {
        self.pending_action.take()
    }

    /// Validates and stores the current edit text, then applies the close guard.
    ///
    /// The recovered `NewName.bOKClick` path uses the two predicates above for
    /// identifier mode. File mode checks the exact entered-text, backslash, and
    /// configured-tail concatenation. Both valid and invalid attempts replace
    /// the stored result. The close guard resets its failure flag after every
    /// attempt, so a later corrected value can be accepted.
    pub fn attempt_accept(&mut self, file_probe: &impl FileProbe) -> CloseDecision {
        let valid = match &self.mode {
            ValidationMode::Identifier => is_valid_identifier(&self.edit_text),
            ValidationMode::ExistingFile { configured_tail } => {
                let path = PathBuf::from(format!("{}\\{configured_tail}", self.edit_text));
                file_probe.is_existing_file(&path)
            }
        };
        self.validation_failed = !valid;
        self.shown_message = (self.validation_failed && !self.error_message.is_empty())
            .then(|| self.error_message.clone());
        self.stored_result.clone_from(&self.edit_text);

        let decision = if self.validation_failed {
            CloseDecision::KeepOpen
        } else {
            self.accepted = true;
            CloseDecision::Allow
        };
        self.validation_failed = false;
        decision
    }

    #[must_use]
    pub fn edit_text(&self) -> &str {
        &self.edit_text
    }

    #[must_use]
    pub fn stored_result(&self) -> &str {
        &self.stored_result
    }

    #[must_use]
    pub fn shown_message(&self) -> Option<&str> {
        self.shown_message.as_deref()
    }

    #[must_use]
    pub const fn validation_failed(&self) -> bool {
        self.validation_failed
    }

    #[must_use]
    pub const fn is_accepted(&self) -> bool {
        self.accepted
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(TOOLBAR, Message::NoOp);
        let message = self.shown_message.as_deref().unwrap_or_default();
        let body = container(
            column![
                row![
                    text("New name").width(Length::Fixed(100.0)),
                    text_input("", &self.edit_text).on_input(Message::NameChanged),
                ]
                .spacing(8),
                text(message),
                row![
                    button("OK").on_press(Message::Accept),
                    button("Cancel").on_press(Message::Cancel),
                ]
                .spacing(8),
            ]
            .spacing(10),
        )
        .padding(14)
        .width(Length::Fill)
        .height(Length::Fill);
        window_shell::frame(TITLE, menu, toolbar, body.into(), STATUS)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::cell::RefCell;

    #[derive(Debug)]
    struct FakeFileProbe {
        result: bool,
        paths: RefCell<Vec<PathBuf>>,
    }

    impl FileProbe for FakeFileProbe {
        fn is_existing_file(&self, path: &Path) -> bool {
            self.paths.borrow_mut().push(path.to_owned());
            self.result
        }
    }

    fn probe(result: bool) -> FakeFileProbe {
        FakeFileProbe {
            result,
            paths: RefCell::new(Vec::new()),
        }
    }

    #[test]
    fn letter_predicate_accepts_only_ascii_letters_and_allowed_underscore() {
        assert!(is_ascii_letter(u16::from(b'A'), false));
        assert!(is_ascii_letter(u16::from(b'Z'), false));
        assert!(is_ascii_letter(u16::from(b'a'), false));
        assert!(is_ascii_letter(u16::from(b'z'), false));
        assert!(!is_ascii_letter(u16::from(b'_'), false));
        assert!(is_ascii_letter(u16::from(b'_'), true));
        assert!(!is_ascii_letter(u16::from(b'0'), true));
        assert!(!is_ascii_letter(0x00e9, true));
    }

    #[test]
    fn digit_predicate_accepts_only_ascii_decimal_digits() {
        assert!(is_ascii_digit(u16::from(b'0')));
        assert!(is_ascii_digit(u16::from(b'9')));
        assert!(!is_ascii_digit(u16::from(b'/')));
        assert!(!is_ascii_digit(u16::from(b':')));
        assert!(!is_ascii_digit(0xff11));
    }

    #[test]
    fn identifier_validation_uses_first_and_later_character_rules() {
        assert!(is_valid_identifier("Name"));
        assert!(is_valid_identifier("_name2"));
        assert!(!is_valid_identifier(""));
        assert!(!is_valid_identifier("2name"));
        assert!(!is_valid_identifier("new name"));
        assert!(!is_valid_identifier("naïve"));
        assert!(!is_valid_identifier("😀"));
    }

    #[test]
    fn invalid_attempt_stores_text_shows_message_and_allows_retry() {
        let mut window = Window::new(
            "Initial",
            "Invalid project name",
            ValidationMode::Identifier,
        );
        let _ = window.update(Message::NameChanged("2invalid".into()));

        assert_eq!(
            window.attempt_accept(&probe(false)),
            CloseDecision::KeepOpen
        );
        assert_eq!(window.stored_result(), "2invalid");
        assert_eq!(window.shown_message(), Some("Invalid project name"));
        assert!(!window.validation_failed());
        assert!(!window.is_accepted());

        let _ = window.update(Message::NameChanged("Valid_2".into()));
        assert_eq!(window.attempt_accept(&probe(false)), CloseDecision::Allow);
        assert_eq!(window.stored_result(), "Valid_2");
        assert_eq!(window.shown_message(), None);
        assert!(window.is_accepted());
    }

    #[test]
    fn empty_error_message_still_blocks_invalid_close() {
        let mut window = Window::new("", "", ValidationMode::Identifier);

        assert_eq!(
            window.attempt_accept(&probe(false)),
            CloseDecision::KeepOpen
        );
        assert_eq!(window.shown_message(), None);
        assert_eq!(window.stored_result(), "");
    }

    #[test]
    fn file_mode_probes_exact_backslash_concatenation() {
        let file_probe = probe(true);
        let mut window = Window::new(
            r"C:\projects\demo",
            "Missing file",
            ValidationMode::ExistingFile {
                configured_tail: "manifest.tcl".into(),
            },
        );

        assert_eq!(window.attempt_accept(&file_probe), CloseDecision::Allow);
        assert_eq!(
            file_probe.paths.borrow().as_slice(),
            [PathBuf::from(r"C:\projects\demo\manifest.tcl")]
        );
    }

    #[test]
    fn file_mode_rejects_probe_failure_without_empty_input_special_case() {
        let file_probe = probe(false);
        let mut window = Window::new(
            "",
            "Missing file",
            ValidationMode::ExistingFile {
                configured_tail: "tail.dat".into(),
            },
        );

        assert_eq!(window.attempt_accept(&file_probe), CloseDecision::KeepOpen);
        assert_eq!(
            file_probe.paths.borrow().as_slice(),
            [PathBuf::from(r"\tail.dat")]
        );
        assert_eq!(window.stored_result(), "");
    }

    #[test]
    fn update_exposes_validation_and_cancel_actions() {
        let mut window = Window::new("Name", "", ValidationMode::Identifier);
        let _ = window.update(Message::Accept);
        assert_eq!(window.take_action(), Some(Action::Validate));
        let _ = window.update(Message::Cancel);
        assert_eq!(window.take_action(), Some(Action::CloseCancelled));
    }
}
