use iced::widget::{button, column, container, pick_list, row, text, text_input};
use iced::{Element, Length};
use tiara_core::optimization::{OptimizationSettings, OrderedRange, ParameterScale, SearchMethod};

pub const TITLE: &str = "Optimization settings";
const METHODS: [SearchMethod; 2] = [SearchMethod::Simple, SearchMethod::Pattern];
const SCALES: [ParameterScale; 2] = [ParameterScale::Linear, ParameterScale::Logarithmic];

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum ValidationState {
    #[default]
    Clear,
    BlockClose,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum GridCommitState {
    #[default]
    Valid,
    Invalid,
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct NumericEdits {
    relative_error: String,
    maximum_iterations: String,
    simple_subdivisions: String,
    pattern_subdivisions: String,
    points: String,
    start: String,
    end: String,
}

impl NumericEdits {
    fn from_model(model: &OptimizationSettings, range: OrderedRange) -> Self {
        Self {
            relative_error: model.relative_error.to_string(),
            maximum_iterations: model.maximum_iterations.to_string(),
            simple_subdivisions: model.simple_subdivisions.to_string(),
            pattern_subdivisions: model.pattern_subdivisions.to_string(),
            points: range.points.to_string(),
            start: range.start.to_string(),
            end: range.end.to_string(),
        }
    }
}

#[derive(Debug, Clone)]
pub enum FrequencyMessage {
    MethodSelected(SearchMethod),
    ScaleSelected(ParameterScale),
    RelativeErrorChanged(String),
    MaximumIterationsChanged(String),
    SimpleSubdivisionsChanged(String),
    PatternSubdivisionsChanged(String),
    PointsChanged(String),
    StartChanged(String),
    EndChanged(String),
    Ok,
}

#[derive(Debug, Clone, PartialEq)]
pub struct FrequencyWindow {
    model: OptimizationSettings,
    range: OrderedRange,
    edits: NumericEdits,
    active_page: Option<SearchMethod>,
    grid_commit_state: GridCommitState,
    validation_state: ValidationState,
    last_error: Option<String>,
    notebook_height: u16,
    help_context: u32,
    frequency_controls_visible: bool,
}

impl FrequencyWindow {
    #[must_use]
    pub fn new(model: OptimizationSettings, range: OrderedRange, form_mode: u8) -> Self {
        let edits = NumericEdits::from_model(&model, range);
        let mut window = Self {
            active_page: Some(model.method),
            model,
            range,
            edits,
            grid_commit_state: GridCommitState::Valid,
            validation_state: ValidationState::Clear,
            last_error: None,
            notebook_height: 0,
            help_context: 0,
            frequency_controls_visible: true,
        };
        window.create_form(form_mode);
        window
    }

    pub fn update(&mut self, message: FrequencyMessage) {
        match message {
            FrequencyMessage::MethodSelected(method) => self.select_method_page(method.index()),
            FrequencyMessage::ScaleSelected(scale) => self.model.parameter_scale = scale,
            FrequencyMessage::RelativeErrorChanged(value) => self.edits.relative_error = value,
            FrequencyMessage::MaximumIterationsChanged(value) => {
                self.edits.maximum_iterations = value;
            }
            FrequencyMessage::SimpleSubdivisionsChanged(value) => {
                self.edits.simple_subdivisions = value;
            }
            FrequencyMessage::PatternSubdivisionsChanged(value) => {
                self.edits.pattern_subdivisions = value;
            }
            FrequencyMessage::PointsChanged(value) => self.edits.points = value,
            FrequencyMessage::StartChanged(value) => self.edits.start = value,
            FrequencyMessage::EndChanged(value) => self.edits.end = value,
            FrequencyMessage::Ok => {
                self.apply_settings();
            }
        }
    }

    /// Ports Ghidra function `FUN_0136eb70` at `0x0136EB70`.
    ///
    /// The database maps the original event to `TOpt_W.FormCreate`. It loads
    /// the parameter grid and numeric controls from the working model, selects
    /// Simple Search, records help context `0x481`, and hides one optional
    /// control unless the caller mode is `8`.
    pub fn create_form(&mut self, form_mode: u8) {
        self.model.method = SearchMethod::Simple;
        self.active_page = Some(SearchMethod::Simple);
        self.edits = NumericEdits::from_model(&self.model, self.range);
        self.help_context = 0x481;
        self.frequency_controls_visible = form_mode == 8;
    }

    /// Ports Ghidra function `FUN_0136ee20` at `0x0136EE20`.
    ///
    /// The database maps the original function to `TOpt_W.OkbtnClick`. It
    /// commits the parameter grid, copies all settings, clamps Pattern Search
    /// values, then validates `0 < start < end <= 1e50`. The model writes are
    /// intentionally not rolled back when the final range check fails.
    pub fn apply_settings(&mut self) -> bool {
        if self.grid_commit_state == GridCommitState::Invalid {
            self.validation_state = ValidationState::BlockClose;
            return false;
        }

        let Ok(relative_error) = self.edits.relative_error.parse::<f64>() else {
            self.report_float_error("Invalid relative error".to_owned());
            return false;
        };
        let maximum_iterations_text = self.edits.maximum_iterations.clone();
        let Some(maximum_iterations) = self.parse_integer_edit(&maximum_iterations_text) else {
            return false;
        };
        let simple_subdivisions_text = self.edits.simple_subdivisions.clone();
        let Some(simple_subdivisions) = self.parse_integer_edit(&simple_subdivisions_text) else {
            return false;
        };
        let pattern_subdivisions_text = self.edits.pattern_subdivisions.clone();
        let Some(pattern_subdivisions) = self.parse_integer_edit(&pattern_subdivisions_text) else {
            return false;
        };
        let points_text = self.edits.points.clone();
        let Some(points) = self.parse_integer_edit(&points_text) else {
            return false;
        };
        let Ok(start) = self.edits.start.parse::<f64>() else {
            self.report_float_error("Invalid start frequency".to_owned());
            return false;
        };
        let Ok(end) = self.edits.end.parse::<f64>() else {
            self.report_float_error("Invalid end frequency".to_owned());
            return false;
        };

        self.model.relative_error = relative_error;
        self.model.maximum_iterations = maximum_iterations;
        self.model.simple_subdivisions = simple_subdivisions;
        self.model.pattern_subdivisions = pattern_subdivisions;
        self.model.clamp_pattern_parameters();
        self.range = OrderedRange { points, start, end };

        if let Err(error) = self.range.validate_frequency() {
            self.report_float_error(error.to_string());
            return false;
        }
        true
    }

    /// Ports Ghidra function `FUN_0136f110` at `0x0136F110`.
    ///
    /// The database maps the original function to `TOpt_W.methodClick`. A
    /// valid item selects the matching page. An invalid index clears it.
    pub const fn select_method_page(&mut self, index: i32) {
        self.active_page = SearchMethod::from_index(index);
        if let Some(method) = self.active_page {
            self.model.method = method;
        }
    }

    /// Ports Ghidra function `FUN_0136f140` at `0x0136F140`.
    ///
    /// It forwards the floating-point editor's configured error message to the
    /// form's first-error gate.
    pub fn report_float_error(&mut self, message: String) {
        self.report_first_error(message);
    }

    /// Ports Ghidra function `FUN_0136f160` at `0x0136F160`.
    ///
    /// It forwards the integer editor's configured error message to the same
    /// first-error gate.
    pub fn report_integer_error(&mut self, message: String) {
        self.report_first_error(message);
    }

    /// Ports Ghidra function `FUN_0136f180` at `0x0136F180`.
    ///
    /// The database maps the original function to `TOpt_W.FormCloseQuery`. It
    /// rejects one close while an error is set, then clears the gate.
    pub fn query_close(&mut self) -> bool {
        let can_close = self.validation_state == ValidationState::Clear;
        self.validation_state = ValidationState::Clear;
        can_close
    }

    /// Ports Ghidra function `FUN_0136f1a0` at `0x0136F1A0`.
    ///
    /// The Notebook change handler fixes the active page client height to 150.
    pub const fn resize_notebook_page(&mut self) {
        self.notebook_height = 150;
    }

    fn parse_integer_edit(&mut self, value: &str) -> Option<u16> {
        value.parse::<u16>().map_or_else(
            |_| {
                self.report_integer_error("Invalid integer value".to_owned());
                None
            },
            Some,
        )
    }

    fn report_first_error(&mut self, message: String) {
        if self.validation_state == ValidationState::Clear {
            self.last_error = Some(message);
        }
        self.validation_state = ValidationState::BlockClose;
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, FrequencyMessage> {
        let method = self.active_page.unwrap_or(SearchMethod::Simple);
        container(
            column![
                text(TITLE).size(24),
                pick_list(METHODS, Some(method), FrequencyMessage::MethodSelected),
                row![
                    labeled_edit(
                        "Relative error",
                        &self.edits.relative_error,
                        FrequencyMessage::RelativeErrorChanged
                    ),
                    labeled_edit(
                        "Maximum iterations",
                        &self.edits.maximum_iterations,
                        FrequencyMessage::MaximumIterationsChanged
                    ),
                ]
                .spacing(8),
                method_controls(
                    method,
                    self.model.parameter_scale,
                    &self.edits,
                    FrequencyMessage::ScaleSelected,
                    FrequencyMessage::SimpleSubdivisionsChanged,
                    FrequencyMessage::PatternSubdivisionsChanged,
                ),
                row![
                    labeled_edit(
                        "Points",
                        &self.edits.points,
                        FrequencyMessage::PointsChanged
                    ),
                    labeled_edit(
                        "Start frequency",
                        &self.edits.start,
                        FrequencyMessage::StartChanged
                    ),
                    labeled_edit(
                        "End frequency",
                        &self.edits.end,
                        FrequencyMessage::EndChanged
                    ),
                ]
                .spacing(8),
                self.last_error.as_ref().map_or_else(
                    || text(""),
                    |message| text(message).style(iced::widget::text::danger)
                ),
                button("OK").on_press(FrequencyMessage::Ok),
            ]
            .spacing(12),
        )
        .padding(16)
        .width(Length::Fill)
        .into()
    }

    #[must_use]
    pub const fn model(&self) -> &OptimizationSettings {
        &self.model
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DcMode {
    InputSweep,
    AlternateRange,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct InputSource {
    pub name: String,
    pub type_code: u16,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InputUnitCategory {
    Category1,
    Category2,
    Category3,
    Category4,
    Category5,
    Category6,
    Category7,
}

impl InputUnitCategory {
    const fn label(self) -> &'static str {
        match self {
            Self::Category1 => "[unit category 1]",
            Self::Category2 => "[unit category 2]",
            Self::Category3 => "[unit category 3]",
            Self::Category4 => "[unit category 4]",
            Self::Category5 => "[unit category 5]",
            Self::Category6 => "[unit category 6]",
            Self::Category7 => "[unit category 7]",
        }
    }
}

#[derive(Debug, Clone)]
pub enum DcMessage {
    MethodSelected(SearchMethod),
    ScaleSelected(ParameterScale),
    RelativeErrorChanged(String),
    MaximumIterationsChanged(String),
    SimpleSubdivisionsChanged(String),
    PatternSubdivisionsChanged(String),
    PointsChanged(String),
    StartChanged(String),
    EndChanged(String),
    InputSelected(String),
    Ok,
}

#[derive(Debug, Clone, PartialEq)]
pub struct DcWindow {
    model: OptimizationSettings,
    range: OrderedRange,
    edits: NumericEdits,
    mode: DcMode,
    inputs: Vec<InputSource>,
    selected_input: Option<String>,
    input_unit: InputUnitCategory,
    active_page: Option<SearchMethod>,
    grid_commit_state: GridCommitState,
    validation_state: ValidationState,
    last_error: Option<String>,
    notebook_height: u16,
    help_context: u32,
}

impl DcWindow {
    #[must_use]
    pub fn new(
        model: OptimizationSettings,
        range: OrderedRange,
        mode: DcMode,
        inputs: Vec<InputSource>,
        selected_input: Option<String>,
    ) -> Self {
        let edits = NumericEdits::from_model(&model, range);
        let mut window = Self {
            active_page: Some(model.method),
            model,
            range,
            edits,
            mode,
            inputs,
            selected_input,
            input_unit: InputUnitCategory::Category7,
            grid_commit_state: GridCommitState::Valid,
            validation_state: ValidationState::Clear,
            last_error: None,
            notebook_height: 0,
            help_context: 0,
        };
        window.create_form();
        window
    }

    pub fn update(&mut self, message: DcMessage) {
        match message {
            DcMessage::MethodSelected(method) => self.select_method_page(method.index()),
            DcMessage::ScaleSelected(scale) => self.model.parameter_scale = scale,
            DcMessage::RelativeErrorChanged(value) => self.edits.relative_error = value,
            DcMessage::MaximumIterationsChanged(value) => self.edits.maximum_iterations = value,
            DcMessage::SimpleSubdivisionsChanged(value) => {
                self.edits.simple_subdivisions = value;
            }
            DcMessage::PatternSubdivisionsChanged(value) => {
                self.edits.pattern_subdivisions = value;
            }
            DcMessage::PointsChanged(value) => self.edits.points = value,
            DcMessage::StartChanged(value) => self.edits.start = value,
            DcMessage::EndChanged(value) => self.edits.end = value,
            DcMessage::InputSelected(input) => {
                self.selected_input = Some(input);
                self.refresh_input_units();
            }
            DcMessage::Ok => {
                self.apply_settings();
            }
        }
    }

    /// Ports Ghidra function `FUN_013700c0` at `0x013700C0`.
    ///
    /// The database maps the original event to `TOpt_DC.FormCreate`. It loads
    /// the shared optimization settings and mode-specific range, initializes
    /// the input selector for Input Sweep mode, and records help context
    /// `0x481`.
    pub fn create_form(&mut self) {
        self.model.method = SearchMethod::Simple;
        self.active_page = Some(SearchMethod::Simple);
        self.edits = NumericEdits::from_model(&self.model, self.range);
        self.help_context = 0x481;
        if self.mode == DcMode::InputSweep {
            self.refresh_input_units();
        }
    }

    /// Ports Ghidra function `FUN_01370a40` at `0x01370A40`.
    ///
    /// The database maps the original function to `TOpt_DC.OkbtnClick`. It
    /// commits common settings and Pattern Search bounds first, then commits
    /// the mode-specific ordered range and selected input. Earlier writes are
    /// not rolled back when a later check fails.
    pub fn apply_settings(&mut self) -> bool {
        if self.grid_commit_state == GridCommitState::Invalid {
            self.validation_state = ValidationState::BlockClose;
            return false;
        }
        let Ok(relative_error) = self.edits.relative_error.parse::<f64>() else {
            self.report_float_error("Invalid relative error".to_owned());
            return false;
        };
        let maximum_iterations_text = self.edits.maximum_iterations.clone();
        let Some(maximum_iterations) = self.parse_integer_edit(&maximum_iterations_text) else {
            return false;
        };
        let simple_subdivisions_text = self.edits.simple_subdivisions.clone();
        let Some(simple_subdivisions) = self.parse_integer_edit(&simple_subdivisions_text) else {
            return false;
        };
        let pattern_subdivisions_text = self.edits.pattern_subdivisions.clone();
        let Some(pattern_subdivisions) = self.parse_integer_edit(&pattern_subdivisions_text) else {
            return false;
        };
        let points_text = self.edits.points.clone();
        let Some(points) = self.parse_integer_edit(&points_text) else {
            return false;
        };
        let Ok(start) = self.edits.start.parse::<f64>() else {
            self.report_float_error("Invalid start value".to_owned());
            return false;
        };
        let Ok(end) = self.edits.end.parse::<f64>() else {
            self.report_float_error("Invalid end value".to_owned());
            return false;
        };

        self.model.relative_error = relative_error;
        self.model.maximum_iterations = maximum_iterations;
        self.model.simple_subdivisions = simple_subdivisions;
        self.model.pattern_subdivisions = pattern_subdivisions;
        self.model.clamp_pattern_parameters();
        self.range = OrderedRange { points, start, end };

        if self.range.validate_order().is_err() {
            self.report_float_error(
                "The end value must be greater than the start value.".to_owned(),
            );
            return false;
        }
        if self.mode == DcMode::InputSweep
            && self
                .selected_input
                .as_ref()
                .is_none_or(|selected| !self.inputs.iter().any(|input| &input.name == selected))
        {
            self.report_float_error("The selected input is not available.".to_owned());
            return false;
        }
        true
    }

    /// Ports Ghidra function `FUN_01370f40` at `0x01370F40`.
    ///
    /// The database maps the original function to `TOpt_DC.methodClick` and
    /// selects the page whose index matches the method item.
    pub const fn select_method_page(&mut self, index: i32) {
        self.active_page = SearchMethod::from_index(index);
        if let Some(method) = self.active_page {
            self.model.method = method;
        }
    }

    /// Ports Ghidra function `FUN_01370f70` at `0x01370F70`.
    pub fn report_float_error(&mut self, message: String) {
        self.report_first_error(message);
    }

    /// Ports Ghidra function `FUN_01370f90` at `0x01370F90`.
    pub fn report_integer_error(&mut self, message: String) {
        self.report_first_error(message);
    }

    /// Ports Ghidra function `FUN_01370fb0` at `0x01370FB0`.
    ///
    /// It rejects one close while validation is blocked, then clears the gate.
    pub fn query_close(&mut self) -> bool {
        let can_close = self.validation_state == ValidationState::Clear;
        self.validation_state = ValidationState::Clear;
        can_close
    }

    /// Ports Ghidra function `FUN_01370fd0` at `0x01370FD0`.
    ///
    /// The selected source type maps to one of seven recovered unit categories
    /// and updates both range-unit labels. Original localized unit strings are
    /// unavailable, so the clean-room UI keeps the proven category identity.
    pub fn refresh_input_units(&mut self) {
        let type_code = self
            .selected_input
            .as_ref()
            .and_then(|selected| self.inputs.iter().find(|input| &input.name == selected))
            .map_or(0, |input| input.type_code);
        self.input_unit = input_unit_category(type_code);
    }

    /// Ports Ghidra function `FUN_013711a0` at `0x013711A0`.
    pub const fn resize_notebook_page(&mut self) {
        self.notebook_height = 150;
    }

    fn parse_integer_edit(&mut self, value: &str) -> Option<u16> {
        value.parse::<u16>().map_or_else(
            |_| {
                self.report_integer_error("Invalid integer value".to_owned());
                None
            },
            Some,
        )
    }

    fn report_first_error(&mut self, message: String) {
        if self.validation_state == ValidationState::Clear {
            self.last_error = Some(message);
        }
        self.validation_state = ValidationState::BlockClose;
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, DcMessage> {
        let method = self.active_page.unwrap_or(SearchMethod::Simple);
        let input_names = self
            .inputs
            .iter()
            .map(|input| input.name.clone())
            .collect::<Vec<_>>();
        let input_controls: Element<'_, DcMessage> = if self.mode == DcMode::InputSweep {
            column![
                pick_list(
                    input_names,
                    self.selected_input.clone(),
                    DcMessage::InputSelected
                ),
                text(self.input_unit.label()),
            ]
            .spacing(4)
            .into()
        } else {
            text("Alternate range").into()
        };

        container(
            column![
                text(TITLE).size(24),
                pick_list(METHODS, Some(method), DcMessage::MethodSelected),
                row![
                    labeled_edit(
                        "Relative error",
                        &self.edits.relative_error,
                        DcMessage::RelativeErrorChanged
                    ),
                    labeled_edit(
                        "Maximum iterations",
                        &self.edits.maximum_iterations,
                        DcMessage::MaximumIterationsChanged
                    ),
                ]
                .spacing(8),
                method_controls(
                    method,
                    self.model.parameter_scale,
                    &self.edits,
                    DcMessage::ScaleSelected,
                    DcMessage::SimpleSubdivisionsChanged,
                    DcMessage::PatternSubdivisionsChanged,
                ),
                input_controls,
                row![
                    labeled_edit("Points", &self.edits.points, DcMessage::PointsChanged),
                    labeled_edit("Start", &self.edits.start, DcMessage::StartChanged),
                    labeled_edit("End", &self.edits.end, DcMessage::EndChanged),
                ]
                .spacing(8),
                self.last_error.as_ref().map_or_else(
                    || text(""),
                    |message| text(message).style(iced::widget::text::danger)
                ),
                button("OK").on_press(DcMessage::Ok),
            ]
            .spacing(12),
        )
        .padding(16)
        .width(Length::Fill)
        .into()
    }

    #[must_use]
    pub const fn input_unit(&self) -> InputUnitCategory {
        self.input_unit
    }
}

const fn input_unit_category(type_code: u16) -> InputUnitCategory {
    match type_code {
        0x24 | 0x6c => InputUnitCategory::Category1,
        9 | 0x6b | 200 | 0xd2 | 0xdc => InputUnitCategory::Category2,
        0x10 | 0xd9 | 0xda => InputUnitCategory::Category3,
        0x0e | 0x43 => InputUnitCategory::Category4,
        0x0f => InputUnitCategory::Category5,
        0x0d => InputUnitCategory::Category6,
        _ => InputUnitCategory::Category7,
    }
}

fn labeled_edit<'a, Message>(
    label: &'a str,
    value: &'a str,
    on_input: impl Fn(String) -> Message + 'a,
) -> Element<'a, Message>
where
    Message: Clone + 'a,
{
    column![text(label), text_input("", value).on_input(on_input)]
        .spacing(3)
        .into()
}

fn method_controls<'a, Message>(
    method: SearchMethod,
    scale: ParameterScale,
    edits: &'a NumericEdits,
    on_scale: impl Fn(ParameterScale) -> Message + 'a,
    on_simple: impl Fn(String) -> Message + 'a,
    on_pattern: impl Fn(String) -> Message + 'a,
) -> Element<'a, Message>
where
    Message: Clone + 'a,
{
    match method {
        SearchMethod::Simple => row![
            labeled_edit("Maximum subdivision", &edits.simple_subdivisions, on_simple),
            pick_list(SCALES, Some(scale), on_scale),
        ]
        .spacing(8)
        .into(),
        SearchMethod::Pattern => labeled_edit(
            "Search subdivision",
            &edits.pattern_subdivisions,
            on_pattern,
        ),
    }
}

#[cfg(test)]
mod tests {
    use super::{DcMode, DcWindow, FrequencyWindow, InputSource, InputUnitCategory, SearchMethod};
    use tiara_core::optimization::{OptimizationParameter, OptimizationSettings, OrderedRange};

    fn model() -> OptimizationSettings {
        OptimizationSettings {
            parameters: vec![OptimizationParameter {
                name: "R".to_owned(),
                lower_bound: 1.0,
                upper_bound: 10.0,
                value: 20.0,
            }],
            ..OptimizationSettings::default()
        }
    }

    fn range() -> OrderedRange {
        OrderedRange {
            points: 10,
            start: 1.0,
            end: 10.0,
        }
    }

    #[test]
    fn frequency_create_selects_simple_search_and_records_mode_visibility() {
        let window = FrequencyWindow::new(model(), range(), 7);

        assert_eq!(window.active_page, Some(SearchMethod::Simple));
        assert_eq!(window.help_context, 0x481);
        assert!(!window.frequency_controls_visible);
    }

    #[test]
    fn frequency_method_invalid_index_clears_active_page() {
        let mut window = FrequencyWindow::new(model(), range(), 8);

        window.select_method_page(1);
        assert_eq!(window.active_page, Some(SearchMethod::Pattern));
        window.select_method_page(2);
        assert_eq!(window.active_page, None);
    }

    #[test]
    fn frequency_commit_clamps_before_final_range_error_and_close_rejects_once() {
        let mut window = FrequencyWindow::new(model(), range(), 8);
        window.select_method_page(1);
        window.edits.start = "10".to_owned();
        window.edits.end = "1".to_owned();

        assert!(!window.apply_settings());
        assert!((window.model().parameters[0].value - 10.0).abs() <= f64::EPSILON);
        assert!(!window.query_close());
        assert!(window.query_close());
    }

    #[test]
    fn notebook_handlers_apply_the_recovered_height() {
        let mut frequency = FrequencyWindow::new(model(), range(), 8);
        frequency.resize_notebook_page();
        assert_eq!(frequency.notebook_height, 150);

        let mut dc = DcWindow::new(model(), range(), DcMode::AlternateRange, vec![], None);
        dc.resize_notebook_page();
        assert_eq!(dc.notebook_height, 150);
    }

    #[test]
    fn dc_input_types_map_to_the_seven_recovered_unit_categories() {
        let inputs = vec![
            InputSource {
                name: "source".to_owned(),
                type_code: 0x24,
            },
            InputSource {
                name: "other".to_owned(),
                type_code: 0xffff,
            },
        ];
        let mut window = DcWindow::new(
            model(),
            range(),
            DcMode::InputSweep,
            inputs,
            Some("source".to_owned()),
        );
        assert_eq!(window.input_unit(), InputUnitCategory::Category1);

        window.selected_input = Some("other".to_owned());
        window.refresh_input_units();
        assert_eq!(window.input_unit(), InputUnitCategory::Category7);
    }

    #[test]
    fn dc_commit_requires_ordered_range_and_available_input() {
        let mut window = DcWindow::new(
            model(),
            range(),
            DcMode::InputSweep,
            vec![InputSource {
                name: "source".to_owned(),
                type_code: 9,
            }],
            Some("missing".to_owned()),
        );

        assert!(!window.apply_settings());
        assert!(!window.query_close());
        assert!(window.query_close());
    }
}
