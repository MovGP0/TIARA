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
const HELP_HINT_DELAY_MILLISECONDS: u32 = 1_000;
const EDIT_HELP_HINT_DELAY_MILLISECONDS: u32 = 1_100;
const EXPRESSION_HELP_HINT_DELAY_MILLISECONDS: u32 = 1_200;
const VARIABLE_COUNT_MESSAGE_ID: u32 = 0x88e;
const DEFAULT_VARIABLE_NAMES: [&str; 8] = ["A", "B", "C", "D", "E", "F", "G", "H"];
const MINTERM_MAXTERM_CONTEXT: u32 = 0x578;
const TRUTH_TABLE_CONTEXT: u32 = 0x514;
const VEITCH_KARNAUGH_CONTEXT: u32 = 0x5dc;
const QUINE_MCCLUSKEY_CONTEXT: u32 = 0x640;
const SCHEMATIC_CONTEXT: u32 = 0x6a4;
const INITIAL_MODE_FLAGS: [bool; 9] = [true, false, true, false, false, true, true, true, true];
const TERM_COUNT: usize = 256;
const TABLE_COUNT: usize = 10;
const OWNED_WINDOW_SLOTS: [LogicDesignOwnedWindow; 9] = [
    LogicDesignOwnedWindow(0x0200_1a00),
    LogicDesignOwnedWindow(0x0200_1cc8),
    LogicDesignOwnedWindow(0x0200_4ae8),
    LogicDesignOwnedWindow(0x0200_40c0),
    LogicDesignOwnedWindow(0x0200_1d58),
    LogicDesignOwnedWindow(0x0200_1900),
    LogicDesignOwnedWindow(0x0200_48c8),
    LogicDesignOwnedWindow(0x0200_3230),
    LogicDesignOwnedWindow(0x0200_1d60),
];

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct LogicDesignOwnedWindow(u32);

impl LogicDesignOwnedWindow {
    #[must_use]
    pub const fn recovered_pointer_address(self) -> u32 {
        self.0
    }
}

pub trait LogicDesignCreationHost {
    fn set_help_hint_delay(&mut self, milliseconds: u32);
}

pub trait LogicDesignVariableCountHost {
    fn set_help_hint_delay(&mut self, milliseconds: u32);
    fn populate_variable_names(&mut self, count: usize, names: &mut [String; 8]);
    fn load_message(&mut self, resource_id: u32) -> String;
}

pub trait LogicDesignExpressionHost {
    fn set_help_hint_delay(&mut self, milliseconds: u32);
    fn load_message(&mut self, resource_id: u32) -> String;
    fn reset_dependent_results(&mut self);
    fn expression_is_valid(&mut self, expression: &str) -> bool;
}

pub trait LogicDesignCloseHost {
    fn close_if_open(&mut self, window: LogicDesignOwnedWindow);
}

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

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum EndActionState {
    #[default]
    Disabled,
    Enabled,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct HelpEventOutcome {
    pub event_result: bool,
    pub invoke_default_help: bool,
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
    mode_flags: [bool; 9],
    term_values: Vec<i32>,
    term_enabled: Vec<i32>,
    primary_tables: Vec<Vec<i32>>,
    secondary_tables: Vec<Vec<i32>>,
    end_action: EndActionState,
    variable_names: [String; 8],
    function_signature: String,
    operation_available: [bool; 2],
    variable_count_message: String,
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
            mode_flags: INITIAL_MODE_FLAGS,
            term_values: vec![0; TERM_COUNT],
            term_enabled: vec![1; TERM_COUNT],
            primary_tables: vec![vec![0; TERM_COUNT]; TABLE_COUNT],
            secondary_tables: vec![vec![0; TERM_COUNT]; TABLE_COUNT],
            end_action: EndActionState::Disabled,
            variable_names: std::array::from_fn(|_| String::new()),
            function_signature: String::new(),
            operation_available: [true; 2],
            variable_count_message: String::new(),
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

    /// Implements Ghidra function `FUN_01b2c1d0` at `0x01B2C1D0`.
    ///
    /// Restores the Logic Design introduction form's initial scalar state,
    /// fixed mode flags, 256-entry term arrays, and two 10-by-256 work tables.
    /// It displays the default variable and symbol help text, disables the end
    /// action, and sets the application Help hint delay to 1000 milliseconds.
    pub fn create(&mut self, host: &mut impl LogicDesignCreationHost) {
        DEFAULT_VARIABLE_COUNT_TEXT.clone_into(&mut self.variable_count_text);
        self.function_expression.clear();
        DEFAULT_HELP_TEXT.clone_into(&mut self.help_text);
        self.variable_count = 0;
        self.recalculation_required = true;
        self.secondary_state = false;
        self.operation_active = false;
        self.help_context = DEFAULT_HELP_CONTEXT;
        self.derived_primary.clear();
        self.derived_secondary.clear();
        self.pending_action = None;
        self.mode_flags = INITIAL_MODE_FLAGS;
        self.term_values.fill(0);
        self.term_enabled.fill(1);
        for table in &mut self.primary_tables {
            table.fill(0);
        }
        for table in &mut self.secondary_tables {
            table.fill(0);
        }
        self.end_action = EndActionState::Disabled;
        self.variable_names.fill(String::new());
        self.function_signature.clear();
        self.operation_available = [true; 2];
        self.variable_count_message.clear();
        host.set_help_hint_delay(HELP_HINT_DELAY_MILLISECONDS);
    }

    /// Implements Ghidra function `FUN_01b35230` at `0x01B35230`.
    ///
    /// Applies a nonempty variable-count edit, clears names beyond the accepted
    /// count, imports available names, fills gaps with A through H, and rebuilds
    /// the `F(...)` signature. Veitch-Karnaugh output remains available below
    /// five variables and schematic output below six. The handler also changes
    /// the application Help hint delay to 1100 milliseconds and loads message
    /// resource `0x88E`. An empty edit changes only the Help delay.
    ///
    /// # Errors
    ///
    /// Returns the integer parser error from the shared count application.
    pub fn variable_count_changed(
        &mut self,
        value: String,
        result_window: &mut minterm_maxterm_result::Window,
        host: &mut impl LogicDesignVariableCountHost,
    ) -> Result<(), ParseIntError> {
        host.set_help_hint_delay(EDIT_HELP_HINT_DELAY_MILLISECONDS);
        self.variable_count_text = value;
        if self.variable_count_text.is_empty() {
            return Ok(());
        }

        self.apply_variable_count(result_window)?;
        let count = usize::try_from(self.variable_count.max(0)).unwrap_or_default();
        for name in self.variable_names.iter_mut().skip(count) {
            name.clear();
        }
        if count != 0 {
            host.populate_variable_names(count, &mut self.variable_names);
            for (name, default_name) in self
                .variable_names
                .iter_mut()
                .zip(DEFAULT_VARIABLE_NAMES)
                .take(count)
            {
                if name.is_empty() {
                    default_name.clone_into(name);
                }
            }
        }
        self.function_signature = format!("F({})", self.variable_names[..count].join(","));
        self.operation_available = [self.variable_count < 5, self.variable_count < 6];
        self.variable_count_message = host.load_message(VARIABLE_COUNT_MESSAGE_ID);
        Ok(())
    }

    /// Implements Ghidra function `FUN_01b35780` at `0x01B35780`.
    ///
    /// Marks the function for recalculation, loads message resource `0x88E`,
    /// clears dependent result views and cached variable names, and validates a
    /// normalized form of the changed expression. When the application parser
    /// rejects the edit, the final entered character is removed. The handler
    /// also changes the application Help hint delay to 1200 milliseconds.
    pub fn function_expression_changed(
        &mut self,
        value: String,
        host: &mut impl LogicDesignExpressionHost,
    ) {
        host.set_help_hint_delay(EXPRESSION_HELP_HINT_DELAY_MILLISECONDS);
        self.function_expression = value;
        self.recalculation_required = true;
        self.variable_count_message = host.load_message(VARIABLE_COUNT_MESSAGE_ID);
        host.reset_dependent_results();
        self.derived_primary.clear();
        self.derived_secondary.clear();
        self.variable_names.fill(String::new());

        let normalized = self.function_expression.to_uppercase();
        if !host.expression_is_valid(&normalized) {
            self.function_expression.pop();
        }
    }

    /// Implements Ghidra function `FUN_01b35b40` at `0x01B35B40`.
    ///
    /// Normalizes every double quote in the Logic Design expression to the
    /// single-quote operator when the expression editor receives focus.
    pub fn function_expression_entered(&mut self) {
        self.normalize_expression_quotes();
    }

    /// Implements Ghidra function `FUN_01b35c30` at `0x01B35C30`.
    ///
    /// Normalizes every double quote in the Logic Design expression to the
    /// single-quote operator when the expression editor loses focus.
    pub fn function_expression_exited(&mut self) {
        self.normalize_expression_quotes();
    }

    /// Implements Ghidra function `FUN_01b35d20` at `0x01B35D20`.
    ///
    /// Restores the application Help hint delay to 1000 milliseconds when the
    /// Logic Design introduction form becomes active.
    pub fn activate(&self, host: &mut impl LogicDesignCreationHost) {
        host.set_help_hint_delay(HELP_HINT_DELAY_MILLISECONDS);
    }

    /// Implements Ghidra function `FUN_01b362d0` at `0x01B362D0`.
    ///
    /// Closes each of the nine application-owned result windows when it is
    /// open. The host clears its corresponding ownership slot after closing.
    /// Recovered pointer addresses identify slots whose form names are not
    /// available from the function evidence.
    pub fn close(&self, host: &mut impl LogicDesignCloseHost) {
        for window in OWNED_WINDOW_SLOTS {
            host.close_if_open(window);
        }
    }

    /// Implements Ghidra function `FUN_01b36550` at `0x01B36550`.
    ///
    /// Marks the Logic Design calculation as stale when the recovered `Edit1`
    /// control changes. The handler has no other recovered side effect.
    pub const fn auxiliary_input_changed(&mut self) {
        self.recalculation_required = true;
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

    /// Implements Ghidra function `FUN_01b36560` at `0x01B36560`.
    ///
    /// Handles a form Help event through the same localized `logiconv.chm`
    /// dispatch as the Help action. It reports success and disables the
    /// framework's default Help dispatch.
    #[must_use]
    pub fn handle_help_event(
        &self,
        help_directory: &Path,
        help: &mut impl LogicDesignHelp,
    ) -> HelpEventOutcome {
        self.open_help(help_directory, help);
        HelpEventOutcome {
            event_result: true,
            invoke_default_help: false,
        }
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

    fn normalize_expression_quotes(&mut self) {
        self.function_expression = self.function_expression.replace('"', "'");
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

    #[derive(Default)]
    struct CreationHost(Vec<u32>);

    #[derive(Default)]
    struct VariableCountHost(Vec<String>);

    struct ExpressionHost {
        valid: bool,
        events: Vec<String>,
    }

    #[derive(Default)]
    struct CloseHost(Vec<u32>);

    impl LogicDesignCloseHost for CloseHost {
        fn close_if_open(&mut self, window: LogicDesignOwnedWindow) {
            self.0.push(window.recovered_pointer_address());
        }
    }

    impl LogicDesignExpressionHost for ExpressionHost {
        fn set_help_hint_delay(&mut self, milliseconds: u32) {
            self.events.push(format!("delay:{milliseconds}"));
        }

        fn load_message(&mut self, resource_id: u32) -> String {
            self.events.push(format!("message:{resource_id:x}"));
            "Expression changed".to_owned()
        }

        fn reset_dependent_results(&mut self) {
            self.events.push("reset-results".to_owned());
        }

        fn expression_is_valid(&mut self, expression: &str) -> bool {
            self.events.push(format!("validate:{expression}"));
            self.valid
        }
    }

    impl LogicDesignVariableCountHost for VariableCountHost {
        fn set_help_hint_delay(&mut self, milliseconds: u32) {
            self.0.push(format!("delay:{milliseconds}"));
        }

        fn populate_variable_names(&mut self, count: usize, names: &mut [String; 8]) {
            self.0.push(format!("names:{count}"));
            names[0] = "Input".to_owned();
        }

        fn load_message(&mut self, resource_id: u32) -> String {
            self.0.push(format!("message:{resource_id:x}"));
            "Variable count changed".to_owned()
        }
    }

    impl LogicDesignCreationHost for CreationHost {
        fn set_help_hint_delay(&mut self, milliseconds: u32) {
            self.0.push(milliseconds);
        }
    }

    #[test]
    fn creation_restores_fixed_form_arrays_flags_text_and_help_delay() {
        let mut window = Window::default();
        let mut host = CreationHost::default();
        window.variable_count_text = "8".to_owned();
        window.function_expression = "A+B".to_owned();
        window.mode_flags.fill(false);
        window.term_values.fill(9);
        window.term_enabled.fill(0);
        window.primary_tables[4].fill(7);
        window.secondary_tables[6].fill(8);
        window.end_action = EndActionState::Enabled;

        window.create(&mut host);

        assert_eq!(window.variable_count_text, "3");
        assert!(window.function_expression.is_empty());
        assert_eq!(window.help_text, DEFAULT_HELP_TEXT);
        assert_eq!(window.mode_flags, INITIAL_MODE_FLAGS);
        assert_eq!(window.term_values, vec![0; TERM_COUNT]);
        assert_eq!(window.term_enabled, vec![1; TERM_COUNT]);
        assert!(
            window
                .primary_tables
                .iter()
                .flatten()
                .all(|value| *value == 0)
        );
        assert!(
            window
                .secondary_tables
                .iter()
                .flatten()
                .all(|value| *value == 0)
        );
        assert_eq!(window.end_action, EndActionState::Disabled);
        assert_eq!(window.help_context, 1_000);
        assert_eq!(host.0, [1_000]);
    }

    #[test]
    fn variable_count_change_normalizes_names_signature_availability_and_message() {
        let mut window = Window::default();
        let mut results = seeded_results();
        let mut host = VariableCountHost::default();

        window
            .variable_count_changed("5".to_owned(), &mut results, &mut host)
            .expect("valid count");

        assert_eq!(window.variable_count, 5);
        assert_eq!(
            &window.variable_names,
            &["Input", "B", "C", "D", "E", "", "", ""]
        );
        assert_eq!(window.function_signature, "F(Input,B,C,D,E)");
        assert_eq!(window.operation_available, [false, true]);
        assert_eq!(window.variable_count_message, "Variable count changed");
        assert_eq!(host.0, ["delay:1100", "names:5", "message:88e"]);
    }

    #[test]
    fn empty_variable_count_change_updates_only_help_delay() {
        let mut window = Window::default();
        let mut results = seeded_results();
        let mut host = VariableCountHost::default();

        window
            .variable_count_changed(String::new(), &mut results, &mut host)
            .expect("empty input is deferred");

        assert_eq!(window.variable_count, 0);
        assert_eq!(host.0, ["delay:1100"]);
    }

    #[test]
    fn expression_change_resets_results_and_validates_normalized_text() {
        let mut window = Window::default();
        let mut host = ExpressionHost {
            valid: true,
            events: Vec::new(),
        };
        window.derived_primary = "old".to_owned();
        window.derived_secondary = "old".to_owned();
        window.variable_names[0] = "Input".to_owned();

        window.function_expression_changed("a+b".to_owned(), &mut host);

        assert_eq!(window.function_expression, "a+b");
        assert!(window.recalculation_required);
        assert!(window.derived_primary.is_empty());
        assert!(window.derived_secondary.is_empty());
        assert!(window.variable_names.iter().all(String::is_empty));
        assert_eq!(window.variable_count_message, "Expression changed");
        assert_eq!(
            host.events,
            ["delay:1200", "message:88e", "reset-results", "validate:A+B",]
        );
    }

    #[test]
    fn rejected_expression_change_removes_final_entered_character() {
        let mut window = Window::default();
        let mut host = ExpressionHost {
            valid: false,
            events: Vec::new(),
        };

        window.function_expression_changed("A+?".to_owned(), &mut host);

        assert_eq!(window.function_expression, "A+");
    }

    #[test]
    fn entering_expression_normalizes_every_double_quote() {
        let mut window = Window {
            function_expression: "A\" + \"B".to_owned(),
            ..Window::default()
        };

        window.function_expression_entered();

        assert_eq!(window.function_expression, "A' + 'B");
    }

    #[test]
    fn exiting_expression_normalizes_every_double_quote() {
        let mut window = Window {
            function_expression: "\"A\" * B".to_owned(),
            ..Window::default()
        };

        window.function_expression_exited();

        assert_eq!(window.function_expression, "'A' * B");
    }

    #[test]
    fn activation_restores_default_help_hint_delay() {
        let window = Window::default();
        let mut host = CreationHost::default();

        window.activate(&mut host);

        assert_eq!(host.0, [1_000]);
    }

    #[test]
    fn close_releases_every_recovered_owned_window_slot_in_order() {
        let window = Window::default();
        let mut host = CloseHost::default();

        window.close(&mut host);

        assert_eq!(
            host.0,
            [
                0x0200_1a00,
                0x0200_1cc8,
                0x0200_4ae8,
                0x0200_40c0,
                0x0200_1d58,
                0x0200_1900,
                0x0200_48c8,
                0x0200_3230,
                0x0200_1d60,
            ]
        );
    }

    #[test]
    fn auxiliary_input_change_marks_recalculation_required() {
        let mut window = Window {
            recalculation_required: false,
            ..Window::default()
        };

        window.auxiliary_input_changed();

        assert!(window.recalculation_required);
    }

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

    #[test]
    fn form_help_event_opens_localized_context_and_suppresses_default_help() {
        let window = Window::default();
        let mut help = Help::default();

        let outcome = window.handle_help_event(Path::new("help"), &mut help);

        assert_eq!(
            outcome,
            HelpEventOutcome {
                event_result: true,
                invoke_default_help: false,
            }
        );
        assert_eq!(help.candidate, PathBuf::from("help").join(HELP_FILE_NAME));
        assert_eq!(
            help.opened,
            Some((DEFAULT_HELP_CONTEXT, PathBuf::from("localized.chm")))
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
