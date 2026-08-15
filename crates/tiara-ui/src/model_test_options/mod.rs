use iced::widget::{button, checkbox, column, row, text, text_input};
use iced::{Alignment, Element, Length, Task};
use tiara_core::integer_text::{ParseIntegerError, parse_i32};

pub const TITLE: &str = "Options";
pub const FORM_RESOURCE: &str = "ModelTestOptions";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct StoredSettings {
    pub timeout: i32,
    pub copy_reference_results: bool,
}

impl Default for StoredSettings {
    fn default() -> Self {
        Self {
            timeout: 0,
            copy_reference_results: true,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ModelTestOptionsRequest {
    pub timeout: i32,
    pub copy_reference_results: bool,
}

#[derive(Debug, Clone)]
pub enum Message {
    TimeoutChanged(String),
    CopyReferenceResultsChanged(bool),
    Accept,
    Cancel,
    Help,
}

#[derive(Debug)]
pub struct Window {
    timeout_text: String,
    copy_reference_results: bool,
    accepted_request: Option<ModelTestOptionsRequest>,
    settings_loaded: bool,
    last_error: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            timeout_text: "0".to_owned(),
            copy_reference_results: true,
            accepted_request: None,
            settings_loaded: false,
            last_error: None,
        }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::TimeoutChanged(value) => self.timeout_text = value,
            Message::CopyReferenceResultsChanged(value) => {
                self.copy_reference_results = value;
            }
            Message::Accept => match self.capture_model_test_options() {
                Ok(()) => self.last_error = None,
                Err(error) => self.last_error = Some(error.to_string()),
            },
            Message::Cancel | Message::Help => {}
        }

        Task::none()
    }

    /// Ports Ghidra function `FUN_012e9730` at `0x012E9730`.
    ///
    /// The database maps the original function to
    /// `TModelTestOptions.FormCreate`. It clears only the form-owned marker
    /// that records whether the settings object is active.
    pub const fn initialize_model_test_options(&mut self) {
        self.settings_loaded = false;
    }

    /// Ports Ghidra function `FUN_012e9740` at `0x012E9740`.
    ///
    /// The database maps the original function to
    /// `TModelTestOptions.FormShow`. It loads `Opt_Timeout` with default zero
    /// and `Opt_CopyRefResults` with default true. The Rust port receives the
    /// values from an injected settings adapter.
    pub fn load_model_test_options(&mut self, settings: StoredSettings) {
        self.timeout_text = settings.timeout.to_string();
        self.copy_reference_results = settings.copy_reference_results;
        self.settings_loaded = true;
    }

    /// Ports Ghidra function `FUN_012e96a0` at `0x012E96A0`.
    ///
    /// The database maps the original function to
    /// `TModelTestOptions.bOKClick`. It parses the timeout before it stages
    /// either output. A conversion error therefore preserves the previous
    /// staged request. It applies no timeout range beyond signed 32-bit input.
    ///
    /// # Errors
    ///
    /// Returns [`ParseIntegerError`] when the timeout text is not a valid
    /// signed 32-bit integer.
    pub fn capture_model_test_options(&mut self) -> Result<(), ParseIntegerError> {
        let timeout = parse_i32(&self.timeout_text)?;
        self.accepted_request = Some(ModelTestOptionsRequest {
            timeout,
            copy_reference_results: self.copy_reference_results,
        });
        Ok(())
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut content = column![
            checkbox("Copy RefResults", self.copy_reference_results)
                .on_toggle(Message::CopyReferenceResultsChanged),
            row![
                text("Timeout").width(Length::Fixed(72.0)),
                text_input("0", &self.timeout_text)
                    .on_input(Message::TimeoutChanged)
                    .width(Length::Fixed(160.0)),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel),
                button("Help").on_press(Message::Help),
            ]
            .spacing(12),
        ]
        .padding(16)
        .spacing(16);

        if let Some(error) = &self.last_error {
            content = content.push(text(error));
        }

        content.into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn create_clears_only_the_settings_marker() {
        let mut window = Window {
            timeout_text: "25".to_owned(),
            settings_loaded: true,
            ..Window::default()
        };

        window.initialize_model_test_options();

        assert!(!window.settings_loaded);
        assert_eq!(window.timeout_text, "25");
    }

    #[test]
    fn show_loads_both_settings_and_recovered_defaults() {
        let mut window = Window::default();

        window.load_model_test_options(StoredSettings::default());

        assert_eq!(window.timeout_text, "0");
        assert!(window.copy_reference_results);
        assert!(window.settings_loaded);
    }

    #[test]
    fn accept_captures_timeout_and_checkbox_without_extra_range_check() {
        let mut window = Window {
            timeout_text: "-$80000000".to_owned(),
            copy_reference_results: false,
            ..Window::default()
        };

        assert_eq!(window.capture_model_test_options(), Ok(()));
        assert_eq!(
            window.accepted_request,
            Some(ModelTestOptionsRequest {
                timeout: i32::MIN,
                copy_reference_results: false,
            })
        );
    }

    #[test]
    fn invalid_timeout_preserves_previous_staged_request() {
        let previous = ModelTestOptionsRequest {
            timeout: 60,
            copy_reference_results: true,
        };
        let mut window = Window {
            timeout_text: "invalid".to_owned(),
            accepted_request: Some(previous),
            ..Window::default()
        };

        assert!(window.capture_model_test_options().is_err());
        assert_eq!(window.accepted_request, Some(previous));
    }
}
