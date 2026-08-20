//! Iced adapter for the recovered Data Generator window.
//!
//! Numeric staging and validation live in `tiara-core`. The maintained `rfd`
//! crate supplies the text-file picker, and the existing hexadecimal loader
//! parses selected files.

use std::path::PathBuf;

use iced::widget::{button, checkbox, column, container, radio, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length, Task};
use rfd::AsyncFileDialog;
use tiara_core::data_pattern::PatternDescriptor;
use tiara_core::data_sequence_generator::{
    DataRepresentation, DataSequenceError, DataSequenceRecord, ImportBuffer,
    ValidatedGeneratorFields, fill_staged_words, format_address, format_word, parse_grid_words,
    prepare_import_buffer, replace_staged_from_import, validate_generator_fields,
};
use tiara_core::hexadecimal_text_file::load_hexadecimal_u16_file;

pub const TITLE: &str = "Data Generator";
pub const FORM_RESOURCE: &str = "DataSeq";

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

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct GridRow {
    pub address: String,
    pub data: String,
    pub minimum: u16,
    pub maximum: u16,
}

#[derive(Debug, Clone)]
pub struct LoadOutcome {
    result: Result<ImportBuffer, String>,
}

#[derive(Debug, Clone)]
pub enum Message {
    GridValueChanged(usize, String),
    ModeSelected(DataRepresentation),
    PatternLowChanged(String),
    PatternHighChanged(String),
    SimulationStartChanged(String),
    SimulationStopChanged(String),
    StepTimeChanged(String),
    RepeatChanged(bool),
    BeginFill,
    FillFinished(Option<PatternDescriptor>),
    Load,
    LoadSelected(Option<PathBuf>),
    LoadCompleted(LoadOutcome),
    Accept(EditorCommitResult),
    AlternateOperationFinished(AlternateOperationResult),
    CloseQuery,
    Cancel,
}

#[derive(Debug)]
pub struct Window {
    working: DataSequenceRecord,
    caller: DataSequenceRecord,
    grid_values: Vec<String>,
    pattern_low: String,
    pattern_high: String,
    simulation_start: String,
    simulation_stop: String,
    step_time: String,
    initialization_complete: bool,
    selected_cell: (usize, usize),
    pending_fill: Option<ValidatedGeneratorFields>,
    error_flag: bool,
    status: Option<String>,
    accepted: bool,
    last_close_allowed: Option<bool>,
    modal_result: Option<u8>,
    schedule_refresh_count: usize,
}

impl Window {
    /// Creates form-local staging state from a caller-owned `DataSeq` record.
    ///
    /// # Errors
    ///
    /// Returns [`DataSequenceError`] when the saved data width cannot format
    /// the initial grid.
    pub fn new(record: DataSequenceRecord) -> Result<Self, DataSequenceError> {
        let mut window = Self {
            pattern_low: format!("{:X}", record.pattern.first),
            pattern_high: format!("{:X}", record.pattern.last),
            simulation_start: format!("{:X}", record.simulation.start),
            simulation_stop: format!("{:X}", record.simulation.stop),
            step_time: record.simulation.step_time.to_string(),
            caller: record.clone(),
            working: record,
            grid_values: Vec::new(),
            initialization_complete: false,
            selected_cell: (1, 1),
            pending_fill: None,
            error_flag: false,
            status: None,
            accepted: false,
            last_close_allowed: None,
            modal_result: None,
            schedule_refresh_count: 0,
        };
        window.rebuild_grid()?;
        window.initialization_complete = true;
        Ok(window)
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::GridValueChanged(index, value) => {
                if let Some(input) = self.grid_values.get_mut(index) {
                    *input = value;
                }
            }
            Message::ModeSelected(mode) => self.switch_mode(mode),
            Message::PatternLowChanged(value) => self.pattern_low = value,
            Message::PatternHighChanged(value) => self.pattern_high = value,
            Message::SimulationStartChanged(value) => self.simulation_start = value,
            Message::SimulationStopChanged(value) => self.simulation_stop = value,
            Message::StepTimeChanged(value) => self.step_time = value,
            Message::RepeatChanged(value) => self.working.repeat = value,
            Message::BeginFill => self.begin_fill(),
            Message::FillFinished(result) => self.finish_fill(result),
            Message::Load => return Task::perform(select_text_file(), Message::LoadSelected),
            Message::LoadSelected(selection) => return self.load_selected(selection),
            Message::LoadCompleted(outcome) => self.finish_load(outcome),
            Message::Accept(result) => {
                self.validate_and_commit(result);
            }
            Message::AlternateOperationFinished(result) => {
                if result == AlternateOperationResult::Completed {
                    self.modal_result = Some(1);
                }
            }
            Message::CloseQuery => {
                self.last_close_allowed = Some(self.query_close());
            }
            Message::Cancel => {}
        }

        Task::none()
    }

    #[must_use]
    pub const fn caller_record(&self) -> &DataSequenceRecord {
        &self.caller
    }

    #[must_use]
    pub const fn working_record(&self) -> &DataSequenceRecord {
        &self.working
    }

    #[must_use]
    pub const fn pending_fill(&self) -> Option<PatternDescriptor> {
        match self.pending_fill {
            Some(fields) => Some(fields.pattern),
            None => None,
        }
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
    pub const fn schedule_refresh_count(&self) -> usize {
        self.schedule_refresh_count
    }

    #[must_use]
    pub fn grid_rows(&self) -> Vec<GridRow> {
        let maximum = if self.working.bit_width == 16 {
            u16::MAX
        } else {
            (1_u16 << self.working.bit_width) - 1
        };
        self.grid_values
            .iter()
            .enumerate()
            .map(|(index, value)| GridRow {
                address: format_address(index),
                data: value.clone(),
                minimum: 0,
                maximum,
            })
            .collect()
    }

    /// Reimplements Ghidra function `FUN_0140e330` at `0x0140E330`.
    ///
    /// The iced grid keeps the localized headers in the view and creates one
    /// representation-specific text editor for every unchanged staged word.
    /// Row addresses are fixed four-digit hexadecimal values.
    ///
    /// # Errors
    ///
    /// Returns [`DataSequenceError`] when the configured bit width is invalid.
    pub fn rebuild_grid(&mut self) -> Result<(), DataSequenceError> {
        self.grid_values = self
            .working
            .words
            .iter()
            .map(|word| format_word(*word, self.working.bit_width, self.working.mode))
            .collect::<Result<_, _>>()?;
        Ok(())
    }

    /// Reimplements Ghidra function `FUN_0140f220` at `0x0140F220`.
    ///
    /// Initialization notifications and repeated selections are no-ops. A
    /// real mode change discards uncommitted editor text, rebuilds from the
    /// unchanged staged words, and selects cell `(1,1)`.
    pub fn switch_mode(&mut self, mode: DataRepresentation) {
        if !self.initialization_complete || mode == self.working.mode {
            return;
        }

        self.working.mode = mode;
        match self.rebuild_grid() {
            Ok(()) => {
                self.selected_cell = (1, 1);
                self.status = None;
            }
            Err(error) => self.record_error(&error),
        }
    }

    /// Reimplements Ghidra function `FUN_0140e810` at `0x0140E810` for the
    /// form-local word buffer.
    ///
    /// # Errors
    ///
    /// Returns the first invalid grid row and keeps the previous staged words.
    pub fn commit_grid_to_staging(&mut self) -> Result<(), DataSequenceError> {
        let parsed = parse_grid_words(&self.grid_values, self.working.mode)?;
        self.working.words = parsed;
        Ok(())
    }

    /// Reimplements Ghidra function `FUN_0140ebd0` at `0x0140EBD0`.
    ///
    /// The adapter reads the iced text state and delegates numeric and range
    /// checks to the cohesive core validator.
    ///
    /// # Errors
    ///
    /// Returns invalid step-time text or the first core address/range error.
    pub fn validate_staged_fields(&self) -> Result<ValidatedGeneratorFields, String> {
        let step_time = self
            .step_time
            .parse::<f64>()
            .map_err(|_| "Step time is not a valid value.".to_owned())?;
        validate_generator_fields(
            self.working.pattern,
            &self.pattern_low,
            &self.pattern_high,
            &self.simulation_start,
            &self.simulation_stop,
            step_time,
            self.working.bit_width,
            self.working.words.len(),
        )
        .map_err(|error| error.to_string())
    }

    /// Starts the recovered Fill command after parent-field validation.
    ///
    /// A successful call exposes the current descriptor through
    /// [`Self::pending_fill`] so a separate Fill window can edit it. A failed
    /// call leaves staged data and the grid unchanged.
    pub fn begin_fill(&mut self) {
        match self.validate_staged_fields() {
            Ok(fields) => {
                self.pending_fill = Some(fields);
                self.error_flag = false;
                self.status = None;
            }
            Err(error) => self.record_error_text(error),
        }
    }

    /// Reimplements Ghidra function `FUN_0140f2a0` at `0x0140F2A0` after the
    /// separate Fill window returns.
    ///
    /// Acceptance copies the descriptor, clears every staged word, composes
    /// with `tiara_core::data_pattern`, and rebuilds the grid. Cancel skips
    /// those changes. Both results can raise the staged simulation stop to the
    /// prevalidated pattern high address.
    pub fn finish_fill(&mut self, result: Option<PatternDescriptor>) {
        let Some(fields) = self.pending_fill.take() else {
            return;
        };

        if let Some(pattern) = result {
            self.working.pattern = pattern;
            if let Err(error) = fill_staged_words(
                &mut self.working.words,
                self.working.pattern,
                self.working.bit_width,
            ) {
                self.record_error(&error);
            } else if let Err(error) = self.rebuild_grid() {
                self.record_error(&error);
            } else {
                self.selected_cell = (1, 1);
                self.status = None;
            }
        }

        if fields.pattern.last > fields.simulation.stop {
            self.simulation_stop = format!("{:X}", fields.pattern.last);
        }
    }

    /// Reimplements Ghidra function `FUN_0140f100` at `0x0140F100`.
    ///
    /// An accepted active editor first updates staging and copies all words to
    /// the caller. Later field validation can still fail, leaving that word
    /// copy in place while mode, pattern, simulation, schedule, and repeat
    /// remain unchanged. A complete commit updates those fields in recovered
    /// order. Alternate mode uses a separate message and never calls this
    /// normal path.
    pub fn validate_and_commit(&mut self, editor_result: EditorCommitResult) -> bool {
        self.error_flag = editor_result == EditorCommitResult::Rejected;
        if self.error_flag {
            self.status = Some("The active grid value is not valid.".to_owned());
            return false;
        }

        if let Err(error) = self.commit_grid_to_staging() {
            self.record_error(&error);
            return false;
        }
        self.caller.words.clone_from(&self.working.words);

        let fields = match self.validate_staged_fields() {
            Ok(fields) => fields,
            Err(error) => {
                self.record_error_text(error);
                return false;
            }
        };
        self.working.pattern = fields.pattern;
        self.working.simulation = fields.simulation;
        self.caller.mode = self.working.mode;
        self.caller.pattern = self.working.pattern;
        self.caller.simulation = self.working.simulation;
        self.schedule_refresh_count += 1;
        self.caller.repeat = self.working.repeat;
        self.accepted = true;
        self.error_flag = false;
        self.status = None;
        true
    }

    /// Implements the one-attempt `DataSeq` close veto at Ghidra function
    /// `FUN_0140e650` and address `0x0140E650`.
    #[must_use]
    pub const fn query_close(&mut self) -> bool {
        let can_close = !self.error_flag;
        self.error_flag = false;
        can_close
    }

    fn load_selected(&self, selection: Option<PathBuf>) -> Task<Message> {
        let Some(path) = selection else {
            return Task::none();
        };
        let count = self.working.words.len();
        let bit_width = self.working.bit_width;
        Task::perform(
            async move { load_hexadecimal_words(path, count, bit_width) },
            |result| Message::LoadCompleted(LoadOutcome { result }),
        )
    }

    /// Reimplements the state-change boundary of Ghidra function
    /// `FUN_0140f640` at `0x0140F640`.
    ///
    /// A canceled selection is handled before this method. A parse error keeps
    /// existing staging and grid state. Success performs the complete fixed-
    /// size replacement, rebuilds the current representation, and selects cell
    /// `(1,1)` without changing any other staged field.
    fn finish_load(&mut self, outcome: LoadOutcome) {
        match outcome.result {
            Ok(imported) => {
                if let Err(error) = replace_staged_from_import(&mut self.working.words, &imported) {
                    self.record_error(&error);
                } else if let Err(error) = self.rebuild_grid() {
                    self.record_error(&error);
                } else {
                    self.selected_cell = (1, 1);
                    self.status = None;
                }
            }
            Err(error) => self.status = Some(error),
        }
    }

    fn record_error(&mut self, error: &DataSequenceError) {
        self.record_error_text(error.to_string());
    }

    fn record_error_text(&mut self, error: String) {
        self.error_flag = true;
        if self.status.is_none() {
            self.status = Some(error);
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut grid = column![
            row![
                text("Address").width(Length::FillPortion(2)),
                text("Data").width(Length::FillPortion(3)),
            ]
            .spacing(8),
        ]
        .spacing(6);
        for (index, value) in self.grid_values.iter().enumerate() {
            grid = grid.push(
                row![
                    text(format_address(index)).width(Length::FillPortion(2)),
                    text_input("", value)
                        .on_input(move |value| Message::GridValueChanged(index, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
            );
        }

        let mut actions = row![
            button("Fill...").on_press(Message::BeginFill),
            button("Load").on_press(Message::Load),
            button("OK").on_press(Message::Accept(EditorCommitResult::Accepted)),
            button("Cancel").on_press(Message::Cancel),
        ]
        .spacing(8);
        if let Some(fields) = self.pending_fill {
            actions = actions
                .push(button("Apply Fill").on_press(Message::FillFinished(Some(fields.pattern))))
                .push(button("Cancel Fill").on_press(Message::FillFinished(None)));
        }

        let mut content = column![
            row![
                text("Mode"),
                radio(
                    "Bin",
                    DataRepresentation::Binary,
                    Some(self.working.mode),
                    Message::ModeSelected,
                ),
                radio(
                    "Hex",
                    DataRepresentation::Hexadecimal,
                    Some(self.working.mode),
                    Message::ModeSelected,
                ),
            ]
            .spacing(12),
            scrollable(container(grid).padding(8)).height(Length::FillPortion(3)),
            input_row(
                "Affected address (low)",
                &self.pattern_low,
                Message::PatternLowChanged,
            ),
            input_row(
                "Affected address (high)",
                &self.pattern_high,
                Message::PatternHighChanged,
            ),
            input_row(
                "Start address",
                &self.simulation_start,
                Message::SimulationStartChanged,
            ),
            input_row(
                "Stop address",
                &self.simulation_stop,
                Message::SimulationStopChanged,
            ),
            input_row("Step time", &self.step_time, Message::StepTimeChanged),
            checkbox("Repeat pattern", self.working.repeat).on_toggle(Message::RepeatChanged),
            actions,
        ]
        .padding(16)
        .spacing(10);
        if let Some(status) = &self.status {
            content = content.push(text(status));
        }

        container(content)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

fn input_row<'a>(
    label: &'a str,
    value: &'a str,
    on_input: fn(String) -> Message,
) -> iced::widget::Row<'a, Message> {
    row![
        text(label).width(Length::FillPortion(2)),
        text_input("", value)
            .on_input(on_input)
            .width(Length::FillPortion(3)),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
}

async fn select_text_file() -> Option<PathBuf> {
    AsyncFileDialog::new()
        .add_filter("Text file", &["txt"])
        .pick_file()
        .await
        .map(|handle| handle.path().to_path_buf())
}

fn load_hexadecimal_words(
    path: PathBuf,
    count: usize,
    bit_width: u16,
) -> Result<ImportBuffer, String> {
    let mut imported = prepare_import_buffer(count, bit_width);
    load_hexadecimal_u16_file(path, &mut imported.words).map_err(|error| error.to_string())?;
    Ok(imported)
}

#[cfg(test)]
mod tests {
    use tiara_core::data_pattern::{PatternDescriptor, PatternMethod};

    use super::*;

    fn record() -> DataSequenceRecord {
        DataSequenceRecord {
            bit_width: 8,
            words: vec![1, 2, 3, 4],
            mode: DataRepresentation::Hexadecimal,
            simulation: tiara_core::data_sequence_generator::SimulationSettings {
                start: 0,
                stop: 3,
                step_time: 0.5,
            },
            pattern: PatternDescriptor {
                method: PatternMethod::FillOne,
                first: 1,
                last: 2,
                initial: 0xFF,
                step: 0,
                limit: 0,
            },
            repeat: false,
        }
    }

    fn window() -> Result<Window, DataSequenceError> {
        Window::new(record())
    }

    #[test]
    fn grid_rebuild_formats_addresses_and_words_in_both_visible_modes()
    -> Result<(), DataSequenceError> {
        let mut window = window()?;

        assert_eq!(window.grid_rows()[0].address, "0000");
        assert_eq!(window.grid_rows()[3].data, "04");

        window.switch_mode(DataRepresentation::Binary);

        assert_eq!(window.grid_rows()[3].data, "00000100");
        assert_eq!(window.working_record().words, [1, 2, 3, 4]);
        Ok(())
    }

    #[test]
    fn mode_change_discards_uncommitted_grid_text() -> Result<(), DataSequenceError> {
        let mut window = window()?;
        drop(window.update(Message::GridValueChanged(0, "FF".to_owned())));

        drop(window.update(Message::ModeSelected(DataRepresentation::Binary)));

        assert_eq!(window.grid_rows()[0].data, "00000001");
        assert_eq!(window.caller_record().mode, DataRepresentation::Hexadecimal);
        Ok(())
    }

    #[test]
    fn failed_late_validation_keeps_only_the_early_caller_word_copy()
    -> Result<(), DataSequenceError> {
        let mut window = window()?;
        drop(window.update(Message::GridValueChanged(0, "AA".to_owned())));
        drop(window.update(Message::PatternLowChanged("3".to_owned())));
        drop(window.update(Message::PatternHighChanged("2".to_owned())));

        assert!(!window.validate_and_commit(EditorCommitResult::Accepted));

        assert_eq!(window.caller_record().words[0], 0xAA);
        assert_eq!(window.caller_record().pattern, record().pattern);
        assert_eq!(window.schedule_refresh_count(), 0);
        assert!(!window.query_close());
        assert!(window.query_close());
        Ok(())
    }

    #[test]
    fn successful_ok_commits_all_settings_and_requests_one_schedule_refresh()
    -> Result<(), DataSequenceError> {
        let mut window = window()?;
        drop(window.update(Message::GridValueChanged(1, "0A".to_owned())));
        drop(window.update(Message::RepeatChanged(true)));

        assert!(window.validate_and_commit(EditorCommitResult::Accepted));

        assert_eq!(window.caller_record().words[1], 0xA);
        assert!(window.caller_record().repeat);
        assert_eq!(window.schedule_refresh_count(), 1);
        Ok(())
    }

    #[test]
    fn alternate_completion_sets_modal_result_without_copying_state()
    -> Result<(), DataSequenceError> {
        let mut window = window()?;
        let caller = window.caller_record().clone();
        drop(window.update(Message::GridValueChanged(0, "FF".to_owned())));

        drop(window.update(Message::AlternateOperationFinished(
            AlternateOperationResult::Completed,
        )));

        assert_eq!(window.modal_result(), Some(1));
        assert_eq!(window.caller_record(), &caller);
        Ok(())
    }

    #[test]
    fn accepted_fill_clears_outside_values_and_cancel_can_raise_stop()
    -> Result<(), DataSequenceError> {
        let mut window = window()?;
        window.begin_fill();
        let pattern = window.pending_fill().expect("valid fill request");
        window.finish_fill(Some(pattern));

        assert_eq!(window.working_record().words, [0, 0xFF, 0xFF, 0]);
        assert_eq!(window.caller_record().words, [1, 2, 3, 4]);

        drop(window.update(Message::SimulationStopChanged("0".to_owned())));
        window.begin_fill();
        window.finish_fill(None);

        assert_eq!(window.simulation_stop, "2");
        assert_eq!(window.working_record().words, [0, 0xFF, 0xFF, 0]);
        Ok(())
    }

    #[test]
    fn successful_load_replaces_fixed_capacity_but_keeps_other_staging()
    -> Result<(), DataSequenceError> {
        let mut window = window()?;
        let mode = window.working_record().mode;
        let pattern = window.working_record().pattern;
        let mut imported = prepare_import_buffer(4, 8);
        imported.words.copy_from_slice(&[0xA, 0xB, 0, 0]);

        window.finish_load(LoadOutcome {
            result: Ok(imported),
        });

        assert_eq!(window.working_record().words, [0xA, 0xB, 0, 0]);
        assert_eq!(window.working_record().mode, mode);
        assert_eq!(window.working_record().pattern, pattern);
        assert_eq!(window.caller_record().words, [1, 2, 3, 4]);
        assert_eq!(window.selected_cell, (1, 1));
        Ok(())
    }

    #[test]
    fn canceled_or_failed_load_keeps_staging_and_grid() -> Result<(), DataSequenceError> {
        let mut window = window()?;
        let words = window.working_record().words.clone();
        let grid = window.grid_values.clone();

        drop(window.update(Message::LoadSelected(None)));
        window.finish_load(LoadOutcome {
            result: Err("bad file".to_owned()),
        });

        assert_eq!(window.working_record().words, words);
        assert_eq!(window.grid_values, grid);
        Ok(())
    }
}
