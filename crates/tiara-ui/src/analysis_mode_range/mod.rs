use std::cell::RefCell;
use std::rc::Rc;

use iced::widget::{button, column, container, row, text, text_input};
use iced::{Element, Length, Task};
use tiara_core::goal_functions::{AcGoalRecord, DcGoalRecord};
use tiara_core::parameter_stepping::{ParameterStepRecord, SweepMode};

use crate::{ac_goal_functions, dc_goal_functions, target_setting_editor};

pub const TITLE: &str = "Control object selection";
pub const FORM_RESOURCE: &str = "AnalModeRangeDlg";
pub const HELP_CONTEXT: u32 = 0x440;
pub const NOTEBOOK_PAGE_HELP_CONTEXT: u32 = 0x96;
pub const TARGET_MODE_CAPTION_RESOURCE: u32 = 0x1a2;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum Page {
    #[default]
    ParameterStepping,
    Optimization,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum OptimizationMode {
    #[default]
    ObjectRange,
    Target,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum RecordState {
    #[default]
    New,
    Existing,
    Delete,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum AggregateMode {
    #[default]
    Product,
    Minimum,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum OptimizationTarget {
    DcGoalFunctions,
    DcTable,
    AcGoalFunctions,
    AcTable,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DialogResult {
    Accepted,
    Cancelled,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct ObjectRangeRecord {
    pub start: f64,
    pub end: f64,
    pub midpoint: f64,
}

#[derive(Debug, Clone, PartialEq)]
pub struct TargetRecord {
    pub target: OptimizationTarget,
    pub table: Vec<target_setting_editor::TargetRecord>,
    pub ac_goals: Vec<AcGoalRecord>,
    pub dc_goals: Vec<DcGoalRecord>,
    pub measurement_unit: target_setting_editor::MeasurementUnit,
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct AnalysisModel {
    pub stepping: Vec<ParameterStepRecord>,
    pub object_ranges: Vec<ObjectRangeRecord>,
    pub targets: Vec<TargetRecord>,
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct SharedConfiguration {
    pub active_page: Page,
    pub stepping_aggregate: f64,
    pub first_stepping: Option<ParameterStepRecord>,
    pub first_object_range: Option<ObjectRangeRecord>,
    pub first_target: Option<TargetRecord>,
}

#[derive(Debug, Clone, PartialEq)]
pub struct PreparedTargetState {
    pub target: OptimizationTarget,
    pub table: Vec<target_setting_editor::TargetRecord>,
    pub ac_goals: Vec<AcGoalRecord>,
    pub dc_goals: Vec<DcGoalRecord>,
    pub measurement_unit: target_setting_editor::MeasurementUnit,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ControlVisibility {
    pub target_editors: bool,
    pub object_range: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum PageChangeState {
    Allowed,
    Blocked,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum RemoveState {
    Visible,
    Hidden,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum RemovePolicy {
    Standard,
    Restricted,
}

#[derive(Debug, Clone, PartialEq)]
pub struct ShowConfiguration {
    pub active_page: Page,
    pub optimization_mode: OptimizationMode,
    pub selected_target: OptimizationTarget,
    pub stepping: Option<ParameterStepRecord>,
    pub optimization_start: f64,
    pub optimization_end: f64,
    pub restricted_remove_mode: bool,
}

pub trait DialogText {
    fn localized_text(&self, resource_id: u32) -> String;
}

impl PreparedTargetState {
    #[must_use]
    pub const fn with_dc_goals(dc_goals: Vec<DcGoalRecord>) -> Self {
        Self {
            target: OptimizationTarget::DcGoalFunctions,
            table: Vec::new(),
            ac_goals: Vec::new(),
            dc_goals,
            measurement_unit: target_setting_editor::MeasurementUnit::Decibels,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct SteppingEdits {
    start: String,
    end: String,
    cases: String,
    sweep_mode: SweepMode,
    list_values: Vec<String>,
}

impl Default for SteppingEdits {
    fn default() -> Self {
        Self {
            start: "0".to_owned(),
            end: "1".to_owned(),
            cases: "10".to_owned(),
            sweep_mode: SweepMode::Linear,
            list_values: Vec::new(),
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    PageSelected(Page),
    OptimizationModeSelected(OptimizationMode),
    SteppingStartChanged(String),
    SteppingEndChanged(String),
    SteppingCasesChanged(String),
    OptimizationStartChanged(String),
    OptimizationEndChanged(String),
    OpenDcGoalFunctions,
    DcGoalFunctions(dc_goal_functions::Message),
    CloseDcGoalFunctions(DialogResult),
    OpenAcGoalFunctions,
    AcGoalFunctions(ac_goal_functions::Message),
    CloseAcGoalFunctions(DialogResult),
    OpenAcTable,
    OpenDcTable,
    TargetTable(target_setting_editor::Message),
    CloseTargetTable(DialogResult),
    Accept,
    Remove,
}

#[derive(Debug)]
pub struct State {
    model: Rc<RefCell<AnalysisModel>>,
    shared: SharedConfiguration,
    title: String,
    help_context: u32,
    notebook_page_help_context: u32,
    active_page: Page,
    optimization_mode: OptimizationMode,
    control_visibility: ControlVisibility,
    page_change: PageChangeState,
    remove: RemoveState,
    remove_policy: RemovePolicy,
    stepping_edits: SteppingEdits,
    optimization_start: String,
    optimization_end: String,
    parsed_stepping: Option<ParameterStepRecord>,
    parsed_object_range: Option<ObjectRangeRecord>,
    stepping_disposition: RecordState,
    object_disposition: RecordState,
    target_disposition: RecordState,
    stepping_index: Option<usize>,
    object_index: Option<usize>,
    target_index: Option<usize>,
    aggregate_mode: AggregateMode,
    validation_failed: bool,
    stepping_validation_failed: bool,
    last_error: Option<String>,
    last_close_disposition: RecordState,
    modal_result: Option<DialogResult>,
    dc_records: dc_goal_functions::SharedRecords,
    ac_records: ac_goal_functions::SharedRecords,
    target_table: Vec<target_setting_editor::TargetRecord>,
    measurement_unit: target_setting_editor::MeasurementUnit,
    dc_dialog: Option<dc_goal_functions::Window>,
    ac_dialog: Option<ac_goal_functions::Window>,
    target_table_dialog: Option<target_setting_editor::Window>,
    working_target: OptimizationTarget,
    selected_target: Option<OptimizationTarget>,
}

impl State {
    #[must_use]
    pub fn new(dc_records: Vec<DcGoalRecord>) -> Self {
        Self::with_model(Rc::new(RefCell::new(AnalysisModel::default())), dc_records)
    }

    #[must_use]
    pub fn with_model(model: Rc<RefCell<AnalysisModel>>, dc_records: Vec<DcGoalRecord>) -> Self {
        Self::with_prepared(model, PreparedTargetState::with_dc_goals(dc_records))
    }

    #[must_use]
    pub fn with_prepared(model: Rc<RefCell<AnalysisModel>>, prepared: PreparedTargetState) -> Self {
        Self {
            model,
            shared: SharedConfiguration {
                stepping_aggregate: 1.0,
                ..SharedConfiguration::default()
            },
            title: TITLE.to_owned(),
            help_context: 0,
            notebook_page_help_context: 0,
            active_page: Page::ParameterStepping,
            optimization_mode: OptimizationMode::ObjectRange,
            control_visibility: ControlVisibility {
                target_editors: false,
                object_range: false,
            },
            page_change: PageChangeState::Allowed,
            remove: RemoveState::Visible,
            remove_policy: RemovePolicy::Standard,
            stepping_edits: SteppingEdits::default(),
            optimization_start: "0".to_owned(),
            optimization_end: "1".to_owned(),
            parsed_stepping: None,
            parsed_object_range: None,
            stepping_disposition: RecordState::New,
            object_disposition: RecordState::New,
            target_disposition: RecordState::New,
            stepping_index: None,
            object_index: None,
            target_index: None,
            aggregate_mode: AggregateMode::Product,
            validation_failed: false,
            stepping_validation_failed: false,
            last_error: None,
            last_close_disposition: RecordState::New,
            modal_result: None,
            dc_records: Rc::new(RefCell::new(prepared.dc_goals)),
            ac_records: Rc::new(RefCell::new(prepared.ac_goals)),
            target_table: prepared.table,
            measurement_unit: prepared.measurement_unit,
            dc_dialog: None,
            ac_dialog: None,
            target_table_dialog: None,
            working_target: prepared.target,
            selected_target: None,
        }
    }

    /// Initializes the dialog help context and the default DC Goal Functions
    /// target. This ports Ghidra function `FUN_013ecb80` at `0x013ECB80`.
    pub const fn form_create(&mut self) {
        self.help_context = HELP_CONTEXT;
        self.working_target = OptimizationTarget::DcGoalFunctions;
        self.selected_target = Some(OptimizationTarget::DcGoalFunctions);
    }

    /// Restores the caller-owned page, edits, and target selection and updates
    /// control visibility. This ports Ghidra function `FUN_013ecbb0` at
    /// `0x013ECBB0`.
    pub fn form_show(&mut self, configuration: ShowConfiguration) {
        self.active_page = configuration.active_page;
        self.optimization_mode = configuration.optimization_mode;
        self.working_target = configuration.selected_target;
        self.selected_target = Some(configuration.selected_target);
        self.remove_policy = if configuration.restricted_remove_mode {
            RemovePolicy::Restricted
        } else {
            RemovePolicy::Standard
        };
        self.optimization_start = configuration.optimization_start.to_string();
        self.optimization_end = configuration.optimization_end.to_string();
        if let Some(stepping) = configuration.stepping {
            self.stepping_edits.start = stepping.start.to_string();
            self.stepping_edits.end = stepping.end.to_string();
            self.stepping_edits.cases = stepping.cases.to_string();
            self.stepping_edits.sweep_mode = stepping.sweep_mode;
            self.stepping_edits.list_values = stepping
                .list_values
                .iter()
                .map(ToString::to_string)
                .collect();
            self.parsed_stepping = Some(stepping);
        }
        self.refresh_mode_visibility();
        self.refresh_remove_visibility();
    }

    /// Applies the localized target-mode caption on activation. This ports
    /// Ghidra function `FUN_013ee0d0` at `0x013EE0D0`.
    pub fn form_activate(&mut self, text: &impl DialogText) {
        if self.active_page == Page::Optimization
            && self.optimization_mode == OptimizationMode::Target
        {
            self.title = text.localized_text(TARGET_MODE_CAPTION_RESOURCE);
        }
    }

    /// Forwards a float editor's supplied error text to the dialog validation
    /// state. This ports Ghidra function `FUN_013ee1e0` at `0x013EE1E0`.
    pub fn edit_float_error(&mut self, message: &str) {
        self.report_error(message.to_owned(), false);
    }

    /// Assigns the recovered page help context and refreshes Remove state.
    /// This ports Ghidra function `FUN_013ee200` at `0x013EE200`.
    pub fn notebook_changed(&mut self) {
        self.notebook_page_help_context = NOTEBOOK_PAGE_HELP_CONTEXT;
        self.refresh_remove_visibility();
    }

    /// Validates the current page and decides whether a tab switch can
    /// continue. This ports Ghidra function `FUN_013ee230` at `0x013EE230`.
    #[must_use]
    pub fn notebook_changing(&mut self) -> bool {
        let valid = self.validate_active_page();
        let can_change = valid && self.page_change == PageChangeState::Allowed;
        self.validation_failed = false;
        self.stepping_validation_failed = false;
        can_change
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::PageSelected(page) => {
                if page != self.active_page && self.notebook_changing() {
                    self.active_page = page;
                    self.refresh_mode_visibility();
                    self.notebook_changed();
                }
            }
            Message::OptimizationModeSelected(mode) => {
                self.optimization_mode = mode;
                self.refresh_mode_visibility();
                self.refresh_remove_visibility();
            }
            Message::SteppingStartChanged(value) => self.stepping_edits.start = value,
            Message::SteppingEndChanged(value) => self.stepping_edits.end = value,
            Message::SteppingCasesChanged(value) => self.stepping_edits.cases = value,
            Message::OptimizationStartChanged(value) => self.optimization_start = value,
            Message::OptimizationEndChanged(value) => self.optimization_end = value,
            Message::OpenDcGoalFunctions => self.open_dc_goal_functions(),
            Message::DcGoalFunctions(message) => {
                if let Some(dialog) = &mut self.dc_dialog {
                    dialog.update(message);
                }
            }
            Message::CloseDcGoalFunctions(result) => self.close_dc_goal_functions(result),
            Message::OpenAcGoalFunctions => self.open_ac_goal_functions(),
            Message::AcGoalFunctions(message) => {
                if let Some(dialog) = &mut self.ac_dialog {
                    dialog.update(message);
                }
            }
            Message::CloseAcGoalFunctions(result) => self.close_ac_goal_functions(result),
            Message::OpenAcTable => self.open_target_table(target_setting_editor::EditorMode::Ac),
            Message::OpenDcTable => self.open_target_table(target_setting_editor::EditorMode::Dc),
            Message::TargetTable(message) => {
                if let Some(dialog) = &mut self.target_table_dialog {
                    return dialog.update(message).map(Message::TargetTable);
                }
            }
            Message::CloseTargetTable(result) => self.close_target_table(result),
            Message::Accept => {
                let _ = self.accept();
            }
            Message::Remove => self.remove_and_accept(),
        }
        Task::none()
    }

    /// Reimplements Ghidra function `FUN_013ecee0` at `0x013ECEE0`.
    #[must_use]
    pub fn validate_active_page(&mut self) -> bool {
        self.validation_failed = false;
        self.last_error = None;
        match self.active_page {
            Page::ParameterStepping => self.validate_stepping_page(),
            Page::Optimization => self.validate_optimization_page(),
        }
        !self.validation_failed
    }

    /// Reimplements Ghidra function `FUN_013ed640` at `0x013ED640`.
    ///
    /// The selected state appends, overwrites, or removes one caller-owned
    /// record. A target commit takes the prepared lists and prunes those that
    /// do not apply to the selected target.
    pub fn apply_current_definition(&mut self) {
        match (self.active_page, self.optimization_mode) {
            (Page::ParameterStepping, _) => self.apply_stepping_definition(),
            (Page::Optimization, OptimizationMode::ObjectRange) => {
                self.apply_object_definition();
            }
            (Page::Optimization, OptimizationMode::Target) => self.apply_target_definition(),
        }
    }

    /// Reimplements Ghidra function `FUN_013ede80` at `0x013EDE80`.
    ///
    /// Valid input is committed and copied into shared snapshots. An error
    /// skips all model and shared-state writes.
    #[must_use]
    pub fn accept(&mut self) -> bool {
        if !self.validate_active_page() {
            self.modal_result = None;
            return false;
        }
        self.apply_current_definition();
        self.refresh_shared_state();
        self.modal_result = Some(DialogResult::Accepted);
        true
    }

    /// Reimplements Ghidra function `FUN_013ee160` at `0x013EE160`.
    #[must_use]
    pub const fn query_close(&mut self) -> bool {
        let can_close = !self.validation_failed;
        self.validation_failed = false;
        self.stepping_validation_failed = false;
        self.last_close_disposition = self.active_record_state();
        can_close
    }

    /// Reimplements Ghidra function `FUN_013ee280` at `0x013EE280`.
    pub fn remove_and_accept(&mut self) {
        self.stepping_disposition = RecordState::Delete;
        self.object_disposition = RecordState::Delete;
        self.target_disposition = RecordState::Delete;
        self.apply_current_definition();
        self.refresh_shared_state();
        self.modal_result = Some(DialogResult::Accepted);
    }

    /// Reimplements Ghidra function `FUN_013ee4e0` at `0x013EE4E0`.
    pub const fn select_target(&mut self, target: OptimizationTarget) {
        self.selected_target = Some(target);
    }

    /// Reimplements Ghidra function `FUN_013ee580` at `0x013EE580` for AC
    /// mode and Ghidra function `FUN_013ee700` at `0x013EE700` for DC mode.
    pub fn open_target_table(&mut self, mode: target_setting_editor::EditorMode) {
        self.working_target = match mode {
            target_setting_editor::EditorMode::Ac => OptimizationTarget::AcTable,
            target_setting_editor::EditorMode::Dc => OptimizationTarget::DcTable,
        };
        let mut dialog = target_setting_editor::Window::new(self.target_table.clone(), mode);
        if mode == target_setting_editor::EditorMode::Ac {
            drop(
                dialog.update(target_setting_editor::Message::MeasurementUnitSelected(
                    self.measurement_unit,
                )),
            );
        }
        self.target_table_dialog = Some(dialog);
    }

    pub fn close_target_table(&mut self, result: DialogResult) {
        if let Some(dialog) = self.target_table_dialog.take()
            && result == DialogResult::Accepted
        {
            self.target_table = dialog.caller_table().to_vec();
            if let Some(unit) = dialog.accepted_measurement_unit() {
                self.measurement_unit = unit;
            }
            self.select_target(self.working_target);
        }
    }

    /// Reimplements Ghidra function `FUN_013ee620` at `0x013EE620`.
    pub fn open_ac_goal_functions(&mut self) {
        self.working_target = OptimizationTarget::AcGoalFunctions;
        self.ac_dialog = Some(ac_goal_functions::Window::new(Rc::clone(&self.ac_records)));
    }

    pub fn close_ac_goal_functions(&mut self, result: DialogResult) {
        if result == DialogResult::Accepted {
            self.select_target(OptimizationTarget::AcGoalFunctions);
        }
        self.ac_dialog = None;
    }

    /// Reimplements Ghidra function `FUN_013ee690` at `0x013EE690`.
    pub fn open_dc_goal_functions(&mut self) {
        self.working_target = OptimizationTarget::DcGoalFunctions;
        self.dc_dialog = Some(dc_goal_functions::Window::new(Rc::clone(&self.dc_records)));
    }

    pub fn close_dc_goal_functions(&mut self, result: DialogResult) {
        if result == DialogResult::Accepted {
            self.select_target(OptimizationTarget::DcGoalFunctions);
        }
        self.dc_dialog = None;
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        if let Some(dialog) = &self.ac_dialog {
            return dialog.view().map(Message::AcGoalFunctions);
        }
        if let Some(dialog) = &self.dc_dialog {
            return dialog.view().map(Message::DcGoalFunctions);
        }
        if let Some(dialog) = &self.target_table_dialog {
            return dialog.view().map(Message::TargetTable);
        }
        let editor: Element<'_, Message> = match self.active_page {
            Page::ParameterStepping => row![
                text_input("Start value", &self.stepping_edits.start)
                    .on_input(Message::SteppingStartChanged),
                text_input("End value", &self.stepping_edits.end)
                    .on_input(Message::SteppingEndChanged),
                text_input("Number of cases", &self.stepping_edits.cases)
                    .on_input(Message::SteppingCasesChanged),
            ]
            .spacing(8)
            .into(),
            Page::Optimization if self.control_visibility.object_range => row![
                text_input("Start value", &self.optimization_start)
                    .on_input(Message::OptimizationStartChanged),
                text_input("End value", &self.optimization_end)
                    .on_input(Message::OptimizationEndChanged),
            ]
            .spacing(8)
            .into(),
            Page::Optimization => row![
                button("DC Goal Functions").on_press(Message::OpenDcGoalFunctions),
                button("DC Table").on_press(Message::OpenDcTable),
                button("AC Goal Functions").on_press(Message::OpenAcGoalFunctions),
                button("AC Table").on_press(Message::OpenAcTable),
            ]
            .spacing(6)
            .into(),
        };
        container(
            column![
                text(&self.title).size(24),
                row![
                    button("Parameter Stepping")
                        .on_press(Message::PageSelected(Page::ParameterStepping)),
                    button("Optimization").on_press(Message::PageSelected(Page::Optimization)),
                ]
                .spacing(6),
                editor,
                self.last_error.as_ref().map_or_else(
                    || text(""),
                    |error| text(error).style(iced::widget::text::danger),
                ),
                row![
                    button("OK").on_press(Message::Accept),
                    if self.remove == RemoveState::Visible {
                        button("Remove").on_press(Message::Remove)
                    } else {
                        button("Remove")
                    },
                ]
                .spacing(6),
            ]
            .spacing(12),
        )
        .padding(16)
        .width(Length::Fill)
        .into()
    }

    fn validate_stepping_page(&mut self) {
        let Some(start) = parse_number(&self.stepping_edits.start) else {
            self.report_error("Invalid stepping start value".to_owned(), true);
            return;
        };
        let Some(end) = parse_number(&self.stepping_edits.end) else {
            self.report_error("Invalid stepping end value".to_owned(), true);
            return;
        };
        let Ok(cases) = self.stepping_edits.cases.trim().parse::<u32>() else {
            self.report_error("Invalid number of stepping cases".to_owned(), true);
            return;
        };
        let range_invalid = match self.stepping_edits.sweep_mode {
            SweepMode::Linear => same_value(start, end),
            SweepMode::Logarithmic => start <= 0.0 || end <= 0.0 || same_value(start, end),
            SweepMode::List => false,
        };
        if range_invalid {
            self.report_error("The stepping range is invalid".to_owned(), true);
            return;
        }
        self.parsed_stepping = Some(ParameterStepRecord {
            parameter_name: String::new(),
            start,
            end,
            cases,
            sweep_mode: self.stepping_edits.sweep_mode,
            list_values: self
                .stepping_edits
                .list_values
                .iter()
                .filter_map(|value| parse_number(value))
                .collect(),
        });
    }

    fn validate_optimization_page(&mut self) {
        let Some(start) = parse_number(&self.optimization_start) else {
            self.report_error("Invalid optimization start value".to_owned(), false);
            return;
        };
        let Some(end) = parse_number(&self.optimization_end) else {
            self.report_error("Invalid optimization end value".to_owned(), false);
            return;
        };
        if end <= start {
            self.report_error(
                "The end value must be greater than the start value.".to_owned(),
                false,
            );
            return;
        }
        self.parsed_object_range = Some(ObjectRangeRecord {
            start,
            end,
            midpoint: start + (end - start) / 2.0,
        });
    }

    fn report_error(&mut self, message: String, stepping: bool) {
        if !self.validation_failed {
            self.last_error = Some(message);
        }
        self.validation_failed = true;
        self.stepping_validation_failed |= stepping;
    }

    fn apply_stepping_definition(&mut self) {
        let mut model = self.model.borrow_mut();
        match self.stepping_disposition {
            RecordState::New => {
                if let Some(record) = self.parsed_stepping.clone() {
                    model.stepping.push(record);
                    self.stepping_index = model.stepping.len().checked_sub(1);
                    self.stepping_disposition = RecordState::Existing;
                }
            }
            RecordState::Existing => {
                if let (Some(index), Some(record)) =
                    (self.stepping_index, self.parsed_stepping.clone())
                    && let Some(target) = model.stepping.get_mut(index)
                {
                    *target = record;
                }
            }
            RecordState::Delete => {
                if let Some(index) = self.stepping_index.take()
                    && index < model.stepping.len()
                {
                    model.stepping.remove(index);
                }
            }
        }
    }

    fn apply_object_definition(&mut self) {
        let mut model = self.model.borrow_mut();
        match self.object_disposition {
            RecordState::New => {
                if let Some(record) = self.parsed_object_range {
                    model.object_ranges.push(record);
                    self.object_index = model.object_ranges.len().checked_sub(1);
                    self.object_disposition = RecordState::Existing;
                }
            }
            RecordState::Existing => {
                if let (Some(index), Some(record)) = (self.object_index, self.parsed_object_range)
                    && let Some(target) = model.object_ranges.get_mut(index)
                {
                    *target = record;
                }
            }
            RecordState::Delete => {
                if let Some(index) = self.object_index.take()
                    && index < model.object_ranges.len()
                {
                    model.object_ranges.remove(index);
                }
            }
        }
    }

    fn apply_target_definition(&mut self) {
        let mut model = self.model.borrow_mut();
        match self.target_disposition {
            RecordState::New | RecordState::Existing => {
                let mut record = TargetRecord {
                    target: self.working_target,
                    table: std::mem::take(&mut self.target_table),
                    ac_goals: std::mem::take(&mut *self.ac_records.borrow_mut()),
                    dc_goals: std::mem::take(&mut *self.dc_records.borrow_mut()),
                    measurement_unit: self.measurement_unit,
                };
                prune_target_lists(&mut record);
                if self.target_disposition == RecordState::New {
                    model.targets.push(record);
                    self.target_index = model.targets.len().checked_sub(1);
                    self.target_disposition = RecordState::Existing;
                } else if let Some(target) = self
                    .target_index
                    .and_then(|index| model.targets.get_mut(index))
                {
                    *target = record;
                }
            }
            RecordState::Delete => {
                if let Some(index) = self.target_index.take()
                    && index < model.targets.len()
                {
                    model.targets.remove(index);
                }
            }
        }
    }

    fn refresh_shared_state(&mut self) {
        let model = self.model.borrow();
        if self.active_page == Page::ParameterStepping {
            self.shared.stepping_aggregate =
                stepping_aggregate(&model.stepping, self.aggregate_mode);
        }
        self.shared.active_page = self.active_page;
        if let Some(record) = model.stepping.first() {
            self.shared.first_stepping = Some(record.clone());
        }
        if let Some(record) = model.object_ranges.first() {
            self.shared.first_object_range = Some(*record);
        }
        if let Some(record) = model.targets.first() {
            self.shared.first_target = Some(record.clone());
        }
    }

    fn refresh_mode_visibility(&mut self) {
        let optimization_page = self.active_page == Page::Optimization;
        self.control_visibility = ControlVisibility {
            target_editors: optimization_page && self.optimization_mode == OptimizationMode::Target,
            object_range: optimization_page
                && self.optimization_mode == OptimizationMode::ObjectRange,
        };
        self.page_change = if self.control_visibility.target_editors {
            PageChangeState::Blocked
        } else {
            PageChangeState::Allowed
        };
    }

    fn refresh_remove_visibility(&mut self) {
        let model = self.model.borrow();
        let unavailable_for_current_record = if self.remove_policy == RemovePolicy::Restricted {
            match (self.active_page, self.optimization_mode) {
                (Page::ParameterStepping, _) => {
                    !model.stepping.is_empty() && self.stepping_disposition != RecordState::Existing
                }
                (Page::Optimization, OptimizationMode::ObjectRange) => {
                    !model.object_ranges.is_empty()
                        && self.object_disposition != RecordState::Existing
                }
                (Page::Optimization, OptimizationMode::Target) => {
                    !model.targets.is_empty() && self.target_disposition != RecordState::Existing
                }
            }
        } else {
            false
        };
        let object_limit_exceeded = self.active_page == Page::Optimization
            && self.optimization_mode == OptimizationMode::ObjectRange
            && model.object_ranges.len() > 10;
        self.remove = if unavailable_for_current_record || object_limit_exceeded {
            RemoveState::Hidden
        } else {
            RemoveState::Visible
        };
    }

    const fn active_record_state(&self) -> RecordState {
        match (self.active_page, self.optimization_mode) {
            (Page::ParameterStepping, _) => self.stepping_disposition,
            (Page::Optimization, OptimizationMode::ObjectRange) => self.object_disposition,
            (Page::Optimization, OptimizationMode::Target) => self.target_disposition,
        }
    }

    #[must_use]
    pub const fn selected_target(&self) -> Option<OptimizationTarget> {
        self.selected_target
    }

    #[must_use]
    pub const fn working_target(&self) -> OptimizationTarget {
        self.working_target
    }

    #[must_use]
    pub fn title(&self) -> &str {
        &self.title
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub const fn notebook_page_help_context(&self) -> u32 {
        self.notebook_page_help_context
    }

    #[must_use]
    pub const fn control_visibility(&self) -> ControlVisibility {
        self.control_visibility
    }

    #[must_use]
    pub const fn page_change_allowed(&self) -> bool {
        matches!(self.page_change, PageChangeState::Allowed)
    }

    #[must_use]
    pub const fn remove_visible(&self) -> bool {
        matches!(self.remove, RemoveState::Visible)
    }

    #[must_use]
    pub fn dc_records(&self) -> Vec<DcGoalRecord> {
        self.dc_records.borrow().clone()
    }

    #[must_use]
    pub fn ac_records(&self) -> Vec<AcGoalRecord> {
        self.ac_records.borrow().clone()
    }

    #[must_use]
    pub fn model(&self) -> AnalysisModel {
        self.model.borrow().clone()
    }

    #[must_use]
    pub const fn shared_configuration(&self) -> &SharedConfiguration {
        &self.shared
    }
}

fn parse_number(value: &str) -> Option<f64> {
    value
        .trim()
        .parse::<f64>()
        .ok()
        .filter(|number| number.is_finite())
}

fn same_value(left: f64, right: f64) -> bool {
    left.total_cmp(&right).is_eq()
}

fn prune_target_lists(record: &mut TargetRecord) {
    match record.target {
        OptimizationTarget::DcGoalFunctions => {
            record.table.clear();
            record.ac_goals.clear();
        }
        OptimizationTarget::DcTable | OptimizationTarget::AcTable => {
            record.ac_goals.clear();
            record.dc_goals.clear();
        }
        OptimizationTarget::AcGoalFunctions => {
            record.table.clear();
            record.dc_goals.clear();
        }
    }
}

fn stepping_aggregate(records: &[ParameterStepRecord], mode: AggregateMode) -> f64 {
    match mode {
        AggregateMode::Product => records
            .iter()
            .fold(1.0, |aggregate, record| aggregate * f64::from(record.cases)),
        AggregateMode::Minimum => records
            .iter()
            .map(|record| f64::from(record.cases))
            .reduce(f64::min)
            .unwrap_or(1.0),
    }
}

#[cfg(test)]
mod tests {
    use std::cell::RefCell;
    use std::rc::Rc;

    use tiara_core::goal_functions::{
        AcGoalKind, AcGoalRecord, AcGoalUnit, DcGoalKind, DcGoalRecord,
    };

    use super::{
        ControlVisibility, DialogResult, DialogText, HELP_CONTEXT, Message,
        NOTEBOOK_PAGE_HELP_CONTEXT, ObjectRangeRecord, OptimizationMode, OptimizationTarget, Page,
        ShowConfiguration, State, TARGET_MODE_CAPTION_RESOURCE,
    };
    use crate::{ac_goal_functions, dc_goal_functions, target_setting_editor};

    #[test]
    fn invalid_optimization_range_skips_model_and_shared_writes() {
        let mut state = State::new(Vec::new());
        drop(state.update(Message::PageSelected(Page::Optimization)));
        drop(state.update(Message::OptimizationStartChanged("10".to_owned())));
        drop(state.update(Message::OptimizationEndChanged("1".to_owned())));
        assert!(!state.accept());
        assert!(state.model().object_ranges.is_empty());
        assert_eq!(
            state.shared_configuration().active_page,
            Page::ParameterStepping
        );
        assert!(!state.query_close());
        assert!(state.query_close());
    }

    #[test]
    fn valid_object_range_is_added_with_its_midpoint() {
        let mut state = State::new(Vec::new());
        drop(state.update(Message::PageSelected(Page::Optimization)));
        drop(state.update(Message::OptimizationStartChanged("2".to_owned())));
        drop(state.update(Message::OptimizationEndChanged("6".to_owned())));
        assert!(state.accept());
        let model = state.model();
        assert_eq!(model.object_ranges.len(), 1);
        assert!((model.object_ranges[0].midpoint - 4.0).abs() <= f64::EPSILON);
        assert_eq!(state.shared_configuration().active_page, Page::Optimization);
    }

    #[test]
    fn stepping_accept_updates_product_and_first_record() {
        let mut state = State::new(Vec::new());
        drop(state.update(Message::SteppingCasesChanged("4".to_owned())));
        assert!(state.accept());
        assert!((state.shared_configuration().stepping_aggregate - 4.0).abs() <= f64::EPSILON);
        assert_eq!(
            state
                .shared_configuration()
                .first_stepping
                .as_ref()
                .map(|record| record.cases),
            Some(4)
        );
    }

    #[test]
    fn remove_deletes_only_the_active_record_family() {
        let mut state = State::new(Vec::new());
        assert!(state.accept());
        drop(state.update(Message::PageSelected(Page::Optimization)));
        drop(state.update(Message::OptimizationStartChanged("1".to_owned())));
        drop(state.update(Message::OptimizationEndChanged("2".to_owned())));
        assert!(state.accept());
        state.remove_and_accept();
        let model = state.model();
        assert_eq!(model.stepping.len(), 1);
        assert!(model.object_ranges.is_empty());
    }

    #[test]
    fn accepted_ac_goal_editor_selects_it_and_keeps_shared_edits() {
        let mut state = State::new(Vec::new());
        drop(state.update(Message::OpenAcGoalFunctions));
        drop(state.update(Message::AcGoalFunctions(
            ac_goal_functions::Message::Checked(AcGoalKind::Maximum, true),
        )));
        drop(state.update(Message::AcGoalFunctions(ac_goal_functions::Message::Ok)));
        drop(state.update(Message::CloseAcGoalFunctions(DialogResult::Accepted)));
        assert_eq!(
            state.selected_target(),
            Some(OptimizationTarget::AcGoalFunctions)
        );
        assert_eq!(state.ac_records().len(), 1);
    }

    #[test]
    fn cancelled_dc_goal_editor_keeps_pending_marker_without_selection() {
        let mut state = State::new(vec![DcGoalRecord::new(DcGoalKind::Value, 1.0, 5.0)]);
        drop(state.update(Message::OpenDcGoalFunctions));
        drop(state.update(Message::CloseDcGoalFunctions(DialogResult::Cancelled)));
        assert_eq!(state.working_target(), OptimizationTarget::DcGoalFunctions);
        assert_eq!(state.selected_target(), None);
        assert_eq!(state.dc_records().len(), 1);
    }

    #[test]
    fn accepted_ac_table_copies_unit_then_selects_button() {
        let mut state = State::new(Vec::new());
        drop(state.update(Message::OpenAcTable));
        drop(state.update(Message::TargetTable(
            target_setting_editor::Message::MeasurementUnitSelected(
                target_setting_editor::MeasurementUnit::Volts,
            ),
        )));
        drop(state.update(Message::TargetTable(target_setting_editor::Message::Accept)));
        drop(state.update(Message::CloseTargetTable(DialogResult::Accepted)));
        assert_eq!(state.selected_target(), Some(OptimizationTarget::AcTable));
        assert_eq!(
            state.measurement_unit,
            target_setting_editor::MeasurementUnit::Volts
        );
    }

    #[test]
    fn target_commit_transfers_and_prunes_prepared_lists() {
        let mut state = State::new(vec![DcGoalRecord::new(DcGoalKind::Maximum, 0.0, 0.0)]);
        state.active_page = Page::Optimization;
        state.optimization_mode = OptimizationMode::Target;
        state.working_target = OptimizationTarget::DcGoalFunctions;
        state.ac_records.borrow_mut().push(AcGoalRecord::new(
            AcGoalKind::Minimum,
            [0.0; 5],
            AcGoalUnit::Decibels,
        ));
        assert!(state.accept());
        let model = state.model();
        assert_eq!(model.targets.len(), 1);
        assert_eq!(model.targets[0].dc_goals.len(), 1);
        assert!(model.targets[0].ac_goals.is_empty());
        assert!(state.dc_records().is_empty());
    }

    #[test]
    fn dc_goal_child_updates_are_forwarded_by_iced_message() {
        let mut state = State::new(Vec::new());
        drop(state.update(Message::OpenDcGoalFunctions));
        drop(state.update(Message::DcGoalFunctions(
            dc_goal_functions::Message::KindSelected(DcGoalKind::Minimum),
        )));
        drop(state.update(Message::DcGoalFunctions(dc_goal_functions::Message::Ok)));
        assert_eq!(state.dc_records()[0].kind, DcGoalKind::Minimum);
    }

    #[test]
    fn create_sets_help_context_and_default_target_selection() {
        let mut state = State::new(Vec::new());

        state.form_create();

        assert_eq!(state.help_context(), HELP_CONTEXT);
        assert_eq!(
            state.selected_target(),
            Some(OptimizationTarget::DcGoalFunctions)
        );
        assert_eq!(state.working_target(), OptimizationTarget::DcGoalFunctions);
    }

    #[test]
    fn show_restores_object_range_and_hides_target_controls() {
        let mut state = State::new(Vec::new());

        state.form_show(ShowConfiguration {
            active_page: Page::Optimization,
            optimization_mode: OptimizationMode::ObjectRange,
            selected_target: OptimizationTarget::AcTable,
            stepping: None,
            optimization_start: 2.5,
            optimization_end: 8.5,
            restricted_remove_mode: false,
        });

        assert_eq!(state.optimization_start, "2.5");
        assert_eq!(state.optimization_end, "8.5");
        assert_eq!(
            state.control_visibility(),
            ControlVisibility {
                target_editors: false,
                object_range: true
            }
        );
        assert!(state.page_change_allowed());
        assert_eq!(state.selected_target(), Some(OptimizationTarget::AcTable));
    }

    #[test]
    fn target_mode_blocks_page_changes_and_localizes_caption_on_activation() {
        struct Text;

        impl DialogText for Text {
            fn localized_text(&self, resource_id: u32) -> String {
                assert_eq!(resource_id, TARGET_MODE_CAPTION_RESOURCE);
                "Localized optimization target".to_owned()
            }
        }

        let mut state = State::new(Vec::new());
        state.form_show(ShowConfiguration {
            active_page: Page::Optimization,
            optimization_mode: OptimizationMode::Target,
            selected_target: OptimizationTarget::DcTable,
            stepping: None,
            optimization_start: 0.0,
            optimization_end: 1.0,
            restricted_remove_mode: false,
        });

        state.form_activate(&Text);

        assert_eq!(state.title(), "Localized optimization target");
        assert_eq!(
            state.control_visibility(),
            ControlVisibility {
                target_editors: true,
                object_range: false
            }
        );
        assert!(!state.page_change_allowed());
        assert!(!state.notebook_changing());
    }

    #[test]
    fn notebook_changing_validates_range_and_change_sets_page_help_context() {
        let mut state = State::new(Vec::new());
        state.form_show(ShowConfiguration {
            active_page: Page::Optimization,
            optimization_mode: OptimizationMode::ObjectRange,
            selected_target: OptimizationTarget::DcGoalFunctions,
            stepping: None,
            optimization_start: 3.0,
            optimization_end: 2.0,
            restricted_remove_mode: false,
        });

        assert!(!state.notebook_changing());
        assert!(state.last_error.is_some());
        drop(state.update(Message::OptimizationEndChanged("4".to_owned())));
        assert!(state.notebook_changing());
        state.notebook_changed();
        assert_eq!(
            state.notebook_page_help_context(),
            NOTEBOOK_PAGE_HELP_CONTEXT
        );
    }

    #[test]
    fn float_edit_error_uses_supplied_text_and_large_object_list_hides_remove() {
        let model = Rc::new(RefCell::new(super::AnalysisModel {
            object_ranges: vec![
                ObjectRangeRecord {
                    start: 0.0,
                    end: 1.0,
                    midpoint: 0.5,
                };
                11
            ],
            ..super::AnalysisModel::default()
        }));
        let mut state = State::with_model(model, Vec::new());
        state.form_show(ShowConfiguration {
            active_page: Page::Optimization,
            optimization_mode: OptimizationMode::ObjectRange,
            selected_target: OptimizationTarget::DcGoalFunctions,
            stepping: None,
            optimization_start: 0.0,
            optimization_end: 1.0,
            restricted_remove_mode: false,
        });

        state.edit_float_error("Recovered float edit error");

        assert_eq!(
            state.last_error.as_deref(),
            Some("Recovered float edit error")
        );
        assert!(!state.remove_visible());
    }
}
