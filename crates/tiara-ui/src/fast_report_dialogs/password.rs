use iced::widget::{button, column, row, text, text_input};
use iced::{Element, Length, Task};

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    PasswordChanged(String),
    Submit,
    Cancel,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct PasswordDialog {
    pub password: String,
    pub children_mirrored: bool,
    pub submitted: bool,
    pub cancelled: bool,
}

impl PasswordDialog {
    /// Initializes the password dialog layout.
    ///
    /// Reimplements Ghidra function `FUN_018d17e0` at `0x018D17E0`.
    /// All child controls are mirrored only when the inherited right-to-left
    /// layout predicate is active.
    pub const fn form_create(&mut self, right_to_left: bool) {
        self.children_mirrored = right_to_left;
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::PasswordChanged(password) => self.password = password,
            Message::Submit => self.submitted = true,
            Message::Cancel => self.cancelled = true,
        }
        Task::none()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            text("Enter the password:"),
            text_input("Password", &self.password)
                .secure(true)
                .on_input(Message::PasswordChanged),
            row![
                button("OK").on_press(Message::Submit),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(8),
        ]
        .spacing(8)
        .width(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn form_create_mirrors_children_for_right_to_left_layout() {
        let mut dialog = PasswordDialog::default();

        dialog.form_create(true);

        assert!(dialog.children_mirrored);
    }

    #[test]
    fn form_create_keeps_default_layout_for_left_to_right() {
        let mut dialog = PasswordDialog {
            children_mirrored: true,
            ..PasswordDialog::default()
        };

        dialog.form_create(false);

        assert!(!dialog.children_mirrored);
    }
}
