use std::cell::RefCell;
use std::rc::Rc;

use iced::widget::{button, checkbox, column, container, pick_list, row, text, text_input};
use iced::{Element, Length};
use tiara_core::goal_functions::{AcGoalKind, AcGoalRecord, AcGoalUnit};

pub const TITLE: &str = "AC Goal Functions";
const UNITS: [AcGoalUnit; 2] = [AcGoalUnit::Decibels, AcGoalUnit::Volts];

pub type SharedRecords = Rc<RefCell<Vec<AcGoalRecord>>>;

#[derive(Debug, Clone, PartialEq, Eq)]
struct GoalEdits {
    checked: bool,
    values: [String; 3],
    unit: AcGoalUnit,
}

impl Default for GoalEdits {
    fn default() -> Self {
        Self {
            checked: false,
            values: std::array::from_fn(|_| "0".to_owned()),
            unit: AcGoalUnit::Decibels,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    Checked(AcGoalKind, bool),
    ValueChanged(AcGoalKind, usize, String),
    UnitSelected(AcGoalKind, AcGoalUnit),
    Ok,
}

#[derive(Debug, Clone)]
pub struct Window {
    records: SharedRecords,
    edits: [GoalEdits; 6],
    close_blocked: bool,
    last_error: Option<String>,
}

impl Window {
    /// Reimplements Ghidra function `FUN_013ea240` at `0x013EA240`.
    ///
    /// The window keeps the caller-supplied record collection. It does not
    /// make a private result copy. This is the iced state adapter for the
    /// recovered modal form constructor.
    #[must_use]
    pub fn new(records: SharedRecords) -> Self {
        let mut edits: [GoalEdits; 6] = std::array::from_fn(|_| GoalEdits::default());
        let existing_records = records.borrow().clone();
        for record in existing_records {
            let edit = &mut edits[record.kind.index()];
            edit.checked = true;
            edit.unit = record.unit;
            for (target, value) in edit.values.iter_mut().zip(record.values) {
                *target = value.to_string();
            }
        }

        Self {
            records,
            edits,
            close_blocked: false,
            last_error: None,
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::Checked(kind, checked) => self.edits[kind.index()].checked = checked,
            Message::ValueChanged(kind, index, value) => {
                if let Some(target) = self.edits[kind.index()].values.get_mut(index) {
                    *target = value;
                }
            }
            Message::UnitSelected(kind, unit) => self.edits[kind.index()].unit = unit,
            Message::Ok => {
                self.rebuild_records();
            }
        }
    }

    /// Reimplements Ghidra function `FUN_013ea690` at `0x013EA690`.
    ///
    /// It destructively clears the shared list, adds one record for each
    /// selected AC goal, and sets the close guard for invalid numeric input or
    /// a non-positive primary value on a frequency goal.
    pub fn rebuild_records(&mut self) {
        self.records.borrow_mut().clear();
        self.last_error = None;

        for kind in AcGoalKind::ALL {
            let edit = self.edits[kind.index()].clone();
            if !edit.checked {
                continue;
            }

            let mut values = [0.0; 5];
            for (index, value) in edit.values.iter().take(kind.parameter_count()).enumerate() {
                match parse_number(value) {
                    Some(parsed) => values[index] = parsed,
                    None => self.report_error(format!("Invalid {kind} value")),
                }
            }
            if kind.requires_positive_primary() && values[0] <= 0.0 {
                self.report_error(format!("{kind} must be greater than zero"));
            }

            self.records
                .borrow_mut()
                .push(AcGoalRecord::new(kind, values, edit.unit));
        }
    }

    /// Reimplements Ghidra function `FUN_013eaab0` at `0x013EAAB0`.
    ///
    /// One close request is rejected after validation reports an error. The
    /// guard then resets so corrected input can be checked again.
    pub const fn query_close(&mut self) -> bool {
        let can_close = !self.close_blocked;
        self.close_blocked = false;
        can_close
    }

    fn report_error(&mut self, message: String) {
        if !self.close_blocked {
            self.last_error = Some(message);
        }
        self.close_blocked = true;
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut goals = column![text(TITLE).size(24)].spacing(10);
        for kind in AcGoalKind::ALL {
            let edit = &self.edits[kind.index()];
            let mut fields = row![
                checkbox(kind.to_string(), edit.checked)
                    .on_toggle(move |checked| Message::Checked(kind, checked))
            ]
            .spacing(8);
            for index in 0..kind.parameter_count() {
                fields = fields.push(
                    text_input("0", &edit.values[index])
                        .on_input(move |value| Message::ValueChanged(kind, index, value))
                        .width(Length::FillPortion(2)),
                );
            }
            fields = fields.push(
                pick_list(UNITS, Some(edit.unit), move |unit| {
                    Message::UnitSelected(kind, unit)
                })
                .width(Length::Shrink),
            );
            goals = goals.push(fields);
        }

        goals = goals.push(self.last_error.as_ref().map_or_else(
            || text(""),
            |error| text(error).style(iced::widget::text::danger),
        ));
        goals = goals.push(button("OK").on_press(Message::Ok));

        container(goals).padding(16).width(Length::Fill).into()
    }
}

fn parse_number(value: &str) -> Option<f64> {
    value
        .trim()
        .parse::<f64>()
        .ok()
        .filter(|number| number.is_finite() && number.abs() <= 1.0e50)
}

#[cfg(test)]
mod tests {
    use std::cell::RefCell;
    use std::rc::Rc;

    use tiara_core::goal_functions::{AcGoalKind, AcGoalRecord, AcGoalUnit};

    use super::{Message, Window};

    #[test]
    fn update_rebuilds_the_caller_shared_record_list() {
        let records = Rc::new(RefCell::new(vec![AcGoalRecord::new(
            AcGoalKind::Minimum,
            [7.0, 1.0, 0.0, 0.0, 0.0],
            AcGoalUnit::Volts,
        )]));
        let mut window = Window::new(Rc::clone(&records));

        window.update(Message::Checked(AcGoalKind::Minimum, false));
        window.update(Message::Checked(AcGoalKind::CenterFrequency, true));
        window.update(Message::ValueChanged(
            AcGoalKind::CenterFrequency,
            0,
            "1000".to_owned(),
        ));
        window.update(Message::UnitSelected(
            AcGoalKind::CenterFrequency,
            AcGoalUnit::Decibels,
        ));
        window.update(Message::Ok);

        let records = records.borrow();
        assert_eq!(records.len(), 1);
        assert_eq!(records[0].kind, AcGoalKind::CenterFrequency);
        assert!((records[0].values[0] - 1000.0).abs() <= f64::EPSILON);
    }

    #[test]
    fn invalid_frequency_value_blocks_one_close_request() {
        let records = Rc::new(RefCell::new(Vec::new()));
        let mut window = Window::new(records);

        window.update(Message::Checked(AcGoalKind::LowPass, true));
        window.update(Message::ValueChanged(
            AcGoalKind::LowPass,
            0,
            "0".to_owned(),
        ));
        window.update(Message::Ok);

        assert!(!window.query_close());
        assert!(window.query_close());
    }

    #[test]
    fn no_selection_clears_the_shared_list() {
        let records = Rc::new(RefCell::new(vec![AcGoalRecord::new(
            AcGoalKind::Maximum,
            [1.0; 5],
            AcGoalUnit::Decibels,
        )]));
        let mut window = Window::new(Rc::clone(&records));

        window.update(Message::Checked(AcGoalKind::Maximum, false));
        window.update(Message::Ok);

        assert!(records.borrow().is_empty());
    }
}
