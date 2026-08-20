use std::fmt;
use std::path::Path;

use iced::widget::{button, checkbox, column, container, row, text};
use iced::{Element, Length, Task};
use tiara_core::electrical_rules::{
    CheckReport, ElectricalRulesSettings, GraphId, MANUAL_RECHECK_MODE, PageId, ResultRow,
    ResultTarget, should_present_automatic_result, should_run_automatic_check,
};

pub const TITLE: &str = "Electric Rules Check";
pub const HELP_CONTEXT: u32 = 1086;

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ErcUiError {
    Engine(String),
    Persistence(String),
}

impl fmt::Display for ErcUiError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Engine(message) | Self::Persistence(message) => formatter.write_str(message),
        }
    }
}

impl std::error::Error for ErcUiError {}

pub trait CheckEngine {
    /// Runs an ERC pass and returns rows with owned target locations.
    ///
    /// # Errors
    ///
    /// Returns [`ErcUiError`] when the analysis cannot complete.
    fn check(
        &mut self,
        graph: GraphId,
        settings: &ElectricalRulesSettings,
        mode: u8,
    ) -> Result<CheckReport, ErcUiError>;
}

pub trait SettingsStore {
    /// Persists the shared ERC matrix and switches.
    ///
    /// # Errors
    ///
    /// Returns [`ErcUiError`] when the settings sink cannot write the values.
    fn persist(&mut self, settings: &ElectricalRulesSettings) -> Result<(), ErcUiError>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EditorContext {
    NormalSchematic,
    SpecialText,
}

pub trait EditorNavigation {
    fn active_page(&self) -> Option<PageId>;
    fn switch_to_page(&mut self, page: PageId);
    fn context(&self) -> Option<EditorContext>;
    fn clear_selection(&mut self);
    fn select_and_reveal(&mut self, target: &ResultTarget);
    fn reveal_text_target(&mut self, target: &ResultTarget);
    fn focus_schematic(&mut self);
}

pub trait HelpAdapter {
    fn open_context(&mut self, base_help_file: &Path, context: u32);
}

pub trait GraphOperationAdapter {
    fn graph_id(&self) -> GraphId;
    fn execute(&mut self, operation_code: u8, argument: u16) -> i32;
    fn selected_result(&mut self, alternate: bool) -> bool;
}

pub trait ErrorReporter {
    fn internal_error(&mut self, identity: &str);
    fn operation_error(&mut self, status: i32, event_kind: u8);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Visibility {
    Hidden,
    Visible,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ResultLayout {
    Expanded,
    InstructionVisible,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FocusTarget {
    None,
    Results,
    Schematic,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Action {
    Recheck,
    SelectResult(usize),
    FocusSchematic,
    Close,
    Help,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    Recheck,
    ResultSelected(usize),
    ResultDoubleClicked,
    Close,
    Help,
    AutomaticChanged(bool),
    ShowWarningsChanged(bool),
    RecurseChanged(bool),
}

#[derive(Debug)]
pub struct Window {
    settings: ElectricalRulesSettings,
    rows: Vec<ResultRow>,
    visibility: Visibility,
    layout: ResultLayout,
    focus: FocusTarget,
    pending_action: Option<Action>,
}

impl Window {
    #[must_use]
    pub const fn new(settings: ElectricalRulesSettings) -> Self {
        Self {
            settings,
            rows: Vec::new(),
            visibility: Visibility::Visible,
            layout: ResultLayout::Expanded,
            focus: FocusTarget::None,
            pending_action: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Recheck => self.pending_action = Some(Action::Recheck),
            Message::ResultSelected(index) => {
                self.pending_action = Some(Action::SelectResult(index));
            }
            Message::ResultDoubleClicked => {
                self.pending_action = Some(Action::FocusSchematic);
            }
            Message::Close => self.pending_action = Some(Action::Close),
            Message::Help => self.pending_action = Some(Action::Help),
            Message::AutomaticChanged(enabled) => self.automatic_clicked(enabled),
            Message::ShowWarningsChanged(checked) => self.show_warnings_clicked(checked),
            Message::RecurseChanged(enabled) => self.recurse_clicked(enabled),
        }
        Task::none()
    }

    #[must_use]
    pub const fn take_action(&mut self) -> Option<Action> {
        self.pending_action.take()
    }

    /// Clears all result rows and returns the list to its expanded layout.
    ///
    /// Reimplements Ghidra function `FUN_014b7550` at `0x014B7550`. Rust
    /// [`Vec::clear`] drops each row and its owned target collection, so no
    /// separate attached-object destructor is required.
    pub fn clear_results(&mut self) {
        self.rows.clear();
        self.layout = ResultLayout::Expanded;
    }

    /// Switches to and reveals one target from an ERC result.
    ///
    /// Reimplements Ghidra function `FUN_014b7650` at `0x014B7650`. The editor
    /// adapter owns page switching, related-object selection, viewport panning,
    /// and special text-editor reveal behavior.
    pub fn reveal_target(
        navigation: &mut impl EditorNavigation,
        target: &ResultTarget,
        first_target: bool,
    ) {
        if navigation.active_page() != Some(target.page) {
            navigation.switch_to_page(target.page);
        }
        match navigation.context() {
            Some(EditorContext::NormalSchematic) => {
                if first_target {
                    navigation.clear_selection();
                }
                navigation.select_and_reveal(target);
            }
            Some(EditorContext::SpecialText) => navigation.reveal_text_target(target),
            None => {}
        }
    }

    /// Replaces the current rows with a new manual ERC report.
    ///
    /// Reimplements Ghidra function `FUN_014b7750` at `0x014B7750`. Cleanup
    /// occurs before the engine call. An engine error therefore leaves the old
    /// rows discarded, as in the recovered synchronous path.
    ///
    /// # Errors
    ///
    /// Returns [`ErcUiError`] when the engine cannot complete the check.
    pub fn run_check(
        &mut self,
        graph: GraphId,
        mode: u8,
        engine: &mut impl CheckEngine,
    ) -> Result<(), ErcUiError> {
        self.clear_results();
        let report = engine.check(graph, &self.settings, mode)?;
        let show_instruction = report.has_issue_counts();
        self.rows = report.rows;
        self.focus = FocusTarget::Results;
        self.layout = if show_instruction {
            ResultLayout::InstructionVisible
        } else {
            ResultLayout::Expanded
        };
        Ok(())
    }

    /// Runs the recovered Re-check command with mode `0x0f`.
    ///
    /// Reimplements Ghidra function `FUN_014b7800` at `0x014B7800`.
    ///
    /// # Errors
    ///
    /// Returns [`ErcUiError`] when the engine cannot complete the check.
    pub fn recheck(
        &mut self,
        graph: GraphId,
        engine: &mut impl CheckEngine,
    ) -> Result<(), ErcUiError> {
        self.run_check(graph, MANUAL_RECHECK_MODE, engine)
    }

    /// Reveals all targets attached to one selected result row.
    ///
    /// Reimplements Ghidra function `FUN_014b7840` at `0x014B7840`. Metadata
    /// is stored separately from targets, and only the first target clears the
    /// current schematic selection.
    pub fn select_result(&self, index: usize, navigation: &mut impl EditorNavigation) {
        let Some(row) = self.rows.get(index) else {
            return;
        };
        for (target_index, target) in row.targets.iter().enumerate() {
            Self::reveal_target(navigation, target, target_index == 0);
        }
    }

    /// Hides the modeless window and then persists shared ERC settings.
    ///
    /// Reimplements Ghidra function `FUN_014b78c0` at `0x014B78C0`. Results
    /// and editor highlights remain intact.
    ///
    /// # Errors
    ///
    /// Returns [`ErcUiError`] when the settings sink cannot persist the state.
    pub fn close_and_persist(&mut self, store: &mut impl SettingsStore) -> Result<(), ErcUiError> {
        self.visibility = Visibility::Hidden;
        store.persist(&self.settings)
    }

    /// Opens TINA help at the ERC context.
    ///
    /// Reimplements Ghidra function `FUN_014b7ac0` at `0x014B7AC0`. The help
    /// adapter resolves any current-language variant and owns process-level
    /// help dispatch.
    pub fn open_help(install_folder: &Path, help: &mut impl HelpAdapter) {
        help.open_context(&install_folder.join("TINA.CHM"), HELP_CONTEXT);
    }

    /// Applies Automatic ERC immediately and updates warning-control enablement.
    ///
    /// Reimplements Ghidra function `FUN_014b7ba0` at `0x014B7BA0`.
    pub const fn automatic_clicked(&mut self, enabled: bool) {
        self.settings.presentation.automatic_enabled = enabled;
    }

    /// Stores the inverse of the recovered `SkipAutoERCWarnings` flag.
    ///
    /// Reimplements Ghidra function `FUN_014b7bf0` at `0x014B7BF0`. The Rust
    /// settings model uses the positive UI name `show_on_warnings`.
    pub const fn show_warnings_clicked(&mut self, checked: bool) {
        self.settings.presentation.show_on_warnings = checked;
    }

    /// Returns input focus to the schematic editor.
    ///
    /// Reimplements Ghidra function `FUN_014b7c40` at `0x014B7C40`.
    pub fn focus_after_double_click(&mut self, navigation: &mut impl EditorNavigation) {
        navigation.focus_schematic();
        self.focus = FocusTarget::Schematic;
    }

    /// Applies Multi-level ERC to later manual and automatic checks.
    ///
    /// Reimplements Ghidra function `FUN_014b7c70` at `0x014B7C70`.
    pub const fn recurse_clicked(&mut self, enabled: bool) {
        self.settings.presentation.recurse = enabled;
    }

    fn present_automatic_report(
        &mut self,
        settings: &ElectricalRulesSettings,
        report: CheckReport,
    ) {
        self.settings.clone_from(settings);
        self.clear_results();
        let show_instruction = report.has_issue_counts();
        self.rows = report.rows;
        self.visibility = Visibility::Visible;
        self.focus = FocusTarget::Results;
        self.layout = if show_instruction {
            ResultLayout::InstructionVisible
        } else {
            ResultLayout::Expanded
        };
    }

    #[must_use]
    pub const fn settings(&self) -> &ElectricalRulesSettings {
        &self.settings
    }

    #[must_use]
    pub fn rows(&self) -> &[ResultRow] {
        &self.rows
    }

    #[must_use]
    pub const fn visibility(&self) -> Visibility {
        self.visibility
    }

    #[must_use]
    pub const fn layout(&self) -> ResultLayout {
        self.layout
    }

    #[must_use]
    pub const fn focus(&self) -> FocusTarget {
        self.focus
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let messages = self
            .rows
            .iter()
            .map(|result| result.message.as_str())
            .collect::<Vec<_>>()
            .join("\n");
        let warning_control = checkbox(
            "Show on Warnings",
            self.settings.presentation.show_on_warnings,
        )
        .on_toggle_maybe(
            self.settings
                .presentation
                .automatic_enabled
                .then_some(Message::ShowWarningsChanged),
        );
        let content = column![
            text(TITLE).size(18),
            text(messages),
            text(match self.layout {
                ResultLayout::Expanded => "",
                ResultLayout::InstructionVisible => {
                    "Click an error or warning to highlight its schematic targets."
                }
            }),
            checkbox(
                "Automatic ERC",
                self.settings.presentation.automatic_enabled
            )
            .on_toggle(Message::AutomaticChanged),
            warning_control,
            checkbox("Multi-level ERC", self.settings.presentation.recurse)
                .on_toggle(Message::RecurseChanged),
            row![
                button("Re-check").on_press(Message::Recheck),
                button("Help").on_press(Message::Help),
                button("Close").on_press(Message::Close),
            ]
            .spacing(8),
        ]
        .spacing(10);
        container(content)
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct AutomaticCoordinatorState {
    pub globally_suppressed: bool,
    pub last_presented_result: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct AutomaticCheckRequest {
    pub operation_code: u8,
    pub alternate_result: bool,
    pub caller_suppressed: bool,
    pub event_kind: u8,
    pub argument: u16,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum GraphOperationOutcome {
    NullGraph,
    Completed {
        operation_status: i32,
        selected_result: bool,
    },
}

/// Coordinates a graph operation with gated automatic ERC presentation.
///
/// Reimplements Ghidra function `FUN_014b7d50` at `0x014B7D50`. The function
/// reports a null graph, applies the recovered automatic-check and display
/// gates, creates or reuses the modeless results window, and then continues the
/// underlying graph operation. Negative operation status is reported after the
/// operation, and the requested graph result is returned.
///
/// # Errors
///
/// Returns [`ErcUiError`] when an eligible automatic check cannot complete.
pub fn coordinate_graph_operation(
    window: &mut Option<Window>,
    graph: Option<&mut impl GraphOperationAdapter>,
    request: AutomaticCheckRequest,
    state: &mut AutomaticCoordinatorState,
    settings: &ElectricalRulesSettings,
    engine: &mut impl CheckEngine,
    errors: &mut impl ErrorReporter,
) -> Result<GraphOperationOutcome, ErcUiError> {
    let Some(graph) = graph else {
        errors.internal_error("GraphGen.Init_Graph");
        return Ok(GraphOperationOutcome::NullGraph);
    };

    if should_run_automatic_check(
        request.operation_code,
        request.event_kind,
        state.globally_suppressed,
        settings.presentation.automatic_enabled,
        request.caller_suppressed,
    ) {
        let report = engine.check(graph.graph_id(), settings, request.operation_code)?;
        if should_present_automatic_result(
            report.packed_result,
            state.last_presented_result,
            settings.presentation.show_on_warnings,
        ) {
            state.last_presented_result = report.packed_result;
            let result_window = window.get_or_insert_with(|| Window::new(settings.clone()));
            result_window.present_automatic_report(settings, report);
        }
    }

    let operation_status = graph.execute(request.operation_code, request.argument);
    if request.operation_code != MANUAL_RECHECK_MODE && operation_status < 0 {
        errors.operation_error(operation_status, request.event_kind);
    }
    let selected_result = graph.selected_result(request.alternate_result);
    Ok(GraphOperationOutcome::Completed {
        operation_status,
        selected_result,
    })
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::path::PathBuf;
    use tiara_core::analysis_options::ErcOptions;
    use tiara_core::electrical_rules::{ObjectId, PresentationOptions};

    fn settings() -> ElectricalRulesSettings {
        ElectricalRulesSettings {
            rules: ErcOptions::default(),
            presentation: PresentationOptions {
                automatic_enabled: true,
                show_on_warnings: true,
                recurse: false,
            },
        }
    }

    fn target(page: u64, object: u64) -> ResultTarget {
        ResultTarget {
            page: PageId(page),
            object: ObjectId(object),
            text_identifier: None,
        }
    }

    fn report(packed_result: i32, message: &str) -> CheckReport {
        CheckReport {
            packed_result,
            rows: vec![ResultRow {
                message: message.to_owned(),
                metadata: Some("checker".to_owned()),
                targets: vec![target(2, 10), target(2, 11)],
            }],
        }
    }

    struct Engine {
        report: CheckReport,
        calls: Vec<(GraphId, u8)>,
    }

    impl CheckEngine for Engine {
        fn check(
            &mut self,
            graph: GraphId,
            _settings: &ElectricalRulesSettings,
            mode: u8,
        ) -> Result<CheckReport, ErcUiError> {
            self.calls.push((graph, mode));
            Ok(self.report.clone())
        }
    }

    #[derive(Default)]
    struct Navigation {
        page: Option<PageId>,
        context: Option<EditorContext>,
        events: Vec<String>,
    }

    impl EditorNavigation for Navigation {
        fn active_page(&self) -> Option<PageId> {
            self.page
        }
        fn switch_to_page(&mut self, page: PageId) {
            self.page = Some(page);
            self.events.push(format!("page:{}", page.0));
        }
        fn context(&self) -> Option<EditorContext> {
            self.context
        }
        fn clear_selection(&mut self) {
            self.events.push("clear".to_owned());
        }
        fn select_and_reveal(&mut self, target: &ResultTarget) {
            self.events.push(format!("select:{}", target.object.0));
        }
        fn reveal_text_target(&mut self, target: &ResultTarget) {
            self.events.push(format!("text:{}", target.object.0));
        }
        fn focus_schematic(&mut self) {
            self.events.push("focus".to_owned());
        }
    }

    #[derive(Default)]
    struct Store(Vec<ElectricalRulesSettings>);
    impl SettingsStore for Store {
        fn persist(&mut self, settings: &ElectricalRulesSettings) -> Result<(), ErcUiError> {
            self.0.push(settings.clone());
            Ok(())
        }
    }

    #[derive(Default)]
    struct Help(Option<(PathBuf, u32)>);
    impl HelpAdapter for Help {
        fn open_context(&mut self, base_help_file: &Path, context: u32) {
            self.0 = Some((base_help_file.to_owned(), context));
        }
    }

    struct Graph {
        executed: usize,
        status: i32,
    }
    impl GraphOperationAdapter for Graph {
        fn graph_id(&self) -> GraphId {
            GraphId(7)
        }
        fn execute(&mut self, _operation_code: u8, _argument: u16) -> i32 {
            self.executed += 1;
            self.status
        }
        fn selected_result(&mut self, alternate: bool) -> bool {
            alternate
        }
    }

    #[derive(Default)]
    struct Errors {
        internal: usize,
        operation: Vec<(i32, u8)>,
    }
    impl ErrorReporter for Errors {
        fn internal_error(&mut self, _identity: &str) {
            self.internal += 1;
        }
        fn operation_error(&mut self, status: i32, event_kind: u8) {
            self.operation.push((status, event_kind));
        }
    }

    #[test]
    fn recheck_replaces_rows_focuses_results_and_applies_layout() -> Result<(), ErcUiError> {
        let mut window = Window::new(settings());
        window.rows = report(0, "old").rows;
        let mut engine = Engine {
            report: report(100, "new"),
            calls: Vec::new(),
        };
        window.recheck(GraphId(1), &mut engine)?;
        assert_eq!(engine.calls, [(GraphId(1), MANUAL_RECHECK_MODE)]);
        assert_eq!(window.rows()[0].message, "new");
        assert_eq!(window.focus(), FocusTarget::Results);
        assert_eq!(window.layout(), ResultLayout::InstructionVisible);
        Ok(())
    }

    #[test]
    fn selected_row_clears_once_and_reveals_all_targets() {
        let mut window = Window::new(settings());
        window.rows = report(1, "row").rows;
        let mut navigation = Navigation {
            page: Some(PageId(1)),
            context: Some(EditorContext::NormalSchematic),
            events: Vec::new(),
        };
        window.select_result(0, &mut navigation);
        assert_eq!(
            navigation.events,
            ["page:2", "clear", "select:10", "select:11"]
        );
    }

    #[test]
    fn missing_or_metadata_only_row_is_a_navigation_noop() {
        let mut window = Window::new(settings());
        window.rows.push(ResultRow {
            message: "summary".to_owned(),
            metadata: Some("checker".to_owned()),
            targets: Vec::new(),
        });
        let mut navigation = Navigation::default();
        window.select_result(0, &mut navigation);
        window.select_result(8, &mut navigation);
        assert!(navigation.events.is_empty());
    }

    #[test]
    fn live_switches_do_not_run_a_check_and_close_persists() -> Result<(), ErcUiError> {
        let mut window = Window::new(settings());
        window.automatic_clicked(false);
        window.show_warnings_clicked(false);
        window.recurse_clicked(true);
        let mut store = Store::default();
        window.close_and_persist(&mut store)?;
        assert_eq!(window.visibility(), Visibility::Hidden);
        assert!(!store.0[0].presentation.automatic_enabled);
        assert!(!store.0[0].presentation.show_on_warnings);
        assert!(store.0[0].presentation.recurse);
        Ok(())
    }

    #[test]
    fn help_uses_tina_chm_and_recovered_context() {
        let mut help = Help::default();
        Window::open_help(Path::new("install"), &mut help);
        assert_eq!(
            help.0,
            Some((PathBuf::from("install").join("TINA.CHM"), HELP_CONTEXT))
        );
    }

    #[test]
    fn double_click_only_returns_focus_to_the_editor() {
        let mut window = Window::new(settings());
        let mut navigation = Navigation::default();
        window.focus_after_double_click(&mut navigation);
        assert_eq!(navigation.events, ["focus"]);
        assert_eq!(window.focus(), FocusTarget::Schematic);
    }

    #[test]
    fn automatic_coordinator_reuses_window_and_continues_operation() -> Result<(), ErcUiError> {
        let mut window = None;
        let mut graph = Graph {
            executed: 0,
            status: -2,
        };
        let mut engine = Engine {
            report: report(100, "automatic"),
            calls: Vec::new(),
        };
        let mut state = AutomaticCoordinatorState::default();
        let mut errors = Errors::default();
        let outcome = coordinate_graph_operation(
            &mut window,
            Some(&mut graph),
            AutomaticCheckRequest {
                operation_code: 1,
                alternate_result: true,
                caller_suppressed: false,
                event_kind: 0,
                argument: 5,
            },
            &mut state,
            &settings(),
            &mut engine,
            &mut errors,
        )?;
        assert_eq!(
            outcome,
            GraphOperationOutcome::Completed {
                operation_status: -2,
                selected_result: true,
            }
        );
        assert_eq!(graph.executed, 1);
        assert_eq!(errors.operation, [(-2, 0)]);
        assert_eq!(
            window.as_ref().map(Window::visibility),
            Some(Visibility::Visible)
        );
        Ok(())
    }

    #[test]
    fn null_graph_reports_internal_error_without_running_engine() -> Result<(), ErcUiError> {
        let mut window = None;
        let mut engine = Engine {
            report: report(100, "unused"),
            calls: Vec::new(),
        };
        let mut state = AutomaticCoordinatorState::default();
        let mut errors = Errors::default();
        let graph: Option<&mut Graph> = None;
        let outcome = coordinate_graph_operation(
            &mut window,
            graph,
            AutomaticCheckRequest {
                operation_code: 1,
                alternate_result: false,
                caller_suppressed: false,
                event_kind: 0,
                argument: 0,
            },
            &mut state,
            &settings(),
            &mut engine,
            &mut errors,
        )?;
        assert_eq!(outcome, GraphOperationOutcome::NullGraph);
        assert_eq!(errors.internal, 1);
        assert!(engine.calls.is_empty());
        Ok(())
    }
}
