use iced::widget::{button, column, container, text};
use iced::{Element, Length, Task};

pub const TITLE: &str = "Progress";
pub const FORM_RESOURCE: &str = "MTBProgress";

#[derive(Debug, Clone, Copy)]
pub enum Message {
    Cancel,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Window {
    primary_status: String,
    secondary_status: String,
    cancel_requested: bool,
}

impl Window {
    #[must_use]
    pub fn new(primary_status: impl Into<String>, secondary_status: impl Into<String>) -> Self {
        Self {
            primary_status: primary_status.into(),
            secondary_status: secondary_status.into(),
            cancel_requested: false,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Cancel => self.request_cancellation(),
        }

        Task::none()
    }

    /// Ports Ghidra function `FUN_012ea5f0` at `0x012EA5F0`.
    ///
    /// The database maps the original function to `TMTBProgress.FormCreate`.
    /// It clears the cooperative cancellation request for every new progress
    /// window and does not change either runtime status panel.
    pub const fn initialize_progress_window(&mut self) {
        self.cancel_requested = false;
    }

    /// Ports Ghidra function `FUN_012ea5e0` at `0x012EA5E0`.
    ///
    /// The database maps the original function to
    /// `TMTBProgress.bCancelClick`. It records a cooperative request only.
    /// Work owners poll this state at item boundaries, so this method does not
    /// close the window or claim immediate worker termination.
    pub const fn request_cancellation(&mut self) {
        self.cancel_requested = true;
    }

    #[must_use]
    pub const fn is_cancellation_requested(&self) -> bool {
        self.cancel_requested
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            container(text(&self.primary_status))
                .width(Length::Fill)
                .padding(12),
            container(text(&self.secondary_status))
                .width(Length::Fill)
                .padding(12),
            button("Cancel").on_press(Message::Cancel),
        ]
        .padding(16)
        .spacing(10)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn create_clears_only_the_cancellation_request() {
        let mut window = Window {
            primary_status: "File 2".to_owned(),
            secondary_status: "Circuit 8".to_owned(),
            cancel_requested: true,
        };

        window.initialize_progress_window();

        assert!(!window.is_cancellation_requested());
        assert_eq!(window.primary_status, "File 2");
        assert_eq!(window.secondary_status, "Circuit 8");
    }

    #[test]
    fn repeated_cancel_requests_are_idempotent_and_do_not_close_the_window() {
        let mut window = Window::new("Running", "Item 1");

        window.request_cancellation();
        window.request_cancellation();

        assert!(window.is_cancellation_requested());
        assert_eq!(window.primary_status, "Running");
        assert_eq!(window.secondary_status, "Item 1");
    }
}
