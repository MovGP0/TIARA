use std::collections::VecDeque;

use iced::widget::{button, column, row, text, text_input};
use iced::{Element, Length};
use serde::Deserialize;
use serde_json::Value;

use super::{BackendError, BackendFuture};

pub const TITLE: &str = "Ollama Download";
pub const FORM_RESOURCE: &str = "OllamaDownload";
pub const LIBRARY_EVALUATION: &str = "iced supplies the download-window messages and widgets. serde_json supplies maintained result-file decoding. Rust Vec, VecDeque, Option, String, booleans, and typed effects replace the Delphi selector items, memo lines, owned queue, current-item pointer, activity flags, and host calls, so no additional collection or lifecycle crate is required.";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseAction {
    None,
    Hide,
    Free,
    Minimize,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SelectorState {
    pub visible: bool,
    pub enabled: bool,
}

impl Default for SelectorState {
    fn default() -> Self {
        Self {
            visible: true,
            enabled: true,
        }
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct DownloadActivity {
    pub timer_enabled: bool,
    pub downloader_running: bool,
    pub queue_dispatch_in_progress: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum TimerEffect {
    StartDownload(String),
    StopDownloader,
    UpdateModelList(Value),
    ShowError(Value),
    YieldToUi,
}

#[derive(Debug, Default, Deserialize)]
struct DownloadReport {
    percent: Option<i32>,
    total: Option<u64>,
    completed: Option<u64>,
    error: Option<Value>,
    model_list: Option<Value>,
    digest: Option<String>,
    finished: Option<i32>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ModelDescriptor {
    pub model: String,
}

pub trait OllamaDownloadBackend: Send {
    fn stop_downloader(&mut self) -> BackendFuture<'_, Result<(), BackendError>>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum StartOutcome {
    Queued(usize),
    QueueAlreadyActive,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    ComboModelChanged(String),
    Start,
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PendingAction {
    Start,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct OllamaDownloadWindow {
    pub mode: u32,
    pub embeddings_model: String,
    pub tina_model: String,
    pub supplied_model: String,
    pub combo_model: String,
    pub available_models: Vec<String>,
    pub selector: SelectorState,
    pub memo_lines: Vec<String>,
    pub progress_percent: i32,
    pub queue: VecDeque<ModelDescriptor>,
    pub current_model: Option<ModelDescriptor>,
    pub activity: DownloadActivity,
    pending_action: Option<PendingAction>,
}

impl OllamaDownloadWindow {
    #[must_use]
    pub fn new(
        mode: u32,
        embeddings_model: impl Into<String>,
        tina_model: impl Into<String>,
        supplied_model: impl Into<String>,
    ) -> Self {
        let mut window = Self {
            mode,
            embeddings_model: embeddings_model.into(),
            tina_model: tina_model.into(),
            supplied_model: supplied_model.into(),
            combo_model: String::new(),
            available_models: Vec::new(),
            selector: SelectorState::default(),
            memo_lines: Vec::new(),
            progress_percent: 0,
            queue: VecDeque::new(),
            current_model: None,
            activity: DownloadActivity::default(),
            pending_action: None,
        };
        window.form_create();
        window
    }

    /// Implements Ghidra function `FUN_01a2f5a0` at `0x01A2F5A0`.
    ///
    /// Form creation owns a fresh empty model queue and clears the current
    /// model, downloader-running flag, and queue-dispatch flag. Rust ownership
    /// replaces the recovered manual allocation and null pointer fields.
    pub fn form_create(&mut self) {
        self.queue.clear();
        self.current_model = None;
        self.activity.downloader_running = false;
        self.activity.queue_dispatch_in_progress = false;
    }

    /// Implements Ghidra function `FUN_01a2f5e0` at `0x01A2F5E0`.
    ///
    /// Closing the form always selects the owned-window release action. Rust
    /// then releases the window state through normal ownership.
    pub const fn form_close(&self, action: &mut CloseAction) {
        *action = CloseAction::Free;
    }

    /// Implements Ghidra function `FUN_01a2f5f0` at `0x01A2F5F0`.
    ///
    /// Destruction releases the owned queue and current model before it
    /// disables timer polling and stops an active downloader. Rust ownership
    /// replaces the recovered explicit object destruction.
    ///
    /// # Errors
    ///
    /// Returns the downloader stop error after the owned model state and timer
    /// have already been cleared.
    pub async fn form_destroy(
        &mut self,
        backend: &mut impl OllamaDownloadBackend,
    ) -> Result<(), BackendError> {
        self.queue.clear();
        self.current_model = None;
        self.cancel_bound_event(backend).await
    }

    /// Implements Ghidra function `FUN_01a2f620` at `0x01A2F620`.
    ///
    /// Exact mode 4 copies the current host model names and selects the first
    /// item. Other modes hide and disable the selector. Missing-model messages
    /// are appended in recovered bit order without clearing existing output.
    pub fn form_show(&mut self, installed_models: &[String]) {
        if self.mode == 4 {
            self.available_models.clear();
            self.available_models.extend_from_slice(installed_models);
            self.combo_model = self.available_models.first().cloned().unwrap_or_default();
        } else {
            self.selector.visible = false;
            self.selector.enabled = false;
        }

        if self.mode & 1 != 0 {
            self.memo_lines.push("No model found!".to_owned());
        }
        if self.mode & 2 != 0 {
            self.memo_lines
                .push("No embeddings model found!".to_owned());
        }
        if self.mode & 8 != 0 {
            self.memo_lines
                .push("Tina LLM model not found. Press Start to download the model...!".to_owned());
        }
        if self.mode & 0x10 != 0 {
            self.memo_lines.push(format!(
                "Model {} not found. Press Start to download the model...!",
                self.supplied_model
            ));
        }
    }

    /// Implements Ghidra function `FUN_01a2f9f0` at `0x01A2F9F0`.
    ///
    /// An idle tick disables polling or starts the first queued model. A
    /// running tick decodes the optional downloader result, updates progress
    /// and memo state, reports model-list and error effects, and stops the
    /// downloader after a positive finished value. Invalid or absent JSON is
    /// a no-op while the downloader remains active.
    pub fn timer_tick(&mut self, result_json: Option<&str>) -> Vec<TimerEffect> {
        if self.activity.queue_dispatch_in_progress {
            return vec![TimerEffect::YieldToUi];
        }

        if !self.activity.downloader_running {
            let Some(model) = self.queue.pop_front() else {
                self.activity.timer_enabled = false;
                return Vec::new();
            };

            self.activity.queue_dispatch_in_progress = true;
            self.memo_lines
                .push(format!("Downloading model: '{}' ... ", model.model));
            self.current_model = Some(model);
            self.activity.downloader_running = true;
            let target = self
                .current_model
                .as_ref()
                .map(|item| item.model.clone())
                .unwrap_or_default();
            self.activity.queue_dispatch_in_progress = false;
            return vec![TimerEffect::StartDownload(target)];
        }

        let Some(report) = result_json.and_then(|json| serde_json::from_str(json).ok()) else {
            return Vec::new();
        };
        self.apply_download_report(report)
    }

    fn apply_download_report(&mut self, report: DownloadReport) -> Vec<TimerEffect> {
        let mut effects = Vec::new();
        let finished = report.finished.unwrap_or_default();

        if let Some(percent) = report.percent {
            self.progress_percent = if finished == 0 && percent == 100 {
                99
            } else {
                percent
            };
        }
        if let Some(error) = report.error {
            self.activity.timer_enabled = false;
            self.memo_lines.push("Error occured".to_owned());
            self.queue.clear();
            effects.push(TimerEffect::ShowError(error));
        }
        if let Some(model_list) = report.model_list {
            effects.push(TimerEffect::UpdateModelList(model_list));
        }

        let digest = report
            .digest
            .as_deref()
            .map(last_three_characters)
            .unwrap_or_default();
        if finished == 2 {
            let model = self.current_model_name();
            self.memo_lines
                .push(format!("Model {model} already downloaded"));
        } else if let (Some(completed), Some(total)) = (report.completed, report.total) {
            self.update_progress_line(completed, total, finished, &digest);
        }

        if finished > 0 {
            self.activity.downloader_running = false;
            effects.push(TimerEffect::StopDownloader);
        }
        effects
    }

    fn update_progress_line(&mut self, completed: u64, total: u64, finished: i32, digest: &str) {
        let model = self.current_model_name().to_owned();
        let line = if completed < total {
            Some(format!(
                "Downloading model:  '{model}'  sha256:...{digest} [{completed} / {total}]"
            ))
        } else if finished == 1 {
            self.progress_percent = 100;
            Some(format!(
                "Downloading model:  '{model}'  sha256:...{digest}  completed"
            ))
        } else {
            None
        };
        if let Some(line) = line {
            if let Some(last) = self.memo_lines.last_mut() {
                *last = line;
            }
        }
    }

    fn current_model_name(&self) -> &str {
        self.current_model
            .as_ref()
            .map(|item| item.model.as_str())
            .unwrap_or_default()
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::ComboModelChanged(model) => self.combo_model = model,
            Message::Start => self.pending_action = Some(PendingAction::Start),
            Message::Cancel => self.pending_action = Some(PendingAction::Cancel),
        }
    }

    /// Queues mode-selected models and enables timer-driven processing.
    ///
    /// Reimplements Ghidra function `FUN_01a30670` at `0x01A30670`.
    /// A nonempty queue is a complete no-op. An empty queue enables the timer
    /// even if the mode adds no model. Exact mode 4 queues combo text unchanged.
    pub fn start_click(&mut self) -> StartOutcome {
        if !self.queue.is_empty() {
            return StartOutcome::QueueAlreadyActive;
        }
        if self.mode & 2 != 0 {
            self.queue.push_back(ModelDescriptor {
                model: self.embeddings_model.clone(),
            });
        }
        if self.mode & 8 != 0 {
            self.queue.push_back(ModelDescriptor {
                model: self.tina_model.clone(),
            });
        }
        if self.mode & 0x10 != 0 {
            self.queue.push_back(ModelDescriptor {
                model: self.supplied_model.clone(),
            });
        }
        if self.mode == 4 {
            self.queue.push_back(ModelDescriptor {
                model: self.combo_model.clone(),
            });
        }
        self.activity.timer_enabled = true;
        StartOutcome::Queued(self.queue.len())
    }

    /// Disables timer polling and stops an active downloader.
    ///
    /// Reimplements Ghidra function `FUN_01a2f9c0` at `0x01A2F9C0`.
    /// This bound-event fallback does not close the form or clear its queue.
    /// The running flag is cleared only after the stop adapter returns.
    ///
    /// # Errors
    ///
    /// Returns a process-stop error and retains the running flag on failure.
    pub async fn cancel_bound_event(
        &mut self,
        backend: &mut impl OllamaDownloadBackend,
    ) -> Result<(), BackendError> {
        self.activity.timer_enabled = false;
        if self.activity.downloader_running {
            backend.stop_downloader().await?;
            self.activity.downloader_running = false;
        }
        Ok(())
    }

    pub const fn take_pending_action(&mut self) -> Option<PendingAction> {
        self.pending_action.take()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            text(TITLE),
            text_input("Model", &self.combo_model).on_input(Message::ComboModelChanged),
            text(format!("{} queued model(s)", self.queue.len())),
            row![
                button("Start...").on_press(Message::Start),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(8),
        ]
        .spacing(8)
        .width(Length::Fill)
        .into()
    }
}

fn last_three_characters(value: &str) -> String {
    let mut characters = value.chars().rev().take(3).collect::<Vec<_>>();
    characters.reverse();
    characters.into_iter().collect()
}

#[cfg(test)]
mod tests {
    use std::future::Future;
    use std::task::{Context, Poll, Waker};

    use super::*;

    #[derive(Default)]
    struct Backend {
        stop_count: usize,
        fail: bool,
    }

    impl OllamaDownloadBackend for Backend {
        fn stop_downloader(&mut self) -> BackendFuture<'_, Result<(), BackendError>> {
            self.stop_count += 1;
            let result = if self.fail {
                Err(BackendError("stop failed".to_owned()))
            } else {
                Ok(())
            };
            Box::pin(async move { result })
        }
    }

    fn window(mode: u32) -> OllamaDownloadWindow {
        OllamaDownloadWindow::new(mode, "embed", "tina", "supplied")
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
    fn start_queues_bit_selected_models_in_source_order() {
        let mut window = window(2 | 8 | 0x10);
        assert_eq!(window.start_click(), StartOutcome::Queued(3));
        assert!(window.activity.timer_enabled);
        assert_eq!(
            window
                .queue
                .iter()
                .map(|descriptor| descriptor.model.as_str())
                .collect::<Vec<_>>(),
            vec!["embed", "tina", "supplied"]
        );
    }

    #[test]
    fn form_create_resets_the_owned_queue_and_download_activity_state() {
        let mut window = window(2);
        window.queue.push_back(ModelDescriptor {
            model: "queued".to_owned(),
        });
        window.current_model = Some(ModelDescriptor {
            model: "current".to_owned(),
        });
        window.activity.downloader_running = true;
        window.activity.queue_dispatch_in_progress = true;
        window.activity.timer_enabled = true;

        window.form_create();

        assert!(window.queue.is_empty());
        assert_eq!(window.current_model, None);
        assert!(!window.activity.downloader_running);
        assert!(!window.activity.queue_dispatch_in_progress);
        assert!(window.activity.timer_enabled);
    }

    #[test]
    fn form_close_always_selects_the_free_action() {
        let window = window(2);

        for mut action in [
            CloseAction::None,
            CloseAction::Hide,
            CloseAction::Free,
            CloseAction::Minimize,
        ] {
            window.form_close(&mut action);
            assert_eq!(action, CloseAction::Free);
        }
    }

    #[test]
    fn form_destroy_releases_models_and_stops_an_active_downloader() {
        let mut window = window(2);
        window.queue.push_back(ModelDescriptor {
            model: "queued".to_owned(),
        });
        window.current_model = Some(ModelDescriptor {
            model: "current".to_owned(),
        });
        window.activity.timer_enabled = true;
        window.activity.downloader_running = true;
        let mut backend = Backend::default();

        assert_eq!(block_on(window.form_destroy(&mut backend)), Ok(()));

        assert!(window.queue.is_empty());
        assert_eq!(window.current_model, None);
        assert!(!window.activity.timer_enabled);
        assert!(!window.activity.downloader_running);
        assert_eq!(backend.stop_count, 1);
    }

    #[test]
    fn form_destroy_keeps_completed_cleanup_when_process_stop_fails() {
        let mut window = window(2);
        window.queue.push_back(ModelDescriptor {
            model: "queued".to_owned(),
        });
        window.current_model = Some(ModelDescriptor {
            model: "current".to_owned(),
        });
        window.activity.timer_enabled = true;
        window.activity.downloader_running = true;
        let mut backend = Backend {
            fail: true,
            ..Backend::default()
        };

        assert!(block_on(window.form_destroy(&mut backend)).is_err());

        assert!(window.queue.is_empty());
        assert_eq!(window.current_model, None);
        assert!(!window.activity.timer_enabled);
        assert!(window.activity.downloader_running);
        assert_eq!(backend.stop_count, 1);
    }

    #[test]
    fn form_show_populates_and_selects_the_first_model_only_for_exact_mode_four() {
        let mut window = window(4);
        let models = vec!["first".to_owned(), "second".to_owned()];

        window.form_show(&models);

        assert_eq!(window.available_models, models);
        assert_eq!(window.combo_model, "first");
        assert!(window.selector.visible);
        assert!(window.selector.enabled);
        assert!(window.memo_lines.is_empty());
    }

    #[test]
    fn form_show_hides_selector_and_appends_each_requested_missing_model_message() {
        let mut window = window(1 | 2 | 8 | 0x10);
        window.memo_lines.push("existing".to_owned());

        window.form_show(&["ignored".to_owned()]);

        assert!(!window.selector.visible);
        assert!(!window.selector.enabled);
        assert!(window.available_models.is_empty());
        assert_eq!(
            window.memo_lines,
            vec![
                "existing",
                "No model found!",
                "No embeddings model found!",
                "Tina LLM model not found. Press Start to download the model...!",
                "Model supplied not found. Press Start to download the model...!",
            ]
        );
    }

    #[test]
    fn idle_timer_disables_itself_or_starts_the_first_queued_model() {
        let mut idle = window(2);
        idle.activity.timer_enabled = true;
        assert!(idle.timer_tick(None).is_empty());
        assert!(!idle.activity.timer_enabled);

        let mut queued = window(2);
        queued.queue.push_back(ModelDescriptor {
            model: "first".to_owned(),
        });
        queued.queue.push_back(ModelDescriptor {
            model: "second".to_owned(),
        });
        assert_eq!(
            queued.timer_tick(None),
            vec![TimerEffect::StartDownload("first".to_owned())]
        );
        assert_eq!(
            queued
                .current_model
                .as_ref()
                .map(|item| item.model.as_str()),
            Some("first")
        );
        assert_eq!(queued.queue.len(), 1);
        assert!(queued.activity.downloader_running);
        assert!(!queued.activity.queue_dispatch_in_progress);
        assert_eq!(queued.memo_lines, vec!["Downloading model: 'first' ... "]);
    }

    #[test]
    fn busy_timer_yields_without_changing_download_state() {
        let mut window = window(2);
        window.activity.queue_dispatch_in_progress = true;
        window.queue.push_back(ModelDescriptor {
            model: "queued".to_owned(),
        });

        assert_eq!(window.timer_tick(None), vec![TimerEffect::YieldToUi]);
        assert_eq!(window.queue.len(), 1);
        assert!(!window.activity.downloader_running);
    }

    #[test]
    fn running_timer_updates_progress_and_forwards_model_list() {
        let mut window = window(2);
        window.current_model = Some(ModelDescriptor {
            model: "granite".to_owned(),
        });
        window.activity.downloader_running = true;
        window.memo_lines.push("starting".to_owned());

        let effects = window.timer_tick(Some(
            r#"{"percent":100,"total":20,"completed":5,"model_list":["a"],"digest":"sha256:abcdef","finished":0}"#,
        ));

        assert_eq!(window.progress_percent, 99);
        assert_eq!(
            window.memo_lines,
            vec!["Downloading model:  'granite'  sha256:...def [5 / 20]"]
        );
        assert_eq!(
            effects,
            vec![TimerEffect::UpdateModelList(serde_json::json!(["a"]))]
        );
        assert!(window.activity.downloader_running);
    }

    #[test]
    fn completed_and_already_downloaded_reports_stop_the_downloader() {
        let mut completed = window(2);
        completed.current_model = Some(ModelDescriptor {
            model: "complete".to_owned(),
        });
        completed.activity.downloader_running = true;
        completed.memo_lines.push("starting".to_owned());
        assert_eq!(
            completed.timer_tick(Some(
                r#"{"total":20,"completed":20,"digest":"123456","finished":1}"#
            )),
            vec![TimerEffect::StopDownloader]
        );
        assert_eq!(completed.progress_percent, 100);
        assert_eq!(
            completed.memo_lines,
            vec!["Downloading model:  'complete'  sha256:...456  completed"]
        );
        assert!(!completed.activity.downloader_running);

        let mut present = window(2);
        present.current_model = Some(ModelDescriptor {
            model: "present".to_owned(),
        });
        present.activity.downloader_running = true;
        assert_eq!(
            present.timer_tick(Some(r#"{"digest":"abcdef","finished":2}"#)),
            vec![TimerEffect::StopDownloader]
        );
        assert_eq!(present.memo_lines, vec!["Model present already downloaded"]);
    }

    #[test]
    fn error_report_disables_timer_clears_queue_and_preserves_error_value() {
        let mut window = window(2);
        window.activity.timer_enabled = true;
        window.activity.downloader_running = true;
        window.queue.push_back(ModelDescriptor {
            model: "queued".to_owned(),
        });

        assert_eq!(
            window.timer_tick(Some(r#"{"error":"network"}"#)),
            vec![TimerEffect::ShowError(Value::String("network".to_owned()))]
        );
        assert!(!window.activity.timer_enabled);
        assert!(window.queue.is_empty());
        assert_eq!(window.memo_lines, vec!["Error occured"]);
        assert!(window.activity.downloader_running);
    }

    #[test]
    fn missing_or_invalid_result_is_a_running_noop() {
        let mut window = window(2);
        window.activity.downloader_running = true;

        assert!(window.timer_tick(None).is_empty());
        assert!(window.timer_tick(Some("not json")).is_empty());
        assert!(window.activity.downloader_running);
        assert!(window.memo_lines.is_empty());
    }

    #[test]
    fn exact_mode_four_queues_unvalidated_combo_text() {
        let mut window = window(4);
        assert_eq!(window.start_click(), StartOutcome::Queued(1));
        assert_eq!(
            window.queue.front().map(|item| item.model.as_str()),
            Some("")
        );
    }

    #[test]
    fn nonempty_queue_is_noop_while_unsupported_mode_still_enables_timer() {
        let mut active = window(2);
        active.queue.push_back(ModelDescriptor {
            model: "existing".to_owned(),
        });
        assert_eq!(active.start_click(), StartOutcome::QueueAlreadyActive);
        assert!(!active.activity.timer_enabled);
        assert_eq!(active.queue.len(), 1);

        let mut unsupported = window(1);
        assert_eq!(unsupported.start_click(), StartOutcome::Queued(0));
        assert!(unsupported.activity.timer_enabled);
    }

    #[test]
    fn cancel_disables_timer_stops_only_active_downloader_and_preserves_queue() {
        let mut window = window(2);
        window.activity.timer_enabled = true;
        window.activity.downloader_running = true;
        window.queue.push_back(ModelDescriptor {
            model: "queued".to_owned(),
        });
        let mut backend = Backend::default();
        assert_eq!(block_on(window.cancel_bound_event(&mut backend)), Ok(()));
        assert!(!window.activity.timer_enabled);
        assert!(!window.activity.downloader_running);
        assert_eq!(window.queue.len(), 1);
        assert_eq!(backend.stop_count, 1);

        assert_eq!(block_on(window.cancel_bound_event(&mut backend)), Ok(()));
        assert_eq!(backend.stop_count, 1);
    }

    #[test]
    fn failed_process_stop_keeps_running_state_after_timer_shutdown() {
        let mut window = window(2);
        window.activity.timer_enabled = true;
        window.activity.downloader_running = true;
        let mut backend = Backend {
            fail: true,
            ..Backend::default()
        };
        assert!(block_on(window.cancel_bound_event(&mut backend)).is_err());
        assert!(!window.activity.timer_enabled);
        assert!(window.activity.downloader_running);
    }
}
