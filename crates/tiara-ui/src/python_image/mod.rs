//! Iced state for the recovered Python image window.
//!
//! The source image stays in memory. Iced supplies the maintained encoded-image
//! handle and renderer, so this adapter does not create a temporary file or own
//! a platform image object.

use iced::widget::{container, image};
use iced::{ContentFit, Element, Length, Task};

pub const TITLE: &str = "Window";
pub const FORM_RESOURCE: &str = "PyImage";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    Show,
}

#[derive(Debug, Clone)]
pub struct Window {
    encoded_image: Vec<u8>,
    displayed_image: Option<image::Handle>,
}

impl Window {
    #[must_use]
    pub const fn new(encoded_image: Vec<u8>) -> Self {
        Self {
            encoded_image,
            displayed_image: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Show => self.on_show(),
        }
        Task::none()
    }

    /// Makes the owned encoded graphic available to the Iced image control.
    ///
    /// Reimplements Ghidra function `FUN_0146d030` at `0x0146D030`. The
    /// recovered handler delegates to the form's in-memory image assignment.
    pub fn on_show(&mut self) {
        self.displayed_image = Some(image::Handle::from_bytes(self.encoded_image.clone()));
    }

    #[must_use]
    pub const fn is_image_displayed(&self) -> bool {
        self.displayed_image.is_some()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let content: Element<'_, Message> = self.displayed_image.as_ref().map_or_else(
            || container("").into(),
            |handle| {
                image(handle.clone())
                    .content_fit(ContentFit::Contain)
                    .width(Length::Fill)
                    .height(Length::Fill)
                    .into()
            },
        );
        container(content)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::{Message, Window};

    #[test]
    fn show_assigns_the_owned_encoded_graphic_once_the_window_is_visible() {
        let mut window = Window::new(vec![1, 2, 3, 4]);
        assert!(!window.is_image_displayed());

        drop(window.update(Message::Show));

        assert!(window.is_image_displayed());
    }
}
