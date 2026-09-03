//! Iced state adapters for recovered text and pin property dialogs.
//!
//! The models are narrow value types and do not depend on active `ShapeEdit` or
//! catalog-editor internals. `iced` supplies messages and widgets. The standard
//! library supplies fixed direction state. Existing `rfd` and `iced_aw` were
//! evaluated, but neither supplies the recovered native font-dialog contract,
//! so font selection stays behind the injected [`FontPicker`] trait.

use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, row, text, text_input};
use iced::{Element, Length, Task};

pub const TEXT_PROPERTIES_TITLE: &str = "Text properties";
pub const TEXT_PROPERTIES_FORM_RESOURCE: &str = "TextProps";
pub const PIN_PROPERTIES_TITLE: &str = "Pin properties";
pub const PIN_PROPERTIES_FORM_RESOURCE: &str = "PinProps";
pub const COLOR_DIALOG_CUSTOM_COLORS_SECTION: &str = "Color Dialog Custom Colors";
pub const SYSTEM_INFORMATION_BACKGROUND: u32 = 0xff00_0018;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ShapeTextValue {
    pub text: String,
    pub font: ShapeFontValue,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ShapeFontValue {
    pub family: String,
    pub point_size: u16,
    pub style: FontStyle,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum FontStyle {
    #[default]
    Regular,
    Bold,
    Italic,
    BoldItalic,
}

pub trait FontPicker {
    type Error;

    /// Executes the platform font picker.
    ///
    /// # Errors
    ///
    /// Returns the platform adapter error. The Boolean indicates whether the
    /// user accepted the native picker.
    fn execute(&mut self) -> Result<bool, Self::Error>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ShapeCustomColorEntry {
    pub name: String,
    pub value: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ShapePinColorChoice {
    pub color: u32,
    pub custom_colors: Vec<ShapeCustomColorEntry>,
}

pub trait PinPropertiesColorPort {
    /// Loads persisted custom colors for the native picker.
    ///
    /// # Errors
    ///
    /// Returns an error when the configuration store cannot be read.
    fn load_custom_colors(&mut self, section: &str) -> Result<Vec<ShapeCustomColorEntry>, String>;

    /// Opens the color picker with the staged pin-name color.
    ///
    /// # Errors
    ///
    /// Returns an error when the picker cannot complete.
    fn choose_color(
        &mut self,
        current: u32,
        custom_colors: &[ShapeCustomColorEntry],
    ) -> Result<Option<ShapePinColorChoice>, String>;

    /// Persists one custom-color entry returned by an accepted picker.
    ///
    /// # Errors
    ///
    /// Returns an error when the configuration store cannot write the entry.
    fn write_custom_color(
        &mut self,
        section: &str,
        entry: &ShapeCustomColorEntry,
    ) -> Result<(), String>;
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ScreenPoint {
    pub x: i32,
    pub y: i32,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ScreenBounds {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct HintSize {
    pub width: i32,
    pub height: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct NameHintOverlay {
    pub text: String,
    pub bounds: ScreenBounds,
    pub background_color: u32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct NameKeyPressResult {
    pub remaining_key: Option<char>,
    pub overlay: Option<NameHintOverlay>,
}

pub trait PinPropertiesNameHintPort {
    /// Measures the localized name-syntax hint for the active screen.
    ///
    /// # Errors
    ///
    /// Returns an error when Iced text measurement cannot complete.
    fn measure_hint(&mut self, maximum_width: i32, text: &str) -> Result<HintSize, String>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalResult {
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum TextPropertiesMessage {
    TextChanged(String),
    FontPressed,
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TextPropertiesWindow {
    original: ShapeTextValue,
    working: ShapeTextValue,
    font_picker_requested: bool,
    modal_result: Option<ModalResult>,
}

impl TextPropertiesWindow {
    #[must_use]
    pub fn new(value: ShapeTextValue) -> Self {
        Self {
            original: value.clone(),
            working: value,
            font_picker_requested: false,
            modal_result: None,
        }
    }

    pub fn update(&mut self, message: TextPropertiesMessage) -> Task<TextPropertiesMessage> {
        match message {
            TextPropertiesMessage::TextChanged(value) => self.working.text = value,
            TextPropertiesMessage::FontPressed => self.font_picker_requested = true,
            TextPropertiesMessage::Accept => self.modal_result = Some(ModalResult::Accept),
            TextPropertiesMessage::Cancel => {
                self.working.clone_from(&self.original);
                self.modal_result = Some(ModalResult::Cancel);
            }
        }
        Task::none()
    }

    /// Opens the font-selection dialog and ignores its Boolean result.
    ///
    /// Reimplements Ghidra function `FUN_017a11f0` at `0x017A11F0`. Accepted
    /// and cancelled results have the same observable effect: this handler does
    /// not copy a selected font into the staged text value. Picker errors are
    /// not caught and return through the adapter boundary.
    ///
    /// # Errors
    ///
    /// Returns the injected font-picker error.
    pub fn open_font_picker<P: FontPicker>(&mut self, picker: &mut P) -> Result<(), P::Error> {
        let _ignored_result = picker.execute()?;
        self.font_picker_requested = false;
        Ok(())
    }

    /// Executes one pending font request generated by the Iced update logic.
    ///
    /// # Errors
    ///
    /// Returns the injected font-picker error.
    pub fn run_pending_font_picker<P: FontPicker>(
        &mut self,
        picker: &mut P,
    ) -> Result<bool, P::Error> {
        if !self.font_picker_requested {
            return Ok(false);
        }
        self.open_font_picker(picker)?;
        Ok(true)
    }

    pub fn commit_to(&self, value: &mut ShapeTextValue) -> bool {
        if self.modal_result != Some(ModalResult::Accept) {
            return false;
        }
        value.clone_from(&self.working);
        true
    }

    #[must_use]
    pub const fn working(&self) -> &ShapeTextValue {
        &self.working
    }

    #[must_use]
    pub const fn font_picker_requested(&self) -> bool {
        self.font_picker_requested
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, TextPropertiesMessage> {
        let content = column![
            text(TEXT_PROPERTIES_TITLE).size(18),
            text_input("Text", &self.working.text).on_input(TextPropertiesMessage::TextChanged),
            text(format!(
                "{} {} pt",
                self.working.font.family, self.working.font.point_size
            )),
            row![
                button("Font...").on_press(TextPropertiesMessage::FontPressed),
                button("OK").on_press(TextPropertiesMessage::Accept),
                button("Cancel").on_press(TextPropertiesMessage::Cancel)
            ]
            .spacing(8),
        ]
        .spacing(10);
        container(content)
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PinDirection {
    East,
    South,
    West,
    North,
}

impl PinDirection {
    pub const ALL: [Self; 4] = [Self::North, Self::East, Self::South, Self::West];

    #[must_use]
    pub const fn code(self) -> u8 {
        match self {
            Self::East => 0,
            Self::South => 1,
            Self::West => 2,
            Self::North => 3,
        }
    }

    const fn index(self) -> usize {
        match self {
            Self::North => 0,
            Self::East => 1,
            Self::South => 2,
            Self::West => 3,
        }
    }

    const fn label(self) -> &'static str {
        match self {
            Self::North => "North",
            Self::East => "East",
            Self::South => "South",
            Self::West => "West",
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DirectionCode(pub u8);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DirectionSender {
    SpeedButton { tag: i64 },
    Other,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct DirectionButtons {
    down: [bool; 4],
    setter_calls: [u32; 4],
}

impl DirectionButtons {
    /// Reads the selected direction code from the four buttons.
    ///
    /// Reimplements Ghidra function `FUN_017a1f60` at `0x017A1F60`. The read
    /// order is North, East, South, West. No selected button also returns East
    /// code 0.
    #[must_use]
    pub const fn selected_direction_code(&self) -> DirectionCode {
        if self.down[PinDirection::North.index()] {
            DirectionCode(3)
        } else if self.down[PinDirection::East.index()] {
            DirectionCode(0)
        } else if self.down[PinDirection::South.index()] {
            DirectionCode(1)
        } else if self.down[PinDirection::West.index()] {
            DirectionCode(2)
        } else {
            DirectionCode(0)
        }
    }

    /// Changes one direction button only when its state differs.
    ///
    /// Reimplements Ghidra function `FUN_017a1fc0` at `0x017A1FC0`. The return
    /// value reports whether the speed-button setter had to run.
    pub const fn set_button_if_changed(
        &mut self,
        direction: PinDirection,
        requested_down: bool,
    ) -> bool {
        let index = direction.index();
        if self.down[index] == requested_down {
            return false;
        }
        self.down[index] = requested_down;
        self.setter_calls[index] = self.setter_calls[index].saturating_add(1);
        true
    }

    /// Applies one direction code to all four speed buttons.
    ///
    /// Reimplements Ghidra function `FUN_017a1fe0` at `0x017A1FE0`. Codes 0,
    /// 1, 2, and 3 select East, South, West, and North. Any other code clears
    /// all buttons through the set-if-changed helper.
    pub const fn apply_direction_code(&mut self, code: DirectionCode) {
        self.set_button_if_changed(PinDirection::North, code.0 == 3);
        self.set_button_if_changed(PinDirection::East, code.0 == 0);
        self.set_button_if_changed(PinDirection::South, code.0 == 1);
        self.set_button_if_changed(PinDirection::West, code.0 == 2);
    }

    /// Routes a compatible speed-button sender to the direction setter.
    ///
    /// Reimplements Ghidra function `FUN_017a2230` at `0x017A2230`. A
    /// non-speed-button sender is a no-op. A speed button supplies the low byte
    /// of its Tag, including unsupported codes that clear all directions.
    pub const fn route_direction_click(&mut self, sender: DirectionSender) -> bool {
        let DirectionSender::SpeedButton { tag } = sender else {
            return false;
        };
        self.apply_direction_code(DirectionCode(tag.to_le_bytes()[0]));
        true
    }

    #[must_use]
    pub const fn is_down(&self, direction: PinDirection) -> bool {
        self.down[direction.index()]
    }

    #[must_use]
    pub const fn setter_call_count(&self, direction: PinDirection) -> u32 {
        self.setter_calls[direction.index()]
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PinPropertiesValue {
    pub name: String,
    pub direction: DirectionCode,
    pub name_color: u32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum PinPropertiesMessage {
    NameChanged(String),
    DirectionPressed(PinDirection),
    ColorPressed,
    Accept,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PinPropertiesWindow {
    original: PinPropertiesValue,
    working: PinPropertiesValue,
    buttons: DirectionButtons,
    color_picker_requested: bool,
    configuration_path: PathBuf,
    color_preview_attached: bool,
    color_preview_cache_generation: u64,
    active_name_hint: Option<NameHintOverlay>,
    modal_result: Option<ModalResult>,
}

impl PinPropertiesWindow {
    #[must_use]
    pub fn new(value: PinPropertiesValue) -> Self {
        let mut buttons = DirectionButtons {
            down: [false; 4],
            setter_calls: [0; 4],
        };
        buttons.apply_direction_code(value.direction);
        Self {
            original: value.clone(),
            working: value,
            buttons,
            color_picker_requested: false,
            configuration_path: PathBuf::new(),
            color_preview_attached: false,
            color_preview_cache_generation: 0,
            active_name_hint: None,
            modal_result: None,
        }
    }

    /// Initializes configuration and color-preview lifecycle state.
    ///
    /// This is the original Rust adapter for Ghidra function `0x017A2270`,
    /// symbol `FUN_017a2270` (`PinProps.OnCreate`). `PathBuf` builds the
    /// recovered `tina.ini` path. Iced owns the drawing context, so the window
    /// records that its color preview is attached instead of allocating a VCL
    /// control canvas.
    pub fn on_create(&mut self, application_directory: &Path) {
        self.configuration_path = application_directory.join("tina.ini");
        self.color_preview_attached = true;
    }

    /// Releases configuration and color-preview lifecycle state.
    ///
    /// This is the original Rust adapter for Ghidra function `0x017A2330`,
    /// symbol `FUN_017a2330` (`PinProps.OnDestroy`). Rust drops the path-owned
    /// configuration state and Iced owns renderer cleanup, so no native canvas
    /// destructor is required.
    pub fn on_destroy(&mut self) {
        self.color_preview_attached = false;
        self.configuration_path.clear();
    }

    /// Invalidates the color-preview render cache on a name-field key-down.
    ///
    /// This is the original Iced adapter for Ghidra function `0x017A2370`,
    /// symbol `FUN_017a2370` (`PinProps.EName.OnKeyDown`). The recovered
    /// handler unconditionally releases the cached VCL canvas handle. Iced
    /// uses a generation change to request fresh preview rendering instead.
    pub const fn name_key_down(&mut self) {
        self.color_preview_cache_generation = self.color_preview_cache_generation.saturating_add(1);
    }

    /// Filters unsupported pin-name characters and builds the syntax hint.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x017A2390`, symbol `FUN_017a2390` (`PinProps.EName.OnKeyPress`). The
    /// characters `*`, `,`, and `:` are consumed. The localized hint is
    /// measured within the active screen width, centered below the name field,
    /// and rendered with the recovered system information-background color.
    /// Other characters pass through unchanged.
    ///
    /// # Errors
    ///
    /// Returns an error when hint measurement fails.
    pub fn name_key_press(
        &mut self,
        key: char,
        name_bounds: ScreenBounds,
        form_screen_origin: ScreenPoint,
        maximum_width: i32,
        hint_text: &str,
        port: &mut impl PinPropertiesNameHintPort,
    ) -> Result<NameKeyPressResult, String> {
        if !matches!(key, '*' | ',' | ':') {
            return Ok(NameKeyPressResult {
                remaining_key: Some(key),
                overlay: None,
            });
        }
        let size = port.measure_hint(maximum_width, hint_text)?;
        let field_width = name_bounds.right - name_bounds.left;
        let left = form_screen_origin.x + name_bounds.left + (field_width - size.width) / 2;
        let top = form_screen_origin.y + name_bounds.bottom + 10;
        let overlay = NameHintOverlay {
            text: hint_text.to_owned(),
            bounds: ScreenBounds {
                left,
                top,
                right: left + size.width,
                bottom: top + size.height,
            },
            background_color: SYSTEM_INFORMATION_BACKGROUND,
        };
        self.active_name_hint = Some(overlay.clone());
        Ok(NameKeyPressResult {
            remaining_key: None,
            overlay: Some(overlay),
        })
    }

    pub fn update(&mut self, message: PinPropertiesMessage) -> Task<PinPropertiesMessage> {
        match message {
            PinPropertiesMessage::NameChanged(name) => self.working.name = name,
            PinPropertiesMessage::DirectionPressed(direction) => {
                self.buttons
                    .route_direction_click(DirectionSender::SpeedButton {
                        tag: i64::from(direction.code()),
                    });
            }
            PinPropertiesMessage::ColorPressed => self.color_picker_requested = true,
            PinPropertiesMessage::Accept => {
                self.working.direction = self.buttons.selected_direction_code();
                self.modal_result = Some(ModalResult::Accept);
            }
            PinPropertiesMessage::Cancel => {
                self.working.clone_from(&self.original);
                self.buttons.apply_direction_code(self.original.direction);
                self.modal_result = Some(ModalResult::Cancel);
            }
        }
        Task::none()
    }

    /// Selects and stages the pin-name color.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x017A2060`, symbol `FUN_017a2060`
    /// (`PinProps.shpColor.OnMouseDown`). It loads saved custom colors and
    /// opens the picker with the staged color. Cancellation preserves all
    /// state. Acceptance changes the staged color and persists every returned
    /// custom-color entry in order.
    ///
    /// # Errors
    ///
    /// Returns an adapter error. An accepted color and earlier successful
    /// custom-color writes remain applied if a later write fails.
    pub fn select_name_color(
        &mut self,
        port: &mut impl PinPropertiesColorPort,
    ) -> Result<bool, String> {
        let custom_colors = port.load_custom_colors(COLOR_DIALOG_CUSTOM_COLORS_SECTION)?;
        let Some(choice) = port.choose_color(self.working.name_color, &custom_colors)? else {
            self.color_picker_requested = false;
            return Ok(false);
        };
        self.working.name_color = choice.color;
        self.color_picker_requested = false;
        for entry in &choice.custom_colors {
            port.write_custom_color(COLOR_DIALOG_CUSTOM_COLORS_SECTION, entry)?;
        }
        Ok(true)
    }

    /// Executes one pending color request generated by the Iced update logic.
    ///
    /// # Errors
    ///
    /// Returns an adapter error from [`Self::select_name_color`].
    pub fn run_pending_name_color_picker(
        &mut self,
        port: &mut impl PinPropertiesColorPort,
    ) -> Result<bool, String> {
        if !self.color_picker_requested {
            return Ok(false);
        }
        let _accepted = self.select_name_color(port)?;
        Ok(true)
    }

    pub fn commit_to(&self, value: &mut PinPropertiesValue) -> bool {
        if !matches!(self.modal_result, Some(ModalResult::Accept)) {
            return false;
        }
        value.clone_from(&self.working);
        true
    }

    #[must_use]
    pub const fn buttons(&self) -> &DirectionButtons {
        &self.buttons
    }

    #[must_use]
    pub const fn working(&self) -> &PinPropertiesValue {
        &self.working
    }

    #[must_use]
    pub fn configuration_path(&self) -> &Path {
        &self.configuration_path
    }

    #[must_use]
    pub const fn color_preview_attached(&self) -> bool {
        self.color_preview_attached
    }

    #[must_use]
    pub const fn color_preview_cache_generation(&self) -> u64 {
        self.color_preview_cache_generation
    }

    #[must_use]
    pub const fn active_name_hint(&self) -> Option<&NameHintOverlay> {
        self.active_name_hint.as_ref()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, PinPropertiesMessage> {
        let mut direction_row = row![text("Direction")].spacing(6);
        for direction in PinDirection::ALL {
            let label = if self.buttons.is_down(direction) {
                format!("[{}]", direction.label())
            } else {
                direction.label().to_owned()
            };
            direction_row = direction_row.push(
                button(text(label)).on_press(PinPropertiesMessage::DirectionPressed(direction)),
            );
        }
        let content = column![
            text(PIN_PROPERTIES_TITLE).size(18),
            text_input("Name", &self.working.name).on_input(PinPropertiesMessage::NameChanged),
            direction_row,
            button(text(format!(
                "Name color: #{:08X}",
                self.working.name_color
            )))
            .on_press(PinPropertiesMessage::ColorPressed),
            row![
                button("OK").on_press(PinPropertiesMessage::Accept),
                button("Cancel").on_press(PinPropertiesMessage::Cancel)
            ]
            .spacing(8),
        ]
        .spacing(10);
        container(content)
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    struct PickerError;

    struct Picker {
        result: Result<bool, PickerError>,
        calls: u32,
    }

    impl FontPicker for Picker {
        type Error = PickerError;

        fn execute(&mut self) -> Result<bool, Self::Error> {
            self.calls = self.calls.saturating_add(1);
            self.result
        }
    }

    #[derive(Default)]
    struct ColorPort {
        loaded: Vec<ShapeCustomColorEntry>,
        choice: Option<ShapePinColorChoice>,
        choose_inputs: Vec<(u32, Vec<ShapeCustomColorEntry>)>,
        writes: Vec<(String, ShapeCustomColorEntry)>,
    }

    #[derive(Default)]
    struct HintPort {
        size: HintSize,
        inputs: Vec<(i32, String)>,
    }

    impl PinPropertiesNameHintPort for HintPort {
        fn measure_hint(&mut self, maximum_width: i32, text: &str) -> Result<HintSize, String> {
            self.inputs.push((maximum_width, text.to_owned()));
            Ok(self.size)
        }
    }

    impl PinPropertiesColorPort for ColorPort {
        fn load_custom_colors(
            &mut self,
            section: &str,
        ) -> Result<Vec<ShapeCustomColorEntry>, String> {
            assert_eq!(section, COLOR_DIALOG_CUSTOM_COLORS_SECTION);
            Ok(self.loaded.clone())
        }

        fn choose_color(
            &mut self,
            current: u32,
            custom_colors: &[ShapeCustomColorEntry],
        ) -> Result<Option<ShapePinColorChoice>, String> {
            self.choose_inputs.push((current, custom_colors.to_vec()));
            Ok(self.choice.clone())
        }

        fn write_custom_color(
            &mut self,
            section: &str,
            entry: &ShapeCustomColorEntry,
        ) -> Result<(), String> {
            self.writes.push((section.to_owned(), entry.clone()));
            Ok(())
        }
    }

    fn text_value() -> ShapeTextValue {
        ShapeTextValue {
            text: "label".to_owned(),
            font: ShapeFontValue {
                family: "Arial".to_owned(),
                point_size: 10,
                style: FontStyle::Regular,
            },
        }
    }

    #[test]
    fn font_picker_accept_and_cancel_results_are_both_ignored() {
        let original = text_value();
        for accepted in [false, true] {
            let mut window = TextPropertiesWindow::new(original.clone());
            let mut picker = Picker {
                result: Ok(accepted),
                calls: 0,
            };
            assert!(window.open_font_picker(&mut picker).is_ok());
            assert_eq!(picker.calls, 1);
            assert_eq!(window.working(), &original);
        }
    }

    #[test]
    fn pending_font_request_executes_once_and_errors_propagate() {
        let mut window = TextPropertiesWindow::new(text_value());
        let _ = window.update(TextPropertiesMessage::FontPressed);
        let mut picker = Picker {
            result: Err(PickerError),
            calls: 0,
        };
        assert_eq!(
            window.run_pending_font_picker(&mut picker),
            Err(PickerError)
        );
        assert_eq!(picker.calls, 1);
        assert!(window.font_picker_requested());
    }

    #[test]
    fn reader_uses_recovered_precedence_and_defaults_to_east() {
        let mut buttons = DirectionButtons::default();
        assert_eq!(buttons.selected_direction_code(), DirectionCode(0));
        buttons.down = [true, true, true, true];
        assert_eq!(buttons.selected_direction_code(), DirectionCode(3));
        buttons.down = [false, false, true, true];
        assert_eq!(buttons.selected_direction_code(), DirectionCode(1));
    }

    #[test]
    fn set_if_changed_avoids_repeated_speed_button_setter_calls() {
        let mut buttons = DirectionButtons::default();
        assert!(buttons.set_button_if_changed(PinDirection::East, true));
        assert!(!buttons.set_button_if_changed(PinDirection::East, true));
        assert_eq!(buttons.setter_call_count(PinDirection::East), 1);
    }

    #[test]
    fn direction_codes_select_one_button_and_unsupported_code_clears_all() {
        let mut buttons = DirectionButtons::default();
        for direction in PinDirection::ALL {
            buttons.apply_direction_code(DirectionCode(direction.code()));
            assert!(buttons.is_down(direction));
            assert!(
                PinDirection::ALL
                    .into_iter()
                    .filter(|candidate| *candidate != direction)
                    .all(|candidate| !buttons.is_down(candidate))
            );
        }
        buttons.apply_direction_code(DirectionCode(99));
        assert!(
            PinDirection::ALL
                .into_iter()
                .all(|direction| !buttons.is_down(direction))
        );
    }

    #[test]
    fn click_router_ignores_other_sender_and_uses_speed_button_tag_low_byte() {
        let mut buttons = DirectionButtons::default();
        buttons.apply_direction_code(DirectionCode(0));
        assert!(!buttons.route_direction_click(DirectionSender::Other));
        assert_eq!(buttons.selected_direction_code(), DirectionCode(0));
        assert!(buttons.route_direction_click(DirectionSender::SpeedButton { tag: 0x103 }));
        assert_eq!(buttons.selected_direction_code(), DirectionCode(3));
        assert!(buttons.route_direction_click(DirectionSender::SpeedButton { tag: 0xff }));
        assert!(
            PinDirection::ALL
                .into_iter()
                .all(|direction| !buttons.is_down(direction))
        );
    }

    #[test]
    fn pin_window_stages_direction_and_commits_only_after_accept() {
        let original = PinPropertiesValue {
            name: "PIN_A".to_owned(),
            direction: DirectionCode(2),
            name_color: 0x0012_3456,
        };
        let mut caller = original.clone();
        let mut window = PinPropertiesWindow::new(original.clone());
        let _ = window.update(PinPropertiesMessage::DirectionPressed(PinDirection::North));
        assert!(!window.commit_to(&mut caller));
        assert_eq!(caller, original);
        let _ = window.update(PinPropertiesMessage::Accept);
        assert!(window.commit_to(&mut caller));
        assert_eq!(caller.direction, DirectionCode(3));
    }

    #[test]
    fn fun_017a2270_builds_the_configuration_path_and_attaches_the_preview() {
        let mut window = PinPropertiesWindow::new(PinPropertiesValue {
            name: "PIN_A".to_owned(),
            direction: DirectionCode(0),
            name_color: 0x0012_3456,
        });

        window.on_create(Path::new(r"C:\Tina"));

        assert_eq!(window.configuration_path(), Path::new(r"C:\Tina\tina.ini"));
        assert!(window.color_preview_attached());
    }

    #[test]
    fn fun_017a2330_releases_configuration_and_preview_lifecycle_state() {
        let mut window = PinPropertiesWindow::new(PinPropertiesValue {
            name: "PIN_A".to_owned(),
            direction: DirectionCode(0),
            name_color: 0x0012_3456,
        });
        window.on_create(Path::new(r"C:\Tina"));

        window.on_destroy();

        assert!(window.configuration_path().as_os_str().is_empty());
        assert!(!window.color_preview_attached());
    }

    #[test]
    fn fun_017a2370_invalidates_the_color_preview_on_every_name_key_down() {
        let mut window = PinPropertiesWindow::new(PinPropertiesValue {
            name: "PIN_A".to_owned(),
            direction: DirectionCode(0),
            name_color: 0x0012_3456,
        });
        window.on_create(Path::new(r"C:\Tina"));

        window.name_key_down();
        window.name_key_down();

        assert_eq!(window.color_preview_cache_generation(), 2);
        assert!(window.color_preview_attached());
    }

    #[test]
    fn fun_017a2390_consumes_reserved_name_characters_and_places_the_hint() {
        let mut window = PinPropertiesWindow::new(PinPropertiesValue {
            name: "PIN_A".to_owned(),
            direction: DirectionCode(0),
            name_color: 0x0012_3456,
        });
        let mut port = HintPort {
            size: HintSize {
                width: 80,
                height: 24,
            },
            ..HintPort::default()
        };
        let expected = NameHintOverlay {
            text: "Pin-name syntax".to_owned(),
            bounds: ScreenBounds {
                left: 140,
                top: 180,
                right: 220,
                bottom: 204,
            },
            background_color: SYSTEM_INFORMATION_BACKGROUND,
        };

        for key in ['*', ',', ':'] {
            assert_eq!(
                window.name_key_press(
                    key,
                    ScreenBounds {
                        left: 20,
                        top: 30,
                        right: 120,
                        bottom: 70,
                    },
                    ScreenPoint { x: 110, y: 100 },
                    1920,
                    "Pin-name syntax",
                    &mut port,
                ),
                Ok(NameKeyPressResult {
                    remaining_key: None,
                    overlay: Some(expected.clone()),
                })
            );
        }
        assert_eq!(window.active_name_hint(), Some(&expected));
        assert_eq!(port.inputs.len(), 3);
        assert_eq!(
            window.name_key_press(
                'A',
                ScreenBounds::default(),
                ScreenPoint::default(),
                1920,
                "Pin-name syntax",
                &mut port,
            ),
            Ok(NameKeyPressResult {
                remaining_key: Some('A'),
                overlay: None,
            })
        );
        assert_eq!(port.inputs.len(), 3);
    }

    #[test]
    fn fun_017a2060_stages_color_and_persists_accepted_custom_entries() {
        let loaded = vec![ShapeCustomColorEntry {
            name: "ColorA".to_owned(),
            value: "255".to_owned(),
        }];
        let accepted = vec![
            ShapeCustomColorEntry {
                name: "ColorA".to_owned(),
                value: "65280".to_owned(),
            },
            ShapeCustomColorEntry {
                name: "ColorB".to_owned(),
                value: "16711680".to_owned(),
            },
        ];
        let mut port = ColorPort {
            loaded: loaded.clone(),
            choice: Some(ShapePinColorChoice {
                color: 0x0000_ff00,
                custom_colors: accepted.clone(),
            }),
            ..ColorPort::default()
        };
        let mut window = PinPropertiesWindow::new(PinPropertiesValue {
            name: "PIN_A".to_owned(),
            direction: DirectionCode(0),
            name_color: 0x0000_00ff,
        });
        let _ = window.update(PinPropertiesMessage::ColorPressed);

        assert_eq!(window.run_pending_name_color_picker(&mut port), Ok(true));

        assert_eq!(window.working().name_color, 0x0000_ff00);
        assert_eq!(port.choose_inputs, [(0x0000_00ff, loaded)]);
        assert_eq!(
            port.writes,
            accepted
                .into_iter()
                .map(|entry| (COLOR_DIALOG_CUSTOM_COLORS_SECTION.to_owned(), entry))
                .collect::<Vec<_>>()
        );

        port.choice = None;
        let _ = window.update(PinPropertiesMessage::ColorPressed);
        assert_eq!(window.run_pending_name_color_picker(&mut port), Ok(true));
        assert_eq!(window.working().name_color, 0x0000_ff00);
    }
}
