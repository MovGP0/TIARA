use std::fmt;
use std::fs::File;
use std::io::Read;
use std::path::Path;

#[cfg(test)]
use std::io::Write;

use iced::widget::{button, column, container, pick_list, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};
use rfd::FileDialog;
use tiara_core::numeric_format::parse_engineering_number;
use xmltree::Element as XmlElement;

use crate::shared::window_shell;

pub const TITLE: &str = "Filter Design";
pub const SCREENSHOT: &str = "screenshots/Filter_Design_Window.png";
pub const FORM_RESOURCE: &str = "FilterDesign";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("019d53b0");
const STATUS: &str = "Filter response preview";
const MENUS: &[(&str, &[&str])] = &[
    ("File", &["New", "Open...", "Save", "Save As...", "Close"]),
    ("Design", &["Calculate", "Place", "Load Defaults"]),
    ("View", &["Zoom In", "Zoom Out", "Redraw", "Options..."]),
    ("Help", &["Contents", "Component Help", "About"]),
];
const FLOAT_EDIT_COUNT: usize = 6;
const MINIMUM_FLOAT_EDIT_VALUE: f64 = -1e50;
const MAXIMUM_FLOAT_EDIT_VALUE: f64 = 1e50;
const MINIMUM_ROLL_OFF_FREQUENCY: f64 = 1e-6;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FilterType {
    Lowpass,
    Highpass,
    Bandpass,
    Bandstop,
}

impl FilterType {
    const ALL: [Self; 4] = [
        Self::Lowpass,
        Self::Highpass,
        Self::Bandpass,
        Self::Bandstop,
    ];

    const fn index(self) -> usize {
        match self {
            Self::Lowpass => 0,
            Self::Highpass => 1,
            Self::Bandpass => 2,
            Self::Bandstop => 3,
        }
    }
}

impl TryFrom<usize> for FilterType {
    type Error = SettingsError;

    fn try_from(index: usize) -> Result<Self, Self::Error> {
        Self::ALL
            .get(index)
            .copied()
            .ok_or(SettingsError::InvalidSelection {
                attribute: "Type",
                index,
            })
    }
}

impl fmt::Display for FilterType {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Lowpass => "Lowpass",
            Self::Highpass => "Highpass",
            Self::Bandpass => "Bandpass",
            Self::Bandstop => "Bandstop",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ActiveMode {
    Active,
    Passive,
}

impl ActiveMode {
    const ALL: [Self; 2] = [Self::Active, Self::Passive];

    const fn index(self) -> usize {
        match self {
            Self::Active => 0,
            Self::Passive => 1,
        }
    }
}

impl TryFrom<usize> for ActiveMode {
    type Error = SettingsError;

    fn try_from(index: usize) -> Result<Self, Self::Error> {
        Self::ALL
            .get(index)
            .copied()
            .ok_or(SettingsError::InvalidSelection {
                attribute: "Active",
                index,
            })
    }
}

impl fmt::Display for ActiveMode {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Active => "Active",
            Self::Passive => "Passive",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum OpampType {
    Ideal,
    Standard,
}

impl OpampType {
    const ALL: [Self; 2] = [Self::Ideal, Self::Standard];

    const fn index(self) -> usize {
        match self {
            Self::Ideal => 0,
            Self::Standard => 1,
        }
    }
}

impl TryFrom<usize> for OpampType {
    type Error = SettingsError;

    fn try_from(index: usize) -> Result<Self, Self::Error> {
        Self::ALL
            .get(index)
            .copied()
            .ok_or(SettingsError::InvalidSelection {
                attribute: "Opamp",
                index,
            })
    }
}

impl fmt::Display for OpampType {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Ideal => "Ideal opamp",
            Self::Standard => "Standard opamp",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum BuildTarget {
    Circuit,
    Macro,
}

impl BuildTarget {
    const ALL: [Self; 2] = [Self::Circuit, Self::Macro];

    const fn index(self) -> usize {
        match self {
            Self::Circuit => 0,
            Self::Macro => 1,
        }
    }
}

impl TryFrom<usize> for BuildTarget {
    type Error = SettingsError;

    fn try_from(index: usize) -> Result<Self, Self::Error> {
        Self::ALL
            .get(index)
            .copied()
            .ok_or(SettingsError::InvalidSelection {
                attribute: "Build",
                index,
            })
    }
}

impl fmt::Display for BuildTarget {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Circuit => "Tina Circuit",
            Self::Macro => "Tina Macro",
        })
    }
}

#[derive(Debug, Clone, PartialEq)]
pub enum FilterParameters {
    Lowpass {
        passband_gain_db: f64,
        stopband_gain_db: f64,
        passband_frequency_hz: f64,
        stopband_frequency_hz: f64,
    },
    Highpass {
        passband_gain_db: f64,
        stopband_gain_db: f64,
        passband_frequency_hz: f64,
        stopband_frequency_hz: f64,
    },
    Bandpass {
        passband_gain_db: f64,
        stopband_gains_db: [f64; 2],
        passband_frequencies_hz: [f64; 2],
        stopband_frequencies_hz: [f64; 2],
    },
    Bandstop {
        passband_gains_db: [f64; 2],
        stopband_gain_db: f64,
        passband_frequencies_hz: [f64; 2],
        stopband_frequencies_hz: [f64; 2],
    },
}

#[derive(Debug, Clone, PartialEq)]
pub struct FilterSpecification {
    pub parameters: FilterParameters,
    pub opamp: OpampType,
    pub build_circuit: bool,
    pub build_macro: bool,
    pub active: bool,
}

#[derive(Debug)]
pub enum SettingsError {
    Io(std::io::Error),
    Xml(String),
    MissingFilterElement,
    InvalidNumber {
        attribute: String,
        value: String,
    },
    InvalidSelection {
        attribute: &'static str,
        index: usize,
    },
    InvalidControlValue {
        field: usize,
        value: String,
    },
}

impl fmt::Display for SettingsError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Io(error) => error.fmt(formatter),
            Self::Xml(error) => formatter.write_str(error),
            Self::MissingFilterElement => {
                formatter.write_str("The XML document has no filter element.")
            }
            Self::InvalidNumber { attribute, value } => {
                write!(formatter, "The {attribute} value {value:?} is not valid.")
            }
            Self::InvalidSelection { attribute, index } => write!(
                formatter,
                "The {attribute} selection {index} is not supported."
            ),
            Self::InvalidControlValue { field, value } => write!(
                formatter,
                "Filter value {} ({value:?}) is not valid.",
                field + 1
            ),
        }
    }
}

impl std::error::Error for SettingsError {}

impl From<std::io::Error> for SettingsError {
    fn from(error: std::io::Error) -> Self {
        Self::Io(error)
    }
}

#[derive(Debug, Clone, PartialEq)]
struct LoadedSettings {
    values: [f64; FLOAT_EDIT_COUNT],
    filter_type: usize,
    active: usize,
    opamp: usize,
    build: usize,
}

#[derive(Debug, Clone, PartialEq)]
struct FieldMetadata {
    label: &'static str,
    minimum: f64,
    maximum: f64,
    visible: bool,
}

impl FieldMetadata {
    const fn gain(label: &'static str, passband: bool) -> Self {
        Self {
            label,
            minimum: if passband { -30.0 } else { -300.0 },
            maximum: -3.0,
            visible: true,
        }
    }

    const fn frequency(label: &'static str, visible: bool) -> Self {
        Self {
            label,
            minimum: 100.0,
            maximum: 1_000_000.0,
            visible,
        }
    }
}

#[derive(Debug)]
pub struct Window {
    values: [String; FLOAT_EDIT_COUNT],
    filter_type: FilterType,
    active_mode: ActiveMode,
    opamp: OpampType,
    build_target: BuildTarget,
    fields: [FieldMetadata; FLOAT_EDIT_COUNT],
    roll_off_rates: [Option<f64>; 2],
    staged_specification: Option<FilterSpecification>,
    preview_refresh_count: usize,
    defaults_confirmation_pending: bool,
    status: String,
}

impl Default for Window {
    fn default() -> Self {
        let mut window = Self {
            values: std::array::from_fn(|_| String::new()),
            filter_type: FilterType::Lowpass,
            active_mode: ActiveMode::Active,
            opamp: OpampType::Ideal,
            build_target: BuildTarget::Circuit,
            fields: lowpass_fields(),
            roll_off_rates: [None, None],
            staged_specification: None,
            preview_refresh_count: 0,
            defaults_confirmation_pending: false,
            status: STATUS.to_owned(),
        };
        window.apply_selected_type(true);
        let _ = window.refresh_staged_preview();
        window
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
    FilterTypeSelected(FilterType),
    ActiveModeSelected(ActiveMode),
    OpampSelected(OpampType),
    BuildTargetSelected(BuildTarget),
    Load,
    Save,
    LoadDefaults,
    DefaultsDecision(bool),
    Accept,
    NoOp,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::TextChanged(index, value) => {
                if let Some(field) = self.values.get_mut(index) {
                    *field = value;
                }
            }
            Message::FilterTypeSelected(filter_type) => {
                self.filter_type = filter_type;
                self.apply_selected_type(true);
            }
            Message::ActiveModeSelected(active_mode) => self.active_mode = active_mode,
            Message::OpampSelected(opamp) => self.opamp = opamp,
            Message::BuildTargetSelected(build_target) => self.build_target = build_target,
            Message::Load => self.load_click(),
            Message::Save => self.save_click(),
            Message::LoadDefaults => self.defaults_confirmation_pending = true,
            Message::DefaultsDecision(confirmed) => self.answer_defaults_confirmation(confirmed),
            Message::Accept => {
                let _ = self.accept_click();
            }
            Message::NoOp => {}
        }
    }

    /// Implements Ghidra function `FUN_019d45b0` at `0x019D45B0`.
    ///
    /// The maintained `xmltree` crate supplies the XML DOM adapter. All six
    /// iced text values are written unchanged, including hidden values. The
    /// file is written directly and errors are returned without local retry.
    ///
    /// # Errors
    ///
    /// Returns an I/O or XML serialization error.
    pub fn save_settings(&self, path: &Path) -> Result<(), SettingsError> {
        let filter = self.settings_element();
        let file = File::create(path)?;
        filter
            .write(file)
            .map_err(|error| SettingsError::Xml(error.to_string()))
    }

    /// Implements Ghidra function `FUN_019d4960` at `0x019D4960`.
    ///
    /// Parsed values are written to the six iced text controls before the four
    /// selector values. The shared type helper then changes labels and rates
    /// without loading defaults or refreshing the staged preview.
    fn apply_loaded_settings(&mut self, settings: &LoadedSettings) -> Result<(), SettingsError> {
        for (target, value) in self.values.iter_mut().zip(settings.values) {
            *target = value.to_string();
        }
        self.filter_type = FilterType::try_from(settings.filter_type)?;
        self.active_mode = ActiveMode::try_from(settings.active)?;
        self.opamp = OpampType::try_from(settings.opamp)?;
        self.build_target = BuildTarget::try_from(settings.build)?;
        self.apply_selected_type(false);
        Ok(())
    }

    /// Implements Ghidra function `FUN_019d4f40` at `0x019D4F40`.
    ///
    /// Iced owns the confirmation state. A negative answer changes no filter
    /// state. A positive answer selects Lowpass, loads its defaults, collects
    /// the staged specification, and refreshes the preview bookkeeping.
    pub fn answer_defaults_confirmation(&mut self, confirmed: bool) {
        self.defaults_confirmation_pending = false;
        if !confirmed {
            return;
        }
        self.filter_type = FilterType::Lowpass;
        self.apply_selected_type(true);
        let _ = self.refresh_staged_preview();
    }

    /// Implements Ghidra function `FUN_019d5000` at `0x019D5000`.
    ///
    /// The maintained `rfd::FileDialog` supplies an unconfigured native Open
    /// dialog. Cancellation is a no-op. An accepted path is passed unchanged
    /// to the shared load adapter.
    pub fn load_click(&mut self) {
        let selection = FileDialog::new().pick_file();
        self.handle_load_selection(selection.as_deref());
    }

    /// Implements Ghidra function `FUN_019d5090` at `0x019D5090`.
    ///
    /// The maintained `rfd::FileDialog` supplies an unconfigured native Save
    /// dialog. Cancellation does not read controls or write a file. The
    /// accepted path is passed unchanged to the shared XML writer.
    pub fn save_click(&mut self) {
        let selection = FileDialog::new().save_file();
        self.handle_save_selection(selection.as_deref());
    }

    /// Implements Ghidra function `FUN_019d5d90` at `0x019D5D90`.
    ///
    /// Rust enums select the type-specific labels, visibility, numeric
    /// metadata, and defaults. Passing `false` preserves all control values.
    pub fn apply_selected_type(&mut self, load_defaults: bool) {
        self.fields = match self.filter_type {
            FilterType::Lowpass => lowpass_fields(),
            FilterType::Highpass => highpass_fields(),
            FilterType::Bandpass => bandpass_fields(),
            FilterType::Bandstop => bandstop_fields(),
        };
        if load_defaults {
            let defaults = match self.filter_type {
                FilterType::Lowpass => [-3.0, -50.0, 10_000.0, 100_000.0, 0.0, 0.0],
                FilterType::Highpass => [-50.0, -3.0, 10_000.0, 100_000.0, 0.0, 0.0],
                FilterType::Bandpass => [-50.0, -3.0, 1_000.0, 20_000.0, 40_000.0, 100_000.0],
                FilterType::Bandstop => [-3.0, -50.0, 1_000.0, 20_000.0, 40_000.0, 100_000.0],
            };
            let visible_count = if matches!(
                self.filter_type,
                FilterType::Bandpass | FilterType::Bandstop
            ) {
                FLOAT_EDIT_COUNT
            } else {
                4
            };
            for (target, value) in self.values[..visible_count]
                .iter_mut()
                .zip(defaults[..visible_count].iter())
            {
                *target = value.to_string();
            }
            self.active_mode = ActiveMode::Active;
            self.opamp = OpampType::Ideal;
            self.build_target = BuildTarget::Circuit;
        }
        self.update_roll_off_rates();
    }

    /// Implements Ghidra function `FUN_019d62c0` at `0x019D62C0`.
    ///
    /// The method collects current iced controls into the dialog-owned staged
    /// specification, marks one synchronous preview refresh, and recalculates
    /// the derived roll-off display. It performs no persistence or synthesis.
    ///
    /// # Errors
    ///
    /// Returns the first invalid required control value.
    pub fn refresh_staged_preview(&mut self) -> Result<(), SettingsError> {
        let specification = self.collect_controls()?;
        self.staged_specification = Some(specification);
        self.preview_refresh_count += 1;
        self.update_roll_off_rates();
        STATUS.clone_into(&mut self.status);
        Ok(())
    }

    /// Implements Ghidra function `FUN_019d6360` at `0x019D6360`.
    ///
    /// The custom OK handler only delegates to the control collector and
    /// replaces the dialog-owned staged record. Modal acceptance remains the
    /// responsibility of the surrounding iced window shell.
    ///
    /// # Errors
    ///
    /// Returns the first invalid required control value.
    pub fn accept_click(&mut self) -> Result<(), SettingsError> {
        match self.collect_controls() {
            Ok(specification) => {
                self.staged_specification = Some(specification);
                STATUS.clone_into(&mut self.status);
                Ok(())
            }
            Err(error) => {
                self.status = error.to_string();
                Err(error)
            }
        }
    }

    /// Implements Ghidra function `FUN_019d6510` at `0x019D6510`.
    ///
    /// The existing `tiara-core` engineering-number parser supplies numeric
    /// input conversion. Rust enums then map the type-specific values and
    /// complementary build flags. Non-Lowpass types force active operation.
    ///
    /// # Errors
    ///
    /// Returns the first invalid or out-of-range visible numeric control.
    pub fn collect_controls(&self) -> Result<FilterSpecification, SettingsError> {
        let mut values = [0.0; FLOAT_EDIT_COUNT];
        for (index, field) in self
            .fields
            .iter()
            .enumerate()
            .filter(|(_, field)| field.visible)
        {
            let value = parse_engineering_number(&self.values[index]).map_err(|_| {
                SettingsError::InvalidControlValue {
                    field: index,
                    value: self.values[index].clone(),
                }
            })?;
            if !value.is_finite()
                || !(MINIMUM_FLOAT_EDIT_VALUE..=MAXIMUM_FLOAT_EDIT_VALUE).contains(&value)
                || !(field.minimum..=field.maximum).contains(&value)
            {
                return Err(SettingsError::InvalidControlValue {
                    field: index,
                    value: self.values[index].clone(),
                });
            }
            values[index] = value;
        }
        let parameters = match self.filter_type {
            FilterType::Lowpass => FilterParameters::Lowpass {
                passband_gain_db: values[0],
                stopband_gain_db: values[1],
                passband_frequency_hz: values[2],
                stopband_frequency_hz: values[3],
            },
            FilterType::Highpass => FilterParameters::Highpass {
                passband_gain_db: values[1],
                stopband_gain_db: values[0],
                passband_frequency_hz: values[3],
                stopband_frequency_hz: values[2],
            },
            FilterType::Bandpass => FilterParameters::Bandpass {
                passband_gain_db: values[1],
                stopband_gains_db: [values[0], values[0]],
                passband_frequencies_hz: [values[3], values[4]],
                stopband_frequencies_hz: [values[2], values[5]],
            },
            FilterType::Bandstop => FilterParameters::Bandstop {
                passband_gains_db: [values[0], values[0]],
                stopband_gain_db: values[1],
                passband_frequencies_hz: [values[2], values[5]],
                stopband_frequencies_hz: [values[3], values[4]],
            },
        };
        Ok(FilterSpecification {
            parameters,
            opamp: self.opamp,
            build_circuit: self.build_target == BuildTarget::Circuit,
            build_macro: self.build_target == BuildTarget::Macro,
            active: self.filter_type != FilterType::Lowpass
                || self.active_mode == ActiveMode::Active,
        })
    }

    fn handle_load_selection(&mut self, selection: Option<&Path>) {
        let Some(path) = selection else {
            return;
        };
        match Self::read_settings(path).and_then(|settings| self.apply_loaded_settings(&settings)) {
            Ok(()) => STATUS.clone_into(&mut self.status),
            Err(error) => self.status = error.to_string(),
        }
    }

    fn handle_save_selection(&mut self, selection: Option<&Path>) {
        let Some(path) = selection else {
            return;
        };
        match self.save_settings(path) {
            Ok(()) => STATUS.clone_into(&mut self.status),
            Err(error) => self.status = error.to_string(),
        }
    }

    fn read_settings(path: &Path) -> Result<LoadedSettings, SettingsError> {
        Self::parse_settings(File::open(path)?)
    }

    fn parse_settings(reader: impl Read) -> Result<LoadedSettings, SettingsError> {
        let document =
            XmlElement::parse(reader).map_err(|error| SettingsError::Xml(error.to_string()))?;
        let filter = if document.name == "filter" {
            &document
        } else {
            document
                .get_child("filter")
                .ok_or(SettingsError::MissingFilterElement)?
        };
        let mut values = [0.0; FLOAT_EDIT_COUNT];
        for (index, value) in values.iter_mut().enumerate() {
            let attribute = format!("FloatEdit{index}");
            let source = filter.attributes.get(&attribute).map_or("", String::as_str);
            *value = if source.is_empty() {
                0.0
            } else {
                parse_engineering_number(source).map_err(|_| SettingsError::InvalidNumber {
                    attribute,
                    value: source.to_owned(),
                })?
            };
        }
        Ok(LoadedSettings {
            values,
            filter_type: parse_index_attribute(filter, "Type"),
            active: parse_index_attribute(filter, "Active"),
            opamp: parse_index_attribute(filter, "Opamp"),
            build: parse_index_attribute(filter, "Build"),
        })
    }

    #[cfg(test)]
    fn write_settings(&self, writer: impl Write) -> Result<(), SettingsError> {
        self.settings_element()
            .write(writer)
            .map_err(|error| SettingsError::Xml(error.to_string()))
    }

    fn settings_element(&self) -> XmlElement {
        let mut filter = XmlElement::new("filter");
        for (index, value) in self.values.iter().enumerate() {
            filter
                .attributes
                .insert(format!("FloatEdit{index}"), value.clone());
        }
        filter
            .attributes
            .insert("Type".to_owned(), self.filter_type.index().to_string());
        filter
            .attributes
            .insert("Active".to_owned(), self.active_mode.index().to_string());
        filter
            .attributes
            .insert("Opamp".to_owned(), self.opamp.index().to_string());
        filter
            .attributes
            .insert("Build".to_owned(), self.build_target.index().to_string());
        filter
    }

    fn update_roll_off_rates(&mut self) {
        let parsed = std::array::from_fn::<_, FLOAT_EDIT_COUNT, _>(|index| {
            parse_engineering_number(&self.values[index]).ok()
        });
        let required = match self.filter_type {
            FilterType::Lowpass | FilterType::Highpass => 4,
            FilterType::Bandpass | FilterType::Bandstop => FLOAT_EDIT_COUNT,
        };
        if parsed[..required].iter().any(Option::is_none) {
            return;
        }
        let values = parsed.map(Option::unwrap_or_default);
        let result = match self.filter_type {
            FilterType::Lowpass | FilterType::Highpass => {
                [roll_off(values[1] - values[0], values[3], values[2]), None]
            }
            FilterType::Bandpass => [
                roll_off(values[1] - values[0], values[3], values[2]),
                roll_off(values[1] - values[0], values[5], values[3]),
            ],
            FilterType::Bandstop => [
                roll_off(values[0] - values[1], values[3], values[2]),
                roll_off(values[0] - values[1], values[5], values[3]),
            ],
        };
        if let Some(rate) = result[0] {
            self.roll_off_rates[0] = Some(rate);
        }
        if matches!(
            self.filter_type,
            FilterType::Bandpass | FilterType::Bandstop
        ) {
            if let Some(rate) = result[1] {
                self.roll_off_rates[1] = Some(rate);
            }
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::menu_bar(MENUS, Message::NoOp);
        let toolbar = filter_toolbar();
        let mut controls = column![
            labeled_pick_list(
                "Type",
                &FilterType::ALL,
                self.filter_type,
                Message::FilterTypeSelected
            ),
            labeled_pick_list(
                "Active/passive filter",
                &ActiveMode::ALL,
                self.active_mode,
                Message::ActiveModeSelected
            ),
            row![
                text("Approximation").width(Length::FillPortion(2)),
                text("Butterworth").width(Length::FillPortion(3))
            ]
            .spacing(8)
            .align_y(Alignment::Center),
            labeled_pick_list(
                "OPAMP type",
                &OpampType::ALL,
                self.opamp,
                Message::OpampSelected
            ),
            labeled_pick_list(
                "Build target",
                &BuildTarget::ALL,
                self.build_target,
                Message::BuildTargetSelected
            ),
        ]
        .spacing(8);
        for (index, field) in self
            .fields
            .iter()
            .enumerate()
            .filter(|(_, field)| field.visible)
        {
            controls = controls.push(
                row![
                    text(field.label).width(Length::FillPortion(2)),
                    text_input("", &self.values[index])
                        .on_input(move |value| Message::TextChanged(index, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
            );
        }
        controls = controls.push(derived_value_row("Roll-off rate", self.roll_off_rates[0]));
        if matches!(
            self.filter_type,
            FilterType::Bandpass | FilterType::Bandstop
        ) {
            controls = controls.push(derived_value_row("Roll-off rate 2", self.roll_off_rates[1]));
        }
        controls = controls.push(button("OK").on_press(Message::Accept));
        if self.defaults_confirmation_pending {
            controls = controls.push(
                column![
                    text("The defaults will be loaded. Are you sure?"),
                    row![
                        button("Yes").on_press(Message::DefaultsDecision(true)),
                        button("No").on_press(Message::DefaultsDecision(false))
                    ]
                    .spacing(8),
                ]
                .spacing(4),
            );
        }
        let preview = container(
            column![
                text("Filter response preview"),
                text(format!("Refresh {}", self.preview_refresh_count))
            ]
            .spacing(8),
        )
        .center_x(Length::Fill)
        .center_y(Length::Fill)
        .width(Length::Fill)
        .height(Length::Fill);
        let body: Element<'_, Message> = row![
            container(scrollable(controls))
                .padding(8)
                .width(Length::Fixed(340.0))
                .height(Length::Fill),
            preview,
        ]
        .spacing(6)
        .padding(6)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();
        window_shell::frame(TITLE, menu, toolbar, body, &self.status)
    }
}

fn parse_index_attribute(element: &XmlElement, name: &str) -> usize {
    element
        .attributes
        .get(name)
        .and_then(|value| value.parse::<usize>().ok())
        .unwrap_or(0)
}

fn roll_off(gain_difference: f64, outer_frequency: f64, inner_frequency: f64) -> Option<f64> {
    if outer_frequency < MINIMUM_ROLL_OFF_FREQUENCY || inner_frequency < MINIMUM_ROLL_OFF_FREQUENCY
    {
        return None;
    }
    Some(gain_difference / (outer_frequency / inner_frequency).log10())
}

const fn lowpass_fields() -> [FieldMetadata; FLOAT_EDIT_COUNT] {
    [
        FieldMetadata::gain("Passband gain [dB]", true),
        FieldMetadata::gain("Stopband gain [dB]", false),
        FieldMetadata::frequency("Passband frequency [Hz]", true),
        FieldMetadata::frequency("Stopband frequency [Hz]", true),
        FieldMetadata::frequency("Hidden frequency 1 [Hz]", false),
        FieldMetadata::frequency("Hidden frequency 2 [Hz]", false),
    ]
}

const fn highpass_fields() -> [FieldMetadata; FLOAT_EDIT_COUNT] {
    [
        FieldMetadata::gain("Stopband gain [dB]", false),
        FieldMetadata::gain("Passband gain [dB]", true),
        FieldMetadata::frequency("Stopband frequency [Hz]", true),
        FieldMetadata::frequency("Passband frequency [Hz]", true),
        FieldMetadata::frequency("Hidden frequency 1 [Hz]", false),
        FieldMetadata::frequency("Hidden frequency 2 [Hz]", false),
    ]
}

const fn bandpass_fields() -> [FieldMetadata; FLOAT_EDIT_COUNT] {
    [
        FieldMetadata::gain("Stopband gain [dB]", false),
        FieldMetadata::gain("Passband gain [dB]", true),
        FieldMetadata::frequency("Stopband frequency 1 [Hz]", true),
        FieldMetadata::frequency("Passband frequency 1 [Hz]", true),
        FieldMetadata::frequency("Passband frequency 2 [Hz]", true),
        FieldMetadata::frequency("Stopband frequency 2 [Hz]", true),
    ]
}

const fn bandstop_fields() -> [FieldMetadata; FLOAT_EDIT_COUNT] {
    [
        FieldMetadata::gain("Passband gain [dB]", true),
        FieldMetadata::gain("Stopband gain [dB]", false),
        FieldMetadata::frequency("Passband frequency 1 [Hz]", true),
        FieldMetadata::frequency("Stopband frequency 1 [Hz]", true),
        FieldMetadata::frequency("Stopband frequency 2 [Hz]", true),
        FieldMetadata::frequency("Passband frequency 2 [Hz]", true),
    ]
}

fn filter_toolbar<'a>() -> Element<'a, Message> {
    container(
        row![
            button("Load defaults").on_press(Message::LoadDefaults),
            button("Load...").on_press(Message::Load),
            button("Save...").on_press(Message::Save),
            button("Calculate").on_press(Message::NoOp),
            button("Place").on_press(Message::NoOp),
        ]
        .spacing(4),
    )
    .padding([3, 6])
    .width(Length::Fill)
    .into()
}

fn labeled_pick_list<'a, T>(
    label: &'a str,
    options: &'a [T],
    selected: T,
    on_selected: impl Fn(T) -> Message + 'a,
) -> Element<'a, Message>
where
    T: ToString + PartialEq + Clone + 'a,
{
    row![
        text(label).width(Length::FillPortion(2)),
        pick_list(options, Some(selected), on_selected).width(Length::FillPortion(3)),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
    .into()
}

fn derived_value_row(label: &str, value: Option<f64>) -> Element<'_, Message> {
    row![
        text(label).width(Length::FillPortion(2)),
        text(value.map_or_else(String::new, |value| format!("{value:.2} dB/d")))
            .width(Length::FillPortion(3)),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
    .into()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn settings_xml_keeps_all_raw_text_and_selector_indexes() {
        let window = Window {
            values: ["-3.0", "-50", "10k", "100k", "retained one", "retained two"]
                .map(str::to_owned),
            active_mode: ActiveMode::Passive,
            opamp: OpampType::Standard,
            build_target: BuildTarget::Macro,
            ..Window::default()
        };
        let mut xml = Vec::new();
        window.write_settings(&mut xml).expect("serialize settings");
        let document = XmlElement::parse(xml.as_slice()).expect("parse serialized XML");
        assert_eq!(document.attributes["FloatEdit0"], "-3.0");
        assert_eq!(document.attributes["FloatEdit4"], "retained one");
        assert_eq!(document.attributes["FloatEdit5"], "retained two");
        assert_eq!(document.attributes["Type"], "0");
        assert_eq!(document.attributes["Active"], "1");
        assert_eq!(document.attributes["Opamp"], "1");
        assert_eq!(document.attributes["Build"], "1");
    }

    #[test]
    fn loaded_settings_change_controls_but_not_staged_preview() {
        let mut window = Window::default();
        let previous_specification = window.staged_specification.clone();
        let previous_refresh_count = window.preview_refresh_count;
        let xml = br#"<filter Type="2" Active="1" Opamp="1" Build="1" FloatEdit0="-50" FloatEdit1="-3" FloatEdit2="1k" FloatEdit3="20k" FloatEdit4="40k" FloatEdit5="100k"/>"#;
        let settings = Window::parse_settings(xml.as_slice()).expect("parse settings");
        window
            .apply_loaded_settings(&settings)
            .expect("apply loaded settings");
        assert_eq!(window.filter_type, FilterType::Bandpass);
        assert_eq!(
            window.values,
            ["-50", "-3", "1000", "20000", "40000", "100000"]
        );
        assert!(window.fields.iter().all(|field| field.visible));
        assert_eq!(window.staged_specification, previous_specification);
        assert_eq!(window.preview_refresh_count, previous_refresh_count);
        let expected_rate = 47.0 / 20.0_f64.log10();
        assert!((window.roll_off_rates[0].expect("first rate") - expected_rate).abs() < 1e-9);
    }

    #[test]
    fn defaults_confirmation_has_an_exact_no_op_and_lowpass_yes_path() {
        let mut window = Window {
            filter_type: FilterType::Bandstop,
            ..Window::default()
        };
        window.apply_selected_type(true);
        let values = window.values.clone();
        let refresh_count = window.preview_refresh_count;
        window.answer_defaults_confirmation(false);
        assert_eq!(window.filter_type, FilterType::Bandstop);
        assert_eq!(window.values, values);
        assert_eq!(window.preview_refresh_count, refresh_count);
        window.answer_defaults_confirmation(true);
        assert_eq!(window.filter_type, FilterType::Lowpass);
        assert_eq!(&window.values[..4], ["-3", "-50", "10000", "100000"]);
        assert_eq!(window.active_mode, ActiveMode::Active);
        assert_eq!(window.opamp, OpampType::Ideal);
        assert_eq!(window.build_target, BuildTarget::Circuit);
        assert_eq!(window.preview_refresh_count, refresh_count + 1);
        assert_eq!(window.roll_off_rates[0], Some(-47.0));
    }

    #[test]
    fn canceled_load_and_save_selections_are_no_ops() {
        let mut window = Window::default();
        "unchanged".clone_into(&mut window.status);
        let values = window.values.clone();
        window.handle_load_selection(None);
        window.handle_save_selection(None);
        assert_eq!(window.values, values);
        assert_eq!(window.status, "unchanged");
    }

    #[test]
    fn type_helper_preserves_values_without_defaults_and_configures_band_fields() {
        let mut window = Window {
            values: std::array::from_fn(|index| format!("value {index}")),
            filter_type: FilterType::Bandpass,
            ..Window::default()
        };
        window.apply_selected_type(false);
        assert_eq!(window.values[5], "value 5");
        assert!(window.fields.iter().all(|field| field.visible));
        assert_eq!(window.fields[4].label, "Passband frequency 2 [Hz]");
    }

    #[test]
    fn refresh_collects_controls_and_marks_preview_once() {
        let mut window = Window::default();
        let initial_refresh_count = window.preview_refresh_count;
        window.filter_type = FilterType::Highpass;
        window.apply_selected_type(true);
        window.refresh_staged_preview().expect("refresh preview");
        assert_eq!(window.preview_refresh_count, initial_refresh_count + 1);
        assert_eq!(window.roll_off_rates[0], Some(47.0));
        assert!(matches!(
            window.staged_specification,
            Some(FilterSpecification {
                parameters: FilterParameters::Highpass {
                    passband_gain_db: -3.0,
                    stopband_gain_db: -50.0,
                    passband_frequency_hz: 100_000.0,
                    stopband_frequency_hz: 10_000.0
                },
                active: true,
                ..
            })
        ));
    }

    #[test]
    fn ok_collects_without_refreshing_preview() {
        let mut window = Window::default();
        let refresh_count = window.preview_refresh_count;
        "-4".clone_into(&mut window.values[0]);
        window.accept_click().expect("collect controls");
        assert_eq!(window.preview_refresh_count, refresh_count);
        assert!(matches!(
            window.staged_specification,
            Some(FilterSpecification {
                parameters: FilterParameters::Lowpass {
                    passband_gain_db: -4.0,
                    ..
                },
                ..
            })
        ));
    }

    #[test]
    fn collector_duplicates_outer_band_gain_and_forces_active() {
        let mut window = Window {
            filter_type: FilterType::Bandstop,
            ..Window::default()
        };
        window.apply_selected_type(true);
        window.active_mode = ActiveMode::Passive;
        window.build_target = BuildTarget::Macro;
        let specification = window.collect_controls().expect("collect controls");
        assert_eq!(
            specification,
            FilterSpecification {
                parameters: FilterParameters::Bandstop {
                    passband_gains_db: [-3.0, -3.0],
                    stopband_gain_db: -50.0,
                    passband_frequencies_hz: [1_000.0, 100_000.0],
                    stopband_frequencies_hz: [20_000.0, 40_000.0]
                },
                opamp: OpampType::Ideal,
                build_circuit: false,
                build_macro: true,
                active: true,
            }
        );
    }

    #[test]
    fn parser_defaults_missing_attributes_and_accepts_engineering_numbers() {
        let settings = Window::parse_settings(
            br#"<document><filter FloatEdit0="1k" Type="invalid"/></document>"#.as_slice(),
        )
        .expect("parse settings");
        assert!(
            settings
                .values
                .iter()
                .zip([1000.0, 0.0, 0.0, 0.0, 0.0, 0.0])
                .all(|(actual, expected)| (actual - expected).abs() < f64::EPSILON)
        );
        assert_eq!(settings.filter_type, 0);
        assert_eq!(settings.active, 0);
        assert_eq!(settings.opamp, 0);
        assert_eq!(settings.build, 0);
    }
}
