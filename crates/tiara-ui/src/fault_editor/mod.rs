//! Define Faults parameter window.
//!
//! The application shell must supply the selected fault metadata, caller-owned
//! choices, localized selector labels, and the recovered help context
//! (`0x4A7`). This module does not own catalog selection or navigation.

use std::fmt;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, pick_list, row, scrollable, text};
use iced::{Alignment, Element, Length, Task};
use tiara_core::fault_editor::{FaultChoices, FaultEditorError, FaultEditorState, FaultMetadata};

pub const TITLE: &str = "Define Faults";
pub const FORM_RESOURCE: &str = "FltForm";

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SelectorOption {
    pub code: i32,
    pub label: String,
}

impl fmt::Display for SelectorOption {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(&self.label)
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ApplicationMode {
    #[default]
    Normal,
    Alternate,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EditorCommitResult {
    Accepted,
    Rejected,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AlternateOperationResult {
    Completed,
    NotCompleted,
}

#[derive(Debug, Clone, Copy)]
pub enum Message {
    Shown,
    ChoiceSelected { row: usize, selector_code: i32 },
    Reset,
    Accept(EditorCommitResult),
    AlternateOperationFinished(AlternateOperationResult),
    CloseQuery,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct GridRow {
    name: String,
    selector_code: Option<i32>,
}

#[derive(Debug)]
pub struct Window {
    state: FaultEditorState,
    caller_choices: FaultChoices,
    selector_options: Vec<SelectorOption>,
    headers: [String; 2],
    placeholder: String,
    remembered_path: PathBuf,
    configured_row_count: usize,
    grid_rows: Vec<GridRow>,
    selected_cell: (usize, usize),
    mode: ApplicationMode,
    close_guard: bool,
    last_close_allowed: Option<bool>,
    modal_result: Option<u8>,
    last_error: Option<FaultEditorError>,
}

impl Window {
    /// Ports Ghidra function `FUN_013f9ba0` at `0x013F9BA0`.
    ///
    /// Creates a separate Define Faults window, clones both caller value
    /// groups into dialog-local staging state, combines the two metadata-name
    /// groups, builds the iced grid, and remembers `noname.flt`. `Vec` and
    /// [`FaultEditorState`] replace the recovered Delphi list copies.
    ///
    /// # Errors
    ///
    /// Returns [`FaultEditorError`] when fault-name and value counts differ.
    pub fn new(
        metadata: FaultMetadata,
        caller_choices: FaultChoices,
        selector_labels: Vec<String>,
        headers: [String; 2],
        placeholder: String,
        configured_row_count: usize,
        mode: ApplicationMode,
    ) -> Result<Self, FaultEditorError> {
        let state = FaultEditorState::new(metadata, &caller_choices)?;
        let selector_options = selector_labels
            .into_iter()
            .enumerate()
            .filter_map(|(code, label)| {
                i32::try_from(code)
                    .ok()
                    .map(|code| SelectorOption { code, label })
            })
            .collect();
        let mut window = Self {
            state,
            caller_choices,
            selector_options,
            headers,
            placeholder,
            remembered_path: PathBuf::from("noname.flt"),
            configured_row_count,
            grid_rows: Vec::new(),
            selected_cell: (0, 1),
            mode,
            close_guard: false,
            last_close_allowed: None,
            modal_result: None,
            last_error: None,
        };
        window.rebuild_grid();
        Ok(window)
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Shown => self.on_show(),
            Message::ChoiceSelected { row, selector_code } => {
                match self.state.set_staged_choice(row, selector_code) {
                    Ok(()) => {
                        self.last_error = None;
                        self.rebuild_grid();
                    }
                    Err(error) => self.last_error = Some(error),
                }
            }
            Message::Reset => self.reset_staged_fault_choices(),
            Message::Accept(result) => self.validate_and_commit(result),
            Message::AlternateOperationFinished(result) => {
                self.finish_alternate_operation(result);
            }
            Message::CloseQuery => {
                self.last_close_allowed = Some(self.query_close());
            }
            Message::Cancel => {}
        }

        Task::none()
    }

    #[must_use]
    pub const fn caller_choices(&self) -> &FaultChoices {
        &self.caller_choices
    }

    #[must_use]
    pub const fn staged_choices(&self) -> &FaultChoices {
        self.state.staged_choices()
    }

    #[must_use]
    pub const fn last_close_allowed(&self) -> Option<bool> {
        self.last_close_allowed
    }

    #[must_use]
    pub const fn modal_result(&self) -> Option<u8> {
        self.modal_result
    }

    #[must_use]
    pub fn remembered_path(&self) -> &Path {
        &self.remembered_path
    }

    /// Ports Ghidra function `FUN_013fa220` at `0x013FA220`.
    ///
    /// The recovered `FltForm.OnShow` handler returns without reading or
    /// changing state. The iced lifecycle adapter therefore has no effect.
    pub const fn on_show(&mut self) {}

    /// Reimplements Ghidra function `FUN_013f9d40` at `0x013F9D40`.
    ///
    /// The recovered helper creates one fixed header row, then adds every
    /// group-1 selector row followed by every group-2 row. Remaining configured
    /// rows receive placeholder content. This adapter retains headers
    /// separately because iced composes rows instead of mutating a VCL grid.
    pub fn rebuild_grid(&mut self) {
        self.grid_rows.clear();

        for (row, name) in self.state.row_names().iter().enumerate() {
            self.grid_rows.push(GridRow {
                name: name.clone(),
                selector_code: self.state.staged_choice(row),
            });
        }

        let active_row_count = self.grid_rows.len();
        let placeholder_count = self
            .configured_row_count
            .saturating_sub(active_row_count.saturating_add(1));
        self.grid_rows
            .extend((0..placeholder_count).map(|_| GridRow {
                name: self.placeholder.clone(),
                selector_code: None,
            }));
    }

    /// Reimplements Ghidra function `FUN_013fa0f0` at `0x013FA0F0`.
    ///
    /// Reset selects column 0, row 1, replaces all dialog-owned values with
    /// selector code `4`, rebuilds names and rows, and keeps the window open.
    /// Caller-owned choices and close state are not changed.
    pub fn reset_staged_fault_choices(&mut self) {
        self.selected_cell = (0, 1);
        self.state.reset_staged_choices();
        self.rebuild_grid();
        self.last_error = None;
    }

    /// Reimplements Ghidra function `FUN_013fa050` at `0x013FA050`.
    ///
    /// In normal mode, an accepted active editor replaces the two caller-owned
    /// lists from staging. A rejected editor sets a one-attempt close veto and
    /// leaves both caller-owned lists unchanged. The alternate mode does not
    /// use this normal copy path.
    pub fn validate_and_commit(&mut self, result: EditorCommitResult) {
        if self.mode != ApplicationMode::Normal {
            return;
        }

        self.close_guard = result == EditorCommitResult::Rejected;
        if result == EditorCommitResult::Accepted {
            self.state.commit_to(&mut self.caller_choices);
        }
    }

    /// Implements the alternate branch of Ghidra function `FUN_013fa050` at
    /// `0x013FA050`.
    ///
    /// Completion sets modal result `1`. Any other status does not set a modal
    /// result. This branch never copies staged choices to the caller.
    pub fn finish_alternate_operation(&mut self, result: AlternateOperationResult) {
        if self.mode == ApplicationMode::Alternate && result == AlternateOperationResult::Completed
        {
            self.modal_result = Some(1);
        }
    }

    /// Reimplements Ghidra function `FUN_013fa030` at `0x013FA030`.
    ///
    /// Close is allowed only when the one-attempt guard is clear. The guard is
    /// then cleared even when this close request is rejected.
    #[must_use]
    pub const fn query_close(&mut self) -> bool {
        let can_close = !self.close_guard;
        self.close_guard = false;
        can_close
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let header = row![
            text(&self.headers[0]).width(Length::FillPortion(2)),
            text(&self.headers[1]).width(Length::FillPortion(3)),
        ]
        .spacing(8);
        let mut grid = column![header].spacing(8);

        for (row_index, grid_row) in self.grid_rows.iter().enumerate() {
            let selected = grid_row.selector_code.and_then(|code| {
                self.selector_options
                    .iter()
                    .find(|option| option.code == code)
                    .cloned()
            });
            let selector: Element<'_, Message> = if grid_row.selector_code.is_some() {
                pick_list(self.selector_options.as_slice(), selected, move |option| {
                    Message::ChoiceSelected {
                        row: row_index,
                        selector_code: option.code,
                    }
                })
                .width(Length::FillPortion(3))
                .into()
            } else {
                text("").width(Length::FillPortion(3)).into()
            };

            grid = grid.push(
                row![text(&grid_row.name).width(Length::FillPortion(2)), selector,]
                    .spacing(8)
                    .align_y(Alignment::Center),
            );
        }

        let accept_message = match self.mode {
            ApplicationMode::Normal => Message::Accept(EditorCommitResult::Accepted),
            ApplicationMode::Alternate => {
                Message::AlternateOperationFinished(AlternateOperationResult::Completed)
            }
        };
        let content = column![
            scrollable(container(grid).padding(8)).height(Length::Fill),
            row![
                button("Reset").on_press(Message::Reset),
                button("OK").on_press(accept_message),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(12),
        ]
        .padding(16)
        .spacing(12);

        container(content)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn window(mode: ApplicationMode) -> Result<Window, FaultEditorError> {
        Window::new(
            FaultMetadata {
                group_one_names: vec!["G1 A".to_owned(), "G1 B".to_owned()],
                group_two_names: vec!["G2 A".to_owned()],
            },
            FaultChoices {
                group_one: vec![0, 1],
                group_two: vec![2],
            },
            ["A", "B", "C", "D", "E"]
                .into_iter()
                .map(str::to_owned)
                .collect(),
            ["Fault".to_owned(), "Choice".to_owned()],
            "Unused".to_owned(),
            6,
            mode,
        )
    }

    #[test]
    fn form_create_clones_both_groups_and_builds_the_initial_grid() -> Result<(), FaultEditorError>
    {
        let window = window(ApplicationMode::Normal)?;

        assert_eq!(window.caller_choices().group_one, [0, 1]);
        assert_eq!(window.caller_choices().group_two, [2]);
        assert_eq!(window.staged_choices(), window.caller_choices());
        assert_eq!(window.grid_rows.len(), 5);
        assert_eq!(window.remembered_path(), Path::new("noname.flt"));
        assert_eq!(window.selected_cell, (0, 1));
        Ok(())
    }

    #[test]
    fn form_show_is_a_no_op() -> Result<(), FaultEditorError> {
        let mut window = window(ApplicationMode::Normal)?;
        let staged_choices = window.staged_choices().clone();
        let grid_rows = window.grid_rows.clone();

        drop(window.update(Message::Shown));

        assert_eq!(window.staged_choices(), &staged_choices);
        assert_eq!(window.grid_rows, grid_rows);
        assert_eq!(window.remembered_path(), Path::new("noname.flt"));
        assert!(window.last_error.is_none());
        Ok(())
    }

    #[test]
    fn reset_message_rebuilds_active_and_placeholder_rows() -> Result<(), FaultEditorError> {
        let mut window = window(ApplicationMode::Normal)?;
        drop(window.update(Message::ChoiceSelected {
            row: 0,
            selector_code: 1,
        }));
        let caller_choices = window.caller_choices().clone();

        drop(window.update(Message::Reset));

        assert_eq!(window.selected_cell, (0, 1));
        assert_eq!(window.caller_choices(), &caller_choices);
        assert_eq!(window.staged_choices().group_one, [4, 4]);
        assert_eq!(window.staged_choices().group_two, [4]);
        assert_eq!(window.grid_rows.len(), 5);
        assert_eq!(window.grid_rows[0].name, "G1 A");
        assert_eq!(window.grid_rows[2].name, "G2 A");
        assert_eq!(window.grid_rows[3].name, "Unused");
        assert_eq!(window.grid_rows[4].name, "Unused");
        Ok(())
    }

    #[test]
    fn accepted_normal_ok_copies_both_staged_groups() -> Result<(), FaultEditorError> {
        let mut window = window(ApplicationMode::Normal)?;
        drop(window.update(Message::ChoiceSelected {
            row: 0,
            selector_code: 4,
        }));
        drop(window.update(Message::ChoiceSelected {
            row: 2,
            selector_code: 3,
        }));

        drop(window.update(Message::Accept(EditorCommitResult::Accepted)));
        drop(window.update(Message::CloseQuery));

        assert_eq!(window.caller_choices().group_one, [4, 1]);
        assert_eq!(window.caller_choices().group_two, [3]);
        assert_eq!(window.last_close_allowed(), Some(true));
        Ok(())
    }

    #[test]
    fn rejected_normal_ok_vetoes_only_the_next_close() -> Result<(), FaultEditorError> {
        let mut window = window(ApplicationMode::Normal)?;
        let caller_choices = window.caller_choices().clone();
        drop(window.update(Message::ChoiceSelected {
            row: 0,
            selector_code: 4,
        }));

        drop(window.update(Message::Accept(EditorCommitResult::Rejected)));
        drop(window.update(Message::CloseQuery));

        assert_eq!(window.caller_choices(), &caller_choices);
        assert_eq!(window.last_close_allowed(), Some(false));

        drop(window.update(Message::CloseQuery));
        assert_eq!(window.last_close_allowed(), Some(true));
        Ok(())
    }

    #[test]
    fn alternate_mode_sets_modal_result_without_copying_choices() -> Result<(), FaultEditorError> {
        let mut window = window(ApplicationMode::Alternate)?;
        let caller_choices = window.caller_choices().clone();
        drop(window.update(Message::ChoiceSelected {
            row: 0,
            selector_code: 4,
        }));

        drop(window.update(Message::AlternateOperationFinished(
            AlternateOperationResult::Completed,
        )));

        assert_eq!(window.modal_result(), Some(1));
        assert_eq!(window.caller_choices(), &caller_choices);
        Ok(())
    }

    #[test]
    fn incomplete_alternate_operation_is_a_no_op() -> Result<(), FaultEditorError> {
        let mut window = window(ApplicationMode::Alternate)?;

        drop(window.update(Message::AlternateOperationFinished(
            AlternateOperationResult::NotCompleted,
        )));

        assert_eq!(window.modal_result(), None);
        Ok(())
    }
}
