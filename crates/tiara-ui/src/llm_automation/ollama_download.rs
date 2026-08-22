use std::collections::VecDeque;

use iced::widget::{button, column, row, text, text_input};
use iced::{Element, Length};

use super::{BackendError, BackendFuture};

pub const TITLE: &str = "Ollama Download";
pub const FORM_RESOURCE: &str = "OllamaDownload";

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
    pub queue: VecDeque<ModelDescriptor>,
    pub timer_enabled: bool,
    pub downloader_running: bool,
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
        Self {
            mode,
            embeddings_model: embeddings_model.into(),
            tina_model: tina_model.into(),
            supplied_model: supplied_model.into(),
            combo_model: String::new(),
            queue: VecDeque::new(),
            timer_enabled: false,
            downloader_running: false,
            pending_action: None,
        }
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
        self.timer_enabled = true;
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
        self.timer_enabled = false;
        if self.downloader_running {
            backend.stop_downloader().await?;
            self.downloader_running = false;
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
        assert!(window.timer_enabled);
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
        assert!(!active.timer_enabled);
        assert_eq!(active.queue.len(), 1);

        let mut unsupported = window(1);
        assert_eq!(unsupported.start_click(), StartOutcome::Queued(0));
        assert!(unsupported.timer_enabled);
    }

    #[test]
    fn cancel_disables_timer_stops_only_active_downloader_and_preserves_queue() {
        let mut window = window(2);
        window.timer_enabled = true;
        window.downloader_running = true;
        window.queue.push_back(ModelDescriptor {
            model: "queued".to_owned(),
        });
        let mut backend = Backend::default();
        assert_eq!(block_on(window.cancel_bound_event(&mut backend)), Ok(()));
        assert!(!window.timer_enabled);
        assert!(!window.downloader_running);
        assert_eq!(window.queue.len(), 1);
        assert_eq!(backend.stop_count, 1);

        assert_eq!(block_on(window.cancel_bound_event(&mut backend)), Ok(()));
        assert_eq!(backend.stop_count, 1);
    }

    #[test]
    fn failed_process_stop_keeps_running_state_after_timer_shutdown() {
        let mut window = window(2);
        window.timer_enabled = true;
        window.downloader_running = true;
        let mut backend = Backend {
            fail: true,
            ..Backend::default()
        };
        assert!(block_on(window.cancel_bound_event(&mut backend)).is_err());
        assert!(!window.timer_enabled);
        assert!(window.downloader_running);
    }
}
