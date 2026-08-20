use std::sync::Arc;
use std::sync::atomic::{AtomicBool, Ordering};

use iced::Task;
use tiara_core::curve_import::{
    CurveImport, CurveImportError, CurveImportErrorKind, CurveImportObserver, CurveImportOutcome,
    is_supported_curve_import_format,
};

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum ImportStatus {
    #[default]
    Idle,
    Running,
    Completed,
    Cancelled,
    Failed,
    Unsupported,
}

#[derive(Debug, Clone, PartialEq)]
pub enum Message {
    ImportStarted(u8),
    ProgressChanged(u8),
    CancelPressed,
    ImportFinished(Result<CurveImportOutcome, CurveImportError>),
}

#[derive(Debug)]
pub struct State {
    imported_result: Option<CurveImport>,
    progress: u8,
    cancellation: Arc<AtomicBool>,
    status: ImportStatus,
    last_error: Option<CurveImportErrorKind>,
}

pub struct Observer<F> {
    cancellation: Arc<AtomicBool>,
    publish: F,
}

impl<F> CurveImportObserver for Observer<F>
where
    F: FnMut(Message),
{
    fn is_cancelled(&self) -> bool {
        self.cancellation.load(Ordering::Acquire)
    }

    fn report_progress(&mut self, percentage: u8) {
        (self.publish)(Message::ProgressChanged(percentage));
    }
}

impl Default for State {
    fn default() -> Self {
        Self {
            imported_result: None,
            progress: 0,
            cancellation: Arc::new(AtomicBool::new(false)),
            status: ImportStatus::Idle,
            last_error: None,
        }
    }
}

impl State {
    /// Applies import lifecycle messages without a live window.
    ///
    /// A supported parser start replaces the prior imported result. An
    /// unsupported code keeps it. Cancellation clears the replacement, while
    /// a conversion error keeps its partial result at the UI error boundary.
    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::ImportStarted(format_code) => {
                if is_supported_curve_import_format(format_code) {
                    self.imported_result = None;
                    self.progress = 0;
                    self.cancellation.store(false, Ordering::Release);
                    self.status = ImportStatus::Running;
                    self.last_error = None;
                } else {
                    self.status = ImportStatus::Unsupported;
                }
            }
            Message::ProgressChanged(progress) => self.progress = progress.min(100),
            Message::CancelPressed if self.status == ImportStatus::Running => {
                self.cancellation.store(true, Ordering::Release);
            }
            Message::CancelPressed => {}
            Message::ImportFinished(Ok(CurveImportOutcome::Imported(result))) => {
                self.imported_result = Some(result);
                self.progress = 100;
                self.status = ImportStatus::Completed;
            }
            Message::ImportFinished(Ok(CurveImportOutcome::Cancelled)) => {
                self.imported_result = None;
                self.status = ImportStatus::Cancelled;
            }
            Message::ImportFinished(Ok(CurveImportOutcome::UnsupportedFormat(_))) => {
                self.status = ImportStatus::Unsupported;
            }
            Message::ImportFinished(Err(error)) => {
                self.last_error = Some(error.kind);
                self.imported_result = Some(*error.partial);
                self.status = ImportStatus::Failed;
            }
        }

        Task::none()
    }

    #[must_use]
    pub const fn imported_result(&self) -> Option<&CurveImport> {
        self.imported_result.as_ref()
    }

    #[must_use]
    pub const fn progress(&self) -> u8 {
        self.progress
    }

    #[must_use]
    pub const fn status(&self) -> ImportStatus {
        self.status
    }

    #[must_use]
    pub const fn last_error(&self) -> Option<&CurveImportErrorKind> {
        self.last_error.as_ref()
    }

    #[must_use]
    pub fn cancellation_flag(&self) -> Arc<AtomicBool> {
        Arc::clone(&self.cancellation)
    }

    #[must_use]
    pub fn observer(&self, publish: impl FnMut(Message)) -> Observer<impl FnMut(Message)> {
        Observer {
            cancellation: self.cancellation_flag(),
            publish,
        }
    }
}

#[cfg(test)]
mod tests {
    use tiara_core::curve_import::{
        CurveDomain, CurveImportData, CurveImportDestination, CurveImportError,
        CurveImportErrorKind,
    };

    use super::*;

    #[test]
    fn supported_start_replaces_old_result_and_cancel_sets_shared_flag() {
        let mut state = state_with_result();

        drop(state.update(Message::ImportStarted(1)));
        drop(state.update(Message::CancelPressed));

        assert!(state.imported_result().is_none());
        assert!(state.cancellation_flag().load(Ordering::Acquire));
        assert_eq!(state.status(), ImportStatus::Running);
    }

    #[test]
    fn unsupported_dispatch_keeps_previous_result() {
        let mut state = state_with_result();

        drop(state.update(Message::ImportStarted(0)));
        drop(state.update(Message::ImportFinished(Ok(
            CurveImportOutcome::UnsupportedFormat(0),
        ))));

        assert!(state.imported_result().is_some());
        assert_eq!(state.status(), ImportStatus::Unsupported);
    }

    #[test]
    fn cancellation_clears_new_result_and_failure_keeps_partial_data() {
        let mut state = state_with_result();
        let partial = example_result();

        drop(state.update(Message::ImportStarted(1)));
        drop(state.update(Message::ImportFinished(Ok(CurveImportOutcome::Cancelled))));
        assert!(state.imported_result().is_none());
        assert_eq!(state.status(), ImportStatus::Cancelled);

        drop(state.update(Message::ImportStarted(1)));
        drop(state.update(Message::ImportFinished(Err(CurveImportError {
            kind: CurveImportErrorKind::InvalidNumber {
                row_index: 2,
                field_index: 1,
                value: "bad".to_owned(),
            },
            partial: Box::new(partial.clone()),
        }))));

        assert_eq!(state.imported_result(), Some(&partial));
        assert_eq!(state.status(), ImportStatus::Failed);
        assert!(matches!(
            state.last_error(),
            Some(CurveImportErrorKind::InvalidNumber { row_index: 2, .. })
        ));
    }

    #[test]
    fn observer_forwards_progress_and_reads_the_ui_cancellation_flag() {
        let mut state = State::default();
        drop(state.update(Message::ImportStarted(1)));
        let mut messages = Vec::new();

        {
            let mut observer = state.observer(|message| messages.push(message));
            observer.report_progress(35);
            assert!(!observer.is_cancelled());
        }

        drop(state.update(Message::CancelPressed));
        let observer = state.observer(|_| {});
        assert!(observer.is_cancelled());
        assert_eq!(messages, vec![Message::ProgressChanged(35)]);
    }

    fn state_with_result() -> State {
        State {
            imported_result: Some(example_result()),
            ..State::default()
        }
    }

    fn example_result() -> CurveImport {
        CurveImport {
            format_code: 1,
            data: CurveImportData::TimeSeries {
                independent_values: vec![0.0],
                curves: Vec::new(),
            },
            destination: CurveImportDestination::NewDiagram(CurveDomain::Time),
        }
    }
}
