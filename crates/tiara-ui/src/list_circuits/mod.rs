use iced::widget::{button, column, container, row, scrollable, text};
use iced::{Element, Length, Task};

pub const TITLE: &str = "List Circuits";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseAction {
    Free,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    CircuitSelected(usize),
    CircuitDoubleClicked,
    OkPressed,
    CancelPressed,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    circuits: Vec<String>,
    selected_index: Option<usize>,
    pending_open_circuit: Option<String>,
    close_requested: bool,
}

impl Default for Window {
    fn default() -> Self {
        Self::initialize_form()
    }
}

impl Window {
    /// Creates the form state with a new owned circuit string list.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x019D7860`, symbol `FUN_019d7860` (`TListCircuits.FormCreate`). A
    /// standard `Vec<String>` replaces the recovered owned Delphi string-list
    /// object. Selection and close state start empty for the new iced window.
    #[must_use]
    pub const fn initialize_form() -> Self {
        Self {
            circuits: Vec::new(),
            selected_index: None,
            pending_open_circuit: None,
            close_requested: false,
        }
    }

    #[must_use]
    pub fn new(circuits: impl IntoIterator<Item = String>) -> Self {
        Self {
            circuits: circuits.into_iter().collect(),
            ..Self::default()
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::CircuitSelected(index) => {
                if index < self.circuits.len() {
                    self.selected_index = Some(index);
                }
            }
            Message::CircuitDoubleClicked => self.list_double_clicked(),
            Message::OkPressed => self.request_ok_close(),
            Message::CancelPressed => self.request_cancel_close(),
        }
        Task::none()
    }

    /// Requests closure of the modeless circuit-list window from Cancel.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x019D7830`, symbol `FUN_019d7830`
    /// (`TListCircuits.bCancelClick`). The request does not read or change the
    /// selected row and does not roll back a circuit action.
    pub const fn request_cancel_close(&mut self) {
        self.close_requested = true;
    }

    /// Requests closure of the modeless circuit-list window from OK.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x019D7840`, symbol `FUN_019d7840` (`TListCircuits.bOKClick`). The
    /// request does not read or commit the selected row.
    pub const fn request_ok_close(&mut self) {
        self.close_requested = true;
    }

    /// Queues the selected circuit path for application-level opening.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x019D7890`, symbol `FUN_019d7890`
    /// (`TListCircuits.ListBoxDblClick`). The window reads the selected row
    /// from its retained source list. The surrounding application owns the
    /// actual circuit-opening service and its fixed options.
    pub fn list_double_clicked(&mut self) {
        self.pending_open_circuit = self.selected_circuit().map(str::to_owned);
    }

    /// Clears the cached modeless window and requests release after closure.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x019D7850`, symbol `FUN_019d7850` (`TListCircuits.FormClose`). Rust's
    /// `Option` replaces the recovered global form pointer. Returning
    /// [`CloseAction::Free`] preserves the recovered VCL close action while the
    /// caller controls the actual iced window lifetime.
    pub fn on_close(cached_window: &mut Option<Self>) -> CloseAction {
        *cached_window = None;
        CloseAction::Free
    }

    #[must_use]
    pub fn circuits(&self) -> &[String] {
        &self.circuits
    }

    #[must_use]
    pub const fn selected_index(&self) -> Option<usize> {
        self.selected_index
    }

    #[must_use]
    pub fn selected_circuit(&self) -> Option<&str> {
        self.selected_index
            .and_then(|index| self.circuits.get(index))
            .map(String::as_str)
    }

    #[must_use]
    pub const fn take_open_circuit_request(&mut self) -> Option<String> {
        self.pending_open_circuit.take()
    }

    #[must_use]
    pub const fn close_requested(&self) -> bool {
        self.close_requested
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let list = self.circuits.iter().enumerate().fold(
            column![].spacing(4),
            |items, (index, circuit)| {
                let label = if self.selected_index == Some(index) {
                    format!("> {circuit}")
                } else {
                    circuit.clone()
                };
                items.push(
                    button(text(label))
                        .width(Length::Fill)
                        .on_press(Message::CircuitSelected(index)),
                )
            },
        );

        column![
            text(TITLE).size(24),
            container(scrollable(list).height(Length::Fill))
                .width(Length::Fill)
                .height(Length::Fill),
            row![
                button("OK").on_press(Message::OkPressed),
                button("Cancel").on_press(Message::CancelPressed),
                button("Help"),
            ]
            .spacing(12),
        ]
        .spacing(12)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn window_with_selection() -> Window {
        let mut window = Window::new(["first.tsc".to_owned(), "second.tsc".to_owned()]);
        drop(window.update(Message::CircuitSelected(1)));
        window
    }

    #[test]
    fn cancel_requests_close_without_reading_or_changing_the_list_selection() {
        let mut window = window_with_selection();
        let circuits = window.circuits().to_vec();

        drop(window.update(Message::CancelPressed));

        assert!(window.close_requested());
        assert_eq!(window.circuits(), circuits);
        assert_eq!(window.selected_index(), Some(1));
        assert_eq!(window.selected_circuit(), Some("second.tsc"));
    }

    #[test]
    fn ok_requests_the_same_non_transactional_close_as_cancel() {
        let mut ok_window = window_with_selection();
        let mut cancel_window = window_with_selection();

        drop(ok_window.update(Message::OkPressed));
        drop(cancel_window.update(Message::CancelPressed));

        assert_eq!(ok_window, cancel_window);
        assert!(ok_window.close_requested());
    }

    #[test]
    fn both_buttons_request_close_when_the_list_is_empty() {
        let mut ok_window = Window::default();
        let mut cancel_window = Window::default();

        ok_window.request_ok_close();
        cancel_window.request_cancel_close();

        assert!(ok_window.close_requested());
        assert!(cancel_window.close_requested());
        assert_eq!(ok_window.selected_circuit(), None);
        assert_eq!(cancel_window.selected_circuit(), None);
    }

    #[test]
    fn selection_updates_do_not_request_close_or_modify_the_source_list() {
        let mut window = Window::new(["one".to_owned(), "two".to_owned()]);
        let circuits = window.circuits().to_vec();

        drop(window.update(Message::CircuitSelected(8)));
        assert_eq!(window.selected_index(), None);
        drop(window.update(Message::CircuitSelected(0)));

        assert_eq!(window.selected_index(), Some(0));
        assert_eq!(window.circuits(), circuits);
        assert!(!window.close_requested());
    }

    #[test]
    fn close_clears_the_cached_window_and_requests_release() {
        let mut cached_window = Some(window_with_selection());

        let action = Window::on_close(&mut cached_window);

        assert_eq!(action, CloseAction::Free);
        assert_eq!(cached_window, None);
    }

    #[test]
    fn form_creation_allocates_fresh_empty_owned_state() {
        let first = Window::initialize_form();
        let second = Window::initialize_form();

        assert!(first.circuits().is_empty());
        assert_eq!(first.selected_index(), None);
        assert!(!first.close_requested());
        assert_eq!(first, second);
    }

    #[test]
    fn double_click_queues_only_the_selected_source_row() {
        let mut window = Window::new(["first.tsc".to_owned(), "second.tsc".to_owned()]);

        drop(window.update(Message::CircuitDoubleClicked));
        assert_eq!(window.take_open_circuit_request(), None);

        drop(window.update(Message::CircuitSelected(1)));
        drop(window.update(Message::CircuitDoubleClicked));
        assert_eq!(
            window.take_open_circuit_request().as_deref(),
            Some("second.tsc")
        );
        assert_eq!(window.take_open_circuit_request(), None);
    }
}
