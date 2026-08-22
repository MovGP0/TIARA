//! Minterm/Maxterm result window state and Help routing.

use std::path::Path;

use iced::Element;
use iced::widget::{button, column, container, row, text, text_input};

use crate::logic_design::{HELP_FILE_NAME, LogicDesignHelp};

pub const TITLE: &str = "Minterm/Maxterm";
pub const FORM_RESOURCE: &str = "Function_wind_form";
pub const HELP_CONTEXT: u32 = 7_000;

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ResultContent {
    pub minterm: String,
    pub maxterm: String,
    pub simplified_minterm: String,
    pub simplified_maxterm: String,
    pub simplification_steps: Vec<String>,
    pub function_text: String,
}

impl ResultContent {
    #[must_use]
    pub fn is_empty(&self) -> bool {
        self.minterm.is_empty()
            && self.maxterm.is_empty()
            && self.simplified_minterm.is_empty()
            && self.simplified_maxterm.is_empty()
            && self.simplification_steps.is_empty()
            && self.function_text.is_empty()
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Action {
    Close,
    Help,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    Close,
    Help,
}

#[derive(Debug, Default)]
pub struct Window {
    first_parameter: i32,
    second_parameter: i32,
    help_context: u32,
    context_help: bool,
    content: ResultContent,
    pending_action: Option<Action>,
}

impl Window {
    /// Ports Ghidra function `FUN_01b2aba0` at `0x01B2ABA0`.
    ///
    /// Initializes the recovered parameters to 3 and 23 and selects
    /// context-based Help with context 7000.
    pub const fn initialize(&mut self) {
        self.first_parameter = 3;
        self.second_parameter = 23;
        self.help_context = HELP_CONTEXT;
        self.context_help = true;
    }

    pub const fn update(&mut self, message: Message) {
        self.pending_action = Some(match message {
            Message::Close => Action::Close,
            Message::Help => Action::Help,
        });
    }

    pub const fn take_action(&mut self) -> Option<Action> {
        self.pending_action.take()
    }

    #[must_use]
    pub const fn content(&self) -> &ResultContent {
        &self.content
    }

    pub fn replace_content(&mut self, content: ResultContent) {
        self.content = content;
    }

    pub fn clear_count_dependent_results(&mut self) {
        self.content = ResultContent::default();
    }

    /// Ports Ghidra function `FUN_01b2abd0` at `0x01B2ABD0`.
    ///
    /// Clears the continuation flag, resolves `logiconv.chm`, opens context
    /// 7000 through the application Help adapter, and reports the request as
    /// handled.
    #[must_use]
    pub fn handle_help(
        &self,
        help_directory: &Path,
        help: &mut impl LogicDesignHelp,
        continue_help: &mut bool,
    ) -> bool {
        *continue_help = false;
        let candidate = help_directory.join(HELP_FILE_NAME);
        let resolved = help.resolve_localized_file(&candidate);
        help.open_context(HELP_CONTEXT, &resolved);
        true
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let results = column![
            row![text("Minterm"), text_input("", &self.content.minterm)].spacing(8),
            row![text("Maxterm"), text_input("", &self.content.maxterm)].spacing(8),
            row![
                text("Simplified minterm"),
                text_input("", &self.content.simplified_minterm)
            ]
            .spacing(8),
            row![
                text("Simplified maxterm"),
                text_input("", &self.content.simplified_maxterm)
            ]
            .spacing(8),
            row![
                button("Close").on_press(Message::Close),
                button("Help").on_press(Message::Help)
            ]
            .spacing(8),
        ]
        .spacing(8);
        container(results).padding(12).into()
    }
}

/// Ports Ghidra function `FUN_01b2acd0` at `0x01B2ACD0`.
///
/// This is the no-op fallback for the built-in Help button. Normal clicks are
/// intercepted by the `bkHelp` runtime path before this handler is reached.
pub const fn help_button_fallback() {}

#[cfg(test)]
mod tests {
    use std::path::PathBuf;

    use super::*;

    #[test]
    fn initializer_sets_recovered_parameters_and_help_context() {
        let mut window = Window::default();
        window.initialize();
        assert_eq!(window.first_parameter, 3);
        assert_eq!(window.second_parameter, 23);
        assert_eq!(window.help_context, HELP_CONTEXT);
        assert!(window.context_help);
    }

    #[test]
    fn form_help_resolves_file_clears_continuation_and_returns_true() {
        let window = Window::default();
        let mut help = Help::default();
        let mut continue_help = true;
        assert!(window.handle_help(Path::new("help"), &mut help, &mut continue_help));
        assert!(!continue_help);
        assert_eq!(help.candidate, PathBuf::from("help").join(HELP_FILE_NAME));
        assert_eq!(
            help.opened,
            Some((HELP_CONTEXT, PathBuf::from("localized.chm")))
        );
    }

    #[test]
    fn help_button_fallback_has_no_state_or_effect() {
        help_button_fallback();
    }

    #[derive(Default)]
    struct Help {
        candidate: PathBuf,
        opened: Option<(u32, PathBuf)>,
    }

    impl LogicDesignHelp for Help {
        fn resolve_localized_file(&mut self, candidate: &Path) -> PathBuf {
            self.candidate = candidate.to_owned();
            PathBuf::from("localized.chm")
        }

        fn open_context(&mut self, context: u32, help_file: &Path) {
            self.opened = Some((context, help_file.to_owned()));
        }
    }
}
