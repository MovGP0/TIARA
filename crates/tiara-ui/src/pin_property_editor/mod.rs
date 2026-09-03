use std::error::Error;
use std::fmt::{self, Display, Formatter};
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, row, text, text_input};
use iced::{Element, Length, Task};
use tiara_core::grid_cell_commit::{ActiveCellEditor, FinalizeOutcome, GridEditSession};

pub const TITLE: &str = "Pin Properties";
pub const FORM_RESOURCE: &str = "frmPinPropEditor";
pub const LIBRARY_EVALUATION: &str = "iced supplies the Pin Properties message, state, widgets, and grid-editor presentation. Rust Vec owns cells, column definitions, and localized choice lists; PathBuf builds the configuration path. Option represents the uncaptured native editor-color sentinel, so no additional grid or INI crate is needed at creation time.";
pub const COLOR_DIALOG_CUSTOM_COLORS_SECTION: &str = "Color Dialog Custom Colors";
pub const SYSTEM_INFORMATION_BACKGROUND: u32 = 0xff00_0018;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CustomColorEntry {
    pub name: String,
    pub value: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PinColorChoice {
    pub color: u32,
    pub custom_colors: Vec<CustomColorEntry>,
}

pub trait PinColorPort {
    /// Loads persisted custom color entries for a dialog section.
    ///
    /// # Errors
    ///
    /// Returns an error when the configuration store cannot be read.
    fn load_custom_colors(&mut self, section: &str) -> Result<Vec<CustomColorEntry>, String>;

    /// Opens the color dialog with the selected row color and custom entries.
    ///
    /// # Errors
    ///
    /// Returns an error when the native color dialog cannot complete.
    fn choose_color(
        &mut self,
        current: u32,
        custom_colors: &[CustomColorEntry],
    ) -> Result<Option<PinColorChoice>, String>;

    /// Writes one accepted custom color entry to the configuration store.
    ///
    /// # Errors
    ///
    /// Returns an error when the entry cannot be persisted.
    fn write_custom_color(&mut self, section: &str, entry: &CustomColorEntry)
    -> Result<(), String>;
}

pub trait PinNameHintPort {
    /// Measures the localized hint within the active screen width.
    ///
    /// # Errors
    ///
    /// Returns an error when text measurement cannot complete.
    fn measure_hint(&mut self, maximum_width: i32, text: &str) -> Result<HintSize, String>;
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct WindowConstraints {
    pub min_width: u32,
    pub min_height: u32,
    pub max_width: Option<u32>,
    pub max_height: Option<u32>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CellButton {
    None,
    DropDown,
    Ellipsis,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct GridColumn {
    pub title: String,
    pub header_centered: bool,
    pub header_bold: bool,
    pub button: CellButton,
    pub button_enabled: bool,
    pub choices: Vec<String>,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct PinPropertyOptions {
    pub visibility: Vec<String>,
    pub font_sizes: Vec<String>,
    pub shapes: Vec<String>,
    pub lengths: Vec<String>,
    pub directions: Vec<String>,
    pub electrical_types: Vec<String>,
    pub name_syntax_hint: String,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct DrawBounds {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct CellStyle {
    pub text_color: u32,
    pub background_color: u32,
    pub bold: bool,
    pub alignment: u8,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CellDrawPlan {
    pub text: String,
    pub bounds: DrawBounds,
    pub horizontal_inset: i32,
    pub vertical_inset: i32,
    pub style: CellStyle,
    pub overlay_color: Option<u32>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ScreenPoint {
    pub x: i32,
    pub y: i32,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct HintSize {
    pub width: i32,
    pub height: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HintOverlay {
    pub text: String,
    pub bounds: DrawBounds,
    pub background_color: u32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct KeyPressResult {
    pub remaining_key: Option<char>,
    pub overlay: Option<HintOverlay>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum HintWindowState {
    #[default]
    Unavailable,
    Hidden,
    Visible,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ModalResult {
    #[default]
    None,
    Ok,
    Cancel,
}

#[derive(Debug, Clone)]
pub enum Message {
    Created {
        application_directory: PathBuf,
        width: u32,
        height: u32,
        options: PinPropertyOptions,
    },
    Shown,
    Deactivated,
    Destroyed,
    GridKeyDown,
    EditTextChanged(String),
    Ok,
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CellCommitError {
    column: usize,
    row: usize,
}

impl Display for CellCommitError {
    fn fmt(&self, formatter: &mut Formatter<'_>) -> fmt::Result {
        write!(
            formatter,
            "Pin-grid cell ({}, {}) is outside the grid",
            self.column, self.row
        )
    }
}

impl Error for CellCommitError {}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CellDrawError {
    MissingCell { column: usize, row: usize },
    MissingRowColor { row: usize },
}

impl Display for CellDrawError {
    fn fmt(&self, formatter: &mut Formatter<'_>) -> fmt::Result {
        match self {
            Self::MissingCell { column, row } => {
                write!(
                    formatter,
                    "Pin-grid cell ({column}, {row}) is outside the grid"
                )
            }
            Self::MissingRowColor { row } => {
                write!(formatter, "Pin-grid row {row} has no color value")
            }
        }
    }
}

impl Error for CellDrawError {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum PinColorError {
    MissingRowColor { row: usize },
    Port(String),
}

impl Display for PinColorError {
    fn fmt(&self, formatter: &mut Formatter<'_>) -> fmt::Result {
        match self {
            Self::MissingRowColor { row } => {
                write!(formatter, "Pin-grid row {row} has no color value")
            }
            Self::Port(message) => formatter.write_str(message),
        }
    }
}

impl Error for PinColorError {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum PinNameHintError {
    Unavailable,
    Port(String),
}

impl Display for PinNameHintError {
    fn fmt(&self, formatter: &mut Formatter<'_>) -> fmt::Result {
        match self {
            Self::Unavailable => formatter.write_str("The pin-name hint window is unavailable"),
            Self::Port(message) => formatter.write_str(message),
        }
    }
}

impl Error for PinNameHintError {}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PinCellSelectionError {
    row: usize,
}

impl Display for PinCellSelectionError {
    fn fmt(&self, formatter: &mut Formatter<'_>) -> fmt::Result {
        write!(formatter, "Pin-grid row {} has no color value", self.row)
    }
}

impl Error for PinCellSelectionError {}

#[derive(Debug)]
pub struct State {
    cells: Vec<Vec<String>>,
    columns: Vec<GridColumn>,
    configuration_path: Option<PathBuf>,
    constraints: WindowConstraints,
    color_dialog_ready: bool,
    hint_window: HintWindowState,
    dialog_color: Option<u32>,
    default_editor_color: Option<u32>,
    editor_color: Option<u32>,
    selected_cell: Option<(usize, usize)>,
    fixed_rows: usize,
    row_colors: Vec<u32>,
    grid_repaint_requested: bool,
    name_syntax_hint: String,
    active_hint: Option<HintOverlay>,
    edit_session: GridEditSession,
    modal_result: ModalResult,
    last_error: Option<String>,
}

impl State {
    #[must_use]
    pub fn new(rows: usize, columns: usize) -> Self {
        Self {
            cells: vec![vec![String::new(); columns]; rows],
            columns: Vec::new(),
            configuration_path: None,
            constraints: WindowConstraints::default(),
            color_dialog_ready: false,
            hint_window: HintWindowState::Unavailable,
            dialog_color: None,
            default_editor_color: None,
            editor_color: None,
            selected_cell: None,
            fixed_rows: 1,
            row_colors: Vec::new(),
            grid_repaint_requested: false,
            name_syntax_hint: String::new(),
            active_hint: None,
            edit_session: GridEditSession::default(),
            modal_result: ModalResult::None,
            last_error: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Created {
                application_directory,
                width,
                height,
                options,
            } => self.on_create(&application_directory, width, height, options),
            Message::Shown => self.on_show(),
            Message::Deactivated => self.on_deactivate(),
            Message::Destroyed => self.on_destroy(),
            Message::GridKeyDown => self.on_grid_key_down(),
            Message::EditTextChanged(value) => self.edit_session.set_text(value),
            Message::Ok => {
                let _ = self.click_ok();
            }
            Message::Cancel => self.modal_result = ModalResult::Cancel,
        }
        Task::none()
    }

    /// Initializes the Pin Properties grid and dialog services.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01788190`, symbol `FUN_01788190`
    /// (`TfrmPinPropEditor.FormCreate`). It builds the application-local
    /// `tina.ini` path, fixes the minimum height and maximum width to the
    /// current form size, consumes the six already-localized choice lists, and
    /// configures eight bold centered columns. Name has no cell button, the
    /// six list-backed columns use dropdown buttons, and Color uses an
    /// ellipsis button. `None` represents the native `clNone` sentinel before
    /// the grid editor's normal color is captured.
    pub fn on_create(
        &mut self,
        application_directory: &Path,
        width: u32,
        height: u32,
        options: PinPropertyOptions,
    ) {
        self.configuration_path = Some(application_directory.join("tina.ini"));
        self.constraints = WindowConstraints {
            min_width: 0,
            min_height: height,
            max_width: Some(width),
            max_height: None,
        };
        self.columns = vec![
            grid_column("Name", CellButton::None, false, Vec::new()),
            grid_column("Show", CellButton::DropDown, true, options.visibility),
            grid_column("Size", CellButton::DropDown, true, options.font_sizes),
            grid_column("Shape", CellButton::DropDown, true, options.shapes),
            grid_column("Length", CellButton::DropDown, true, options.lengths),
            grid_column("Direction", CellButton::DropDown, true, options.directions),
            grid_column(
                "Elec. type",
                CellButton::DropDown,
                true,
                options.electrical_types,
            ),
            grid_column("Color", CellButton::Ellipsis, true, Vec::new()),
        ];
        for row in &mut self.cells {
            row.resize(self.columns.len(), String::new());
        }
        self.color_dialog_ready = true;
        self.hint_window = HintWindowState::Hidden;
        self.dialog_color = None;
        self.default_editor_color = None;
        self.editor_color = None;
        self.selected_cell = None;
        self.row_colors.clear();
        self.grid_repaint_requested = false;
        self.name_syntax_hint = options.name_syntax_hint;
        self.active_hint = None;
    }

    /// Restores the first Pin Properties column caption when shown.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01788990`, symbol `FUN_01788990`
    /// (`TfrmPinPropEditor.FormShow`). It sets column zero to `Name`. If the
    /// grid is not initialized, the event has no state to update.
    pub fn on_show(&mut self) {
        if let Some(column) = self.columns.first_mut() {
            column.title.clear();
            column.title.push_str("Name");
        }
    }

    /// Releases the Pin Properties hint window when the form deactivates.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01788E70`, symbol `FUN_01788e70`
    /// (`TfrmPinPropEditor.FormDeactivate`). The native handler hides and
    /// destroys its dynamically created hint window. Rust represents both
    /// operations by making that transient helper unavailable. The cell edit
    /// session, color dialog, and configuration state remain unchanged.
    pub fn on_deactivate(&mut self) {
        self.hint_window = HintWindowState::Unavailable;
        self.active_hint = None;
    }

    /// Releases the dynamic Pin Properties data when the form is destroyed.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01788EA0`, symbol `FUN_01788ea0`
    /// (`TfrmPinPropEditor.FormDestroy`). Rust ownership replaces both native
    /// destructor calls: assigning a new row-color vector releases its prior
    /// allocation, and removing the configuration path releases that value.
    /// DFM-owned controls and unrelated form state are unchanged.
    pub fn on_destroy(&mut self) {
        self.row_colors = Vec::new();
        self.configuration_path = None;
    }

    /// Hides the Pin Properties hint after a grid key-down event.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01788ED0`, symbol `FUN_01788ed0`
    /// (`TfrmPinPropEditor.sgPinsKeyDown`). The recovered handler does not
    /// inspect or consume the key. An unavailable helper remains unavailable.
    pub const fn on_grid_key_down(&mut self) {
        if !matches!(self.hint_window, HintWindowState::Unavailable) {
            self.hint_window = HintWindowState::Hidden;
        }
    }

    /// Shows the pin-name syntax hint for its three trigger characters.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01788EF0`, symbol `FUN_01788ef0`
    /// (`TfrmPinPropEditor.sgPinsKeyPress`). Only `*`, `,`, and `:` in the
    /// Name column consume the character and show the localized hint. The
    /// hint is measured against the active screen width and centered below the
    /// selected cell with a ten-pixel gap. All other input is unchanged.
    ///
    /// # Errors
    ///
    /// Returns an error when the hint helper is unavailable or the text
    /// measurement adapter fails. In both cases, the key remains unconsumed.
    pub fn on_grid_key_press(
        &mut self,
        key: char,
        selected_column: usize,
        cell_bounds: DrawBounds,
        form_screen_origin: ScreenPoint,
        maximum_width: i32,
        port: &mut impl PinNameHintPort,
    ) -> Result<KeyPressResult, PinNameHintError> {
        if selected_column != 0 || !matches!(key, '*' | ',' | ':') {
            return Ok(KeyPressResult {
                remaining_key: Some(key),
                overlay: None,
            });
        }
        if matches!(self.hint_window, HintWindowState::Unavailable) {
            return Err(PinNameHintError::Unavailable);
        }

        let size = port
            .measure_hint(maximum_width, &self.name_syntax_hint)
            .map_err(PinNameHintError::Port)?;
        let cell_width = cell_bounds.right - cell_bounds.left;
        let left = form_screen_origin.x + cell_bounds.left + (cell_width - size.width) / 2;
        let top = form_screen_origin.y + cell_bounds.bottom + 10;
        let overlay = HintOverlay {
            text: self.name_syntax_hint.clone(),
            bounds: DrawBounds {
                left,
                top,
                right: left + size.width,
                bottom: top + size.height,
            },
            background_color: SYSTEM_INFORMATION_BACKGROUND,
        };
        self.active_hint = Some(overlay.clone());
        self.hint_window = HintWindowState::Visible;

        Ok(KeyPressResult {
            remaining_key: None,
            overlay: Some(overlay),
        })
    }

    /// Applies the editor color for the selected Pin Properties cell.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01789100`, symbol `FUN_01789100`
    /// (`TfrmPinPropEditor.sgPinsSelectCell`). The first selection captures
    /// the grid editor's normal color. Selecting column seven applies the
    /// corresponding data-row color. Every other column restores the captured
    /// normal color.
    ///
    /// # Errors
    ///
    /// Returns an error when a color-column selection has no corresponding
    /// data-row color. The failed selection does not change the selected cell
    /// or applied editor color, but the initial normal color remains cached.
    pub fn on_select_cell(
        &mut self,
        column: usize,
        row: usize,
        current_editor_color: u32,
    ) -> Result<u32, PinCellSelectionError> {
        let default_color = *self
            .default_editor_color
            .get_or_insert(current_editor_color);
        let color = if column == 7 {
            let color_index = row
                .checked_sub(self.fixed_rows)
                .ok_or(PinCellSelectionError { row })?;
            *self
                .row_colors
                .get(color_index)
                .ok_or(PinCellSelectionError { row })?
        } else {
            default_color
        };

        self.selected_cell = Some((column, row));
        self.editor_color = Some(color);
        Ok(color)
    }

    /// Builds the custom drawing operations for one Pin Properties cell.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x017889E0`, symbol `FUN_017889e0`
    /// (`TfrmPinPropEditor.sgPinsDrawCell`). Fixed header rows keep default
    /// drawing. Data cells use the column font, background, alignment, and a
    /// two-pixel text inset. A Name cell becomes bold when its Shape cell
    /// equals the fifth configured shape. Color cells receive a row-specific
    /// solid overlay after text drawing.
    ///
    /// # Errors
    ///
    /// Returns an error when the requested cell or required row color does not
    /// exist.
    pub fn cell_draw_plan(
        &self,
        column: usize,
        row: usize,
        bounds: DrawBounds,
        mut style: CellStyle,
    ) -> Result<Option<CellDrawPlan>, CellDrawError> {
        if row < self.fixed_rows {
            return Ok(None);
        }

        let text = self
            .cell(column, row)
            .ok_or(CellDrawError::MissingCell { column, row })?
            .to_owned();
        if column == 0 {
            let bus_shape = self.columns.get(3).and_then(|column| column.choices.get(4));
            if bus_shape.is_some_and(|bus_shape| self.cell(3, row) == Some(bus_shape.as_str())) {
                style.bold = true;
            }
        }
        let overlay_color = if column == 7 {
            let color_index = row - self.fixed_rows;
            Some(
                *self
                    .row_colors
                    .get(color_index)
                    .ok_or(CellDrawError::MissingRowColor { row })?,
            )
        } else {
            None
        };

        Ok(Some(CellDrawPlan {
            text,
            bounds,
            horizontal_inset: 2,
            vertical_inset: 2,
            style,
            overlay_color,
        }))
    }

    pub fn set_row_colors(&mut self, colors: Vec<u32>) {
        self.row_colors = colors;
    }

    /// Selects and applies the color for one Pin Properties data row.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01788C20`, symbol `FUN_01788c20`
    /// (`TfrmPinPropEditor.sgPinsElippsisclicked`). It loads the saved custom
    /// colors, opens the dialog with the selected row's current color, and
    /// leaves the row and configuration unchanged when the user cancels. On
    /// acceptance, it replaces the row color, requests a grid repaint, and
    /// persists every custom color returned by the dialog.
    ///
    /// # Errors
    ///
    /// Returns a typed row error or a configuration and color-dialog adapter
    /// error. If an entry write fails, the accepted row color and earlier
    /// writes remain applied.
    pub fn select_row_color(
        &mut self,
        row: usize,
        port: &mut impl PinColorPort,
    ) -> Result<bool, PinColorError> {
        let custom_colors = port
            .load_custom_colors(COLOR_DIALOG_CUSTOM_COLORS_SECTION)
            .map_err(PinColorError::Port)?;
        let color_index = row
            .checked_sub(self.fixed_rows)
            .ok_or(PinColorError::MissingRowColor { row })?;
        let current = *self
            .row_colors
            .get(color_index)
            .ok_or(PinColorError::MissingRowColor { row })?;
        self.dialog_color = Some(current);
        let Some(choice) = port
            .choose_color(current, &custom_colors)
            .map_err(PinColorError::Port)?
        else {
            return Ok(false);
        };

        self.row_colors[color_index] = choice.color;
        self.dialog_color = Some(choice.color);
        self.grid_repaint_requested = true;
        for entry in &choice.custom_colors {
            port.write_custom_color(COLOR_DIALOG_CUSTOM_COLORS_SECTION, entry)
                .map_err(PinColorError::Port)?;
        }
        Ok(true)
    }

    pub fn begin_edit(
        &mut self,
        column: Option<usize>,
        row: Option<usize>,
        text: impl Into<String>,
        repaint_on_close: bool,
    ) {
        self.edit_session.begin(
            ActiveCellEditor {
                column,
                row,
                text: text.into(),
            },
            repaint_on_close,
        );
    }

    /// Reimplements Ghidra function `FUN_01788970` at `0x01788970`.
    ///
    /// # Errors
    ///
    /// Returns a bounds error from the grid cell setter. The modal result does
    /// not change to OK when finalization fails.
    pub fn click_ok(&mut self) -> Result<(), CellCommitError> {
        let cells = &mut self.cells;
        let result: Result<FinalizeOutcome, CellCommitError> =
            self.edit_session.finalize(|column, row, value| {
                let cell = cells
                    .get_mut(row)
                    .and_then(|cells_row| cells_row.get_mut(column))
                    .ok_or(CellCommitError { column, row })?;
                value.clone_into(cell);
                Ok(())
            });
        match result {
            Ok(_) => {
                self.last_error = None;
                self.modal_result = ModalResult::Ok;
                Ok(())
            }
            Err(error) => {
                self.last_error = Some(error.to_string());
                Err(error)
            }
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let editor: Element<'_, Message> = self.edit_session.active_editor().map_or_else(
            || text("No active cell").into(),
            |editor| {
                text_input("Cell value", &editor.text)
                    .on_input(Message::EditTextChanged)
                    .into()
            },
        );
        let error = self.last_error.as_ref().map_or_else(
            || text(""),
            |message| text(message).style(iced::widget::text::danger),
        );
        container(
            column![
                text(TITLE).size(24),
                editor,
                error,
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

    #[must_use]
    pub fn cell(&self, column: usize, row: usize) -> Option<&str> {
        self.cells
            .get(row)
            .and_then(|cells_row| cells_row.get(column))
            .map(String::as_str)
    }

    #[must_use]
    pub fn columns(&self) -> &[GridColumn] {
        &self.columns
    }

    #[must_use]
    pub fn configuration_path(&self) -> Option<&Path> {
        self.configuration_path.as_deref()
    }

    #[must_use]
    pub const fn constraints(&self) -> WindowConstraints {
        self.constraints
    }

    #[must_use]
    pub const fn color_dialog_ready(&self) -> bool {
        self.color_dialog_ready
    }

    #[must_use]
    pub const fn hint_window_state(&self) -> HintWindowState {
        self.hint_window
    }

    #[must_use]
    pub const fn active_hint(&self) -> Option<&HintOverlay> {
        self.active_hint.as_ref()
    }

    #[must_use]
    pub const fn active_color(&self) -> Option<u32> {
        self.dialog_color
    }

    #[must_use]
    pub const fn default_editor_color(&self) -> Option<u32> {
        self.default_editor_color
    }

    #[must_use]
    pub const fn editor_color(&self) -> Option<u32> {
        self.editor_color
    }

    #[must_use]
    pub const fn selected_cell(&self) -> Option<(usize, usize)> {
        self.selected_cell
    }

    #[must_use]
    pub const fn grid_repaint_requested(&self) -> bool {
        self.grid_repaint_requested
    }

    #[must_use]
    pub const fn modal_result(&self) -> ModalResult {
        self.modal_result
    }

    #[must_use]
    pub fn last_error(&self) -> Option<&str> {
        self.last_error.as_deref()
    }

    #[must_use]
    pub const fn edit_session(&self) -> &GridEditSession {
        &self.edit_session
    }
}

fn grid_column(
    title: &str,
    button: CellButton,
    button_enabled: bool,
    choices: Vec<String>,
) -> GridColumn {
    GridColumn {
        title: title.to_owned(),
        header_centered: true,
        header_bold: true,
        button,
        button_enabled,
        choices,
    }
}

#[cfg(test)]
mod tests {
    use std::path::Path;

    use super::{
        COLOR_DIALOG_CUSTOM_COLORS_SECTION, CellButton, CellDrawError, CellDrawPlan, CellStyle,
        CustomColorEntry, DrawBounds, HintOverlay, HintSize, HintWindowState, KeyPressResult,
        Message, ModalResult, PinCellSelectionError, PinColorChoice, PinColorError, PinColorPort,
        PinNameHintError, PinNameHintPort, PinPropertyOptions, SYSTEM_INFORMATION_BACKGROUND,
        ScreenPoint, State, WindowConstraints,
    };
    use iced::Task;

    #[derive(Default)]
    struct ColorPort {
        loaded: Vec<CustomColorEntry>,
        choice: Option<PinColorChoice>,
        choose_inputs: Vec<(u32, Vec<CustomColorEntry>)>,
        writes: Vec<(String, CustomColorEntry)>,
    }

    impl PinColorPort for ColorPort {
        fn load_custom_colors(&mut self, section: &str) -> Result<Vec<CustomColorEntry>, String> {
            assert_eq!(section, COLOR_DIALOG_CUSTOM_COLORS_SECTION);
            Ok(self.loaded.clone())
        }

        fn choose_color(
            &mut self,
            current: u32,
            custom_colors: &[CustomColorEntry],
        ) -> Result<Option<PinColorChoice>, String> {
            self.choose_inputs.push((current, custom_colors.to_vec()));
            Ok(self.choice.clone())
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

    #[derive(Default)]
    struct HintPort {
        measured: HintSize,
        inputs: Vec<(i32, String)>,
    }

    impl PinNameHintPort for HintPort {
        fn measure_hint(&mut self, maximum_width: i32, text: &str) -> Result<HintSize, String> {
            self.inputs.push((maximum_width, text.to_owned()));
            Ok(self.measured)
        }
    }

    fn discard(task: Task<Message>) {
        drop(task);
    }

    fn options() -> PinPropertyOptions {
        PinPropertyOptions {
            visibility: vec!["No".to_owned(), "Yes".to_owned()],
            font_sizes: vec!["8".to_owned(), "10".to_owned()],
            shapes: ["Normal", "Inverted", "Clock", "Inverted Clock", "Bus"]
                .map(str::to_owned)
                .to_vec(),
            lengths: vec!["Short".to_owned(), "Long".to_owned()],
            directions: vec!["East".to_owned(), "West".to_owned()],
            electrical_types: vec!["Input".to_owned(), "Output".to_owned()],
            name_syntax_hint: "Pin-name syntax".to_owned(),
        }
    }

    #[test]
    fn create_builds_constraints_services_and_eight_typed_columns() {
        let mut state = State::new(2, 2);

        discard(state.update(Message::Created {
            application_directory: Path::new("C:/Tina").to_path_buf(),
            width: 665,
            height: 355,
            options: options(),
        }));

        assert_eq!(
            state.constraints(),
            WindowConstraints {
                min_width: 0,
                min_height: 355,
                max_width: Some(665),
                max_height: None,
            }
        );
        assert_eq!(
            state.configuration_path(),
            Some(Path::new("C:/Tina/tina.ini"))
        );
        assert!(state.color_dialog_ready());
        assert_eq!(state.hint_window_state(), HintWindowState::Hidden);
        assert_eq!(state.active_color(), None);
        assert_eq!(state.columns().len(), 8);
        assert_eq!(state.columns()[0].title, "Name");
        assert_eq!(state.columns()[0].button, CellButton::None);
        assert!(!state.columns()[0].button_enabled);
        assert_eq!(state.columns()[1].title, "Show");
        assert_eq!(state.columns()[1].button, CellButton::DropDown);
        assert_eq!(state.columns()[1].choices, ["No", "Yes"]);
        assert_eq!(state.columns()[7].title, "Color");
        assert_eq!(state.columns()[7].button, CellButton::Ellipsis);
        assert!(state.columns().iter().all(|column| column.header_centered));
        assert!(state.columns().iter().all(|column| column.header_bold));
        assert_eq!(state.cell(7, 1), Some(""));
    }

    #[test]
    fn show_restores_name_caption_and_is_safe_before_creation() {
        let mut state = State::new(1, 8);
        discard(state.update(Message::Shown));
        assert!(state.columns().is_empty());

        state.on_create(Path::new("C:/Tina"), 665, 355, options());
        state.columns[0].title = "Changed".to_owned();

        discard(state.update(Message::Shown));

        assert_eq!(state.columns()[0].title, "Name");
    }

    #[test]
    fn deactivate_releases_the_hint_window_but_keeps_other_state() {
        let mut state = State::new(2, 8);
        state.on_create(Path::new("C:/Tina"), 665, 355, options());
        state.begin_edit(Some(0), Some(1), "PIN_A", true);

        discard(state.update(Message::Deactivated));

        assert!(state.edit_session().active_editor().is_some());
        assert!(state.edit_session().edit_mode());
        assert_eq!(state.hint_window_state(), HintWindowState::Unavailable);
        assert!(state.color_dialog_ready());
        assert_eq!(
            state.configuration_path(),
            Some(Path::new("C:/Tina/tina.ini"))
        );
    }

    #[test]
    fn destroy_releases_row_colors_and_configuration_only() {
        let mut state = State::new(2, 8);
        state.on_create(Path::new("C:/Tina"), 665, 355, options());
        state.set_row_colors(vec![0x0012_3456]);

        discard(state.update(Message::Destroyed));

        assert_eq!(state.configuration_path(), None);
        assert_eq!(
            state.cell_draw_plan(7, 1, DrawBounds::default(), CellStyle::default()),
            Err(CellDrawError::MissingRowColor { row: 1 })
        );
        assert!(state.color_dialog_ready());
        assert_eq!(state.hint_window_state(), HintWindowState::Hidden);
        assert_eq!(state.columns().len(), 8);
    }

    #[test]
    fn grid_key_down_hides_the_hint_and_preserves_the_pending_editor() {
        let mut state = State::new(2, 8);
        state.on_create(Path::new("C:/Tina"), 665, 355, options());
        state.begin_edit(Some(0), Some(1), "PIN_A", true);
        state.hint_window = HintWindowState::Visible;

        discard(state.update(Message::GridKeyDown));

        assert_eq!(state.hint_window_state(), HintWindowState::Hidden);
        assert!(state.edit_session().edit_mode());
        assert_eq!(
            state
                .edit_session()
                .active_editor()
                .map(|editor| editor.text.as_str()),
            Some("PIN_A")
        );
    }

    #[test]
    fn name_trigger_key_shows_a_centered_hint_below_the_selected_cell() {
        let mut state = State::new(2, 8);
        state.on_create(Path::new("C:/Tina"), 665, 355, options());
        let mut port = HintPort {
            measured: HintSize {
                width: 80,
                height: 24,
            },
            ..HintPort::default()
        };
        let expected = HintOverlay {
            text: "Pin-name syntax".to_owned(),
            bounds: DrawBounds {
                left: 140,
                top: 260,
                right: 220,
                bottom: 284,
            },
            background_color: SYSTEM_INFORMATION_BACKGROUND,
        };

        assert_eq!(
            state.on_grid_key_press(
                ':',
                0,
                DrawBounds {
                    left: 20,
                    top: 100,
                    right: 120,
                    bottom: 150,
                },
                ScreenPoint { x: 110, y: 100 },
                1920,
                &mut port,
            ),
            Ok(KeyPressResult {
                remaining_key: None,
                overlay: Some(expected.clone()),
            })
        );
        assert_eq!(port.inputs, vec![(1920, "Pin-name syntax".to_owned())]);
        assert_eq!(state.hint_window_state(), HintWindowState::Visible);
        assert_eq!(state.active_hint(), Some(&expected));
    }

    #[test]
    fn non_trigger_keys_and_non_name_columns_are_unchanged() {
        let mut state = State::new(2, 8);
        state.on_create(Path::new("C:/Tina"), 665, 355, options());
        let mut port = HintPort::default();

        for (key, column) in [('A', 0), ('*', 1)] {
            assert_eq!(
                state.on_grid_key_press(
                    key,
                    column,
                    DrawBounds::default(),
                    ScreenPoint::default(),
                    1920,
                    &mut port,
                ),
                Ok(KeyPressResult {
                    remaining_key: Some(key),
                    overlay: None,
                })
            );
        }
        assert!(port.inputs.is_empty());
        assert_eq!(state.hint_window_state(), HintWindowState::Hidden);
        state.on_deactivate();
        assert_eq!(
            state.on_grid_key_press(
                ',',
                0,
                DrawBounds::default(),
                ScreenPoint::default(),
                1920,
                &mut port,
            ),
            Err(PinNameHintError::Unavailable)
        );
    }

    #[test]
    fn selecting_color_and_regular_cells_switches_the_editor_color() {
        let mut state = State::new(3, 8);
        state.set_row_colors(vec![0x0012_3456, 0x0065_4321]);

        assert_eq!(state.on_select_cell(7, 2, 0x00ab_cdef), Ok(0x0065_4321));
        assert_eq!(state.default_editor_color(), Some(0x00ab_cdef));
        assert_eq!(state.editor_color(), Some(0x0065_4321));
        assert_eq!(state.selected_cell(), Some((7, 2)));

        assert_eq!(state.on_select_cell(3, 1, 0x0000_0000), Ok(0x00ab_cdef));
        assert_eq!(state.editor_color(), Some(0x00ab_cdef));
        assert_eq!(state.selected_cell(), Some((3, 1)));
    }

    #[test]
    fn invalid_color_row_preserves_the_prior_selection_and_applied_color() {
        let mut state = State::new(2, 8);
        state.set_row_colors(vec![0x0012_3456]);
        assert_eq!(state.on_select_cell(2, 1, 0x00ab_cdef), Ok(0x00ab_cdef));

        assert_eq!(
            state.on_select_cell(7, 0, 0x0000_0000),
            Err(PinCellSelectionError { row: 0 })
        );
        assert_eq!(state.default_editor_color(), Some(0x00ab_cdef));
        assert_eq!(state.editor_color(), Some(0x00ab_cdef));
        assert_eq!(state.selected_cell(), Some((2, 1)));
    }

    #[test]
    fn draw_skips_header_bolds_bus_name_and_overlays_color_cell() {
        let mut state = State::new(2, 8);
        state.on_create(Path::new("C:/Tina"), 665, 355, options());
        state.cells[1][0] = "DATA".to_owned();
        state.cells[1][3] = "Bus".to_owned();
        state.cells[1][7] = "ignored".to_owned();
        state.set_row_colors(vec![0x0012_3456]);
        let bounds = DrawBounds {
            left: 4,
            top: 20,
            right: 100,
            bottom: 40,
        };
        let style = CellStyle {
            text_color: 1,
            background_color: 2,
            bold: false,
            alignment: 0,
        };

        assert_eq!(state.cell_draw_plan(0, 0, bounds, style), Ok(None));
        assert_eq!(
            state.cell_draw_plan(0, 1, bounds, style),
            Ok(Some(CellDrawPlan {
                text: "DATA".to_owned(),
                bounds,
                horizontal_inset: 2,
                vertical_inset: 2,
                style: CellStyle {
                    bold: true,
                    ..style
                },
                overlay_color: None,
            }))
        );
        assert_eq!(
            state.cell_draw_plan(7, 1, bounds, style),
            Ok(Some(CellDrawPlan {
                text: "ignored".to_owned(),
                bounds,
                horizontal_inset: 2,
                vertical_inset: 2,
                style,
                overlay_color: Some(0x0012_3456),
            }))
        );
    }

    #[test]
    fn color_draw_reports_a_missing_row_color() {
        let mut state = State::new(2, 8);
        state.on_create(Path::new("C:/Tina"), 665, 355, options());

        assert_eq!(
            state.cell_draw_plan(7, 1, DrawBounds::default(), CellStyle::default()),
            Err(CellDrawError::MissingRowColor { row: 1 })
        );
    }

    #[test]
    fn row_color_selection_applies_choice_and_persists_all_custom_colors() {
        let loaded = vec![CustomColorEntry {
            name: "ColorA".to_owned(),
            value: "255".to_owned(),
        }];
        let accepted = vec![
            CustomColorEntry {
                name: "ColorA".to_owned(),
                value: "65280".to_owned(),
            },
            CustomColorEntry {
                name: "ColorB".to_owned(),
                value: "16711680".to_owned(),
            },
        ];
        let mut port = ColorPort {
            loaded: loaded.clone(),
            choice: Some(PinColorChoice {
                color: 0x0000_ff00,
                custom_colors: accepted.clone(),
            }),
            ..ColorPort::default()
        };
        let mut state = State::new(3, 8);
        state.set_row_colors(vec![0x0000_00ff, 0x00ff_0000]);

        assert_eq!(state.select_row_color(2, &mut port), Ok(true));

        assert_eq!(state.active_color(), Some(0x0000_ff00));
        assert!(state.grid_repaint_requested());
        assert_eq!(port.choose_inputs, vec![(0x00ff_0000, loaded)]);
        assert_eq!(
            state
                .cell_draw_plan(7, 2, DrawBounds::default(), CellStyle::default())
                .expect("color exists")
                .expect("data row")
                .overlay_color,
            Some(0x0000_ff00)
        );
        assert_eq!(
            port.writes,
            accepted
                .into_iter()
                .map(|entry| (COLOR_DIALOG_CUSTOM_COLORS_SECTION.to_owned(), entry))
                .collect::<Vec<_>>()
        );
    }

    #[test]
    fn canceled_row_color_dialog_preserves_the_row_and_reports_missing_rows() {
        let mut port = ColorPort {
            loaded: vec![CustomColorEntry {
                name: "ColorA".to_owned(),
                value: "255".to_owned(),
            }],
            ..ColorPort::default()
        };
        let mut state = State::new(2, 8);
        state.set_row_colors(vec![0x0012_3456]);

        assert_eq!(state.select_row_color(1, &mut port), Ok(false));
        assert_eq!(state.active_color(), Some(0x0012_3456));
        assert!(!state.grid_repaint_requested());
        assert!(port.writes.is_empty());
        assert_eq!(
            state.select_row_color(0, &mut port),
            Err(PinColorError::MissingRowColor { row: 0 })
        );
    }

    #[test]
    fn ok_commits_active_cell_before_modal_acceptance() {
        let mut state = State::new(2, 8);
        state.begin_edit(Some(0), Some(1), "PIN_A", true);
        state.click_ok().expect("valid cell");
        assert_eq!(state.cell(0, 1), Some("PIN_A"));
        assert_eq!(state.modal_result(), ModalResult::Ok);
        assert!(state.edit_session().active_editor().is_none());
        assert!(state.edit_session().repaint_requested());
    }

    #[test]
    fn ok_without_active_editor_accepts_without_cell_change() {
        let mut state = State::new(1, 8);
        state.click_ok().expect("no active editor is valid");
        assert_eq!(state.modal_result(), ModalResult::Ok);
        assert_eq!(state.cell(0, 0), Some(""));
    }

    #[test]
    fn invalid_coordinates_close_editor_without_a_write() {
        let mut state = State::new(1, 8);
        state.begin_edit(None, Some(0), "PIN_A", false);
        state.click_ok().expect("unpositioned editor closes");
        assert_eq!(state.modal_result(), ModalResult::Ok);
        assert_eq!(state.cell(0, 0), Some(""));
        assert!(state.edit_session().active_editor().is_none());
    }

    #[test]
    fn setter_error_prevents_modal_acceptance_and_retains_editor() {
        let mut state = State::new(1, 8);
        state.begin_edit(Some(8), Some(0), "PIN_A", false);
        assert!(state.click_ok().is_err());
        assert_eq!(state.modal_result(), ModalResult::None);
        assert!(state.last_error().is_some());
        assert!(state.edit_session().active_editor().is_some());
        assert!(!state.edit_session().edit_mode());
    }
}
