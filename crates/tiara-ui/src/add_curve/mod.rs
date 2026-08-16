use std::collections::{BTreeMap, BTreeSet};
use std::time::Duration;

use iced::widget::{
    button, checkbox, column, container, pick_list, radio, row, scrollable, text, text_input,
};
use iced::{Alignment, Element, Length, Point, Size, mouse};

use crate::shared::window_shell;

pub const TITLE: &str = "Post-processor";
pub const FORM_RESOURCE: &str = "AddCurveDlg";
const BUILT_IN_TOKENS: [&str; 16] = [
    "+", "-", "*", "/", "^", "sin", "cos", "tan", "log10", "atan", "arc", "radtodeg", "degtorad",
    "ln", "exp", "abs",
];
const XY_RESTRICTION: &str =
    "XY Plot is not allowed after AC Analysis or DC Transfer Characteristic with hysteresis";

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
enum ToggleState {
    #[default]
    Off,
    On,
}

impl ToggleState {
    const fn is_on(self) -> bool {
        matches!(self, Self::On)
    }

    const fn from_bool(value: bool) -> Self {
        if value { Self::On } else { Self::Off }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum EditorMode {
    #[default]
    Line,
    Advanced,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum ProgramKind {
    #[default]
    Interpreter,
    Python,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum ActiveLineEditor {
    #[default]
    Primary,
    Secondary,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TerminalKey {
    Character(char),
    Backspace,
    Left,
    Enter,
}

pub trait TerminalExecutor {
    /// Executes one terminal command within the supplied timeout.
    ///
    /// # Errors
    ///
    /// Returns the text that the terminal must display when execution fails.
    fn execute(&mut self, source: &str, timeout: Duration) -> Result<String, String>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CurveEditorContent {
    Direct(String),
    Xy {
        x: String,
        y: String,
    },
    Advanced {
        source: String,
        program: ProgramKind,
        confirm_copy: bool,
    },
}

impl ProgramKind {
    const fn label(self) -> &'static str {
        match self {
            Self::Interpreter => "Interpreter",
            Self::Python => "Python",
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
struct AdvancedEditorState {
    mode: EditorMode,
    program: ProgramKind,
    line_edit: String,
    line_edit_y: String,
    advanced_edit: String,
    advanced_enabled: ToggleState,
    xy_plot: ToggleState,
    saved_advanced: ToggleState,
    form_ready: ToggleState,
    internal_update: ToggleState,
    python_ready: ToggleState,
    python_home_available: ToggleState,
    interpreter_template: String,
    python_template: String,
    built_in_index: usize,
    caret_offset: usize,
    caret_line: usize,
    caret_column: usize,
    status: String,
    selection_all: ToggleState,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum CurveCategory {
    Voltages,
    Outputs,
    Currents,
    OtherVoltages,
    Custom,
    Measurement,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CurveEntry {
    pub id: u64,
    pub name: String,
    pub categories: BTreeSet<CurveCategory>,
    pub target_ids: BTreeSet<u64>,
    pub user_defined: bool,
    pub preview_active: bool,
    pub editor_content: CurveEditorContent,
}

impl CurveEntry {
    #[must_use]
    pub fn new(id: u64, name: impl Into<String>) -> Self {
        let name = name.into();
        Self {
            id,
            editor_content: CurveEditorContent::Direct(name.clone()),
            name,
            categories: BTreeSet::new(),
            target_ids: BTreeSet::new(),
            user_defined: false,
            preview_active: false,
        }
    }

    #[must_use]
    pub fn with_category(mut self, category: CurveCategory) -> Self {
        self.categories.insert(category);
        self
    }

    #[must_use]
    pub fn with_target(mut self, target_id: u64) -> Self {
        self.target_ids.insert(target_id);
        self
    }

    #[must_use]
    pub const fn user_defined(mut self) -> Self {
        self.user_defined = true;
        self
    }

    #[must_use]
    pub fn with_editor_content(mut self, content: CurveEditorContent) -> Self {
        self.editor_content = content;
        self
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FilterState {
    enabled: BTreeSet<CurveCategory>,
}

impl Default for FilterState {
    fn default() -> Self {
        Self {
            enabled: [
                CurveCategory::Voltages,
                CurveCategory::Outputs,
                CurveCategory::Currents,
                CurveCategory::OtherVoltages,
                CurveCategory::Custom,
            ]
            .into_iter()
            .collect(),
        }
    }
}

impl FilterState {
    #[must_use]
    pub fn contains(&self, category: CurveCategory) -> bool {
        self.enabled.contains(&category)
    }

    pub fn set(&mut self, category: CurveCategory, enabled: bool) {
        if enabled {
            self.enabled.insert(category);
        } else {
            self.enabled.remove(&category);
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TargetSubmission {
    pub target_id: u64,
    pub curve_ids: Vec<u64>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ProbeCommitResult {
    SourceMismatch,
    Applied,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ProbeController {
    editor_source: String,
    active: bool,
}

impl ProbeController {
    /// Ports Ghidra function `FUN_0136b960` at `0x0136B960`.
    #[must_use]
    pub fn create(editor_source: impl Into<String>) -> Self {
        Self {
            editor_source: editor_source.into(),
            active: true,
        }
    }

    /// Ports Ghidra function `FUN_0136bb20` at `0x0136BB20`.
    pub fn commit_pointer_hit(
        &self,
        dialog: &mut Window,
        active_source: &str,
        hit_curve_name: Option<&str>,
    ) -> ProbeCommitResult {
        if !self.active || self.editor_source != active_source {
            return ProbeCommitResult::SourceMismatch;
        }
        if let Some(name) = hit_curve_name {
            dialog.select_available_name(name, true);
            dialog.add_selected_curves();
        }
        dialog.accept_curves();
        ProbeCommitResult::Applied
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    SetCategory(CurveCategory, bool),
    FilterChanged(String),
    ToggleAvailable(u64),
    ToggleInsertion(u64),
    AddSelected,
    RemoveSelected,
    DeleteSelected,
    ToggleAdvanced,
    ToggleAdvancedEdit(bool),
    SelectProgram(ProgramKind),
    SelectBuiltIn(&'static str),
    InsertBuiltIn,
    InsertSelectedSignal,
    ConfirmSignalSourceCopy(bool),
    SetXyPlot(bool),
    LineEditChanged(String),
    LineEditYChanged(String),
    AdvancedEditChanged(String),
    TerminalChanged(String),
    FunctionNameChanged(String),
    CreateFunction,
    Preview,
    CopyAdvanced,
    SelectAllAdvanced,
    SaveAdvancedAs,
    Accept,
    Cancel,
}

#[derive(Debug, Default)]
pub struct Window {
    master_curves: Vec<CurveEntry>,
    available_curve_ids: Vec<u64>,
    insertion_curve_ids: Vec<u64>,
    selected_available: BTreeSet<u64>,
    selected_insertion: BTreeSet<u64>,
    preview_curve_ids: BTreeSet<u64>,
    filters: FilterState,
    filter_text: String,
    available_hint: String,
    advanced_expanded: bool,
    visible: bool,
    active_state: bool,
    created: ToggleState,
    advanced: AdvancedEditorState,
    function_name: String,
    function_counter: u32,
    restricted_analysis_state: ToggleState,
    last_error: Option<&'static str>,
    preview_generation: u64,
    clipboard_text: Option<String>,
    pending_source_copy: Option<u64>,
    terminal_text: String,
    terminal_last_error: Option<String>,
    timer_enabled: ToggleState,
    active_line_editor: ActiveLineEditor,
    primary_label_emphasized: ToggleState,
    secondary_label_emphasized: ToggleState,
    advanced_popup_position: Option<Point>,
    size: Size,
    advanced_toggle_caption: &'static str,
    list_refresh_generation: u64,
    diagram_refresh_generation: u64,
    persistence_generation: u64,
    submissions: Vec<TargetSubmission>,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::SetCategory(category, enabled) => {
                self.filters.set(category, enabled);
                self.refresh_category(category);
            }
            Message::FilterChanged(value) => {
                self.filter_text = value;
                self.rebuild_available_curves();
            }
            Message::ToggleAvailable(id) => toggle_id(&mut self.selected_available, id),
            Message::ToggleInsertion(id) => toggle_id(&mut self.selected_insertion, id),
            Message::AddSelected => self.add_selected_curves(),
            Message::RemoveSelected => self.remove_selected_curves(),
            Message::DeleteSelected => self.delete_selected_user_curves(),
            Message::ToggleAdvanced => self.toggle_advanced_panel(),
            Message::ToggleAdvancedEdit(enabled) => self.set_advanced_edit(enabled),
            Message::SelectProgram(program) => self.select_program(program, false),
            Message::SelectBuiltIn(value) => {
                if let Some(index) = BUILT_IN_TOKENS.iter().position(|token| *token == value) {
                    self.advanced.built_in_index = index;
                    self.insert_selected_builtin();
                }
            }
            Message::InsertBuiltIn => self.insert_selected_builtin(),
            Message::InsertSelectedSignal => self.insert_selected_signal(),
            Message::ConfirmSignalSourceCopy(copy) => self.confirm_signal_source_copy(copy),
            Message::SetXyPlot(enabled) => {
                let _ = self.set_xy_plot(enabled);
            }
            Message::LineEditChanged(value) => self.advanced.line_edit = value,
            Message::LineEditYChanged(value) => self.advanced.line_edit_y = value,
            Message::AdvancedEditChanged(value) => self.advanced.advanced_edit = value,
            Message::TerminalChanged(value) => self.terminal_text = value,
            Message::FunctionNameChanged(value) => self.function_name = value,
            Message::CreateFunction => {
                let _ = self.create_user_function();
            }
            Message::Preview => {
                let _ = self.preview_current_function();
            }
            Message::CopyAdvanced => {
                let _ = self.copy_advanced_document();
            }
            Message::SelectAllAdvanced => self.select_all_advanced_document(),
            Message::SaveAdvancedAs => self.save_advanced_as(),
            Message::Accept => self.accept_curves(),
            Message::Cancel => self.cancel_preview(),
        }
    }

    pub fn set_master_curves(&mut self, curves: impl IntoIterator<Item = CurveEntry>) {
        self.replace_candidate_catalog(curves);
        self.rebuild_available_curves();
    }

    pub fn set_preview_curves(&mut self, ids: impl IntoIterator<Item = u64>) {
        self.preview_curve_ids = ids.into_iter().collect();
        for curve in &mut self.master_curves {
            curve.preview_active = self.preview_curve_ids.contains(&curve.id);
        }
    }

    /// Ports Ghidra function `FUN_013cbab0` at `0x013CBAB0`.
    pub fn create(&mut self) {
        *self = Self::default();
        self.initialize_creation_state();
    }

    /// Ports Ghidra function `FUN_013cbd70` at `0x013CBD70`.
    pub fn show(&mut self) {
        if !self.created.is_on() {
            self.initialize_creation_state();
        }
        self.visible = true;
        self.active_state = true;
        self.timer_enabled = ToggleState::On;
        self.insertion_curve_ids.clear();
        self.selected_available.clear();
        self.selected_insertion.clear();
        self.pending_source_copy = None;
        self.advanced.built_in_index = 0;
        self.advanced.caret_offset = 0;
        self.advanced.selection_all = ToggleState::Off;
        self.enter_primary_line_editor();
        self.rebuild_available_curves();
        if self.function_name.is_empty() {
            self.function_counter = 1;
            self.function_name = String::from("MyFunction1");
        }
        if self.terminal_text.is_empty() {
            self.terminal_text = String::from(">>> ");
        }
        self.activate();
        self.advanced.form_ready = ToggleState::On;
    }

    /// Ports Ghidra function `FUN_013cc560` at `0x013CC560`.
    pub fn hide(&mut self) {
        self.visible = false;
        self.active_state = false;
        self.timer_enabled = ToggleState::Off;
        self.advanced.form_ready = ToggleState::Off;
        self.advanced.python_ready = ToggleState::Off;
        self.pending_source_copy = None;
        self.terminal_last_error = None;
    }

    /// Ports Ghidra function `FUN_013caa10` at `0x013CAA10`.
    pub fn destroy(&mut self) {
        self.hide();
        self.master_curves.clear();
        self.available_curve_ids.clear();
        self.insertion_curve_ids.clear();
        self.preview_curve_ids.clear();
        self.advanced.interpreter_template.clear();
        self.advanced.python_template.clear();
        self.terminal_text.clear();
        self.clipboard_text = None;
        self.created = ToggleState::Off;
    }

    /// Ports Ghidra function `FUN_013ca310` at `0x013CA310`.
    pub fn add_selected_curves(&mut self) {
        for id in &self.available_curve_ids {
            if self.selected_available.contains(id) && !self.insertion_curve_ids.contains(id) {
                self.insertion_curve_ids.push(*id);
            }
        }
        self.selected_available.clear();
        self.rebuild_available_curves();
    }

    /// Ports Ghidra function `FUN_013ca490` at `0x013CA490`.
    pub fn remove_selected_curves(&mut self) {
        self.insertion_curve_ids
            .retain(|id| !self.selected_insertion.contains(id));
        self.selected_insertion.clear();
        self.rebuild_available_curves();
    }

    /// Ports Ghidra function `FUN_013ca610` at `0x013CA610`.
    pub fn replace_candidate_catalog(&mut self, curves: impl IntoIterator<Item = CurveEntry>) {
        self.master_curves = curves.into_iter().collect();
    }

    /// Ports Ghidra function `FUN_013ca8c0` at `0x013CA8C0`.
    #[must_use]
    pub fn curves_for_target(&self, target_id: u64) -> Vec<u64> {
        self.insertion_curve_ids
            .iter()
            .filter_map(|id| {
                self.curve(*id)
                    .filter(|curve| curve.target_ids.contains(&target_id))
                    .map(|curve| curve.id)
            })
            .collect()
    }

    /// Ports Ghidra function `FUN_013cab80` at `0x013CAB80`.
    pub fn rebuild_available_curves(&mut self) {
        let filter = self.filter_text.to_lowercase();
        self.available_curve_ids = self
            .master_curves
            .iter()
            .filter(|curve| !self.insertion_curve_ids.contains(&curve.id))
            .filter(|curve| {
                curve
                    .categories
                    .iter()
                    .any(|category| self.filters.contains(*category))
            })
            .filter(|curve| filter.is_empty() || curve.name.to_lowercase().contains(&filter))
            .map(|curve| curve.id)
            .collect();
        self.selected_available
            .retain(|id| self.available_curve_ids.contains(id));
        self.list_refresh_generation = self.list_refresh_generation.saturating_add(1);
    }

    /// Ports Ghidra function `FUN_013cb330` at `0x013CB330`.
    pub fn refresh_voltage_or_output_filter(&mut self) {
        self.rebuild_available_curves();
    }

    /// Ports Ghidra function `FUN_013cb340` at `0x013CB340`.
    pub fn refresh_current_filter(&mut self) {
        self.rebuild_available_curves();
    }

    /// Ports Ghidra function `FUN_013cc670` at `0x013CC670`.
    pub fn refresh_other_voltage_filter(&mut self) {
        self.rebuild_available_curves();
    }

    /// Ports Ghidra function `FUN_013cc680` at `0x013CC680`.
    pub fn accept_curves(&mut self) {
        if self.preview_curve_ids.is_empty() && self.insertion_curve_ids.is_empty() {
            return;
        }
        let mut targets = BTreeMap::<u64, Vec<u64>>::new();
        for id in &self.insertion_curve_ids {
            if let Some(curve) = self.curve(*id) {
                for target_id in &curve.target_ids {
                    targets.entry(*target_id).or_default().push(curve.id);
                }
            }
        }
        self.submissions = targets
            .into_iter()
            .map(|(target_id, curve_ids)| TargetSubmission {
                target_id,
                curve_ids,
            })
            .collect();
        self.preview_curve_ids.clear();
        self.visible = false;
        self.diagram_refresh_generation = self.diagram_refresh_generation.saturating_add(1);
        self.persistence_generation = self.persistence_generation.saturating_add(1);
    }

    /// Ports Ghidra function `FUN_013cc9a0` at `0x013CC9A0`.
    pub fn cancel_preview(&mut self) {
        if !self.preview_curve_ids.is_empty() {
            for curve in &mut self.master_curves {
                if self.preview_curve_ids.contains(&curve.id) {
                    curve.preview_active = false;
                }
            }
            self.preview_curve_ids.clear();
            self.diagram_refresh_generation = self.diagram_refresh_generation.saturating_add(1);
        }
        self.visible = false;
    }

    /// Ports Ghidra function `FUN_013cd390` at `0x013CD390`.
    #[must_use]
    pub const fn advanced_panel_layout(&self) -> (&'static str, bool) {
        if self.advanced_expanded {
            ("<< Less", true)
        } else {
            ("More >>", false)
        }
    }

    /// Ports Ghidra function `FUN_013cf750` at `0x013CF750`.
    pub fn refresh_custom_filter(&mut self) {
        self.rebuild_available_curves();
    }

    /// Ports Ghidra function `FUN_013cf760` at `0x013CF760`.
    pub const fn toggle_advanced_panel(&mut self) {
        self.advanced_expanded = !self.advanced_expanded;
        let _ = self.advanced_panel_layout();
    }

    /// Ports Ghidra function `FUN_013cda50` at `0x013CDA50`.
    pub const fn set_advanced_edit(&mut self, enabled: bool) {
        if !self.advanced.form_ready.is_on() || self.advanced.internal_update.is_on() {
            return;
        }
        self.advanced.advanced_enabled = ToggleState::from_bool(enabled);
        self.advanced.mode = if enabled {
            EditorMode::Advanced
        } else {
            self.advanced.program = ProgramKind::Interpreter;
            EditorMode::Line
        };
    }

    /// Ports Ghidra function `FUN_013cdae0` at `0x013CDAE0`.
    pub fn select_program(&mut self, program: ProgramKind, copy_template: bool) {
        if !self.advanced.form_ready.is_on() || self.advanced.internal_update.is_on() {
            return;
        }
        self.advanced.program = program;
        if program == ProgramKind::Python && !self.advanced.python_ready.is_on() {
            self.advanced.python_ready = self.advanced.python_home_available;
        }
        if program == ProgramKind::Python {
            self.advanced.advanced_enabled = ToggleState::On;
            self.advanced.mode = EditorMode::Advanced;
        }
        if copy_template {
            let template = match program {
                ProgramKind::Interpreter => &self.advanced.interpreter_template,
                ProgramKind::Python => &self.advanced.python_template,
            };
            template.clone_into(&mut self.advanced.advanced_edit);
        }
    }

    pub fn set_program_templates(
        &mut self,
        interpreter: impl Into<String>,
        python: impl Into<String>,
        python_home_available: bool,
    ) {
        self.advanced.interpreter_template = interpreter.into();
        self.advanced.python_template = python.into();
        self.advanced.python_home_available = ToggleState::from_bool(python_home_available);
    }

    /// Ports Ghidra function `FUN_013cdba0` at `0x013CDBA0`.
    pub fn insert_selected_builtin(&mut self) {
        let Some(base) = BUILT_IN_TOKENS.get(self.advanced.built_in_index) else {
            return;
        };
        let token = if self.advanced.built_in_index <= 4 {
            (*base).to_owned()
        } else {
            format!("{base}()")
        };
        self.insert_into_active_editor(&token);
    }

    /// Ports Ghidra function `FUN_013cdcc0` at `0x013CDCC0`.
    pub fn insert_selected_signal(&mut self) {
        if self.selected_available.len() != 1 {
            return;
        }
        let Some(id) = self.selected_available.first() else {
            return;
        };
        let Some(content) = self.curve(*id).map(|curve| curve.editor_content.clone()) else {
            return;
        };
        match content {
            CurveEditorContent::Direct(expression) => {
                self.insert_into_active_editor(&expression);
            }
            CurveEditorContent::Xy { x, y } => {
                if !self.set_xy_plot(true) {
                    return;
                }
                self.advanced.caret_offset = self.advanced.line_edit.len();
                self.insert_into_active_editor(&x);
                self.advanced.line_edit_y.push_str(&y);
            }
            CurveEditorContent::Advanced {
                source,
                program,
                confirm_copy,
            } => {
                if confirm_copy {
                    self.pending_source_copy = Some(*id);
                } else {
                    self.replace_advanced_source(&source, program);
                }
            }
        }
    }

    pub fn confirm_signal_source_copy(&mut self, copy: bool) {
        let Some(id) = self.pending_source_copy.take() else {
            return;
        };
        if !copy {
            return;
        }
        let Some(CurveEditorContent::Advanced {
            source, program, ..
        }) = self.curve(id).map(|curve| curve.editor_content.clone())
        else {
            return;
        };
        self.replace_advanced_source(&source, program);
    }

    /// Ports Ghidra function `FUN_013cf0e0` at `0x013CF0E0`.
    pub fn create_user_function(&mut self) -> bool {
        self.last_error = None;
        if !valid_identifier(&self.function_name) {
            self.last_error = Some("Wrong function name!");
            return false;
        }
        if !self.definition_is_complete() {
            self.last_error = Some("Definition must be filled!");
            return false;
        }
        let id = self.upsert_current_user_curve();
        self.rebuild_available_curves();
        if self.available_curve_ids.contains(&id) {
            self.selected_available.clear();
            self.selected_available.insert(id);
            self.add_selected_curves();
        }
        self.function_counter = self.function_counter.saturating_add(1);
        self.function_name = format!("MyFunction{}", self.function_counter);
        true
    }

    /// Ports Ghidra function `FUN_013cf850` at `0x013CF850`.
    pub fn update_advanced_caret_status(&mut self, line: usize, column: usize) {
        self.advanced.caret_line = line.max(1);
        self.advanced.caret_column = column.max(1);
        self.advanced.status = format!(
            "Line:{} Col:{}",
            self.advanced.caret_line, self.advanced.caret_column
        );
    }

    /// Ports Ghidra function `FUN_013cfaa0` at `0x013CFAA0`.
    pub fn preview_current_function(&mut self) -> bool {
        self.clear_preview_cache();
        self.last_error = None;
        if !valid_identifier(&self.function_name) || !self.definition_is_complete() {
            self.last_error = Some("Definition must be filled!");
            return false;
        }
        let existing_id = self
            .master_curves
            .iter()
            .find(|curve| curve.name == self.function_name)
            .map(|curve| curve.id);
        if let Some(id) = existing_id {
            self.preview_curve_ids.insert(id);
        }
        if let Some(curve) = self
            .master_curves
            .iter_mut()
            .find(|curve| Some(curve.id) == existing_id)
        {
            curve.preview_active = true;
        }
        let _ = self.upsert_current_user_curve();
        self.preview_generation = self.preview_generation.saturating_add(1);
        self.diagram_refresh_generation = self.diagram_refresh_generation.saturating_add(1);
        true
    }

    /// Ports Ghidra function `FUN_013cff70` at `0x013CFF70`.
    pub fn set_xy_plot(&mut self, enabled: bool) -> bool {
        self.last_error = None;
        if enabled && self.restricted_analysis_state.is_on() {
            self.advanced.xy_plot = ToggleState::Off;
            self.last_error = Some(XY_RESTRICTION);
            return false;
        }
        self.clear_preview_cache();
        if enabled {
            self.advanced.saved_advanced = self.advanced.advanced_enabled;
            self.advanced.advanced_enabled = ToggleState::Off;
            self.advanced.mode = EditorMode::Line;
            self.advanced.xy_plot = ToggleState::On;
        } else {
            self.advanced.xy_plot = ToggleState::Off;
            self.advanced.advanced_enabled = self.advanced.saved_advanced;
            self.advanced.mode = if self.advanced.advanced_enabled.is_on() {
                EditorMode::Advanced
            } else {
                EditorMode::Line
            };
        }
        true
    }

    pub const fn set_restricted_analysis_state(&mut self, restricted: bool) {
        self.restricted_analysis_state = ToggleState::from_bool(restricted);
    }

    /// Ports Ghidra function `FUN_013cd310` at `0x013CD310`.
    pub fn filter_key_up(&mut self) {
        self.rebuild_available_curves();
    }

    /// Ports Ghidra function `FUN_013cd6b0` at `0x013CD6B0`.
    #[must_use]
    pub const fn terminal_key_down(caret_column: usize, key: TerminalKey) -> bool {
        !(caret_column < 6 && matches!(key, TerminalKey::Left | TerminalKey::Backspace))
    }

    /// Ports Ghidra function `FUN_013cd6f0` at `0x013CD6F0`.
    pub fn terminal_key_up(
        &mut self,
        key: TerminalKey,
        control_held: bool,
        executor: &mut impl TerminalExecutor,
    ) -> bool {
        if key != TerminalKey::Enter || control_held {
            return false;
        }
        let Some(source) = self
            .terminal_text
            .lines()
            .rev()
            .find_map(|line| line.strip_prefix(">>> "))
            .map(str::to_owned)
        else {
            return false;
        };
        match executor.execute(&source, Duration::from_secs(60)) {
            Ok(output) => {
                self.terminal_last_error = None;
                if !output.is_empty() {
                    self.terminal_text.push('\n');
                    self.terminal_text.push_str(&output);
                }
            }
            Err(error) => {
                self.terminal_last_error = Some(error.clone());
                self.terminal_text.push('\n');
                self.terminal_text.push_str(&error);
            }
        }
        self.terminal_text.push_str("\n>>> ");
        true
    }

    /// Ports Ghidra function `FUN_013ce7b0` at `0x013CE7B0`.
    pub fn timer_tick(&mut self) {
        self.timer_enabled = ToggleState::Off;
        if !self.function_name.is_empty() {
            self.preview_generation = self.preview_generation.saturating_add(1);
        }
    }

    /// Ports Ghidra function `FUN_013cf860` at `0x013CF860`.
    pub fn advanced_editor_key_up(&mut self, line: usize, column: usize) {
        self.update_advanced_caret_status(line, column);
    }

    /// Ports Ghidra function `FUN_013cf880` at `0x013CF880`.
    pub fn advanced_editor_mouse_down(
        &mut self,
        button: mouse::Button,
        local_position: Point,
        screen_origin: Point,
        line: usize,
        column: usize,
    ) {
        self.update_advanced_caret_status(line, column);
        if button == mouse::Button::Right {
            self.advanced_popup_position = Some(Point::new(
                screen_origin.x + local_position.x,
                screen_origin.y + local_position.y,
            ));
        }
    }

    /// Ports Ghidra function `FUN_013cf900` at `0x013CF900`.
    pub fn advanced_editor_mouse_up(&mut self, line: usize, column: usize) {
        self.update_advanced_caret_status(line, column);
    }

    /// Ports Ghidra function `FUN_013cfeb0` at `0x013CFEB0`.
    #[must_use]
    pub fn resize_to_work_area(
        &mut self,
        current_size: Size,
        position: Point,
        work_area_origin: Point,
        work_area_size: Size,
    ) -> Size {
        let available_width = work_area_origin.x + work_area_size.width - position.x;
        let available_height = work_area_origin.y + work_area_size.height - position.y - 30.0;
        self.size = Size::new(
            current_size.width.min(available_width).max(0.0),
            current_size.height.min(available_height).max(0.0),
        );
        self.size
    }

    /// Ports Ghidra function `FUN_013d0340` at `0x013D0340`.
    pub const fn enter_primary_line_editor(&mut self) {
        self.active_line_editor = ActiveLineEditor::Primary;
        self.primary_label_emphasized = ToggleState::On;
        self.secondary_label_emphasized = ToggleState::Off;
        self.advanced.mode = EditorMode::Line;
    }

    /// Ports Ghidra function `FUN_013d03b0` at `0x013D03B0`.
    pub const fn enter_secondary_line_editor(&mut self) {
        self.active_line_editor = ActiveLineEditor::Secondary;
        self.primary_label_emphasized = ToggleState::Off;
        self.secondary_label_emphasized = ToggleState::On;
        self.advanced.mode = EditorMode::Line;
    }

    /// Ports Ghidra function `FUN_013d0420` at `0x013D0420`.
    #[must_use]
    pub const fn primary_line_key_press(key: TerminalKey) -> bool {
        !matches!(key, TerminalKey::Enter)
    }

    /// Ports Ghidra function `FUN_013d0430` at `0x013D0430`.
    #[must_use]
    pub const fn secondary_line_key_press(key: TerminalKey) -> bool {
        !matches!(key, TerminalKey::Enter)
    }

    /// Ports Ghidra function `FUN_013d0440` at `0x013D0440`.
    pub const fn activate(&mut self) {
        self.advanced_toggle_caption = if self.advanced_expanded {
            "<< Less"
        } else {
            "More >>"
        };
    }

    /// Ports Ghidra function `FUN_013d0550` at `0x013D0550`.
    pub fn copy_advanced_document(&mut self) -> Option<&str> {
        self.select_all_advanced_document();
        if self.advanced.advanced_edit.is_empty() {
            return None;
        }
        self.clipboard_text = Some(self.advanced.advanced_edit.clone());
        self.clipboard_text.as_deref()
    }

    /// Ports Ghidra function `FUN_013d0580` at `0x013D0580`.
    pub const fn save_advanced_as(&self) {}

    /// Ports Ghidra function `FUN_013d0590` at `0x013D0590`.
    pub fn select_all_advanced_document(&mut self) {
        self.advanced.selection_all = ToggleState::On;
        self.advanced.caret_offset = self.advanced.advanced_edit.len();
    }

    fn insert_into_active_editor(&mut self, token: &str) {
        let editor = match self.advanced.mode {
            EditorMode::Line => &mut self.advanced.line_edit,
            EditorMode::Advanced => &mut self.advanced.advanced_edit,
        };
        let mut offset = self.advanced.caret_offset.min(editor.len());
        while !editor.is_char_boundary(offset) {
            offset = offset.saturating_sub(1);
        }
        editor.insert_str(offset, token);
        self.advanced.caret_offset = offset.saturating_add(token.len());
    }

    fn initialize_creation_state(&mut self) {
        self.created = ToggleState::On;
        self.function_counter = 1;
        self.function_name = String::from("MyFunction1");
        self.advanced.status = String::from("Line:1 Col:1");
        self.advanced_toggle_caption = "More >>";
        self.enter_primary_line_editor();
    }

    fn replace_advanced_source(&mut self, source: &str, program: ProgramKind) {
        self.advanced.advanced_edit.clear();
        self.advanced.advanced_edit.push_str(source);
        self.advanced.advanced_enabled = ToggleState::On;
        self.advanced.mode = EditorMode::Advanced;
        self.advanced.program = program;
        self.advanced.caret_offset = self.advanced.advanced_edit.len();
    }

    fn definition_is_complete(&self) -> bool {
        match self.advanced.mode {
            EditorMode::Advanced => !self.advanced.advanced_edit.trim().is_empty(),
            EditorMode::Line if self.advanced.xy_plot.is_on() => {
                !self.advanced.line_edit.trim().is_empty()
                    && !self.advanced.line_edit_y.trim().is_empty()
            }
            EditorMode::Line => !self.advanced.line_edit.trim().is_empty(),
        }
    }

    fn upsert_current_user_curve(&mut self) -> u64 {
        if let Some(curve) = self
            .master_curves
            .iter_mut()
            .find(|curve| curve.user_defined && curve.name == self.function_name)
        {
            return curve.id;
        }
        let id = self
            .master_curves
            .iter()
            .map(|curve| curve.id)
            .max()
            .unwrap_or_default()
            .saturating_add(1);
        self.master_curves.push(
            CurveEntry::new(id, self.function_name.clone())
                .with_category(CurveCategory::Custom)
                .user_defined(),
        );
        id
    }

    fn clear_preview_cache(&mut self) {
        for curve in &mut self.master_curves {
            if self.preview_curve_ids.contains(&curve.id) {
                curve.preview_active = false;
            }
        }
        self.preview_curve_ids.clear();
    }

    /// Ports Ghidra function `FUN_013c5ac0` at `0x013C5AC0`.
    pub fn delete_named_user_curve(&mut self, name: &str) -> bool {
        let before = self.master_curves.len();
        self.master_curves
            .retain(|curve| !(curve.user_defined && curve.name == name));
        self.master_curves.len() != before
    }

    /// Ports Ghidra function `FUN_013cf920` at `0x013CF920`.
    pub fn delete_selected_user_curves(&mut self) {
        let names: Vec<String> = self
            .selected_available
            .iter()
            .filter_map(|id| self.curve(*id))
            .map(|curve| curve.name.clone())
            .collect();
        for name in names {
            let _ = self.delete_named_user_curve(&name);
        }
        self.selected_available.clear();
        self.rebuild_available_curves();
    }

    /// Ports Ghidra function `FUN_013cfd70` at `0x013CFD70`.
    pub fn update_available_hint(&mut self) {
        if self.selected_available.len() == 1
            && let Some(id) = self.selected_available.first()
            && let Some(name) = self.curve(*id).map(|curve| curve.name.clone())
        {
            self.available_hint = name;
        }
    }

    /// Ports Ghidra function `FUN_013d0520` at `0x013D0520`.
    pub fn close_form(&mut self) {
        self.active_state = false;
        self.cancel_preview();
    }

    /// Ports Ghidra function `FUN_013d0540` at `0x013D0540`.
    pub fn refresh_measurement_filter(&mut self) {
        self.rebuild_available_curves();
    }

    fn refresh_category(&mut self, category: CurveCategory) {
        match category {
            CurveCategory::Voltages | CurveCategory::Outputs => {
                self.refresh_voltage_or_output_filter();
            }
            CurveCategory::Currents => self.refresh_current_filter(),
            CurveCategory::OtherVoltages => self.refresh_other_voltage_filter(),
            CurveCategory::Custom => self.refresh_custom_filter(),
            CurveCategory::Measurement => self.refresh_measurement_filter(),
        }
    }

    fn select_available_name(&mut self, name: &str, selected: bool) {
        if let Some(curve) = self.master_curves.iter().find(|curve| curve.name == name)
            && self.available_curve_ids.contains(&curve.id)
        {
            if selected {
                self.selected_available.insert(curve.id);
            } else {
                self.selected_available.remove(&curve.id);
            }
            self.update_available_hint();
        }
    }

    fn curve(&self, id: u64) -> Option<&CurveEntry> {
        self.master_curves.iter().find(|curve| curve.id == id)
    }

    fn curve_name(&self, id: u64) -> &str {
        self.curve(id)
            .map_or("Unknown curve", |curve| curve.name.as_str())
    }

    fn advanced_controls(&self) -> Element<'_, Message> {
        let editor: Element<'_, Message> = match self.advanced.mode {
            EditorMode::Line => {
                let mut editors = column![
                    text_input("Line Edit", &self.advanced.line_edit)
                        .on_input(Message::LineEditChanged)
                ]
                .spacing(4);
                if self.advanced.xy_plot.is_on() {
                    editors = editors.push(
                        text_input("Line Edit - Y Part", &self.advanced.line_edit_y)
                            .on_input(Message::LineEditYChanged),
                    );
                }
                editors.into()
            }
            EditorMode::Advanced => text_input("Advanced Edit", &self.advanced.advanced_edit)
                .on_input(Message::AdvancedEditChanged)
                .into(),
        };
        let source_copy_prompt: Element<'_, Message> = if self.pending_source_copy.is_some() {
            row![
                text("Copy the code to the Advanced Edit field?"),
                button("Yes").on_press(Message::ConfirmSignalSourceCopy(true)),
                button("No").on_press(Message::ConfirmSignalSourceCopy(false)),
            ]
            .spacing(4)
            .into()
        } else {
            container(text("")).into()
        };
        column![
            text("Custom curve editor").size(16),
            text_input("New function name", &self.function_name)
                .on_input(Message::FunctionNameChanged),
            checkbox("Advanced edit", self.advanced.advanced_enabled.is_on())
                .on_toggle(Message::ToggleAdvancedEdit),
            checkbox("XY Plot", self.advanced.xy_plot.is_on()).on_toggle(Message::SetXyPlot),
            row![
                radio(
                    ProgramKind::Interpreter.label(),
                    ProgramKind::Interpreter,
                    Some(self.advanced.program),
                    Message::SelectProgram,
                ),
                radio(
                    ProgramKind::Python.label(),
                    ProgramKind::Python,
                    Some(self.advanced.program),
                    Message::SelectProgram,
                ),
            ]
            .spacing(8),
            editor,
            row![
                pick_list(
                    BUILT_IN_TOKENS,
                    BUILT_IN_TOKENS.get(self.advanced.built_in_index).copied(),
                    Message::SelectBuiltIn,
                ),
                button("Add function").on_press(Message::InsertBuiltIn),
                button("Add curve").on_press(Message::InsertSelectedSignal),
            ]
            .spacing(4),
            row![
                button("Create").on_press(Message::CreateFunction),
                button("Preview").on_press(Message::Preview),
                button("Copy").on_press(Message::CopyAdvanced),
                button("Select All").on_press(Message::SelectAllAdvanced),
                button("Save As...").on_press(Message::SaveAdvancedAs),
            ]
            .spacing(4),
            text(&self.advanced.status),
            text(self.last_error.unwrap_or("")),
            text_input("Python Terminal", &self.terminal_text).on_input(Message::TerminalChanged),
            text(self.terminal_last_error.as_deref().unwrap_or("")),
            source_copy_prompt,
        ]
        .spacing(4)
        .into()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let available = self.available_curve_ids.iter().fold(
            column![text("Available curves:")].spacing(2),
            |items, id| {
                items.push(
                    button(text(selected_label(
                        self.curve_name(*id),
                        self.selected_available.contains(id),
                    )))
                    .on_press(Message::ToggleAvailable(*id))
                    .width(Length::Fill),
                )
            },
        );
        let insertion = self.insertion_curve_ids.iter().fold(
            column![text("Curves to insert:")].spacing(2),
            |items, id| {
                items.push(
                    button(text(selected_label(
                        self.curve_name(*id),
                        self.selected_insertion.contains(id),
                    )))
                    .on_press(Message::ToggleInsertion(*id))
                    .width(Length::Fill),
                )
            },
        );
        let filter_controls = CurveCategory::ALL.into_iter().fold(
            column![text("Show")].spacing(2),
            |controls, category| {
                controls.push(
                    checkbox(category.label(), self.filters.contains(category))
                        .on_toggle(move |checked| Message::SetCategory(category, checked)),
                )
            },
        );
        let advanced: Element<'_, Message> = if self.advanced_expanded {
            self.advanced_controls()
        } else {
            container(text("")).into()
        };
        let body = column![
            row![
                container(scrollable(available)).width(Length::FillPortion(3)),
                column![
                    button("Add >>").on_press(Message::AddSelected),
                    button("<< Remove").on_press(Message::RemoveSelected),
                    button("Delete").on_press(Message::DeleteSelected),
                ]
                .spacing(4),
                container(scrollable(insertion)).width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .height(Length::Fill),
            text_input("Filter", &self.filter_text).on_input(Message::FilterChanged),
            filter_controls,
            text(&self.available_hint),
            button(self.advanced_panel_layout().0).on_press(Message::ToggleAdvanced),
            advanced,
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(8)
            .align_y(Alignment::Center),
        ]
        .spacing(8)
        .padding(8);
        window_shell::frame(
            TITLE,
            window_shell::empty_menu(),
            window_shell::empty_menu(),
            body.into(),
            "Curve selection",
        )
    }
}

impl CurveCategory {
    const ALL: [Self; 6] = [
        Self::Voltages,
        Self::Outputs,
        Self::Currents,
        Self::OtherVoltages,
        Self::Custom,
        Self::Measurement,
    ];

    const fn label(self) -> &'static str {
        match self {
            Self::Voltages => "Nodal Voltages",
            Self::Outputs => "Outputs",
            Self::Currents => "Currents",
            Self::OtherVoltages => "Other Voltages",
            Self::Custom => "User defined",
            Self::Measurement => "Measurement",
        }
    }
}

fn toggle_id(selection: &mut BTreeSet<u64>, id: u64) {
    if !selection.remove(&id) {
        selection.insert(id);
    }
}

fn valid_identifier(value: &str) -> bool {
    let mut characters = value.chars();
    let Some(first) = characters.next() else {
        return false;
    };
    (first.is_ascii_alphabetic() || first == '_')
        && characters.all(|character| character.is_ascii_alphanumeric() || character == '_')
}

fn selected_label(label: &str, selected: bool) -> String {
    if selected {
        format!("[x] {label}")
    } else {
        label.to_owned()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug)]
    struct TestTerminalExecutor {
        result: Result<String, String>,
        source: String,
        timeout: Duration,
    }

    impl Default for TestTerminalExecutor {
        fn default() -> Self {
            Self {
                result: Ok(String::new()),
                source: String::new(),
                timeout: Duration::default(),
            }
        }
    }

    impl TerminalExecutor for TestTerminalExecutor {
        fn execute(&mut self, source: &str, timeout: Duration) -> Result<String, String> {
            self.source = source.to_owned();
            self.timeout = timeout;
            self.result.clone()
        }
    }

    fn curves() -> [CurveEntry; 4] {
        [
            CurveEntry::new(1, "V_OUT")
                .with_category(CurveCategory::Voltages)
                .with_target(10),
            CurveEntry::new(2, "I_R1")
                .with_category(CurveCategory::Currents)
                .with_target(10),
            CurveEntry::new(3, "THD")
                .with_category(CurveCategory::Measurement)
                .with_target(20),
            CurveEntry::new(4, "MY_CURVE")
                .with_category(CurveCategory::Custom)
                .with_target(20)
                .user_defined(),
        ]
    }

    #[test]
    fn add_and_remove_move_selected_ids_and_rebuild_the_filtered_source() {
        let mut window = Window::default();
        window.set_master_curves(curves());
        window.selected_available.extend([1, 2]);

        window.add_selected_curves();
        assert_eq!(window.insertion_curve_ids, [1, 2]);
        assert!(!window.available_curve_ids.contains(&1));
        window.selected_insertion.insert(1);
        window.remove_selected_curves();
        assert_eq!(window.insertion_curve_ids, [2]);
        assert!(window.available_curve_ids.contains(&1));
    }

    #[test]
    fn filters_form_a_union_and_apply_case_insensitive_text() {
        let mut window = Window::default();
        window.set_master_curves(curves());
        window.filters.set(CurveCategory::Currents, false);
        window.filters.set(CurveCategory::Custom, false);
        window.filters.set(CurveCategory::Measurement, true);
        window.filter_text = String::from("v_");

        window.rebuild_available_curves();

        assert_eq!(window.available_curve_ids, [1]);
    }

    #[test]
    fn acceptance_groups_insertions_by_target_and_empty_input_is_noop() {
        let mut window = Window::default();
        window.show();
        window.accept_curves();
        assert!(window.visible);

        window.set_master_curves(curves());
        window.insertion_curve_ids.extend([1, 3, 4]);
        window.accept_curves();

        assert!(!window.visible);
        assert_eq!(window.submissions.len(), 2);
        assert_eq!(window.curves_for_target(10), [1]);
        assert_eq!(window.curves_for_target(20), [3, 4]);
        assert_eq!(window.persistence_generation, 1);
    }

    #[test]
    fn cancel_clears_only_preview_state_and_close_clears_active_state() {
        let mut window = Window::default();
        window.set_master_curves(curves());
        window.set_preview_curves([4]);
        window.show();

        window.close_form();

        assert!(!window.visible);
        assert!(!window.active_state);
        assert!(window.preview_curve_ids.is_empty());
        assert!(!window.curve(4).expect("curve 4").preview_active);
        assert_eq!(window.diagram_refresh_generation, 1);
    }

    #[test]
    fn delete_removes_only_selected_user_curves_and_always_refreshes() {
        let mut window = Window::default();
        window.set_master_curves(curves());
        let before = window.list_refresh_generation;
        window.selected_available.extend([1, 4]);

        window.delete_selected_user_curves();

        assert!(window.curve(1).is_some());
        assert!(window.curve(4).is_none());
        assert_eq!(window.list_refresh_generation, before + 1);
    }

    #[test]
    fn available_hint_changes_only_for_exactly_one_selected_curve() {
        let mut window = Window::default();
        window.set_master_curves(curves());
        window.selected_available.insert(1);
        window.update_available_hint();
        assert_eq!(window.available_hint, "V_OUT");

        window.selected_available.insert(2);
        window.update_available_hint();
        assert_eq!(window.available_hint, "V_OUT");
    }

    #[test]
    fn probe_requires_matching_source_and_commits_a_matching_available_curve() {
        let controller = ProbeController::create("sheet-a");
        let mut window = Window::default();
        window.set_master_curves(curves());
        window.show();

        assert_eq!(
            controller.commit_pointer_hit(&mut window, "sheet-b", Some("V_OUT")),
            ProbeCommitResult::SourceMismatch
        );
        assert_eq!(
            controller.commit_pointer_hit(&mut window, "sheet-a", Some("V_OUT")),
            ProbeCommitResult::Applied
        );
        assert_eq!(window.insertion_curve_ids, [1]);
        assert!(!window.visible);
    }

    #[test]
    fn advanced_toggle_switches_caption_and_visibility_together() {
        let mut window = Window::default();
        assert_eq!(window.advanced_panel_layout(), ("More >>", false));
        window.toggle_advanced_panel();
        assert_eq!(window.advanced_panel_layout(), ("<< Less", true));
    }

    #[test]
    fn advanced_edit_obeys_lifecycle_guards_and_line_mode_forces_interpreter() {
        let mut window = Window::default();
        window.set_advanced_edit(true);
        assert_eq!(window.advanced.mode, EditorMode::Line);

        window.show();
        window.set_advanced_edit(true);
        window.advanced.program = ProgramKind::Python;
        assert_eq!(window.advanced.mode, EditorMode::Advanced);

        window.set_advanced_edit(false);
        assert_eq!(window.advanced.mode, EditorMode::Line);
        assert_eq!(window.advanced.program, ProgramKind::Interpreter);
    }

    #[test]
    fn program_selection_is_stored_before_optional_template_copy() {
        let mut window = Window::default();
        window.show();
        window.set_program_templates("interpreter code", "python code", false);
        window.advanced.advanced_edit = String::from("keep me");

        window.select_program(ProgramKind::Python, false);
        assert_eq!(window.advanced.program, ProgramKind::Python);
        assert_eq!(window.advanced.mode, EditorMode::Advanced);
        assert_eq!(window.advanced.advanced_edit, "keep me");
        assert!(!window.advanced.python_ready.is_on());

        window.select_program(ProgramKind::Interpreter, true);
        assert_eq!(window.advanced.advanced_edit, "interpreter code");
    }

    #[test]
    fn built_in_tokens_are_inserted_at_the_active_caret() {
        let mut window = Window::default();
        window.show();
        window.advanced.line_edit = String::from("A");
        window.advanced.caret_offset = 1;
        window.advanced.built_in_index = 5;

        window.insert_selected_builtin();
        assert_eq!(window.advanced.line_edit, "Asin()");
        assert_eq!(window.advanced.caret_offset, 6);

        window.advanced.built_in_index = 0;
        window.insert_selected_builtin();
        assert_eq!(window.advanced.line_edit, "Asin()+");
    }

    #[test]
    fn selected_signal_routes_expression_xy_and_confirmed_source_content() {
        let curves = [
            CurveEntry::new(1, "Direct")
                .with_editor_content(CurveEditorContent::Direct(String::from("V(N1)"))),
            CurveEntry::new(2, "XY").with_editor_content(CurveEditorContent::Xy {
                x: String::from("TIME"),
                y: String::from("V(OUT)"),
            }),
            CurveEntry::new(3, "Code").with_editor_content(CurveEditorContent::Advanced {
                source: String::from("begin\nend"),
                program: ProgramKind::Python,
                confirm_copy: true,
            }),
        ];
        let mut window = Window::default();
        window.show();
        window.set_master_curves(curves);

        window.selected_available.insert(1);
        window.insert_selected_signal();
        assert_eq!(window.advanced.line_edit, "V(N1)");

        window.selected_available.clear();
        window.selected_available.insert(2);
        window.insert_selected_signal();
        assert!(window.advanced.xy_plot.is_on());
        assert_eq!(window.advanced.line_edit, "V(N1)TIME");
        assert_eq!(window.advanced.line_edit_y, "V(OUT)");

        window.selected_available.clear();
        window.selected_available.insert(3);
        window.insert_selected_signal();
        assert_eq!(window.pending_source_copy, Some(3));
        window.confirm_signal_source_copy(false);
        assert!(window.advanced.advanced_edit.is_empty());

        window.insert_selected_signal();
        window.confirm_signal_source_copy(true);
        assert_eq!(window.advanced.advanced_edit, "begin\nend");
        assert_eq!(window.advanced.mode, EditorMode::Advanced);
        assert_eq!(window.advanced.program, ProgramKind::Python);
    }

    #[test]
    fn signal_insertion_requires_exactly_one_available_selection() {
        let mut window = Window::default();
        window.set_master_curves(curves());
        window.selected_available.extend([1, 2]);

        window.insert_selected_signal();

        assert!(window.advanced.line_edit.is_empty());
        assert!(window.advanced.advanced_edit.is_empty());
    }

    #[test]
    fn create_validates_name_and_definition_then_prepares_the_next_name() {
        let mut window = Window::default();
        window.show();
        window.function_name = String::from("1bad");
        window.advanced.line_edit = String::from("V(OUT)");
        assert!(!window.create_user_function());
        assert_eq!(window.last_error, Some("Wrong function name!"));

        window.function_name = String::from("MyCurve");
        assert!(window.create_user_function());
        let curve = window
            .master_curves
            .iter()
            .find(|curve| curve.name == "MyCurve")
            .expect("created curve");
        assert!(curve.user_defined);
        assert!(window.insertion_curve_ids.contains(&curve.id));
        assert_eq!(window.function_name, "MyFunction2");
        assert!(window.visible);
    }

    #[test]
    fn advanced_click_updates_only_the_caret_status() {
        let mut window = Window::default();
        window.advanced.advanced_edit = String::from("unchanged");

        window.update_advanced_caret_status(3, 7);

        assert_eq!(window.advanced.status, "Line:3 Col:7");
        assert_eq!(window.advanced.advanced_edit, "unchanged");
    }

    #[test]
    fn preview_clears_old_state_and_does_not_advance_the_function_counter() {
        let mut window = Window::default();
        window.show();
        window.set_master_curves(curves());
        window.function_name = String::from("MY_CURVE");
        window.advanced.line_edit = String::from("V(OUT)");
        window.set_preview_curves([1]);

        assert!(window.preview_current_function());

        assert_eq!(window.preview_curve_ids, BTreeSet::from([4]));
        assert!(!window.curve(1).expect("curve 1").preview_active);
        assert!(window.curve(4).expect("curve 4").preview_active);
        assert_eq!(window.function_name, "MY_CURVE");
        assert_eq!(window.function_counter, 1);
        assert_eq!(window.preview_generation, 1);
    }

    #[test]
    fn preview_without_a_registry_match_updates_the_record_but_not_preview_list() {
        let mut window = Window::default();
        window.show();
        window.function_name = String::from("NewCurve");
        window.advanced.line_edit = String::from("V(OUT)");

        assert!(window.preview_current_function());

        assert!(window.preview_curve_ids.is_empty());
        assert!(
            window
                .master_curves
                .iter()
                .any(|curve| curve.name == "NewCurve")
        );
        assert_eq!(window.diagram_refresh_generation, 1);
    }

    #[test]
    fn xy_mode_rejects_restricted_enable_and_restores_advanced_mode_on_clear() {
        let mut window = Window::default();
        window.show();
        window.set_advanced_edit(true);
        window.set_preview_curves([7]);
        window.set_restricted_analysis_state(true);

        assert!(!window.set_xy_plot(true));
        assert_eq!(window.last_error, Some(XY_RESTRICTION));
        assert_eq!(window.preview_curve_ids, BTreeSet::from([7]));
        assert_eq!(window.advanced.mode, EditorMode::Advanced);

        window.set_restricted_analysis_state(false);
        assert!(window.set_xy_plot(true));
        assert!(window.preview_curve_ids.is_empty());
        assert_eq!(window.advanced.mode, EditorMode::Line);
        assert!(window.set_xy_plot(false));
        assert_eq!(window.advanced.mode, EditorMode::Advanced);
    }

    #[test]
    fn copy_select_all_and_save_as_preserve_the_recovered_boundaries() {
        let mut window = Window {
            clipboard_text: Some(String::from("existing")),
            ..Window::default()
        };
        assert_eq!(window.copy_advanced_document(), None);
        assert_eq!(window.clipboard_text.as_deref(), Some("existing"));
        assert!(window.advanced.selection_all.is_on());

        window.advanced.advanced_edit = String::from("complete document");
        assert_eq!(window.copy_advanced_document(), Some("complete document"));
        assert_eq!(window.clipboard_text.as_deref(), Some("complete document"));
        let before = window.advanced.advanced_edit.clone();
        window.save_advanced_as();
        assert_eq!(window.advanced.advanced_edit, before);
    }

    #[test]
    fn filter_key_up_rebuilds_the_current_filtered_catalog() {
        let mut window = Window::default();
        window.set_master_curves(curves());
        let before = window.list_refresh_generation;

        window.filter_key_up();

        assert_eq!(window.list_refresh_generation, before + 1);
    }

    #[test]
    fn terminal_key_down_protects_the_prompt_prefix() {
        assert!(!Window::terminal_key_down(5, TerminalKey::Left));
        assert!(!Window::terminal_key_down(5, TerminalKey::Backspace));
        assert!(Window::terminal_key_down(6, TerminalKey::Left));
        assert!(Window::terminal_key_down(2, TerminalKey::Character('x')));
    }

    #[test]
    fn terminal_enter_executes_the_last_prompt_with_the_recovered_timeout() {
        let mut window = Window {
            terminal_text: String::from(">>> first\nresult\n>>> second"),
            ..Window::default()
        };
        let mut executor = TestTerminalExecutor {
            result: Ok(String::from("42")),
            ..TestTerminalExecutor::default()
        };

        assert!(window.terminal_key_up(TerminalKey::Enter, false, &mut executor));

        assert_eq!(executor.source, "second");
        assert_eq!(executor.timeout, Duration::from_secs(60));
        assert_eq!(
            window.terminal_text,
            ">>> first\nresult\n>>> second\n42\n>>> "
        );
        assert!(window.terminal_last_error.is_none());
    }

    #[test]
    fn terminal_control_enter_is_a_noop_and_errors_are_reported() {
        let mut window = Window {
            terminal_text: String::from(">>> bad"),
            ..Window::default()
        };
        let mut executor = TestTerminalExecutor {
            result: Err(String::from("Python error message")),
            ..TestTerminalExecutor::default()
        };

        assert!(!window.terminal_key_up(TerminalKey::Enter, true, &mut executor));
        assert!(executor.source.is_empty());
        assert!(window.terminal_key_up(TerminalKey::Enter, false, &mut executor));
        assert_eq!(
            window.terminal_last_error.as_deref(),
            Some("Python error message")
        );
        assert!(window.terminal_text.ends_with("Python error message\n>>> "));
    }

    #[test]
    fn timer_tick_disables_the_one_shot_timer_and_refreshes_current_state() {
        let mut window = Window {
            function_name: String::from("Curve"),
            timer_enabled: ToggleState::On,
            ..Window::default()
        };

        window.timer_tick();

        assert!(!window.timer_enabled.is_on());
        assert_eq!(window.preview_generation, 1);
    }

    #[test]
    fn advanced_editor_events_share_status_and_only_right_click_opens_popup() {
        let mut window = Window::default();
        window.advanced_editor_key_up(2, 3);
        assert_eq!(window.advanced.status, "Line:2 Col:3");

        window.advanced_editor_mouse_down(
            mouse::Button::Left,
            Point::new(4.0, 6.0),
            Point::new(100.0, 200.0),
            4,
            5,
        );
        assert!(window.advanced_popup_position.is_none());

        window.advanced_editor_mouse_down(
            mouse::Button::Right,
            Point::new(4.0, 6.0),
            Point::new(100.0, 200.0),
            6,
            7,
        );
        assert_eq!(
            window.advanced_popup_position,
            Some(Point::new(104.0, 206.0))
        );
        window.advanced_editor_mouse_up(8, 9);
        assert_eq!(window.advanced.status, "Line:8 Col:9");
    }

    #[test]
    fn resize_caps_the_window_to_the_remaining_monitor_work_area() {
        let mut window = Window::default();

        let size = window.resize_to_work_area(
            Size::new(900.0, 700.0),
            Point::new(300.0, 100.0),
            Point::new(0.0, 0.0),
            Size::new(1_000.0, 600.0),
        );

        assert_eq!(size, Size::new(700.0, 470.0));
    }

    #[test]
    fn line_editor_focus_and_key_filters_preserve_single_line_input() {
        let mut window = Window::default();
        window.enter_secondary_line_editor();
        assert_eq!(window.active_line_editor, ActiveLineEditor::Secondary);
        assert!(window.secondary_label_emphasized.is_on());
        assert!(!window.primary_label_emphasized.is_on());

        window.enter_primary_line_editor();
        assert_eq!(window.active_line_editor, ActiveLineEditor::Primary);
        assert!(window.primary_label_emphasized.is_on());
        assert!(!Window::primary_line_key_press(TerminalKey::Enter));
        assert!(!Window::secondary_line_key_press(TerminalKey::Enter));
        assert!(Window::primary_line_key_press(TerminalKey::Character('x')));
    }

    #[test]
    fn activation_synchronizes_the_more_or_less_caption() {
        let mut window = Window::default();
        window.activate();
        assert_eq!(window.advanced_toggle_caption, "More >>");

        window.toggle_advanced_panel();
        window.activate();
        assert_eq!(window.advanced_toggle_caption, "<< Less");
    }

    #[test]
    fn form_create_allocates_clean_dialog_state_and_initial_labels() {
        let mut window = Window {
            master_curves: Vec::from(curves()),
            terminal_text: String::from("old"),
            ..Window::default()
        };

        window.create();

        assert!(window.created.is_on());
        assert!(window.master_curves.is_empty());
        assert_eq!(window.function_name, "MyFunction1");
        assert_eq!(window.advanced.status, "Line:1 Col:1");
        assert_eq!(window.active_line_editor, ActiveLineEditor::Primary);
    }

    #[test]
    fn form_show_rebuilds_transient_controls_and_marks_initialization_complete() {
        let mut window = Window::default();
        window.set_master_curves(curves());
        window.insertion_curve_ids.extend([1, 2]);

        window.show();

        assert!(window.visible);
        assert!(window.active_state);
        assert!(window.timer_enabled.is_on());
        assert!(window.advanced.form_ready.is_on());
        assert!(window.insertion_curve_ids.is_empty());
        assert_eq!(window.terminal_text, ">>> ");
        assert_eq!(window.advanced.built_in_index, 0);
        assert_eq!(window.available_curve_ids.len(), 3);
    }

    #[test]
    fn form_hide_releases_session_state_but_keeps_owned_catalogs() {
        let mut window = Window::default();
        window.set_master_curves(curves());
        window.show();
        window.advanced.python_ready = ToggleState::On;

        window.hide();

        assert!(!window.visible);
        assert!(!window.active_state);
        assert!(!window.timer_enabled.is_on());
        assert!(!window.advanced.form_ready.is_on());
        assert!(!window.advanced.python_ready.is_on());
        assert_eq!(window.master_curves.len(), 4);
    }

    #[test]
    fn form_destroy_releases_all_dialog_owned_state() {
        let mut window = Window::default();
        window.set_master_curves(curves());
        window.set_program_templates("ipr", "py", true);
        window.show();

        window.destroy();

        assert!(!window.created.is_on());
        assert!(window.master_curves.is_empty());
        assert!(window.available_curve_ids.is_empty());
        assert!(window.advanced.interpreter_template.is_empty());
        assert!(window.advanced.python_template.is_empty());
        assert!(window.terminal_text.is_empty());
    }
}
