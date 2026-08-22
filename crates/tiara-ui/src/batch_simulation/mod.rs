use std::array;
use std::fmt;

use iced::widget::{button, checkbox, column, container, row, text, text_input};
use iced::{Element, Length};

pub const TITLE: &str = "Batch simulation";
pub const FORM_RESOURCE: &str = "BatchSimulationDlg";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AnalysisKind {
    Transient,
    AcTransfer,
    DcTransfer,
    Noise,
}

impl AnalysisKind {
    pub const ALL: [Self; 4] = [
        Self::Transient,
        Self::AcTransfer,
        Self::DcTransfer,
        Self::Noise,
    ];

    #[must_use]
    pub const fn index(self) -> usize {
        match self {
            Self::Transient => 0,
            Self::AcTransfer => 1,
            Self::DcTransfer => 2,
            Self::Noise => 3,
        }
    }

    #[must_use]
    pub const fn caption(self) -> &'static str {
        match self {
            Self::Transient => "Transient",
            Self::AcTransfer => "AC Transfer",
            Self::DcTransfer => "DC Transfer",
            Self::Noise => "Noise",
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct AcCoreSettings {
    pub start_frequency: String,
    pub end_frequency: String,
    pub points: u16,
    pub logarithmic: bool,
    pub diagram_flags: u16,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct BatchIncludeFlags([bool; 4]);

impl BatchIncludeFlags {
    #[must_use]
    pub const fn contains(&self, kind: AnalysisKind) -> bool {
        self.0[kind.index()]
    }

    pub const fn set(&mut self, kind: AnalysisKind, included: bool) {
        self.0[kind.index()] = included;
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BatchSettings {
    frame_values: [String; 4],
    ac_core: AcCoreSettings,
    include: BatchIncludeFlags,
}

impl Default for BatchSettings {
    fn default() -> Self {
        Self {
            frame_values: array::from_fn(|_| String::new()),
            ac_core: AcCoreSettings::default(),
            include: BatchIncludeFlags::default(),
        }
    }
}

impl BatchSettings {
    #[must_use]
    pub fn frame_value(&self, kind: AnalysisKind) -> &str {
        &self.frame_values[kind.index()]
    }

    #[must_use]
    pub const fn ac_core(&self) -> &AcCoreSettings {
        &self.ac_core
    }

    #[must_use]
    pub const fn include(&self) -> &BatchIncludeFlags {
        &self.include
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub enum FrameValidation {
    #[default]
    Valid,
    CrossField(String),
    Parser(String),
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct FrameDraft {
    value: String,
    ac_core: Option<AcCoreSettings>,
    validation: FrameValidation,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct FirstErrorLatch {
    message: Option<String>,
}

impl FirstErrorLatch {
    /// Implements Ghidra function `FUN_01b1cf30` at `0x01B1CF30`.
    ///
    /// Stores and presents only the first validation error until the latch is reset.
    pub fn report_first(&mut self, message: impl Into<String>) -> Option<&str> {
        if self.message.is_none() {
            self.message = Some(message.into());
            return self.message.as_deref();
        }
        None
    }

    #[must_use]
    pub const fn is_set(&self) -> bool {
        self.message.is_some()
    }

    pub fn clear(&mut self) {
        self.message = None;
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct BatchCollectionError {
    pub frame: AnalysisKind,
    pub message: String,
}

impl fmt::Display for BatchCollectionError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(formatter, "{}: {}", self.frame.caption(), self.message)
    }
}

impl std::error::Error for BatchCollectionError {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    IncludeChanged(AnalysisKind, bool),
    FrameValueChanged(AnalysisKind, String),
    Accept,
    Cancel,
}

#[derive(Debug, Clone)]
pub struct Window {
    drafts: [FrameDraft; 4],
    include: BatchIncludeFlags,
    settings: BatchSettings,
    errors: [FirstErrorLatch; 4],
    displayed_errors: Vec<(AnalysisKind, String)>,
    parser_error: Option<BatchCollectionError>,
    modal_result: Option<u8>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            drafts: array::from_fn(|_| FrameDraft::default()),
            include: BatchIncludeFlags::default(),
            settings: BatchSettings::default(),
            errors: array::from_fn(|_| FirstErrorLatch::default()),
            displayed_errors: Vec::new(),
            parser_error: None,
            modal_result: None,
        }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::IncludeChanged(kind, included) => self.include.set(kind, included),
            Message::FrameValueChanged(kind, value) => {
                self.drafts[kind.index()].value = value;
            }
            Message::Accept => self.attempt_accept(),
            Message::Cancel => self.modal_result = Some(2),
        }
    }

    pub fn set_frame_validation(&mut self, kind: AnalysisKind, validation: FrameValidation) {
        self.drafts[kind.index()].validation = validation;
    }

    pub fn set_ac_core_draft(&mut self, settings: AcCoreSettings) {
        self.drafts[AnalysisKind::AcTransfer.index()].ac_core = Some(settings);
    }

    /// Implements Ghidra function `FUN_01c49890` at `0x01C49890`.
    ///
    /// Collects all four frames in fixed order without using the include flags as guards.
    /// Valid frames commit independently. Include flags commit after all collectors return.
    ///
    /// # Errors
    ///
    /// Returns the first parser error. Earlier frame commits remain, and later frames and
    /// include flags are not processed.
    pub fn validate_and_commit(&mut self) -> Result<(), BatchCollectionError> {
        for kind in AnalysisKind::ALL {
            let index = kind.index();
            match self.drafts[index].validation.clone() {
                FrameValidation::Valid => {
                    self.settings.frame_values[index].clone_from(&self.drafts[index].value);
                    if kind == AnalysisKind::AcTransfer
                        && let Some(ac_core) = &self.drafts[index].ac_core
                    {
                        self.settings.ac_core.clone_from(ac_core);
                    }
                }
                FrameValidation::CrossField(message) => {
                    let presented = self.errors[index].report_first(message).map(str::to_owned);
                    if let Some(message) = presented {
                        self.displayed_errors.push((kind, message));
                    }
                }
                FrameValidation::Parser(message) => {
                    return Err(BatchCollectionError {
                        frame: kind,
                        message,
                    });
                }
            }
        }
        self.settings.include.clone_from(&self.include);
        Ok(())
    }

    /// Implements Ghidra function `FUN_01c496b0` at `0x01C496B0`.
    ///
    /// Allows closing only when every frame error latch is clear, then resets all latches.
    #[must_use]
    pub fn query_close(&mut self) -> bool {
        let can_close = self.errors.iter().all(|error| !error.is_set());
        for error in &mut self.errors {
            error.clear();
        }
        can_close
    }

    fn attempt_accept(&mut self) {
        self.parser_error = None;
        match self.validate_and_commit() {
            Ok(()) => {
                if self.query_close() {
                    self.modal_result = Some(1);
                }
            }
            Err(error) => self.parser_error = Some(error),
        }
    }

    #[must_use]
    pub const fn settings(&self) -> &BatchSettings {
        &self.settings
    }

    #[must_use]
    pub const fn modal_result(&self) -> Option<u8> {
        self.modal_result
    }

    #[must_use]
    pub const fn parser_error(&self) -> Option<&BatchCollectionError> {
        self.parser_error.as_ref()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let frames = AnalysisKind::ALL
            .into_iter()
            .map(|kind| frame_controls(kind, &self.drafts[kind.index()], &self.include));
        let error_text = self
            .parser_error
            .as_ref()
            .map_or_else(String::new, ToString::to_string);
        container(
            column(frames)
                .push(row![
                    button("OK").on_press(Message::Accept),
                    button("Cancel").on_press(Message::Cancel),
                ])
                .push(text(error_text))
                .spacing(10),
        )
        .padding(16)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }
}

fn frame_controls<'a>(
    kind: AnalysisKind,
    draft: &'a FrameDraft,
    include: &BatchIncludeFlags,
) -> Element<'a, Message> {
    column![
        text(kind.caption()).size(18),
        text_input("Frame settings", &draft.value)
            .on_input(move |value| Message::FrameValueChanged(kind, value)),
        checkbox(
            format!("Add {} analysis to batch", kind.caption()),
            include.contains(kind)
        )
        .on_toggle(move |included| Message::IncludeChanged(kind, included)),
    ]
    .spacing(4)
    .into()
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PreflightOutcome {
    Ready,
    Skip,
}

pub trait BatchAnalysisRunner {
    fn preflight(&mut self, kind: AnalysisKind) -> PreflightOutcome;
    fn run(&mut self, kind: AnalysisKind);
}

/// Implements Ghidra function `FUN_01c92e80` at `0x01C92E80`.
///
/// Dispatches enabled analyses in fixed order. A skipped preflight does not stop later work.
pub fn dispatch_enabled_analyses(settings: &BatchSettings, runner: &mut impl BatchAnalysisRunner) {
    for kind in AnalysisKind::ALL {
        if settings.include.contains(kind) && runner.preflight(kind) == PreflightOutcome::Ready {
            runner.run(kind);
        }
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct DialogLauncher {
    generation: u64,
    open: bool,
    destroyed_count: u64,
}

impl DialogLauncher {
    pub const fn open_dialog(&mut self) {
        self.generation = self.generation.saturating_add(1);
        self.open = true;
    }

    /// Implements Ghidra function `FUN_01c93120` at `0x01C93120`.
    ///
    /// Destroys the modal dialog before dispatching an accepted batch.
    pub fn finish_modal_dialog(
        &mut self,
        modal_result: u8,
        settings: &BatchSettings,
        runner: &mut impl BatchAnalysisRunner,
    ) {
        self.open = false;
        self.destroyed_count = self.destroyed_count.saturating_add(1);
        if modal_result == 1 {
            dispatch_enabled_analyses(settings, runner);
        }
    }

    #[must_use]
    pub const fn is_open(&self) -> bool {
        self.open
    }

    #[must_use]
    pub const fn generation(&self) -> u64 {
        self.generation
    }

    #[must_use]
    pub const fn destroyed_count(&self) -> u64 {
        self.destroyed_count
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum RunnerEvent {
        Preflight(AnalysisKind),
        Run(AnalysisKind),
    }

    #[derive(Default)]
    struct Runner {
        skip: Option<AnalysisKind>,
        events: Vec<RunnerEvent>,
    }

    impl BatchAnalysisRunner for Runner {
        fn preflight(&mut self, kind: AnalysisKind) -> PreflightOutcome {
            self.events.push(RunnerEvent::Preflight(kind));
            if self.skip == Some(kind) {
                PreflightOutcome::Skip
            } else {
                PreflightOutcome::Ready
            }
        }

        fn run(&mut self, kind: AnalysisKind) {
            self.events.push(RunnerEvent::Run(kind));
        }
    }

    #[test]
    fn first_error_latch_reports_once_until_cleared() {
        let mut latch = FirstErrorLatch::default();
        assert_eq!(latch.report_first("first"), Some("first"));
        assert_eq!(latch.report_first("second"), None);
        latch.clear();
        assert_eq!(latch.report_first("retry"), Some("retry"));
    }

    #[test]
    fn validation_ignores_include_flags_and_commits_valid_frames_independently() {
        let mut window = Window::default();
        for kind in AnalysisKind::ALL {
            window.update(Message::FrameValueChanged(kind, kind.caption().to_owned()));
        }
        window.set_frame_validation(
            AnalysisKind::AcTransfer,
            FrameValidation::CrossField("invalid AC range".to_owned()),
        );
        window.update(Message::IncludeChanged(AnalysisKind::Noise, true));

        assert_eq!(window.validate_and_commit(), Ok(()));

        assert_eq!(
            window.settings().frame_value(AnalysisKind::Transient),
            "Transient"
        );
        assert_eq!(window.settings().frame_value(AnalysisKind::AcTransfer), "");
        assert_eq!(
            window.settings().frame_value(AnalysisKind::DcTransfer),
            "DC Transfer"
        );
        assert_eq!(window.settings().frame_value(AnalysisKind::Noise), "Noise");
        assert!(window.settings().include().contains(AnalysisKind::Noise));
    }

    #[test]
    fn parser_error_stops_later_collection_and_include_commit() {
        let mut window = Window::default();
        window.update(Message::FrameValueChanged(
            AnalysisKind::Transient,
            "transient".to_owned(),
        ));
        window.set_frame_validation(
            AnalysisKind::AcTransfer,
            FrameValidation::Parser("not a number".to_owned()),
        );
        window.update(Message::FrameValueChanged(
            AnalysisKind::DcTransfer,
            "dc".to_owned(),
        ));
        window.update(Message::IncludeChanged(AnalysisKind::Noise, true));

        assert!(window.validate_and_commit().is_err());
        assert_eq!(
            window.settings().frame_value(AnalysisKind::Transient),
            "transient"
        );
        assert_eq!(window.settings().frame_value(AnalysisKind::DcTransfer), "");
        assert!(!window.settings().include().contains(AnalysisKind::Noise));
    }

    #[test]
    fn close_query_vetoes_any_error_and_resets_all_latches() {
        let mut window = Window::default();
        window.set_frame_validation(
            AnalysisKind::Transient,
            FrameValidation::CrossField("range".to_owned()),
        );
        assert_eq!(window.validate_and_commit(), Ok(()));
        assert!(!window.query_close());
        assert!(window.query_close());
    }

    #[test]
    fn dispatcher_uses_fixed_order_and_continues_after_skip() {
        let mut settings = BatchSettings::default();
        for kind in AnalysisKind::ALL {
            settings.include.set(kind, true);
        }
        let mut runner = Runner {
            skip: Some(AnalysisKind::AcTransfer),
            ..Runner::default()
        };

        dispatch_enabled_analyses(&settings, &mut runner);

        assert_eq!(
            runner.events,
            vec![
                RunnerEvent::Preflight(AnalysisKind::Transient),
                RunnerEvent::Run(AnalysisKind::Transient),
                RunnerEvent::Preflight(AnalysisKind::AcTransfer),
                RunnerEvent::Preflight(AnalysisKind::DcTransfer),
                RunnerEvent::Run(AnalysisKind::DcTransfer),
                RunnerEvent::Preflight(AnalysisKind::Noise),
                RunnerEvent::Run(AnalysisKind::Noise),
            ]
        );
    }

    #[test]
    fn launcher_destroys_each_dialog_and_dispatches_only_result_one() {
        let mut settings = BatchSettings::default();
        settings.include.set(AnalysisKind::Transient, true);
        let mut launcher = DialogLauncher::default();
        let mut runner = Runner::default();

        launcher.open_dialog();
        launcher.finish_modal_dialog(2, &settings, &mut runner);
        assert!(!launcher.is_open());
        assert!(runner.events.is_empty());

        launcher.open_dialog();
        launcher.finish_modal_dialog(1, &settings, &mut runner);
        assert_eq!(launcher.generation(), 2);
        assert_eq!(launcher.destroyed_count(), 2);
        assert_eq!(
            runner.events,
            vec![
                RunnerEvent::Preflight(AnalysisKind::Transient),
                RunnerEvent::Run(AnalysisKind::Transient),
            ]
        );
    }

    #[test]
    fn iced_accept_message_validates_without_a_live_window() {
        let mut window = Window::default();
        window.update(Message::IncludeChanged(AnalysisKind::Transient, true));
        window.update(Message::Accept);

        assert_eq!(window.modal_result(), Some(1));
        assert!(
            window
                .settings()
                .include()
                .contains(AnalysisKind::Transient)
        );
    }
}
