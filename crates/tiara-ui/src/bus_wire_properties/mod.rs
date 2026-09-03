//! Iced state for the recovered Bus/Wire Properties dialog.

use iced::widget::{button, checkbox, column, container, row, text_input};
use iced::{Element, Length, Task};

pub const TITLE: &str = "Bus/Wire Properties";
pub const FORM_RESOURCE: &str = "frmBusWireProps";
pub const HELP_CONTEXT: u32 = 0x47d;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalResult {
    Accept,
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseQueryOutcome {
    Allowed,
    Rejected,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    Created,
    IdentifierChanged(String),
    OutputToggled(bool),
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    identifier: String,
    identifier_required: bool,
    output_selected: bool,
    identifier_options: Vec<String>,
    modal_result: Option<ModalResult>,
    help_context: u32,
}

impl Window {
    #[must_use]
    pub fn new(
        identifier: impl Into<String>,
        identifier_required: bool,
        output_selected: bool,
        identifier_options: Vec<String>,
    ) -> Self {
        let mut window = Self {
            identifier: identifier.into(),
            identifier_required,
            output_selected,
            identifier_options,
            modal_result: None,
            help_context: 0,
        };
        window.on_create();
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Created => self.on_create(),
            Message::IdentifierChanged(value) => self.identifier = value,
            Message::OutputToggled(selected) => self.output_selected = selected,
            Message::Accept => self.modal_result = Some(ModalResult::Accept),
            Message::Cancel => self.modal_result = Some(ModalResult::Cancel),
        }
        Task::none()
    }

    /// Applies the recovered form creation state.
    ///
    /// Ports Ghidra function `0x017BFC60`, symbol `FUN_017bfc60`. The VCL
    /// handler assigns `HelpContext` `0x47D` to the Bus/Wire Properties form.
    pub const fn on_create(&mut self) {
        self.help_context = HELP_CONTEXT;
    }

    /// Decides whether the Bus/Wire Properties dialog can close.
    ///
    /// Ports Ghidra function `0x017BFB90`, symbol `FUN_017bfb90`. Cancel and a
    /// nonempty ID always close. An OK close with an empty ID is allowed only
    /// when IDs are not required, Output is not selected, and the ID option
    /// collection is empty.
    #[must_use]
    pub fn close_query(&self) -> CloseQueryOutcome {
        if self.modal_result != Some(ModalResult::Accept) || !self.identifier.is_empty() {
            return CloseQueryOutcome::Allowed;
        }
        if !self.identifier_required && !self.output_selected && self.identifier_options.is_empty()
        {
            CloseQueryOutcome::Allowed
        } else {
            CloseQueryOutcome::Rejected
        }
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        container(column![
            text_input("ID", &self.identifier).on_input(Message::IdentifierChanged),
            checkbox("Output", self.output_selected).on_toggle(Message::OutputToggled),
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel)
            ]
            .spacing(8)
        ])
        .padding(12)
        .width(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn window(required: bool, output: bool, option_count: usize) -> Window {
        Window::new(
            "",
            required,
            output,
            (0..option_count).map(|index| index.to_string()).collect(),
        )
    }

    #[test]
    fn fun_017bfb90_allows_cancel_and_nonempty_identifier() {
        let mut cancelled = window(true, true, 1);
        drop(cancelled.update(Message::Cancel));
        assert_eq!(cancelled.close_query(), CloseQueryOutcome::Allowed);

        let mut named = window(true, true, 1);
        drop(named.update(Message::IdentifierChanged("BUS1".to_owned())));
        drop(named.update(Message::Accept));
        assert_eq!(named.close_query(), CloseQueryOutcome::Allowed);
    }

    #[test]
    fn fun_017bfb90_allows_only_recovered_empty_identifier_exception() {
        let mut allowed = window(false, false, 0);
        drop(allowed.update(Message::Accept));
        assert_eq!(allowed.close_query(), CloseQueryOutcome::Allowed);

        for (required, output, option_count) in
            [(true, false, 0), (false, true, 0), (false, false, 1)]
        {
            let mut rejected = window(required, output, option_count);
            drop(rejected.update(Message::Accept));
            assert_eq!(rejected.close_query(), CloseQueryOutcome::Rejected);
        }
    }

    #[test]
    fn fun_017bfc60_sets_help_context_on_create() {
        let mut window = window(false, false, 0);
        assert_eq!(window.help_context(), HELP_CONTEXT);

        window.help_context = 0;
        drop(window.update(Message::Created));

        assert_eq!(window.help_context(), HELP_CONTEXT);
    }
}
