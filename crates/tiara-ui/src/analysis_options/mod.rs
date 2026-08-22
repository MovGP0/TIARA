use std::fmt;

use iced::widget::{button, checkbox, column, container, pick_list, row, text, text_input};
use iced::{Element, Length, Task};
use tiara_core::analysis_options::{AnalysisOptions, ERC_MATRIX_SIZE, ErcMatrix};

use crate::advanced_analysis_options::{AdvancedOptions, Window as AdvancedOptionsWindow};

pub const TITLE: &str = "Analysis Options";
pub const FORM_RESOURCE: &str = "AnalysisOptionDlg";
pub const HELP_CONTEXT: u32 = 0x461;
pub const OPTIONS_PAGE_HELP_CONTEXT: u32 = 0x96;
pub const ERC_COLUMN_HEADERS: [&str; 9] = [
    "In (I)",
    "Out (O)",
    "Bidirectional (BIDI)",
    "Power (PWR)",
    "Passive (PAS)",
    "3-State (3S)",
    "Open Collector (OC)",
    "Open Emitter (OE)",
    "Unconnected (uc)",
];
pub const ERC_ROW_HEADERS: [&str; 9] = ["I", "O", "BIDI", "PWR", "PAS", "3S", "OC", "OE", "uc"];
pub const LIBRARY_EVALUATION: &str = "iced 0.13 supplies the window, widgets, style values, and message/update flow; Rust fixed-size arrays and owned Clone values supply the symmetric ERC grid and modal transaction; typed traits isolate configuration lifetime and help-context integration; str::parse with an ASCII-leading-space adapter supplies strict floating-point conversion; no additional crate is required";
const FLAG_ADVANCED_MODIFIED: u8 = 1;
const FLAG_CLOSE_ERROR: u8 = 1 << 1;
const FLAG_ADVANCED_REQUESTED: u8 = 1 << 2;
const FLAG_VISIBLE: u8 = 1 << 3;
const FLAG_GLITCH_EDITOR_ENABLED: u8 = 1 << 4;
const FLAG_GLITCH_TOGGLE_ENABLED: u8 = 1 << 5;
const FLAG_NONLINEAR_PWL_ENABLED: u8 = 1 << 6;
const FLAG_ACCELERATION_CONTROLS_ENABLED: u8 = 1 << 7;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum IntegrationMethod {
    Trapezoidal,
    Gear,
}

impl IntegrationMethod {
    const ALL: [Self; 2] = [Self::Trapezoidal, Self::Gear];

    const fn recovered_index(self) -> i32 {
        match self {
            Self::Trapezoidal => 0,
            Self::Gear => 1,
        }
    }
}

impl fmt::Display for IntegrationMethod {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Trapezoidal => "Trapezoidal",
            Self::Gear => "Gear",
        })
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum OptionsPage {
    #[default]
    AnalogSimulation,
    DigitalSimulation,
    Diagram,
    Miscellaneous,
    Erc,
}

impl OptionsPage {
    const ALL: [Self; 5] = [
        Self::AnalogSimulation,
        Self::DigitalSimulation,
        Self::Diagram,
        Self::Miscellaneous,
        Self::Erc,
    ];
}

impl fmt::Display for OptionsPage {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::AnalogSimulation => "Analog simulation",
            Self::DigitalSimulation => "Digital simulation",
            Self::Diagram => "Diagram",
            Self::Miscellaneous => "Miscellaneous",
            Self::Erc => "ERC",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DelayMode {
    Default,
    Always,
    Ideal,
}

impl DelayMode {
    const ALL: [Self; 3] = [Self::Default, Self::Always, Self::Ideal];

    const fn recovered_index(self) -> u8 {
        match self {
            Self::Default => 0,
            Self::Always => 1,
            Self::Ideal => 2,
        }
    }

    const fn from_recovered_index(index: u8) -> Option<Self> {
        match index {
            0 => Some(Self::Default),
            1 => Some(Self::Always),
            2 => Some(Self::Ideal),
            _ => None,
        }
    }
}

impl fmt::Display for DelayMode {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::Default => "Default",
            Self::Always => "Always",
            Self::Ideal => "Ideal",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum NonlinearSolver {
    NewtonRaphson,
    NewtonRaphsonPwl,
    PwlModelsAndSolver,
    PwlSearch,
}

impl NonlinearSolver {
    const ALL: [Self; 4] = [
        Self::NewtonRaphson,
        Self::NewtonRaphsonPwl,
        Self::PwlModelsAndSolver,
        Self::PwlSearch,
    ];

    const fn recovered_index(self) -> u8 {
        match self {
            Self::NewtonRaphson => 0,
            Self::NewtonRaphsonPwl => 1,
            Self::PwlModelsAndSolver => 2,
            Self::PwlSearch => 3,
        }
    }

    const fn from_recovered_index(index: u8) -> Option<Self> {
        match index {
            0 => Some(Self::NewtonRaphson),
            1 => Some(Self::NewtonRaphsonPwl),
            2 => Some(Self::PwlModelsAndSolver),
            3 => Some(Self::PwlSearch),
            _ => None,
        }
    }
}

impl fmt::Display for NonlinearSolver {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::NewtonRaphson => "Newton-Raphson",
            Self::NewtonRaphsonPwl => "Newton-Raphson (PWL models)",
            Self::PwlModelsAndSolver => "PWL Models & Solver",
            Self::PwlSearch => "PWL Search",
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ErcCellAlignment {
    Center,
    Right,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ErcCellTone {
    Normal,
    HeaderOrDuplicate,
    Warning,
    Error,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ErcCellPresentation {
    pub alignment: ErcCellAlignment,
    pub tone: ErcCellTone,
}

#[derive(Debug, Clone, PartialEq)]
pub struct AnalysisOptionsStartup {
    pub options: AnalysisOptions,
    pub advanced_options: AdvancedOptions,
    pub active_page: OptionsPage,
}

pub trait AnalysisOptionsHostAdapter {
    fn load_startup(&mut self) -> AnalysisOptionsStartup;
    fn release_configuration(&mut self);
    fn set_page_help_context(&mut self, page: OptionsPage, help_context: u32);
}

#[derive(Debug, Clone, PartialEq)]
pub struct AcceptedAnalysisOptions {
    pub options: AnalysisOptions,
    pub advanced_options: AdvancedOptions,
    pub advanced_options_modified: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ValidationError {
    InvalidGlitchControl(String),
}

impl fmt::Display for ValidationError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::InvalidGlitchControl(value) => write!(formatter, "Glitch control: {value}"),
        }
    }
}

impl std::error::Error for ValidationError {}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AcceptOutcome {
    Accepted,
    ValidationVeto,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CommitEvent {
    Persisted,
    RuntimeStatisticsChanged(bool),
    MixedModeDesignInvalidated,
}

pub trait AnalysisOptionsCommitAdapter {
    fn persist(&mut self, options: &AnalysisOptions, advanced_options: &AdvancedOptions);
    fn apply_runtime_statistics(&mut self, enabled: bool);
    fn invalidate_mixed_mode_design(&mut self);
}

impl AnalysisOptionsCommitAdapter for Vec<CommitEvent> {
    fn persist(&mut self, _options: &AnalysisOptions, _advanced_options: &AdvancedOptions) {
        self.push(CommitEvent::Persisted);
    }

    fn apply_runtime_statistics(&mut self, enabled: bool) {
        self.push(CommitEvent::RuntimeStatisticsChanged(enabled));
    }

    fn invalidate_mixed_mode_design(&mut self) {
        self.push(CommitEvent::MixedModeDesignInvalidated);
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    PageChanged(OptionsPage),
    GlitchControlChanged(String),
    GlitchControlToggled(bool),
    DelayModeChanged(DelayMode),
    NonlinearSolverChanged(NonlinearSolver),
    AccelerationToggled(bool),
    IntegrationMethodChanged(IntegrationMethod),
    IntegrationOrderChanged(u8),
    ErcCellChanged {
        row: usize,
        column: usize,
        marker: char,
    },
    ErcCellDoubleClicked {
        row: usize,
        column: usize,
    },
    ErcKeyPressed {
        row: usize,
        column: usize,
        key: char,
    },
    ResetErcDefaults,
    RequestAdvancedOptions,
    Accept,
    Cancel,
}

#[derive(Debug)]
pub struct Window {
    original: AnalysisOptions,
    working: AnalysisOptions,
    original_advanced_options: AdvancedOptions,
    advanced_options: AdvancedOptions,
    glitch_control_text: String,
    integration_method_index: i32,
    integration_orders: Vec<u8>,
    integration_order_index: usize,
    erc_grid: [[char; ERC_MATRIX_SIZE]; ERC_MATRIX_SIZE],
    validation_error: Option<ValidationError>,
    dialog_flags: u8,
    form_help_context: u32,
    active_page_help_context: u32,
    active_page: OptionsPage,
    host_configuration_active: bool,
    accepted_settings: Option<AcceptedAnalysisOptions>,
    pending_commit_events: Vec<CommitEvent>,
}

impl Window {
    /// Builds the typed dialog state used by the recovered creation path.
    /// Host-backed creation is available through [`Self::from_host`].
    #[must_use]
    pub fn new(options: AnalysisOptions, advanced_options: AdvancedOptions) -> Self {
        let integration_method_index = i32::from(options.transient.integration_method) - 1;
        let mut dialog_flags = FLAG_VISIBLE;
        if options.digital.glitch_control_enabled {
            dialog_flags |= FLAG_GLITCH_EDITOR_ENABLED;
        }
        if options.digital.delay_mode != DelayMode::Ideal.recovered_index() {
            dialog_flags |= FLAG_GLITCH_TOGGLE_ENABLED;
        }
        if options.performance.nonlinear_solver != 0 {
            dialog_flags |= FLAG_NONLINEAR_PWL_ENABLED;
        }
        if options.performance.acceleration {
            dialog_flags |= FLAG_ACCELERATION_CONTROLS_ENABLED;
        }
        let mut window = Self {
            glitch_control_text: format!("{}%", options.digital.glitch_control_percent),
            integration_method_index,
            integration_orders: Vec::new(),
            integration_order_index: 0,
            erc_grid: options.erc.matrix.display_grid(),
            original: options.clone(),
            working: options,
            original_advanced_options: advanced_options.clone(),
            advanced_options,
            validation_error: None,
            dialog_flags,
            form_help_context: HELP_CONTEXT,
            active_page_help_context: 0,
            active_page: OptionsPage::AnalogSimulation,
            host_configuration_active: false,
            accepted_settings: None,
            pending_commit_events: Vec::new(),
        };
        window.rebuild_integration_orders(integration_method_index);
        window.integration_order_index =
            usize::from(window.working.transient.integration_order.saturating_sub(1))
                .min(window.integration_orders.len().saturating_sub(1));
        window
    }

    /// Implements Ghidra function `FUN_014f1700` at `0x014F1700`.
    ///
    /// The host supplies one typed settings snapshot. The Rust dialog stages
    /// an owned copy, initializes the ERC grid and dependent controls, assigns
    /// help context `0x461`, and retains the configuration lease until the
    /// destroy event.
    pub fn from_host(host: &mut impl AnalysisOptionsHostAdapter) -> Self {
        let startup = host.load_startup();
        let mut window = Self::new(startup.options, startup.advanced_options);
        window.active_page = startup.active_page;
        window.host_configuration_active = true;
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::PageChanged(page) => {
                self.active_page = page;
                self.active_page_help_context = OPTIONS_PAGE_HELP_CONTEXT;
            }
            Message::GlitchControlChanged(value) => self.glitch_control_text = value,
            Message::GlitchControlToggled(checked) => {
                if self.glitch_toggle_enabled() {
                    self.synchronize_glitch_control(checked);
                }
            }
            Message::DelayModeChanged(mode) => {
                self.synchronize_delay_mode(mode);
            }
            Message::NonlinearSolverChanged(solver) => {
                self.synchronize_nonlinear_solver(solver);
            }
            Message::AccelerationToggled(checked) => {
                self.synchronize_acceleration_controls(checked);
            }
            Message::IntegrationMethodChanged(method) => {
                self.rebuild_integration_orders(method.recovered_index());
            }
            Message::IntegrationOrderChanged(order) => {
                if let Some(index) = self
                    .integration_orders
                    .iter()
                    .position(|candidate| *candidate == order)
                {
                    self.integration_order_index = index;
                }
            }
            Message::ErcCellChanged {
                row,
                column,
                marker,
            } => {
                let _ = self.set_erc_grid_marker(row, column, marker);
            }
            Message::ErcCellDoubleClicked { row, column } => {
                let _ = self.cycle_erc_grid_cell(row, column);
            }
            Message::ErcKeyPressed { row, column, key } => {
                let _ = self.handle_erc_key_press(row, column, key);
            }
            Message::ResetErcDefaults => self.reset_erc_defaults(),
            Message::RequestAdvancedOptions => {
                self.set_dialog_flag(FLAG_ADVANCED_REQUESTED, true);
            }
            Message::Accept => {
                let mut events = Vec::new();
                let _ = self.accept(&mut events);
                self.pending_commit_events = events;
            }
            Message::Cancel => self.cancel(),
        }
        Task::none()
    }

    /// Implements Ghidra function `FUN_014f28f0` at `0x014F28F0`.
    ///
    /// One final percent sign is optional. Invalid or negative input reports
    /// one error and arms the close veto. Valid input commits every staged
    /// group, requests persistence and live effects, and accepts the dialog.
    pub fn accept(&mut self, adapter: &mut impl AnalysisOptionsCommitAdapter) -> AcceptOutcome {
        let Some(glitch_control_percent) = parse_glitch_control(&self.glitch_control_text) else {
            let _ = self.report_validation_error(ValidationError::InvalidGlitchControl(
                self.glitch_control_text.clone(),
            ));
            self.accepted_settings = None;
            return AcceptOutcome::ValidationVeto;
        };

        self.working.digital.glitch_control_percent = glitch_control_percent;
        self.working.transient.integration_method =
            u8::try_from(self.integration_method_index.saturating_add(1)).unwrap_or(u8::MAX);
        self.working.transient.integration_order = self
            .integration_orders
            .get(self.integration_order_index)
            .copied()
            .unwrap_or(2);
        self.commit_erc_grid();

        let statistics_changed =
            self.original.results.statistics_enabled != self.working.results.statistics_enabled;
        let mixed_mode_changed =
            self.original.digital.vhdl_mixed_mode != self.working.digital.vhdl_mixed_mode;

        if mixed_mode_changed {
            adapter.invalidate_mixed_mode_design();
        }
        adapter.persist(&self.working, &self.advanced_options);
        if statistics_changed {
            adapter.apply_runtime_statistics(self.working.results.statistics_enabled);
        }

        self.accepted_settings = Some(AcceptedAnalysisOptions {
            options: self.working.clone(),
            advanced_options: self.advanced_options.clone(),
            advanced_options_modified: self.dialog_flag(FLAG_ADVANCED_MODIFIED),
        });
        self.set_dialog_flag(FLAG_VISIBLE, false);
        AcceptOutcome::Accepted
    }

    /// Implements Ghidra function `FUN_014f3b60` at `0x014F3B60`.
    ///
    /// A validation error blocks exactly one close query. Every query clears
    /// the shared error flag so corrected input can be evaluated again.
    #[must_use]
    pub fn query_close(&mut self) -> bool {
        let can_close = !self.dialog_flag(FLAG_CLOSE_ERROR);
        self.set_dialog_flag(FLAG_CLOSE_ERROR, false);
        self.validation_error = None;
        can_close
    }

    /// Implements Ghidra function `FUN_014f3b80` at `0x014F3B80`.
    ///
    /// Only the first message while the close flag is clear is retained.
    #[must_use]
    pub fn report_validation_error(&mut self, error: ValidationError) -> bool {
        if self.dialog_flag(FLAG_CLOSE_ERROR) {
            return false;
        }
        self.validation_error = Some(error);
        self.set_dialog_flag(FLAG_CLOSE_ERROR, true);
        true
    }

    /// Implements Ghidra function `FUN_014f3be0` at `0x014F3BE0`.
    ///
    /// Coordinates use the recovered string-grid layout: zero selects a
    /// header and values one through nine select rule cells. Row headers align
    /// right. Other cells align centrally. Headers and the duplicate upper
    /// triangle use one neutral tone; editable `W` and `E` cells use warning
    /// and error tones.
    #[must_use]
    pub const fn erc_cell_presentation(
        &self,
        column: usize,
        row: usize,
    ) -> Option<ErcCellPresentation> {
        if column > ERC_MATRIX_SIZE || row > ERC_MATRIX_SIZE {
            return None;
        }
        let alignment = if column == 0 && row > 0 {
            ErcCellAlignment::Right
        } else {
            ErcCellAlignment::Center
        };
        let tone = if column == 0 || row == 0 || row < column {
            ErcCellTone::HeaderOrDuplicate
        } else {
            match self.erc_grid[row - 1][column - 1] {
                'E' | 'e' => ErcCellTone::Error,
                'W' | 'w' => ErcCellTone::Warning,
                _ => ErcCellTone::Normal,
            }
        };
        Some(ErcCellPresentation { alignment, tone })
    }

    /// Implements Ghidra function `FUN_014f3e40` at `0x014F3E40`.
    ///
    /// The handler preserves an earlier selection veto, rejects both headers,
    /// and permits only the editable lower triangle of the symmetric grid.
    #[must_use]
    pub const fn can_select_erc_cell(current_acceptance: bool, column: usize, row: usize) -> bool {
        current_acceptance
            && column > 0
            && row > 0
            && column <= ERC_MATRIX_SIZE
            && row <= ERC_MATRIX_SIZE
            && row >= column
    }

    /// Implements Ghidra function `FUN_014f3e70` at `0x014F3E70`.
    ///
    /// An editable cell cycles from blank to warning, warning to error, and
    /// error back to blank. Headers and duplicate cells are no-ops.
    pub const fn cycle_erc_grid_cell(&mut self, column: usize, row: usize) -> bool {
        if !Self::can_select_erc_cell(true, column, row) {
            return false;
        }
        let marker = &mut self.erc_grid[row - 1][column - 1];
        *marker = match *marker {
            'W' | 'w' => 'E',
            'E' | 'e' => ' ',
            _ => 'W',
        };
        true
    }

    /// Implements Ghidra function `FUN_014f3fa0` at `0x014F3FA0`.
    ///
    /// Space invokes the same edit cycle as a double click. Every other key is
    /// left for normal grid handling.
    pub const fn handle_erc_key_press(&mut self, column: usize, row: usize, key: char) -> bool {
        key == ' ' && self.cycle_erc_grid_cell(column, row)
    }

    /// Implements Ghidra function `FUN_014f3fc0` at `0x014F3FC0`.
    ///
    /// The projection writes all 81 cells, uses dots for the noneditable
    /// duplicate half, and maps empty internal rules to blank cells.
    pub fn display_erc_matrix(&mut self, matrix: &ErcMatrix) {
        self.erc_grid = matrix.display_grid();
    }

    /// Implements Ghidra function `FUN_014f4080` at `0x014F4080`.
    ///
    /// Dots leave shared symmetric rules unchanged. Every other marker maps to
    /// warning, error, or blank and is copied into the staged matrix.
    pub fn commit_erc_grid(&mut self) {
        self.working.erc.matrix.apply_display_grid(&self.erc_grid);
    }

    /// Implements Ghidra function `FUN_014f4130` at `0x014F4130`.
    ///
    /// The built-in matrix replaces only the dialog grid. ERC switches and
    /// caller-owned or persisted settings remain unchanged until acceptance.
    pub fn reset_erc_defaults(&mut self) {
        self.display_erc_matrix(&ErcMatrix::built_in_defaults());
    }

    /// Implements Ghidra function `FUN_014f4180` at `0x014F4180`.
    ///
    /// The checkbox state controls editor availability without changing its
    /// text or parsed percentage value.
    pub const fn synchronize_glitch_control(&mut self, checked: bool) {
        self.working.digital.glitch_control_enabled = checked;
        self.set_dialog_flag(FLAG_GLITCH_EDITOR_ENABLED, checked);
    }

    /// Implements Ghidra function `FUN_014f41c0` at `0x014F41C0`.
    ///
    /// The plain Newton-Raphson selection disables its dependent PWL control.
    /// Every other recovered solver selection enables that control.
    pub const fn synchronize_nonlinear_solver(&mut self, solver: NonlinearSolver) {
        self.working.performance.nonlinear_solver = solver.recovered_index();
        self.set_dialog_flag(FLAG_NONLINEAR_PWL_ENABLED, solver.recovered_index() != 0);
    }

    /// Implements Ghidra function `FUN_014f42a0` at `0x014F42A0`.
    ///
    /// Ideal-delay mode clears and disables glitch control. Default and Always
    /// select and enable it. This handler does not change the separate glitch
    /// edit field; its click handler owns that enabled state.
    pub const fn synchronize_delay_mode(&mut self, mode: DelayMode) {
        self.working.digital.delay_mode = mode.recovered_index();
        let glitch_control_available = mode.recovered_index() != 2;
        self.set_dialog_flag(FLAG_GLITCH_TOGGLE_ENABLED, glitch_control_available);
        self.working.digital.glitch_control_enabled = glitch_control_available;
    }

    /// Implements Ghidra function `FUN_014f4200` at `0x014F4200`.
    ///
    /// One Boolean controls the thread label, thread selector, and matrix
    /// compilation checkbox. Their staged values and matrix solver are kept.
    pub const fn synchronize_acceleration_controls(&mut self, checked: bool) {
        self.working.performance.acceleration = checked;
        self.set_dialog_flag(FLAG_ACCELERATION_CONTROLS_ENABLED, checked);
    }

    /// Implements Ghidra function `FUN_014f4320` at `0x014F4320`.
    ///
    /// Index zero supplies orders 1 through 2. Every other recovered index
    /// supplies 1 through 6. Both branches reset the selection to order 2.
    pub fn rebuild_integration_orders(&mut self, method_index: i32) {
        self.integration_method_index = method_index;
        let maximum = if method_index == 0 { 2 } else { 6 };
        self.integration_orders = (1..=maximum).collect();
        self.integration_order_index = 1;
    }

    #[must_use]
    pub fn advanced_options_window(&self) -> AdvancedOptionsWindow {
        AdvancedOptionsWindow::new(self.advanced_options.clone())
    }

    /// Implements Ghidra function `FUN_014f4590` at `0x014F4590`.
    ///
    /// The child works on a deep copy. Only modal result one copies the whole
    /// record back and sets the parent modified flag. Every other result is a
    /// no-op for the parent record and flag.
    pub fn apply_advanced_options_dialog(&mut self, dialog: &AdvancedOptionsWindow) -> bool {
        let mut accepted = self.advanced_options.clone();
        self.set_dialog_flag(FLAG_ADVANCED_REQUESTED, false);
        if !dialog.commit_to(&mut accepted) {
            return false;
        }
        self.advanced_options = accepted;
        self.set_dialog_flag(FLAG_ADVANCED_MODIFIED, true);
        true
    }

    /// Implements Ghidra function `FUN_014f4160` at `0x014F4160`.
    ///
    /// Rust owns the staged values. The host adapter releases only the
    /// configuration resource acquired by [`Self::from_host`]. A repeated
    /// destroy notification is safe and has no second host effect.
    pub fn form_destroy(&mut self, host: &mut impl AnalysisOptionsHostAdapter) {
        if self.host_configuration_active {
            host.release_configuration();
            self.host_configuration_active = false;
        }
        self.set_dialog_flag(FLAG_VISIBLE, false);
    }

    /// Implements Ghidra function `FUN_014f4670` at `0x014F4670`.
    ///
    /// Each selected tab receives the shared options-page help context. The
    /// host owns the native help system; the dialog retains the typed page.
    pub fn options_page_changed(
        &mut self,
        page: OptionsPage,
        host: &mut impl AnalysisOptionsHostAdapter,
    ) {
        self.active_page = page;
        self.active_page_help_context = OPTIONS_PAGE_HELP_CONTEXT;
        host.set_page_help_context(page, OPTIONS_PAGE_HELP_CONTEXT);
    }

    pub const fn set_erc_grid_marker(&mut self, row: usize, column: usize, marker: char) -> bool {
        if row >= ERC_MATRIX_SIZE || column >= ERC_MATRIX_SIZE || row < column {
            return false;
        }
        self.erc_grid[row][column] = marker;
        true
    }

    pub fn cancel(&mut self) {
        self.working.clone_from(&self.original);
        self.advanced_options
            .clone_from(&self.original_advanced_options);
        self.erc_grid = self.original.erc.matrix.display_grid();
        self.set_dialog_flag(FLAG_ADVANCED_MODIFIED, false);
        self.accepted_settings = None;
        self.pending_commit_events.clear();
        self.set_dialog_flag(FLAG_VISIBLE, false);
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let integration_method = if self.integration_method_index == 0 {
            IntegrationMethod::Trapezoidal
        } else {
            IntegrationMethod::Gear
        };
        let selected_order = self
            .integration_orders
            .get(self.integration_order_index)
            .copied();
        let selected_delay_mode = DelayMode::from_recovered_index(self.working.digital.delay_mode);
        let selected_nonlinear_solver =
            NonlinearSolver::from_recovered_index(self.working.performance.nonlinear_solver);
        let glitch_input = text_input("Glitch control", &self.glitch_control_text);
        let glitch_input = if self.glitch_editor_enabled() {
            glitch_input.on_input(Message::GlitchControlChanged)
        } else {
            glitch_input
        };
        let erc_rows = self
            .erc_grid
            .iter()
            .fold(column![].spacing(2), |rows, cells| {
                rows.push(text(cells.iter().collect::<String>()))
            });

        let glitch_toggle = checkbox(
            "Enable glitch control",
            self.working.digital.glitch_control_enabled,
        );
        let glitch_toggle = if self.glitch_toggle_enabled() {
            glitch_toggle.on_toggle(Message::GlitchControlToggled)
        } else {
            glitch_toggle
        };

        container(
            column![
                text(TITLE).size(24),
                pick_list(
                    OptionsPage::ALL,
                    Some(self.active_page),
                    Message::PageChanged,
                ),
                row![
                    pick_list(
                        DelayMode::ALL,
                        selected_delay_mode,
                        Message::DelayModeChanged,
                    ),
                    glitch_toggle,
                    glitch_input,
                ]
                .spacing(8),
                row![
                    pick_list(
                        NonlinearSolver::ALL,
                        selected_nonlinear_solver,
                        Message::NonlinearSolverChanged,
                    ),
                    text(if self.nonlinear_pwl_controls_enabled() {
                        "PWL controls enabled"
                    } else {
                        "PWL controls disabled"
                    }),
                ]
                .spacing(8),
                checkbox("Acceleration", self.working.performance.acceleration)
                    .on_toggle(Message::AccelerationToggled),
                row![
                    pick_list(
                        IntegrationMethod::ALL,
                        Some(integration_method),
                        Message::IntegrationMethodChanged,
                    ),
                    pick_list(
                        &self.integration_orders[..],
                        selected_order,
                        Message::IntegrationOrderChanged,
                    ),
                ]
                .spacing(8),
                text("ERC Matrix"),
                erc_rows,
                button("Reset Defaults").on_press(Message::ResetErcDefaults),
                button("Advanced...").on_press(Message::RequestAdvancedOptions),
                text(
                    self.validation_error
                        .as_ref()
                        .map_or_else(String::new, ToString::to_string)
                ),
                row![
                    button("OK").on_press(Message::Accept),
                    button("Cancel").on_press(Message::Cancel),
                ]
                .spacing(8),
            ]
            .spacing(10),
        )
        .padding(16)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }

    #[must_use]
    pub const fn working(&self) -> &AnalysisOptions {
        &self.working
    }

    #[must_use]
    pub const fn erc_grid(&self) -> &[[char; ERC_MATRIX_SIZE]; ERC_MATRIX_SIZE] {
        &self.erc_grid
    }

    #[must_use]
    pub const fn glitch_editor_enabled(&self) -> bool {
        self.dialog_flag(FLAG_GLITCH_EDITOR_ENABLED)
    }

    #[must_use]
    pub const fn glitch_toggle_enabled(&self) -> bool {
        self.dialog_flag(FLAG_GLITCH_TOGGLE_ENABLED)
    }

    #[must_use]
    pub const fn nonlinear_pwl_controls_enabled(&self) -> bool {
        self.dialog_flag(FLAG_NONLINEAR_PWL_ENABLED)
    }

    #[must_use]
    pub const fn acceleration_controls_enabled(&self) -> bool {
        self.dialog_flag(FLAG_ACCELERATION_CONTROLS_ENABLED)
    }

    #[must_use]
    pub fn integration_orders(&self) -> &[u8] {
        &self.integration_orders
    }

    #[must_use]
    pub fn selected_integration_order(&self) -> Option<u8> {
        self.integration_orders
            .get(self.integration_order_index)
            .copied()
    }

    #[must_use]
    pub const fn validation_error(&self) -> Option<&ValidationError> {
        self.validation_error.as_ref()
    }

    #[must_use]
    pub const fn accepted_settings(&self) -> Option<&AcceptedAnalysisOptions> {
        self.accepted_settings.as_ref()
    }

    #[must_use]
    pub fn pending_commit_events(&self) -> &[CommitEvent] {
        &self.pending_commit_events
    }

    #[must_use]
    pub const fn advanced_options_requested(&self) -> bool {
        self.dialog_flag(FLAG_ADVANCED_REQUESTED)
    }

    #[must_use]
    pub const fn advanced_options_modified(&self) -> bool {
        self.dialog_flag(FLAG_ADVANCED_MODIFIED)
    }

    #[must_use]
    pub const fn is_visible(&self) -> bool {
        self.dialog_flag(FLAG_VISIBLE)
    }

    #[must_use]
    pub const fn form_help_context(&self) -> u32 {
        self.form_help_context
    }

    #[must_use]
    pub const fn active_page_help_context(&self) -> u32 {
        self.active_page_help_context
    }

    #[must_use]
    pub const fn active_page(&self) -> OptionsPage {
        self.active_page
    }

    const fn dialog_flag(&self, flag: u8) -> bool {
        self.dialog_flags & flag != 0
    }

    const fn set_dialog_flag(&mut self, flag: u8, enabled: bool) {
        if enabled {
            self.dialog_flags |= flag;
        } else {
            self.dialog_flags &= !flag;
        }
    }
}

fn parse_glitch_control(text: &str) -> Option<f64> {
    let without_percent = text.strip_suffix('%').unwrap_or(text);
    let number = without_percent.trim_start_matches(' ');
    if number.is_empty()
        || !number
            .chars()
            .all(|character| character.is_ascii_digit() || "+-.eE".contains(character))
    {
        return None;
    }
    let value = number.parse::<f64>().ok()?;
    (value.is_finite() && value >= 0.0).then_some(value)
}

#[cfg(test)]
mod tests {
    use super::{
        AcceptOutcome, AnalysisOptionsCommitAdapter, AnalysisOptionsHostAdapter,
        AnalysisOptionsStartup, CommitEvent, DelayMode, ErcCellAlignment, ErcCellPresentation,
        ErcCellTone, IntegrationMethod, Message, NonlinearSolver, OPTIONS_PAGE_HELP_CONTEXT,
        OptionsPage, ValidationError, Window,
    };
    use crate::advanced_analysis_options::{AdvancedOptions, Message as AdvancedMessage};
    use tiara_core::analysis_options::{AnalysisOptions, ErcRule};

    #[derive(Default)]
    struct Recorder {
        persisted: Vec<(AnalysisOptions, AdvancedOptions)>,
        statistics: Vec<bool>,
        mixed_mode_invalidations: usize,
    }

    impl AnalysisOptionsCommitAdapter for Recorder {
        fn persist(&mut self, options: &AnalysisOptions, advanced_options: &AdvancedOptions) {
            self.persisted
                .push((options.clone(), advanced_options.clone()));
        }

        fn apply_runtime_statistics(&mut self, enabled: bool) {
            self.statistics.push(enabled);
        }

        fn invalidate_mixed_mode_design(&mut self) {
            self.mixed_mode_invalidations += 1;
        }
    }

    struct HostRecorder {
        startup: Option<AnalysisOptionsStartup>,
        loads: usize,
        releases: usize,
        help_contexts: Vec<(OptionsPage, u32)>,
    }

    impl HostRecorder {
        fn new(startup: AnalysisOptionsStartup) -> Self {
            Self {
                startup: Some(startup),
                loads: 0,
                releases: 0,
                help_contexts: Vec::new(),
            }
        }
    }

    impl AnalysisOptionsHostAdapter for HostRecorder {
        fn load_startup(&mut self) -> AnalysisOptionsStartup {
            self.loads += 1;
            self.startup.take().expect("startup is loaded once")
        }

        fn release_configuration(&mut self) {
            self.releases += 1;
        }

        fn set_page_help_context(&mut self, page: OptionsPage, help_context: u32) {
            self.help_contexts.push((page, help_context));
        }
    }

    fn advanced_options() -> AdvancedOptions {
        AdvancedOptions {
            rollback_enabled: true,
            rollback_subdivision: 2,
            library_search_list: "work".to_owned(),
            ..AdvancedOptions::default()
        }
    }

    #[test]
    fn host_startup_page_change_and_destroy_preserve_typed_lifetime() {
        let mut options = AnalysisOptions::default();
        options.performance.nonlinear_solver = 2;
        options.digital.delay_mode = 1;
        let mut host = HostRecorder::new(AnalysisOptionsStartup {
            options,
            advanced_options: advanced_options(),
            active_page: OptionsPage::DigitalSimulation,
        });
        let mut window = Window::from_host(&mut host);

        assert_eq!(host.loads, 1);
        assert_eq!(window.form_help_context(), super::HELP_CONTEXT);
        assert_eq!(window.active_page(), OptionsPage::DigitalSimulation);
        assert!(window.nonlinear_pwl_controls_enabled());
        assert!(window.glitch_toggle_enabled());

        window.options_page_changed(OptionsPage::Erc, &mut host);
        assert_eq!(window.active_page(), OptionsPage::Erc);
        assert_eq!(window.active_page_help_context(), OPTIONS_PAGE_HELP_CONTEXT);
        assert_eq!(
            host.help_contexts,
            vec![(OptionsPage::Erc, OPTIONS_PAGE_HELP_CONTEXT)]
        );

        window.form_destroy(&mut host);
        window.form_destroy(&mut host);
        assert_eq!(host.releases, 1);
        assert!(!window.is_visible());
    }

    #[test]
    fn erc_draw_selection_double_click_and_space_share_grid_rules() {
        let mut window = Window::new(AnalysisOptions::default(), advanced_options());
        assert_eq!(
            window.erc_cell_presentation(0, 1),
            Some(ErcCellPresentation {
                alignment: ErcCellAlignment::Right,
                tone: ErcCellTone::HeaderOrDuplicate,
            })
        );
        assert_eq!(
            window.erc_cell_presentation(2, 1),
            Some(ErcCellPresentation {
                alignment: ErcCellAlignment::Center,
                tone: ErcCellTone::HeaderOrDuplicate,
            })
        );
        assert!(!Window::can_select_erc_cell(true, 0, 1));
        assert!(!Window::can_select_erc_cell(false, 1, 1));
        assert!(!Window::can_select_erc_cell(true, 2, 1));
        assert!(Window::can_select_erc_cell(true, 1, 1));

        assert!(window.cycle_erc_grid_cell(1, 1));
        assert_eq!(window.erc_grid()[0][0], 'W');
        assert_eq!(
            window.erc_cell_presentation(1, 1).map(|cell| cell.tone),
            Some(ErcCellTone::Warning)
        );
        assert!(window.handle_erc_key_press(1, 1, ' '));
        assert_eq!(window.erc_grid()[0][0], 'E');
        assert!(window.cycle_erc_grid_cell(1, 1));
        assert_eq!(window.erc_grid()[0][0], ' ');
        assert!(!window.handle_erc_key_press(1, 1, 'x'));
        assert!(!window.cycle_erc_grid_cell(2, 1));
    }

    #[test]
    fn solver_and_delay_changes_update_only_recovered_dependents() {
        let mut window = Window::new(AnalysisOptions::default(), advanced_options());
        window.synchronize_nonlinear_solver(NonlinearSolver::PwlSearch);
        assert_eq!(window.working().performance.nonlinear_solver, 3);
        assert!(window.nonlinear_pwl_controls_enabled());
        window.synchronize_nonlinear_solver(NonlinearSolver::NewtonRaphson);
        assert!(!window.nonlinear_pwl_controls_enabled());

        window.synchronize_delay_mode(DelayMode::Ideal);
        assert_eq!(window.working().digital.delay_mode, 2);
        assert!(!window.working().digital.glitch_control_enabled);
        assert!(!window.glitch_toggle_enabled());
        assert!(window.glitch_editor_enabled());
        drop(window.update(Message::GlitchControlToggled(true)));
        assert!(!window.working().digital.glitch_control_enabled);

        window.synchronize_delay_mode(DelayMode::Always);
        assert!(window.working().digital.glitch_control_enabled);
        assert!(window.glitch_toggle_enabled());
        assert!(window.glitch_editor_enabled());
    }

    #[test]
    fn glitch_validation_accepts_one_percent_and_vetoes_one_invalid_close() {
        let mut window = Window::new(AnalysisOptions::default(), advanced_options());
        window.glitch_control_text = " 12.5%".to_owned();
        let mut recorder = Recorder::default();
        assert_eq!(window.accept(&mut recorder), AcceptOutcome::Accepted);
        assert!(
            (recorder.persisted[0].0.digital.glitch_control_percent - 12.5).abs() < f64::EPSILON
        );
        assert!(
            super::parse_glitch_control(" +1.25e1%")
                .is_some_and(|value| { (value - 12.5).abs() < f64::EPSILON })
        );
        assert_eq!(super::parse_glitch_control("12.5 "), None);
        assert_eq!(super::parse_glitch_control("inf"), None);

        let mut invalid = Window::new(AnalysisOptions::default(), advanced_options());
        invalid.glitch_control_text = "50%%".to_owned();
        assert_eq!(
            invalid.accept(&mut Recorder::default()),
            AcceptOutcome::ValidationVeto
        );
        assert!(matches!(
            invalid.validation_error(),
            Some(ValidationError::InvalidGlitchControl(value)) if value == "50%%"
        ));
        assert!(
            !invalid
                .report_validation_error(ValidationError::InvalidGlitchControl("later".to_owned()))
        );
        assert!(!invalid.query_close());
        assert!(invalid.query_close());

        invalid.glitch_control_text = "-0.1".to_owned();
        assert_eq!(
            invalid.accept(&mut Recorder::default()),
            AcceptOutcome::ValidationVeto
        );
    }

    #[test]
    fn erc_defaults_remain_staged_until_accept_and_commit_symmetrically() {
        let original = AnalysisOptions::default();
        let mut window = Window::new(original.clone(), advanced_options());
        window.reset_erc_defaults();
        assert_eq!(window.working().erc.matrix, original.erc.matrix);
        assert_eq!(window.working().erc.apply_rules, original.erc.apply_rules);
        assert_eq!(
            window.working().erc.warn_unconnected_pins,
            original.erc.warn_unconnected_pins
        );
        assert_eq!(
            window.working().erc.check_unconnected_wires,
            original.erc.check_unconnected_wires
        );
        assert_eq!(window.erc_grid()[0][1], '.');
        window.commit_erc_grid();
        assert_eq!(window.working().erc.matrix.rule(1, 3), Some(ErcRule::Error));
        assert_eq!(window.working().erc.matrix.rule(3, 1), Some(ErcRule::Error));
        assert_eq!(
            window.working().erc.matrix.rule(0, 8),
            Some(ErcRule::Warning)
        );
    }

    #[test]
    fn dependent_enablement_preserves_values() {
        let mut options = AnalysisOptions::default();
        options.performance.maximum_threads = 12;
        options.performance.matrix_compilation = true;
        options.performance.matrix_solver = 3;
        let mut window = Window::new(options, advanced_options());
        let glitch_text = window.glitch_control_text.clone();
        window.synchronize_glitch_control(false);
        window.synchronize_acceleration_controls(false);

        assert!(!window.glitch_editor_enabled());
        assert_eq!(window.glitch_control_text, glitch_text);
        assert!(!window.acceleration_controls_enabled());
        assert_eq!(window.working().performance.maximum_threads, 12);
        assert!(window.working().performance.matrix_compilation);
        assert_eq!(window.working().performance.matrix_solver, 3);
    }

    #[test]
    fn integration_method_rebuilds_choices_and_resets_order_two() {
        let mut window = Window::new(AnalysisOptions::default(), advanced_options());
        window.rebuild_integration_orders(0);
        assert_eq!(window.integration_orders(), &[1, 2]);
        assert_eq!(window.selected_integration_order(), Some(2));
        window.rebuild_integration_orders(-1);
        assert_eq!(window.integration_orders(), &[1, 2, 3, 4, 5, 6]);
        assert_eq!(window.selected_integration_order(), Some(2));
        drop(window.update(Message::IntegrationMethodChanged(IntegrationMethod::Gear)));
        assert_eq!(window.integration_orders(), &[1, 2, 3, 4, 5, 6]);
    }

    #[test]
    fn advanced_options_copy_back_requires_an_accepted_child() {
        let mut parent = Window::new(AnalysisOptions::default(), advanced_options());
        let mut cancelled = parent.advanced_options_window();
        drop(cancelled.update(AdvancedMessage::LibrarySearchChanged(
            "cancelled".to_owned(),
        )));
        cancelled.cancel();
        assert!(!parent.apply_advanced_options_dialog(&cancelled));
        assert!(!parent.advanced_options_modified());

        let mut accepted = parent.advanced_options_window();
        drop(accepted.update(AdvancedMessage::LibrarySearchChanged("accepted".to_owned())));
        accepted.capture_controls();
        assert!(parent.apply_advanced_options_dialog(&accepted));
        assert!(parent.advanced_options_modified());

        let mut equal_value = parent.advanced_options_window();
        equal_value.capture_controls();
        assert!(parent.apply_advanced_options_dialog(&equal_value));
        assert!(parent.advanced_options_modified());
    }

    #[test]
    fn valid_accept_records_persistence_and_only_changed_live_effects() {
        let mut options = AnalysisOptions::default();
        options.results.statistics_enabled = false;
        options.digital.vhdl_mixed_mode = false;
        let mut window = Window::new(options, advanced_options());
        window.working.results.statistics_enabled = true;
        window.working.digital.vhdl_mixed_mode = true;
        let mut recorder = Recorder::default();
        assert_eq!(window.accept(&mut recorder), AcceptOutcome::Accepted);
        assert_eq!(recorder.persisted.len(), 1);
        assert_eq!(recorder.statistics, vec![true]);
        assert_eq!(recorder.mixed_mode_invalidations, 1);
        assert!(!window.is_visible());

        let mut unchanged = Window::new(AnalysisOptions::default(), advanced_options());
        drop(unchanged.update(Message::Accept));
        assert_eq!(unchanged.pending_commit_events(), &[CommitEvent::Persisted]);
    }
}
