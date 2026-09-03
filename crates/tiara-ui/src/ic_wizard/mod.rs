use std::io::Cursor;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, radio, row, text, text_input};
use iced::{Element, Length, Task};
use rfd::AsyncFileDialog;
use tiara_core::ic_wizard::{
    ParseSummary, PinLayout, PowerGroup, parse_vendor_pin_list, shorten_middle,
};

pub const TITLE: &str = "IC Wizard";
pub const FORM_RESOURCE: &str = "frmICWizard";
pub const LIBRARY_EVALUATION: &str = "iced supplies the IC Wizard message, state, widgets, and asynchronous file selection. Rust PathBuf builds the configuration path, and the existing tiara-core PinLayout owns the four pin collections, so no INI or collection crate is needed at creation time.";
pub const COLOR_DIALOG_CUSTOM_COLORS_SECTION: &str = "Color Dialog Custom Colors";
const DEFAULT_PATH_DISPLAY_CHARACTERS: usize = 32;

pub type PowerGroupSelector = fn(&str) -> PowerGroup;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CustomColorEntry {
    pub name: String,
    pub value: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PinLabelColorChoice {
    pub color: u32,
    pub custom_colors: Vec<CustomColorEntry>,
}

pub trait PinLabelColorPort {
    /// Loads persisted custom color entries for a dialog section.
    ///
    /// # Errors
    ///
    /// Returns an error when the configuration store cannot be read.
    fn load_custom_colors(&mut self, section: &str) -> Result<Vec<CustomColorEntry>, String>;

    /// Opens the color dialog with its current color and custom entries.
    ///
    /// # Errors
    ///
    /// Returns an error when the native color dialog cannot complete.
    fn choose_color(
        &mut self,
        current: u32,
        custom_colors: &[CustomColorEntry],
    ) -> Result<Option<PinLabelColorChoice>, String>;

    /// Writes one accepted custom color entry to the configuration store.
    ///
    /// # Errors
    ///
    /// Returns an error when the entry cannot be persisted.
    fn write_custom_color(&mut self, section: &str, entry: &CustomColorEntry)
    -> Result<(), String>;
}

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
    Created(PathBuf),
    Destroyed,
    SelectMode(PinLayoutMode),
    PinCountChanged(String),
    PinNumberError(String),
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
    configuration_path: Option<PathBuf>,
    mode: PinLayoutMode,
    pin_label_color: u32,
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
            configuration_path: None,
            mode: PinLayoutMode::Generic,
            pin_label_color: 0,
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
            Message::Created(application_directory) => {
                self.on_create(&application_directory);
                Task::none()
            }
            Message::Destroyed => {
                self.on_destroy();
                Task::none()
            }
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
            Message::PinNumberError(message) => {
                self.on_pin_number_error(message);
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

    /// Initializes the IC Wizard configuration and pin collections.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01784C80`, symbol `FUN_01784c80` (`TfrmICWizard.FormCreate`). It
    /// builds the application-local `tina.ini` path, creates four empty pin
    /// groups, and enters generic pin-layout mode. A later host adapter can
    /// open the configuration file when a recovered setting needs it.
    pub fn on_create(&mut self, application_directory: &Path) {
        self.configuration_path = Some(application_directory.join("tina.ini"));
        self.layout = PinLayout::default();
        self.select_generic_mode();
    }

    /// Releases the IC Wizard configuration and pin collections.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01784D90`, symbol `FUN_01784d90` (`TfrmICWizard.FormDestroy`). It
    /// releases the four pin groups and the configuration object. Rust owns
    /// these values directly, so replacing them drops their allocations.
    pub fn on_destroy(&mut self) {
        self.layout = PinLayout::default();
        self.configuration_path = None;
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

    /// Forwards a numeric pin-count editor error to wizard validation.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01784E80`, symbol `FUN_01784e80`
    /// (`TfrmICWizard.iePinNumberError`). The editor-provided message enters
    /// the existing first-error latch without modification.
    pub fn on_pin_number_error(&mut self, message: String) {
        self.report_validation_error(message);
    }

    /// Selects the pin-label color and persists accepted custom colors.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01785020`, symbol `FUN_01785020`
    /// (`TfrmICWizard.shpColorMouseDown`). It loads the saved custom-color
    /// entries before opening the dialog with the current shape color. Cancel
    /// leaves state and configuration unchanged. Acceptance applies the new
    /// color and writes every returned custom-color entry to the same section.
    ///
    /// # Errors
    ///
    /// Returns a configuration or color-dialog adapter error. If an entry
    /// write fails, the accepted color and earlier writes remain applied.
    pub fn select_pin_label_color(
        &mut self,
        port: &mut impl PinLabelColorPort,
    ) -> Result<bool, String> {
        let custom_colors = port.load_custom_colors(COLOR_DIALOG_CUSTOM_COLORS_SECTION)?;
        let Some(choice) = port.choose_color(self.pin_label_color, &custom_colors)? else {
            return Ok(false);
        };

        self.pin_label_color = choice.color;
        for entry in &choice.custom_colors {
            port.write_custom_color(COLOR_DIALOG_CUSTOM_COLORS_SECTION, entry)?;
        }
        Ok(true)
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
    pub const fn pin_label_color(&self) -> u32 {
        self.pin_label_color
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
    pub fn configuration_path(&self) -> Option<&Path> {
        self.configuration_path.as_deref()
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

    use super::{
        COLOR_DIALOG_CUSTOM_COLORS_SECTION, CustomColorEntry, Message, ModalResult,
        PinLabelColorChoice, PinLabelColorPort, PinLayoutMode, State,
    };

    #[derive(Debug, Default)]
    struct ColorPort {
        loaded: Vec<CustomColorEntry>,
        choice: Option<PinLabelColorChoice>,
        choose_inputs: Vec<(u32, Vec<CustomColorEntry>)>,
        writes: Vec<(String, CustomColorEntry)>,
    }

    impl PinLabelColorPort for ColorPort {
        fn load_custom_colors(&mut self, section: &str) -> Result<Vec<CustomColorEntry>, String> {
            assert_eq!(section, COLOR_DIALOG_CUSTOM_COLORS_SECTION);
            Ok(self.loaded.clone())
        }

        fn choose_color(
            &mut self,
            current: u32,
            custom_colors: &[CustomColorEntry],
        ) -> Result<Option<PinLabelColorChoice>, String> {
            self.choose_inputs.push((current, custom_colors.to_vec()));
            Ok(self.choice.take())
        }

        fn write_custom_color(
            &mut self,
            section: &str,
            entry: &CustomColorEntry,
        ) -> Result<(), String> {
            self.writes.push((section.to_owned(), entry.clone()));
            Ok(())
        }
    }

    fn custom_color(name: &str, value: &str) -> CustomColorEntry {
        CustomColorEntry {
            name: name.to_owned(),
            value: value.to_owned(),
        }
    }

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
    fn create_builds_configuration_path_clears_pin_groups_and_selects_generic_mode() {
        let mut state = State::new("Pin count must be even", power_group);
        state
            .load_vendor_text(Path::new("pins.csv"), "1,A,INPUT\n2,VCC,POWER\n")
            .expect("pin list");
        discard(state.update(Message::SelectMode(PinLayoutMode::Vendor)));

        discard(state.update(Message::Created(Path::new("C:/Tina").to_path_buf())));

        assert_eq!(
            state.configuration_path(),
            Some(Path::new("C:/Tina/tina.ini"))
        );
        assert_eq!(state.mode(), PinLayoutMode::Generic);
        assert!(state.layout().input_group.is_empty());
        assert!(state.layout().output_group.is_empty());
        assert!(state.layout().first_power_group.is_empty());
        assert!(state.layout().second_power_group.is_empty());
    }

    #[test]
    fn destroy_releases_configuration_and_all_four_pin_groups() {
        let mut state = State::new("Pin count must be even", power_group);
        discard(state.update(Message::Created(Path::new("C:/Tina").to_path_buf())));
        state
            .load_vendor_text(Path::new("pins.csv"), "1,A,INPUT\n2,VCC,POWER\n")
            .expect("pin list");

        discard(state.update(Message::Destroyed));

        assert_eq!(state.configuration_path(), None);
        assert!(state.layout().input_group.is_empty());
        assert!(state.layout().output_group.is_empty());
        assert!(state.layout().first_power_group.is_empty());
        assert!(state.layout().second_power_group.is_empty());
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
    fn pin_number_error_routes_editor_text_to_the_first_error_latch() {
        let mut state = State::new("Pin count must be even", power_group);

        discard(state.update(Message::PinNumberError(
            "Pin count is outside the allowed range".to_owned(),
        )));
        discard(state.update(Message::PinNumberError(
            "A later error must not replace it".to_owned(),
        )));

        assert_eq!(
            state.validation_error(),
            Some("Pin count is outside the allowed range")
        );
    }

    #[test]
    fn pin_label_color_loads_dialog_entries_applies_choice_and_persists_all_entries() {
        let loaded = vec![custom_color("ColorA", "255")];
        let accepted = vec![
            custom_color("ColorA", "65280"),
            custom_color("ColorB", "16711680"),
        ];
        let mut port = ColorPort {
            loaded: loaded.clone(),
            choice: Some(PinLabelColorChoice {
                color: 0x0000_ff00,
                custom_colors: accepted.clone(),
            }),
            ..ColorPort::default()
        };
        let mut state = State::new("Pin count must be even", power_group);

        assert_eq!(state.select_pin_label_color(&mut port), Ok(true));

        assert_eq!(state.pin_label_color(), 0x0000_ff00);
        assert_eq!(port.choose_inputs, vec![(0, loaded)]);
        assert_eq!(
            port.writes,
            accepted
                .into_iter()
                .map(|entry| (COLOR_DIALOG_CUSTOM_COLORS_SECTION.to_owned(), entry))
                .collect::<Vec<_>>()
        );
    }

    #[test]
    fn canceled_pin_label_color_dialog_preserves_color_and_configuration() {
        let mut port = ColorPort {
            loaded: vec![custom_color("ColorA", "255")],
            choice: None,
            ..ColorPort::default()
        };
        let mut state = State::new("Pin count must be even", power_group);

        assert_eq!(state.select_pin_label_color(&mut port), Ok(false));

        assert_eq!(state.pin_label_color(), 0);
        assert!(port.writes.is_empty());
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
