//! Digital Signal Generator model and backend adapters.
//!
//! The standard library supplies owned choice lists, optional dynamic-export
//! results, callbacks, and packed `u32` buffers. A bit-packing crate would add
//! a dependency for fixed two-bit fields, and `libloading` would couple this
//! clean-room core to one native-library mechanism. The traits below keep the
//! simulator, hardware, and UI runtime boundaries explicit instead.

use std::fmt;

pub const SIMULATOR_STEP_COMMAND: u32 = 0x534;
pub const SIMULATOR_RUN_COMMAND: u32 = 0x536;

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum GenerationMode {
    Step,
    #[default]
    Burst,
}

pub trait SimulatorRuntime {
    fn prepare(&mut self) -> bool;
    fn capture_generated_time(&mut self, generated_time: &mut f64);
}

pub trait SimulatorCommandSink {
    fn send(&mut self, command: u32);
}

#[derive(Debug, Clone, PartialEq)]
pub struct LocalGeneratorModel {
    threshold_modes: Vec<String>,
    threshold_mode: u32,
    mode: GenerationMode,
    reset_pending: bool,
    generated_time: f64,
}

impl LocalGeneratorModel {
    #[must_use]
    pub const fn new(threshold_modes: Vec<String>) -> Self {
        Self {
            threshold_modes,
            threshold_mode: 0,
            mode: GenerationMode::Burst,
            reset_pending: true,
            generated_time: 0.0,
        }
    }

    /// Reimplements Ghidra function `FUN_01503900` at `0x01503900`.
    ///
    /// The returned slice is the local model's complete categorical
    /// threshold-mode list. The caller can copy it into the shared settings
    /// control without exposing the model's storage.
    #[must_use]
    pub fn threshold_modes(&self) -> &[String] {
        &self.threshold_modes
    }

    /// Reimplements Ghidra function `FUN_01503910` at `0x01503910`.
    #[must_use]
    pub const fn threshold_mode(&self) -> u32 {
        self.threshold_mode
    }

    /// Reimplements Ghidra function `FUN_01503920` at `0x01503920`.
    ///
    /// This changes only the local model. It does not call hardware or a
    /// persistence service, and it deliberately applies no second bounds
    /// check beyond the UI selection contract.
    pub const fn set_threshold_mode(&mut self, threshold_mode: u32) {
        self.threshold_mode = threshold_mode;
    }

    #[must_use]
    pub const fn mode(&self) -> GenerationMode {
        self.mode
    }

    pub const fn set_mode(&mut self, mode: GenerationMode) {
        self.mode = mode;
    }

    #[must_use]
    pub const fn reset_pending(&self) -> bool {
        self.reset_pending
    }

    pub const fn mark_reset_pending(&mut self) {
        self.reset_pending = true;
    }

    #[must_use]
    pub const fn generated_time(&self) -> f64 {
        self.generated_time
    }

    /// Reimplements Ghidra function `FUN_01503950` at `0x01503950`.
    ///
    /// A first Step clears reset state and generated time before simulator
    /// preparation. It sends the run command only when preparation succeeds.
    /// A later Step captures simulator time and sends the step command. Burst
    /// sends the run command. A missing analysis-window sink is a successful
    /// no-op after the same model and simulator work.
    pub fn dispatch_simulator(
        &mut self,
        runtime: &mut dyn SimulatorRuntime,
        sink: Option<&mut dyn SimulatorCommandSink>,
    ) -> bool {
        match self.mode {
            GenerationMode::Step if self.reset_pending => {
                self.reset_pending = false;
                self.generated_time = 0.0;
                let prepared = runtime.prepare();
                if prepared {
                    if let Some(sink) = sink {
                        sink.send(SIMULATOR_RUN_COMMAND);
                    }
                }
                prepared
            }
            GenerationMode::Step => {
                runtime.capture_generated_time(&mut self.generated_time);
                if let Some(sink) = sink {
                    sink.send(SIMULATOR_STEP_COMMAND);
                }
                true
            }
            GenerationMode::Burst => {
                if let Some(sink) = sink {
                    sink.send(SIMULATOR_RUN_COMMAND);
                }
                true
            }
        }
    }
}

pub trait HardwareSettingsAdapter {
    fn trigger_source(&mut self) -> Option<u32>;
    fn set_trigger_source(&mut self, source: u32);
    fn clock_source(&mut self) -> Option<u32>;
    fn set_clock_source(&mut self, source: u32);
    fn threshold_mode(&mut self) -> Option<u32>;
    fn set_threshold_mode(&mut self, mode: u32);
}

pub trait HardwareRunAdapter {
    fn set_data_pattern(&mut self, words: &[u32]);
    fn measurement_length(&mut self) -> Option<u32>;
    fn step(&mut self) -> bool;
    fn start(&mut self) -> bool;
    fn active_step(&mut self) -> Option<u32>;
}

pub trait DigitalWaveform {
    fn sample_logic(&self, moment: f64) -> u8;
}

impl<F> DigitalWaveform for F
where
    F: Fn(f64) -> u8,
{
    fn sample_logic(&self, moment: f64) -> u8 {
        self(moment)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HardwareRunError {
    MissingMeasurementLength,
    MissingActiveStep,
}

impl fmt::Display for HardwareRunError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::MissingMeasurementLength => {
                "the hardware adapter did not return a measurement length"
            }
            Self::MissingActiveStep => "the hardware adapter did not return an active step",
        })
    }
}

impl std::error::Error for HardwareRunError {}

#[derive(Debug, Clone, PartialEq)]
pub struct HardwareGeneratorModel {
    trigger_sources: Vec<String>,
    clock_sources: Vec<String>,
    threshold_modes: Vec<String>,
    period: f64,
    output_steps: u32,
    mode: GenerationMode,
    pattern_dirty: bool,
    running: bool,
    generated_time: f64,
}

impl HardwareGeneratorModel {
    #[must_use]
    pub const fn new(
        trigger_sources: Vec<String>,
        clock_sources: Vec<String>,
        threshold_modes: Vec<String>,
        period: f64,
        output_steps: u32,
    ) -> Self {
        Self {
            trigger_sources,
            clock_sources,
            threshold_modes,
            period,
            output_steps,
            mode: GenerationMode::Burst,
            pattern_dirty: true,
            running: false,
            generated_time: 0.0,
        }
    }

    /// Reimplements Ghidra function `FUN_01503f20` at `0x01503F20`.
    #[must_use]
    pub fn trigger_sources(&self) -> &[String] {
        &self.trigger_sources
    }

    /// Reimplements Ghidra function `FUN_01503f30` at `0x01503F30`.
    ///
    /// `None` safely represents an unavailable dynamic getter export. The
    /// recovered executable left that result uninitialized.
    pub fn trigger_source(&self, adapter: &mut dyn HardwareSettingsAdapter) -> Option<u32> {
        adapter.trigger_source()
    }

    /// Reimplements Ghidra function `FUN_01503f50` at `0x01503F50`.
    pub fn set_trigger_source(&self, adapter: &mut dyn HardwareSettingsAdapter, source: u32) {
        adapter.set_trigger_source(source);
    }

    /// Reimplements Ghidra function `FUN_01503f60` at `0x01503F60`.
    #[must_use]
    pub fn clock_sources(&self) -> &[String] {
        &self.clock_sources
    }

    /// Reimplements Ghidra function `FUN_01503f70` at `0x01503F70`.
    ///
    /// `None` safely represents an unavailable dynamic getter export.
    pub fn clock_source(&self, adapter: &mut dyn HardwareSettingsAdapter) -> Option<u32> {
        adapter.clock_source()
    }

    /// Reimplements Ghidra function `FUN_01503f90` at `0x01503F90`.
    pub fn set_clock_source(&self, adapter: &mut dyn HardwareSettingsAdapter, source: u32) {
        adapter.set_clock_source(source);
    }

    /// Reimplements Ghidra function `FUN_01504090` at `0x01504090`.
    #[must_use]
    pub fn threshold_modes(&self) -> &[String] {
        &self.threshold_modes
    }

    /// Reimplements Ghidra function `FUN_015040a0` at `0x015040A0`.
    ///
    /// `None` safely represents an unavailable dynamic getter export.
    pub fn threshold_mode(&self, adapter: &mut dyn HardwareSettingsAdapter) -> Option<u32> {
        adapter.threshold_mode()
    }

    /// Reimplements Ghidra function `FUN_015040c0` at `0x015040C0`.
    ///
    /// The index is forwarded unchanged. The recovered hardware call has no
    /// channel argument and no result.
    pub fn set_threshold_mode(&self, adapter: &mut dyn HardwareSettingsAdapter, mode: u32) {
        adapter.set_threshold_mode(mode);
    }

    #[must_use]
    pub const fn mode(&self) -> GenerationMode {
        self.mode
    }

    pub const fn set_mode(&mut self, mode: GenerationMode) {
        self.mode = mode;
    }

    #[must_use]
    pub const fn pattern_dirty(&self) -> bool {
        self.pattern_dirty
    }

    pub const fn mark_pattern_dirty(&mut self) {
        self.pattern_dirty = true;
    }

    #[must_use]
    pub const fn running(&self) -> bool {
        self.running
    }

    #[must_use]
    pub const fn generated_time(&self) -> f64 {
        self.generated_time
    }

    /// Reimplements Ghidra function `FUN_01504270` at `0x01504270`.
    ///
    /// Dirty pattern data is packed and submitted before either start call,
    /// then the dirty flag and generated time are cleared even though pattern
    /// submission has no status. Step reads progress once. Burst optionally
    /// pumps the caller's event callback until the last measurement step or a
    /// stop request. Returning `false` from `process_events` models the running
    /// byte being cleared by the paired Stop path.
    ///
    /// Missing measurement or progress exports produced an undefined local
    /// value in the recovered path. This safe adapter clears `running` and
    /// reports that case as an error.
    ///
    /// # Errors
    ///
    /// Returns [`HardwareRunError`] when the adapter does not supply the
    /// measurement length or active step.
    pub fn run(
        &mut self,
        adapter: &mut dyn HardwareRunAdapter,
        channels: &[Option<&dyn DigitalWaveform>],
        map_logic: &dyn Fn(u8) -> u8,
        wait_for_burst: bool,
        process_events: &mut dyn FnMut() -> bool,
    ) -> Result<bool, HardwareRunError> {
        self.running = true;
        if self.pattern_dirty {
            let words = pack_output_words(self.output_steps, self.period, channels, map_logic);
            adapter.set_data_pattern(&words);
            self.pattern_dirty = false;
            self.generated_time = 0.0;
        }

        let Some(measurement_length) = adapter.measurement_length() else {
            self.running = false;
            return Err(HardwareRunError::MissingMeasurementLength);
        };

        let status = match self.mode {
            GenerationMode::Step => adapter.step(),
            GenerationMode::Burst => adapter.start(),
        };
        let Some(mut active_step) = adapter.active_step() else {
            self.running = false;
            return Err(HardwareRunError::MissingActiveStep);
        };

        if self.mode == GenerationMode::Burst && wait_for_burst {
            let final_step = measurement_length.saturating_sub(1);
            while active_step < final_step && self.running {
                self.running = process_events();
                let Some(next_step) = adapter.active_step() else {
                    self.running = false;
                    return Err(HardwareRunError::MissingActiveStep);
                };
                active_step = next_step;
            }
            self.running = false;
        }

        self.generated_time = self.period * f64::from(active_step);
        Ok(status)
    }
}

/// Reimplements Ghidra function `FUN_015040f0` at `0x015040F0`.
///
/// The function allocates one `u32` per output step. It samples each available
/// channel at one percent of a period inside that step, maps the raw logic
/// value, keeps its low two bits, and places it at twice the channel index. A
/// missing waveform contributes zero. Shift counts wrap at 32 bits, matching
/// the recovered native operation; the model owner remains responsible for a
/// valid channel count.
#[must_use]
pub fn pack_output_words(
    output_steps: u32,
    period: f64,
    channels: &[Option<&dyn DigitalWaveform>],
    map_logic: &dyn Fn(u8) -> u8,
) -> Vec<u32> {
    (0..output_steps)
        .map(|step| {
            let moment = f64::from(step).mul_add(period, period / 100.0);
            channels
                .iter()
                .enumerate()
                .filter_map(|(channel_index, waveform)| {
                    waveform.map(|waveform| {
                        let mapped = u32::from(map_logic(waveform.sample_logic(moment)) & 3);
                        let channel = u32::try_from(channel_index).unwrap_or(u32::MAX);
                        mapped << channel.wrapping_mul(2).wrapping_rem(32)
                    })
                })
                .fold(0, |word, channel| word | channel)
        })
        .collect()
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct GeneratorChannel {
    enabled: bool,
    active_index: usize,
}

impl GeneratorChannel {
    #[must_use]
    pub const fn new(enabled: bool) -> Self {
        Self {
            enabled,
            active_index: 0,
        }
    }

    #[must_use]
    pub const fn enabled(&self) -> bool {
        self.enabled
    }

    #[must_use]
    pub const fn active_index(&self) -> usize {
        self.active_index
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ChannelGroup {
    pub first: usize,
    pub last: usize,
    enabled: bool,
}

impl ChannelGroup {
    #[must_use]
    pub const fn new(first: usize, last: usize, enabled: bool) -> Self {
        Self {
            first,
            last,
            enabled,
        }
    }

    #[must_use]
    pub const fn enabled(&self) -> bool {
        self.enabled
    }
}

pub trait ChannelRoutingAdapter {
    fn detach_channel(&mut self, channel_index: usize);
    fn activate_channel(&mut self, channel_index: usize);
    fn apply_all_channels(&mut self, channels: &[GeneratorChannel]);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ChannelControlError {
    InvalidChannel(usize),
    InvalidGroup(usize),
}

impl fmt::Display for ChannelControlError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidChannel(index) => write!(formatter, "channel index {index} is invalid"),
            Self::InvalidGroup(index) => {
                write!(formatter, "channel group index {index} is invalid")
            }
        }
    }
}

impl std::error::Error for ChannelControlError {}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct ChannelControlModel {
    channels: Vec<GeneratorChannel>,
    groups: Vec<ChannelGroup>,
    selected_channel: Option<usize>,
    selected_group: Option<usize>,
}

impl ChannelControlModel {
    #[must_use]
    pub const fn new(channels: Vec<GeneratorChannel>, groups: Vec<ChannelGroup>) -> Self {
        Self {
            channels,
            groups,
            selected_channel: None,
            selected_group: None,
        }
    }

    #[must_use]
    pub fn channels(&self) -> &[GeneratorChannel] {
        &self.channels
    }

    #[must_use]
    pub fn groups(&self) -> &[ChannelGroup] {
        &self.groups
    }

    pub const fn select_channel(&mut self, channel: Option<usize>) {
        self.selected_channel = channel;
        self.selected_group = None;
    }

    pub const fn select_group(&mut self, group: Option<usize>) {
        self.selected_group = group;
    }

    /// Reimplements Ghidra function `FUN_01506d00` at `0x01506D00`.
    ///
    /// With no selected group, a missing channel selection is a no-op. A
    /// selected group applies the state across its inclusive range and to the
    /// group. Both successful paths rebuild compact indexes. The single path
    /// forwards one activation or detachment, while the group path forwards
    /// the complete channel state.
    ///
    /// The recovered code trusts stored indexes and has no rollback. This safe
    /// adapter reports an invalid index after preserving any earlier channel
    /// mutations from the same inclusive group walk.
    ///
    /// # Errors
    ///
    /// Returns [`ChannelControlError`] for an invalid selected group, channel,
    /// or group endpoint.
    pub fn apply_enabled(
        &mut self,
        enabled: bool,
        routing: &mut dyn ChannelRoutingAdapter,
    ) -> Result<bool, ChannelControlError> {
        if let Some(group_index) = self.selected_group {
            let Some(group) = self.groups.get(group_index) else {
                return Err(ChannelControlError::InvalidGroup(group_index));
            };
            let (first, last) = (group.first, group.last);

            if first <= last {
                for channel_index in first..=last {
                    let Some(channel) = self.channels.get_mut(channel_index) else {
                        return Err(ChannelControlError::InvalidChannel(channel_index));
                    };
                    channel.enabled = enabled;
                }
            }

            self.groups[group_index].enabled = enabled;
            recompute_active_channel_indexes(&mut self.channels);
            routing.apply_all_channels(&self.channels);
            return Ok(true);
        }

        let Some(channel_index) = self.selected_channel else {
            return Ok(false);
        };
        let Some(channel) = self.channels.get_mut(channel_index) else {
            return Err(ChannelControlError::InvalidChannel(channel_index));
        };
        channel.enabled = enabled;
        recompute_active_channel_indexes(&mut self.channels);
        if enabled {
            routing.activate_channel(channel_index);
        } else {
            routing.detach_channel(channel_index);
        }
        Ok(true)
    }
}

/// Reimplements Ghidra function `FUN_01506c70` at `0x01506C70`.
///
/// Every channel receives the count of prior enabled channels. The counter
/// advances only after an enabled channel, so enabled channels have compact
/// active indexes in collection order.
pub fn recompute_active_channel_indexes(channels: &mut [GeneratorChannel]) {
    let mut active_count = 0;
    for channel in channels {
        channel.active_index = active_count;
        if channel.enabled {
            active_count += 1;
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DisplayScroll {
    Up,
    Down,
    Right,
    Left,
}

pub trait SignalDisplayAdapter {
    fn scroll(&mut self, direction: DisplayScroll);
}

pub trait CoordinateEditorAdapter {
    fn set_value(&mut self, value: f64);
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct DisplayControlModel {
    left_bound: f64,
    right_bound: f64,
}

impl DisplayControlModel {
    #[must_use]
    pub const fn new(left_bound: f64, right_bound: f64) -> Self {
        Self {
            left_bound,
            right_bound,
        }
    }

    /// Reimplements Ghidra function `FUN_01506f30` at `0x01506F30`.
    ///
    /// The request is forwarded unchanged to the nested graph adapter. This
    /// layer adds no selection, modifier, persistence, or error behavior.
    pub fn scroll_up(&self, display: &mut dyn SignalDisplayAdapter) {
        display.scroll(DisplayScroll::Up);
    }

    /// Reimplements Ghidra function `FUN_01506f50` at `0x01506F50`.
    ///
    /// The request is forwarded unchanged to the nested graph adapter.
    pub fn scroll_down(&self, display: &mut dyn SignalDisplayAdapter) {
        display.scroll(DisplayScroll::Down);
    }

    /// Reimplements Ghidra function `FUN_01506f70` at `0x01506F70`.
    ///
    /// This shared bridge forwards a right-scroll request to the nested
    /// signal-display adapter.
    pub fn scroll_right(&self, display: &mut dyn SignalDisplayAdapter) {
        display.scroll(DisplayScroll::Right);
    }

    /// Reimplements Ghidra function `FUN_01506f90` at `0x01506F90`.
    ///
    /// This shared bridge forwards a left-scroll request to the nested
    /// signal-display adapter.
    pub fn scroll_left(&self, display: &mut dyn SignalDisplayAdapter) {
        display.scroll(DisplayScroll::Left);
    }

    /// Reimplements Ghidra function `FUN_01506fb0` at `0x01506FB0`.
    ///
    /// The stored lower X bound is passed unchanged to the numeric editor. It
    /// does not change either bound or call the graph.
    pub fn show_left_bound(&self, editor: &mut dyn CoordinateEditorAdapter) {
        editor.set_value(self.left_bound);
    }

    /// Reimplements Ghidra function `FUN_015073a0` at `0x015073A0`.
    ///
    /// The stored upper X bound is passed unchanged to the numeric editor. It
    /// does not change either bound or call the graph.
    pub fn show_right_bound(&self, editor: &mut dyn CoordinateEditorAdapter) {
        editor.set_value(self.right_bound);
    }
}

#[cfg(test)]
mod tests {
    use std::cell::RefCell;

    use super::*;

    #[derive(Default)]
    struct SimulatorMock {
        prepare_result: bool,
        prepared: usize,
        captured: usize,
    }

    impl SimulatorRuntime for SimulatorMock {
        fn prepare(&mut self) -> bool {
            self.prepared += 1;
            self.prepare_result
        }

        fn capture_generated_time(&mut self, generated_time: &mut f64) {
            self.captured += 1;
            *generated_time = 2.5;
        }
    }

    #[derive(Default)]
    struct SinkMock(Vec<u32>);

    impl SimulatorCommandSink for SinkMock {
        fn send(&mut self, command: u32) {
            self.0.push(command);
        }
    }

    #[derive(Default)]
    struct SettingsMock {
        trigger: Option<u32>,
        clock: Option<u32>,
        threshold: Option<u32>,
        writes: Vec<(&'static str, u32)>,
    }

    impl HardwareSettingsAdapter for SettingsMock {
        fn trigger_source(&mut self) -> Option<u32> {
            self.trigger
        }

        fn set_trigger_source(&mut self, source: u32) {
            self.writes.push(("trigger", source));
        }

        fn clock_source(&mut self) -> Option<u32> {
            self.clock
        }

        fn set_clock_source(&mut self, source: u32) {
            self.writes.push(("clock", source));
        }

        fn threshold_mode(&mut self) -> Option<u32> {
            self.threshold
        }

        fn set_threshold_mode(&mut self, mode: u32) {
            self.writes.push(("threshold", mode));
        }
    }

    struct RunMock {
        pattern: Vec<u32>,
        measurement_length: Option<u32>,
        active_steps: Vec<Option<u32>>,
        active_index: usize,
        step_result: bool,
        start_result: bool,
        step_calls: usize,
        start_calls: usize,
    }

    impl RunMock {
        fn with_steps(active_steps: Vec<Option<u32>>) -> Self {
            Self {
                pattern: Vec::new(),
                measurement_length: Some(3),
                active_steps,
                active_index: 0,
                step_result: true,
                start_result: true,
                step_calls: 0,
                start_calls: 0,
            }
        }
    }

    impl HardwareRunAdapter for RunMock {
        fn set_data_pattern(&mut self, words: &[u32]) {
            self.pattern = words.to_vec();
        }

        fn measurement_length(&mut self) -> Option<u32> {
            self.measurement_length
        }

        fn step(&mut self) -> bool {
            self.step_calls += 1;
            self.step_result
        }

        fn start(&mut self) -> bool {
            self.start_calls += 1;
            self.start_result
        }

        fn active_step(&mut self) -> Option<u32> {
            let value = self.active_steps.get(self.active_index).copied().flatten();
            self.active_index += 1;
            value
        }
    }

    fn hardware_model() -> HardwareGeneratorModel {
        HardwareGeneratorModel::new(
            vec!["T0".to_owned(), "T1".to_owned()],
            vec!["C0".to_owned(), "C1".to_owned()],
            vec!["L0".to_owned(), "L1".to_owned()],
            0.5,
            2,
        )
    }

    #[test]
    fn local_threshold_accessors_keep_the_value_in_memory() {
        let mut model = LocalGeneratorModel::new(vec!["CMOS".to_owned(), "TTL".to_owned()]);

        model.set_threshold_mode(1);

        assert_eq!(model.threshold_modes(), ["CMOS", "TTL"]);
        assert_eq!(model.threshold_mode(), 1);
    }

    #[test]
    fn generator_models_start_in_the_recovered_burst_mode() {
        let local = LocalGeneratorModel::new(Vec::new());
        let hardware = hardware_model();

        assert_eq!(local.mode(), GenerationMode::Burst);
        assert_eq!(hardware.mode(), GenerationMode::Burst);
        assert_eq!(GenerationMode::default(), GenerationMode::Burst);
    }

    #[test]
    fn first_local_step_prepares_and_later_step_captures_time() {
        let mut model = LocalGeneratorModel::new(Vec::new());
        model.set_mode(GenerationMode::Step);
        let mut runtime = SimulatorMock {
            prepare_result: true,
            ..SimulatorMock::default()
        };
        let mut sink = SinkMock::default();

        assert!(model.dispatch_simulator(&mut runtime, Some(&mut sink)));
        assert!(model.dispatch_simulator(&mut runtime, Some(&mut sink)));

        assert_eq!(runtime.prepared, 1);
        assert_eq!(runtime.captured, 1);
        assert_eq!(sink.0, [SIMULATOR_RUN_COMMAND, SIMULATOR_STEP_COMMAND]);
        assert!((model.generated_time() - 2.5).abs() < f64::EPSILON);
        assert!(!model.reset_pending());
    }

    #[test]
    fn failed_local_prepare_clears_reset_but_sends_no_command() {
        let mut model = LocalGeneratorModel::new(Vec::new());
        model.set_mode(GenerationMode::Step);
        let mut runtime = SimulatorMock::default();
        let mut sink = SinkMock::default();

        let status = model.dispatch_simulator(&mut runtime, Some(&mut sink));

        assert!(!status);
        assert!(sink.0.is_empty());
        assert!(!model.reset_pending());
        assert!(model.generated_time().abs() < f64::EPSILON);
    }

    #[test]
    fn burst_sends_run_without_preparing_the_simulator() {
        let mut model = LocalGeneratorModel::new(Vec::new());
        model.set_mode(GenerationMode::Burst);
        let mut runtime = SimulatorMock::default();
        let mut sink = SinkMock::default();

        let status = model.dispatch_simulator(&mut runtime, Some(&mut sink));

        assert!(status);
        assert_eq!(runtime.prepared, 0);
        assert_eq!(runtime.captured, 0);
        assert_eq!(sink.0, [SIMULATOR_RUN_COMMAND]);
    }

    #[test]
    fn hardware_setting_methods_return_lists_and_forward_indices() {
        let model = hardware_model();
        let mut adapter = SettingsMock {
            trigger: Some(2),
            clock: None,
            threshold: Some(4),
            ..SettingsMock::default()
        };

        assert_eq!(model.trigger_sources(), ["T0", "T1"]);
        assert_eq!(model.clock_sources(), ["C0", "C1"]);
        assert_eq!(model.threshold_modes(), ["L0", "L1"]);
        assert_eq!(model.trigger_source(&mut adapter), Some(2));
        assert_eq!(model.clock_source(&mut adapter), None);
        assert_eq!(model.threshold_mode(&mut adapter), Some(4));
        model.set_trigger_source(&mut adapter, 7);
        model.set_clock_source(&mut adapter, 8);
        model.set_threshold_mode(&mut adapter, 9);

        assert_eq!(
            adapter.writes,
            [("trigger", 7), ("clock", 8), ("threshold", 9)]
        );
    }

    #[test]
    fn output_packer_samples_inside_each_step_and_uses_two_bits_per_channel() {
        let moments = RefCell::new(Vec::new());
        let first = |moment| {
            moments.borrow_mut().push(moment);
            0
        };
        let second = |_| 1;
        let channels: [Option<&dyn DigitalWaveform>; 3] = [Some(&first), Some(&second), None];

        let words = pack_output_words(2, 100.0, &channels, &|raw| raw + 1);

        assert_eq!(words, [9, 9]);
        assert_eq!(*moments.borrow(), [1.0, 101.0]);
    }

    #[test]
    fn hardware_step_submits_dirty_pattern_and_records_progress_time() {
        let mut model = hardware_model();
        model.set_mode(GenerationMode::Step);
        let channel = |_| 0;
        let channels: [Option<&dyn DigitalWaveform>; 1] = [Some(&channel)];
        let mut adapter = RunMock::with_steps(vec![Some(2)]);
        let mut no_events = || true;

        let status = model.run(
            &mut adapter,
            &channels,
            &|raw| raw + 1,
            false,
            &mut no_events,
        );

        assert_eq!(status, Ok(true));
        assert_eq!(adapter.pattern, [1, 1]);
        assert_eq!(adapter.step_calls, 1);
        assert_eq!(adapter.start_calls, 0);
        assert!(!model.pattern_dirty());
        assert!(model.running());
        assert!((model.generated_time() - 1.0).abs() < f64::EPSILON);
    }

    #[test]
    fn hardware_burst_pumps_until_the_last_measurement_step() {
        let mut model = hardware_model();
        model.set_mode(GenerationMode::Burst);
        let mut adapter = RunMock::with_steps(vec![Some(0), Some(1), Some(2)]);
        let mut pumps = 0;
        let mut process_events = || {
            pumps += 1;
            true
        };

        let status = model.run(&mut adapter, &[], &|raw| raw, true, &mut process_events);

        assert_eq!(status, Ok(true));
        assert_eq!(adapter.start_calls, 1);
        assert_eq!(pumps, 2);
        assert!(!model.running());
        assert!((model.generated_time() - 1.0).abs() < f64::EPSILON);
    }

    #[test]
    fn hardware_burst_observes_stop_after_pumping_one_more_progress_value() {
        let mut model = hardware_model();
        model.set_mode(GenerationMode::Burst);
        let mut adapter = RunMock::with_steps(vec![Some(0), Some(1)]);
        let mut process_events = || false;

        let status = model.run(&mut adapter, &[], &|raw| raw, true, &mut process_events);

        assert_eq!(status, Ok(true));
        assert_eq!(adapter.active_index, 2);
        assert!(!model.running());
        assert!((model.generated_time() - 0.5).abs() < f64::EPSILON);
    }

    #[test]
    fn missing_hardware_telemetry_is_an_explicit_error() {
        let mut model = hardware_model();
        let mut adapter = RunMock::with_steps(vec![Some(0)]);
        adapter.measurement_length = None;
        let mut no_events = || true;

        let result = model.run(&mut adapter, &[], &|raw| raw, false, &mut no_events);

        assert_eq!(result, Err(HardwareRunError::MissingMeasurementLength));
        assert!(!model.running());
        assert!(!model.pattern_dirty());
    }

    #[derive(Default)]
    struct RoutingMock {
        activated: Vec<usize>,
        detached: Vec<usize>,
        applied_states: Vec<bool>,
    }

    impl ChannelRoutingAdapter for RoutingMock {
        fn detach_channel(&mut self, channel_index: usize) {
            self.detached.push(channel_index);
        }

        fn activate_channel(&mut self, channel_index: usize) {
            self.activated.push(channel_index);
        }

        fn apply_all_channels(&mut self, channels: &[GeneratorChannel]) {
            self.applied_states = channels.iter().map(GeneratorChannel::enabled).collect();
        }
    }

    #[derive(Default)]
    struct DisplayMock(Vec<DisplayScroll>);

    impl SignalDisplayAdapter for DisplayMock {
        fn scroll(&mut self, direction: DisplayScroll) {
            self.0.push(direction);
        }
    }

    #[derive(Default)]
    struct EditorMock(Option<f64>);

    impl CoordinateEditorAdapter for EditorMock {
        fn set_value(&mut self, value: f64) {
            self.0 = Some(value);
        }
    }

    #[test]
    fn active_indexes_count_only_prior_enabled_channels() {
        let mut channels = [
            GeneratorChannel::new(true),
            GeneratorChannel::new(false),
            GeneratorChannel::new(true),
            GeneratorChannel::new(true),
        ];

        recompute_active_channel_indexes(&mut channels);

        let indexes: Vec<_> = channels
            .iter()
            .map(GeneratorChannel::active_index)
            .collect();
        assert_eq!(indexes, [0, 1, 1, 2]);
    }

    #[test]
    fn channel_toggle_without_a_selection_is_a_complete_no_op() {
        let mut model = ChannelControlModel::new(
            vec![GeneratorChannel::new(true), GeneratorChannel::new(false)],
            Vec::new(),
        );
        let mut routing = RoutingMock::default();

        let changed = model.apply_enabled(false, &mut routing);

        assert_eq!(changed, Ok(false));
        assert!(model.channels()[0].enabled());
        assert!(routing.activated.is_empty());
        assert!(routing.detached.is_empty());
        assert!(routing.applied_states.is_empty());
    }

    #[test]
    fn single_channel_toggle_reindexes_and_forwards_only_that_state() {
        let mut model = ChannelControlModel::new(
            vec![GeneratorChannel::new(true), GeneratorChannel::new(true)],
            Vec::new(),
        );
        model.select_channel(Some(0));
        let mut routing = RoutingMock::default();

        let changed = model.apply_enabled(false, &mut routing);

        assert_eq!(changed, Ok(true));
        assert!(!model.channels()[0].enabled());
        assert_eq!(model.channels()[1].active_index(), 0);
        assert_eq!(routing.detached, [0]);
        assert!(routing.activated.is_empty());
        assert!(routing.applied_states.is_empty());
    }

    #[test]
    fn group_toggle_uses_the_inclusive_range_and_applies_all_channels() {
        let mut model = ChannelControlModel::new(
            vec![
                GeneratorChannel::new(true),
                GeneratorChannel::new(false),
                GeneratorChannel::new(false),
                GeneratorChannel::new(true),
            ],
            vec![ChannelGroup::new(1, 2, false)],
        );
        model.select_group(Some(0));
        let mut routing = RoutingMock::default();

        let changed = model.apply_enabled(true, &mut routing);

        assert_eq!(changed, Ok(true));
        assert!(model.groups()[0].enabled());
        assert_eq!(routing.applied_states, [true, true, true, true]);
        assert_eq!(model.channels()[3].active_index(), 3);
        assert!(routing.activated.is_empty());
        assert!(routing.detached.is_empty());
    }

    #[test]
    fn empty_group_range_still_updates_the_group_and_bulk_routing() {
        let mut model = ChannelControlModel::new(
            vec![GeneratorChannel::new(true)],
            vec![ChannelGroup::new(1, 0, false)],
        );
        model.select_group(Some(0));
        let mut routing = RoutingMock::default();

        let changed = model.apply_enabled(true, &mut routing);

        assert_eq!(changed, Ok(true));
        assert!(model.groups()[0].enabled());
        assert_eq!(routing.applied_states, [true]);
    }

    #[test]
    fn display_scroll_bridges_forward_each_direction_once() {
        let model = DisplayControlModel::new(1.25, 8.5);
        let mut display = DisplayMock::default();

        model.scroll_up(&mut display);
        model.scroll_down(&mut display);
        model.scroll_right(&mut display);
        model.scroll_left(&mut display);

        assert_eq!(
            display.0,
            [
                DisplayScroll::Up,
                DisplayScroll::Down,
                DisplayScroll::Right,
                DisplayScroll::Left,
            ]
        );
    }

    #[test]
    fn coordinate_buttons_forward_the_stored_bound_unchanged() {
        let model = DisplayControlModel::new(1.25, 8.5);
        let mut editor = EditorMock::default();

        model.show_left_bound(&mut editor);
        assert!(matches!(editor.0, Some(value) if (value - 1.25).abs() < f64::EPSILON));
        model.show_right_bound(&mut editor);
        assert!(matches!(editor.0, Some(value) if (value - 8.5).abs() < f64::EPSILON));
    }
}
