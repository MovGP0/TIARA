//! Digital Signal Generator control coordination.
//!
//! These types keep recovered UI orchestration independent from iced widgets,
//! graph implementations, native generators, and waveform containers. The
//! standard library supplies enums, slices, `Result`, and ordered callbacks;
//! existing adapters retain ownership of specialized numeric and graph work.

use std::fmt;

use crate::digital_signal_generator::{
    ChannelRoutingAdapter, DisplayScroll, GenerationMode, GeneratorChannel,
    recompute_active_channel_indexes,
};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SettingCategory {
    Mode,
    ClockSource,
    TriggerSource,
    ThresholdMode,
}

impl SettingCategory {
    const ALL: [Self; 4] = [
        Self::Mode,
        Self::ClockSource,
        Self::TriggerSource,
        Self::ThresholdMode,
    ];

    const fn index(self) -> usize {
        match self {
            Self::Mode => 0,
            Self::ClockSource => 1,
            Self::TriggerSource => 2,
            Self::ThresholdMode => 3,
        }
    }
}

pub trait GeneratorSettingsAdapter {
    fn choices(&mut self, category: SettingCategory) -> Vec<String>;
    fn current_index(&mut self, category: SettingCategory) -> Option<u32>;
    fn set_index(&mut self, category: SettingCategory, index: u32);
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct SettingsControlModel {
    down: [bool; 4],
    items: Vec<String>,
    selected: Option<u32>,
}

impl SettingsControlModel {
    #[must_use]
    pub fn items(&self) -> &[String] {
        &self.items
    }

    #[must_use]
    pub const fn selected(&self) -> Option<u32> {
        self.selected
    }

    pub const fn set_down(&mut self, category: SettingCategory, down: bool) {
        self.down[category.index()] = down;
    }

    /// Reimplements Ghidra function `FUN_01510170` at `0x01510170`.
    ///
    /// No selection is a no-op. A valid index is forwarded once to every down
    /// category, preserving the recovered independent button tests. Normal
    /// grouped-button behavior keeps only one category down.
    pub fn apply_selection(
        &self,
        selected: Option<u32>,
        adapter: &mut dyn GeneratorSettingsAdapter,
    ) -> bool {
        let Some(selected) = selected else {
            return false;
        };
        for category in SettingCategory::ALL {
            if self.down[category.index()] {
                adapter.set_index(category, selected);
            }
        }
        true
    }

    /// Reimplements Ghidra function `FUN_01510240` at `0x01510240`.
    pub fn show_trigger(&mut self, down: bool, adapter: &mut dyn GeneratorSettingsAdapter) -> bool {
        self.show(SettingCategory::TriggerSource, down, adapter)
    }

    /// Reimplements Ghidra function `FUN_015102c0` at `0x015102C0`.
    pub fn show_mode(&mut self, down: bool, adapter: &mut dyn GeneratorSettingsAdapter) -> bool {
        self.show(SettingCategory::Mode, down, adapter)
    }

    /// Reimplements Ghidra function `FUN_01511ff0` at `0x01511FF0`.
    pub fn show_clock(&mut self, down: bool, adapter: &mut dyn GeneratorSettingsAdapter) -> bool {
        self.show(SettingCategory::ClockSource, down, adapter)
    }

    /// Reimplements Ghidra function `FUN_01512070` at `0x01512070`.
    pub fn show_threshold(
        &mut self,
        down: bool,
        adapter: &mut dyn GeneratorSettingsAdapter,
    ) -> bool {
        self.show(SettingCategory::ThresholdMode, down, adapter)
    }

    fn show(
        &mut self,
        category: SettingCategory,
        down: bool,
        adapter: &mut dyn GeneratorSettingsAdapter,
    ) -> bool {
        self.set_down(category, down);
        if !down {
            return false;
        }
        self.items = adapter.choices(category);
        self.selected = adapter.current_index(category);
        true
    }
}

pub trait ChannelComboAdapter {
    fn set_item_index(&mut self, index: i32);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ChannelEndpointModel {
    pub from: i32,
    pub to: i32,
}

impl ChannelEndpointModel {
    /// Reimplements Ghidra function `FUN_01508e80` at `0x01508E80`.
    pub fn show_from(&self, combo: &mut dyn ChannelComboAdapter) {
        combo.set_item_index(self.from);
    }

    /// Reimplements Ghidra function `FUN_01508eb0` at `0x01508EB0`.
    pub fn show_to(&self, combo: &mut dyn ChannelComboAdapter) {
        combo.set_item_index(self.to);
    }
}

pub trait TinaTransferAdapter {
    fn transfer_current_model(&mut self);
}

/// Reimplements Ghidra function `FUN_015103a0` at `0x015103A0`.
///
/// The wrapper forwards the current model to the established Tina-generator
/// transfer adapter. It returns no count or status and performs no file work.
pub fn transfer_to_tina_generators(adapter: &mut dyn TinaTransferAdapter) {
    adapter.transfer_current_model();
}

pub trait TinaReloadAdapter {
    fn clear_channels(&mut self);
    fn copy_current_channels(&mut self) -> usize;
    fn select_first_and_sync(&mut self);
    fn reset_and_derive_range(&mut self);
    fn refresh_controls_and_plot(&mut self);
    fn reindex_and_apply_channels(&mut self);
}

/// Reimplements Ghidra function `FUN_015103c0` at `0x015103C0`.
///
/// Existing channels are cleared before source channels are copied. A nonempty
/// result selects and synchronizes the first channel. Range, controls, plot,
/// indexes, and live channel state are then rebuilt in recovered order.
pub fn reload_from_tina_generator(adapter: &mut dyn TinaReloadAdapter) {
    adapter.clear_channels();
    if adapter.copy_current_channels() > 0 {
        adapter.select_first_and_sync();
    }
    adapter.reset_and_derive_range();
    adapter.refresh_controls_and_plot();
    adapter.reindex_and_apply_channels();
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PeriodEditOperation {
    Decrease,
    Increase,
    Typed,
}

pub trait PeriodEditAdapter {
    type Error;

    fn period(&self) -> f64;

    /// Applies the selected numeric-editor operation.
    ///
    /// # Errors
    ///
    /// Returns the adapter's parse, validation, or model-normalization error.
    fn apply_operation(&mut self, operation: PeriodEditOperation) -> Result<(), Self::Error>;
    fn normalize_time_scale(&self, ratio: f64) -> f64;
    fn rewrite_period_edit(&mut self, period: f64);
    fn store_graph_period(&mut self, period: f64);
    fn scale_channel_times(&mut self, ratio: f64);
    fn time_axis_active(&self) -> bool;
    fn rebuild_plot_data(&mut self);
    fn scale_x_state(&mut self, ratio: f64);
    fn refresh_selected_bound(&mut self);
    fn refresh_channel_display(&mut self);
    fn redraw(&mut self);
}

/// Reimplements Ghidra function `FUN_0150fe40` at `0x0150FE40`.
///
/// The numeric-editor adapter owns engineering stepping, typed parsing, model
/// validation, and normalization. After success, this coordinator rewrites the
/// normalized value, updates graph timing, scales all channel times, and, in
/// Time mode only, rebuilds and rescales the displayed X state.
///
/// # Errors
///
/// Returns the numeric editor's validation error before downstream graph work.
pub fn apply_period_edit<A>(operation: PeriodEditOperation, adapter: &mut A) -> Result<(), A::Error>
where
    A: PeriodEditAdapter,
{
    let old_period = adapter.period();
    adapter.apply_operation(operation)?;
    let period = adapter.period();
    adapter.rewrite_period_edit(period);
    adapter.store_graph_period(period);
    let ratio = adapter.normalize_time_scale(period / old_period);
    adapter.scale_channel_times(ratio);
    if adapter.time_axis_active() {
        adapter.rebuild_plot_data();
        adapter.scale_x_state(ratio);
        adapter.refresh_selected_bound();
        adapter.refresh_channel_display();
        adapter.redraw();
    }
    Ok(())
}

pub trait AxisDisplayAdapter {
    fn rebuild_channel_plots(&mut self, mode: AxisMode, period: f64);
    fn set_axis_label(&mut self, title: &'static str, unit: &'static str);
    fn reindex_and_apply_channels(&mut self);
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum AxisMode {
    #[default]
    Time,
    Click,
}

#[derive(Debug, Clone, PartialEq)]
pub struct AxisModeModel {
    mode: AxisMode,
    pub left: f64,
    pub right: f64,
    pub cursor_a: f64,
    pub cursor_b: f64,
}

impl AxisModeModel {
    #[must_use]
    pub const fn new(mode: AxisMode, left: f64, right: f64, cursor_a: f64, cursor_b: f64) -> Self {
        Self {
            mode,
            left,
            right,
            cursor_a,
            cursor_b,
        }
    }

    #[must_use]
    pub const fn mode(&self) -> AxisMode {
        self.mode
    }

    /// Reimplements Ghidra function `FUN_01512d60` at `0x01512D60`.
    pub fn switch_to_time(
        &mut self,
        button_down: bool,
        period: f64,
        display: &mut dyn AxisDisplayAdapter,
    ) -> bool {
        if !button_down || self.mode == AxisMode::Time {
            return false;
        }
        self.mode = AxisMode::Time;
        display.rebuild_channel_plots(self.mode, period);
        self.scale(period);
        display.set_axis_label("Time", "[s]");
        display.reindex_and_apply_channels();
        true
    }

    /// Reimplements Ghidra function `FUN_01512e40` at `0x01512E40`.
    pub fn switch_to_click(
        &mut self,
        button_down: bool,
        period: f64,
        display: &mut dyn AxisDisplayAdapter,
    ) -> bool {
        if !button_down || self.mode == AxisMode::Click {
            return false;
        }
        self.mode = AxisMode::Click;
        display.rebuild_channel_plots(self.mode, period);
        self.scale(1.0 / period);
        display.set_axis_label("Click", "");
        display.reindex_and_apply_channels();
        true
    }

    fn scale(&mut self, factor: f64) {
        self.left *= factor;
        self.right *= factor;
        self.cursor_a *= factor;
        self.cursor_b *= factor;
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum WaveformEditOperation {
    Set,
    Insert,
    Delete,
    Repeat(u32),
}

pub const IGNORED_LOGIC_STATE: u8 = 5;

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DigitalTransition {
    pub time: f64,
    pub state: u8,
}

#[derive(Debug, Clone, PartialEq, Default)]
pub struct DigitalTransitionList {
    transitions: Vec<DigitalTransition>,
}

impl DigitalTransitionList {
    #[must_use]
    pub const fn new(transitions: Vec<DigitalTransition>) -> Self {
        Self { transitions }
    }

    #[must_use]
    pub fn transitions(&self) -> &[DigitalTransition] {
        &self.transitions
    }

    /// Ports Ghidra function `FUN_01d3ab30` at `0x01D3AB30`.
    ///
    /// Inserts a time interval into the ordered transition list. Later points
    /// move by the interval width. A changed state receives start and end
    /// transitions so the state that preceded the insertion resumes afterward.
    pub fn insert_interval(&mut self, start: f64, end: f64, state: u8) {
        if state == IGNORED_LOGIC_STATE {
            return;
        }
        let Some(anchor_index) = self.index_at_or_before(start) else {
            return;
        };
        let anchor_state = self.transitions[anchor_index].state;
        let width = end - start;
        for transition in &mut self.transitions[anchor_index + 1..] {
            transition.time += width;
        }
        if anchor_state != state {
            self.transitions
                .insert(anchor_index + 1, DigitalTransition { time: start, state });
            self.transitions.insert(
                anchor_index + 2,
                DigitalTransition {
                    time: end,
                    state: anchor_state,
                },
            );
        }
    }

    /// Ports Ghidra function `FUN_01d3ad60` at `0x01D3AD60`.
    ///
    /// Replaces the state in one interval without shifting later time values.
    /// Existing interior points are removed and only necessary boundary points
    /// remain. State code 5 and missing boundary anchors are no-ops.
    pub fn set_interval(&mut self, start: f64, end: f64, state: u8) {
        if state == IGNORED_LOGIC_STATE {
            return;
        }
        let Some(start_index) = self.index_at_or_before(start) else {
            return;
        };
        let Some(end_index) = self.index_at_or_before(end) else {
            return;
        };
        let start_state = self.transitions[start_index].state;
        let end_state = self.transitions[end_index].state;

        if end_index < start_index {
            self.set_reversed_interval(
                start_index,
                end_index,
                start,
                end,
                state,
                start_state,
                end_state,
            );
            return;
        }
        if end_index > start_index {
            self.transitions.drain(start_index + 1..=end_index);
        }
        let mut insertion_index = start_index + 1;
        if start_state != state {
            self.transitions
                .insert(insertion_index, DigitalTransition { time: start, state });
            insertion_index += 1;
        }
        if end_state != state {
            self.transitions.insert(
                insertion_index,
                DigitalTransition {
                    time: end,
                    state: end_state,
                },
            );
        }
    }

    /// Ports Ghidra function `FUN_01d3b080` at `0x01D3B080`.
    ///
    /// Removes the selected time span, preserves the state that applies at its
    /// end, and shifts every later transition left by the removed width.
    pub fn delete_interval(&mut self, start: f64, end: f64) {
        let Some(start_index) = self.index_before(start) else {
            return;
        };
        let Some(end_index) = self.index_at_or_before(end) else {
            return;
        };
        let start_state = self.transitions[start_index].state;
        let end_state = self.transitions[end_index].state;
        let width = end - start;

        if end_index < start_index {
            if start_state != end_state {
                self.transitions[end_index].time = start;
            }
            let shift_start = end_index.saturating_add(2);
            for transition in &mut self.transitions[shift_start..] {
                transition.time -= width;
            }
            return;
        }
        if end_index > start_index {
            self.transitions.drain(start_index + 1..=end_index);
        }
        let mut later_index = start_index + 1;
        if start_state != end_state {
            self.transitions.insert(
                later_index,
                DigitalTransition {
                    time: start,
                    state: end_state,
                },
            );
            later_index += 1;
        }
        for transition in &mut self.transitions[later_index..] {
            transition.time -= width;
        }
    }

    /// Ports Ghidra function `FUN_01d3b2f0` at `0x01D3B2F0`.
    ///
    /// Copies the selected state segments into later equal-width intervals.
    /// Writes stop after the first segment that reaches the measurement end.
    pub fn repeat_interval(&mut self, start: f64, end: f64, measurement_end: f64, count: u32) {
        let Some(start_index) = self.index_at_or_before(start) else {
            return;
        };
        let Some(end_index) = self.index_at_or_before(end) else {
            return;
        };
        if start_index > end_index || count == 0 {
            return;
        }
        let segments: Vec<_> = (start_index..=end_index)
            .map(|index| DigitalSegment {
                start: if index == start_index {
                    start
                } else {
                    self.transitions[index].time
                },
                end: if index < end_index {
                    self.transitions[index + 1].time
                } else {
                    end
                },
                state: self.transitions[index].state,
            })
            .collect();
        let width = end - start;
        for repetition in 1..=count {
            let offset = f64::from(repetition) * width;
            for segment in &segments {
                let shifted_start = segment.start + offset;
                let shifted_end = segment.end + offset;
                if measurement_end < shifted_end {
                    self.set_interval(shifted_start, measurement_end, segment.state);
                    return;
                }
                self.set_interval(shifted_start, shifted_end, segment.state);
            }
        }
    }

    fn index_at_or_before(&self, time: f64) -> Option<usize> {
        self.transitions
            .iter()
            .rposition(|transition| transition.time <= time)
    }

    fn index_before(&self, time: f64) -> Option<usize> {
        self.transitions
            .iter()
            .rposition(|transition| transition.time < time)
    }

    #[allow(clippy::too_many_arguments)]
    fn set_reversed_interval(
        &mut self,
        start_index: usize,
        end_index: usize,
        start: f64,
        end: f64,
        state: u8,
        start_state: u8,
        end_state: u8,
    ) {
        if start_state == end_state {
            if start_state != state {
                self.transitions
                    .insert(start_index + 1, DigitalTransition { time: start, state });
                self.transitions.insert(
                    start_index + 2,
                    DigitalTransition {
                        time: end,
                        state: start_state,
                    },
                );
            }
        } else if start_state == state {
            self.transitions[end_index].time = end;
        } else {
            self.transitions[end_index].time = start;
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
struct DigitalSegment {
    start: f64,
    end: f64,
    state: u8,
}

pub trait WaveformEditAdapter {
    fn parse_pattern(&mut self, pattern: &str) -> Vec<u8>;
    fn apply(&mut self, channel_index: usize, operation: WaveformEditOperation, pattern: &[u8]);
    fn rebuild_plot_data(&mut self);
    fn refresh_active_channels(&mut self);
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct WaveformEditModel {
    selected_group: Option<(usize, usize)>,
    pattern: String,
    repeat_count: u32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum WaveformEditError {
    InvalidRepeat(String),
}

impl fmt::Display for WaveformEditError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidRepeat(value) => write!(formatter, "invalid repeat count: {value}"),
        }
    }
}

impl std::error::Error for WaveformEditError {}

impl WaveformEditModel {
    pub const fn select_group(&mut self, range: Option<(usize, usize)>) {
        self.selected_group = range;
    }

    /// Reimplements Ghidra function `FUN_01512550` at `0x01512550`.
    pub fn delete(&mut self, adapter: &mut dyn WaveformEditAdapter) {
        self.dispatch(WaveformEditOperation::Delete, adapter);
        adapter.refresh_active_channels();
    }

    /// Reimplements Ghidra function `FUN_01512580` at `0x01512580`.
    pub fn set(&mut self, pattern: String, adapter: &mut dyn WaveformEditAdapter) {
        self.pattern = pattern;
        self.dispatch(WaveformEditOperation::Set, adapter);
        adapter.refresh_active_channels();
    }

    /// Reimplements Ghidra function `FUN_01512610` at `0x01512610`.
    ///
    /// # Errors
    ///
    /// Returns [`WaveformEditError`] when the repeat editor is not a positive
    /// integer. No waveform dispatch or refresh occurs after that error.
    pub fn repeat(
        &mut self,
        repeat: &str,
        adapter: &mut dyn WaveformEditAdapter,
    ) -> Result<(), WaveformEditError> {
        self.repeat_count = repeat
            .parse::<u32>()
            .ok()
            .filter(|count| *count > 0)
            .ok_or_else(|| WaveformEditError::InvalidRepeat(repeat.to_owned()))?;
        self.dispatch(WaveformEditOperation::Repeat(self.repeat_count), adapter);
        adapter.refresh_active_channels();
        Ok(())
    }

    /// Reimplements Ghidra function `FUN_01512650` at `0x01512650`.
    pub fn insert(&mut self, pattern: String, adapter: &mut dyn WaveformEditAdapter) {
        self.pattern = pattern;
        self.dispatch(WaveformEditOperation::Insert, adapter);
        adapter.refresh_active_channels();
    }

    /// Reimplements Ghidra function `FUN_01512f00` at `0x01512F00`.
    ///
    /// No selected group produces only the common plot rebuild. Otherwise the
    /// pattern is parsed once and the opcode is dispatched in inclusive channel
    /// order. This helper does not reindex or apply active channels; wrappers do.
    pub fn dispatch(
        &self,
        operation: WaveformEditOperation,
        adapter: &mut dyn WaveformEditAdapter,
    ) {
        if let Some((first, last)) = self.selected_group {
            let pattern = adapter.parse_pattern(&self.pattern);
            if first <= last {
                for channel in first..=last {
                    adapter.apply(channel, operation, &pattern);
                }
            }
        }
        adapter.rebuild_plot_data();
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct RunCommand {
    pub command: u16,
    pub sequence: u16,
}

impl Default for RunCommand {
    fn default() -> Self {
        Self {
            command: 0x538,
            sequence: 0,
        }
    }
}

pub trait GeneratorExecutionAdapter {
    fn mode(&self) -> GenerationMode;
    fn start(&mut self) -> bool;
    fn stop(&mut self);
    fn generated_time(&self) -> f64;
    fn period(&self) -> f64;
    fn length(&self) -> u32;
}

pub trait RunUiAdapter {
    fn copy_current_interval_to_trace(&mut self, generated_time: f64);
    fn pump_for_ten_milliseconds(&mut self);
    fn complete_run(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum RunOutcome {
    IgnoredActiveBurst,
    RejectedStaleCommand,
    StepContinues,
    Completed(bool),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RunCoordinator {
    running: bool,
    next_sequence: u16,
    buttons: RunButtonState,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum RunButtonSelection {
    #[default]
    Stop,
    Start,
    None,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct RunButtonState {
    pub selection: RunButtonSelection,
    pub stop_allows_all_up: bool,
}

impl Default for RunCoordinator {
    fn default() -> Self {
        Self {
            running: false,
            next_sequence: 1,
            buttons: RunButtonState {
                selection: RunButtonSelection::Stop,
                stop_allows_all_up: true,
            },
        }
    }
}

impl RunCoordinator {
    #[must_use]
    pub const fn running(&self) -> bool {
        self.running
    }

    #[must_use]
    pub const fn buttons(&self) -> RunButtonState {
        self.buttons
    }

    /// Reimplements Ghidra function `FUN_01512200` at `0x01512200`.
    pub fn start_or_step(
        &mut self,
        backend: &mut dyn GeneratorExecutionAdapter,
        ui: &mut dyn RunUiAdapter,
    ) -> RunOutcome {
        if self.running && backend.mode() == GenerationMode::Burst {
            return RunOutcome::IgnoredActiveBurst;
        }
        let mut command = RunCommand::default();
        self.coordinate(&mut command, backend, ui)
    }

    /// Reimplements Ghidra function `FUN_01512260` at `0x01512260`.
    pub fn coordinate(
        &mut self,
        command: &mut RunCommand,
        backend: &mut dyn GeneratorExecutionAdapter,
        ui: &mut dyn RunUiAdapter,
    ) -> RunOutcome {
        if self.running && backend.mode() == GenerationMode::Burst {
            return RunOutcome::IgnoredActiveBurst;
        }
        if command.sequence == 0 {
            command.sequence = self.next_sequence;
            self.next_sequence = if self.next_sequence == u16::MAX {
                1
            } else {
                self.next_sequence + 1
            };
        } else if command.sequence != self.next_sequence {
            return RunOutcome::RejectedStaleCommand;
        }

        self.running = true;
        self.buttons.selection = RunButtonSelection::Start;
        ui.copy_current_interval_to_trace(backend.generated_time());
        if backend.mode() == GenerationMode::Step {
            self.buttons.selection = RunButtonSelection::None;
        }
        let status = backend.start();
        ui.pump_for_ten_milliseconds();
        let step_continues = backend.mode() == GenerationMode::Step
            && status
            && backend.generated_time() <= backend.period() * f64::from(backend.length());
        let outcome = if step_continues {
            RunOutcome::StepContinues
        } else {
            self.buttons.selection = RunButtonSelection::Stop;
            ui.complete_run();
            RunOutcome::Completed(status)
        };
        self.running = false;
        outcome
    }

    /// Reimplements Ghidra function `FUN_01512410` at `0x01512410`.
    pub fn request_stop(&mut self, backend: &mut dyn GeneratorExecutionAdapter) -> bool {
        self.buttons.stop_allows_all_up = false;
        if !self.running {
            return false;
        }
        backend.stop();
        true
    }
}

/// Rebuilds channel indexes and forwards the complete live state after a
/// waveform command. It uses the same existing routing boundary as On/group
/// changes and adds no persistence or hardware result.
pub fn refresh_channels_after_edit(
    channels: &mut [GeneratorChannel],
    routing: &mut dyn ChannelRoutingAdapter,
) {
    recompute_active_channel_indexes(channels);
    routing.apply_all_channels(channels);
}

/// Maps a typed display action to the shared direction enum. This adapter is
/// used by iced controls and adds no range or graph behavior.
#[must_use]
pub const fn display_action(direction: DisplayScroll) -> DisplayScroll {
    direction
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Default)]
    struct SettingsMock {
        writes: Vec<(SettingCategory, u32)>,
    }

    impl GeneratorSettingsAdapter for SettingsMock {
        fn choices(&mut self, category: SettingCategory) -> Vec<String> {
            vec![format!("{category:?} 0"), format!("{category:?} 1")]
        }

        fn current_index(&mut self, _category: SettingCategory) -> Option<u32> {
            Some(1)
        }

        fn set_index(&mut self, category: SettingCategory, index: u32) {
            self.writes.push((category, index));
        }
    }

    #[test]
    fn settings_display_has_a_down_guard_and_selection_routes_to_all_down_categories() {
        let mut model = SettingsControlModel::default();
        let mut adapter = SettingsMock::default();

        assert!(!model.show_clock(false, &mut adapter));
        assert!(model.items().is_empty());
        assert!(model.show_clock(true, &mut adapter));
        model.set_down(SettingCategory::ThresholdMode, true);
        assert!(model.apply_selection(Some(3), &mut adapter));

        assert_eq!(model.selected(), Some(1));
        assert_eq!(
            adapter.writes,
            [
                (SettingCategory::ClockSource, 3),
                (SettingCategory::ThresholdMode, 3),
            ]
        );
    }

    #[derive(Default)]
    struct WaveformMock {
        applied: Vec<(usize, WaveformEditOperation, Vec<u8>)>,
        rebuilds: usize,
        refreshes: usize,
    }

    impl WaveformEditAdapter for WaveformMock {
        fn parse_pattern(&mut self, pattern: &str) -> Vec<u8> {
            pattern.bytes().collect()
        }

        fn apply(
            &mut self,
            channel_index: usize,
            operation: WaveformEditOperation,
            pattern: &[u8],
        ) {
            self.applied
                .push((channel_index, operation, pattern.to_vec()));
        }

        fn rebuild_plot_data(&mut self) {
            self.rebuilds += 1;
        }

        fn refresh_active_channels(&mut self) {
            self.refreshes += 1;
        }
    }

    #[test]
    fn waveform_dispatch_uses_inclusive_group_order_and_wrappers_refresh() {
        let mut model = WaveformEditModel::default();
        model.select_group(Some((1, 2)));
        let mut adapter = WaveformMock::default();

        model.set("HL".to_owned(), &mut adapter);

        assert_eq!(adapter.applied.len(), 2);
        assert_eq!(adapter.applied[0].0, 1);
        assert_eq!(adapter.applied[1].0, 2);
        assert_eq!(adapter.applied[0].1, WaveformEditOperation::Set);
        assert_eq!(adapter.rebuilds, 1);
        assert_eq!(adapter.refreshes, 1);
    }

    #[test]
    fn waveform_dispatch_without_a_group_only_rebuilds_plot_data() {
        let model = WaveformEditModel::default();
        let mut adapter = WaveformMock::default();

        model.dispatch(WaveformEditOperation::Delete, &mut adapter);

        assert!(adapter.applied.is_empty());
        assert_eq!(adapter.rebuilds, 1);
        assert_eq!(adapter.refreshes, 0);
    }

    fn transition(time: f64, state: u8) -> DigitalTransition {
        DigitalTransition { time, state }
    }

    fn waveform() -> DigitalTransitionList {
        DigitalTransitionList::new(vec![
            transition(0.0, 0),
            transition(2.0, 1),
            transition(4.0, 0),
            transition(6.0, 1),
            transition(10.0, 0),
        ])
    }

    #[test]
    fn insert_shifts_later_transitions_and_restores_the_anchor_state() {
        let mut waveform = waveform();

        waveform.insert_interval(3.0, 5.0, 0);

        assert_eq!(
            waveform.transitions(),
            [
                transition(0.0, 0),
                transition(2.0, 1),
                transition(3.0, 0),
                transition(5.0, 1),
                transition(6.0, 0),
                transition(8.0, 1),
                transition(12.0, 0),
            ]
        );
    }

    #[test]
    fn insert_with_the_anchor_state_only_creates_time() {
        let mut waveform = waveform();

        waveform.insert_interval(3.0, 5.0, 1);

        assert_eq!(
            waveform.transitions(),
            [
                transition(0.0, 0),
                transition(2.0, 1),
                transition(6.0, 0),
                transition(8.0, 1),
                transition(12.0, 0),
            ]
        );
    }

    #[test]
    fn set_replaces_interior_transitions_and_preserves_the_end_state() {
        let mut waveform = waveform();

        waveform.set_interval(1.0, 5.0, 1);

        assert_eq!(
            waveform.transitions(),
            [
                transition(0.0, 0),
                transition(1.0, 1),
                transition(5.0, 0),
                transition(6.0, 1),
                transition(10.0, 0),
            ]
        );
    }

    #[test]
    fn delete_closes_the_time_gap_without_a_redundant_boundary() {
        let mut waveform = waveform();

        waveform.delete_interval(1.0, 5.0);

        assert_eq!(
            waveform.transitions(),
            [transition(0.0, 0), transition(2.0, 1), transition(6.0, 0),]
        );
    }

    #[test]
    fn delete_preserves_a_different_end_state_at_the_start() {
        let mut waveform = waveform();

        waveform.delete_interval(1.0, 3.0);

        assert_eq!(
            waveform.transitions(),
            [
                transition(0.0, 0),
                transition(1.0, 1),
                transition(2.0, 0),
                transition(4.0, 1),
                transition(8.0, 0),
            ]
        );
    }

    #[test]
    fn repeat_copies_segments_and_clips_at_the_measurement_end() {
        let mut waveform = DigitalTransitionList::new(vec![
            transition(0.0, 0),
            transition(2.0, 1),
            transition(4.0, 0),
            transition(8.0, 1),
        ]);

        waveform.repeat_interval(0.0, 4.0, 10.0, 2);

        assert_eq!(
            waveform.transitions(),
            [
                transition(0.0, 0),
                transition(2.0, 1),
                transition(4.0, 0),
                transition(6.0, 1),
                transition(8.0, 0),
                transition(8.0, 1),
                transition(8.0, 0),
                transition(10.0, 1),
            ]
        );
    }

    #[test]
    fn missing_anchors_ignored_state_and_zero_repeat_are_no_ops() {
        let original = waveform();
        let mut changed = original.clone();
        changed.insert_interval(-2.0, -1.0, 1);
        changed.insert_interval(1.0, 2.0, IGNORED_LOGIC_STATE);
        changed.set_interval(1.0, 2.0, IGNORED_LOGIC_STATE);
        changed.repeat_interval(0.0, 2.0, 10.0, 0);
        assert_eq!(changed, original);
    }

    #[derive(Default)]
    struct AxisMock {
        labels: Vec<(&'static str, &'static str)>,
        rebuilds: usize,
        applies: usize,
    }

    impl AxisDisplayAdapter for AxisMock {
        fn rebuild_channel_plots(&mut self, _mode: AxisMode, _period: f64) {
            self.rebuilds += 1;
        }

        fn set_axis_label(&mut self, title: &'static str, unit: &'static str) {
            self.labels.push((title, unit));
        }

        fn reindex_and_apply_channels(&mut self) {
            self.applies += 1;
        }
    }

    #[test]
    fn axis_modes_scale_bounds_and_cursors_only_on_a_real_transition() {
        let mut model = AxisModeModel::new(AxisMode::Click, 1.0, 4.0, 2.0, 3.0);
        let mut display = AxisMock::default();

        assert!(model.switch_to_time(true, 0.5, &mut display));
        assert!(!model.switch_to_time(true, 0.5, &mut display));
        assert!((model.right - 2.0).abs() < f64::EPSILON);
        assert!(model.switch_to_click(true, 0.5, &mut display));
        assert!((model.right - 4.0).abs() < f64::EPSILON);
        assert_eq!(display.labels, [("Time", "[s]"), ("Click", "")]);
        assert_eq!(display.applies, 2);
    }

    struct ExecutionMock {
        mode: GenerationMode,
        status: bool,
        generated_time: f64,
        stops: usize,
    }

    impl GeneratorExecutionAdapter for ExecutionMock {
        fn mode(&self) -> GenerationMode {
            self.mode
        }

        fn start(&mut self) -> bool {
            self.status
        }

        fn stop(&mut self) {
            self.stops += 1;
        }

        fn generated_time(&self) -> f64 {
            self.generated_time
        }

        fn period(&self) -> f64 {
            0.5
        }

        fn length(&self) -> u32 {
            4
        }
    }

    #[derive(Default)]
    struct RunUiMock {
        pumps: usize,
        completions: usize,
    }

    impl RunUiAdapter for RunUiMock {
        fn copy_current_interval_to_trace(&mut self, _generated_time: f64) {}

        fn pump_for_ten_milliseconds(&mut self) {
            self.pumps += 1;
        }

        fn complete_run(&mut self) {
            self.completions += 1;
        }
    }

    #[test]
    fn step_below_the_time_bound_uses_the_short_path_and_clears_run_state() {
        let mut coordinator = RunCoordinator::default();
        let mut backend = ExecutionMock {
            mode: GenerationMode::Step,
            status: true,
            generated_time: 1.5,
            stops: 0,
        };
        let mut ui = RunUiMock::default();

        let outcome = coordinator.start_or_step(&mut backend, &mut ui);

        assert_eq!(outcome, RunOutcome::StepContinues);
        assert!(!coordinator.running());
        assert_eq!(ui.pumps, 1);
        assert_eq!(ui.completions, 0);
    }

    #[test]
    fn stop_is_guarded_by_run_state_but_always_changes_button_policy() {
        let mut coordinator = RunCoordinator::default();
        let mut backend = ExecutionMock {
            mode: GenerationMode::Burst,
            status: true,
            generated_time: 0.0,
            stops: 0,
        };

        assert!(!coordinator.request_stop(&mut backend));

        assert!(!coordinator.buttons().stop_allows_all_up);
        assert_eq!(backend.stops, 0);
    }
}
