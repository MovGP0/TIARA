//! Process curve filter dialog state and host-effect adapters.

use std::collections::BTreeMap;
use std::fmt;
use std::fs;
use std::io;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, pick_list, row, text, text_input};
use iced::{Element, Length};
use serde::Serialize;

pub const TITLE: &str = "Process curve";
pub const FORM_RESOURCE: &str = "PyProcessForm";
pub const LIBRARY_EVALUATION: &str = "iced supplies the Process curve dialog state and messages. PathBuf and standard Rust collections own dialog data and release it through Drop. Typed opaque handles keep the selected source curve and caller-owned settings record behind the host boundary. No additional crate is required.";

const BUTTERWORTH_DEFINITION: &str = "butterworth;N,3,i;Wn,0.03,f";
const UNIFORM_DEFINITION: &str = "uniform_filter1d;N,100,i";
const BUTTERWORTH_HELP: &str =
    "https://docs.scipy.org/doc/scipy/reference/generated/scipy.signal.butter.html";
const UNIFORM_HELP: &str =
    "https://docs.scipy.org/doc/scipy/reference/generated/scipy.ndimage.uniform_filter.html";
const RUNNER_RELATIVE_PATH: [&str; 5] = [
    "Lib",
    "site-packages",
    "tpack_t",
    "runner",
    "test_process_curve.py",
];
const STALE_RUNNER_OUTPUTS: [&str; 5] = [
    "curve_prop.json",
    "curve_desc.txt",
    "curve_x.txt",
    "curve_y.txt",
    "errors.txt",
];

pub trait BrowserAdapter {
    fn open(&mut self, url: &str);
}

pub trait PythonRunnerAdapter {
    fn run(&mut self, request: &ProcessCurveRequest);
}

pub trait PythonRuntimeAdapter {
    fn initialize_runner(&mut self, source: &str) -> PreparedPythonRunnerHandle;
}

pub trait PythonExecutionAdapter {
    fn execute_runner(&mut self, runner: PreparedPythonRunnerHandle);

    fn release_runner(&mut self, _runner: PreparedPythonRunnerHandle) {}
}

pub trait ProcessCurveHostAdapter {
    fn show_working(&mut self, message: &str);
    fn hide_working(&mut self);
    fn pump_ui(&mut self);
    fn show_error(&mut self, message: &str);
    fn import_and_publish(&mut self);
}

pub trait StagedResultPublisher {
    fn publish_type_zero(&mut self, page: &StagedResultPage);
    fn publish_type_one(&mut self, page: &StagedResultPage);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum FilterKind {
    #[default]
    Butterworth,
    UniformFilter,
}

impl FilterKind {
    pub const ALL: [Self; 2] = [Self::Butterworth, Self::UniformFilter];

    const fn name(self) -> &'static str {
        match self {
            Self::Butterworth => "butterworth",
            Self::UniformFilter => "uniform_filter1d",
        }
    }

    const fn definition(self) -> &'static str {
        match self {
            Self::Butterworth => BUTTERWORTH_DEFINITION,
            Self::UniformFilter => UNIFORM_DEFINITION,
        }
    }

    const fn help_url(self) -> &'static str {
        match self {
            Self::Butterworth => BUTTERWORTH_HELP,
            Self::UniformFilter => UNIFORM_HELP,
        }
    }
}

impl fmt::Display for FilterKind {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Butterworth => "Butterworth",
            Self::UniformFilter => "Uniform filter",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ParameterType {
    Integer,
    FloatingPoint,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ParameterDefinition {
    pub name: String,
    pub default_text: String,
    pub parameter_type: ParameterType,
}

/// Ports Ghidra function `FUN_01a67f30` at `0x01A67F30`.
///
/// Selects one semicolon-delimited parameter and reads its name, default text,
/// and one-character numeric type from the fixed filter definition.
#[must_use]
pub fn parse_parameter_definition(
    definition: &str,
    parameter_index: usize,
) -> Option<ParameterDefinition> {
    let segment = definition.split(';').nth(parameter_index + 1)?;
    let mut fields = segment.split(',');
    let name = fields.next()?.to_owned();
    let default_text = fields.next()?.to_owned();
    let parameter_type = match fields.next()? {
        "i" => ParameterType::Integer,
        "f" => ParameterType::FloatingPoint,
        _ => return None,
    };
    Some(ParameterDefinition {
        name,
        default_text,
        parameter_type,
    })
}

#[derive(Debug, Clone, PartialEq, Serialize)]
#[serde(untagged)]
pub enum ArgumentValue {
    Text(String),
    Integer(i32),
    FloatingPoint(f64),
}

#[derive(Debug, Clone, PartialEq)]
pub struct ProcessCurveRequest {
    pub arguments: BTreeMap<String, ArgumentValue>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum RunnerOutcome {
    Success,
    Failed(String),
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct FilterSettings {
    pub selected: FilterKind,
    pub butterworth_order: i32,
    pub butterworth_cutoff: f64,
    pub uniform_size: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SourceCurveHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct FilterSettingsHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PreparedPythonRunnerHandle(pub u64);

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CurveResultType(pub u8);

#[derive(Debug, Clone, PartialEq)]
pub struct StagedResultPage {
    pub name: String,
    pub result_type: CurveResultType,
    pub curves: Vec<ProcessedCurve>,
}

#[derive(Debug, Clone, PartialEq)]
pub struct ProcessedCurve {
    pub name: String,
    pub samples: Vec<(f64, f64)>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StagedPageResolution {
    pub page_index: usize,
    pub mismatch_message: Option<String>,
}

impl Default for FilterSettings {
    fn default() -> Self {
        Self {
            selected: FilterKind::Butterworth,
            butterworth_order: 3,
            butterworth_cutoff: 0.03,
            uniform_size: 100,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub enum Action {
    Accepted(ProcessCurveRequest),
    ValidationError(String),
    OpenHelp,
    CloseAllowed(bool),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    FilterSelected(FilterKind),
    OrderChanged(String),
    CutoffChanged(String),
    Accept,
    Help,
    CloseRequested,
}

#[derive(Debug, Clone, PartialEq)]
pub struct Window {
    working_directory: PathBuf,
    source_curve: Option<SourceCurveHandle>,
    settings_owner: Option<FilterSettingsHandle>,
    prepared_runner: Option<PreparedPythonRunnerHandle>,
    staged_pages: Vec<StagedResultPage>,
    filter_changes_enabled: bool,
    curve_name: String,
    selected: FilterKind,
    order_text: String,
    cutoff_text: String,
    settings: FilterSettings,
    accepted_request: Option<ProcessCurveRequest>,
    close_blocked: bool,
    validation_message: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            working_directory: PathBuf::new(),
            source_curve: None,
            settings_owner: None,
            prepared_runner: None,
            staged_pages: Vec::new(),
            filter_changes_enabled: true,
            curve_name: String::new(),
            selected: FilterKind::Butterworth,
            order_text: "3".to_owned(),
            cutoff_text: "0.03".to_owned(),
            settings: FilterSettings::default(),
            accepted_request: None,
            close_blocked: false,
            validation_message: None,
        }
    }
}

impl Window {
    /// Implements Ghidra function `FUN_01a68330` at `0x01A68330`.
    ///
    /// Initializes the fixed filter catalog with Butterworth selected, enables
    /// later combo-change handling, and assigns the next generated curve name.
    /// The caller owns the process-wide sequence so dialog construction stays
    /// deterministic and does not require mutable global state.
    pub fn initialize_form(&mut self, curve_sequence: &mut u32) {
        self.filter_changes_enabled = false;
        self.close_blocked = false;
        self.validation_message = None;
        self.accepted_request = None;
        self.select_filter(FilterKind::Butterworth);
        self.filter_changes_enabled = true;
        self.curve_name = format!("NewCurve{}", *curve_sequence);
        *curve_sequence = curve_sequence.wrapping_add(1);
    }

    /// Implements Ghidra function `FUN_01a68740` at `0x01A68740`.
    ///
    /// Restores the saved filter selection when the Process curve dialog is
    /// shown and rebuilds its parameter text from the saved numeric values.
    pub fn show(&mut self) {
        self.selected = self.settings.selected;
        match self.selected {
            FilterKind::Butterworth => {
                self.order_text = self.settings.butterworth_order.to_string();
                self.cutoff_text = self.settings.butterworth_cutoff.to_string();
            }
            FilterKind::UniformFilter => {
                self.order_text = self.settings.uniform_size.to_string();
            }
        }
    }

    /// Implements Ghidra function `FUN_01a68760` at `0x01A68760`.
    ///
    /// Loads the fixed Process curve script below the bundled runtime root and
    /// asks the host Python adapter to create and initialize its runner. The
    /// script remains an external runtime asset; it is not part of this crate.
    ///
    /// # Errors
    ///
    /// Returns the file-system error when the runner source cannot be read.
    pub fn prepare_python_runner(
        &mut self,
        runtime_root: &Path,
        runtime: &mut impl PythonRuntimeAdapter,
    ) -> io::Result<PreparedPythonRunnerHandle> {
        let script_path = RUNNER_RELATIVE_PATH
            .iter()
            .fold(runtime_root.to_path_buf(), |path, component| {
                path.join(component)
            });
        let source = fs::read_to_string(script_path)?;
        let runner = runtime.initialize_runner(&source);
        self.prepared_runner = Some(runner);
        Ok(runner)
    }

    /// Implements Ghidra function `FUN_01a68960` at `0x01A68960`.
    ///
    /// Deletes each known stale runner output when it exists. A failed delete
    /// is ignored, as in the recovered handler. The source `tcurve.txt` file is
    /// outside this output list and remains available to the next run.
    pub fn clear_stale_runner_outputs(&self) {
        for name in STALE_RUNNER_OUTPUTS {
            let path = self.working_directory.join(name);
            if path.exists() {
                drop(fs::remove_file(path));
            }
        }
    }

    /// Implements Ghidra function `FUN_01a68bd0` at `0x01A68BD0`.
    ///
    /// Executes the prepared runner and reports success when `errors.txt` is
    /// absent. When it exists, only its first line is returned. The recovered
    /// `SciPy` padding diagnostic is replaced with a concise user message when
    /// all three case-sensitive marker words are present.
    ///
    /// # Errors
    ///
    /// Returns an error when no runner is prepared, the error file cannot be
    /// read, or the error file contains no line.
    pub fn execute_prepared_runner(
        &self,
        runtime: &mut impl PythonExecutionAdapter,
    ) -> io::Result<RunnerOutcome> {
        let runner = self.prepared_runner.ok_or_else(|| {
            io::Error::new(io::ErrorKind::NotFound, "Python runner is not prepared")
        })?;
        runtime.execute_runner(runner);

        let error_path = self.working_directory.join("errors.txt");
        if !error_path.exists() {
            return Ok(RunnerOutcome::Success);
        }

        let contents = fs::read_to_string(error_path)?;
        let first_line = contents.lines().next().ok_or_else(|| {
            io::Error::new(io::ErrorKind::UnexpectedEof, "errors.txt contains no line")
        })?;
        let message = if ["padlen", "input", "vector"]
            .into_iter()
            .all(|marker| first_line.contains(marker))
        {
            "The input curve contains too few points!".to_owned()
        } else {
            first_line.to_owned()
        };
        Ok(RunnerOutcome::Failed(message))
    }

    /// Implements Ghidra function `FUN_01a68fa0` at `0x01A68FA0`.
    ///
    /// Shows the working state, writes the accepted arguments to
    /// `curve_prop.json`, prepares and executes the bundled runner, and either
    /// reports its error or asks the host to import and publish the output.
    /// Normal completion always releases the temporary runner and accepted
    /// argument state, hides the working indicator, and pumps the UI once more.
    ///
    /// # Errors
    ///
    /// Returns an error when no accepted request exists, JSON serialization or
    /// file output fails, runner preparation fails, or error output is invalid.
    pub fn run_configured_filter<R, H>(
        &mut self,
        runtime_root: &Path,
        runtime: &mut R,
        host: &mut H,
    ) -> io::Result<RunnerOutcome>
    where
        R: PythonRuntimeAdapter + PythonExecutionAdapter,
        H: ProcessCurveHostAdapter,
    {
        host.show_working("Working... please wait");
        host.pump_ui();

        let result = (|| {
            let request = self.accepted_request.as_ref().ok_or_else(|| {
                io::Error::new(
                    io::ErrorKind::InvalidInput,
                    "filter request is not accepted",
                )
            })?;
            let json = serde_json::to_string(&request.arguments)
                .map_err(|error| io::Error::new(io::ErrorKind::InvalidData, error))?;
            fs::write(self.working_directory.join("curve_prop.json"), json)?;
            self.prepare_python_runner(runtime_root, runtime)?;
            let outcome = self.execute_prepared_runner(runtime)?;
            match &outcome {
                RunnerOutcome::Success => host.import_and_publish(),
                RunnerOutcome::Failed(message) => host.show_error(message),
            }
            Ok(outcome)
        })();

        if let Some(runner) = self.prepared_runner.take() {
            runtime.release_runner(runner);
        }
        self.accepted_request = None;
        host.hide_working();
        host.pump_ui();
        result
    }

    /// Implements Ghidra function `FUN_01a69350` at `0x01A69350`.
    ///
    /// Finds a staged page by the requested page name, or by the curve name
    /// when the page name is empty. A missing page is created with the source
    /// result type. An existing page remains selected when its type differs,
    /// and the recovered mismatch text accompanies the resolution.
    pub fn resolve_staged_page(
        &mut self,
        page_name: &str,
        curve_name: &str,
        result_type: CurveResultType,
    ) -> StagedPageResolution {
        let resolved_name = if page_name.is_empty() {
            curve_name
        } else {
            page_name
        };
        if let Some(page_index) = self
            .staged_pages
            .iter()
            .position(|page| page.name == resolved_name)
        {
            let existing_type = self.staged_pages[page_index].result_type;
            let mismatch_message = (existing_type != result_type).then(|| {
                format!(
                    "Curve type mismatch: old page type: {}, new page type: {}",
                    existing_type.0, result_type.0
                )
            });
            return StagedPageResolution {
                page_index,
                mismatch_message,
            };
        }

        self.staged_pages.push(StagedResultPage {
            name: resolved_name.to_owned(),
            result_type,
            curves: Vec::new(),
        });
        StagedPageResolution {
            page_index: self.staged_pages.len() - 1,
            mismatch_message: None,
        }
    }

    /// Implements Ghidra function `FUN_01a69570` at `0x01A69570`.
    ///
    /// Publishes each staged page through the host integration path selected
    /// by its recovered result-type byte. Types zero and one use distinct
    /// builders. Other values have no recovered dispatch and remain no-ops.
    pub fn publish_staged_results(&self, publisher: &mut impl StagedResultPublisher) {
        for page in &self.staged_pages {
            match page.result_type.0 {
                0 => publisher.publish_type_zero(page),
                1 => publisher.publish_type_one(page),
                _ => {}
            }
        }
    }

    /// Implements Ghidra function `FUN_01a69610` at `0x01A69610`.
    ///
    /// Resolves the named staged page, creates the named output curve, reads
    /// paired samples from `curve_x.txt` and `curve_y.txt`, and publishes the
    /// staged results after every X row succeeds. The X row count controls the
    /// loop. An early Y or numeric error leaves the already staged partial
    /// curve and does not publish it.
    ///
    /// # Errors
    ///
    /// Returns an error when an output file cannot be read, a Y row is absent,
    /// or either value on an indexed pair is not a valid floating-point value.
    pub fn import_processed_curve(
        &mut self,
        curve_name: &str,
        page_name: &str,
        result_type: CurveResultType,
        publisher: &mut impl StagedResultPublisher,
    ) -> io::Result<StagedPageResolution> {
        let resolution = self.resolve_staged_page(page_name, curve_name, result_type);
        let page = &mut self.staged_pages[resolution.page_index];
        page.curves.push(ProcessedCurve {
            name: curve_name.to_owned(),
            samples: Vec::new(),
        });
        let curve_index = page.curves.len() - 1;

        let x_contents = fs::read_to_string(self.working_directory.join("curve_x.txt"))?;
        let y_contents = fs::read_to_string(self.working_directory.join("curve_y.txt"))?;
        let y_rows: Vec<_> = y_contents.lines().collect();
        for (index, x_row) in x_contents.lines().enumerate() {
            let y_row = y_rows.get(index).ok_or_else(|| {
                io::Error::new(
                    io::ErrorKind::UnexpectedEof,
                    format!("curve_y.txt has no row {index}"),
                )
            })?;
            let x = x_row.trim().parse::<f64>().map_err(|error| {
                io::Error::new(
                    io::ErrorKind::InvalidData,
                    format!("invalid X value at row {index}: {error}"),
                )
            })?;
            let y = y_row.trim().parse::<f64>().map_err(|error| {
                io::Error::new(
                    io::ErrorKind::InvalidData,
                    format!("invalid Y value at row {index}: {error}"),
                )
            })?;
            self.staged_pages[resolution.page_index].curves[curve_index]
                .samples
                .push((x, y));
        }

        self.publish_staged_results(publisher);
        Ok(resolution)
    }

    /// Implements Ghidra function `FUN_01a67160` at `0x01A67160`.
    ///
    /// The Process curve dialog owns a copy of the private working-directory
    /// path and retains typed host handles for the selected source curve and
    /// caller-owned filter-settings record. Later validation, runner, and
    /// result-import paths consume this invocation context.
    pub fn initialize_context(
        &mut self,
        working_directory: impl Into<PathBuf>,
        source_curve: SourceCurveHandle,
        settings_owner: FilterSettingsHandle,
    ) {
        self.working_directory = working_directory.into();
        self.source_curve = Some(source_curve);
        self.settings_owner = Some(settings_owner);
    }

    #[must_use]
    pub fn working_directory(&self) -> &Path {
        &self.working_directory
    }

    #[must_use]
    pub const fn source_curve(&self) -> Option<SourceCurveHandle> {
        self.source_curve
    }

    #[must_use]
    pub const fn settings_owner(&self) -> Option<FilterSettingsHandle> {
        self.settings_owner
    }

    #[must_use]
    pub const fn prepared_runner(&self) -> Option<PreparedPythonRunnerHandle> {
        self.prepared_runner
    }

    #[must_use]
    pub fn staged_pages(&self) -> &[StagedResultPage] {
        &self.staged_pages
    }

    #[must_use]
    pub fn curve_name(&self) -> &str {
        &self.curve_name
    }

    pub fn update(&mut self, message: Message) -> Option<Action> {
        match message {
            Message::FilterSelected(filter) => {
                self.change_filter_if_ready(filter);
                None
            }
            Message::OrderChanged(value) => {
                self.order_text = value;
                None
            }
            Message::CutoffChanged(value) => {
                self.cutoff_text = value;
                None
            }
            Message::Accept => Some(match self.accept() {
                Ok(request) => Action::Accepted(request),
                Err(error) => Action::ValidationError(error),
            }),
            Message::Help => Some(Action::OpenHelp),
            Message::CloseRequested => Some(Action::CloseAllowed(self.close_query())),
        }
    }

    /// Implements Ghidra function `FUN_01a679a0` at `0x01A679A0`.
    ///
    /// A filter-combo change rebuilds parameter text from the selected fixed
    /// definition only after dialog initialization enables change handling.
    /// An earlier change is a no-op.
    pub fn change_filter_if_ready(&mut self, filter: FilterKind) -> bool {
        if !self.filter_changes_enabled {
            return false;
        }

        self.select_filter(filter);
        true
    }

    pub const fn set_filter_changes_enabled(&mut self, enabled: bool) {
        self.filter_changes_enabled = enabled;
    }

    /// Ports Ghidra function `FUN_01a671e0` at `0x01A671E0`.
    ///
    /// Records the validation text for presentation and blocks the next close
    /// query. The following close query clears this one-shot gate.
    pub fn report_validation_error(&mut self, message: impl Into<String>) -> String {
        let message = message.into();
        self.validation_message = Some(message.clone());
        self.close_blocked = true;
        message
    }

    /// Ports Ghidra function `FUN_01a67250` at `0x01A67250`.
    ///
    /// Validates the selected fixed filter, updates the shared settings copy,
    /// and creates typed Python-runner arguments. Rust numeric parsing is
    /// locale-independent, so no process-wide decimal separator is changed.
    ///
    /// # Errors
    ///
    /// Returns the recovered range message after it records the close veto.
    pub fn accept(&mut self) -> Result<ProcessCurveRequest, String> {
        let order = self.order_text.trim().parse::<i32>().ok();
        let request = match self.selected {
            FilterKind::Butterworth => {
                let Some(order) = order.filter(|value| (1..=100).contains(value)) else {
                    return Err(self.report_validation_error("N must be in range [1..100]"));
                };
                let cutoff = self
                    .cutoff_text
                    .trim()
                    .parse::<f64>()
                    .ok()
                    .filter(|value| 0.0 < *value && *value < 1.0);
                let Some(cutoff) = cutoff else {
                    return Err(
                        self.report_validation_error("Wn must be greater than 0 and less than 1")
                    );
                };
                self.settings.selected = self.selected;
                self.settings.butterworth_order = order;
                self.settings.butterworth_cutoff = cutoff;
                self.build_request(order, Some(cutoff))
            }
            FilterKind::UniformFilter => {
                let Some(order) = order.filter(|value| (1..=1_000_000).contains(value)) else {
                    return Err(self.report_validation_error("N must be in range [1..1000000]"));
                };
                self.settings.selected = self.selected;
                self.settings.uniform_size = order;
                self.build_request(order, None)
            }
        };
        self.validation_message = None;
        self.accepted_request = Some(request.clone());
        Ok(request)
    }

    /// Ports Ghidra function `FUN_01a68080` at `0x01A68080`.
    ///
    /// Routes the selected fixed `SciPy` URL to the host browser adapter and
    /// intentionally ignores whether the external browser succeeds.
    pub fn open_selected_help(&self, browser: &mut impl BrowserAdapter) {
        browser.open(self.selected.help_url());
    }

    /// Ports Ghidra function `FUN_01a68310` at `0x01A68310`.
    ///
    /// Rejects one close after validation failure, then clears the gate so a
    /// corrected submission can close.
    pub const fn close_query(&mut self) -> bool {
        let allowed = !self.close_blocked;
        self.close_blocked = false;
        allowed
    }

    /// Implements Ghidra function `FUN_01a682d0` at `0x01A682D0`.
    ///
    /// Consumes the Process curve dialog after the host accepts its close.
    /// Rust then releases the filter catalogs and the owned process-result
    /// collection with the rest of the dialog state. The three fixed catalogs
    /// use static Rust data, so they do not need separate manual destruction.
    pub fn close(self) {
        drop(self);
    }

    pub fn run_accepted(&self, runner: &mut impl PythonRunnerAdapter) -> bool {
        let Some(request) = &self.accepted_request else {
            return false;
        };
        runner.run(request);
        true
    }

    #[must_use]
    pub const fn settings(&self) -> FilterSettings {
        self.settings
    }

    #[must_use]
    pub fn validation_message(&self) -> Option<&str> {
        self.validation_message.as_deref()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut fields = column![
            row![
                text("Filter").width(Length::FillPortion(2)),
                pick_list(
                    FilterKind::ALL,
                    Some(self.selected),
                    Message::FilterSelected
                )
                .width(Length::FillPortion(3)),
            ]
            .spacing(8),
            row![
                text("N").width(Length::FillPortion(2)),
                text_input("", &self.order_text)
                    .on_input(Message::OrderChanged)
                    .width(Length::FillPortion(3)),
            ]
            .spacing(8),
        ]
        .spacing(8);
        if self.selected == FilterKind::Butterworth {
            fields = fields.push(
                row![
                    text("Wn").width(Length::FillPortion(2)),
                    text_input("", &self.cutoff_text)
                        .on_input(Message::CutoffChanged)
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8),
            );
        }
        if let Some(message) = &self.validation_message {
            fields = fields.push(text(message));
        }
        fields = fields.push(
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::CloseRequested),
                button("Help").on_press(Message::Help),
            ]
            .spacing(8),
        );
        container(fields.padding(16)).width(Length::Fill).into()
    }

    fn select_filter(&mut self, filter: FilterKind) {
        self.selected = filter;
        if let Some(order) = parse_parameter_definition(filter.definition(), 0) {
            self.order_text = order.default_text;
        }
        if let Some(cutoff) = parse_parameter_definition(filter.definition(), 1) {
            self.cutoff_text = cutoff.default_text;
        }
    }

    fn build_request(&self, order: i32, cutoff: Option<f64>) -> ProcessCurveRequest {
        let mut arguments = BTreeMap::from([
            (
                "filter".to_owned(),
                ArgumentValue::Text(self.selected.name().to_owned()),
            ),
            ("N".to_owned(), ArgumentValue::Integer(order)),
        ]);
        if let Some(cutoff) = cutoff {
            arguments.insert("Wn".to_owned(), ArgumentValue::FloatingPoint(cutoff));
        }
        ProcessCurveRequest { arguments }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Default)]
    struct Browser(Vec<String>);

    impl BrowserAdapter for Browser {
        fn open(&mut self, url: &str) {
            self.0.push(url.to_owned());
        }
    }

    #[derive(Default)]
    struct Runner(Vec<ProcessCurveRequest>);

    impl PythonRunnerAdapter for Runner {
        fn run(&mut self, request: &ProcessCurveRequest) {
            self.0.push(request.clone());
        }
    }

    #[derive(Default)]
    struct Runtime {
        sources: Vec<String>,
        executions: Vec<PreparedPythonRunnerHandle>,
        releases: Vec<PreparedPythonRunnerHandle>,
    }

    impl PythonRuntimeAdapter for Runtime {
        fn initialize_runner(&mut self, source: &str) -> PreparedPythonRunnerHandle {
            self.sources.push(source.to_owned());
            PreparedPythonRunnerHandle(61)
        }
    }

    impl PythonExecutionAdapter for Runtime {
        fn execute_runner(&mut self, runner: PreparedPythonRunnerHandle) {
            self.executions.push(runner);
        }

        fn release_runner(&mut self, runner: PreparedPythonRunnerHandle) {
            self.releases.push(runner);
        }
    }

    #[derive(Default)]
    struct Host(Vec<String>);

    impl ProcessCurveHostAdapter for Host {
        fn show_working(&mut self, message: &str) {
            self.0.push(format!("show:{message}"));
        }

        fn hide_working(&mut self) {
            self.0.push("hide".to_owned());
        }

        fn pump_ui(&mut self) {
            self.0.push("pump".to_owned());
        }

        fn show_error(&mut self, message: &str) {
            self.0.push(format!("error:{message}"));
        }

        fn import_and_publish(&mut self) {
            self.0.push("publish".to_owned());
        }
    }

    #[derive(Default)]
    struct Publisher(Vec<String>);

    impl StagedResultPublisher for Publisher {
        fn publish_type_zero(&mut self, page: &StagedResultPage) {
            self.0.push(format!("zero:{}", page.name));
        }

        fn publish_type_one(&mut self, page: &StagedResultPage) {
            self.0.push(format!("one:{}", page.name));
        }
    }

    #[derive(Default)]
    struct Execution(Vec<PreparedPythonRunnerHandle>);

    impl PythonExecutionAdapter for Execution {
        fn execute_runner(&mut self, runner: PreparedPythonRunnerHandle) {
            self.0.push(runner);
        }
    }

    #[test]
    fn fixed_definitions_return_typed_parameter_fields() {
        assert_eq!(
            parse_parameter_definition(BUTTERWORTH_DEFINITION, 0),
            Some(ParameterDefinition {
                name: "N".to_owned(),
                default_text: "3".to_owned(),
                parameter_type: ParameterType::Integer,
            })
        );
        assert_eq!(
            parse_parameter_definition(BUTTERWORTH_DEFINITION, 1),
            Some(ParameterDefinition {
                name: "Wn".to_owned(),
                default_text: "0.03".to_owned(),
                parameter_type: ParameterType::FloatingPoint,
            })
        );
        assert_eq!(parse_parameter_definition(UNIFORM_DEFINITION, 1), None);
    }

    #[test]
    fn valid_butterworth_builds_typed_arguments_and_updates_settings() {
        let mut window = Window::default();
        drop(window.update(Message::OrderChanged("5".to_owned())));
        drop(window.update(Message::CutoffChanged("0.25".to_owned())));

        let Ok(request) = window.accept() else {
            panic!("valid Butterworth input must be accepted");
        };

        assert_eq!(
            request.arguments.get("filter"),
            Some(&ArgumentValue::Text("butterworth".to_owned()))
        );
        assert_eq!(request.arguments.get("N"), Some(&ArgumentValue::Integer(5)));
        assert_eq!(
            request.arguments.get("Wn"),
            Some(&ArgumentValue::FloatingPoint(0.25))
        );
        assert_eq!(window.settings().butterworth_order, 5);
        assert!((window.settings().butterworth_cutoff - 0.25).abs() < f64::EPSILON);
    }

    #[test]
    fn valid_uniform_filter_omits_cutoff_and_can_run_through_the_adapter() {
        let mut window = Window::default();
        drop(window.update(Message::FilterSelected(FilterKind::UniformFilter)));
        drop(window.update(Message::OrderChanged("250".to_owned())));
        let Ok(request) = window.accept() else {
            panic!("valid uniform-filter input must be accepted");
        };
        let mut runner = Runner::default();

        assert!(window.run_accepted(&mut runner));
        assert_eq!(runner.0.as_slice(), std::slice::from_ref(&request));
        assert_eq!(
            request.arguments.get("filter"),
            Some(&ArgumentValue::Text("uniform_filter1d".to_owned()))
        );
        assert_eq!(request.arguments.get("Wn"), None);
        assert_eq!(window.settings().uniform_size, 250);
    }

    #[test]
    fn invalid_order_blocks_exactly_one_close_attempt() {
        let mut window = Window::default();
        drop(window.update(Message::OrderChanged("101".to_owned())));

        assert_eq!(
            window.accept(),
            Err("N must be in range [1..100]".to_owned())
        );
        assert_eq!(
            window.validation_message(),
            Some("N must be in range [1..100]")
        );
        assert!(!window.close_query());
        assert!(window.close_query());
    }

    #[test]
    fn invalid_cutoff_does_not_create_a_runner_request() {
        let mut window = Window::default();
        drop(window.update(Message::CutoffChanged("1".to_owned())));
        let mut runner = Runner::default();

        assert_eq!(
            window.accept(),
            Err("Wn must be greater than 0 and less than 1".to_owned())
        );
        assert!(!window.run_accepted(&mut runner));
        assert!(runner.0.is_empty());
    }

    #[test]
    fn help_uses_the_selected_fixed_scipy_url() {
        let mut window = Window::default();
        let mut browser = Browser::default();
        window.open_selected_help(&mut browser);
        drop(window.update(Message::FilterSelected(FilterKind::UniformFilter)));
        window.open_selected_help(&mut browser);

        assert_eq!(browser.0, [BUTTERWORTH_HELP, UNIFORM_HELP]);
    }

    #[test]
    fn initialization_replaces_only_the_dialog_invocation_context() {
        let mut window = Window::default();
        drop(window.update(Message::FilterSelected(FilterKind::UniformFilter)));

        window.initialize_context(
            "session/process-one",
            SourceCurveHandle(41),
            FilterSettingsHandle(51),
        );
        window.initialize_context(
            "session/process-two",
            SourceCurveHandle(42),
            FilterSettingsHandle(52),
        );

        assert_eq!(window.working_directory(), Path::new("session/process-two"));
        assert_eq!(window.source_curve(), Some(SourceCurveHandle(42)));
        assert_eq!(window.settings_owner(), Some(FilterSettingsHandle(52)));
        assert_eq!(window.selected, FilterKind::UniformFilter);
        assert_eq!(window.order_text, "100");
    }

    #[test]
    fn filter_change_before_initialization_ready_is_a_noop() {
        let mut window = Window::default();
        window.set_filter_changes_enabled(false);

        let changed = window.change_filter_if_ready(FilterKind::UniformFilter);

        assert!(!changed);
        assert_eq!(window.selected, FilterKind::Butterworth);
        assert_eq!(window.order_text, "3");
        assert_eq!(window.cutoff_text, "0.03");
    }

    #[test]
    fn ready_filter_change_rebuilds_parameter_defaults() {
        let mut window = Window::default();
        window.set_filter_changes_enabled(false);
        drop(window.update(Message::FilterSelected(FilterKind::UniformFilter)));
        window.set_filter_changes_enabled(true);

        drop(window.update(Message::FilterSelected(FilterKind::UniformFilter)));

        assert_eq!(window.selected, FilterKind::UniformFilter);
        assert_eq!(window.order_text, "100");
        assert_eq!(window.cutoff_text, "0.03");
    }

    #[test]
    fn accepted_close_consumes_dialog_with_its_owned_state() {
        let mut window = Window::default();
        window.initialize_context(
            "session/process",
            SourceCurveHandle(41),
            FilterSettingsHandle(51),
        );
        let Ok(_) = window.accept() else {
            panic!("default filter input must be accepted");
        };

        window.close();
    }

    #[test]
    fn form_creation_selects_first_filter_and_generates_curve_name() {
        let mut window = Window::default();
        drop(window.update(Message::FilterSelected(FilterKind::UniformFilter)));
        drop(window.update(Message::OrderChanged("250".to_owned())));
        let Ok(_) = window.accept() else {
            panic!("valid uniform-filter input must be accepted");
        };
        let mut curve_sequence = 17;

        window.initialize_form(&mut curve_sequence);

        assert_eq!(window.selected, FilterKind::Butterworth);
        assert_eq!(window.order_text, "3");
        assert_eq!(window.cutoff_text, "0.03");
        assert!(window.filter_changes_enabled);
        assert_eq!(window.curve_name(), "NewCurve17");
        assert_eq!(curve_sequence, 18);
        assert!(window.accepted_request.is_none());
    }

    #[test]
    fn show_restores_saved_filter_and_parameter_values() {
        let mut window = Window {
            settings: FilterSettings {
                selected: FilterKind::UniformFilter,
                butterworth_order: 8,
                butterworth_cutoff: 0.125,
                uniform_size: 640,
            },
            ..Window::default()
        };

        window.show();

        assert_eq!(window.selected, FilterKind::UniformFilter);
        assert_eq!(window.order_text, "640");

        window.settings.selected = FilterKind::Butterworth;
        window.show();

        assert_eq!(window.selected, FilterKind::Butterworth);
        assert_eq!(window.order_text, "8");
        assert_eq!(window.cutoff_text, "0.125");
    }

    #[test]
    fn runner_preparation_loads_fixed_bundled_script_and_keeps_handle() {
        let unique = format!(
            "tiara-process-curve-{}-{:?}",
            std::process::id(),
            std::thread::current().id()
        );
        let runtime_root = std::env::temp_dir().join(unique);
        let script_path = RUNNER_RELATIVE_PATH
            .iter()
            .fold(runtime_root.clone(), |path, component| path.join(component));
        let Some(parent) = script_path.parent() else {
            panic!("runner path must have a parent");
        };
        fs::create_dir_all(parent).expect("runner test directory must be created");
        fs::write(&script_path, "print('process curve')")
            .expect("runner test source must be written");
        let mut runtime = Runtime::default();
        let mut window = Window::default();

        let runner = window
            .prepare_python_runner(&runtime_root, &mut runtime)
            .expect("fixed runner script must load");

        assert_eq!(runner, PreparedPythonRunnerHandle(61));
        assert_eq!(window.prepared_runner(), Some(runner));
        assert_eq!(runtime.sources, ["print('process curve')"]);
        fs::remove_dir_all(runtime_root).expect("runner test directory must be removed");
    }

    #[test]
    fn stale_output_cleanup_deletes_only_the_five_recovered_files() {
        let unique = format!(
            "tiara-process-curve-output-{}-{:?}",
            std::process::id(),
            std::thread::current().id()
        );
        let working_directory = std::env::temp_dir().join(unique);
        fs::create_dir_all(&working_directory).expect("output test directory must be created");
        for name in STALE_RUNNER_OUTPUTS {
            fs::write(working_directory.join(name), "stale")
                .expect("stale runner output must be written");
        }
        fs::write(working_directory.join("tcurve.txt"), "source")
            .expect("source curve must be written");
        let mut window = Window::default();
        window.initialize_context(
            &working_directory,
            SourceCurveHandle(41),
            FilterSettingsHandle(51),
        );

        window.clear_stale_runner_outputs();

        for name in STALE_RUNNER_OUTPUTS {
            assert!(!working_directory.join(name).exists());
        }
        assert!(working_directory.join("tcurve.txt").exists());
        fs::remove_dir_all(working_directory).expect("output test directory must be removed");
    }

    #[test]
    fn runner_error_gate_uses_absence_first_line_and_padding_normalization() {
        let unique = format!(
            "tiara-process-curve-error-{}-{:?}",
            std::process::id(),
            std::thread::current().id()
        );
        let working_directory = std::env::temp_dir().join(unique);
        fs::create_dir_all(&working_directory).expect("error test directory must be created");
        let window = Window {
            working_directory: working_directory.clone(),
            prepared_runner: Some(PreparedPythonRunnerHandle(61)),
            ..Window::default()
        };
        let mut execution = Execution::default();

        assert_eq!(
            window
                .execute_prepared_runner(&mut execution)
                .expect("missing error output must be success"),
            RunnerOutcome::Success
        );

        fs::write(
            working_directory.join("errors.txt"),
            "general failure\nignored second line",
        )
        .expect("general error output must be written");
        assert_eq!(
            window
                .execute_prepared_runner(&mut execution)
                .expect("general error output must be read"),
            RunnerOutcome::Failed("general failure".to_owned())
        );

        fs::write(
            working_directory.join("errors.txt"),
            "input vector length is less than padlen",
        )
        .expect("padding error output must be written");
        assert_eq!(
            window
                .execute_prepared_runner(&mut execution)
                .expect("padding error output must be read"),
            RunnerOutcome::Failed("The input curve contains too few points!".to_owned())
        );
        assert_eq!(execution.0, [PreparedPythonRunnerHandle(61); 3]);
        fs::remove_dir_all(working_directory).expect("error test directory must be removed");
    }

    #[test]
    fn configured_filter_run_writes_arguments_publishes_and_cleans_up() {
        let unique = format!(
            "tiara-process-curve-run-{}-{:?}",
            std::process::id(),
            std::thread::current().id()
        );
        let test_root = std::env::temp_dir().join(unique);
        let working_directory = test_root.join("work");
        let runtime_root = test_root.join("runtime");
        let script_path = RUNNER_RELATIVE_PATH
            .iter()
            .fold(runtime_root.clone(), |path, component| path.join(component));
        fs::create_dir_all(&working_directory).expect("working directory must be created");
        fs::create_dir_all(
            script_path
                .parent()
                .expect("script path must have a parent"),
        )
        .expect("script directory must be created");
        fs::write(&script_path, "print('process curve')")
            .expect("runner test source must be written");
        let mut window = Window {
            working_directory: working_directory.clone(),
            ..Window::default()
        };
        window.accept().expect("default filter must be accepted");
        let mut runtime = Runtime::default();
        let mut host = Host::default();

        let outcome = window
            .run_configured_filter(&runtime_root, &mut runtime, &mut host)
            .expect("configured run must succeed");

        assert_eq!(outcome, RunnerOutcome::Success);
        let arguments = fs::read_to_string(working_directory.join("curve_prop.json"))
            .expect("argument JSON must be written");
        assert_eq!(arguments, r#"{"N":3,"Wn":0.03,"filter":"butterworth"}"#);
        assert_eq!(runtime.executions, [PreparedPythonRunnerHandle(61)]);
        assert_eq!(runtime.releases, [PreparedPythonRunnerHandle(61)]);
        assert_eq!(
            host.0,
            [
                "show:Working... please wait",
                "pump",
                "publish",
                "hide",
                "pump"
            ]
        );
        assert!(window.prepared_runner.is_none());
        assert!(window.accepted_request.is_none());
        fs::remove_dir_all(test_root).expect("configured-run test directory must be removed");
    }

    #[test]
    fn staged_page_resolution_creates_reuses_and_reports_type_mismatch() {
        let mut window = Window::default();

        let created = window.resolve_staged_page("", "Curve A", CurveResultType(0));
        let reused = window.resolve_staged_page("Curve A", "Other", CurveResultType(0));
        let mismatch = window.resolve_staged_page("Curve A", "Other", CurveResultType(1));

        assert_eq!(
            created,
            StagedPageResolution {
                page_index: 0,
                mismatch_message: None,
            }
        );
        assert_eq!(reused, created);
        assert_eq!(mismatch.page_index, 0);
        assert_eq!(
            mismatch.mismatch_message.as_deref(),
            Some("Curve type mismatch: old page type: 0, new page type: 1")
        );
        assert_eq!(
            window.staged_pages(),
            [StagedResultPage {
                name: "Curve A".to_owned(),
                result_type: CurveResultType(0),
                curves: Vec::new(),
            }]
        );
    }

    #[test]
    fn staged_result_publication_dispatches_known_types_in_list_order() {
        let window = Window {
            staged_pages: vec![
                StagedResultPage {
                    name: "First".to_owned(),
                    result_type: CurveResultType(0),
                    curves: Vec::new(),
                },
                StagedResultPage {
                    name: "Ignored".to_owned(),
                    result_type: CurveResultType(7),
                    curves: Vec::new(),
                },
                StagedResultPage {
                    name: "Second".to_owned(),
                    result_type: CurveResultType(1),
                    curves: Vec::new(),
                },
            ],
            ..Window::default()
        };
        let mut publisher = Publisher::default();

        window.publish_staged_results(&mut publisher);

        assert_eq!(publisher.0, ["zero:First", "one:Second"]);
    }

    #[test]
    fn processed_curve_import_pairs_rows_and_publishes_after_success() {
        let unique = format!(
            "tiara-process-curve-import-{}-{:?}",
            std::process::id(),
            std::thread::current().id()
        );
        let working_directory = std::env::temp_dir().join(unique);
        fs::create_dir_all(&working_directory).expect("import test directory must be created");
        fs::write(working_directory.join("curve_x.txt"), "1.5\n2.5\n")
            .expect("X output must be written");
        fs::write(working_directory.join("curve_y.txt"), "10\n20\n30\n")
            .expect("Y output must be written");
        let mut window = Window {
            working_directory: working_directory.clone(),
            ..Window::default()
        };
        let mut publisher = Publisher::default();

        let resolution = window
            .import_processed_curve("Filtered", "Filters", CurveResultType(1), &mut publisher)
            .expect("paired output must import");

        assert_eq!(resolution.page_index, 0);
        assert_eq!(publisher.0, ["one:Filters"]);
        assert_eq!(
            window.staged_pages[0].curves,
            [ProcessedCurve {
                name: "Filtered".to_owned(),
                samples: vec![(1.5, 10.0), (2.5, 20.0)],
            }]
        );
        fs::remove_dir_all(working_directory).expect("import test directory must be removed");
    }

    #[test]
    fn short_y_output_keeps_partial_curve_without_publication() {
        let unique = format!(
            "tiara-process-curve-short-y-{}-{:?}",
            std::process::id(),
            std::thread::current().id()
        );
        let working_directory = std::env::temp_dir().join(unique);
        fs::create_dir_all(&working_directory).expect("import test directory must be created");
        fs::write(working_directory.join("curve_x.txt"), "1\n2\n")
            .expect("X output must be written");
        fs::write(working_directory.join("curve_y.txt"), "10\n").expect("Y output must be written");
        let mut window = Window {
            working_directory: working_directory.clone(),
            ..Window::default()
        };
        let mut publisher = Publisher::default();

        let error = window
            .import_processed_curve("Partial", "", CurveResultType(0), &mut publisher)
            .expect_err("short Y output must fail");

        assert_eq!(error.kind(), io::ErrorKind::UnexpectedEof);
        assert!(publisher.0.is_empty());
        assert_eq!(window.staged_pages[0].name, "Partial");
        assert_eq!(window.staged_pages[0].curves[0].samples, [(1.0, 10.0)]);
        fs::remove_dir_all(working_directory).expect("import test directory must be removed");
    }
}
