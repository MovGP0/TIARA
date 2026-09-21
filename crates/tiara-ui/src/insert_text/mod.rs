//! The Text dialog, as `Insert > Text` opens it.
//!
//! Text is written in the middle, with a strip of tools above it and the
//! commands down the right. The strip is a page control in the resource, with
//! one page for viewing and one for editing; the editing page carries the
//! seven tools that put something into the text. None of the tool buttons
//! carries a caption - the resource gives each a hint instead, which is what
//! the original shows when the pointer rests on one, so the hints are the
//! names used here.

use iced::widget::{button, column, row, text, text_input, tooltip};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Text";
pub const SCREENSHOT: &str = "screenshots/Insert_Text.png";
pub const FORM_RESOURCE: &str = "CSysTextDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("0146a2a0");
const STATUS: &str = "Text";

/// What the two buttons at the left of the strip switch between.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum Mode {
    View,
    #[default]
    Edit,
}

impl Mode {
    #[must_use]
    pub const fn hint(self) -> &'static str {
        match self {
            Self::View => "View",
            Self::Edit => "Edit",
        }
    }
}

/// The tools the editing page offers, named by the hints the resource gives
/// them, in the order it lays them out.
pub const EDIT_TOOLS: [&str; 7] = [
    "Fraction",
    "Exponent",
    "Special character",
    "Index",
    "Symbol",
    "Anchor",
    "Action link",
];

/// The one tool the viewing page offers.
pub const VIEW_TOOLS: [&str; 1] = ["Copy to Clipboard"];

/// What the popup menu offers, in the order the resource lists it.
pub const POPUP_COMMANDS: [&str; 13] = [
    "Open",
    "Save",
    "Save As",
    "Cut",
    "Copy",
    "Paste",
    "Select all",
    "Auto wrap",
    "Text",
    "Background",
    "Border",
    "Properties",
    "Font",
];

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Window {
    mode: Mode,
    body: String,
    auto_wrap: bool,
}

#[derive(Debug, Clone)]
pub enum Message {
    ModeSelected(Mode),
    BodyChanged(String),
    ToolChosen(&'static str),
    AutoWrapToggled(bool),
    Accepted,
    Cancelled,
    HelpRequested,
    FontRequested,
    PropertiesRequested,
}

impl Window {
    #[must_use]
    pub const fn mode(&self) -> Mode {
        self.mode
    }

    #[must_use]
    pub fn body(&self) -> &str {
        &self.body
    }

    #[must_use]
    pub const fn wraps(&self) -> bool {
        self.auto_wrap
    }

    /// The tools the strip offers, which follow the mode.
    #[must_use]
    pub const fn tools(&self) -> &'static [&'static str] {
        match self.mode {
            Mode::View => &VIEW_TOOLS,
            Mode::Edit => &EDIT_TOOLS,
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::ModeSelected(mode) => self.mode = mode,
            Message::BodyChanged(value) => self.body = value,
            Message::AutoWrapToggled(on) => self.auto_wrap = on,
            // Every tool puts something into the text that needs a dialog of
            // its own to settle, and the text is only editable in edit mode.
            Message::ToolChosen(_)
            | Message::Accepted
            | Message::Cancelled
            | Message::HelpRequested
            | Message::FontRequested
            | Message::PropertiesRequested => {}
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut strip = row![
            marked(Mode::View.hint(), Message::ModeSelected(Mode::View)),
            marked(Mode::Edit.hint(), Message::ModeSelected(Mode::Edit)),
        ]
        .spacing(4);
        for tool in self.tools() {
            strip = strip.push(marked(tool, Message::ToolChosen(tool)));
        }

        let mut body = text_input("", &self.body).width(Length::Fill);
        if matches!(self.mode, Mode::Edit) {
            body = body.on_input(Message::BodyChanged);
        }

        let commands = column![
            button("OK").on_press(Message::Accepted),
            button("Cancel").on_press(Message::Cancelled),
            button("Help").on_press(Message::HelpRequested),
            button("Font").on_press(Message::FontRequested),
            button("...").on_press(Message::PropertiesRequested),
        ]
        .spacing(4);

        let content = column![strip, row![body, commands].spacing(8).height(Length::Fill),]
            .spacing(8)
            .padding(8)
            .height(Length::Fill);

        window_shell::frame(
            TITLE,
            window_shell::empty_menu(),
            window_shell::empty_menu(),
            content.into(),
            STATUS,
        )
    }
}

/// A tool button, which shows its hint the way the original does.
fn marked(hint: &'static str, message: Message) -> Element<'static, Message> {
    tooltip(
        button(text(hint)).on_press(message),
        text(hint),
        tooltip::Position::Bottom,
    )
    .into()
}

#[cfg(test)]
mod tests {
    use super::{EDIT_TOOLS, Message, Mode, POPUP_COMMANDS, VIEW_TOOLS, Window};

    #[test]
    fn it_opens_ready_to_be_typed_into() {
        let window = Window::default();
        assert_eq!(window.mode(), Mode::Edit);
        assert!(window.body().is_empty());
    }

    #[test]
    fn the_strip_follows_the_mode() {
        let mut window = Window::default();
        assert_eq!(window.tools(), EDIT_TOOLS);

        window.update(Message::ModeSelected(Mode::View));
        assert_eq!(window.tools(), VIEW_TOOLS);
    }

    #[test]
    fn the_seven_tools_are_named_by_the_hints_the_resource_gives_them() {
        assert_eq!(
            EDIT_TOOLS,
            [
                "Fraction",
                "Exponent",
                "Special character",
                "Index",
                "Symbol",
                "Anchor",
                "Action link",
            ]
        );
    }

    #[test]
    fn the_text_keeps_what_is_typed_into_it() {
        let mut window = Window::default();
        window.update(Message::BodyChanged("R1 = 1k".to_owned()));
        assert_eq!(window.body(), "R1 = 1k");
    }

    #[test]
    fn wrapping_is_off_until_it_is_asked_for() {
        let mut window = Window::default();
        assert!(!window.wraps());

        window.update(Message::AutoWrapToggled(true));
        assert!(window.wraps());
    }

    #[test]
    fn the_popup_offers_the_thirteen_the_resource_lists() {
        assert_eq!(POPUP_COMMANDS.len(), 13);
        assert_eq!(POPUP_COMMANDS[0], "Open");
        assert_eq!(POPUP_COMMANDS[12], "Font");
    }

    #[test]
    fn the_commands_leave_the_text_alone() {
        let mut window = Window::default();
        window.update(Message::BodyChanged("kept".to_owned()));
        let before = window.clone();

        for message in [
            Message::ToolChosen(EDIT_TOOLS[0]),
            Message::Accepted,
            Message::Cancelled,
            Message::HelpRequested,
            Message::FontRequested,
            Message::PropertiesRequested,
        ] {
            window.update(message);
        }

        assert_eq!(window, before);
    }
}
