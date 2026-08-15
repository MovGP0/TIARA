use std::cell::RefCell;
use std::fmt;
use std::rc::Rc;
use std::sync::Arc;
use std::sync::atomic::{AtomicBool, Ordering};
use std::time::{Duration, Instant};

use iced::widget::{button, column, container, row, scrollable, text};
use iced::{Alignment, Element, Length, Task, window};

pub const TITLE: &str = "Calculating";
pub const FORM_RESOURCE: &str = "MultiThreadPercentageDlg";
pub const CANCEL_CONTROL: &str = "MultiThreadPercentageDlg.pnlMain.btnCancel";

const RUNNING_LABEL_TEMPLATE: &str = "Running: %d";
const WAITING_LABEL_TEMPLATE: &str = "Waiting: %d";
const FINISHED_LABEL_TEMPLATE: &str = "Finished: %d";

pub type ApplicationMessageHandler = Rc<dyn Fn(&mut ApplicationMessage)>;
type WorkerCancellationCallback = Box<dyn FnMut()>;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ApplicationMessage {
    pub message_id: u32,
    pub result: isize,
}

#[derive(Default)]
pub struct ApplicationMessageRoute {
    handler: Option<ApplicationMessageHandler>,
}

impl ApplicationMessageRoute {
    pub fn set_handler(
        &mut self,
        handler: Option<ApplicationMessageHandler>,
    ) -> Option<ApplicationMessageHandler> {
        std::mem::replace(&mut self.handler, handler)
    }

    pub fn dispatch(&self, message: &mut ApplicationMessage) {
        if let Some(handler) = &self.handler {
            handler(message);
        }
    }
}

impl fmt::Debug for ApplicationMessageRoute {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter
            .debug_struct("ApplicationMessageRoute")
            .field("has_handler", &self.handler.is_some())
            .finish()
    }
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ProgressCounts {
    pub running: usize,
    pub waiting: usize,
    pub finished: usize,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum CircuitState {
    #[default]
    Waiting,
    Running,
    Finished,
}

impl fmt::Display for CircuitState {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Waiting => formatter.write_str("Waiting"),
            Self::Running => formatter.write_str("Running"),
            Self::Finished => formatter.write_str("Finished"),
        }
    }
}

pub struct CircuitProgress {
    name: String,
    state: CircuitState,
    cancel: Option<WorkerCancellationCallback>,
}

impl CircuitProgress {
    #[must_use]
    pub fn new(
        name: impl Into<String>,
        state: CircuitState,
        cancel: Option<WorkerCancellationCallback>,
    ) -> Self {
        Self {
            name: name.into(),
            state,
            cancel,
        }
    }
}

impl fmt::Debug for CircuitProgress {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter
            .debug_struct("CircuitProgress")
            .field("name", &self.name)
            .field("state", &self.state)
            .field("has_cancel_callback", &self.cancel.is_some())
            .finish()
    }
}

#[derive(Debug, Clone, Copy)]
pub enum Message {
    CancelPressed,
}

#[derive(Debug, Clone, Copy)]
enum DialogLifecycle {
    Hidden,
    Visible {
        previous_active_id: Option<window::Id>,
        started_at: Instant,
    },
}

pub struct Window {
    message_route: Rc<RefCell<ApplicationMessageRoute>>,
    previous_message_handler: Option<ApplicationMessageHandler>,
    owns_message_handler: bool,
    shared_stop: Option<Arc<AtomicBool>>,
    circuits: Vec<CircuitProgress>,
    counts: ProgressCounts,
    elapsed: String,
    running_label_template: String,
    waiting_label_template: String,
    finished_label_template: String,
    lifecycle: DialogLifecycle,
}

impl fmt::Debug for Window {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter
            .debug_struct("Window")
            .field(
                "has_previous_message_handler",
                &self.previous_message_handler.is_some(),
            )
            .field("owns_message_handler", &self.owns_message_handler)
            .field("has_shared_stop", &self.shared_stop.is_some())
            .field("circuits", &self.circuits)
            .field("counts", &self.counts)
            .field("elapsed", &self.elapsed)
            .field("lifecycle", &self.lifecycle)
            .finish_non_exhaustive()
    }
}

impl Window {
    /// Ports Ghidra function `FUN_012cc7b0` at `0x012CC7B0`.
    ///
    /// The database maps the original function to
    /// `TMultiThreadPercentageDlg.FormCreate`. It saves and replaces the
    /// application message handler, caches the three count-label templates,
    /// and creates the empty circuit registries.
    #[must_use]
    pub fn initialize_progress_dialog(
        message_route: Rc<RefCell<ApplicationMessageRoute>>,
        progress_message_handler: ApplicationMessageHandler,
        shared_stop: Option<Arc<AtomicBool>>,
    ) -> Self {
        let previous_message_handler = message_route
            .borrow_mut()
            .set_handler(Some(progress_message_handler));

        Self {
            message_route,
            previous_message_handler,
            owns_message_handler: true,
            shared_stop,
            circuits: Vec::new(),
            counts: ProgressCounts::default(),
            elapsed: "00:00:00".to_owned(),
            running_label_template: RUNNING_LABEL_TEMPLATE.to_owned(),
            waiting_label_template: WAITING_LABEL_TEMPLATE.to_owned(),
            finished_label_template: FINISHED_LABEL_TEMPLATE.to_owned(),
            lifecycle: DialogLifecycle::Hidden,
        }
    }

    /// Ports Ghidra function `FUN_012cc9b0` at `0x012CC9B0`.
    ///
    /// The database maps the original function to
    /// `TMultiThreadPercentageDlg.FormShow`. It remembers the active window,
    /// blocks input to the other application windows, records the start time,
    /// and enables elapsed-time updates.
    pub const fn show_progress_dialog(
        &mut self,
        previous_active_id: Option<window::Id>,
        now: Instant,
    ) {
        self.lifecycle = DialogLifecycle::Visible {
            previous_active_id,
            started_at: now,
        };
    }

    /// Ports Ghidra function `FUN_012cc970` at `0x012CC970`.
    ///
    /// The database maps the original function to
    /// `TMultiThreadPercentageDlg.FormHide`. It unblocks the application
    /// windows, restores focus to the window that was active before this
    /// dialog appeared, and disables elapsed-time updates.
    pub fn hide_progress_dialog(&mut self) -> Task<Message> {
        let previous_active_id =
            match std::mem::replace(&mut self.lifecycle, DialogLifecycle::Hidden) {
                DialogLifecycle::Hidden => None,
                DialogLifecycle::Visible {
                    previous_active_id, ..
                } => previous_active_id,
            };

        previous_active_id.map_or_else(Task::none, window::gain_focus)
    }

    pub fn add_circuit(&mut self, circuit: CircuitProgress) {
        self.circuits.push(circuit);
        self.refresh_counts();
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::CancelPressed => self.request_worker_cancellation(),
        }
    }

    /// Ports Ghidra function `FUN_012cc700` at `0x012CC700`.
    ///
    /// The database maps the original function to
    /// `TMultiThreadPercentageDlg.btnCancelClick`. It requests cooperative
    /// cancellation through the optional shared flag and then notifies every
    /// circuit that has a registered cancellation callback. It does not wait
    /// for workers and does not close the modeless dialog.
    pub fn request_worker_cancellation(&mut self) {
        if let Some(shared_stop) = &self.shared_stop {
            shared_stop.store(true, Ordering::Release);
        }

        for circuit in &mut self.circuits {
            if let Some(cancel) = &mut circuit.cancel {
                cancel();
            }
        }
    }

    /// Ports Ghidra function `FUN_012ccf00` at `0x012CCF00`.
    ///
    /// The database maps the original function to
    /// `TMultiThreadPercentageDlg.TimerTimer`. It formats the elapsed interval
    /// as hours, minutes, and seconds and updates the displayed value only when
    /// that value changed.
    pub fn refresh_elapsed_time(&mut self, now: Instant) {
        let DialogLifecycle::Visible { started_at, .. } = self.lifecycle else {
            return;
        };
        let elapsed = now.saturating_duration_since(started_at);
        let formatted = format_elapsed_time(elapsed);

        if formatted != self.elapsed {
            self.elapsed = formatted;
        }
    }

    /// Ports Ghidra function `FUN_012cc920` at `0x012CC920`.
    ///
    /// The database maps the original function to
    /// `TMultiThreadPercentageDlg.FormDestroy`. It releases the form-owned
    /// registries and restores the application message handler that was active
    /// before the progress dialog was created.
    pub fn destroy_progress_dialog(&mut self) {
        self.circuits.clear();

        if self.owns_message_handler {
            self.message_route
                .borrow_mut()
                .set_handler(self.previous_message_handler.take());
            self.owns_message_handler = false;
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let counters = row![
            text(format_count_label(
                &self.running_label_template,
                self.counts.running,
            )),
            text(format_count_label(
                &self.waiting_label_template,
                self.counts.waiting,
            )),
            text(format_count_label(
                &self.finished_label_template,
                self.counts.finished,
            )),
        ]
        .spacing(24)
        .align_y(Alignment::Center);

        let circuit_rows = self.circuits.iter().fold(column![], |rows, circuit| {
            rows.push(
                row![
                    text(&circuit.name).width(Length::Fill),
                    text(circuit.state.to_string()),
                ]
                .spacing(12),
            )
        });

        container(
            column![
                counters,
                scrollable(circuit_rows.spacing(6)).height(Length::Fill),
                row![
                    button("Abort").on_press(Message::CancelPressed),
                    text(&self.elapsed),
                ]
                .spacing(16)
                .align_y(Alignment::Center),
            ]
            .spacing(12),
        )
        .padding(12)
        .width(Length::Fill)
        .height(Length::Fill)
        .into()
    }

    fn refresh_counts(&mut self) {
        self.counts =
            self.circuits
                .iter()
                .fold(ProgressCounts::default(), |mut counts, circuit| {
                    match circuit.state {
                        CircuitState::Waiting => counts.waiting += 1,
                        CircuitState::Running => counts.running += 1,
                        CircuitState::Finished => counts.finished += 1,
                    }

                    counts
                });
    }
}

impl Drop for Window {
    fn drop(&mut self) {
        self.destroy_progress_dialog();
    }
}

fn format_count_label(template: &str, count: usize) -> String {
    template.replacen("%d", &count.to_string(), 1)
}

fn format_elapsed_time(elapsed: Duration) -> String {
    let seconds = elapsed.as_secs();
    let hours = (seconds / 3_600) % 24;
    let minutes = (seconds / 60) % 60;
    let seconds = seconds % 60;

    format!("{hours}:{minutes:02}:{seconds:02}")
}

#[cfg(test)]
mod tests {
    use std::cell::Cell;

    use super::*;

    #[test]
    fn initialization_installs_progress_handler_and_caches_empty_state() {
        let route = Rc::new(RefCell::new(ApplicationMessageRoute::default()));
        let calls = Rc::new(Cell::new(0));
        let handler_calls = Rc::clone(&calls);
        let handler: ApplicationMessageHandler = Rc::new(move |_| {
            handler_calls.set(handler_calls.get() + 1);
        });
        let window = Window::initialize_progress_dialog(Rc::clone(&route), handler, None);

        route.borrow().dispatch(&mut ApplicationMessage {
            message_id: 1,
            result: 0,
        });

        assert_eq!(calls.get(), 1);
        assert!(window.circuits.is_empty());
        assert_eq!(window.counts, ProgressCounts::default());
        assert_eq!(window.running_label_template, "Running: %d");
        assert_eq!(window.waiting_label_template, "Waiting: %d");
        assert_eq!(window.finished_label_template, "Finished: %d");
    }

    #[test]
    fn destruction_restores_an_empty_message_route() {
        let route = Rc::new(RefCell::new(ApplicationMessageRoute::default()));
        let calls = Rc::new(Cell::new(0));
        let handler_calls = Rc::clone(&calls);
        let mut window = Window::initialize_progress_dialog(
            Rc::clone(&route),
            Rc::new(move |_| handler_calls.set(handler_calls.get() + 1)),
            None,
        );

        window.destroy_progress_dialog();
        route.borrow().dispatch(&mut ApplicationMessage {
            message_id: 1,
            result: 0,
        });

        assert_eq!(calls.get(), 0);
    }

    #[test]
    fn cancellation_sets_shared_flag_and_notifies_registered_circuits() {
        let route = Rc::new(RefCell::new(ApplicationMessageRoute::default()));
        let shared_stop = Arc::new(AtomicBool::new(false));
        let callback_count = Rc::new(Cell::new(0));
        let registered_count = Rc::clone(&callback_count);
        let mut window = Window::initialize_progress_dialog(
            route,
            Rc::new(|_| {}),
            Some(Arc::clone(&shared_stop)),
        );
        window.add_circuit(CircuitProgress::new(
            "Registered",
            CircuitState::Running,
            Some(Box::new(move || {
                registered_count.set(registered_count.get() + 1);
            })),
        ));
        window.add_circuit(CircuitProgress::new(
            "No callback",
            CircuitState::Waiting,
            None,
        ));

        window.update(Message::CancelPressed);

        assert!(shared_stop.load(Ordering::Acquire));
        assert_eq!(callback_count.get(), 1);
        assert_eq!(window.circuits.len(), 2);
    }

    #[test]
    fn show_starts_timing_and_blocks_background_windows() {
        let route = Rc::new(RefCell::new(ApplicationMessageRoute::default()));
        let mut window = Window::initialize_progress_dialog(route, Rc::new(|_| {}), None);
        let active_window = window::Id::unique();
        let started_at = Instant::now();

        window.show_progress_dialog(Some(active_window), started_at);

        assert!(matches!(
            window.lifecycle,
            DialogLifecycle::Visible {
                previous_active_id: Some(id),
                started_at: actual_start,
            } if id == active_window && actual_start == started_at
        ));
    }

    #[test]
    fn hide_stops_timing_and_unblocks_background_windows() {
        let route = Rc::new(RefCell::new(ApplicationMessageRoute::default()));
        let mut window = Window::initialize_progress_dialog(route, Rc::new(|_| {}), None);
        window.show_progress_dialog(Some(window::Id::unique()), Instant::now());

        let _focus_task = window.hide_progress_dialog();

        assert!(matches!(window.lifecycle, DialogLifecycle::Hidden));
    }

    #[test]
    fn timer_formats_elapsed_time_and_is_inactive_while_hidden() {
        let route = Rc::new(RefCell::new(ApplicationMessageRoute::default()));
        let mut window = Window::initialize_progress_dialog(route, Rc::new(|_| {}), None);
        let started_at = Instant::now();

        window.refresh_elapsed_time(started_at + Duration::from_secs(3_661));
        assert_eq!(window.elapsed, "00:00:00");

        window.show_progress_dialog(None, started_at);
        window.refresh_elapsed_time(started_at + Duration::from_secs(3_661));
        assert_eq!(window.elapsed, "1:01:01");

        let _focus_task = window.hide_progress_dialog();
        window.refresh_elapsed_time(started_at + Duration::from_secs(7_322));
        assert_eq!(window.elapsed, "1:01:01");
    }

    #[test]
    fn cancellation_without_shared_flag_or_circuits_is_a_no_op() {
        let route = Rc::new(RefCell::new(ApplicationMessageRoute::default()));
        let mut window = Window::initialize_progress_dialog(route, Rc::new(|_| {}), None);

        window.request_worker_cancellation();

        assert!(window.circuits.is_empty());
    }

    #[test]
    fn destruction_restores_previous_handler_and_releases_circuits() {
        let previous_calls = Rc::new(Cell::new(0));
        let recorded_calls = Rc::clone(&previous_calls);
        let previous_handler: ApplicationMessageHandler = Rc::new(move |_| {
            recorded_calls.set(recorded_calls.get() + 1);
        });
        let route = Rc::new(RefCell::new(ApplicationMessageRoute::default()));
        route
            .borrow_mut()
            .set_handler(Some(Rc::clone(&previous_handler)));
        let mut window =
            Window::initialize_progress_dialog(Rc::clone(&route), Rc::new(|_| {}), None);
        window.add_circuit(CircuitProgress::new(
            "Circuit",
            CircuitState::Finished,
            None,
        ));

        window.destroy_progress_dialog();
        route.borrow().dispatch(&mut ApplicationMessage {
            message_id: 2,
            result: 0,
        });

        assert!(window.circuits.is_empty());
        assert_eq!(previous_calls.get(), 1);
    }
}
