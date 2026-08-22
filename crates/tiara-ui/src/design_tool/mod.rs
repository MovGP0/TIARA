//! Cohesive Design Tool editor and staged dialog state.
//!
//! The existing `iced` dependency supplies the editor, messages, and widgets.
//! `std` supplies paths, text containers, collections, and transactions. The
//! existing global-parameter validation and numerical-format editor are
//! composed here. Application runtime, parsing, storage, clipboard, schematic,
//! popup, and symbol-table work stays behind typed adapters. No additional
//! state-management, parser, or platform crate is needed at this boundary.

mod adapters;
pub mod confirmation_dialog;
mod editor;
pub mod options_dialog;

pub use confirmation_dialog::{
    CloseConfirmationDialog, CloseConfirmationMessage, CloseConfirmationResult,
};
pub use options_dialog::{DesignToolOptionValues, OptionsDialog, OptionsMessage};

use std::ops::Range;
use std::path::{Path, PathBuf};

use adapters::{
    DesignToolClipboard, DesignToolDocument, DesignToolGeometry, DesignToolHost,
    DesignToolLifecycleHost, DesignToolParser, DesignToolStorage, ExecutionMode, ExecutionRequest,
    Interface, Notice, ParameterRecord, PopupAnchor, SessionSnapshot, SymbolTableRequest,
};
use editor::{ProgramEditor, TerminalState};
use iced::widget::{button, column, row, text, text_editor, text_input};
use iced::{Element, Length};
use tiara_core::global_parameters::{GlobalParameterRow, validate_global_parameter_rows};

use crate::numerical_format::{InterpreterNumericalSettings, Window as NumericalFormatEditor};
use crate::shared::window_shell;

pub const TITLE: &str = "Design Tool";
pub const SCREENSHOT: &str = "screenshots/Design_Tool_Window.png";
pub const FORM_RESOURCE: &str = "frmDesignTool";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01493a30");
pub const LIBRARY_EVALUATION: &str = "iced supplies the text editor and message-driven UI; std supplies paths and text containers; tiara-core global-parameter validation and the existing numerical-format editor are composed; application parsing, encoding-aware storage, mode-aware clipboard, execution, popup, schematic formatting, and symbol-table behavior use typed adapters.";
pub const HELP_CONTEXT: u32 = 0x4a9;
pub const PARAMETER_HEADERS: [&str; 5] = ["Parameter", "Value", "Min", "Max", "Comment"];
const STATUS: &str = "Successfully compiled";
const LIFECYCLE_ACTIVE: u8 = 1;
const LIFECYCLE_RESOURCES: u8 = 1 << 1;
const LIFECYCLE_TIMER: u8 = 1 << 2;
const LIFECYCLE_INTERPRETER: u8 = 1 << 3;
const LIFECYCLE_SHOWN: u8 = 1 << 4;
const IDLE_UNDO: u8 = 1;
const IDLE_CUT: u8 = 1 << 1;
const IDLE_COPY: u8 = 1 << 2;
const IDLE_PASTE: u8 = 1 << 3;
const MENUS: &[(&str, &[&str])] = &[
    ("File", &["New", "Open...", "Save", "Save As...", "Close"]),
    ("Edit", &["Undo", "Cut", "Copy", "Paste", "Select All"]),
    ("Settings", &["Options...", "Font..."]),
    ("Run", &["Compile", "Run"]),
];

#[derive(Debug, Clone, PartialEq, Eq)]
struct DesignParameterRow {
    parameter: GlobalParameterRow,
    minimum: Option<String>,
    maximum: Option<String>,
    comment: String,
}

impl DesignParameterRow {
    fn from_record(record: ParameterRecord) -> Self {
        Self {
            parameter: GlobalParameterRow::new(record.name, record.value, true),
            minimum: record.minimum,
            maximum: record.maximum,
            comment: record.comment,
        }
    }

    fn record(&self) -> ParameterRecord {
        ParameterRecord {
            name: self.parameter.name.clone(),
            value: self.parameter.value.clone(),
            minimum: self.minimum.clone(),
            maximum: self.maximum.clone(),
            comment: self.comment.clone(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct ParameterTable {
    rows: Vec<DesignParameterRow>,
    selected: usize,
    generated_name_counter: u32,
    default_value: String,
}

impl Default for ParameterTable {
    fn default() -> Self {
        Self {
            rows: vec![DesignParameterRow::from_record(ParameterRecord {
                name: String::new(),
                value: String::new(),
                minimum: None,
                maximum: None,
                comment: String::new(),
            })],
            selected: 0,
            generated_name_counter: 0,
            default_value: String::new(),
        }
    }
}

impl ParameterTable {
    fn records(&self) -> Vec<ParameterRecord> {
        self.rows.iter().map(DesignParameterRow::record).collect()
    }

    fn replace_records(&mut self, records: Vec<ParameterRecord>) {
        self.rows = records
            .into_iter()
            .map(DesignParameterRow::from_record)
            .collect();
        if self.rows.is_empty() {
            self.rows
                .push(DesignParameterRow::from_record(ParameterRecord {
                    name: String::new(),
                    value: String::new(),
                    minimum: None,
                    maximum: None,
                    comment: String::new(),
                }));
        }
        self.selected = 0;
    }

    fn validate(&self, parser: &impl DesignToolParser) -> Result<(), String> {
        let rows = self
            .rows
            .iter()
            .map(|row| row.parameter.clone())
            .collect::<Vec<_>>();
        validate_global_parameter_rows(&rows, &[]).map_err(|error| error.to_string())?;
        for row in &self.rows {
            parser.validate_parameter(&row.record())?;
        }
        Ok(())
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum BackgroundMode {
    #[default]
    Transparent,
    Opaque,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum BorderMode {
    #[default]
    None,
    Solid,
    Dotted,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct EditorColor(pub u32);

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EditorFont {
    pub family: String,
    pub size_points: u16,
}

impl Default for EditorFont {
    fn default() -> Self {
        Self {
            family: "Consolas".to_owned(),
            size_points: 10,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
struct AppearanceState {
    background: BackgroundMode,
    opaque_color: EditorColor,
    border: BorderMode,
    font: EditorFont,
    popup_state_active: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FocusTarget {
    ProgramEditor,
    OtherControl,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DeleteRowOutcome {
    NoRows,
    FirstRowProtected,
    Declined,
    Deleted,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseAction {
    Free,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MouseButton {
    Left,
    Right,
    Middle,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CellAlignment {
    Left,
    Center,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CellTone {
    Header,
    Data,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SortDirection {
    None,
    Ascending,
    Descending,
}

impl SortDirection {
    const fn next(self) -> Self {
        match self {
            Self::None => Self::Ascending,
            Self::Ascending => Self::Descending,
            Self::Descending => Self::None,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ParameterCellPresentation {
    pub alignment: CellAlignment,
    pub tone: CellTone,
    pub sort_direction: SortDirection,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct CaretStatus {
    pub line: usize,
    pub column: usize,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct IdleActionState(u8);

impl IdleActionState {
    #[must_use]
    pub const fn undo(self) -> bool {
        self.0 & IDLE_UNDO != 0
    }

    #[must_use]
    pub const fn cut(self) -> bool {
        self.0 & IDLE_CUT != 0
    }

    #[must_use]
    pub const fn copy(self) -> bool {
        self.0 & IDLE_COPY != 0
    }

    #[must_use]
    pub const fn paste(self) -> bool {
        self.0 & IDLE_PASTE != 0
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
struct ParameterSortState {
    column: usize,
    direction: SortDirection,
}

impl Default for ParameterSortState {
    fn default() -> Self {
        Self {
            column: 0,
            direction: SortDirection::None,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PendingAction {
    OpenBackground,
    DeleteRow,
    Run,
    NewSession,
    Restore,
    SaveAndClose,
    Place,
    Cancel,
    ShowSymbolTable,
}

#[derive(Debug, Clone)]
pub enum Message {
    TitleChanged(String),
    ProgramEdited(text_editor::Action),
    AddRow,
    DeleteRow,
    ToggleAdvanced,
    ParametersHidden(bool),
    OpenBackground,
    Run,
    NewSession,
    Restore,
    SaveAndClose,
    Place,
    Cancel,
    ShowSymbolTable,
    CommandSelected,
}

#[derive(Debug, Clone, Copy, PartialEq)]
struct LayoutState {
    advanced_expanded: bool,
    parameters_hidden: bool,
    saved_parameter_panel_height: f32,
    parameter_panel_height: f32,
}

impl Default for LayoutState {
    fn default() -> Self {
        Self {
            advanced_expanded: true,
            parameters_hidden: false,
            saved_parameter_panel_height: 220.0,
            parameter_panel_height: 220.0,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
struct SessionState {
    file_path: Option<PathBuf>,
    placement_required: bool,
    close_requested: bool,
    generation: u64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
struct ToolOptionState {
    restore_component_colors: bool,
    keep_cursor_position: bool,
    ignore_min_max: bool,
}

impl Default for ToolOptionState {
    fn default() -> Self {
        Self {
            restore_component_colors: true,
            keep_cursor_position: false,
            ignore_min_max: false,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
struct LicenseState {
    licensed: bool,
    warning_applicable: bool,
}

impl Default for LicenseState {
    fn default() -> Self {
        Self {
            licensed: true,
            warning_applicable: true,
        }
    }
}

#[derive(Debug)]
pub struct Window {
    caption: String,
    title: String,
    parameters: ParameterTable,
    program: ProgramEditor,
    terminal: TerminalState,
    numerical: InterpreterNumericalSettings,
    numerical_editor: NumericalFormatEditor,
    appearance: AppearanceState,
    interface: Interface,
    search_text: String,
    replacement_text: String,
    layout: LayoutState,
    session: SessionState,
    options: ToolOptionState,
    license: LicenseState,
    geometry: DesignToolGeometry,
    parameter_column_widths: [i32; 5],
    parameter_sort: ParameterSortState,
    caret_status: CaretStatus,
    idle_actions: IdleActionState,
    lifecycle_flags: u8,
    more_caption: String,
    python_available: bool,
    close_action: Option<CloseAction>,
    pending_action: Option<PendingAction>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            caption: TITLE.to_owned(),
            title: "Noname".to_owned(),
            parameters: ParameterTable::default(),
            program: ProgramEditor::default(),
            terminal: TerminalState::default(),
            numerical: InterpreterNumericalSettings::default(),
            numerical_editor: NumericalFormatEditor::default(),
            appearance: AppearanceState::default(),
            interface: Interface::default(),
            search_text: String::new(),
            replacement_text: String::new(),
            layout: LayoutState::default(),
            session: SessionState::default(),
            options: ToolOptionState::default(),
            license: LicenseState::default(),
            geometry: DesignToolGeometry {
                client_width: 800,
                client_height: 600,
                parameter_grid_height: 220,
                simple_panel_height: 220,
                advanced_panel_height: 380,
            },
            parameter_column_widths: [0; 5],
            parameter_sort: ParameterSortState::default(),
            caret_status: CaretStatus::default(),
            idle_actions: IdleActionState::default(),
            lifecycle_flags: 0,
            more_caption: "More".to_owned(),
            python_available: false,
            close_action: None,
            pending_action: None,
        }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::TitleChanged(title) => self.title = title,
            Message::ProgramEdited(action) => self.program.perform(action),
            Message::AddRow => self.add_parameter_row(),
            Message::DeleteRow => self.pending_action = Some(PendingAction::DeleteRow),
            Message::ToggleAdvanced => self.toggle_advanced_panel(),
            Message::ParametersHidden(hidden) => self.set_parameters_hidden(hidden),
            Message::OpenBackground => self.pending_action = Some(PendingAction::OpenBackground),
            Message::Run => self.pending_action = Some(PendingAction::Run),
            Message::NewSession => self.pending_action = Some(PendingAction::NewSession),
            Message::Restore => self.pending_action = Some(PendingAction::Restore),
            Message::SaveAndClose => self.pending_action = Some(PendingAction::SaveAndClose),
            Message::Place => self.pending_action = Some(PendingAction::Place),
            Message::Cancel => self.pending_action = Some(PendingAction::Cancel),
            Message::ShowSymbolTable => {
                self.pending_action = Some(PendingAction::ShowSymbolTable);
            }
            Message::CommandSelected => {}
        }
    }

    /// Ports Ghidra function `FUN_01494080` at `0x01494080`.
    ///
    /// The host acquires runtime, dialog, parser, and interpreter resources and
    /// returns one typed snapshot. The UI retains owned values, assigns help
    /// context `0x4A9`, initializes localized column identities, marks the
    /// application session active, and calculates the initial grid layout.
    ///
    /// # Errors
    ///
    /// Returns the startup or active-state publication error. A failed active
    /// publication releases resources acquired by the startup call.
    pub fn form_create(&mut self, host: &mut impl DesignToolLifecycleHost) -> Result<(), String> {
        let startup = host.load_startup()?;
        if let Err(error) = host.set_active(true) {
            host.release_resources();
            return Err(error);
        }
        self.title = startup.title;
        self.program.replace_text(startup.source, false);
        self.parameters.replace_records(startup.parameters);
        self.interface = startup.interface;
        self.numerical = startup.numerical;
        self.terminal.replace_text(startup.terminal_text);
        self.geometry = startup.geometry;
        self.lifecycle_flags = LIFECYCLE_ACTIVE | LIFECYCLE_RESOURCES | LIFECYCLE_TIMER;
        if startup.interpreter_active {
            self.lifecycle_flags |= LIFECYCLE_INTERPRETER;
        }
        self.parameter_sort = ParameterSortState::default();
        self.form_resize(self.geometry.client_width);
        Ok(())
    }

    /// Ports Ghidra function `FUN_014939f0` at `0x014939F0`.
    ///
    /// The timer is one-shot. It disables itself and requests an interpreter
    /// stop only when creation supplied an active interpreter.
    pub fn timer_elapsed(&mut self, host: &mut impl DesignToolLifecycleHost) {
        self.set_lifecycle_flag(LIFECYCLE_TIMER, false);
        if self.lifecycle_flag(LIFECYCLE_INTERPRETER) {
            host.stop_interpreter();
        }
    }

    /// Ports Ghidra function `FUN_01494ee0` at `0x01494EE0`.
    ///
    /// Show-time localization and Python availability remain host concerns.
    /// The returned values are retained as ordinary iced view state.
    ///
    /// # Errors
    ///
    /// Returns an error when localization or selected-interface preparation fails.
    pub fn form_show(&mut self, host: &mut impl DesignToolLifecycleHost) -> Result<(), String> {
        let show = host.prepare_show(self.interface)?;
        self.caption = show.title;
        self.more_caption = show.more_caption;
        self.python_available = show.python_available;
        self.set_lifecycle_flag(LIFECYCLE_SHOWN, true);
        Ok(())
    }

    /// Ports Ghidra function `FUN_01495040` at `0x01495040`.
    ///
    /// All application-owned resources acquired during creation are released
    /// once. The active-session flag is cleared even when its host publication
    /// fails.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot publish the inactive state.
    pub fn form_destroy(&mut self, host: &mut impl DesignToolLifecycleHost) -> Result<(), String> {
        let was_active = self.lifecycle_flag(LIFECYCLE_ACTIVE);
        if self.lifecycle_flag(LIFECYCLE_RESOURCES) {
            host.release_resources();
        }
        self.set_lifecycle_flag(LIFECYCLE_RESOURCES, false);
        self.set_lifecycle_flag(LIFECYCLE_INTERPRETER, false);
        self.set_lifecycle_flag(LIFECYCLE_TIMER, false);
        self.set_lifecycle_flag(LIFECYCLE_SHOWN, false);
        self.set_lifecycle_flag(LIFECYCLE_ACTIVE, false);
        if was_active {
            host.set_active(false)
        } else {
            Ok(())
        }
    }

    /// Ports Ghidra function `FUN_014950f0` at `0x014950F0`.
    ///
    /// The five parameter columns share the available width after the
    /// recovered 30-pixel allowance. An empty column set is not representable
    /// in the typed Design Tool grid.
    pub const fn form_resize(&mut self, parameter_grid_width: i32) {
        let width = parameter_grid_width.saturating_sub(30) / 5;
        self.parameter_column_widths = [width; 5];
    }

    /// Ports Ghidra function `FUN_014970f0` at `0x014970F0`.
    ///
    /// An active Design Tool deactivates its linked objects and refreshes the
    /// schematic. The VCL close action is always `caFree`.
    pub fn form_close(&mut self, host: &mut impl DesignToolLifecycleHost) -> CloseAction {
        if self.lifecycle_flag(LIFECYCLE_ACTIVE) {
            host.deactivate_design_objects();
            host.refresh_schematic();
        }
        self.close_action = Some(CloseAction::Free);
        CloseAction::Free
    }

    /// Ports Ghidra function `FUN_01498010` at `0x01498010`.
    ///
    /// A plain Enter can submit the editor through the recovered run path. In
    /// all cases the caret line and column status is refreshed afterwards.
    ///
    /// # Errors
    ///
    /// Returns the host execution error for an accepted Enter submission.
    pub fn program_key_up(
        &mut self,
        key: u16,
        shift: bool,
        host: &mut impl DesignToolHost,
    ) -> Result<(), String> {
        if key == 13 && !shift && self.interface != Interface::Python {
            host.execute(self.execution_request(ExecutionMode::Run))?;
        }
        self.refresh_caret_status();
        Ok(())
    }

    /// Ports Ghidra function `FUN_01498150` at `0x01498150`.
    pub fn program_mouse_down(&mut self) {
        self.refresh_caret_status();
    }

    /// Ports Ghidra function `FUN_01498ce0` at `0x01498CE0`.
    ///
    /// Idle updates are active after creation. Three editor commands share the
    /// recovered editor availability query; Paste uses host clipboard state.
    pub fn application_idle(&mut self, host: &mut impl DesignToolLifecycleHost) {
        if !self.lifecycle_flag(LIFECYCLE_ACTIVE) {
            return;
        }
        let editor_available = !self.program.text().is_empty();
        let mut flags = 0;
        if editor_available {
            flags |= IDLE_UNDO | IDLE_CUT | IDLE_COPY;
        }
        if host.clipboard_text_available() {
            flags |= IDLE_PASTE;
        }
        self.idle_actions = IdleActionState(flags);
    }

    /// Ports Ghidra function `FUN_0149ac90` at `0x0149AC90`.
    ///
    /// Fixed cells use bold centered header styling. Data cells use normal
    /// left-aligned styling. Only the active fixed header exposes its current
    /// sort direction.
    #[must_use]
    pub const fn parameter_cell_presentation(
        &self,
        column: usize,
        row: usize,
    ) -> ParameterCellPresentation {
        if row == 0 {
            ParameterCellPresentation {
                alignment: CellAlignment::Center,
                tone: CellTone::Header,
                sort_direction: if column == self.parameter_sort.column {
                    self.parameter_sort.direction
                } else {
                    SortDirection::None
                },
            }
        } else {
            ParameterCellPresentation {
                alignment: CellAlignment::Left,
                tone: CellTone::Data,
                sort_direction: SortDirection::None,
            }
        }
    }

    /// Ports Ghidra function `FUN_0149af30` at `0x0149AF30`.
    ///
    /// Only the active fixed header cycles None, Ascending, and Descending.
    /// The two active directions immediately reorder parameter records.
    pub fn fixed_parameter_cell_clicked(&mut self, column: usize, row: usize) -> SortDirection {
        if row != 0 || column != self.parameter_sort.column {
            return self.parameter_sort.direction;
        }
        self.parameter_sort.direction = self.parameter_sort.direction.next();
        if self.parameter_sort.direction != SortDirection::None {
            self.sort_parameters();
        }
        self.parameter_sort.direction
    }

    /// Ports Ghidra function `FUN_0149ba10` at `0x0149BA10`.
    ///
    /// Left and Backspace are consumed inside the protected five-character
    /// terminal prompt. Other keys and later caret columns continue normally.
    #[must_use]
    pub const fn terminal_key_down(caret_column: usize, key: u16) -> bool {
        caret_column < 6 && matches!(key, 0x25 | 8)
    }

    /// Ports Ghidra function `FUN_0149ba90` at `0x0149BA90`.
    ///
    /// A plain Enter finds the latest prompt, evaluates its command through the
    /// typed host, appends any result, and creates the next prompt.
    ///
    /// # Errors
    ///
    /// Returns the host evaluator error. Terminal text is unchanged on error.
    pub fn terminal_key_up(
        &mut self,
        key: u16,
        shift: bool,
        host: &mut impl DesignToolLifecycleHost,
    ) -> Result<bool, String> {
        if key != 13 || shift {
            return Ok(false);
        }
        let Some(command) = self.terminal.last_prompt_command() else {
            return Ok(false);
        };
        let response = host.evaluate_terminal(&command)?;
        self.terminal.append_evaluation(&response);
        Ok(true)
    }

    /// Ports Ghidra function `FUN_0149bbd0` at `0x0149BBD0`.
    ///
    /// A right click translates the terminal-local point to screen space and
    /// opens the terminal popup. Other buttons are no-ops.
    ///
    /// # Errors
    ///
    /// Returns the popup host error for a right click.
    pub fn terminal_mouse_down(
        &self,
        button: MouseButton,
        terminal_origin: PopupAnchor,
        local_point: PopupAnchor,
        host: &mut impl DesignToolLifecycleHost,
    ) -> Result<bool, String> {
        if button != MouseButton::Right {
            return Ok(false);
        }
        host.open_terminal_popup(PopupAnchor {
            x: terminal_origin.x + local_point.x,
            y: terminal_origin.y + local_point.y,
        })?;
        Ok(true)
    }

    /// Ports Ghidra function `FUN_01493a30` at `0x01493A30`.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot open the background popup.
    pub fn open_background_popup(
        &mut self,
        host: &mut impl DesignToolHost,
        panel_origin: PopupAnchor,
        panel_height: f32,
    ) -> Result<(), String> {
        self.appearance.popup_state_active = false;
        host.open_background_popup(PopupAnchor {
            x: panel_origin.x,
            y: panel_origin.y + panel_height + 2.0,
        })
    }

    /// Ports Ghidra function `FUN_014953c0` at `0x014953C0`.
    pub fn add_parameter_row(&mut self) {
        self.parameters.generated_name_counter =
            self.parameters.generated_name_counter.saturating_add(1);
        let record = ParameterRecord {
            name: format!("NewParam{}", self.parameters.generated_name_counter),
            value: self.parameters.default_value.clone(),
            minimum: None,
            maximum: None,
            comment: String::new(),
        };
        self.parameters
            .rows
            .push(DesignParameterRow::from_record(record));
        self.parameters.selected = self.parameters.rows.len().saturating_sub(1);
    }

    /// Ports Ghidra function `FUN_014954d0` at `0x014954D0`.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot show the protection message or confirmation.
    pub fn delete_parameter_row(
        &mut self,
        host: &mut impl DesignToolHost,
    ) -> Result<DeleteRowOutcome, String> {
        match self.parameters.rows.len() {
            0 => Ok(DeleteRowOutcome::NoRows),
            1 => {
                host.notify(Notice::FirstRowCannotDelete)?;
                Ok(DeleteRowOutcome::FirstRowProtected)
            }
            _ if !host.confirm(Notice::ConfirmDeleteRow)? => Ok(DeleteRowOutcome::Declined),
            _ => {
                let selected = self
                    .parameters
                    .selected
                    .min(self.parameters.rows.len().saturating_sub(1));
                self.parameters.rows.remove(selected);
                self.parameters.selected = selected.min(self.parameters.rows.len() - 1);
                Ok(DeleteRowOutcome::Deleted)
            }
        }
    }

    /// Ports Ghidra function `FUN_01496950` at `0x01496950`.
    ///
    /// # Errors
    ///
    /// Returns the first host notification, validation, preparation, or execution error.
    pub fn run(
        &mut self,
        parser: &impl DesignToolParser,
        host: &mut impl DesignToolHost,
    ) -> Result<(), String> {
        self.report_license_warning(host)?;
        self.parameters.validate(parser)?;
        host.execute(self.execution_request(ExecutionMode::Run))
    }

    /// Ports Ghidra function `FUN_01497120` at `0x01497120`.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot resolve the new-session confirmation.
    pub fn new_session(&mut self, host: &mut impl DesignToolHost) -> Result<bool, String> {
        if !host.confirm(Notice::ConfirmNewSession)? {
            return Ok(false);
        }
        self.program.replace_text(String::new(), false);
        self.session.file_path = None;
        self.session.generation = self.session.generation.saturating_add(1);
        self.session.close_requested = false;
        Ok(true)
    }

    /// Ports Ghidra function `FUN_01497f00` at `0x01497F00`.
    ///
    /// # Errors
    ///
    /// Returns an error when circuit restoration, refresh, or notification fails.
    pub fn restore_circuit(&mut self, host: &mut impl DesignToolHost) -> Result<(), String> {
        host.restore_circuit()?;
        host.notify(Notice::CircuitRestored)
    }

    /// Ports Ghidra function `FUN_01498370` at `0x01498370`.
    ///
    /// # Errors
    ///
    /// Returns the first validation, schematic-placement, or session-save error.
    pub fn save_and_close(
        &mut self,
        parser: &impl DesignToolParser,
        host: &mut impl DesignToolHost,
    ) -> Result<(), String> {
        self.parameters.validate(parser)?;
        if self.session.placement_required {
            self.place_in_schematic(parser, host)?;
        }
        host.save_session(self.session_snapshot())?;
        self.program.set_modified(false);
        self.session.close_requested = true;
        Ok(())
    }

    /// Ports Ghidra function `FUN_01498400` at `0x01498400`.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot add or update the schematic text.
    pub fn place_in_schematic(
        &self,
        parser: &impl DesignToolParser,
        host: &mut impl DesignToolHost,
    ) -> Result<(), String> {
        let text = parser.format_placement(&self.title, &self.parameters.records())?;
        host.place_in_schematic(text)
    }

    /// Ports Ghidra function `FUN_014987a0` at `0x014987A0`.
    pub const fn set_parameters_hidden(&mut self, hidden: bool) {
        self.layout.parameters_hidden = hidden;
        self.layout.parameter_panel_height = if hidden {
            3.0
        } else {
            self.layout.saved_parameter_panel_height
        };
    }

    /// Ports Ghidra function `FUN_014987f0` at `0x014987F0`.
    pub const fn cancel(&mut self) {
        self.session.close_requested = true;
    }

    /// Ports Ghidra function `FUN_01498800` at `0x01498800`.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot refresh or show the symbol table.
    pub fn show_symbol_table(&self, host: &mut impl DesignToolHost) -> Result<(), String> {
        host.show_symbol_table(SymbolTableRequest {
            interface: self.interface,
            source: self.program.text().to_owned(),
        })
    }

    /// Ports Ghidra function `FUN_014988e0` at `0x014988E0`.
    pub const fn toggle_advanced_panel(&mut self) {
        self.layout.advanced_expanded = !self.layout.advanced_expanded;
    }

    /// Ports Ghidra function `FUN_01498b90` at `0x01498B90`.
    ///
    /// # Errors
    ///
    /// Returns an error when the shared new-session confirmation cannot be resolved.
    pub fn file_new(&mut self, host: &mut impl DesignToolHost) -> Result<bool, String> {
        self.layout.advanced_expanded = true;
        self.new_session(host)
    }

    /// Ports Ghidra function `FUN_01498bc0` at `0x01498BC0`.
    ///
    /// # Errors
    ///
    /// Returns the shared Run-path error.
    pub fn run_menu(
        &mut self,
        parser: &impl DesignToolParser,
        host: &mut impl DesignToolHost,
    ) -> Result<(), String> {
        self.run(parser, host)
    }

    /// Ports Ghidra function `FUN_01498bd0` at `0x01498BD0`.
    ///
    /// # Errors
    ///
    /// Returns the shared Run-path error.
    pub fn main_run(
        &mut self,
        parser: &impl DesignToolParser,
        host: &mut impl DesignToolHost,
    ) -> Result<(), String> {
        self.run(parser, host)
    }

    /// Ports Ghidra function `FUN_01498be0` at `0x01498BE0`.
    ///
    /// # Errors
    ///
    /// Returns the Save-and-Close error for a Yes decision.
    pub fn close_query(
        &mut self,
        decision: CloseConfirmationResult,
        restore_component_colors: bool,
        parser: &impl DesignToolParser,
        host: &mut impl DesignToolHost,
    ) -> Result<bool, String> {
        self.options.restore_component_colors = restore_component_colors;
        match decision {
            CloseConfirmationResult::Cancel => Ok(false),
            CloseConfirmationResult::No => Ok(true),
            CloseConfirmationResult::Yes => {
                self.save_and_close(parser, host)?;
                Ok(true)
            }
        }
    }

    /// Ports Ghidra function `FUN_01498d70` at `0x01498D70`.
    pub fn undo(&mut self) {
        self.layout.advanced_expanded = true;
        self.program.undo();
    }

    /// Ports Ghidra function `FUN_01498da0` at `0x01498DA0`.
    pub fn clear_terminal(&mut self) {
        self.terminal.clear_and_prompt();
    }

    /// Ports Ghidra function `FUN_01498de0` at `0x01498DE0`.
    ///
    /// # Errors
    ///
    /// Returns an error when the clipboard rejects nonempty terminal text.
    pub fn copy_terminal(
        &mut self,
        clipboard: &mut impl DesignToolClipboard,
    ) -> Result<(), String> {
        self.terminal.copy_all(clipboard)
    }

    /// Ports Ghidra function `FUN_01498e10` at `0x01498E10`.
    ///
    /// # Errors
    ///
    /// Returns an error when the terminal file cannot be written.
    pub fn save_terminal(
        &self,
        path: Option<&Path>,
        storage: &mut impl DesignToolStorage,
    ) -> Result<bool, String> {
        let Some(path) = path else {
            return Ok(false);
        };
        storage.write_text(path, self.terminal.text())?;
        Ok(true)
    }

    /// Ports Ghidra function `FUN_01498f90` at `0x01498F90`.
    pub fn select_all_terminal(&mut self) {
        self.terminal.select_all();
    }

    /// Ports Ghidra function `FUN_01498fb0` at `0x01498FB0`.
    ///
    /// # Errors
    ///
    /// Returns an error when clipboard publication fails before deletion.
    pub fn cut(&mut self, clipboard: &mut impl DesignToolClipboard) -> Result<(), String> {
        self.layout.advanced_expanded = true;
        self.program.cut(clipboard)
    }

    /// Ports Ghidra function `FUN_01498fe0` at `0x01498FE0`.
    ///
    /// # Errors
    ///
    /// Returns an error when the clipboard rejects a nonempty selection.
    pub fn copy(&mut self, clipboard: &mut impl DesignToolClipboard) -> Result<(), String> {
        self.layout.advanced_expanded = true;
        self.program.copy(clipboard)
    }

    /// Ports Ghidra function `FUN_01499010` at `0x01499010`.
    ///
    /// # Errors
    ///
    /// Returns an error when clipboard access or forwarded paste fails.
    pub fn paste(
        &mut self,
        focus: FocusTarget,
        clipboard: &mut impl DesignToolClipboard,
        host: &mut impl DesignToolHost,
    ) -> Result<(), String> {
        self.layout.advanced_expanded = true;
        match focus {
            FocusTarget::ProgramEditor => self.program.paste(clipboard),
            FocusTarget::OtherControl => host.forward_paste(),
        }
    }

    /// Ports Ghidra function `FUN_01499070` at `0x01499070`.
    pub fn delete_selection(&mut self) {
        self.layout.advanced_expanded = true;
        self.program.delete_selection();
    }

    /// Ports Ghidra function `FUN_014990a0` at `0x014990A0`.
    pub fn select_all(&mut self) {
        self.layout.advanced_expanded = true;
        self.program.select_all();
    }

    /// Ports Ghidra function `FUN_014990d0` at `0x014990D0`.
    pub fn find(&mut self, accepted_text: Option<String>) -> Option<Range<usize>> {
        self.layout.advanced_expanded = true;
        let text = accepted_text?;
        self.search_text = text;
        if self.search_text.is_empty() {
            return None;
        }
        self.search_again()
    }

    /// Ports Ghidra function `FUN_01499100` at `0x01499100`.
    pub fn replace(&mut self, accepted: Option<(String, String)>) -> Option<Range<usize>> {
        self.layout.advanced_expanded = true;
        let (search, replacement) = accepted?;
        self.search_text = search;
        self.replacement_text = replacement;
        if self.search_text.is_empty() {
            return None;
        }
        let start = self.program.selection().end;
        if self
            .program
            .replace_next(&self.search_text, &self.replacement_text, start)
        {
            Some(self.program.selection().clone())
        } else {
            None
        }
    }

    /// Ports Ghidra function `FUN_01499120` at `0x01499120`.
    pub fn search_again(&mut self) -> Option<Range<usize>> {
        self.layout.advanced_expanded = true;
        let start = self.program.selection().end;
        let found = self.program.find(&self.search_text, start)?;
        self.program.set_selection(found.clone());
        Some(found)
    }

    /// Ports Ghidra function `FUN_01499150` at `0x01499150`.
    ///
    /// # Errors
    ///
    /// Returns the first storage or parser error. A parser error leaves the editor cleared.
    pub fn open_file(
        &mut self,
        path: Option<&Path>,
        confirmed: bool,
        storage: &impl DesignToolStorage,
        parser: &impl DesignToolParser,
    ) -> Result<bool, String> {
        self.layout.advanced_expanded = true;
        let Some(path) = path.filter(|_| confirmed) else {
            return Ok(false);
        };
        let source = storage.read_text(path)?;
        self.program.replace_text(String::new(), false);
        let document = parser.parse(&source)?;
        self.apply_document(document);
        self.session.file_path = Some(path.to_owned());
        self.program.set_modified(false);
        Ok(true)
    }

    /// Ports Ghidra function `FUN_014993c0` at `0x014993C0`.
    ///
    /// # Errors
    ///
    /// Returns the first serialization or storage error.
    pub fn save_as(
        &mut self,
        path: Option<&Path>,
        storage: &mut impl DesignToolStorage,
        parser: &impl DesignToolParser,
    ) -> Result<bool, String> {
        self.layout.advanced_expanded = true;
        let Some(path) = path else {
            return Ok(false);
        };
        let text = parser.serialize(&self.document())?;
        storage.write_text(path, &text)?;
        self.session.file_path = Some(path.to_owned());
        self.program.set_modified(false);
        Ok(true)
    }

    /// Ports Ghidra function `FUN_014994a0` at `0x014994A0`.
    pub fn open_numerical_format(&mut self) {
        self.numerical_editor
            .initialize_from_interpreter(self.numerical, false);
    }

    pub const fn apply_numerical_format(&mut self) {
        if let Some(settings) = self.numerical_editor.target() {
            self.numerical = settings;
        }
    }

    /// Ports Ghidra function `FUN_01499560` at `0x01499560`.
    pub fn apply_options(&mut self, values: DesignToolOptionValues) {
        self.options.ignore_min_max = values.ignore_min_max;
        self.options.keep_cursor_position = values.keep_cursor_position;
        let interface = if values.interface_index == 1 {
            Interface::Python
        } else {
            Interface::Interpreter
        };
        self.apply_interface(interface, false);
    }

    /// Ports Ghidra function `FUN_01499620` at `0x01499620`.
    pub fn apply_interface(&mut self, interface: Interface, request_new_session: bool) {
        let changed = self.interface != interface;
        self.interface = interface;
        if changed && request_new_session {
            self.pending_action = Some(PendingAction::NewSession);
        }
    }

    /// Ports Ghidra function `FUN_0149a5e0` at `0x0149A5E0`.
    pub fn apply_editor_font(&mut self, selected: Option<EditorFont>) {
        if let Some(font) = selected {
            self.appearance.font = font;
        }
    }

    /// Ports Ghidra function `FUN_0149a680` at `0x0149A680`.
    ///
    /// # Errors
    ///
    /// Returns the first host notification, preparation, or check error.
    pub fn syntax_check(&mut self, host: &mut impl DesignToolHost) -> Result<(), String> {
        self.report_license_warning(host)?;
        host.execute(self.execution_request(ExecutionMode::Check))
    }

    /// Ports Ghidra function `FUN_0149a870` at `0x0149A870`.
    pub const fn select_transparent_background(&mut self) {
        self.appearance.background = BackgroundMode::Transparent;
    }

    /// Ports Ghidra function `FUN_0149a8b0` at `0x0149A8B0`.
    pub const fn select_opaque_background(&mut self, selected_color: Option<EditorColor>) {
        self.appearance.background = BackgroundMode::Opaque;
        if let Some(color) = selected_color {
            self.appearance.opaque_color = color;
        }
    }

    /// Ports Ghidra function `FUN_0149a940` at `0x0149A940`.
    pub const fn select_no_border(&mut self) {
        self.appearance.border = BorderMode::None;
    }

    /// Ports Ghidra function `FUN_0149a980` at `0x0149A980`.
    pub const fn select_solid_border(&mut self) {
        self.appearance.border = BorderMode::Solid;
    }

    /// Ports Ghidra function `FUN_0149a9c0` at `0x0149A9C0`.
    pub const fn select_dotted_border(&mut self) {
        self.appearance.border = BorderMode::Dotted;
    }

    #[must_use]
    pub const fn take_pending_action(&mut self) -> Option<PendingAction> {
        self.pending_action.take()
    }

    #[must_use]
    pub fn parameter_records(&self) -> Vec<ParameterRecord> {
        self.parameters.records()
    }

    pub fn set_parameter_records(&mut self, records: Vec<ParameterRecord>) {
        self.parameters.replace_records(records);
    }

    pub fn set_default_parameter_value(&mut self, value: impl Into<String>) {
        self.parameters.default_value = value.into();
    }

    #[must_use]
    pub fn program_text(&self) -> &str {
        self.program.text()
    }

    pub fn set_program_text(&mut self, text: impl Into<String>) {
        self.program.replace_text(text, false);
    }

    pub fn set_program_selection(&mut self, selection: Range<usize>) {
        self.program.set_selection(selection);
    }

    #[must_use]
    pub const fn terminal(&self) -> &TerminalState {
        &self.terminal
    }

    pub fn set_terminal_text(&mut self, text: impl Into<String>) {
        self.terminal.replace_text(text);
    }

    #[must_use]
    pub const fn interface(&self) -> Interface {
        self.interface
    }

    #[must_use]
    pub const fn parameter_panel_height(&self) -> f32 {
        self.layout.parameter_panel_height
    }

    #[must_use]
    pub const fn appearance(&self) -> (BackgroundMode, EditorColor, BorderMode) {
        (
            self.appearance.background,
            self.appearance.opaque_color,
            self.appearance.border,
        )
    }

    #[must_use]
    pub const fn close_requested(&self) -> bool {
        self.session.close_requested
    }

    #[must_use]
    pub const fn parameter_column_widths(&self) -> &[i32; 5] {
        &self.parameter_column_widths
    }

    #[must_use]
    pub const fn caret_status(&self) -> CaretStatus {
        self.caret_status
    }

    #[must_use]
    pub const fn idle_actions(&self) -> IdleActionState {
        self.idle_actions
    }

    #[must_use]
    pub const fn timer_enabled(&self) -> bool {
        self.lifecycle_flag(LIFECYCLE_TIMER)
    }

    #[must_use]
    pub const fn is_shown(&self) -> bool {
        self.lifecycle_flag(LIFECYCLE_SHOWN)
    }

    #[must_use]
    pub const fn python_available(&self) -> bool {
        self.python_available
    }

    #[must_use]
    pub fn window_caption(&self) -> &str {
        &self.caption
    }

    #[must_use]
    pub fn more_caption(&self) -> &str {
        &self.more_caption
    }

    #[must_use]
    pub const fn close_action(&self) -> Option<CloseAction> {
        self.close_action
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let parameter_table = if self.layout.parameters_hidden {
            window_shell::surface("Parameters collapsed")
        } else {
            window_shell::surface("Parameter table")
        };
        let editor = text_editor(self.program.content())
            .on_action(Message::ProgramEdited)
            .height(Length::Fill);
        let body = column![
            text("Title").size(16),
            text_input("", &self.title).on_input(Message::TitleChanged),
            text("Input Parameters:").size(16),
            row![
                text("Parameter").width(Length::FillPortion(1)),
                text("Value").width(Length::FillPortion(1)),
                text("Min").width(Length::FillPortion(1)),
                text("Max").width(Length::FillPortion(1)),
                text("Comment").width(Length::FillPortion(1)),
            ]
            .spacing(6),
            parameter_table,
            row![
                button("Add Row").on_press(Message::AddRow),
                button("Delete Row").on_press(Message::DeleteRow),
                button("Restore").on_press(Message::Restore),
                button("Run").on_press(Message::Run),
                button(if self.layout.advanced_expanded {
                    "Less..."
                } else {
                    "More..."
                })
                .on_press(Message::ToggleAdvanced),
            ]
            .spacing(8),
            editor,
            row![
                button("Save & Close").on_press(Message::SaveAndClose),
                button("Add to schematic").on_press(Message::Place),
                button("Cancel").on_press(Message::Cancel),
                button("Background").on_press(Message::OpenBackground),
            ]
            .spacing(8),
        ]
        .spacing(7)
        .padding(12)
        .height(Length::Fill);

        window_shell::frame(
            TITLE,
            window_shell::menu_bar(MENUS, Message::CommandSelected),
            window_shell::empty_menu(),
            body.into(),
            STATUS,
        )
    }

    fn execution_request(&self, mode: ExecutionMode) -> ExecutionRequest {
        ExecutionRequest {
            mode,
            interface: self.interface,
            source: self.program.text().to_owned(),
            parameters: self.parameters.records(),
        }
    }

    fn refresh_caret_status(&mut self) {
        let (line, column) = self.program.caret_line_column();
        self.caret_status = CaretStatus { line, column };
    }

    fn sort_parameters(&mut self) {
        let column = self.parameter_sort.column;
        self.parameters.rows.sort_by(|left, right| {
            let ordering = match column {
                0 => left.parameter.name.cmp(&right.parameter.name),
                1 => left.parameter.value.cmp(&right.parameter.value),
                2 => left.minimum.cmp(&right.minimum),
                3 => left.maximum.cmp(&right.maximum),
                _ => left.comment.cmp(&right.comment),
            };
            if self.parameter_sort.direction == SortDirection::Descending {
                ordering.reverse()
            } else {
                ordering
            }
        });
    }

    const fn lifecycle_flag(&self, flag: u8) -> bool {
        self.lifecycle_flags & flag != 0
    }

    const fn set_lifecycle_flag(&mut self, flag: u8, enabled: bool) {
        if enabled {
            self.lifecycle_flags |= flag;
        } else {
            self.lifecycle_flags &= !flag;
        }
    }

    fn report_license_warning(&self, host: &mut impl DesignToolHost) -> Result<(), String> {
        if !self.license.licensed
            && self.license.warning_applicable
            && self.program.text().lines().count() > 100
        {
            host.notify(Notice::LicenseLineLimit { maximum: 100 })?;
        }
        Ok(())
    }

    fn session_snapshot(&self) -> SessionSnapshot {
        SessionSnapshot {
            title: self.title.clone(),
            source: self.program.text().to_owned(),
            parameters: self.parameters.records(),
            interface: self.interface,
            restore_component_colors: self.options.restore_component_colors,
        }
    }

    fn document(&self) -> DesignToolDocument {
        DesignToolDocument {
            title: self.title.clone(),
            source: self.program.text().to_owned(),
            parameters: self.parameters.records(),
            interface: self.interface,
            numerical: self.numerical,
        }
    }

    fn apply_document(&mut self, document: DesignToolDocument) {
        self.title = document.title;
        self.program.replace_text(document.source, false);
        self.parameters.replace_records(document.parameters);
        self.interface = document.interface;
        self.numerical = document.numerical;
    }
}

#[cfg(test)]
mod tests {
    use std::path::{Path, PathBuf};

    use super::adapters::{
        ClipboardContent, DesignToolClipboard, DesignToolDocument, DesignToolGeometry,
        DesignToolHost, DesignToolLifecycleHost, DesignToolParser, DesignToolShowState,
        DesignToolStartup, DesignToolStorage, ExecutionRequest, Interface, Notice, ParameterRecord,
        PlacementText, PopupAnchor, SelectionMode, SessionSnapshot, SymbolTableRequest,
    };
    use super::{
        BackgroundMode, BorderMode, CellAlignment, CellTone, CloseAction, CloseConfirmationDialog,
        CloseConfirmationMessage, CloseConfirmationResult, DeleteRowOutcome,
        DesignToolOptionValues, EditorColor, FocusTarget, MouseButton, OptionsDialog,
        OptionsMessage, SortDirection, Window,
    };
    use crate::numerical_format::InterpreterNumericalSettings;

    #[derive(Debug, Default)]
    struct HostSpy {
        confirmations: Vec<bool>,
        notices: Vec<Notice>,
        popup: Option<PopupAnchor>,
        restored: usize,
        placements: Vec<PlacementText>,
        symbol_tables: Vec<SymbolTableRequest>,
        executions: Vec<ExecutionRequest>,
        saves: Vec<SessionSnapshot>,
        forwarded_pastes: usize,
    }

    impl DesignToolHost for HostSpy {
        fn confirm(&mut self, notice: Notice) -> Result<bool, String> {
            self.notices.push(notice);
            Ok(if self.confirmations.is_empty() {
                false
            } else {
                self.confirmations.remove(0)
            })
        }

        fn notify(&mut self, notice: Notice) -> Result<(), String> {
            self.notices.push(notice);
            Ok(())
        }

        fn open_background_popup(&mut self, anchor: PopupAnchor) -> Result<(), String> {
            self.popup = Some(anchor);
            Ok(())
        }

        fn restore_circuit(&mut self) -> Result<(), String> {
            self.restored = self.restored.saturating_add(1);
            Ok(())
        }

        fn place_in_schematic(&mut self, text: PlacementText) -> Result<(), String> {
            self.placements.push(text);
            Ok(())
        }

        fn show_symbol_table(&mut self, request: SymbolTableRequest) -> Result<(), String> {
            self.symbol_tables.push(request);
            Ok(())
        }

        fn execute(&mut self, request: ExecutionRequest) -> Result<(), String> {
            self.executions.push(request);
            Ok(())
        }

        fn save_session(&mut self, snapshot: SessionSnapshot) -> Result<(), String> {
            self.saves.push(snapshot);
            Ok(())
        }

        fn forward_paste(&mut self) -> Result<(), String> {
            self.forwarded_pastes = self.forwarded_pastes.saturating_add(1);
            Ok(())
        }
    }

    #[derive(Debug)]
    struct LifecycleSpy {
        startup: Option<DesignToolStartup>,
        show: DesignToolShowState,
        active_changes: Vec<bool>,
        releases: usize,
        stops: usize,
        deactivations: usize,
        schematic_refreshes: usize,
        clipboard_available: bool,
        commands: Vec<String>,
        terminal_popup: Option<PopupAnchor>,
    }

    impl Default for LifecycleSpy {
        fn default() -> Self {
            Self {
                startup: Some(DesignToolStartup {
                    title: "Loaded design".to_owned(),
                    source: "line one\nline two".to_owned(),
                    parameters: vec![valid_parameter()],
                    interface: Interface::Interpreter,
                    numerical: InterpreterNumericalSettings::default(),
                    terminal_text: ">>>  1 + 1".to_owned(),
                    geometry: DesignToolGeometry {
                        client_width: 530,
                        client_height: 400,
                        parameter_grid_height: 200,
                        simple_panel_height: 180,
                        advanced_panel_height: 300,
                    },
                    interpreter_active: true,
                }),
                show: DesignToolShowState {
                    title: "Localized Design Tool".to_owned(),
                    more_caption: "More...".to_owned(),
                    python_available: true,
                },
                active_changes: Vec::new(),
                releases: 0,
                stops: 0,
                deactivations: 0,
                schematic_refreshes: 0,
                clipboard_available: true,
                commands: Vec::new(),
                terminal_popup: None,
            }
        }
    }

    impl DesignToolLifecycleHost for LifecycleSpy {
        fn load_startup(&mut self) -> Result<DesignToolStartup, String> {
            self.startup
                .take()
                .ok_or_else(|| "startup reused".to_owned())
        }

        fn prepare_show(&mut self, _: Interface) -> Result<DesignToolShowState, String> {
            Ok(self.show.clone())
        }

        fn set_active(&mut self, active: bool) -> Result<(), String> {
            self.active_changes.push(active);
            Ok(())
        }

        fn release_resources(&mut self) {
            self.releases += 1;
        }

        fn stop_interpreter(&mut self) {
            self.stops += 1;
        }

        fn deactivate_design_objects(&mut self) {
            self.deactivations += 1;
        }

        fn refresh_schematic(&mut self) {
            self.schematic_refreshes += 1;
        }

        fn clipboard_text_available(&mut self) -> bool {
            self.clipboard_available
        }

        fn evaluate_terminal(&mut self, command: &str) -> Result<String, String> {
            self.commands.push(command.to_owned());
            Ok("2".to_owned())
        }

        fn open_terminal_popup(&mut self, anchor: PopupAnchor) -> Result<(), String> {
            self.terminal_popup = Some(anchor);
            Ok(())
        }
    }

    #[derive(Debug, Clone)]
    struct ParserSpy {
        document: DesignToolDocument,
        serialized: String,
        reject_parameter: bool,
    }

    impl Default for ParserSpy {
        fn default() -> Self {
            Self {
                document: DesignToolDocument {
                    title: "Loaded".to_owned(),
                    source: "loaded source".to_owned(),
                    parameters: vec![valid_parameter()],
                    interface: Interface::Python,
                    numerical: InterpreterNumericalSettings::default(),
                },
                serialized: "serialized".to_owned(),
                reject_parameter: false,
            }
        }
    }

    impl DesignToolParser for ParserSpy {
        fn parse(&self, _: &str) -> Result<DesignToolDocument, String> {
            Ok(self.document.clone())
        }

        fn serialize(&self, _: &DesignToolDocument) -> Result<String, String> {
            Ok(self.serialized.clone())
        }

        fn validate_parameter(&self, _: &ParameterRecord) -> Result<(), String> {
            if self.reject_parameter {
                Err("invalid expression".to_owned())
            } else {
                Ok(())
            }
        }

        fn format_placement(
            &self,
            title: &str,
            parameters: &[ParameterRecord],
        ) -> Result<PlacementText, String> {
            let mut lines = vec![title.to_owned(), String::new()];
            for parameter in parameters {
                if !parameter.comment.is_empty() {
                    lines.push(parameter.comment.clone());
                }
                if !parameter.name.is_empty() || !parameter.value.is_empty() {
                    lines.push(format!("{} := {}", parameter.name, parameter.value));
                }
            }
            Ok(PlacementText { lines })
        }
    }

    #[derive(Debug, Default)]
    struct StorageSpy {
        read: String,
        writes: Vec<(PathBuf, String)>,
    }

    impl DesignToolStorage for StorageSpy {
        fn read_text(&self, _: &Path) -> Result<String, String> {
            Ok(self.read.clone())
        }

        fn write_text(&mut self, path: &Path, text: &str) -> Result<(), String> {
            self.writes.push((path.to_owned(), text.to_owned()));
            Ok(())
        }
    }

    #[derive(Debug, Default)]
    struct ClipboardSpy {
        value: Option<ClipboardContent>,
        writes: Vec<ClipboardContent>,
    }

    impl DesignToolClipboard for ClipboardSpy {
        fn write(&mut self, content: ClipboardContent) -> Result<(), String> {
            self.writes.push(content);
            Ok(())
        }

        fn read(&mut self) -> Result<Option<ClipboardContent>, String> {
            Ok(self.value.clone())
        }
    }

    fn valid_parameter() -> ParameterRecord {
        ParameterRecord {
            name: "Gain".to_owned(),
            value: "2".to_owned(),
            minimum: Some("1".to_owned()),
            maximum: Some("3".to_owned()),
            comment: "amplifier gain".to_owned(),
        }
    }

    #[test]
    fn confirmation_handlers_stage_distinct_results_and_checkbox_snapshot() {
        let cases = [
            (CloseConfirmationMessage::Yes, CloseConfirmationResult::Yes),
            (CloseConfirmationMessage::No, CloseConfirmationResult::No),
            (
                CloseConfirmationMessage::Cancel,
                CloseConfirmationResult::Cancel,
            ),
        ];

        for (message, expected) in cases {
            let mut dialog = CloseConfirmationDialog::default();
            dialog.update(CloseConfirmationMessage::RestoreColorsChanged(false));
            dialog.update(message);

            assert_eq!(dialog.result(), expected);
            assert!(!dialog.staged_restore_colors());
            assert!(dialog.close_requested());
        }
    }

    #[test]
    fn options_initialization_updates_staging_and_controls() {
        let values = DesignToolOptionValues {
            ignore_min_max: true,
            keep_cursor_position: true,
            interface_index: 1,
        };
        let mut dialog = OptionsDialog::default();

        dialog.initialize_staging(values);

        assert_eq!(dialog.controls(), values);
        assert_eq!(dialog.extract_staged(), values);
    }

    #[test]
    fn options_cancel_discards_live_controls_but_ok_captures_them() {
        let initial = DesignToolOptionValues {
            ignore_min_max: false,
            keep_cursor_position: true,
            interface_index: 0,
        };
        let mut cancel = OptionsDialog::default();
        cancel.initialize_staging(initial);
        cancel.update(OptionsMessage::IgnoreMinMaxChanged(true));
        cancel.update(OptionsMessage::InterfaceChanged(1));
        cancel.update(OptionsMessage::Cancel);
        assert_eq!(cancel.extract_staged(), initial);

        let mut accepted = cancel;
        accepted.update(OptionsMessage::Accept);
        assert_eq!(
            accepted.extract_staged(),
            DesignToolOptionValues {
                ignore_min_max: true,
                keep_cursor_position: true,
                interface_index: 1,
            }
        );
    }

    #[test]
    fn parameter_rows_panel_and_appearance_preserve_recovered_state_rules() {
        let mut window = Window::default();
        window.set_default_parameter_value("1");
        window.add_parameter_row();
        window.add_parameter_row();
        let records = window.parameter_records();
        assert_eq!(records.len(), 3);
        assert_eq!(records[1].name, "NewParam1");
        assert_eq!(records[2].name, "NewParam2");
        assert_eq!(records[2].value, "1");
        assert_eq!(records[2].minimum, None);
        assert_eq!(records[2].maximum, None);

        window.set_parameters_hidden(true);
        assert!((window.parameter_panel_height() - 3.0).abs() < f32::EPSILON);
        window.set_parameters_hidden(false);
        assert!((window.parameter_panel_height() - 220.0).abs() < f32::EPSILON);

        window.select_opaque_background(None);
        window.select_dotted_border();
        assert_eq!(
            window.appearance(),
            (
                BackgroundMode::Opaque,
                EditorColor::default(),
                BorderMode::Dotted
            )
        );
        window.select_transparent_background();
        window.select_no_border();
        assert_eq!(window.appearance().0, BackgroundMode::Transparent);
        assert_eq!(window.appearance().2, BorderMode::None);
    }

    #[test]
    fn delete_run_restore_place_and_symbol_table_use_typed_host_effects() {
        let mut window = Window::default();
        let parser = ParserSpy::default();
        let mut host = HostSpy::default();
        assert_eq!(
            window.delete_parameter_row(&mut host),
            Ok(DeleteRowOutcome::FirstRowProtected)
        );
        assert_eq!(host.notices, vec![Notice::FirstRowCannotDelete]);

        window.set_parameter_records(vec![valid_parameter(), valid_parameter()]);
        host.confirmations.push(true);
        assert_eq!(
            window.delete_parameter_row(&mut host),
            Ok(DeleteRowOutcome::Deleted)
        );
        window.set_parameter_records(vec![valid_parameter()]);
        window.set_program_text((0..101).map(|_| "line").collect::<Vec<_>>().join("\n"));
        window.license.licensed = false;
        assert!(window.run(&parser, &mut host).is_ok());
        assert_eq!(host.executions.len(), 1);
        assert_eq!(
            host.notices.last(),
            Some(&Notice::LicenseLineLimit { maximum: 100 })
        );

        assert!(window.restore_circuit(&mut host).is_ok());
        assert_eq!(host.restored, 1);
        assert_eq!(host.notices.last(), Some(&Notice::CircuitRestored));
        assert!(window.place_in_schematic(&parser, &mut host).is_ok());
        assert_eq!(
            host.placements[0].lines,
            vec![
                "Noname".to_owned(),
                String::new(),
                "amplifier gain".to_owned(),
                "Gain := 2".to_owned()
            ]
        );
        assert!(window.show_symbol_table(&mut host).is_ok());
        assert_eq!(host.symbol_tables[0].interface, Interface::Interpreter);
    }

    #[test]
    fn editor_terminal_search_and_forwarded_paste_are_headless() {
        let mut window = Window::default();
        let mut clipboard = ClipboardSpy::default();
        let mut host = HostSpy::default();
        window.set_program_text("alpha beta alpha");
        window.set_program_selection(0..5);
        assert!(window.copy(&mut clipboard).is_ok());
        assert_eq!(
            clipboard.writes,
            vec![ClipboardContent {
                text: "alpha".to_owned(),
                selection_mode: SelectionMode::NORMAL,
            }]
        );
        assert!(window.cut(&mut clipboard).is_ok());
        assert_eq!(window.program_text(), " beta alpha");
        clipboard.value = Some(ClipboardContent {
            text: "gamma".to_owned(),
            selection_mode: SelectionMode::NORMAL,
        });
        window.set_program_selection(0..0);
        assert!(
            window
                .paste(FocusTarget::ProgramEditor, &mut clipboard, &mut host)
                .is_ok()
        );
        assert_eq!(window.program_text(), "gamma beta alpha");
        assert!(
            window
                .paste(FocusTarget::OtherControl, &mut clipboard, &mut host)
                .is_ok()
        );
        assert_eq!(host.forwarded_pastes, 1);
        assert_eq!(window.find(Some("beta".to_owned())), Some(6..10));
        assert_eq!(
            window.replace(Some(("alpha".to_owned(), "delta".to_owned()))),
            Some(16..16)
        );
        assert_eq!(window.program_text(), "gamma beta delta");

        window.set_terminal_text("result");
        assert!(window.copy_terminal(&mut clipboard).is_ok());
        assert_eq!(
            clipboard.writes.last().map(|content| content.text.as_str()),
            Some("result")
        );
        window.clear_terminal();
        assert_eq!(window.terminal().text(), ">>>  ");
    }

    #[test]
    fn file_and_close_paths_commit_only_after_successful_adapters() {
        let parser = ParserSpy::default();
        let mut storage = StorageSpy {
            read: "encoded".to_owned(),
            ..StorageSpy::default()
        };
        let path = Path::new("program.ipr");
        let mut window = Window::default();
        assert_eq!(
            window.open_file(Some(path), true, &storage, &parser),
            Ok(true)
        );
        assert_eq!(window.program_text(), "loaded source");
        assert_eq!(window.interface(), Interface::Python);
        assert_eq!(window.save_as(Some(path), &mut storage, &parser), Ok(true));
        assert_eq!(
            storage.writes,
            vec![(path.to_owned(), "serialized".to_owned())]
        );

        let mut host = HostSpy::default();
        assert_eq!(
            window.close_query(CloseConfirmationResult::Cancel, false, &parser, &mut host),
            Ok(false)
        );
        assert!(host.saves.is_empty());
        assert_eq!(
            window.close_query(CloseConfirmationResult::Yes, true, &parser, &mut host),
            Ok(true)
        );
        assert_eq!(host.saves.len(), 1);
        assert!(host.saves[0].restore_component_colors);
        assert!(window.close_requested());
    }

    #[test]
    fn popup_interface_font_and_numerical_editor_are_composed() {
        let mut window = Window::default();
        let mut host = HostSpy::default();
        assert!(
            window
                .open_background_popup(&mut host, PopupAnchor { x: 10.0, y: 20.0 }, 30.0)
                .is_ok()
        );
        assert_eq!(host.popup, Some(PopupAnchor { x: 10.0, y: 52.0 }));
        window.apply_options(DesignToolOptionValues {
            ignore_min_max: true,
            keep_cursor_position: true,
            interface_index: 1,
        });
        assert_eq!(window.interface(), Interface::Python);
        window.open_numerical_format();
        window.apply_numerical_format();
        window.select_solid_border();
        assert_eq!(window.appearance().2, BorderMode::Solid);
    }

    #[test]
    fn distinct_dialog_create_events_apply_only_recovered_defaults() {
        let confirmation = super::confirmation_dialog::CloseConfirmationDialog::default();
        assert_eq!(
            confirmation.result(),
            super::confirmation_dialog::CloseConfirmationResult::Cancel
        );
        assert!(!confirmation.close_requested());

        let options = super::options_dialog::OptionsDialog::default();
        assert_eq!(options.help_context(), super::options_dialog::HELP_CONTEXT);

        crate::numerical_format::Window::form_create();
        let mut numerical = crate::numerical_format::Window::default();
        numerical.float_edit_error("float error");
        numerical.integer_edit_error("integer error");
        assert_eq!(numerical.first_error(), Some("float error"));
    }

    #[test]
    fn create_show_timer_resize_close_and_destroy_use_one_lifecycle_adapter() {
        let mut window = Window::default();
        let mut host = LifecycleSpy::default();
        assert!(window.form_create(&mut host).is_ok());
        assert_eq!(host.active_changes, vec![true]);
        assert_eq!(window.program_text(), "line one\nline two");
        assert_eq!(window.parameter_column_widths(), &[100; 5]);
        assert!(window.timer_enabled());

        assert!(window.form_show(&mut host).is_ok());
        assert!(window.is_shown());
        assert_eq!(window.window_caption(), "Localized Design Tool");
        assert_eq!(window.more_caption(), "More...");
        assert!(window.python_available());

        window.timer_elapsed(&mut host);
        window.timer_elapsed(&mut host);
        assert!(!window.timer_enabled());
        assert_eq!(host.stops, 2);

        assert_eq!(window.form_close(&mut host), CloseAction::Free);
        assert_eq!(window.close_action(), Some(CloseAction::Free));
        assert_eq!(host.deactivations, 1);
        assert_eq!(host.schematic_refreshes, 1);

        assert!(window.form_destroy(&mut host).is_ok());
        assert!(window.form_destroy(&mut host).is_ok());
        assert_eq!(host.releases, 1);
        assert_eq!(host.active_changes, vec![true, false]);
    }

    #[test]
    fn idle_grid_drawing_and_fixed_header_sort_preserve_recovered_states() {
        let mut window = Window::default();
        let mut host = LifecycleSpy::default();
        assert!(window.form_create(&mut host).is_ok());
        window.application_idle(&mut host);
        assert!(window.idle_actions().undo());
        assert!(window.idle_actions().cut());
        assert!(window.idle_actions().copy());
        assert!(window.idle_actions().paste());

        let header = window.parameter_cell_presentation(0, 0);
        assert_eq!(header.alignment, CellAlignment::Center);
        assert_eq!(header.tone, CellTone::Header);
        assert_eq!(header.sort_direction, SortDirection::None);
        let data = window.parameter_cell_presentation(0, 1);
        assert_eq!(data.alignment, CellAlignment::Left);
        assert_eq!(data.tone, CellTone::Data);

        window.set_parameter_records(vec![
            ParameterRecord {
                name: "Zulu".to_owned(),
                ..valid_parameter()
            },
            ParameterRecord {
                name: "Alpha".to_owned(),
                ..valid_parameter()
            },
        ]);
        assert_eq!(
            window.fixed_parameter_cell_clicked(1, 0),
            SortDirection::None
        );
        assert_eq!(
            window.fixed_parameter_cell_clicked(0, 0),
            SortDirection::Ascending
        );
        assert_eq!(window.parameter_records()[0].name, "Alpha");
        assert_eq!(
            window.fixed_parameter_cell_clicked(0, 0),
            SortDirection::Descending
        );
        assert_eq!(window.parameter_records()[0].name, "Zulu");
        assert_eq!(
            window.fixed_parameter_cell_clicked(0, 0),
            SortDirection::None
        );
    }

    #[test]
    fn program_and_terminal_input_events_refresh_or_route_exact_actions() {
        let mut window = Window::default();
        let mut lifecycle = LifecycleSpy::default();
        assert!(window.form_create(&mut lifecycle).is_ok());
        window.set_program_selection(9..9);
        window.program_mouse_down();
        assert_eq!(window.caret_status().line, 2);
        assert_eq!(window.caret_status().column, 1);

        let mut host = HostSpy::default();
        assert!(window.program_key_up(65, false, &mut host).is_ok());
        assert!(host.executions.is_empty());
        assert!(Window::terminal_key_down(5, 0x25));
        assert!(Window::terminal_key_down(1, 8));
        assert!(!Window::terminal_key_down(6, 8));
        assert!(!Window::terminal_key_down(1, 65));

        assert_eq!(window.terminal_key_up(13, true, &mut lifecycle), Ok(false));
        assert_eq!(window.terminal_key_up(13, false, &mut lifecycle), Ok(true));
        assert_eq!(lifecycle.commands, vec!["1 + 1"]);
        assert!(window.terminal().text().ends_with("2\n>>>  "));

        assert_eq!(
            window.terminal_mouse_down(
                MouseButton::Left,
                PopupAnchor { x: 10.0, y: 20.0 },
                PopupAnchor { x: 3.0, y: 4.0 },
                &mut lifecycle,
            ),
            Ok(false)
        );
        assert_eq!(
            window.terminal_mouse_down(
                MouseButton::Right,
                PopupAnchor { x: 10.0, y: 20.0 },
                PopupAnchor { x: 3.0, y: 4.0 },
                &mut lifecycle,
            ),
            Ok(true)
        );
        assert_eq!(
            lifecycle.terminal_popup,
            Some(PopupAnchor { x: 13.0, y: 24.0 })
        );
    }
}
