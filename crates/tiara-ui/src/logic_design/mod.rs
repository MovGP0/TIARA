//! Logic Design introduction form state and typed host-effect adapters.

use std::num::ParseIntError;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, row, text, text_input};
use iced::{Element, Length};

use crate::minterm_maxterm_result;
use crate::shared::window_shell;

pub const TITLE: &str = "Logic Design";
pub const SCREENSHOT: &str = "screenshots/Logic_design_Window.png";
pub const FORM_RESOURCE: &str = "introduction_form";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01b2c1d0");
pub const HELP_FILE_NAME: &str = "logiconv.chm";

const STATUS: &str = "F(A,B,C)";
const DEFAULT_VARIABLE_COUNT_TEXT: &str = "3";
const DEFAULT_HELP_TEXT: &str = "( ) / ' \" + * A B C";
const MAX_VARIABLE_COUNT: i32 = 8;
const DEFAULT_HELP_CONTEXT: u32 = 1_000;
const MINTERM_MAXTERM_CONTEXT: u32 = 0x578;
const TRUTH_TABLE_CONTEXT: u32 = 0x514;
const VEITCH_KARNAUGH_CONTEXT: u32 = 0x5dc;
const QUINE_MCCLUSKEY_CONTEXT: u32 = 0x640;
const SCHEMATIC_CONTEXT: u32 = 0x6a4;

pub trait LogicDesignHelp {
    fn resolve_localized_file(&mut self, candidate: &Path) -> PathBuf;
    fn open_context(&mut self, context: u32, help_file: &Path);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ResultForm {
    MintermMaxterm,
    TruthTable,
    VeitchKarnaugh,
    QuineMcCluskey,
    Schematic,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum CalculationOutcome {
    #[default]
    Success,
    ParseError,
}

pub trait LogicDesignHost {
    fn show_minimum_variable_error(&mut self);
    fn show_schematic_size_error(&mut self);
    fn framework_callback(&mut self, value: u8);
    fn calculate(&mut self, recalculate: bool) -> CalculationOutcome;
    fn show_form(&mut self, form: ResultForm);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Operation {
    MintermMaxterm,
    TruthTable,
    VeitchKarnaugh,
    QuineMcCluskey,
    Schematic,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Action {
    ApplyVariableCount,
    NewFunction,
    Run(Operation),
    OpenHelp,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum OperationResult {
    Completed,
    RejectedVariableCount,
    ParseStopped,
    ResultNotShownForVariableCount,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    VariableCountChanged(String),
    FunctionChanged(String),
    ApplyVariableCount,
    NewFunction,
    OperationSelected(Operation),
    Help,
}

#[derive(Debug)]
pub struct Window {
    variable_count_text: String,
    function_expression: String,
    help_text: String,
    variable_count: i32,
    recalculation_required: bool,
    secondary_state: bool,
    operation_active: bool,
    help_context: u32,
    derived_primary: String,
    derived_secondary: String,
    pending_action: Option<Action>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            variable_count_text: DEFAULT_VARIABLE_COUNT_TEXT.to_owned(),
            function_expression: String::new(),
            help_text: DEFAULT_HELP_TEXT.to_owned(),
            variable_count: 0,
            recalculation_required: true,
            secondary_state: false,
            operation_active: false,
            help_context: DEFAULT_HELP_CONTEXT,
            derived_primary: String::new(),
            derived_secondary: String::new(),
            pending_action: None,
        }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::VariableCountChanged(value) => self.variable_count_text = value,
            Message::FunctionChanged(value) => self.function_expression = value,
            Message::ApplyVariableCount => self.pending_action = Some(Action::ApplyVariableCount),
            Message::NewFunction => self.pending_action = Some(Action::NewFunction),
            Message::OperationSelected(operation) => {
                self.pending_action = Some(Action::Run(operation));
            }
            Message::Help => self.pending_action = Some(Action::OpenHelp),
        }
    }

    pub const fn take_action(&mut self) -> Option<Action> {
        self.pending_action.take()
    }

    /// Ports Ghidra function `FUN_01b34a90` at `0x01B34A90`.
    ///
    /// Parses the displayed count, clears count-dependent output when the
    /// value changed, marks the function for recalculation, limits only the
    /// upper bound, writes the normalized count, and rebuilds the Help text.
    ///
    /// # Errors
    ///
    /// Returns the shared integer parser error. The recovered handler has no
    /// local conversion-error branch.
    pub fn apply_variable_count(
        &mut self,
        result_window: &mut minterm_maxterm_result::Window,
    ) -> Result<(), ParseIntError> {
        let parsed = self.variable_count_text.parse::<i32>()?;
        self.recalculation_required = true;
        if parsed != self.variable_count {
            result_window.clear_count_dependent_results();
            self.derived_primary.clear();
            self.derived_secondary.clear();
        }
        self.variable_count = parsed.min(MAX_VARIABLE_COUNT);
        self.variable_count_text = self.variable_count.to_string();
        self.help_text = help_text_for_count(self.variable_count);
        Ok(())
    }

    /// Ports Ghidra function `FUN_01b34cf0` at `0x01B34CF0`.
    ///
    /// Restores the default input text and Help symbols, marks the function
    /// as changed, clears the secondary flag, and removes the expression and
    /// Minterm/Maxterm output. It does not close the form.
    pub fn start_new_function(&mut self, result_window: &mut minterm_maxterm_result::Window) {
        self.recalculation_required = true;
        self.secondary_state = false;
        self.variable_count = 0;
        DEFAULT_VARIABLE_COUNT_TEXT.clone_into(&mut self.variable_count_text);
        DEFAULT_HELP_TEXT.clone_into(&mut self.help_text);
        self.function_expression.clear();
        self.derived_primary.clear();
        self.derived_secondary.clear();
        result_window.clear_count_dependent_results();
    }

    /// Ports Ghidra function `FUN_01b34e50` at `0x01B34E50`.
    pub fn show_minterm_maxterm(&mut self, host: &mut impl LogicDesignHost) -> OperationResult {
        if !self.accepts_operation(MINTERM_MAXTERM_CONTEXT, host) {
            return OperationResult::RejectedVariableCount;
        }
        host.show_form(ResultForm::MintermMaxterm);
        host.framework_callback(3);
        let _ = host.calculate(self.recalculation_required);
        host.framework_callback(0);
        OperationResult::Completed
    }

    /// Ports Ghidra function `FUN_01b35d30` at `0x01B35D30`.
    pub fn show_truth_table(&mut self, host: &mut impl LogicDesignHost) -> OperationResult {
        if !self.accepts_operation(TRUTH_TABLE_CONTEXT, host) {
            return OperationResult::RejectedVariableCount;
        }
        self.operation_active = true;
        host.framework_callback(3);
        let _ = host.calculate(self.recalculation_required);
        self.recalculation_required = false;
        host.framework_callback(0);
        host.show_form(ResultForm::TruthTable);
        self.operation_active = false;
        host.show_form(ResultForm::TruthTable);
        OperationResult::Completed
    }

    /// Ports Ghidra function `FUN_01b35e60` at `0x01B35E60`.
    pub fn show_veitch_karnaugh(&mut self, host: &mut impl LogicDesignHost) -> OperationResult {
        if !self.accepts_operation(VEITCH_KARNAUGH_CONTEXT, host) {
            return OperationResult::RejectedVariableCount;
        }
        self.operation_active = true;
        host.framework_callback(3);
        let _ = host.calculate(self.recalculation_required);
        self.recalculation_required = false;
        host.framework_callback(0);
        let result = if self.variable_count < 5 {
            host.show_form(ResultForm::VeitchKarnaugh);
            OperationResult::Completed
        } else {
            OperationResult::ResultNotShownForVariableCount
        };
        self.operation_active = false;
        result
    }

    /// Ports Ghidra function `FUN_01b35fa0` at `0x01B35FA0`.
    pub fn show_quine_mccluskey(&mut self, host: &mut impl LogicDesignHost) -> OperationResult {
        if !self.accepts_operation(QUINE_MCCLUSKEY_CONTEXT, host) {
            return OperationResult::RejectedVariableCount;
        }
        self.operation_active = true;
        host.framework_callback(3);
        let _ = host.calculate(self.recalculation_required);
        self.recalculation_required = false;
        host.framework_callback(0);
        self.operation_active = false;
        host.show_form(ResultForm::QuineMcCluskey);
        OperationResult::Completed
    }

    /// Ports Ghidra function `FUN_01b360c0` at `0x01B360C0`.
    pub fn show_schematic(&mut self, host: &mut impl LogicDesignHost) -> OperationResult {
        if !self.accepts_operation(SCHEMATIC_CONTEXT, host) {
            return OperationResult::RejectedVariableCount;
        }
        if host.calculate(self.recalculation_required) == CalculationOutcome::ParseError {
            return OperationResult::ParseStopped;
        }
        self.operation_active = true;
        host.framework_callback(3);
        self.recalculation_required = false;
        host.framework_callback(0);
        let result = if self.variable_count < 6 {
            host.show_form(ResultForm::QuineMcCluskey);
            host.show_form(ResultForm::Schematic);
            OperationResult::Completed
        } else {
            host.show_schematic_size_error();
            OperationResult::ResultNotShownForVariableCount
        };
        self.operation_active = false;
        result
    }

    /// Ports Ghidra function `FUN_01b36460` at `0x01B36460`.
    ///
    /// Resolves the language-specific `logiconv.chm` candidate and dispatches
    /// the current operation's Help context. Error presentation stays with the
    /// typed application Help adapter because the handler has no local branch.
    pub fn open_help(&self, help_directory: &Path, help: &mut impl LogicDesignHelp) {
        let candidate = help_directory.join(HELP_FILE_NAME);
        let resolved = help.resolve_localized_file(&candidate);
        help.open_context(self.help_context, &resolved);
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let input = container(
            column![
                text("Input").size(16),
                row![
                    text("Number of variables"),
                    text_input("", &self.variable_count_text)
                        .on_input(Message::VariableCountChanged)
                        .width(Length::Fixed(55.0)),
                    button("OK").on_press(Message::ApplyVariableCount),
                    text("F( )").size(18),
                ]
                .spacing(8),
                row![
                    text("Fout ="),
                    text_input("", &self.function_expression).on_input(Message::FunctionChanged),
                ]
                .spacing(8),
            ]
            .spacing(7),
        )
        .padding(10);
        let operations = column![
            text("Operation").size(16),
            button("Minterm/Maxterm")
                .on_press(Message::OperationSelected(Operation::MintermMaxterm)),
            button("Truth table").on_press(Message::OperationSelected(Operation::TruthTable)),
            button("Veitch-Karnaugh table")
                .on_press(Message::OperationSelected(Operation::VeitchKarnaugh)),
            button("Quine-McCluskey method")
                .on_press(Message::OperationSelected(Operation::QuineMcCluskey)),
            button("Schematic diagram").on_press(Message::OperationSelected(Operation::Schematic)),
        ]
        .spacing(6);
        let actions = column![
            button("New function").on_press(Message::NewFunction),
            button("Help").on_press(Message::Help),
        ]
        .spacing(8);
        let body = column![input, row![operations, actions].spacing(50)]
            .spacing(10)
            .padding(10);

        window_shell::frame(
            TITLE,
            window_shell::empty_menu(),
            window_shell::empty_menu(),
            body.into(),
            STATUS,
        )
    }

    fn accepts_operation(&mut self, context: u32, host: &mut impl LogicDesignHost) -> bool {
        self.help_context = context;
        if self.variable_count < 2 {
            host.show_minimum_variable_error();
            return false;
        }
        true
    }
}

fn help_text_for_count(variable_count: i32) -> String {
    const VARIABLES: [char; 8] = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'];
    let count = usize::try_from(variable_count.max(0)).unwrap_or_default();
    let mut help = "( ) / ' \" + *".to_owned();
    for variable in VARIABLES.iter().take(count) {
        help.push(' ');
        help.push(*variable);
    }
    help
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::minterm_maxterm_result::ResultContent;

    #[test]
    fn applying_changed_count_clears_results_clamps_and_rebuilds_help() {
        let mut window = Window::default();
        let mut results = seeded_results();
        window.variable_count_text = "10".to_owned();
        window
            .apply_variable_count(&mut results)
            .expect("valid count");
        assert_eq!(window.variable_count, 8);
        assert_eq!(window.variable_count_text, "8");
        assert_eq!(window.help_text, "( ) / ' \" + * A B C D E F G H");
        assert!(window.recalculation_required);
        assert!(results.content().is_empty());
    }

    #[test]
    fn applying_same_or_invalid_count_preserves_recovered_boundaries() {
        let mut window = Window::default();
        let mut results = seeded_results();
        window.variable_count = 3;
        window.variable_count_text = "3".to_owned();
        window
            .apply_variable_count(&mut results)
            .expect("same count");
        assert!(!results.content().is_empty());
        window.variable_count_text = "invalid".to_owned();
        assert!(window.apply_variable_count(&mut results).is_err());
        assert_eq!(window.variable_count, 3);
    }

    #[test]
    fn new_function_restores_defaults_without_closing() {
        let mut window = Window::default();
        let mut results = seeded_results();
        window.variable_count = 5;
        window.variable_count_text = "5".to_owned();
        window.function_expression = "A+B".to_owned();
        window.start_new_function(&mut results);
        assert_eq!(window.variable_count, 0);
        assert_eq!(window.variable_count_text, "3");
        assert_eq!(window.help_text, DEFAULT_HELP_TEXT);
        assert!(window.function_expression.is_empty());
        assert!(results.content().is_empty());
    }

    #[test]
    fn minterm_maxterm_rejects_small_count_and_shows_before_calculation() {
        let mut window = Window::default();
        let mut host = Host::default();
        assert_eq!(
            window.show_minterm_maxterm(&mut host),
            OperationResult::RejectedVariableCount
        );
        assert_eq!(host.events, ["minimum"]);
        window.variable_count = 3;
        host.events.clear();
        assert_eq!(
            window.show_minterm_maxterm(&mut host),
            OperationResult::Completed
        );
        assert_eq!(
            host.events,
            ["show:minterm", "callback:3", "calculate:true", "callback:0"]
        );
        assert_eq!(window.help_context, MINTERM_MAXTERM_CONTEXT);
    }

    #[test]
    fn truth_table_preserves_recovered_double_show() {
        let mut window = accepted_window(3);
        let mut host = Host::default();
        assert_eq!(
            window.show_truth_table(&mut host),
            OperationResult::Completed
        );
        assert_eq!(
            host.events,
            [
                "callback:3",
                "calculate:true",
                "callback:0",
                "show:truth",
                "show:truth"
            ]
        );
        assert!(!window.recalculation_required);
        assert!(!window.operation_active);
    }

    #[test]
    fn veitch_and_quine_apply_their_distinct_show_limits() {
        let mut window = accepted_window(5);
        let mut host = Host::default();
        assert_eq!(
            window.show_veitch_karnaugh(&mut host),
            OperationResult::ResultNotShownForVariableCount
        );
        assert!(!host.events.iter().any(|event| event.starts_with("show:")));
        host.events.clear();
        assert_eq!(
            window.show_quine_mccluskey(&mut host),
            OperationResult::Completed
        );
        assert!(host.events.contains(&"show:quine".to_owned()));
    }

    #[test]
    fn schematic_stops_on_parse_error_and_enforces_six_variable_limit() {
        let mut window = accepted_window(4);
        let mut host = Host {
            calculation_outcome: CalculationOutcome::ParseError,
            ..Host::default()
        };
        assert_eq!(
            window.show_schematic(&mut host),
            OperationResult::ParseStopped
        );
        assert_eq!(host.events, ["calculate:true"]);
        assert!(window.recalculation_required);
        window.variable_count = 6;
        host.calculation_outcome = CalculationOutcome::Success;
        host.events.clear();
        assert_eq!(
            window.show_schematic(&mut host),
            OperationResult::ResultNotShownForVariableCount
        );
        assert_eq!(
            host.events,
            ["calculate:true", "callback:3", "callback:0", "size"]
        );
    }

    #[test]
    fn help_uses_current_operation_context_and_localized_candidate() {
        let mut window = accepted_window(3);
        let mut host = Host::default();
        let _ = window.show_quine_mccluskey(&mut host);
        let mut help = Help::default();
        window.open_help(Path::new("help"), &mut help);
        assert_eq!(help.candidate, PathBuf::from("help").join(HELP_FILE_NAME));
        assert_eq!(
            help.opened,
            Some((QUINE_MCCLUSKEY_CONTEXT, PathBuf::from("localized.chm")))
        );
    }

    fn accepted_window(variable_count: i32) -> Window {
        Window {
            variable_count,
            ..Window::default()
        }
    }

    fn seeded_results() -> minterm_maxterm_result::Window {
        let mut results = minterm_maxterm_result::Window::default();
        results.replace_content(ResultContent {
            minterm: "m".to_owned(),
            maxterm: "M".to_owned(),
            simplified_minterm: "sm".to_owned(),
            simplified_maxterm: "sM".to_owned(),
            simplification_steps: vec!["step".to_owned()],
            function_text: "f".to_owned(),
        });
        results
    }

    #[derive(Default)]
    struct Host {
        events: Vec<String>,
        calculation_outcome: CalculationOutcome,
    }

    impl LogicDesignHost for Host {
        fn show_minimum_variable_error(&mut self) {
            self.events.push("minimum".to_owned());
        }
        fn show_schematic_size_error(&mut self) {
            self.events.push("size".to_owned());
        }
        fn framework_callback(&mut self, value: u8) {
            self.events.push(format!("callback:{value}"));
        }
        fn calculate(&mut self, recalculate: bool) -> CalculationOutcome {
            self.events.push(format!("calculate:{recalculate}"));
            self.calculation_outcome
        }
        fn show_form(&mut self, form: ResultForm) {
            let name = match form {
                ResultForm::MintermMaxterm => "minterm",
                ResultForm::TruthTable => "truth",
                ResultForm::VeitchKarnaugh => "veitch",
                ResultForm::QuineMcCluskey => "quine",
                ResultForm::Schematic => "schematic",
            };
            self.events.push(format!("show:{name}"));
        }
    }

    #[derive(Default)]
    struct Help {
        candidate: PathBuf,
        opened: Option<(u32, PathBuf)>,
    }

    impl LogicDesignHelp for Help {
        fn resolve_localized_file(&mut self, candidate: &Path) -> PathBuf {
            self.candidate = candidate.to_owned();
            PathBuf::from("localized.chm")
        }
        fn open_context(&mut self, context: u32, help_file: &Path) {
            self.opened = Some((context, help_file.to_owned()));
        }
    }
}
