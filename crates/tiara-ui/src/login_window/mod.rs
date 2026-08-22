use iced::widget::{button, column, container, row, text, text_input};
use iced::{Element, Length, Task};

pub const TITLE: &str = "Login";
pub const FORM_RESOURCE: &str = "LoginWindow";
pub const LOGIN_PROMPT: &str = "Please login to TINACloud!";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalResult {
    Accepted,
    Cancelled,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    NameChanged(String),
    PasswordChanged(String),
    Accept,
    Cancel,
    Show,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    prompt: String,
    name: String,
    password: String,
    modal_result: Option<ModalResult>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            prompt: LOGIN_PROMPT.to_owned(),
            name: String::new(),
            password: String::new(),
            modal_result: None,
        }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::NameChanged(value) => self.name = value,
            Message::PasswordChanged(value) => self.password = value,
            Message::Accept => self.modal_result = Some(ModalResult::Accepted),
            Message::Cancel => self.modal_result = Some(ModalResult::Cancelled),
            Message::Show => self.form_show(),
        }
        Task::none()
    }

    /// Clears the transient login prompt when the form becomes visible.
    ///
    /// Reimplements Ghidra function `FUN_014bca20` at `0x014BCA20`. Resource
    /// order and the recovered field offset identify `LoginWindow.LoginLb` as
    /// the cleared control; the name and password edits remain unchanged.
    pub fn form_show(&mut self) {
        self.prompt.clear();
    }

    #[must_use]
    pub fn prompt(&self) -> &str {
        &self.prompt
    }

    #[must_use]
    pub fn name(&self) -> &str {
        &self.name
    }

    #[must_use]
    pub fn password(&self) -> &str {
        &self.password
    }

    #[must_use]
    pub const fn modal_result(&self) -> Option<ModalResult> {
        self.modal_result
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        container(
            column![
                text(&self.prompt),
                text_input("Login name", &self.name).on_input(Message::NameChanged),
                text_input("Password", &self.password).on_input(Message::PasswordChanged),
                row![
                    button("OK").on_press(Message::Accept),
                    button("Cancel").on_press(Message::Cancel),
                ]
                .spacing(8),
            ]
            .spacing(10),
        )
        .padding(16)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn show_clears_only_the_transient_prompt() {
        let mut window = Window::default();
        let _task = window.update(Message::NameChanged("user".to_owned()));
        let _task = window.update(Message::PasswordChanged("secret".to_owned()));

        window.form_show();

        assert!(window.prompt().is_empty());
        assert_eq!(window.name(), "user");
        assert_eq!(window.password(), "secret");
    }

    #[test]
    fn modal_buttons_set_the_matching_result() {
        let mut window = Window::default();
        let _task = window.update(Message::Accept);
        assert_eq!(window.modal_result(), Some(ModalResult::Accepted));
        let _task = window.update(Message::Cancel);
        assert_eq!(window.modal_result(), Some(ModalResult::Cancelled));
    }
}
