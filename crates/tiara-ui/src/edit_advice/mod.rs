//! Iced adapter for the recovered Edit Advice dialog.
//!
//! Iced supplies the modal state, update messages, multiline editor, and
//! widgets. The standard library supplies integer parsing and owned copies of
//! the advice lines. No additional GUI or validation crate is needed.

use std::fmt;

use iced::widget::{button, column, container, row, text, text_editor, text_input};
use iced::{Element, Length, Task};

pub const TITLE_TEMPLATE: &str = "Edit Advice #%d";
pub const FORM_RESOURCE: &str = "EditAdviceDlg";
pub const PENALTY_MESSAGE_RESOURCE: u32 = 0x409;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AdviceRecord {
    pub penalty: i16,
    pub lines: Vec<String>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalResult {
    Accept,
    Cancel,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum FocusTarget {
    #[default]
    Advice,
    Penalty,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseQueryOutcome {
    Allowed,
    Vetoed,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ValidationMessage {
    PenaltyOutsideRange,
}

impl ValidationMessage {
    #[must_use]
    pub const fn resource_id(self) -> u32 {
        match self {
            Self::PenaltyOutsideRange => PENALTY_MESSAGE_RESOURCE,
        }
    }
}

impl fmt::Display for ValidationMessage {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::PenaltyOutsideRange => formatter.write_str("Penalty must be from 0 through 100."),
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PenaltyParseError;

impl fmt::Display for PenaltyParseError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str("penalty is not an integer")
    }
}

impl std::error::Error for PenaltyParseError {}

#[derive(Debug, Clone)]
pub enum Message {
    AdviceEdited(text_editor::Action),
    PenaltyChanged(String),
    Accept,
    Cancel,
}

#[derive(Debug)]
pub struct Window {
    title: String,
    advice: text_editor::Content,
    penalty_text: String,
    validation_requested: bool,
    focus: FocusTarget,
    penalty_selection_all: bool,
    validation_message: Option<ValidationMessage>,
    modal_result: Option<ModalResult>,
}

impl Window {
    #[must_use]
    pub fn new(one_based_number: u32, record: &AdviceRecord) -> Self {
        let mut window = Self {
            title: String::new(),
            advice: text_editor::Content::new(),
            penalty_text: String::new(),
            validation_requested: false,
            focus: FocusTarget::Advice,
            penalty_selection_all: false,
            validation_message: None,
            modal_result: None,
        };
        window.initialize(one_based_number, record);
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::AdviceEdited(action) => self.advice.perform(action),
            Message::PenaltyChanged(value) => {
                self.penalty_text = value;
                self.penalty_selection_all = false;
            }
            Message::Accept => self.request_accept(),
            Message::Cancel => self.modal_result = Some(ModalResult::Cancel),
        }
        Task::none()
    }

    /// Initializes the dialog from an advice record without retaining it.
    ///
    /// Ports Ghidra function `FUN_01b72750` at `0x01B72750`. It clears the
    /// one-use validation marker, formats the one-based advice number in the
    /// form title, and copies the signed penalty and memo lines into controls.
    pub fn initialize(&mut self, one_based_number: u32, record: &AdviceRecord) {
        self.validation_requested = false;
        self.title = TITLE_TEMPLATE.replace("%d", &one_based_number.to_string());
        self.penalty_text = record.penalty.to_string();
        self.advice = text_editor::Content::with_text(&record.lines.join("\n"));
        self.focus = FocusTarget::Advice;
        self.penalty_selection_all = false;
        self.validation_message = None;
        self.modal_result = None;
    }

    /// Copies accepted fields from the staging dialog to the live record.
    ///
    /// Ports Ghidra function `FUN_01b72860` at `0x01B72860`. The accepted
    /// caller parses the penalty again and then assigns the memo line
    /// collection. This method does not insert, persist, or refresh the record.
    ///
    /// # Errors
    ///
    /// Returns an error when the penalty text is not a signed 16-bit integer.
    /// The record is unchanged when parsing or conversion fails. Accepted
    /// dialog values are always within this storage range.
    pub fn copy_accepted_fields(&self, record: &mut AdviceRecord) -> Result<(), PenaltyParseError> {
        let penalty = self.parse_penalty()?;
        record.penalty = i16::try_from(penalty).map_err(|_| PenaltyParseError)?;
        record.lines = self.advice_lines();
        Ok(())
    }

    /// Marks the next accepted close request for penalty validation.
    ///
    /// Ports Ghidra function `FUN_01b728f0` at `0x01B728F0`, recovered as
    /// `TEditAdviceDlg.OKBtnClick`. It only sets the one-use marker. It does
    /// not parse controls or copy data to an advice record.
    pub const fn request_accept(&mut self) {
        self.validation_requested = true;
        self.modal_result = Some(ModalResult::Accept);
    }

    /// Validates a marked OK close and clears the marker after a range check.
    ///
    /// Ports Ghidra function `FUN_01b72920` at `0x01B72920`, recovered as
    /// `TEditAdviceDlg.FormCloseQuery`. Unmarked closes skip validation. A
    /// marked value outside `0..=100` vetoes the close, focuses the penalty
    /// field, selects its complete text, and exposes message resource `0x409`.
    ///
    /// # Errors
    ///
    /// Returns an error for malformed integer text. The recovered converter
    /// raises before the handler reaches its marker reset, so this adapter
    /// keeps the validation marker set and applies no range-failure UI state.
    pub fn query_close(&mut self) -> Result<CloseQueryOutcome, PenaltyParseError> {
        if !self.validation_requested {
            return Ok(CloseQueryOutcome::Allowed);
        }

        let penalty = self.parse_penalty()?;
        let outcome = if (0..=100).contains(&penalty) {
            self.validation_message = None;
            CloseQueryOutcome::Allowed
        } else {
            self.focus = FocusTarget::Penalty;
            self.penalty_selection_all = true;
            self.validation_message = Some(ValidationMessage::PenaltyOutsideRange);
            CloseQueryOutcome::Vetoed
        };
        self.validation_requested = false;
        Ok(outcome)
    }

    fn parse_penalty(&self) -> Result<i32, PenaltyParseError> {
        self.penalty_text
            .parse::<i32>()
            .map_err(|_| PenaltyParseError)
    }

    #[must_use]
    pub fn advice_lines(&self) -> Vec<String> {
        let source = self.advice.text();
        if matches!(source.as_str(), "" | "\n" | "\r\n") {
            Vec::new()
        } else {
            source
                .lines()
                .map(|line| line.trim_end_matches('\r').to_owned())
                .collect()
        }
    }

    #[must_use]
    pub fn title(&self) -> &str {
        &self.title
    }

    #[must_use]
    pub fn penalty_text(&self) -> &str {
        &self.penalty_text
    }

    #[must_use]
    pub const fn validation_requested(&self) -> bool {
        self.validation_requested
    }

    #[must_use]
    pub const fn focus(&self) -> FocusTarget {
        self.focus
    }

    #[must_use]
    pub const fn penalty_selection_all(&self) -> bool {
        self.penalty_selection_all
    }

    #[must_use]
    pub const fn validation_message(&self) -> Option<ValidationMessage> {
        self.validation_message
    }

    #[must_use]
    pub const fn modal_result(&self) -> Option<ModalResult> {
        self.modal_result
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let message = self
            .validation_message
            .map_or_else(String::new, |message| message.to_string());
        container(
            column![
                text(&self.title).size(18),
                row![
                    text("Advice:"),
                    text_editor(&self.advice)
                        .on_action(Message::AdviceEdited)
                        .height(Length::Fixed(120.0))
                ]
                .spacing(8),
                row![
                    text("Penalty:"),
                    text_input("", &self.penalty_text).on_input(Message::PenaltyChanged),
                    text("[%]")
                ]
                .spacing(8),
                text(message),
                row![
                    button("OK").on_press(Message::Accept),
                    button("Cancel").on_press(Message::Cancel)
                ]
                .spacing(8)
            ]
            .spacing(10),
        )
        .padding(16)
        .width(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn record() -> AdviceRecord {
        AdviceRecord {
            penalty: 25,
            lines: vec!["First line".to_owned(), "Second line".to_owned()],
        }
    }

    #[test]
    fn initialization_copies_record_fields_and_clears_the_validation_marker() {
        let mut source = record();
        let window = Window::new(3, &source);
        source.penalty = 90;
        source.lines.clear();

        assert_eq!(window.title(), "Edit Advice #3");
        assert_eq!(window.penalty_text(), "25");
        assert_eq!(window.advice_lines(), ["First line", "Second line"]);
        assert!(!window.validation_requested());
        assert_eq!(window.modal_result(), None);
    }

    #[test]
    fn ok_message_only_marks_the_close_for_validation() {
        let original = record();
        let mut window = Window::new(1, &original);

        drop(window.update(Message::Accept));

        assert!(window.validation_requested());
        assert_eq!(window.modal_result(), Some(ModalResult::Accept));
        assert_eq!(original, record());
    }

    #[test]
    fn inclusive_penalty_bounds_allow_close_and_reset_the_marker() {
        for penalty in [0, 100] {
            let mut window = Window::new(1, &record());
            drop(window.update(Message::PenaltyChanged(penalty.to_string())));
            window.request_accept();

            assert_eq!(window.query_close(), Ok(CloseQueryOutcome::Allowed));
            assert!(!window.validation_requested());
            assert_eq!(window.validation_message(), None);
        }
    }

    #[test]
    fn out_of_range_penalty_vetoes_once_and_prepares_the_editor() {
        let mut window = Window::new(1, &record());
        drop(window.update(Message::PenaltyChanged("101".to_owned())));
        window.request_accept();

        assert_eq!(window.query_close(), Ok(CloseQueryOutcome::Vetoed));
        assert_eq!(window.focus(), FocusTarget::Penalty);
        assert!(window.penalty_selection_all());
        assert_eq!(
            window.validation_message(),
            Some(ValidationMessage::PenaltyOutsideRange)
        );
        assert_eq!(
            window
                .validation_message()
                .map(ValidationMessage::resource_id),
            Some(PENALTY_MESSAGE_RESOURCE)
        );
        assert!(!window.validation_requested());

        drop(window.update(Message::Cancel));
        assert_eq!(window.query_close(), Ok(CloseQueryOutcome::Allowed));
        assert_eq!(window.modal_result(), Some(ModalResult::Cancel));
    }

    #[test]
    fn malformed_penalty_preserves_the_unhandled_exception_boundary() {
        let mut window = Window::new(1, &record());
        drop(window.update(Message::PenaltyChanged("not an integer".to_owned())));
        window.request_accept();

        assert_eq!(window.query_close(), Err(PenaltyParseError));
        assert!(window.validation_requested());
        assert_eq!(window.focus(), FocusTarget::Advice);
        assert!(!window.penalty_selection_all());
        assert_eq!(window.validation_message(), None);
    }

    #[test]
    fn accepted_copy_back_updates_penalty_then_preserves_advice_lines() {
        let mut target = record();
        let mut window = Window::new(2, &target);
        drop(window.update(Message::PenaltyChanged("80".to_owned())));
        window.advice = text_editor::Content::with_text("Updated\nAdvice");
        window.request_accept();
        assert_eq!(window.query_close(), Ok(CloseQueryOutcome::Allowed));

        assert_eq!(window.copy_accepted_fields(&mut target), Ok(()));
        assert_eq!(target.penalty, 80);
        assert_eq!(target.lines, ["Updated", "Advice"]);
    }

    #[test]
    fn malformed_copy_back_leaves_the_record_unchanged() {
        let original = record();
        let mut target = original.clone();
        let mut window = Window::new(1, &target);
        drop(window.update(Message::PenaltyChanged("bad".to_owned())));
        window.advice = text_editor::Content::with_text("Changed");

        assert_eq!(
            window.copy_accepted_fields(&mut target),
            Err(PenaltyParseError)
        );
        assert_eq!(target, original);
    }
}
