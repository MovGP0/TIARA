use iced::widget::{button, checkbox, column, container, row, scrollable, text, text_input};
use iced::{Element, Length, Point, Rectangle, Task};
use tiara_core::global_parameters::{
    Bounds, ExpressionEvaluator, ExpressionRecord, GlobalParameterRow,
    GlobalParameterValidationError, ParameterTextObject, RuntimeParameterObject,
    RuntimeParameterState, evaluate_parameter_expressions, format_global_parameter_text,
    refresh_parameter_text_objects, transfer_runtime_parameter_objects,
    validate_global_parameter_rows,
};

pub const HELP_CONTEXT: u32 = 0x4b2;
pub const NAME_HEADER_RESOURCE_ID: u32 = 0x836;
pub const VALUE_HEADER_RESOURCE_ID: u32 = 0x832;
const CHECKBOX_SIZE: f32 = 14.0;

/// Supplies the two localized grid headers loaded during form creation.
pub trait ColumnTextProvider {
    fn text(&mut self, resource_id: u32) -> String;
}

/// Configures the host editor used by a selected parameter-value cell.
pub trait ValueCellEditor {
    fn configure_for_value(&mut self, value: &str);
}

/// Opens the parameter-object dialog used by the grid ellipsis button.
pub trait ParameterDialogAdapter {
    type Error;

    /// Edits the working parameter objects for one grid row.
    ///
    /// # Errors
    ///
    /// Returns the host dialog error. A successful `false` result means that
    /// the user cancelled the dialog.
    fn edit_parameter(
        &mut self,
        name: &str,
        value: &str,
        working_objects: &mut Vec<RuntimeParameterObject>,
    ) -> Result<bool, Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum GridColumn {
    Name,
    Value,
    Visibility,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct CheckboxCell {
    pub bounds: Rectangle,
    pub checked: bool,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct CellDrawing {
    pub selected_background: bool,
    pub checkbox: Option<CheckboxCell>,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct CellSelection {
    pub can_select: bool,
    pub checkbox: Option<CheckboxCell>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum GridResourceState {
    Uninitialized,
    Ready,
    Destroyed,
}

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
    Shown,
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
    selected_column: Option<GridColumn>,
    column_headers: [String; 3],
    grid_update_guard: bool,
    grid_focus_generation: u64,
    grid_invalidation_generation: u64,
    working_parameter_objects: Vec<RuntimeParameterObject>,
    locked_parameter_names: Vec<String>,
    additional_reserved_names: Vec<String>,
    auxiliary_symbols: Vec<ExpressionRecord>,
    schematic_symbols: Vec<ExpressionRecord>,
    syntax_results: Vec<ExpressionRecord>,
    last_error: Option<EditorError>,
    modal_result: Option<u8>,
    closed: bool,
    help_context: u32,
    grid_resources: GridResourceState,
    checkbox_overlay: Option<CheckboxCell>,
}

impl Window {
    #[must_use]
    pub fn new(
        rows: Vec<GlobalParameterRow>,
        working_parameter_objects: Vec<RuntimeParameterObject>,
    ) -> Self {
        Self {
            rows,
            selected_row: 0,
            selected_column: None,
            column_headers: ["Name".to_owned(), "Value".to_owned(), String::new()],
            grid_update_guard: false,
            grid_focus_generation: 0,
            grid_invalidation_generation: 0,
            working_parameter_objects,
            locked_parameter_names: Vec::new(),
            additional_reserved_names: Vec::new(),
            auxiliary_symbols: Vec::new(),
            schematic_symbols: Vec::new(),
            syntax_results: Vec::new(),
            last_error: None,
            modal_result: None,
            closed: false,
            help_context: 0,
            grid_resources: GridResourceState::Uninitialized,
            checkbox_overlay: None,
        }
    }

    pub fn update(
        &mut self,
        message: Message,
        environment: &mut EditorEnvironment,
        evaluator: &dyn ExpressionEvaluator,
    ) -> Task<Message> {
        match message {
            Message::Shown => self.form_show(),
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

    /// Initializes the global parameter grid and its owned helper resources.
    ///
    /// This is an original Rust implementation traced to Ghidra function
    /// `0x0143A7C0`, symbol `FUN_0143a7c0`.
    ///
    /// The source loads header resources `0x836` and `0x832`, preserves one
    /// editable row when the input list is empty, derives each third-column
    /// flag from the attached configuration names, copies the working runtime
    /// names into a lookup list, selects the first value cell when input rows
    /// exist, creates a 14 by 14 checkbox editor and loads `RXSTICK`, and sets
    /// help context `0x4B2`.
    pub fn form_create(
        &mut self,
        text_provider: &mut impl ColumnTextProvider,
        value_editor: &mut impl ValueCellEditor,
        attached_configuration_names: &[String],
    ) {
        let had_input_rows = !self.rows.is_empty();
        if !had_input_rows {
            self.rows.push(GlobalParameterRow::new("", "", true));
        }
        self.column_headers = [
            text_provider.text(NAME_HEADER_RESOURCE_ID),
            text_provider.text(VALUE_HEADER_RESOURCE_ID),
            String::new(),
        ];
        for row in &mut self.rows {
            let is_configuration = attached_configuration_names
                .iter()
                .any(|name| name.eq_ignore_ascii_case(&row.name));
            row.set_visible(!is_configuration);
        }
        self.rebuild_locked_parameter_names();
        self.syntax_results.clear();
        self.help_context = HELP_CONTEXT;
        self.grid_resources = GridResourceState::Ready;
        self.checkbox_overlay = None;
        if had_input_rows {
            self.selected_row = 0;
            self.selected_column = Some(GridColumn::Value);
            value_editor.configure_for_value(&self.rows[0].value);
        }
    }

    /// Releases the four helper objects owned by the form.
    ///
    /// This ports Ghidra function `FUN_0143aec0` at `0x0143AEC0`. Rust owns
    /// these resources directly, so clearing their state replaces the four
    /// recovered nil-safe Delphi destruction calls. Grid rows are form-owned
    /// controls and are not changed by this handler.
    pub fn form_destroy(&mut self) {
        self.syntax_results.clear();
        self.working_parameter_objects.clear();
        self.grid_resources = GridResourceState::Destroyed;
        self.locked_parameter_names.clear();
        self.checkbox_overlay = None;
    }

    /// Activates the first value cell when the form becomes visible.
    ///
    /// This ports Ghidra function `FUN_0143af00` at `0x0143AF00`. The original
    /// selects column one and the first editable row, obtains that cell's
    /// bounds, and sends matching mouse-down and mouse-up messages. Iced uses
    /// explicit selection state and a focus generation instead of native mouse
    /// message injection.
    // `Vec::is_empty` is not const until after the workspace MSRV of 1.85.
    #[allow(clippy::missing_const_for_fn)]
    pub fn form_show(&mut self) {
        if !self.rows.is_empty() {
            self.selected_row = 0;
            self.selected_column = Some(GridColumn::Value);
            self.grid_focus_generation = self.grid_focus_generation.saturating_add(1);
        }
    }

    /// Returns the iced drawing data for one recovered string-grid cell.
    ///
    /// This ports Ghidra function `FUN_0143afb0` at `0x0143AFB0`. Selected
    /// cells retain their selected background. Valid visibility cells receive
    /// a centered 14 by 14 checkbox surface and the `RXSTICK` state when the
    /// row's third-column flag is set.
    #[must_use]
    pub fn parameter_editor_draw_cell(
        &self,
        column: GridColumn,
        row: usize,
        bounds: Rectangle,
        selected: bool,
    ) -> CellDrawing {
        let checkbox = (column == GridColumn::Visibility
            && row < self.rows.len()
            && self.grid_resources == GridResourceState::Ready)
            .then(|| CheckboxCell {
                bounds: centered_checkbox(bounds),
                checked: self.rows[row].is_visible(),
            });
        CellDrawing {
            selected_background: selected,
            checkbox,
        }
    }

    /// Opens the parameter-object editor for the row's exact name and value.
    ///
    /// This ports Ghidra function `FUN_0143b130` at `0x0143B130`. Acceptance
    /// rebuilds the name lookup from the possibly changed working objects;
    /// cancellation leaves that lookup unchanged.
    ///
    /// # Errors
    ///
    /// Returns the host dialog error. An invalid row is a no-op and returns
    /// `Ok(false)`.
    pub fn parameter_editor_ellipsis_clicked<Adapter: ParameterDialogAdapter>(
        &mut self,
        row: usize,
        adapter: &mut Adapter,
    ) -> Result<bool, Adapter::Error> {
        let Some(parameter) = self.rows.get(row) else {
            return Ok(false);
        };
        let name = parameter.name.clone();
        let value = parameter.value.clone();
        let accepted =
            adapter.edit_parameter(&name, &value, &mut self.working_parameter_objects)?;
        if accepted {
            self.rebuild_locked_parameter_names();
        }
        Ok(accepted)
    }

    /// Applies the recovered selection rules for one grid cell.
    ///
    /// This ports Ghidra function `FUN_0143b2e0` at `0x0143B2E0`. The update
    /// guard, an out-of-range row, or a noncurrent editor context keeps the
    /// caller's initial selection result. A locked name cell cannot be
    /// selected. A value cell configures the host editor. A visibility cell
    /// cannot become the grid's current cell and instead positions the iced
    /// checkbox overlay.
    pub fn parameter_editor_select_cell(
        &mut self,
        column: GridColumn,
        row: usize,
        bounds: Rectangle,
        initial_can_select: bool,
        editor_context_is_current: bool,
        value_editor: &mut impl ValueCellEditor,
    ) -> CellSelection {
        self.grid_invalidation_generation = self.grid_invalidation_generation.saturating_add(1);
        if self.grid_update_guard || row >= self.rows.len() || !editor_context_is_current {
            return CellSelection {
                can_select: initial_can_select,
                checkbox: self.checkbox_overlay,
            };
        }

        let can_select = match column {
            GridColumn::Name => {
                self.checkbox_overlay = None;
                !self.parameter_name_is_locked(&self.rows[row].name)
            }
            GridColumn::Value => {
                value_editor.configure_for_value(&self.rows[row].value);
                self.checkbox_overlay = None;
                initial_can_select
            }
            GridColumn::Visibility => {
                self.checkbox_overlay =
                    (self.grid_resources == GridResourceState::Ready).then(|| CheckboxCell {
                        bounds: centered_checkbox(bounds),
                        checked: self.rows[row].is_visible(),
                    });
                false
            }
        };
        if can_select {
            self.selected_row = row;
            self.selected_column = Some(column);
        }
        CellSelection {
            can_select,
            checkbox: self.checkbox_overlay,
        }
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

    fn rebuild_locked_parameter_names(&mut self) {
        self.locked_parameter_names = self
            .working_parameter_objects
            .iter()
            .map(|parameter| parameter.name.clone())
            .collect();
    }

    fn parameter_name_is_locked(&self, name: &str) -> bool {
        self.locked_parameter_names
            .iter()
            .any(|locked| locked.eq_ignore_ascii_case(name))
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
    pub const fn selected_column(&self) -> Option<GridColumn> {
        self.selected_column
    }

    #[must_use]
    pub const fn column_headers(&self) -> &[String; 3] {
        &self.column_headers
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
    pub const fn grid_invalidation_generation(&self) -> u64 {
        self.grid_invalidation_generation
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub const fn checkmark_image_loaded(&self) -> bool {
        matches!(self.grid_resources, GridResourceState::Ready)
    }

    #[must_use]
    pub fn locked_parameter_names(&self) -> &[String] {
        &self.locked_parameter_names
    }

    #[must_use]
    pub fn working_parameter_objects(&self) -> &[RuntimeParameterObject] {
        &self.working_parameter_objects
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
        let headers = row![
            text(""),
            text(&self.column_headers[0]),
            text(&self.column_headers[1]),
            text(&self.column_headers[2]),
        ]
        .spacing(8);
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
            headers,
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

fn centered_checkbox(bounds: Rectangle) -> Rectangle {
    Rectangle {
        x: bounds.x + ((bounds.width - CHECKBOX_SIZE) / 2.0).floor(),
        y: bounds.y + ((bounds.height - CHECKBOX_SIZE) / 2.0).floor(),
        width: CHECKBOX_SIZE,
        height: CHECKBOX_SIZE,
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

    #[derive(Default)]
    struct TextProvider {
        requested: Vec<u32>,
    }

    impl ColumnTextProvider for TextProvider {
        fn text(&mut self, resource_id: u32) -> String {
            self.requested.push(resource_id);
            format!("text-{resource_id:x}")
        }
    }

    #[derive(Default)]
    struct ValueEditor {
        values: Vec<String>,
    }

    impl ValueCellEditor for ValueEditor {
        fn configure_for_value(&mut self, value: &str) {
            self.values.push(value.to_owned());
        }
    }

    struct ParameterDialog {
        accepted: bool,
        replacement: Vec<RuntimeParameterObject>,
        calls: Vec<(String, String)>,
    }

    impl ParameterDialogAdapter for ParameterDialog {
        type Error = String;

        fn edit_parameter(
            &mut self,
            name: &str,
            value: &str,
            working_objects: &mut Vec<RuntimeParameterObject>,
        ) -> Result<bool, Self::Error> {
            self.calls.push((name.to_owned(), value.to_owned()));
            if self.accepted {
                working_objects.clone_from(&self.replacement);
            }
            Ok(self.accepted)
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
    fn fun_0143a7c0_initializes_headers_flags_helpers_and_first_value_cell() {
        let mut window = window();
        let mut texts = TextProvider::default();
        let mut editor = ValueEditor::default();

        window.form_create(&mut texts, &mut editor, &["INTERNAL".to_owned()]);

        assert_eq!(texts.requested, [0x836, 0x832]);
        assert_eq!(window.column_headers(), &["text-836", "text-832", ""]);
        assert!(window.rows()[0].is_visible());
        assert!(!window.rows()[1].is_visible());
        assert_eq!(window.locked_parameter_names(), ["gain", "internal"]);
        assert_eq!(window.selected_column(), Some(GridColumn::Value));
        assert_eq!(editor.values, ["2"]);
        assert_eq!(window.help_context(), HELP_CONTEXT);
        assert!(window.checkmark_image_loaded());
    }

    #[test]
    fn fun_0143a7c0_empty_input_creates_one_visible_row_without_select_callback() {
        let mut window = Window::new(Vec::new(), Vec::new());
        let mut texts = TextProvider::default();
        let mut editor = ValueEditor::default();

        window.form_create(&mut texts, &mut editor, &[]);

        assert_eq!(window.rows(), [GlobalParameterRow::new("", "", true)]);
        assert!(editor.values.is_empty());
        assert_eq!(window.selected_column(), None);
    }

    #[test]
    fn fun_0143aec0_releases_helper_resources_but_preserves_grid_rows() {
        let mut window = window();
        let mut texts = TextProvider::default();
        let mut editor = ValueEditor::default();
        window.form_create(&mut texts, &mut editor, &[]);
        window.syntax_results.push(ExpressionRecord {
            name: "temporary".to_owned(),
            expression: "1".to_owned(),
            result: Some(1.0),
        });

        window.form_destroy();

        assert_eq!(window.rows().len(), 2);
        assert!(window.syntax_results().is_empty());
        assert!(window.working_parameter_objects().is_empty());
        assert!(window.locked_parameter_names().is_empty());
        assert!(!window.checkmark_image_loaded());
    }

    #[test]
    fn fun_0143af00_selects_and_focuses_the_first_value_cell() {
        let mut window = window();
        window.selected_row = 1;

        let mut environment = EditorEnvironment::default();
        drop(window.update(Message::Shown, &mut environment, &NumericEvaluator));

        assert_eq!(window.selected_row(), 0);
        assert_eq!(window.selected_column(), Some(GridColumn::Value));
        assert_eq!(window.grid_focus_generation(), 1);
    }

    #[test]
    fn fun_0143afb0_draws_a_centered_checked_visibility_cell() {
        let mut window = window();
        let mut texts = TextProvider::default();
        let mut editor = ValueEditor::default();
        window.form_create(&mut texts, &mut editor, &[]);

        let drawing = window.parameter_editor_draw_cell(
            GridColumn::Visibility,
            0,
            Rectangle {
                x: 10.0,
                y: 20.0,
                width: 30.0,
                height: 20.0,
            },
            true,
        );

        assert!(drawing.selected_background);
        assert_eq!(
            drawing.checkbox,
            Some(CheckboxCell {
                bounds: Rectangle {
                    x: 18.0,
                    y: 23.0,
                    width: 14.0,
                    height: 14.0,
                },
                checked: true,
            })
        );
        assert_eq!(
            window
                .parameter_editor_draw_cell(GridColumn::Name, 0, Rectangle::default(), false,)
                .checkbox,
            None
        );
    }

    #[test]
    fn fun_0143b130_acceptance_rebuilds_names_from_edited_working_objects() -> Result<(), String> {
        let mut window = window();
        let mut dialog = ParameterDialog {
            accepted: true,
            replacement: vec![RuntimeParameterObject {
                name: "replacement".to_owned(),
                factor: 7,
            }],
            calls: Vec::new(),
        };

        let accepted = window.parameter_editor_ellipsis_clicked(1, &mut dialog)?;

        assert!(accepted);
        assert_eq!(dialog.calls, [("internal".to_owned(), "3".to_owned())]);
        assert_eq!(window.locked_parameter_names(), ["replacement"]);
        Ok(())
    }

    #[test]
    fn fun_0143b2e0_applies_name_value_and_visibility_selection_rules() {
        let mut window = window();
        let mut texts = TextProvider::default();
        let mut editor = ValueEditor::default();
        window.form_create(&mut texts, &mut editor, &[]);
        editor.values.clear();
        let bounds = Rectangle {
            x: 0.0,
            y: 0.0,
            width: 20.0,
            height: 20.0,
        };

        let name = window.parameter_editor_select_cell(
            GridColumn::Name,
            0,
            bounds,
            true,
            true,
            &mut editor,
        );
        let value = window.parameter_editor_select_cell(
            GridColumn::Value,
            1,
            bounds,
            true,
            true,
            &mut editor,
        );
        let visibility = window.parameter_editor_select_cell(
            GridColumn::Visibility,
            1,
            bounds,
            true,
            true,
            &mut editor,
        );

        assert!(!name.can_select);
        assert!(value.can_select);
        assert_eq!(editor.values, ["3"]);
        assert!(!visibility.can_select);
        assert_eq!(
            visibility.checkbox,
            Some(CheckboxCell {
                bounds: Rectangle {
                    x: 3.0,
                    y: 3.0,
                    width: 14.0,
                    height: 14.0,
                },
                checked: true,
            })
        );
        assert_eq!(window.selected_row(), 1);
        assert_eq!(window.selected_column(), Some(GridColumn::Value));
    }

    #[test]
    fn fun_0143b2e0_guarded_or_noncurrent_selection_preserves_caller_result() {
        let mut window = window();
        let mut editor = ValueEditor::default();
        window.grid_update_guard = true;

        let guarded = window.parameter_editor_select_cell(
            GridColumn::Value,
            0,
            Rectangle::default(),
            false,
            true,
            &mut editor,
        );
        window.grid_update_guard = false;
        let noncurrent = window.parameter_editor_select_cell(
            GridColumn::Value,
            0,
            Rectangle::default(),
            true,
            false,
            &mut editor,
        );

        assert!(!guarded.can_select);
        assert!(noncurrent.can_select);
        assert!(editor.values.is_empty());
        assert_eq!(window.grid_invalidation_generation(), 2);
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
