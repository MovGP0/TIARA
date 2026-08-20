//! Iced state and file-dialog adapters for the Controlled Source Editor.
//!
//! `iced` supplies the message/update/view architecture. The maintained `rfd`
//! crate supplies native CSV open and save dialogs. `tiara-core` and the Rust
//! standard library own expression, polynomial, table-text, and pin rules.

use std::cell::{Ref, RefCell};
use std::collections::BTreeSet;
use std::fmt;
use std::path::PathBuf;
use std::rc::Rc;

use iced::widget::{
    button, checkbox, column, container, pick_list, radio, row, scrollable, text, text_input,
};
use iced::{Element, Length, Task};
use rfd::AsyncFileDialog;
use tiara_core::controlled_source_editor::{
    CompiledExpression, ControlledSourceDefinition, ExpressionCompiler, ExpressionContext,
    ExpressionError, IoTopology, MacroShape, OutputKind, PolynomialStage, SourceComponent,
    SourceMode, SymbolError, TableLoadError, TableStage, load_table_text,
    rebuild_special_component_symbol, save_table_text, shape_is_compatible,
};

pub const TITLE: &str = "Controlled Source Editor";
pub const FORM_RESOURCE: &str = "CspEditorDlg";
pub const LIBRARY_EVALUATION: &str = "iced supplies messages, tasks, and widgets; rfd supplies maintained native file dialogs; tiara-core and std supply application-specific expressions, polynomial staging, line-oriented CSV-compatible text, and pin rules.";

pub type SharedComponent = Rc<RefCell<SourceComponent>>;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum GridCommitStatus {
    #[default]
    Valid,
    Invalid,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CommitOutcome {
    Accepted,
    ValidationVeto,
    EmptyExpressionVeto,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    ModeSelected(SourceMode),
    GainChanged(String),
    LinearControllerSelected(String),
    PolynomialControllerToggled(usize, bool),
    AddPolynomial,
    RemovePolynomial,
    ClearPolynomial,
    ValueExpressionChanged(String),
    TableExpressionChanged(String),
    AddTablePair,
    RemoveTablePair,
    ClearTable,
    LoadTablePressed,
    TableLoaded(Result<Option<String>, String>),
    SaveTablePressed,
    TableSaved(Result<Option<PathBuf>, String>),
    VoltageCountChanged(String),
    CurrentCountChanged(String),
    OutputSelected(OutputKind),
    DifferentialOutputChanged(bool),
    DifferentialInputChanged(bool),
    ShapeSelected(MacroShape),
    AcceptPressed,
    CancelPressed,
}

#[derive(Debug)]
pub struct Window {
    component: SharedComponent,
    mode: SourceMode,
    gain_text: String,
    linear_controller: Option<String>,
    polynomial: PolynomialStage,
    selected_controller_indices: BTreeSet<usize>,
    table: TableStage,
    value_expression: String,
    table_expression: String,
    topology: IoTopology,
    voltage_count_text: String,
    current_count_text: String,
    expression_variables: Vec<String>,
    controller_choices: Vec<String>,
    shape_name: String,
    selected_shape: Option<MacroShape>,
    poly_grid_status: GridCommitStatus,
    table_grid_status: GridCommitStatus,
    last_error: Option<String>,
}

impl Window {
    #[must_use]
    pub fn new(component: SharedComponent, topology: IoTopology) -> Self {
        let definition = component.borrow().definition.clone();
        let mut window = Self {
            component,
            mode: definition.mode,
            gain_text: definition.linear.gain.to_string(),
            linear_controller: (!definition.linear.controlling_name.is_empty())
                .then_some(definition.linear.controlling_name),
            selected_controller_indices: BTreeSet::new(),
            polynomial: PolynomialStage::new(
                definition.polynomial.coefficients,
                definition.polynomial.controlling_names,
            ),
            table: TableStage::new(definition.table.values),
            value_expression: definition.expression.text.clone(),
            table_expression: definition.expression.text,
            topology,
            voltage_count_text: topology.voltage_count.to_string(),
            current_count_text: topology.current_count.to_string(),
            expression_variables: Vec::new(),
            controller_choices: Vec::new(),
            shape_name: String::new(),
            selected_shape: None,
            poly_grid_status: GridCommitStatus::Valid,
            table_grid_status: GridCommitStatus::Valid,
            last_error: None,
        };
        window.rebuild_topology_choices();
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::ModeSelected(value) => self.mode = value,
            Message::GainChanged(value) => self.gain_text = value,
            Message::LinearControllerSelected(value) => self.linear_controller = Some(value),
            Message::PolynomialControllerToggled(index, selected) => {
                self.set_polynomial_controller(index, selected);
            }
            Message::AddPolynomial => self.polynomial.add_coefficient(),
            Message::RemovePolynomial => self.polynomial.remove_last_coefficient(),
            Message::ClearPolynomial => self.polynomial.clear(),
            Message::ValueExpressionChanged(value) => self.value_expression = value,
            Message::TableExpressionChanged(value) => self.table_expression = value,
            Message::AddTablePair => self.table.add_pair(),
            Message::RemoveTablePair => self.table.remove_last_pair(),
            Message::ClearTable => self.table.clear(),
            Message::LoadTablePressed => return load_table_task(),
            Message::TableLoaded(Ok(Some(source))) => {
                if let Err(error) = self.load_table_source(&source) {
                    self.last_error = Some(error.to_string());
                }
            }
            Message::TableLoaded(Err(error)) | Message::TableSaved(Err(error)) => {
                self.last_error = Some(error);
            }
            Message::SaveTablePressed if self.table_grid_status == GridCommitStatus::Valid => {
                return save_table_task(save_table_text(&self.table));
            }
            Message::VoltageCountChanged(value) => {
                self.voltage_count_text = value;
                self.refresh_topology_from_text();
            }
            Message::CurrentCountChanged(value) => {
                self.current_count_text = value;
                self.refresh_topology_from_text();
            }
            Message::OutputSelected(value) => self.select_output(value),
            Message::DifferentialOutputChanged(value) => {
                self.topology.differential_output = value;
                self.refresh_io_configuration();
            }
            Message::DifferentialInputChanged(value) => self.select_differential_input(value),
            Message::ShapeSelected(shape) => {
                self.shape_name.clone_from(&shape.display_name);
                self.selected_shape = Some(shape);
            }
            Message::TableLoaded(Ok(None))
            | Message::SaveTablePressed
            | Message::TableSaved(Ok(_))
            | Message::AcceptPressed
            | Message::CancelPressed => {}
        }
        Task::none()
    }

    /// Ports Ghidra function `FUN_01400490` at `0x01400490`.
    pub fn rebuild_topology_choices(&mut self) {
        self.shape_name.clear();
        self.selected_shape = None;
        self.expression_variables.clear();
        self.controller_choices.clear();
        self.linear_controller = None;
        self.selected_controller_indices.clear();
        self.polynomial.set_variables(Vec::new());
        if self.topology.differential_voltage_input {
            self.expression_variables.push("V(N12)".to_owned());
            self.controller_choices.push("N12".to_owned());
        } else {
            for index in 1..=self.topology.voltage_count {
                self.expression_variables.push(format!("V(N{index})"));
                self.controller_choices.push(format!("N{index}"));
            }
        }
        for index in 1..=self.topology.current_count {
            self.expression_variables.push(format!("I(V{index})"));
            self.controller_choices.push(format!("V{index}"));
        }
    }

    /// Ports Ghidra function `FUN_01401b00` at `0x01401B00`.
    pub fn set_polynomial_controller(&mut self, index: usize, selected: bool) {
        if selected {
            self.selected_controller_indices.insert(index);
        } else {
            self.selected_controller_indices.remove(&index);
        }
        let variables = self
            .selected_controller_indices
            .iter()
            .filter_map(|index| self.controller_choices.get(*index).cloned())
            .collect();
        self.polynomial.set_variables(variables);
    }

    /// Ports Ghidra function `FUN_014020d0` at `0x014020D0`.
    /// # Errors
    /// Returns the compiler diagnostic without changing staged or caller state.
    pub fn check_value_expression(
        &self,
        compiler: &impl ExpressionCompiler,
        context: &ExpressionContext,
    ) -> Result<Option<CompiledExpression>, ExpressionError> {
        compiler.compile(&self.value_expression.lines().collect::<String>(), context)
    }

    /// Ports Ghidra function `FUN_014022e0` at `0x014022E0`.
    /// # Errors
    /// Returns the compiler diagnostic without validating the numeric table.
    pub fn check_table_expression(
        &self,
        compiler: &impl ExpressionCompiler,
        context: &ExpressionContext,
    ) -> Result<Option<CompiledExpression>, ExpressionError> {
        compiler.compile(&self.table_expression, context)
    }

    /// Ports Ghidra function `FUN_01402730` at `0x01402730`.
    /// # Errors
    /// Returns the first conversion error after preserving the loaded prefix.
    pub fn load_table_source(&mut self, source: &str) -> Result<(), TableLoadError> {
        load_table_text(&mut self.table, source)
    }

    /// Ports Ghidra function `FUN_01402e30` at `0x01402E30`.
    pub fn refresh_io_configuration(&mut self) {
        self.rebuild_topology_choices();
    }

    /// Ports Ghidra function `FUN_01402e50` at `0x01402E50` and Ghidra function `FUN_01402e60` at `0x01402E60`.
    pub fn select_output(&mut self, output_kind: OutputKind) {
        self.topology.output_kind = output_kind;
        self.refresh_io_configuration();
    }

    /// Ports Ghidra function `FUN_01402e70` at `0x01402E70`.
    pub fn select_differential_input(&mut self, selected: bool) {
        self.topology.differential_voltage_input = selected;
        self.refresh_io_configuration();
    }

    /// Ports Ghidra function `FUN_01402f10` at `0x01402F10`.
    #[must_use]
    pub fn compatible_shapes(&self, shapes: &[MacroShape]) -> Vec<MacroShape> {
        shapes
            .iter()
            .filter(|shape| shape_is_compatible(shape, self.topology))
            .cloned()
            .collect()
    }

    /// Ports Ghidra function `FUN_01403320` at `0x01403320`.
    /// TABLE commits expression fields before grid validation. Special type
    /// `0xA1` rebuilds symbol and terminals after a normal validation veto.
    /// # Errors
    /// Returns expression, numeric, or selected-shape errors.
    pub fn commit(
        &mut self,
        compiler: &impl ExpressionCompiler,
        context: &ExpressionContext,
    ) -> Result<CommitOutcome, CommitError> {
        let outcome = match self.mode {
            SourceMode::Linear => self.commit_linear()?,
            SourceMode::Polynomial => self.commit_polynomial(),
            SourceMode::Value => self.commit_value(compiler, context)?,
            SourceMode::Table => self.commit_table(compiler, context)?,
        };
        if self.component.borrow().type_code == 0xA1 {
            rebuild_special_component_symbol(
                &mut self.component.borrow_mut(),
                self.topology,
                &self.shape_name,
                self.selected_shape.as_ref(),
            )?;
        }
        Ok(outcome)
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mode = row![
            radio(
                "Linear",
                SourceMode::Linear,
                Some(self.mode),
                Message::ModeSelected
            ),
            radio(
                "POLY",
                SourceMode::Polynomial,
                Some(self.mode),
                Message::ModeSelected
            ),
            radio(
                "VALUE",
                SourceMode::Value,
                Some(self.mode),
                Message::ModeSelected
            ),
            radio(
                "TABLE",
                SourceMode::Table,
                Some(self.mode),
                Message::ModeSelected
            )
        ]
        .spacing(8);
        let content = match self.mode {
            SourceMode::Linear => column![
                text_input("Gain", &self.gain_text).on_input(Message::GainChanged),
                pick_list(
                    self.controller_choices.clone(),
                    self.linear_controller.clone(),
                    Message::LinearControllerSelected
                )
            ],
            SourceMode::Polynomial => column![
                text(format!("Dimension: {}", self.polynomial.variables().len())),
                text(self.polynomial.labels().join(", ")),
                row![
                    button("Add").on_press(Message::AddPolynomial),
                    button("Remove").on_press(Message::RemovePolynomial),
                    button("Clear").on_press(Message::ClearPolynomial)
                ]
                .spacing(8)
            ],
            SourceMode::Value => column![
                text_input("Expression", &self.value_expression)
                    .on_input(Message::ValueExpressionChanged)
            ],
            SourceMode::Table => column![
                text_input("Expression", &self.table_expression)
                    .on_input(Message::TableExpressionChanged),
                text(format!("{} staged values", self.table.values().len())),
                row![
                    button("Add").on_press(Message::AddTablePair),
                    button("Remove").on_press(Message::RemoveTablePair),
                    button("Clear").on_press(Message::ClearTable),
                    button("Load").on_press(Message::LoadTablePressed),
                    button("Save").on_press(Message::SaveTablePressed)
                ]
                .spacing(8)
            ],
        };
        container(scrollable(
            column![
                mode,
                self.topology_controls(),
                content,
                row![
                    button("OK").on_press(Message::AcceptPressed),
                    button("Cancel").on_press(Message::CancelPressed)
                ]
                .spacing(8)
            ]
            .spacing(12),
        ))
        .padding(12)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }

    fn topology_controls(&self) -> iced::widget::Row<'_, Message> {
        row![
            text_input("Voltages", &self.voltage_count_text).on_input(Message::VoltageCountChanged),
            text_input("Currents", &self.current_count_text).on_input(Message::CurrentCountChanged),
            radio(
                "Voltage",
                OutputKind::Voltage,
                Some(self.topology.output_kind),
                Message::OutputSelected
            ),
            radio(
                "Current",
                OutputKind::Current,
                Some(self.topology.output_kind),
                Message::OutputSelected
            ),
            checkbox("Differential output", self.topology.differential_output)
                .on_toggle(Message::DifferentialOutputChanged),
            checkbox(
                "Differential voltage input",
                self.topology.differential_voltage_input
            )
            .on_toggle(Message::DifferentialInputChanged)
        ]
        .spacing(8)
    }

    #[must_use]
    pub fn component(&self) -> Ref<'_, SourceComponent> {
        self.component.borrow()
    }
    #[must_use]
    pub const fn topology(&self) -> IoTopology {
        self.topology
    }
    #[must_use]
    pub fn expression_variables(&self) -> &[String] {
        &self.expression_variables
    }
    #[must_use]
    pub fn controller_choices(&self) -> &[String] {
        &self.controller_choices
    }
    #[must_use]
    pub const fn polynomial(&self) -> &PolynomialStage {
        &self.polynomial
    }
    #[must_use]
    pub const fn table(&self) -> &TableStage {
        &self.table
    }

    fn refresh_topology_from_text(&mut self) {
        if let (Ok(voltage_count), Ok(current_count)) = (
            self.voltage_count_text.parse(),
            self.current_count_text.parse(),
        ) {
            self.topology.voltage_count = voltage_count;
            self.topology.current_count = current_count;
            self.refresh_io_configuration();
        }
    }
    fn commit_linear(&self) -> Result<CommitOutcome, CommitError> {
        let gain = self
            .gain_text
            .parse()
            .map_err(|_| CommitError::InvalidGain)?;
        let mut component = self.component.borrow_mut();
        component.definition.mode = SourceMode::Linear;
        component.definition.linear.gain = gain;
        component.definition.linear.controlling_name =
            self.linear_controller.clone().unwrap_or_default();
        Ok(CommitOutcome::Accepted)
    }
    fn commit_polynomial(&self) -> CommitOutcome {
        if self.poly_grid_status == GridCommitStatus::Invalid {
            return CommitOutcome::ValidationVeto;
        }
        let mut component = self.component.borrow_mut();
        component.definition.mode = SourceMode::Polynomial;
        component.definition.polynomial.dimension = self.polynomial.variables().len();
        component.definition.polynomial.coefficients = self.polynomial.coefficients().to_vec();
        component.definition.polynomial.controlling_names = self.polynomial.variables().to_vec();
        CommitOutcome::Accepted
    }
    fn commit_value(
        &self,
        compiler: &impl ExpressionCompiler,
        context: &ExpressionContext,
    ) -> Result<CommitOutcome, CommitError> {
        let text = self.value_expression.lines().collect::<String>();
        let Some(expression_tree) = compiler.compile(&text, context)? else {
            return Ok(CommitOutcome::EmptyExpressionVeto);
        };
        let mut component = self.component.borrow_mut();
        component.definition.mode = SourceMode::Value;
        write_expression(&mut component.definition, text, expression_tree);
        Ok(CommitOutcome::Accepted)
    }
    fn commit_table(
        &self,
        compiler: &impl ExpressionCompiler,
        context: &ExpressionContext,
    ) -> Result<CommitOutcome, CommitError> {
        let Some(expression_tree) = compiler.compile(&self.table_expression, context)? else {
            return Ok(CommitOutcome::EmptyExpressionVeto);
        };
        {
            let mut component = self.component.borrow_mut();
            write_expression(
                &mut component.definition,
                self.table_expression.clone(),
                expression_tree,
            );
        }
        if self.table_grid_status == GridCommitStatus::Invalid {
            return Ok(CommitOutcome::ValidationVeto);
        }
        let mut component = self.component.borrow_mut();
        component.definition.mode = SourceMode::Table;
        component.definition.table.values = self.table.values().to_vec();
        Ok(CommitOutcome::Accepted)
    }
}

#[derive(Debug)]
pub enum CommitError {
    Expression(ExpressionError),
    InvalidGain,
    Symbol(SymbolError),
}
impl fmt::Display for CommitError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Expression(e) => e.fmt(f),
            Self::InvalidGain => f.write_str("gain is not a number"),
            Self::Symbol(e) => e.fmt(f),
        }
    }
}
impl std::error::Error for CommitError {}
impl From<ExpressionError> for CommitError {
    fn from(value: ExpressionError) -> Self {
        Self::Expression(value)
    }
}
impl From<SymbolError> for CommitError {
    fn from(value: SymbolError) -> Self {
        Self::Symbol(value)
    }
}

fn write_expression(
    definition: &mut ControlledSourceDefinition,
    text: String,
    compiled: CompiledExpression,
) {
    definition.expression.text = text;
    definition
        .expression
        .derived_inputs
        .clone_from(&compiled.references);
    definition.expression.compiled = Some(compiled);
}
fn load_table_task() -> Task<Message> {
    Task::perform(select_table_file(), Message::TableLoaded)
}
fn save_table_task(contents: String) -> Task<Message> {
    Task::perform(select_table_save_file(contents), Message::TableSaved)
}
async fn select_table_file() -> Result<Option<String>, String> {
    let Some(file) = AsyncFileDialog::new()
        .add_filter("Comma separated values", &["csv"])
        .set_title("Import file")
        .pick_file()
        .await
    else {
        return Ok(None);
    };
    std::fs::read_to_string(file.path())
        .map(Some)
        .map_err(|e| e.to_string())
}
async fn select_table_save_file(contents: String) -> Result<Option<PathBuf>, String> {
    let Some(file) = AsyncFileDialog::new()
        .add_filter("Comma separated values", &["csv"])
        .set_file_name("table.csv")
        .save_file()
        .await
    else {
        return Ok(None);
    };
    let path = file.path().to_path_buf();
    std::fs::write(&path, contents).map_err(|e| e.to_string())?;
    Ok(Some(path))
}

#[cfg(test)]
mod tests {
    use super::*;
    use tiara_core::controlled_source_editor::SymbolExpressionCompiler;
    fn component(type_code: u16) -> SharedComponent {
        Rc::new(RefCell::new(SourceComponent {
            type_code,
            ..SourceComponent::default()
        }))
    }
    fn context() -> ExpressionContext {
        ExpressionContext {
            symbols: BTreeSet::from(["N1".to_owned()]),
            functions: BTreeSet::new(),
        }
    }
    #[test]
    fn topology_refresh_uses_differential_names() {
        let mut w = Window::new(component(0), IoTopology::default());
        w.select_differential_input(true);
        assert_eq!(w.expression_variables(), ["V(N12)"]);
        assert_eq!(w.controller_choices(), ["N12"]);
    }
    #[test]
    fn controller_selection_relabels_and_zero_selection_clears() {
        let mut w = Window::new(component(0), IoTopology::default());
        w.set_polynomial_controller(0, true);
        w.polynomial.add_coefficient();
        w.polynomial.add_coefficient();
        assert_eq!(w.polynomial.labels(), ["Constant", "N1"]);
        w.set_polynomial_controller(0, false);
        assert!(w.polynomial.coefficients().is_empty());
    }
    #[test]
    fn expression_check_is_noncommitting() {
        let c = component(0);
        let mut w = Window::new(Rc::clone(&c), IoTopology::default());
        w.value_expression = "N1\n+TIME".to_owned();
        assert!(
            w.check_value_expression(&SymbolExpressionCompiler, &context())
                .expect("valid")
                .is_some()
        );
        assert_eq!(c.borrow().definition, ControlledSourceDefinition::default());
    }
    #[test]
    fn table_failure_keeps_expression_partial_commit() {
        let c = component(0);
        let mut w = Window::new(Rc::clone(&c), IoTopology::default());
        w.mode = SourceMode::Table;
        w.table_expression = "N1".to_owned();
        w.table.add_pair();
        w.table_grid_status = GridCommitStatus::Invalid;
        assert_eq!(
            w.commit(&SymbolExpressionCompiler, &context())
                .expect("compile"),
            CommitOutcome::ValidationVeto
        );
        assert_eq!(c.borrow().definition.mode, SourceMode::Linear);
        assert_eq!(c.borrow().definition.expression.text, "N1");
        assert!(c.borrow().definition.table.values.is_empty());
    }
    #[test]
    fn special_io_runs_after_validation_veto() {
        let c = component(0xA1);
        let mut w = Window::new(Rc::clone(&c), IoTopology::default());
        w.mode = SourceMode::Polynomial;
        w.poly_grid_status = GridCommitStatus::Invalid;
        assert_eq!(
            w.commit(&SymbolExpressionCompiler, &context())
                .expect("symbol"),
            CommitOutcome::ValidationVeto
        );
        assert_eq!(c.borrow().symbol.terminal_count, 2);
    }
    #[test]
    fn load_and_shape_filter_use_core_rules() {
        let mut w = Window::new(component(0), IoTopology::default());
        w.load_table_source("1,2\n3,4").expect("table");
        assert_eq!(w.table().values(), [1.0, 2.0, 3.0, 4.0]);
        let shapes = vec![
            MacroShape {
                display_name: "Good".to_owned(),
                library: "L".to_owned(),
                pins: vec!["N1".to_owned(), "O(V)".to_owned()],
            },
            MacroShape::default(),
        ];
        assert_eq!(w.compatible_shapes(&shapes).len(), 1);
    }
}
