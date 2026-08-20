use std::cell::RefCell;
use std::rc::Rc;

use iced::widget::{button, column, container, pick_list, row, text, text_input};
use iced::{Element, Length, Task};
use tiara_core::parameter_stepping::{ParameterStepRecord, SweepMode};

use crate::parameter_step_list_editor;

pub const TITLE: &str = "Parameter stepping";
pub type SharedRecords = Rc<RefCell<Vec<ParameterStepRecord>>>;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DialogResult {
    Accepted,
    Cancelled,
}

#[derive(Debug, Clone)]
pub enum FrameMessage {
    StartChanged(String),
    EndChanged(String),
    CasesChanged(String),
    SweepSelected(SweepMode),
    OpenListEditor,
    ListEditor(parameter_step_list_editor::Message),
    CloseListEditor(DialogResult),
}

#[derive(Debug)]
pub struct Frame {
    working_record: ParameterStepRecord,
    start: String,
    end: String,
    cases: String,
    error_latched: bool,
    last_error: Option<String>,
    list_button_enabled: bool,
    list_dialog: Option<parameter_step_list_editor::Window>,
    list_dialog_values: Option<parameter_step_list_editor::SharedValues>,
    pre_dialog_cases: u32,
}

impl Frame {
    #[must_use]
    pub fn new(record: ParameterStepRecord) -> Self {
        Self {
            start: record.start.to_string(),
            end: record.end.to_string(),
            cases: record.cases.to_string(),
            list_button_enabled: record.sweep_mode == SweepMode::List,
            working_record: record,
            error_latched: false,
            last_error: None,
            list_dialog: None,
            list_dialog_values: None,
            pre_dialog_cases: 0,
        }
    }

    pub fn update(&mut self, message: FrameMessage) {
        match message {
            FrameMessage::StartChanged(value) => self.start = value,
            FrameMessage::EndChanged(value) => self.end = value,
            FrameMessage::CasesChanged(value) => self.cases = value,
            FrameMessage::SweepSelected(mode) => self.select_sweep_mode(mode),
            FrameMessage::OpenListEditor => self.open_list_editor(),
            FrameMessage::ListEditor(message) => {
                if let Some(dialog) = &mut self.list_dialog {
                    dialog.update(message);
                }
            }
            FrameMessage::CloseListEditor(result) => self.close_list_editor(result),
        }
    }

    /// Reimplements Ghidra function `FUN_01438570` at `0x01438570`.
    ///
    /// Only the first message in a validation cycle is retained. Every error
    /// sets the frame latch used by the parent close guard.
    pub fn report_first_error(&mut self, message: String) {
        if !self.error_latched {
            self.last_error = Some(message);
        }
        self.error_latched = true;
    }

    /// Reimplements Ghidra function `FUN_014386d0` at `0x014386D0`.
    ///
    /// The current edits are read into a result record on every call. Linear
    /// and Logarithmic range errors use the first-error latch. List mode skips
    /// endpoint validation.
    #[must_use]
    pub fn read_and_validate(&mut self) -> ParameterStepRecord {
        self.error_latched = false;
        self.last_error = None;

        if let Some(value) = parse_number(&self.start) {
            self.working_record.start = value;
        } else {
            self.report_first_error("Invalid start value".to_owned());
        }
        if let Some(value) = parse_number(&self.end) {
            self.working_record.end = value;
        } else {
            self.report_first_error("Invalid end value".to_owned());
        }
        if let Ok(value) = self.cases.trim().parse::<u32>() {
            self.working_record.cases = value;
        } else {
            self.report_first_error("Invalid number of cases".to_owned());
        }

        if let Err(error) = self.working_record.validate() {
            self.report_first_error(error.to_string());
        }
        self.working_record.clone()
    }

    /// Reimplements Ghidra function `FUN_01438880` at `0x01438880`.
    pub fn open_list_editor(&mut self) {
        self.pre_dialog_cases = self.working_record.cases;
        let values = Rc::new(RefCell::new(self.working_record.list_values.clone()));
        self.list_dialog = Some(parameter_step_list_editor::Window::new(
            Rc::clone(&values),
            self.working_record.start,
            self.working_record.end,
        ));
        self.list_dialog_values = Some(values);
    }

    pub fn close_list_editor(&mut self, result: DialogResult) {
        if result == DialogResult::Accepted {
            self.cases = self.pre_dialog_cases.to_string();
            if let Some(values) = &self.list_dialog_values {
                self.working_record.list_values.clone_from(&values.borrow());
                self.working_record.cases =
                    u32::try_from(self.working_record.list_values.len()).unwrap_or_default();
            }
        }
        self.list_dialog = None;
        self.list_dialog_values = None;
    }

    /// Reimplements Ghidra function `FUN_01438930` at `0x01438930`.
    pub const fn select_sweep_mode(&mut self, mode: SweepMode) {
        self.working_record.sweep_mode = mode;
        self.list_button_enabled = matches!(mode, SweepMode::List);
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, FrameMessage> {
        if let Some(dialog) = &self.list_dialog {
            return dialog.view().map(FrameMessage::ListEditor);
        }
        container(
            column![
                row![
                    text_input("Start value", &self.start).on_input(FrameMessage::StartChanged),
                    text_input("End value", &self.end).on_input(FrameMessage::EndChanged),
                    text_input("Number of cases", &self.cases).on_input(FrameMessage::CasesChanged),
                ]
                .spacing(8),
                pick_list(
                    SweepMode::ALL,
                    Some(self.working_record.sweep_mode),
                    FrameMessage::SweepSelected,
                ),
                if self.list_button_enabled {
                    button("Edit list").on_press(FrameMessage::OpenListEditor)
                } else {
                    button("Edit list")
                },
                self.last_error.as_ref().map_or_else(
                    || text(""),
                    |error| text(error).style(iced::widget::text::danger),
                ),
            ]
            .spacing(8),
        )
        .width(Length::Fill)
        .into()
    }

    pub const fn clear_error_latch(&mut self) {
        self.error_latched = false;
    }

    #[must_use]
    pub const fn has_error(&self) -> bool {
        self.error_latched
    }

    #[must_use]
    pub const fn list_button_enabled(&self) -> bool {
        self.list_button_enabled
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    Frame(FrameMessage),
    Accept,
    Remove,
}

#[derive(Debug)]
pub struct Window {
    parameter_name: String,
    records: SharedRecords,
    frame: Frame,
    current_index: Option<usize>,
    form_error_latched: bool,
    modal_result: Option<DialogResult>,
}

impl Window {
    /// Reimplements Ghidra function `FUN_01439620` at `0x01439620`.
    ///
    /// The assignment supplies the parameter name and current value. A name
    /// match loads the existing caller-owned record; otherwise the form uses
    /// 80 and 120 percent defaults and stays in add mode.
    #[must_use]
    pub fn new(assignment: &str, records: SharedRecords) -> Self {
        let (parameter_name, current_value) = parse_assignment(assignment);
        let current_index = records
            .borrow()
            .iter()
            .position(|record| record.parameter_name == parameter_name);
        let record = current_index.map_or_else(
            || ParameterStepRecord::defaults(parameter_name.clone(), current_value),
            |index| records.borrow()[index].clone(),
        );
        Self {
            parameter_name,
            records,
            frame: Frame::new(record),
            current_index,
            form_error_latched: false,
            modal_result: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Frame(message) => self.frame.update(message),
            Message::Accept => {
                let _ = self.accept();
            }
            Message::Remove => self.remove(),
        }
        Task::none()
    }

    /// Reimplements Ghidra function `FUN_014393f0` at `0x014393F0`.
    ///
    /// It validates the frame and changes no collection data on error. Valid
    /// input appends a new record or overwrites the matching record. Empty List
    /// mode is stored as Linear, and non-List records release old list data.
    #[must_use]
    pub fn accept(&mut self) -> bool {
        let mut record = self.frame.read_and_validate();
        self.form_error_latched = self.frame.has_error();
        if self.form_error_latched {
            self.modal_result = None;
            return false;
        }
        record.parameter_name.clone_from(&self.parameter_name);
        record.normalize_list_ownership();
        let mut records = self.records.borrow_mut();
        if let Some(index) = self.current_index {
            if let Some(target) = records.get_mut(index) {
                *target = record;
            }
        } else {
            records.push(record);
            self.current_index = records.len().checked_sub(1);
        }
        self.modal_result = Some(DialogResult::Accepted);
        true
    }

    /// Reimplements Ghidra function `FUN_01439600` at `0x01439600`.
    #[must_use]
    pub const fn query_close(&mut self) -> bool {
        let can_close = !self.form_error_latched;
        self.frame.clear_error_latch();
        can_close
    }

    /// Reimplements Ghidra function `FUN_01439890` at `0x01439890`.
    pub fn remove(&mut self) {
        if let Some(index) = self.current_index.take()
            && index < self.records.borrow().len()
        {
            self.records.borrow_mut().remove(index);
        }
        self.modal_result = Some(DialogResult::Accepted);
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        container(
            column![
                text(TITLE).size(24),
                text(&self.parameter_name),
                self.frame.view().map(Message::Frame),
                row![
                    button("OK").on_press(Message::Accept),
                    button("Remove").on_press(Message::Remove),
                ]
                .spacing(6),
            ]
            .spacing(12),
        )
        .padding(16)
        .width(Length::Fill)
        .into()
    }
}

fn parse_number(value: &str) -> Option<f64> {
    value
        .trim()
        .parse::<f64>()
        .ok()
        .filter(|number| number.is_finite())
}

fn parse_assignment(assignment: &str) -> (String, f64) {
    assignment.split_once('=').map_or_else(
        || (assignment.trim().to_owned(), 0.0),
        |(name, value)| {
            (
                name.trim().to_owned(),
                parse_number(value).unwrap_or_default(),
            )
        },
    )
}

#[cfg(test)]
mod tests {
    use std::cell::RefCell;
    use std::rc::Rc;

    use tiara_core::parameter_stepping::{ParameterStepRecord, SweepMode};

    use super::{DialogResult, Frame, FrameMessage, Window};
    use crate::parameter_step_list_editor;

    #[test]
    fn frame_latches_only_the_first_validation_error() {
        let mut frame = Frame::new(ParameterStepRecord::defaults("R".to_owned(), 10.0));
        frame.update(FrameMessage::StartChanged("invalid".to_owned()));
        frame.update(FrameMessage::EndChanged("invalid".to_owned()));
        let _ = frame.read_and_validate();
        assert!(frame.has_error());
        assert_eq!(frame.last_error.as_deref(), Some("Invalid start value"));
    }

    #[test]
    fn sweep_mode_controls_list_button_and_range_rules() {
        let mut frame = Frame::new(ParameterStepRecord::defaults("R".to_owned(), 10.0));
        frame.select_sweep_mode(SweepMode::List);
        assert!(frame.list_button_enabled());
        frame.update(FrameMessage::StartChanged("0".to_owned()));
        frame.update(FrameMessage::EndChanged("0".to_owned()));
        let _ = frame.read_and_validate();
        assert!(!frame.has_error());
        frame.select_sweep_mode(SweepMode::Logarithmic);
        let _ = frame.read_and_validate();
        assert!(frame.has_error());
    }

    #[test]
    fn accepted_list_editor_copies_values_and_count() {
        let mut frame = Frame::new(ParameterStepRecord::defaults("R".to_owned(), 10.0));
        frame.open_list_editor();
        frame.update(FrameMessage::ListEditor(
            parameter_step_list_editor::Message::Accept,
        ));
        frame.close_list_editor(DialogResult::Accepted);
        assert_eq!(frame.working_record.list_values.len(), 3);
        assert_eq!(frame.working_record.cases, 3);
    }

    #[test]
    fn form_loads_existing_record_by_parameter_name() {
        let mut existing = ParameterStepRecord::defaults("R1".to_owned(), 100.0);
        existing.cases = 7;
        let records = Rc::new(RefCell::new(vec![existing]));
        let window = Window::new("R1=120", records);
        assert_eq!(window.current_index, Some(0));
        assert_eq!(window.frame.working_record.cases, 7);
    }

    #[test]
    fn invalid_frame_does_not_change_collection_and_vetoes_close() {
        let records = Rc::new(RefCell::new(Vec::new()));
        let mut window = Window::new("R1=100", Rc::clone(&records));
        window
            .frame
            .update(FrameMessage::StartChanged("100".to_owned()));
        window
            .frame
            .update(FrameMessage::EndChanged("100".to_owned()));
        assert!(!window.accept());
        assert!(records.borrow().is_empty());
        assert!(!window.query_close());
    }

    #[test]
    fn add_update_and_remove_change_the_caller_collection() {
        let records = Rc::new(RefCell::new(Vec::new()));
        let mut window = Window::new("R1=100", Rc::clone(&records));
        assert!(window.accept());
        assert_eq!(records.borrow().len(), 1);
        window
            .frame
            .update(FrameMessage::CasesChanged("4".to_owned()));
        assert!(window.accept());
        assert_eq!(records.borrow()[0].cases, 4);
        window.remove();
        assert!(records.borrow().is_empty());
    }

    #[test]
    fn list_without_values_is_stored_as_linear() {
        let records = Rc::new(RefCell::new(Vec::new()));
        let mut window = Window::new("R1=100", Rc::clone(&records));
        window.frame.select_sweep_mode(SweepMode::List);
        assert!(window.accept());
        assert_eq!(records.borrow()[0].sweep_mode, SweepMode::Linear);
    }
}
