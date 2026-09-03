use iced::Element;
use iced::widget::{button, column, row, text, text_input};

pub const TITLE: &str = "Set API Key";
const HELP_CONTEXT: u32 = 0x4B4;

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    Created,
    KeyChanged(String),
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    provider_selector: i32,
    prompt: String,
    api_key: String,
    help_context: u32,
}

impl Default for Window {
    fn default() -> Self {
        let mut window = Self {
            provider_selector: 0,
            prompt: "lAPIKey".to_owned(),
            api_key: String::new(),
            help_context: 0,
        };
        window.on_create();
        window
    }
}

impl Window {
    /// Applies the recovered form help context during creation.
    ///
    /// Implements Ghidra function `FUN_019d8200` at `0x019D8200`.
    pub const fn on_create(&mut self) {
        self.help_context = HELP_CONTEXT;
    }

    /// Stores the provider selector and sets its API-key prompt.
    ///
    /// Implements Ghidra function `FUN_019d8070` at `0x019D8070`.
    /// Selectors 0 through 3 map to `OpenAI`, GROQ, `OpenRouter`, and Ollama.
    /// An unknown selector is still stored but leaves the current prompt
    /// unchanged. This method does not load, clear, or normalize the key edit.
    pub fn configure_provider(&mut self, selector: i32) {
        self.provider_selector = selector;
        let prompt = match selector {
            0 => Some("Enter your OpenAI API Key:"),
            1 => Some("Enter your GROQ API Key:"),
            2 => Some("Enter your OpenRouter API Key:"),
            3 => Some("Enter your Ollama API Key:"),
            _ => None,
        };
        if let Some(prompt) = prompt {
            prompt.clone_into(&mut self.prompt);
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::Created => self.on_create(),
            Message::KeyChanged(value) => self.api_key = value,
            Message::Accept | Message::Cancel => {}
        }
    }

    #[must_use]
    pub const fn provider_selector(&self) -> i32 {
        self.provider_selector
    }

    #[must_use]
    pub fn prompt(&self) -> &str {
        &self.prompt
    }

    #[must_use]
    pub fn api_key(&self) -> &str {
        &self.api_key
    }

    /// Copies the exact current API-key edit text for an accepted dialog.
    ///
    /// Implements Ghidra function `FUN_019d8220` at `0x019D8220`. The copy is
    /// not trimmed, validated, masked, encrypted, persisted, or cleared.
    #[must_use]
    pub fn copy_api_key_text(&self) -> String {
        self.api_key.clone()
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            text(&self.prompt),
            text_input("", &self.api_key).on_input(Message::KeyChanged),
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel),
                button("Help")
            ]
            .spacing(8)
        ]
        .spacing(8)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn provider_configuration_maps_prompts_without_changing_the_key() {
        let cases = [
            (0, "Enter your OpenAI API Key:"),
            (1, "Enter your GROQ API Key:"),
            (2, "Enter your OpenRouter API Key:"),
            (3, "Enter your Ollama API Key:"),
        ];
        let mut window = Window::default();
        window.update(Message::KeyChanged("  retained key  ".to_owned()));

        for (selector, prompt) in cases {
            window.configure_provider(selector);
            assert_eq!(window.provider_selector(), selector);
            assert_eq!(window.prompt(), prompt);
            assert_eq!(window.api_key(), "  retained key  ");
        }

        let prompt = window.prompt().to_owned();
        window.configure_provider(9);
        assert_eq!(window.provider_selector(), 9);
        assert_eq!(window.prompt(), prompt);
        assert_eq!(window.api_key(), "  retained key  ");
    }

    #[test]
    fn creation_sets_the_dialog_help_context() {
        let mut window = Window::default();
        assert_eq!(window.help_context(), HELP_CONTEXT);

        window.help_context = 0;
        window.update(Message::Created);

        assert_eq!(window.help_context(), HELP_CONTEXT);
    }

    #[test]
    fn api_key_reader_copies_the_exact_edit_text() {
        let mut window = Window::default();
        window.update(Message::KeyChanged("  gróq-key\r\n".to_owned()));

        let copied = window.copy_api_key_text();

        assert_eq!(copied, "  gróq-key\r\n");
        assert_eq!(window.api_key(), "  gróq-key\r\n");

        window.update(Message::KeyChanged(String::new()));
        assert_eq!(window.copy_api_key_text(), "");
    }
}
