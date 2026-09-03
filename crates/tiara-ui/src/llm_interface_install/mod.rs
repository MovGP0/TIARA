use iced::widget::{button, column, container, text};
use iced::{Element, Length, Task};

pub const TITLE: &str = "LLM Interface Installation";
pub const LIBRARY_EVALUATION: &str = "iced 0.13 supplies the dialog message, state, and widgets. The Rust standard library has no cross-platform external-target launcher. The maintained webbrowser crate does not preserve the recovered owner-window contract and is not otherwise required, so a narrow host adapter keeps the platform operation testable.";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    LinkClicked,
}

pub trait RuntimeLinkLauncher {
    type Error;

    /// Requests the host shell to open the supplied runtime target.
    ///
    /// # Errors
    ///
    /// Returns the host launcher error when the registered target handler
    /// cannot be started.
    fn open(&mut self, target: &str) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    message_text: String,
    link_text: String,
}

impl Window {
    #[must_use]
    pub fn new(message_text: impl Into<String>, link_text: impl Into<String>) -> Self {
        Self {
            message_text: message_text.into(),
            link_text: link_text.into(),
        }
    }

    pub fn update<L>(&mut self, message: Message, launcher: &mut L) -> Task<Message>
    where
        L: RuntimeLinkLauncher,
    {
        match message {
            Message::LinkClicked => self.link_clicked(launcher),
        }
        Task::none()
    }

    /// Implements Ghidra function `FUN_01a2e3f0` at `0x01A2E3F0`.
    ///
    /// The current runtime-provided link text is sent to the host shell on
    /// every click. The launch result is intentionally ignored. This action
    /// does not change the link, close the dialog, or run installation checks.
    pub fn link_clicked<L>(&self, launcher: &mut L)
    where
        L: RuntimeLinkLauncher,
    {
        let _ = launcher.open(&self.link_text);
    }

    pub fn set_link_text(&mut self, link_text: impl Into<String>) {
        self.link_text = link_text.into();
    }

    #[must_use]
    pub fn message_text(&self) -> &str {
        &self.message_text
    }

    #[must_use]
    pub fn link_text(&self) -> &str {
        &self.link_text
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        container(
            column![
                text(TITLE).size(24),
                text(&self.message_text),
                button(text(&self.link_text)).on_press(Message::LinkClicked),
            ]
            .spacing(12),
        )
        .padding(16)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::{Message, RuntimeLinkLauncher, Window};

    #[derive(Default)]
    struct Launcher {
        targets: Vec<String>,
        fail: bool,
    }

    impl RuntimeLinkLauncher for Launcher {
        type Error = ();

        fn open(&mut self, target: &str) -> Result<(), Self::Error> {
            self.targets.push(target.to_owned());
            if self.fail { Err(()) } else { Ok(()) }
        }
    }

    #[test]
    fn link_click_opens_the_current_runtime_target_on_every_click() {
        let mut window = Window::new("Install the runtime", "https://example.test/first");
        let mut launcher = Launcher::default();

        drop(window.update(Message::LinkClicked, &mut launcher));
        window.set_link_text("https://example.test/second");
        drop(window.update(Message::LinkClicked, &mut launcher));

        assert_eq!(
            launcher.targets,
            vec!["https://example.test/first", "https://example.test/second"]
        );
        assert_eq!(window.message_text(), "Install the runtime");
        assert_eq!(window.link_text(), "https://example.test/second");
    }

    #[test]
    fn link_click_ignores_launcher_failure_and_keeps_dialog_content() {
        let window = Window::new("Missing runtime", "not-a-valid-target");
        let mut launcher = Launcher {
            fail: true,
            ..Launcher::default()
        };

        window.link_clicked(&mut launcher);

        assert_eq!(launcher.targets, vec!["not-a-valid-target"]);
        assert_eq!(window.message_text(), "Missing runtime");
        assert_eq!(window.link_text(), "not-a-valid-target");
    }
}
