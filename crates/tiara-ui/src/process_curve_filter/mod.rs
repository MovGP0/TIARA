//! Process curve filter dialog state and host-effect adapters.

use std::collections::BTreeMap;
use std::fmt;

use iced::widget::{button, column, container, pick_list, row, text, text_input};
use iced::{Element, Length};

pub const TITLE: &str = "Process curve";
pub const FORM_RESOURCE: &str = "PyProcessForm";

const BUTTERWORTH_DEFINITION: &str = "butterworth;N,3,i;Wn,0.03,f";
const UNIFORM_DEFINITION: &str = "uniform_filter1d;N,100,i";
const BUTTERWORTH_HELP: &str =
    "https://docs.scipy.org/doc/scipy/reference/generated/scipy.signal.butter.html";
const UNIFORM_HELP: &str =
    "https://docs.scipy.org/doc/scipy/reference/generated/scipy.ndimage.uniform_filter.html";

pub trait BrowserAdapter {
    fn open(&mut self, url: &str);
}

pub trait PythonRunnerAdapter {
    fn run(&mut self, request: &ProcessCurveRequest);
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

#[derive(Debug, Clone, PartialEq)]
pub enum ArgumentValue {
    Text(String),
    Integer(i32),
    FloatingPoint(f64),
}

#[derive(Debug, Clone, PartialEq)]
pub struct ProcessCurveRequest {
    pub arguments: BTreeMap<String, ArgumentValue>,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct FilterSettings {
    pub selected: FilterKind,
    pub butterworth_order: i32,
    pub butterworth_cutoff: f64,
    pub uniform_size: i32,
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
    pub fn update(&mut self, message: Message) -> Option<Action> {
        match message {
            Message::FilterSelected(filter) => {
                self.select_filter(filter);
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
}
