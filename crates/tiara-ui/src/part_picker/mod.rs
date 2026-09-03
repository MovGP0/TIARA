//! Modal Part Picker state and iced view.

use iced::widget::{button, column, container, scrollable, text};
use iced::{Element, Length};

pub const TITLE: &str = "Part Picker";

pub trait PartPickerHelp {
    fn dispatch_topic(&mut self, topic: &str);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct HelpEventOutcome {
    pub handled: bool,
    pub invoke_default_help: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ModalResult {
    #[default]
    None,
    Ok,
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    Created,
    RowClicked(i32),
    Cancel,
}

#[derive(Debug)]
pub struct State {
    items: Vec<String>,
    selected_row: i32,
    modal_result: ModalResult,
    help_topic: String,
    help_context: u32,
}

impl Default for State {
    fn default() -> Self {
        Self::new(Vec::new())
    }
}

impl State {
    #[must_use]
    pub const fn new(items: Vec<String>) -> Self {
        Self {
            items,
            selected_row: -1,
            modal_result: ModalResult::None,
            help_topic: String::new(),
            help_context: 1,
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::Created => self.on_create(),
            Message::RowClicked(index) => self.click_row(index),
            Message::Cancel => self.modal_result = ModalResult::Cancel,
        }
    }

    /// Implements Ghidra function `FUN_01b44900` at `0x01B44900`.
    ///
    /// Clears the dialog-owned Help topic, sets Help context 1, and restores
    /// the recovered `-1` row-selection sentinel. The modal result is not
    /// changed by this lifecycle handler.
    pub fn on_create(&mut self) {
        self.help_topic.clear();
        self.help_context = 1;
        self.selected_row = -1;
    }

    /// Implements Ghidra function `FUN_01b448c0` at `0x01B448C0`.
    ///
    /// Saves the current zero-based list row and accepts the modal dialog. The
    /// value is not validated. A recovered `-1` selection is also accepted.
    pub const fn click_row(&mut self, index: i32) {
        self.selected_row = index;
        self.modal_result = ModalResult::Ok;
    }

    /// Implements Ghidra function `FUN_01b44980` at `0x01B44980`.
    ///
    /// Sends a nonempty dialog-owned topic to the shared Help dispatcher. The
    /// event is handled even when the topic is empty, and framework default
    /// Help is always suppressed.
    #[must_use]
    pub fn on_help(&self, help: &mut impl PartPickerHelp) -> HelpEventOutcome {
        if !self.help_topic.is_empty() {
            help.dispatch_topic(&self.help_topic);
        }
        HelpEventOutcome {
            handled: true,
            invoke_default_help: false,
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let rows =
            self.items
                .iter()
                .enumerate()
                .fold(column![].spacing(4), |rows, (index, item)| {
                    let index = i32::try_from(index).unwrap_or(i32::MAX);
                    rows.push(
                        button(text(item))
                            .width(Length::Fill)
                            .on_press(Message::RowClicked(index)),
                    )
                });
        container(
            column![
                text(TITLE).size(24),
                scrollable(rows).height(Length::Fill),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(10),
        )
        .padding(16)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }

    #[must_use]
    pub const fn selected_row(&self) -> i32 {
        self.selected_row
    }

    #[must_use]
    pub const fn modal_result(&self) -> ModalResult {
        self.modal_result
    }

    #[must_use]
    pub fn help_topic(&self) -> &str {
        &self.help_topic
    }

    pub fn set_help_topic(&mut self, topic: impl Into<String>) {
        self.help_topic = topic.into();
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }
}

#[cfg(test)]
mod tests {
    use super::{HelpEventOutcome, ModalResult, PartPickerHelp, State};

    #[derive(Default)]
    struct Help(Vec<String>);

    impl PartPickerHelp for Help {
        fn dispatch_topic(&mut self, topic: &str) {
            self.0.push(topic.to_owned());
        }
    }

    #[test]
    fn row_click_stores_index_and_accepts_dialog() {
        let mut state = State::new(vec!["Resistor".to_owned(), "Capacitor".to_owned()]);

        state.click_row(1);

        assert_eq!(state.selected_row(), 1);
        assert_eq!(state.modal_result(), ModalResult::Ok);
    }

    #[test]
    fn missing_selection_is_stored_and_accepted_unchanged() {
        let mut state = State::new(Vec::new());

        state.click_row(-1);

        assert_eq!(state.selected_row(), -1);
        assert_eq!(state.modal_result(), ModalResult::Ok);
    }

    #[test]
    fn create_clears_help_topic_and_restores_context_and_selection() {
        let mut state = State::new(vec!["Resistor".to_owned()]);
        state.set_help_topic("parts/help");
        state.click_row(0);

        state.on_create();

        assert_eq!(state.help_topic(), "");
        assert_eq!(state.help_context(), 1);
        assert_eq!(state.selected_row(), -1);
        assert_eq!(state.modal_result(), ModalResult::Ok);
    }

    #[test]
    fn help_dispatches_nonempty_topic_and_suppresses_default_help() {
        let mut state = State::default();
        let mut help = Help::default();
        state.set_help_topic("Parts overview");

        let outcome = state.on_help(&mut help);

        assert_eq!(help.0, ["Parts overview"]);
        assert_eq!(
            outcome,
            HelpEventOutcome {
                handled: true,
                invoke_default_help: false,
            }
        );
    }

    #[test]
    fn empty_help_topic_is_a_handled_no_op() {
        let state = State::default();
        let mut help = Help::default();

        let outcome = state.on_help(&mut help);

        assert!(help.0.is_empty());
        assert!(outcome.handled);
        assert!(!outcome.invoke_default_help);
    }
}
