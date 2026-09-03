use std::path::PathBuf;

use iced::keyboard::{Key, Modifiers};
use iced::widget::{
    button, checkbox, column, container, pick_list, row, scrollable, text, text_input,
};
use iced::{Alignment, Element, Length};
use tiara_core::digital_signal_generator::{
    CoordinateEditorAdapter, DisplayControlModel, DisplayScroll, GenerationMode,
    HardwareGeneratorModel, LocalGeneratorModel, SignalDisplayAdapter,
};
use tiara_core::digital_signal_generator_control::{
    AxisMode, ChannelComboAdapter, ChannelEndpointModel, PeriodEditOperation, WaveformEditOperation,
};

use crate::shared::window_shell;

mod dialogs;

pub use dialogs::{DialogAction, LoadDialogState, SaveDialogState};

pub const TITLE: &str = "Digital Signal Generator";
pub const SCREENSHOT: &str = "screenshots/Digital_Signal_Generator_Window.png";
pub const FORM_RESOURCE: &str = "DigitalSignalGeneratorWin";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("0150f690");
const STATUS: &str = "Digital output";
const SAVE_TARGETS: [&str; 3] = ["Definition file", "Sample data", "Tina"];
const LOAD_TARGETS: [&str; 2] = ["Definition file", "Tina"];
const VIRTUAL_THRESHOLD_MODES: [&str; 2] = ["TTL", "CMOS"];
const DEFAULT_PERIOD: f64 = 0.01;
const DEFAULT_OUTPUT_STEPS: u32 = 100;
const PATTERN_GROUPS: [&str; 4] = ["A", "B", "C", "D"];
const DEFAULT_PATTERN: &str = "[01-00000]";
const CLOSE_WARNING: &str = "Please close all measurement\r\ninstruments before exiting TINA.";

#[derive(Debug, Clone, PartialEq)]
pub struct HardwareConfiguration {
    pub trigger_sources: Vec<String>,
    pub clock_sources: Vec<String>,
    pub threshold_modes: Vec<String>,
    pub period: f64,
    pub output_steps: u32,
}

#[derive(Debug, Clone, PartialEq)]
pub enum GeneratorRuntime {
    Virtual,
    Hardware(HardwareConfiguration),
}

#[derive(Debug)]
enum GeneratorBackend {
    Virtual(LocalGeneratorModel),
    Hardware(HardwareGeneratorModel),
}

impl GeneratorBackend {
    const fn mode(&self) -> GenerationMode {
        match self {
            Self::Virtual(model) => model.mode(),
            Self::Hardware(model) => model.mode(),
        }
    }

    const fn set_mode(&mut self, mode: GenerationMode) {
        match self {
            Self::Virtual(model) => model.set_mode(mode),
            Self::Hardware(model) => model.set_mode(mode),
        }
    }
}

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    selections: Vec<Option<&'static str>>,
    checks: Vec<bool>,
    display_controls: DisplayControlModel,
    selected_coordinate: Option<CoordinateBound>,
    coordinate_text: String,
    endpoints: ChannelEndpointModel,
    period_editor_visible: bool,
    length_editor_visible: bool,
    accepted_measurement_length: u32,
    coordinate_commit_pending: bool,
    selected_pattern_group: Option<&'static str>,
    selected_channel_group: Option<usize>,
    pattern_cursor: usize,
    repeat_text: String,
    accepted_repeat_count: u32,
    save_dialog: Option<SaveDialogState>,
    load_dialog: Option<LoadDialogState>,
    generator: GeneratorBackend,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(GeneratorRuntime::Virtual)
    }
}

impl Window {
    /// Reimplements Ghidra function `FUN_0150f690` at `0x0150F690`.
    ///
    /// This creates the selected virtual or hardware model, starts it in Burst
    /// mode, fills the mode selector, selects the Time-axis presentation, and
    /// builds the initial display range from the period and output-step count.
    /// Rust ownership, the existing core model adapters, and iced state replace
    /// the recovered object and control allocations; no new crate is required.
    #[must_use]
    pub fn new(runtime: GeneratorRuntime) -> Self {
        let (generator, period, output_steps) = match runtime {
            GeneratorRuntime::Virtual => (
                GeneratorBackend::Virtual(LocalGeneratorModel::new(
                    VIRTUAL_THRESHOLD_MODES.map(str::to_owned).to_vec(),
                )),
                DEFAULT_PERIOD,
                DEFAULT_OUTPUT_STEPS,
            ),
            GeneratorRuntime::Hardware(configuration) => (
                GeneratorBackend::Hardware(HardwareGeneratorModel::new(
                    configuration.trigger_sources,
                    configuration.clock_sources,
                    configuration.threshold_modes,
                    configuration.period,
                    configuration.output_steps,
                )),
                configuration.period,
                configuration.output_steps,
            ),
        };
        let mode = match generator.mode() {
            GenerationMode::Step => "Step",
            GenerationMode::Burst => "Burst",
        };
        let mut values = vec![String::new(); 6];
        values[3] = period.to_string();
        DEFAULT_PATTERN.clone_into(&mut values[4]);
        values[5] = output_steps.to_string();

        Self {
            values,
            selections: vec![None, Some(mode), None, None],
            checks: vec![false; 1],
            display_controls: DisplayControlModel::new(0.0, period * f64::from(output_steps)),
            selected_coordinate: None,
            coordinate_text: String::new(),
            endpoints: ChannelEndpointModel { from: 0, to: 0 },
            period_editor_visible: true,
            length_editor_visible: false,
            accepted_measurement_length: output_steps,
            coordinate_commit_pending: false,
            selected_pattern_group: None,
            selected_channel_group: None,
            pattern_cursor: 1,
            repeat_text: String::from("1"),
            accepted_repeat_count: 1,
            save_dialog: None,
            load_dialog: None,
            generator,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CoordinateBound {
    Left,
    Right,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorMarker {
    A,
    B,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorMoveDirection {
    Left,
    Right,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorMoveStartBound {
    Visible(CoordinateBound),
    CursorAPlusOnePeriod,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CursorOrderConstraint {
    CursorBAfterAByOnePeriod,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CloseQueryResult {
    pub can_close: bool,
    pub warning: Option<&'static str>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CloseQueryRequest {
    pub application_exit_active: bool,
    pub instrument_close_blocked: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ChannelLabelKeyRequest {
    pub key: char,
    pub edited_channel_index: usize,
    pub active_channel_index: usize,
    pub text: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct GeneratorResizePolicy {
    pub run_base_layout: bool,
    pub scroll_scale_factor: u8,
    pub default_display_inset: u16,
    pub preserve_panel_height_in_compact_mode: bool,
    pub panel_height_scale_tenths: u8,
    pub reference_height_scale_tenths: u8,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DisplaySurfaceEvent {
    DoubleClick,
    MouseDown,
    MouseMove,
    MouseUp {
        constrained_mode: u8,
        order_constraint: CursorOrderConstraint,
        synchronize_cursors: bool,
    },
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ControlAction {
    ApplyChannelEnabled(bool),
    Scroll(DisplayScroll),
    SubmitGroupLabel(String),
    CommitGroupLabel {
        label: String,
        follow_up: [GroupLabelCommitStep; 5],
    },
    Dialog(DialogAction),
    SelectChannelIndex(i32),
    SynchronizeChannelSelection(usize),
    BeginCursorMove {
        cursor: CursorMarker,
        direction: CursorMoveDirection,
        start_bound: CursorMoveStartBound,
    },
    EndCursorMove {
        cursor: CursorMarker,
        direction: CursorMoveDirection,
        order_constraint: Option<CursorOrderConstraint>,
    },
    CloseQuery(CloseQueryResult),
    HandleChannelLabelKey {
        consumed: bool,
        committed_label: Option<String>,
    },
    ResizeLayout(GeneratorResizePolicy),
    ApplySharedResizeConstraints,
    SetInstrumentVisible(bool),
    DisplaySurface(DisplaySurfaceEvent),
    Start,
    Stop,
    Waveform(WaveformEditOperation),
    SelectAxisMode(AxisMode),
    ShowPeriodEditor,
    ShowLengthEditor,
    StepClockValue {
        target: ClockValueTarget,
        direction: ClockStepDirection,
    },
    ApplyTraceTypeSelection {
        trace_type_code: u8,
        display_mode_code: u8,
    },
    ApplyPeriodEdit(PeriodEditOperation),
    ApplyMeasurementLengthEdit,
    RestorePeriodEditorValue,
    ShowWindow([ShowStep; 2]),
    StepCoordinate(CoordinateStepDirection),
    ApplyTypedCoordinateEdit {
        commit: bool,
    },
    SelectPatternGroup {
        index: usize,
        refresh_pattern: bool,
    },
    CommitPatternText(String),
    ConstrainPatternEditor {
        key: Key,
        modifiers: Modifiers,
        editable_region: PatternEditableRegion,
    },
    SelectChannelGroup {
        index: usize,
        synchronize: [ChannelGroupSelectionStep; 5],
    },
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ClockValueTarget {
    Period,
    MeasurementLength,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ClockStepDirection {
    Decrease,
    Increase,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ShowStep {
    ReloadGenerator,
    RestoreWindowState,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CoordinateStepDirection {
    Decrease,
    Increase,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum GroupLabelCommitStep {
    ReindexEnabledChannels,
    ApplyEnabledChannels,
    CopyPatternGroups,
    SelectFirstPatternGroup,
    RefreshPatternView,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PatternEditableRegion {
    pub protected_prefix: usize,
    pub protected_suffix: usize,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ChannelGroupSelectionStep {
    LoadEndpointRange,
    SelectEndpointChannel,
    RefreshEndpointSummary,
    LoadEnabledState,
    LoadGroupLabel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CloseDisposition {
    Free,
    VetoAndStop {
        action: ControlAction,
        retry_after_stop: bool,
    },
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
    OptionSelected(usize, &'static str),
    Toggle(usize, bool),
    ScrollUp,
    ScrollDown,
    ScrollRight,
    ScrollLeft,
    CoordinateSelected(CoordinateBound),
    DeleteGroupPressed,
    DataSavePressed,
    DataLoadPressed,
    SaveTargetSelected(i32),
    LoadTargetSelected(i32),
    SaveAccepted,
    SaveCancelled,
    SavePickerCompleted(Option<PathBuf>),
    LoadAccepted,
    LoadCancelled,
    LoadPickerCompleted(Option<PathBuf>),
    StartPressed,
    StopPressed,
    DeleteIntervalPressed,
    SetIntervalPressed,
    RepeatIntervalPressed,
    RepeatTextChanged(String),
    RepeatError,
    RepeatSubmitted,
    InsertIntervalPressed,
    PeriodEditorSelected,
    LengthEditorSelected,
    MeasurementLengthError,
    MeasurementLengthSubmitted,
    MeasurementLengthExited,
    ClockStepDown,
    ClockStepUp,
    TraceTypeSelected(usize),
    ClockPeriodSubmitted,
    ClockPeriodExited,
    ClockPeriodError,
    Shown,
    CoordinateStepDown,
    CoordinateStepUp,
    CoordinateSubmitted,
    CoordinateExited,
    CoordinateTextChanged(String),
    CoordinateError,
    CoordinateStepEnded,
    PatternGroupSelected(usize),
    PatternTextChanged(String),
    PatternKeyPressed(char),
    PatternKeyDown(Key, Modifiers),
    PatternSubmitted,
    GroupLabelSubmitted,
    GroupLabelExited,
    ChannelGroupSelected(Option<usize>),
    ChannelSelected(Option<usize>),
    CursorAMoveLeftStarted,
    CursorAMoveLeftEnded,
    CursorAMoveRightStarted,
    CursorAMoveRightEnded,
    CursorBMoveLeftStarted,
    CursorBMoveLeftEnded,
    CursorBMoveRightStarted,
    CursorBMoveRightEnded,
    CloseQueried(CloseQueryRequest),
    ChannelLabelKeyPressed(ChannelLabelKeyRequest),
    Resized,
    CanResize,
    Hidden,
    ScreenDoubleClicked,
    ScreenMousePressed,
    ScreenMouseMoved,
    ScreenMouseReleased,
    FromEndpointSelected,
    ToEndpointSelected,
    TimeAxisSelected,
    ClickAxisSelected,
    NoOp,
}

#[derive(Default)]
struct ActionDisplayAdapter(Option<ControlAction>);

impl SignalDisplayAdapter for ActionDisplayAdapter {
    fn scroll(&mut self, direction: DisplayScroll) {
        self.0 = Some(ControlAction::Scroll(direction));
    }
}

struct CoordinateTextAdapter<'a>(&'a mut String);

impl CoordinateEditorAdapter for CoordinateTextAdapter<'_> {
    fn set_value(&mut self, value: f64) {
        self.0.clear();
        self.0.push_str(&value.to_string());
    }
}

#[derive(Default)]
struct ComboActionAdapter(Option<ControlAction>);

impl ChannelComboAdapter for ComboActionAdapter {
    fn set_item_index(&mut self, index: i32) {
        self.0 = Some(ControlAction::SelectChannelIndex(index));
    }
}

impl Window {
    /// Reimplements Ghidra function `FUN_0150fa50` at `0x0150FA50`.
    ///
    /// An idle generator can be released. An active generator vetoes the
    /// current close, requests Stop, and records that the host must retry the
    /// close after Stop completes. The typed result replaces the mutable VCL
    /// close-action parameter and requires no additional crate.
    #[must_use]
    pub const fn request_close(running: bool) -> CloseDisposition {
        if running {
            CloseDisposition::VetoAndStop {
                action: ControlAction::Stop,
                retry_after_stop: true,
            }
        } else {
            CloseDisposition::Free
        }
    }

    /// Reimplements Ghidra function `FUN_01510120` at `0x01510120`.
    ///
    /// Consuming the iced window releases its optional dialogs, generator,
    /// editor state, and owned collections in one lifecycle boundary. Rust
    /// ownership replaces the recovered explicit object and list-item cleanup;
    /// no backend action or additional crate is required.
    pub fn destroy(self) {}

    #[must_use]
    pub fn update(&mut self, message: Message) -> Option<ControlAction> {
        match message {
            Message::TextChanged(index, value) => {
                if let Some(field) = self.values.get_mut(index) {
                    *field = value;
                }
                None
            }
            Message::OptionSelected(index, value) => self.option_selected(index, value),
            Message::Toggle(index, value) => self.toggle_changed(index, value),
            Message::ScrollUp => self.scroll_up_clicked(),
            Message::ScrollDown => self.scroll_down_clicked(),
            Message::ScrollRight => self.scroll_right_clicked(),
            Message::ScrollLeft => self.scroll_left_clicked(),
            Message::CoordinateSelected(CoordinateBound::Left) => self.left_coordinate_clicked(),
            Message::CoordinateSelected(CoordinateBound::Right) => self.right_coordinate_clicked(),
            Message::DeleteGroupPressed => Some(self.delete_group_clicked()),
            Message::DataSavePressed => Some(self.open_save_dialog()),
            Message::DataLoadPressed => Some(self.open_load_dialog()),
            Message::SaveTargetSelected(index) => {
                if let Some(dialog) = self.save_dialog.as_mut() {
                    dialog.selected_index = index;
                }
                None
            }
            Message::LoadTargetSelected(index) => {
                if let Some(dialog) = self.load_dialog.as_mut() {
                    dialog.selected_index = index;
                }
                None
            }
            Message::SaveAccepted => self.accept_save_dialog(),
            Message::SaveCancelled => self.cancel_save_dialog(),
            Message::SavePickerCompleted(path) => self.complete_save_picker(path),
            Message::LoadAccepted => self.accept_load_dialog(),
            Message::LoadCancelled => self.cancel_load_dialog(),
            Message::LoadPickerCompleted(path) => self.complete_load_picker(path),
            Message::StartPressed => Some(Self::start_clicked()),
            Message::StopPressed => Some(ControlAction::Stop),
            Message::DeleteIntervalPressed => Some(Self::delete_interval_action()),
            Message::SetIntervalPressed => Some(Self::waveform_action(WaveformEditOperation::Set)),
            Message::RepeatIntervalPressed => Some(Self::repeat_interval_clicked()),
            Message::RepeatTextChanged(value) => self.repeat_text_changed(value),
            Message::RepeatError => self.repeating_edit_error(),
            Message::RepeatSubmitted => self.repeating_edit_key_pressed('\r'),
            Message::InsertIntervalPressed => Some(Self::insert_interval_clicked()),
            Message::PeriodEditorSelected => Some(self.select_period_editor()),
            Message::LengthEditorSelected => Some(self.select_length_editor()),
            Message::MeasurementLengthError => self.measurement_length_error(),
            Message::MeasurementLengthSubmitted => Self::measurement_length_key_pressed('\r'),
            Message::MeasurementLengthExited => Self::measurement_length_exited(),
            Message::ClockStepDown => Some(self.clock_step_down()),
            Message::ClockStepUp => Some(self.clock_step_up()),
            Message::TraceTypeSelected(index) => Self::trace_type_changed(Some(index)),
            Message::ClockPeriodSubmitted => Self::clock_period_key_pressed('\r'),
            Message::ClockPeriodExited => Self::clock_period_exited(),
            Message::ClockPeriodError => Some(Self::clock_period_error()),
            Message::Shown => Some(Self::on_show()),
            Message::CoordinateStepDown => Some(Self::coordinate_step_down()),
            Message::CoordinateStepUp => Some(Self::coordinate_step_up()),
            Message::CoordinateSubmitted => Self::coordinate_key_pressed('\r'),
            Message::CoordinateExited => Self::coordinate_exited(),
            Message::CoordinateTextChanged(value) => self.coordinate_text_changed(value),
            Message::CoordinateError => self.coordinate_error(),
            Message::CoordinateStepEnded => self.coordinate_step_ended(),
            Message::PatternGroupSelected(index) => self.pattern_group_changed(Some(index)),
            Message::PatternTextChanged(value) => self.pattern_text_changed(value),
            Message::PatternKeyPressed(key) => self.pattern_key_pressed(key),
            Message::PatternKeyDown(key, modifiers) => Some(Self::pattern_key_down(key, modifiers)),
            Message::PatternSubmitted => self.pattern_key_pressed('\r'),
            Message::GroupLabelSubmitted => self.group_label_key_pressed('\r'),
            Message::GroupLabelExited => self.group_label_exited(),
            Message::ChannelGroupSelected(index) => self.group_label_box_changed(index),
            Message::ChannelSelected(index) => Self::channel_box_changed(index),
            Message::CursorAMoveLeftStarted => Some(Self::move_a_cursor_left_started()),
            Message::CursorAMoveLeftEnded => Some(Self::move_a_cursor_left_ended()),
            Message::CursorAMoveRightStarted => Some(Self::move_a_cursor_right_started()),
            Message::CursorAMoveRightEnded => Some(Self::move_a_cursor_right_ended()),
            Message::CursorBMoveLeftStarted => Some(Self::move_b_cursor_left_started()),
            Message::CursorBMoveLeftEnded => Some(Self::move_b_cursor_left_ended()),
            Message::CursorBMoveRightStarted => Some(Self::move_b_cursor_right_started()),
            Message::CursorBMoveRightEnded => Some(Self::move_b_cursor_right_ended()),
            Message::CloseQueried(request) => Some(Self::close_query_action(request)),
            Message::ChannelLabelKeyPressed(request) => Self::channel_edit_key_pressed(request),
            Message::Resized => Some(Self::form_resized()),
            Message::CanResize => Some(Self::form_can_resize()),
            Message::Hidden => Some(Self::form_hidden()),
            Message::ScreenDoubleClicked => Some(Self::screen_double_clicked()),
            Message::ScreenMousePressed => Some(Self::screen_mouse_pressed()),
            Message::ScreenMouseMoved => Some(Self::screen_mouse_moved()),
            Message::ScreenMouseReleased => Some(Self::screen_mouse_released()),
            Message::FromEndpointSelected => Some(self.select_from_endpoint()),
            Message::ToEndpointSelected => Some(self.select_to_endpoint()),
            Message::TimeAxisSelected => Some(ControlAction::SelectAxisMode(AxisMode::Time)),
            Message::ClickAxisSelected => Some(ControlAction::SelectAxisMode(AxisMode::Click)),
            Message::NoOp => None,
        }
    }

    fn option_selected(&mut self, index: usize, value: &'static str) -> Option<ControlAction> {
        if let Some(selection) = self.selections.get_mut(index) {
            *selection = Some(value);
            if index == 1 {
                match value {
                    "Step" => self.generator.set_mode(GenerationMode::Step),
                    "Burst" => self.generator.set_mode(GenerationMode::Burst),
                    _ => {}
                }
            }
        }
        None
    }

    const fn delete_interval_action() -> ControlAction {
        Self::waveform_action(WaveformEditOperation::Delete)
    }

    fn toggle_changed(&mut self, index: usize, value: bool) -> Option<ControlAction> {
        if let Some(check) = self.checks.get_mut(index) {
            *check = value;
            if index == 0 {
                return Some(Self::channel_on_clicked(value));
            }
        }
        None
    }

    fn accept_save_dialog(&mut self) -> Option<ControlAction> {
        let action = self.save_dialog.as_mut().map(SaveDialogState::accept);
        if matches!(action, Some(DialogAction::TransferToTina)) {
            self.save_dialog = None;
        }
        action.map(ControlAction::Dialog)
    }

    fn cancel_save_dialog(&mut self) -> Option<ControlAction> {
        let action = self
            .save_dialog
            .is_some()
            .then_some(SaveDialogState::cancel());
        self.save_dialog = None;
        action.map(ControlAction::Dialog)
    }

    fn complete_save_picker(&mut self, path: Option<PathBuf>) -> Option<ControlAction> {
        let action = self
            .save_dialog
            .as_mut()
            .map(|dialog| dialog.picker_completed(path));
        self.save_dialog = None;
        action.map(ControlAction::Dialog)
    }

    fn accept_load_dialog(&mut self) -> Option<ControlAction> {
        let action = self.load_dialog.as_mut().map(LoadDialogState::accept);
        if matches!(action, Some(DialogAction::ReloadFromTina)) {
            self.load_dialog = None;
        }
        action.map(ControlAction::Dialog)
    }

    fn cancel_load_dialog(&mut self) -> Option<ControlAction> {
        let action = self
            .load_dialog
            .is_some()
            .then_some(LoadDialogState::cancel());
        self.load_dialog = None;
        action.map(ControlAction::Dialog)
    }

    fn complete_load_picker(&mut self, path: Option<PathBuf>) -> Option<ControlAction> {
        let action = self
            .load_dialog
            .as_mut()
            .map(|dialog| dialog.picker_completed(path));
        self.load_dialog = None;
        action.map(ControlAction::Dialog)
    }

    fn scroll_action(
        &self,
        dispatch: impl FnOnce(&DisplayControlModel, &mut dyn SignalDisplayAdapter),
    ) -> Option<ControlAction> {
        let mut display = ActionDisplayAdapter::default();
        dispatch(&self.display_controls, &mut display);
        display.0
    }

    /// Reimplements Ghidra function `FUN_01510330` at `0x01510330`.
    fn scroll_up_clicked(&self) -> Option<ControlAction> {
        self.scroll_action(|model, display| model.scroll_up(display))
    }

    /// Reimplements Ghidra function `FUN_01510340` at `0x01510340`.
    fn scroll_down_clicked(&self) -> Option<ControlAction> {
        self.scroll_action(|model, display| model.scroll_down(display))
    }

    /// Reimplements Ghidra function `FUN_01510350` at `0x01510350`.
    fn scroll_right_clicked(&self) -> Option<ControlAction> {
        self.scroll_action(|model, display| model.scroll_right(display))
    }

    /// Reimplements Ghidra function `FUN_01510360` at `0x01510360`.
    fn scroll_left_clicked(&self) -> Option<ControlAction> {
        self.scroll_action(|model, display| model.scroll_left(display))
    }

    /// Reimplements Ghidra function `FUN_01510630` at `0x01510630`.
    fn left_coordinate_clicked(&mut self) -> Option<ControlAction> {
        self.selected_coordinate = Some(CoordinateBound::Left);
        let mut editor = CoordinateTextAdapter(&mut self.coordinate_text);
        self.display_controls.show_left_bound(&mut editor);
        None
    }

    /// Reimplements Ghidra function `FUN_015109e0` at `0x015109E0`.
    fn right_coordinate_clicked(&mut self) -> Option<ControlAction> {
        self.selected_coordinate = Some(CoordinateBound::Right);
        let mut editor = CoordinateTextAdapter(&mut self.coordinate_text);
        self.display_controls.show_right_bound(&mut editor);
        None
    }

    /// Reimplements Ghidra function `FUN_01508a30` at `0x01508A30`.
    ///
    /// The delete button clears the group-label editor and returns the same
    /// empty-label submission action as the shared Enter path. The caller owns
    /// the guarded group removal and subsequent refresh.
    #[must_use]
    fn trigger_group_delete(&mut self) -> ControlAction {
        self.values[0].clear();
        ControlAction::SubmitGroupLabel(String::new())
    }

    /// Reimplements Ghidra function `FUN_0150f680` at `0x0150F680`.
    ///
    /// Iced applies the new checkbox state before this wrapper returns the
    /// typed model action.
    #[must_use]
    const fn channel_on_clicked(enabled: bool) -> ControlAction {
        ControlAction::ApplyChannelEnabled(enabled)
    }

    /// Reimplements Ghidra function `FUN_01511f60` at `0x01511F60`.
    #[must_use]
    fn open_save_dialog(&mut self) -> ControlAction {
        let mut dialog = SaveDialogState::on_create();
        dialog.attach_generator_window();
        self.save_dialog = Some(dialog);
        ControlAction::Dialog(DialogAction::OpenSave)
    }

    /// Reimplements Ghidra function `FUN_01511fa0` at `0x01511FA0`.
    #[must_use]
    fn open_load_dialog(&mut self) -> ControlAction {
        let mut dialog = LoadDialogState::on_create();
        dialog.attach_generator_window();
        self.load_dialog = Some(dialog);
        ControlAction::Dialog(DialogAction::OpenLoad)
    }

    /// Reimplements Ghidra function `FUN_015120f0` at `0x015120F0`.
    #[must_use]
    fn delete_group_clicked(&mut self) -> ControlAction {
        self.trigger_group_delete()
    }

    /// Returns the typed Start command for the core run coordinator.
    #[must_use]
    const fn start_clicked() -> ControlAction {
        ControlAction::Start
    }

    /// Reimplements Ghidra function `FUN_01512870` at `0x01512870`.
    #[must_use]
    const fn select_period_editor(&mut self) -> ControlAction {
        self.period_editor_visible = true;
        self.length_editor_visible = false;
        ControlAction::ShowPeriodEditor
    }

    /// Reimplements Ghidra function `FUN_015128a0` at `0x015128A0`.
    #[must_use]
    const fn select_length_editor(&mut self) -> ControlAction {
        self.period_editor_visible = false;
        self.length_editor_visible = true;
        ControlAction::ShowLengthEditor
    }

    /// Reimplements Ghidra function `FUN_01510020` at `0x01510020`.
    ///
    /// The visible clock editor selects whether the Down step is applied to
    /// period or measurement length. The host performs numeric validation and
    /// model normalization through the existing core adapters.
    #[must_use]
    const fn clock_step_down(&self) -> ControlAction {
        self.clock_step(ClockStepDirection::Decrease)
    }

    /// Reimplements Ghidra function `FUN_01510050` at `0x01510050`.
    ///
    /// The visible clock editor selects whether the Up step is applied to
    /// period or measurement length. Iced messages and the existing core
    /// adapters are sufficient, so no new crate is required.
    #[must_use]
    const fn clock_step_up(&self) -> ControlAction {
        self.clock_step(ClockStepDirection::Increase)
    }

    const fn clock_step(&self, direction: ClockStepDirection) -> ControlAction {
        let target = if self.length_editor_visible {
            ClockValueTarget::MeasurementLength
        } else {
            ClockValueTarget::Period
        };
        ControlAction::StepClockValue { target, direction }
    }

    /// Reimplements Ghidra function `FUN_01510080` at `0x01510080`.
    ///
    /// The recovered combo-box handler delegates to the shared trace selector.
    /// A missing selection and indexes other than one do not change state.
    /// Index one applies the two recovered presentation codes. The second
    /// option label is not recovered, so the typed action preserves the codes
    /// without assigning unsupported semantics. Iced selection messages are
    /// sufficient, so no additional crate is required.
    #[must_use]
    const fn trace_type_changed(index: Option<usize>) -> Option<ControlAction> {
        if matches!(index, Some(1)) {
            Some(ControlAction::ApplyTraceTypeSelection {
                trace_type_code: 10,
                display_mode_code: 2,
            })
        } else {
            None
        }
    }

    /// Reimplements Ghidra function `FUN_01510090` at `0x01510090`.
    ///
    /// Enter is consumed by iced's submit message and requests the existing
    /// typed period-edit operation. Other keys stay with the text editor and
    /// do not submit a model change. The established core coordinator owns
    /// parsing, normalization, scaling, refresh, and error propagation, so no
    /// new crate or duplicate numeric infrastructure is required.
    #[must_use]
    const fn clock_period_key_pressed(key: char) -> Option<ControlAction> {
        if key == '\r' {
            Some(ControlAction::ApplyPeriodEdit(PeriodEditOperation::Typed))
        } else {
            None
        }
    }

    /// Reimplements Ghidra function `FUN_015100b0` at `0x015100B0`.
    ///
    /// Focus loss forces the same Enter path as a direct submit. The host focus
    /// subscription sends `ClockPeriodExited`; this adapter reuses the iced
    /// key handler so validation and model updates cannot diverge.
    #[must_use]
    const fn clock_period_exited() -> Option<ControlAction> {
        Self::clock_period_key_pressed('\r')
    }

    /// Reimplements Ghidra function `FUN_015128d0` at `0x015128D0`.
    ///
    /// An invalid measurement-length edit restores the iced integer editor
    /// from the generator's last accepted output-step count. The error path
    /// changes no generator or display state and needs no additional crate.
    fn measurement_length_error(&mut self) -> Option<ControlAction> {
        self.values[5] = self.accepted_measurement_length.to_string();
        None
    }

    /// Reimplements Ghidra function `FUN_01512900` at `0x01512900`.
    ///
    /// Focus loss synthesizes Enter and reuses the measurement-length
    /// key-press path. The iced host focus subscription can dispatch this
    /// message without duplicating validation or display refresh behavior.
    const fn measurement_length_exited() -> Option<ControlAction> {
        Self::measurement_length_key_pressed('\r')
    }

    /// Reimplements Ghidra function `FUN_01512930` at `0x01512930`.
    ///
    /// Enter is consumed and requests the shared typed measurement-length
    /// operation. Other keys stay with the iced integer editor. The established
    /// coordinator owns validation, range updates, channel updates, and redraw.
    const fn measurement_length_key_pressed(key: char) -> Option<ControlAction> {
        if key == '\r' {
            Some(ControlAction::ApplyMeasurementLengthEdit)
        } else {
            None
        }
    }

    /// Reimplements Ghidra function `FUN_015100e0` at `0x015100E0`.
    ///
    /// A rejected edit restores the visible period field from the accepted
    /// numeric-editor value. The host adapter owns the current value and the
    /// established formatter. This handler does not report another error or
    /// change the generator model. Iced messages and the existing period
    /// adapter are sufficient, so no new crate is required.
    #[must_use]
    const fn clock_period_error() -> ControlAction {
        ControlAction::RestorePeriodEditorValue
    }

    /// Reimplements Ghidra function `FUN_01510370` at `0x01510370`.
    ///
    /// Showing the window first reloads and synchronizes the current generator
    /// through the existing core coordinator. It then restores shared window
    /// state. The ordered typed action lets the iced host run both established
    /// adapters without duplicating their implementation or adding a crate.
    #[must_use]
    const fn on_show() -> ControlAction {
        ControlAction::ShowWindow([ShowStep::ReloadGenerator, ShowStep::RestoreWindowState])
    }

    /// Reimplements Ghidra function `FUN_01510640` at `0x01510640`.
    ///
    /// The spin-control Down callback selects the recovered decrease operation
    /// in the shared coordinate editor. That established adapter owns
    /// span-based stepping, bound validation, cursor clamping, display refresh,
    /// and commit gating. The iced message only preserves the direction, so no
    /// additional crate is required.
    #[must_use]
    const fn coordinate_step_down() -> ControlAction {
        ControlAction::StepCoordinate(CoordinateStepDirection::Decrease)
    }

    /// Reimplements Ghidra function `FUN_01510650` at `0x01510650`.
    ///
    /// The spin-control Up callback selects the recovered increase operation in
    /// the shared coordinate editor. The existing adapter owns step
    /// normalization, validation, refresh, cursor clamping, and commit gating.
    #[must_use]
    const fn coordinate_step_up() -> ControlAction {
        ControlAction::StepCoordinate(CoordinateStepDirection::Increase)
    }

    /// Reimplements Ghidra function `FUN_01510660` at `0x01510660`.
    ///
    /// Enter is consumed by iced's submit message, enables the recovered commit
    /// flag, and selects the shared editor's typed operation. Other keys stay
    /// with the text editor. The host uses the established coordinate adapter
    /// for parsing, validation, cursor clamping, and graph update.
    #[must_use]
    const fn coordinate_key_pressed(key: char) -> Option<ControlAction> {
        if key == '\r' {
            Some(ControlAction::ApplyTypedCoordinateEdit { commit: true })
        } else {
            None
        }
    }

    /// Reimplements Ghidra function `FUN_01510670` at `0x01510670`.
    ///
    /// Focus loss synthesizes Enter and dispatches the same committed typed
    /// coordinate edit as direct submission. The iced host focus subscription
    /// sends this message because the installed text input has no blur callback.
    #[must_use]
    const fn coordinate_exited() -> Option<ControlAction> {
        Self::coordinate_key_pressed('\r')
    }

    /// Reimplements Ghidra function `FUN_01510680` at `0x01510680`.
    ///
    /// A rejected coordinate restores the selected stored bound. Explicit
    /// Right selection restores the upper bound; every other state follows the
    /// recovered Left branch. The existing display model and editor adapter
    /// provide the value and formatting boundary without a new crate.
    fn coordinate_error(&mut self) -> Option<ControlAction> {
        let mut editor = CoordinateTextAdapter(&mut self.coordinate_text);
        if self.selected_coordinate == Some(CoordinateBound::Right) {
            self.display_controls.show_right_bound(&mut editor);
        } else {
            self.display_controls.show_left_bound(&mut editor);
        }
        None
    }

    /// Reimplements Ghidra function `FUN_01510690` at `0x01510690`.
    ///
    /// The spin-control end callback only arms the next shared coordinate
    /// update for commit. It does not parse text, change a bound, or update the
    /// graph itself. The iced host pointer-release subscription sends this
    /// message because a standard button has no end-click callback.
    const fn coordinate_step_ended(&mut self) -> Option<ControlAction> {
        self.coordinate_commit_pending = true;
        None
    }

    /// Reimplements Ghidra function `FUN_015106a0` at `0x015106A0`.
    ///
    /// A valid A-D selection stores the corresponding group and requests a
    /// rebuild of its per-channel pattern buffer and visible pattern text. A
    /// missing or out-of-range selection is a complete no-op. The iced host
    /// maps the stable index to its owned group object.
    fn pattern_group_changed(&mut self, index: Option<usize>) -> Option<ControlAction> {
        let index = index.filter(|index| *index < PATTERN_GROUPS.len())?;
        self.selected_pattern_group = Some(PATTERN_GROUPS[index]);
        Some(ControlAction::SelectPatternGroup {
            index,
            refresh_pattern: true,
        })
    }

    fn coordinate_text_changed(&mut self, value: String) -> Option<ControlAction> {
        self.coordinate_text = value;
        None
    }

    fn pattern_text_changed(&mut self, value: String) -> Option<ControlAction> {
        self.values[4] = value;
        self.pattern_cursor = self
            .pattern_cursor
            .min(self.values[4].chars().count().saturating_sub(1));
        None
    }

    /// Reimplements Ghidra function `FUN_01510730` at `0x01510730`.
    ///
    /// Enter commits the current pattern. A normal key replaces the selected
    /// signal symbol only when both the selected character and typed character
    /// belong to the `-`, `0`, `1`, `X`, or `Z` alphabet. Lowercase signal
    /// letters become uppercase. The one-character selection advances without
    /// entering the closing delimiter. Other keys are consumed as no-ops.
    /// The standard library supplies Unicode-safe character replacement, while
    /// iced supplies the editor messages, so no additional crate is required.
    fn pattern_key_pressed(&mut self, key: char) -> Option<ControlAction> {
        if key == '\r' {
            return Some(ControlAction::CommitPatternText(self.values[4].clone()));
        }

        let mut characters = self.values[4].chars().collect::<Vec<_>>();
        let selected = characters.get(self.pattern_cursor).copied()?;
        if !Self::is_pattern_symbol(selected) || !Self::is_pattern_symbol(key) {
            return None;
        }

        characters[self.pattern_cursor] = key.to_ascii_uppercase();
        self.values[4] = characters.iter().collect();
        self.pattern_cursor += 1;
        if characters.len().saturating_sub(1) <= self.pattern_cursor {
            self.pattern_cursor = self.pattern_cursor.saturating_sub(1);
        }
        None
    }

    const fn is_pattern_symbol(value: char) -> bool {
        matches!(value, '-' | '0' | '1' | 'X' | 'Z' | 'x' | 'z')
    }

    fn repeat_text_changed(&mut self, value: String) -> Option<ControlAction> {
        self.repeat_text = value;
        None
    }

    /// Reimplements Ghidra function `FUN_01512490` at `0x01512490`.
    ///
    /// An invalid integer edit restores the visible repeat count from the last
    /// accepted model value. This iced state update does not dispatch waveform
    /// work and requires no additional parsing crate.
    fn repeating_edit_error(&mut self) -> Option<ControlAction> {
        self.repeat_text = self.accepted_repeat_count.to_string();
        None
    }

    /// Reimplements Ghidra function `FUN_015124f0` at `0x015124F0`.
    ///
    /// Enter is consumed and copies a valid positive integer from the iced
    /// editor into the accepted repeat-count state. Invalid text follows the
    /// editor error path and restores the previous value. Other keys do not
    /// commit. Standard integer parsing is sufficient, so no extra crate is
    /// required.
    fn repeating_edit_key_pressed(&mut self, key: char) -> Option<ControlAction> {
        if key != '\r' {
            return None;
        }

        if let Some(value) = self
            .repeat_text
            .parse::<u32>()
            .ok()
            .filter(|value| *value > 0)
        {
            self.accepted_repeat_count = value;
        } else {
            return self.repeating_edit_error();
        }
        None
    }

    const fn repeat_interval_clicked() -> ControlAction {
        ControlAction::Waveform(WaveformEditOperation::Repeat(1))
    }

    const fn insert_interval_clicked() -> ControlAction {
        ControlAction::Waveform(WaveformEditOperation::Insert)
    }

    const fn waveform_action(operation: WaveformEditOperation) -> ControlAction {
        ControlAction::Waveform(operation)
    }

    /// Reimplements Ghidra function `FUN_01512100` at `0x01512100`.
    ///
    /// The `PatternEdit` key-down event delegates the original iced key and
    /// modifier state to the shared bounded-editor path. Exactly one leading
    /// delimiter and one trailing delimiter stay outside the editable region.
    /// The typed adapter preserves that boundary contract without duplicating
    /// keyboard navigation behavior or requiring another crate.
    const fn pattern_key_down(key: Key, modifiers: Modifiers) -> ControlAction {
        ControlAction::ConstrainPatternEditor {
            key,
            modifiers,
            editable_region: PatternEditableRegion {
                protected_prefix: 1,
                protected_suffix: 1,
            },
        }
    }

    /// Reimplements Ghidra function `FUN_015109f0` at `0x015109F0`.
    ///
    /// A non-Enter key leaves the form-specific path idle. Enter commits the
    /// current group label through the shared editor and then returns the five
    /// required refresh operations in recovered order. Iced supplies the text
    /// input submit message; the typed action keeps the model work outside the
    /// view and requires no additional crate.
    fn group_label_key_pressed(&self, key: char) -> Option<ControlAction> {
        if key != '\r' {
            return None;
        }

        Some(ControlAction::CommitGroupLabel {
            label: self.values[0].clone(),
            follow_up: [
                GroupLabelCommitStep::ReindexEnabledChannels,
                GroupLabelCommitStep::ApplyEnabledChannels,
                GroupLabelCommitStep::CopyPatternGroups,
                GroupLabelCommitStep::SelectFirstPatternGroup,
                GroupLabelCommitStep::RefreshPatternView,
            ],
        })
    }

    /// Reimplements Ghidra function `FUN_01512d30` at `0x01512D30`.
    fn group_label_exited(&self) -> Option<ControlAction> {
        self.group_label_key_pressed('\r')
    }

    /// Reimplements Ghidra function `FUN_01512950` at `0x01512950`.
    ///
    /// A missing group selection is a no-op. A selected iced row becomes the
    /// current channel group and requests the five dependent control updates
    /// in recovered order. The owning model resolves the dynamic group object;
    /// this view adapter therefore needs no duplicate group storage or crate.
    fn group_label_box_changed(&mut self, index: Option<usize>) -> Option<ControlAction> {
        let index = index?;
        self.selected_channel_group = Some(index);
        Some(ControlAction::SelectChannelGroup {
            index,
            synchronize: [
                ChannelGroupSelectionStep::LoadEndpointRange,
                ChannelGroupSelectionStep::SelectEndpointChannel,
                ChannelGroupSelectionStep::RefreshEndpointSummary,
                ChannelGroupSelectionStep::LoadEnabledState,
                ChannelGroupSelectionStep::LoadGroupLabel,
            ],
        })
    }

    /// Reimplements Ghidra function `FUN_01512970` at `0x01512970`.
    ///
    /// A missing iced combo selection is a no-op. A valid channel index is
    /// delegated to the established synchronizer, which owns From and To range
    /// rules, attached-group selection, enabled state, endpoint text, and range
    /// control state. This adapter requires no additional crate.
    const fn channel_box_changed(index: Option<usize>) -> Option<ControlAction> {
        match index {
            Some(index) => Some(ControlAction::SynchronizeChannelSelection(index)),
            None => None,
        }
    }

    /// Reimplements Ghidra function `FUN_015129d0` at `0x015129D0`.
    ///
    /// Pressing the iced move control resets Cursor A to the visible left
    /// bound and starts the shared left-move interaction. The typed action lets
    /// the host own pointer capture and repeat timing without another crate.
    const fn move_a_cursor_left_started() -> ControlAction {
        ControlAction::BeginCursorMove {
            cursor: CursorMarker::A,
            direction: CursorMoveDirection::Left,
            start_bound: CursorMoveStartBound::Visible(CoordinateBound::Left),
        }
    }

    /// Reimplements Ghidra function `FUN_01512a30` at `0x01512A30`.
    const fn move_a_cursor_left_ended() -> ControlAction {
        ControlAction::EndCursorMove {
            cursor: CursorMarker::A,
            direction: CursorMoveDirection::Left,
            order_constraint: None,
        }
    }

    /// Reimplements Ghidra function `FUN_01512a70` at `0x01512A70`.
    const fn move_a_cursor_right_started() -> ControlAction {
        ControlAction::BeginCursorMove {
            cursor: CursorMarker::A,
            direction: CursorMoveDirection::Right,
            start_bound: CursorMoveStartBound::Visible(CoordinateBound::Right),
        }
    }

    /// Reimplements Ghidra function `FUN_01512ab0` at `0x01512AB0`.
    const fn move_a_cursor_right_ended() -> ControlAction {
        ControlAction::EndCursorMove {
            cursor: CursorMarker::A,
            direction: CursorMoveDirection::Right,
            order_constraint: Some(CursorOrderConstraint::CursorBAfterAByOnePeriod),
        }
    }

    /// Reimplements Ghidra function `FUN_01512bb0` at `0x01512BB0`.
    const fn move_b_cursor_left_started() -> ControlAction {
        ControlAction::BeginCursorMove {
            cursor: CursorMarker::B,
            direction: CursorMoveDirection::Left,
            start_bound: CursorMoveStartBound::CursorAPlusOnePeriod,
        }
    }

    /// Reimplements Ghidra function `FUN_01512c70` at `0x01512C70`.
    const fn move_b_cursor_left_ended() -> ControlAction {
        ControlAction::EndCursorMove {
            cursor: CursorMarker::B,
            direction: CursorMoveDirection::Left,
            order_constraint: None,
        }
    }

    /// Reimplements Ghidra function `FUN_01512cb0` at `0x01512CB0`.
    const fn move_b_cursor_right_started() -> ControlAction {
        ControlAction::BeginCursorMove {
            cursor: CursorMarker::B,
            direction: CursorMoveDirection::Right,
            start_bound: CursorMoveStartBound::Visible(CoordinateBound::Right),
        }
    }

    /// Reimplements Ghidra function `FUN_01512cf0` at `0x01512CF0`.
    const fn move_b_cursor_right_ended() -> ControlAction {
        ControlAction::EndCursorMove {
            cursor: CursorMarker::B,
            direction: CursorMoveDirection::Right,
            order_constraint: None,
        }
    }

    /// Reimplements Ghidra function `FUN_015133b0` at `0x015133B0`.
    const fn form_close_query(request: CloseQueryRequest) -> CloseQueryResult {
        let can_close = !request.application_exit_active || !request.instrument_close_blocked;
        CloseQueryResult {
            can_close,
            warning: if can_close { None } else { Some(CLOSE_WARNING) },
        }
    }

    const fn close_query_action(request: CloseQueryRequest) -> ControlAction {
        ControlAction::CloseQuery(Self::form_close_query(request))
    }

    /// Reimplements Ghidra function `FUN_015133c0` at `0x015133C0`.
    fn channel_edit_key_pressed(request: ChannelLabelKeyRequest) -> Option<ControlAction> {
        if request.key != '\r' {
            return None;
        }

        Some(ControlAction::HandleChannelLabelKey {
            consumed: true,
            committed_label: (request.edited_channel_index == request.active_channel_index)
                .then_some(request.text),
        })
    }

    /// Reimplements Ghidra function `FUN_015133d0` at `0x015133D0`.
    const fn form_resized() -> ControlAction {
        ControlAction::ResizeLayout(GeneratorResizePolicy {
            run_base_layout: true,
            scroll_scale_factor: 4,
            default_display_inset: 24,
            preserve_panel_height_in_compact_mode: true,
            panel_height_scale_tenths: 24,
            reference_height_scale_tenths: 3,
        })
    }

    /// Reimplements Ghidra function `FUN_015133f0` at `0x015133F0`.
    const fn form_can_resize() -> ControlAction {
        ControlAction::ApplySharedResizeConstraints
    }

    /// Reimplements Ghidra function `FUN_015133e0` at `0x015133E0`.
    const fn form_hidden() -> ControlAction {
        ControlAction::SetInstrumentVisible(false)
    }

    /// Reimplements Ghidra function `FUN_01513410` at `0x01513410`.
    const fn screen_double_clicked() -> ControlAction {
        ControlAction::DisplaySurface(DisplaySurfaceEvent::DoubleClick)
    }

    /// Reimplements Ghidra function `FUN_01513420` at `0x01513420`.
    const fn screen_mouse_pressed() -> ControlAction {
        ControlAction::DisplaySurface(DisplaySurfaceEvent::MouseDown)
    }

    /// Reimplements Ghidra function `FUN_01513450` at `0x01513450`.
    const fn screen_mouse_moved() -> ControlAction {
        ControlAction::DisplaySurface(DisplaySurfaceEvent::MouseMove)
    }

    /// Reimplements Ghidra function `FUN_01513480` at `0x01513480`.
    const fn screen_mouse_released() -> ControlAction {
        ControlAction::DisplaySurface(DisplaySurfaceEvent::MouseUp {
            constrained_mode: 4,
            order_constraint: CursorOrderConstraint::CursorBAfterAByOnePeriod,
            synchronize_cursors: true,
        })
    }

    /// Reimplements Ghidra function `FUN_01512990` at `0x01512990`.
    #[must_use]
    fn select_from_endpoint(&self) -> ControlAction {
        let mut combo = ComboActionAdapter::default();
        self.endpoints.show_from(&mut combo);
        combo
            .0
            .unwrap_or(ControlAction::SelectChannelIndex(self.endpoints.from))
    }

    /// Reimplements Ghidra function `FUN_015129b0` at `0x015129B0`.
    #[must_use]
    fn select_to_endpoint(&self) -> ControlAction {
        let mut combo = ComboActionAdapter::default();
        self.endpoints.show_to(&mut combo);
        combo
            .0
            .unwrap_or(ControlAction::SelectChannelIndex(self.endpoints.to))
    }

    const fn save_target(index: i32) -> Option<&'static str> {
        match index {
            0 => Some(SAVE_TARGETS[0]),
            1 => Some(SAVE_TARGETS[1]),
            2 => Some(SAVE_TARGETS[2]),
            _ => None,
        }
    }

    const fn load_target(index: i32) -> Option<&'static str> {
        match index {
            0 => Some(LOAD_TARGETS[0]),
            1 => Some(LOAD_TARGETS[1]),
            _ => None,
        }
    }

    fn dialog_controls(&self) -> Element<'_, Message> {
        match (&self.save_dialog, &self.load_dialog) {
            (Some(dialog), _) => column![
                text("Save data"),
                pick_list(
                    SAVE_TARGETS,
                    Self::save_target(dialog.selected_index),
                    |value| Message::SaveTargetSelected(match value {
                        "Definition file" => 0,
                        "Sample data" => 1,
                        _ => 2,
                    })
                ),
                row![
                    button("OK").on_press(Message::SaveAccepted),
                    button("Cancel").on_press(Message::SaveCancelled),
                    button("Cancel picker").on_press(Message::SavePickerCompleted(None)),
                ]
                .spacing(4),
            ]
            .spacing(4)
            .into(),
            (None, Some(dialog)) => column![
                text("Load data"),
                pick_list(
                    LOAD_TARGETS,
                    Self::load_target(dialog.selected_index),
                    |value| Message::LoadTargetSelected(i32::from(value == "Tina"))
                ),
                row![
                    button("OK").on_press(Message::LoadAccepted),
                    button("Cancel").on_press(Message::LoadCancelled),
                    button("Cancel picker").on_press(Message::LoadPickerCompleted(None)),
                ]
                .spacing(4),
            ]
            .spacing(4)
            .into(),
            (None, None) => column![].into(),
        }
    }

    /// Maps Ghidra function `FUN_0150fa60` at `0x0150FA60` to iced's
    /// declarative paint lifecycle.
    ///
    /// Iced clears and clips the widget surface before it renders the current
    /// display tree. The view rebuild draws the graph surface and its current
    /// controls, so the adapter does not issue an imperative repaint or keep a
    /// native canvas handle. No additional graphics crate is required.
    fn display_surface() -> Element<'static, Message> {
        window_shell::surface("Digital Signal Generator display surface")
    }

    #[cfg(test)]
    const fn set_display_bounds(&mut self, left: f64, right: f64) {
        self.display_controls = DisplayControlModel::new(left, right);
    }

    #[cfg(test)]
    #[must_use]
    const fn selected_coordinate(&self) -> Option<CoordinateBound> {
        self.selected_coordinate
    }

    #[cfg(test)]
    #[must_use]
    fn coordinate_text(&self) -> &str {
        &self.coordinate_text
    }

    #[cfg(test)]
    #[must_use]
    fn group_label(&self) -> &str {
        &self.values[0]
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    #[must_use]
    #[allow(clippy::too_many_lines)]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar: Element<'_, Message> = container(
            row![
                button("Start").on_press(Message::StartPressed),
                button("Stop").on_press(Message::StopPressed),
                button("Data Load").on_press(Message::DataLoadPressed),
                button("Data Save").on_press(Message::DataSavePressed),
                button("Settings").on_press(Message::NoOp),
            ]
            .spacing(4),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .into();
        let clock_editor: Element<'_, Message> = if self.period_editor_visible {
            row![
                text("Period").width(Length::FillPortion(2)),
                text_input("", &self.values[3])
                    .on_input(move |value| Message::TextChanged(3, value))
                    .on_submit(Message::ClockPeriodSubmitted)
                    .width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .align_y(Alignment::Center)
            .into()
        } else {
            debug_assert!(self.length_editor_visible);
            row![
                text("Length").width(Length::FillPortion(2)),
                text_input("", &self.values[5])
                    .on_input(move |value| Message::TextChanged(5, value))
                    .on_submit(Message::MeasurementLengthSubmitted)
                    .width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .align_y(Alignment::Center)
            .into()
        };
        let dialog_controls = self.dialog_controls();
        let body: Element<'_, Message> = row![
            container(scrollable(
                column![
                    dialog_controls,
                    row![
                        text("Channel").width(Length::FillPortion(2)),
                        pick_list(
                            ["Channel 1", "Channel 2", "Channel 3", "Channel 4"],
                            self.selections[0],
                            move |value| { Message::OptionSelected(0, value) }
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Group Label").width(Length::FillPortion(2)),
                        text_input("", &self.values[0])
                            .on_input(move |value| Message::TextChanged(0, value))
                            .on_submit(Message::GroupLabelSubmitted)
                            .width(Length::FillPortion(3)),
                        button("Del").on_press(Message::DeleteGroupPressed),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    checkbox("On", self.checks[0])
                        .on_toggle(move |value| Message::Toggle(0, value)),
                    row![
                        button("From").on_press(Message::FromEndpointSelected),
                        text_input("", &self.values[1])
                            .on_input(move |value| Message::TextChanged(1, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        button("To").on_press(Message::ToEndpointSelected),
                        text_input("", &self.values[2])
                            .on_input(move |value| Message::TextChanged(2, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Clock").width(Length::FillPortion(2)),
                        button("Period").on_press(Message::PeriodEditorSelected),
                        button("Length").on_press(Message::LengthEditorSelected),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        clock_editor,
                        button("Down").on_press(Message::ClockStepDown),
                        button("Up").on_press(Message::ClockStepUp),
                    ]
                    .spacing(4)
                    .align_y(Alignment::Center),
                    row![
                        text("Mode").width(Length::FillPortion(2)),
                        pick_list(["Step", "Burst"], self.selections[1], move |value| {
                            Message::OptionSelected(1, value)
                        })
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Level").width(Length::FillPortion(2)),
                        pick_list(
                            ["Default", "Option 1", "Option 2"],
                            self.selections[2],
                            move |value| { Message::OptionSelected(2, value) }
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Trigger").width(Length::FillPortion(2)),
                        pick_list(
                            ["Default", "Option 1", "Option 2"],
                            self.selections[3],
                            move |value| { Message::OptionSelected(3, value) }
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Pattern group").width(Length::FillPortion(2)),
                        pick_list(PATTERN_GROUPS, self.selected_pattern_group, |value| {
                            Message::PatternGroupSelected(
                                PATTERN_GROUPS
                                    .iter()
                                    .position(|candidate| *candidate == value)
                                    .unwrap_or(PATTERN_GROUPS.len()),
                            )
                        })
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Pattern").width(Length::FillPortion(2)),
                        text_input("", &self.values[4])
                            .on_input(Message::PatternTextChanged)
                            .on_submit(Message::PatternSubmitted)
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                ]
                .spacing(8)
            ))
            .padding(8)
            .width(Length::Fixed(300.0))
            .height(Length::Fill),
            column![
                row![
                    button("Up").on_press(Message::ScrollUp),
                    button("Down").on_press(Message::ScrollDown),
                    button("Left").on_press(Message::ScrollLeft),
                    button("Right").on_press(Message::ScrollRight),
                    button("Time").on_press(Message::TimeAxisSelected),
                    button("Click").on_press(Message::ClickAxisSelected),
                ]
                .spacing(4),
                Self::display_surface(),
                row![
                    button("Set").on_press(Message::SetIntervalPressed),
                    button("Insert").on_press(Message::InsertIntervalPressed),
                    button("Delete").on_press(Message::DeleteIntervalPressed),
                    text_input("", &self.repeat_text)
                        .on_input(Message::RepeatTextChanged)
                        .on_submit(Message::RepeatSubmitted)
                        .width(Length::Fixed(48.0)),
                    button("Repeat").on_press(Message::RepeatIntervalPressed),
                ]
                .spacing(4),
                row![
                    button("Left bound")
                        .on_press(Message::CoordinateSelected(CoordinateBound::Left)),
                    text_input("", &self.coordinate_text)
                        .on_input(Message::CoordinateTextChanged)
                        .on_submit(Message::CoordinateSubmitted)
                        .width(Length::Fixed(120.0)),
                    button("Down").on_press(Message::CoordinateStepDown),
                    button("Up").on_press(Message::CoordinateStepUp),
                    button("Right bound")
                        .on_press(Message::CoordinateSelected(CoordinateBound::Right)),
                ]
                .spacing(4)
                .align_y(Alignment::Center),
            ]
            .spacing(4),
        ]
        .spacing(6)
        .padding(6)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn virtual_creation_uses_recovered_burst_timing_defaults() {
        let mut window = Window::default();

        assert!(matches!(&window.generator, GeneratorBackend::Virtual(_)));
        assert_eq!(window.generator.mode(), GenerationMode::Burst);
        assert_eq!(window.selections[1], Some("Burst"));
        assert_eq!(window.values[3], "0.01");
        assert_eq!(window.values[5], "100");

        let _ = window.update(Message::CoordinateSelected(CoordinateBound::Right));
        assert_eq!(window.coordinate_text, "1");
    }

    #[test]
    fn hardware_creation_uses_supplied_timing_and_mode_updates_the_model() {
        let mut window = Window::new(GeneratorRuntime::Hardware(HardwareConfiguration {
            trigger_sources: vec!["Internal".to_owned()],
            clock_sources: vec!["Internal".to_owned()],
            threshold_modes: vec!["TTL".to_owned()],
            period: 0.25,
            output_steps: 8,
        }));

        assert!(matches!(&window.generator, GeneratorBackend::Hardware(_)));
        assert_eq!(window.generator.mode(), GenerationMode::Burst);
        assert_eq!(window.values[3], "0.25");
        assert_eq!(window.values[5], "8");

        let _ = window.update(Message::OptionSelected(1, "Step"));
        assert_eq!(window.generator.mode(), GenerationMode::Step);

        let _ = window.update(Message::CoordinateSelected(CoordinateBound::Right));
        assert_eq!(window.coordinate_text, "2");
    }

    #[test]
    fn close_frees_an_idle_generator_and_defers_an_active_generator() {
        assert_eq!(Window::request_close(false), CloseDisposition::Free);
        assert_eq!(
            Window::request_close(true),
            CloseDisposition::VetoAndStop {
                action: ControlAction::Stop,
                retry_after_stop: true,
            }
        );
    }

    #[test]
    fn destroy_consumes_all_owned_window_state_without_a_backend_action() {
        Window::default().destroy();
    }

    #[test]
    fn paint_adapter_builds_the_declarative_display_surface() {
        drop(Window::display_surface());
    }

    #[test]
    fn channel_on_toggle_returns_a_typed_model_action() {
        let mut window = Window::default();

        let action = window.update(Message::Toggle(0, true));

        assert_eq!(action, Some(ControlAction::ApplyChannelEnabled(true)));
    }

    #[test]
    fn scroll_messages_return_the_exact_display_direction() {
        let mut window = Window::default();

        let actions = [
            window.update(Message::ScrollUp),
            window.update(Message::ScrollDown),
            window.update(Message::ScrollRight),
            window.update(Message::ScrollLeft),
        ];

        assert_eq!(
            actions,
            [
                Some(ControlAction::Scroll(DisplayScroll::Up)),
                Some(ControlAction::Scroll(DisplayScroll::Down)),
                Some(ControlAction::Scroll(DisplayScroll::Right)),
                Some(ControlAction::Scroll(DisplayScroll::Left)),
            ]
        );
    }

    #[test]
    fn coordinate_selection_displays_the_stored_bound_without_an_action() {
        let mut window = Window::default();
        window.set_display_bounds(1.25, 8.5);

        let left_action = window.update(Message::CoordinateSelected(CoordinateBound::Left));
        assert_eq!(left_action, None);
        assert_eq!(window.selected_coordinate(), Some(CoordinateBound::Left));
        assert_eq!(window.coordinate_text(), "1.25");

        let right_action = window.update(Message::CoordinateSelected(CoordinateBound::Right));
        assert_eq!(right_action, None);
        assert_eq!(window.selected_coordinate(), Some(CoordinateBound::Right));
        assert_eq!(window.coordinate_text(), "8.5");
    }

    #[test]
    fn delete_group_clears_the_editor_and_reuses_empty_label_submission() {
        let mut window = Window::default();
        let _ = window.update(Message::TextChanged(0, "Group A".to_owned()));

        let action = window.update(Message::DeleteGroupPressed);

        assert_eq!(window.group_label(), "");
        assert_eq!(action, Some(ControlAction::SubmitGroupLabel(String::new())));
    }

    #[test]
    fn group_label_enter_commits_and_runs_form_refresh_in_order() {
        let mut window = Window::default();
        let _ = window.update(Message::TextChanged(0, "Inputs".to_owned()));

        assert_eq!(window.group_label_key_pressed('x'), None);
        assert_eq!(
            window.update(Message::GroupLabelSubmitted),
            Some(ControlAction::CommitGroupLabel {
                label: "Inputs".to_owned(),
                follow_up: [
                    GroupLabelCommitStep::ReindexEnabledChannels,
                    GroupLabelCommitStep::ApplyEnabledChannels,
                    GroupLabelCommitStep::CopyPatternGroups,
                    GroupLabelCommitStep::SelectFirstPatternGroup,
                    GroupLabelCommitStep::RefreshPatternView,
                ],
            })
        );
    }

    #[test]
    fn group_label_exit_uses_the_enter_commit_path() {
        let mut window = Window::default();
        let _ = window.update(Message::TextChanged(0, String::from("Bus")));

        assert_eq!(
            window.update(Message::GroupLabelExited),
            window.update(Message::GroupLabelSubmitted)
        );
    }

    #[test]
    fn channel_group_change_ignores_none_and_synchronizes_a_selection() {
        let mut window = Window::default();

        assert_eq!(window.update(Message::ChannelGroupSelected(None)), None);
        assert_eq!(window.selected_channel_group, None);
        assert_eq!(
            window.update(Message::ChannelGroupSelected(Some(3))),
            Some(ControlAction::SelectChannelGroup {
                index: 3,
                synchronize: [
                    ChannelGroupSelectionStep::LoadEndpointRange,
                    ChannelGroupSelectionStep::SelectEndpointChannel,
                    ChannelGroupSelectionStep::RefreshEndpointSummary,
                    ChannelGroupSelectionStep::LoadEnabledState,
                    ChannelGroupSelectionStep::LoadGroupLabel,
                ],
            })
        );
        assert_eq!(window.selected_channel_group, Some(3));
    }

    #[test]
    fn channel_change_ignores_none_and_delegates_a_valid_index() {
        let mut window = Window::default();

        assert_eq!(window.update(Message::ChannelSelected(None)), None);
        assert_eq!(
            window.update(Message::ChannelSelected(Some(6))),
            Some(ControlAction::SynchronizeChannelSelection(6))
        );
    }

    #[test]
    fn cursor_a_left_press_resets_to_left_bound_and_starts_move() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::CursorAMoveLeftStarted),
            Some(ControlAction::BeginCursorMove {
                cursor: CursorMarker::A,
                direction: CursorMoveDirection::Left,
                start_bound: CursorMoveStartBound::Visible(CoordinateBound::Left),
            })
        );
    }

    #[test]
    fn cursor_a_left_release_ends_move_and_synchronizes_without_an_order_constraint() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::CursorAMoveLeftEnded),
            Some(ControlAction::EndCursorMove {
                cursor: CursorMarker::A,
                direction: CursorMoveDirection::Left,
                order_constraint: None,
            })
        );
    }

    #[test]
    fn cursor_a_right_press_resets_to_right_bound_and_starts_move() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::CursorAMoveRightStarted),
            Some(ControlAction::BeginCursorMove {
                cursor: CursorMarker::A,
                direction: CursorMoveDirection::Right,
                start_bound: CursorMoveStartBound::Visible(CoordinateBound::Right),
            })
        );
    }

    #[test]
    fn cursor_a_right_release_keeps_cursor_b_one_period_after_cursor_a() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::CursorAMoveRightEnded),
            Some(ControlAction::EndCursorMove {
                cursor: CursorMarker::A,
                direction: CursorMoveDirection::Right,
                order_constraint: Some(CursorOrderConstraint::CursorBAfterAByOnePeriod),
            })
        );
    }

    #[test]
    fn cursor_b_left_press_uses_cursor_a_plus_one_period_as_its_bound() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::CursorBMoveLeftStarted),
            Some(ControlAction::BeginCursorMove {
                cursor: CursorMarker::B,
                direction: CursorMoveDirection::Left,
                start_bound: CursorMoveStartBound::CursorAPlusOnePeriod,
            })
        );
    }

    #[test]
    fn cursor_b_left_release_ends_move_without_an_extra_order_constraint() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::CursorBMoveLeftEnded),
            Some(ControlAction::EndCursorMove {
                cursor: CursorMarker::B,
                direction: CursorMoveDirection::Left,
                order_constraint: None,
            })
        );
    }

    #[test]
    fn cursor_b_right_press_resets_to_right_bound_and_starts_move() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::CursorBMoveRightStarted),
            Some(ControlAction::BeginCursorMove {
                cursor: CursorMarker::B,
                direction: CursorMoveDirection::Right,
                start_bound: CursorMoveStartBound::Visible(CoordinateBound::Right),
            })
        );
    }

    #[test]
    fn cursor_b_right_release_ends_move_without_an_order_constraint() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::CursorBMoveRightEnded),
            Some(ControlAction::EndCursorMove {
                cursor: CursorMarker::B,
                direction: CursorMoveDirection::Right,
                order_constraint: None,
            })
        );
    }

    #[test]
    fn close_query_blocks_only_a_protected_instrument_during_application_exit() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::CloseQueried(CloseQueryRequest {
                application_exit_active: true,
                instrument_close_blocked: true,
            })),
            Some(ControlAction::CloseQuery(CloseQueryResult {
                can_close: false,
                warning: Some(CLOSE_WARNING),
            }))
        );
        for (application_exit_active, instrument_close_blocked) in
            [(false, false), (false, true), (true, false)]
        {
            assert_eq!(
                window.update(Message::CloseQueried(CloseQueryRequest {
                    application_exit_active,
                    instrument_close_blocked,
                })),
                Some(ControlAction::CloseQuery(CloseQueryResult {
                    can_close: true,
                    warning: None,
                }))
            );
        }
    }

    #[test]
    fn channel_label_key_consumes_enter_and_commits_only_the_active_channel() {
        let mut window = Window::default();
        let request = |key, edited_channel_index, active_channel_index| ChannelLabelKeyRequest {
            key,
            edited_channel_index,
            active_channel_index,
            text: String::from("Clock"),
        };

        assert_eq!(
            window.update(Message::ChannelLabelKeyPressed(request('x', 2, 2))),
            None
        );
        assert_eq!(
            window.update(Message::ChannelLabelKeyPressed(request('\r', 2, 1))),
            Some(ControlAction::HandleChannelLabelKey {
                consumed: true,
                committed_label: None,
            })
        );
        assert_eq!(
            window.update(Message::ChannelLabelKeyPressed(request('\r', 2, 2))),
            Some(ControlAction::HandleChannelLabelKey {
                consumed: true,
                committed_label: Some(String::from("Clock")),
            })
        );
    }

    #[test]
    fn resize_requests_the_recovered_responsive_layout_policy() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::Resized),
            Some(ControlAction::ResizeLayout(GeneratorResizePolicy {
                run_base_layout: true,
                scroll_scale_factor: 4,
                default_display_inset: 24,
                preserve_panel_height_in_compact_mode: true,
                panel_height_scale_tenths: 24,
                reference_height_scale_tenths: 3,
            }))
        );
    }

    #[test]
    fn can_resize_delegates_to_the_shared_measurement_instrument_constraints() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::CanResize),
            Some(ControlAction::ApplySharedResizeConstraints)
        );
    }

    #[test]
    fn hide_clears_only_the_instrument_visibility_flag() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::Hidden),
            Some(ControlAction::SetInstrumentVisible(false))
        );
    }

    #[test]
    fn screen_double_click_delegates_to_the_shared_surface_coordinator() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::ScreenDoubleClicked),
            Some(ControlAction::DisplaySurface(
                DisplaySurfaceEvent::DoubleClick
            ))
        );
    }

    #[test]
    fn screen_mouse_down_delegates_to_the_shared_surface_coordinator() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::ScreenMousePressed),
            Some(ControlAction::DisplaySurface(
                DisplaySurfaceEvent::MouseDown
            ))
        );
    }

    #[test]
    fn screen_mouse_move_delegates_to_the_shared_surface_coordinator() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::ScreenMouseMoved),
            Some(ControlAction::DisplaySurface(
                DisplaySurfaceEvent::MouseMove
            ))
        );
    }

    #[test]
    fn screen_mouse_up_preserves_the_mode_four_cursor_order_policy() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::ScreenMouseReleased),
            Some(ControlAction::DisplaySurface(
                DisplaySurfaceEvent::MouseUp {
                    constrained_mode: 4,
                    order_constraint: CursorOrderConstraint::CursorBAfterAByOnePeriod,
                    synchronize_cursors: true,
                }
            ))
        );
    }

    #[test]
    fn modal_open_accept_and_cancel_return_typed_parent_actions() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::DataSavePressed),
            Some(ControlAction::Dialog(DialogAction::OpenSave))
        );
        assert_eq!(
            window.update(Message::SaveAccepted),
            Some(ControlAction::Dialog(DialogAction::RequestPicker(
                dialogs::PickerKind::SaveDefinition
            )))
        );
        assert_eq!(
            window.update(Message::SaveCancelled),
            Some(ControlAction::Dialog(DialogAction::CloseSave))
        );

        assert_eq!(
            window.update(Message::DataLoadPressed),
            Some(ControlAction::Dialog(DialogAction::OpenLoad))
        );
        assert_eq!(
            window.update(Message::LoadCancelled),
            Some(ControlAction::Dialog(DialogAction::CloseLoadAndRefresh))
        );
    }

    #[test]
    fn picker_completion_closes_the_owned_modal_state() {
        let mut window = Window::default();
        let _ = window.update(Message::DataSavePressed);
        let _ = window.update(Message::SaveAccepted);

        let save_action = window.update(Message::SavePickerCompleted(Some(PathBuf::from(
            "C:/Data/Example.DSG",
        ))));

        assert!(matches!(
            save_action,
            Some(ControlAction::Dialog(DialogAction::SaveDefinition(_)))
        ));
        assert!(window.save_dialog.is_none());

        let _ = window.update(Message::DataLoadPressed);
        let _ = window.update(Message::LoadAccepted);
        assert_eq!(
            window.update(Message::LoadPickerCompleted(None)),
            Some(ControlAction::Dialog(DialogAction::CloseLoadAndRefresh))
        );
        assert!(window.load_dialog.is_none());
    }

    #[test]
    fn modal_target_selection_reaches_sample_and_tina_actions() {
        let mut window = Window::default();
        let _ = window.update(Message::DataSavePressed);
        let _ = window.update(Message::SaveTargetSelected(1));
        assert_eq!(
            window.update(Message::SaveAccepted),
            Some(ControlAction::Dialog(DialogAction::RequestPicker(
                dialogs::PickerKind::SaveSamples
            )))
        );
        let _ = window.update(Message::SavePickerCompleted(None));

        let _ = window.update(Message::DataSavePressed);
        let _ = window.update(Message::SaveTargetSelected(2));
        assert_eq!(
            window.update(Message::SaveAccepted),
            Some(ControlAction::Dialog(DialogAction::TransferToTina))
        );
        assert!(window.save_dialog.is_none());

        let _ = window.update(Message::DataLoadPressed);
        let _ = window.update(Message::LoadTargetSelected(1));
        assert_eq!(
            window.update(Message::LoadAccepted),
            Some(ControlAction::Dialog(DialogAction::ReloadFromTina))
        );
        assert!(window.load_dialog.is_none());
    }

    #[test]
    fn endpoint_wrappers_restore_the_stored_raw_indexes() {
        let mut window = Window {
            endpoints: ChannelEndpointModel { from: -1, to: 7 },
            ..Window::default()
        };

        assert_eq!(
            window.update(Message::FromEndpointSelected),
            Some(ControlAction::SelectChannelIndex(-1))
        );
        assert_eq!(
            window.update(Message::ToEndpointSelected),
            Some(ControlAction::SelectChannelIndex(7))
        );
    }

    #[test]
    fn clock_selector_keeps_only_one_overlapping_editor_visible() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::LengthEditorSelected),
            Some(ControlAction::ShowLengthEditor)
        );
        assert!(!window.period_editor_visible);
        assert!(window.length_editor_visible);

        assert_eq!(
            window.update(Message::PeriodEditorSelected),
            Some(ControlAction::ShowPeriodEditor)
        );
        assert!(window.period_editor_visible);
        assert!(!window.length_editor_visible);
    }

    #[test]
    fn clock_steps_route_to_the_visible_period_or_length_editor() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::ClockStepDown),
            Some(ControlAction::StepClockValue {
                target: ClockValueTarget::Period,
                direction: ClockStepDirection::Decrease,
            })
        );
        let _ = window.update(Message::LengthEditorSelected);
        assert_eq!(
            window.update(Message::ClockStepUp),
            Some(ControlAction::StepClockValue {
                target: ClockValueTarget::MeasurementLength,
                direction: ClockStepDirection::Increase,
            })
        );
    }

    #[test]
    fn trace_type_change_only_applies_the_recovered_second_selection_codes() {
        let mut window = Window::default();

        assert_eq!(window.update(Message::TraceTypeSelected(0)), None);
        assert_eq!(Window::trace_type_changed(None), None);
        assert_eq!(
            window.update(Message::TraceTypeSelected(1)),
            Some(ControlAction::ApplyTraceTypeSelection {
                trace_type_code: 10,
                display_mode_code: 2,
            })
        );
    }

    #[test]
    fn clock_period_enter_submits_typed_edit_and_other_keys_do_not() {
        let mut window = Window::default();

        assert_eq!(Window::clock_period_key_pressed('x'), None);
        assert_eq!(
            window.update(Message::ClockPeriodSubmitted),
            Some(ControlAction::ApplyPeriodEdit(PeriodEditOperation::Typed))
        );
    }

    #[test]
    fn clock_period_exit_forces_the_same_typed_edit_as_enter() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::ClockPeriodExited),
            Some(ControlAction::ApplyPeriodEdit(PeriodEditOperation::Typed))
        );
        assert_eq!(
            Window::clock_period_exited(),
            Window::clock_period_key_pressed('\r')
        );
    }

    #[test]
    fn clock_period_error_requests_the_accepted_value_for_display() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::ClockPeriodError),
            Some(ControlAction::RestorePeriodEditorValue)
        );
    }

    #[test]
    fn measurement_length_error_restores_the_generator_output_step_count() {
        let mut window = Window::new(GeneratorRuntime::Hardware(HardwareConfiguration {
            trigger_sources: Vec::new(),
            clock_sources: Vec::new(),
            threshold_modes: Vec::new(),
            period: 0.25,
            output_steps: 8,
        }));

        let _ = window.update(Message::TextChanged(5, "invalid".to_owned()));
        assert_eq!(window.values[5], "invalid");
        assert_eq!(window.update(Message::MeasurementLengthError), None);
        assert_eq!(window.values[5], "8");
    }

    #[test]
    fn measurement_length_exit_forces_the_same_typed_edit_as_enter() {
        let mut window = Window::default();

        assert_eq!(Window::measurement_length_key_pressed('x'), None);
        assert_eq!(
            window.update(Message::MeasurementLengthSubmitted),
            Some(ControlAction::ApplyMeasurementLengthEdit)
        );
        assert_eq!(
            window.update(Message::MeasurementLengthExited),
            Window::measurement_length_key_pressed('\r')
        );
    }

    #[test]
    fn show_reloads_the_generator_before_restoring_window_state() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::Shown),
            Some(ControlAction::ShowWindow([
                ShowStep::ReloadGenerator,
                ShowStep::RestoreWindowState,
            ]))
        );
    }

    #[test]
    fn coordinate_down_selects_the_shared_decrease_operation() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::CoordinateStepDown),
            Some(ControlAction::StepCoordinate(
                CoordinateStepDirection::Decrease
            ))
        );
    }

    #[test]
    fn coordinate_up_selects_the_shared_increase_operation() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::CoordinateStepUp),
            Some(ControlAction::StepCoordinate(
                CoordinateStepDirection::Increase
            ))
        );
    }

    #[test]
    fn coordinate_enter_submits_a_committed_typed_edit() {
        let mut window = Window::default();

        assert_eq!(Window::coordinate_key_pressed('x'), None);
        assert_eq!(
            window.update(Message::CoordinateSubmitted),
            Some(ControlAction::ApplyTypedCoordinateEdit { commit: true })
        );
    }

    #[test]
    fn coordinate_exit_forces_the_same_commit_as_enter() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::CoordinateExited),
            Window::coordinate_key_pressed('\r')
        );
    }

    #[test]
    fn coordinate_error_restores_left_by_default_and_explicit_right() {
        let mut window = Window::default();
        window.set_display_bounds(1.25, 8.5);

        let _ = window.update(Message::CoordinateTextChanged("bad".to_owned()));
        assert_eq!(window.update(Message::CoordinateError), None);
        assert_eq!(window.coordinate_text(), "1.25");

        let _ = window.update(Message::CoordinateSelected(CoordinateBound::Right));
        let _ = window.update(Message::CoordinateTextChanged("bad".to_owned()));
        assert_eq!(window.update(Message::CoordinateError), None);
        assert_eq!(window.coordinate_text(), "8.5");
    }

    #[test]
    fn coordinate_step_end_only_arms_the_commit_flag() {
        let mut window = Window::default();

        assert!(!window.coordinate_commit_pending);
        assert_eq!(window.update(Message::CoordinateStepEnded), None);
        assert!(window.coordinate_commit_pending);
    }

    #[test]
    fn pattern_group_change_stores_valid_selection_and_requests_refresh() {
        let mut window = Window::default();

        assert_eq!(window.pattern_group_changed(None), None);
        assert_eq!(window.pattern_group_changed(Some(4)), None);
        assert_eq!(
            window.update(Message::PatternGroupSelected(2)),
            Some(ControlAction::SelectPatternGroup {
                index: 2,
                refresh_pattern: true,
            })
        );
        assert_eq!(window.selected_pattern_group, Some("C"));
    }

    #[test]
    fn pattern_key_press_replaces_one_symbol_and_normalizes_letters() {
        let mut window = Window::default();

        assert_eq!(window.pattern_key_pressed('x'), None);
        assert_eq!(window.values[4], "[X1-00000]");
        assert_eq!(window.pattern_cursor, 2);
        assert_eq!(window.update(Message::PatternKeyPressed('z')), None);
        assert_eq!(window.values[4], "[XZ-00000]");
        assert_eq!(window.pattern_cursor, 3);
    }

    #[test]
    fn pattern_key_press_rejects_invalid_keys_and_protects_delimiters() {
        let mut window = Window::default();

        assert_eq!(window.pattern_key_pressed('2'), None);
        assert_eq!(window.values[4], DEFAULT_PATTERN);
        assert_eq!(window.pattern_cursor, 1);

        window.pattern_cursor = 0;
        assert_eq!(window.pattern_key_pressed('1'), None);
        assert_eq!(window.values[4], DEFAULT_PATTERN);
        assert_eq!(window.pattern_cursor, 0);
    }

    #[test]
    fn pattern_key_press_keeps_selection_before_closing_delimiter() {
        let mut window = Window::default();
        window.pattern_cursor = window.values[4].chars().count() - 2;

        assert_eq!(window.pattern_key_pressed('1'), None);
        assert_eq!(window.values[4], "[01-00001]");
        assert_eq!(window.pattern_cursor, window.values[4].chars().count() - 2);
    }

    #[test]
    fn pattern_enter_commits_current_text_and_paste_remains_unfiltered() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::PatternTextChanged("pasted value".to_owned())),
            None
        );
        assert_eq!(
            window.update(Message::PatternSubmitted),
            Some(ControlAction::CommitPatternText("pasted value".to_owned()))
        );
    }

    #[test]
    fn pattern_key_down_delegates_with_one_protected_character_at_each_end() {
        use iced::keyboard::key::Named;

        let mut window = Window::default();

        assert_eq!(
            window.update(Message::PatternKeyDown(
                Key::Named(Named::ArrowLeft),
                Modifiers::SHIFT,
            )),
            Some(ControlAction::ConstrainPatternEditor {
                key: Key::Named(Named::ArrowLeft),
                modifiers: Modifiers::SHIFT,
                editable_region: PatternEditableRegion {
                    protected_prefix: 1,
                    protected_suffix: 1,
                },
            })
        );
    }

    #[test]
    fn repeating_edit_error_restores_the_last_accepted_count() {
        let mut window = Window {
            accepted_repeat_count: 7,
            ..Window::default()
        };

        assert_eq!(
            window.update(Message::RepeatTextChanged("invalid".to_owned())),
            None
        );
        assert_eq!(window.repeat_text, "invalid");
        assert_eq!(window.update(Message::RepeatError), None);
        assert_eq!(window.repeat_text, "7");
    }

    #[test]
    fn repeating_edit_enter_commits_valid_text_and_restores_invalid_text() {
        let mut window = Window::default();

        assert_eq!(window.repeating_edit_key_pressed('x'), None);
        assert_eq!(window.accepted_repeat_count, 1);

        let _ = window.update(Message::RepeatTextChanged("8".to_owned()));
        assert_eq!(window.update(Message::RepeatSubmitted), None);
        assert_eq!(window.accepted_repeat_count, 8);
        assert_eq!(window.repeat_text, "8");

        let _ = window.update(Message::RepeatTextChanged("0".to_owned()));
        assert_eq!(window.update(Message::RepeatSubmitted), None);
        assert_eq!(window.accepted_repeat_count, 8);
        assert_eq!(window.repeat_text, "8");
    }

    #[test]
    fn run_axis_and_waveform_messages_preserve_typed_operations() {
        let mut window = Window::default();

        let actions = [
            window.update(Message::StartPressed),
            window.update(Message::StopPressed),
            window.update(Message::TimeAxisSelected),
            window.update(Message::ClickAxisSelected),
            window.update(Message::SetIntervalPressed),
            window.update(Message::InsertIntervalPressed),
            window.update(Message::DeleteIntervalPressed),
            window.update(Message::RepeatIntervalPressed),
        ];

        assert_eq!(
            actions,
            [
                Some(ControlAction::Start),
                Some(ControlAction::Stop),
                Some(ControlAction::SelectAxisMode(AxisMode::Time)),
                Some(ControlAction::SelectAxisMode(AxisMode::Click)),
                Some(ControlAction::Waveform(WaveformEditOperation::Set)),
                Some(ControlAction::Waveform(WaveformEditOperation::Insert)),
                Some(ControlAction::Waveform(WaveformEditOperation::Delete)),
                Some(ControlAction::Waveform(WaveformEditOperation::Repeat(1))),
            ]
        );
    }
}
