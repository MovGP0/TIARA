use std::cmp::Ordering;
use std::fmt;
use std::fs::File;
use std::io::Read;
use std::path::{Path, PathBuf};

use iced::widget::{
    button, checkbox, column, container, pick_list, row, scrollable, text, text_input,
};
use iced::{Alignment, Element, Length};
use tiara_core::numeric_format::{format_display_value, parse_engineering_number};
use xmltree::{Element as XmlElement, XMLNode};

use crate::shared::window_shell;

pub const TITLE: &str = "Converters";
pub const SCREENSHOT: &str = "screenshots/Converters_Window.png";
pub const FORM_RESOURCE: &str = "ConvertersDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01c4a6d0");
const STATUS: &str = "Converter selection";
const ALL_MANUFACTURERS: &str = "All Manufacturers";
const BASE_CATALOG_FILE: &str = "converters.xml";
const EXTENDED_CATALOG_FILE: &str = "converters.ext.xml";
const EXAMPLE_FILE_SEPARATOR: &str = "\r\n";
const CONVERTER_ADD_ON_URL: &str = "https://order.tina.com/download/Converters%20Add-on.exe";
const NUMERIC_FIELD_COUNT: usize = 6;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Topology {
    Buck,
    Boost,
    BuckBoost,
    Inverting,
}

impl Topology {
    const ALL: [Self; 4] = [Self::Buck, Self::Boost, Self::BuckBoost, Self::Inverting];

    const fn code(self) -> u32 {
        match self {
            Self::Buck => 1,
            Self::Boost => 2,
            Self::BuckBoost => 3,
            Self::Inverting => 4,
        }
    }

    fn from_code(code: u32) -> Result<Self, ConverterError> {
        Self::ALL
            .get(code.saturating_sub(1) as usize)
            .copied()
            .ok_or(ConverterError::InvalidTopology(code))
    }
}

impl fmt::Display for Topology {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Buck => "Buck",
            Self::Boost => "Boost",
            Self::BuckBoost => "Buck-Boost",
            Self::Inverting => "Inverting",
        })
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ConverterRow {
    pub file_names: String,
    pub manufacturer: String,
    pub name: String,
    pub topology: Topology,
    pub input_voltage: String,
    pub output_voltage: String,
    pub output_current: String,
    pub frequency: String,
}

#[derive(Debug, Clone, PartialEq)]
struct ConverterEntry {
    file_names: String,
    manufacturer: String,
    name: String,
    topology_code: u32,
    automotive: bool,
    pmbus: bool,
    vinmin: f64,
    vinmax: f64,
    voutmin: f64,
    voutmax: f64,
    iout: f64,
    freqmin: f64,
    freqmax: f64,
}

impl ConverterEntry {
    fn from_xml(manufacturer: &XmlElement, converter: &XmlElement) -> Result<Self, ConverterError> {
        Ok(Self {
            file_names: converter
                .get_text()
                .map_or_else(String::new, |value| value.trim().to_owned()),
            manufacturer: attribute(manufacturer, "name").to_owned(),
            name: attribute(converter, "name").to_owned(),
            topology_code: integer_attribute(converter, "topology", 1),
            automotive: integer_attribute(converter, "auto", 0) == 1,
            pmbus: integer_attribute(converter, "pmbus", 0) == 1,
            vinmin: numeric_attribute(converter, "vinmin")?,
            vinmax: numeric_attribute(converter, "vinmax")?,
            voutmin: numeric_attribute(converter, "voutmin")?,
            voutmax: numeric_attribute(converter, "voutmax")?,
            iout: numeric_attribute(converter, "iout")?,
            freqmin: numeric_attribute(converter, "freqmin")?,
            freqmax: numeric_attribute(converter, "freqmax")?,
        })
    }

    fn into_row(self) -> Result<ConverterRow, ConverterError> {
        Ok(ConverterRow {
            file_names: self.file_names,
            manufacturer: self.manufacturer,
            name: self.name,
            topology: Topology::from_code(self.topology_code)?,
            input_voltage: format_range(self.vinmin, self.vinmax, "V"),
            output_voltage: format_range(self.voutmin, self.voutmax, "V"),
            output_current: format!("{}A", format_display_value(self.iout, 2)),
            frequency: format_range(self.freqmin, self.freqmax, "Hz"),
        })
    }
}

#[derive(Debug)]
pub enum ConverterError {
    Io(std::io::Error),
    InvalidNumber { field: String, value: String },
    InvalidTopology(u32),
}

impl fmt::Display for ConverterError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Io(error) => error.fmt(formatter),
            Self::InvalidNumber { field, value } => {
                write!(formatter, "The {field} value {value:?} is not valid.")
            }
            Self::InvalidTopology(code) => {
                write!(
                    formatter,
                    "Converter topology code {code} is not supported."
                )
            }
        }
    }
}

impl std::error::Error for ConverterError {}

impl From<std::io::Error> for ConverterError {
    fn from(error: std::io::Error) -> Self {
        Self::Io(error)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum RebuildState {
    Idle,
    Busy,
}

#[derive(Debug)]
pub struct Window {
    values: [String; NUMERIC_FIELD_COUNT],
    topology: Topology,
    manufacturers: Vec<String>,
    selected_manufacturer: usize,
    automotive: bool,
    pmbus: bool,
    rows: Vec<ConverterRow>,
    selected_row: Option<usize>,
    catalog_directory: PathBuf,
    examples_directory: PathBuf,
    selected_paths: Vec<PathBuf>,
    pending_example_names: Vec<String>,
    pending_missing_example: Option<String>,
    modal_result: u8,
    download_request: Option<&'static str>,
    rebuild_state: RebuildState,
    status: String,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: std::array::from_fn(|_| String::new()),
            topology: Topology::Buck,
            manufacturers: vec![ALL_MANUFACTURERS.to_owned()],
            selected_manufacturer: 0,
            automotive: false,
            pmbus: false,
            rows: Vec::new(),
            selected_row: None,
            catalog_directory: PathBuf::from("."),
            examples_directory: PathBuf::from("Examples"),
            selected_paths: Vec::new(),
            pending_example_names: Vec::new(),
            pending_missing_example: None,
            modal_result: 0,
            download_request: None,
            rebuild_state: RebuildState::Idle,
            status: STATUS.to_owned(),
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
    TopologySelected(Topology),
    ManufacturerSelected(String),
    AutomotiveToggled(bool),
    PmbusToggled(bool),
    Search,
    Open,
    RowSelected(usize),
    MissingExampleDecision(bool),
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::TextChanged(index, value) => {
                if let Some(field) = self.values.get_mut(index) {
                    *field = value;
                }
            }
            Message::TopologySelected(topology) => self.topology = topology,
            Message::ManufacturerSelected(manufacturer) => {
                if let Some(index) = self
                    .manufacturers
                    .iter()
                    .position(|candidate| candidate == &manufacturer)
                {
                    self.selected_manufacturer = index;
                }
            }
            Message::AutomotiveToggled(value) => self.automotive = value,
            Message::PmbusToggled(value) => self.pmbus = value,
            Message::Search => self.search_button_click(),
            Message::Open => self.begin_open_selected(),
            Message::RowSelected(index) => {
                if index < self.rows.len() {
                    self.selected_row = Some(index);
                }
            }
            Message::MissingExampleDecision(download) => {
                self.resolve_missing_example(download);
            }
        }
    }

    /// Implements Ghidra function `FUN_01c4a760` at `0x01C4A760`.
    ///
    /// The string is retained as trace data. `xmltree` does not provide `XPath`,
    /// so the search worker applies the same manufacturer restriction while it
    /// walks the element tree.
    #[must_use]
    pub fn manufacturer_query(&self) -> String {
        if self.manufacturers.len() <= 1 || self.selected_manufacturer == 0 {
            return "manufacturer/converter".to_owned();
        }
        let selected = self
            .manufacturers
            .get(self.selected_manufacturer)
            .map_or(ALL_MANUFACTURERS, String::as_str);
        format!("manufacturer[@name='{selected}']/converter")
    }

    /// Implements Ghidra function `FUN_01c4a8f0` at `0x01C4A8F0`.
    ///
    /// The existing `tiara-core` engineering parser supplies the optional
    /// numeric inputs. An empty iced text control disables only its test.
    ///
    /// # Errors
    ///
    /// Returns the first invalid nonempty numeric filter.
    fn matches_filters(&self, converter: &ConverterEntry) -> Result<bool, ConverterError> {
        let selected_topology = self.topology.code();
        if converter.topology_code & selected_topology != selected_topology {
            return Ok(false);
        }
        if self.automotive && !converter.automotive {
            return Ok(false);
        }
        if self.pmbus && !converter.pmbus {
            return Ok(false);
        }
        let minimum_input = optional_number(&self.values[0], "Min Input Voltage")?;
        let maximum_input = optional_number(&self.values[1], "Max Input Voltage")?;
        let output = optional_number(&self.values[2], "Output Voltage")?;
        let current = optional_number(&self.values[3], "Max Output Current")?;
        let minimum_frequency = optional_number(&self.values[4], "Min Frequency")?;
        let maximum_frequency = optional_number(&self.values[5], "Max Frequency")?;
        Ok(minimum_input.is_none_or(|value| converter.vinmin <= value)
            && maximum_input.is_none_or(|value| value <= converter.vinmax)
            && output.is_none_or(|value| converter.voutmin <= value && value <= converter.voutmax)
            && current.is_none_or(|value| value <= converter.iout)
            && minimum_frequency.is_none_or(|value| converter.freqmin <= value)
            && maximum_frequency.is_none_or(|value| value <= converter.freqmax))
    }

    /// Implements Ghidra function `FUN_01c4aec0` at `0x01C4AEC0`.
    ///
    /// The iced state machine sets the modal result before it rebuilds the
    /// selected path list. It resolves CRLF-separated names under the Examples
    /// directory and pauses on each missing file for a user decision.
    pub fn begin_open_selected(&mut self) {
        self.begin_open_selected_with(Path::exists);
    }

    fn begin_open_selected_with(&mut self, path_exists: impl Fn(&Path) -> bool) {
        self.modal_result = 1;
        self.selected_paths.clear();
        self.pending_example_names.clear();
        self.pending_missing_example = None;
        self.download_request = None;
        let Some(row) = self.selected_row.and_then(|index| self.rows.get(index)) else {
            return;
        };
        self.pending_example_names = row
            .file_names
            .split(EXAMPLE_FILE_SEPARATOR)
            .map(str::trim)
            .filter(|name| !name.is_empty())
            .map(str::to_owned)
            .collect();
        self.process_examples_until_missing(&path_exists);
    }

    /// Implements Ghidra function `FUN_01c4b320` at `0x01C4B320`.
    ///
    /// This iced event wrapper delegates the complete operation to the shared
    /// catalog worker and only converts an error into status text.
    pub fn search_button_click(&mut self) {
        let directory = self.catalog_directory.clone();
        match self.search_catalog(&directory) {
            Ok(_) => STATUS.clone_into(&mut self.status),
            Err(error) => self.status = error.to_string(),
        }
    }

    /// Implements Ghidra function `FUN_01c4b330` at `0x01C4B330`.
    ///
    /// Standard-library binary search uses Unicode lowercase keys to provide a
    /// deterministic case-insensitive Manufacturer-then-Name order.
    #[must_use]
    pub fn find_insertion_index(rows: &[ConverterRow], manufacturer: &str, name: &str) -> usize {
        rows.binary_search_by(|row| compare_row(row, manufacturer, name))
            .unwrap_or_else(|index| index)
    }

    /// Implements Ghidra function `FUN_01c4b490` at `0x01C4B490`.
    ///
    /// `Vec::insert` supplies the recovered downward row shift and writes the
    /// new owned row into the requested position.
    pub fn insert_row(rows: &mut Vec<ConverterRow>, index: usize, row: ConverterRow) {
        rows.insert(index.min(rows.len()), row);
    }

    /// Implements Ghidra function `FUN_01c4b500` at `0x01C4B500`.
    ///
    /// `std::fs` selects the extended catalog when it exists, and `xmltree`
    /// supplies the maintained XML traversal. The method clears prior results,
    /// populates manufacturer choices once, filters and sorts matching rows,
    /// and selects the first row on normal completion.
    ///
    /// # Errors
    ///
    /// Returns a file, numeric, or unsupported-topology error. These errors
    /// retain the recovered partial busy and redraw-disabled state.
    pub fn search_catalog(&mut self, directory: &Path) -> Result<usize, ConverterError> {
        let path = select_catalog_path(directory, directory.join(EXTENDED_CATALOG_FILE).exists());
        self.begin_rebuild();
        let file = File::open(path)?;
        self.rebuild_from_reader_after_begin(file)
    }

    #[cfg(test)]
    fn rebuild_from_reader(&mut self, reader: impl Read) -> Result<usize, ConverterError> {
        self.begin_rebuild();
        self.rebuild_from_reader_after_begin(reader)
    }

    fn rebuild_from_reader_after_begin(
        &mut self,
        reader: impl Read,
    ) -> Result<usize, ConverterError> {
        let Ok(document) = XmlElement::parse(reader) else {
            self.finish_rebuild();
            return Ok(0);
        };
        let manufacturers = manufacturer_elements(&document);
        if self.manufacturers.len() == 1 {
            self.manufacturers.extend(
                manufacturers
                    .iter()
                    .map(|manufacturer| attribute(manufacturer, "name").to_owned()),
            );
        }
        let selected_manufacturer = if self.manufacturer_query() == "manufacturer/converter" {
            ALL_MANUFACTURERS.to_owned()
        } else {
            self.manufacturers
                .get(self.selected_manufacturer)
                .map_or(ALL_MANUFACTURERS, String::as_str)
                .to_owned()
        };
        for manufacturer in manufacturers {
            let manufacturer_name = attribute(manufacturer, "name");
            if selected_manufacturer != ALL_MANUFACTURERS
                && selected_manufacturer != manufacturer_name
            {
                continue;
            }
            for converter in child_elements(manufacturer, "converter") {
                let entry = ConverterEntry::from_xml(manufacturer, converter)?;
                if self.matches_filters(&entry)? {
                    let row = entry.into_row()?;
                    let index =
                        Self::find_insertion_index(&self.rows, &row.manufacturer, &row.name);
                    Self::insert_row(&mut self.rows, index, row);
                }
            }
        }
        self.finish_rebuild();
        Ok(self.rows.len())
    }

    fn begin_rebuild(&mut self) {
        self.rebuild_state = RebuildState::Busy;
        self.rows.clear();
        self.selected_row = None;
    }

    fn finish_rebuild(&mut self) {
        self.rebuild_state = RebuildState::Idle;
        self.selected_row = (!self.rows.is_empty()).then_some(0);
    }

    fn resolve_missing_example(&mut self, download: bool) {
        self.resolve_missing_example_with(download, Path::exists);
    }

    fn resolve_missing_example_with(
        &mut self,
        download: bool,
        path_exists: impl Fn(&Path) -> bool,
    ) {
        if self.pending_missing_example.take().is_none() {
            return;
        }
        if download {
            self.download_request = Some(CONVERTER_ADD_ON_URL);
        } else {
            self.modal_result = 0;
        }
        self.process_examples_until_missing(&path_exists);
    }

    fn process_examples_until_missing(&mut self, path_exists: &impl Fn(&Path) -> bool) {
        while !self.pending_example_names.is_empty() {
            let name = self.pending_example_names.remove(0);
            let path = self.examples_directory.join(&name);
            if path_exists(&path) {
                self.selected_paths.push(path);
            } else {
                self.pending_missing_example = Some(name);
                return;
            }
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = converter_toolbar();
        let controls = self.filter_controls();
        let results = self.result_grid();
        let body: Element<'_, Message> = container(
            column![controls, results]
                .spacing(12)
                .width(Length::Fill)
                .height(Length::Fill),
        )
        .padding(18)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();
        window_shell::frame(TITLE, menu, toolbar, body, &self.status)
    }

    fn filter_controls(&self) -> Element<'_, Message> {
        let mut controls = column![
            labeled_pick_list(
                "Manufacturer",
                self.manufacturers.as_slice(),
                self.manufacturers.get(self.selected_manufacturer).cloned(),
                Message::ManufacturerSelected,
            ),
            labeled_pick_list(
                "Topology",
                &Topology::ALL,
                Some(self.topology),
                Message::TopologySelected,
            ),
        ]
        .spacing(8);
        let labels = [
            "Min Input Voltage",
            "Max Input Voltage",
            "Output Voltage",
            "Max Output Current",
            "Min Frequency",
            "Max Frequency",
        ];
        for (index, label) in labels.into_iter().enumerate() {
            controls = controls.push(labeled_text_input(label, &self.values[index], index));
        }
        controls = controls.push(
            row![
                checkbox("Automotive", self.automotive).on_toggle(Message::AutomotiveToggled),
                checkbox("PMBus", self.pmbus).on_toggle(Message::PmbusToggled),
            ]
            .spacing(12),
        );
        if let Some(name) = &self.pending_missing_example {
            controls = controls.push(
                column![
                    text(format!(
                        "Example {name:?} is missing. Download the converter add-on?"
                    )),
                    row![
                        button("Yes").on_press(Message::MissingExampleDecision(true)),
                        button("No").on_press(Message::MissingExampleDecision(false)),
                    ]
                    .spacing(8),
                ]
                .spacing(4),
            );
        }
        controls.into()
    }

    fn result_grid(&self) -> Element<'_, Message> {
        let mut grid = column![
            row![
                text("Manufacturer").width(Length::FillPortion(2)),
                text("Name").width(Length::FillPortion(2)),
                text("Topology").width(Length::FillPortion(1)),
                text("Vin").width(Length::FillPortion(2)),
                text("Vout").width(Length::FillPortion(2)),
                text("Iout").width(Length::FillPortion(1)),
                text("Frequency").width(Length::FillPortion(2)),
            ]
            .spacing(6)
        ]
        .spacing(4);
        for (index, converter) in self.rows.iter().enumerate() {
            let summary = format!(
                "{} | {} | {} | {} | {} | {} | {}",
                converter.manufacturer,
                converter.name,
                converter.topology,
                converter.input_voltage,
                converter.output_voltage,
                converter.output_current,
                converter.frequency,
            );
            grid = grid.push(button(text(summary)).on_press(Message::RowSelected(index)));
        }
        scrollable(grid).height(Length::Fill).into()
    }
}

fn select_catalog_path(directory: &Path, extended_exists: bool) -> PathBuf {
    directory.join(if extended_exists {
        EXTENDED_CATALOG_FILE
    } else {
        BASE_CATALOG_FILE
    })
}

fn manufacturer_elements(document: &XmlElement) -> Vec<&XmlElement> {
    if document.name == "manufacturer" {
        vec![document]
    } else {
        child_elements(document, "manufacturer")
    }
}

fn child_elements<'a>(element: &'a XmlElement, name: &str) -> Vec<&'a XmlElement> {
    element
        .children
        .iter()
        .filter_map(|child| match child {
            XMLNode::Element(element) if element.name == name => Some(element),
            _ => None,
        })
        .collect()
}

fn attribute<'a>(element: &'a XmlElement, name: &str) -> &'a str {
    element.attributes.get(name).map_or("", String::as_str)
}

fn integer_attribute(element: &XmlElement, name: &str, default: u32) -> u32 {
    element
        .attributes
        .get(name)
        .and_then(|value| value.parse().ok())
        .unwrap_or(default)
}

fn numeric_attribute(element: &XmlElement, name: &str) -> Result<f64, ConverterError> {
    let value = element.attributes.get(name).map_or("0", String::as_str);
    parse_engineering_number(value).map_err(|_| ConverterError::InvalidNumber {
        field: name.to_owned(),
        value: value.to_owned(),
    })
}

fn optional_number(source: &str, field: &str) -> Result<Option<f64>, ConverterError> {
    if source.is_empty() {
        return Ok(None);
    }
    parse_engineering_number(source)
        .map(Some)
        .map_err(|_| ConverterError::InvalidNumber {
            field: field.to_owned(),
            value: source.to_owned(),
        })
}

fn compare_row(row: &ConverterRow, manufacturer: &str, name: &str) -> Ordering {
    row.manufacturer
        .to_lowercase()
        .cmp(&manufacturer.to_lowercase())
        .then_with(|| row.name.to_lowercase().cmp(&name.to_lowercase()))
}

fn format_range(minimum: f64, maximum: f64, unit: &str) -> String {
    format!(
        "{}{unit} - {}{unit}",
        format_display_value(minimum, 2),
        format_display_value(maximum, 2)
    )
}

fn converter_toolbar<'a>() -> Element<'a, Message> {
    container(
        row![
            button("Search").on_press(Message::Search),
            button("Open").on_press(Message::Open),
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
    selected: Option<T>,
    on_selected: impl Fn(T) -> Message + 'a,
) -> Element<'a, Message>
where
    T: ToString + PartialEq + Clone + 'a,
{
    row![
        text(label).width(Length::FillPortion(2)),
        pick_list(options, selected, on_selected).width(Length::FillPortion(3)),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
    .into()
}

fn labeled_text_input<'a>(label: &'a str, value: &'a str, index: usize) -> Element<'a, Message> {
    row![
        text(label).width(Length::FillPortion(2)),
        text_input("", value)
            .on_input(move |value| Message::TextChanged(index, value))
            .width(Length::FillPortion(3)),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
    .into()
}

#[cfg(test)]
mod tests {
    use super::*;

    const CATALOG: &str = r#"
        <catalog>
          <manufacturer name="Zeta">
            <converter name="Second" topology="3" auto="1" pmbus="1"
              vinmin="5" vinmax="20" voutmin="1" voutmax="10"
              iout="4" freqmin="100k" freqmax="1M">second.tsc</converter>
          </manufacturer>
          <manufacturer name="alpha">
            <converter name="First" topology="1"
              vinmin="3" vinmax="12" voutmin="1" voutmax="5"
              iout="2" freqmin="50k" freqmax="500k">first.tsc</converter>
          </manufacturer>
        </catalog>
    "#;

    #[test]
    fn manufacturer_query_uses_all_or_selected_name() {
        let mut window = Window::default();
        assert_eq!(window.manufacturer_query(), "manufacturer/converter");
        window.manufacturers.push("Zeta".to_owned());
        window.selected_manufacturer = 1;
        assert_eq!(
            window.manufacturer_query(),
            "manufacturer[@name='Zeta']/converter"
        );
    }

    #[test]
    fn filter_applies_topology_flags_and_only_nonempty_limits() {
        let mut window = Window {
            values: ["10", "15", "5", "3", "200k", "800k"].map(str::to_owned),
            topology: Topology::Boost,
            automotive: true,
            pmbus: true,
            ..Window::default()
        };
        let document = XmlElement::parse(CATALOG.as_bytes()).expect("parse catalog");
        let manufacturer = manufacturer_elements(&document)[0];
        let converter =
            ConverterEntry::from_xml(manufacturer, child_elements(manufacturer, "converter")[0])
                .expect("parse converter");
        assert!(window.matches_filters(&converter).expect("valid filters"));
        "5".clone_into(&mut window.values[3]);
        assert!(!window.matches_filters(&converter).expect("valid filters"));
    }

    #[test]
    fn open_prepares_existing_paths_and_keeps_partial_state_after_decline() {
        let mut window = Window {
            examples_directory: PathBuf::from("Examples"),
            ..Window::default()
        };
        window
            .rows
            .push(row("Maker", "Part", "existing.tsc\r\nmissing.tsc"));
        window.selected_row = Some(0);

        window.begin_open_selected_with(|path| path.ends_with("existing.tsc"));

        assert_eq!(window.modal_result, 1);
        assert_eq!(
            window.selected_paths,
            [PathBuf::from("Examples/existing.tsc")]
        );
        assert_eq!(
            window.pending_missing_example.as_deref(),
            Some("missing.tsc")
        );

        window.resolve_missing_example_with(false, |_| false);

        assert_eq!(window.modal_result, 0);
        assert_eq!(
            window.selected_paths,
            [PathBuf::from("Examples/existing.tsc")]
        );
        assert!(window.pending_missing_example.is_none());
    }

    #[test]
    fn open_without_a_data_row_accepts_an_empty_path_list() {
        let mut window = Window::default();
        window.begin_open_selected();
        assert_eq!(window.modal_result, 1);
        assert!(window.selected_paths.is_empty());
    }

    #[test]
    fn accepting_missing_example_download_keeps_the_accept_result() {
        let mut window = Window::default();
        window.rows.push(row("Maker", "Part", "missing.tsc"));
        window.selected_row = Some(0);
        window.begin_open_selected_with(|_| false);

        window.resolve_missing_example_with(true, |_| false);

        assert_eq!(window.modal_result, 1);
        assert_eq!(window.download_request, Some(CONVERTER_ADD_ON_URL));
        assert!(window.selected_paths.is_empty());
    }

    #[test]
    fn binary_insertion_is_case_insensitive_by_manufacturer_then_name() {
        let rows = vec![row("alpha", "A", "a"), row("Beta", "A", "b")];
        assert_eq!(Window::find_insertion_index(&rows, "ALPHA", "B"), 1);
        assert_eq!(Window::find_insertion_index(&rows, "aardvark", "Z"), 0);
    }

    #[test]
    fn vec_insert_shifts_existing_rows_down() {
        let mut rows = vec![row("A", "One", "1"), row("C", "Three", "3")];
        Window::insert_row(&mut rows, 1, row("B", "Two", "2"));
        assert_eq!(
            rows.iter().map(|row| row.name.as_str()).collect::<Vec<_>>(),
            ["One", "Two", "Three"]
        );
    }

    #[test]
    fn search_worker_rebuilds_sorts_populates_and_selects_first_row() {
        let mut window = Window::default();
        let count = window
            .rebuild_from_reader(CATALOG.as_bytes())
            .expect("search catalog");
        assert_eq!(count, 2);
        assert_eq!(window.manufacturers, [ALL_MANUFACTURERS, "Zeta", "alpha"]);
        assert_eq!(window.rows[0].manufacturer, "alpha");
        assert_eq!(window.rows[1].manufacturer, "Zeta");
        assert_eq!(window.selected_row, Some(0));
        assert_eq!(window.rebuild_state, RebuildState::Idle);

        window.topology = Topology::Boost;
        let count = window
            .rebuild_from_reader(CATALOG.as_bytes())
            .expect("repeat search");
        assert_eq!(count, 1);
        assert_eq!(window.rows[0].name, "Second");
    }

    #[test]
    fn reported_xml_failure_finishes_with_header_only_state() {
        let mut window = Window::default();
        let count = window
            .rebuild_from_reader(b"not xml".as_slice())
            .expect("reported XML failure");
        assert_eq!(count, 0);
        assert!(window.rows.is_empty());
        assert!(window.selected_row.is_none());
        assert_eq!(window.rebuild_state, RebuildState::Idle);
    }

    #[test]
    fn extended_catalog_path_wins_when_present() {
        assert_eq!(
            select_catalog_path(Path::new("data"), true),
            PathBuf::from("data").join(EXTENDED_CATALOG_FILE)
        );
        assert_eq!(
            select_catalog_path(Path::new("data"), false),
            PathBuf::from("data").join(BASE_CATALOG_FILE)
        );
    }

    fn row(manufacturer: &str, name: &str, file_names: &str) -> ConverterRow {
        ConverterRow {
            file_names: file_names.to_owned(),
            manufacturer: manufacturer.to_owned(),
            name: name.to_owned(),
            topology: Topology::Buck,
            input_voltage: String::new(),
            output_voltage: String::new(),
            output_current: String::new(),
            frequency: String::new(),
        }
    }
}
