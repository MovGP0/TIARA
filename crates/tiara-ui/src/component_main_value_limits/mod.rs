//! Component main-value limit editor state.
//!
//! `iced` supplies the window controls and message model. Rust-owned rows
//! replace the VCL string grid. [`LimitRecordFormatter`] preserves the host
//! serialization boundary because the recovered wrapper bytes are unknown.

use iced::widget::{Column, button, column, container, pick_list, row, text, text_input};
use iced::{Alignment, Element, Length};

pub const TITLE: &str = "Set Component Main-Value Limits";
pub const FORM_RESOURCE: &str = "frmSetCompMainValueLimits";

const FIXED_ROW_COUNT: usize = 1;
const MINIMUM_ROW_COUNT: usize = 2;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum GridColumn {
    Component,
    Minimum,
    Maximum,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct LimitGridRow {
    pub component: String,
    pub minimum: String,
    pub maximum: String,
}

impl LimitGridRow {
    fn header() -> Self {
        Self {
            component: "Component".to_owned(),
            minimum: "Minimum".to_owned(),
            maximum: "Maximum".to_owned(),
        }
    }

    fn set(&mut self, column: GridColumn, value: String) {
        match column {
            GridColumn::Component => self.component = value,
            GridColumn::Minimum => self.minimum = value,
            GridColumn::Maximum => self.maximum = value,
        }
    }

    fn trimmed_record(&self) -> LimitRecord {
        LimitRecord {
            component: self.component.trim().to_owned(),
            minimum: self.minimum.trim().to_owned(),
            maximum: self.maximum.trim().to_owned(),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LimitRecord {
    pub component: String,
    pub minimum: String,
    pub maximum: String,
}

impl LimitRecord {
    #[must_use]
    pub fn is_complete(&self) -> bool {
        !self.component.is_empty() && !self.minimum.is_empty() && !self.maximum.is_empty()
    }
}

pub trait LimitRecordFormatter {
    type Error;

    /// Encodes one complete component-limit record for the attached list.
    ///
    /// # Errors
    ///
    /// Returns a host formatting error when the record cannot be encoded.
    fn format(&mut self, record: &LimitRecord) -> Result<String, Self::Error>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    CellChanged {
        row: usize,
        column: GridColumn,
        value: String,
    },
    RowRemembered(usize),
    ComponentSelected(String),
    AddNew,
    RemoveLast,
    Clear,
    Accept,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    rows: Vec<LimitGridRow>,
    component_choices: Vec<String>,
    selected_component: Option<usize>,
    remembered_grid_row: usize,
    selector_visible: bool,
    attached_limits: Vec<String>,
    accept_requested: bool,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(Vec::new(), Vec::new())
    }
}

impl Window {
    #[must_use]
    pub fn new(component_choices: Vec<String>, attached_limits: Vec<String>) -> Self {
        Self {
            rows: vec![LimitGridRow::header(), LimitGridRow::default()],
            component_choices,
            selected_component: None,
            remembered_grid_row: 0,
            selector_visible: false,
            attached_limits,
            accept_requested: false,
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::CellChanged { row, column, value } => self.set_cell(row, column, value),
            Message::RowRemembered(row) => {
                if row >= FIXED_ROW_COUNT && row < self.rows.len() {
                    self.remembered_grid_row = row;
                    self.selector_visible = true;
                }
            }
            Message::ComponentSelected(component) => {
                self.selected_component = self
                    .component_choices
                    .iter()
                    .position(|candidate| candidate == &component);
            }
            Message::AddNew => self.add_new_row(),
            Message::RemoveLast => {
                self.remove_last_row();
            }
            Message::Clear => self.clear_rows(),
            Message::Accept => self.accept_requested = true,
        }
    }

    /// Ports Ghidra function `FUN_01c48530` at `0x01C48530`.
    ///
    /// The destination is cleared before any row is formatted. Complete rows
    /// are trimmed and appended in grid order. Incomplete rows are skipped and
    /// numeric text is not validated. A later formatter error leaves earlier
    /// appended records in the cleared destination.
    ///
    /// # Errors
    ///
    /// Returns the first host formatter error without restoring the old list.
    pub fn rebuild_attached_limits<F>(&mut self, formatter: &mut F) -> Result<(), F::Error>
    where
        F: LimitRecordFormatter,
    {
        self.attached_limits.clear();
        for row_index in FIXED_ROW_COUNT..self.rows.len() {
            let record = self.rows[row_index].trimmed_record();
            if record.is_complete() {
                self.attached_limits.push(formatter.format(&record)?);
            }
        }
        self.accept_requested = false;
        Ok(())
    }

    /// Ports Ghidra function `FUN_01c48760` at `0x01C48760`.
    ///
    /// A valid pending component choice is copied to the positive remembered
    /// row. One blank row is then appended in every case and the selector is
    /// hidden. The new row is not selected or initialized.
    pub fn add_new_row(&mut self) {
        if self.remembered_grid_row > 0
            && let (Some(component), Some(row)) = (
                self.selected_component
                    .and_then(|index| self.component_choices.get(index)),
                self.rows.get_mut(self.remembered_grid_row),
            )
        {
            component.clone_into(&mut row.component);
        }
        self.rows.push(LimitGridRow::default());
        self.selector_visible = false;
    }

    /// Ports Ghidra function `FUN_01c48860` at `0x01C48860`.
    ///
    /// The final data row is cleared before the row count decreases. Two rows
    /// are retained, so the last editable row is cleared but not removed. If
    /// no data row exists after the fixed rows, this is a complete no-op.
    pub fn remove_last_row(&mut self) -> bool {
        let Some(final_row) = self.rows.len().checked_sub(1) else {
            return false;
        };
        if final_row < FIXED_ROW_COUNT {
            return false;
        }

        self.rows[final_row] = LimitGridRow::default();
        let new_row_count = self.rows.len().saturating_sub(1).max(MINIMUM_ROW_COUNT);
        self.rows.truncate(new_row_count);
        self.selector_visible = false;
        true
    }

    /// Ports Ghidra function `FUN_01c489a0` at `0x01C489A0`.
    ///
    /// The grid returns to its two-row minimum, the selector is hidden, and
    /// each remaining data row is cleared. The attached list is unchanged.
    pub fn clear_rows(&mut self) {
        self.rows.truncate(MINIMUM_ROW_COUNT);
        self.rows
            .resize_with(MINIMUM_ROW_COUNT, LimitGridRow::default);
        self.selector_visible = false;
        for row in &mut self.rows[FIXED_ROW_COUNT..] {
            *row = LimitGridRow::default();
        }
    }

    fn set_cell(&mut self, row: usize, column: GridColumn, value: String) {
        if row >= FIXED_ROW_COUNT
            && let Some(grid_row) = self.rows.get_mut(row)
        {
            grid_row.set(column, value);
        }
    }

    #[must_use]
    pub fn rows(&self) -> &[LimitGridRow] {
        &self.rows
    }

    #[must_use]
    pub fn attached_limits(&self) -> &[String] {
        &self.attached_limits
    }

    #[must_use]
    pub const fn selector_visible(&self) -> bool {
        self.selector_visible
    }

    #[must_use]
    pub const fn remembered_grid_row(&self) -> usize {
        self.remembered_grid_row
    }

    #[must_use]
    pub const fn accept_requested(&self) -> bool {
        self.accept_requested
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut grid = Column::new().spacing(6);
        for (row_index, grid_row) in self.rows.iter().enumerate() {
            grid = grid.push(limit_row(grid_row, row_index));
        }

        let selected = self
            .selected_component
            .and_then(|index| self.component_choices.get(index))
            .cloned();
        let selector: Element<'_, Message> = if self.selector_visible {
            pick_list(
                self.component_choices.clone(),
                selected,
                Message::ComponentSelected,
            )
            .into()
        } else {
            text("").into()
        };
        let controls = row![
            button("Add New").on_press(Message::AddNew),
            button("Remove Last").on_press(Message::RemoveLast),
            button("Clear").on_press(Message::Clear),
            button("OK").on_press(Message::Accept),
        ]
        .spacing(8)
        .align_y(Alignment::Center);

        container(column![grid, selector, controls].spacing(10))
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

fn limit_row(grid_row: &LimitGridRow, row_index: usize) -> Element<'_, Message> {
    if row_index < FIXED_ROW_COUNT {
        return row![
            text(&grid_row.component).width(Length::FillPortion(2)),
            text(&grid_row.minimum).width(Length::FillPortion(1)),
            text(&grid_row.maximum).width(Length::FillPortion(1)),
        ]
        .spacing(8)
        .into();
    }

    row![
        text_input("", &grid_row.component)
            .on_input(move |value| Message::CellChanged {
                row: row_index,
                column: GridColumn::Component,
                value,
            })
            .width(Length::FillPortion(2)),
        text_input("", &grid_row.minimum)
            .on_input(move |value| Message::CellChanged {
                row: row_index,
                column: GridColumn::Minimum,
                value,
            })
            .width(Length::FillPortion(1)),
        text_input("", &grid_row.maximum)
            .on_input(move |value| Message::CellChanged {
                row: row_index,
                column: GridColumn::Maximum,
                value,
            })
            .width(Length::FillPortion(1)),
        button("Choose").on_press(Message::RowRemembered(row_index)),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
    .into()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Default)]
    struct Formatter {
        fail_on_call: Option<usize>,
        call_count: usize,
    }

    impl LimitRecordFormatter for Formatter {
        type Error = &'static str;

        fn format(&mut self, record: &LimitRecord) -> Result<String, Self::Error> {
            self.call_count += 1;
            if self.fail_on_call == Some(self.call_count) {
                return Err("format failure");
            }
            Ok(format!(
                "[{}]|{}|{}",
                record.component, record.minimum, record.maximum
            ))
        }
    }

    fn set_row(window: &mut Window, row: usize, component: &str, minimum: &str, maximum: &str) {
        window.update(Message::CellChanged {
            row,
            column: GridColumn::Component,
            value: component.to_owned(),
        });
        window.update(Message::CellChanged {
            row,
            column: GridColumn::Minimum,
            value: minimum.to_owned(),
        });
        window.update(Message::CellChanged {
            row,
            column: GridColumn::Maximum,
            value: maximum.to_owned(),
        });
    }

    #[test]
    fn accept_clears_old_values_trims_rows_and_skips_incomplete_text() -> Result<(), &'static str> {
        let mut window = Window::new(Vec::new(), vec!["old".to_owned()]);
        set_row(&mut window, 1, "  R  ", " 1k ", " 10k ");
        window.add_new_row();
        set_row(&mut window, 2, "C", "", "5");
        let mut formatter = Formatter::default();

        window.rebuild_attached_limits(&mut formatter)?;

        assert_eq!(window.attached_limits(), ["[R]|1k|10k"]);
        assert_eq!(formatter.call_count, 1);
        Ok(())
    }

    #[test]
    fn accept_keeps_partial_rebuild_when_a_later_formatter_call_fails() {
        let mut window = Window::new(Vec::new(), vec!["old".to_owned()]);
        set_row(&mut window, 1, "R", "1", "2");
        window.add_new_row();
        set_row(&mut window, 2, "C", "3", "4");
        let mut formatter = Formatter {
            fail_on_call: Some(2),
            ..Formatter::default()
        };

        let result = window.rebuild_attached_limits(&mut formatter);

        assert_eq!(result, Err("format failure"));
        assert_eq!(window.attached_limits(), ["[R]|1|2"]);
    }

    #[test]
    fn add_preserves_valid_pending_choice_then_always_appends_and_hides_selector() {
        let mut window = Window::new(vec!["R".to_owned(), "C".to_owned()], Vec::new());
        window.update(Message::RowRemembered(1));
        window.update(Message::ComponentSelected("C".to_owned()));

        window.update(Message::AddNew);

        assert_eq!(window.rows().len(), 3);
        assert_eq!(window.rows()[1].component, "C");
        assert_eq!(window.rows()[2], LimitGridRow::default());
        assert!(!window.selector_visible());

        window.update(Message::AddNew);
        assert_eq!(window.rows().len(), 4);
    }

    #[test]
    fn add_with_no_positive_remembered_row_does_not_copy_a_choice() {
        let mut window = Window::new(vec!["R".to_owned()], Vec::new());
        window.update(Message::ComponentSelected("R".to_owned()));

        window.add_new_row();

        assert!(window.rows()[1].component.is_empty());
        assert_eq!(window.rows().len(), 3);
    }

    #[test]
    fn remove_clears_final_row_and_keeps_two_row_minimum() {
        let mut window = Window::default();
        set_row(&mut window, 1, "R", "1", "2");
        window.update(Message::RowRemembered(1));

        assert!(window.remove_last_row());

        assert_eq!(window.rows().len(), MINIMUM_ROW_COUNT);
        assert_eq!(window.rows()[1], LimitGridRow::default());
        assert!(!window.selector_visible());
    }

    #[test]
    fn remove_targets_the_final_row_instead_of_the_remembered_row() {
        let mut window = Window::default();
        set_row(&mut window, 1, "first", "1", "2");
        window.add_new_row();
        set_row(&mut window, 2, "last", "3", "4");
        window.update(Message::RowRemembered(1));

        window.remove_last_row();

        assert_eq!(window.rows().len(), 2);
        assert_eq!(window.rows()[1].component, "first");
    }

    #[test]
    fn clear_resets_grid_but_does_not_change_attached_limits() {
        let mut window = Window::new(Vec::new(), vec!["keep".to_owned()]);
        set_row(&mut window, 1, "R", "1", "2");
        window.add_new_row();
        set_row(&mut window, 2, "C", "3", "4");

        window.update(Message::Clear);

        assert_eq!(window.rows().len(), MINIMUM_ROW_COUNT);
        assert_eq!(window.rows()[1], LimitGridRow::default());
        assert_eq!(window.attached_limits(), ["keep"]);
        assert!(!window.selector_visible());
    }

    #[test]
    fn accept_message_is_host_request_until_formatter_runs() -> Result<(), &'static str> {
        let mut window = Window::default();
        set_row(&mut window, 1, "R", "1", "2");
        window.update(Message::Accept);
        assert!(window.accept_requested());

        window.rebuild_attached_limits(&mut Formatter::default())?;

        assert!(!window.accept_requested());
        Ok(())
    }
}
