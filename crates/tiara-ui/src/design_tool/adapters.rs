//! Typed application boundaries for the Design Tool.

use std::path::Path;

use crate::numerical_format::InterpreterNumericalSettings;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum Interface {
    #[default]
    Interpreter,
    Python,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ExecutionMode {
    Check,
    Run,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ParameterRecord {
    pub name: String,
    pub value: String,
    pub minimum: Option<String>,
    pub maximum: Option<String>,
    pub comment: String,
}

#[derive(Debug, Clone, PartialEq)]
pub struct DesignToolDocument {
    pub title: String,
    pub source: String,
    pub parameters: Vec<ParameterRecord>,
    pub interface: Interface,
    pub numerical: InterpreterNumericalSettings,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ExecutionRequest {
    pub mode: ExecutionMode,
    pub interface: Interface,
    pub source: String,
    pub parameters: Vec<ParameterRecord>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SessionSnapshot {
    pub title: String,
    pub source: String,
    pub parameters: Vec<ParameterRecord>,
    pub interface: Interface,
    pub restore_component_colors: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PlacementText {
    pub lines: Vec<String>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct SelectionMode(pub u8);

impl SelectionMode {
    pub const NORMAL: Self = Self(0);
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ClipboardContent {
    pub text: String,
    pub selection_mode: SelectionMode,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct PopupAnchor {
    pub x: f32,
    pub y: f32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DesignToolGeometry {
    pub client_width: i32,
    pub client_height: i32,
    pub parameter_grid_height: i32,
    pub simple_panel_height: i32,
    pub advanced_panel_height: i32,
}

#[derive(Debug, Clone, PartialEq)]
pub struct DesignToolStartup {
    pub title: String,
    pub source: String,
    pub parameters: Vec<ParameterRecord>,
    pub interface: Interface,
    pub numerical: InterpreterNumericalSettings,
    pub terminal_text: String,
    pub geometry: DesignToolGeometry,
    pub interpreter_active: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DesignToolShowState {
    pub title: String,
    pub more_caption: String,
    pub python_available: bool,
}

pub trait DesignToolLifecycleHost {
    /// Creates application-owned runtime resources and returns their typed UI snapshot.
    ///
    /// # Errors
    ///
    /// Returns an error when startup cannot acquire or read the active Design Tool session.
    fn load_startup(&mut self) -> Result<DesignToolStartup, String>;

    /// Applies localization and interface availability before the form is shown.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot prepare the selected interface.
    fn prepare_show(&mut self, interface: Interface) -> Result<DesignToolShowState, String>;

    /// Publishes whether the Design Tool owns the active application session.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot update the application state.
    fn set_active(&mut self, active: bool) -> Result<(), String>;

    /// Releases all resources acquired by [`Self::load_startup`].
    fn release_resources(&mut self);

    /// Stops the interpreter on the one-shot timer path.
    fn stop_interpreter(&mut self);

    /// Deactivates objects linked to this tool before the form closes.
    fn deactivate_design_objects(&mut self);

    /// Refreshes the active schematic after object deactivation.
    fn refresh_schematic(&mut self);

    /// Returns whether standard text can currently be pasted.
    fn clipboard_text_available(&mut self) -> bool;

    /// Evaluates one terminal command and returns display text.
    ///
    /// # Errors
    ///
    /// Returns an error when command preparation or evaluation fails.
    fn evaluate_terminal(&mut self, command: &str) -> Result<String, String>;

    /// Opens the terminal popup at a screen-space point.
    ///
    /// # Errors
    ///
    /// Returns an error when the popup cannot be opened.
    fn open_terminal_popup(&mut self, anchor: PopupAnchor) -> Result<(), String>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Notice {
    FirstRowCannotDelete,
    ConfirmDeleteRow,
    ConfirmNewSession,
    CircuitRestored,
    LicenseLineLimit { maximum: usize },
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SymbolTableRequest {
    pub interface: Interface,
    pub source: String,
}

pub trait DesignToolHost {
    /// Shows a confirmation and returns whether the user accepted it.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot present or resolve the prompt.
    fn confirm(&mut self, notice: Notice) -> Result<bool, String>;

    /// Shows a nonblocking Design Tool notice.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot publish the notice.
    fn notify(&mut self, notice: Notice) -> Result<(), String>;

    /// Opens the background popup at a screen-space anchor.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot open the popup.
    fn open_background_popup(&mut self, anchor: PopupAnchor) -> Result<(), String>;

    /// Restores the circuit values captured for this Design Tool session.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot restore or refresh the circuit.
    fn restore_circuit(&mut self) -> Result<(), String>;

    /// Adds or updates the Design Tool text in the active schematic.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot update the schematic.
    fn place_in_schematic(&mut self, text: PlacementText) -> Result<(), String>;

    /// Creates or refreshes and shows the shared symbol-table viewer.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot show the symbol table.
    fn show_symbol_table(&mut self, request: SymbolTableRequest) -> Result<(), String>;

    /// Executes or syntax-checks a prepared Design Tool request.
    ///
    /// # Errors
    ///
    /// Returns an error when preparation or execution fails in the host.
    fn execute(&mut self, request: ExecutionRequest) -> Result<(), String>;

    /// Commits the current Design Tool state to its active application object.
    ///
    /// # Errors
    ///
    /// Returns an error when the application object cannot be updated.
    fn save_session(&mut self, snapshot: SessionSnapshot) -> Result<(), String>;

    /// Forwards paste to a focused control that is not the program editor.
    ///
    /// # Errors
    ///
    /// Returns an error when the focused control rejects the paste command.
    fn forward_paste(&mut self) -> Result<(), String>;
}

pub trait DesignToolParser {
    /// Parses configuration and program text from a Design Tool file.
    ///
    /// # Errors
    ///
    /// Returns an error when the file text is malformed or unsupported.
    fn parse(&self, source: &str) -> Result<DesignToolDocument, String>;

    /// Serializes a Design Tool document for storage.
    ///
    /// # Errors
    ///
    /// Returns an error when the document cannot be represented.
    fn serialize(&self, document: &DesignToolDocument) -> Result<String, String>;

    /// Validates one parameter expression and its optional limits.
    ///
    /// # Errors
    ///
    /// Returns an error when the expression or either limit is invalid.
    fn validate_parameter(&self, parameter: &ParameterRecord) -> Result<(), String>;

    /// Formats the title and parameter rows for schematic placement.
    ///
    /// # Errors
    ///
    /// Returns an error when the recovered placement syntax cannot represent the rows.
    fn format_placement(
        &self,
        title: &str,
        parameters: &[ParameterRecord],
    ) -> Result<PlacementText, String>;
}

pub trait DesignToolStorage {
    /// Reads and decodes Design Tool text from a selected path.
    ///
    /// # Errors
    ///
    /// Returns an error when the path cannot be read as Design Tool text.
    fn read_text(&self, path: &Path) -> Result<String, String>;

    /// Encodes and writes Design Tool text to a selected path.
    ///
    /// # Errors
    ///
    /// Returns an error when the complete text cannot be written.
    fn write_text(&mut self, path: &Path, text: &str) -> Result<(), String>;
}

pub trait DesignToolClipboard {
    /// Writes text and its editor selection mode to the clipboard.
    ///
    /// # Errors
    ///
    /// Returns an error when the clipboard cannot accept the text.
    fn write(&mut self, content: ClipboardContent) -> Result<(), String>;

    /// Reads standard text from the clipboard when it is available.
    ///
    /// # Errors
    ///
    /// Returns an error when the clipboard text cannot be read.
    fn read(&mut self) -> Result<Option<ClipboardContent>, String>;
}
