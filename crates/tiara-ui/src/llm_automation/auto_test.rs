use std::path::{Path, PathBuf};

use iced::widget::{button, checkbox, column, row, text};
use iced::{Element, Length};

use super::{BackendError, BackendFuture};

pub const TITLE: &str = "LLM Auto Test";
pub const FORM_RESOURCE: &str = "LLMAutoTest";
const TEST_DATA_RELATIVE_PATH: &str = "Vhdl/aiprompts/ai_sample_tb.json";
const REPORT_FILE_NAME: &str = "autotest.json";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ConfigurationMask(u8);

impl ConfigurationMask {
    #[must_use]
    pub const fn from_checked(checked: [bool; 4]) -> Self {
        let mut mask = 0;
        if checked[0] {
            mask |= 1;
        }
        if checked[1] {
            mask |= 2;
        }
        if checked[2] {
            mask |= 4;
        }
        if checked[3] {
            mask |= 8;
        }
        Self(mask)
    }

    #[must_use]
    pub const fn is_empty(self) -> bool {
        self.0 == 0
    }

    const fn contains(self, bit: u8) -> bool {
        self.0 & bit != 0
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ExtractionMode {
    TinaInstructions,
    SelectedInstructions,
    SimpleInstructions,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TestConfiguration {
    pub label: String,
    pub extraction_mode: ExtractionMode,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TestQuestion {
    pub item_id: i64,
    pub question: String,
    pub comment: String,
    pub extra: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FixtureCircuit {
    CalculateVoltage,
    CalculateResistance,
    CalculateTotalResistance,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct LlmRequest {
    pub question: String,
    pub configuration: TestConfiguration,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ReportEntry {
    Failed {
        item_id: i64,
        question: String,
        configuration: String,
        reason: String,
    },
    ReportCount(usize),
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ReportDocument {
    pub entries: Vec<ReportEntry>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CompletionStatus {
    Completed,
    CompletedWithErrors,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Progress {
    pub question: usize,
    pub question_count: usize,
    pub configuration: usize,
    pub configuration_count: usize,
    pub errors: usize,
}

pub trait AutoTestBackend: Send {
    fn test_data_exists<'a>(
        &'a mut self,
        path: &'a Path,
    ) -> BackendFuture<'a, Result<bool, BackendError>>;

    fn load_questions<'a>(
        &'a mut self,
        path: &'a Path,
    ) -> BackendFuture<'a, Result<Vec<TestQuestion>, BackendError>>;

    fn apply_configuration(
        &mut self,
        configuration: TestConfiguration,
    ) -> BackendFuture<'_, Result<(), BackendError>>;

    fn update_progress(
        &mut self,
        progress: Progress,
    ) -> BackendFuture<'_, Result<(), BackendError>>;

    fn open_fixture(
        &mut self,
        fixture: FixtureCircuit,
    ) -> BackendFuture<'_, Result<(), BackendError>>;

    fn dispatch_request(
        &mut self,
        request: LlmRequest,
    ) -> BackendFuture<'_, Result<(), BackendError>>;

    fn persist_report<'a>(
        &'a mut self,
        path: &'a Path,
        report: ReportDocument,
    ) -> BackendFuture<'a, Result<(), BackendError>>;

    fn show_completion(
        &mut self,
        status: CompletionStatus,
    ) -> BackendFuture<'_, Result<(), BackendError>>;

    fn stop_llm(&mut self) -> BackendFuture<'_, Result<(), BackendError>>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum AutoTestError {
    Backend(BackendError),
    FailedToLoad(PathBuf),
    MissingRunState,
    NoConfigurations,
}

impl std::fmt::Display for AutoTestError {
    fn fmt(&self, formatter: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Backend(error) => error.fmt(formatter),
            Self::FailedToLoad(path) => write!(formatter, "Failed to load: {}", path.display()),
            Self::MissingRunState => formatter.write_str("The LLM auto-test run state is missing."),
            Self::NoConfigurations => {
                formatter.write_str("The LLM auto-test has no selected configurations.")
            }
        }
    }
}

impl std::error::Error for AutoTestError {}

impl From<BackendError> for AutoTestError {
    fn from(error: BackendError) -> Self {
        Self::Backend(error)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SetupOutcome {
    Initialized,
    MissingFile,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ProgressOutcome {
    RequestDispatched,
    Completed(CompletionStatus),
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct AutoTestRun {
    configurations: Vec<TestConfiguration>,
    configuration_index: usize,
    questions: Vec<TestQuestion>,
    next_question_index: usize,
    initial_run: bool,
    response_matched: bool,
    report: ReportDocument,
    error_count: usize,
    report_finalized: bool,
}

impl AutoTestRun {
    fn new(configurations: Vec<TestConfiguration>) -> Self {
        Self {
            configurations,
            configuration_index: 0,
            questions: Vec::new(),
            next_question_index: 0,
            initial_run: true,
            response_matched: false,
            report: ReportDocument::default(),
            error_count: 0,
            report_finalized: false,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AutoTestManager {
    pub tina_directory: PathBuf,
    pub output_directory: PathBuf,
    pub default_tina_model: String,
    pub default_meta_model: String,
    pub active: bool,
    pub form_open: bool,
    pub form_released: bool,
    run: Option<AutoTestRun>,
}

impl AutoTestManager {
    #[must_use]
    pub fn new(
        tina_directory: PathBuf,
        output_directory: PathBuf,
        default_tina_model: impl Into<String>,
        default_meta_model: impl Into<String>,
    ) -> Self {
        Self {
            tina_directory,
            output_directory,
            default_tina_model: default_tina_model.into(),
            default_meta_model: default_meta_model.into(),
            active: false,
            form_open: true,
            form_released: false,
            run: None,
        }
    }

    /// Finalizes and persists the current auto-test report.
    ///
    /// Reimplements Ghidra function `FUN_01a59250` at `0x01A59250`.
    /// `ReportCount` is added once, while repeated finalization writes again.
    /// The active flag is cleared before report persistence starts.
    ///
    /// # Errors
    ///
    /// Returns an error for a missing run state or failed backend persistence.
    pub async fn finalize_report(
        &mut self,
        backend: &mut impl AutoTestBackend,
    ) -> Result<(), AutoTestError> {
        let run = self.run.as_mut().ok_or(AutoTestError::MissingRunState)?;
        if !run.report_finalized {
            let count = run.report.entries.len();
            run.report.entries.push(ReportEntry::ReportCount(count));
            run.report_finalized = true;
        }
        self.active = false;
        let report = run.report.clone();
        let path = self.output_directory.join(REPORT_FILE_NAME);
        backend.persist_report(&path, report).await?;
        Ok(())
    }

    /// Finalizes the report, stops shared LLM work, and releases the form.
    ///
    /// Reimplements Ghidra function `FUN_019ce500` at `0x019CE500`.
    /// Persistence and stop errors prevent the later release steps.
    ///
    /// # Errors
    ///
    /// Returns the first report or stop backend error.
    pub async fn close_form(
        &mut self,
        backend: &mut impl AutoTestBackend,
    ) -> Result<(), AutoTestError> {
        self.finalize_report(backend).await?;
        backend.stop_llm().await?;
        self.form_open = false;
        self.form_released = true;
        Ok(())
    }

    /// Coordinates setup and the first progression step for a positive mask.
    ///
    /// Reimplements Ghidra function `FUN_01a593b0` at `0x01A593B0`.
    /// A zero mask is a no-op. A missing file still reaches progression, as in
    /// the recovered coordinator, and can expose a missing or stale run state.
    ///
    /// # Errors
    ///
    /// Returns setup, progression, or backend errors without local recovery.
    pub async fn coordinate_start(
        &mut self,
        mask: ConfigurationMask,
        backend: &mut impl AutoTestBackend,
    ) -> Result<Option<ProgressOutcome>, AutoTestError> {
        if mask.is_empty() {
            return Ok(None);
        }
        let _setup_outcome = self.setup_selected_configurations(mask, backend).await?;
        self.advance(backend).await.map(Some)
    }

    /// Builds selected configurations and loads the JSON question array.
    ///
    /// Reimplements Ghidra function `FUN_01a59570` at `0x01A59570`.
    /// Configuration order follows mask bits 0 through 3. A missing test-data
    /// file returns without replacing state. A load failure retains the new,
    /// inactive partial state and reports the recovered Failed-to-load error.
    ///
    /// # Errors
    ///
    /// Returns backend errors, a parse/load error, or a no-configuration error.
    pub async fn setup_selected_configurations(
        &mut self,
        mask: ConfigurationMask,
        backend: &mut impl AutoTestBackend,
    ) -> Result<SetupOutcome, AutoTestError> {
        let path = self.tina_directory.join(TEST_DATA_RELATIVE_PATH);
        if !backend.test_data_exists(&path).await? {
            return Ok(SetupOutcome::MissingFile);
        }
        let configurations = self.selected_configurations(mask);
        let first = configurations
            .first()
            .cloned()
            .ok_or(AutoTestError::NoConfigurations)?;
        self.run = Some(AutoTestRun::new(configurations));
        backend.apply_configuration(first).await?;
        let questions = backend
            .load_questions(&path)
            .await
            .map_err(|_| AutoTestError::FailedToLoad(path.clone()))?;
        let run = self.run.as_mut().ok_or(AutoTestError::MissingRunState)?;
        run.questions = questions;
        self.active = true;
        Ok(SetupOutcome::Initialized)
    }

    /// Advances questions and configurations until it dispatches or completes.
    ///
    /// Reimplements Ghidra function `FUN_01a59b20` at `0x01A59B20`.
    /// Questions marked not processed advance synchronously. Other questions
    /// dispatch one asynchronous request and return. Completion persists twice
    /// when the still-open form follows its normal close path.
    ///
    /// # Errors
    ///
    /// Returns missing-state or backend errors without local recovery.
    pub async fn advance(
        &mut self,
        backend: &mut impl AutoTestBackend,
    ) -> Result<ProgressOutcome, AutoTestError> {
        self.record_prior_no_match()?;
        loop {
            let action = self.next_progress_action()?;
            match action {
                ProgressAction::SwitchConfiguration(configuration) => {
                    backend.apply_configuration(configuration).await?;
                }
                ProgressAction::Question {
                    question,
                    configuration,
                    progress,
                } => {
                    backend.update_progress(progress).await?;
                    if let Some(fixture) = fixture_for_comment(&question.comment) {
                        backend.open_fixture(fixture).await?;
                    }
                    self.mark_question_started()?;
                    if question.comment.to_lowercase().contains("not processed") {
                        continue;
                    }
                    backend
                        .dispatch_request(LlmRequest {
                            question: question.question,
                            configuration,
                        })
                        .await?;
                    return Ok(ProgressOutcome::RequestDispatched);
                }
                ProgressAction::Complete(status) => {
                    self.finalize_report(backend).await?;
                    backend.show_completion(status).await?;
                    if self.form_open {
                        self.close_form(backend).await?;
                    }
                    return Ok(ProgressOutcome::Completed(status));
                }
            }
        }
    }

    /// Stores the response comparison result for the next progression call.
    ///
    /// # Errors
    ///
    /// Returns [`AutoTestError::MissingRunState`] before setup.
    pub fn record_response(&mut self, matched: bool) -> Result<(), AutoTestError> {
        let run = self.run.as_mut().ok_or(AutoTestError::MissingRunState)?;
        run.response_matched = matched;
        Ok(())
    }

    #[must_use]
    pub fn report(&self) -> Option<&ReportDocument> {
        self.run.as_ref().map(|run| &run.report)
    }

    fn selected_configurations(&self, mask: ConfigurationMask) -> Vec<TestConfiguration> {
        let mut configurations = Vec::new();
        if mask.contains(1) {
            configurations.push(TestConfiguration {
                label: format!("Local: {}", self.default_tina_model),
                extraction_mode: ExtractionMode::TinaInstructions,
            });
        }
        if mask.contains(2) {
            configurations.push(TestConfiguration {
                label: format!("Local: {}", self.default_meta_model),
                extraction_mode: ExtractionMode::SelectedInstructions,
            });
        }
        if mask.contains(4) {
            configurations.push(TestConfiguration {
                label: "OpenAI: gpt-4o".to_owned(),
                extraction_mode: ExtractionMode::SelectedInstructions,
            });
        }
        if mask.contains(8) {
            configurations.push(TestConfiguration {
                label: format!("Local: {}", self.default_meta_model),
                extraction_mode: ExtractionMode::SimpleInstructions,
            });
        }
        configurations
    }

    fn record_prior_no_match(&mut self) -> Result<(), AutoTestError> {
        let run = self.run.as_mut().ok_or(AutoTestError::MissingRunState)?;
        if run.initial_run || run.response_matched || run.next_question_index == 0 {
            return Ok(());
        }
        let question = &run.questions[run.next_question_index - 1];
        let configuration = &run.configurations[run.configuration_index];
        let duplicate = run.report.entries.iter().any(|entry| {
            matches!(
                entry,
                ReportEntry::Failed {
                    item_id,
                    configuration: failed_configuration,
                    ..
                } if *item_id == question.item_id
                    && failed_configuration == &configuration.label
            )
        });
        if !duplicate {
            run.report.entries.push(ReportEntry::Failed {
                item_id: question.item_id,
                question: question.question.clone(),
                configuration: configuration.label.clone(),
                reason: "Failed (by no match)".to_owned(),
            });
            run.error_count += 1;
        }
        Ok(())
    }

    fn next_progress_action(&mut self) -> Result<ProgressAction, AutoTestError> {
        let run = self.run.as_mut().ok_or(AutoTestError::MissingRunState)?;
        if run.next_question_index >= run.questions.len() {
            if run.configuration_index + 1 >= run.configurations.len() {
                let status = if run.error_count == 0 {
                    CompletionStatus::Completed
                } else {
                    CompletionStatus::CompletedWithErrors
                };
                return Ok(ProgressAction::Complete(status));
            }
            run.configuration_index += 1;
            run.next_question_index = 0;
            run.response_matched = false;
            return Ok(ProgressAction::SwitchConfiguration(
                run.configurations[run.configuration_index].clone(),
            ));
        }
        let question = run.questions[run.next_question_index].clone();
        run.next_question_index += 1;
        let configuration = run.configurations[run.configuration_index].clone();
        Ok(ProgressAction::Question {
            question,
            configuration,
            progress: Progress {
                question: run.next_question_index,
                question_count: run.questions.len(),
                configuration: run.configuration_index + 1,
                configuration_count: run.configurations.len(),
                errors: run.error_count,
            },
        })
    }

    fn mark_question_started(&mut self) -> Result<(), AutoTestError> {
        let run = self.run.as_mut().ok_or(AutoTestError::MissingRunState)?;
        run.initial_run = false;
        run.response_matched = false;
        Ok(())
    }
}

enum ProgressAction {
    SwitchConfiguration(TestConfiguration),
    Question {
        question: TestQuestion,
        configuration: TestConfiguration,
        progress: Progress,
    },
    Complete(CompletionStatus),
}

fn fixture_for_comment(comment: &str) -> Option<FixtureCircuit> {
    let normalized = comment.to_lowercase();
    if normalized.contains("calculate voltage") {
        Some(FixtureCircuit::CalculateVoltage)
    } else if normalized.contains("calculate resistance") {
        Some(FixtureCircuit::CalculateResistance)
    } else if normalized.contains("calculate total resistance") {
        Some(FixtureCircuit::CalculateTotalResistance)
    } else {
        None
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    CaseChanged(usize, bool),
    Start,
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PendingAction {
    Start(ConfigurationMask),
    Cancel,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct AutoTestWindow {
    pub checked_cases: [bool; 4],
    pending_action: Option<PendingAction>,
}

impl AutoTestWindow {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::CaseChanged(index, checked) => {
                if let Some(case) = self.checked_cases.get_mut(index) {
                    *case = checked;
                }
            }
            Message::Start => {
                self.pending_action = Some(PendingAction::Start(ConfigurationMask::from_checked(
                    self.checked_cases,
                )));
            }
            Message::Cancel => self.pending_action = Some(PendingAction::Cancel),
        }
    }

    /// Starts the configurations selected by the four check boxes.
    ///
    /// Reimplements Ghidra function `FUN_019ce470` at `0x019CE470`.
    /// The fixed checkbox order maps to mask bits 0 through 3. Zero is passed
    /// to the coordinator and remains a no-op without feedback.
    ///
    /// # Errors
    ///
    /// Returns uncaught setup, progression, or backend errors.
    pub async fn start_selected_tests(
        &self,
        manager: &mut AutoTestManager,
        backend: &mut impl AutoTestBackend,
    ) -> Result<Option<ProgressOutcome>, AutoTestError> {
        manager
            .coordinate_start(ConfigurationMask::from_checked(self.checked_cases), backend)
            .await
    }

    /// Delegates Cancel to the modeless form-close pipeline.
    ///
    /// Reimplements Ghidra function `FUN_019ce460` at `0x019CE460`.
    /// A rejected close query leaves the report, worker, and form unchanged.
    ///
    /// # Errors
    ///
    /// Returns report or worker-stop errors from the close handler.
    pub async fn cancel_click(
        &self,
        close_query_allowed: bool,
        manager: &mut AutoTestManager,
        backend: &mut impl AutoTestBackend,
    ) -> Result<bool, AutoTestError> {
        if !close_query_allowed {
            return Ok(false);
        }
        manager.close_form(backend).await?;
        Ok(true)
    }

    pub const fn take_pending_action(&mut self) -> Option<PendingAction> {
        self.pending_action.take()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            text(TITLE),
            checkbox("Default TINA model", self.checked_cases[0])
                .on_toggle(|checked| Message::CaseChanged(0, checked)),
            checkbox("Default meta model", self.checked_cases[1])
                .on_toggle(|checked| Message::CaseChanged(1, checked)),
            checkbox("OpenAI: gpt-4o", self.checked_cases[2])
                .on_toggle(|checked| Message::CaseChanged(2, checked)),
            checkbox("Simple extraction", self.checked_cases[3])
                .on_toggle(|checked| Message::CaseChanged(3, checked)),
            row![
                button("Start").on_press(Message::Start),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(8),
        ]
        .spacing(8)
        .width(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use std::future::Future;
    use std::task::{Context, Poll, Waker};

    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Event {
        Exists(PathBuf),
        Load(PathBuf),
        Apply(TestConfiguration),
        Progress(Progress),
        Fixture(FixtureCircuit),
        Request(LlmRequest),
        Persist(PathBuf, ReportDocument),
        Complete(CompletionStatus),
        Stop,
    }

    struct Backend {
        exists: bool,
        load_fails: bool,
        questions: Vec<TestQuestion>,
        events: Vec<Event>,
    }

    impl Default for Backend {
        fn default() -> Self {
            Self {
                exists: true,
                load_fails: false,
                questions: vec![question(1, "First", "")],
                events: Vec::new(),
            }
        }
    }

    impl AutoTestBackend for Backend {
        fn test_data_exists<'a>(
            &'a mut self,
            path: &'a Path,
        ) -> BackendFuture<'a, Result<bool, BackendError>> {
            self.events.push(Event::Exists(path.to_path_buf()));
            let exists = self.exists;
            Box::pin(async move { Ok(exists) })
        }

        fn load_questions<'a>(
            &'a mut self,
            path: &'a Path,
        ) -> BackendFuture<'a, Result<Vec<TestQuestion>, BackendError>> {
            self.events.push(Event::Load(path.to_path_buf()));
            let result = if self.load_fails {
                Err(BackendError("invalid JSON".to_owned()))
            } else {
                Ok(self.questions.clone())
            };
            Box::pin(async move { result })
        }

        fn apply_configuration(
            &mut self,
            configuration: TestConfiguration,
        ) -> BackendFuture<'_, Result<(), BackendError>> {
            self.events.push(Event::Apply(configuration));
            Box::pin(async { Ok(()) })
        }

        fn update_progress(
            &mut self,
            progress: Progress,
        ) -> BackendFuture<'_, Result<(), BackendError>> {
            self.events.push(Event::Progress(progress));
            Box::pin(async { Ok(()) })
        }

        fn open_fixture(
            &mut self,
            fixture: FixtureCircuit,
        ) -> BackendFuture<'_, Result<(), BackendError>> {
            self.events.push(Event::Fixture(fixture));
            Box::pin(async { Ok(()) })
        }

        fn dispatch_request(
            &mut self,
            request: LlmRequest,
        ) -> BackendFuture<'_, Result<(), BackendError>> {
            self.events.push(Event::Request(request));
            Box::pin(async { Ok(()) })
        }

        fn persist_report<'a>(
            &'a mut self,
            path: &'a Path,
            report: ReportDocument,
        ) -> BackendFuture<'a, Result<(), BackendError>> {
            self.events.push(Event::Persist(path.to_path_buf(), report));
            Box::pin(async { Ok(()) })
        }

        fn show_completion(
            &mut self,
            status: CompletionStatus,
        ) -> BackendFuture<'_, Result<(), BackendError>> {
            self.events.push(Event::Complete(status));
            Box::pin(async { Ok(()) })
        }

        fn stop_llm(&mut self) -> BackendFuture<'_, Result<(), BackendError>> {
            self.events.push(Event::Stop);
            Box::pin(async { Ok(()) })
        }
    }

    fn question(item_id: i64, value: &str, comment: &str) -> TestQuestion {
        TestQuestion {
            item_id,
            question: value.to_owned(),
            comment: comment.to_owned(),
            extra: "extra".to_owned(),
        }
    }

    fn manager() -> AutoTestManager {
        AutoTestManager::new(
            PathBuf::from("tina"),
            PathBuf::from("work"),
            "tina-model",
            "meta-model",
        )
    }

    fn block_on<F: Future>(future: F) -> F::Output {
        let mut future = std::pin::pin!(future);
        let mut context = Context::from_waker(Waker::noop());
        loop {
            match future.as_mut().poll(&mut context) {
                Poll::Ready(output) => return output,
                Poll::Pending => std::thread::yield_now(),
            }
        }
    }

    #[test]
    fn iced_start_message_builds_mask_in_fixed_checkbox_order() {
        let mut window = AutoTestWindow {
            checked_cases: [true, false, true, true],
            ..AutoTestWindow::default()
        };
        window.update(Message::Start);
        assert_eq!(
            window.take_pending_action(),
            Some(PendingAction::Start(ConfigurationMask::from_checked([
                true, false, true, true
            ])))
        );
    }

    #[test]
    fn zero_mask_is_noop_without_backend_work() -> Result<(), AutoTestError> {
        let mut manager = manager();
        let mut backend = Backend::default();
        let outcome =
            block_on(manager.coordinate_start(ConfigurationMask::default(), &mut backend))?;
        assert_eq!(outcome, None);
        assert!(backend.events.is_empty());
        Ok(())
    }

    #[test]
    fn setup_keeps_configuration_order_and_dispatches_one_request() -> Result<(), AutoTestError> {
        let mut manager = manager();
        let mut backend = Backend::default();
        let outcome = block_on(manager.coordinate_start(
            ConfigurationMask::from_checked([true, true, true, true]),
            &mut backend,
        ))?;
        assert_eq!(outcome, Some(ProgressOutcome::RequestDispatched));
        assert!(manager.active);
        let applied = backend.events.iter().find_map(|event| match event {
            Event::Apply(configuration) => Some(configuration),
            _ => None,
        });
        assert!(matches!(
            applied,
            Some(TestConfiguration {
                label,
                extraction_mode: ExtractionMode::TinaInstructions,
            }) if label == "Local: tina-model"
        ));
        assert!(matches!(backend.events.last(), Some(Event::Request(_))));
        Ok(())
    }

    #[test]
    fn missing_file_still_reaches_progression_without_new_state() {
        let mut manager = manager();
        let mut backend = Backend {
            exists: false,
            ..Backend::default()
        };
        let outcome = block_on(manager.coordinate_start(
            ConfigurationMask::from_checked([true, false, false, false]),
            &mut backend,
        ));
        assert_eq!(outcome, Err(AutoTestError::MissingRunState));
        assert_eq!(backend.events.len(), 1);
    }

    #[test]
    fn skipped_question_opens_fixture_then_dispatches_next_question() -> Result<(), AutoTestError> {
        let mut manager = manager();
        let mut backend = Backend {
            questions: vec![
                question(1, "Skip", "calculate voltage; not processed"),
                question(2, "Send", ""),
            ],
            ..Backend::default()
        };
        let outcome = block_on(manager.coordinate_start(
            ConfigurationMask::from_checked([true, false, false, false]),
            &mut backend,
        ))?;
        assert_eq!(outcome, Some(ProgressOutcome::RequestDispatched));
        assert!(
            backend
                .events
                .contains(&Event::Fixture(FixtureCircuit::CalculateVoltage))
        );
        assert!(matches!(
            backend.events.last(),
            Some(Event::Request(LlmRequest { question, .. })) if question == "Send"
        ));
        Ok(())
    }

    #[test]
    fn no_match_is_recorded_once_and_completion_persists_twice() -> Result<(), AutoTestError> {
        let mut manager = manager();
        let mut backend = Backend {
            questions: vec![question(7, "Only", "")],
            ..Backend::default()
        };
        block_on(manager.coordinate_start(
            ConfigurationMask::from_checked([true, false, false, false]),
            &mut backend,
        ))?;
        let outcome = block_on(manager.advance(&mut backend))?;
        assert_eq!(
            outcome,
            ProgressOutcome::Completed(CompletionStatus::CompletedWithErrors)
        );
        let report = manager.report().ok_or(AutoTestError::MissingRunState)?;
        assert_eq!(
            report
                .entries
                .iter()
                .filter(|entry| matches!(entry, ReportEntry::Failed { .. }))
                .count(),
            1
        );
        assert_eq!(
            backend
                .events
                .iter()
                .filter(|event| matches!(event, Event::Persist(_, _)))
                .count(),
            2
        );
        assert!(matches!(backend.events.last(), Some(Event::Stop)));
        assert!(manager.form_released);
        Ok(())
    }

    #[test]
    fn matched_response_completes_without_failure() -> Result<(), AutoTestError> {
        let mut manager = manager();
        let mut backend = Backend::default();
        block_on(manager.coordinate_start(
            ConfigurationMask::from_checked([false, true, false, false]),
            &mut backend,
        ))?;
        manager.record_response(true)?;
        assert_eq!(
            block_on(manager.advance(&mut backend))?,
            ProgressOutcome::Completed(CompletionStatus::Completed)
        );
        assert!(manager.report().is_some_and(|report| {
            report
                .entries
                .iter()
                .all(|entry| !matches!(entry, ReportEntry::Failed { .. }))
        }));
        Ok(())
    }

    #[test]
    fn cancel_respects_close_query_and_orders_persist_before_stop() -> Result<(), AutoTestError> {
        let window = AutoTestWindow::default();
        let mut manager = manager();
        let mut backend = Backend::default();
        block_on(manager.setup_selected_configurations(
            ConfigurationMask::from_checked([true, false, false, false]),
            &mut backend,
        ))?;
        let event_count = backend.events.len();
        assert!(!block_on(window.cancel_click(
            false,
            &mut manager,
            &mut backend
        ))?);
        assert_eq!(backend.events.len(), event_count);
        assert!(block_on(window.cancel_click(
            true,
            &mut manager,
            &mut backend
        ))?);
        assert!(matches!(
            backend.events.get(event_count),
            Some(Event::Persist(_, _))
        ));
        assert!(matches!(backend.events.last(), Some(Event::Stop)));
        assert!(!manager.active);
        assert!(manager.form_released);
        Ok(())
    }
}
