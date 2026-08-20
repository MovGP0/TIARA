use std::cell::RefCell;
use std::rc::Rc;

use iced::widget::{button, column, container, pick_list, row, text, text_input};
use iced::{Element, Length};
use tiara_core::goal_functions::{DcGoalKind, DcGoalRecord};

pub const TITLE: &str = "DC Goal Functions";
pub type SharedRecords = Rc<RefCell<Vec<DcGoalRecord>>>;

#[derive(Debug, Clone)]
pub enum Message {
    KindSelected(DcGoalKind),
    ValueChanged(String),
    ToleranceChanged(String),
    NumericError(String),
    Ok,
}

#[derive(Debug, Clone)]
pub struct Window {
    records: SharedRecords,
    kind: DcGoalKind,
    value: String,
    tolerance_percent: String,
    close_blocked: bool,
    last_error: Option<String>,
}

impl Window {
    /// Reimplements Ghidra function `FUN_013eb320` at `0x013EB320`.
    ///
    /// The iced window stores the caller-managed list. It does not own or
    /// clone a separate result list.
    #[must_use]
    pub fn new(records: SharedRecords) -> Self {
        let mut window = Self {
            records,
            kind: DcGoalKind::Value,
            value: "0".to_owned(),
            tolerance_percent: "5".to_owned(),
            close_blocked: false,
            last_error: None,
        };
        window.load_existing_record();
        window
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::KindSelected(kind) => self.kind = kind,
            Message::ValueChanged(value) => self.value = value,
            Message::ToleranceChanged(value) => self.tolerance_percent = value,
            Message::NumericError(message) => self.report_numeric_error(message),
            Message::Ok => {
                self.replace_record();
            }
        }
    }

    /// Reimplements Ghidra function `FUN_013eb440` at `0x013EB440`.
    ///
    /// An empty list selects Value. Existing records are scanned in order, so
    /// the last valid record supplies the displayed kind and Value fields.
    pub fn load_existing_record(&mut self) {
        self.kind = DcGoalKind::Value;
        let existing_records = self.records.borrow().clone();
        for record in existing_records {
            self.kind = record.kind;
            if record.kind == DcGoalKind::Value {
                self.value = record.value.to_string();
                self.tolerance_percent = record.tolerance_percent.to_string();
            }
        }
    }

    /// Reimplements Ghidra function `FUN_013eb510` at `0x013EB510`.
    ///
    /// It clears the caller-managed list before it reads Value inputs. Minimum
    /// and Maximum append a record with zero numeric fields. A Value parse
    /// failure leaves the cleared list visible and sets the close guard.
    pub fn replace_record(&mut self) {
        self.records.borrow_mut().clear();
        self.last_error = None;

        let (value, tolerance_percent) = if self.kind == DcGoalKind::Value {
            let Some(value) = parse_number(&self.value) else {
                self.report_numeric_error("Invalid DC goal value".to_owned());
                return;
            };
            let Some(tolerance) = parse_number(&self.tolerance_percent) else {
                self.report_numeric_error("Invalid DC goal tolerance".to_owned());
                return;
            };
            (value, tolerance)
        } else {
            (0.0, 0.0)
        };

        self.records
            .borrow_mut()
            .push(DcGoalRecord::new(self.kind, value, tolerance_percent));
    }

    /// Reimplements Ghidra function `FUN_013eb600` at `0x013EB600`.
    ///
    /// It routes an iced numeric-input error to the dialog's first-error gate.
    pub fn report_numeric_error(&mut self, message: String) {
        if !self.close_blocked {
            self.last_error = Some(message);
        }
        self.close_blocked = true;
    }

    /// Reimplements Ghidra function `FUN_013eb620` at `0x013EB620`.
    ///
    /// One close request is rejected when the numeric-error flag is set. The
    /// method clears the flag before it returns.
    pub const fn query_close(&mut self) -> bool {
        let can_close = !self.close_blocked;
        self.close_blocked = false;
        can_close
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let numeric_fields: Element<'_, Message> = if self.kind == DcGoalKind::Value {
            row![
                text_input("Value", &self.value).on_input(Message::ValueChanged),
                text_input("Tol. [%]", &self.tolerance_percent).on_input(Message::ToleranceChanged),
            ]
            .spacing(8)
            .into()
        } else {
            text("Minimum and Maximum do not use numeric parameters.").into()
        };

        container(
            column![
                text(TITLE).size(24),
                pick_list(DcGoalKind::ALL, Some(self.kind), Message::KindSelected),
                numeric_fields,
                self.last_error.as_ref().map_or_else(
                    || text(""),
                    |error| text(error).style(iced::widget::text::danger)
                ),
                button("OK").on_press(Message::Ok),
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
        .filter(|number| number.is_finite() && number.abs() <= 1.0e50)
}

#[cfg(test)]
mod tests {
    use std::cell::RefCell;
    use std::rc::Rc;

    use tiara_core::goal_functions::{DcGoalKind, DcGoalRecord};

    use super::{Message, Window};

    #[test]
    fn constructor_loads_the_last_existing_record() {
        let records = Rc::new(RefCell::new(vec![
            DcGoalRecord::new(DcGoalKind::Minimum, 0.0, 0.0),
            DcGoalRecord::new(DcGoalKind::Value, 12.0, 3.0),
        ]));

        let window = Window::new(records);

        assert_eq!(window.kind, DcGoalKind::Value);
        assert_eq!(window.value, "12");
        assert_eq!(window.tolerance_percent, "3");
    }

    #[test]
    fn iced_update_replaces_the_caller_shared_record() {
        let records = Rc::new(RefCell::new(vec![DcGoalRecord::new(
            DcGoalKind::Value,
            10.0,
            5.0,
        )]));
        let mut window = Window::new(Rc::clone(&records));

        window.update(Message::KindSelected(DcGoalKind::Maximum));
        window.update(Message::ValueChanged("not parsed".to_owned()));
        window.update(Message::Ok);

        assert_eq!(
            records.borrow().as_slice(),
            &[DcGoalRecord::new(DcGoalKind::Maximum, 0.0, 0.0)]
        );
    }

    #[test]
    fn value_parse_failure_leaves_the_list_cleared_and_blocks_one_close() {
        let records = Rc::new(RefCell::new(vec![DcGoalRecord::new(
            DcGoalKind::Minimum,
            0.0,
            0.0,
        )]));
        let mut window = Window::new(Rc::clone(&records));

        window.update(Message::KindSelected(DcGoalKind::Value));
        window.update(Message::ValueChanged("invalid".to_owned()));
        window.update(Message::Ok);

        assert!(records.borrow().is_empty());
        assert!(!window.query_close());
        assert!(window.query_close());
    }

    #[test]
    fn numeric_error_update_keeps_only_the_first_message() {
        let records = Rc::new(RefCell::new(Vec::new()));
        let mut window = Window::new(records);

        window.update(Message::NumericError("first".to_owned()));
        window.update(Message::NumericError("second".to_owned()));

        assert_eq!(window.last_error.as_deref(), Some("first"));
    }
}
