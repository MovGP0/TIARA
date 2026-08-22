//! Iced state and validation for the Macro Wizard HDL options dialog.
//!
//! The dialog edits caller-owned options. It does not persist data. Iced owns
//! the control state and messages, while [`ValidationMessagePresenter`] keeps
//! localized validation-message display testable without a live window.

use iced::widget::{button, checkbox, column, radio, row, text, text_input};
use iced::{Element, Task};

pub const TITLE: &str = "HDL Options";
pub const FORM_RESOURCE: &str = "HDLOptions";
pub const LIBRARY_EVALUATION: &str = "iced supplies the dialog state, messages, and widgets; Rust String::encode_utf16 supplies the Delphi-compatible code-unit length check; a ValidationMessagePresenter adapter supplies localized message display.";

const DEVICE_TYPES: [&str; 9] = [
    "PIC10/12/14/16",
    "PIC18",
    "PIC24",
    "PIC32",
    "AVR",
    "8051",
    "ARM7",
    "ARM9",
    "Other",
];

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct SystemCOptions {
    pub enabled: bool,
    pub device_type: i32,
    pub device_name: String,
    pub other_type: String,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct HdlOptions {
    pub system_c: SystemCOptions,
    pub mix_hdl: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ValidationError {
    OtherTypeTooLong,
    DeviceNameEmpty,
}

impl ValidationError {
    #[must_use]
    pub const fn localization_key(self) -> &'static str {
        match self {
            Self::OtherTypeTooLong => "HDLStrings.Msg_DevTypTooLong",
            Self::DeviceNameEmpty => "HDLStrings.Msg_DevNameEmpty",
        }
    }
}

pub trait ValidationMessagePresenter {
    fn show(&mut self, error: ValidationError);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RequestedAction {
    Commit,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    SystemCChanged(bool),
    DeviceTypeSelected(usize),
    OtherTypeChanged(String),
    DeviceNameChanged(String),
    MixHdlChanged(bool),
    CommitRequested,
    CancelRequested,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Window {
    pub system_c_enabled: bool,
    pub device_type_index: Option<usize>,
    pub other_type: String,
    pub device_name: String,
    pub mix_hdl: bool,
    validation_error: bool,
    requested_action: Option<RequestedAction>,
}

impl Window {
    /// Ports Ghidra function `FUN_01c32290` at `0x01C32290`.
    ///
    /// Closure is allowed only while no validation error is active.
    #[must_use]
    pub const fn can_close(&self) -> bool {
        !self.validation_error
    }

    /// Ports Ghidra function `FUN_01c322a0` at `0x01C322A0`.
    ///
    /// The stored device type is one-based. A stored zero produces no selected
    /// radio item, matching a Delphi item index of minus one.
    pub fn load_from(&mut self, options: &HdlOptions) {
        self.validation_error = false;
        self.system_c_enabled = options.system_c.enabled;
        self.device_type_index = usize::try_from(options.system_c.device_type - 1).ok();
        self.other_type.clone_from(&options.system_c.other_type);
        self.device_name.clone_from(&options.system_c.device_name);
        self.mix_hdl = options.mix_hdl;
    }

    /// Ports Ghidra function `FUN_01c323f0` at `0x01C323F0`.
    ///
    /// Validation occurs before the first caller-owned option is changed. The
    /// first error has priority and is sent through the supplied presenter.
    ///
    /// # Errors
    ///
    /// Returns the first enabled `SystemC` validation failure.
    pub fn commit(
        &mut self,
        options: &mut HdlOptions,
        presenter: &mut impl ValidationMessagePresenter,
    ) -> Result<(), ValidationError> {
        self.validation_error = false;

        if self.system_c_enabled && self.other_type.encode_utf16().count() > 16 {
            return self.reject(ValidationError::OtherTypeTooLong, presenter);
        }

        if self.system_c_enabled && self.device_name.is_empty() {
            return self.reject(ValidationError::DeviceNameEmpty, presenter);
        }

        options.system_c.enabled = self.system_c_enabled;
        options.system_c.device_type = self
            .device_type_index
            .map_or(0, |index| i32::try_from(index).unwrap_or(i32::MAX) + 1);
        options.system_c.other_type.clone_from(&self.other_type);
        options.system_c.device_name.clone_from(&self.device_name);
        options.mix_hdl = self.mix_hdl;
        Ok(())
    }

    fn reject(
        &mut self,
        error: ValidationError,
        presenter: &mut impl ValidationMessagePresenter,
    ) -> Result<(), ValidationError> {
        presenter.show(error);
        self.validation_error = true;
        Err(error)
    }

    #[must_use]
    pub const fn validation_error(&self) -> bool {
        self.validation_error
    }

    pub const fn take_requested_action(&mut self) -> Option<RequestedAction> {
        self.requested_action.take()
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::SystemCChanged(enabled) => self.system_c_enabled = enabled,
            Message::DeviceTypeSelected(index) => self.device_type_index = Some(index),
            Message::OtherTypeChanged(value) => self.other_type = value,
            Message::DeviceNameChanged(value) => self.device_name = value,
            Message::MixHdlChanged(enabled) => self.mix_hdl = enabled,
            Message::CommitRequested => self.requested_action = Some(RequestedAction::Commit),
            Message::CancelRequested => self.requested_action = Some(RequestedAction::Cancel),
        }
        Task::none()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let device_types = DEVICE_TYPES.iter().enumerate().fold(
            column![text("Device type")].spacing(4),
            |controls, (index, label)| {
                controls.push(radio(
                    *label,
                    index,
                    self.device_type_index,
                    Message::DeviceTypeSelected,
                ))
            },
        );

        column![
            text(TITLE),
            checkbox("Enable SystemC Microcontroller", self.system_c_enabled)
                .on_toggle(Message::SystemCChanged),
            device_types,
            text_input("Other type", &self.other_type).on_input(Message::OtherTypeChanged),
            text_input("Device name", &self.device_name).on_input(Message::DeviceNameChanged),
            checkbox("Mix HDL", self.mix_hdl).on_toggle(Message::MixHdlChanged),
            row![
                button("OK").on_press(Message::CommitRequested),
                button("Cancel").on_press(Message::CancelRequested),
            ]
            .spacing(8),
        ]
        .spacing(8)
        .padding(12)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Default)]
    struct RecordingPresenter {
        errors: Vec<ValidationError>,
    }

    impl ValidationMessagePresenter for RecordingPresenter {
        fn show(&mut self, error: ValidationError) {
            self.errors.push(error);
        }
    }

    fn populated_options() -> HdlOptions {
        HdlOptions {
            system_c: SystemCOptions {
                enabled: true,
                device_type: 9,
                device_name: "Controller".into(),
                other_type: "Custom".into(),
            },
            mix_hdl: true,
        }
    }

    #[test]
    fn form_show_loads_all_values_and_clears_the_error_flag() {
        let mut window = Window {
            validation_error: true,
            ..Window::default()
        };

        window.load_from(&populated_options());

        assert!(window.system_c_enabled);
        assert_eq!(window.device_type_index, Some(8));
        assert_eq!(window.other_type, "Custom");
        assert_eq!(window.device_name, "Controller");
        assert!(window.mix_hdl);
        assert!(window.can_close());
    }

    #[test]
    fn other_type_uses_utf16_units_and_has_first_error_priority() {
        let original = populated_options();
        let mut options = original.clone();
        let mut presenter = RecordingPresenter::default();
        let mut window = Window {
            system_c_enabled: true,
            other_type: "123456789012345😀".into(),
            device_name: String::new(),
            ..Window::default()
        };

        let result = window.commit(&mut options, &mut presenter);

        assert_eq!(result, Err(ValidationError::OtherTypeTooLong));
        assert_eq!(presenter.errors, [ValidationError::OtherTypeTooLong]);
        assert_eq!(options, original);
        assert!(!window.can_close());
    }

    #[test]
    fn enabled_empty_name_rejects_without_trimming_or_partial_writes() {
        let original = populated_options();
        let mut options = original.clone();
        let mut presenter = RecordingPresenter::default();
        let mut empty = Window {
            system_c_enabled: true,
            device_name: String::new(),
            ..Window::default()
        };

        assert_eq!(
            empty.commit(&mut options, &mut presenter),
            Err(ValidationError::DeviceNameEmpty)
        );
        assert_eq!(options, original);

        let mut spaces = Window {
            system_c_enabled: true,
            device_name: "   ".into(),
            ..Window::default()
        };
        assert_eq!(spaces.commit(&mut options, &mut presenter), Ok(()));
        assert_eq!(options.system_c.device_name, "   ");
    }

    #[test]
    fn disabled_system_c_skips_text_validation_and_commits_every_field() {
        let mut options = populated_options();
        let mut presenter = RecordingPresenter::default();
        let mut window = Window {
            system_c_enabled: false,
            device_type_index: None,
            other_type: "12345678901234567".into(),
            device_name: String::new(),
            mix_hdl: false,
            validation_error: true,
            requested_action: None,
        };

        assert_eq!(window.commit(&mut options, &mut presenter), Ok(()));
        assert!(!options.system_c.enabled);
        assert_eq!(options.system_c.device_type, 0);
        assert_eq!(options.system_c.other_type, "12345678901234567");
        assert_eq!(options.system_c.device_name, "");
        assert!(!options.mix_hdl);
        assert!(presenter.errors.is_empty());
        assert!(window.can_close());
    }

    #[test]
    fn close_stays_blocked_after_cancel_until_a_valid_ok_attempt() {
        let mut options = populated_options();
        let mut presenter = RecordingPresenter::default();
        let mut window = Window {
            system_c_enabled: true,
            device_name: String::new(),
            ..Window::default()
        };

        assert!(window.commit(&mut options, &mut presenter).is_err());
        let _ = window.update(Message::CancelRequested);
        assert_eq!(
            window.take_requested_action(),
            Some(RequestedAction::Cancel)
        );
        assert!(!window.can_close());

        window.device_name = "MCU".into();
        assert!(window.commit(&mut options, &mut presenter).is_ok());
        assert!(window.can_close());
    }

    #[test]
    fn update_records_commit_request_separately_from_caller_owned_options() {
        let mut window = Window::default();

        let _ = window.update(Message::SystemCChanged(true));
        let _ = window.update(Message::DeviceTypeSelected(4));
        let _ = window.update(Message::CommitRequested);

        assert!(window.system_c_enabled);
        assert_eq!(window.device_type_index, Some(4));
        assert_eq!(
            window.take_requested_action(),
            Some(RequestedAction::Commit)
        );
        assert_eq!(window.take_requested_action(), None);
    }
}
