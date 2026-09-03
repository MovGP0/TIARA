use std::collections::VecDeque;
use std::path::{Path, PathBuf};
use std::time::Duration;

use iced::{Subscription, Task};

pub const FORM_RESOURCE: &str = "frmTSCPreviewDlg";
pub const LIBRARY_EVALUATION: &str = "iced supplies the timer subscription and typed lifecycle message. PathBuf and VecDeque supply owned preview requests for the application renderer, so no additional timer or rendering dependency is needed.";

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    TimerElapsed,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PreviewRequest {
    pub circuit_path: PathBuf,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct State {
    circuit_path: PathBuf,
    timer_interval: Option<Duration>,
    preview_requests: VecDeque<PreviewRequest>,
}

impl State {
    #[must_use]
    pub fn new(circuit_path: impl Into<PathBuf>) -> Self {
        Self {
            circuit_path: circuit_path.into(),
            timer_interval: None,
            preview_requests: VecDeque::new(),
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::TimerElapsed => self.on_timer_elapsed(),
        }
        Task::none()
    }

    /// Stops the one-shot timer and requests a preview of the current circuit.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0177C340`, symbol `FUN_0177c340`
    /// (`TfrmTSCPreviewDlg.TimerTimer`). The timer is disabled before the
    /// preview request becomes visible to the host. Every direct event call
    /// queues one request, including calls made while the timer is inactive.
    pub fn on_timer_elapsed(&mut self) {
        self.timer_interval = None;
        self.preview_requests.push_back(PreviewRequest {
            circuit_path: self.circuit_path.clone(),
        });
    }

    pub const fn schedule_preview(&mut self, interval: Duration) {
        self.timer_interval = Some(interval);
    }

    pub fn set_circuit_path(&mut self, circuit_path: impl Into<PathBuf>) {
        self.circuit_path = circuit_path.into();
    }

    #[must_use]
    pub fn circuit_path(&self) -> &Path {
        &self.circuit_path
    }

    #[must_use]
    pub const fn timer_interval(&self) -> Option<Duration> {
        self.timer_interval
    }

    #[must_use]
    pub fn pending_preview_count(&self) -> usize {
        self.preview_requests.len()
    }

    pub fn take_preview_request(&mut self) -> Option<PreviewRequest> {
        self.preview_requests.pop_front()
    }

    pub fn subscription(&self) -> Subscription<Message> {
        self.timer_interval
            .map_or_else(Subscription::none, |interval| {
                iced::time::every(interval).map(|_| Message::TimerElapsed)
            })
    }
}

#[cfg(test)]
mod tests {
    use std::path::Path;
    use std::time::Duration;

    use iced::Task;

    use super::{Message, PreviewRequest, State};

    fn discard(task: Task<Message>) {
        drop(task);
    }

    #[test]
    fn timer_event_stops_timer_before_exposing_preview_request() {
        let mut state = State::new("circuits/filter.tsc");
        state.schedule_preview(Duration::from_millis(250));

        discard(state.update(Message::TimerElapsed));

        assert_eq!(state.timer_interval(), None);
        assert_eq!(state.pending_preview_count(), 1);
        assert_eq!(
            state.take_preview_request(),
            Some(PreviewRequest {
                circuit_path: Path::new("circuits/filter.tsc").to_path_buf(),
            })
        );
    }

    #[test]
    fn each_direct_timer_event_queues_the_current_path() {
        let mut state = State::new("first.tsc");

        state.on_timer_elapsed();
        state.set_circuit_path("second.tsc");
        state.on_timer_elapsed();

        assert_eq!(state.pending_preview_count(), 2);
        assert_eq!(
            state
                .take_preview_request()
                .map(|request| request.circuit_path),
            Some(Path::new("first.tsc").to_path_buf())
        );
        assert_eq!(
            state
                .take_preview_request()
                .map(|request| request.circuit_path),
            Some(Path::new("second.tsc").to_path_buf())
        );
    }
}
