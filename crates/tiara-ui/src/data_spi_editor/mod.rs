//! SPI transmitter data editor.
//!
//! `iced` supplies state, widgets, and asynchronous tasks. Pattern generation
//! and hexadecimal text parsing are composed from `tiara-core`.

use std::fmt;
use std::path::{Path, PathBuf};

use iced::widget::{
    button, checkbox, column, container, pick_list, row, scrollable, text, text_input,
};
use iced::{Alignment, Element, Length, Task};
use rfd::AsyncFileDialog;
use tiara_core::data_pattern::{
    PatternDescriptor, PatternMethod, PatternWidth, generate_u32_pattern,
};
use tiara_core::hexadecimal_text_file::load_hexadecimal_u32_file;

pub const TITLE: &str = "SPI Transmitter";
pub const FORM_RESOURCE: &str = "DataSPI";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct HelpRequest {
    pub form_resource: &'static str,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum NumericMode {
    #[default]
    Binary,
    Hexadecimal,
    Decimal,
}

impl NumericMode {
    pub const ALL: [Self; 3] = [Self::Binary, Self::Hexadecimal, Self::Decimal];
}

impl fmt::Display for NumericMode {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Binary => "Bin",
            Self::Hexadecimal => "Hex",
            Self::Decimal => "Dec",
        })
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct SimulationSettings {
    pub bit_count: u32,
    pub start_address: usize,
    pub stop_address: usize,
    pub step_time: f64,
    pub frame_time: f64,
}

impl Default for SimulationSettings {
    fn default() -> Self {
        Self {
            bit_count: 8,
            start_address: 0,
            stop_address: 0,
            step_time: 0.0,
            frame_time: 0.0,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct DataSpiRecord {
    pub words: Vec<u32>,
    pub mode: NumericMode,
    pub simulation: SimulationSettings,
    pub pattern: PatternDescriptor,
    pub repeat_pattern: bool,
}

impl Default for DataSpiRecord {
    fn default() -> Self {
        Self {
            words: vec![0; 8],
            mode: NumericMode::Binary,
            simulation: SimulationSettings {
                stop_address: 7,
                ..SimulationSettings::default()
            },
            pattern: default_pattern(7),
            repeat_pattern: false,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct GridRow {
    pub address: String,
    pub data: String,
}

#[derive(Debug, Clone)]
pub struct ImportDescriptor {
    bit_width: u32,
    values: Vec<u32>,
}

#[derive(Debug, Clone)]
pub enum Message {
    GridValueChanged(usize, String),
    ModeSelected(NumericMode),
    PatternLowChanged(String),
    PatternHighChanged(String),
    SimulationStartChanged(String),
    SimulationStopChanged(String),
    StepTimeChanged(String),
    FrameTimeChanged(String),
    BitCountChanged(String),
    RepeatChanged(bool),
    Clear,
    Fill,
    PatternModalClosed(Option<PatternDescriptor>),
    Load,
    LoadSelected(Option<PathBuf>),
    LoadCompleted(Result<ImportDescriptor, String>),
    Accept,
    AcceptAlternate(bool),
    Help,
    CloseRequested,
}

#[derive(Debug)]
struct SettingsDraft {
    pattern_low: String,
    pattern_high: String,
    simulation_start: String,
    simulation_stop: String,
    step_time: String,
    frame_time: String,
    bit_count: String,
}

impl SettingsDraft {
    fn from_record(record: &DataSpiRecord) -> Self {
        Self {
            pattern_low: format!("{:X}", record.pattern.first),
            pattern_high: format!("{:X}", record.pattern.last),
            simulation_start: format!("{:X}", record.simulation.start_address),
            simulation_stop: format!("{:X}", record.simulation.stop_address),
            step_time: record.simulation.step_time.to_string(),
            frame_time: record.simulation.frame_time.to_string(),
            bit_count: record.simulation.bit_count.to_string(),
        }
    }
}

#[derive(Debug)]
struct Lifecycle {
    initialized: bool,
    pattern_modal_open: bool,
    accepted: bool,
}

impl Default for Lifecycle {
    fn default() -> Self {
        Self {
            initialized: true,
            pattern_modal_open: false,
            accepted: false,
        }
    }
}

#[derive(Debug)]
pub struct Window {
    target: DataSpiRecord,
    staged_words: Vec<u32>,
    grid_inputs: Vec<String>,
    mode: NumericMode,
    bit_width: u32,
    pattern: PatternDescriptor,
    draft: SettingsDraft,
    repeat_pattern: bool,
    lifecycle: Lifecycle,
    error_flag: bool,
    last_close_allowed: Option<bool>,
    focused_grid_input: Option<usize>,
    help_request: Option<HelpRequest>,
    status: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(DataSpiRecord::default(), 8)
    }
}

impl Window {
    /// Ports Ghidra function `FUN_014109f0` at `0x014109F0`.
    ///
    /// Creates private staged storage from the caller record, restores every
    /// editable setting, derives the numeric limits, and builds the first grid.
    #[must_use]
    pub fn new(target: DataSpiRecord, bit_width: u32) -> Self {
        let staged_words = target.words.clone();
        let mode = target.mode;
        let pattern = target.pattern;
        let grid_inputs = format_words(&staged_words, mode, bit_width);
        let draft = SettingsDraft::from_record(&target);
        let repeat_pattern = target.repeat_pattern;
        Self {
            target,
            staged_words,
            grid_inputs,
            mode,
            bit_width,
            pattern,
            draft,
            repeat_pattern,
            lifecycle: Lifecycle::default(),
            error_flag: false,
            last_close_allowed: None,
            focused_grid_input: None,
            help_request: None,
            status: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::GridValueChanged(index, value) => {
                if let Some(input) = self.grid_inputs.get_mut(index) {
                    *input = value;
                }
            }
            Message::ModeSelected(mode) => {
                self.change_mode(mode);
            }
            Message::PatternLowChanged(value) => self.draft.pattern_low = value,
            Message::PatternHighChanged(value) => self.draft.pattern_high = value,
            Message::SimulationStartChanged(value) => self.draft.simulation_start = value,
            Message::SimulationStopChanged(value) => self.draft.simulation_stop = value,
            Message::StepTimeChanged(value) => self.draft.step_time = value,
            Message::FrameTimeChanged(value) => self.draft.frame_time = value,
            Message::BitCountChanged(value) => self.draft.bit_count = value,
            Message::RepeatChanged(value) => self.repeat_pattern = value,
            Message::Clear => self.clear_staged_words(),
            Message::Fill => {
                self.open_pattern_modal();
            }
            Message::PatternModalClosed(result) => self.finish_pattern_modal(result),
            Message::Load => return Task::perform(pick_text_file(), Message::LoadSelected),
            Message::LoadSelected(selection) => return self.load_selected(selection),
            Message::LoadCompleted(result) => match result {
                Ok(descriptor) => self.replace_from_import(descriptor),
                Err(error) => self.record_error(error),
            },
            Message::Accept => {
                self.commit_direct(true, false);
            }
            Message::AcceptAlternate(grid_result) => {
                self.commit_direct(false, grid_result);
            }
            Message::Help => {
                self.request_help();
            }
            Message::CloseRequested => {
                self.last_close_allowed = Some(self.close_query());
            }
        }
        Task::none()
    }

    /// Ports Ghidra function `FUN_01410d70` at `0x01410D70`.
    ///
    /// Rebuilds one Address/Data row for every staged word. The address format
    /// is fixed; only the data representation follows the selected mode.
    #[must_use]
    pub fn grid_rows(&self) -> Vec<GridRow> {
        self.grid_inputs
            .iter()
            .enumerate()
            .map(|(index, data)| GridRow {
                address: format!("{index:X}"),
                data: data.clone(),
            })
            .collect()
    }

    /// Ports Ghidra function `FUN_014112e0` at `0x014112E0`.
    ///
    /// Parses hexadecimal addresses and numeric simulation fields. It rejects
    /// reversed ranges and addresses outside the staged capacity.
    fn collect_settings(&self) -> Result<ValidatedSettings, String> {
        let pattern_low = parse_hex_address("Affected address (low)", &self.draft.pattern_low)?;
        let pattern_high = parse_hex_address("Affected address (high)", &self.draft.pattern_high)?;
        let simulation_start = parse_hex_address("Start address", &self.draft.simulation_start)?;
        let simulation_stop = parse_hex_address("Stop address", &self.draft.simulation_stop)?;
        if pattern_high < pattern_low {
            return Err("Affected address (low) exceeds affected address (high)".to_owned());
        }
        if simulation_stop < simulation_start {
            return Err("Start address exceeds stop address".to_owned());
        }
        if pattern_high >= self.staged_words.len() || simulation_stop >= self.staged_words.len() {
            return Err("Address exceeds SPI data capacity".to_owned());
        }
        let bit_count = parse_u32("Bit count", &self.draft.bit_count)?;
        let step_time = parse_finite("Step time", &self.draft.step_time)?;
        let frame_time = parse_finite("Frame time", &self.draft.frame_time)?;
        Ok(ValidatedSettings {
            pattern: PatternDescriptor {
                first: pattern_low,
                last: pattern_high,
                ..self.pattern
            },
            simulation: SimulationSettings {
                bit_count,
                start_address: simulation_start,
                stop_address: simulation_stop,
                step_time,
                frame_time,
            },
        })
    }

    /// Ports Ghidra function `FUN_01411850` at `0x01411850`.
    ///
    /// Normal mode copies valid grid words to the caller first, then validates
    /// and commits settings. A late error keeps the recovered partial word copy.
    pub fn commit_direct(&mut self, normal_mode: bool, alternate_grid_result: bool) -> bool {
        if !normal_mode {
            self.lifecycle.accepted = alternate_grid_result;
            return alternate_grid_result;
        }
        let Ok(words) = self.parse_grid() else {
            self.record_error("Invalid SPI data value".to_owned());
            return false;
        };
        self.staged_words = words;
        self.target.words.clone_from(&self.staged_words);
        let settings = match self.collect_settings() {
            Ok(settings) => settings,
            Err(error) => {
                self.record_error(error);
                return false;
            }
        };
        self.pattern = settings.pattern;
        self.target.pattern = settings.pattern;
        self.target.simulation = settings.simulation;
        self.target.mode = self.mode;
        self.target.repeat_pattern = self.repeat_pattern;
        self.lifecycle.accepted = true;
        self.status = None;
        true
    }

    /// Ports Ghidra function `FUN_01411980` at `0x01411980`.
    ///
    /// Changes representation only after initialization and only for a new
    /// mode. Unsynchronized grid text is discarded during the rebuild.
    pub fn change_mode(&mut self, mode: NumericMode) -> bool {
        if !self.lifecycle.initialized || self.mode == mode {
            return false;
        }
        self.mode = mode;
        self.rebuild_grid();
        true
    }

    /// Ports Ghidra function `FUN_01411ab0` at `0x01411AB0`.
    ///
    /// Validates outer settings before it requests the shared pattern modal.
    /// The modal owns a descriptor copy and cannot access staged words.
    pub fn open_pattern_modal(&mut self) -> bool {
        match self.collect_settings() {
            Ok(settings) => {
                self.pattern = settings.pattern;
                self.lifecycle.pattern_modal_open = true;
                self.status = Some("Pattern dialog requested".to_owned());
                true
            }
            Err(error) => {
                self.record_error(error);
                false
            }
        }
    }

    fn finish_pattern_modal(&mut self, result: Option<PatternDescriptor>) {
        if !self.lifecycle.pattern_modal_open {
            return;
        }
        self.lifecycle.pattern_modal_open = false;
        if let Some(descriptor) = result {
            self.pattern = descriptor;
            self.draft.pattern_low = format!("{:X}", descriptor.first);
            self.draft.pattern_high = format!("{:X}", descriptor.last);
            self.clear_staged_words();
            if let Err(error) = self.apply_selected_pattern() {
                self.record_error(error);
            }
        }
        if let (Ok(high), Ok(stop)) = (
            usize::from_str_radix(self.draft.pattern_high.trim(), 16),
            usize::from_str_radix(self.draft.simulation_stop.trim(), 16),
        ) && high > stop
        {
            self.draft.simulation_stop = format!("{high:X}");
        }
    }

    /// Ports Ghidra function `FUN_01411ca0` at `0x01411CA0`.
    ///
    /// Writes zero to every staged word without changing count, mode, settings,
    /// repeat state, or the caller-owned record, then rebuilds the grid.
    pub fn clear_staged_words(&mut self) {
        self.staged_words.fill(0);
        self.rebuild_grid();
    }

    /// Ports Ghidra function `FUN_01411d50` at `0x01411D50`.
    ///
    /// Adapts the accepted descriptor to the shared pattern engine for 32-bit
    /// SPI words and rebuilds the display after success.
    ///
    /// # Errors
    ///
    /// Returns the shared pattern error when the width or selected range is
    /// invalid.
    pub fn apply_selected_pattern(&mut self) -> Result<(), String> {
        let width = PatternWidth::new(self.bit_width).map_err(|error| error.to_string())?;
        generate_u32_pattern(&mut self.staged_words, self.pattern, width)
            .map_err(|error| error.to_string())?;
        self.rebuild_grid();
        Ok(())
    }

    /// Ports Ghidra function `FUN_01411de0` at `0x01411DE0`.
    ///
    /// Creates zero-filled typed temporary storage with the current count and
    /// bit width, avoiding the recovered byte-size mismatch.
    #[must_use]
    pub fn prepare_import(&self) -> ImportDescriptor {
        ImportDescriptor {
            bit_width: self.bit_width,
            values: vec![0; self.staged_words.len()],
        }
    }

    /// Ports Ghidra function `FUN_01411e20` at `0x01411E20`.
    ///
    /// Replaces the complete staged word array after a successful import. A
    /// short file has already left zeroes in the temporary tail.
    pub fn replace_from_import(&mut self, descriptor: ImportDescriptor) {
        debug_assert_eq!(descriptor.bit_width, self.bit_width);
        self.staged_words = descriptor.values;
        self.rebuild_grid();
        self.status = None;
    }

    /// Ports Ghidra function `FUN_01411e50` at `0x01411E50`.
    ///
    /// Cancellation is a no-op. An accepted text file is parsed into temporary
    /// zero-filled storage; staged words change only after a complete parse.
    pub fn load_selected(&self, selection: Option<PathBuf>) -> Task<Message> {
        let Some(path) = selection else {
            return Task::none();
        };
        let descriptor = self.prepare_import();
        Task::perform(
            async move { load_import(&path, descriptor) },
            Message::LoadCompleted,
        )
    }

    /// Ports Ghidra function `FUN_01411090` at `0x01411090`.
    ///
    /// Allows closing only when the current operation has no error, then clears
    /// the transient error flag so the user can correct the input and retry.
    pub const fn close_query(&mut self) -> bool {
        let can_close = !self.error_flag;
        self.error_flag = false;
        can_close
    }

    /// Ports Ghidra function `FUN_01411100` at `0x01411100`.
    ///
    /// Requests focus for the first data editor when the form becomes visible.
    pub fn show(&mut self) -> Task<Message> {
        self.focused_grid_input = Some(0);
        text_input::focus(grid_input_id(0))
    }

    /// Ports Ghidra function `FUN_01411a00` at `0x01411A00`.
    ///
    /// Requests the shared TINA help resolver for this form. The application
    /// host owns localized help-file resolution and external help dispatch.
    pub const fn request_help(&mut self) {
        self.help_request = Some(HelpRequest {
            form_resource: FORM_RESOURCE,
        });
    }

    #[must_use]
    pub const fn take_help_request(&mut self) -> Option<HelpRequest> {
        self.help_request.take()
    }

    #[must_use]
    pub const fn target(&self) -> &DataSpiRecord {
        &self.target
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let commands = row![
            button("Clear").on_press(Message::Clear),
            button("Fill...").on_press(Message::Fill),
            button("Load").on_press(Message::Load),
            pick_list(NumericMode::ALL, Some(self.mode), Message::ModeSelected),
        ]
        .spacing(8)
        .align_y(Alignment::Center);
        let mut grid = column![row![
            text("Address").width(Length::FillPortion(1)),
            text("Data").width(Length::FillPortion(3)),
        ]]
        .spacing(6);
        for index in 0..self.grid_inputs.len() {
            grid = grid.push(row![
                text(format!("{index:X}")).width(Length::FillPortion(1)),
                text_input("", &self.grid_inputs[index])
                    .id(grid_input_id(index))
                    .on_input(move |value| Message::GridValueChanged(index, value))
                    .width(Length::FillPortion(3)),
            ]);
        }
        let settings = column![
            field_row(
                "Affected address (low)",
                &self.draft.pattern_low,
                Message::PatternLowChanged
            ),
            field_row(
                "Affected address (high)",
                &self.draft.pattern_high,
                Message::PatternHighChanged
            ),
            field_row(
                "Start address",
                &self.draft.simulation_start,
                Message::SimulationStartChanged
            ),
            field_row(
                "Stop address",
                &self.draft.simulation_stop,
                Message::SimulationStopChanged
            ),
            field_row("Step time", &self.draft.step_time, Message::StepTimeChanged),
            field_row(
                "Frame time",
                &self.draft.frame_time,
                Message::FrameTimeChanged
            ),
            field_row("Bit count", &self.draft.bit_count, Message::BitCountChanged),
            checkbox("Repeat pattern", self.repeat_pattern).on_toggle(Message::RepeatChanged),
        ]
        .spacing(6);
        let mut body = column![
            commands,
            row![
                container(scrollable(grid)).width(Length::FillPortion(3)),
                container(settings).width(Length::FillPortion(2)),
            ]
            .spacing(12)
            .height(Length::Fill),
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::CloseRequested),
                button("Help").on_press(Message::Help),
            ]
            .spacing(8),
        ]
        .padding(16)
        .spacing(12);
        if self.lifecycle.pattern_modal_open {
            body = body.push(text("Pattern dialog is open"));
        }
        if let Some(status) = &self.status {
            body = body.push(text(status));
        }
        container(body)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }

    fn parse_grid(&self) -> Result<Vec<u32>, ()> {
        let limit = width_mask(self.bit_width);
        self.grid_inputs
            .iter()
            .map(|value| {
                let parsed = match self.mode {
                    NumericMode::Binary => u32::from_str_radix(value.trim(), 2),
                    NumericMode::Hexadecimal => u32::from_str_radix(value.trim(), 16),
                    NumericMode::Decimal => value.trim().parse(),
                }
                .map_err(|_| ())?;
                (parsed <= limit).then_some(parsed).ok_or(())
            })
            .collect()
    }

    fn rebuild_grid(&mut self) {
        self.grid_inputs = format_words(&self.staged_words, self.mode, self.bit_width);
    }

    fn record_error(&mut self, error: String) {
        if !self.error_flag {
            self.status = Some(error);
        }
        self.error_flag = true;
    }
}

#[derive(Debug)]
struct ValidatedSettings {
    pattern: PatternDescriptor,
    simulation: SimulationSettings,
}

const fn default_pattern(last: usize) -> PatternDescriptor {
    PatternDescriptor {
        method: PatternMethod::FillZero,
        first: 0,
        last,
        initial: 0,
        step: 0,
        limit: 0,
    }
}

fn format_words(words: &[u32], mode: NumericMode, bit_width: u32) -> Vec<String> {
    let binary_width = usize::try_from(bit_width).unwrap_or(32);
    let hex_width = usize::try_from(bit_width.div_ceil(4)).unwrap_or(8);
    words
        .iter()
        .map(|word| match mode {
            NumericMode::Binary => format!("{word:0binary_width$b}"),
            NumericMode::Hexadecimal => format!("{word:0hex_width$X}"),
            NumericMode::Decimal => word.to_string(),
        })
        .collect()
}

fn grid_input_id(index: usize) -> text_input::Id {
    text_input::Id::new(format!("data-spi-grid-{index}"))
}

const fn width_mask(bit_width: u32) -> u32 {
    if bit_width >= u32::BITS {
        u32::MAX
    } else {
        (1_u32 << bit_width) - 1
    }
}

fn parse_hex_address(label: &str, value: &str) -> Result<usize, String> {
    usize::from_str_radix(value.trim(), 16).map_err(|_| format!("{label}: invalid value!"))
}

/// Ports Ghidra function `FUN_014111b0` at `0x014111B0`.
///
/// The Iced port uses `u32::from_str` instead of a VCL integer editor. The
/// returned message follows the same first-error path through `record_error`.
fn parse_u32(label: &str, value: &str) -> Result<u32, String> {
    value
        .trim()
        .parse()
        .map_err(|_| format!("{label}: invalid value!"))
}

/// Ports Ghidra function `FUN_01411190` at `0x01411190`.
///
/// The Iced port uses `f64::from_str` instead of VCL float-editor `OnError`
/// events. The returned message follows the same first-error path through
/// `record_error`.
fn parse_finite(label: &str, value: &str) -> Result<f64, String> {
    let parsed = value
        .trim()
        .parse::<f64>()
        .map_err(|_| format!("{label}: invalid value!"))?;
    parsed
        .is_finite()
        .then_some(parsed)
        .ok_or_else(|| format!("{label}: invalid value!"))
}

fn field_row<'a>(
    label: &'a str,
    value: &'a str,
    on_input: fn(String) -> Message,
) -> iced::widget::Row<'a, Message> {
    row![
        text(label).width(Length::FillPortion(3)),
        text_input("", value)
            .on_input(on_input)
            .width(Length::FillPortion(2)),
    ]
    .spacing(6)
    .align_y(Alignment::Center)
}

async fn pick_text_file() -> Option<PathBuf> {
    AsyncFileDialog::new()
        .add_filter("Text file", &["txt"])
        .pick_file()
        .await
        .map(|handle| handle.path().to_path_buf())
}

fn load_import(path: &Path, mut descriptor: ImportDescriptor) -> Result<ImportDescriptor, String> {
    load_hexadecimal_u32_file(path, &mut descriptor.values).map_err(|error| error.to_string())?;
    Ok(descriptor)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn grid_rebuild_formats_each_mode_without_changing_staging() {
        let target = DataSpiRecord {
            words: vec![1, 10],
            ..DataSpiRecord::default()
        };
        let mut window = Window::new(target, 8);
        assert_eq!(window.grid_inputs, ["00000001", "00001010"]);
        assert!(window.change_mode(NumericMode::Hexadecimal));
        assert_eq!(window.grid_inputs, ["01", "0A"]);
        assert!(window.change_mode(NumericMode::Decimal));
        assert_eq!(window.grid_inputs, ["1", "10"]);
        assert_eq!(window.staged_words, [1, 10]);
    }

    #[test]
    fn mode_change_discards_unsynchronized_text() {
        let mut window = Window::default();
        window.grid_inputs[0] = "11111111".to_owned();
        window.change_mode(NumericMode::Hexadecimal);
        assert_eq!(window.grid_inputs[0], "00");
        assert_eq!(window.staged_words[0], 0);
    }

    #[test]
    fn clear_preserves_count_settings_and_target() {
        let target = DataSpiRecord {
            words: vec![1, 2, 3],
            repeat_pattern: true,
            ..DataSpiRecord::default()
        };
        let mut window = Window::new(target, 8);
        window.clear_staged_words();
        assert_eq!(window.staged_words, [0, 0, 0]);
        assert!(window.repeat_pattern);
        assert_eq!(window.target.words, [1, 2, 3]);
    }

    #[test]
    fn validation_rejects_reversed_and_large_ranges() {
        let mut window = Window::default();
        window.draft.pattern_low = "3".to_owned();
        window.draft.pattern_high = "2".to_owned();
        assert!(window.collect_settings().is_err());
        window.draft.pattern_low = "0".to_owned();
        window.draft.pattern_high = "8".to_owned();
        assert!(window.collect_settings().is_err());
    }

    #[test]
    fn late_error_keeps_direct_word_copy_only() {
        let mut window = Window::default();
        let simulation = window.target.simulation.clone();
        window.grid_inputs[0] = "00000101".to_owned();
        window.draft.pattern_high = "FFFF".to_owned();
        assert!(!window.commit_direct(true, false));
        assert_eq!(window.target.words[0], 5);
        assert_eq!(window.target.simulation, simulation);
        assert!(!window.close_query());
        assert!(window.close_query());
    }

    #[test]
    fn direct_commit_writes_all_valid_state() {
        let mut window = Window::default();
        window.grid_inputs[0] = "00000101".to_owned();
        window.repeat_pattern = true;
        assert!(window.commit_direct(true, false));
        assert_eq!(window.target.words[0], 5);
        assert!(window.target.repeat_pattern);
    }

    #[test]
    fn accepted_fill_uses_shared_pattern_generator() {
        let mut window = Window::default();
        assert!(window.open_pattern_modal());
        let descriptor = PatternDescriptor {
            method: PatternMethod::FillOne,
            first: 1,
            last: 3,
            initial: 0xFF,
            step: 0,
            limit: 0,
        };
        window.finish_pattern_modal(Some(descriptor));
        assert_eq!(window.staged_words, [0, 0xFF, 0xFF, 0xFF, 0, 0, 0, 0]);
    }

    #[test]
    fn canceled_fill_keeps_words_and_extends_stop() {
        let mut window = Window::default();
        window.draft.pattern_high = "5".to_owned();
        window.draft.simulation_stop = "2".to_owned();
        window.lifecycle.pattern_modal_open = true;
        let words = window.staged_words.clone();
        window.finish_pattern_modal(None);
        assert_eq!(window.staged_words, words);
        assert_eq!(window.draft.simulation_stop, "5");
    }

    #[test]
    fn import_replaces_the_full_staged_buffer() {
        let mut window = Window::default();
        window.replace_from_import(ImportDescriptor {
            bit_width: 8,
            values: vec![1, 2, 0, 0, 0, 0, 0, 0],
        });
        assert_eq!(window.staged_words, [1, 2, 0, 0, 0, 0, 0, 0]);
        assert_eq!(window.grid_inputs[0], "00000001");
    }

    #[test]
    fn canceled_load_is_a_no_op() {
        let window = Window::default();
        drop(window.load_selected(None));
        assert_eq!(window.staged_words, vec![0; 8]);
    }

    #[test]
    fn construction_stages_the_complete_caller_record() {
        let target = DataSpiRecord {
            words: vec![1, 2],
            mode: NumericMode::Hexadecimal,
            simulation: SimulationSettings {
                bit_count: 16,
                start_address: 0,
                stop_address: 1,
                step_time: 0.5,
                frame_time: 1.0,
            },
            pattern: PatternDescriptor {
                method: PatternMethod::CountUp,
                first: 0,
                last: 1,
                initial: 1,
                step: 1,
                limit: 0xFF,
            },
            repeat_pattern: true,
        };
        let window = Window::new(target.clone(), 16);
        assert_eq!(window.target, target);
        assert_eq!(window.staged_words, [1, 2]);
        assert_eq!(window.grid_inputs, ["0001", "0002"]);
        assert!(window.lifecycle.initialized);
    }

    #[test]
    fn show_focuses_the_first_data_input() {
        let mut window = Window::default();
        drop(window.show());
        assert_eq!(window.focused_grid_input, Some(0));
    }

    #[test]
    fn help_requests_the_shared_form_context() {
        let mut window = Window::default();
        drop(window.update(Message::Help));
        assert_eq!(
            window.take_help_request(),
            Some(HelpRequest {
                form_resource: FORM_RESOURCE,
            })
        );
    }

    #[test]
    fn numeric_parser_errors_use_the_close_veto_path() {
        let mut window = Window::default();
        window.draft.step_time = "not-a-number".to_owned();
        assert!(!window.commit_direct(true, false));
        assert_eq!(window.status.as_deref(), Some("Step time: invalid value!"));
        assert!(!window.close_query());
        assert!(window.close_query());

        window.draft.step_time = "0".to_owned();
        window.draft.bit_count = "not-an-integer".to_owned();
        assert!(!window.commit_direct(true, false));
        assert_eq!(window.status.as_deref(), Some("Bit count: invalid value!"));
    }
}
