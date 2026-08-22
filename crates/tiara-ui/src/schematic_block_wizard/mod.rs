use std::fmt;
use std::fs;
use std::io;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, horizontal_space, pick_list, row, scrollable, text};
use iced::{Alignment, Element, Length};
use rfd::AsyncFileDialog;
use tiara_core::touchstone::{
    SParameterCandidate, TouchstoneParseError, parse_touchstone_s_parameters,
};

use crate::shared::window_shell;

pub const TITLE: &str = "S block wizard";
pub const FORM_RESOURCE: &str = "frmSBlockWizard";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01ba67e0");
const STATUS: &str = "Create an S-parameter block";
const TOOLBAR: &[&str] = &[];
const ALL_LIBRARIES: &str = "All";
const GROUND_PIN: &str = "*GND*";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum PortMode {
    #[default]
    S1P,
    S2P,
    S3P,
    S4P,
    S5P,
    S6P,
    S7P,
    S8P,
}

impl PortMode {
    pub const ALL: [Self; 8] = [
        Self::S1P,
        Self::S2P,
        Self::S3P,
        Self::S4P,
        Self::S5P,
        Self::S6P,
        Self::S7P,
        Self::S8P,
    ];

    /// Maps the recovered combo-box index to its candidate.
    ///
    /// Ghidra function `FUN_01ba66d0` at `0x01BA66D0` selects S1P through
    /// S7P for indexes zero through six and uses the S8P candidate for every
    /// other index.
    #[must_use]
    pub const fn from_selection(index: usize) -> Self {
        match index {
            0 => Self::S1P,
            1 => Self::S2P,
            2 => Self::S3P,
            3 => Self::S4P,
            4 => Self::S5P,
            5 => Self::S6P,
            6 => Self::S7P,
            _ => Self::S8P,
        }
    }

    #[must_use]
    pub const fn port_count(self) -> usize {
        self.index() + 1
    }

    #[must_use]
    pub const fn extension(self) -> &'static str {
        match self {
            Self::S1P => "s1p",
            Self::S2P => "s2p",
            Self::S3P => "s3p",
            Self::S4P => "s4p",
            Self::S5P => "s5p",
            Self::S6P => "s6p",
            Self::S7P => "s7p",
            Self::S8P => "s8p",
        }
    }

    const fn index(self) -> usize {
        match self {
            Self::S1P => 0,
            Self::S2P => 1,
            Self::S3P => 2,
            Self::S4P => 3,
            Self::S5P => 4,
            Self::S6P => 5,
            Self::S7P => 6,
            Self::S8P => 7,
        }
    }
}

impl fmt::Display for PortMode {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(formatter, "S{}P", self.port_count())
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SchematicShape {
    pub name: String,
    pub library: String,
    pub pin_names: Vec<String>,
}

impl SchematicShape {
    #[must_use]
    pub fn new(
        name: impl Into<String>,
        library: impl Into<String>,
        pin_names: Vec<String>,
    ) -> Self {
        Self {
            name: name.into(),
            library: library.into(),
            pin_names,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PinTarget {
    Ground,
    ShapePinIndex(usize),
}

#[derive(Debug, Clone, PartialEq)]
pub struct SBlockCandidate {
    pub mode: PortMode,
    pub parameters: SParameterCandidate,
    pub shape: Option<SchematicShape>,
    pub terminal_mapping: Vec<PinTarget>,
}

impl SBlockCandidate {
    fn new(mode: PortMode) -> Self {
        Self {
            mode,
            parameters: SParameterCandidate::default(),
            shape: None,
            terminal_mapping: Vec::new(),
        }
    }
}

/// Applies a shape and the grid pin values to one mode candidate.
///
/// This ports Ghidra function `FUN_01ba5ef0` at `0x01BA5EF0`. Ground is kept
/// as a distinct value. The recovered linear lookup returns the pin count when
/// a non-ground value is absent, so this function preserves that sentinel.
pub fn apply_shape_and_pins(
    shape: &SchematicShape,
    grid_values: &[String],
    candidate: &mut SBlockCandidate,
) {
    candidate.shape = Some(shape.clone());
    candidate.terminal_mapping = grid_values
        .iter()
        .map(|value| {
            if value == GROUND_PIN {
                PinTarget::Ground
            } else {
                let index = shape
                    .pin_names
                    .iter()
                    .position(|pin_name| pin_name == value)
                    .unwrap_or(shape.pin_names.len());
                PinTarget::ShapePinIndex(index)
            }
        })
        .collect();
}

/// Returns the mode candidate selected by a recovered combo-box index.
///
/// Indexes outside zero through six use the S8P fallback, as in Ghidra
/// function `FUN_01ba66d0` at `0x01BA66D0`.
#[must_use]
pub const fn candidate_for_selection(
    candidates: &[SBlockCandidate; 8],
    selection: usize,
) -> &SBlockCandidate {
    &candidates[PortMode::from_selection(selection).index()]
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Readiness {
    Blocked,
    Ready,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum LoadState {
    NotLoaded,
    Loaded(PathBuf),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum Disposition {
    Pending,
    Accepted,
}

#[derive(Debug)]
pub enum LoadError {
    Io(io::Error),
    Touchstone(TouchstoneParseError),
}

impl fmt::Display for LoadError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Io(error) => write!(formatter, "Cannot read the S-parameter file: {error}"),
            Self::Touchstone(error) => error.fmt(formatter),
        }
    }
}

impl std::error::Error for LoadError {
    fn source(&self) -> Option<&(dyn std::error::Error + 'static)> {
        match self {
            Self::Io(error) => Some(error),
            Self::Touchstone(error) => Some(error),
        }
    }
}

impl From<io::Error> for LoadError {
    fn from(error: io::Error) -> Self {
        Self::Io(error)
    }
}

impl From<TouchstoneParseError> for LoadError {
    fn from(error: TouchstoneParseError) -> Self {
        Self::Touchstone(error)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AcceptError {
    ShapeUnavailable,
}

impl fmt::Display for AcceptError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str("No filtered schematic shape is selected.")
    }
}

impl std::error::Error for AcceptError {}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct LoadRequest {
    pub mode: PortMode,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Action {
    None,
    LoadRequested(LoadRequest),
    Accepted,
    Cancelled,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ShapeChoice {
    catalog_index: usize,
    label: String,
}

impl fmt::Display for ShapeChoice {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(&self.label)
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    ModeSelected(PortMode),
    LibrarySelected(String),
    PinCountSelected(usize),
    ShapeSelected(ShapeChoice),
    MappingSelected(usize, String),
    Load,
    Accept,
    Cancel,
    Idle,
    NoOp,
}

#[derive(Debug, Clone)]
pub struct Window {
    mode: PortMode,
    candidates: [SBlockCandidate; 8],
    shapes: Vec<SchematicShape>,
    library_filter: Option<String>,
    pin_count_choices: Vec<usize>,
    pin_count_filter: usize,
    visible_shape_indices: Vec<usize>,
    selected_shape_index: Option<usize>,
    grid_values: Vec<String>,
    load_state: LoadState,
    readiness: Readiness,
    disposition: Disposition,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(Vec::new())
    }
}

impl Window {
    #[must_use]
    pub fn new(shapes: Vec<SchematicShape>) -> Self {
        let mut window = Self {
            mode: PortMode::S1P,
            candidates: std::array::from_fn(|index| {
                SBlockCandidate::new(PortMode::from_selection(index))
            }),
            shapes,
            library_filter: None,
            pin_count_choices: Vec::new(),
            pin_count_filter: 0,
            visible_shape_indices: Vec::new(),
            selected_shape_index: None,
            grid_values: Vec::new(),
            load_state: LoadState::NotLoaded,
            readiness: Readiness::Blocked,
            disposition: Disposition::Pending,
        };
        window.configure_mode(PortMode::S1P);
        window
    }

    /// Applies one GUI message to the wizard state.
    ///
    /// `LoadRequested` lets the application execute the native dialog and then
    /// call [`Self::load_path`].
    ///
    /// # Errors
    ///
    /// Returns [`AcceptError::ShapeUnavailable`] if an accept message arrives
    /// without a selected filtered shape.
    pub fn update(&mut self, message: Message) -> Result<Action, AcceptError> {
        match message {
            Message::ModeSelected(mode) => self.configure_mode(mode),
            Message::LibrarySelected(library) => {
                let filter = (library != ALL_LIBRARIES).then_some(library);
                self.set_library_filter(filter);
            }
            Message::PinCountSelected(pin_count) => self.set_pin_count_filter(pin_count),
            Message::ShapeSelected(choice) => self.select_shape(choice.catalog_index),
            Message::MappingSelected(row, value) => self.set_mapping(row, value),
            Message::Load => {
                return Ok(Action::LoadRequested(LoadRequest { mode: self.mode }));
            }
            Message::Accept => {
                self.accept()?;
                return Ok(Action::Accepted);
            }
            Message::Cancel => return Ok(Action::Cancelled),
            Message::Idle => self.update_readiness(),
            Message::NoOp => {}
        }
        Ok(Action::None)
    }

    /// Rebuilds mode-dependent file, grid, pin-count, and shape state.
    ///
    /// This ports Ghidra function `FUN_01ba7bb0` at `0x01BA7BB0`. It preserves
    /// the loaded-file state because the recovered handler does not clear it.
    pub fn configure_mode(&mut self, mode: PortMode) {
        self.mode = mode;
        let port_count = mode.port_count();
        self.grid_values = vec![String::new(); mapping_row_count(mode)];
        self.pin_count_choices = if port_count < 3 {
            (2..=port_count * 2).collect()
        } else {
            vec![port_count]
        };
        self.pin_count_filter = self.pin_count_choices[0];
        self.refresh_shapes();
    }

    /// Filters the catalog by the selected pin count and optional library.
    ///
    /// This ports Ghidra function `FUN_01ba64e0` at `0x01BA64E0`. The first
    /// matching shape becomes selected, all grid mappings are cleared, and the
    /// accept readiness is reset.
    pub fn refresh_shapes(&mut self) {
        self.visible_shape_indices = self
            .shapes
            .iter()
            .enumerate()
            .filter(|(_, shape)| {
                shape.pin_names.len() == self.pin_count_filter
                    && self
                        .library_filter
                        .as_ref()
                        .is_none_or(|library| shape.library == *library)
            })
            .map(|(index, _)| index)
            .collect();
        self.selected_shape_index = self.visible_shape_indices.first().copied();
        self.grid_values.fill(String::new());
        self.readiness = Readiness::Blocked;
    }

    pub fn set_library_filter(&mut self, library: Option<String>) {
        self.library_filter = library;
        self.refresh_shapes();
    }

    pub fn set_pin_count_filter(&mut self, pin_count: usize) {
        if self.pin_count_choices.contains(&pin_count) {
            self.pin_count_filter = pin_count;
            self.refresh_shapes();
        }
    }

    pub fn select_shape(&mut self, catalog_index: usize) {
        if self.visible_shape_indices.contains(&catalog_index) {
            self.selected_shape_index = Some(catalog_index);
            self.grid_values.fill(String::new());
            self.readiness = Readiness::Blocked;
        }
    }

    pub fn set_mapping(&mut self, row: usize, value: String) {
        if let Some(mapping) = self.grid_values.get_mut(row) {
            *mapping = value;
            self.update_readiness();
        }
    }

    /// Loads and parses text into the candidate for the active mode.
    ///
    /// This ports the accepted-file path in Ghidra function `FUN_01ba7870` at
    /// `0x01BA7870`. The shared clean-room Touchstone parser implements
    /// `FUN_017002a0`; the active mode supplies port counts one through eight.
    /// The path and loaded state change only after parsing succeeds.
    ///
    /// # Errors
    ///
    /// Returns the shared Touchstone parser error.
    pub fn load_text(
        &mut self,
        path: impl Into<PathBuf>,
        contents: &str,
    ) -> Result<(), TouchstoneParseError> {
        let lines = contents.lines().map(str::to_owned).collect::<Vec<_>>();
        let mode = self.mode;
        parse_touchstone_s_parameters(
            &lines,
            mode.port_count(),
            &mut self.candidates[mode.index()].parameters,
        )?;
        self.load_state = LoadState::Loaded(path.into());
        self.update_readiness();
        Ok(())
    }

    /// Reads and parses the selected S-parameter file.
    ///
    /// # Errors
    ///
    /// Returns a file read error or the shared Touchstone parser error.
    pub fn load_path(&mut self, path: &Path) -> Result<(), LoadError> {
        let contents = fs::read_to_string(path)?;
        self.load_text(path, &contents)?;
        Ok(())
    }

    /// Applies the selected shape mapping and transfers candidate ownership.
    ///
    /// This ports `btnOKClick`, Ghidra function `FUN_01ba7720` at
    /// `0x01BA7720`. The recovered handler trusts the idle-time readiness check
    /// and does not insert the candidate into a schematic.
    ///
    /// # Errors
    ///
    /// Returns [`AcceptError::ShapeUnavailable`] if no catalog shape is
    /// selected.
    pub fn accept(&mut self) -> Result<(), AcceptError> {
        let shape = self
            .selected_shape_index
            .and_then(|index| self.shapes.get(index))
            .ok_or(AcceptError::ShapeUnavailable)?;
        apply_shape_and_pins(
            shape,
            &self.grid_values,
            &mut self.candidates[self.mode.index()],
        );
        self.disposition = Disposition::Accepted;
        Ok(())
    }

    /// Consumes the form and returns only an accepted mode candidate.
    ///
    /// This is the ownership-safe Rust port of `FormDestroy`, Ghidra function
    /// `FUN_01ba6e80` at `0x01BA6E80`. Rust drops all candidates on cancel. On
    /// accept, this method moves out the selected candidate and drops the other
    /// seven, plus the owned shape and file collections.
    #[must_use]
    pub fn into_accepted_candidate(self) -> Option<SBlockCandidate> {
        if self.disposition == Disposition::Accepted {
            self.candidates.into_iter().nth(self.mode.index())
        } else {
            None
        }
    }

    /// Recomputes OK readiness from the loaded flag and every mapping cell.
    ///
    /// This ports Ghidra idle handler `FUN_01ba8a80` at `0x01BA8A80`.
    pub fn update_readiness(&mut self) {
        self.readiness = if matches!(self.load_state, LoadState::Loaded(_))
            && self.grid_values.iter().all(|value| !value.is_empty())
        {
            Readiness::Ready
        } else {
            Readiness::Blocked
        };
    }

    #[must_use]
    pub const fn mode(&self) -> PortMode {
        self.mode
    }

    #[must_use]
    pub fn load_button_text(&self) -> String {
        format!("Load S parameter file ({})...", self.mode)
    }

    #[must_use]
    pub const fn pin_count_filter_enabled(&self) -> bool {
        self.mode.port_count() == 2
    }

    #[must_use]
    pub fn pin_count_choices(&self) -> &[usize] {
        &self.pin_count_choices
    }

    #[must_use]
    pub const fn pin_count_filter(&self) -> usize {
        self.pin_count_filter
    }

    #[must_use]
    pub fn grid_values(&self) -> &[String] {
        &self.grid_values
    }

    #[must_use]
    pub const fn load_state(&self) -> &LoadState {
        &self.load_state
    }

    #[must_use]
    pub const fn readiness(&self) -> Readiness {
        self.readiness
    }

    #[must_use]
    pub const fn selected_candidate(&self) -> &SBlockCandidate {
        &self.candidates[self.mode.index()]
    }

    #[must_use]
    pub fn visible_shapes(&self) -> Vec<&SchematicShape> {
        self.visible_shape_indices
            .iter()
            .filter_map(|index| self.shapes.get(*index))
            .collect()
    }

    #[must_use]
    pub fn available_pin_names(&self) -> Vec<String> {
        let mut values = self
            .selected_shape_index
            .and_then(|index| self.shapes.get(index))
            .map_or_else(Vec::new, |shape| shape.pin_names.clone());
        if self.mode == PortMode::S2P {
            values.push(GROUND_PIN.to_owned());
        }
        values
    }

    #[must_use]
    pub fn status_text(&self) -> String {
        match &self.load_state {
            LoadState::NotLoaded => "not loaded".to_owned(),
            LoadState::Loaded(path) => path.display().to_string(),
        }
    }

    /// Builds the recovered S-block mode, shape, mapping, load, and modal
    /// controls with iced widgets.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let libraries = library_choices(&self.shapes);
        let selected_library = self
            .library_filter
            .clone()
            .unwrap_or_else(|| ALL_LIBRARIES.to_owned());
        let shape_choices = self.shape_choices();
        let selected_shape = self.selected_shape_index.and_then(|selected| {
            shape_choices
                .iter()
                .find(|choice| choice.catalog_index == selected)
                .cloned()
        });
        let available_pins = self.available_pin_names();
        let mappings = self.grid_values.iter().enumerate().fold(
            column![].spacing(6),
            |mappings, (index, value)| {
                mappings.push(
                    row![
                        text(format!("Mapping {}", index + 1)).width(Length::FillPortion(2)),
                        pick_list(available_pins.clone(), Some(value.clone()), move |pin| {
                            Message::MappingSelected(index, pin)
                        })
                        .placeholder("Select pin")
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                )
            },
        );
        let mut accept_button = button("OK");
        if self.readiness == Readiness::Ready {
            accept_button = accept_button.on_press(Message::Accept);
        }
        let body: Element<'_, Message> = container(
            column![
                row![
                    text("Mode").width(Length::FillPortion(2)),
                    pick_list(PortMode::ALL, Some(self.mode), Message::ModeSelected)
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Shape library").width(Length::FillPortion(2)),
                    pick_list(libraries, Some(selected_library), Message::LibrarySelected)
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Shape").width(Length::FillPortion(2)),
                    pick_list(shape_choices, selected_shape, Message::ShapeSelected)
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Number of pins").width(Length::FillPortion(2)),
                    pick_list(
                        self.pin_count_choices.clone(),
                        Some(self.pin_count_filter),
                        Message::PinCountSelected,
                    )
                    .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                text("Pair the terminals of the S block with the pins of the shape"),
                scrollable(mappings).height(Length::Fill),
                row![
                    text("S parameter file:"),
                    text(self.status_text()),
                    horizontal_space(),
                    button(text(self.load_button_text())).on_press(Message::Load),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    horizontal_space(),
                    accept_button,
                    button("Cancel").on_press(Message::Cancel),
                    button("Help").on_press(Message::NoOp),
                ]
                .spacing(8),
            ]
            .spacing(10),
        )
        .padding(18)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(
            TITLE,
            window_shell::empty_menu(),
            window_shell::toolbar(TOOLBAR, Message::NoOp),
            body,
            STATUS,
        )
    }

    fn shape_choices(&self) -> Vec<ShapeChoice> {
        self.visible_shape_indices
            .iter()
            .filter_map(|index| {
                self.shapes.get(*index).map(|shape| ShapeChoice {
                    catalog_index: *index,
                    label: shape.name.clone(),
                })
            })
            .collect()
    }
}

/// Opens the maintained native file picker for the active Touchstone mode.
///
/// The caller supplies the application folder that corresponds to recovered
/// folder ID 5. Cancellation returns `None` without changing wizard state.
pub async fn select_parameter_path(
    request: LoadRequest,
    initial_folder: Option<PathBuf>,
) -> Option<PathBuf> {
    let filter_name = format!("{} files", request.mode);
    let dialog = AsyncFileDialog::new().add_filter(filter_name, &[request.mode.extension()]);
    let dialog = if let Some(folder) = initial_folder {
        dialog.set_directory(folder)
    } else {
        dialog
    };
    dialog
        .pick_file()
        .await
        .map(|handle| handle.path().to_path_buf())
}

const fn mapping_row_count(mode: PortMode) -> usize {
    let port_count = mode.port_count();
    if port_count < 3 {
        port_count * 2
    } else {
        port_count
    }
}

fn library_choices(shapes: &[SchematicShape]) -> Vec<String> {
    let mut libraries = vec![ALL_LIBRARIES.to_owned()];
    for shape in shapes {
        if !libraries.contains(&shape.library) {
            libraries.push(shape.library.clone());
        }
    }
    libraries
}

#[cfg(test)]
mod tests {
    use std::path::Path;

    use super::*;

    fn shape(name: &str, library: &str, pins: &[&str]) -> SchematicShape {
        SchematicShape::new(
            name,
            library,
            pins.iter().map(|pin| (*pin).to_owned()).collect(),
        )
    }

    fn sample_shapes() -> Vec<SchematicShape> {
        vec![
            shape("Two A", "A", &["1", "2"]),
            shape("Three A", "A", &["1", "2", "3"]),
            shape("Four B", "B", &["A", "B", "C", "D"]),
        ]
    }

    #[test]
    fn candidate_selection_uses_s8p_as_the_fallback() {
        let window = Window::new(sample_shapes());

        assert_eq!(
            candidate_for_selection(&window.candidates, 0).mode,
            PortMode::S1P
        );
        assert_eq!(
            candidate_for_selection(&window.candidates, 6).mode,
            PortMode::S7P
        );
        assert_eq!(
            candidate_for_selection(&window.candidates, 7).mode,
            PortMode::S8P
        );
        assert_eq!(
            candidate_for_selection(&window.candidates, 99).mode,
            PortMode::S8P
        );
    }

    #[test]
    fn mode_rebuilds_rows_and_pin_filters_without_clearing_loaded_state() {
        let mut window = Window::new(sample_shapes());
        window.load_state = LoadState::Loaded(PathBuf::from("old.s1p"));

        window.configure_mode(PortMode::S2P);
        assert_eq!(window.grid_values().len(), 4);
        assert_eq!(window.pin_count_choices(), [2, 3, 4]);
        assert!(window.pin_count_filter_enabled());
        assert!(
            window
                .available_pin_names()
                .contains(&GROUND_PIN.to_owned())
        );

        window.configure_mode(PortMode::S5P);
        assert_eq!(window.grid_values().len(), 5);
        assert_eq!(window.pin_count_choices(), [5]);
        assert!(!window.pin_count_filter_enabled());
        assert_eq!(
            window.load_state(),
            &LoadState::Loaded(PathBuf::from("old.s1p"))
        );
    }

    #[test]
    fn shape_refresh_filters_by_pin_count_and_library_and_clears_mappings() {
        let mut window = Window::new(sample_shapes());
        window.configure_mode(PortMode::S2P);
        window.set_pin_count_filter(4);
        assert_eq!(window.visible_shapes(), [&sample_shapes()[2]]);
        window.set_mapping(0, "A".to_owned());

        window.set_library_filter(Some("A".to_owned()));

        assert!(window.visible_shapes().is_empty());
        assert!(window.grid_values().iter().all(String::is_empty));
        assert_eq!(window.readiness(), Readiness::Blocked);
    }

    #[test]
    fn shape_mapping_preserves_ground_indexes_and_missing_pin_sentinel() {
        let shape = shape("Two", "A", &["P1", "P2"]);
        let mut candidate = SBlockCandidate::new(PortMode::S2P);
        let values = vec!["P2".to_owned(), GROUND_PIN.to_owned(), "unknown".to_owned()];

        apply_shape_and_pins(&shape, &values, &mut candidate);

        assert_eq!(candidate.shape, Some(shape));
        assert_eq!(
            candidate.terminal_mapping,
            [
                PinTarget::ShapePinIndex(1),
                PinTarget::Ground,
                PinTarget::ShapePinIndex(2),
            ]
        );
    }

    #[test]
    fn accepted_load_populates_the_active_candidate_and_enables_complete_grid() {
        let mut window = Window::new(sample_shapes());
        window.configure_mode(PortMode::S2P);
        for row in 0..window.grid_values().len() {
            window.set_mapping(row, "1".to_owned());
        }

        let result = window.load_text("network.s2p", "# HZ S RI R 50\n1 1 0 2 0 3 0 4 0\n");

        assert!(result.is_ok());
        assert_eq!(window.selected_candidate().parameters.port_count, 2);
        assert_eq!(window.readiness(), Readiness::Ready);
        assert_eq!(window.status_text(), "network.s2p");
    }

    #[test]
    fn accept_transfers_only_the_selected_mode_candidate() {
        let mut window = Window::new(sample_shapes());
        window.configure_mode(PortMode::S2P);
        for row in 0..window.grid_values().len() {
            window.set_mapping(row, "1".to_owned());
        }

        assert!(window.accept().is_ok());
        let candidate = window.into_accepted_candidate();

        assert!(candidate.is_some_and(|value| {
            value.mode == PortMode::S2P && value.terminal_mapping.len() == 4
        }));

        let cancelled = Window::new(sample_shapes()).into_accepted_candidate();
        assert!(cancelled.is_none());
    }

    #[test]
    fn load_message_requests_the_mode_specific_native_dialog() {
        let mut window = Window::new(sample_shapes());
        window.configure_mode(PortMode::S7P);

        let action = window
            .update(Message::Load)
            .unwrap_or_else(|error| panic!("unexpected update error: {error}"));

        assert_eq!(
            action,
            Action::LoadRequested(LoadRequest {
                mode: PortMode::S7P
            })
        );
        assert_eq!(PortMode::S7P.extension(), "s7p");
        assert_eq!(Path::new("network.s7p").extension(), Some("s7p".as_ref()));
    }
}
