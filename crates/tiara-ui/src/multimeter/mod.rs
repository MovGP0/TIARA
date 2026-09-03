use iced::widget::{column, container, pick_list, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;
use crate::signal_analyzer::{
    ResizeDecision, ResizePolicy, ResizeRequest, constrain_measurement_window_resize,
};

pub const TITLE: &str = "Digital Multimeter";
pub const SCREENSHOT: &str = "screenshots/Multimeter_Window.png";
pub const FORM_RESOURCE: &str = "VoltmeterWin";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01b6b720");
const STATUS: &str = "0.0 V";
const TOOLBAR: &[&str] = &["Auto", "Test"];
pub const VOLTMETER_FORM_KIND: u16 = 0x0dad;
pub const VOLTMETER_INITIAL_MODE: u8 = 0x6c;
pub const VOLTMETER_BACKEND_COMMAND: u8 = 0x6e;
pub const VOLTMETER_TEST_FIXTURE: &str = "MM2_TEST";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VoltmeterModelKind {
    Standard,
    Alternate,
    Unsupported(u8),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct VoltmeterBackendStartup {
    pub mode: u8,
    pub range_count: u8,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct VoltmeterCreationState {
    pub initializing: bool,
    pub test_enabled: bool,
    pub model_kind: VoltmeterModelKind,
    pub mode: u8,
    pub range_count: u8,
    pub selected_range: u8,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VoltmeterCreationOutcome {
    Initialized(VoltmeterCreationState),
    UnsupportedModel(VoltmeterCreationState),
    BackendUnavailable(VoltmeterCreationState),
}

pub trait VoltmeterCreationHost {
    fn initialize_common_form(&mut self, form_kind: u16);
    fn initialize_measurement_form(&mut self);
    fn select_bitmap_resource(&mut self, resource: &'static str);
    fn finish_form_layout(&mut self);
    fn diagnostic_test_available(&mut self, fixture: &'static str) -> bool;
    fn fit_window_to_control_panel(&mut self);
    fn initialize_shared_instrument_form(&mut self);
    fn create_backend(&mut self, model_kind: VoltmeterModelKind) -> bool;
    fn prepare_alternate_backend(&mut self);
    fn configure_backend(&mut self);
    fn set_title_from_backend(&mut self);
    fn initialize_ranges(&mut self);
    fn initialize_display(&mut self);
    fn read_backend_startup(&mut self) -> VoltmeterBackendStartup;
    fn configure_range_selector(&mut self, selected: u8, range_count: u8) -> u8;
    fn select_backend_range(&mut self, selected: u8);
    fn set_backend_command(&mut self, command: u8);
    fn render_mode(&mut self, mode: u8);
    fn synchronize_mode(&mut self, mode: u8);
}

/// Implements Ghidra function `FUN_01b6b720` at `0x01B6B720`.
///
/// Creates the Voltmeter form state and model-specific measurement backend.
/// The alternate backend can expose the recovered calibration test when the
/// `MM2_TEST` fixture is available. The initial backend mode and middle range
/// are then applied through the normal render and synchronization paths.
pub fn create_voltmeter(
    model_kind: VoltmeterModelKind,
    host: &mut impl VoltmeterCreationHost,
) -> VoltmeterCreationOutcome {
    let mut state = VoltmeterCreationState {
        initializing: true,
        test_enabled: false,
        model_kind,
        mode: VOLTMETER_INITIAL_MODE,
        range_count: 0,
        selected_range: 0,
    };
    host.initialize_common_form(VOLTMETER_FORM_KIND);
    host.initialize_measurement_form();
    host.select_bitmap_resource("bmVoltMet");
    host.finish_form_layout();

    if model_kind == VoltmeterModelKind::Alternate {
        state.test_enabled = host.diagnostic_test_available(VOLTMETER_TEST_FIXTURE);
    }
    if !state.test_enabled {
        host.fit_window_to_control_panel();
    }
    host.initialize_shared_instrument_form();

    if matches!(model_kind, VoltmeterModelKind::Unsupported(_)) {
        return VoltmeterCreationOutcome::UnsupportedModel(state);
    }
    if !host.create_backend(model_kind) {
        return VoltmeterCreationOutcome::BackendUnavailable(state);
    }
    if model_kind == VoltmeterModelKind::Alternate {
        host.prepare_alternate_backend();
    }

    host.configure_backend();
    host.set_title_from_backend();
    host.initialize_ranges();
    host.initialize_display();
    let startup = host.read_backend_startup();
    state.mode = startup.mode;
    state.range_count = startup.range_count;
    let middle_range = u8::try_from(u16::from(startup.range_count).div_ceil(2)).unwrap_or(u8::MAX);
    state.selected_range = host.configure_range_selector(middle_range, startup.range_count);
    host.select_backend_range(state.selected_range);
    host.set_backend_command(VOLTMETER_BACKEND_COMMAND);
    host.render_mode(state.mode);
    host.synchronize_mode(state.mode);
    VoltmeterCreationOutcome::Initialized(state)
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VoltmeterFrequencyCaption {
    Frequency,
    RecoveredMode6,
    RecoveredMode7,
    RecoveredMode8,
    RecoveredMode9,
    Diode,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VoltmeterModeButton {
    DcVoltage,
    AcVoltage,
    DcCurrent,
    AcCurrent,
    Resistance,
    FrequencyFamily,
    Capacitance,
    Inductance,
    Impedance,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct VoltmeterModeControls {
    pub dc_voltage_allows_no_selection: bool,
    pub selected_button: Option<VoltmeterModeButton>,
    pub frequency_caption_update: Option<VoltmeterFrequencyCaption>,
}

pub trait VoltmeterModeRenderHost {
    fn apply_mode_controls(&mut self, controls: VoltmeterModeControls);
    fn related_panel_is_ready(&self) -> bool;
    fn refresh_related_panel(&mut self, active: bool);
}

/// Implements Ghidra function `FUN_01b6bcd0` at `0x01B6BCD0`.
///
/// Produces the Iced-compatible button state for the active Voltmeter mode.
/// Modes 5 through 10 share one button. The four recovered captions between
/// `Freq` and `Diode` remain distinct without inventing text that is absent
/// from the recovered source. An inactive mode clears all selections.
pub fn render_voltmeter_mode(mode: u8, host: &mut impl VoltmeterModeRenderHost) {
    let selected_button = match mode {
        0 => Some(VoltmeterModeButton::DcVoltage),
        1 => Some(VoltmeterModeButton::AcVoltage),
        2 => Some(VoltmeterModeButton::DcCurrent),
        3 => Some(VoltmeterModeButton::AcCurrent),
        4 => Some(VoltmeterModeButton::Resistance),
        5..=10 => Some(VoltmeterModeButton::FrequencyFamily),
        11 => Some(VoltmeterModeButton::Capacitance),
        12 => Some(VoltmeterModeButton::Inductance),
        13 => Some(VoltmeterModeButton::Impedance),
        _ => None,
    };
    let frequency_caption_update = match mode {
        5 => Some(VoltmeterFrequencyCaption::Frequency),
        6 => Some(VoltmeterFrequencyCaption::RecoveredMode6),
        7 => Some(VoltmeterFrequencyCaption::RecoveredMode7),
        8 => Some(VoltmeterFrequencyCaption::RecoveredMode8),
        9 => Some(VoltmeterFrequencyCaption::RecoveredMode9),
        10 => Some(VoltmeterFrequencyCaption::Diode),
        _ => None,
    };
    host.apply_mode_controls(VoltmeterModeControls {
        dc_voltage_allows_no_selection: mode == VOLTMETER_INITIAL_MODE,
        selected_button,
        frequency_caption_update,
    });
    let panel_active = mode != VOLTMETER_INITIAL_MODE && host.related_panel_is_ready();
    host.refresh_related_panel(panel_active);
}

pub const VOLTMETER_MODE_CHANGE_EVENT: u16 = 0x0537;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct VoltmeterBackendModeResponse {
    pub accepted: bool,
    pub mode: u8,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VoltmeterModeRequestOutcome {
    Accepted(u8),
    Dispatched(u8),
}

pub trait VoltmeterModeRequestHost: VoltmeterModeRenderHost {
    fn end_passive_measurement(&mut self);
    fn close_passive_measurement_windows(&mut self);
    fn request_backend_mode(&mut self, requested_mode: u8) -> VoltmeterBackendModeResponse;
    fn store_mode(&mut self, mode: u8);
    fn dispatch_mode_change(&mut self, event: u16, mode: u8);
}

/// Implements Ghidra function `FUN_01b6e340` at `0x01B6E340`.
///
/// Requests a Voltmeter measurement mode and synchronizes accepted state.
/// Passive-component modes first stop the related measurement session and
/// close its auxiliary windows. A rejected request becomes the recovered
/// mode-change event instead of changing the local controls.
pub fn request_voltmeter_mode(
    requested_mode: u8,
    host: &mut impl VoltmeterModeRequestHost,
) -> VoltmeterModeRequestOutcome {
    if (11..=13).contains(&requested_mode) {
        host.end_passive_measurement();
        host.close_passive_measurement_windows();
    }

    let response = host.request_backend_mode(requested_mode);
    if response.accepted {
        host.store_mode(response.mode);
        render_voltmeter_mode(response.mode, host);
        VoltmeterModeRequestOutcome::Accepted(response.mode)
    } else {
        host.dispatch_mode_change(VOLTMETER_MODE_CHANGE_EVENT, response.mode);
        VoltmeterModeRequestOutcome::Dispatched(response.mode)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct VoltmeterModeSelectionOutcome {
    pub request: VoltmeterModeRequestOutcome,
    pub actual_mode: u8,
}

pub trait VoltmeterModeSelectionHost: VoltmeterModeRequestHost {
    fn read_backend_mode(&mut self) -> u8;
}

fn select_voltmeter_mode(
    requested_mode: u8,
    host: &mut impl VoltmeterModeSelectionHost,
) -> VoltmeterModeSelectionOutcome {
    let request = request_voltmeter_mode(requested_mode, host);
    let actual_mode = host.read_backend_mode();
    render_voltmeter_mode(actual_mode, host);
    VoltmeterModeSelectionOutcome {
        request,
        actual_mode,
    }
}

/// Implements Ghidra function `FUN_01b6e610` at `0x01B6E610`.
///
/// Requests DC voltage mode, then reads and renders the actual backend mode.
/// This final synchronization also runs when the direct request is rejected.
pub fn select_dc_voltage_mode(
    host: &mut impl VoltmeterModeSelectionHost,
) -> VoltmeterModeSelectionOutcome {
    select_voltmeter_mode(0, host)
}

/// Implements Ghidra function `FUN_01b6e660` at `0x01B6E660`.
///
/// Requests AC voltage mode, then reads and renders the actual backend mode.
pub fn select_ac_voltage_mode(
    host: &mut impl VoltmeterModeSelectionHost,
) -> VoltmeterModeSelectionOutcome {
    select_voltmeter_mode(1, host)
}

/// Implements Ghidra function `FUN_01b6e7b0` at `0x01B6E7B0`.
///
/// Requests AC current mode, then reads and renders the actual backend mode.
pub fn select_ac_current_mode(
    host: &mut impl VoltmeterModeSelectionHost,
) -> VoltmeterModeSelectionOutcome {
    select_voltmeter_mode(3, host)
}

/// Implements Ghidra function `FUN_01b6faf0` at `0x01B6FAF0`.
///
/// Requests resistance mode, then reads and renders the actual backend mode.
pub fn select_resistance_mode(
    host: &mut impl VoltmeterModeSelectionHost,
) -> VoltmeterModeSelectionOutcome {
    select_voltmeter_mode(4, host)
}

/// Implements Ghidra function `FUN_01b6fb40` at `0x01B6FB40`.
///
/// Requests DC current mode, then reads and renders the actual backend mode.
pub fn select_dc_current_mode(
    host: &mut impl VoltmeterModeSelectionHost,
) -> VoltmeterModeSelectionOutcome {
    select_voltmeter_mode(2, host)
}

/// Implements Ghidra function `FUN_01b6fc60` at `0x01B6FC60`.
///
/// Requests capacitance mode, including shared passive-measurement cleanup,
/// then reads and renders the actual backend mode.
pub fn select_capacitance_mode(
    host: &mut impl VoltmeterModeSelectionHost,
) -> VoltmeterModeSelectionOutcome {
    select_voltmeter_mode(11, host)
}

/// Implements Ghidra function `FUN_01b6fcb0` at `0x01B6FCB0`.
///
/// Requests inductance mode, including shared passive-measurement cleanup,
/// then reads and renders the actual backend mode.
pub fn select_inductance_mode(
    host: &mut impl VoltmeterModeSelectionHost,
) -> VoltmeterModeSelectionOutcome {
    select_voltmeter_mode(12, host)
}

/// Implements Ghidra function `FUN_01b6fd00` at `0x01B6FD00`.
///
/// Requests impedance mode, including shared passive-measurement cleanup, then
/// reads and renders the actual backend mode.
pub fn select_impedance_mode(
    host: &mut impl VoltmeterModeSelectionHost,
) -> VoltmeterModeSelectionOutcome {
    select_voltmeter_mode(13, host)
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct VoltmeterFrequencySelectionOutcome {
    pub requested_mode: u8,
    pub selection: VoltmeterModeSelectionOutcome,
}

pub trait VoltmeterFrequencySelectionHost: VoltmeterModeSelectionHost {
    fn frequency_mode_is_supported(&mut self, mode: u8) -> bool;
}

/// Implements Ghidra function `FUN_01b6fb90` at `0x01B6FB90`.
///
/// Cycles the shared frequency-family button through modes 5 to 10. Unsupported
/// candidates are skipped with a 10-to-5 wrap, and returning to the original
/// mode stops the search. A mode outside the family starts at mode 5.
pub fn select_next_frequency_mode(
    host: &mut impl VoltmeterFrequencySelectionHost,
) -> VoltmeterFrequencySelectionOutcome {
    let current_mode = host.read_backend_mode();
    let requested_mode = if (5..=10).contains(&current_mode) {
        let mut candidate = current_mode;
        loop {
            candidate = if candidate == 10 { 5 } else { candidate + 1 };
            if host.frequency_mode_is_supported(candidate) || candidate == current_mode {
                break candidate;
            }
        }
    } else {
        5
    };
    let selection = select_voltmeter_mode(requested_mode, host);
    VoltmeterFrequencySelectionOutcome {
        requested_mode,
        selection,
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VoltmeterHighInputOutcome {
    NoSelection,
    MissingInput,
    Updated {
        low_input_index: Option<usize>,
        actual_mode: u8,
    },
}

pub trait VoltmeterHighInputHost: VoltmeterModeRenderHost {
    type InputHandle: Copy;

    fn selected_high_input_index(&self) -> Option<usize>;
    fn high_input(&self, index: usize) -> Option<Self::InputHandle>;
    fn select_backend_high_input(&mut self, index: usize);
    fn mark_high_input_active(&mut self, input: Self::InputHandle);
    fn primary_low_input_index(&self, input: Self::InputHandle) -> Option<usize>;
    fn fallback_low_input_index(&self, input: Self::InputHandle) -> Option<usize>;
    fn select_low_input(&mut self, index: Option<usize>);
    fn rebuild_input_state(&mut self);
    fn read_backend_mode(&mut self) -> u8;
}

/// Implements Ghidra function `FUN_01b6e800` at `0x01B6E800`.
///
/// Applies a valid high-input combo-box selection to the Voltmeter backend,
/// activates its typed input interface, and synchronizes the low-input combo.
/// The low-input lookup uses the recovered primary match and fallback identity
/// match before the input state and actual backend mode are rendered.
pub fn change_voltmeter_high_input(
    host: &mut impl VoltmeterHighInputHost,
) -> VoltmeterHighInputOutcome {
    let Some(high_input_index) = host.selected_high_input_index() else {
        return VoltmeterHighInputOutcome::NoSelection;
    };
    let Some(high_input) = host.high_input(high_input_index) else {
        return VoltmeterHighInputOutcome::MissingInput;
    };

    host.select_backend_high_input(high_input_index);
    host.mark_high_input_active(high_input);
    let mut low_input_index = host.primary_low_input_index(high_input);
    host.select_low_input(low_input_index);
    if low_input_index.is_none() {
        low_input_index = host.fallback_low_input_index(high_input);
        host.select_low_input(low_input_index);
    }
    host.rebuild_input_state();
    let actual_mode = host.read_backend_mode();
    render_voltmeter_mode(actual_mode, host);
    VoltmeterHighInputOutcome::Updated {
        low_input_index,
        actual_mode,
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VoltmeterLowInputOutcome {
    NoSelection,
    Updated {
        high_input_index: Option<usize>,
        used_fallback: bool,
    },
}

pub trait VoltmeterLowInputHost {
    type InputHandle: Copy;

    fn selected_low_input_index(&self) -> Option<usize>;
    fn low_input(&self, index: usize) -> Option<Self::InputHandle>;
    fn selected_low_input_text(&self) -> &str;
    fn high_input_count(&self) -> usize;
    fn high_input(&self, index: usize) -> Self::InputHandle;
    fn high_input_matches_text(&self, input: Self::InputHandle, text: &str) -> bool;
    fn mark_low_input_active(&mut self, input: Self::InputHandle);
    fn primary_high_input_index(&self, input: Self::InputHandle) -> Option<usize>;
    fn select_high_input(&mut self, index: Option<usize>);
    fn selected_high_input_index(&self) -> Option<usize>;
    fn select_backend_high_input(&mut self, index: usize);
}

/// Implements Ghidra function `FUN_01b6e970` at `0x01B6E970`.
///
/// Synchronizes a low-input combo-box change with the high-input list and the
/// backend. A typed low input uses the primary object mapping. A text-only item
/// scans all ordinary high inputs and uses the final entry as the recovered
/// fallback when no identity matches.
pub fn change_voltmeter_low_input(
    host: &mut impl VoltmeterLowInputHost,
) -> VoltmeterLowInputOutcome {
    let Some(low_input_index) = host.selected_low_input_index() else {
        return VoltmeterLowInputOutcome::NoSelection;
    };

    let used_fallback;
    if let Some(low_input) = host.low_input(low_input_index) {
        host.mark_low_input_active(low_input);
        let high_input_index = host.primary_high_input_index(low_input);
        host.select_high_input(high_input_index);
        used_fallback = false;
    } else {
        let high_input_count = host.high_input_count();
        let fallback_index = high_input_count.checked_sub(1);
        let matching_index = fallback_index.and_then(|fallback| {
            let text = host.selected_low_input_text();
            (0..fallback).find(|&index| {
                let high_input = host.high_input(index);
                host.high_input_matches_text(high_input, text)
            })
        });
        let high_input_index = matching_index.or(fallback_index);
        used_fallback = matching_index.is_none() && fallback_index.is_some();
        host.select_high_input(high_input_index);
    }

    let high_input_index = host.selected_high_input_index();
    if let Some(index) = high_input_index {
        host.select_backend_high_input(index);
    }
    VoltmeterLowInputOutcome::Updated {
        high_input_index,
        used_fallback,
    }
}

pub const VOLTMETER_MANUAL_RANGE_COMMAND: u8 = 0x6f;
pub const VOLTMETER_RANGE_FORMAT_CODE: u16 = 4;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct VoltmeterRangeStepOutcome {
    pub selected_range: u8,
    pub changed: bool,
    pub label: String,
}

pub trait VoltmeterRangeStepHost {
    fn set_range_format_code(&mut self, code: u16);
    fn set_auto_range_down(&mut self, down: bool);
    fn set_backend_command(&mut self, command: u8);
    fn store_selected_range(&mut self, range: u8);
    fn select_backend_range(&mut self, range: u8);
    fn format_active_range(&mut self, range: u8, format_code: u16) -> String;
    fn set_range_label(&mut self, label: &str);
}

/// Implements Ghidra function `FUN_01b6f6d0` at `0x01B6F6D0`.
///
/// Switches to manual ranging and selects the next lower Voltmeter range when
/// one exists. The current range is still read, formatted with its measurement
/// unit, and displayed at the lower boundary.
pub fn select_lower_voltmeter_range(
    current_range: u8,
    host: &mut impl VoltmeterRangeStepHost,
) -> VoltmeterRangeStepOutcome {
    host.set_range_format_code(VOLTMETER_RANGE_FORMAT_CODE);
    host.set_auto_range_down(false);
    host.set_backend_command(VOLTMETER_MANUAL_RANGE_COMMAND);
    let selected_range = current_range.saturating_sub(1);
    let changed = selected_range != current_range;
    if changed {
        host.store_selected_range(selected_range);
        host.select_backend_range(selected_range);
    }
    let formatted_range = host.format_active_range(selected_range, VOLTMETER_RANGE_FORMAT_CODE);
    let label = format!("Rng: {formatted_range}");
    host.set_range_label(&label);
    VoltmeterRangeStepOutcome {
        selected_range,
        changed,
        label,
    }
}

/// Implements Ghidra function `FUN_01b6f880` at `0x01B6F880`.
///
/// Switches to manual ranging and selects the next higher Voltmeter range when
/// the current index is below the recovered range-count boundary. The active
/// range label is refreshed even when the upper boundary keeps the index.
pub fn select_higher_voltmeter_range(
    current_range: u8,
    range_count: u8,
    host: &mut impl VoltmeterRangeStepHost,
) -> VoltmeterRangeStepOutcome {
    host.set_range_format_code(VOLTMETER_RANGE_FORMAT_CODE);
    host.set_auto_range_down(false);
    host.set_backend_command(VOLTMETER_MANUAL_RANGE_COMMAND);
    let selected_range = range_count
        .checked_sub(1)
        .filter(|&maximum| current_range < maximum)
        .map_or(current_range, |_| current_range.saturating_add(1));
    let changed = selected_range != current_range;
    if changed {
        host.store_selected_range(selected_range);
        host.select_backend_range(selected_range);
    }
    let formatted_range = host.format_active_range(selected_range, VOLTMETER_RANGE_FORMAT_CODE);
    let label = format!("Rng: {formatted_range}");
    host.set_range_label(&label);
    VoltmeterRangeStepOutcome {
        selected_range,
        changed,
        label,
    }
}

pub trait VoltmeterAutoRangeHost {
    fn set_backend_command(&mut self, command: u8);
}

/// Implements Ghidra function `FUN_01b6fa40` at `0x01B6FA40`.
///
/// Applies the Auto range button state to the backend. A down button enables
/// automatic ranging; an up button restores manual ranging.
pub fn update_voltmeter_auto_range(
    auto_range_down: bool,
    host: &mut impl VoltmeterAutoRangeHost,
) -> u8 {
    let command = if auto_range_down {
        VOLTMETER_BACKEND_COMMAND
    } else {
        VOLTMETER_MANUAL_RANGE_COMMAND
    };
    host.set_backend_command(command);
    command
}

pub trait VoltmeterDestroyHost {
    fn backend_is_present(&self) -> bool;
    fn stop_backend(&mut self);
    fn destroy_backend(&mut self);
    fn clear_backend(&mut self);
    fn destroy_shared_form_resources(&mut self);
}

/// Implements Ghidra function `FUN_01b6fa90` at `0x01B6FA90`.
///
/// Stops, destroys, and clears an available Voltmeter backend before shared
/// form resources are destroyed. A missing backend skips only its own cleanup.
pub fn destroy_voltmeter(host: &mut impl VoltmeterDestroyHost) -> bool {
    let backend_destroyed = host.backend_is_present();
    if backend_destroyed {
        host.stop_backend();
        host.destroy_backend();
        host.clear_backend();
    }
    host.destroy_shared_form_resources();
    backend_destroyed
}

pub const VOLTMETER_EXIT_WARNING: &str =
    "Please close all measurement\rinstruments before exiting TINA.";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VoltmeterCloseQueryOutcome {
    Unchanged,
    Allowed,
    Blocked,
}

pub trait VoltmeterCloseQueryHost {
    fn application_exit_is_in_progress(&self) -> bool;
    fn force_hide_path(&self) -> bool;
    fn backend_session_is_active(&self) -> bool;
    fn show_close_instruments_warning(&mut self, message: &'static str);
}

/// Implements Ghidra function `FUN_01b6fd50` at `0x01B6FD50`.
///
/// Evaluates the Voltmeter close query during application exit. Outside that
/// exit path, the existing query result remains unchanged. A blocked exit
/// shows the recovered instruction to close all measurement instruments.
pub fn query_voltmeter_close(
    host: &mut impl VoltmeterCloseQueryHost,
) -> VoltmeterCloseQueryOutcome {
    if !host.application_exit_is_in_progress() {
        return VoltmeterCloseQueryOutcome::Unchanged;
    }
    if !host.force_hide_path() && host.backend_session_is_active() {
        VoltmeterCloseQueryOutcome::Allowed
    } else {
        host.show_close_instruments_warning(VOLTMETER_EXIT_WARNING);
        VoltmeterCloseQueryOutcome::Blocked
    }
}

pub const VOLTMETER_LABXPLORER_BACKEND: &str = "LabXplorer";
pub const VOLTMETER_SHOW_NOTIFICATION_TIMEOUT_MS: u64 = 1_000;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct VoltmeterShowOutcome {
    pub labxplorer_control_disabled: bool,
}

pub trait VoltmeterShowHost {
    fn rebuild_input_state(&mut self);
    fn instrument_kind(&self) -> u8;
    fn backend_name(&self) -> &str;
    fn set_labxplorer_control_enabled(&mut self, enabled: bool);
    fn show_shared_form(&mut self);
    fn send_show_notification(&mut self, event: u16, timeout_milliseconds: u64);
}

/// Implements Ghidra function `FUN_01b6fe20` at `0x01B6FE20`.
///
/// Rebuilds Voltmeter input state before the form is shown. Instrument kind 2
/// disables the recovered backend-specific control only when the backend name
/// exactly matches `LabXplorer`. Shared show handling and the timed close-state
/// notification then run for every backend.
pub fn show_voltmeter(host: &mut impl VoltmeterShowHost) -> VoltmeterShowOutcome {
    host.rebuild_input_state();
    let labxplorer_control_disabled =
        host.instrument_kind() == 2 && host.backend_name() == VOLTMETER_LABXPLORER_BACKEND;
    if labxplorer_control_disabled {
        host.set_labxplorer_control_enabled(false);
    }
    host.show_shared_form();
    host.send_show_notification(
        VOLTMETER_CLOSE_NOTIFICATION,
        VOLTMETER_SHOW_NOTIFICATION_TIMEOUT_MS,
    );
    VoltmeterShowOutcome {
        labxplorer_control_disabled,
    }
}

pub trait VoltmeterResizeHost {
    fn resize_shared_measurement_form(&mut self);
}

/// Implements Ghidra function `FUN_01b6ff10` at `0x01B6FF10`.
///
/// Delegates Voltmeter resize handling to the shared measurement-form scaler.
/// That host owns its width-change, available-height, stored-width, and
/// reentrancy guards and applies scaled control geometry and fonts.
pub fn resize_voltmeter(host: &mut impl VoltmeterResizeHost) {
    host.resize_shared_measurement_form();
}

/// Implements Ghidra function `FUN_01b6ff20` at `0x01B6FF20`.
///
/// Applies the shared measurement-form hide behavior to the Iced-facing
/// Voltmeter state. Measurement data and owned resources remain available for
/// the next show event.
pub const fn hide_voltmeter(visible: &mut bool) {
    *visible = false;
}

/// Implements Ghidra function `FUN_01b6ff30` at `0x01B6FF30`.
///
/// Adapts the Voltmeter `OnCanResize` event to the shared measurement-window
/// resize policy.
#[must_use]
pub fn can_resize_voltmeter(
    policy: ResizePolicy,
    request: ResizeRequest,
    work_area_height: i32,
) -> ResizeDecision {
    constrain_measurement_window_resize(policy, request, work_area_height)
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct VoltmeterProbeToggleOutcome {
    pub enabled: bool,
    pub editor_command_ended: bool,
    pub probe_command_installed: bool,
}

pub trait VoltmeterProbeHost {
    fn schematic_editor_is_available(&self) -> bool;
    fn end_current_schematic_command(&mut self);
    fn install_voltmeter_probe_command(&mut self);
    fn activate_voltmeter_probe(&mut self);
    fn deactivate_voltmeter_probe(&mut self);
}

/// Implements Ghidra function `FUN_01b6ff50` at `0x01B6FF50`.
///
/// Applies the Voltmeter Probe toggle to the Schematic Editor. An available
/// editor ends its current command and receives a probe-selection command when
/// the toggle is enabled. The matching instrument callback runs even when no
/// editor is available.
pub fn toggle_voltmeter_probe(
    enabled: bool,
    host: &mut impl VoltmeterProbeHost,
) -> VoltmeterProbeToggleOutcome {
    let editor_command_ended = host.schematic_editor_is_available();
    if editor_command_ended {
        host.end_current_schematic_command();
    }

    let probe_command_installed = enabled && editor_command_ended;
    if probe_command_installed {
        host.install_voltmeter_probe_command();
    }

    if enabled {
        host.activate_voltmeter_probe();
    } else {
        host.deactivate_voltmeter_probe();
    }

    VoltmeterProbeToggleOutcome {
        enabled,
        editor_command_ended,
        probe_command_installed,
    }
}

pub const VOLTMETER_CLOSE_NOTIFICATION: u16 = 0x0530;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VoltmeterCloseAction {
    Hide,
    Free,
}

pub trait VoltmeterCloseHost {
    fn read_backend_mode(&mut self) -> u8;
    fn force_hide_path(&self) -> bool;
    fn backend_session_is_active(&self) -> bool;
    fn post_close_notification(&mut self, event: u16);
    fn ensure_test_fixture(&mut self) -> bool;
    fn stop_test_fixture(&mut self);
    fn close_test_fixture(&mut self);
    fn mark_hidden_close(&mut self);
    fn finalize_hidden_close(&mut self);
}

/// Implements Ghidra function `FUN_01b6e6d0` at `0x01B6E6D0`.
///
/// Resolves the Voltmeter window close action. An active backend session uses
/// the recovered close notification and frees the window. The alternate path
/// hides it and cleans up an available test fixture for passive modes.
pub fn close_voltmeter(host: &mut impl VoltmeterCloseHost) -> VoltmeterCloseAction {
    let mode = host.read_backend_mode();
    if !host.force_hide_path() && host.backend_session_is_active() {
        host.post_close_notification(VOLTMETER_CLOSE_NOTIFICATION);
        return VoltmeterCloseAction::Free;
    }

    if (11..=13).contains(&mode) && host.ensure_test_fixture() {
        host.stop_test_fixture();
        host.close_test_fixture();
    }
    host.mark_hidden_close();
    host.finalize_hidden_close();
    VoltmeterCloseAction::Hide
}

pub const VOLTMETER_TEST_REPORT: &str = "MM2TestValues.txt";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VoltmeterSelfTestPhase {
    DcVoltage,
    AcVoltage,
    DcCurrent47OhmOutput,
    DcCurrent33OhmFiveVolt,
    DcCurrent47OhmFiveVolt,
    AcCurrent47OhmOutput,
}

impl VoltmeterSelfTestPhase {
    const fn meter_mode(self) -> u8 {
        match self {
            Self::DcVoltage => 0,
            Self::AcVoltage => 1,
            Self::DcCurrent47OhmOutput
            | Self::DcCurrent33OhmFiveVolt
            | Self::DcCurrent47OhmFiveVolt => 2,
            Self::AcCurrent47OhmOutput => 3,
        }
    }

    const fn fixture_mode(self) -> u8 {
        match self {
            Self::DcVoltage => 3,
            Self::AcVoltage => 6,
            Self::DcCurrent47OhmOutput | Self::AcCurrent47OhmOutput => 10,
            Self::DcCurrent33OhmFiveVolt => 18,
            Self::DcCurrent47OhmFiveVolt => 34,
        }
    }

    const fn series_count(self) -> usize {
        match self {
            Self::AcVoltage => 5,
            _ => 1,
        }
    }

    const fn point_count(self) -> usize {
        match self {
            Self::DcVoltage => 20,
            Self::AcVoltage => 19,
            Self::DcCurrent47OhmOutput | Self::AcCurrent47OhmOutput => 11,
            Self::DcCurrent33OhmFiveVolt | Self::DcCurrent47OhmFiveVolt => 1,
        }
    }

    const fn settle_milliseconds(self) -> u64 {
        match self {
            Self::DcVoltage | Self::DcCurrent33OhmFiveVolt | Self::DcCurrent47OhmFiveVolt => 3_000,
            Self::AcVoltage | Self::AcCurrent47OhmOutput => 4_000,
            Self::DcCurrent47OhmOutput => 6_000,
        }
    }

    fn expected_measurement(self, stimulus: f64) -> f64 {
        match self {
            Self::DcVoltage | Self::DcCurrent33OhmFiveVolt | Self::DcCurrent47OhmFiveVolt => {
                stimulus
            }
            Self::AcVoltage => stimulus / std::f64::consts::SQRT_2,
            Self::DcCurrent47OhmOutput => stimulus / 102.0,
            Self::AcCurrent47OhmOutput => stimulus / (std::f64::consts::SQRT_2 * 102.0),
        }
    }
}

const VOLTMETER_SELF_TEST_PHASES: [VoltmeterSelfTestPhase; 6] = [
    VoltmeterSelfTestPhase::DcVoltage,
    VoltmeterSelfTestPhase::AcVoltage,
    VoltmeterSelfTestPhase::DcCurrent47OhmOutput,
    VoltmeterSelfTestPhase::DcCurrent33OhmFiveVolt,
    VoltmeterSelfTestPhase::DcCurrent47OhmFiveVolt,
    VoltmeterSelfTestPhase::AcCurrent47OhmOutput,
];

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct VoltmeterSelfTestSample {
    pub phase: VoltmeterSelfTestPhase,
    pub series_index: usize,
    pub point_index: usize,
    pub measured: f64,
    pub expected: f64,
    pub error_percent: f64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VoltmeterSelfTestOutcome {
    Disabled,
    Completed,
}

pub trait VoltmeterSelfTestHost {
    fn test_is_enabled(&self) -> bool;
    fn ensure_test_fixture(&mut self);
    fn prepare_test_fixture(&mut self);
    fn open_report(&mut self, directory: &'static str, file_name: &'static str);
    fn begin_phase(&mut self, phase: VoltmeterSelfTestPhase);
    fn select_meter_mode(&mut self, mode: u8);
    fn set_fixture_mode(&mut self, mode: u8);
    fn configure_series(&mut self, phase: VoltmeterSelfTestPhase, series_index: usize);
    fn stimulus(
        &self,
        phase: VoltmeterSelfTestPhase,
        series_index: usize,
        point_index: usize,
    ) -> f64;
    fn apply_stimulus(&mut self, phase: VoltmeterSelfTestPhase, stimulus: f64);
    fn settle(&mut self, milliseconds: u64);
    fn read_measurement(&mut self) -> f64;
    fn write_sample(&mut self, sample: VoltmeterSelfTestSample);
    fn finish_test_fixture(&mut self);
    fn show_test_finished(&mut self);
    fn close_report(&mut self);
}

/// Implements Ghidra function `FUN_01b6c590` at `0x01B6C590`.
///
/// Runs the gated Voltmeter calibration self-test. The host owns fixture I/O,
/// report formatting, asynchronous settle handling, and the recovered stimulus
/// tables. This function preserves the phase order, sample counts, scaling,
/// and final instrument reset without blocking an Iced update function.
pub fn run_voltmeter_self_test(host: &mut impl VoltmeterSelfTestHost) -> VoltmeterSelfTestOutcome {
    if !host.test_is_enabled() {
        return VoltmeterSelfTestOutcome::Disabled;
    }

    host.ensure_test_fixture();
    host.prepare_test_fixture();
    host.open_report(VOLTMETER_TEST_FIXTURE, VOLTMETER_TEST_REPORT);
    for phase in VOLTMETER_SELF_TEST_PHASES {
        host.begin_phase(phase);
        host.select_meter_mode(phase.meter_mode());
        host.set_fixture_mode(phase.fixture_mode());
        for series_index in 0..phase.series_count() {
            host.configure_series(phase, series_index);
            for point_index in 0..phase.point_count() {
                let stimulus = host.stimulus(phase, series_index, point_index);
                host.apply_stimulus(phase, stimulus);
                host.settle(phase.settle_milliseconds());
                let measured = host.read_measurement();
                let expected = phase.expected_measurement(stimulus);
                host.write_sample(VoltmeterSelfTestSample {
                    phase,
                    series_index,
                    point_index,
                    measured,
                    expected,
                    error_percent: ((measured - expected) * 100.0) / expected,
                });
            }
        }
    }
    host.finish_test_fixture();
    host.select_meter_mode(VoltmeterSelfTestPhase::AcVoltage.meter_mode());
    host.set_fixture_mode(0);
    host.show_test_finished();
    host.close_report();
    VoltmeterSelfTestOutcome::Completed
}

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    selections: Vec<Option<&'static str>>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 9],
            selections: vec![None; 1],
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
    OptionSelected(usize, &'static str),
    NoOp,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::TextChanged(index, value) => {
                if let Some(field) = self.values.get_mut(index) {
                    *field = value;
                }
            }
            Message::OptionSelected(index, value) => {
                if let Some(selection) = self.selections.get_mut(index) {
                    *selection = Some(value);
                }
            }
            Message::NoOp => {}
        }
    }
    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    #[must_use]
    #[allow(clippy::too_many_lines)]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(TOOLBAR, Message::NoOp);
        let body: Element<'_, Message> = row![
            container(scrollable(
                column![
                    row![
                        text("V").width(Length::FillPortion(2)),
                        text_input("", &self.values[0])
                            .on_input(move |value| Message::TextChanged(0, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("I").width(Length::FillPortion(2)),
                        text_input("", &self.values[1])
                            .on_input(move |value| Message::TextChanged(1, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("R").width(Length::FillPortion(2)),
                        text_input("", &self.values[2])
                            .on_input(move |value| Message::TextChanged(2, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("C").width(Length::FillPortion(2)),
                        text_input("", &self.values[3])
                            .on_input(move |value| Message::TextChanged(3, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("L").width(Length::FillPortion(2)),
                        text_input("", &self.values[4])
                            .on_input(move |value| Message::TextChanged(4, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Z").width(Length::FillPortion(2)),
                        text_input("", &self.values[5])
                            .on_input(move |value| Message::TextChanged(5, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Frequency").width(Length::FillPortion(2)),
                        text_input("", &self.values[6])
                            .on_input(move |value| Message::TextChanged(6, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("HI").width(Length::FillPortion(2)),
                        text_input("", &self.values[7])
                            .on_input(move |value| Message::TextChanged(7, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("LO").width(Length::FillPortion(2)),
                        text_input("", &self.values[8])
                            .on_input(move |value| Message::TextChanged(8, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Range").width(Length::FillPortion(2)),
                        pick_list(["Auto", "Low", "High"], self.selections[0], move |value| {
                            Message::OptionSelected(0, value)
                        })
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
            window_shell::surface("Digital Multimeter display surface"),
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
    use std::cell::Cell;

    use super::*;

    #[derive(Default)]
    struct ModeRenderHost {
        controls: Option<VoltmeterModeControls>,
        panel_ready: bool,
        panel_ready_checks: Cell<usize>,
        panel_refreshes: Vec<bool>,
    }

    #[derive(Default)]
    struct SelfTestHost {
        enabled: bool,
        events: Vec<String>,
        settles: Vec<u64>,
        samples: Vec<VoltmeterSelfTestSample>,
    }

    struct ModeRequestHost {
        events: Vec<String>,
        response: VoltmeterBackendModeResponse,
        actual_mode: u8,
        supported_modes: Vec<u8>,
        controls: Option<VoltmeterModeControls>,
    }

    struct CloseHost {
        mode: u8,
        force_hide: bool,
        session_active: bool,
        fixture_available: bool,
        events: Vec<String>,
    }

    struct HighInputHost {
        selected: Option<usize>,
        input: Option<u8>,
        primary_low: Option<usize>,
        fallback_low: Option<usize>,
        actual_mode: u8,
        events: Vec<String>,
        controls: Option<VoltmeterModeControls>,
    }

    struct LowInputHost {
        selected_low: Option<usize>,
        low_input: Option<u8>,
        low_text: String,
        high_inputs: Vec<(u8, String)>,
        primary_high: Option<usize>,
        selected_high: Option<usize>,
        events: Vec<String>,
    }

    #[derive(Default)]
    struct RangeStepHost {
        events: Vec<String>,
    }

    struct DestroyHost {
        backend_present: bool,
        events: Vec<String>,
    }

    struct CloseQueryHost {
        exiting: bool,
        force_hide: bool,
        session_active: bool,
        warnings: Vec<&'static str>,
    }

    struct ShowHost {
        instrument_kind: u8,
        backend_name: &'static str,
        events: Vec<String>,
    }

    impl VoltmeterShowHost for ShowHost {
        fn rebuild_input_state(&mut self) {
            self.events.push("rebuild".to_owned());
        }

        fn instrument_kind(&self) -> u8 {
            self.instrument_kind
        }

        fn backend_name(&self) -> &str {
            self.backend_name
        }

        fn set_labxplorer_control_enabled(&mut self, enabled: bool) {
            self.events.push(format!("control:{enabled}"));
        }

        fn show_shared_form(&mut self) {
            self.events.push("show-shared".to_owned());
        }

        fn send_show_notification(&mut self, event: u16, timeout_milliseconds: u64) {
            self.events
                .push(format!("notify:{event}:{timeout_milliseconds}"));
        }
    }

    impl VoltmeterCloseQueryHost for CloseQueryHost {
        fn application_exit_is_in_progress(&self) -> bool {
            self.exiting
        }

        fn force_hide_path(&self) -> bool {
            self.force_hide
        }

        fn backend_session_is_active(&self) -> bool {
            self.session_active
        }

        fn show_close_instruments_warning(&mut self, message: &'static str) {
            self.warnings.push(message);
        }
    }

    impl VoltmeterDestroyHost for DestroyHost {
        fn backend_is_present(&self) -> bool {
            self.backend_present
        }

        fn stop_backend(&mut self) {
            self.events.push("stop".to_owned());
        }

        fn destroy_backend(&mut self) {
            self.events.push("destroy-backend".to_owned());
        }

        fn clear_backend(&mut self) {
            self.events.push("clear-backend".to_owned());
            self.backend_present = false;
        }

        fn destroy_shared_form_resources(&mut self) {
            self.events.push("destroy-shared".to_owned());
        }
    }

    impl VoltmeterRangeStepHost for RangeStepHost {
        fn set_range_format_code(&mut self, code: u16) {
            self.events.push(format!("format-code:{code}"));
        }

        fn set_auto_range_down(&mut self, down: bool) {
            self.events.push(format!("auto:{down}"));
        }

        fn set_backend_command(&mut self, command: u8) {
            self.events.push(format!("command:{command}"));
        }

        fn store_selected_range(&mut self, range: u8) {
            self.events.push(format!("store:{range}"));
        }

        fn select_backend_range(&mut self, range: u8) {
            self.events.push(format!("backend-range:{range}"));
        }

        fn format_active_range(&mut self, range: u8, format_code: u16) -> String {
            self.events.push(format!("format:{range}:{format_code}"));
            format!("{range} V")
        }

        fn set_range_label(&mut self, label: &str) {
            self.events.push(format!("label:{label}"));
        }
    }

    impl VoltmeterAutoRangeHost for RangeStepHost {
        fn set_backend_command(&mut self, command: u8) {
            self.events.push(format!("command:{command}"));
        }
    }

    impl VoltmeterLowInputHost for LowInputHost {
        type InputHandle = u8;

        fn selected_low_input_index(&self) -> Option<usize> {
            self.selected_low
        }

        fn low_input(&self, _index: usize) -> Option<Self::InputHandle> {
            self.low_input
        }

        fn selected_low_input_text(&self) -> &str {
            &self.low_text
        }

        fn high_input_count(&self) -> usize {
            self.high_inputs.len()
        }

        fn high_input(&self, index: usize) -> Self::InputHandle {
            self.high_inputs[index].0
        }

        fn high_input_matches_text(&self, input: Self::InputHandle, text: &str) -> bool {
            self.high_inputs
                .iter()
                .any(|(handle, identity)| *handle == input && identity == text)
        }

        fn mark_low_input_active(&mut self, input: Self::InputHandle) {
            self.events.push(format!("activate:{input}"));
        }

        fn primary_high_input_index(&self, _input: Self::InputHandle) -> Option<usize> {
            self.primary_high
        }

        fn select_high_input(&mut self, index: Option<usize>) {
            self.events.push(format!("high:{index:?}"));
            self.selected_high = index;
        }

        fn selected_high_input_index(&self) -> Option<usize> {
            self.selected_high
        }

        fn select_backend_high_input(&mut self, index: usize) {
            self.events.push(format!("backend:{index}"));
        }
    }

    impl VoltmeterModeRenderHost for HighInputHost {
        fn apply_mode_controls(&mut self, controls: VoltmeterModeControls) {
            self.events.push("render".to_owned());
            self.controls = Some(controls);
        }

        fn related_panel_is_ready(&self) -> bool {
            true
        }

        fn refresh_related_panel(&mut self, active: bool) {
            self.events.push(format!("refresh:{active}"));
        }
    }

    impl VoltmeterHighInputHost for HighInputHost {
        type InputHandle = u8;

        fn selected_high_input_index(&self) -> Option<usize> {
            self.selected
        }

        fn high_input(&self, _index: usize) -> Option<Self::InputHandle> {
            self.input
        }

        fn select_backend_high_input(&mut self, index: usize) {
            self.events.push(format!("backend-high:{index}"));
        }

        fn mark_high_input_active(&mut self, input: Self::InputHandle) {
            self.events.push(format!("activate:{input}"));
        }

        fn primary_low_input_index(&self, _input: Self::InputHandle) -> Option<usize> {
            self.primary_low
        }

        fn fallback_low_input_index(&self, _input: Self::InputHandle) -> Option<usize> {
            self.fallback_low
        }

        fn select_low_input(&mut self, index: Option<usize>) {
            self.events.push(format!("low:{index:?}"));
        }

        fn rebuild_input_state(&mut self) {
            self.events.push("rebuild".to_owned());
        }

        fn read_backend_mode(&mut self) -> u8 {
            self.events.push("read-mode".to_owned());
            self.actual_mode
        }
    }

    impl VoltmeterCloseHost for CloseHost {
        fn read_backend_mode(&mut self) -> u8 {
            self.events.push("read-mode".to_owned());
            self.mode
        }

        fn force_hide_path(&self) -> bool {
            self.force_hide
        }

        fn backend_session_is_active(&self) -> bool {
            self.session_active
        }

        fn post_close_notification(&mut self, event: u16) {
            self.events.push(format!("notify:{event}"));
        }

        fn ensure_test_fixture(&mut self) -> bool {
            self.events.push("ensure-fixture".to_owned());
            self.fixture_available
        }

        fn stop_test_fixture(&mut self) {
            self.events.push("stop-fixture".to_owned());
        }

        fn close_test_fixture(&mut self) {
            self.events.push("close-fixture".to_owned());
        }

        fn mark_hidden_close(&mut self) {
            self.events.push("mark-hidden".to_owned());
        }

        fn finalize_hidden_close(&mut self) {
            self.events.push("finalize-hidden".to_owned());
        }
    }

    impl VoltmeterModeRenderHost for ModeRequestHost {
        fn apply_mode_controls(&mut self, controls: VoltmeterModeControls) {
            self.events.push("render".to_owned());
            self.controls = Some(controls);
        }

        fn related_panel_is_ready(&self) -> bool {
            true
        }

        fn refresh_related_panel(&mut self, active: bool) {
            self.events.push(format!("refresh:{active}"));
        }
    }

    impl VoltmeterModeRequestHost for ModeRequestHost {
        fn end_passive_measurement(&mut self) {
            self.events.push("end-passive".to_owned());
        }

        fn close_passive_measurement_windows(&mut self) {
            self.events.push("close-passive-windows".to_owned());
        }

        fn request_backend_mode(&mut self, requested_mode: u8) -> VoltmeterBackendModeResponse {
            self.events.push(format!("request:{requested_mode}"));
            self.response
        }

        fn store_mode(&mut self, mode: u8) {
            self.events.push(format!("store:{mode}"));
        }

        fn dispatch_mode_change(&mut self, event: u16, mode: u8) {
            self.events.push(format!("dispatch:{event}:{mode}"));
        }
    }

    impl VoltmeterModeSelectionHost for ModeRequestHost {
        fn read_backend_mode(&mut self) -> u8 {
            self.events.push("read-actual".to_owned());
            self.actual_mode
        }
    }

    impl VoltmeterFrequencySelectionHost for ModeRequestHost {
        fn frequency_mode_is_supported(&mut self, mode: u8) -> bool {
            self.events.push(format!("supported:{mode}"));
            self.supported_modes.contains(&mode)
        }
    }

    impl VoltmeterSelfTestHost for SelfTestHost {
        fn test_is_enabled(&self) -> bool {
            self.enabled
        }

        fn ensure_test_fixture(&mut self) {
            self.events.push("ensure".to_owned());
        }

        fn prepare_test_fixture(&mut self) {
            self.events.push("prepare".to_owned());
        }

        fn open_report(&mut self, directory: &'static str, file_name: &'static str) {
            self.events.push(format!("open:{directory}:{file_name}"));
        }

        fn begin_phase(&mut self, phase: VoltmeterSelfTestPhase) {
            self.events.push(format!("phase:{phase:?}"));
        }

        fn select_meter_mode(&mut self, mode: u8) {
            self.events.push(format!("meter:{mode}"));
        }

        fn set_fixture_mode(&mut self, mode: u8) {
            self.events.push(format!("fixture:{mode}"));
        }

        fn configure_series(&mut self, phase: VoltmeterSelfTestPhase, series_index: usize) {
            self.events.push(format!("series:{phase:?}:{series_index}"));
        }

        fn stimulus(
            &self,
            _phase: VoltmeterSelfTestPhase,
            _series_index: usize,
            point_index: usize,
        ) -> f64 {
            102.0 * f64::from(u32::try_from(point_index + 1).expect("test index must fit"))
        }

        fn apply_stimulus(&mut self, _phase: VoltmeterSelfTestPhase, _stimulus: f64) {}

        fn settle(&mut self, milliseconds: u64) {
            self.settles.push(milliseconds);
        }

        fn read_measurement(&mut self) -> f64 {
            2.0
        }

        fn write_sample(&mut self, sample: VoltmeterSelfTestSample) {
            self.samples.push(sample);
        }

        fn finish_test_fixture(&mut self) {
            self.events.push("finish-fixture".to_owned());
        }

        fn show_test_finished(&mut self) {
            self.events.push("show-finished".to_owned());
        }

        fn close_report(&mut self) {
            self.events.push("close".to_owned());
        }
    }

    impl VoltmeterModeRenderHost for ModeRenderHost {
        fn apply_mode_controls(&mut self, controls: VoltmeterModeControls) {
            self.controls = Some(controls);
        }

        fn related_panel_is_ready(&self) -> bool {
            self.panel_ready_checks
                .set(self.panel_ready_checks.get() + 1);
            self.panel_ready
        }

        fn refresh_related_panel(&mut self, active: bool) {
            self.panel_refreshes.push(active);
        }
    }

    struct CreationHost {
        events: Vec<String>,
        test_available: bool,
        backend_available: bool,
        startup: VoltmeterBackendStartup,
        normalized_range: u8,
    }

    impl VoltmeterCreationHost for CreationHost {
        fn initialize_common_form(&mut self, form_kind: u16) {
            self.events.push(format!("common:{form_kind}"));
        }

        fn initialize_measurement_form(&mut self) {
            self.events.push("measurement".to_owned());
        }

        fn select_bitmap_resource(&mut self, resource: &'static str) {
            self.events.push(format!("bitmap:{resource}"));
        }

        fn finish_form_layout(&mut self) {
            self.events.push("layout".to_owned());
        }

        fn diagnostic_test_available(&mut self, fixture: &'static str) -> bool {
            self.events.push(format!("test:{fixture}"));
            self.test_available
        }

        fn fit_window_to_control_panel(&mut self) {
            self.events.push("fit".to_owned());
        }

        fn initialize_shared_instrument_form(&mut self) {
            self.events.push("shared".to_owned());
        }

        fn create_backend(&mut self, model_kind: VoltmeterModelKind) -> bool {
            self.events.push(format!("backend:{model_kind:?}"));
            self.backend_available
        }

        fn prepare_alternate_backend(&mut self) {
            self.events.push("prepare-alternate".to_owned());
        }

        fn configure_backend(&mut self) {
            self.events.push("configure".to_owned());
        }

        fn set_title_from_backend(&mut self) {
            self.events.push("title".to_owned());
        }

        fn initialize_ranges(&mut self) {
            self.events.push("ranges".to_owned());
        }

        fn initialize_display(&mut self) {
            self.events.push("display".to_owned());
        }

        fn read_backend_startup(&mut self) -> VoltmeterBackendStartup {
            self.events.push("read".to_owned());
            self.startup
        }

        fn configure_range_selector(&mut self, selected: u8, range_count: u8) -> u8 {
            self.events
                .push(format!("range-selector:{selected}:{range_count}"));
            self.normalized_range
        }

        fn select_backend_range(&mut self, selected: u8) {
            self.events.push(format!("range:{selected}"));
        }

        fn set_backend_command(&mut self, command: u8) {
            self.events.push(format!("command:{command}"));
        }

        fn render_mode(&mut self, mode: u8) {
            self.events.push(format!("render:{mode}"));
        }

        fn synchronize_mode(&mut self, mode: u8) {
            self.events.push(format!("synchronize:{mode}"));
        }
    }

    fn creation_host() -> CreationHost {
        CreationHost {
            events: Vec::new(),
            test_available: false,
            backend_available: true,
            startup: VoltmeterBackendStartup {
                mode: 3,
                range_count: 5,
            },
            normalized_range: 3,
        }
    }

    #[test]
    fn create_alternate_voltmeter_enables_test_and_initializes_backend_state() {
        let mut host = creation_host();
        host.test_available = true;

        let outcome = create_voltmeter(VoltmeterModelKind::Alternate, &mut host);

        assert_eq!(
            outcome,
            VoltmeterCreationOutcome::Initialized(VoltmeterCreationState {
                initializing: true,
                test_enabled: true,
                model_kind: VoltmeterModelKind::Alternate,
                mode: 3,
                range_count: 5,
                selected_range: 3,
            })
        );
        assert_eq!(
            host.events,
            vec![
                "common:3501",
                "measurement",
                "bitmap:bmVoltMet",
                "layout",
                "test:MM2_TEST",
                "shared",
                "backend:Alternate",
                "prepare-alternate",
                "configure",
                "title",
                "ranges",
                "display",
                "read",
                "range-selector:3:5",
                "range:3",
                "command:110",
                "render:3",
                "synchronize:3",
            ]
        );
    }

    #[test]
    fn create_standard_voltmeter_fits_window_when_test_is_not_available() {
        let mut host = creation_host();

        let outcome = create_voltmeter(VoltmeterModelKind::Standard, &mut host);

        let VoltmeterCreationOutcome::Initialized(state) = outcome else {
            panic!("standard backend must initialize");
        };
        assert!(!state.test_enabled);
        assert!(host.events.iter().any(|event| event == "fit"));
        assert!(!host.events.iter().any(|event| event.starts_with("test:")));
        assert!(!host.events.iter().any(|event| event == "prepare-alternate"));
    }

    #[test]
    fn create_voltmeter_reports_unsupported_and_unavailable_backends() {
        let mut unsupported_host = creation_host();
        assert!(matches!(
            create_voltmeter(VoltmeterModelKind::Unsupported(9), &mut unsupported_host),
            VoltmeterCreationOutcome::UnsupportedModel(_)
        ));
        assert!(
            !unsupported_host
                .events
                .iter()
                .any(|event| event.starts_with("backend:"))
        );

        let mut unavailable_host = creation_host();
        unavailable_host.backend_available = false;
        assert!(matches!(
            create_voltmeter(VoltmeterModelKind::Standard, &mut unavailable_host),
            VoltmeterCreationOutcome::BackendUnavailable(_)
        ));
        assert!(
            !unavailable_host
                .events
                .iter()
                .any(|event| event == "configure")
        );
    }

    #[test]
    fn render_voltmeter_mode_selects_each_dedicated_button() {
        let cases = [
            (0, VoltmeterModeButton::DcVoltage),
            (1, VoltmeterModeButton::AcVoltage),
            (2, VoltmeterModeButton::DcCurrent),
            (3, VoltmeterModeButton::AcCurrent),
            (4, VoltmeterModeButton::Resistance),
            (11, VoltmeterModeButton::Capacitance),
            (12, VoltmeterModeButton::Inductance),
            (13, VoltmeterModeButton::Impedance),
        ];

        for (mode, expected_button) in cases {
            let mut host = ModeRenderHost {
                panel_ready: true,
                ..ModeRenderHost::default()
            };

            render_voltmeter_mode(mode, &mut host);

            let controls = host.controls.expect("mode controls must be applied");
            assert_eq!(controls.selected_button, Some(expected_button));
            assert_eq!(host.panel_refreshes, vec![true]);
        }
    }

    #[test]
    fn render_voltmeter_mode_updates_each_frequency_family_caption() {
        let cases = [
            (5, VoltmeterFrequencyCaption::Frequency),
            (6, VoltmeterFrequencyCaption::RecoveredMode6),
            (7, VoltmeterFrequencyCaption::RecoveredMode7),
            (8, VoltmeterFrequencyCaption::RecoveredMode8),
            (9, VoltmeterFrequencyCaption::RecoveredMode9),
            (10, VoltmeterFrequencyCaption::Diode),
        ];

        for (mode, caption) in cases {
            let mut host = ModeRenderHost::default();

            render_voltmeter_mode(mode, &mut host);

            let controls = host.controls.expect("mode controls must be applied");
            assert_eq!(
                controls.selected_button,
                Some(VoltmeterModeButton::FrequencyFamily)
            );
            assert_eq!(controls.frequency_caption_update, Some(caption));
        }
    }

    #[test]
    fn render_inactive_voltmeter_mode_clears_buttons_and_panel() {
        let mut host = ModeRenderHost {
            panel_ready: true,
            ..ModeRenderHost::default()
        };

        render_voltmeter_mode(VOLTMETER_INITIAL_MODE, &mut host);

        let controls = host.controls.expect("mode controls must be applied");
        assert!(controls.dc_voltage_allows_no_selection);
        assert_eq!(controls.selected_button, None);
        assert_eq!(controls.frequency_caption_update, None);
        assert_eq!(host.panel_ready_checks.get(), 0);
        assert_eq!(host.panel_refreshes, vec![false]);
    }

    #[test]
    fn disabled_voltmeter_self_test_has_no_effect() {
        let mut host = SelfTestHost::default();

        let outcome = run_voltmeter_self_test(&mut host);

        assert_eq!(outcome, VoltmeterSelfTestOutcome::Disabled);
        assert!(host.events.is_empty());
        assert!(host.samples.is_empty());
    }

    #[test]
    fn voltmeter_self_test_runs_all_recovered_phases_and_restores_ac_voltage() {
        let mut host = SelfTestHost {
            enabled: true,
            ..SelfTestHost::default()
        };

        let outcome = run_voltmeter_self_test(&mut host);

        assert_eq!(outcome, VoltmeterSelfTestOutcome::Completed);
        assert_eq!(host.samples.len(), 139);
        assert_eq!(host.settles.iter().sum::<u64>(), 556_000);
        assert_eq!(
            &host.events[..3],
            ["ensure", "prepare", "open:MM2_TEST:MM2TestValues.txt"]
        );
        assert_eq!(
            &host.events[host.events.len() - 5..],
            [
                "finish-fixture",
                "meter:1",
                "fixture:0",
                "show-finished",
                "close",
            ]
        );
        for (phase, count) in [
            (VoltmeterSelfTestPhase::DcVoltage, 20),
            (VoltmeterSelfTestPhase::AcVoltage, 95),
            (VoltmeterSelfTestPhase::DcCurrent47OhmOutput, 11),
            (VoltmeterSelfTestPhase::DcCurrent33OhmFiveVolt, 1),
            (VoltmeterSelfTestPhase::DcCurrent47OhmFiveVolt, 1),
            (VoltmeterSelfTestPhase::AcCurrent47OhmOutput, 11),
        ] {
            assert_eq!(
                host.samples
                    .iter()
                    .filter(|sample| sample.phase == phase)
                    .count(),
                count
            );
        }
    }

    #[test]
    fn voltmeter_self_test_applies_recovered_measurement_scaling() {
        let mut host = SelfTestHost {
            enabled: true,
            ..SelfTestHost::default()
        };

        run_voltmeter_self_test(&mut host);

        let first_expected = |phase| {
            host.samples
                .iter()
                .find(|sample| sample.phase == phase)
                .expect("phase must have samples")
                .expected
        };
        assert!((first_expected(VoltmeterSelfTestPhase::DcVoltage) - 102.0).abs() < f64::EPSILON);
        assert!(
            (first_expected(VoltmeterSelfTestPhase::AcVoltage) - 102.0 / std::f64::consts::SQRT_2)
                .abs()
                < f64::EPSILON
        );
        assert!(
            (first_expected(VoltmeterSelfTestPhase::DcCurrent47OhmOutput) - 1.0).abs()
                < f64::EPSILON
        );
        assert!(
            (first_expected(VoltmeterSelfTestPhase::AcCurrent47OhmOutput)
                - 1.0 / std::f64::consts::SQRT_2)
                .abs()
                < f64::EPSILON
        );
    }

    #[test]
    fn accepted_voltmeter_mode_is_stored_and_rendered() {
        let mut host = ModeRequestHost {
            events: Vec::new(),
            response: VoltmeterBackendModeResponse {
                accepted: true,
                mode: 1,
            },
            actual_mode: 1,
            supported_modes: Vec::new(),
            controls: None,
        };

        let outcome = request_voltmeter_mode(1, &mut host);

        assert_eq!(outcome, VoltmeterModeRequestOutcome::Accepted(1));
        assert_eq!(
            host.events,
            ["request:1", "store:1", "render", "refresh:true"]
        );
        assert_eq!(
            host.controls
                .expect("accepted mode must render")
                .selected_button,
            Some(VoltmeterModeButton::AcVoltage)
        );
    }

    #[test]
    fn passive_voltmeter_mode_cleans_up_before_backend_request() {
        let mut host = ModeRequestHost {
            events: Vec::new(),
            response: VoltmeterBackendModeResponse {
                accepted: true,
                mode: 12,
            },
            actual_mode: 12,
            supported_modes: Vec::new(),
            controls: None,
        };

        let outcome = request_voltmeter_mode(11, &mut host);

        assert_eq!(outcome, VoltmeterModeRequestOutcome::Accepted(12));
        assert_eq!(
            host.events,
            [
                "end-passive",
                "close-passive-windows",
                "request:11",
                "store:12",
                "render",
                "refresh:true",
            ]
        );
    }

    #[test]
    fn rejected_voltmeter_mode_dispatches_event_without_local_update() {
        let mut host = ModeRequestHost {
            events: Vec::new(),
            response: VoltmeterBackendModeResponse {
                accepted: false,
                mode: 9,
            },
            actual_mode: 9,
            supported_modes: Vec::new(),
            controls: None,
        };

        let outcome = request_voltmeter_mode(8, &mut host);

        assert_eq!(outcome, VoltmeterModeRequestOutcome::Dispatched(9));
        assert_eq!(host.events, ["request:8", "dispatch:1335:9"]);
        assert_eq!(host.controls, None);
    }

    #[test]
    fn dc_voltage_selector_renders_actual_mode_after_rejected_request() {
        let mut host = ModeRequestHost {
            events: Vec::new(),
            response: VoltmeterBackendModeResponse {
                accepted: false,
                mode: 0,
            },
            actual_mode: 3,
            supported_modes: Vec::new(),
            controls: None,
        };

        let outcome = select_dc_voltage_mode(&mut host);

        assert_eq!(
            outcome,
            VoltmeterModeSelectionOutcome {
                request: VoltmeterModeRequestOutcome::Dispatched(0),
                actual_mode: 3,
            }
        );
        assert_eq!(
            host.events,
            [
                "request:0",
                "dispatch:1335:0",
                "read-actual",
                "render",
                "refresh:true",
            ]
        );
        assert_eq!(
            host.controls
                .expect("actual mode must render")
                .selected_button,
            Some(VoltmeterModeButton::AcCurrent)
        );
    }

    #[test]
    fn ac_voltage_selector_requests_mode_one_and_renders_actual_mode() {
        let mut host = ModeRequestHost {
            events: Vec::new(),
            response: VoltmeterBackendModeResponse {
                accepted: true,
                mode: 1,
            },
            actual_mode: 1,
            supported_modes: Vec::new(),
            controls: None,
        };

        let outcome = select_ac_voltage_mode(&mut host);

        assert_eq!(outcome.actual_mode, 1);
        assert_eq!(
            host.events,
            [
                "request:1",
                "store:1",
                "render",
                "refresh:true",
                "read-actual",
                "render",
                "refresh:true",
            ]
        );
    }

    #[test]
    fn active_voltmeter_session_posts_notification_and_frees_window() {
        let mut host = CloseHost {
            mode: 0,
            force_hide: false,
            session_active: true,
            fixture_available: false,
            events: Vec::new(),
        };

        let action = close_voltmeter(&mut host);

        assert_eq!(action, VoltmeterCloseAction::Free);
        assert_eq!(host.events, ["read-mode", "notify:1328"]);
    }

    #[test]
    fn passive_mode_stops_fixture_before_hiding_voltmeter() {
        let mut host = CloseHost {
            mode: 13,
            force_hide: true,
            session_active: true,
            fixture_available: true,
            events: Vec::new(),
        };

        let action = close_voltmeter(&mut host);

        assert_eq!(action, VoltmeterCloseAction::Hide);
        assert_eq!(
            host.events,
            [
                "read-mode",
                "ensure-fixture",
                "stop-fixture",
                "close-fixture",
                "mark-hidden",
                "finalize-hidden",
            ]
        );
    }

    #[test]
    fn ordinary_hidden_close_does_not_create_test_fixture() {
        let mut host = CloseHost {
            mode: 4,
            force_hide: false,
            session_active: false,
            fixture_available: true,
            events: Vec::new(),
        };

        let action = close_voltmeter(&mut host);

        assert_eq!(action, VoltmeterCloseAction::Hide);
        assert_eq!(host.events, ["read-mode", "mark-hidden", "finalize-hidden"]);
    }

    #[test]
    fn ac_current_selector_requests_mode_three() {
        let mut host = ModeRequestHost {
            events: Vec::new(),
            response: VoltmeterBackendModeResponse {
                accepted: true,
                mode: 3,
            },
            actual_mode: 3,
            supported_modes: Vec::new(),
            controls: None,
        };

        let outcome = select_ac_current_mode(&mut host);

        assert_eq!(outcome.actual_mode, 3);
        assert_eq!(host.events.first().map(String::as_str), Some("request:3"));
        assert_eq!(
            host.controls
                .expect("actual mode must render")
                .selected_button,
            Some(VoltmeterModeButton::AcCurrent)
        );
    }

    #[test]
    fn high_input_change_ignores_missing_selection_and_input() {
        let mut no_selection = HighInputHost {
            selected: None,
            input: Some(7),
            primary_low: Some(2),
            fallback_low: Some(3),
            actual_mode: 0,
            events: Vec::new(),
            controls: None,
        };
        assert_eq!(
            change_voltmeter_high_input(&mut no_selection),
            VoltmeterHighInputOutcome::NoSelection
        );
        assert!(no_selection.events.is_empty());

        let mut missing_input = HighInputHost {
            selected: Some(4),
            input: None,
            ..no_selection
        };
        assert_eq!(
            change_voltmeter_high_input(&mut missing_input),
            VoltmeterHighInputOutcome::MissingInput
        );
        assert!(missing_input.events.is_empty());
    }

    #[test]
    fn high_input_change_uses_primary_low_input_and_renders_mode() {
        let mut host = HighInputHost {
            selected: Some(4),
            input: Some(7),
            primary_low: Some(2),
            fallback_low: Some(3),
            actual_mode: 12,
            events: Vec::new(),
            controls: None,
        };

        let outcome = change_voltmeter_high_input(&mut host);

        assert_eq!(
            outcome,
            VoltmeterHighInputOutcome::Updated {
                low_input_index: Some(2),
                actual_mode: 12,
            }
        );
        assert_eq!(
            host.events,
            [
                "backend-high:4",
                "activate:7",
                "low:Some(2)",
                "rebuild",
                "read-mode",
                "render",
                "refresh:true",
            ]
        );
    }

    #[test]
    fn high_input_change_uses_fallback_after_primary_lookup_misses() {
        let mut host = HighInputHost {
            selected: Some(4),
            input: Some(7),
            primary_low: None,
            fallback_low: Some(3),
            actual_mode: 0,
            events: Vec::new(),
            controls: None,
        };

        let outcome = change_voltmeter_high_input(&mut host);

        assert_eq!(
            outcome,
            VoltmeterHighInputOutcome::Updated {
                low_input_index: Some(3),
                actual_mode: 0,
            }
        );
        assert_eq!(&host.events[2..4], ["low:None", "low:Some(3)"]);
    }

    #[test]
    fn low_input_change_ignores_no_selection() {
        let mut host = LowInputHost {
            selected_low: None,
            low_input: None,
            low_text: String::new(),
            high_inputs: Vec::new(),
            primary_high: None,
            selected_high: None,
            events: Vec::new(),
        };

        let outcome = change_voltmeter_low_input(&mut host);

        assert_eq!(outcome, VoltmeterLowInputOutcome::NoSelection);
        assert!(host.events.is_empty());
    }

    #[test]
    fn typed_low_input_activates_and_maps_to_high_input() {
        let mut host = LowInputHost {
            selected_low: Some(2),
            low_input: Some(7),
            low_text: "#2".to_owned(),
            high_inputs: vec![(4, "#1".to_owned()), (7, "#2".to_owned())],
            primary_high: Some(1),
            selected_high: None,
            events: Vec::new(),
        };

        let outcome = change_voltmeter_low_input(&mut host);

        assert_eq!(
            outcome,
            VoltmeterLowInputOutcome::Updated {
                high_input_index: Some(1),
                used_fallback: false,
            }
        );
        assert_eq!(host.events, ["activate:7", "high:Some(1)", "backend:1"]);
    }

    #[test]
    fn text_only_low_input_matches_ordinary_entry_or_uses_final_fallback() {
        let make_host = |text: &str| LowInputHost {
            selected_low: Some(0),
            low_input: None,
            low_text: text.to_owned(),
            high_inputs: vec![
                (4, "In".to_owned()),
                (7, "#1".to_owned()),
                (99, "fallback".to_owned()),
            ],
            primary_high: None,
            selected_high: None,
            events: Vec::new(),
        };
        let mut matching = make_host("#1");
        let mut fallback = make_host("Gnd");

        assert_eq!(
            change_voltmeter_low_input(&mut matching),
            VoltmeterLowInputOutcome::Updated {
                high_input_index: Some(1),
                used_fallback: false,
            }
        );
        assert_eq!(
            change_voltmeter_low_input(&mut fallback),
            VoltmeterLowInputOutcome::Updated {
                high_input_index: Some(2),
                used_fallback: true,
            }
        );
        assert_eq!(fallback.events, ["high:Some(2)", "backend:2"]);
    }

    #[test]
    fn lower_range_switches_to_manual_and_decrements_available_range() {
        let mut host = RangeStepHost::default();

        let outcome = select_lower_voltmeter_range(3, &mut host);

        assert_eq!(
            outcome,
            VoltmeterRangeStepOutcome {
                selected_range: 2,
                changed: true,
                label: "Rng: 2 V".to_owned(),
            }
        );
        assert_eq!(
            host.events,
            [
                "format-code:4",
                "auto:false",
                "command:111",
                "store:2",
                "backend-range:2",
                "format:2:4",
                "label:Rng: 2 V",
            ]
        );
    }

    #[test]
    fn lower_range_keeps_zero_but_refreshes_range_label() {
        let mut host = RangeStepHost::default();

        let outcome = select_lower_voltmeter_range(0, &mut host);

        assert!(!outcome.changed);
        assert_eq!(outcome.selected_range, 0);
        assert_eq!(outcome.label, "Rng: 0 V");
        assert!(!host.events.iter().any(|event| event.starts_with("store:")));
        assert!(
            !host
                .events
                .iter()
                .any(|event| event.starts_with("backend-range:"))
        );
        assert_eq!(
            &host.events[host.events.len() - 2..],
            ["format:0:4", "label:Rng: 0 V"]
        );
    }

    #[test]
    fn higher_range_switches_to_manual_and_increments_available_range() {
        let mut host = RangeStepHost::default();

        let outcome = select_higher_voltmeter_range(2, 5, &mut host);

        assert_eq!(
            outcome,
            VoltmeterRangeStepOutcome {
                selected_range: 3,
                changed: true,
                label: "Rng: 3 V".to_owned(),
            }
        );
        assert_eq!(
            host.events,
            [
                "format-code:4",
                "auto:false",
                "command:111",
                "store:3",
                "backend-range:3",
                "format:3:4",
                "label:Rng: 3 V",
            ]
        );
    }

    #[test]
    fn higher_range_keeps_upper_boundary_and_refreshes_label() {
        let mut host = RangeStepHost::default();

        let outcome = select_higher_voltmeter_range(4, 5, &mut host);

        assert!(!outcome.changed);
        assert_eq!(outcome.selected_range, 4);
        assert_eq!(outcome.label, "Rng: 4 V");
        assert!(!host.events.iter().any(|event| event.starts_with("store:")));
        assert!(
            !host
                .events
                .iter()
                .any(|event| event.starts_with("backend-range:"))
        );
        assert_eq!(
            &host.events[host.events.len() - 2..],
            ["format:4:4", "label:Rng: 4 V"]
        );
    }

    #[test]
    fn auto_range_button_maps_down_state_to_backend_command() {
        let mut host = RangeStepHost::default();

        assert_eq!(update_voltmeter_auto_range(true, &mut host), 0x6e);
        assert_eq!(update_voltmeter_auto_range(false, &mut host), 0x6f);
        assert_eq!(host.events, ["command:110", "command:111"]);
    }

    #[test]
    fn destroy_voltmeter_stops_and_clears_backend_before_shared_resources() {
        let mut host = DestroyHost {
            backend_present: true,
            events: Vec::new(),
        };

        let backend_destroyed = destroy_voltmeter(&mut host);

        assert!(backend_destroyed);
        assert!(!host.backend_present);
        assert_eq!(
            host.events,
            ["stop", "destroy-backend", "clear-backend", "destroy-shared"]
        );
    }

    #[test]
    fn destroy_voltmeter_without_backend_still_destroys_shared_resources() {
        let mut host = DestroyHost {
            backend_present: false,
            events: Vec::new(),
        };

        let backend_destroyed = destroy_voltmeter(&mut host);

        assert!(!backend_destroyed);
        assert_eq!(host.events, ["destroy-shared"]);
    }

    #[test]
    fn resistance_selector_requests_mode_four() {
        let mut host = ModeRequestHost {
            events: Vec::new(),
            response: VoltmeterBackendModeResponse {
                accepted: true,
                mode: 4,
            },
            actual_mode: 4,
            supported_modes: Vec::new(),
            controls: None,
        };

        let outcome = select_resistance_mode(&mut host);

        assert_eq!(outcome.actual_mode, 4);
        assert_eq!(host.events.first().map(String::as_str), Some("request:4"));
        assert_eq!(
            host.controls
                .expect("actual mode must render")
                .selected_button,
            Some(VoltmeterModeButton::Resistance)
        );
    }

    #[test]
    fn dc_current_selector_requests_mode_two() {
        let mut host = ModeRequestHost {
            events: Vec::new(),
            response: VoltmeterBackendModeResponse {
                accepted: true,
                mode: 2,
            },
            actual_mode: 2,
            supported_modes: Vec::new(),
            controls: None,
        };

        let outcome = select_dc_current_mode(&mut host);

        assert_eq!(outcome.actual_mode, 2);
        assert_eq!(host.events.first().map(String::as_str), Some("request:2"));
        assert_eq!(
            host.controls
                .expect("actual mode must render")
                .selected_button,
            Some(VoltmeterModeButton::DcCurrent)
        );
    }

    #[test]
    fn frequency_selector_starts_at_frequency_mode_outside_family() {
        let mut host = ModeRequestHost {
            events: Vec::new(),
            response: VoltmeterBackendModeResponse {
                accepted: true,
                mode: 5,
            },
            actual_mode: 3,
            supported_modes: Vec::new(),
            controls: None,
        };

        let outcome = select_next_frequency_mode(&mut host);

        assert_eq!(outcome.requested_mode, 5);
        assert!(
            !host
                .events
                .iter()
                .any(|event| event.starts_with("supported:"))
        );
        assert!(host.events.iter().any(|event| event == "request:5"));
    }

    #[test]
    fn frequency_selector_skips_unsupported_modes() {
        let mut host = ModeRequestHost {
            events: Vec::new(),
            response: VoltmeterBackendModeResponse {
                accepted: true,
                mode: 8,
            },
            actual_mode: 6,
            supported_modes: vec![8],
            controls: None,
        };

        let outcome = select_next_frequency_mode(&mut host);

        assert_eq!(outcome.requested_mode, 8);
        assert_eq!(
            &host.events[..3],
            ["read-actual", "supported:7", "supported:8"]
        );
        assert!(host.events.iter().any(|event| event == "request:8"));
    }

    #[test]
    fn frequency_selector_wraps_and_stops_after_full_unsupported_cycle() {
        let mut host = ModeRequestHost {
            events: Vec::new(),
            response: VoltmeterBackendModeResponse {
                accepted: true,
                mode: 10,
            },
            actual_mode: 10,
            supported_modes: Vec::new(),
            controls: None,
        };

        let outcome = select_next_frequency_mode(&mut host);

        assert_eq!(outcome.requested_mode, 10);
        assert_eq!(
            host.events
                .iter()
                .filter(|event| event.starts_with("supported:"))
                .count(),
            6
        );
        assert!(host.events.iter().any(|event| event == "supported:5"));
        assert!(host.events.iter().any(|event| event == "request:10"));
    }

    #[test]
    fn capacitance_selector_requests_mode_eleven_after_passive_cleanup() {
        let mut host = ModeRequestHost {
            events: Vec::new(),
            response: VoltmeterBackendModeResponse {
                accepted: true,
                mode: 11,
            },
            actual_mode: 11,
            supported_modes: Vec::new(),
            controls: None,
        };

        let outcome = select_capacitance_mode(&mut host);

        assert_eq!(outcome.actual_mode, 11);
        assert_eq!(
            &host.events[..3],
            ["end-passive", "close-passive-windows", "request:11"]
        );
        assert_eq!(
            host.controls
                .expect("actual mode must render")
                .selected_button,
            Some(VoltmeterModeButton::Capacitance)
        );
    }

    #[test]
    fn inductance_selector_requests_mode_twelve_after_passive_cleanup() {
        let mut host = ModeRequestHost {
            events: Vec::new(),
            response: VoltmeterBackendModeResponse {
                accepted: true,
                mode: 12,
            },
            actual_mode: 12,
            supported_modes: Vec::new(),
            controls: None,
        };

        let outcome = select_inductance_mode(&mut host);

        assert_eq!(outcome.actual_mode, 12);
        assert_eq!(
            &host.events[..3],
            ["end-passive", "close-passive-windows", "request:12"]
        );
        assert_eq!(
            host.controls
                .expect("actual mode must render")
                .selected_button,
            Some(VoltmeterModeButton::Inductance)
        );
    }

    #[test]
    fn impedance_selector_requests_mode_thirteen_after_passive_cleanup() {
        let mut host = ModeRequestHost {
            events: Vec::new(),
            response: VoltmeterBackendModeResponse {
                accepted: true,
                mode: 13,
            },
            actual_mode: 13,
            supported_modes: Vec::new(),
            controls: None,
        };

        let outcome = select_impedance_mode(&mut host);

        assert_eq!(outcome.actual_mode, 13);
        assert_eq!(
            &host.events[..3],
            ["end-passive", "close-passive-windows", "request:13"]
        );
        assert_eq!(
            host.controls
                .expect("actual mode must render")
                .selected_button,
            Some(VoltmeterModeButton::Impedance)
        );
    }

    #[test]
    fn close_query_is_unchanged_outside_application_exit() {
        let mut host = CloseQueryHost {
            exiting: false,
            force_hide: true,
            session_active: false,
            warnings: Vec::new(),
        };

        let outcome = query_voltmeter_close(&mut host);

        assert_eq!(outcome, VoltmeterCloseQueryOutcome::Unchanged);
        assert!(host.warnings.is_empty());
    }

    #[test]
    fn close_query_allows_active_session_on_normal_close_path() {
        let mut host = CloseQueryHost {
            exiting: true,
            force_hide: false,
            session_active: true,
            warnings: Vec::new(),
        };

        let outcome = query_voltmeter_close(&mut host);

        assert_eq!(outcome, VoltmeterCloseQueryOutcome::Allowed);
        assert!(host.warnings.is_empty());
    }

    #[test]
    fn close_query_blocks_exit_and_shows_recovered_warning() {
        let mut host = CloseQueryHost {
            exiting: true,
            force_hide: true,
            session_active: true,
            warnings: Vec::new(),
        };

        let outcome = query_voltmeter_close(&mut host);

        assert_eq!(outcome, VoltmeterCloseQueryOutcome::Blocked);
        assert_eq!(host.warnings, [VOLTMETER_EXIT_WARNING]);
    }

    #[test]
    fn show_voltmeter_disables_labxplorer_control_for_kind_two() {
        let mut host = ShowHost {
            instrument_kind: 2,
            backend_name: "LabXplorer",
            events: Vec::new(),
        };

        let outcome = show_voltmeter(&mut host);

        assert!(outcome.labxplorer_control_disabled);
        assert_eq!(
            host.events,
            [
                "rebuild",
                "control:false",
                "show-shared",
                "notify:1328:1000",
            ]
        );
    }

    #[test]
    fn show_voltmeter_keeps_control_for_other_kind_or_name() {
        for (instrument_kind, backend_name) in [(1, "LabXplorer"), (2, "labxplorer")] {
            let mut host = ShowHost {
                instrument_kind,
                backend_name,
                events: Vec::new(),
            };

            let outcome = show_voltmeter(&mut host);

            assert!(!outcome.labxplorer_control_disabled);
            assert_eq!(host.events, ["rebuild", "show-shared", "notify:1328:1000"]);
        }
    }

    #[test]
    fn resize_voltmeter_delegates_to_shared_measurement_form() {
        struct ResizeHost(bool);

        impl VoltmeterResizeHost for ResizeHost {
            fn resize_shared_measurement_form(&mut self) {
                self.0 = true;
            }
        }

        let mut host = ResizeHost(false);
        resize_voltmeter(&mut host);
        assert!(host.0);
    }

    #[test]
    fn hide_voltmeter_clears_visibility_without_a_window() {
        let mut visible = true;

        hide_voltmeter(&mut visible);

        assert!(!visible);
    }

    #[test]
    fn can_resize_voltmeter_uses_shared_measurement_constraints() {
        let policy = ResizePolicy {
            current_width: 900,
            reference_width: 900,
            layout_top: 600,
            plot_top: 100,
            preserve_aspect: true,
        };

        let decision = can_resize_voltmeter(
            policy,
            ResizeRequest {
                width: 500,
                height: 1_000,
            },
            800,
        );

        assert_eq!(
            decision,
            ResizeDecision {
                allowed: true,
                request: ResizeRequest {
                    width: 600,
                    height: 567,
                },
            }
        );
    }

    #[test]
    fn probe_toggle_preserves_editor_and_instrument_callback_paths() {
        struct ProbeHost {
            editor_available: bool,
            events: Vec<&'static str>,
        }

        impl VoltmeterProbeHost for ProbeHost {
            fn schematic_editor_is_available(&self) -> bool {
                self.editor_available
            }

            fn end_current_schematic_command(&mut self) {
                self.events.push("end");
            }

            fn install_voltmeter_probe_command(&mut self) {
                self.events.push("install");
            }

            fn activate_voltmeter_probe(&mut self) {
                self.events.push("activate");
            }

            fn deactivate_voltmeter_probe(&mut self) {
                self.events.push("deactivate");
            }
        }

        let mut active_host = ProbeHost {
            editor_available: true,
            events: Vec::new(),
        };
        let active = toggle_voltmeter_probe(true, &mut active_host);
        assert_eq!(active_host.events, ["end", "install", "activate"]);
        assert_eq!(
            active,
            VoltmeterProbeToggleOutcome {
                enabled: true,
                editor_command_ended: true,
                probe_command_installed: true,
            }
        );

        let mut inactive_host = ProbeHost {
            editor_available: true,
            events: Vec::new(),
        };
        let inactive = toggle_voltmeter_probe(false, &mut inactive_host);
        assert_eq!(inactive_host.events, ["end", "deactivate"]);
        assert_eq!(
            inactive,
            VoltmeterProbeToggleOutcome {
                enabled: false,
                editor_command_ended: true,
                probe_command_installed: false,
            }
        );

        let mut unavailable_host = ProbeHost {
            editor_available: false,
            events: Vec::new(),
        };
        let unavailable = toggle_voltmeter_probe(true, &mut unavailable_host);
        assert_eq!(unavailable_host.events, ["activate"]);
        assert_eq!(
            unavailable,
            VoltmeterProbeToggleOutcome {
                enabled: true,
                editor_command_ended: false,
                probe_command_installed: false,
            }
        );
    }
}
