use std::error::Error;
use std::fmt::{self, Display, Formatter};

use iced::widget::{button, column, container, row, text, text_input};
use iced::{Element, Length, Task};
use tiara_core::grid_cell_commit::{ActiveCellEditor, FinalizeOutcome, GridEditSession};

pub const TITLE: &str = "Pin Properties";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ModalResult {
    #[default]
    None,
    Ok,
    Cancel,
}

#[derive(Debug, Clone)]
pub enum Message {
    EditTextChanged(String),
    Ok,
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CellCommitError {
    column: usize,
    row: usize,
}

impl Display for CellCommitError {
    fn fmt(&self, formatter: &mut Formatter<'_>) -> fmt::Result {
        write!(
            formatter,
            "Pin-grid cell ({}, {}) is outside the grid",
            self.column, self.row
        )
    }
}

impl Error for CellCommitError {}

#[derive(Debug)]
pub struct State {
    cells: Vec<Vec<String>>,
    edit_session: GridEditSession,
    modal_result: ModalResult,
    last_error: Option<String>,
}

impl State {
    #[must_use]
    pub fn new(rows: usize, columns: usize) -> Self {
        Self {
            cells: vec![vec![String::new(); columns]; rows],
            edit_session: GridEditSession::default(),
            modal_result: ModalResult::None,
            last_error: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::EditTextChanged(value) => self.edit_session.set_text(value),
            Message::Ok => {
                let _ = self.click_ok();
            }
            Message::Cancel => self.modal_result = ModalResult::Cancel,
        }
        Task::none()
    }

    pub fn begin_edit(
        &mut self,
        column: Option<usize>,
        row: Option<usize>,
        text: impl Into<String>,
        repaint_on_close: bool,
    ) {
        self.edit_session.begin(
            ActiveCellEditor {
                column,
                row,
                text: text.into(),
            },
            repaint_on_close,
        );
    }

    /// Reimplements Ghidra function `FUN_01788970` at `0x01788970`.
    ///
    /// # Errors
    ///
    /// Returns a bounds error from the grid cell setter. The modal result does
    /// not change to OK when finalization fails.
    pub fn click_ok(&mut self) -> Result<(), CellCommitError> {
        let cells = &mut self.cells;
        let result: Result<FinalizeOutcome, CellCommitError> =
            self.edit_session.finalize(|column, row, value| {
                let cell = cells
                    .get_mut(row)
                    .and_then(|cells_row| cells_row.get_mut(column))
                    .ok_or(CellCommitError { column, row })?;
                value.clone_into(cell);
                Ok(())
            });
        match result {
            Ok(_) => {
                self.last_error = None;
                self.modal_result = ModalResult::Ok;
                Ok(())
            }
            Err(error) => {
                self.last_error = Some(error.to_string());
                Err(error)
            }
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let editor: Element<'_, Message> = self.edit_session.active_editor().map_or_else(
            || text("No active cell").into(),
            |editor| {
                text_input("Cell value", &editor.text)
                    .on_input(Message::EditTextChanged)
                    .into()
            },
        );
        let error = self.last_error.as_ref().map_or_else(
            || text(""),
            |message| text(message).style(iced::widget::text::danger),
        );
        container(
            column![
                text(TITLE).size(24),
                editor,
                error,
                row![
                    button("OK").on_press(Message::Ok),
                    button("Cancel").on_press(Message::Cancel),
                ]
                .spacing(8),
            ]
            .spacing(10),
        )
        .padding(16)
        .width(Length::Fill)
        .into()
    }

    #[must_use]
    pub fn cell(&self, column: usize, row: usize) -> Option<&str> {
        self.cells
            .get(row)
            .and_then(|cells_row| cells_row.get(column))
            .map(String::as_str)
    }

    #[must_use]
    pub const fn modal_result(&self) -> ModalResult {
        self.modal_result
    }

    #[must_use]
    pub fn last_error(&self) -> Option<&str> {
        self.last_error.as_deref()
    }

    #[must_use]
    pub const fn edit_session(&self) -> &GridEditSession {
        &self.edit_session
    }
}

#[cfg(test)]
mod tests {
    use super::{ModalResult, State};

    #[test]
    fn ok_commits_active_cell_before_modal_acceptance() {
        let mut state = State::new(2, 8);
        state.begin_edit(Some(0), Some(1), "PIN_A", true);
        state.click_ok().expect("valid cell");
        assert_eq!(state.cell(0, 1), Some("PIN_A"));
        assert_eq!(state.modal_result(), ModalResult::Ok);
        assert!(state.edit_session().active_editor().is_none());
        assert!(state.edit_session().repaint_requested());
    }

    #[test]
    fn ok_without_active_editor_accepts_without_cell_change() {
        let mut state = State::new(1, 8);
        state.click_ok().expect("no active editor is valid");
        assert_eq!(state.modal_result(), ModalResult::Ok);
        assert_eq!(state.cell(0, 0), Some(""));
    }

    #[test]
    fn invalid_coordinates_close_editor_without_a_write() {
        let mut state = State::new(1, 8);
        state.begin_edit(None, Some(0), "PIN_A", false);
        state.click_ok().expect("unpositioned editor closes");
        assert_eq!(state.modal_result(), ModalResult::Ok);
        assert_eq!(state.cell(0, 0), Some(""));
        assert!(state.edit_session().active_editor().is_none());
    }

    #[test]
    fn setter_error_prevents_modal_acceptance_and_retains_editor() {
        let mut state = State::new(1, 8);
        state.begin_edit(Some(8), Some(0), "PIN_A", false);
        assert!(state.click_ok().is_err());
        assert_eq!(state.modal_result(), ModalResult::None);
        assert!(state.last_error().is_some());
        assert!(state.edit_session().active_editor().is_some());
        assert!(!state.edit_session().edit_mode());
    }
}
