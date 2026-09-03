pub mod options_dialog;

use std::fmt;
use std::path::{Path, PathBuf};
use std::time::Duration;

use iced::keyboard::{Key, Modifiers, key::Named};
use iced::widget::text_editor;
use iced::{Element, Length, Point, Rectangle, Subscription, Task, window};

use crate::bill_of_materials::HelpAdapter as ApplicationHelpAdapter;
use crate::drawing_preferences::{DrawingOwner, Window as DrawingPreferencesDialog};
use crate::numerical_format::{
    ImaginarySymbol, InterpreterNumericalSettings, Window as NumericalFormatDialog,
};
use crate::shared::window_shell;
use options_dialog::OptionsDialog;

pub const TITLE: &str = "Interpreter-<noname.ipr>";
pub const SCREENSHOT: &str = "screenshots/Interpreter_Window.png";
pub const FORM_RESOURCE: &str = "I_Class";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("017efdf0");
const CAPTION_TEMPLATE: &str = "Interpreter-<%s>";
const STATUS: &str = "Line: 1 Col: 1    Successfully compiled    Editing commands";
const NEW_DOCUMENT_NAME: &str = "noname.ipr";
const HELP_CONTEXT: u32 = 5001;
const PROGRESS_TIMER_INTERVAL: Duration = Duration::from_millis(1_000);
const BUILT_IN_PARAMETERS: [&str; 3] = ["l_limit", "r_limit", "i_subdiv"];
const MENUS: &[(&str, &[&str])] = &[
    ("File", &["New", "Open...", "Save", "Save As...", "Close"]),
    ("Edit", &["Undo", "Cut", "Copy", "Paste", "Select All"]),
    ("Run", &["Evaluate", "Run", "Stop"]),
    ("Settings", &["Preferences...", "Font...", "Options..."]),
    ("Help", &["Contents", "About"]),
];
const TOOLBAR: &[&str] = &[
    "New",
    "Open",
    "Save",
    "Find",
    "Evaluate",
    "Run",
    "Add to schematic",
];

pub trait NewDocumentHost {
    fn approve_new_document(&mut self, document_modified: bool) -> bool;
    fn available_parameters(&mut self) -> Vec<String>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum NewDocumentOutcome {
    Cancelled,
    Reset,
}

pub trait OpenDocumentHost {
    type Error;

    /// Selects an IPR file, or returns `None` when the dialog is canceled.
    ///
    /// # Errors
    ///
    /// Returns a host dialog error.
    fn select_ipr_file(
        &mut self,
        initial_directory: Option<&Path>,
    ) -> Result<Option<PathBuf>, Self::Error>;

    /// Loads the selected IPR into the supplied mutable document targets.
    ///
    /// # Errors
    ///
    /// Returns a host read or decode error after any mutations already made by
    /// the loader.
    fn load_ipr_document(
        &mut self,
        path: &Path,
        program: &mut text_editor::Content,
        configuration: &mut InterpreterConfiguration,
    ) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum OpenDocumentOutcome {
    Cancelled,
    Opened,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PasteFocus {
    InterpreterForm,
    OtherNativeWindow,
}

pub trait FocusedPasteHost {
    fn forward_paste_to_focused_window(&mut self);
}

pub trait InterpreterFindHost {
    type Error;

    /// Opens the shared Find coordinator for the Interpreter editor.
    ///
    /// # Errors
    ///
    /// Returns a dialog or search-engine error without local recovery.
    fn open_find_dialog(&mut self, program: &mut text_editor::Content) -> Result<(), Self::Error>;

    /// Opens the shared Replace coordinator for the Interpreter editor.
    ///
    /// # Errors
    ///
    /// Returns a dialog or replacement-engine error without local recovery.
    fn open_replace_dialog(
        &mut self,
        program: &mut text_editor::Content,
    ) -> Result<(), Self::Error>;

    /// Repeats the retained search forward in find-only mode.
    ///
    /// # Errors
    ///
    /// Returns a search-engine error without local recovery.
    fn search_again_forward(
        &mut self,
        program: &mut text_editor::Content,
    ) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InterpreterSearchMode {
    Find,
    Replace,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum InterpreterSearchDirection {
    #[default]
    Forward,
    Backward,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum InterpreterCaseMatching {
    #[default]
    Insensitive,
    Sensitive,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum InterpreterWordMatching {
    #[default]
    Partial,
    Whole,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum InterpreterSearchOrigin {
    #[default]
    EntireScope,
    Caret,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum InterpreterSearchSelection {
    #[default]
    AnyText,
    SelectionOnly,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct InterpreterSearchValues {
    pub search_text: String,
    pub replacement_text: String,
    pub search_history: Vec<String>,
    pub replacement_history: Vec<String>,
    pub direction: InterpreterSearchDirection,
    pub case_matching: InterpreterCaseMatching,
    pub word_matching: InterpreterWordMatching,
    pub origin: InterpreterSearchOrigin,
    pub selection: InterpreterSearchSelection,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum InterpreterSearchDialogResult {
    Cancelled,
    Accepted(InterpreterSearchValues),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InterpreterSearchOutcome {
    Cancelled,
    AcceptedEmpty,
    Searched,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct InterpreterSearchRequest {
    pub mode: InterpreterSearchMode,
    pub values: InterpreterSearchValues,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InterpreterSearchExecution {
    Matches(usize),
    NoMatch,
}

pub trait InterpreterEditorSearchHost {
    type Error;

    /// Runs one typed search or replacement against the Iced editor.
    ///
    /// # Errors
    ///
    /// Returns an editor search-engine error without local recovery.
    fn search_replace(
        &mut self,
        program: &mut text_editor::Content,
        request: &InterpreterSearchRequest,
    ) -> Result<usize, Self::Error>;

    fn notify_no_match(&mut self);
}

/// Executes one Interpreter editor search or replacement.
///
/// Ports Ghidra function `0x017F32C0`, symbol `FUN_017f32c0`. Typed request
/// fields replace the recovered bit mask. The search host receives mode,
/// direction, case, word, origin, and selection scope together. Zero matches
/// request one notification and collapse an existing Iced selection at its
/// forward end or backward beginning. The function does not wrap or retry.
///
/// # Errors
///
/// Returns the editor search-engine error before notification or selection changes.
pub fn execute_interpreter_search<Host: InterpreterEditorSearchHost>(
    program: &mut text_editor::Content,
    request: &InterpreterSearchRequest,
    host: &mut Host,
) -> Result<InterpreterSearchExecution, Host::Error> {
    let matches = host.search_replace(program, request)?;
    if matches > 0 {
        return Ok(InterpreterSearchExecution::Matches(matches));
    }

    host.notify_no_match();
    if program.selection().is_some() {
        let motion = match request.values.direction {
            InterpreterSearchDirection::Forward => text_editor::Motion::Right,
            InterpreterSearchDirection::Backward => text_editor::Motion::Left,
        };
        program.perform(text_editor::Action::Move(motion));
    }
    Ok(InterpreterSearchExecution::NoMatch)
}

pub trait InterpreterSearchDialogHost {
    type Error;

    /// Shows an Iced-owned modal search dialog with retained state.
    ///
    /// # Errors
    ///
    /// Returns a dialog-host error without changing retained state.
    fn show_search_dialog(
        &mut self,
        mode: InterpreterSearchMode,
        initial: &InterpreterSearchValues,
        program: &text_editor::Content,
        preload_from_editor: bool,
    ) -> Result<InterpreterSearchDialogResult, Self::Error>;

    /// Executes an accepted nonempty search against the Iced editor.
    ///
    /// # Errors
    ///
    /// Returns the search-engine error after accepted dialog state is retained.
    fn execute_search(
        &mut self,
        program: &mut text_editor::Content,
        request: &InterpreterSearchRequest,
    ) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct InterpreterSearchCoordinator {
    retained: InterpreterSearchValues,
    preload_from_editor: bool,
}

impl InterpreterSearchCoordinator {
    #[must_use]
    pub const fn retained(&self) -> &InterpreterSearchValues {
        &self.retained
    }

    pub const fn set_preload_from_editor(&mut self, enabled: bool) {
        self.preload_from_editor = enabled;
    }

    /// Opens an Interpreter Find or Replace dialog and starts an accepted search.
    ///
    /// Ports Ghidra function `0x017F2F00`, symbol `FUN_017f2f00`. The coordinator
    /// restores process-retained values, accepts dialog changes only after OK,
    /// preserves Replace-only values in Find mode, limits both histories to ten,
    /// and skips execution for empty search text. A successful nonempty search
    /// makes the next operation start at the current caret.
    ///
    /// # Errors
    ///
    /// Returns a dialog error before copy-back, or a search error after accepted
    /// values have been retained. It does not perform local recovery.
    pub fn coordinate_search_dialog<Host: InterpreterSearchDialogHost>(
        &mut self,
        mode: InterpreterSearchMode,
        program: &mut text_editor::Content,
        host: &mut Host,
    ) -> Result<InterpreterSearchOutcome, Host::Error> {
        let result =
            host.show_search_dialog(mode, &self.retained, program, self.preload_from_editor)?;
        let InterpreterSearchDialogResult::Accepted(mut accepted) = result else {
            return Ok(InterpreterSearchOutcome::Cancelled);
        };

        if mode == InterpreterSearchMode::Find {
            accepted
                .replacement_text
                .clone_from(&self.retained.replacement_text);
            accepted
                .replacement_history
                .clone_from(&self.retained.replacement_history);
        }
        accepted.search_history.truncate(10);
        accepted.replacement_history.truncate(10);
        self.retained = accepted;

        if self.retained.search_text.is_empty() {
            return Ok(InterpreterSearchOutcome::AcceptedEmpty);
        }

        let request = InterpreterSearchRequest {
            mode,
            values: self.retained.clone(),
        };
        host.execute_search(program, &request)?;
        self.retained.origin = InterpreterSearchOrigin::Caret;
        Ok(InterpreterSearchOutcome::Searched)
    }
}

pub trait InterpreterOptionsHost {
    type Error;

    /// Shows the Interpreter Options dialog modally.
    ///
    /// # Errors
    ///
    /// Returns a constructor or modal-host error without local recovery.
    fn show_modal(&mut self, dialog: &mut OptionsDialog) -> Result<(), Self::Error>;
}

pub trait NumericalFormatHost {
    type Error;

    /// Shows the Interpreter numerical-format dialog modally.
    ///
    /// # Errors
    ///
    /// Returns a constructor or modal-host error without local recovery.
    fn show_numerical_format_dialog(
        &mut self,
        dialog: &mut NumericalFormatDialog,
    ) -> Result<(), Self::Error>;
}

pub trait DrawingPreferencesHost {
    type Error;

    /// Shows the Interpreter drawing-preferences dialog modally.
    ///
    /// # Errors
    ///
    /// Returns a constructor or modal-host error without local recovery.
    fn show_drawing_preferences_dialog(
        &mut self,
        dialog: &mut DrawingPreferencesDialog,
    ) -> Result<(), Self::Error>;
}

pub trait SymbolTableHost {
    type Error;

    fn symbol_table_exists(&self) -> bool;

    /// Creates and registers the shared Iced symbol-table viewer.
    ///
    /// # Errors
    ///
    /// Returns a window-creation error before normal binding starts.
    fn create_symbol_table(&mut self) -> Result<(), Self::Error>;

    /// Loads the localized line used when the runtime display list is empty.
    ///
    /// # Errors
    ///
    /// Returns a localization error after the viewer has been registered.
    fn localized_empty_symbol_line(&mut self) -> Result<String, Self::Error>;

    /// Binds the new viewer to this Interpreter session and copies its lines.
    ///
    /// # Errors
    ///
    /// Returns a binding or view-refresh error after viewer registration.
    fn bind_symbol_table(
        &mut self,
        interpreter_generation: u64,
        symbol_list_text: &str,
    ) -> Result<(), Self::Error>;

    /// Shows and activates the registered modeless viewer.
    ///
    /// # Errors
    ///
    /// Returns the native window error without local recovery.
    fn show_and_activate_symbol_table(&mut self) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InterpreterRunMode {
    Normal,
}

#[derive(Debug, Clone, PartialEq)]
pub struct InterpreterRunRequest {
    pub source: String,
    pub configuration: InterpreterConfiguration,
    pub mode: InterpreterRunMode,
    pub saved_line: usize,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum InterpreterRunOutcome {
    Completed,
    Cancelled,
    FirstParserFailed(String),
    SecondParserFailed(String),
    RuntimeFailed(String),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InterpreterCursorPolicy {
    FinalLine,
    SavedLine,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct InterpreterRunReport {
    pub outcome: InterpreterRunOutcome,
    pub cursor_policy: InterpreterCursorPolicy,
}

pub trait InterpreterRunHost {
    type Error;

    /// Replaces the runtime and runs its generated parser and processing phases.
    ///
    /// The adapter owns the proprietary grammar boundary, runtime configuration
    /// transfer, application result callbacks, and error-dialog integration.
    /// It returns typed observable results for the Iced coordinator.
    ///
    /// # Errors
    ///
    /// Returns an escaping engine or adapter error after any state changes
    /// already made by parsing, execution, cancellation, or publication.
    fn execute_runtime(
        &mut self,
        request: &InterpreterRunRequest,
    ) -> Result<InterpreterRunReport, Self::Error>;
}

#[derive(Debug, Clone, PartialEq)]
pub struct InterpreterStartup {
    pub localized_caption_template: String,
    pub user_examples_directory: PathBuf,
    pub tina_examples_directory: PathBuf,
    pub configuration: InterpreterConfiguration,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct InterpreterShowState {
    pub line_label: String,
    pub column_label: String,
    pub execution_status: String,
    pub runtime_mode_status: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct InterpreterActivationState {
    pub parameters: Vec<String>,
    pub symbols: Vec<String>,
    pub symbol_list_text: String,
}

pub trait InterpreterActivationHost {
    /// Rebuilds runtime symbols from the live source and application context.
    fn rebuild_runtime_symbols(
        &mut self,
        source: &str,
        configuration: &InterpreterConfiguration,
    ) -> InterpreterActivationState;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InterpreterResource {
    OpenDialog,
    SaveDialog,
    Runtime,
    Helper,
    SharedSymbolTable,
    SymbolList,
    ActiveCallback,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InterpreterCloseAction {
    Release,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InterpreterDocumentGuardMode {
    Replace,
    Close,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum InterpreterUnsavedPrompt {
    Standalone { uppercase_name: String },
    EmbeddedUpdate,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InterpreterUnsavedChoice {
    Yes,
    No,
    Cancel,
}

pub trait InterpreterDocumentGuardHost {
    type Error;

    /// Shows the applicable Yes, No, or Cancel unsaved-document prompt.
    ///
    /// # Errors
    ///
    /// Returns a host prompt error without local recovery.
    fn prompt_unsaved_document(
        &mut self,
        prompt: InterpreterUnsavedPrompt,
    ) -> Result<InterpreterUnsavedChoice, Self::Error>;

    /// Runs the separately recovered Interpreter Save route.
    ///
    /// # Errors
    ///
    /// Returns a Save error without local recovery.
    fn save_document(&mut self, window: &mut Window) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InterpreterFontStyle {
    Bold,
    Italic,
    Underline,
    Strikeout,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum InterpreterFontPitch {
    #[default]
    Default,
    Fixed,
    Variable,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct InterpreterEditorFont {
    pub family: String,
    pub size_points: u16,
    pub styles: Vec<InterpreterFontStyle>,
    pub color_rgba: [u8; 4],
    pub charset: u8,
    pub pitch: InterpreterFontPitch,
}

impl Default for InterpreterEditorFont {
    fn default() -> Self {
        Self {
            family: "Consolas".to_owned(),
            size_points: 10,
            styles: Vec::new(),
            color_rgba: [0, 0, 0, 255],
            charset: 1,
            pitch: InterpreterFontPitch::Fixed,
        }
    }
}

pub trait InterpreterFontDialog {
    type Error;

    /// Selects a complete editor font, or returns `None` when canceled.
    ///
    /// # Errors
    ///
    /// Returns a platform-dialog error without local recovery.
    fn select_font(
        &mut self,
        current: &InterpreterEditorFont,
    ) -> Result<Option<InterpreterEditorFont>, Self::Error>;
}

pub trait InterpreterColorDialog {
    type Error;

    /// Selects a background color, or returns `None` when canceled.
    ///
    /// # Errors
    ///
    /// Returns a platform-dialog error after opaque mode was selected.
    fn select_color(&mut self, current_color: u32) -> Result<Option<u32>, Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InterpreterEditCommand {
    Cut,
    Copy,
    Paste,
    Delete,
}

pub trait InterpreterIdleHost {
    /// Reports whether the clipboard contains the editor text format.
    fn clipboard_has_text(&mut self) -> bool;
}

pub trait InterpreterKeyUpHost: InterpreterRunHost {
    /// Reports whether the streamed event state suppresses Enter execution.
    fn enter_execution_suppressed(&self) -> bool;
}

pub trait InterpreterLifecycleHost {
    /// Acquires the application-owned runtime, localization, dialog, editor,
    /// timer, and syntax-service resources used by the Interpreter form.
    fn load_startup(&mut self, form_state_key: &str) -> InterpreterStartup;

    /// Applies current form localization and returns show-time status text.
    fn prepare_show(&mut self) -> InterpreterShowState;

    /// Releases or clears one application-owned Interpreter resource.
    fn release_resource(&mut self, resource: InterpreterResource);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FileDialogMode {
    OpenExisting,
    SaveWithOverwriteConfirmation,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct FileDialogOptions {
    pub mode: FileDialogMode,
    pub validate_path: bool,
    pub resizable: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct InterpreterFileDialog {
    pub name: &'static str,
    pub default_extension: &'static str,
    pub filter: &'static str,
    pub options: FileDialogOptions,
    pub places: Vec<(&'static str, PathBuf)>,
    pub initial_directory: PathBuf,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SystemTextBackground {
    Transparent,
    Opaque,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SystemTextBorder {
    None,
    Solid,
    Dotted,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SystemTextPresentation {
    pub background: SystemTextBackground,
    pub color: u32,
    pub border: SystemTextBorder,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum InterpreterLifecycleState {
    #[default]
    Uninitialized,
    Initialized,
    Shown,
    Destroyed,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum SyntaxHighlightingState {
    #[default]
    Inactive,
    Active,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum InterpreterProgressState {
    #[default]
    Idle,
    Waiting(Duration),
    FeedbackAllowed(Duration),
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum InterpreterComponentEditState {
    #[default]
    Standalone,
    Editing {
        update_enabled: bool,
    },
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum InterpreterCloseMenuState {
    #[default]
    NormalClose,
    CloseAndUpdate,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum InterpreterDocumentMode {
    #[default]
    Standalone,
    EmbeddedUpdate,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum InterpreterUpdateChoice {
    Update,
    DoNotUpdate,
}

pub trait IprDecoder {
    type Error;

    /// Separates program text and updates the supplied configuration.
    ///
    /// # Errors
    ///
    /// Returns a decode error after any configuration writes already made by
    /// the decoder.
    fn decode_program(
        &mut self,
        source: &str,
        configuration: &mut InterpreterConfiguration,
    ) -> Result<String, Self::Error>;
}

pub trait IprSerializer {
    type Error;

    /// Writes source lines and Interpreter configuration to the target path.
    ///
    /// # Errors
    ///
    /// Returns the serializer write error without local recovery.
    fn write_ipr(
        &mut self,
        path: &Path,
        program_lines: &[String],
        configuration: &InterpreterConfiguration,
        include_configuration: bool,
    ) -> Result<(), Self::Error>;
}

pub trait InterpreterConfigurationAppender {
    type Error;

    /// Appends the product configuration block to caller-owned text lines.
    ///
    /// # Errors
    ///
    /// Returns an adapter error after any configuration lines already added to
    /// the target. The caller does not restore its previous contents.
    fn append_configuration(
        &mut self,
        target: &mut Vec<String>,
        configuration: &InterpreterConfiguration,
    ) -> Result<(), Self::Error>;
}

pub trait InterpreterComponentUpdateHost {
    type Error;

    /// Replaces the selected component's text, configuration, and font.
    ///
    /// # Errors
    ///
    /// Returns an adapter error after any partial component change.
    fn replace_component_content(
        &mut self,
        source_lines: &[String],
        configuration: &InterpreterConfiguration,
        editor_font: &InterpreterEditorFont,
    ) -> Result<(), Self::Error>;

    /// Marks the active schematic as changed.
    ///
    /// # Errors
    ///
    /// Returns a schematic-state error.
    fn mark_schematic_changed(&mut self) -> Result<(), Self::Error>;

    /// Gets the edited component bounds.
    ///
    /// # Errors
    ///
    /// Returns a component-query error.
    fn component_bounds(&mut self) -> Result<Rectangle, Self::Error>;

    /// Requests repaint of the supplied schematic bounds.
    ///
    /// # Errors
    ///
    /// Returns a schematic-surface error.
    fn update_schematic_bounds(&mut self, bounds: Rectangle) -> Result<(), Self::Error>;

    /// Enters the form close-query pipeline.
    ///
    /// # Errors
    ///
    /// Returns a close-request error after prior updates remain applied.
    fn request_close(&mut self) -> Result<(), Self::Error>;
}

pub trait InterpreterPlacementHost: InterpreterComponentUpdateHost {
    /// Appends the product configuration block to temporary placement lines.
    ///
    /// # Errors
    ///
    /// Returns an adapter error after any partial append.
    fn append_placement_configuration(
        &mut self,
        target: &mut Vec<String>,
        configuration: &InterpreterConfiguration,
    ) -> Result<(), Self::Error>;

    /// Inserts schematic text-object subtype 1.
    ///
    /// # Errors
    ///
    /// Returns an insertion error after any partial schematic change.
    fn insert_schematic_text_object(
        &mut self,
        serialized_lines: &[String],
        editor_font: &InterpreterEditorFont,
        subtype: u8,
    ) -> Result<(), Self::Error>;
}

pub trait InterpreterBackgroundPopupHost {
    type Error;

    /// Converts a button-relative point to screen coordinates.
    ///
    /// # Errors
    ///
    /// Returns a window-coordinate conversion error.
    fn button_point_to_screen(&mut self, point: Point) -> Result<Point, Self::Error>;

    /// Opens the background popup at an explicit screen point.
    ///
    /// # Errors
    ///
    /// Returns a popup-host error after coordinate conversion.
    fn open_background_popup(&mut self, screen_point: Point) -> Result<(), Self::Error>;
}

pub trait SaveAsHandler {
    type Error;

    /// Runs the separately recovered Save As flow.
    ///
    /// A canceled dialog returns normally because the original void route has
    /// no cancellation result.
    ///
    /// # Errors
    ///
    /// Returns a dialog or serializer error without local recovery.
    fn save_as(&mut self, window: &mut Window) -> Result<(), Self::Error>;
}

pub trait SaveIprDialog {
    type Error;

    /// Shows the Save dialog with the current leaf as its proposed name.
    ///
    /// # Errors
    ///
    /// Returns a host dialog error without changing application state.
    fn select_ipr_path(&mut self, proposed_file_name: &str)
    -> Result<Option<PathBuf>, Self::Error>;
}

#[derive(Debug)]
pub enum IprLoadError<DecodeError> {
    Read(std::io::Error),
    Decode(DecodeError),
}

impl<DecodeError: fmt::Display> fmt::Display for IprLoadError<DecodeError> {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Read(error) => write!(formatter, "failed to read the IPR file: {error}"),
            Self::Decode(error) => write!(formatter, "failed to decode the IPR file: {error}"),
        }
    }
}

impl<DecodeError> std::error::Error for IprLoadError<DecodeError> where
    DecodeError: std::error::Error + 'static
{
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct InterpreterConfiguration {
    values: Vec<u64>,
    numerical: InterpreterNumericalSettings,
    drawing: DrawingOwner,
}

impl InterpreterConfiguration {
    #[must_use]
    pub fn new(values: Vec<u64>) -> Self {
        Self {
            values,
            numerical: InterpreterNumericalSettings {
                numerical: crate::numerical_format::NumericalSettings {
                    notation: crate::numerical_format::NumericalNotation::Scaled,
                    angle: crate::numerical_format::AngleUnit::Radians,
                    complex: crate::numerical_format::ComplexNotation::Algebraic,
                    imaginary: ImaginarySymbol::J,
                    displayed_precision: 4,
                },
                math: crate::numerical_format::MathSettings {
                    differentiation_step: 0.01,
                    integration_subdivisions: 100,
                    internal_step: 0.000_02,
                    internal_count: 100,
                    internal_flag: 0,
                },
            },
            drawing: DrawingOwner::default(),
        }
    }

    #[must_use]
    pub fn values(&self) -> &[u64] {
        &self.values
    }

    #[must_use]
    pub const fn numerical(&self) -> InterpreterNumericalSettings {
        self.numerical
    }

    #[must_use]
    pub const fn drawing(&self) -> &DrawingOwner {
        &self.drawing
    }
}

/// Loads a UTF-8 IPR file into the Interpreter editor and configuration.
///
/// Ports Ghidra function `0x017EF4D0`, symbol `FUN_017ef4d0`. The complete
/// file is read before the editor is cleared. The shared decoder then receives
/// the text and mutable configuration. Its program output is assigned only
/// after decoding returns successfully.
///
/// # Errors
///
/// Returns a UTF-8 file-read error without changing the editor or
/// configuration. Returns a decoder error after clearing the editor and keeps
/// configuration changes that the decoder made before the error.
pub fn load_ipr_document_from_utf8<Decoder: IprDecoder>(
    path: &Path,
    program: &mut text_editor::Content,
    configuration: &mut InterpreterConfiguration,
    decoder: &mut Decoder,
) -> Result<(), IprLoadError<Decoder::Error>> {
    let source = std::fs::read_to_string(path).map_err(IprLoadError::Read)?;
    let source = source.strip_prefix('\u{feff}').unwrap_or(&source);

    *program = text_editor::Content::new();
    let program_text = decoder
        .decode_program(source, configuration)
        .map_err(IprLoadError::Decode)?;
    *program = text_editor::Content::with_text(&program_text);
    Ok(())
}

#[derive(Debug)]
pub struct Window {
    program: text_editor::Content,
    undo_history: Vec<EditorSnapshot>,
    redo_history: Vec<EditorSnapshot>,
    editor_read_only: bool,
    symbols: Vec<InterpreterSymbol>,
    parameters: Vec<String>,
    interpreter_configuration: InterpreterConfiguration,
    interpreter_generation: u64,
    document_modified: bool,
    current_file_name: String,
    caption_template: String,
    caption: String,
    status: String,
    status_detail: String,
    line_label: String,
    column_label: String,
    execution_status_text: String,
    runtime_mode_status_text: String,
    last_open_directory: Option<PathBuf>,
    search_again_enabled: bool,
    component_value_permission: ComponentValuePermission,
    symbol_list_text: String,
    open_dialog: Option<InterpreterFileDialog>,
    save_dialog: Option<InterpreterFileDialog>,
    system_text_presentation: SystemTextPresentation,
    help_context: u32,
    lifecycle_state: InterpreterLifecycleState,
    syntax_highlighting_state: SyntaxHighlightingState,
    document_mode: InterpreterDocumentMode,
    embedded_update_choice: Option<InterpreterUpdateChoice>,
    editor_font: InterpreterEditorFont,
    enabled_edit_commands: Vec<InterpreterEditCommand>,
    progress_state: InterpreterProgressState,
    component_edit_state: InterpreterComponentEditState,
    close_menu_state: InterpreterCloseMenuState,
    background_popup_internal_value: u8,
    background_popup_position: Option<Point>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            program: text_editor::Content::new(),
            undo_history: Vec::new(),
            redo_history: Vec::new(),
            editor_read_only: false,
            symbols: Vec::new(),
            parameters: Vec::new(),
            interpreter_configuration: InterpreterConfiguration::default(),
            interpreter_generation: 0,
            document_modified: false,
            current_file_name: NEW_DOCUMENT_NAME.to_owned(),
            caption_template: CAPTION_TEMPLATE.to_owned(),
            caption: TITLE.to_owned(),
            status: STATUS.to_owned(),
            status_detail: String::new(),
            line_label: "Line:".to_owned(),
            column_label: "Col:".to_owned(),
            execution_status_text: "Successfully compiled".to_owned(),
            runtime_mode_status_text: "Editing commands".to_owned(),
            last_open_directory: None,
            search_again_enabled: false,
            component_value_permission: ComponentValuePermission::Denied,
            symbol_list_text: String::new(),
            open_dialog: None,
            save_dialog: None,
            system_text_presentation: SystemTextPresentation {
                background: SystemTextBackground::Transparent,
                color: 0x00ff_ffff,
                border: SystemTextBorder::None,
            },
            help_context: 0,
            lifecycle_state: InterpreterLifecycleState::Uninitialized,
            syntax_highlighting_state: SyntaxHighlightingState::Inactive,
            document_mode: InterpreterDocumentMode::Standalone,
            embedded_update_choice: None,
            editor_font: InterpreterEditorFont::default(),
            enabled_edit_commands: Vec::new(),
            progress_state: InterpreterProgressState::Idle,
            component_edit_state: InterpreterComponentEditState::Standalone,
            close_menu_state: InterpreterCloseMenuState::NormalClose,
            background_popup_internal_value: 0,
            background_popup_position: None,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct InterpreterSymbol {
    name: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct EditorSnapshot {
    text: String,
    cursor: (usize, usize),
    modified: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum ComponentValuePermission {
    #[default]
    Denied,
    Allowed,
}

impl ComponentValuePermission {
    const fn is_allowed(self) -> bool {
        matches!(self, Self::Allowed)
    }
}

impl From<bool> for ComponentValuePermission {
    fn from(value: bool) -> Self {
        if value { Self::Allowed } else { Self::Denied }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    Edit(text_editor::Action),
    PasteText(Option<String>),
    RenameImaginaryUnit { previous: char, selected: char },
    ProgressTimerElapsed,
    CommandSelected,
}

impl Message {
    #[must_use = "pass this message to Window::update to rename the Interpreter symbol"]
    pub const fn rename_imaginary_unit(previous: char, selected: char) -> Self {
        Self::RenameImaginaryUnit { previous, selected }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::Edit(action) => {
                self.perform_editor_action(action);
            }
            Message::PasteText(text) => {
                self.paste_text(text);
            }
            Message::RenameImaginaryUnit { previous, selected } => {
                self.rename_imaginary_unit_symbol(previous, selected);
            }
            Message::ProgressTimerElapsed => {
                self.progress_timer_elapsed();
            }
            Message::CommandSelected => {}
        }
    }

    /// Initializes the Interpreter form and its application-owned services.
    ///
    /// Ports Ghidra function `0x017EFDF0`, symbol `FUN_017efdf0`, recovered as
    /// `I_Class.OnCreate`. The typed host acquires localization, runtime,
    /// timer, dialog, and editor services under form-state key `bmInterp`.
    /// Iced retains the unnamed clean document, localized caption, disabled
    /// Search Again state, transparent white system-text presentation, file
    /// dialog definitions and example locations, and form help context 5001.
    /// Host failures can unwind without a local catch, as in the recovered
    /// handler.
    pub fn form_create(&mut self, host: &mut impl InterpreterLifecycleHost) {
        let startup = host.load_startup("bmInterp");

        self.program = text_editor::Content::new();
        self.undo_history.clear();
        self.redo_history.clear();
        self.editor_read_only = false;
        self.symbols.clear();
        self.parameters.clear();
        self.interpreter_configuration = startup.configuration;
        self.interpreter_generation = self.interpreter_generation.wrapping_add(1);
        self.document_modified = false;
        NEW_DOCUMENT_NAME.clone_into(&mut self.current_file_name);
        self.caption_template = startup.localized_caption_template;
        self.refresh_caption();
        STATUS.clone_into(&mut self.status);
        self.status_detail.clear();
        "Line:".clone_into(&mut self.line_label);
        "Col:".clone_into(&mut self.column_label);
        "Successfully compiled".clone_into(&mut self.execution_status_text);
        "Editing commands".clone_into(&mut self.runtime_mode_status_text);
        self.last_open_directory = None;
        self.search_again_enabled = false;
        self.component_value_permission = ComponentValuePermission::Denied;
        self.symbol_list_text.clear();
        self.system_text_presentation = SystemTextPresentation {
            background: SystemTextBackground::Transparent,
            color: 0x00ff_ffff,
            border: SystemTextBorder::None,
        };

        let places = vec![
            ("User Examples", startup.user_examples_directory.clone()),
            ("Tina Examples", startup.tina_examples_directory.clone()),
        ];
        self.open_dialog = Some(InterpreterFileDialog {
            name: "OpenIPRDlg",
            default_extension: "ipr",
            filter: "Interpreter file (*.IPR)|*.IPR",
            options: FileDialogOptions {
                mode: FileDialogMode::OpenExisting,
                validate_path: true,
                resizable: true,
            },
            places: places.clone(),
            initial_directory: startup.tina_examples_directory,
        });
        self.save_dialog = Some(InterpreterFileDialog {
            name: "SaveIPRDlg",
            default_extension: "ipr",
            filter: "Interpreter file (*.IPR)|*.IPR",
            options: FileDialogOptions {
                mode: FileDialogMode::SaveWithOverwriteConfirmation,
                validate_path: true,
                resizable: true,
            },
            places,
            initial_directory: startup.user_examples_directory,
        });
        self.help_context = HELP_CONTEXT;
        self.lifecycle_state = InterpreterLifecycleState::Initialized;
        self.syntax_highlighting_state = SyntaxHighlightingState::Inactive;
    }

    /// Applies show-time localization and activates syntax presentation.
    ///
    /// Ports Ghidra function `0x017F0520`, symbol `FUN_017f0520`, recovered as
    /// `I_Class.OnShow`. The host owns recursive form localization and supplies
    /// the localized line, column, execution, and runtime-mode text. The Iced
    /// state formats the recovered initial coordinate 1, activates the attached
    /// syntax presentation, and changes no document content or persistence.
    pub fn form_show(&mut self, host: &mut impl InterpreterLifecycleHost) {
        let show = host.prepare_show();
        self.line_label = show.line_label;
        self.column_label = show.column_label;
        self.execution_status_text = show.execution_status;
        self.runtime_mode_status_text = show.runtime_mode_status;
        self.status_detail
            .clone_from(&self.runtime_mode_status_text);
        self.refresh_caret_status();
        self.syntax_highlighting_state = SyntaxHighlightingState::Active;
        self.lifecycle_state = InterpreterLifecycleState::Shown;
    }

    /// Refreshes Interpreter runtime symbols when the form becomes active.
    ///
    /// Ports Ghidra function `0x017F07C0`, symbol `FUN_017f07c0`, recovered as
    /// `TI_Class.FormActivate`. The typed host attaches the live editor source,
    /// clears the old runtime symbol collection, and rebuilds symbols from the
    /// available application and project context. Iced applies the resulting
    /// parameter and symbol views, then rebuilds the localized caption from the
    /// current file name. The activation does not edit source or persistence.
    pub fn form_activate(&mut self, host: &mut impl InterpreterActivationHost) {
        let source = self.program.text();
        let activation = host.rebuild_runtime_symbols(&source, &self.interpreter_configuration);
        self.parameters = activation.parameters;
        self.symbols = activation
            .symbols
            .into_iter()
            .map(|name| InterpreterSymbol { name })
            .collect();
        self.symbol_list_text = activation.symbol_list_text;
        self.refresh_caption();
    }

    /// Selects release after an approved Interpreter close request.
    ///
    /// Ports Ghidra function `0x017F0F10`, symbol `FUN_017f0f10`, recovered as
    /// `TI_Class.FormClose`. Delphi value 2 is `caFree`; the typed Iced adapter
    /// therefore selects release instead of hide or minimize. This handler does
    /// not inspect or mutate form, editor, runtime, or persistent state.
    #[must_use]
    pub const fn form_close(&self) -> InterpreterCloseAction {
        InterpreterCloseAction::Release
    }

    /// Applies the modified-document guard during an Interpreter close query.
    ///
    /// Ports Ghidra function `0x017F0F20`, symbol `FUN_017f0f20`, recovered as
    /// `TI_Class.FormCloseQuery`. The wrapper passes close mode to the shared
    /// guard and returns its Boolean result without extra state changes.
    ///
    /// # Errors
    ///
    /// Returns a prompt or Save error from the shared guard without recovery.
    pub fn form_close_query<Host: InterpreterDocumentGuardHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<bool, Host::Error> {
        self.guard_document(host, InterpreterDocumentGuardMode::Close)
    }

    /// Guards replacement or closure of a modified Interpreter document.
    ///
    /// Ports Ghidra function `0x017F1540`, symbol `FUN_017f1540`. An unmodified
    /// editor is permitted without a prompt. Standalone Cancel rejects the
    /// operation, No permits it without saving, and Yes invokes Save before it
    /// is permitted. The recovered procedure does not inspect a Save result or
    /// recheck the modified flag. Embedded close mode records Yes or No as the
    /// external update choice and uses Cancel as the only veto.
    ///
    /// # Errors
    ///
    /// Returns a prompt or Save error without local recovery or rollback.
    pub fn guard_document<Host: InterpreterDocumentGuardHost>(
        &mut self,
        host: &mut Host,
        mode: InterpreterDocumentGuardMode,
    ) -> Result<bool, Host::Error> {
        if !self.document_modified {
            return Ok(true);
        }

        let embedded_close = self.document_mode == InterpreterDocumentMode::EmbeddedUpdate
            && mode == InterpreterDocumentGuardMode::Close;
        let prompt = if embedded_close {
            InterpreterUnsavedPrompt::EmbeddedUpdate
        } else {
            InterpreterUnsavedPrompt::Standalone {
                uppercase_name: self.current_file_name.to_uppercase(),
            }
        };

        match host.prompt_unsaved_document(prompt)? {
            InterpreterUnsavedChoice::Cancel => Ok(false),
            InterpreterUnsavedChoice::Yes if embedded_close => {
                self.embedded_update_choice = Some(InterpreterUpdateChoice::Update);
                Ok(true)
            }
            InterpreterUnsavedChoice::No if embedded_close => {
                self.embedded_update_choice = Some(InterpreterUpdateChoice::DoNotUpdate);
                Ok(true)
            }
            InterpreterUnsavedChoice::Yes => {
                host.save_document(self)?;
                Ok(true)
            }
            InterpreterUnsavedChoice::No => Ok(true),
        }
    }

    /// Edits the complete Interpreter source-editor font.
    ///
    /// Ports Ghidra function `0x017F1430`, symbol `FUN_017f1430`, recovered as
    /// `TI_Class.sbSetFontClick`. The platform dialog is seeded from the current
    /// editor font on every call. Cancel keeps the font unchanged. Acceptance
    /// replaces the complete font value; Iced then recalculates presentation
    /// during layout. Source text, cursor coordinates, history, configuration,
    /// modified state, and persistence do not change.
    ///
    /// # Errors
    ///
    /// Returns a platform-dialog error without local recovery or rollback.
    pub fn set_editor_font<Dialog: InterpreterFontDialog>(
        &mut self,
        dialog: &mut Dialog,
    ) -> Result<(), Dialog::Error> {
        if let Some(selected) = dialog.select_font(&self.editor_font)? {
            self.editor_font = selected;
        }
        Ok(())
    }

    /// Opens the Interpreter background and border popup below its button.
    ///
    /// Ports Ghidra function `0x017F2BE0`, symbol `FUN_017f2be0`, recovered as
    /// `TI_Class.SetBackgroundClick`. The handler clears the unnamed popup
    /// field, converts button-relative point `(0, height + 2)` to screen
    /// coordinates, and opens the popup there. It does not inspect a selected
    /// target or change staged style, source, modified, undo, or persistent
    /// state.
    ///
    /// # Errors
    ///
    /// Returns a coordinate or popup-host error without rollback.
    pub fn open_background_popup<Host: InterpreterBackgroundPopupHost>(
        &mut self,
        button_height: f32,
        host: &mut Host,
    ) -> Result<(), Host::Error> {
        self.background_popup_internal_value = 0;
        self.background_popup_position = None;
        let relative_point = Point::new(0.0, button_height + 2.0);
        let screen_point = host.button_point_to_screen(relative_point)?;
        host.open_background_popup(screen_point)?;
        self.background_popup_position = Some(screen_point);
        Ok(())
    }

    #[must_use]
    pub const fn background_popup_position(&self) -> Option<Point> {
        self.background_popup_position
    }

    /// Selects transparent Interpreter background staging.
    ///
    /// Ports Ghidra function `0x017F2C50`, symbol `FUN_017f2c50`, recovered as
    /// `TI_Class.TransparentMnuClick`. The typed background value makes the
    /// Transparent item selected and the Opaque item clear. It preserves the
    /// staged color and border and does not change a target, editor, undo,
    /// modified, repaint, or persistent state.
    pub const fn select_transparent_background(&mut self) {
        self.system_text_presentation.background = SystemTextBackground::Transparent;
    }

    /// Selects opaque background staging and optionally replaces its color.
    ///
    /// Ports Ghidra function `0x017F2C90`, symbol `FUN_017f2c90`, recovered as
    /// `TI_Class.OpaqueMnuClick`. Opaque mode is selected before the color
    /// dialog opens with the current staged color. Acceptance replaces that
    /// color. Cancel keeps the old color but does not restore transparent mode.
    /// Border, target, editor, undo, modified, repaint, and persistent state do
    /// not change.
    ///
    /// # Errors
    ///
    /// Returns a color-dialog error while keeping opaque mode and the old color.
    pub fn select_opaque_background<Dialog: InterpreterColorDialog>(
        &mut self,
        dialog: &mut Dialog,
    ) -> Result<(), Dialog::Error> {
        self.system_text_presentation.background = SystemTextBackground::Opaque;
        if let Some(color) = dialog.select_color(self.system_text_presentation.color)? {
            self.system_text_presentation.color = color;
        }
        Ok(())
    }

    /// Selects no-border Interpreter style staging.
    ///
    /// Ports Ghidra function `0x017F2D20`, symbol `FUN_017f2d20`, recovered as
    /// `TI_Class.NoneMnuClick`. The typed border value makes None selected and
    /// Solid and Dotted clear. It preserves background mode and color and does
    /// not change a target, editor, undo, repaint, modified, or persistent state.
    pub const fn select_no_border(&mut self) {
        self.system_text_presentation.border = SystemTextBorder::None;
    }

    /// Selects solid-border Interpreter style staging.
    ///
    /// Ports Ghidra function `0x017F2D60`, symbol `FUN_017f2d60`, recovered as
    /// `TI_Class.SolidMnuClick`. The typed border value makes Solid selected and
    /// None and Dotted clear. It preserves all other local and application state.
    pub const fn select_solid_border(&mut self) {
        self.system_text_presentation.border = SystemTextBorder::Solid;
    }

    /// Selects dotted-border Interpreter style staging.
    ///
    /// Ports Ghidra function `0x017F2DA0`, symbol `FUN_017f2da0`, recovered as
    /// `TI_Class.DottedMnuClick`. The typed border value makes Dotted selected
    /// and None and Solid clear. It preserves all other local and application state.
    pub const fn select_dotted_border(&mut self) {
        self.system_text_presentation.border = SystemTextBorder::Dotted;
    }

    /// Loads Interpreter system-text presentation staging.
    ///
    /// Ports Ghidra function `0x017F2DE0`, symbol `FUN_017f2de0`, recovered as
    /// `TI_Class.SetBackgroundStyle`. The typed presentation synchronizes the
    /// mutually exclusive background and border choices with their stored values.
    /// It does not change editor, document, undo, target, repaint, or persistent state.
    pub const fn load_system_text_presentation(&mut self, presentation: SystemTextPresentation) {
        self.system_text_presentation = presentation;
    }

    /// Refreshes Interpreter Edit-menu enablement during application idle.
    ///
    /// Ports Ghidra function `0x017F14B0`, symbol `FUN_017f14b0`, recovered as
    /// `TI_Class.I_ClassEventsIdle`. Cut, Copy, and Delete follow whether the
    /// Iced editor has a non-empty selection. Paste follows whether the host
    /// clipboard contains the editor text format. No editor, command, history,
    /// modified, or persistent state changes occur.
    pub fn application_idle(&mut self, host: &mut impl InterpreterIdleHost) {
        let has_selection = self
            .program
            .selection()
            .is_some_and(|selection| !selection.is_empty());
        let clipboard_has_text = host.clipboard_has_text();

        self.enabled_edit_commands.clear();
        if has_selection {
            self.enabled_edit_commands
                .extend([InterpreterEditCommand::Cut, InterpreterEditCommand::Copy]);
        }
        if clipboard_has_text {
            self.enabled_edit_commands
                .push(InterpreterEditCommand::Paste);
        }
        if has_selection {
            self.enabled_edit_commands
                .push(InterpreterEditCommand::Delete);
        }
    }

    /// Handles an Interpreter editor key release and refreshes caret status.
    ///
    /// Ports Ghidra function `0x017F16E0`, symbol `FUN_017f16e0`, recovered as
    /// `TI_Class.EditKeyUp`. Unshifted Enter runs the shared normal-mode
    /// coordinator unless the streamed event state suppresses it. Other keys,
    /// shifted Enter, and suppressed Enter do not run source. Every normal
    /// return refreshes the displayed caret coordinate; an escaping run error
    /// stops before that refresh, as in the recovered call order.
    ///
    /// # Errors
    ///
    /// Returns the shared run error without local recovery.
    pub fn editor_key_up<Host: InterpreterKeyUpHost>(
        &mut self,
        key: &Key,
        modifiers: Modifiers,
        host: &mut Host,
    ) -> Result<(), Host::Error> {
        if matches!(key, Key::Named(Named::Enter))
            && !modifiers.shift()
            && !host.enter_execution_suppressed()
        {
            self.compile_and_execute(host, InterpreterRunMode::Normal)?;
        }
        self.refresh_caret_status();
        Ok(())
    }

    /// Refreshes the displayed Interpreter caret coordinate.
    ///
    /// Ports Ghidra function `0x017F0950`, symbol `FUN_017f0950`. Iced exposes
    /// zero-based cursor coordinates, which this adapter converts to the
    /// recovered one-based Line and Column display. Rebuilding equal text is
    /// harmless and changes no editor content, selection, history, or document
    /// state.
    pub fn refresh_caret_status(&mut self) {
        let (line, column) = self.program.cursor_position();
        self.status = format!(
            "{} {} {} {}    {}    {}",
            self.line_label,
            line.saturating_add(1),
            self.column_label,
            column.saturating_add(1),
            self.execution_status_text,
            self.runtime_mode_status_text
        );
    }

    /// Refreshes caret status after an Interpreter editor click.
    ///
    /// Ports Ghidra function `0x017F07B0`, symbol `FUN_017f07b0`, recovered as
    /// `TI_Class.EditClick`. The wrapper delegates only to the shared caret
    /// status updater. It does not move the caret, change selection or text,
    /// run source, or persist state.
    pub fn editor_clicked(&mut self) {
        self.refresh_caret_status();
    }

    /// Refreshes caret status after an Interpreter editor mouse press.
    ///
    /// Ports Ghidra function `0x017F1730`, symbol `FUN_017f1730`, recovered as
    /// `TI_Class.EditMouseDown`. The wrapper ignores button, shift, and pointer
    /// coordinates and delegates only to the shared caret-status updater. Iced
    /// owns mouse selection and focus behavior.
    pub fn editor_mouse_down(&mut self) {
        self.refresh_caret_status();
    }

    /// Refreshes caret status after an Interpreter editor mouse release.
    ///
    /// Ports Ghidra function `0x017F1750`, symbol `FUN_017f1750`, recovered as
    /// `TI_Class.EditMouseUp`. The wrapper ignores button, shift, and pointer
    /// coordinates and delegates only to the shared caret-status updater. Iced
    /// owns mouse selection and focus behavior.
    pub fn editor_mouse_up(&mut self) {
        self.refresh_caret_status();
    }

    /// Starts the one-second delay before runtime progress feedback is allowed.
    ///
    /// The shared run coordinator uses this Iced timer state when it replaces
    /// the Interpreter runtime. A new runtime starts with progress feedback
    /// disabled, as recovered from its constructor.
    pub const fn start_progress_timer(&mut self) {
        self.progress_state = InterpreterProgressState::Waiting(PROGRESS_TIMER_INTERVAL);
    }

    /// Allows the runtime to show progress feedback after the startup delay.
    ///
    /// Ports Ghidra function `0x017F1780`, symbol `FUN_017f1780`, recovered as
    /// `TI_Class.MyTimerDone`. The callback disables its one-shot timer, keeps
    /// the interval at 1,000 ms, and enables the process-loop flag that permits
    /// creation of the runtime progress dialog. It does not cancel execution,
    /// change the editor, or persist the document.
    pub const fn progress_timer_elapsed(&mut self) {
        self.progress_state = InterpreterProgressState::FeedbackAllowed(PROGRESS_TIMER_INTERVAL);
    }

    pub fn subscription(&self) -> Subscription<Message> {
        match self.progress_state {
            InterpreterProgressState::Waiting(interval) => {
                iced::time::every(interval).map(|_| Message::ProgressTimerElapsed)
            }
            InterpreterProgressState::Idle | InterpreterProgressState::FeedbackAllowed(_) => {
                Subscription::none()
            }
        }
    }

    #[must_use]
    pub const fn progress_timer_enabled(&self) -> bool {
        matches!(self.progress_state, InterpreterProgressState::Waiting(_))
    }

    #[must_use]
    pub const fn progress_timer_interval(&self) -> Duration {
        match self.progress_state {
            InterpreterProgressState::Idle => PROGRESS_TIMER_INTERVAL,
            InterpreterProgressState::Waiting(interval)
            | InterpreterProgressState::FeedbackAllowed(interval) => interval,
        }
    }

    #[must_use]
    pub const fn progress_feedback_enabled(&self) -> bool {
        matches!(
            self.progress_state,
            InterpreterProgressState::FeedbackAllowed(_)
        )
    }

    /// Compiles and executes the current in-memory Interpreter source.
    ///
    /// Ports Ghidra function `0x017F17C0`, symbol `FUN_017f17c0`. The Iced
    /// coordinator records the caret line, starts the one-second progress
    /// delay, and supplies the current unsaved source, configuration, and mode
    /// to the typed runtime adapter. Handled parser and runtime failures retain
    /// their diagnostic status. Completed and cooperatively cancelled runs use
    /// the same host publication path. Every handled return applies the cursor
    /// policy and disables the timer. An escaping adapter error adds no cleanup
    /// or rollback, as in the recovered procedure.
    ///
    /// # Errors
    ///
    /// Returns an escaping runtime-adapter error after any changes already made
    /// by runtime replacement, parsing, processing, or result publication.
    pub fn compile_and_execute<Host: InterpreterRunHost>(
        &mut self,
        host: &mut Host,
        mode: InterpreterRunMode,
    ) -> Result<(), Host::Error> {
        let saved_line = self.program.cursor_position().0;
        self.start_progress_timer();
        let request = InterpreterRunRequest {
            source: self.program.text(),
            configuration: self.interpreter_configuration.clone(),
            mode,
            saved_line,
        };
        let report = host.execute_runtime(&request)?;

        match &report.outcome {
            InterpreterRunOutcome::Completed | InterpreterRunOutcome::Cancelled => {}
            InterpreterRunOutcome::FirstParserFailed(diagnostic)
            | InterpreterRunOutcome::SecondParserFailed(diagnostic)
            | InterpreterRunOutcome::RuntimeFailed(diagnostic) => {
                self.execution_status_text.clone_from(diagnostic);
            }
        }

        match report.cursor_policy {
            InterpreterCursorPolicy::FinalLine => self.move_caret_to_final_line(),
            InterpreterCursorPolicy::SavedLine => self.move_caret_to_line(saved_line),
        }
        self.progress_state = InterpreterProgressState::Idle;
        self.refresh_caret_status();
        Ok(())
    }

    fn move_caret_to_line(&mut self, line: usize) {
        self.program.perform(text_editor::Action::Move(
            text_editor::Motion::DocumentStart,
        ));
        for _ in 0..line {
            self.program
                .perform(text_editor::Action::Move(text_editor::Motion::Down));
        }
        self.program
            .perform(text_editor::Action::Move(text_editor::Motion::Home));
    }

    /// Releases Interpreter resources during form destruction.
    ///
    /// Ports Ghidra function `0x017F0730`, symbol `FUN_017f0730`, recovered as
    /// `TI_Class.FormDestroy`. The lifecycle host destroys the Open dialog,
    /// Save dialog, runtime, helper, shared symbol-table viewer, symbol list,
    /// and active callback in the recovered order. Local Iced ownership is
    /// cleared after each corresponding release. A panic stops the sequence
    /// without an added catch or rollback.
    pub fn form_destroy(&mut self, host: &mut impl InterpreterLifecycleHost) {
        host.release_resource(InterpreterResource::OpenDialog);
        self.open_dialog = None;
        host.release_resource(InterpreterResource::SaveDialog);
        self.save_dialog = None;
        host.release_resource(InterpreterResource::Runtime);
        host.release_resource(InterpreterResource::Helper);
        host.release_resource(InterpreterResource::SharedSymbolTable);
        host.release_resource(InterpreterResource::SymbolList);
        self.symbols.clear();
        self.parameters.clear();
        self.symbol_list_text.clear();
        host.release_resource(InterpreterResource::ActiveCallback);
        self.syntax_highlighting_state = SyntaxHighlightingState::Inactive;
        self.lifecycle_state = InterpreterLifecycleState::Destroyed;
    }

    /// Renames the Interpreter built-in imaginary-unit symbol.
    ///
    /// Implements the responsibility recovered at Ghidra address `0x013B37D0`
    /// for symbol `FUN_013b37d0`. The standard-library slice search keeps the
    /// record in its original position and changes only its name. A missing old
    /// name is a no-op.
    fn rename_imaginary_unit_symbol(&mut self, previous: char, selected: char) {
        let previous = previous.to_string();
        let Some(symbol) = self
            .symbols
            .iter_mut()
            .find(|symbol| symbol.name == previous)
        else {
            return;
        };

        symbol.name = selected.to_string();
    }

    fn perform_editor_action(&mut self, action: text_editor::Action) {
        if action.is_edit() {
            if self.editor_read_only {
                return;
            }
            self.perform_tracked_edit(action);
        } else {
            self.program.perform(action);
        }
    }

    fn perform_tracked_edit(&mut self, action: text_editor::Action) {
        let snapshot = self.editor_snapshot();
        self.program.perform(action);
        if self.program.text() != snapshot.text {
            self.undo_history.push(snapshot);
            self.redo_history.clear();
            self.document_modified = true;
        }
    }

    fn paste_text(&mut self, text: Option<String>) {
        if self.editor_read_only {
            return;
        }
        let Some(text) = text else {
            return;
        };

        self.perform_editor_action(text_editor::Action::Edit(text_editor::Edit::Paste(
            text.into(),
        )));
    }

    fn editor_snapshot(&self) -> EditorSnapshot {
        EditorSnapshot {
            text: self.program.text(),
            cursor: self.program.cursor_position(),
            modified: self.document_modified,
        }
    }

    fn restore_editor_snapshot(&mut self, snapshot: &EditorSnapshot) {
        self.program = text_editor::Content::with_text(&snapshot.text);
        self.program.perform(text_editor::Action::Move(
            text_editor::Motion::DocumentStart,
        ));
        for _ in 0..snapshot.cursor.0 {
            self.program
                .perform(text_editor::Action::Move(text_editor::Motion::Down));
        }
        for _ in 0..snapshot.cursor.1 {
            self.program
                .perform(text_editor::Action::Move(text_editor::Motion::Right));
        }
        self.document_modified = snapshot.modified;
    }

    fn mark_document_clean(&mut self) {
        let current_text = self.program.text();
        self.document_modified = false;
        for snapshot in self
            .undo_history
            .iter_mut()
            .chain(self.redo_history.iter_mut())
        {
            snapshot.modified = snapshot.text != current_text;
        }
    }

    fn rebuild_symbol_list_text(&mut self) {
        self.symbol_list_text = self
            .symbols
            .iter()
            .map(|symbol| symbol.name.as_str())
            .collect::<Vec<_>>()
            .join("\n");
    }

    fn refresh_caption(&mut self) {
        let display_name = Path::new(&self.current_file_name)
            .file_name()
            .and_then(|name| name.to_str())
            .unwrap_or(&self.current_file_name);
        self.caption = self.caption_template.replacen("%s", display_name, 1);
    }

    /// Dispatches the File > New menu command to the shared coordinator.
    ///
    /// Ports Ghidra function `0x017EF8C0`, symbol `FUN_017ef8c0`, recovered as
    /// `TI_Class.miNewClick`. The wrapper does not inspect sender state or add
    /// mutations before or after the coordinator.
    pub fn new_menu_selected(&mut self, host: &mut impl NewDocumentHost) -> NewDocumentOutcome {
        self.reset_to_new_document(host)
    }

    /// Dispatches the toolbar New command to the shared coordinator.
    ///
    /// Ports Ghidra function `0x017EFD40`, symbol `FUN_017efd40`, recovered as
    /// `TI_Class.sbFileNewClick`. The Iced toolbar wrapper ignores its event
    /// source and adds no state checks or changes around the same guarded
    /// new-document coordinator used by the File menu command.
    pub fn new_toolbar_selected(&mut self, host: &mut impl NewDocumentHost) -> NewDocumentOutcome {
        self.reset_to_new_document(host)
    }

    /// Resets the Interpreter document while retaining its configuration.
    ///
    /// Ports Ghidra function `0x017EEF40`, symbol `FUN_017eef40`. The approval
    /// guard runs before the first mutation. An accepted reset clears the
    /// editor and modified state, replaces session tables, imports available
    /// host parameters, and assigns `noname.ipr` and its form caption. The
    /// interpreter configuration survives the replacement.
    pub fn reset_to_new_document(&mut self, host: &mut impl NewDocumentHost) -> NewDocumentOutcome {
        if !host.approve_new_document(self.document_modified) {
            return NewDocumentOutcome::Cancelled;
        }

        self.program = text_editor::Content::new();
        self.undo_history.clear();
        self.redo_history.clear();
        self.document_modified = false;
        STATUS.clone_into(&mut self.status);

        let retained_configuration = self.interpreter_configuration.clone();
        self.interpreter_generation = self.interpreter_generation.wrapping_add(1);
        self.interpreter_configuration = retained_configuration;

        self.parameters = BUILT_IN_PARAMETERS.into_iter().map(str::to_owned).collect();
        self.parameters.extend(host.available_parameters());
        self.symbols = self
            .parameters
            .iter()
            .map(|name| InterpreterSymbol { name: name.clone() })
            .collect();

        NEW_DOCUMENT_NAME.clone_into(&mut self.current_file_name);
        self.refresh_caption();
        NewDocumentOutcome::Reset
    }

    /// Opens an Interpreter IPR document through the form-owned dialog.
    ///
    /// Ports Ghidra function `0x017EF290`, symbol `FUN_017ef290`. Cancel keeps
    /// document state unchanged. On acceptance, the selected path is stored
    /// before loading. A load error therefore keeps that new path and any
    /// partial loader mutations, while later clean-state and UI updates do not
    /// run. A successful load marks the editor clean and remembers the folder.
    ///
    /// # Errors
    ///
    /// Returns a dialog, file-read, or decode error from the host without
    /// rolling back the selected path or loader mutations.
    pub fn open_document<Host: OpenDocumentHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<OpenDocumentOutcome, Host::Error> {
        let Some(selected_path) = host.select_ipr_file(self.last_open_directory.as_deref())? else {
            return Ok(OpenDocumentOutcome::Cancelled);
        };

        self.current_file_name = selected_path.to_string_lossy().into_owned();
        host.load_ipr_document(
            &selected_path,
            &mut self.program,
            &mut self.interpreter_configuration,
        )?;

        self.undo_history.clear();
        self.redo_history.clear();
        self.mark_document_clean();
        self.refresh_caption();
        self.status_detail.clear();
        STATUS.clone_into(&mut self.status);
        self.last_open_directory = selected_path.parent().map(Path::to_path_buf);
        Ok(OpenDocumentOutcome::Opened)
    }

    /// Dispatches File > Open to the shared IPR open coordinator.
    ///
    /// Ports Ghidra function `0x017EF8D0`, symbol `FUN_017ef8d0`, recovered as
    /// `TI_Class.miOpenClick`. The wrapper does not apply the modified-document
    /// guard or add state changes around the coordinator.
    ///
    /// # Errors
    ///
    /// Returns the dialog or loader error from `open_document` unchanged.
    pub fn open_menu_selected<Host: OpenDocumentHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<OpenDocumentOutcome, Host::Error> {
        self.open_document(host)
    }

    /// Dispatches the toolbar Open command to the shared IPR coordinator.
    ///
    /// Ports Ghidra function `0x017EFD50`, symbol `FUN_017efd50`, recovered as
    /// `TI_Class.sbFileOpenClick`. The Iced toolbar wrapper ignores its event
    /// source and adds no modified-document guard or toolbar-state change
    /// around the same coordinator used by the File menu command.
    ///
    /// # Errors
    ///
    /// Returns the dialog or loader error from `open_document` unchanged.
    pub fn open_toolbar_selected<Host: OpenDocumentHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<OpenDocumentOutcome, Host::Error> {
        self.open_document(host)
    }

    /// Writes current Interpreter source and configuration to an IPR path.
    ///
    /// Ports Ghidra function `0x017EF620`, symbol `FUN_017ef620`. This adapter
    /// always requests the configuration section. It does not make a backup,
    /// clear the modified flag, change form state, or catch serializer errors.
    ///
    /// # Errors
    ///
    /// Returns the serializer error without changing dialog state.
    pub fn write_ipr_document<Serializer: IprSerializer>(
        &self,
        path: &Path,
        serializer: &mut Serializer,
    ) -> Result<(), Serializer::Error> {
        let program_lines = self
            .program
            .text()
            .lines()
            .map(str::to_owned)
            .collect::<Vec<_>>();
        serializer.write_ipr(path, &program_lines, &self.interpreter_configuration, true)
    }

    /// Copies current editor lines and appends the Interpreter configuration.
    ///
    /// Ports Ghidra function `0x017F2850`, symbol `FUN_017f2850`. The standard
    /// `Vec` replacement supplies the recovered string-list copy operation.
    /// The typed adapter appends the product-specific numerical-format, math,
    /// and drawing configuration block. This helper does not clear or validate
    /// the source, save a file, update a schematic, or close the form.
    ///
    /// # Errors
    ///
    /// Returns an appender error after editor lines replaced the old target and
    /// keeps any configuration prefix that the adapter added.
    pub fn serialize_component_text<Appender: InterpreterConfigurationAppender>(
        &self,
        target: &mut Vec<String>,
        appender: &mut Appender,
    ) -> Result<(), Appender::Error> {
        *target = self.program.text().lines().map(str::to_owned).collect();
        appender.append_configuration(target, &self.interpreter_configuration)
    }

    /// Enters the state used while an existing schematic component is edited.
    pub const fn begin_component_edit(&mut self, update_enabled: bool) {
        self.component_edit_state = InterpreterComponentEditState::Editing { update_enabled };
        self.close_menu_state = InterpreterCloseMenuState::CloseAndUpdate;
    }

    /// Updates the edited schematic Interpreter component and requests closure.
    ///
    /// Ports Ghidra function `0x017F28B0`, symbol `FUN_017f28b0`, recovered as
    /// `TI_Class.CloseUpdate1Click`. When the update gate is enabled, the host
    /// replaces component text and font from current in-memory editor state.
    /// The handler then ends component-edit mode, marks and refreshes the
    /// schematic, enables normal Close, disables Close & Update, and enters the
    /// close-query pipeline. A rejected close or later error does not undo any
    /// earlier component or schematic change.
    ///
    /// # Errors
    ///
    /// Returns the first host error and keeps every earlier state change.
    pub fn close_and_update_component<Host: InterpreterComponentUpdateHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<(), Host::Error> {
        if matches!(
            self.component_edit_state,
            InterpreterComponentEditState::Editing {
                update_enabled: true
            }
        ) {
            let source_lines = self
                .program
                .text()
                .lines()
                .map(str::to_owned)
                .collect::<Vec<_>>();
            host.replace_component_content(
                &source_lines,
                &self.interpreter_configuration,
                &self.editor_font,
            )?;
        }

        self.component_edit_state = InterpreterComponentEditState::Standalone;
        host.mark_schematic_changed()?;
        let bounds = host.component_bounds()?;
        host.update_schematic_bounds(bounds)?;
        self.close_menu_state = InterpreterCloseMenuState::NormalClose;
        host.request_close()
    }

    #[must_use]
    pub const fn component_edit_active(&self) -> bool {
        matches!(
            self.component_edit_state,
            InterpreterComponentEditState::Editing { .. }
        )
    }

    #[must_use]
    pub const fn close_and_update_enabled(&self) -> bool {
        matches!(
            self.close_menu_state,
            InterpreterCloseMenuState::CloseAndUpdate
        )
    }

    /// Routes Place to Schematic to insertion or existing-component update.
    ///
    /// Ports Ghidra function `0x017F2A00`, symbol `FUN_017f2a00`, recovered as
    /// `TI_Class.sbPlaceClick`. It first clears the Iced editor modified state.
    /// Enabled Close & Update state selects the existing-component update and
    /// close pipeline; otherwise, the host receives current source,
    /// configuration, and font for new placement. The route does not compile,
    /// validate, save the IPR file, or inspect a branch result.
    ///
    /// # Errors
    ///
    /// Returns the selected placement or update error without restoring the
    /// modified flag or rolling back earlier changes.
    pub fn place_to_schematic<Host: InterpreterPlacementHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<(), Host::Error> {
        self.document_modified = false;
        if self.close_and_update_enabled() {
            return self.close_and_update_component(host);
        }

        self.place_new_schematic_component(host)
    }

    /// Creates a new schematic Interpreter object from serialized editor text.
    ///
    /// Ports Ghidra function `0x017F2A50`, symbol `FUN_017f2a50`. It builds a
    /// temporary list from current editor lines and the product configuration,
    /// replaces the live editor with that serialized list, clears the modified
    /// state, and inserts schematic text-object subtype 1 with the editor font.
    /// The temporary list is released before the close request. The worker does
    /// not compile, validate, save, inspect the insertion result, restore the
    /// caret, or apply the form's local background and border fields.
    ///
    /// # Errors
    ///
    /// Returns the first serialization, insertion, or close error and keeps all
    /// earlier editor or schematic changes without rollback.
    pub fn place_new_schematic_component<Host: InterpreterPlacementHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<(), Host::Error> {
        let mut serialized_lines = self
            .program
            .text()
            .lines()
            .map(str::to_owned)
            .collect::<Vec<_>>();
        host.append_placement_configuration(
            &mut serialized_lines,
            &self.interpreter_configuration,
        )?;

        self.program = text_editor::Content::with_text(&serialized_lines.join("\n"));
        self.document_modified = false;
        host.insert_schematic_text_object(&serialized_lines, &self.editor_font, 1)?;
        drop(serialized_lines);
        host.request_close()
    }

    /// Dispatches File > Save to the shared Save router.
    ///
    /// Ports Ghidra function `0x017EF8E0`, symbol `FUN_017ef8e0`, recovered as
    /// `TI_Class.miSaveClick`. The wrapper ignores sender state and adds no
    /// handling around the router.
    ///
    /// # Errors
    ///
    /// Returns the Save As or writer error from `save_document` unchanged.
    pub fn save_menu_selected<Serializer, SaveAs>(
        &mut self,
        serializer: &mut Serializer,
        save_as: &mut SaveAs,
    ) -> Result<(), Serializer::Error>
    where
        Serializer: IprSerializer,
        SaveAs: SaveAsHandler<Error = Serializer::Error>,
    {
        self.save_document(serializer, save_as)
    }

    /// Dispatches the toolbar Save command to the shared Save router.
    ///
    /// Ports Ghidra function `0x017EFD60`, symbol `FUN_017efd60`, recovered as
    /// `TI_Class.sbFileSaveClick`. The Iced toolbar wrapper ignores its event
    /// source and adds no button-state inspection, result translation, or
    /// error handling around the same router used by the File menu command.
    ///
    /// # Errors
    ///
    /// Returns the Save As or writer error from `save_document` unchanged.
    pub fn save_toolbar_selected<Serializer, SaveAs>(
        &mut self,
        serializer: &mut Serializer,
        save_as: &mut SaveAs,
    ) -> Result<(), Serializer::Error>
    where
        Serializer: IprSerializer,
        SaveAs: SaveAsHandler<Error = Serializer::Error>,
    {
        self.save_document(serializer, save_as)
    }

    /// Routes Save to the current path or the Save As flow.
    ///
    /// Ports Ghidra function `0x017EF6C0`, symbol `FUN_017ef6c0`. The exact
    /// `noname.ipr` sentinel delegates to the void Save As route. A named path
    /// is written directly, and the modified flag is cleared only after the
    /// writer returns successfully.
    ///
    /// # Errors
    ///
    /// Returns a Save As or writer error without clearing the modified flag.
    pub fn save_document<Serializer, SaveAs>(
        &mut self,
        serializer: &mut Serializer,
        save_as: &mut SaveAs,
    ) -> Result<(), Serializer::Error>
    where
        Serializer: IprSerializer,
        SaveAs: SaveAsHandler<Error = Serializer::Error>,
    {
        if self.current_file_name == NEW_DOCUMENT_NAME {
            save_as.save_as(self)
        } else {
            self.write_ipr_document(Path::new(&self.current_file_name), serializer)?;
            self.mark_document_clean();
            Ok(())
        }
    }

    /// Coordinates Save As path selection and the accepted IPR write.
    ///
    /// Ports Ghidra function `0x017EF730`, symbol `FUN_017ef730`. The dialog is
    /// seeded with the current leaf name. Cancel is a normal no-op. Acceptance
    /// lowercases ASCII in the full path and commits the path and caption before
    /// writing. The modified flag is cleared only after the writer succeeds.
    ///
    /// # Errors
    ///
    /// Returns a dialog error before state changes. Returns a writer error
    /// after keeping the accepted lowercase path and updated caption.
    pub fn save_document_as<Dialog, Serializer>(
        &mut self,
        dialog: &mut Dialog,
        serializer: &mut Serializer,
    ) -> Result<(), Dialog::Error>
    where
        Dialog: SaveIprDialog,
        Serializer: IprSerializer<Error = Dialog::Error>,
    {
        let proposed_file_name = Path::new(&self.current_file_name)
            .file_name()
            .and_then(|name| name.to_str())
            .unwrap_or(&self.current_file_name);
        let Some(selected_path) = dialog.select_ipr_path(proposed_file_name)? else {
            return Ok(());
        };

        self.current_file_name = selected_path.to_string_lossy().to_ascii_lowercase();
        self.refresh_caption();
        self.write_ipr_document(Path::new(&self.current_file_name), serializer)?;
        self.mark_document_clean();
        Ok(())
    }

    /// Dispatches File > Save As to the shared coordinator.
    ///
    /// Ports Ghidra function `0x017EF8F0`, symbol `FUN_017ef8f0`, recovered as
    /// `TI_Class.miSaveAsClick`. The wrapper adds no sender inspection, branch,
    /// or state change around the coordinator.
    ///
    /// # Errors
    ///
    /// Returns the dialog or writer error from `save_document_as` unchanged.
    pub fn save_as_menu_selected<Dialog, Serializer>(
        &mut self,
        dialog: &mut Dialog,
        serializer: &mut Serializer,
    ) -> Result<(), Dialog::Error>
    where
        Dialog: SaveIprDialog,
        Serializer: IprSerializer<Error = Dialog::Error>,
    {
        self.save_document_as(dialog, serializer)
    }

    /// Requests closure of the current Interpreter window.
    ///
    /// Ports Ghidra function `0x017EF900`, symbol `FUN_017ef900`, recovered as
    /// `TI_Class.miCloseClick`. The original handler only enters the shared
    /// window-close path. The separately recovered close-query, close-action,
    /// and destruction handlers own the guard, release choice, and cleanup.
    /// Iced supplies the matching native window-close command.
    pub fn close_menu_selected(&self, window_id: window::Id) -> Task<Message> {
        window::close(window_id)
    }

    /// Undoes the previous logical Interpreter source edit.
    ///
    /// Ports Ghidra function `0x017EF910`, symbol `FUN_017ef910`, recovered as
    /// `TI_Class.miUndoClick`. The wrapper targets only the Iced source editor.
    /// The local history supplies the framework operation that Iced 0.13 does
    /// not expose. A read-only editor or an empty undo stack is a no-op.
    pub fn undo_menu_selected(&mut self) {
        if self.editor_read_only {
            return;
        }
        let Some(snapshot) = self.undo_history.pop() else {
            return;
        };

        self.redo_history.push(self.editor_snapshot());
        self.restore_editor_snapshot(&snapshot);
    }

    /// Opens Interpreter Options and discards its dialog-local result.
    ///
    /// Ports Ghidra function `0x017EF930`, symbol `FUN_017ef930`, recovered as
    /// `TI_Class.mnOptionsClick`. A new Iced dialog is seeded from the live
    /// keep-cursor setting and shown through the modal host. Both accepted and
    /// canceled completion drop the dialog without copying its staged value
    /// back to the application setting.
    ///
    /// # Errors
    ///
    /// Returns a modal-host error without changing the live setting.
    pub fn options_menu_selected<Host: InterpreterOptionsHost>(
        &self,
        keep_cursor_position: bool,
        host: &mut Host,
    ) -> Result<(), Host::Error> {
        let mut dialog = OptionsDialog::default();
        dialog.initialize_keep_cursor_position(keep_cursor_position);
        host.show_modal(&mut dialog)
    }

    /// Cuts the selected Interpreter source text to the clipboard.
    ///
    /// Ports Ghidra function `0x017EF980`, symbol `FUN_017ef980`, recovered as
    /// `TI_Class.miCutClick`. The fixed Iced source editor is the only target.
    /// A read-only editor or empty selection is a no-op. A successful cut uses
    /// Iced's standard text clipboard task and records the deletion as one
    /// reversible edit; no document persistence occurs here.
    pub fn cut_menu_selected(&mut self) -> Task<Message> {
        if self.editor_read_only {
            return Task::none();
        }
        let Some(selection) = self
            .program
            .selection()
            .filter(|selection| !selection.is_empty())
        else {
            return Task::none();
        };

        self.perform_editor_action(text_editor::Action::Edit(text_editor::Edit::Delete));
        iced::clipboard::write(selection)
    }

    /// Copies the selected Interpreter source text to the clipboard.
    ///
    /// Ports Ghidra function `0x017EF9A0`, symbol `FUN_017ef9a0`, recovered as
    /// `TI_Class.miCopyClick`. The fixed Iced source editor is the only target.
    /// A nonempty selection is sent through Iced's standard text clipboard
    /// task, including in read-only mode. An empty selection is a no-op. The
    /// operation does not change editor state or document persistence.
    pub fn copy_menu_selected(&self) -> Task<Message> {
        self.program
            .selection()
            .filter(|selection| !selection.is_empty())
            .map_or_else(Task::none, iced::clipboard::write)
    }

    /// Routes Paste to the Interpreter editor or another focused window.
    ///
    /// Ports Ghidra function `0x017EF9C0`, symbol `FUN_017ef9c0`, recovered as
    /// `TI_Class.miPasteClick`. Interpreter focus uses Iced's clipboard reader
    /// and later applies the text as one undoable edit. A read-only editor is a
    /// no-op. Other focus delegates to the native host and does not inspect its
    /// result or change Interpreter state.
    pub fn paste_menu_selected(
        &self,
        focus: PasteFocus,
        host: &mut impl FocusedPasteHost,
    ) -> Task<Message> {
        match focus {
            PasteFocus::InterpreterForm if !self.editor_read_only => {
                iced::clipboard::read().map(Message::PasteText)
            }
            PasteFocus::InterpreterForm => Task::none(),
            PasteFocus::OtherNativeWindow => {
                host.forward_paste_to_focused_window();
                Task::none()
            }
        }
    }

    /// Deletes the selected Interpreter source text without clipboard access.
    ///
    /// Ports Ghidra function `0x017EFA10`, symbol `FUN_017efa10`, recovered as
    /// `TI_Class.miDeleteClick`. The fixed Iced source editor is the only
    /// target. A nonempty selection is replaced with empty text as one
    /// undoable edit. An empty selection is a no-op. The recovered command has
    /// no explicit read-only guard, so this adapter does not add one.
    pub fn delete_menu_selected(&mut self) {
        if self.program.selection().is_none_or(|text| text.is_empty()) {
            return;
        }

        self.perform_tracked_edit(text_editor::Action::Edit(text_editor::Edit::Delete));
    }

    /// Selects all text in the Interpreter source editor.
    ///
    /// Ports Ghidra function `0x017EFA30`, symbol `FUN_017efa30`, recovered as
    /// `TI_Class.miSelectAllClick`. Iced supplies the complete-buffer selection
    /// operation. It targets the fixed source editor in editable or read-only
    /// mode and does not change text, history, modified state, or persistence.
    pub fn select_all_menu_selected(&mut self) {
        self.program.perform(text_editor::Action::SelectAll);
    }

    /// Enables Search Again and opens the shared Interpreter Find flow.
    ///
    /// Ports Ghidra function `0x017EFA50`, symbol `FUN_017efa50`, recovered as
    /// `TI_Class.miFindClick`. Search Again becomes available before the modal
    /// coordinator runs, so cancellation or an error does not disable it. The
    /// coordinator receives only the fixed Iced source editor; its retained
    /// options and search execution belong to separately recovered functions.
    ///
    /// # Errors
    ///
    /// Returns the shared dialog or search error after Search Again is enabled.
    pub fn find_menu_selected<Host: InterpreterFindHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<(), Host::Error> {
        self.search_again_enabled = true;
        host.open_find_dialog(&mut self.program)
    }

    /// Opens the shared Interpreter Replace flow.
    ///
    /// Ports Ghidra function `0x017EFA80`, symbol `FUN_017efa80`, recovered as
    /// `TI_Class.miReplaceClick`. The wrapper passes only the fixed Iced source
    /// editor to the shared coordinator in Replace mode. Unlike Find, it does
    /// not enable Search Again or add state changes around the coordinator.
    ///
    /// # Errors
    ///
    /// Returns the shared dialog or replacement error unchanged.
    pub fn replace_menu_selected<Host: InterpreterFindHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<(), Host::Error> {
        host.open_replace_dialog(&mut self.program)
    }

    /// Repeats the retained search forward without replacement.
    ///
    /// Ports Ghidra function `0x017EFA90`, symbol `FUN_017efa90`, recovered as
    /// `TI_Class.miSearchAgainClick`. The wrapper opens no dialog and passes
    /// fixed forward, find-only mode to the shared executor through the host.
    /// It does not change retained search state or document persistence.
    ///
    /// # Errors
    ///
    /// Returns the shared search error unchanged.
    pub fn search_again_menu_selected<Host: InterpreterFindHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<(), Host::Error> {
        host.search_again_forward(&mut self.program)
    }

    /// Opens and applies the Interpreter numerical-format dialog.
    ///
    /// Ports Ghidra function `0x017EFAB0`, symbol `FUN_017efab0`, recovered as
    /// `TI_Class.miNumericalformatClick`. The existing Iced dialog owns staged
    /// validation and commits. After normal modal completion, this coordinator
    /// copies its target and process permission, renames the built-in `i` or
    /// `j` symbol when present, and rebuilds symbol-list text after OK or
    /// Cancel. A modal-host error stops before these post-dialog operations.
    ///
    /// # Errors
    ///
    /// Returns the modal-host error without applying or refreshing state.
    pub fn numerical_format_menu_selected<Host: NumericalFormatHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<(), Host::Error> {
        let previous_imaginary =
            imaginary_character(self.interpreter_configuration.numerical.numerical.imaginary);
        let mut dialog = NumericalFormatDialog::default();
        dialog.initialize_from_interpreter(
            self.interpreter_configuration.numerical,
            self.component_value_permission.is_allowed(),
        );
        host.show_numerical_format_dialog(&mut dialog)?;

        if let Some(settings) = dialog.target() {
            self.interpreter_configuration.numerical = settings;
        }
        self.component_value_permission = dialog.component_value_permission().into();
        let selected_imaginary =
            imaginary_character(self.interpreter_configuration.numerical.numerical.imaginary);
        self.rename_imaginary_unit_symbol(previous_imaginary, selected_imaginary);
        self.rebuild_symbol_list_text();
        Ok(())
    }

    /// Opens the Interpreter Drawing Preferences dialog.
    ///
    /// Ports Ghidra function `0x017EFB70`, symbol `FUN_017efb70`, recovered as
    /// `TI_Class.miDrawingClick`. The Iced dialog receives a copy of the active
    /// drawing owner. Its own handlers commit validated preferences or retain
    /// Cancel state. The returned owner is applied after modal completion,
    /// including the Set Default active-type side effect. This wrapper does not
    /// render, mark source text modified, or persist a file.
    ///
    /// # Errors
    ///
    /// Applies dialog-owned changes completed before a modal-host error, then
    /// returns that error without local recovery.
    pub fn drawing_preferences_menu_selected<Host: DrawingPreferencesHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<(), Host::Error> {
        let mut dialog =
            DrawingPreferencesDialog::new(self.interpreter_configuration.drawing.clone());
        let result = host.show_drawing_preferences_dialog(&mut dialog);
        self.interpreter_configuration.drawing = dialog.into_owner();
        result
    }

    /// Opens the shared modeless Interpreter symbol-table viewer.
    ///
    /// Ports Ghidra function `0x017EFBC0`, symbol `FUN_017efbc0`, recovered as
    /// `TI_Class.miSymbolsClick`. The first click registers one shared Iced
    /// viewer, adds the localized fallback when the runtime display list is
    /// empty, binds that viewer to this Interpreter generation, copies the
    /// read-only text, and shows it. A repeat click only shows and activates
    /// the existing viewer. It does not rebind or refresh it.
    ///
    /// # Errors
    ///
    /// Returns creation, localization, binding, refresh, show, or activation
    /// errors without rollback. A viewer registered before a later error stays
    /// registered, and a fallback line loaded before a later error stays in the
    /// runtime display list.
    pub fn symbol_table_menu_selected<Host: SymbolTableHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<(), Host::Error> {
        if !host.symbol_table_exists() {
            host.create_symbol_table()?;
            if self.symbol_list_text.is_empty() {
                self.symbol_list_text = host.localized_empty_symbol_line()?;
            }
            host.bind_symbol_table(self.interpreter_generation, &self.symbol_list_text)?;
        }

        host.show_and_activate_symbol_table()
    }

    /// Runs the current Interpreter source and moves to the final line.
    ///
    /// Ports Ghidra function `0x017EFC30`, symbol `FUN_017efc30`, recovered as
    /// `TI_Class.miRunClick`. The host receives the normal run mode and the
    /// complete live Interpreter state, including unsaved source changes. When
    /// the coordinator returns normally, Iced moves the caret to column one of
    /// the final line. This menu-only move overrides the coordinator cursor
    /// policy without editing the document or clearing its modified state.
    ///
    /// # Errors
    ///
    /// Returns the shared coordinator error after any partial runtime changes.
    /// The final-line caret override does not run on an escaping error.
    pub fn run_menu_selected<Host: InterpreterRunHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<(), Host::Error> {
        self.compile_and_execute(host, InterpreterRunMode::Normal)?;
        self.move_caret_to_final_line();
        Ok(())
    }

    /// Runs the current Interpreter source from the toolbar.
    ///
    /// Ports Ghidra function `0x017EFDD0`, symbol `FUN_017efdd0`, recovered as
    /// `TI_Class.sbRunClick`. The Iced toolbar wrapper ignores its event source
    /// and passes normal mode and complete live state to the shared run
    /// coordinator. It deliberately adds no final-line caret move, so the
    /// coordinator's Keep cursor position policy remains the final result.
    ///
    /// # Errors
    ///
    /// Returns the shared coordinator error after any partial runtime changes
    /// and adds no local recovery.
    pub fn run_toolbar_selected<Host: InterpreterRunHost>(
        &mut self,
        host: &mut Host,
    ) -> Result<(), Host::Error> {
        self.compile_and_execute(host, InterpreterRunMode::Normal)
    }

    /// Moves the Interpreter caret to column one of the final editor line.
    ///
    /// Ports Ghidra function `0x017EFD70`, symbol `FUN_017efd70`. Iced supplies
    /// the equivalent document-end and line-home motions. The helper reads the
    /// current buffer shape through the editor, changes only its caret and
    /// selection state, and does not edit text, change history, clear modified
    /// state, or persist the document.
    pub fn move_caret_to_final_line(&mut self) {
        self.program
            .perform(text_editor::Action::Move(text_editor::Motion::DocumentEnd));
        self.program
            .perform(text_editor::Action::Move(text_editor::Motion::Home));
    }

    /// Opens the Interpreter topic in the localized TINA help collection.
    ///
    /// Ports Ghidra function `0x017EFC60`, symbol `FUN_017efc60`, recovered as
    /// `TI_Class.miHelpClick`. The standard-library path adapter builds
    /// `TINA.CHM` under the installation folder. The shared application help
    /// adapter selects an installed language-specific variant when available
    /// and dispatches fixed context 5001. The command ignores the help-system
    /// return value and does not inspect or change Interpreter state.
    pub fn help_menu_selected(
        &self,
        installation_folder: &Path,
        help: &mut impl ApplicationHelpAdapter,
    ) {
        let base_help_file = installation_folder.join("TINA.CHM");
        let resolved_help_file = help.resolve_localized_file(&base_help_file);
        help.open_context(&resolved_help_file, HELP_CONTEXT);
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let editor = text_editor(&self.program)
            .on_action(Message::Edit)
            .height(Length::Fill);

        window_shell::frame(
            &self.caption,
            window_shell::menu_bar(MENUS, Message::CommandSelected),
            window_shell::toolbar(TOOLBAR, Message::CommandSelected),
            editor.into(),
            &self.status,
        )
    }
}

const fn imaginary_character(symbol: ImaginarySymbol) -> char {
    match symbol {
        ImaginarySymbol::I => 'i',
        ImaginarySymbol::J => 'j',
    }
}

#[cfg(test)]
mod tests {
    use iced::keyboard::{Key, Modifiers, key::Named};
    use iced::widget::text_editor;
    use iced::window;

    use super::{
        DrawingPreferencesHost, FileDialogMode, FocusedPasteHost, InterpreterActivationHost,
        InterpreterActivationState, InterpreterBackgroundPopupHost, InterpreterCaseMatching,
        InterpreterCloseAction, InterpreterColorDialog, InterpreterComponentUpdateHost,
        InterpreterConfiguration, InterpreterConfigurationAppender, InterpreterCursorPolicy,
        InterpreterDocumentGuardHost, InterpreterDocumentGuardMode, InterpreterEditCommand,
        InterpreterEditorFont, InterpreterEditorSearchHost, InterpreterFindHost,
        InterpreterFontDialog, InterpreterFontPitch, InterpreterFontStyle, InterpreterIdleHost,
        InterpreterKeyUpHost, InterpreterLifecycleHost, InterpreterOptionsHost,
        InterpreterPlacementHost, InterpreterResource, InterpreterRunHost, InterpreterRunMode,
        InterpreterRunOutcome, InterpreterRunReport, InterpreterRunRequest,
        InterpreterSearchCoordinator, InterpreterSearchDialogHost, InterpreterSearchDialogResult,
        InterpreterSearchDirection, InterpreterSearchExecution, InterpreterSearchMode,
        InterpreterSearchOrigin, InterpreterSearchOutcome, InterpreterSearchRequest,
        InterpreterSearchSelection, InterpreterSearchValues, InterpreterShowState,
        InterpreterStartup, InterpreterSymbol, InterpreterUnsavedChoice, InterpreterUnsavedPrompt,
        InterpreterWordMatching, IprDecoder, IprLoadError, IprSerializer, Message, NewDocumentHost,
        NewDocumentOutcome, NumericalFormatHost, OpenDocumentHost, OpenDocumentOutcome, PasteFocus,
        SaveAsHandler, SaveIprDialog, SymbolTableHost, SystemTextBackground, SystemTextBorder,
        SystemTextPresentation, Window, execute_interpreter_search, load_ipr_document_from_utf8,
    };
    use crate::drawing_preferences::{
        DrawingOwner, DrawingPreferences, EditField as DrawingEditField, Message as DrawingMessage,
    };
    use crate::numerical_format::{ImaginarySymbol, Message as NumericalFormatMessage};

    fn window_with_symbols(names: &[&str]) -> Window {
        Window {
            symbols: names
                .iter()
                .map(|name| InterpreterSymbol {
                    name: (*name).to_owned(),
                })
                .collect(),
            ..Window::default()
        }
    }

    fn completed_run(cursor_policy: InterpreterCursorPolicy) -> InterpreterRunReport {
        InterpreterRunReport {
            outcome: InterpreterRunOutcome::Completed,
            cursor_policy,
        }
    }

    struct NewHost {
        approved: bool,
        parameters: Vec<String>,
        approval_inputs: Vec<bool>,
    }

    impl NewDocumentHost for NewHost {
        fn approve_new_document(&mut self, document_modified: bool) -> bool {
            self.approval_inputs.push(document_modified);
            self.approved
        }

        fn available_parameters(&mut self) -> Vec<String> {
            std::mem::take(&mut self.parameters)
        }
    }

    struct OpenHost {
        selection: Result<Option<std::path::PathBuf>, &'static str>,
        loaded_text: Option<String>,
        loaded_configuration: Option<InterpreterConfiguration>,
        initial_directories: Vec<Option<std::path::PathBuf>>,
        loaded_paths: Vec<std::path::PathBuf>,
        load_error: Option<&'static str>,
    }

    struct OptionsHost {
        initialized_values: Vec<bool>,
        accepted_values: Vec<bool>,
        result: Result<(), &'static str>,
    }

    #[derive(Default)]
    struct PasteHost {
        forwarded: usize,
    }

    struct FindHost {
        observed_text: Vec<String>,
        find_calls: usize,
        replace_calls: usize,
        search_again_calls: usize,
        result: Result<(), &'static str>,
    }

    struct SearchDialogHost {
        dialog_result: Option<Result<InterpreterSearchDialogResult, &'static str>>,
        execute_result: Result<(), &'static str>,
        observed_modes: Vec<InterpreterSearchMode>,
        observed_initial: Vec<InterpreterSearchValues>,
        observed_programs: Vec<String>,
        observed_preload: Vec<bool>,
        executed: Vec<InterpreterSearchRequest>,
    }

    struct EditorSearchHost {
        result: Result<usize, &'static str>,
        requests: Vec<InterpreterSearchRequest>,
        notifications: usize,
    }

    struct NumericalHost {
        messages: Vec<NumericalFormatMessage>,
        initial_imaginary: Vec<ImaginarySymbol>,
        result: Result<(), &'static str>,
    }

    struct DrawingHost {
        messages: Vec<DrawingMessage>,
        result: Result<(), &'static str>,
    }

    struct SymbolHost {
        exists: bool,
        create_calls: usize,
        fallback_calls: usize,
        bindings: Vec<(u64, String)>,
        show_calls: usize,
        create_result: Result<(), &'static str>,
        fallback_result: Result<String, &'static str>,
        bind_result: Result<(), &'static str>,
        show_result: Result<(), &'static str>,
    }

    struct RunHost {
        observed_modes: Vec<InterpreterRunMode>,
        observed_source: Vec<String>,
        observed_configurations: Vec<InterpreterConfiguration>,
        observed_saved_lines: Vec<usize>,
        result: Result<InterpreterRunReport, &'static str>,
    }

    struct HelpHost {
        resolved_path: std::path::PathBuf,
        resolution_requests: Vec<std::path::PathBuf>,
        open_requests: Vec<(std::path::PathBuf, u32)>,
    }

    struct LifecycleHost {
        startup: Option<InterpreterStartup>,
        show: InterpreterShowState,
        form_state_keys: Vec<String>,
        show_calls: usize,
        released_resources: Vec<InterpreterResource>,
    }

    struct ActivationHost {
        result: Option<InterpreterActivationState>,
        sources: Vec<String>,
        configurations: Vec<InterpreterConfiguration>,
    }

    struct DocumentGuardHost {
        choice: Result<InterpreterUnsavedChoice, &'static str>,
        prompts: Vec<InterpreterUnsavedPrompt>,
        save_calls: usize,
        clear_modified_on_save: bool,
        save_result: Result<(), &'static str>,
    }

    struct FontDialog {
        result: Result<Option<InterpreterEditorFont>, &'static str>,
        seeds: Vec<InterpreterEditorFont>,
    }

    struct BackgroundPopupHost {
        relative_points: Vec<iced::Point>,
        screen_point: iced::Point,
        opened_points: Vec<iced::Point>,
        conversion_error: Option<&'static str>,
        open_error: Option<&'static str>,
    }

    struct ColorDialog {
        seeds: Vec<u32>,
        result: Result<Option<u32>, &'static str>,
    }

    impl InterpreterColorDialog for ColorDialog {
        type Error = &'static str;

        fn select_color(&mut self, current_color: u32) -> Result<Option<u32>, Self::Error> {
            self.seeds.push(current_color);
            self.result
        }
    }

    impl InterpreterBackgroundPopupHost for BackgroundPopupHost {
        type Error = &'static str;

        fn button_point_to_screen(
            &mut self,
            point: iced::Point,
        ) -> Result<iced::Point, Self::Error> {
            self.relative_points.push(point);
            self.conversion_error.map_or(Ok(self.screen_point), Err)
        }

        fn open_background_popup(&mut self, screen_point: iced::Point) -> Result<(), Self::Error> {
            self.opened_points.push(screen_point);
            self.open_error.map_or(Ok(()), Err)
        }
    }

    struct IdleHost {
        clipboard_has_text: bool,
        checks: usize,
    }

    struct KeyUpHost {
        suppressed: bool,
        run_calls: usize,
        modes: Vec<InterpreterRunMode>,
        result: Result<InterpreterRunReport, &'static str>,
    }

    impl InterpreterKeyUpHost for KeyUpHost {
        fn enter_execution_suppressed(&self) -> bool {
            self.suppressed
        }
    }

    impl InterpreterRunHost for KeyUpHost {
        type Error = &'static str;

        fn execute_runtime(
            &mut self,
            request: &InterpreterRunRequest,
        ) -> Result<InterpreterRunReport, Self::Error> {
            self.run_calls = self.run_calls.saturating_add(1);
            self.modes.push(request.mode);
            self.result.clone()
        }
    }

    impl InterpreterIdleHost for IdleHost {
        fn clipboard_has_text(&mut self) -> bool {
            self.checks = self.checks.saturating_add(1);
            self.clipboard_has_text
        }
    }

    impl InterpreterFontDialog for FontDialog {
        type Error = &'static str;

        fn select_font(
            &mut self,
            current: &InterpreterEditorFont,
        ) -> Result<Option<InterpreterEditorFont>, Self::Error> {
            self.seeds.push(current.clone());
            self.result.clone()
        }
    }

    impl InterpreterDocumentGuardHost for DocumentGuardHost {
        type Error = &'static str;

        fn prompt_unsaved_document(
            &mut self,
            prompt: InterpreterUnsavedPrompt,
        ) -> Result<InterpreterUnsavedChoice, Self::Error> {
            self.prompts.push(prompt);
            self.choice
        }

        fn save_document(&mut self, window: &mut Window) -> Result<(), Self::Error> {
            self.save_calls = self.save_calls.saturating_add(1);
            if self.clear_modified_on_save {
                window.document_modified = false;
            }
            self.save_result
        }
    }

    impl InterpreterActivationHost for ActivationHost {
        fn rebuild_runtime_symbols(
            &mut self,
            source: &str,
            configuration: &InterpreterConfiguration,
        ) -> InterpreterActivationState {
            self.sources.push(source.to_owned());
            self.configurations.push(configuration.clone());
            self.result.take().expect("activation result is available")
        }
    }

    impl InterpreterLifecycleHost for LifecycleHost {
        fn load_startup(&mut self, form_state_key: &str) -> InterpreterStartup {
            self.form_state_keys.push(form_state_key.to_owned());
            self.startup.take().expect("startup is available once")
        }

        fn prepare_show(&mut self) -> InterpreterShowState {
            self.show_calls = self.show_calls.saturating_add(1);
            self.show.clone()
        }

        fn release_resource(&mut self, resource: InterpreterResource) {
            self.released_resources.push(resource);
        }
    }

    impl crate::bill_of_materials::HelpAdapter for HelpHost {
        fn resolve_localized_file(
            &mut self,
            base_help_file: &std::path::Path,
        ) -> std::path::PathBuf {
            self.resolution_requests.push(base_help_file.to_owned());
            self.resolved_path.clone()
        }

        fn open_context(&mut self, help_file: &std::path::Path, context: u32) {
            self.open_requests.push((help_file.to_owned(), context));
        }
    }

    impl InterpreterRunHost for RunHost {
        type Error = &'static str;

        fn execute_runtime(
            &mut self,
            request: &InterpreterRunRequest,
        ) -> Result<InterpreterRunReport, Self::Error> {
            self.observed_modes.push(request.mode);
            self.observed_source.push(request.source.clone());
            self.observed_configurations
                .push(request.configuration.clone());
            self.observed_saved_lines.push(request.saved_line);
            self.result.clone()
        }
    }

    impl SymbolTableHost for SymbolHost {
        type Error = &'static str;

        fn symbol_table_exists(&self) -> bool {
            self.exists
        }

        fn create_symbol_table(&mut self) -> Result<(), Self::Error> {
            self.create_calls = self.create_calls.saturating_add(1);
            self.create_result?;
            self.exists = true;
            Ok(())
        }

        fn localized_empty_symbol_line(&mut self) -> Result<String, Self::Error> {
            self.fallback_calls = self.fallback_calls.saturating_add(1);
            self.fallback_result.clone()
        }

        fn bind_symbol_table(
            &mut self,
            interpreter_generation: u64,
            symbol_list_text: &str,
        ) -> Result<(), Self::Error> {
            self.bindings
                .push((interpreter_generation, symbol_list_text.to_owned()));
            self.bind_result
        }

        fn show_and_activate_symbol_table(&mut self) -> Result<(), Self::Error> {
            self.show_calls = self.show_calls.saturating_add(1);
            self.show_result
        }
    }

    impl DrawingPreferencesHost for DrawingHost {
        type Error = &'static str;

        fn show_drawing_preferences_dialog(
            &mut self,
            dialog: &mut crate::drawing_preferences::Window,
        ) -> Result<(), Self::Error> {
            for message in std::mem::take(&mut self.messages) {
                dialog.update(message);
            }
            self.result
        }
    }

    impl NumericalFormatHost for NumericalHost {
        type Error = &'static str;

        fn show_numerical_format_dialog(
            &mut self,
            dialog: &mut crate::numerical_format::Window,
        ) -> Result<(), Self::Error> {
            self.initial_imaginary
                .push(dialog.staging().numerical.imaginary);
            self.result?;
            for message in std::mem::take(&mut self.messages) {
                dialog.update(message);
            }
            Ok(())
        }
    }

    impl InterpreterFindHost for FindHost {
        type Error = &'static str;

        fn open_find_dialog(
            &mut self,
            program: &mut text_editor::Content,
        ) -> Result<(), Self::Error> {
            self.observed_text.push(program.text());
            self.find_calls = self.find_calls.saturating_add(1);
            self.result
        }

        fn open_replace_dialog(
            &mut self,
            program: &mut text_editor::Content,
        ) -> Result<(), Self::Error> {
            self.observed_text.push(program.text());
            self.replace_calls = self.replace_calls.saturating_add(1);
            self.result
        }

        fn search_again_forward(
            &mut self,
            program: &mut text_editor::Content,
        ) -> Result<(), Self::Error> {
            self.observed_text.push(program.text());
            self.search_again_calls = self.search_again_calls.saturating_add(1);
            self.result
        }
    }

    impl InterpreterSearchDialogHost for SearchDialogHost {
        type Error = &'static str;

        fn show_search_dialog(
            &mut self,
            mode: InterpreterSearchMode,
            initial: &InterpreterSearchValues,
            program: &text_editor::Content,
            preload_from_editor: bool,
        ) -> Result<InterpreterSearchDialogResult, Self::Error> {
            self.observed_modes.push(mode);
            self.observed_initial.push(initial.clone());
            self.observed_programs.push(program.text());
            self.observed_preload.push(preload_from_editor);
            self.dialog_result
                .take()
                .expect("dialog result is available")
        }

        fn execute_search(
            &mut self,
            _program: &mut text_editor::Content,
            request: &InterpreterSearchRequest,
        ) -> Result<(), Self::Error> {
            self.executed.push(request.clone());
            self.execute_result
        }
    }

    impl InterpreterEditorSearchHost for EditorSearchHost {
        type Error = &'static str;

        fn search_replace(
            &mut self,
            _program: &mut text_editor::Content,
            request: &InterpreterSearchRequest,
        ) -> Result<usize, Self::Error> {
            self.requests.push(request.clone());
            self.result
        }

        fn notify_no_match(&mut self) {
            self.notifications = self.notifications.saturating_add(1);
        }
    }

    impl FocusedPasteHost for PasteHost {
        fn forward_paste_to_focused_window(&mut self) {
            self.forwarded = self.forwarded.saturating_add(1);
        }
    }

    impl InterpreterOptionsHost for OptionsHost {
        type Error = &'static str;

        fn show_modal(
            &mut self,
            dialog: &mut super::options_dialog::OptionsDialog,
        ) -> Result<(), Self::Error> {
            self.initialized_values
                .push(dialog.keep_cursor_position_checked());
            dialog.update(super::options_dialog::Message::KeepCursorChanged(true));
            dialog.update(super::options_dialog::Message::Accept);
            self.accepted_values
                .push(dialog.staged_keep_cursor_position());
            self.result
        }
    }

    impl OpenDocumentHost for OpenHost {
        type Error = &'static str;

        fn select_ipr_file(
            &mut self,
            initial_directory: Option<&std::path::Path>,
        ) -> Result<Option<std::path::PathBuf>, Self::Error> {
            self.initial_directories
                .push(initial_directory.map(std::path::Path::to_path_buf));
            self.selection.clone()
        }

        fn load_ipr_document(
            &mut self,
            path: &std::path::Path,
            program: &mut text_editor::Content,
            configuration: &mut InterpreterConfiguration,
        ) -> Result<(), Self::Error> {
            self.loaded_paths.push(path.to_path_buf());
            if let Some(error) = self.load_error {
                return Err(error);
            }
            if let Some(text) = self.loaded_text.take() {
                *program = text_editor::Content::with_text(&text);
            }
            if let Some(loaded_configuration) = self.loaded_configuration.take() {
                *configuration = loaded_configuration;
            }
            Ok(())
        }
    }

    fn open_host(selection: Option<&str>) -> OpenHost {
        OpenHost {
            selection: Ok(selection.map(std::path::PathBuf::from)),
            loaded_text: Some("loaded program".to_owned()),
            loaded_configuration: Some(InterpreterConfiguration::new(vec![99])),
            initial_directories: Vec::new(),
            loaded_paths: Vec::new(),
            load_error: None,
        }
    }

    struct RecordingDecoder {
        result: Result<String, &'static str>,
        sources: Vec<String>,
        configuration_values: Vec<u64>,
    }

    #[derive(Default)]
    struct RecordingSerializer {
        paths: Vec<std::path::PathBuf>,
        program_lines: Vec<Vec<String>>,
        configurations: Vec<InterpreterConfiguration>,
        include_configuration: Vec<bool>,
        error: Option<&'static str>,
    }

    impl IprSerializer for RecordingSerializer {
        type Error = &'static str;

        fn write_ipr(
            &mut self,
            path: &std::path::Path,
            program_lines: &[String],
            configuration: &InterpreterConfiguration,
            include_configuration: bool,
        ) -> Result<(), Self::Error> {
            self.paths.push(path.to_path_buf());
            self.program_lines.push(program_lines.to_vec());
            self.configurations.push(configuration.clone());
            self.include_configuration.push(include_configuration);
            self.error.map_or(Ok(()), Err)
        }
    }

    #[derive(Default)]
    struct RecordingConfigurationAppender {
        configurations: Vec<InterpreterConfiguration>,
        lines: Vec<String>,
        error: Option<&'static str>,
    }

    impl InterpreterConfigurationAppender for RecordingConfigurationAppender {
        type Error = &'static str;

        fn append_configuration(
            &mut self,
            target: &mut Vec<String>,
            configuration: &InterpreterConfiguration,
        ) -> Result<(), Self::Error> {
            self.configurations.push(configuration.clone());
            target.append(&mut self.lines);
            self.error.map_or(Ok(()), Err)
        }
    }

    struct ComponentUpdateHost {
        actions: Vec<&'static str>,
        source_lines: Vec<String>,
        configurations: Vec<InterpreterConfiguration>,
        fonts: Vec<InterpreterEditorFont>,
        bounds: iced::Rectangle,
        fail_on: Option<&'static str>,
    }

    impl ComponentUpdateHost {
        fn record(&mut self, action: &'static str) -> Result<(), &'static str> {
            self.actions.push(action);
            if self.fail_on == Some(action) {
                Err(action)
            } else {
                Ok(())
            }
        }
    }

    impl InterpreterComponentUpdateHost for ComponentUpdateHost {
        type Error = &'static str;

        fn replace_component_content(
            &mut self,
            source_lines: &[String],
            configuration: &InterpreterConfiguration,
            editor_font: &InterpreterEditorFont,
        ) -> Result<(), Self::Error> {
            self.source_lines = source_lines.to_vec();
            self.configurations.push(configuration.clone());
            self.fonts.push(editor_font.clone());
            self.record("replace")
        }

        fn mark_schematic_changed(&mut self) -> Result<(), Self::Error> {
            self.record("mark")
        }

        fn component_bounds(&mut self) -> Result<iced::Rectangle, Self::Error> {
            self.record("bounds")?;
            Ok(self.bounds)
        }

        fn update_schematic_bounds(&mut self, bounds: iced::Rectangle) -> Result<(), Self::Error> {
            assert_eq!(bounds, self.bounds);
            self.record("update")
        }

        fn request_close(&mut self) -> Result<(), Self::Error> {
            self.record("close")
        }
    }

    impl InterpreterPlacementHost for ComponentUpdateHost {
        fn append_placement_configuration(
            &mut self,
            target: &mut Vec<String>,
            configuration: &InterpreterConfiguration,
        ) -> Result<(), Self::Error> {
            self.configurations.push(configuration.clone());
            target.extend([
                "@ Configuration begin".to_owned(),
                "configuration value".to_owned(),
                ".@ Configuration end".to_owned(),
            ]);
            self.record("append")
        }

        fn insert_schematic_text_object(
            &mut self,
            serialized_lines: &[String],
            editor_font: &InterpreterEditorFont,
            subtype: u8,
        ) -> Result<(), Self::Error> {
            assert_eq!(subtype, 1);
            self.source_lines = serialized_lines.to_vec();
            self.fonts.push(editor_font.clone());
            self.record("insert")
        }
    }

    #[derive(Default)]
    struct RecordingSaveAs {
        calls: usize,
        error: Option<&'static str>,
    }

    impl SaveAsHandler for RecordingSaveAs {
        type Error = &'static str;

        fn save_as(&mut self, _window: &mut Window) -> Result<(), Self::Error> {
            self.calls += 1;
            self.error.map_or(Ok(()), Err)
        }
    }

    struct RecordingSaveDialog {
        selection: Result<Option<std::path::PathBuf>, &'static str>,
        proposed_names: Vec<String>,
    }

    impl SaveIprDialog for RecordingSaveDialog {
        type Error = &'static str;

        fn select_ipr_path(
            &mut self,
            proposed_file_name: &str,
        ) -> Result<Option<std::path::PathBuf>, Self::Error> {
            self.proposed_names.push(proposed_file_name.to_owned());
            self.selection.clone()
        }
    }

    impl IprDecoder for RecordingDecoder {
        type Error = &'static str;

        fn decode_program(
            &mut self,
            source: &str,
            configuration: &mut InterpreterConfiguration,
        ) -> Result<String, Self::Error> {
            self.sources.push(source.to_owned());
            *configuration = InterpreterConfiguration::new(self.configuration_values.clone());
            self.result.clone()
        }
    }

    fn temporary_folder(name: &str) -> std::path::PathBuf {
        let folder = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
            .join("../../.temp/interpreter")
            .join(name);
        if folder.exists() {
            std::fs::remove_dir_all(&folder).expect("previous temporary cleanup");
        }
        std::fs::create_dir_all(&folder).expect("temporary folder");
        folder
    }

    fn symbol_names(window: &Window) -> Vec<&str> {
        window
            .symbols
            .iter()
            .map(|symbol| symbol.name.as_str())
            .collect()
    }

    #[test]
    fn update_renames_the_existing_imaginary_unit_symbol_in_place() {
        let mut window = window_with_symbols(&["pi", "i", "answer"]);
        let record_address = std::ptr::from_ref(&window.symbols[1]);

        window.update(Message::rename_imaginary_unit('i', 'j'));

        assert_eq!(symbol_names(&window), ["pi", "j", "answer"]);
        assert_eq!(std::ptr::from_ref(&window.symbols[1]), record_address);
    }

    #[test]
    fn update_does_not_change_symbols_when_the_old_name_is_absent() {
        let mut window = window_with_symbols(&["pi", "answer"]);

        window.update(Message::rename_imaginary_unit('i', 'j'));

        assert_eq!(symbol_names(&window), ["pi", "answer"]);
    }

    #[test]
    fn update_supports_renaming_j_back_to_i() {
        let mut window = window_with_symbols(&["pi", "j", "answer"]);

        window.update(Message::rename_imaginary_unit('j', 'i'));

        assert_eq!(symbol_names(&window), ["pi", "i", "answer"]);
    }

    #[test]
    fn update_keeps_the_symbol_when_the_selection_does_not_change() {
        let mut window = window_with_symbols(&["pi", "j", "answer"]);

        window.update(Message::rename_imaginary_unit('j', 'j'));

        assert_eq!(symbol_names(&window), ["pi", "j", "answer"]);
    }

    #[test]
    fn fun_017efdf0_initializes_interpreter_runtime_dialogs_and_ui_defaults() {
        let configuration = InterpreterConfiguration::new(vec![4, 8, 15, 16, 23, 42]);
        let mut window = Window {
            program: text_editor::Content::with_text("old source"),
            document_modified: true,
            current_file_name: "old.ipr".to_owned(),
            search_again_enabled: true,
            interpreter_generation: 6,
            ..Window::default()
        };
        let mut host = LifecycleHost {
            startup: Some(InterpreterStartup {
                localized_caption_template: "Localized Interpreter-<%s>".to_owned(),
                user_examples_directory: std::path::PathBuf::from("C:/User Examples"),
                tina_examples_directory: std::path::PathBuf::from("C:/TINA/Examples"),
                configuration: configuration.clone(),
            }),
            show: InterpreterShowState {
                line_label: "Line:".to_owned(),
                column_label: "Col:".to_owned(),
                execution_status: "Successfully compiled".to_owned(),
                runtime_mode_status: "Editing commands".to_owned(),
            },
            form_state_keys: Vec::new(),
            show_calls: 0,
            released_resources: Vec::new(),
        };

        window.form_create(&mut host);

        assert_eq!(host.form_state_keys, ["bmInterp"]);
        assert_eq!(window.program.text(), "\n");
        assert!(!window.document_modified);
        assert_eq!(window.current_file_name, "noname.ipr");
        assert_eq!(window.caption, "Localized Interpreter-<noname.ipr>");
        assert!(!window.search_again_enabled);
        assert_eq!(window.interpreter_generation, 7);
        assert_eq!(window.interpreter_configuration, configuration);
        assert_eq!(window.help_context, 5001);
        assert_eq!(
            window.lifecycle_state,
            super::InterpreterLifecycleState::Initialized
        );
        assert_eq!(
            window.system_text_presentation.background,
            SystemTextBackground::Transparent
        );
        assert_eq!(window.system_text_presentation.color, 0x00ff_ffff);
        assert_eq!(
            window.system_text_presentation.border,
            SystemTextBorder::None
        );

        let open = window.open_dialog.as_ref().expect("Open dialog");
        assert_eq!(open.name, "OpenIPRDlg");
        assert_eq!(open.default_extension, "ipr");
        assert_eq!(open.filter, "Interpreter file (*.IPR)|*.IPR");
        assert_eq!(open.options.mode, FileDialogMode::OpenExisting);
        assert!(open.options.validate_path);
        assert!(open.options.resizable);
        assert_eq!(
            open.initial_directory,
            std::path::Path::new("C:/TINA/Examples")
        );
        assert_eq!(open.places[0].0, "User Examples");
        assert_eq!(open.places[1].0, "Tina Examples");

        let save = window.save_dialog.as_ref().expect("Save dialog");
        assert_eq!(save.name, "SaveIPRDlg");
        assert_eq!(
            save.options.mode,
            FileDialogMode::SaveWithOverwriteConfirmation
        );
        assert_eq!(
            save.initial_directory,
            std::path::Path::new("C:/User Examples")
        );
    }

    #[test]
    fn fun_017f0520_localizes_show_status_and_activates_syntax_presentation() {
        let mut window = Window {
            program: text_editor::Content::with_text("unchanged source"),
            document_modified: true,
            current_file_name: "existing.ipr".to_owned(),
            lifecycle_state: super::InterpreterLifecycleState::Initialized,
            ..Window::default()
        };
        let mut host = LifecycleHost {
            startup: None,
            show: InterpreterShowState {
                line_label: "Line:".to_owned(),
                column_label: "Column:".to_owned(),
                execution_status: "Compiled".to_owned(),
                runtime_mode_status: "Editing commands".to_owned(),
            },
            form_state_keys: Vec::new(),
            show_calls: 0,
            released_resources: Vec::new(),
        };

        window.form_show(&mut host);

        assert_eq!(host.show_calls, 1);
        assert_eq!(
            window.status,
            "Line: 1 Column: 1    Compiled    Editing commands"
        );
        assert_eq!(window.status_detail, "Editing commands");
        assert_eq!(
            window.syntax_highlighting_state,
            super::SyntaxHighlightingState::Active
        );
        assert_eq!(
            window.lifecycle_state,
            super::InterpreterLifecycleState::Shown
        );
        assert_eq!(window.program.text(), "unchanged source\n");
        assert!(window.document_modified);
        assert_eq!(window.current_file_name, "existing.ipr");
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017f07c0_rebuilds_runtime_symbols_and_current_localized_caption() {
        let configuration = InterpreterConfiguration::new(vec![7, 11]);
        let mut window = Window {
            program: text_editor::Content::with_text("result = input"),
            symbols: vec![InterpreterSymbol {
                name: "stale".to_owned(),
            }],
            parameters: vec!["stale".to_owned()],
            interpreter_configuration: configuration.clone(),
            document_modified: true,
            current_file_name: "C:/Work/Demo.IPR".to_owned(),
            caption_template: "Lokaler Interpreter-<%s>".to_owned(),
            caption: "stale caption".to_owned(),
            symbol_list_text: "stale list".to_owned(),
            ..Window::default()
        };
        let mut host = ActivationHost {
            result: Some(InterpreterActivationState {
                parameters: vec!["input".to_owned()],
                symbols: vec!["pi".to_owned(), "input".to_owned()],
                symbol_list_text: "pi\ninput".to_owned(),
            }),
            sources: Vec::new(),
            configurations: Vec::new(),
        };
        let text = window.program.text();
        let cursor = window.program.cursor_position();

        window.form_activate(&mut host);

        assert_eq!(host.sources, ["result = input\n"]);
        assert_eq!(host.configurations, [configuration]);
        assert_eq!(window.parameters, ["input"]);
        assert_eq!(symbol_names(&window), ["pi", "input"]);
        assert_eq!(window.symbol_list_text, "pi\ninput");
        assert_eq!(window.caption, "Lokaler Interpreter-<Demo.IPR>");
        assert_eq!(window.program.text(), text);
        assert_eq!(window.program.cursor_position(), cursor);
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017f07b0_refreshes_one_based_caret_status_without_editor_changes() {
        let mut window = Window {
            program: text_editor::Content::with_text("first\nsecond"),
            document_modified: true,
            current_file_name: "existing.ipr".to_owned(),
            line_label: "Line:".to_owned(),
            column_label: "Column:".to_owned(),
            execution_status_text: "Compiled".to_owned(),
            runtime_mode_status_text: "Editing".to_owned(),
            ..Window::default()
        };
        window
            .program
            .perform(text_editor::Action::Move(text_editor::Motion::DocumentEnd));
        let text = window.program.text();
        let cursor = window.program.cursor_position();
        let selection = window.program.selection();
        let undo_history = window.undo_history.clone();
        let redo_history = window.redo_history.clone();

        window.editor_clicked();

        assert_eq!(window.status, "Line: 2 Column: 7    Compiled    Editing");
        assert_eq!(window.program.text(), text);
        assert_eq!(window.program.cursor_position(), cursor);
        assert_eq!(window.program.selection(), selection);
        assert_eq!(window.undo_history, undo_history);
        assert_eq!(window.redo_history, redo_history);
        assert!(window.document_modified);
        assert_eq!(window.current_file_name, "existing.ipr");

        window.editor_clicked();

        assert_eq!(window.status, "Line: 2 Column: 7    Compiled    Editing");
    }

    #[test]
    fn fun_017f1730_mouse_down_only_refreshes_caret_status() {
        let mut window = Window {
            program: text_editor::Content::with_text("first\nsecond"),
            document_modified: true,
            ..Window::default()
        };
        window
            .program
            .perform(text_editor::Action::Move(text_editor::Motion::DocumentEnd));
        let text = window.program.text();
        let cursor = window.program.cursor_position();

        window.editor_mouse_down();

        assert_eq!(
            window.status,
            "Line: 2 Col: 7    Successfully compiled    Editing commands"
        );
        assert_eq!(window.program.text(), text);
        assert_eq!(window.program.cursor_position(), cursor);
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017f1750_mouse_up_only_refreshes_caret_status() {
        let mut window = Window {
            program: text_editor::Content::with_text("first\nsecond"),
            document_modified: true,
            ..Window::default()
        };
        window
            .program
            .perform(text_editor::Action::Move(text_editor::Motion::DocumentEnd));
        let selection = window.program.selection();

        window.editor_mouse_up();

        assert_eq!(
            window.status,
            "Line: 2 Col: 7    Successfully compiled    Editing commands"
        );
        assert_eq!(window.program.selection(), selection);
        assert_eq!(window.program.text(), "first\nsecond\n");
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017f1780_disables_one_shot_timer_and_allows_progress_feedback() {
        let mut window = Window {
            program: text_editor::Content::with_text("unchanged source"),
            document_modified: true,
            status: "unchanged status".to_owned(),
            ..Window::default()
        };
        window.start_progress_timer();
        assert!(window.progress_timer_enabled());
        assert!(!window.progress_feedback_enabled());

        window.update(Message::ProgressTimerElapsed);

        assert!(!window.progress_timer_enabled());
        assert_eq!(
            window.progress_timer_interval(),
            std::time::Duration::from_millis(1_000)
        );
        assert!(window.progress_feedback_enabled());
        assert_eq!(window.program.text(), "unchanged source\n");
        assert!(window.document_modified);
        assert_eq!(window.status, "unchanged status");

        window.progress_timer_elapsed();

        assert!(!window.progress_timer_enabled());
        assert!(window.progress_feedback_enabled());
    }

    #[test]
    fn fun_017f0950_composes_localized_line_then_column_from_displayed_caret() {
        let mut window = Window {
            program: text_editor::Content::with_text("one\ntwo"),
            line_label: "Zeile:".to_owned(),
            column_label: "Spalte:".to_owned(),
            execution_status_text: "Übersetzt".to_owned(),
            runtime_mode_status_text: "Bearbeiten".to_owned(),
            ..Window::default()
        };
        window
            .program
            .perform(text_editor::Action::Move(text_editor::Motion::DocumentEnd));

        window.refresh_caret_status();

        assert_eq!(
            window.status,
            "Zeile: 2 Spalte: 4    Übersetzt    Bearbeiten"
        );
    }

    #[test]
    fn fun_017f0f10_always_selects_release_without_form_state_changes() {
        let window = Window {
            program: text_editor::Content::with_text("unsaved source"),
            document_modified: true,
            current_file_name: "unsaved.ipr".to_owned(),
            lifecycle_state: super::InterpreterLifecycleState::Shown,
            ..Window::default()
        };

        let action = window.form_close();

        assert_eq!(action, InterpreterCloseAction::Release);
        assert_eq!(window.program.text(), "unsaved source\n");
        assert!(window.document_modified);
        assert_eq!(window.current_file_name, "unsaved.ipr");
        assert_eq!(
            window.lifecycle_state,
            super::InterpreterLifecycleState::Shown
        );
    }

    #[test]
    fn fun_017f0f20_returns_close_guard_veto_without_extra_state_changes() {
        let mut window = Window {
            program: text_editor::Content::with_text("unsaved source"),
            document_modified: true,
            current_file_name: "C:/Work/demo.ipr".to_owned(),
            ..Window::default()
        };
        let mut host = DocumentGuardHost {
            choice: Ok(InterpreterUnsavedChoice::Cancel),
            prompts: Vec::new(),
            save_calls: 0,
            clear_modified_on_save: false,
            save_result: Ok(()),
        };

        let permitted = window.form_close_query(&mut host);

        assert_eq!(permitted, Ok(false));
        assert_eq!(
            host.prompts,
            [InterpreterUnsavedPrompt::Standalone {
                uppercase_name: "C:/WORK/DEMO.IPR".to_owned(),
            }]
        );
        assert_eq!(host.save_calls, 0);
        assert_eq!(window.program.text(), "unsaved source\n");
        assert!(window.document_modified);
    }

    #[test]
    fn fun_017f0f20_permits_an_unmodified_close_without_prompting() {
        let mut window = Window::default();
        let mut host = DocumentGuardHost {
            choice: Err("must not prompt"),
            prompts: Vec::new(),
            save_calls: 0,
            clear_modified_on_save: false,
            save_result: Err("must not save"),
        };

        let permitted = window.form_close_query(&mut host);

        assert_eq!(permitted, Ok(true));
        assert!(host.prompts.is_empty());
        assert_eq!(host.save_calls, 0);
    }

    #[test]
    fn fun_017f1540_standalone_yes_saves_then_permits_without_rechecking_modified() {
        let mut window = Window {
            document_modified: true,
            current_file_name: "demo.ipr".to_owned(),
            ..Window::default()
        };
        let mut host = DocumentGuardHost {
            choice: Ok(InterpreterUnsavedChoice::Yes),
            prompts: Vec::new(),
            save_calls: 0,
            clear_modified_on_save: false,
            save_result: Ok(()),
        };

        let permitted = window.guard_document(&mut host, InterpreterDocumentGuardMode::Close);

        assert_eq!(permitted, Ok(true));
        assert_eq!(host.save_calls, 1);
        assert!(window.document_modified);
    }

    #[test]
    fn fun_017f1540_standalone_no_permits_without_saving() {
        let mut window = Window {
            document_modified: true,
            ..Window::default()
        };
        let mut host = DocumentGuardHost {
            choice: Ok(InterpreterUnsavedChoice::No),
            prompts: Vec::new(),
            save_calls: 0,
            clear_modified_on_save: false,
            save_result: Err("must not save"),
        };

        let permitted = window.guard_document(&mut host, InterpreterDocumentGuardMode::Replace);

        assert_eq!(permitted, Ok(true));
        assert_eq!(host.save_calls, 0);
        assert!(window.document_modified);
    }

    #[test]
    fn fun_017f1540_propagates_standalone_save_error() {
        let mut window = Window {
            document_modified: true,
            ..Window::default()
        };
        let mut host = DocumentGuardHost {
            choice: Ok(InterpreterUnsavedChoice::Yes),
            prompts: Vec::new(),
            save_calls: 0,
            clear_modified_on_save: false,
            save_result: Err("save failed"),
        };

        let permitted = window.guard_document(&mut host, InterpreterDocumentGuardMode::Close);

        assert_eq!(permitted, Err("save failed"));
        assert_eq!(host.save_calls, 1);
    }

    #[test]
    fn fun_017f1540_embedded_close_records_yes_and_no_without_saving() {
        for (choice, expected) in [
            (
                InterpreterUnsavedChoice::Yes,
                super::InterpreterUpdateChoice::Update,
            ),
            (
                InterpreterUnsavedChoice::No,
                super::InterpreterUpdateChoice::DoNotUpdate,
            ),
        ] {
            let mut window = Window {
                document_modified: true,
                document_mode: super::InterpreterDocumentMode::EmbeddedUpdate,
                ..Window::default()
            };
            let mut host = DocumentGuardHost {
                choice: Ok(choice),
                prompts: Vec::new(),
                save_calls: 0,
                clear_modified_on_save: false,
                save_result: Err("must not save"),
            };

            let permitted = window.guard_document(&mut host, InterpreterDocumentGuardMode::Close);

            assert_eq!(permitted, Ok(true));
            assert_eq!(host.prompts, [InterpreterUnsavedPrompt::EmbeddedUpdate]);
            assert_eq!(host.save_calls, 0);
            assert_eq!(window.embedded_update_choice, Some(expected));
        }
    }

    #[test]
    fn fun_017f1430_reseeds_font_dialog_and_applies_only_an_accepted_complete_font() {
        let initial = InterpreterEditorFont::default();
        let selected = InterpreterEditorFont {
            family: "JetBrains Mono".to_owned(),
            size_points: 13,
            styles: vec![InterpreterFontStyle::Bold, InterpreterFontStyle::Underline],
            color_rgba: [12, 34, 56, 255],
            charset: 238,
            pitch: InterpreterFontPitch::Variable,
        };
        let mut window = Window {
            program: text_editor::Content::with_text("unchanged source"),
            document_modified: true,
            editor_font: initial.clone(),
            ..Window::default()
        };
        let mut cancel = FontDialog {
            result: Ok(None),
            seeds: Vec::new(),
        };

        let cancel_result = window.set_editor_font(&mut cancel);

        assert_eq!(cancel_result, Ok(()));
        assert_eq!(cancel.seeds.as_slice(), std::slice::from_ref(&initial));
        assert_eq!(window.editor_font, initial);

        let mut accept = FontDialog {
            result: Ok(Some(selected.clone())),
            seeds: Vec::new(),
        };
        let accept_result = window.set_editor_font(&mut accept);

        assert_eq!(accept_result, Ok(()));
        assert_eq!(accept.seeds, [InterpreterEditorFont::default()]);
        assert_eq!(window.editor_font, selected);
        assert_eq!(window.program.text(), "unchanged source\n");
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());

        let mut repeat = FontDialog {
            result: Ok(None),
            seeds: Vec::new(),
        };
        window.set_editor_font(&mut repeat).expect("repeat cancel");

        assert_eq!(
            repeat.seeds.as_slice(),
            std::slice::from_ref(&window.editor_font)
        );
    }

    #[test]
    fn fun_017f2be0_opens_popup_two_pixels_below_button_without_style_changes() {
        let presentation = SystemTextPresentation {
            background: SystemTextBackground::Opaque,
            color: 0x0012_3456,
            border: SystemTextBorder::Dotted,
        };
        let mut window = Window {
            program: text_editor::Content::with_text("unchanged"),
            document_modified: true,
            system_text_presentation: presentation,
            background_popup_internal_value: 9,
            ..Window::default()
        };
        let mut host = BackgroundPopupHost {
            relative_points: Vec::new(),
            screen_point: iced::Point::new(120.0, 240.0),
            opened_points: Vec::new(),
            conversion_error: None,
            open_error: None,
        };

        let result = window.open_background_popup(24.0, &mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(host.relative_points, [iced::Point::new(0.0, 26.0)]);
        assert_eq!(host.opened_points, [iced::Point::new(120.0, 240.0)]);
        assert_eq!(window.background_popup_position(), Some(host.screen_point));
        assert_eq!(window.background_popup_internal_value, 0);
        assert_eq!(window.system_text_presentation, presentation);
        assert_eq!(window.program.text(), "unchanged\n");
        assert!(window.document_modified);
    }

    #[test]
    fn fun_017f2be0_popup_error_keeps_cleared_internal_state_without_open_position() {
        let mut window = Window {
            background_popup_internal_value: 7,
            background_popup_position: Some(iced::Point::new(1.0, 2.0)),
            ..Window::default()
        };
        let mut host = BackgroundPopupHost {
            relative_points: Vec::new(),
            screen_point: iced::Point::new(50.0, 60.0),
            opened_points: Vec::new(),
            conversion_error: None,
            open_error: Some("open failed"),
        };

        let result = window.open_background_popup(10.0, &mut host);

        assert_eq!(result, Err("open failed"));
        assert_eq!(host.relative_points, [iced::Point::new(0.0, 12.0)]);
        assert_eq!(host.opened_points, [host.screen_point]);
        assert_eq!(window.background_popup_internal_value, 0);
        assert_eq!(window.background_popup_position(), None);
    }

    #[test]
    fn fun_017f2c50_selects_transparent_and_preserves_color_border_and_document() {
        let mut window = Window {
            program: text_editor::Content::with_text("unchanged"),
            document_modified: true,
            system_text_presentation: SystemTextPresentation {
                background: SystemTextBackground::Opaque,
                color: 0x00ab_cdef,
                border: SystemTextBorder::Solid,
            },
            ..Window::default()
        };

        window.select_transparent_background();

        assert_eq!(
            window.system_text_presentation,
            SystemTextPresentation {
                background: SystemTextBackground::Transparent,
                color: 0x00ab_cdef,
                border: SystemTextBorder::Solid,
            }
        );
        assert_eq!(window.program.text(), "unchanged\n");
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017f2c90_cancel_keeps_color_but_leaves_opaque_mode_selected() {
        let mut window = Window {
            system_text_presentation: SystemTextPresentation {
                background: SystemTextBackground::Transparent,
                color: 0x0012_3456,
                border: SystemTextBorder::Dotted,
            },
            document_modified: true,
            ..Window::default()
        };
        let mut dialog = ColorDialog {
            seeds: Vec::new(),
            result: Ok(None),
        };

        let result = window.select_opaque_background(&mut dialog);

        assert_eq!(result, Ok(()));
        assert_eq!(dialog.seeds, [0x0012_3456]);
        assert_eq!(
            window.system_text_presentation.background,
            SystemTextBackground::Opaque
        );
        assert_eq!(window.system_text_presentation.color, 0x0012_3456);
        assert_eq!(
            window.system_text_presentation.border,
            SystemTextBorder::Dotted
        );
        assert!(window.document_modified);
    }

    #[test]
    fn fun_017f2c90_accept_replaces_color_and_error_keeps_prior_color() {
        let mut window = Window::default();
        let mut accept = ColorDialog {
            seeds: Vec::new(),
            result: Ok(Some(0x00ab_cdef)),
        };

        assert_eq!(window.select_opaque_background(&mut accept), Ok(()));
        assert_eq!(window.system_text_presentation.color, 0x00ab_cdef);

        window.select_transparent_background();
        let mut error = ColorDialog {
            seeds: Vec::new(),
            result: Err("dialog failed"),
        };
        assert_eq!(
            window.select_opaque_background(&mut error),
            Err("dialog failed")
        );
        assert_eq!(
            window.system_text_presentation.background,
            SystemTextBackground::Opaque
        );
        assert_eq!(window.system_text_presentation.color, 0x00ab_cdef);
        assert_eq!(error.seeds, [0x00ab_cdef]);
    }

    #[test]
    fn fun_017f2d20_selects_no_border_and_preserves_background_and_document() {
        let mut window = Window {
            program: text_editor::Content::with_text("unchanged"),
            document_modified: true,
            system_text_presentation: SystemTextPresentation {
                background: SystemTextBackground::Opaque,
                color: 0x0065_4321,
                border: SystemTextBorder::Dotted,
            },
            ..Window::default()
        };

        window.select_no_border();

        assert_eq!(
            window.system_text_presentation,
            SystemTextPresentation {
                background: SystemTextBackground::Opaque,
                color: 0x0065_4321,
                border: SystemTextBorder::None,
            }
        );
        assert_eq!(window.program.text(), "unchanged\n");
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017f2d60_selects_solid_border_without_other_state_changes() {
        let mut window = Window {
            program: text_editor::Content::with_text("unchanged"),
            document_modified: true,
            system_text_presentation: SystemTextPresentation {
                background: SystemTextBackground::Transparent,
                color: 0x0001_0203,
                border: SystemTextBorder::Dotted,
            },
            ..Window::default()
        };

        window.select_solid_border();

        assert_eq!(
            window.system_text_presentation,
            SystemTextPresentation {
                background: SystemTextBackground::Transparent,
                color: 0x0001_0203,
                border: SystemTextBorder::Solid,
            }
        );
        assert_eq!(window.program.text(), "unchanged\n");
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017f2da0_selects_dotted_border_without_other_state_changes() {
        let mut window = Window {
            program: text_editor::Content::with_text("unchanged"),
            document_modified: true,
            system_text_presentation: SystemTextPresentation {
                background: SystemTextBackground::Opaque,
                color: 0x0004_0506,
                border: SystemTextBorder::Solid,
            },
            ..Window::default()
        };

        window.select_dotted_border();

        assert_eq!(
            window.system_text_presentation,
            SystemTextPresentation {
                background: SystemTextBackground::Opaque,
                color: 0x0004_0506,
                border: SystemTextBorder::Dotted,
            }
        );
        assert_eq!(window.program.text(), "unchanged\n");
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017f2de0_loads_complete_system_text_presentation_only() {
        let mut window = Window {
            program: text_editor::Content::with_text("unchanged"),
            document_modified: true,
            system_text_presentation: SystemTextPresentation {
                background: SystemTextBackground::Transparent,
                color: 0x00ff_ffff,
                border: SystemTextBorder::None,
            },
            ..Window::default()
        };
        let presentation = SystemTextPresentation {
            background: SystemTextBackground::Opaque,
            color: 0x0007_0809,
            border: SystemTextBorder::Dotted,
        };

        window.load_system_text_presentation(presentation);

        assert_eq!(window.system_text_presentation, presentation);
        assert_eq!(window.program.text(), "unchanged\n");
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017f14b0_enables_selection_and_clipboard_edit_commands_on_idle() {
        let mut window = Window {
            program: text_editor::Content::with_text("selected source"),
            document_modified: true,
            ..Window::default()
        };
        window.program.perform(text_editor::Action::SelectAll);
        let text = window.program.text();
        let selection = window.program.selection();
        let mut host = IdleHost {
            clipboard_has_text: true,
            checks: 0,
        };

        window.application_idle(&mut host);

        assert_eq!(
            window.enabled_edit_commands,
            [
                InterpreterEditCommand::Cut,
                InterpreterEditCommand::Copy,
                InterpreterEditCommand::Paste,
                InterpreterEditCommand::Delete,
            ]
        );
        assert_eq!(host.checks, 1);
        assert_eq!(window.program.text(), text);
        assert_eq!(window.program.selection(), selection);
        assert!(window.document_modified);

        window
            .program
            .perform(text_editor::Action::Move(text_editor::Motion::DocumentEnd));
        host.clipboard_has_text = false;
        window.application_idle(&mut host);

        assert!(window.enabled_edit_commands.is_empty());
        assert_eq!(host.checks, 2);
    }

    #[test]
    fn fun_017f16e0_runs_only_unsuppressed_unshifted_enter_and_refreshes_status() {
        let mut window = Window {
            program: text_editor::Content::with_text("one\ntwo"),
            status: "stale".to_owned(),
            ..Window::default()
        };
        window
            .program
            .perform(text_editor::Action::Move(text_editor::Motion::DocumentEnd));
        let mut host = KeyUpHost {
            suppressed: false,
            run_calls: 0,
            modes: Vec::new(),
            result: Ok(completed_run(InterpreterCursorPolicy::FinalLine)),
        };

        window
            .editor_key_up(&Key::Named(Named::ArrowLeft), Modifiers::empty(), &mut host)
            .expect("other key");
        window
            .editor_key_up(&Key::Named(Named::Enter), Modifiers::SHIFT, &mut host)
            .expect("shifted Enter");
        host.suppressed = true;
        window
            .editor_key_up(&Key::Named(Named::Enter), Modifiers::empty(), &mut host)
            .expect("suppressed Enter");

        assert_eq!(host.run_calls, 0);
        assert_eq!(
            window.status,
            "Line: 2 Col: 4    Successfully compiled    Editing commands"
        );

        host.suppressed = false;
        window
            .editor_key_up(&Key::Named(Named::Enter), Modifiers::empty(), &mut host)
            .expect("Enter run");

        assert_eq!(host.run_calls, 1);
        assert_eq!(host.modes, [InterpreterRunMode::Normal]);
    }

    #[test]
    fn fun_017f16e0_run_error_stops_before_caret_status_refresh() {
        let mut window = Window {
            status: "old status".to_owned(),
            ..Window::default()
        };
        let mut host = KeyUpHost {
            suppressed: false,
            run_calls: 0,
            modes: Vec::new(),
            result: Err("run failed"),
        };

        let result = window.editor_key_up(&Key::Named(Named::Enter), Modifiers::empty(), &mut host);

        assert_eq!(result, Err("run failed"));
        assert_eq!(host.run_calls, 1);
        assert_eq!(window.status, "old status");
    }

    #[test]
    fn fun_017f0730_releases_resources_in_recovered_order_and_clears_owned_state() {
        let mut window = window_with_symbols(&["pi", "j"]);
        let mut host = LifecycleHost {
            startup: Some(InterpreterStartup {
                localized_caption_template: "Interpreter-<%s>".to_owned(),
                user_examples_directory: std::path::PathBuf::from("C:/User Examples"),
                tina_examples_directory: std::path::PathBuf::from("C:/TINA/Examples"),
                configuration: InterpreterConfiguration::default(),
            }),
            show: InterpreterShowState {
                line_label: "Line:".to_owned(),
                column_label: "Col:".to_owned(),
                execution_status: "Compiled".to_owned(),
                runtime_mode_status: "Editing".to_owned(),
            },
            form_state_keys: Vec::new(),
            show_calls: 0,
            released_resources: Vec::new(),
        };
        window.form_create(&mut host);
        window.symbols = vec![
            InterpreterSymbol {
                name: "pi".to_owned(),
            },
            InterpreterSymbol {
                name: "j".to_owned(),
            },
        ];
        window.parameters = vec!["pi".to_owned(), "j".to_owned()];
        window.symbol_list_text = "pi\nj".to_owned();

        window.form_destroy(&mut host);

        assert_eq!(
            host.released_resources,
            [
                InterpreterResource::OpenDialog,
                InterpreterResource::SaveDialog,
                InterpreterResource::Runtime,
                InterpreterResource::Helper,
                InterpreterResource::SharedSymbolTable,
                InterpreterResource::SymbolList,
                InterpreterResource::ActiveCallback,
            ]
        );
        assert!(window.open_dialog.is_none());
        assert!(window.save_dialog.is_none());
        assert!(window.symbols.is_empty());
        assert!(window.parameters.is_empty());
        assert!(window.symbol_list_text.is_empty());
        assert_eq!(
            window.syntax_highlighting_state,
            super::SyntaxHighlightingState::Inactive
        );
        assert_eq!(
            window.lifecycle_state,
            super::InterpreterLifecycleState::Destroyed
        );
    }

    #[test]
    fn fun_017eef40_cancelled_guard_preserves_all_document_state() {
        let mut window = window_with_symbols(&["old_symbol"]);
        window.program = text_editor::Content::with_text("old program");
        window.parameters = vec!["old_parameter".to_owned()];
        window.interpreter_configuration = InterpreterConfiguration::new(vec![4, 8, 15, 16]);
        window.interpreter_generation = 7;
        window.document_modified = true;
        window.current_file_name = "existing.ipr".to_owned();
        window.caption = "Interpreter-<existing.ipr>".to_owned();
        window.status = "Existing status".to_owned();
        let mut host = NewHost {
            approved: false,
            parameters: vec!["host_parameter".to_owned()],
            approval_inputs: Vec::new(),
        };

        let outcome = window.reset_to_new_document(&mut host);

        assert_eq!(outcome, NewDocumentOutcome::Cancelled);
        assert_eq!(window.program.text(), "old program\n");
        assert_eq!(window.parameters, ["old_parameter"]);
        assert_eq!(window.interpreter_configuration.values(), [4, 8, 15, 16]);
        assert_eq!(window.interpreter_generation, 7);
        assert!(window.document_modified);
        assert_eq!(window.current_file_name, "existing.ipr");
        assert_eq!(window.caption, "Interpreter-<existing.ipr>");
        assert_eq!(window.status, "Existing status");
        assert_eq!(symbol_names(&window), ["old_symbol"]);
        assert_eq!(host.approval_inputs, [true]);
        assert_eq!(host.parameters, ["host_parameter"]);
    }

    #[test]
    fn fun_017ef8c0_forwards_file_new_to_the_shared_coordinator() {
        let mut window = Window {
            program: text_editor::Content::with_text("old program"),
            document_modified: true,
            current_file_name: "old.ipr".to_owned(),
            ..Window::default()
        };
        let mut host = NewHost {
            approved: true,
            parameters: vec!["host_parameter".to_owned()],
            approval_inputs: Vec::new(),
        };

        let outcome = window.new_menu_selected(&mut host);

        assert_eq!(outcome, NewDocumentOutcome::Reset);
        assert_eq!(window.program.text(), "\n");
        assert_eq!(window.current_file_name, "noname.ipr");
        assert_eq!(host.approval_inputs, [true]);
    }

    #[test]
    fn fun_017efd40_forwards_toolbar_new_to_the_shared_coordinator() {
        let mut window = Window {
            program: text_editor::Content::with_text("old program"),
            document_modified: true,
            current_file_name: "old.ipr".to_owned(),
            ..Window::default()
        };
        let mut host = NewHost {
            approved: false,
            parameters: vec!["unused_parameter".to_owned()],
            approval_inputs: Vec::new(),
        };

        let outcome = window.new_toolbar_selected(&mut host);

        assert_eq!(outcome, NewDocumentOutcome::Cancelled);
        assert_eq!(window.program.text(), "old program\n");
        assert!(window.document_modified);
        assert_eq!(window.current_file_name, "old.ipr");
        assert_eq!(host.approval_inputs, [true]);
        assert_eq!(host.parameters, ["unused_parameter"]);
    }

    #[test]
    fn fun_017eef40_resets_session_and_retains_interpreter_configuration() {
        let mut window = window_with_symbols(&["old_symbol"]);
        window.program = text_editor::Content::with_text("old program");
        window.parameters = vec!["old_parameter".to_owned()];
        window.interpreter_configuration = InterpreterConfiguration::new(vec![23, 42]);
        window.interpreter_generation = 7;
        window.document_modified = true;
        window.current_file_name = "existing.ipr".to_owned();
        window.caption = "Interpreter-<existing.ipr>".to_owned();
        window.status = "Failed".to_owned();
        let mut host = NewHost {
            approved: true,
            parameters: vec!["temperature".to_owned()],
            approval_inputs: Vec::new(),
        };

        let outcome = window.reset_to_new_document(&mut host);

        assert_eq!(outcome, NewDocumentOutcome::Reset);
        assert_eq!(window.program.text(), "\n");
        assert!(!window.document_modified);
        assert_eq!(window.interpreter_configuration.values(), [23, 42]);
        assert_eq!(window.interpreter_generation, 8);
        assert_eq!(
            window.parameters,
            ["l_limit", "r_limit", "i_subdiv", "temperature"]
        );
        assert_eq!(
            symbol_names(&window),
            ["l_limit", "r_limit", "i_subdiv", "temperature"]
        );
        assert_eq!(window.current_file_name, "noname.ipr");
        assert_eq!(window.caption, "Interpreter-<noname.ipr>");
        assert_eq!(
            window.status,
            "Line: 1 Col: 1    Successfully compiled    Editing commands"
        );
        assert_eq!(host.approval_inputs, [true]);
        assert!(host.parameters.is_empty());
    }

    #[test]
    fn fun_017ef290_cancel_preserves_document_and_remembered_directory() {
        let mut window = Window {
            program: text_editor::Content::with_text("old program"),
            document_modified: true,
            current_file_name: "old.ipr".to_owned(),
            caption: "Interpreter-<old.ipr>".to_owned(),
            status: "Old status".to_owned(),
            status_detail: "Old detail".to_owned(),
            last_open_directory: Some(std::path::PathBuf::from("C:/old")),
            ..Window::default()
        };
        let mut host = open_host(None);

        let outcome = window.open_document(&mut host);

        assert_eq!(outcome, Ok(OpenDocumentOutcome::Cancelled));
        assert_eq!(window.program.text(), "old program\n");
        assert!(window.document_modified);
        assert_eq!(window.current_file_name, "old.ipr");
        assert_eq!(window.caption, "Interpreter-<old.ipr>");
        assert_eq!(window.status, "Old status");
        assert_eq!(window.status_detail, "Old detail");
        assert_eq!(
            window.last_open_directory,
            Some(std::path::PathBuf::from("C:/old"))
        );
        assert_eq!(
            host.initial_directories,
            [Some(std::path::PathBuf::from("C:/old"))]
        );
        assert!(host.loaded_paths.is_empty());
    }

    #[test]
    fn fun_017ef8d0_forwards_open_without_a_modified_document_guard() {
        let mut window = Window {
            program: text_editor::Content::with_text("unsaved program"),
            document_modified: true,
            ..Window::default()
        };
        let mut host = open_host(None);

        let outcome = window.open_menu_selected(&mut host);

        assert_eq!(outcome, Ok(OpenDocumentOutcome::Cancelled));
        assert_eq!(window.program.text(), "unsaved program\n");
        assert!(window.document_modified);
        assert_eq!(host.initial_directories, [None]);
    }

    #[test]
    fn fun_017efd50_forwards_toolbar_open_without_a_modified_document_guard() {
        let mut window = Window {
            program: text_editor::Content::with_text("unsaved toolbar program"),
            document_modified: true,
            last_open_directory: Some(std::path::PathBuf::from("C:/remembered")),
            ..Window::default()
        };
        let mut host = open_host(None);

        let outcome = window.open_toolbar_selected(&mut host);

        assert_eq!(outcome, Ok(OpenDocumentOutcome::Cancelled));
        assert_eq!(window.program.text(), "unsaved toolbar program\n");
        assert!(window.document_modified);
        assert_eq!(
            host.initial_directories,
            [Some(std::path::PathBuf::from("C:/remembered"))]
        );
        assert!(host.loaded_paths.is_empty());
    }

    #[test]
    fn fun_017ef900_requests_close_without_direct_document_mutation() {
        let window = Window {
            program: text_editor::Content::with_text("unsaved program"),
            document_modified: true,
            current_file_name: "unsaved.ipr".to_owned(),
            caption: "Interpreter-<unsaved.ipr>".to_owned(),
            ..Window::default()
        };

        let _close_task = window.close_menu_selected(window::Id::unique());

        assert_eq!(window.program.text(), "unsaved program\n");
        assert!(window.document_modified);
        assert_eq!(window.current_file_name, "unsaved.ipr");
        assert_eq!(window.caption, "Interpreter-<unsaved.ipr>");
    }

    #[test]
    fn fun_017ef910_undo_restores_text_caret_and_clean_state() {
        let mut window = Window::default();
        window.update(Message::Edit(text_editor::Action::Edit(
            text_editor::Edit::Insert('x'),
        )));
        assert_eq!(window.program.text(), "x\n");
        assert!(window.document_modified);

        window.undo_menu_selected();

        assert_eq!(window.program.text(), "\n");
        assert_eq!(window.program.cursor_position(), (0, 0));
        assert!(!window.document_modified);
        assert_eq!(window.redo_history.len(), 1);
    }

    #[test]
    fn fun_017ef910_is_a_no_op_for_an_empty_history() {
        let mut window = Window {
            program: text_editor::Content::with_text("unchanged"),
            document_modified: true,
            ..Window::default()
        };

        window.undo_menu_selected();

        assert_eq!(window.program.text(), "unchanged\n");
        assert!(window.document_modified);
        assert!(window.redo_history.is_empty());
    }

    #[test]
    fn fun_017ef910_is_a_no_op_when_the_editor_is_read_only() {
        let mut window = Window::default();
        window.update(Message::Edit(text_editor::Action::Edit(
            text_editor::Edit::Insert('x'),
        )));
        window.editor_read_only = true;

        window.undo_menu_selected();

        assert_eq!(window.program.text(), "x\n");
        assert!(window.document_modified);
        assert_eq!(window.undo_history.len(), 1);
        assert!(window.redo_history.is_empty());
    }

    #[test]
    fn fun_017ef930_discards_the_accepted_dialog_value() {
        let window = Window::default();
        let keep_cursor_position = false;
        let mut host = OptionsHost {
            initialized_values: Vec::new(),
            accepted_values: Vec::new(),
            result: Ok(()),
        };

        let result = window.options_menu_selected(keep_cursor_position, &mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(host.initialized_values, [false]);
        assert_eq!(host.accepted_values, [true]);
        assert!(!keep_cursor_position);
    }

    #[test]
    fn fun_017ef930_propagates_a_modal_host_error() {
        let window = Window::default();
        let mut host = OptionsHost {
            initialized_values: Vec::new(),
            accepted_values: Vec::new(),
            result: Err("modal failed"),
        };

        let result = window.options_menu_selected(true, &mut host);

        assert_eq!(result, Err("modal failed"));
        assert_eq!(host.initialized_values, [true]);
        assert_eq!(host.accepted_values, [true]);
    }

    #[test]
    fn fun_017ef980_cuts_the_selection_as_one_undoable_edit() {
        let mut window = Window {
            program: text_editor::Content::with_text("selected text"),
            ..Window::default()
        };
        window.program.perform(text_editor::Action::SelectAll);

        let _clipboard_task = window.cut_menu_selected();

        assert_eq!(window.program.text(), "\n");
        assert!(window.document_modified);
        assert_eq!(window.undo_history.len(), 1);

        window.undo_menu_selected();

        assert_eq!(window.program.text(), "selected text\n");
        assert!(!window.document_modified);
    }

    #[test]
    fn fun_017ef980_is_a_no_op_for_read_only_or_empty_selection() {
        let mut window = Window {
            program: text_editor::Content::with_text("protected"),
            editor_read_only: true,
            ..Window::default()
        };
        window.program.perform(text_editor::Action::SelectAll);

        let _read_only_task = window.cut_menu_selected();

        assert_eq!(window.program.text(), "protected\n");
        assert!(!window.document_modified);
        assert!(window.undo_history.is_empty());

        window.editor_read_only = false;
        window
            .program
            .perform(text_editor::Action::Move(text_editor::Motion::DocumentEnd));
        let _empty_selection_task = window.cut_menu_selected();

        assert_eq!(window.program.text(), "protected\n");
        assert!(!window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017ef9a0_copies_a_read_only_selection_without_editor_changes() {
        let mut window = Window {
            program: text_editor::Content::with_text("copy me"),
            editor_read_only: true,
            document_modified: true,
            ..Window::default()
        };
        window.program.perform(text_editor::Action::SelectAll);
        let cursor = window.program.cursor_position();
        let selection = window.program.selection();

        let _clipboard_task = window.copy_menu_selected();

        assert_eq!(window.program.text(), "copy me\n");
        assert_eq!(window.program.cursor_position(), cursor);
        assert_eq!(window.program.selection(), selection);
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
        assert!(window.redo_history.is_empty());
    }

    #[test]
    fn fun_017ef9a0_is_a_no_op_for_an_empty_selection() {
        let window = Window {
            program: text_editor::Content::with_text("unchanged"),
            document_modified: true,
            ..Window::default()
        };

        let _empty_task = window.copy_menu_selected();

        assert_eq!(window.program.text(), "unchanged\n");
        assert_eq!(window.program.cursor_position(), (0, 0));
        assert_eq!(window.program.selection(), None);
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
        assert!(window.redo_history.is_empty());
    }

    #[test]
    fn fun_017ef9c0_applies_interpreter_paste_as_one_undoable_edit() {
        let mut window = Window {
            program: text_editor::Content::with_text("old text"),
            ..Window::default()
        };
        window.program.perform(text_editor::Action::SelectAll);

        window.update(Message::PasteText(Some("new text".to_owned())));

        assert_eq!(window.program.text(), "new text\n");
        assert!(window.document_modified);
        assert_eq!(window.undo_history.len(), 1);

        window.undo_menu_selected();

        assert_eq!(window.program.text(), "old text\n");
        assert!(!window.document_modified);
    }

    #[test]
    fn fun_017ef9c0_forwards_other_focus_without_interpreter_changes() {
        let window = Window {
            program: text_editor::Content::with_text("unchanged"),
            document_modified: true,
            ..Window::default()
        };
        let mut host = PasteHost::default();

        let _forward_task = window.paste_menu_selected(PasteFocus::OtherNativeWindow, &mut host);

        assert_eq!(host.forwarded, 1);
        assert_eq!(window.program.text(), "unchanged\n");
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017ef9c0_rejects_missing_text_and_read_only_interpreter_paste() {
        let mut window = Window {
            program: text_editor::Content::with_text("protected"),
            editor_read_only: true,
            ..Window::default()
        };
        let mut host = PasteHost::default();

        let _read_only_task = window.paste_menu_selected(PasteFocus::InterpreterForm, &mut host);
        window.update(Message::PasteText(Some("ignored".to_owned())));
        window.editor_read_only = false;
        window.update(Message::PasteText(None));

        assert_eq!(host.forwarded, 0);
        assert_eq!(window.program.text(), "protected\n");
        assert!(!window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017efa10_deletes_the_selection_as_one_undoable_edit() {
        let mut window = Window {
            program: text_editor::Content::with_text("delete me"),
            editor_read_only: true,
            ..Window::default()
        };
        window.program.perform(text_editor::Action::SelectAll);

        window.delete_menu_selected();

        assert_eq!(window.program.text(), "\n");
        assert!(window.document_modified);
        assert_eq!(window.undo_history.len(), 1);

        window.editor_read_only = false;
        window.undo_menu_selected();

        assert_eq!(window.program.text(), "delete me\n");
        assert!(!window.document_modified);
    }

    #[test]
    fn fun_017efa10_empty_selection_changes_no_text_or_history() {
        let mut window = Window {
            program: text_editor::Content::with_text("unchanged"),
            document_modified: true,
            ..Window::default()
        };

        window.delete_menu_selected();

        assert_eq!(window.program.text(), "unchanged\n");
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
        assert!(window.redo_history.is_empty());
    }

    #[test]
    fn fun_017efa30_selects_the_complete_read_only_editor_without_mutation() {
        let mut window = Window {
            program: text_editor::Content::with_text("all text"),
            editor_read_only: true,
            document_modified: true,
            ..Window::default()
        };

        window.select_all_menu_selected();

        assert_eq!(window.program.selection().as_deref(), Some("all text"));
        assert_eq!(window.program.cursor_position(), (0, 8));
        assert_eq!(window.program.text(), "all text\n");
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
        assert!(window.redo_history.is_empty());
    }

    #[test]
    fn fun_017efa30_empty_editor_keeps_an_empty_selection_at_the_start() {
        let mut window = Window::default();

        window.select_all_menu_selected();

        assert_eq!(window.program.selection(), None);
        assert_eq!(window.program.cursor_position(), (0, 0));
        assert_eq!(window.program.text(), "\n");
        assert!(!window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017efa50_enables_search_again_before_opening_find() {
        let mut window = Window {
            program: text_editor::Content::with_text("find target"),
            ..Window::default()
        };
        let mut host = FindHost {
            observed_text: Vec::new(),
            find_calls: 0,
            replace_calls: 0,
            search_again_calls: 0,
            result: Ok(()),
        };

        let result = window.find_menu_selected(&mut host);

        assert_eq!(result, Ok(()));
        assert!(window.search_again_enabled);
        assert_eq!(host.observed_text, ["find target\n"]);
        assert_eq!(host.find_calls, 1);
        assert_eq!(host.replace_calls, 0);
        assert_eq!(host.search_again_calls, 0);
        assert_eq!(window.program.text(), "find target\n");
        assert!(!window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017efa50_keeps_search_again_enabled_when_find_fails() {
        let mut window = Window::default();
        let mut host = FindHost {
            observed_text: Vec::new(),
            find_calls: 0,
            replace_calls: 0,
            search_again_calls: 0,
            result: Err("search failed"),
        };

        let result = window.find_menu_selected(&mut host);

        assert_eq!(result, Err("search failed"));
        assert!(window.search_again_enabled);
        assert_eq!(host.observed_text, ["\n"]);
    }

    #[test]
    fn fun_017efa80_opens_replace_without_enabling_search_again() {
        let mut window = Window {
            program: text_editor::Content::with_text("replace target"),
            ..Window::default()
        };
        let mut host = FindHost {
            observed_text: Vec::new(),
            find_calls: 0,
            replace_calls: 0,
            search_again_calls: 0,
            result: Ok(()),
        };

        let result = window.replace_menu_selected(&mut host);

        assert_eq!(result, Ok(()));
        assert!(!window.search_again_enabled);
        assert_eq!(host.observed_text, ["replace target\n"]);
        assert_eq!(host.find_calls, 0);
        assert_eq!(host.replace_calls, 1);
        assert_eq!(host.search_again_calls, 0);
        assert_eq!(window.program.text(), "replace target\n");
        assert!(!window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017efa90_repeats_forward_find_without_dialog_state_changes() {
        let mut window = Window {
            program: text_editor::Content::with_text("repeat target"),
            search_again_enabled: true,
            document_modified: true,
            ..Window::default()
        };
        let mut host = FindHost {
            observed_text: Vec::new(),
            find_calls: 0,
            replace_calls: 0,
            search_again_calls: 0,
            result: Ok(()),
        };

        let result = window.search_again_menu_selected(&mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(host.observed_text, ["repeat target\n"]);
        assert_eq!(host.find_calls, 0);
        assert_eq!(host.replace_calls, 0);
        assert_eq!(host.search_again_calls, 1);
        assert!(window.search_again_enabled);
        assert_eq!(window.program.text(), "repeat target\n");
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017f2f00_cancel_preserves_retained_state_and_skips_search() {
        let retained = InterpreterSearchValues {
            search_text: "retained".to_owned(),
            replacement_text: "replacement".to_owned(),
            direction: InterpreterSearchDirection::Backward,
            case_matching: InterpreterCaseMatching::Sensitive,
            ..InterpreterSearchValues::default()
        };
        let mut coordinator = InterpreterSearchCoordinator {
            retained: retained.clone(),
            preload_from_editor: true,
        };
        let mut program = text_editor::Content::with_text("editor text");
        let mut host = SearchDialogHost {
            dialog_result: Some(Ok(InterpreterSearchDialogResult::Cancelled)),
            execute_result: Ok(()),
            observed_modes: Vec::new(),
            observed_initial: Vec::new(),
            observed_programs: Vec::new(),
            observed_preload: Vec::new(),
            executed: Vec::new(),
        };

        let result = coordinator.coordinate_search_dialog(
            InterpreterSearchMode::Find,
            &mut program,
            &mut host,
        );

        assert_eq!(result, Ok(InterpreterSearchOutcome::Cancelled));
        assert_eq!(coordinator.retained(), &retained);
        assert_eq!(host.observed_modes, [InterpreterSearchMode::Find]);
        assert_eq!(host.observed_initial, [retained]);
        assert_eq!(host.observed_programs, ["editor text\n"]);
        assert_eq!(host.observed_preload, [true]);
        assert!(host.executed.is_empty());
    }

    #[test]
    fn fun_017f2f00_accepts_find_state_limits_history_and_starts_search() {
        let mut coordinator = InterpreterSearchCoordinator {
            retained: InterpreterSearchValues {
                replacement_text: "keep replacement".to_owned(),
                replacement_history: vec!["keep history".to_owned()],
                ..InterpreterSearchValues::default()
            },
            preload_from_editor: false,
        };
        let mut program = text_editor::Content::with_text("find target");
        let accepted = InterpreterSearchValues {
            search_text: "target".to_owned(),
            replacement_text: "ignore replacement".to_owned(),
            search_history: (0..12).map(|index| format!("term {index}")).collect(),
            replacement_history: vec!["ignore history".to_owned()],
            direction: InterpreterSearchDirection::Backward,
            case_matching: InterpreterCaseMatching::Sensitive,
            word_matching: InterpreterWordMatching::Whole,
            origin: InterpreterSearchOrigin::EntireScope,
            selection: InterpreterSearchSelection::SelectionOnly,
        };
        let mut host = SearchDialogHost {
            dialog_result: Some(Ok(InterpreterSearchDialogResult::Accepted(accepted))),
            execute_result: Ok(()),
            observed_modes: Vec::new(),
            observed_initial: Vec::new(),
            observed_programs: Vec::new(),
            observed_preload: Vec::new(),
            executed: Vec::new(),
        };

        let result = coordinator.coordinate_search_dialog(
            InterpreterSearchMode::Find,
            &mut program,
            &mut host,
        );

        assert_eq!(result, Ok(InterpreterSearchOutcome::Searched));
        assert_eq!(host.executed.len(), 1);
        assert_eq!(host.executed[0].mode, InterpreterSearchMode::Find);
        assert_eq!(host.executed[0].values.search_text, "target");
        assert_eq!(
            host.executed[0].values.origin,
            InterpreterSearchOrigin::EntireScope
        );
        assert_eq!(coordinator.retained().search_history.len(), 10);
        assert_eq!(coordinator.retained().replacement_text, "keep replacement");
        assert_eq!(coordinator.retained().replacement_history, ["keep history"]);
        assert_eq!(
            coordinator.retained().origin,
            InterpreterSearchOrigin::Caret
        );
    }

    #[test]
    fn fun_017f2f00_retains_empty_replace_values_without_execution() {
        let mut coordinator = InterpreterSearchCoordinator::default();
        let mut program = text_editor::Content::with_text("unchanged");
        let accepted = InterpreterSearchValues {
            replacement_text: "replacement".to_owned(),
            replacement_history: (0..12).map(|index| format!("value {index}")).collect(),
            ..InterpreterSearchValues::default()
        };
        let mut host = SearchDialogHost {
            dialog_result: Some(Ok(InterpreterSearchDialogResult::Accepted(accepted))),
            execute_result: Ok(()),
            observed_modes: Vec::new(),
            observed_initial: Vec::new(),
            observed_programs: Vec::new(),
            observed_preload: Vec::new(),
            executed: Vec::new(),
        };

        let result = coordinator.coordinate_search_dialog(
            InterpreterSearchMode::Replace,
            &mut program,
            &mut host,
        );

        assert_eq!(result, Ok(InterpreterSearchOutcome::AcceptedEmpty));
        assert_eq!(coordinator.retained().replacement_text, "replacement");
        assert_eq!(coordinator.retained().replacement_history.len(), 10);
        assert!(host.executed.is_empty());
        assert_eq!(program.text(), "unchanged\n");
    }

    #[test]
    fn fun_017f2f00_keeps_accepted_state_when_search_fails() {
        let mut coordinator = InterpreterSearchCoordinator::default();
        let mut program = text_editor::Content::with_text("unchanged");
        let accepted = InterpreterSearchValues {
            search_text: "needle".to_owned(),
            direction: InterpreterSearchDirection::Backward,
            ..InterpreterSearchValues::default()
        };
        let mut host = SearchDialogHost {
            dialog_result: Some(Ok(InterpreterSearchDialogResult::Accepted(accepted))),
            execute_result: Err("search failed"),
            observed_modes: Vec::new(),
            observed_initial: Vec::new(),
            observed_programs: Vec::new(),
            observed_preload: Vec::new(),
            executed: Vec::new(),
        };

        let result = coordinator.coordinate_search_dialog(
            InterpreterSearchMode::Find,
            &mut program,
            &mut host,
        );

        assert_eq!(result, Err("search failed"));
        assert_eq!(coordinator.retained().search_text, "needle");
        assert_eq!(
            coordinator.retained().direction,
            InterpreterSearchDirection::Backward
        );
        assert_eq!(
            coordinator.retained().origin,
            InterpreterSearchOrigin::EntireScope
        );
        assert_eq!(host.executed.len(), 1);
    }

    #[test]
    fn fun_017f32c0_no_forward_match_notifies_and_collapses_at_selection_end() {
        let mut program = text_editor::Content::with_text("selected");
        program.perform(text_editor::Action::SelectAll);
        let request = InterpreterSearchRequest {
            mode: InterpreterSearchMode::Find,
            values: InterpreterSearchValues {
                search_text: "missing".to_owned(),
                case_matching: InterpreterCaseMatching::Sensitive,
                word_matching: InterpreterWordMatching::Whole,
                origin: InterpreterSearchOrigin::Caret,
                selection: InterpreterSearchSelection::SelectionOnly,
                ..InterpreterSearchValues::default()
            },
        };
        let mut host = EditorSearchHost {
            result: Ok(0),
            requests: Vec::new(),
            notifications: 0,
        };

        let result = execute_interpreter_search(&mut program, &request, &mut host);

        assert_eq!(result, Ok(InterpreterSearchExecution::NoMatch));
        assert_eq!(host.requests, [request]);
        assert_eq!(host.notifications, 1);
        assert_eq!(program.selection(), None);
        assert_eq!(program.cursor_position(), (0, 8));
        assert_eq!(program.text(), "selected\n");
    }

    #[test]
    fn fun_017f32c0_no_backward_match_collapses_at_selection_beginning() {
        let mut program = text_editor::Content::with_text("selected");
        program.perform(text_editor::Action::SelectAll);
        let request = InterpreterSearchRequest {
            mode: InterpreterSearchMode::Replace,
            values: InterpreterSearchValues {
                search_text: "missing".to_owned(),
                replacement_text: "replacement".to_owned(),
                direction: InterpreterSearchDirection::Backward,
                ..InterpreterSearchValues::default()
            },
        };
        let mut host = EditorSearchHost {
            result: Ok(0),
            requests: Vec::new(),
            notifications: 0,
        };

        let result = execute_interpreter_search(&mut program, &request, &mut host);

        assert_eq!(result, Ok(InterpreterSearchExecution::NoMatch));
        assert_eq!(host.requests, [request]);
        assert_eq!(host.notifications, 1);
        assert_eq!(program.selection(), None);
        assert_eq!(program.cursor_position(), (0, 0));
    }

    #[test]
    fn fun_017f32c0_match_preserves_engine_selection_without_notification() {
        let mut program = text_editor::Content::with_text("matched");
        program.perform(text_editor::Action::SelectAll);
        let selection = program.selection();
        let cursor = program.cursor_position();
        let request = InterpreterSearchRequest {
            mode: InterpreterSearchMode::Find,
            values: InterpreterSearchValues {
                search_text: "matched".to_owned(),
                ..InterpreterSearchValues::default()
            },
        };
        let mut host = EditorSearchHost {
            result: Ok(2),
            requests: Vec::new(),
            notifications: 0,
        };

        let result = execute_interpreter_search(&mut program, &request, &mut host);

        assert_eq!(result, Ok(InterpreterSearchExecution::Matches(2)));
        assert_eq!(host.notifications, 0);
        assert_eq!(program.selection(), selection);
        assert_eq!(program.cursor_position(), cursor);
    }

    #[test]
    fn fun_017f32c0_search_error_has_no_local_recovery() {
        let mut program = text_editor::Content::with_text("unchanged");
        program.perform(text_editor::Action::SelectAll);
        let selection = program.selection();
        let request = InterpreterSearchRequest {
            mode: InterpreterSearchMode::Find,
            values: InterpreterSearchValues {
                search_text: "needle".to_owned(),
                ..InterpreterSearchValues::default()
            },
        };
        let mut host = EditorSearchHost {
            result: Err("engine missing"),
            requests: Vec::new(),
            notifications: 0,
        };

        let result = execute_interpreter_search(&mut program, &request, &mut host);

        assert_eq!(result, Err("engine missing"));
        assert_eq!(host.notifications, 0);
        assert_eq!(program.selection(), selection);
    }

    #[test]
    fn fun_017efab0_applies_dialog_commit_renames_symbol_and_rebuilds_text() {
        let mut window = window_with_symbols(&["pi", "i", "answer"]);
        window
            .interpreter_configuration
            .numerical
            .numerical
            .imaginary = ImaginarySymbol::I;
        window.symbol_list_text = "stale".to_owned();
        let mut host = NumericalHost {
            messages: vec![
                NumericalFormatMessage::ImaginarySelected(ImaginarySymbol::J),
                NumericalFormatMessage::AllowComponentValuesChanged(true),
                NumericalFormatMessage::Accept,
            ],
            initial_imaginary: Vec::new(),
            result: Ok(()),
        };

        let result = window.numerical_format_menu_selected(&mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(host.initial_imaginary, [ImaginarySymbol::I]);
        assert_eq!(
            window
                .interpreter_configuration
                .numerical()
                .numerical
                .imaginary,
            ImaginarySymbol::J
        );
        assert!(window.component_value_permission.is_allowed());
        assert_eq!(symbol_names(&window), ["pi", "j", "answer"]);
        assert_eq!(window.symbol_list_text, "pi\nj\nanswer");
    }

    #[test]
    fn fun_017efab0_cancel_keeps_settings_and_still_rebuilds_symbol_text() {
        let mut window = window_with_symbols(&["pi", "j"]);
        window.symbol_list_text = "stale".to_owned();
        let initial = window.interpreter_configuration.numerical();
        let mut host = NumericalHost {
            messages: vec![NumericalFormatMessage::Cancel],
            initial_imaginary: Vec::new(),
            result: Ok(()),
        };

        let result = window.numerical_format_menu_selected(&mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(window.interpreter_configuration.numerical(), initial);
        assert!(!window.component_value_permission.is_allowed());
        assert_eq!(symbol_names(&window), ["pi", "j"]);
        assert_eq!(window.symbol_list_text, "pi\nj");
    }

    #[test]
    fn fun_017efab0_modal_error_skips_apply_and_symbol_refresh() {
        let mut window = window_with_symbols(&["i"]);
        window
            .interpreter_configuration
            .numerical
            .numerical
            .imaginary = ImaginarySymbol::I;
        window.symbol_list_text = "stale".to_owned();
        let initial = window.interpreter_configuration.numerical();
        let mut host = NumericalHost {
            messages: Vec::new(),
            initial_imaginary: Vec::new(),
            result: Err("modal failed"),
        };

        let result = window.numerical_format_menu_selected(&mut host);

        assert_eq!(result, Err("modal failed"));
        assert_eq!(window.interpreter_configuration.numerical(), initial);
        assert_eq!(symbol_names(&window), ["i"]);
        assert_eq!(window.symbol_list_text, "stale");
    }

    #[test]
    fn fun_017efb70_applies_validated_preferences_without_dirtying_source() {
        let mut window = Window::default();
        window.interpreter_configuration.drawing = DrawingOwner {
            active_type: 2,
            preferences: DrawingPreferences {
                drawing_type: 2,
                parameter_name: "frequency".to_owned(),
                ..DrawingPreferences::default()
            },
        };
        let mut host = DrawingHost {
            messages: vec![
                DrawingMessage::TextChanged(
                    DrawingEditField::ParameterName,
                    "new frequency".to_owned(),
                ),
                DrawingMessage::Accept,
            ],
            result: Ok(()),
        };

        let result = window.drawing_preferences_menu_selected(&mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(
            window
                .interpreter_configuration
                .drawing()
                .preferences
                .parameter_name,
            "new frequency"
        );
        assert!(!window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017efb70_cancel_keeps_preferences_but_retains_default_type_side_effect() {
        let mut window = Window::default();
        let initial_preferences = DrawingPreferences {
            drawing_type: 2,
            parameter_name: "frequency".to_owned(),
            ..DrawingPreferences::default()
        };
        window.interpreter_configuration.drawing = DrawingOwner {
            active_type: 2,
            preferences: initial_preferences.clone(),
        };
        let mut host = DrawingHost {
            messages: vec![DrawingMessage::ResetDefaults, DrawingMessage::Cancel],
            result: Ok(()),
        };

        let result = window.drawing_preferences_menu_selected(&mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(window.interpreter_configuration.drawing().active_type, 0);
        assert_eq!(
            window.interpreter_configuration.drawing().preferences,
            initial_preferences
        );
        assert!(!window.document_modified);
    }

    #[test]
    fn fun_017efb70_keeps_completed_dialog_side_effect_before_error() {
        let mut window = Window::default();
        window.interpreter_configuration.drawing.active_type = 2;
        let initial_preferences = window.interpreter_configuration.drawing.preferences.clone();
        let mut host = DrawingHost {
            messages: vec![DrawingMessage::ResetDefaults],
            result: Err("modal failed"),
        };

        let result = window.drawing_preferences_menu_selected(&mut host);

        assert_eq!(result, Err("modal failed"));
        assert_eq!(window.interpreter_configuration.drawing().active_type, 0);
        assert_eq!(
            window.interpreter_configuration.drawing().preferences,
            initial_preferences
        );
    }

    #[test]
    fn fun_017efbc0_first_open_creates_binds_copies_and_shows_the_viewer() {
        let mut window = Window {
            interpreter_generation: 7,
            symbol_list_text: "pi\nj\nanswer".to_owned(),
            ..Window::default()
        };
        let mut host = SymbolHost {
            exists: false,
            create_calls: 0,
            fallback_calls: 0,
            bindings: Vec::new(),
            show_calls: 0,
            create_result: Ok(()),
            fallback_result: Ok("empty".to_owned()),
            bind_result: Ok(()),
            show_result: Ok(()),
        };

        let result = window.symbol_table_menu_selected(&mut host);

        assert_eq!(result, Ok(()));
        assert!(host.exists);
        assert_eq!(host.create_calls, 1);
        assert_eq!(host.fallback_calls, 0);
        assert_eq!(host.bindings, [(7, "pi\nj\nanswer".to_owned())]);
        assert_eq!(host.show_calls, 1);
        assert!(!window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017efbc0_repeat_open_only_shows_the_existing_viewer() {
        let mut window = Window {
            interpreter_generation: 8,
            symbol_list_text: "new runtime text".to_owned(),
            ..Window::default()
        };
        let mut host = SymbolHost {
            exists: true,
            create_calls: 0,
            fallback_calls: 0,
            bindings: Vec::new(),
            show_calls: 0,
            create_result: Ok(()),
            fallback_result: Ok("empty".to_owned()),
            bind_result: Ok(()),
            show_result: Ok(()),
        };

        let result = window.symbol_table_menu_selected(&mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(host.create_calls, 0);
        assert_eq!(host.fallback_calls, 0);
        assert!(host.bindings.is_empty());
        assert_eq!(host.show_calls, 1);
    }

    #[test]
    fn fun_017efbc0_empty_display_list_adds_localized_fallback_before_binding() {
        let mut window = Window {
            interpreter_generation: 9,
            ..Window::default()
        };
        let mut host = SymbolHost {
            exists: false,
            create_calls: 0,
            fallback_calls: 0,
            bindings: Vec::new(),
            show_calls: 0,
            create_result: Ok(()),
            fallback_result: Ok("No symbols available".to_owned()),
            bind_result: Ok(()),
            show_result: Ok(()),
        };

        let result = window.symbol_table_menu_selected(&mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(window.symbol_list_text, "No symbols available");
        assert_eq!(host.fallback_calls, 1);
        assert_eq!(host.bindings, [(9, "No symbols available".to_owned())]);
        assert_eq!(host.show_calls, 1);
    }

    #[test]
    fn fun_017efbc0_binding_error_keeps_registered_viewer_and_fallback() {
        let mut window = Window {
            interpreter_generation: 10,
            ..Window::default()
        };
        let mut host = SymbolHost {
            exists: false,
            create_calls: 0,
            fallback_calls: 0,
            bindings: Vec::new(),
            show_calls: 0,
            create_result: Ok(()),
            fallback_result: Ok("No symbols".to_owned()),
            bind_result: Err("binding failed"),
            show_result: Ok(()),
        };

        let result = window.symbol_table_menu_selected(&mut host);

        assert_eq!(result, Err("binding failed"));
        assert!(host.exists);
        assert_eq!(window.symbol_list_text, "No symbols");
        assert_eq!(host.show_calls, 0);

        host.bind_result = Ok(());
        let repeat_result = window.symbol_table_menu_selected(&mut host);

        assert_eq!(repeat_result, Ok(()));
        assert_eq!(host.create_calls, 1);
        assert_eq!(host.fallback_calls, 1);
        assert_eq!(host.bindings.len(), 1);
        assert_eq!(host.show_calls, 1);
    }

    #[test]
    fn fun_017f17c0_reports_each_handled_engine_failure_and_runs_cleanup() {
        for outcome in [
            InterpreterRunOutcome::FirstParserFailed("first parser error".to_owned()),
            InterpreterRunOutcome::SecondParserFailed("second parser error".to_owned()),
            InterpreterRunOutcome::RuntimeFailed("runtime error".to_owned()),
        ] {
            let expected_diagnostic = match &outcome {
                InterpreterRunOutcome::FirstParserFailed(diagnostic)
                | InterpreterRunOutcome::SecondParserFailed(diagnostic)
                | InterpreterRunOutcome::RuntimeFailed(diagnostic) => diagnostic.clone(),
                InterpreterRunOutcome::Completed | InterpreterRunOutcome::Cancelled => {
                    unreachable!("the test contains only failure outcomes")
                }
            };
            let mut window = Window {
                program: text_editor::Content::with_text("first line\nsecond line"),
                document_modified: true,
                interpreter_configuration: InterpreterConfiguration::new(vec![4, 8, 15, 16]),
                ..Window::default()
            };
            window
                .program
                .perform(text_editor::Action::Move(text_editor::Motion::DocumentEnd));
            let mut host = RunHost {
                observed_modes: Vec::new(),
                observed_source: Vec::new(),
                observed_configurations: Vec::new(),
                observed_saved_lines: Vec::new(),
                result: Ok(InterpreterRunReport {
                    outcome,
                    cursor_policy: InterpreterCursorPolicy::SavedLine,
                }),
            };

            let result = window.compile_and_execute(&mut host, InterpreterRunMode::Normal);

            assert_eq!(result, Ok(()));
            assert_eq!(host.observed_source, ["first line\nsecond line\n"]);
            assert_eq!(host.observed_configurations[0].values(), [4, 8, 15, 16]);
            assert_eq!(host.observed_saved_lines, [1]);
            assert_eq!(window.program.cursor_position(), (1, 0));
            assert!(window.status.contains(&expected_diagnostic));
            assert!(!window.progress_timer_enabled());
            assert!(!window.progress_feedback_enabled());
            assert!(window.document_modified);
        }
    }

    #[test]
    fn fun_017f17c0_cooperative_cancel_uses_the_handled_success_cleanup_path() {
        let mut window = Window {
            program: text_editor::Content::with_text("first line\nsecond line"),
            document_modified: true,
            ..Window::default()
        };
        let mut host = RunHost {
            observed_modes: Vec::new(),
            observed_source: Vec::new(),
            observed_configurations: Vec::new(),
            observed_saved_lines: Vec::new(),
            result: Ok(InterpreterRunReport {
                outcome: InterpreterRunOutcome::Cancelled,
                cursor_policy: InterpreterCursorPolicy::FinalLine,
            }),
        };

        let result = window.compile_and_execute(&mut host, InterpreterRunMode::Normal);

        assert_eq!(result, Ok(()));
        assert_eq!(window.program.cursor_position(), (1, 0));
        assert!(window.status.contains("Successfully compiled"));
        assert!(!window.progress_timer_enabled());
        assert!(!window.progress_feedback_enabled());
        assert!(window.document_modified);
    }

    #[test]
    fn fun_017efc30_runs_unsaved_source_then_moves_to_the_final_line_start() {
        let mut window = Window {
            program: text_editor::Content::with_text("first line\nfinal line"),
            document_modified: true,
            ..Window::default()
        };
        let mut host = RunHost {
            observed_modes: Vec::new(),
            observed_source: Vec::new(),
            observed_configurations: Vec::new(),
            observed_saved_lines: Vec::new(),
            result: Ok(completed_run(InterpreterCursorPolicy::FinalLine)),
        };

        let result = window.run_menu_selected(&mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(host.observed_modes, [InterpreterRunMode::Normal]);
        assert_eq!(host.observed_source, ["first line\nfinal line\n"]);
        assert_eq!(host.observed_saved_lines, [0]);
        assert_eq!(window.program.cursor_position(), (1, 0));
        assert_eq!(window.program.text(), "first line\nfinal line\n");
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
        assert!(!window.progress_timer_enabled());
        assert!(!window.progress_feedback_enabled());
    }

    #[test]
    fn fun_017efc30_coordinator_error_skips_the_final_line_override() {
        let mut window = Window {
            program: text_editor::Content::with_text("first line\nfinal line"),
            document_modified: true,
            ..Window::default()
        };
        window
            .program
            .perform(text_editor::Action::Move(text_editor::Motion::DocumentEnd));
        let cursor = window.program.cursor_position();
        let mut host = RunHost {
            observed_modes: Vec::new(),
            observed_source: Vec::new(),
            observed_configurations: Vec::new(),
            observed_saved_lines: Vec::new(),
            result: Err("run failed"),
        };

        let result = window.run_menu_selected(&mut host);

        assert_eq!(result, Err("run failed"));
        assert_eq!(host.observed_modes, [InterpreterRunMode::Normal]);
        assert_eq!(window.program.cursor_position(), cursor);
        assert_eq!(window.program.text(), "first line\nfinal line\n");
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
        assert!(window.progress_timer_enabled());
        assert!(!window.progress_feedback_enabled());
    }

    #[test]
    fn fun_017efdd0_runs_from_toolbar_without_a_final_line_override() {
        let mut window = Window {
            program: text_editor::Content::with_text("first line\nfinal line"),
            document_modified: true,
            ..Window::default()
        };
        window
            .program
            .perform(text_editor::Action::Move(text_editor::Motion::DocumentEnd));
        let mut host = RunHost {
            observed_modes: Vec::new(),
            observed_source: Vec::new(),
            observed_configurations: Vec::new(),
            observed_saved_lines: Vec::new(),
            result: Ok(completed_run(InterpreterCursorPolicy::SavedLine)),
        };

        let result = window.run_toolbar_selected(&mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(host.observed_modes, [InterpreterRunMode::Normal]);
        assert_eq!(host.observed_source, ["first line\nfinal line\n"]);
        assert_eq!(window.program.cursor_position(), (1, 0));
        assert_eq!(window.program.text(), "first line\nfinal line\n");
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017efd70_moves_only_the_caret_to_the_final_line_start() {
        let mut window = Window {
            program: text_editor::Content::with_text("first\nsecond\nfinal"),
            document_modified: true,
            current_file_name: "existing.ipr".to_owned(),
            ..Window::default()
        };
        window.program.perform(text_editor::Action::SelectAll);

        window.move_caret_to_final_line();

        assert_eq!(window.program.cursor_position(), (2, 0));
        assert_eq!(window.program.text(), "first\nsecond\nfinal\n");
        assert!(window.document_modified);
        assert_eq!(window.current_file_name, "existing.ipr");
        assert!(window.undo_history.is_empty());
        assert!(window.redo_history.is_empty());
    }

    #[test]
    fn fun_017efd70_keeps_the_empty_editor_at_its_first_coordinate() {
        let mut window = Window::default();

        window.move_caret_to_final_line();

        assert_eq!(window.program.cursor_position(), (0, 0));
        assert_eq!(window.program.text(), "\n");
        assert!(!window.document_modified);
    }

    #[test]
    fn fun_017efc60_resolves_tina_help_and_opens_fixed_interpreter_context() {
        let window = Window {
            program: text_editor::Content::with_text("unchanged"),
            document_modified: true,
            ..Window::default()
        };
        let mut host = HelpHost {
            resolved_path: std::path::PathBuf::from("C:/TINA/TINA_DE.CHM"),
            resolution_requests: Vec::new(),
            open_requests: Vec::new(),
        };

        window.help_menu_selected(std::path::Path::new("C:/TINA"), &mut host);

        assert_eq!(
            host.resolution_requests,
            [std::path::PathBuf::from("C:/TINA").join("TINA.CHM")]
        );
        assert_eq!(
            host.open_requests,
            [(std::path::PathBuf::from("C:/TINA/TINA_DE.CHM"), 5001)]
        );
        assert_eq!(window.program.text(), "unchanged\n");
        assert_eq!(window.program.cursor_position(), (0, 0));
        assert!(window.document_modified);
        assert!(window.undo_history.is_empty());
    }

    #[test]
    fn fun_017efc60_uses_the_base_file_returned_by_the_shared_resolver() {
        let window = Window::default();
        let base_path = std::path::PathBuf::from("install").join("TINA.CHM");
        let mut host = HelpHost {
            resolved_path: base_path.clone(),
            resolution_requests: Vec::new(),
            open_requests: Vec::new(),
        };

        window.help_menu_selected(std::path::Path::new("install"), &mut host);

        assert_eq!(host.resolution_requests, std::slice::from_ref(&base_path));
        assert_eq!(host.open_requests, [(base_path, 5001)]);
    }

    #[test]
    fn fun_017ef290_success_loads_and_commits_clean_ui_state() {
        let mut window = Window {
            document_modified: true,
            status_detail: "Old detail".to_owned(),
            ..Window::default()
        };
        let selected_path = "C:/examples/demo.ipr";
        let mut host = open_host(Some(selected_path));

        let outcome = window.open_document(&mut host);

        assert_eq!(outcome, Ok(OpenDocumentOutcome::Opened));
        assert_eq!(window.program.text(), "loaded program\n");
        assert_eq!(window.interpreter_configuration.values(), [99]);
        assert!(!window.document_modified);
        assert_eq!(window.current_file_name, selected_path);
        assert_eq!(window.caption, "Interpreter-<demo.ipr>");
        assert_eq!(
            window.status,
            "Line: 1 Col: 1    Successfully compiled    Editing commands"
        );
        assert!(window.status_detail.is_empty());
        assert_eq!(
            window.last_open_directory,
            Some(std::path::PathBuf::from("C:/examples"))
        );
        assert_eq!(host.loaded_paths, [std::path::PathBuf::from(selected_path)]);
    }

    #[test]
    fn fun_017ef290_load_error_keeps_selected_path_without_later_updates() {
        let mut window = Window {
            program: text_editor::Content::with_text("old program"),
            document_modified: true,
            current_file_name: "old.ipr".to_owned(),
            caption: "Interpreter-<old.ipr>".to_owned(),
            status: "Old status".to_owned(),
            last_open_directory: Some(std::path::PathBuf::from("C:/old")),
            ..Window::default()
        };
        let selected_path = "C:/broken/bad.ipr";
        let mut host = open_host(Some(selected_path));
        host.load_error = Some("read failed");

        let outcome = window.open_document(&mut host);

        assert_eq!(outcome, Err("read failed"));
        assert_eq!(window.current_file_name, selected_path);
        assert_eq!(window.program.text(), "old program\n");
        assert!(window.document_modified);
        assert_eq!(window.caption, "Interpreter-<old.ipr>");
        assert_eq!(window.status, "Old status");
        assert_eq!(
            window.last_open_directory,
            Some(std::path::PathBuf::from("C:/old"))
        );
    }

    #[test]
    fn fun_017ef4d0_read_error_preserves_editor_and_configuration() {
        let folder = temporary_folder("ipr_read_error");
        let path = folder.join("missing.ipr");
        let mut program = text_editor::Content::with_text("old program");
        let mut configuration = InterpreterConfiguration::new(vec![7]);
        let mut decoder = RecordingDecoder {
            result: Ok("unused".to_owned()),
            sources: Vec::new(),
            configuration_values: vec![8],
        };

        let result =
            load_ipr_document_from_utf8(&path, &mut program, &mut configuration, &mut decoder);

        assert!(matches!(result, Err(IprLoadError::Read(_))));
        assert_eq!(program.text(), "old program\n");
        assert_eq!(configuration.values(), [7]);
        assert!(decoder.sources.is_empty());
        std::fs::remove_dir_all(folder).expect("temporary cleanup");
    }

    #[test]
    fn fun_017ef4d0_reads_utf8_then_assigns_decoded_program() {
        let folder = temporary_folder("ipr_success");
        let path = folder.join("program.ipr");
        std::fs::write(&path, "\u{feff}gain = α\n@ Configuration begin\n42")
            .expect("UTF-8 fixture");
        let mut program = text_editor::Content::with_text("old program");
        let mut configuration = InterpreterConfiguration::new(vec![7]);
        let mut decoder = RecordingDecoder {
            result: Ok("gain = α".to_owned()),
            sources: Vec::new(),
            configuration_values: vec![42],
        };

        let result =
            load_ipr_document_from_utf8(&path, &mut program, &mut configuration, &mut decoder);

        assert!(result.is_ok());
        assert_eq!(decoder.sources, ["gain = α\n@ Configuration begin\n42"]);
        assert_eq!(program.text(), "gain = α\n");
        assert_eq!(configuration.values(), [42]);
        std::fs::remove_dir_all(folder).expect("temporary cleanup");
    }

    #[test]
    fn fun_017ef4d0_decode_error_keeps_empty_editor_and_partial_configuration() {
        let folder = temporary_folder("ipr_decode_error");
        let path = folder.join("program.ipr");
        std::fs::write(&path, "old source").expect("UTF-8 fixture");
        let mut program = text_editor::Content::with_text("old program");
        let mut configuration = InterpreterConfiguration::new(vec![7]);
        let mut decoder = RecordingDecoder {
            result: Err("invalid integer"),
            sources: Vec::new(),
            configuration_values: vec![1, 2],
        };

        let result =
            load_ipr_document_from_utf8(&path, &mut program, &mut configuration, &mut decoder);

        assert!(matches!(
            result,
            Err(IprLoadError::Decode("invalid integer"))
        ));
        assert_eq!(program.text(), "\n");
        assert_eq!(configuration.values(), [1, 2]);
        std::fs::remove_dir_all(folder).expect("temporary cleanup");
    }

    #[test]
    fn fun_017ef620_passes_editor_lines_and_configuration_to_serializer() {
        let window = Window {
            program: text_editor::Content::with_text("alpha\n\nbeta"),
            interpreter_configuration: InterpreterConfiguration::new(vec![3, 5, 8]),
            document_modified: true,
            current_file_name: "C:/work/demo.ipr".to_owned(),
            caption: "Interpreter-<demo.ipr>".to_owned(),
            ..Window::default()
        };
        let path = std::path::Path::new("C:/work/demo.ipr");
        let mut serializer = RecordingSerializer::default();

        let result = window.write_ipr_document(path, &mut serializer);

        assert_eq!(result, Ok(()));
        assert_eq!(serializer.paths, [path]);
        assert_eq!(serializer.program_lines, [["alpha", "", "beta"]]);
        assert_eq!(serializer.configurations[0].values(), [3, 5, 8]);
        assert_eq!(serializer.include_configuration, [true]);
        assert!(window.document_modified);
        assert_eq!(window.current_file_name, "C:/work/demo.ipr");
        assert_eq!(window.caption, "Interpreter-<demo.ipr>");
    }

    #[test]
    fn fun_017f2850_replaces_target_with_editor_lines_then_appends_configuration() {
        let window = Window {
            program: text_editor::Content::with_text("alpha\n\nbeta"),
            interpreter_configuration: InterpreterConfiguration::new(vec![3, 5, 8]),
            document_modified: true,
            ..Window::default()
        };
        let mut target = vec!["old component text".to_owned()];
        let mut appender = RecordingConfigurationAppender {
            lines: vec![
                "@ Configuration begin".to_owned(),
                "configuration value".to_owned(),
                ".@ Configuration end".to_owned(),
            ],
            ..RecordingConfigurationAppender::default()
        };

        let result = window.serialize_component_text(&mut target, &mut appender);

        assert_eq!(result, Ok(()));
        assert_eq!(
            target,
            [
                "alpha",
                "",
                "beta",
                "@ Configuration begin",
                "configuration value",
                ".@ Configuration end",
            ]
        );
        assert_eq!(appender.configurations[0].values(), [3, 5, 8]);
        assert_eq!(window.program.text(), "alpha\n\nbeta\n");
        assert!(window.document_modified);
    }

    #[test]
    fn fun_017f2850_keeps_source_and_partial_configuration_after_append_error() {
        let window = Window {
            program: text_editor::Content::with_text("live source"),
            document_modified: true,
            ..Window::default()
        };
        let mut target = vec!["old text".to_owned()];
        let mut appender = RecordingConfigurationAppender {
            lines: vec!["@ Configuration begin".to_owned()],
            error: Some("configuration failed"),
            ..RecordingConfigurationAppender::default()
        };

        let result = window.serialize_component_text(&mut target, &mut appender);

        assert_eq!(result, Err("configuration failed"));
        assert_eq!(target, ["live source", "@ Configuration begin"]);
        assert_eq!(window.program.text(), "live source\n");
        assert!(window.document_modified);
    }

    #[test]
    fn fun_017f28b0_updates_component_then_schematic_menu_and_close_in_order() {
        let font = InterpreterEditorFont {
            family: "Iosevka".to_owned(),
            ..InterpreterEditorFont::default()
        };
        let mut window = Window {
            program: text_editor::Content::with_text("line one\nline two"),
            interpreter_configuration: InterpreterConfiguration::new(vec![2, 7, 1, 8]),
            editor_font: font.clone(),
            document_modified: true,
            ..Window::default()
        };
        window.begin_component_edit(true);
        let mut host = ComponentUpdateHost {
            actions: Vec::new(),
            source_lines: Vec::new(),
            configurations: Vec::new(),
            fonts: Vec::new(),
            bounds: iced::Rectangle {
                x: 10.0,
                y: 20.0,
                width: 30.0,
                height: 40.0,
            },
            fail_on: None,
        };

        let result = window.close_and_update_component(&mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(
            host.actions,
            ["replace", "mark", "bounds", "update", "close"]
        );
        assert_eq!(host.source_lines, ["line one", "line two"]);
        assert_eq!(host.configurations[0].values(), [2, 7, 1, 8]);
        assert_eq!(host.fonts, [font]);
        assert!(!window.component_edit_active());
        assert!(!window.close_and_update_enabled());
        assert!(window.document_modified);
    }

    #[test]
    fn fun_017f28b0_false_gate_skips_only_component_copy() {
        let mut window = Window::default();
        window.begin_component_edit(false);
        let mut host = ComponentUpdateHost {
            actions: Vec::new(),
            source_lines: Vec::new(),
            configurations: Vec::new(),
            fonts: Vec::new(),
            bounds: iced::Rectangle::default(),
            fail_on: None,
        };

        let result = window.close_and_update_component(&mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(host.actions, ["mark", "bounds", "update", "close"]);
        assert!(host.source_lines.is_empty());
        assert!(!window.component_edit_active());
        assert!(!window.close_and_update_enabled());
    }

    #[test]
    fn fun_017f28b0_error_keeps_prior_component_and_mode_changes_without_rollback() {
        let mut window = Window::default();
        window.begin_component_edit(true);
        let mut host = ComponentUpdateHost {
            actions: Vec::new(),
            source_lines: Vec::new(),
            configurations: Vec::new(),
            fonts: Vec::new(),
            bounds: iced::Rectangle::default(),
            fail_on: Some("mark"),
        };

        let result = window.close_and_update_component(&mut host);

        assert_eq!(result, Err("mark"));
        assert_eq!(host.actions, ["replace", "mark"]);
        assert!(!window.component_edit_active());
        assert!(window.close_and_update_enabled());
    }

    #[test]
    fn fun_017f2a00_clears_modified_then_routes_normal_state_to_new_placement() {
        let font = InterpreterEditorFont::default();
        let mut window = Window {
            program: text_editor::Content::with_text("place me"),
            interpreter_configuration: InterpreterConfiguration::new(vec![6, 2, 6]),
            editor_font: font.clone(),
            document_modified: true,
            ..Window::default()
        };
        let mut host = ComponentUpdateHost {
            actions: Vec::new(),
            source_lines: Vec::new(),
            configurations: Vec::new(),
            fonts: Vec::new(),
            bounds: iced::Rectangle::default(),
            fail_on: None,
        };

        let result = window.place_to_schematic(&mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(host.actions, ["append", "insert", "close"]);
        assert_eq!(
            host.source_lines,
            [
                "place me",
                "@ Configuration begin",
                "configuration value",
                ".@ Configuration end",
            ]
        );
        assert_eq!(host.configurations[0].values(), [6, 2, 6]);
        assert_eq!(host.fonts, [font]);
        assert!(!window.document_modified);
    }

    #[test]
    fn fun_017f2a00_routes_close_and_update_state_to_existing_component_pipeline() {
        let mut window = Window {
            program: text_editor::Content::with_text("update me"),
            document_modified: true,
            ..Window::default()
        };
        window.begin_component_edit(true);
        let mut host = ComponentUpdateHost {
            actions: Vec::new(),
            source_lines: Vec::new(),
            configurations: Vec::new(),
            fonts: Vec::new(),
            bounds: iced::Rectangle::default(),
            fail_on: None,
        };

        let result = window.place_to_schematic(&mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(
            host.actions,
            ["replace", "mark", "bounds", "update", "close"]
        );
        assert!(!window.document_modified);
        assert!(!window.component_edit_active());
        assert!(!window.close_and_update_enabled());
    }

    #[test]
    fn fun_017f2a50_serializes_editor_inserts_subtype_one_then_requests_close() {
        let mut window = Window {
            program: text_editor::Content::with_text("first\nsecond"),
            interpreter_configuration: InterpreterConfiguration::new(vec![1, 1, 2, 3]),
            document_modified: true,
            ..Window::default()
        };
        window
            .program
            .perform(text_editor::Action::Move(text_editor::Motion::DocumentEnd));
        let mut host = ComponentUpdateHost {
            actions: Vec::new(),
            source_lines: Vec::new(),
            configurations: Vec::new(),
            fonts: Vec::new(),
            bounds: iced::Rectangle::default(),
            fail_on: None,
        };

        let result = window.place_new_schematic_component(&mut host);

        assert_eq!(result, Ok(()));
        assert_eq!(host.actions, ["append", "insert", "close"]);
        assert_eq!(host.configurations[0].values(), [1, 1, 2, 3]);
        assert_eq!(window.program.text(), host.source_lines.join("\n") + "\n");
        assert_eq!(window.program.cursor_position(), (0, 0));
        assert!(!window.document_modified);
    }

    #[test]
    fn fun_017f2a50_insert_error_keeps_serialized_clean_editor_and_skips_close() {
        let mut window = Window {
            program: text_editor::Content::with_text("source"),
            document_modified: true,
            ..Window::default()
        };
        let mut host = ComponentUpdateHost {
            actions: Vec::new(),
            source_lines: Vec::new(),
            configurations: Vec::new(),
            fonts: Vec::new(),
            bounds: iced::Rectangle::default(),
            fail_on: Some("insert"),
        };

        let result = window.place_new_schematic_component(&mut host);

        assert_eq!(result, Err("insert"));
        assert_eq!(host.actions, ["append", "insert"]);
        assert_eq!(window.program.text(), host.source_lines.join("\n") + "\n");
        assert!(!window.document_modified);
    }

    #[test]
    fn fun_017f2a50_configuration_error_preserves_live_editor_and_modified_state() {
        let mut window = Window {
            program: text_editor::Content::with_text("source"),
            document_modified: true,
            ..Window::default()
        };
        let mut host = ComponentUpdateHost {
            actions: Vec::new(),
            source_lines: Vec::new(),
            configurations: Vec::new(),
            fonts: Vec::new(),
            bounds: iced::Rectangle::default(),
            fail_on: Some("append"),
        };

        let result = window.place_new_schematic_component(&mut host);

        assert_eq!(result, Err("append"));
        assert_eq!(host.actions, ["append"]);
        assert_eq!(window.program.text(), "source\n");
        assert!(window.document_modified);
    }

    #[test]
    fn fun_017ef620_propagates_write_error_without_clearing_modified() {
        let window = Window {
            program: text_editor::Content::with_text("source"),
            document_modified: true,
            ..Window::default()
        };
        let mut serializer = RecordingSerializer {
            error: Some("disk full"),
            ..RecordingSerializer::default()
        };

        let result =
            window.write_ipr_document(std::path::Path::new("C:/work/demo.ipr"), &mut serializer);

        assert_eq!(result, Err("disk full"));
        assert!(window.document_modified);
        assert_eq!(window.program.text(), "source\n");
    }

    #[test]
    fn fun_017ef6c0_routes_unnamed_document_to_void_save_as() {
        let mut window = Window {
            document_modified: true,
            ..Window::default()
        };
        let mut serializer = RecordingSerializer::default();
        let mut save_as = RecordingSaveAs::default();

        let result = window.save_document(&mut serializer, &mut save_as);

        assert_eq!(result, Ok(()));
        assert_eq!(save_as.calls, 1);
        assert!(serializer.paths.is_empty());
        assert!(window.document_modified);
        assert_eq!(window.current_file_name, "noname.ipr");
    }

    #[test]
    fn fun_017ef6c0_writes_named_document_then_clears_modified() {
        let mut window = Window {
            program: text_editor::Content::with_text("source"),
            document_modified: true,
            current_file_name: "C:/work/demo.ipr".to_owned(),
            ..Window::default()
        };
        let mut serializer = RecordingSerializer::default();
        let mut save_as = RecordingSaveAs::default();

        let result = window.save_document(&mut serializer, &mut save_as);

        assert_eq!(result, Ok(()));
        assert_eq!(serializer.paths, [std::path::Path::new("C:/work/demo.ipr")]);
        assert_eq!(save_as.calls, 0);
        assert!(!window.document_modified);
    }

    #[test]
    fn fun_017ef8e0_forwards_file_save_to_the_shared_router() {
        let mut window = Window {
            program: text_editor::Content::with_text("source"),
            document_modified: true,
            current_file_name: "C:/work/demo.ipr".to_owned(),
            ..Window::default()
        };
        let mut serializer = RecordingSerializer::default();
        let mut save_as = RecordingSaveAs::default();

        let result = window.save_menu_selected(&mut serializer, &mut save_as);

        assert_eq!(result, Ok(()));
        assert_eq!(serializer.paths, [std::path::Path::new("C:/work/demo.ipr")]);
        assert_eq!(save_as.calls, 0);
        assert!(!window.document_modified);
    }

    #[test]
    fn fun_017efd60_forwards_toolbar_save_to_the_shared_router() {
        let mut window = Window {
            program: text_editor::Content::with_text("toolbar source"),
            document_modified: true,
            current_file_name: "C:/work/toolbar.ipr".to_owned(),
            ..Window::default()
        };
        let mut serializer = RecordingSerializer::default();
        let mut save_as = RecordingSaveAs::default();

        let result = window.save_toolbar_selected(&mut serializer, &mut save_as);

        assert_eq!(result, Ok(()));
        assert_eq!(
            serializer.paths,
            [std::path::Path::new("C:/work/toolbar.ipr")]
        );
        assert_eq!(save_as.calls, 0);
        assert!(!window.document_modified);
    }

    #[test]
    fn fun_017ef6c0_write_error_keeps_named_document_modified() {
        let mut window = Window {
            document_modified: true,
            current_file_name: "C:/work/demo.ipr".to_owned(),
            ..Window::default()
        };
        let mut serializer = RecordingSerializer {
            error: Some("disk full"),
            ..RecordingSerializer::default()
        };
        let mut save_as = RecordingSaveAs::default();

        let result = window.save_document(&mut serializer, &mut save_as);

        assert_eq!(result, Err("disk full"));
        assert!(window.document_modified);
        assert_eq!(save_as.calls, 0);
    }

    #[test]
    fn fun_017ef730_cancel_preserves_form_and_disk_state() {
        let mut window = Window {
            document_modified: true,
            current_file_name: "C:/Work/Existing.IPR".to_owned(),
            caption: "Interpreter-<Existing.IPR>".to_owned(),
            ..Window::default()
        };
        let mut dialog = RecordingSaveDialog {
            selection: Ok(None),
            proposed_names: Vec::new(),
        };
        let mut serializer = RecordingSerializer::default();

        let result = window.save_document_as(&mut dialog, &mut serializer);

        assert_eq!(result, Ok(()));
        assert_eq!(dialog.proposed_names, ["Existing.IPR"]);
        assert!(serializer.paths.is_empty());
        assert_eq!(window.current_file_name, "C:/Work/Existing.IPR");
        assert_eq!(window.caption, "Interpreter-<Existing.IPR>");
        assert!(window.document_modified);
    }

    #[test]
    fn fun_017ef8f0_forwards_file_save_as_to_the_shared_coordinator() {
        let mut window = Window {
            document_modified: true,
            current_file_name: "C:/Work/Existing.IPR".to_owned(),
            caption: "Interpreter-<Existing.IPR>".to_owned(),
            ..Window::default()
        };
        let mut dialog = RecordingSaveDialog {
            selection: Ok(None),
            proposed_names: Vec::new(),
        };
        let mut serializer = RecordingSerializer::default();

        let result = window.save_as_menu_selected(&mut dialog, &mut serializer);

        assert_eq!(result, Ok(()));
        assert_eq!(dialog.proposed_names, ["Existing.IPR"]);
        assert!(serializer.paths.is_empty());
        assert_eq!(window.current_file_name, "C:/Work/Existing.IPR");
        assert!(window.document_modified);
    }

    #[test]
    fn fun_017ef730_accept_lowercases_path_writes_and_clears_modified() {
        let mut window = Window {
            program: text_editor::Content::with_text("source"),
            document_modified: true,
            current_file_name: "noname.ipr".to_owned(),
            ..Window::default()
        };
        let mut dialog = RecordingSaveDialog {
            selection: Ok(Some(std::path::PathBuf::from("C:/Work/MyFILE.IPR"))),
            proposed_names: Vec::new(),
        };
        let mut serializer = RecordingSerializer::default();

        let result = window.save_document_as(&mut dialog, &mut serializer);

        assert_eq!(result, Ok(()));
        assert_eq!(dialog.proposed_names, ["noname.ipr"]);
        assert_eq!(window.current_file_name, "c:/work/myfile.ipr");
        assert_eq!(window.caption, "Interpreter-<myfile.ipr>");
        assert_eq!(
            serializer.paths,
            [std::path::Path::new("c:/work/myfile.ipr")]
        );
        assert!(!window.document_modified);
    }

    #[test]
    fn fun_017ef730_write_error_keeps_new_path_caption_and_modified_state() {
        let mut window = Window {
            document_modified: true,
            current_file_name: "old.ipr".to_owned(),
            caption: "Interpreter-<old.ipr>".to_owned(),
            ..Window::default()
        };
        let mut dialog = RecordingSaveDialog {
            selection: Ok(Some(std::path::PathBuf::from("D:/NEW/Target.IPR"))),
            proposed_names: Vec::new(),
        };
        let mut serializer = RecordingSerializer {
            error: Some("disk full"),
            ..RecordingSerializer::default()
        };

        let result = window.save_document_as(&mut dialog, &mut serializer);

        assert_eq!(result, Err("disk full"));
        assert_eq!(window.current_file_name, "d:/new/target.ipr");
        assert_eq!(window.caption, "Interpreter-<target.ipr>");
        assert!(window.document_modified);
    }
}
