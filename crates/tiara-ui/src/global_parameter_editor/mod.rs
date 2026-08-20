use iced::widget::{button, checkbox, column, container, row, scrollable, text, text_input};
use iced::{Element, Length, Point, Task};
use tiara_core::global_parameters::{
    Bounds, ExpressionEvaluator, ExpressionRecord, GlobalParameterRow,
    GlobalParameterValidationError, ParameterTextObject, RuntimeParameterObject,
    RuntimeParameterState, evaluate_parameter_expressions, format_global_parameter_text,
    refresh_parameter_text_objects, transfer_runtime_parameter_objects,
    validate_global_parameter_rows,
};

#[derive(Debug, Clone, PartialEq)]
pub struct PlacedParameterText {
    pub subtype: u8,
    pub lines: Vec<String>,
    pub position: Point,
}

#[derive(Debug, Default)]
pub struct EditorEnvironment {
    pub document_objects: Vec<ParameterTextObject>,
    pub attached_object: Option<u64>,
    pub invalidations: Vec<Bounds>,
    pub placed_objects: Vec<PlacedParameterText>,
    pub runtime: RuntimeParameterState,
    pub pointer_position: Point,
    pub minimum_aggregate_mode: bool,
    pub document_changed: bool,
    pub refresh_generation: u64,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum EditorError {
    Validation(GlobalParameterValidationError),
    Expression(String),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    SelectRow(usize),
    NameChanged { row: usize, value: String },
    ValueChanged { row: usize, value: String },
    VisibilityChanged { row: usize, visible: bool },
    Add,
    Delete,
    SyntaxCheck,
    Place,
    Accept,
    Cancel,
}

#[derive(Debug)]
pub struct Window {
    rows: Vec<GlobalParameterRow>,
    selected_row: usize,
    grid_update_guard: bool,
    grid_focus_generation: u64,
    working_parameter_objects: Vec<RuntimeParameterObject>,
    additional_reserved_names: Vec<String>,
    auxiliary_symbols: Vec<ExpressionRecord>,
    schematic_symbols: Vec<ExpressionRecord>,
    syntax_results: Vec<ExpressionRecord>,
    last_error: Option<EditorError>,
    modal_result: Option<u8>,
    closed: bool,
}

impl Window {
    #[must_use]
    pub fn new(
        mut rows: Vec<GlobalParameterRow>,
        working_parameter_objects: Vec<RuntimeParameterObject>,
    ) -> Self {
        if rows.is_empty() {
            rows.push(GlobalParameterRow::new("", "", true));
        }
        Self {
            rows,
            selected_row: 0,
            grid_update_guard: false,
            grid_focus_generation: 0,
            working_parameter_objects,
            additional_reserved_names: Vec::new(),
            auxiliary_symbols: Vec::new(),
            schematic_symbols: Vec::new(),
            syntax_results: Vec::new(),
            last_error: None,
            modal_result: None,
            closed: false,
        }
    }

    pub fn update(
        &mut self,
        message: Message,
        environment: &mut EditorEnvironment,
        evaluator: &dyn ExpressionEvaluator,
    ) -> Task<Message> {
        match message {
            Message::SelectRow(row) => {
                if row < self.rows.len() {
                    self.selected_row = row;
                }
            }
            Message::NameChanged { row, value } => {
                if let Some(parameter) = self.rows.get_mut(row) {
                    parameter.name = value;
                }
            }
            Message::ValueChanged { row, value } => {
                if let Some(parameter) = self.rows.get_mut(row) {
                    parameter.value = value;
                }
            }
            Message::VisibilityChanged { row, visible } => self.set_row_flag(row, visible),
            Message::Add => self.add_row(),
            Message::Delete => self.delete_selected_row(),
            Message::SyntaxCheck => self.syntax_check(evaluator),
            Message::Place => self.place_in_schematic(environment),
            Message::Accept => self.commit(environment),
            Message::Cancel => self.closed = true,
        }

        Task::none()
    }

    /// Validates and commits the edited global parameter set.
    ///
    /// This is an original Rust implementation traced to Ghidra function
    /// `0x0143B640`, symbol `FUN_0143b640`.
    pub fn commit(&mut self, environment: &mut EditorEnvironment) {
        if let Err(error) =
            validate_global_parameter_rows(&self.rows, &self.additional_reserved_names)
        {
            self.last_error = Some(EditorError::Validation(error));
            self.modal_result = Some(0);
            return;
        }

        let formatted = format_global_parameter_text(&self.rows);
        let lines = formatted.lines();
        let assignments = formatted.all_assignments();
        if let Some(attached_id) = environment.attached_object
            && let Some(object) = environment
                .document_objects
                .iter_mut()
                .find(|object| object.id == attached_id)
        {
            let old_bounds = object.bounds;
            object.lines.clone_from(&lines);
            let line_count = u16::try_from(object.lines.len()).unwrap_or(u16::MAX);
            object.bounds.height = f32::from(line_count);
            environment
                .invalidations
                .push(old_bounds.union(object.bounds));
        }
        environment
            .invalidations
            .extend(refresh_parameter_text_objects(
                &mut environment.document_objects,
                environment.attached_object,
                &assignments,
            ));
        transfer_runtime_parameter_objects(
            &mut environment.runtime,
            &mut self.working_parameter_objects,
            environment.minimum_aggregate_mode,
        );
        environment.refresh_generation = environment.refresh_generation.saturating_add(1);
        self.last_error = None;
        self.modal_result = Some(1);
        self.closed = true;
    }

    /// Inserts an empty visible row after the selected row.
    ///
    /// This is an original Rust implementation traced to Ghidra function
    /// `0x0143BC50`, symbol `FUN_0143bc50`.
    pub fn add_row(&mut self) {
        self.grid_update_guard = true;
        let insertion_index = self.selected_row.saturating_add(1).min(self.rows.len());
        self.rows
            .insert(insertion_index, GlobalParameterRow::new("", "", true));
        self.selected_row = insertion_index;
        self.refresh_and_focus_grid();
        self.grid_update_guard = false;
    }

    /// Deletes the selected row while preserving one editable row.
    ///
    /// This is an original Rust implementation traced to Ghidra function
    /// `0x0143BD70`, symbol `FUN_0143bd70`.
    pub fn delete_selected_row(&mut self) {
        self.grid_update_guard = true;
        if self.rows.len() > 1 {
            let selected = self.selected_row.min(self.rows.len() - 1);
            self.rows.remove(selected);
            self.selected_row = selected.min(self.rows.len() - 1);
        }
        self.refresh_and_focus_grid();
        self.grid_update_guard = false;
    }

    /// Validates and evaluates temporary parameter expressions.
    ///
    /// This is an original Rust implementation traced to Ghidra function
    /// `0x0143C210`, symbol `FUN_0143c210`.
    pub fn syntax_check(&mut self, evaluator: &dyn ExpressionEvaluator) {
        if let Err(error) =
            validate_global_parameter_rows(&self.rows, &self.additional_reserved_names)
        {
            self.last_error = Some(EditorError::Validation(error));
            return;
        }
        match evaluate_parameter_expressions(
            &self.rows,
            &self.auxiliary_symbols,
            &self.schematic_symbols,
            evaluator,
        ) {
            Ok(results) => {
                self.syntax_results = results;
                self.last_error = None;
            }
            Err(error) => self.last_error = Some(EditorError::Expression(error)),
        }
    }

    /// Validates rows and inserts their text into the active schematic.
    ///
    /// This is an original Rust implementation traced to Ghidra function
    /// `0x0143BE30`, symbol `FUN_0143be30`.
    pub fn place_in_schematic(&mut self, environment: &mut EditorEnvironment) {
        if let Err(error) =
            validate_global_parameter_rows(&self.rows, &self.additional_reserved_names)
        {
            self.last_error = Some(EditorError::Validation(error));
            return;
        }
        let formatted = format_global_parameter_text(&self.rows);
        environment
            .invalidations
            .extend(refresh_parameter_text_objects(
                &mut environment.document_objects,
                None,
                &formatted.all_assignments(),
            ));
        if !self.rows.is_empty() {
            environment.placed_objects.push(PlacedParameterText {
                subtype: 2,
                lines: formatted.lines(),
                position: environment.pointer_position,
            });
            environment.document_changed = true;
        }
        environment.refresh_generation = environment.refresh_generation.saturating_add(1);
        self.last_error = None;
        self.closed = true;
    }

    /// Reads the third-column flag for one row.
    ///
    /// This adapter retains the trace for Ghidra function `0x0143D610`, symbol
    /// `FUN_0143d610`.
    #[must_use]
    pub fn row_flag(&self, row: usize) -> Option<bool> {
        self.rows.get(row).map(GlobalParameterRow::is_visible)
    }

    /// Sets the third-column flag for one row.
    ///
    /// This adapter retains the trace for Ghidra function `0x0143D630`, symbol
    /// `FUN_0143d630`.
    pub fn set_row_flag(&mut self, row: usize, visible: bool) {
        if let Some(parameter) = self.rows.get_mut(row) {
            parameter.set_visible(visible);
        }
    }

    const fn refresh_and_focus_grid(&mut self) {
        self.grid_focus_generation = self.grid_focus_generation.saturating_add(1);
    }

    pub fn set_additional_reserved_names(&mut self, names: Vec<String>) {
        self.additional_reserved_names = names;
    }

    pub fn set_expression_context(
        &mut self,
        auxiliary_symbols: Vec<ExpressionRecord>,
        schematic_symbols: Vec<ExpressionRecord>,
    ) {
        self.auxiliary_symbols = auxiliary_symbols;
        self.schematic_symbols = schematic_symbols;
    }

    #[must_use]
    pub fn rows(&self) -> &[GlobalParameterRow] {
        &self.rows
    }

    #[must_use]
    pub const fn selected_row(&self) -> usize {
        self.selected_row
    }

    #[must_use]
    pub const fn grid_update_guard(&self) -> bool {
        self.grid_update_guard
    }

    #[must_use]
    pub const fn grid_focus_generation(&self) -> u64 {
        self.grid_focus_generation
    }

    #[must_use]
    pub fn syntax_results(&self) -> &[ExpressionRecord] {
        &self.syntax_results
    }

    #[must_use]
    pub const fn last_error(&self) -> Option<&EditorError> {
        self.last_error.as_ref()
    }

    #[must_use]
    pub const fn modal_result(&self) -> Option<u8> {
        self.modal_result
    }

    #[must_use]
    pub const fn closed(&self) -> bool {
        self.closed
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let rows = self.rows.iter().enumerate().map(|(row_index, parameter)| {
            let selected_marker = if row_index == self.selected_row {
                ">"
            } else {
                " "
            };
            row![
                button(selected_marker).on_press(Message::SelectRow(row_index)),
                text_input("Name", &parameter.name).on_input(move |value| {
                    Message::NameChanged {
                        row: row_index,
                        value,
                    }
                }),
                text_input("Value", &parameter.value).on_input(move |value| {
                    Message::ValueChanged {
                        row: row_index,
                        value,
                    }
                }),
                checkbox("Visible", parameter.is_visible()).on_toggle(move |visible| {
                    Message::VisibilityChanged {
                        row: row_index,
                        visible,
                    }
                }),
            ]
            .spacing(8)
            .into()
        });
        let error = self
            .last_error
            .as_ref()
            .map_or_else(String::new, |error| match error {
                EditorError::Validation(error) => error.to_string(),
                EditorError::Expression(error) => error.clone(),
            });
        let content = column![
            text("Global parameters").size(18),
            scrollable(column(rows).spacing(6)),
            row![
                button("Add").on_press(Message::Add),
                button("Delete").on_press(Message::Delete),
                button("Syntax check").on_press(Message::SyntaxCheck),
                button("Add to schematic").on_press(Message::Place),
            ]
            .spacing(8),
            text(error),
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(8),
        ]
        .spacing(10);

        container(content)
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    struct NumericEvaluator;

    impl ExpressionEvaluator for NumericEvaluator {
        fn evaluate(&self, expression: &str, _context: &[ExpressionRecord]) -> Result<f64, String> {
            expression.parse::<f64>().map_err(|error| error.to_string())
        }
    }

    fn valid_rows() -> Vec<GlobalParameterRow> {
        vec![
            GlobalParameterRow::new("gain", "2", true),
            GlobalParameterRow::new("internal", "3", false),
        ]
    }

    fn window() -> Window {
        Window::new(
            valid_rows(),
            vec![
                RuntimeParameterObject {
                    name: "gain".to_owned(),
                    factor: 2,
                },
                RuntimeParameterObject {
                    name: "internal".to_owned(),
                    factor: 3,
                },
            ],
        )
    }

    #[test]
    fn add_inserts_after_selection_and_sets_the_flag() {
        let mut window = window();
        window.selected_row = 0;

        window.add_row();

        assert_eq!(window.rows().len(), 3);
        assert_eq!(window.selected_row(), 1);
        assert_eq!(window.rows()[1], GlobalParameterRow::new("", "", true));
        assert_eq!(window.row_flag(1), Some(true));
        assert!(!window.grid_update_guard());
        assert_eq!(window.grid_focus_generation(), 1);
    }

    #[test]
    fn delete_preserves_one_row_and_always_refreshes_focus() {
        let mut window = Window::new(vec![GlobalParameterRow::new("only", "1", true)], Vec::new());

        window.delete_selected_row();

        assert_eq!(window.rows().len(), 1);
        assert_eq!(window.grid_focus_generation(), 1);
        assert!(!window.grid_update_guard());
    }

    #[test]
    fn invalid_commit_vetoes_the_modal_result_without_changing_runtime() {
        let mut window = Window::new(vec![GlobalParameterRow::new("", "1", true)], Vec::new());
        let mut environment = EditorEnvironment::default();

        window.commit(&mut environment);

        assert_eq!(window.modal_result(), Some(0));
        assert!(!window.closed());
        assert!(matches!(
            window.last_error(),
            Some(EditorError::Validation(
                GlobalParameterValidationError::EmptyName { row: 0 }
            ))
        ));
        assert!(environment.runtime.objects.is_empty());
    }

    #[test]
    fn valid_commit_updates_objects_and_transfers_runtime_ownership() {
        let mut window = window();
        let mut environment = EditorEnvironment {
            document_objects: vec![ParameterTextObject {
                id: 4,
                object_type: 8,
                state: 2,
                lines: vec!["old=1".to_owned()],
                bounds: Bounds {
                    width: 5.0,
                    height: 1.0,
                    ..Bounds::default()
                },
            }],
            attached_object: Some(4),
            ..EditorEnvironment::default()
        };

        window.commit(&mut environment);

        assert_eq!(window.modal_result(), Some(1));
        assert!(window.closed());
        assert!((environment.runtime.derived_aggregate - 6.0).abs() < f64::EPSILON);
        assert_eq!(environment.runtime.objects.len(), 2);
        assert_eq!(
            environment.document_objects[0].lines,
            [
                "gain=2",
                "@ Configuration begin",
                "internal",
                ".@ Configuration end"
            ]
        );
        assert_eq!(environment.invalidations.len(), 1);
    }

    #[test]
    fn syntax_check_stores_temporary_results_without_committing() {
        let mut window = window();
        let mut environment = EditorEnvironment::default();

        drop(window.update(Message::SyntaxCheck, &mut environment, &NumericEvaluator));

        assert_eq!(window.syntax_results()[0].result, Some(2.0));
        assert_eq!(window.syntax_results()[1].result, Some(3.0));
        assert!(environment.runtime.objects.is_empty());
        assert!(!window.closed());
    }

    #[test]
    fn place_refreshes_document_inserts_type_two_and_closes() {
        let mut window = window();
        let mut environment = EditorEnvironment {
            pointer_position: Point::new(10.0, 20.0),
            ..EditorEnvironment::default()
        };

        window.place_in_schematic(&mut environment);

        assert!(window.closed());
        assert!(environment.document_changed);
        assert_eq!(environment.placed_objects.len(), 1);
        assert_eq!(environment.placed_objects[0].subtype, 2);
        assert_eq!(
            environment.placed_objects[0].position,
            Point::new(10.0, 20.0)
        );
        assert_eq!(environment.refresh_generation, 1);
    }
}
