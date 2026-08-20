//! Cohesive Design Tool editor and staged dialog state.
//!
//! The existing `iced` dependency supplies the editor, messages, and widgets.
//! `std` supplies paths, text containers, collections, and transactions. The
//! existing global-parameter validation and numerical-format editor are
//! composed here. Application runtime, parsing, storage, clipboard, schematic,
//! popup, and symbol-table work stays behind typed adapters. No additional
//! state-management, parser, or platform crate is needed at this boundary.

mod adapters;
mod editor;

use std::ops::Range;
use std::path::{Path, PathBuf};

use adapters::{
    DesignToolClipboard, DesignToolDocument, DesignToolHost, DesignToolParser, DesignToolStorage,
    ExecutionMode, ExecutionRequest, Interface, Notice, ParameterRecord, PopupAnchor,
    SessionSnapshot, SymbolTableRequest,
};
use editor::{ProgramEditor, TerminalState};
use iced::widget::{button, checkbox, column, radio, row, text, text_editor, text_input};
use iced::{Element, Length};
use tiara_core::global_parameters::{GlobalParameterRow, validate_global_parameter_rows};

use crate::numerical_format::{InterpreterNumericalSettings, Window as NumericalFormatEditor};
use crate::shared::window_shell;

pub const TITLE: &str = "Design Tool";
pub const SCREENSHOT: &str = "screenshots/Design_Tool_Window.png";
pub const FORM_RESOURCE: &str = "frmDesignTool";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01493a30");
pub const LIBRARY_EVALUATION: &str = "iced supplies the text editor and message-driven UI; std supplies paths and text containers; tiara-core global-parameter validation and the existing numerical-format editor are composed; application parsing, encoding-aware storage, mode-aware clipboard, execution, popup, schematic formatting, and symbol-table behavior use typed adapters.";
const STATUS: &str = "Successfully compiled";
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
    pending_action: Option<PendingAction>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
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

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
#[repr(i32)]
pub enum CloseConfirmationResult {
    Yes = 6,
    No = 7,
    #[default]
    Cancel = 2,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseConfirmationMessage {
    RestoreColorsChanged(bool),
    Yes,
    No,
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CloseConfirmationDialog {
    restore_colors_checked: bool,
    staged_restore_colors: bool,
    result: CloseConfirmationResult,
    close_requested: bool,
}

impl Default for CloseConfirmationDialog {
    fn default() -> Self {
        Self {
            restore_colors_checked: true,
            staged_restore_colors: true,
            result: CloseConfirmationResult::Cancel,
            close_requested: false,
        }
    }
}

impl CloseConfirmationDialog {
    pub const fn update(&mut self, message: CloseConfirmationMessage) {
        match message {
            CloseConfirmationMessage::RestoreColorsChanged(checked) => {
                self.restore_colors_checked = checked;
            }
            CloseConfirmationMessage::Yes => self.yes_click(),
            CloseConfirmationMessage::No => self.no_click(),
            CloseConfirmationMessage::Cancel => self.cancel_click(),
        }
    }

    /// Ports Ghidra function `FUN_01475300` at `0x01475300`.
    pub const fn yes_click(&mut self) {
        self.stage_close(CloseConfirmationResult::Yes);
    }

    /// Ports Ghidra function `FUN_01475340` at `0x01475340`.
    pub const fn no_click(&mut self) {
        self.stage_close(CloseConfirmationResult::No);
    }

    /// Ports Ghidra function `FUN_01475380` at `0x01475380`.
    pub const fn cancel_click(&mut self) {
        self.stage_close(CloseConfirmationResult::Cancel);
    }

    #[must_use]
    pub const fn result(self) -> CloseConfirmationResult {
        self.result
    }

    #[must_use]
    pub const fn staged_restore_colors(self) -> bool {
        self.staged_restore_colors
    }

    #[must_use]
    pub const fn close_requested(self) -> bool {
        self.close_requested
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, CloseConfirmationMessage> {
        column![
            text("Save changes?"),
            checkbox("Restore component colors", self.restore_colors_checked)
                .on_toggle(CloseConfirmationMessage::RestoreColorsChanged),
            row![
                button("Yes").on_press(CloseConfirmationMessage::Yes),
                button("No").on_press(CloseConfirmationMessage::No),
                button("Cancel").on_press(CloseConfirmationMessage::Cancel),
            ]
            .spacing(8),
        ]
        .padding(12)
        .spacing(8)
        .into()
    }

    const fn stage_close(&mut self, result: CloseConfirmationResult) {
        self.result = result;
        self.staged_restore_colors = self.restore_colors_checked;
        self.close_requested = true;
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DesignToolOptionValues {
    pub ignore_min_max: bool,
    pub keep_cursor_position: bool,
    pub interface_index: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum OptionsMessage {
    IgnoreMinMaxChanged(bool),
    KeepCursorChanged(bool),
    InterfaceChanged(i32),
    Accept,
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct OptionsDialog {
    staged: DesignToolOptionValues,
    controls: DesignToolOptionValues,
    close_requested: bool,
}

impl Default for OptionsDialog {
    fn default() -> Self {
        Self {
            staged: DesignToolOptionValues {
                ignore_min_max: false,
                keep_cursor_position: false,
                interface_index: 0,
            },
            controls: DesignToolOptionValues {
                ignore_min_max: false,
                keep_cursor_position: false,
                interface_index: 0,
            },
            close_requested: false,
        }
    }
}

impl OptionsDialog {
    pub const fn update(&mut self, message: OptionsMessage) {
        match message {
            OptionsMessage::IgnoreMinMaxChanged(value) => {
                self.controls.ignore_min_max = value;
            }
            OptionsMessage::KeepCursorChanged(value) => {
                self.controls.keep_cursor_position = value;
            }
            OptionsMessage::InterfaceChanged(value) => self.controls.interface_index = value,
            OptionsMessage::Accept => {
                self.accept_controls();
                self.close_requested = true;
            }
            OptionsMessage::Cancel => self.close_requested = true,
        }
    }

    /// Ports Ghidra function `FUN_01475b20` at `0x01475B20`.
    pub const fn initialize_staging(&mut self, values: DesignToolOptionValues) {
        self.staged = values;
        self.controls = values;
        self.close_requested = false;
    }

    /// Ports Ghidra function `FUN_01475ba0` at `0x01475BA0`.
    #[must_use]
    pub const fn extract_staged(&self) -> DesignToolOptionValues {
        self.staged
    }

    /// Ports Ghidra function `FUN_01475bf0` at `0x01475BF0`.
    pub const fn accept_controls(&mut self) {
        self.staged = self.controls;
    }

    #[must_use]
    pub const fn controls(&self) -> DesignToolOptionValues {
        self.controls
    }

    #[must_use]
    pub const fn close_requested(&self) -> bool {
        self.close_requested
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, OptionsMessage> {
        column![
            checkbox("Ignore min max values", self.controls.ignore_min_max)
                .on_toggle(OptionsMessage::IgnoreMinMaxChanged),
            checkbox(
                "Keep cursor position after run",
                self.controls.keep_cursor_position
            )
            .on_toggle(OptionsMessage::KeepCursorChanged),
            text("Interface"),
            row![
                radio(
                    "Interpreter",
                    0,
                    Some(self.controls.interface_index),
                    OptionsMessage::InterfaceChanged,
                ),
                radio(
                    "Python",
                    1,
                    Some(self.controls.interface_index),
                    OptionsMessage::InterfaceChanged,
                ),
            ]
            .spacing(8),
            row![
                button("OK").on_press(OptionsMessage::Accept),
                button("Cancel").on_press(OptionsMessage::Cancel),
            ]
            .spacing(8),
        ]
        .padding(12)
        .spacing(8)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use std::path::{Path, PathBuf};

    use super::adapters::{
        ClipboardContent, DesignToolClipboard, DesignToolDocument, DesignToolHost,
        DesignToolParser, DesignToolStorage, ExecutionRequest, Interface, Notice, ParameterRecord,
        PlacementText, PopupAnchor, SelectionMode, SessionSnapshot, SymbolTableRequest,
    };
    use super::{
        BackgroundMode, BorderMode, CloseConfirmationDialog, CloseConfirmationMessage,
        CloseConfirmationResult, DeleteRowOutcome, DesignToolOptionValues, EditorColor,
        FocusTarget, OptionsDialog, OptionsMessage, Window,
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
}
