use std::io::Cursor;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, radio, row, text, text_input};
use iced::{Element, Length, Task};
use rfd::AsyncFileDialog;
use tiara_core::ic_wizard::{
    ParseSummary, PinLayout, PowerGroup, parse_vendor_pin_list, shorten_middle,
};

pub const TITLE: &str = "IC Wizard";
const DEFAULT_PATH_DISPLAY_CHARACTERS: usize = 32;

pub type PowerGroupSelector = fn(&str) -> PowerGroup;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum PinLayoutMode {
    #[default]
    Generic,
    Vendor,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ModalResult {
    #[default]
    None,
    Ok,
    Cancel,
}

#[derive(Debug, Default)]
struct ValidationState {
    failed: bool,
    first_error: Option<String>,
}

#[derive(Debug, Clone)]
pub enum Message {
    SelectMode(PinLayoutMode),
    PinCountChanged(String),
    DecreasePinCount,
    IncreasePinCount,
    ChoosePinList,
    PinListChosen(Option<PathBuf>),
    PinListRead {
        path: PathBuf,
        contents: Result<String, String>,
    },
    Ok,
    Cancel,
}

#[derive(Debug)]
pub struct State {
    mode: PinLayoutMode,
    pin_count: u32,
    pin_count_text: String,
    up_down_position: u32,
    layout: PinLayout,
    validation: ValidationState,
    validation_message: String,
    modal_result: ModalResult,
    full_pin_list_path: Option<PathBuf>,
    load_button_text: String,
    maximum_path_characters: usize,
    load_error: Option<String>,
    power_group_selector: PowerGroupSelector,
}

impl State {
    #[must_use]
    pub fn new(
        validation_message: impl Into<String>,
        power_group_selector: PowerGroupSelector,
    ) -> Self {
        let mut state = Self {
            mode: PinLayoutMode::Generic,
            pin_count: 8,
            pin_count_text: String::new(),
            up_down_position: 8,
            layout: PinLayout::default(),
            validation: ValidationState::default(),
            validation_message: validation_message.into(),
            modal_result: ModalResult::None,
            full_pin_list_path: None,
            load_button_text: "Load pin list...".to_owned(),
            maximum_path_characters: DEFAULT_PATH_DISPLAY_CHARACTERS,
            load_error: None,
            power_group_selector,
        };
        state.select_generic_mode();
        state
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::SelectMode(PinLayoutMode::Generic) => {
                self.select_generic_mode();
                Task::none()
            }
            Message::SelectMode(PinLayoutMode::Vendor) => {
                self.select_vendor_mode();
                Task::none()
            }
            Message::PinCountChanged(value) => {
                if let Ok(count) = value.parse() {
                    self.pin_count = count;
                    self.up_down_position = count;
                    self.pin_count_text = value;
                }
                Task::none()
            }
            Message::DecreasePinCount => {
                self.up_down_position = self.up_down_position.saturating_sub(1);
                self.synchronize_pin_count();
                Task::none()
            }
            Message::IncreasePinCount => {
                self.up_down_position = self.up_down_position.saturating_add(1);
                self.synchronize_pin_count();
                Task::none()
            }
            Message::ChoosePinList => self.choose_pin_list(),
            Message::PinListChosen(Some(path)) => Task::perform(
                async move {
                    let contents =
                        std::fs::read_to_string(&path).map_err(|error| error.to_string());
                    (path, contents)
                },
                |result| {
                    let (path, contents) = result;
                    Message::PinListRead { path, contents }
                },
            ),
            Message::PinListChosen(None) => Task::none(),
            Message::PinListRead { path, contents } => {
                match contents {
                    Ok(contents) => {
                        if let Err(error) = self.load_vendor_text(&path, &contents) {
                            self.load_error = Some(error.to_string());
                        }
                    }
                    Err(error) => self.load_error = Some(error),
                }
                Task::none()
            }
            Message::Ok => {
                self.click_ok();
                Task::none()
            }
            Message::Cancel => {
                self.modal_result = ModalResult::Cancel;
                Task::none()
            }
        }
    }

    /// Reimplements Ghidra function `FUN_01784e00` at `0x01784E00`.
    pub fn select_generic_mode(&mut self) {
        self.mode = PinLayoutMode::Generic;
        self.synchronize_pin_count();
    }

    /// Reimplements Ghidra function `FUN_01784ea0` at `0x01784EA0`.
    pub const fn select_vendor_mode(&mut self) {
        self.mode = PinLayoutMode::Vendor;
    }

    /// Reimplements Ghidra function `FUN_01784f10` at `0x01784F10`.
    pub fn click_ok(&mut self) {
        self.modal_result = ModalResult::Ok;
        self.validate_ok_attempt();
    }

    /// Reimplements Ghidra function `FUN_01784f20` at `0x01784F20`.
    pub fn choose_pin_list(&self) -> Task<Message> {
        if matches!(self.mode, PinLayoutMode::Vendor) {
            Task::perform(select_pin_list(), Message::PinListChosen)
        } else {
            Task::none()
        }
    }

    /// Reimplements Ghidra function `FUN_017851f0` at `0x017851F0`.
    pub fn report_validation_error(&mut self, message: String) {
        if self.validation.failed {
            return;
        }
        self.validation.first_error = Some(message);
        self.validation.failed = true;
    }

    /// Reimplements Ghidra function `FUN_01785270` at `0x01785270`.
    pub fn validate_ok_attempt(&mut self) {
        self.validation = ValidationState::default();
        if matches!(self.mode, PinLayoutMode::Generic) && self.pin_count % 2 != 0 {
            self.report_validation_error(self.validation_message.clone());
        }
    }

    /// Reimplements Ghidra function `FUN_01784de0` at `0x01784DE0`.
    #[must_use]
    pub const fn query_close(&self) -> bool {
        !matches!(self.modal_result, ModalResult::Ok) || !self.validation.failed
    }

    /// Loads already-selected vendor data without clearing the four pin lists.
    ///
    /// # Errors
    ///
    /// Returns a line-read error from the standard-library parser.
    pub fn load_vendor_text(
        &mut self,
        path: &Path,
        contents: &str,
    ) -> std::io::Result<ParseSummary> {
        let summary = parse_vendor_pin_list(
            Cursor::new(contents),
            &mut self.layout,
            self.power_group_selector,
        )?;
        self.full_pin_list_path = Some(path.to_path_buf());
        self.load_button_text =
            shorten_middle(&path.display().to_string(), self.maximum_path_characters);
        self.load_error = None;
        Ok(summary)
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let pin_count_input = text_input("Number of pins", &self.pin_count_text);
        let pin_count_input = if matches!(self.mode, PinLayoutMode::Generic) {
            pin_count_input.on_input(Message::PinCountChanged)
        } else {
            pin_count_input
        };
        let load_button = button(text(&self.load_button_text));
        let load_button = if matches!(self.mode, PinLayoutMode::Vendor) {
            load_button.on_press(Message::ChoosePinList)
        } else {
            load_button
        };
        let validation = self.validation.first_error.as_ref().map_or_else(
            || text(""),
            |error| text(error).style(iced::widget::text::danger),
        );
        let load_error = self.load_error.as_ref().map_or_else(
            || text(""),
            |error| text(error).style(iced::widget::text::danger),
        );
        container(
            column![
                text(TITLE).size(24),
                row![
                    radio(
                        "Generic",
                        PinLayoutMode::Generic,
                        Some(self.mode),
                        Message::SelectMode,
                    ),
                    radio(
                        "Vendor specified pin list",
                        PinLayoutMode::Vendor,
                        Some(self.mode),
                        Message::SelectMode,
                    ),
                ]
                .spacing(12),
                row![
                    pin_count_input,
                    button("-").on_press_maybe(
                        matches!(self.mode, PinLayoutMode::Generic)
                            .then_some(Message::DecreasePinCount),
                    ),
                    button("+").on_press_maybe(
                        matches!(self.mode, PinLayoutMode::Generic)
                            .then_some(Message::IncreasePinCount),
                    ),
                ]
                .spacing(4),
                load_button,
                validation,
                load_error,
                row![
                    button("OK").on_press(Message::Ok),
                    button("Cancel").on_press(Message::Cancel),
                ]
                .spacing(8),
            ]
            .spacing(10),
        )
        .padding(16)
        .width(Length::Fill)
        .into()
    }

    fn synchronize_pin_count(&mut self) {
        self.pin_count = self.up_down_position;
        self.pin_count_text = self.up_down_position.to_string();
    }

    #[must_use]
    pub const fn mode(&self) -> PinLayoutMode {
        self.mode
    }

    #[must_use]
    pub const fn pin_count(&self) -> u32 {
        self.pin_count
    }

    #[must_use]
    pub const fn layout(&self) -> &PinLayout {
        &self.layout
    }

    #[must_use]
    pub const fn modal_result(&self) -> ModalResult {
        self.modal_result
    }

    #[must_use]
    pub fn validation_error(&self) -> Option<&str> {
        self.validation.first_error.as_deref()
    }

    #[must_use]
    pub fn full_pin_list_path(&self) -> Option<&Path> {
        self.full_pin_list_path.as_deref()
    }

    #[must_use]
    pub fn load_button_text(&self) -> &str {
        &self.load_button_text
    }
}

async fn select_pin_list() -> Option<PathBuf> {
    AsyncFileDialog::new()
        .add_filter("Pin list", &["csv", "txt"])
        .pick_file()
        .await
        .map(|handle| handle.path().to_path_buf())
}

#[cfg(test)]
mod tests {
    use std::path::Path;

    use iced::Task;
    use tiara_core::ic_wizard::PowerGroup;

    use super::{Message, ModalResult, PinLayoutMode, State};

    fn power_group(name: &str) -> PowerGroup {
        if name == "VCC" {
            PowerGroup::First
        } else {
            PowerGroup::Second
        }
    }

    fn discard(task: Task<Message>) {
        drop(task);
    }

    #[test]
    fn generic_mode_synchronizes_count_and_vendor_mode_retains_lists() {
        let mut state = State::new("Pin count must be even", power_group);
        discard(state.update(Message::IncreasePinCount));
        assert_eq!(state.pin_count(), 9);
        state
            .load_vendor_text(Path::new("pins.csv"), "1,A,INPUT\n")
            .expect("pin list");
        discard(state.update(Message::SelectMode(PinLayoutMode::Vendor)));
        assert_eq!(state.layout().input_group.len(), 1);
        discard(state.update(Message::SelectMode(PinLayoutMode::Generic)));
        assert_eq!(state.pin_count(), 9);
        assert_eq!(state.layout().input_group.len(), 1);
    }

    #[test]
    fn failed_ok_close_is_vetoed_and_retry_clears_first_error() {
        let mut state = State::new("Pin count must be even", power_group);
        discard(state.update(Message::PinCountChanged("5".to_owned())));
        discard(state.update(Message::Ok));
        assert_eq!(state.modal_result(), ModalResult::Ok);
        assert_eq!(state.validation_error(), Some("Pin count must be even"));
        assert!(!state.query_close());
        state.report_validation_error("second".to_owned());
        assert_eq!(state.validation_error(), Some("Pin count must be even"));
        discard(state.update(Message::PinCountChanged("6".to_owned())));
        discard(state.update(Message::Ok));
        assert_eq!(state.validation_error(), None);
        assert!(state.query_close());
    }

    #[test]
    fn vendor_mode_bypasses_even_count_validation() {
        let mut state = State::new("Pin count must be even", power_group);
        discard(state.update(Message::PinCountChanged("5".to_owned())));
        discard(state.update(Message::SelectMode(PinLayoutMode::Vendor)));
        discard(state.update(Message::Ok));
        assert!(state.query_close());
    }

    #[test]
    fn canceled_selection_preserves_path_button_and_lists() {
        let mut state = State::new("Pin count must be even", power_group);
        state
            .load_vendor_text(Path::new("vendor/pins.csv"), "1,A,INPUT\n")
            .expect("pin list");
        let button_text = state.load_button_text().to_owned();
        discard(state.update(Message::PinListChosen(None)));
        assert_eq!(state.load_button_text(), button_text);
        assert_eq!(state.layout().input_group.len(), 1);
    }

    #[test]
    fn successful_load_appends_and_retains_full_path() {
        let mut state = State::new("Pin count must be even", power_group);
        let path = Path::new("a/very/long/vendor/path/pins.csv");
        state
            .load_vendor_text(path, "1,A,INPUT\n2,VCC,POWER\n")
            .expect("first pin list");
        state
            .load_vendor_text(path, "3,B,OUTPUT\n")
            .expect("second pin list");
        assert_eq!(state.layout().input_group.len(), 1);
        assert_eq!(state.layout().output_group.len(), 1);
        assert_eq!(state.layout().first_power_group.len(), 1);
        assert_eq!(state.full_pin_list_path(), Some(path));
    }
}
