use iced::widget::{checkbox, column, container, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Protect Circuit";
pub const SCREENSHOT: &str = "screenshots/Protect_Circuti_Window.png";
pub const FORM_RESOURCE: &str = "ProtectCircDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01baeeb0");
const STATUS: &str = "Circuit protection";
const TOOLBAR: &[&str] = &["OK", "Cancel", "Help"];

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    checks: Vec<bool>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 2],
            checks: vec![false; 1],
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
    Toggle(usize, bool),
    NoOp,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::TextChanged(index, value) => {
                if let Some(field) = self.values.get_mut(index) {
                    *field = value;
                }
            }
            Message::Toggle(index, value) => {
                if let Some(check) = self.checks.get_mut(index) {
                    *check = value;
                }
            }
            Message::NoOp => {}
        }
    }
    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(TOOLBAR, Message::NoOp);
        let body: Element<'_, Message> = container(scrollable(
            column![
                row![
                    text("Enter password").width(Length::FillPortion(2)),
                    text_input("", &self.values[0])
                        .on_input(move |value| Message::TextChanged(0, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Re-enter password").width(Length::FillPortion(2)),
                    text_input("", &self.values[1])
                        .on_input(move |value| Message::TextChanged(1, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                checkbox("Allow switching between good & faulty", self.checks[0])
                    .on_toggle(move |value| Message::Toggle(0, value)),
            ]
            .spacing(8),
        ))
        .padding(18)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}

/// The help context the recovered Protect Circuit create handler assigns.
pub const PROTECT_HELP_CONTEXT: u32 = 0x046e;

/// The help context the recovered Unprotect Circuit create handler assigns.
pub const UNPROTECT_HELP_CONTEXT: u32 = 0x046f;

pub trait CircuitProtectionHelpHost {
    fn set_help_context(&mut self, context: u32);
}

/// Implements Ghidra function `FUN_01baeeb0` at `0x01BAEEB0`.
///
/// The Protect Circuit dialog's create handler assigns its help context and
/// does nothing else: it seeds no control, reads no circuit, and validates no
/// password, so the dialog opens exactly as designed.
pub fn create_protect_circuit_dialog(host: &mut impl CircuitProtectionHelpHost) {
    host.set_help_context(PROTECT_HELP_CONTEXT);
}

/// Implements Ghidra function `FUN_01baf4a0` at `0x01BAF4A0`.
///
/// The Unprotect Circuit dialog's create handler is the same single step with
/// its own help context. The two dialogs therefore differ only in the topic
/// they open, not in what their create handlers do.
pub fn create_unprotect_circuit_dialog(host: &mut impl CircuitProtectionHelpHost) {
    host.set_help_context(UNPROTECT_HELP_CONTEXT);
}

#[cfg(test)]
mod protection_help_tests {
    use super::*;

    #[derive(Debug, Default)]
    struct HelpHost {
        contexts: Vec<u32>,
    }

    impl CircuitProtectionHelpHost for HelpHost {
        fn set_help_context(&mut self, context: u32) {
            self.contexts.push(context);
        }
    }

    #[test]
    fn the_two_create_handlers_differ_only_in_their_help_topic() {
        let mut host = HelpHost::default();

        create_protect_circuit_dialog(&mut host);
        create_unprotect_circuit_dialog(&mut host);

        assert_eq!(
            host.contexts,
            [PROTECT_HELP_CONTEXT, UNPROTECT_HELP_CONTEXT]
        );
    }
}
