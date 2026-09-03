//! Discrete Harmonic Balance dialog state.

use std::fmt::{self, Display, Formatter};

use crate::harmonic_balance_options::{ModalResult as OptionsModalResult, Window as OptionsWindow};
use iced::widget::{column, container, pick_list, text};
use iced::{Element, Length};
use tiara_core::harmonic_balance_output::{
    HarmonicBalanceAnalysis, HarmonicBalanceDiagramHost, HarmonicBalanceMeter,
    HarmonicBalanceRunError, HarmonicBalanceRunOutcome, HarmonicBalanceRunRequest,
    HarmonicBalanceRuntime,
};
use tiara_core::numeric_format::format_display_value;

pub const TITLE: &str = "HB Analysis Dialog";
pub const LIBRARY_EVALUATION: &str = "iced supplies the Harmonic Balance dialog controls and state updates. Fixed arrays and plain Rust state preserve the recovered grid and lifecycle initialization, so no additional dependency is needed.";

const INITIAL_NUMBER_OF_HARMONICS: &str = "16";
const INITIAL_ANALYSIS_OPTION_VALUE: u32 = 1;
const RESULT_COLUMN_WIDTHS: [u32; 3] = [116, 105, 105];
const HELP_CONTEXT: u32 = 0x4B5;
const PROGRESS_CAPTION: &str = "Harmonic Balance Analysis is running...";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ResultFormat {
    #[default]
    AmplitudePhase,
    AmplitudeAAmplitudeB,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseAction {
    Free,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseQueryOutcome {
    Allowed,
    Vetoed,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CalculateOutcome {
    Completed,
    Stopped,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalResult {
    Accepted,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CalculateError {
    InvalidBaseFrequency(String),
    FrequencyNotPositive,
    HarmonicCountMismatch,
    InvalidHarmonicCount(String),
    HarmonicCountNotPositive,
    HarmonicCountAboveLimit,
    Run(HarmonicBalanceRunError),
}

impl Display for CalculateError {
    fn fmt(&self, formatter: &mut Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidBaseFrequency(value) => {
                write!(formatter, "Invalid base frequency: {value}")
            }
            Self::FrequencyNotPositive => {
                formatter.write_str("Frequency must be a positive number!")
            }
            Self::HarmonicCountMismatch => formatter.write_str(
                "The Number of harmonics must be specified for each Base frequency, separated by commas (e.g., 3, 1, 1)!",
            ),
            Self::InvalidHarmonicCount(_) => {
                formatter.write_str("Number of harmonics must be an integer number!")
            }
            Self::HarmonicCountNotPositive => {
                formatter.write_str("Number of harmonics must be a positive number!")
            }
            Self::HarmonicCountAboveLimit => {
                formatter.write_str("Number of harmonics exceed a limit (64)")
            }
            Self::Run(error) => error.fmt(formatter),
        }
    }
}

impl std::error::Error for CalculateError {}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct WindowConstraints {
    pub min_height: u32,
    pub max_height: u32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RememberedSettings {
    pub base_frequency_text: String,
    pub number_of_harmonics_text: String,
    pub format: ResultFormat,
    pub selected_output: Option<String>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ResultLabels {
    pub frequency: String,
    pub amplitude: String,
    pub phase: String,
}

impl Default for ResultLabels {
    fn default() -> Self {
        Self {
            frequency: "f".to_owned(),
            amplitude: "Amplitude".to_owned(),
            phase: "Phase".to_owned(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ResultTable {
    pub headers: [String; 3],
    pub rows: Vec<[String; 3]>,
    pub grid_row_count: usize,
    pub clipboard_text: String,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
struct RecoveredCreationState {
    analysis_option_flag: bool,
    creation_flag: bool,
    analysis_attached: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
struct ResultDisplayState {
    calculate_enabled: bool,
    expanded: bool,
    draw_enabled: bool,
}

impl ResultFormat {
    pub const ALL: [Self; 2] = [Self::AmplitudePhase, Self::AmplitudeAAmplitudeB];

    #[must_use]
    pub const fn index(self) -> i32 {
        match self {
            Self::AmplitudePhase => 0,
            Self::AmplitudeAAmplitudeB => 1,
        }
    }
}

impl Display for ResultFormat {
    fn fmt(&self, formatter: &mut Formatter<'_>) -> fmt::Result {
        match self {
            Self::AmplitudePhase => formatter.write_str("D*cos(kwt + fi)"),
            Self::AmplitudeAAmplitudeB => formatter.write_str("A*cos(kwt) + B*sin(kwt)"),
        }
    }
}

pub trait HarmonicBalancePresentationHost {
    fn rebuild_result_grid_and_clipboard(&mut self, format: ResultFormat);
}

pub trait HarmonicBalanceCalculationHost: HarmonicBalancePresentationHost {
    fn show_progress(&mut self, caption: &str);
    fn hide_progress(&mut self);
    fn refresh_main_window(&mut self);
    fn expand_and_recenter_results(&mut self, result_panel_width: u32);
}

pub trait HarmonicBalanceOptionsHost {
    fn show_modal(&mut self, dialog: &mut OptionsWindow) -> OptionsModalResult;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    FormatSelected(ResultFormat),
}

#[derive(Debug, Default)]
pub struct Window {
    format: ResultFormat,
    close_veto: bool,
    base_frequency_text: String,
    number_of_harmonics_text: String,
    analysis_option_value: u32,
    creation_state: RecoveredCreationState,
    result_panel_width: u32,
    result_column_widths: [u32; 3],
    constraints: WindowConstraints,
    help_context: u32,
    base_frequencies: Vec<f64>,
    harmonic_counts: Vec<i32>,
    output_items: Vec<String>,
    selected_output_index: Option<usize>,
    display_state: ResultDisplayState,
    client_height: u32,
    result_row_count: usize,
    accepted_settings: Option<RememberedSettings>,
    modal_result: Option<ModalResult>,
    options_text: String,
}

impl Window {
    /// Implements Ghidra function `FUN_01b531e0` at `0x01B531E0`.
    ///
    /// Resets the recovered lifecycle and analysis fields, initializes the
    /// number-of-harmonics edit to `16`, configures the three result-grid
    /// columns, remembers the current result-panel width, locks the form to
    /// its current height, and assigns VCL help context `0x4B5`. The recovered
    /// call to `FUN_01b53330` has no effect because that helper is one `RET`.
    pub fn on_create(&mut self, current_height: u32, result_panel_width: u32) {
        self.close_veto = false;
        self.number_of_harmonics_text.clear();
        self.number_of_harmonics_text
            .push_str(INITIAL_NUMBER_OF_HARMONICS);
        self.analysis_option_value = INITIAL_ANALYSIS_OPTION_VALUE;
        self.creation_state = RecoveredCreationState::default();
        self.result_panel_width = result_panel_width;
        self.result_column_widths = RESULT_COLUMN_WIDTHS;
        self.constraints = WindowConstraints {
            min_height: current_height,
            max_height: current_height,
        };
        self.help_context = HELP_CONTEXT;
    }

    /// Implements Ghidra function `FUN_01b532f0` at `0x01B532F0`.
    ///
    /// Releases the two owned arrays that store parsed base frequencies and
    /// harmonic counts. Rust drops each previous vector allocation when it is
    /// replaced. The recovered destroy handler has no other effect.
    pub fn on_destroy(&mut self) {
        self.base_frequencies = Vec::new();
        self.harmonic_counts = Vec::new();
    }

    /// Implements Ghidra function `FUN_01b53340` at `0x01B53340`.
    ///
    /// Restores the saved input text and format, copies the caller-owned output
    /// names, restores an exact saved output when it exists, and otherwise
    /// selects the first output. Calculate is enabled only when an output is
    /// available. The client area is collapsed to the setup-panel height.
    pub fn on_show(
        &mut self,
        settings: &RememberedSettings,
        output_items: &[String],
        setup_panel_height: u32,
    ) {
        settings
            .base_frequency_text
            .clone_into(&mut self.base_frequency_text);
        settings
            .number_of_harmonics_text
            .clone_into(&mut self.number_of_harmonics_text);
        self.format = settings.format;
        self.output_items.clear();
        self.output_items.extend_from_slice(output_items);
        self.selected_output_index = settings
            .selected_output
            .as_deref()
            .filter(|saved| !saved.is_empty())
            .and_then(|saved| self.output_items.iter().position(|item| item == saved))
            .or_else(|| (!self.output_items.is_empty()).then_some(0));
        self.display_state.calculate_enabled = !self.output_items.is_empty();
        self.client_height = setup_panel_height;
    }

    pub fn replace_analysis_inputs(
        &mut self,
        base_frequencies: Vec<f64>,
        harmonic_counts: Vec<i32>,
    ) {
        self.base_frequencies = base_frequencies;
        self.harmonic_counts = harmonic_counts;
    }

    /// Implements Ghidra function `FUN_01b53580` at `0x01B53580`.
    ///
    /// Parses and validates the numeric comma lists, sizes the result grid,
    /// runs the dialog-owned Harmonic Balance analysis, and publishes a clean
    /// result. A clean first result expands the result area and enables Draw.
    /// Accepted settings are stored only after result publication. This method
    /// does not close the dialog.
    ///
    /// # Errors
    ///
    /// Returns the recovered input validation failures or a typed analysis-run
    /// failure. Local parsed arrays can be partially replaced before failure;
    /// accepted settings are not changed on an error or stopped run.
    pub fn calculate(
        &mut self,
        analysis: &mut HarmonicBalanceAnalysis,
        meters: &[HarmonicBalanceMeter],
        runtime: &mut impl HarmonicBalanceRuntime,
        host: &mut impl HarmonicBalanceCalculationHost,
    ) -> Result<CalculateOutcome, CalculateError> {
        let frequency_fields = comma_fields(&self.base_frequency_text);
        self.base_frequencies.resize(frequency_fields.len(), 0.0);
        for (index, field) in frequency_fields.iter().enumerate() {
            let frequency = field
                .parse::<f64>()
                .map_err(|_| CalculateError::InvalidBaseFrequency((*field).to_owned()))?;
            self.base_frequencies[index] = frequency;
            if frequency <= 0.0 {
                return Err(CalculateError::FrequencyNotPositive);
            }
        }

        let harmonic_fields = comma_fields(&self.number_of_harmonics_text);
        self.harmonic_counts.resize(harmonic_fields.len(), 0);
        if self.harmonic_counts.len() != self.base_frequencies.len() {
            return Err(CalculateError::HarmonicCountMismatch);
        }
        let mut largest_harmonic_count = 0_usize;
        for (index, field) in harmonic_fields.iter().enumerate() {
            let count = field
                .parse::<i32>()
                .map_err(|_| CalculateError::InvalidHarmonicCount((*field).to_owned()))?;
            self.harmonic_counts[index] = count;
            if count < 1 {
                return Err(CalculateError::HarmonicCountNotPositive);
            }
            if count > 64 {
                return Err(CalculateError::HarmonicCountAboveLimit);
            }
            let count =
                usize::try_from(count).map_err(|_| CalculateError::HarmonicCountNotPositive)?;
            largest_harmonic_count = largest_harmonic_count.max(count);
        }
        self.result_row_count = largest_harmonic_count + 4;

        let output_name = self
            .selected_output_index
            .and_then(|index| self.output_items.get(index))
            .cloned()
            .unwrap_or_default();
        host.show_progress(PROGRESS_CAPTION);
        let run_result = analysis.configure_and_run(
            HarmonicBalanceRunRequest {
                harmonic_counts: self.harmonic_counts.clone(),
                base_frequencies: self.base_frequencies.clone(),
                output_name: output_name.clone(),
                format_index: self.format.index(),
                initialization_option: None,
            },
            meters,
            runtime,
        );
        let outcome = match run_result {
            Ok(HarmonicBalanceRunOutcome::Completed) => {
                if !self.close_veto && !self.display_state.expanded {
                    host.expand_and_recenter_results(self.result_panel_width);
                    self.display_state.expanded = true;
                    self.display_state.draw_enabled = true;
                }
                self.close_veto = false;
                host.rebuild_result_grid_and_clipboard(self.format);
                self.accepted_settings = Some(RememberedSettings {
                    base_frequency_text: self.base_frequency_text.clone(),
                    number_of_harmonics_text: self.number_of_harmonics_text.clone(),
                    format: self.format,
                    selected_output: Some(output_name),
                });
                Ok(CalculateOutcome::Completed)
            }
            Ok(HarmonicBalanceRunOutcome::Cancelled) => Ok(CalculateOutcome::Stopped),
            Err(error) => Err(CalculateError::Run(error)),
        };
        host.hide_progress();
        host.refresh_main_window();
        outcome
    }

    /// Implements Ghidra function `FUN_01b54260` at `0x01B54260`.
    ///
    /// Builds and displays a plot from the already populated analysis, then
    /// accepts the modal dialog. It does not validate inputs, rerun analysis,
    /// rebuild the result grid, or save a file.
    pub fn draw_result(
        &mut self,
        analysis: &HarmonicBalanceAnalysis,
        host: &mut impl HarmonicBalanceDiagramHost,
    ) {
        analysis.build_and_display_diagram(host);
        self.modal_result = Some(ModalResult::Accepted);
    }

    /// Implements Ghidra function `FUN_01b546b0` at `0x01B546B0`.
    ///
    /// Creates a temporary Harmonic Balance options editor, preloads the
    /// complete raw options text, and shows it modally. Only `Ok` replaces the
    /// stored text. Cancel, close, and other results keep the previous value.
    /// Rust ownership destroys the temporary editor when this method returns.
    pub fn edit_options(&mut self, host: &mut impl HarmonicBalanceOptionsHost) {
        let mut dialog = OptionsWindow::default();
        dialog.load_text(&self.options_text);
        if host.show_modal(&mut dialog) == OptionsModalResult::Ok {
            self.options_text = dialog.export_text();
        }
    }

    pub fn replace_options_text(&mut self, value: impl Into<String>) {
        self.options_text = value.into();
    }

    /// Implements Ghidra function `FUN_01b531a0` at `0x01B531A0`.
    ///
    /// Stores the selected result format, rebuilds the grid from existing
    /// analysis results, and republishes the formatted table to the clipboard.
    /// It does not rerun the Harmonic Balance analysis.
    pub fn format_changed(
        &mut self,
        format: ResultFormat,
        host: &mut impl HarmonicBalancePresentationHost,
    ) {
        self.format = format;
        host.rebuild_result_grid_and_clipboard(format);
    }

    /// Implements Ghidra function `FUN_01b531b0` at `0x01B531B0`.
    ///
    /// Requests that the Harmonic Balance dialog be freed when it closes. The
    /// recovered handler has no other state change or external effect.
    #[must_use]
    pub const fn close_action(&self) -> CloseAction {
        CloseAction::Free
    }

    pub const fn request_close_veto(&mut self) {
        self.close_veto = true;
    }

    /// Implements Ghidra function `FUN_01b531c0` at `0x01B531C0`.
    ///
    /// Rejects a close only when the one-shot error marker is set. The marker
    /// is cleared after every query, so the next close is allowed unless a new
    /// error requests another veto.
    pub const fn query_close(&mut self) -> CloseQueryOutcome {
        let outcome = if self.close_veto {
            CloseQueryOutcome::Vetoed
        } else {
            CloseQueryOutcome::Allowed
        };
        self.close_veto = false;
        outcome
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        container(
            column![
                text(TITLE).size(24),
                pick_list(
                    ResultFormat::ALL,
                    Some(self.format),
                    Message::FormatSelected,
                ),
            ]
            .spacing(10),
        )
        .padding(16)
        .width(Length::Fill)
        .into()
    }

    #[must_use]
    pub const fn format(&self) -> ResultFormat {
        self.format
    }

    #[must_use]
    pub fn number_of_harmonics_text(&self) -> &str {
        &self.number_of_harmonics_text
    }

    #[must_use]
    pub fn base_frequency_text(&self) -> &str {
        &self.base_frequency_text
    }

    #[must_use]
    pub const fn analysis_options(&self) -> (bool, u32) {
        (
            self.creation_state.analysis_option_flag,
            self.analysis_option_value,
        )
    }

    #[must_use]
    pub const fn creation_flag(&self) -> bool {
        self.creation_state.creation_flag
    }

    #[must_use]
    pub const fn analysis_attached(&self) -> bool {
        self.creation_state.analysis_attached
    }

    #[must_use]
    pub const fn result_panel_width(&self) -> u32 {
        self.result_panel_width
    }

    #[must_use]
    pub const fn result_column_widths(&self) -> [u32; 3] {
        self.result_column_widths
    }

    #[must_use]
    pub const fn constraints(&self) -> WindowConstraints {
        self.constraints
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub fn base_frequencies(&self) -> &[f64] {
        &self.base_frequencies
    }

    #[must_use]
    pub fn harmonic_counts(&self) -> &[i32] {
        &self.harmonic_counts
    }

    #[must_use]
    pub fn output_items(&self) -> &[String] {
        &self.output_items
    }

    #[must_use]
    pub const fn selected_output_index(&self) -> Option<usize> {
        self.selected_output_index
    }

    #[must_use]
    pub const fn calculate_enabled(&self) -> bool {
        self.display_state.calculate_enabled
    }

    #[must_use]
    pub const fn client_height(&self) -> u32 {
        self.client_height
    }

    #[must_use]
    pub const fn result_row_count(&self) -> usize {
        self.result_row_count
    }

    #[must_use]
    pub const fn draw_enabled(&self) -> bool {
        self.display_state.draw_enabled
    }

    #[must_use]
    pub const fn accepted_settings(&self) -> Option<&RememberedSettings> {
        self.accepted_settings.as_ref()
    }

    #[must_use]
    pub const fn modal_result(&self) -> Option<ModalResult> {
        self.modal_result
    }

    #[must_use]
    pub fn options_text(&self) -> &str {
        &self.options_text
    }
}

fn comma_fields(source: &str) -> Vec<&str> {
    if source.trim().is_empty() {
        Vec::new()
    } else {
        source.split(',').map(str::trim).collect()
    }
}

/// Implements Ghidra function `FUN_01b53e60` at `0x01B53E60`.
///
/// Drops the recovered run-error context, removes the shared progress state,
/// and refreshes the main window. It does not restore analysis results or
/// accepted settings. The host owns the progress singleton, so hiding an
/// already absent progress view is a no-op.
pub fn cleanup_failed_run<T>(
    error_context: &mut Option<T>,
    host: &mut impl HarmonicBalanceCalculationHost,
) {
    error_context.take();
    host.hide_progress();
    host.refresh_main_window();
}

/// Implements Ghidra function `FUN_01b54290` at `0x01B54290`.
///
/// Builds the three-column Harmonic Balance result grid and the matching
/// Unicode clipboard text. Negative-frequency records are omitted. Polar mode
/// shows doubled magnitude and phase in degrees. Cartesian mode shows doubled
/// real and negated doubled imaginary coefficients. The recovered grid keeps
/// two spare rows beyond the parsed record count, including omitted records.
#[must_use]
pub fn format_result_table(
    analysis: &HarmonicBalanceAnalysis,
    format: ResultFormat,
    labels: &ResultLabels,
) -> ResultTable {
    let (first_value_header, second_value_header) = match format {
        ResultFormat::AmplitudePhase => (
            format!("{} (C)", labels.amplitude),
            format!("{} (ø)", labels.phase),
        ),
        ResultFormat::AmplitudeAAmplitudeB => (
            format!("{} (A)", labels.amplitude),
            format!("{} (B)", labels.amplitude),
        ),
    };
    let headers = [
        format!("{:>4}", labels.frequency),
        format!("{first_value_header:>17}"),
        format!("{second_value_header:>17}"),
    ];
    let rows = analysis
        .output
        .records
        .iter()
        .filter(|record| record.frequency >= 0.0)
        .filter_map(|record| {
            let value = record.values.first()?;
            let (first, second) = match format {
                ResultFormat::AmplitudePhase => (
                    value.first.hypot(value.second) * 2.0,
                    value.second.atan2(value.first).to_degrees(),
                ),
                ResultFormat::AmplitudeAAmplitudeB => (value.first * 2.0, value.second * -2.0),
            };
            Some([
                format_display_value(record.frequency, 4),
                format!("{:>15}", format_display_value(first, 4)),
                format!("{:>15}", format_display_value(second, 2)),
            ])
        })
        .collect::<Vec<_>>();
    let mut clipboard_text = "\r\n\r\n\r\n\r\n".to_owned();
    append_clipboard_row(&mut clipboard_text, &headers);
    for row in &rows {
        append_clipboard_row(&mut clipboard_text, row);
    }
    ResultTable {
        headers,
        rows,
        grid_row_count: analysis.output.records.len() + 2,
        clipboard_text,
    }
}

fn append_clipboard_row(target: &mut String, cells: &[String; 3]) {
    target.push_str(&cells[0]);
    target.push('\t');
    target.push_str(&cells[1]);
    target.push('\t');
    target.push_str(&cells[2]);
    target.push('\t');
    target.push_str("\r\n");
}

#[cfg(test)]
mod tests {
    use super::{
        CalculateError, CalculateOutcome, CloseAction, CloseQueryOutcome,
        HarmonicBalanceCalculationHost, HarmonicBalanceOptionsHost,
        HarmonicBalancePresentationHost, ModalResult, RememberedSettings, ResultFormat,
        ResultLabels, Window, WindowConstraints,
    };
    use crate::harmonic_balance_options::{
        Message as OptionsMessage, ModalResult as OptionsModalResult, Window as OptionsWindow,
    };
    use tiara_core::harmonic_balance_output::{
        ComplexValue, FrequencyRecord, HarmonicBalanceAnalysis, HarmonicBalanceDiagramHost,
        HarmonicBalanceMeter, HarmonicBalanceOutput, HarmonicBalancePlotData,
        HarmonicBalanceRunArtifacts, HarmonicBalanceRunPlan, HarmonicBalanceRuntime,
    };

    #[derive(Default)]
    struct Host(Vec<ResultFormat>);

    #[derive(Default)]
    struct CalculationHost {
        formats: Vec<ResultFormat>,
        progress_captions: Vec<String>,
        progress_hidden: usize,
        main_window_refreshes: usize,
        expanded_widths: Vec<u32>,
    }

    #[derive(Default)]
    struct Runtime {
        artifacts: Option<HarmonicBalanceRunArtifacts>,
    }

    #[derive(Default)]
    struct DiagramHost(Option<HarmonicBalancePlotData>);

    struct OptionsHost {
        replacement: Option<String>,
        result: OptionsModalResult,
        loaded_text: Option<String>,
    }

    impl HarmonicBalancePresentationHost for Host {
        fn rebuild_result_grid_and_clipboard(&mut self, format: ResultFormat) {
            self.0.push(format);
        }
    }

    impl HarmonicBalancePresentationHost for CalculationHost {
        fn rebuild_result_grid_and_clipboard(&mut self, format: ResultFormat) {
            self.formats.push(format);
        }
    }

    impl HarmonicBalanceCalculationHost for CalculationHost {
        fn show_progress(&mut self, caption: &str) {
            self.progress_captions.push(caption.to_owned());
        }

        fn hide_progress(&mut self) {
            self.progress_hidden += 1;
        }

        fn refresh_main_window(&mut self) {
            self.main_window_refreshes += 1;
        }

        fn expand_and_recenter_results(&mut self, result_panel_width: u32) {
            self.expanded_widths.push(result_panel_width);
        }
    }

    impl HarmonicBalanceRuntime for Runtime {
        fn derive_initialization_mode(&mut self) -> i32 {
            1
        }

        fn run(
            &mut self,
            _plan: &HarmonicBalanceRunPlan,
        ) -> Result<HarmonicBalanceRunArtifacts, String> {
            Ok(self.artifacts.take().expect("test run artifacts"))
        }
    }

    impl HarmonicBalanceDiagramHost for DiagramHost {
        fn replace_current_and_show(&mut self, data: HarmonicBalancePlotData) {
            self.0 = Some(data);
        }
    }

    impl HarmonicBalanceOptionsHost for OptionsHost {
        fn show_modal(&mut self, dialog: &mut OptionsWindow) -> OptionsModalResult {
            self.loaded_text = Some(dialog.text());
            if let Some(replacement) = self.replacement.take() {
                dialog.load_text(&replacement);
            }
            match self.result {
                OptionsModalResult::Ok => dialog.update(OptionsMessage::Accept),
                OptionsModalResult::Cancel => dialog.update(OptionsMessage::Cancel),
                OptionsModalResult::None => {}
            }
            dialog.modal_result()
        }
    }

    fn meter() -> HarmonicBalanceMeter {
        HarmonicBalanceMeter {
            name: "V(out)".to_owned(),
            positive_node: "out".to_owned(),
            negative_node: None,
        }
    }

    fn shown_window() -> Window {
        let mut window = Window::default();
        window.on_create(581, 371);
        window.on_show(
            &RememberedSettings {
                base_frequency_text: "50, 100".to_owned(),
                number_of_harmonics_text: "16, 8".to_owned(),
                format: ResultFormat::AmplitudePhase,
                selected_output: Some("V(out)".to_owned()),
            },
            &["V(out)".to_owned()],
            193,
        );
        window
    }

    #[test]
    fn format_change_rebuilds_existing_results_without_analysis_request() {
        let mut window = Window::default();
        let mut host = Host::default();

        window.format_changed(ResultFormat::AmplitudeAAmplitudeB, &mut host);

        assert_eq!(window.format(), ResultFormat::AmplitudeAAmplitudeB);
        assert_eq!(host.0, [ResultFormat::AmplitudeAAmplitudeB]);
    }

    #[test]
    fn close_requests_dialog_release() {
        assert_eq!(Window::default().close_action(), CloseAction::Free);
    }

    #[test]
    fn close_veto_applies_to_one_query_only() {
        let mut window = Window::default();
        window.request_close_veto();

        assert_eq!(window.query_close(), CloseQueryOutcome::Vetoed);
        assert_eq!(window.query_close(), CloseQueryOutcome::Allowed);
    }

    #[test]
    fn create_initializes_recovered_dialog_state_and_layout() {
        let mut window = Window::default();
        window.request_close_veto();

        window.on_create(581, 371);

        assert_eq!(window.number_of_harmonics_text(), "16");
        assert_eq!(window.analysis_options(), (false, 1));
        assert!(!window.creation_flag());
        assert!(!window.analysis_attached());
        assert_eq!(window.result_panel_width(), 371);
        assert_eq!(window.result_column_widths(), [116, 105, 105]);
        assert_eq!(
            window.constraints(),
            WindowConstraints {
                min_height: 581,
                max_height: 581,
            }
        );
        assert_eq!(window.help_context(), 0x4B5);
        assert_eq!(window.query_close(), CloseQueryOutcome::Allowed);
    }

    #[test]
    fn destroy_releases_both_parsed_analysis_input_arrays() {
        let mut window = Window::default();
        window.replace_analysis_inputs(vec![50.0, 100.0], vec![16, 8]);

        window.on_destroy();

        assert!(window.base_frequencies().is_empty());
        assert!(window.harmonic_counts().is_empty());
    }

    #[test]
    fn show_restores_saved_inputs_and_matching_output() {
        let mut window = Window::default();
        let settings = RememberedSettings {
            base_frequency_text: "50, 100".to_owned(),
            number_of_harmonics_text: "16, 8".to_owned(),
            format: ResultFormat::AmplitudeAAmplitudeB,
            selected_output: Some("V(out)".to_owned()),
        };
        let outputs = vec!["V(in)".to_owned(), "V(out)".to_owned()];

        window.on_show(&settings, &outputs, 193);

        assert_eq!(window.base_frequency_text(), "50, 100");
        assert_eq!(window.number_of_harmonics_text(), "16, 8");
        assert_eq!(window.format(), ResultFormat::AmplitudeAAmplitudeB);
        assert_eq!(window.output_items(), outputs);
        assert_eq!(window.selected_output_index(), Some(1));
        assert!(window.calculate_enabled());
        assert_eq!(window.client_height(), 193);
    }

    #[test]
    fn show_selects_first_output_when_saved_output_is_missing() {
        let mut window = Window::default();
        let settings = RememberedSettings {
            base_frequency_text: String::new(),
            number_of_harmonics_text: String::new(),
            format: ResultFormat::default(),
            selected_output: Some("missing".to_owned()),
        };
        window.on_show(&settings, &["V(first)".to_owned()], 193);

        assert_eq!(window.selected_output_index(), Some(0));
        assert!(window.calculate_enabled());
    }

    #[test]
    fn show_disables_calculate_when_no_output_exists() {
        let mut window = Window::default();
        let settings = RememberedSettings {
            base_frequency_text: String::new(),
            number_of_harmonics_text: String::new(),
            format: ResultFormat::default(),
            selected_output: None,
        };
        window.on_show(&settings, &[], 193);

        assert_eq!(window.selected_output_index(), None);
        assert!(!window.calculate_enabled());
    }

    #[test]
    fn calculate_runs_expands_publishes_and_commits_settings() {
        let mut window = shown_window();
        let mut analysis = HarmonicBalanceAnalysis::default();
        let mut runtime = Runtime {
            artifacts: Some(HarmonicBalanceRunArtifacts {
                cancelled: false,
                result: Some("frequency out.real out.imag\n50 1 2".to_owned()),
                simulator_log: None,
            }),
        };
        let mut host = CalculationHost::default();

        let outcome = window
            .calculate(&mut analysis, &[meter()], &mut runtime, &mut host)
            .expect("clean analysis result");

        assert_eq!(outcome, CalculateOutcome::Completed);
        assert_eq!(window.base_frequencies(), [50.0, 100.0]);
        assert_eq!(window.harmonic_counts(), [16, 8]);
        assert_eq!(window.result_row_count(), 20);
        assert!(window.draw_enabled());
        assert_eq!(host.expanded_widths, [371]);
        assert_eq!(host.formats, [ResultFormat::AmplitudePhase]);
        assert_eq!(host.progress_hidden, 1);
        assert_eq!(host.main_window_refreshes, 1);
        assert_eq!(
            window.accepted_settings(),
            Some(&RememberedSettings {
                base_frequency_text: "50, 100".to_owned(),
                number_of_harmonics_text: "16, 8".to_owned(),
                format: ResultFormat::AmplitudePhase,
                selected_output: Some("V(out)".to_owned()),
            })
        );
    }

    #[test]
    fn calculate_rejects_mismatched_lists_before_starting_progress() {
        let mut window = shown_window();
        window.number_of_harmonics_text = "16".to_owned();
        let mut analysis = HarmonicBalanceAnalysis::default();
        let mut runtime = Runtime::default();
        let mut host = CalculationHost::default();

        let error = window
            .calculate(&mut analysis, &[meter()], &mut runtime, &mut host)
            .expect_err("mismatched list lengths");

        assert_eq!(error, CalculateError::HarmonicCountMismatch);
        assert_eq!(window.base_frequencies(), [50.0, 100.0]);
        assert_eq!(window.harmonic_counts(), [0]);
        assert!(host.progress_captions.is_empty());
        assert!(window.accepted_settings().is_none());
    }

    #[test]
    fn stopped_run_cleans_progress_without_publishing_or_committing() {
        let mut window = shown_window();
        let mut analysis = HarmonicBalanceAnalysis::default();
        let mut runtime = Runtime {
            artifacts: Some(HarmonicBalanceRunArtifacts {
                cancelled: true,
                result: None,
                simulator_log: None,
            }),
        };
        let mut host = CalculationHost::default();

        let outcome = window
            .calculate(&mut analysis, &[meter()], &mut runtime, &mut host)
            .expect("stopped analysis");

        assert_eq!(outcome, CalculateOutcome::Stopped);
        assert!(host.formats.is_empty());
        assert!(host.expanded_widths.is_empty());
        assert_eq!(host.progress_hidden, 1);
        assert_eq!(host.main_window_refreshes, 1);
        assert!(window.accepted_settings().is_none());
    }

    #[test]
    fn failed_run_cleanup_drops_context_progress_and_refreshes_main_window() {
        let mut context = Some("run error".to_owned());
        let mut host = CalculationHost::default();

        super::cleanup_failed_run(&mut context, &mut host);

        assert!(context.is_none());
        assert_eq!(host.progress_hidden, 1);
        assert_eq!(host.main_window_refreshes, 1);
        assert!(host.formats.is_empty());
    }

    #[test]
    fn draw_builds_plot_before_accepting_the_modal_dialog() {
        let mut window = Window::default();
        let analysis = HarmonicBalanceAnalysis {
            base_frequencies: vec![50.0],
            output: HarmonicBalanceOutput {
                records: vec![FrequencyRecord {
                    frequency: 50.0,
                    values: vec![ComplexValue::new(3.0, 4.0)],
                }],
                complex_value_count: 1,
            },
            ..HarmonicBalanceAnalysis::default()
        };
        let mut host = DiagramHost::default();

        window.draw_result(&analysis, &mut host);

        assert!(host.0.is_some());
        assert_eq!(window.modal_result(), Some(ModalResult::Accepted));
    }

    #[test]
    fn result_table_formats_polar_values_and_skips_negative_frequencies() {
        let analysis = HarmonicBalanceAnalysis {
            output: HarmonicBalanceOutput {
                records: vec![
                    FrequencyRecord {
                        frequency: -1.0,
                        values: vec![ComplexValue::new(9.0, 9.0)],
                    },
                    FrequencyRecord {
                        frequency: 50.0,
                        values: vec![ComplexValue::new(3.0, 4.0)],
                    },
                ],
                complex_value_count: 1,
            },
            ..HarmonicBalanceAnalysis::default()
        };

        let table = super::format_result_table(
            &analysis,
            ResultFormat::AmplitudePhase,
            &ResultLabels::default(),
        );

        assert_eq!(table.grid_row_count, 4);
        assert_eq!(table.rows.len(), 1);
        assert_eq!(table.rows[0][0], "50");
        assert_eq!(table.rows[0][1].trim(), "10");
        assert_eq!(table.rows[0][2].trim(), "53.13");
        assert!(table.clipboard_text.starts_with("\r\n\r\n\r\n\r\n"));
        assert!(table.clipboard_text.contains('\t'));
    }

    #[test]
    fn result_table_formats_cartesian_coefficients() {
        let analysis = HarmonicBalanceAnalysis {
            output: HarmonicBalanceOutput {
                records: vec![FrequencyRecord {
                    frequency: 100.0,
                    values: vec![ComplexValue::new(1.5, -2.5)],
                }],
                complex_value_count: 1,
            },
            ..HarmonicBalanceAnalysis::default()
        };

        let table = super::format_result_table(
            &analysis,
            ResultFormat::AmplitudeAAmplitudeB,
            &ResultLabels::default(),
        );

        assert_eq!(table.rows[0][1].trim(), "3");
        assert_eq!(table.rows[0][2].trim(), "5");
        assert!(table.headers[1].ends_with("Amplitude (A)"));
        assert!(table.headers[2].ends_with("Amplitude (B)"));
    }

    #[test]
    fn options_editor_commits_complete_text_only_after_ok() {
        let mut window = Window::default();
        window.replace_options_text("previous=1");
        let mut host = OptionsHost {
            replacement: Some("TAHB=2\nraw option".to_owned()),
            result: OptionsModalResult::Ok,
            loaded_text: None,
        };

        window.edit_options(&mut host);

        assert_eq!(host.loaded_text.as_deref(), Some("previous=1"));
        assert_eq!(window.options_text(), "TAHB=2\nraw option");
    }

    #[test]
    fn options_editor_keeps_previous_text_after_cancel() {
        let mut window = Window::default();
        window.replace_options_text("previous=1");
        let mut host = OptionsHost {
            replacement: Some("discarded".to_owned()),
            result: OptionsModalResult::Cancel,
            loaded_text: None,
        };

        window.edit_options(&mut host);

        assert_eq!(window.options_text(), "previous=1");
    }
}
