use iced::widget::{container, text};
use iced::{Element, Length, Task, window};

pub const FORM_RESOURCE: &str = "form_openPic";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum CloseDisposition {
    #[default]
    Keep,
    Release,
}

#[derive(Debug, Clone, Copy)]
pub enum Message {
    CloseRequested,
}

#[derive(Debug)]
pub struct Window {
    id: window::Id,
    figure_name: String,
    close_disposition: CloseDisposition,
}

impl Window {
    #[must_use]
    pub fn new(id: window::Id, figure_name: impl Into<String>) -> Self {
        Self {
            id,
            figure_name: figure_name.into(),
            close_disposition: CloseDisposition::Keep,
        }
    }

    #[must_use]
    pub fn title(&self) -> String {
        format!("Figure - {}", self.figure_name)
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::CloseRequested => self.release_picture_window_on_close(),
        }
    }

    /// Ports Ghidra function `FUN_012e2d90` at `0x012E2D90`.
    ///
    /// The database maps the original function to `Tform_openPic.FormClose`.
    /// The recovered handler selects Delphi `caFree`, so the iced equivalent
    /// marks the window for release and closes its native window ID instead of
    /// retaining hidden form state.
    pub fn release_picture_window_on_close(&mut self) -> Task<Message> {
        self.close_disposition = CloseDisposition::Release;
        window::close(self.id)
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        container(text(self.title()).size(24))
            .center_x(Length::Fill)
            .center_y(Length::Fill)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn close_request_selects_release_disposition() {
        let mut window = Window::new(window::Id::unique(), "Example");

        let _close_task = window.update(Message::CloseRequested);

        assert_eq!(window.close_disposition, CloseDisposition::Release);
    }

    #[test]
    fn title_uses_recovered_figure_caption_pattern() {
        let window = Window::new(window::Id::unique(), "Waveform");

        assert_eq!(window.title(), "Figure - Waveform");
    }
}
