use std::cell::RefCell;
use std::fmt;
use std::rc::Rc;

use iced::widget::{button, checkbox, column, container, pick_list, row, text, text_input};
use iced::{Element, Length};
use tiara_core::goal_functions::{AcGoalKind, AcGoalRecord, AcGoalUnit};

pub const TITLE: &str = "AC Goal Functions";
const UNITS: [AcGoalUnit; 2] = [AcGoalUnit::Decibels, AcGoalUnit::Volts];

pub type SharedRecords = Rc<RefCell<Vec<AcGoalRecord>>>;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum UnitConversionError {
    InvalidTargetValue,
}

impl fmt::Display for UnitConversionError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str("Invalid AC goal target value")
    }
}

impl std::error::Error for UnitConversionError {}

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
    active_page: Option<AcGoalKind>,
    ok_enabled: bool,
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
        let selected_index = existing_records
            .first()
            .map_or(AcGoalKind::CenterFrequency.index(), |record| {
                record.kind.index()
            });
        for record in existing_records {
            let edit = &mut edits[record.kind.index()];
            edit.checked = true;
            edit.unit = record.unit;
            for (target, value) in edit.values.iter_mut().zip(record.values) {
                *target = value.to_string();
            }
        }

        let mut window = Self {
            records,
            edits,
            active_page: None,
            ok_enabled: false,
            close_blocked: false,
            last_error: None,
        };
        window.synchronize_checklist_click(Some(selected_index));
        window
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::Checked(kind, checked) => {
                self.edits[kind.index()].checked = checked;
                self.synchronize_checklist_click(Some(kind.index()));
            }
            Message::ValueChanged(kind, index, value) => {
                if let Some(target) = self.edits[kind.index()].values.get_mut(index) {
                    *target = value;
                }
            }
            Message::UnitSelected(kind, unit) => {
                if let Err(error) = self.convert_target_unit(kind, unit) {
                    self.report_error(error.to_string());
                }
            }
            Message::Ok => {
                self.rebuild_records();
            }
        }
    }

    /// Reimplements Ghidra function `FUN_013ea360` at `0x013EA360`.
    ///
    /// A valid selected checklist index activates the parameter page with the
    /// same index. An invalid selection clears the active page. The OK state
    /// depends on whether any goal is checked, not on the selected row.
    pub fn synchronize_checklist_click(&mut self, selected_index: Option<usize>) {
        self.active_page = selected_index
            .and_then(|index| AcGoalKind::ALL.get(index))
            .copied();
        self.ok_enabled = self.edits.iter().any(|edit| edit.checked);
    }

    /// Reimplements Ghidra function `FUN_013ea980` at `0x013EA980`.
    ///
    /// Selects the tag-paired target edit for the goal page and converts its
    /// current value to dB or linear volts. The four frequency goals use their
    /// second edit; Maximum and Minimum use their first edit. The radio state
    /// is updated before numeric validation, as it is by the VCL control.
    ///
    /// # Errors
    ///
    /// Returns an error when the target edit does not contain a finite value
    /// in the recovered numeric range. The recovered handler has no local
    /// conversion-error recovery.
    pub fn convert_target_unit(
        &mut self,
        kind: AcGoalKind,
        unit: AcGoalUnit,
    ) -> Result<f64, UnitConversionError> {
        let edit = &mut self.edits[kind.index()];
        edit.unit = unit;
        let target_index = target_value_index(kind);
        let value = parse_number(&edit.values[target_index])
            .ok_or(UnitConversionError::InvalidTargetValue)?;
        let converted = match unit {
            AcGoalUnit::Decibels if value > 0.0 => 20.0 * value.log10(),
            AcGoalUnit::Decibels => -100.0,
            AcGoalUnit::Volts => ((value / 20.0) * std::f64::consts::LN_10)
                .clamp(-300.0, 300.0)
                .exp(),
        };
        edit.values[target_index] = converted.to_string();
        Ok(converted)
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
        let mut checklist = column![text(TITLE).size(24)].spacing(10);
        for kind in AcGoalKind::ALL {
            let edit = &self.edits[kind.index()];
            checklist = checklist.push(
                checkbox(kind.to_string(), edit.checked)
                    .on_toggle(move |checked| Message::Checked(kind, checked)),
            );
        }

        let parameters: Element<'_, Message> = self.active_page.map_or_else(
            || text("").into(),
            |kind| {
                let edit = &self.edits[kind.index()];
                let mut fields = row![].spacing(8);
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
                fields.into()
            },
        );

        let mut ok_button = button("OK");
        if self.ok_enabled {
            ok_button = ok_button.on_press(Message::Ok);
        }

        let mut goals = column![row![checklist, parameters].spacing(12)].spacing(10);

        goals = goals.push(self.last_error.as_ref().map_or_else(
            || text(""),
            |error| text(error).style(iced::widget::text::danger),
        ));
        goals = goals.push(ok_button);

        container(goals).padding(16).width(Length::Fill).into()
    }
}

const fn target_value_index(kind: AcGoalKind) -> usize {
    match kind {
        AcGoalKind::CenterFrequency
        | AcGoalKind::LowPass
        | AcGoalKind::BandPass
        | AcGoalKind::HighPass => 1,
        AcGoalKind::Maximum | AcGoalKind::Minimum => 0,
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

    use super::{Message, UnitConversionError, Window};

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

    #[test]
    fn checklist_click_selects_matching_page_and_enables_ok_from_any_check() {
        let records = Rc::new(RefCell::new(Vec::new()));
        let mut window = Window::new(records);

        window.synchronize_checklist_click(Some(AcGoalKind::BandPass.index()));
        assert_eq!(window.active_page, Some(AcGoalKind::BandPass));
        assert!(!window.ok_enabled);

        window.update(Message::Checked(AcGoalKind::Minimum, true));
        window.synchronize_checklist_click(Some(99));
        assert_eq!(window.active_page, None);
        assert!(window.ok_enabled);
    }

    #[test]
    fn shared_unit_handler_converts_the_tag_paired_target_edit() {
        let records = Rc::new(RefCell::new(Vec::new()));
        let mut window = Window::new(records);
        window.edits[AcGoalKind::BandPass.index()].values =
            ["100".to_owned(), "10".to_owned(), "5".to_owned()];

        let decibels = window
            .convert_target_unit(AcGoalKind::BandPass, AcGoalUnit::Decibels)
            .expect("linear target");
        assert!((decibels - 20.0).abs() <= f64::EPSILON);
        assert_eq!(
            window.edits[AcGoalKind::BandPass.index()].values,
            ["100", "20", "5"]
        );

        let volts = window
            .convert_target_unit(AcGoalKind::BandPass, AcGoalUnit::Volts)
            .expect("decibel target");
        assert!((volts - 10.0).abs() <= 1.0e-12);

        window.edits[AcGoalKind::BandPass.index()].values[1] = "1e50".to_owned();
        let saturated = window
            .convert_target_unit(AcGoalKind::BandPass, AcGoalUnit::Volts)
            .expect("extreme decibel target");
        assert!(saturated.is_finite());
        assert!((saturated - 300.0_f64.exp()).abs() <= f64::EPSILON);
    }

    #[test]
    fn decibel_conversion_uses_floor_and_invalid_text_is_reported() {
        let records = Rc::new(RefCell::new(Vec::new()));
        let mut window = Window::new(records);
        window.edits[AcGoalKind::Minimum.index()].values[0] = "0".to_owned();
        let floor = window
            .convert_target_unit(AcGoalKind::Minimum, AcGoalUnit::Decibels)
            .expect("zero target");
        assert!((floor + 100.0).abs() <= f64::EPSILON);

        window.edits[AcGoalKind::Minimum.index()].values[0] = "invalid".to_owned();
        assert_eq!(
            window.convert_target_unit(AcGoalKind::Minimum, AcGoalUnit::Volts),
            Err(UnitConversionError::InvalidTargetValue)
        );
        assert_eq!(
            window.edits[AcGoalKind::Minimum.index()].unit,
            AcGoalUnit::Volts
        );
    }
}
