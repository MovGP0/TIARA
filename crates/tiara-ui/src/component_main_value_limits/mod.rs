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

/// The grid column the floating component combo edits.
pub const COMPONENT_COLUMN: usize = 0;

/// The recovered grid option bit that lets the grid edit its own cells.
pub const GRID_SELF_EDIT_OPTION: u32 = 0x400;

/// A cell rectangle the grid reports for its floating editor.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CellRect {
    pub left: i32,
    pub top: i32,
    pub width: i32,
    pub height: i32,
}

pub trait LimitsGridHost {
    /// The combo's selected entry, or `None` when it has no selection.
    fn combo_selection(&mut self) -> Option<String>;

    /// Writes one cell of the component column.
    fn set_component_cell(&mut self, row: usize, text: &str);

    /// Reads one cell of the component column.
    fn component_cell(&mut self, row: usize) -> String;

    /// The combo index whose text matches, or `None`.
    fn combo_index_of(&mut self, text: &str) -> Option<usize>;

    fn set_combo_index(&mut self, index: Option<usize>);

    fn set_combo_visible(&mut self, visible: bool);

    /// Places the combo over one cell.
    fn place_combo(&mut self, rect: CellRect);

    /// The rectangle of one component-column cell, in grid coordinates.
    fn component_cell_rect(&mut self, row: usize) -> CellRect;

    /// Turns the grid's own cell editing on or off.
    fn set_grid_self_editing(&mut self, enabled: bool);
}

/// Implements Ghidra function `FUN_01c488d0` at `0x01C488D0`.
///
/// Writes the combo's chosen component into the row the combo is covering.
///
/// The recovered guard needs both a combo selection and a covered row past the
/// header, so a combo that has never been used and a combo parked on the header
/// row both write nothing. The handler touches no other column.
pub fn commit_component_choice(covered_row: usize, host: &mut impl LimitsGridHost) -> bool {
    if covered_row == 0 {
        return false;
    }
    let Some(text) = host.combo_selection() else {
        return false;
    };
    host.set_component_cell(covered_row, &text);
    true
}

/// Implements Ghidra function `FUN_01c48d90` at `0x01C48D90`.
///
/// Hides the floating combo as soon as the grid scrolls, because the cell it
/// was covering has moved. The recovered handler neither commits the combo nor
/// clears its selection, so the value it held is still written when the
/// selection next moves.
pub fn hide_combo_on_scroll(host: &mut impl LimitsGridHost) {
    host.set_combo_visible(false);
}

/// Implements Ghidra function `FUN_01c48a60` at `0x01C48A60`.
///
/// Moves the floating component combo as the grid selection moves.
///
/// The previously covered row is committed first, so leaving a cell always
/// stores what the combo held. A target that is not a data row of the component
/// column hides the combo, hands editing back to the grid, and clears the combo
/// selection; a component-column data row instead selects the entry matching
/// that cell, takes editing away from the grid, positions the combo over the
/// cell, and shows it.
///
/// The covered row is remembered afterwards either way, which is what makes the
/// next move commit to the right row.
pub fn move_component_combo(
    covered_row: usize,
    column: usize,
    row: usize,
    fixed_rows: usize,
    host: &mut impl LimitsGridHost,
) -> bool {
    let _ = commit_component_choice(covered_row, host);

    let is_component_cell = row >= fixed_rows && column == COMPONENT_COLUMN;
    if is_component_cell {
        let text = host.component_cell(row);
        let index = host.combo_index_of(&text);
        host.set_combo_index(index);
        host.set_grid_self_editing(false);
        let rect = host.component_cell_rect(row);
        host.place_combo(CellRect {
            left: rect.left,
            top: rect.top,
            width: rect.width + 1,
            height: rect.height + 1,
        });
        host.set_combo_visible(true);
    } else {
        host.set_combo_visible(false);
        host.set_grid_self_editing(true);
        host.set_combo_index(None);
    }

    is_component_cell
}

pub trait LimitsEditHost {
    /// Remembers the text the grid is about to edit.
    fn remember_edit_text(&mut self, text: &str);

    /// Normalizes the text the user typed into a limit cell.
    fn normalize_limit_text(&mut self, text: &str) -> String;
}

/// Reports whether one cell is an editable limit cell.
#[must_use]
pub const fn is_limit_cell(column: usize, row: usize, fixed_rows: usize) -> bool {
    row >= fixed_rows && column > COMPONENT_COLUMN
}

/// Implements Ghidra function `FUN_01c48a20` at `0x01C48A20`.
///
/// Remembers a limit cell's current text when the grid starts editing it, so a
/// later rejection can restore it. Header rows and the component column are
/// skipped, because the component column is edited by the floating combo
/// instead.
pub fn remember_limit_edit(
    column: usize,
    row: usize,
    fixed_rows: usize,
    text: &str,
    host: &mut impl LimitsEditHost,
) -> bool {
    if !is_limit_cell(column, row, fixed_rows) {
        return false;
    }
    host.remember_edit_text(text);
    true
}

/// Implements Ghidra function `FUN_01c48d00` at `0x01C48D00`.
///
/// Normalizes what the user typed into a limit cell through the shared numeric
/// handler, and leaves header rows and the component column untouched for the
/// same reason as the edit-start handler.
pub fn normalize_limit_edit(
    column: usize,
    row: usize,
    fixed_rows: usize,
    text: &str,
    host: &mut impl LimitsEditHost,
) -> Option<String> {
    if !is_limit_cell(column, row, fixed_rows) {
        return None;
    }
    Some(host.normalize_limit_text(text))
}

#[cfg(test)]
mod grid_editor_tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum GridStep {
        Write(usize, String),
        ComboIndex(Option<usize>),
        Visible(bool),
        Place(CellRect),
        SelfEditing(bool),
    }

    #[derive(Debug, Default)]
    struct GridHost {
        selection: Option<String>,
        cells: Vec<String>,
        entries: Vec<String>,
        steps: Vec<GridStep>,
    }

    impl LimitsGridHost for GridHost {
        fn combo_selection(&mut self) -> Option<String> {
            self.selection.clone()
        }

        fn set_component_cell(&mut self, row: usize, text: &str) {
            self.steps.push(GridStep::Write(row, text.to_owned()));
        }

        fn component_cell(&mut self, row: usize) -> String {
            self.cells.get(row).cloned().unwrap_or_default()
        }

        fn combo_index_of(&mut self, text: &str) -> Option<usize> {
            self.entries.iter().position(|entry| entry == text)
        }

        fn set_combo_index(&mut self, index: Option<usize>) {
            self.steps.push(GridStep::ComboIndex(index));
        }

        fn set_combo_visible(&mut self, visible: bool) {
            self.steps.push(GridStep::Visible(visible));
        }

        fn place_combo(&mut self, rect: CellRect) {
            self.steps.push(GridStep::Place(rect));
        }

        fn component_cell_rect(&mut self, _row: usize) -> CellRect {
            CellRect {
                left: 10,
                top: 20,
                width: 80,
                height: 18,
            }
        }

        fn set_grid_self_editing(&mut self, enabled: bool) {
            self.steps.push(GridStep::SelfEditing(enabled));
        }
    }

    #[test]
    fn a_choice_is_written_only_with_a_selection_and_a_data_row() {
        let mut ready = GridHost {
            selection: Some("R1".to_owned()),
            ..GridHost::default()
        };
        assert!(commit_component_choice(2, &mut ready));
        assert_eq!(ready.steps, [GridStep::Write(2, "R1".to_owned())]);

        let mut header = GridHost {
            selection: Some("R1".to_owned()),
            ..GridHost::default()
        };
        assert!(!commit_component_choice(0, &mut header));
        assert!(header.steps.is_empty());

        let mut unused = GridHost::default();
        assert!(!commit_component_choice(2, &mut unused));
        assert!(unused.steps.is_empty());
    }

    #[test]
    fn scrolling_only_hides_the_combo() {
        let mut host = GridHost::default();

        hide_combo_on_scroll(&mut host);

        assert_eq!(host.steps, [GridStep::Visible(false)]);
    }

    #[test]
    fn moving_onto_a_component_cell_commits_then_positions_the_combo() {
        let mut host = GridHost {
            selection: Some("R1".to_owned()),
            cells: vec![String::new(), "C2".to_owned(), "R3".to_owned()],
            entries: vec!["R1".to_owned(), "C2".to_owned(), "R3".to_owned()],
            steps: Vec::new(),
        };

        assert!(move_component_combo(1, COMPONENT_COLUMN, 2, 1, &mut host));

        assert_eq!(
            host.steps,
            [
                GridStep::Write(1, "R1".to_owned()),
                GridStep::ComboIndex(Some(2)),
                GridStep::SelfEditing(false),
                GridStep::Place(CellRect {
                    left: 10,
                    top: 20,
                    width: 81,
                    height: 19,
                }),
                GridStep::Visible(true),
            ]
        );
    }

    #[test]
    fn moving_off_the_component_column_hands_editing_back_to_the_grid() {
        let mut host = GridHost {
            selection: Some("R1".to_owned()),
            steps: Vec::new(),
            ..GridHost::default()
        };

        assert!(!move_component_combo(1, 2, 3, 1, &mut host));

        assert_eq!(
            host.steps,
            [
                GridStep::Write(1, "R1".to_owned()),
                GridStep::Visible(false),
                GridStep::SelfEditing(true),
                GridStep::ComboIndex(None),
            ]
        );
    }

    #[test]
    fn a_header_row_of_the_component_column_also_hands_editing_back() {
        let mut host = GridHost::default();

        assert!(!move_component_combo(0, COMPONENT_COLUMN, 0, 1, &mut host));

        assert!(host.steps.contains(&GridStep::SelfEditing(true)));
    }

    #[derive(Debug, Default)]
    struct EditHost {
        remembered: Vec<String>,
        normalized: Vec<String>,
    }

    impl LimitsEditHost for EditHost {
        fn remember_edit_text(&mut self, text: &str) {
            self.remembered.push(text.to_owned());
        }

        fn normalize_limit_text(&mut self, text: &str) -> String {
            self.normalized.push(text.to_owned());
            format!("[{text}]")
        }
    }

    #[test]
    fn only_limit_cells_are_remembered_and_normalized() {
        let mut host = EditHost::default();

        assert!(remember_limit_edit(1, 2, 1, "10k", &mut host));
        assert!(!remember_limit_edit(
            COMPONENT_COLUMN,
            2,
            1,
            "R1",
            &mut host
        ));
        assert!(!remember_limit_edit(1, 0, 1, "Min", &mut host));

        assert_eq!(
            normalize_limit_edit(1, 2, 1, "22k", &mut host),
            Some("[22k]".to_owned())
        );
        assert_eq!(
            normalize_limit_edit(COMPONENT_COLUMN, 2, 1, "R1", &mut host),
            None
        );

        assert_eq!(host.remembered, ["10k".to_owned()]);
        assert_eq!(host.normalized, ["22k".to_owned()]);
    }
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
/// The resource string the limits grid's first heading comes from.
pub const LIMITS_NAME_HEADING_RESOURCE: u32 = 0x0429;

/// The localization keys the other two headings come from.
pub const LIMITS_MINIMUM_HEADING_KEY: &str = "frmCompMainValueLimits.Txt_Min";
/// The key for the maximum column's heading.
pub const LIMITS_MAXIMUM_HEADING_KEY: &str = "frmCompMainValueLimits.Txt_Max";

/// How many fields a saved limits line must have to be used.
///
/// Part of Ghidra function `FUN_01c48160` at `0x01C48160`.
///
/// A line that splits into anything else is passed over rather than
/// half-filled into the grid, so a truncated settings file loses whole rows
/// rather than producing rows with missing columns.
pub const LIMITS_FIELDS: usize = 3;

/// One row of the limits grid.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LimitsRow {
    /// The component's name.
    pub name: String,
    /// Its smallest allowed value.
    pub minimum: String,
    /// Its largest.
    pub maximum: String,
}

/// Turns the saved lines into grid rows, dropping any that do not have all
/// three fields.
///
/// Part of Ghidra function `FUN_01c48160` at `0x01C48160`.
#[must_use]
pub fn limits_rows(lines: &[String], delimiter: char) -> Vec<LimitsRow> {
    lines
        .iter()
        .filter_map(|line| {
            let fields: Vec<&str> = line.split(delimiter).collect();
            if fields.len() != LIMITS_FIELDS {
                return None;
            }
            Some(LimitsRow {
                name: fields[0].to_owned(),
                minimum: fields[1].to_owned(),
                maximum: fields[2].to_owned(),
            })
        })
        .collect()
}

/// How many data rows the grid is given.
///
/// Part of Ghidra function `FUN_01c48160` at `0x01C48160`.
///
/// The count comes from the saved lines rather than from the rows that
/// survived the split, and it never drops below one — a grid with no data
/// rows would have nowhere to type, so an empty settings file still leaves
/// one blank row.
#[must_use]
pub const fn limits_row_count(saved_lines: usize) -> usize {
    if saved_lines < 2 { 1 } else { saved_lines }
}

/// What building the limits dialog needs from the application.
pub trait ValueLimitsCreateHost {
    /// One heading from the resource strings.
    fn resource_string(&mut self, id: u32) -> String;

    /// One heading from the localization table, with its compiled-in
    /// fallback.
    fn localized(&mut self, key: &str) -> String;

    /// Writes the three headings.
    fn set_headings(&mut self, headings: [String; 3]);

    /// The saved limit lines, and the character they are split at.
    fn saved_limits(&mut self) -> (Vec<String>, char);

    /// Writes one row.
    fn set_row(&mut self, index: usize, row: &LimitsRow);

    /// Sizes the grid.
    fn set_row_count(&mut self, rows: usize);
}

/// Implements Ghidra function `FUN_01c48160` at `0x01C48160`.
///
/// Handles `frmSetCompMainValueLimits.OnCreate`.
///
/// Fills the limits grid from the saved settings.
///
/// The three headings come from two different places — the first from the
/// resource strings and the other two from the localization table with
/// compiled-in fallbacks — which is what lets the column that names a
/// component share its heading with other grids while the two value columns
/// are named for this dialog alone.
///
/// A saved line is used only when it splits into exactly three fields.
/// Anything else is passed over rather than half-filled, so a damaged
/// settings file loses whole rows instead of producing rows with missing
/// columns — and because the grid is still sized from the saved line count,
/// a dropped line leaves a blank row where it was rather than shifting the
/// rows below it up.
///
/// Returns the rows that were written.
pub fn create_value_limits(host: &mut impl ValueLimitsCreateHost) -> Vec<LimitsRow> {
    let headings = [
        host.resource_string(LIMITS_NAME_HEADING_RESOURCE),
        host.localized(LIMITS_MINIMUM_HEADING_KEY),
        host.localized(LIMITS_MAXIMUM_HEADING_KEY),
    ];
    host.set_headings(headings);

    let (lines, delimiter) = host.saved_limits();
    let rows = limits_rows(&lines, delimiter);
    for (index, row) in rows.iter().enumerate() {
        host.set_row(index, row);
    }

    host.set_row_count(limits_row_count(lines.len()));
    rows
}

#[cfg(test)]
mod value_limits_create_tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Dialog {
        lines: Vec<String>,
        headings: Option<[String; 3]>,
        rows: Vec<(usize, LimitsRow)>,
        row_count: Option<usize>,
    }

    impl ValueLimitsCreateHost for Dialog {
        fn resource_string(&mut self, id: u32) -> String {
            format!("res{id:#06x}")
        }

        fn localized(&mut self, key: &str) -> String {
            key.rsplit('_').next().unwrap_or(key).to_owned()
        }

        fn set_headings(&mut self, headings: [String; 3]) {
            self.headings = Some(headings);
        }

        fn saved_limits(&mut self) -> (Vec<String>, char) {
            (self.lines.clone(), '\u{ff}')
        }

        fn set_row(&mut self, index: usize, row: &LimitsRow) {
            self.rows.push((index, row.clone()));
        }

        fn set_row_count(&mut self, rows: usize) {
            self.row_count = Some(rows);
        }
    }

    fn line(name: &str, minimum: &str, maximum: &str) -> String {
        format!("{name}\u{ff}{minimum}\u{ff}{maximum}")
    }

    #[test]
    fn the_headings_come_from_two_different_places() {
        let mut host = Dialog::default();
        create_value_limits(&mut host);

        assert_eq!(
            host.headings,
            Some(["res0x0429".to_owned(), "Min".to_owned(), "Max".to_owned(),])
        );
    }

    #[test]
    fn a_three_field_line_becomes_a_row() {
        let mut host = Dialog {
            lines: vec![line("R", "1", "1M")],
            ..Dialog::default()
        };

        let rows = create_value_limits(&mut host);

        assert_eq!(
            rows,
            [LimitsRow {
                name: "R".to_owned(),
                minimum: "1".to_owned(),
                maximum: "1M".to_owned(),
            }]
        );
    }

    #[test]
    fn a_line_with_the_wrong_number_of_fields_is_passed_over_whole() {
        let mut host = Dialog {
            lines: vec![
                line("R", "1", "1M"),
                "C\u{ff}1p".to_owned(),
                "L\u{ff}1n\u{ff}1m\u{ff}extra".to_owned(),
                line("D", "0", "5"),
            ],
            ..Dialog::default()
        };

        let rows = create_value_limits(&mut host);

        assert_eq!(rows.len(), 2);
        assert_eq!(rows[0].name, "R");
        assert_eq!(rows[1].name, "D");
    }

    #[test]
    fn the_grid_is_still_sized_from_the_saved_lines_not_the_surviving_rows() {
        let mut host = Dialog {
            lines: vec![
                line("R", "1", "1M"),
                "broken".to_owned(),
                line("D", "0", "5"),
            ],
            ..Dialog::default()
        };

        create_value_limits(&mut host);

        assert_eq!(host.row_count, Some(3));
        assert_eq!(host.rows.len(), 2);
    }

    #[test]
    fn an_empty_settings_file_still_leaves_one_row_to_type_in() {
        let mut host = Dialog::default();
        create_value_limits(&mut host);

        assert_eq!(host.row_count, Some(1));
        assert!(host.rows.is_empty());
    }

    #[test]
    fn a_single_saved_line_also_gives_one_row() {
        assert_eq!(limits_row_count(0), 1);
        assert_eq!(limits_row_count(1), 1);
        assert_eq!(limits_row_count(2), 2);
        assert_eq!(limits_row_count(9), 9);
    }
}
