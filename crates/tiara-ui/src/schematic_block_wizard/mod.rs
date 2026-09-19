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
pub const ALL_LIBRARIES: &str = "All";
pub const GROUND_PIN: &str = "*GND*";

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

/// The recovered catch-all entry of the shape-library combo.
pub const ALL_LIBRARIES_INDEX: usize = 0;

/// The mode entry that appends the recovered ground pin choice.
pub const GROUND_PIN_MODE_INDEX: usize = 1;

/// The mapping column and header row of the recovered pin-match grid.
pub const MAPPING_COLUMN: usize = 1;
pub const HEADER_ROW: usize = 0;

/// The recovered grid keeps one fixed header row, so grid row `n` holds
/// mapping value `n - 1`.
pub const FIXED_ROWS: usize = 1;

/// The floating pin combo the grid moves over the selected mapping cell.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CellEditor {
    pub row: usize,
    pub visible: bool,
    pub selected_choice: Option<usize>,
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
    pin_choices: Vec<String>,
    cell_editor: Option<CellEditor>,
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
            pin_choices: Vec::new(),
            cell_editor: None,
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

    /// Implements Ghidra function `FUN_01ba8320` at `0x01BA8320`.
    ///
    /// Applies the shape-library combo selection. The first entry is the
    /// recovered catch-all and clears the filter; every other entry stores that
    /// entry's own text as the filter. Either way the shape list is rebuilt, so
    /// the selection, the mapping cells, and OK readiness all reset.
    pub fn choose_shape_library(&mut self, selected_index: usize, library_items: &[String]) {
        let library = if selected_index == ALL_LIBRARIES_INDEX {
            None
        } else {
            library_items.get(selected_index).cloned()
        };
        self.set_library_filter(library);
    }

    /// Implements Ghidra function `FUN_01ba86e0` at `0x01BA86E0`.
    ///
    /// The pin-count filter combo forwards straight to the shared shape
    /// rebuild. The recovered handler reads no control of its own, which is why
    /// the current filter value is already stored when it runs.
    pub fn apply_pin_filter_change(&mut self) {
        self.refresh_shapes();
    }

    /// Implements Ghidra function `FUN_01ba83f0` at `0x01BA83F0`.
    ///
    /// Rebuilds the pin-choice list for the newly selected shape and clears
    /// every mapping cell.
    ///
    /// The list is cleared first, so a shape list with no entries leaves it
    /// empty. The selected shape contributes its pin names in catalog order,
    /// and the second mode entry appends the recovered [`GROUND_PIN`]
    /// entry. The recovered handler clears the mapping column for every data
    /// row but does not touch the loaded S-parameter file or the mode.
    pub fn rebuild_pin_choices(&mut self, mode_selection_index: usize) {
        self.pin_choices.clear();
        if let Some(shape) = self
            .selected_shape_index
            .and_then(|index| self.shapes.get(index))
        {
            self.pin_choices.extend(shape.pin_names.iter().cloned());
        }
        if mode_selection_index == GROUND_PIN_MODE_INDEX {
            self.pin_choices.push(GROUND_PIN.to_owned());
        }
        self.grid_values.fill(String::new());
        self.cell_editor = None;
        self.update_readiness();
    }

    /// Implements Ghidra function `FUN_01ba86f0` at `0x01BA86F0`.
    ///
    /// Moves the floating pin combo over the selected mapping cell and seeds it
    /// from that cell's current text.
    ///
    /// The combo is only repositioned and shown for a data row of the mapping
    /// column; the header row and every other column leave it where it is. The
    /// recovered handler always allows the selection, so it never blocks a
    /// click. An empty cell selects the first pin entry rather than clearing
    /// the selection, and a cell whose text is missing from the list leaves the
    /// combo unselected.
    pub fn begin_cell_edit(&mut self, column: usize, row: usize) -> bool {
        if column == MAPPING_COLUMN && row != HEADER_ROW {
            self.cell_editor = Some(CellEditor {
                row,
                visible: true,
                selected_choice: None,
            });
        }

        let text = row
            .checked_sub(FIXED_ROWS)
            .and_then(|data_row| self.grid_values.get(data_row))
            .cloned()
            .unwrap_or_default();
        let selected_choice = if text.is_empty() {
            Some(0)
        } else {
            self.pin_choices.iter().position(|choice| *choice == text)
        };
        if let Some(editor) = &mut self.cell_editor {
            editor.selected_choice = selected_choice;
        }
        true
    }

    /// Implements Ghidra functions `FUN_01ba88a0` at `0x01BA88A0` and
    /// `FUN_01ba8990` at `0x01BA8990`.
    ///
    /// Commits the pin combo's selected text into the grid cell the editor is
    /// covering, hides the combo, and returns focus to the grid so it repaints.
    ///
    /// The two recovered handlers, the combo's change and its exit, have
    /// identical bodies, so choosing a pin and leaving the combo commit exactly
    /// the same way. The recovered code reads the selected item without a guard;
    /// this port treats "no selection" as no commit, because the combo is only
    /// shown after a cell selection has already seeded it.
    pub fn commit_cell_edit(&mut self) -> bool {
        let Some(editor) = self.cell_editor else {
            return false;
        };
        let Some(text) = editor
            .selected_choice
            .and_then(|choice| self.pin_choices.get(choice))
            .cloned()
        else {
            self.cell_editor = None;
            return false;
        };

        if let Some(data_row) = editor.row.checked_sub(FIXED_ROWS) {
            self.set_mapping(data_row, text);
        }
        self.cell_editor = None;
        true
    }

    /// Selects one entry in the floating pin combo.
    pub const fn select_pin_choice(&mut self, choice: Option<usize>) {
        if let Some(editor) = &mut self.cell_editor {
            editor.selected_choice = choice;
        }
    }

    #[must_use]
    pub fn pin_choices(&self) -> &[String] {
        &self.pin_choices
    }

    #[must_use]
    pub const fn cell_editor(&self) -> Option<&CellEditor> {
        self.cell_editor.as_ref()
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

    fn library_items() -> Vec<String> {
        vec![ALL_LIBRARIES.to_owned(), "A".to_owned(), "B".to_owned()]
    }

    #[test]
    fn the_first_library_entry_clears_the_filter_and_the_others_set_it() {
        let mut window = Window::new(sample_shapes());
        window.configure_mode(PortMode::S2P);
        window.set_pin_count_filter(2);

        window.choose_shape_library(1, &library_items());
        assert_eq!(window.library_filter.as_deref(), Some("A"));

        window.choose_shape_library(ALL_LIBRARIES_INDEX, &library_items());
        assert_eq!(window.library_filter, None);

        window.choose_shape_library(99, &library_items());
        assert_eq!(window.library_filter, None);
    }

    #[test]
    fn the_pin_filter_change_only_rebuilds_the_shape_list() {
        let mut window = Window::new(sample_shapes());
        window.configure_mode(PortMode::S2P);
        window.set_pin_count_filter(2);
        let before = window.visible_shape_indices.clone();

        window.apply_pin_filter_change();

        assert_eq!(window.visible_shape_indices, before);
        assert_eq!(window.readiness, Readiness::Blocked);
    }

    #[test]
    fn selecting_a_shape_rebuilds_the_pin_choices_and_clears_the_mapping() {
        let mut window = Window::new(sample_shapes());
        window.configure_mode(PortMode::S2P);
        window.set_pin_count_filter(2);
        window.set_mapping(0, "1".to_owned());

        window.rebuild_pin_choices(0);

        assert_eq!(window.pin_choices(), ["1".to_owned(), "2".to_owned()]);
        assert!(window.grid_values.iter().all(String::is_empty));
        assert!(window.cell_editor().is_none());
    }

    #[test]
    fn the_second_mode_entry_appends_the_recovered_ground_pin() {
        let mut window = Window::new(sample_shapes());
        window.configure_mode(PortMode::S2P);
        window.set_pin_count_filter(2);

        window.rebuild_pin_choices(GROUND_PIN_MODE_INDEX);

        assert_eq!(
            window.pin_choices(),
            ["1".to_owned(), "2".to_owned(), GROUND_PIN.to_owned()]
        );
    }

    #[test]
    fn a_shape_list_with_no_selection_leaves_the_pin_choices_empty() {
        let mut window = Window::new(Vec::new());
        window.configure_mode(PortMode::S2P);

        window.rebuild_pin_choices(0);

        assert!(window.pin_choices().is_empty());
    }

    #[test]
    fn selecting_a_mapping_cell_shows_the_combo_and_always_allows_the_click() {
        let mut window = Window::new(sample_shapes());
        window.configure_mode(PortMode::S2P);
        window.set_pin_count_filter(2);
        window.rebuild_pin_choices(0);

        assert!(window.begin_cell_edit(MAPPING_COLUMN, 1));

        assert_eq!(
            window.cell_editor(),
            Some(&CellEditor {
                row: 1,
                visible: true,
                selected_choice: Some(0),
            })
        );
    }

    #[test]
    fn the_header_row_and_other_columns_never_show_the_combo() {
        let mut window = Window::new(sample_shapes());
        window.configure_mode(PortMode::S2P);
        window.set_pin_count_filter(2);
        window.rebuild_pin_choices(0);

        assert!(window.begin_cell_edit(MAPPING_COLUMN, HEADER_ROW));
        assert!(window.cell_editor().is_none());
        assert!(window.begin_cell_edit(0, 1));
        assert!(window.cell_editor().is_none());
    }

    #[test]
    fn a_cell_value_outside_the_pin_list_leaves_the_combo_unselected() {
        let mut window = Window::new(sample_shapes());
        window.configure_mode(PortMode::S2P);
        window.set_pin_count_filter(2);
        window.rebuild_pin_choices(0);
        window.set_mapping(0, "2".to_owned());

        assert!(window.begin_cell_edit(MAPPING_COLUMN, 1));
        assert_eq!(
            window
                .cell_editor()
                .and_then(|editor| editor.selected_choice),
            Some(1)
        );

        window.set_mapping(0, "missing".to_owned());
        assert!(window.begin_cell_edit(MAPPING_COLUMN, 1));
        assert_eq!(
            window
                .cell_editor()
                .and_then(|editor| editor.selected_choice),
            None
        );
    }

    #[test]
    fn choosing_a_pin_writes_it_into_the_covered_cell_and_hides_the_combo() {
        let mut window = Window::new(sample_shapes());
        window.configure_mode(PortMode::S2P);
        window.set_pin_count_filter(2);
        window.rebuild_pin_choices(0);
        assert!(window.begin_cell_edit(MAPPING_COLUMN, 2));

        window.select_pin_choice(Some(1));
        assert!(window.commit_cell_edit());

        assert_eq!(window.grid_values[1], "2");
        assert!(window.cell_editor().is_none());
    }

    #[test]
    fn committing_without_an_open_editor_or_a_selection_writes_nothing() {
        let mut window = Window::new(sample_shapes());
        window.configure_mode(PortMode::S2P);
        window.set_pin_count_filter(2);
        window.rebuild_pin_choices(0);

        assert!(!window.commit_cell_edit());

        assert!(window.begin_cell_edit(MAPPING_COLUMN, 1));
        window.select_pin_choice(None);
        assert!(!window.commit_cell_edit());

        assert!(window.grid_values.iter().all(String::is_empty));
        assert!(window.cell_editor().is_none());
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

/// The catalogue identifiers of the eight symbols the wizard's palette
/// offers, in the order the recovered handler builds them.
///
/// Part of Ghidra function `FUN_01ba67e0` at `0x01BA67E0`.
///
/// The order is the palette's, not the catalogue's — the first two run
/// backwards — and the identifiers come from three separate runs, so the
/// palette is a chosen selection rather than a slice of the catalogue.
pub const PALETTE_SYMBOL_IDS: [u16; 8] = [0xAF, 0xAE, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xC2];

/// One entry of the wizard's symbol palette.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PaletteEntry {
    /// The catalogue identifier the entry was built from.
    pub symbol_id: u16,
    /// The name resolved for it, which the entry then carries as its own.
    pub name: String,
}

/// Everything `OnCreate` settles.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct BlockWizardCreation {
    /// The eight palette entries, in the recovered order.
    pub palette: Vec<PaletteEntry>,
    /// The libraries the wizard offers.
    pub libraries: Vec<String>,
    /// The port name the form starts with, read back out of its own field.
    pub port_name: String,
    /// The caption the form starts with.
    pub caption: String,
    /// The width the preview takes from the template control.
    pub preview_width: i32,
}

/// What building the wizard needs from the application around it.
pub trait BlockWizardCreateHost {
    /// Resolves one palette symbol's name from the shape store.
    fn resolve_symbol_name(&mut self, symbol_id: u16) -> String;

    /// The libraries the wizard offers.
    fn library_names(&mut self) -> Vec<String>;

    /// The width of the template control the preview is sized from.
    fn template_width(&mut self) -> i32;

    /// Takes the template control out of sight.
    fn hide_template(&mut self);

    /// The port name field's starting text.
    fn port_name_field(&mut self) -> String;

    /// The caption the form starts with.
    fn block_caption(&mut self) -> String;
}

/// Implements Ghidra function `FUN_01ba67e0` at `0x01BA67E0`.
///
/// Handles `frmSBlockWizard.OnCreate`.
///
/// Builds the wizard's symbol palette and reads its starting state.
///
/// Each palette entry is constructed from a catalogue identifier and then
/// asked to resolve its own name, which it keeps — so the palette carries
/// names the catalogue owns rather than captions of its own, and renaming a
/// symbol in the catalogue renames it here.
///
/// One control on the form exists only to be measured: the preview takes its
/// width and the control is then hidden, which is how the designer's layout
/// sets a size the code cannot otherwise know.
///
/// The port name and caption are read back out of the form's own fields
/// rather than being set, so whatever the designer put there is the starting
/// value.
pub fn create_block_wizard(host: &mut impl BlockWizardCreateHost) -> BlockWizardCreation {
    let palette = PALETTE_SYMBOL_IDS
        .iter()
        .map(|symbol_id| PaletteEntry {
            symbol_id: *symbol_id,
            name: host.resolve_symbol_name(*symbol_id),
        })
        .collect();

    let libraries = host.library_names();
    let preview_width = host.template_width();
    host.hide_template();

    BlockWizardCreation {
        palette,
        libraries,
        port_name: host.port_name_field(),
        caption: host.block_caption(),
        preview_width,
    }
}

/// How far in from the item's left edge the device name is drawn.
pub const DEVICE_TEXT_INDENT: i32 = 2;

/// One item's rectangle, as the owner-draw handler receives it.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct ItemRect {
    /// The left edge.
    pub left: i32,
    /// The top edge.
    pub top: i32,
}

/// What the owner-draw handler decided to paint.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum DeviceItemDraw {
    /// Only the background was filled — the item is left blank.
    BackgroundOnly,
    /// The background, then the name and the symbol.
    Painted {
        /// The name drawn.
        text: String,
        /// Where the name starts.
        text_at: ItemRect,
        /// Where the symbol is drawn, raised so it lines up with the name.
        symbol_at: ItemRect,
    },
}

/// What drawing one device item needs from the combo around it.
pub trait DeviceItemHost {
    /// Fills the item's background. Always the first thing done, so an item
    /// that paints nothing else still clears whatever was there.
    fn fill_background(&mut self, rect: ItemRect);

    /// Whether the device list has a selection at all.
    fn device_selected(&mut self) -> bool;

    /// The text of one item.
    fn item_text(&mut self, index: usize) -> String;

    /// The line height the symbol is raised by.
    fn line_height(&mut self) -> i32;

    /// Draws the name.
    fn draw_text(&mut self, at: ItemRect, text: &str);

    /// Draws the item's symbol.
    fn draw_symbol(&mut self, at: ItemRect, index: usize);
}

/// Implements Ghidra function `FUN_01ba85c0` at `0x01BA85C0`.
///
/// Handles `frmSBlockWizard.pnlMain.cbDevices.OnDrawItem`.
///
/// Draws one device entry as its name beside its schematic symbol.
///
/// The list is owner-drawn because a device is only recognisable by its
/// symbol; a name on its own would make the user match part numbers to
/// shapes in their head.
///
/// The background is filled before anything is decided, so an item that goes
/// on to paint nothing still clears what was under it. Nothing else is drawn
/// while the device list has no selection — which is why the entries come up
/// blank until one is made, rather than showing symbols for a device that has
/// not been chosen.
///
/// The symbol is drawn from a point raised by one line height, so it lines up
/// with the name rather than sitting on the item's own top edge.
pub fn draw_device_item(
    host: &mut impl DeviceItemHost,
    rect: ItemRect,
    index: usize,
) -> DeviceItemDraw {
    host.fill_background(rect);

    if !host.device_selected() {
        return DeviceItemDraw::BackgroundOnly;
    }

    let text = host.item_text(index);
    let text_at = ItemRect {
        left: rect.left + DEVICE_TEXT_INDENT,
        top: rect.top,
    };
    host.draw_text(text_at, &text);

    let symbol_at = ItemRect {
        left: rect.left,
        top: rect.top - host.line_height(),
    };
    host.draw_symbol(symbol_at, index);

    DeviceItemDraw::Painted {
        text,
        text_at,
        symbol_at,
    }
}

#[cfg(test)]
mod create_and_draw_tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Wizard {
        hidden: bool,
        width_read_before_hiding: Option<bool>,
    }

    impl BlockWizardCreateHost for Wizard {
        fn resolve_symbol_name(&mut self, symbol_id: u16) -> String {
            format!("SYM{symbol_id:03X}")
        }

        fn library_names(&mut self) -> Vec<String> {
            vec!["All".to_owned(), "Digital".to_owned()]
        }

        fn template_width(&mut self) -> i32 {
            self.width_read_before_hiding = Some(!self.hidden);
            240
        }

        fn hide_template(&mut self) {
            self.hidden = true;
        }

        fn port_name_field(&mut self) -> String {
            "IN1".to_owned()
        }

        fn block_caption(&mut self) -> String {
            "Block1".to_owned()
        }
    }

    #[test]
    fn the_palette_keeps_the_recovered_order_rather_than_sorting() {
        assert_eq!(
            PALETTE_SYMBOL_IDS,
            [0xAF, 0xAE, 0xB9, 0xBA, 0xBB, 0xBC, 0xBD, 0xC2]
        );
        // The first two run backwards, so the order is the palette's own.
        assert!(PALETTE_SYMBOL_IDS[0] > PALETTE_SYMBOL_IDS[1]);
    }

    #[test]
    fn every_palette_entry_takes_its_name_from_the_catalogue() {
        let mut host = Wizard::default();
        let created = create_block_wizard(&mut host);

        assert_eq!(created.palette.len(), PALETTE_SYMBOL_IDS.len());
        assert_eq!(created.palette[0].symbol_id, 0xAF);
        assert_eq!(created.palette[0].name, "SYM0AF");
        assert_eq!(created.palette[7].name, "SYM0C2");
    }

    #[test]
    fn the_template_is_measured_before_it_is_hidden() {
        let mut host = Wizard::default();
        let created = create_block_wizard(&mut host);

        assert_eq!(created.preview_width, 240);
        assert_eq!(host.width_read_before_hiding, Some(true));
        assert!(host.hidden);
    }

    #[test]
    fn the_starting_values_are_read_out_of_the_form_rather_than_set() {
        let mut host = Wizard::default();
        let created = create_block_wizard(&mut host);

        assert_eq!(created.port_name, "IN1");
        assert_eq!(created.caption, "Block1");
        assert_eq!(created.libraries, ["All", "Digital"]);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Paint {
        Background(ItemRect),
        Text(ItemRect, String),
        Symbol(ItemRect, usize),
    }

    #[derive(Debug, Default)]
    struct Combo {
        selected: bool,
        items: Vec<String>,
        line_height: i32,
        paints: Vec<Paint>,
    }

    impl DeviceItemHost for Combo {
        fn fill_background(&mut self, rect: ItemRect) {
            self.paints.push(Paint::Background(rect));
        }

        fn device_selected(&mut self) -> bool {
            self.selected
        }

        fn item_text(&mut self, index: usize) -> String {
            self.items.get(index).cloned().unwrap_or_default()
        }

        fn line_height(&mut self) -> i32 {
            self.line_height
        }

        fn draw_text(&mut self, at: ItemRect, text: &str) {
            self.paints.push(Paint::Text(at, text.to_owned()));
        }

        fn draw_symbol(&mut self, at: ItemRect, index: usize) {
            self.paints.push(Paint::Symbol(at, index));
        }
    }

    fn combo() -> Combo {
        Combo {
            selected: true,
            items: vec!["7400".to_owned(), "7402".to_owned()],
            line_height: 14,
            paints: Vec::new(),
        }
    }

    #[test]
    fn an_item_draws_its_name_indented_and_its_symbol_raised() {
        let mut host = combo();
        let rect = ItemRect { left: 4, top: 20 };

        assert_eq!(
            draw_device_item(&mut host, rect, 1),
            DeviceItemDraw::Painted {
                text: "7402".to_owned(),
                text_at: ItemRect { left: 6, top: 20 },
                symbol_at: ItemRect { left: 4, top: 6 },
            }
        );
    }

    #[test]
    fn the_background_is_filled_before_anything_is_decided() {
        let mut host = Combo {
            selected: false,
            ..combo()
        };
        let rect = ItemRect { left: 4, top: 20 };

        assert_eq!(
            draw_device_item(&mut host, rect, 0),
            DeviceItemDraw::BackgroundOnly
        );
        assert_eq!(host.paints, [Paint::Background(rect)]);
    }

    #[test]
    fn an_unselected_list_leaves_every_entry_blank() {
        let mut host = Combo {
            selected: false,
            ..combo()
        };

        draw_device_item(&mut host, ItemRect::default(), 0);

        assert!(
            !host
                .paints
                .iter()
                .any(|paint| matches!(paint, Paint::Text(..) | Paint::Symbol(..)))
        );
    }

    #[test]
    fn the_background_comes_first_when_the_item_is_painted_too() {
        let mut host = combo();

        draw_device_item(&mut host, ItemRect { left: 0, top: 0 }, 0);

        assert!(matches!(host.paints.first(), Some(Paint::Background(_))));
        assert_eq!(host.paints.len(), 3);
    }
}
