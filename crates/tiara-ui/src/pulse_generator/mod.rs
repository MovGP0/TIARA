//! Pulse-generator sequence editor.
//!
//! `iced` supplies state, messages, widgets, and tasks. The maintained `rfd`
//! crate supplies native file dialogs. PSG parsing and writing remain in
//! `tiara-core` so they can be tested without a window.
//!
//! The application shell must still supply the selected pulse sequence and
//! connect the recovered help context (`0x40A`). This module owns the dialog
//! state, but it does not own catalog selection or application navigation.

use std::path::{Path, PathBuf};

use iced::widget::{
    button, checkbox, column, container, pick_list, row, scrollable, text, text_input,
};
use iced::{Alignment, Element, Length, Task};
use rfd::AsyncFileDialog;
use tiara_core::pulse_generator::{PulseLevel, PulseSequence, read_psg_file, write_psg_file};

pub const TITLE: &str = "Pulse Generator";
pub const FORM_RESOURCE: &str = "PsgForm";
const SETTINGS_ERROR: &str = "Error in pulse generator settings";
const BASELINE_ROW_COUNT: usize = 8;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum GridEditor {
    None,
    Moment(usize),
    Level(usize),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct GridRow {
    pub label: String,
    pub editor: GridEditor,
    pub placeholder: bool,
}

#[derive(Debug, Clone)]
pub struct LoadOutcome {
    sequence: PulseSequence,
    error: Option<String>,
}

#[derive(Debug, Clone)]
pub enum Message {
    Shown,
    MomentChanged(usize, String),
    LevelChanged(usize, PulseLevel),
    RepeatFromChanged(String),
    RepeatFromInvalid(String),
    RepeatToggled(bool),
    AddNew,
    RemoveLast,
    Clear,
    Accept,
    AcceptAlternate(bool),
    CloseRequested,
    SaveAs,
    SaveAsSelected(Option<PathBuf>),
    SaveCompleted(Result<(), String>),
    Load,
    LoadSelected(Option<PathBuf>),
    LoadCompleted(LoadOutcome),
}

#[derive(Debug)]
pub struct Window {
    working: PulseSequence,
    original: PulseSequence,
    moment_inputs: Vec<String>,
    repeat: RepeatState,
    repeat_from_input: String,
    file_path: Option<PathBuf>,
    dialog: DialogState,
    status: Option<String>,
}

#[derive(Debug)]
struct RepeatState {
    enabled: bool,
    initialized: bool,
}

impl Default for RepeatState {
    fn default() -> Self {
        Self {
            enabled: false,
            initialized: true,
        }
    }
}

#[derive(Debug, Default)]
struct DialogState {
    error_flag: bool,
    accepted: bool,
    last_close_allowed: Option<bool>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(PulseSequence::default())
    }
}

impl Window {
    /// Ports Ghidra function `FUN_013f78b0` at `0x013F78B0`.
    ///
    /// The constructor clones caller-owned pulse data into dialog-local state,
    /// derives the repeat controls, initializes the iced grid buffers, and
    /// remembers the recovered `noname.psg` file name. `Vec`, `String`, and
    /// [`PulseSequence`] replace the Delphi-owned list and record copies.
    #[must_use]
    pub fn new(working: PulseSequence) -> Self {
        let repeat_from = working.repeat_from();
        Self {
            original: working.clone(),
            moment_inputs: moment_inputs(&working),
            working,
            repeat: RepeatState {
                enabled: repeat_from != 0,
                initialized: true,
            },
            repeat_from_input: repeat_from.to_string(),
            file_path: Some(PathBuf::from("noname.psg")),
            dialog: DialogState::default(),
            status: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Shown => self.on_show(),
            Message::MomentChanged(index, value) => {
                if index > 0
                    && let Some(input) = self.moment_inputs.get_mut(index)
                {
                    *input = value;
                }
            }
            Message::LevelChanged(index, value) => {
                if let Some(point) = self.working.points_mut().get_mut(index) {
                    point.level = value;
                }
            }
            Message::RepeatFromChanged(value) => self.repeat_from_input = value,
            Message::RepeatFromInvalid(message) => self.repeat_from_error(&message),
            Message::RepeatToggled(checked) => self.toggle_repeat(checked),
            Message::AddNew => self.add_new(),
            Message::RemoveLast => {
                self.remove_last();
            }
            Message::Clear => self.clear_sequence(),
            Message::Accept => {
                self.accept(true, false);
            }
            Message::AcceptAlternate(grid_result) => {
                self.accept(false, grid_result);
            }
            Message::CloseRequested => {
                self.dialog.last_close_allowed = Some(self.close_query());
            }
            Message::SaveAs => return self.begin_save_as(),
            Message::SaveAsSelected(selection) => return self.save_as_selected(selection),
            Message::SaveCompleted(result) => match result {
                Ok(()) => self.status = Some("Pulse-generator file saved".to_owned()),
                Err(error) => self.status = Some(error),
            },
            Message::Load => return Task::perform(pick_psg_file(), Message::LoadSelected),
            Message::LoadSelected(selection) => return self.load_selected(selection),
            Message::LoadCompleted(outcome) => {
                self.working = outcome.sequence;
                self.moment_inputs = moment_inputs(&self.working);
                self.status = outcome.error;
            }
        }

        Task::none()
    }

    /// Ports Ghidra function `FUN_013f76a0` at `0x013F76A0`.
    ///
    /// The clean-room grid uses fixed labels for the default point and one
    /// numbered moment and level pair for every later point.
    #[must_use]
    pub fn row_labels(&self) -> Vec<String> {
        let mut labels = vec!["Default".to_owned(), "Level".to_owned()];
        for index in 1..self.working.points().len() {
            labels.push(format!("Moment {index}"));
            labels.push(format!("Level {index}"));
        }
        labels
    }

    /// Ports Ghidra function `FUN_013f7aa0` at `0x013F7AA0`.
    ///
    /// The returned rows bind the first level and each later moment and level
    /// to the working model. Empty baseline rows use explicit placeholders.
    #[must_use]
    pub fn editor_rows(&self) -> Vec<GridRow> {
        let labels = self.row_labels();
        let mut rows = Vec::with_capacity(BASELINE_ROW_COUNT.max(labels.len()));
        if !self.working.points().is_empty() {
            rows.push(GridRow {
                label: labels[0].clone(),
                editor: GridEditor::None,
                placeholder: false,
            });
            rows.push(GridRow {
                label: labels[1].clone(),
                editor: GridEditor::Level(0),
                placeholder: false,
            });
        }

        for index in 1..self.working.points().len() {
            rows.push(GridRow {
                label: labels[index * 2].clone(),
                editor: GridEditor::Moment(index),
                placeholder: false,
            });
            rows.push(GridRow {
                label: labels[index * 2 + 1].clone(),
                editor: GridEditor::Level(index),
                placeholder: false,
            });
        }

        while rows.len() < BASELINE_ROW_COUNT {
            rows.push(GridRow {
                label: "Value".to_owned(),
                editor: GridEditor::None,
                placeholder: true,
            });
        }
        rows
    }

    /// Ports Ghidra function `FUN_013f7dc0` at `0x013F7DC0`.
    ///
    /// One validation error blocks one close attempt. The method always clears
    /// the guard for the next close request.
    pub const fn close_query(&mut self) -> bool {
        let can_close = !self.dialog.error_flag;
        self.dialog.error_flag = false;
        can_close
    }

    /// Ports Ghidra function `FUN_013f7de0` at `0x013F7DE0`.
    ///
    /// Normal mode validates the active model text and repeat range before it
    /// replaces the original sequence. Alternate mode accepts only an
    /// affirmative grid result and does not copy the sequence.
    pub fn accept(&mut self, normal_mode: bool, alternate_grid_result: bool) -> bool {
        if !normal_mode {
            self.dialog.accepted = alternate_grid_result;
            return alternate_grid_result;
        }

        let Some(repeat_from) = self.valid_repeat_from() else {
            self.show_settings_error(SETTINGS_ERROR);
            return false;
        };
        if !self.commit_grid() || repeat_from > self.working.points().len() {
            self.show_settings_error(SETTINGS_ERROR);
            return false;
        }

        self.working
            .set_repeat_from(if self.repeat.enabled { repeat_from } else { 0 });
        self.original = self.working.clone();
        self.dialog.accepted = true;
        self.status = None;
        true
    }

    /// Ports Ghidra function `FUN_013f82b0` at `0x013F82B0`.
    ///
    /// Iced presents validation text as window state instead of calling a
    /// process-global message-box API.
    pub fn show_settings_error(&mut self, message: &str) {
        self.dialog.error_flag = true;
        self.status = Some(message.to_owned());
    }

    /// Ports Ghidra function `FUN_013f8f10` at `0x013F8F10`.
    ///
    /// The recovered `PsgForm.OnShow` handler returns without reading or
    /// changing state. The iced lifecycle adapter therefore has no effect.
    pub const fn on_show(&mut self) {}

    /// Ports Ghidra function `FUN_013f8f80` at `0x013F8F80`.
    ///
    /// The recovered `eRepeatFrom.OnError` handler forwards the numeric
    /// editor's validation text to the shared settings-error presenter. Iced
    /// stores the text and close veto in window state instead of opening a
    /// process-global message box.
    pub fn repeat_from_error(&mut self, message: &str) {
        self.show_settings_error(message);
    }

    /// Ports Ghidra function `FUN_013f8870` at `0x013F8870`.
    ///
    /// The command validates editable moments before it opens the native save
    /// dialog. A canceled dialog leaves the stored path and disk unchanged.
    pub fn begin_save_as(&mut self) -> Task<Message> {
        if !self.commit_grid() {
            self.show_settings_error(SETTINGS_ERROR);
            return Task::none();
        }

        let default_name = self
            .file_path
            .as_deref()
            .and_then(Path::file_name)
            .and_then(|name| name.to_str())
            .unwrap_or("pulse.psg")
            .to_owned();
        Task::perform(pick_psg_destination(default_name), Message::SaveAsSelected)
    }

    fn save_as_selected(&mut self, selection: Option<PathBuf>) -> Task<Message> {
        let Some(path) = selection else {
            return Task::none();
        };
        let path = normalized_path(&path);
        self.file_path = Some(path.clone());
        let sequence = self.working.clone();
        Task::perform(
            async move { write_psg_file(path, &sequence).map_err(|error| error.to_string()) },
            Message::SaveCompleted,
        )
    }

    /// Ports Ghidra function `FUN_013f89d0` at `0x013F89D0`.
    ///
    /// Adds one zero moment and low level to the working sequence. Derived
    /// labels and editor rows grow from the model on the next iced view pass.
    pub fn add_new(&mut self) {
        self.working.append_default();
        self.moment_inputs.push("0".to_owned());
    }

    /// Ports Ghidra function `FUN_013f8bf0` at `0x013F8BF0`.
    ///
    /// Removes one trailing working point only when another point remains. It
    /// does not clamp the repeat index.
    pub fn remove_last(&mut self) -> bool {
        if !self.working.remove_last() {
            return false;
        }

        self.moment_inputs.pop();
        true
    }

    /// Ports Ghidra function `FUN_013f8d10` at `0x013F8D10`.
    ///
    /// Resets editable points to one zero and low point. The stored path,
    /// repeat controls, and original sequence remain unchanged.
    pub fn clear_sequence(&mut self) {
        self.working.reset_points();
        self.moment_inputs = moment_inputs(&self.working);
    }

    /// Ports Ghidra function `FUN_013f8da0` at `0x013F8DA0`.
    ///
    /// A canceled selection is a no-op. An accepted path is normalized, the
    /// working points are cleared, and the parser result replaces them. A read
    /// error keeps any valid prefix and does not change the repeat controls.
    pub fn load_selected(&mut self, selection: Option<PathBuf>) -> Task<Message> {
        let Some(path) = selection else {
            return Task::none();
        };
        let path = normalized_path(&path);
        self.file_path = Some(path.clone());
        let repeat_from = self.working.repeat_from();
        self.working = PulseSequence::empty();
        self.working.set_repeat_from(repeat_from);
        self.moment_inputs.clear();

        Task::perform(
            async move { load_psg(&path, repeat_from) },
            Message::LoadCompleted,
        )
    }

    /// Ports Ghidra function `FUN_013f8f20` at `0x013F8F20`.
    ///
    /// Initialization changes are ignored. Later changes write zero when
    /// repeat is off or the validated editor value when repeat is on.
    pub fn toggle_repeat(&mut self, checked: bool) {
        if !self.repeat.initialized {
            return;
        }

        let repeat_from = if checked {
            let Some(value) = self.valid_repeat_from() else {
                self.show_settings_error(SETTINGS_ERROR);
                return;
            };
            value
        } else {
            0
        };
        self.repeat.enabled = checked;
        self.working.set_repeat_from(repeat_from);
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let controls = row![
            button("Load").on_press(Message::Load),
            button("Save As...").on_press(Message::SaveAs),
            button("Add New").on_press(Message::AddNew),
            button("Remove Last").on_press(Message::RemoveLast),
            button("Clear").on_press(Message::Clear),
        ]
        .spacing(8);

        let mut point_rows = column![].spacing(8);
        for (index, point) in self.working.points().iter().enumerate() {
            let moment: Element<'_, Message> = if index == 0 {
                text("Default").width(Length::FillPortion(2)).into()
            } else {
                text_input("Moment", &self.moment_inputs[index])
                    .on_input(move |value| Message::MomentChanged(index, value))
                    .width(Length::FillPortion(2))
                    .into()
            };
            point_rows = point_rows.push(
                row![
                    moment,
                    pick_list(PulseLevel::ALL, Some(point.level), move |value| {
                        Message::LevelChanged(index, value)
                    })
                    .width(Length::FillPortion(2)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
            );
        }

        let repeat = row![
            checkbox("Repeat", self.repeat.enabled).on_toggle(Message::RepeatToggled),
            text("Repeat from:"),
            text_input("0", &self.repeat_from_input)
                .on_input(Message::RepeatFromChanged)
                .width(Length::Fixed(80.0)),
        ]
        .spacing(8)
        .align_y(Alignment::Center);

        let mut body = column![
            controls,
            scrollable(point_rows).height(Length::Fill),
            repeat,
            row![
                button("OK").on_press(Message::Accept),
                button("Close").on_press(Message::CloseRequested),
            ]
            .spacing(8),
        ]
        .spacing(12)
        .padding(16);
        if let Some(path) = &self.file_path {
            body = body.push(text(path.display().to_string()));
        }
        if let Some(status) = &self.status {
            body = body.push(text(status));
        }

        container(body)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }

    fn valid_repeat_from(&self) -> Option<usize> {
        self.repeat_from_input.trim().parse().ok()
    }

    fn commit_grid(&mut self) -> bool {
        for (index, input) in self.moment_inputs.iter().enumerate().skip(1) {
            let Ok(moment) = input.trim().parse::<f64>() else {
                return false;
            };
            if !moment.is_finite() {
                return false;
            }
            if let Some(point) = self.working.points_mut().get_mut(index) {
                point.moment = moment;
            }
        }
        true
    }
}

fn moment_inputs(sequence: &PulseSequence) -> Vec<String> {
    sequence
        .points()
        .iter()
        .map(|point| point.moment.to_string())
        .collect()
}

fn normalized_path(path: &Path) -> PathBuf {
    PathBuf::from(path.to_string_lossy().to_lowercase())
}

async fn pick_psg_file() -> Option<PathBuf> {
    AsyncFileDialog::new()
        .add_filter("Pulse generator", &["psg"])
        .pick_file()
        .await
        .map(|handle| handle.path().to_path_buf())
}

async fn pick_psg_destination(default_name: String) -> Option<PathBuf> {
    AsyncFileDialog::new()
        .add_filter("Pulse generator", &["psg"])
        .set_file_name(default_name)
        .save_file()
        .await
        .map(|handle| handle.path().to_path_buf())
}

fn load_psg(path: &Path, repeat_from: usize) -> LoadOutcome {
    let mut sequence = PulseSequence::empty();
    sequence.set_repeat_from(repeat_from);
    let error = read_psg_file(path, &mut sequence)
        .err()
        .map(|error| error.to_string());
    LoadOutcome { sequence, error }
}

#[cfg(test)]
mod tests {
    use tiara_core::pulse_generator::PulsePoint;

    use super::*;

    #[test]
    fn form_create_clones_the_sequence_and_initializes_repeat_and_file_state() {
        let mut sequence = PulseSequence::default();
        sequence.append_default();
        sequence.set_repeat_from(1);

        let window = Window::new(sequence.clone());

        assert_eq!(window.original, sequence);
        assert_eq!(window.working, sequence);
        assert_eq!(window.moment_inputs.len(), 2);
        assert!(window.repeat.enabled);
        assert!(window.repeat.initialized);
        assert_eq!(window.repeat_from_input, "1");
        assert_eq!(window.file_path, Some(PathBuf::from("noname.psg")));
        assert_eq!(window.editor_rows().len(), BASELINE_ROW_COUNT);
    }

    #[test]
    fn form_show_is_a_no_op() {
        let mut window = Window::default();
        let working = window.working.clone();
        let file_path = window.file_path.clone();

        drop(window.update(Message::Shown));

        assert_eq!(window.working, working);
        assert_eq!(window.file_path, file_path);
        assert!(window.status.is_none());
    }

    #[test]
    fn repeat_error_forwards_editor_text_and_vetoes_one_close() {
        let mut window = Window::default();

        drop(window.update(Message::RepeatFromInvalid(
            "Repeat index is invalid".to_owned(),
        )));

        assert_eq!(window.status.as_deref(), Some("Repeat index is invalid"));
        assert!(!window.close_query());
        assert!(window.close_query());
    }

    #[test]
    fn add_and_remove_rebuild_rows_and_preserve_the_first_point() {
        let mut window = Window::default();

        window.add_new();
        assert_eq!(window.working.points().len(), 2);
        assert_eq!(
            window.row_labels(),
            ["Default", "Level", "Moment 1", "Level 1"]
        );
        assert!(window.remove_last());
        assert!(!window.remove_last());
        assert_eq!(window.working.points(), &[PulsePoint::default()]);
        assert_eq!(window.editor_rows().len(), BASELINE_ROW_COUNT);
    }

    #[test]
    fn clear_keeps_file_and_repeat_state_but_resets_points() {
        let mut working = PulseSequence::default();
        working.set_repeat_from(1);
        let mut window = Window {
            working,
            file_path: Some(PathBuf::from("pulse.psg")),
            repeat: RepeatState {
                enabled: true,
                ..RepeatState::default()
            },
            repeat_from_input: "1".to_owned(),
            ..Window::default()
        };
        window.add_new();

        window.clear_sequence();

        assert_eq!(window.working.points(), &[PulsePoint::default()]);
        assert_eq!(window.working.repeat_from(), 1);
        assert_eq!(window.file_path, Some(PathBuf::from("pulse.psg")));
        assert!(window.repeat.enabled);
    }

    #[test]
    fn repeat_toggle_is_a_no_op_during_initialization() {
        let mut window = Window {
            repeat: RepeatState {
                initialized: false,
                ..RepeatState::default()
            },
            repeat_from_input: "1".to_owned(),
            ..Window::default()
        };

        window.toggle_repeat(true);

        assert!(!window.repeat.enabled);
        assert_eq!(window.working.repeat_from(), 0);
    }

    #[test]
    fn invalid_accept_blocks_one_close_attempt() {
        let mut window = Window::default();
        window.add_new();
        window.moment_inputs[1] = "not a number".to_owned();

        assert!(!window.accept(true, false));
        assert_eq!(window.status.as_deref(), Some(SETTINGS_ERROR));
        assert!(!window.close_query());
        assert!(window.close_query());
    }

    #[test]
    fn normal_accept_copies_valid_working_state_and_repeat_index() {
        let mut window = Window {
            repeat: RepeatState {
                enabled: true,
                ..RepeatState::default()
            },
            repeat_from_input: "1".to_owned(),
            ..Window::default()
        };
        window.add_new();
        window.moment_inputs[1] = "2.5".to_owned();

        assert!(window.accept(true, false));

        assert_eq!(window.original, window.working);
        assert_eq!(window.original.repeat_from(), 1);
        assert!((window.original.points()[1].moment - 2.5).abs() < f64::EPSILON);
    }

    #[test]
    fn accept_validates_repeat_range_even_when_repeat_is_off() {
        let mut window = Window {
            repeat_from_input: "2".to_owned(),
            ..Window::default()
        };

        assert!(!window.accept(true, false));
        assert_eq!(window.original, PulseSequence::default());
    }

    #[test]
    fn alternate_accept_does_not_copy_the_working_sequence() {
        let mut window = Window::default();
        window.add_new();

        assert!(!window.accept(false, false));
        assert_eq!(window.original.points().len(), 1);
        assert!(window.accept(false, true));
        assert_eq!(window.original.points().len(), 1);
    }

    #[test]
    fn canceled_load_keeps_the_window_state() {
        let mut window = Window::default();
        window.add_new();
        let before = window.working.clone();

        drop(window.load_selected(None));

        assert_eq!(window.working, before);
        assert_eq!(window.file_path, Some(PathBuf::from("noname.psg")));
    }
}
