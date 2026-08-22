use std::cell::RefCell;
use std::rc::Rc;

use iced::widget::{button, column, container, row, scrollable, text, text_input};
use iced::{Element, Length};

pub const TITLE: &str = "Parameter step list";
pub const TEMPERATURE_TITLE: &str = "Temperature step list";
pub const MAXIMUM_VALUES: usize = 1_000;
pub type SharedValues = Rc<RefCell<Vec<f64>>>;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum EditorMode {
    #[default]
    Parameter,
    Temperature,
}

#[derive(Debug, Clone)]
pub enum Message {
    ValueChanged(usize, String),
    AddNew,
    RemoveLast,
    Clear,
    Accept,
}

#[derive(Debug)]
pub struct Window {
    backing_values: SharedValues,
    working_values: Vec<f64>,
    edits: Vec<String>,
    output_count: usize,
    mode: EditorMode,
    title: &'static str,
}

impl Window {
    /// Reimplements Ghidra function `FUN_014375b0` at `0x014375B0`.
    ///
    /// A nonempty caller list initializes the working grid. An empty list uses
    /// the supplied start, midpoint, and end values.
    #[must_use]
    pub fn new(backing_values: SharedValues, start: f64, end: f64) -> Self {
        let supplied = backing_values.borrow().clone();
        let working_values = if supplied.is_empty() {
            vec![start, start + (end - start) / 2.0, end]
        } else {
            supplied
        };
        let edits = working_values.iter().map(ToString::to_string).collect();
        Self {
            backing_values,
            output_count: working_values.len(),
            working_values,
            edits,
            mode: EditorMode::Parameter,
            title: TITLE,
        }
    }

    pub const fn set_mode(&mut self, mode: EditorMode) {
        self.mode = mode;
    }

    /// Selects the form caption for parameter or temperature list mode.
    ///
    /// Ports Ghidra function `FUN_01437b50` at `0x01437B50`, recovered as
    /// `TParStepListEditor.FormActivate`. The temperature owner sets the mode
    /// byte before showing the shared editor; the parameter owner leaves it
    /// clear. Activation changes only the caption.
    pub const fn activate(&mut self) {
        self.title = match self.mode {
            EditorMode::Parameter => TITLE,
            EditorMode::Temperature => TEMPERATURE_TITLE,
        };
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::ValueChanged(index, value) => {
                if let Some(edit) = self.edits.get_mut(index) {
                    *edit = value;
                }
            }
            Message::AddNew => self.add_generated_value(),
            Message::RemoveLast => {
                let _ = self.remove_last();
            }
            Message::Clear => self.clear(),
            Message::Accept => self.rebuild_backing_list(),
        }
    }

    /// Reimplements Ghidra function `FUN_014377e0` at `0x014377E0`.
    ///
    /// It attempts every active text commit, then rebuilds the caller list and
    /// records the staged count. A later close query applies the two-row rule.
    pub fn rebuild_backing_list(&mut self) {
        self.commit_grid_edits();
        self.backing_values
            .borrow_mut()
            .clone_from(&self.working_values);
        self.output_count = self.working_values.len();
    }

    /// Reimplements Ghidra function `FUN_01437880` at `0x01437880`.
    pub fn add_generated_value(&mut self) {
        if self.working_values.len() >= MAXIMUM_VALUES {
            return;
        }
        self.commit_grid_edits();
        let value = self
            .working_values
            .last()
            .map_or(1.0, |previous| previous * 1.2);
        self.working_values.push(value);
        self.edits.push(value.to_string());
    }

    /// Reimplements Ghidra function `FUN_01437ab0` at `0x01437AB0`.
    #[must_use]
    pub fn remove_last(&mut self) -> bool {
        if self.working_values.len() <= 2 {
            return false;
        }
        self.working_values.pop();
        self.edits.pop();
        true
    }

    /// Reimplements Ghidra function `FUN_01437b20` at `0x01437B20`.
    pub fn clear(&mut self) {
        self.working_values.clear();
        self.edits.clear();
    }

    /// Reimplements Ghidra function `FUN_01437bf0` at `0x01437BF0`.
    #[must_use]
    pub fn query_close(&self) -> bool {
        self.working_values.len() > 1
    }

    fn commit_grid_edits(&mut self) {
        for (target, edit) in self.working_values.iter_mut().zip(&self.edits) {
            if let Some(value) = parse_number(edit) {
                *target = value;
            }
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut values = column![text(self.title).size(24)].spacing(6);
        for (index, value) in self.edits.iter().enumerate() {
            values = values.push(
                row![
                    text(format!("Parameter #{}", index + 1)).width(Length::FillPortion(2)),
                    text_input("0", value)
                        .on_input(move |value| Message::ValueChanged(index, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8),
            );
        }
        container(column![
            scrollable(values).height(Length::Fill),
            row![
                button("Add new").on_press(Message::AddNew),
                button("Remove last").on_press(Message::RemoveLast),
                button("Clear").on_press(Message::Clear),
                button("OK").on_press(Message::Accept),
            ]
            .spacing(6),
        ])
        .padding(16)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }

    #[must_use]
    pub fn working_values(&self) -> &[f64] {
        &self.working_values
    }

    #[must_use]
    pub const fn output_count(&self) -> usize {
        self.output_count
    }

    #[must_use]
    pub const fn title(&self) -> &str {
        self.title
    }
}

fn parse_number(value: &str) -> Option<f64> {
    value
        .trim()
        .parse::<f64>()
        .ok()
        .filter(|number| number.is_finite())
}

#[cfg(test)]
mod tests {
    use std::cell::RefCell;
    use std::rc::Rc;

    use super::{EditorMode, MAXIMUM_VALUES, Message, TEMPERATURE_TITLE, TITLE, Window};

    #[test]
    fn empty_input_builds_start_midpoint_and_end() {
        let window = Window::new(Rc::new(RefCell::new(Vec::new())), 2.0, 6.0);
        assert_eq!(window.working_values(), &[2.0, 4.0, 6.0]);
    }

    #[test]
    fn add_uses_one_or_twenty_percent_growth() {
        let mut empty = Window::new(Rc::new(RefCell::new(Vec::new())), 0.0, 0.0);
        empty.clear();
        empty.add_generated_value();
        assert_eq!(empty.working_values(), &[1.0]);
        empty.add_generated_value();
        assert!((empty.working_values()[1] - 1.2).abs() <= f64::EPSILON);
    }

    #[test]
    fn add_stops_at_recovered_capacity() {
        let values = Rc::new(RefCell::new(vec![1.0; MAXIMUM_VALUES]));
        let mut window = Window::new(values, 0.0, 1.0);
        window.add_generated_value();
        assert_eq!(window.working_values().len(), MAXIMUM_VALUES);
    }

    #[test]
    fn remove_keeps_two_value_minimum_but_clear_can_empty_grid() {
        let values = Rc::new(RefCell::new(vec![1.0, 2.0, 3.0]));
        let mut window = Window::new(values, 0.0, 1.0);
        assert!(window.remove_last());
        assert!(!window.remove_last());
        window.update(Message::Clear);
        assert!(window.working_values().is_empty());
    }

    #[test]
    fn accept_rebuilds_before_close_query_checks_minimum() {
        let values = Rc::new(RefCell::new(vec![1.0, 2.0]));
        let mut window = Window::new(Rc::clone(&values), 0.0, 1.0);
        window.clear();
        window.add_generated_value();
        window.update(Message::ValueChanged(0, "5".to_owned()));
        window.update(Message::Accept);
        assert_eq!(values.borrow().as_slice(), &[5.0]);
        assert_eq!(window.output_count(), 1);
        assert!(!window.query_close());
    }

    #[test]
    fn activation_selects_the_caption_for_the_owner_mode_only() {
        let mut window = Window::new(Rc::new(RefCell::new(Vec::new())), 2.0, 6.0);
        window.activate();
        assert_eq!(window.title(), TITLE);
        assert_eq!(window.working_values(), &[2.0, 4.0, 6.0]);

        window.set_mode(EditorMode::Temperature);
        window.activate();
        assert_eq!(window.title(), TEMPERATURE_TITLE);
        assert_eq!(window.working_values(), &[2.0, 4.0, 6.0]);
    }
}
