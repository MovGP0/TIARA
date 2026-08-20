use std::fmt;
use std::fs;
use std::io;
use std::ops::Range;
use std::path::{Path, PathBuf};
use std::time::Duration;

pub const SHELL_PROMPT: &str = ">>>  ";
pub const HIDE_MARKER: &str = "# Hide from here";
pub const RESULT_IMAGE_NAME: &str = "PyImage.png";
pub const RUN_TIMEOUT: Duration = Duration::from_secs(60);

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum PythonMode {
    #[default]
    Normal,
    NodalSolver,
    NodalResistance,
}

impl PythonMode {
    #[must_use]
    pub const fn extension(self) -> &'static str {
        match self {
            Self::Normal => ".py",
            Self::NodalSolver | Self::NodalResistance => ".csv",
        }
    }

    #[must_use]
    pub const fn file_filter(self) -> (&'static str, &'static str) {
        match self {
            Self::Normal => ("Python file", "py"),
            Self::NodalSolver | Self::NodalResistance => ("CSV file", "csv"),
        }
    }

    #[must_use]
    pub const fn sample_path(self) -> &'static str {
        match self {
            Self::Normal => "programs/bubblesort.py",
            Self::NodalSolver | Self::NodalResistance => "nodal/test_1.csv",
        }
    }

    #[must_use]
    pub const fn application_controls_enabled(self) -> bool {
        !matches!(self, Self::Normal)
    }
}

impl fmt::Display for PythonMode {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Normal => formatter.write_str("Normal"),
            Self::NodalSolver => formatter.write_str("Nodal solver"),
            Self::NodalResistance => formatter.write_str("Nodal resistance"),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Document {
    pub text: String,
    pub current_path: PathBuf,
    pub baseline_path: Option<PathBuf>,
    pub modified: bool,
}

impl Default for Document {
    fn default() -> Self {
        Self {
            text: String::new(),
            current_path: PathBuf::from("noname.py"),
            baseline_path: None,
            modified: false,
        }
    }
}

impl Document {
    #[must_use]
    pub fn title(&self) -> String {
        format!("Python Shell - <{}>", self.current_path.display())
    }

    pub fn replace_from_file(&mut self, path: PathBuf, text: String) {
        self.text = text;
        self.current_path.clone_from(&path);
        self.baseline_path = Some(path);
        self.modified = false;
    }

    pub fn create_blank(&mut self, mode: PythonMode) {
        self.text.clear();
        self.current_path = PathBuf::from(format!("noname{}", mode.extension()));
        self.baseline_path = None;
        self.modified = true;
    }

    pub fn set_text(&mut self, text: String) {
        self.text = text;
        self.modified = true;
    }

    pub const fn mark_saved(&mut self) {
        self.modified = false;
    }

    pub fn accept_save_as_path(&mut self, selected_path: &Path) -> PathBuf {
        let normalized = normalize_save_path(selected_path);
        self.current_path.clone_from(&normalized);
        normalized
    }

    pub fn insert_hide_marker(&mut self, current_row: usize) {
        let mut lines = self.text.split('\n').map(str::to_owned).collect::<Vec<_>>();
        let insertion_index = current_row.min(lines.len());
        lines.insert(insertion_index, HIDE_MARKER.to_owned());
        self.text = lines.join("\n");
        self.modified = true;
    }

    #[must_use]
    pub fn save_disposition(&self) -> SaveDisposition {
        if self.current_path == Path::new("noname.py") {
            SaveDisposition::SelectPath
        } else {
            SaveDisposition::Write(self.current_path.clone())
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SaveDisposition {
    SelectPath,
    Write(PathBuf),
}

#[must_use]
pub fn normalize_save_path(path: &Path) -> PathBuf {
    PathBuf::from(path.as_os_str().to_string_lossy().to_ascii_lowercase())
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TerminalDocument {
    pub text: String,
    pub selection: Range<usize>,
    pub prompt_position: usize,
    pub input_ready: bool,
}

impl Default for TerminalDocument {
    fn default() -> Self {
        let mut terminal = Self {
            text: String::new(),
            selection: 0..0,
            prompt_position: 0,
            input_ready: false,
        };
        terminal.clear_and_restore_prompt();
        terminal
    }
}

impl TerminalDocument {
    pub fn clear_for_execution(&mut self) {
        self.text.clear();
        self.selection = 0..0;
        self.prompt_position = 0;
        self.input_ready = false;
    }

    pub fn clear_and_restore_prompt(&mut self) {
        self.text.clear();
        self.text.push_str(SHELL_PROMPT);
        self.selection = 0..0;
        self.prompt_position = self.text.len();
        self.input_ready = true;
    }

    pub fn select_all(&mut self) {
        self.selection = 0..self.text.len();
    }

    #[must_use]
    pub fn selected_text(&self) -> Option<&str> {
        if self.selection.is_empty() {
            return None;
        }

        self.text.get(self.selection.clone())
    }

    pub fn finish_execution(&mut self, outcome: &ExecutionOutcome) {
        match outcome {
            ExecutionOutcome::Completed { output, .. } => self.append_output(output),
            ExecutionOutcome::TimedOut => self.append_output("Timeout received"),
        }
        if !self.text.is_empty() && !self.text.ends_with('\n') {
            self.text.push('\n');
        }
        self.text.push_str(SHELL_PROMPT);
        self.prompt_position = self.text.len();
        self.input_ready = true;
        self.selection = 0..0;
    }

    fn append_output(&mut self, output: &str) {
        if !output.is_empty() {
            self.text.push_str(output);
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CaretPosition {
    pub row: usize,
    pub column: usize,
}

impl Default for CaretPosition {
    fn default() -> Self {
        Self { row: 1, column: 1 }
    }
}

impl CaretPosition {
    #[must_use]
    pub fn panel_text(self) -> String {
        format!("Line:{} Col:{}", self.row, self.column)
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct FontSettings {
    pub family: String,
    pub size: f32,
    pub bold: bool,
    pub italic: bool,
}

impl Default for FontSettings {
    fn default() -> Self {
        Self {
            family: "Monospace".to_owned(),
            size: 16.0,
            bold: false,
            italic: false,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ModeTransition {
    pub target: PythonMode,
    pub changed: bool,
    pub application_controls_enabled: bool,
    pub file_filter: (&'static str, &'static str),
    pub sample_path: &'static str,
}

#[must_use]
pub const fn plan_mode_transition(current: PythonMode, target: PythonMode) -> ModeTransition {
    ModeTransition {
        target,
        changed: current as u8 != target as u8,
        application_controls_enabled: target.application_controls_enabled(),
        file_filter: target.file_filter(),
        sample_path: target.sample_path(),
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum RunProgram {
    Python,
    Executable(&'static str),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RunRequest {
    pub mode: PythonMode,
    pub source: String,
    pub input_name: &'static str,
    pub program: RunProgram,
    pub timeout: Duration,
    pub result_image_name: &'static str,
    pub remove_prior_result: bool,
    pub reset_execution_model: bool,
}

#[must_use]
pub const fn prepare_run(mode: PythonMode, source: String) -> RunRequest {
    let (input_name, program) = match mode {
        PythonMode::Normal => ("temp.py", RunProgram::Python),
        PythonMode::NodalSolver => ("temp.csv", RunProgram::Executable("nodal-solver.exe")),
        PythonMode::NodalResistance => ("temp.csv", RunProgram::Executable("nodal-resistance.exe")),
    };
    RunRequest {
        mode,
        source,
        input_name,
        program,
        timeout: RUN_TIMEOUT,
        result_image_name: RESULT_IMAGE_NAME,
        remove_prior_result: true,
        reset_execution_model: true,
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ExecutionOutcome {
    Completed {
        output: String,
        result_image: Option<PathBuf>,
    },
    TimedOut,
}

#[derive(Debug, Clone, PartialEq)]
pub enum PlaceRequest {
    SchematicText {
        text: String,
        subtype: u8,
        font: FontSettings,
    },
    ApplicationModel {
        lines: Vec<String>,
        text: String,
        initialize_context: bool,
    },
}

#[derive(Debug, Clone, PartialEq)]
pub struct PlaceAction {
    pub request: PlaceRequest,
    pub request_close: bool,
}

#[must_use]
pub fn prepare_place(
    mode: PythonMode,
    text: &str,
    font: &FontSettings,
    application_context_initialized: bool,
) -> PlaceAction {
    let request = if mode == PythonMode::Normal {
        PlaceRequest::SchematicText {
            text: text.to_owned(),
            subtype: 7,
            font: font.clone(),
        }
    } else {
        PlaceRequest::ApplicationModel {
            lines: text.split('\n').map(str::to_owned).collect(),
            text: text.to_owned(),
            initialize_context: !application_context_initialized,
        }
    };
    PlaceAction {
        request,
        request_close: true,
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct CircuitElement {
    pub kind: u16,
    pub first: String,
    pub second: String,
    pub value: f64,
    pub fourth: String,
    pub fifth: String,
}

#[must_use]
pub fn convert_circuit_elements(elements: &[CircuitElement]) -> Vec<String> {
    elements
        .iter()
        .filter(|element| matches!(element.kind, 9 | 13 | 14))
        .map(|element| {
            format!(
                "{},{},{:.4},{},{}",
                element.first, element.second, element.value, element.fourth, element.fifth
            )
        })
        .collect()
}

/// Reads one Python Shell document through the Rust standard library.
///
/// # Errors
///
/// Returns the underlying file or UTF-8 decoding error.
pub fn read_document(path: &Path) -> io::Result<String> {
    fs::read_to_string(path)
}

/// Writes one Python Shell document through the Rust standard library.
///
/// # Errors
///
/// Returns the underlying file-system error.
pub fn write_document(path: &Path, text: &str) -> io::Result<()> {
    fs::write(path, text)
}

#[cfg(test)]
mod tests {
    use super::{
        CaretPosition, CircuitElement, Document, ExecutionOutcome, FontSettings, HIDE_MARKER,
        PlaceRequest, PythonMode, RUN_TIMEOUT, RunProgram, SaveDisposition, TerminalDocument,
        convert_circuit_elements, plan_mode_transition, prepare_place, prepare_run,
    };
    use std::path::{Path, PathBuf};

    #[test]
    fn generated_document_uses_the_selected_mode_extension() {
        let mut document = Document::default();
        document.create_blank(PythonMode::NodalSolver);
        assert_eq!(document.current_path, Path::new("noname.csv"));
        assert!(document.text.is_empty());
        assert!(document.modified);
        assert_eq!(document.title(), "Python Shell - <noname.csv>");
    }

    #[test]
    fn hide_marker_inserts_at_the_current_row_without_deduplication() {
        let mut document = Document {
            text: "first\nsecond".to_owned(),
            ..Document::default()
        };
        document.insert_hide_marker(1);
        document.insert_hide_marker(1);
        assert_eq!(
            document.text,
            format!("first\n{HIDE_MARKER}\n{HIDE_MARKER}\nsecond")
        );
    }

    #[test]
    fn save_dispatch_keeps_the_recovered_literal_noname_python_rule() {
        let mut document = Document::default();
        assert_eq!(document.save_disposition(), SaveDisposition::SelectPath);
        document.create_blank(PythonMode::NodalSolver);
        assert_eq!(
            document.save_disposition(),
            SaveDisposition::Write(PathBuf::from("noname.csv"))
        );
    }

    #[test]
    fn save_as_lowercases_ascii_path_and_keeps_the_open_baseline() {
        let mut document = Document {
            baseline_path: Some(PathBuf::from("baseline.py")),
            ..Document::default()
        };
        let path = document.accept_save_as_path(Path::new("C:/Work/MyFile.PY"));
        assert_eq!(path, Path::new("c:/work/myfile.py"));
        assert_eq!(document.baseline_path, Some(PathBuf::from("baseline.py")));
    }

    #[test]
    fn terminal_clear_copy_and_select_preserve_the_prompt_selection() {
        let mut terminal = TerminalDocument::default();
        terminal.text.push_str("print(1)");
        terminal.select_all();
        assert_eq!(terminal.selected_text(), Some(">>>  print(1)"));
        terminal.clear_and_restore_prompt();
        assert_eq!(terminal.text, ">>>  ");
        assert_eq!(terminal.prompt_position, terminal.text.len());
        assert!(terminal.input_ready);
    }

    #[test]
    fn execution_timeout_restores_the_prompt() {
        let mut terminal = TerminalDocument::default();
        terminal.clear_for_execution();
        terminal.finish_execution(&ExecutionOutcome::TimedOut);
        assert_eq!(terminal.text, "Timeout received\n>>>  ");
        assert!(terminal.input_ready);
    }

    #[test]
    fn mode_plan_marks_same_mode_as_a_loader_no_op() {
        let same = plan_mode_transition(PythonMode::Normal, PythonMode::Normal);
        let changed = plan_mode_transition(PythonMode::Normal, PythonMode::NodalResistance);
        assert!(!same.changed);
        assert!(changed.changed);
        assert!(changed.application_controls_enabled);
        assert_eq!(changed.file_filter, ("CSV file", "csv"));
    }

    #[test]
    fn run_request_maps_each_mode_to_a_typed_program() {
        let normal = prepare_run(PythonMode::Normal, "print(1)".to_owned());
        let nodal = prepare_run(PythonMode::NodalResistance, "data".to_owned());
        assert_eq!(normal.program, RunProgram::Python);
        assert_eq!(normal.timeout, RUN_TIMEOUT);
        assert_eq!(
            nodal.program,
            RunProgram::Executable("nodal-resistance.exe")
        );
        assert_eq!(nodal.input_name, "temp.csv");
    }

    #[test]
    fn place_adapter_separates_schematic_and_application_models() {
        let font = FontSettings::default();
        let normal = prepare_place(PythonMode::Normal, "label", &font, false);
        let application = prepare_place(PythonMode::NodalSolver, "a\nb", &font, false);
        assert!(matches!(
            normal.request,
            PlaceRequest::SchematicText { subtype: 7, .. }
        ));
        assert!(matches!(
            application.request,
            PlaceRequest::ApplicationModel {
                initialize_context: true,
                ..
            }
        ));
        assert!(normal.request_close && application.request_close);
    }

    #[test]
    fn circuit_conversion_filters_kinds_and_uses_four_decimals() {
        let elements = [
            CircuitElement {
                kind: 9,
                first: "A".to_owned(),
                second: "B".to_owned(),
                value: 1.25,
                fourth: "C".to_owned(),
                fifth: "D".to_owned(),
            },
            CircuitElement {
                kind: 12,
                first: "ignored".to_owned(),
                second: String::new(),
                value: 0.0,
                fourth: String::new(),
                fifth: String::new(),
            },
        ];
        assert_eq!(convert_circuit_elements(&elements), ["A,B,1.2500,C,D"]);
    }

    #[test]
    fn caret_panel_uses_one_based_row_and_column() {
        assert_eq!(
            CaretPosition { row: 4, column: 7 }.panel_text(),
            "Line:4 Col:7"
        );
    }
}
