use std::{
    collections::VecDeque,
    fs,
    path::{Path, PathBuf},
    time::{Duration, Instant},
};

use iced::{
    Subscription, Task,
    keyboard::{Key, key::Named},
};
use rfd::AsyncFileDialog;

pub const FORM_RESOURCE: &str = "LocalLLMForm";
pub const LIBRARY_EVALUATION: &str = "iced supplies typed messages and update tasks. Rust Default, Vec, String, Option, and PathBuf replace native zeroing, owned string-list allocation, optional configuration loading, and path concatenation. Application settings and Python discovery remain narrow host adapters.";
pub const HELP_CONTEXT: u32 = 0x4B4;
pub const DEFAULT_MODEL: &str = "llama3.1";
pub const DEFAULT_EMBEDDINGS_MODEL: &str = "nomic-embed-text";
pub const CHAT_SAVE_DEFAULT_FILE_NAME: &str = "file.txt";
pub const LOG_SAVE_DEFAULT_FILE_NAME: &str = "file.log";
pub const FULL_LOG_FILE_NAME: &str = "log.json";
pub const SHORT_LOG_FILE_NAME: &str = "log_short.json";
pub const PICTURE_BATCH_ROOT: &str = r"c:\Attila\Devel Files\Other\ImportPic Test\";
pub const PICTURE_BATCH_DELAY: Duration = Duration::from_millis(500);
pub const PICTURE_BATCH_POLL_INTERVAL: Duration = Duration::from_millis(25);
pub const FILTER_TERMS: [&str; 4] = [
    "passband",
    "stopband",
    "passband frequency",
    "stopband frequency",
];

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    AloudChanged(bool),
    ModelClicked,
    OptionsSelected,
    Resized,
}

pub trait LocalLlmOptionsWorkflow {
    fn show_options(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModelManagementMessage {
    Open,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModelManagementOutcome {
    ManualDownloadExplained,
    PriorModelKept,
    ModelUpdated,
}

pub trait LocalLlmModelManagementHost {
    type Error;

    /// # Errors
    /// Returns the host message error.
    fn explain_lm_studio_manual_download(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the modal model-management dialog error.
    fn show_model_manager(&mut self, mode: u32) -> Result<(), Self::Error>;
    /// Returns the selected model when the model refresh succeeds.
    ///
    /// # Errors
    /// Returns the host model-refresh error.
    fn refresh_models(&mut self) -> Result<Option<String>, Self::Error>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum UserSelectionMessage {
    Selected(String),
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum UserKeyPressMessage {
    Pressed(Key),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum UserKeyPressOutcome {
    Ignored,
    Submitted,
}

pub trait LocalLlmRequestWorkflow {
    type Error;

    /// Starts the shared local-LLM request pipeline for the selected user.
    ///
    /// # Errors
    /// Returns the shared request validation or start error.
    fn process_request(
        &mut self,
        selected_user: &str,
        force_preprocessing: bool,
    ) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TempCleanupMessage {
    DeleteFiles,
}

pub trait LocalLlmTempCleanupHost {
    type Error;

    fn temporary_directory(&self) -> &Path;
    /// # Errors
    /// Returns the completion-message error.
    fn show_temp_files_deleted(&mut self) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ExitMessage {
    Requested,
}

pub trait LocalLlmWindowCloseWorkflow {
    fn request_close(&mut self) -> Task<ExitMessage>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum NewChatMessage {
    Requested,
}

pub trait LocalLlmSeedTextHost {
    type Error;

    /// Loads the configured seed-text lines, or returns `None` when no path is
    /// configured.
    ///
    /// # Errors
    /// Returns the configured-path normalization or file-load error.
    fn load_seed_lines(&mut self) -> Result<Option<Vec<String>>, Self::Error>;
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ChatResetState {
    #[default]
    Idle,
    Pending,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum StopMessage {
    StopRequested,
}

pub trait LocalLlmStopWorkflow {
    type Error;

    /// # Errors
    /// Returns the shared request-stop or marker-file cleanup error.
    fn stop_request(&mut self, full_stop: bool) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum AutoTestMessage {
    Launch,
}

pub trait LocalLlmAutoTestHost: LocalLlmStopWorkflow {
    type AutoTestWindow;

    fn temporary_directory(&self) -> &Path;
    /// # Errors
    /// Returns the autotest window construction error.
    fn create_autotest_window(&mut self) -> Result<Self::AutoTestWindow, Self::Error>;
    /// # Errors
    /// Returns the application-window storage error.
    fn store_autotest_window(&mut self, window: Self::AutoTestWindow) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the Iced enable or show error.
    fn enable_and_show_autotest_window(&mut self) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum PictureImportOrigin {
    #[default]
    Interactive,
    Batch,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum PictureImportSource {
    #[default]
    CurrentCircuit,
    External,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PictureImportMessage {
    CurrentCircuit(PictureImportOrigin),
}

pub trait LocalLlmCurrentPictureWorkflow {
    type Error;

    fn current_document_path(&self) -> PathBuf;
    /// Prepares the current-circuit graph and generated image, then enters the
    /// shared local-LLM request pipeline.
    ///
    /// # Errors
    /// Returns the graph, image, compatibility-message, or request error.
    fn prepare_current_circuit_picture(
        &mut self,
        document_path: &Path,
        origin: PictureImportOrigin,
    ) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ExternalPictureSelection {
    pub picture_path: Option<PathBuf>,
    pub netlist_path: Option<PathBuf>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ExternalPictureMessage {
    Open,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ExternalPictureOutcome {
    Cancelled,
    PictureMissing,
    Requested,
}

pub trait LocalLlmExternalPictureWorkflow {
    type Error;

    /// # Errors
    /// Returns the modal selection error.
    fn select_external_picture(&mut self) -> Result<Option<ExternalPictureSelection>, Self::Error>;
    /// # Errors
    /// Returns the missing-picture message error.
    fn show_missing_picture_error(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the missing-netlist warning error.
    fn show_missing_netlist_warning(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the shared picture preparation or request error.
    fn prepare_external_picture(
        &mut self,
        netlist_path: Option<&Path>,
        picture_path: &Path,
    ) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, PartialEq, Eq)]
enum PictureBatchItem {
    CurrentCircuit(PathBuf),
    ExternalPicture { picture: PathBuf, netlist: PathBuf },
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum PictureBatchStatus {
    #[default]
    Idle,
    WaitingForRequest,
    DelayUntil(Instant),
    Complete,
}

#[derive(Debug, Default, PartialEq, Eq)]
struct PictureBatchState {
    items: VecDeque<PictureBatchItem>,
    status: PictureBatchStatus,
    stop_requested: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PictureBatchMessage {
    Start,
    Tick(Instant),
}

pub trait LocalLlmPictureBatchHost {
    type Error;

    /// # Errors
    /// Returns the application document-open error.
    fn open_document(&mut self, path: &Path) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the current-circuit picture-start error.
    fn start_current_picture(&mut self, path: &Path) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the external-picture start error.
    fn start_external_picture(
        &mut self,
        netlist_path: &Path,
        picture_path: &Path,
    ) -> Result<(), Self::Error>;
    fn picture_request_busy(&self) -> bool;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SaveMessage {
    SaveAsRequested,
}

pub trait LocalLlmChatSaveWorkflow {
    type Error;

    /// # Errors
    /// Returns the shared save-dialog or text-file output error.
    fn save_chat(&mut self) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ChatSaveOutcome {
    Cancelled,
    Saved,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ChatSaveMessage {
    Completed(Result<ChatSaveOutcome, String>),
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum LogSaveOutcome {
    SourceUnavailable,
    Cancelled,
    Saved,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum LogSaveMessage {
    Completed(Result<LogSaveOutcome, String>),
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct LocalLlmConfiguration {
    pub model: String,
    pub embeddings_model: String,
    pub flags: u32,
    pub interface_index: i32,
    pub voice_index: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum OptionsApplyOutcome {
    Cancelled,
    Applied,
}

pub trait LocalLlmOptionsHost {
    type Error;

    /// # Errors
    /// Returns the modal dialog error.
    fn edit_options(
        &mut self,
        current: &LocalLlmConfiguration,
    ) -> Result<Option<LocalLlmConfiguration>, Self::Error>;
    fn voice_update_permitted(&mut self) -> bool;
    /// # Errors
    /// Returns the host voice update error.
    fn apply_voice(&mut self, voice_index: i32) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the framework stop error.
    fn stop_framework_two(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the host close-prompt error.
    fn request_framework_close(&mut self, framework_name: &str) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the framework preparation error.
    fn prepare_framework_and_models(&mut self) -> Result<String, Self::Error>;
    /// # Errors
    /// Returns the request-state rebuild error.
    fn rebuild_request_state(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the model-display update error.
    fn update_model_display(&mut self) -> Result<(), Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseAction {
    None,
    Hide,
    Free,
    Minimize,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct CloseState {
    pub worker_active: bool,
    pub save_requested: bool,
    pub shared_runtime_released: bool,
}

pub trait LocalLlmCloseWorkflow {
    type Error;

    /// # Errors
    /// Returns the host worker-stop error.
    fn stop_worker(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the host state-save error.
    fn save_worker_state(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the host environment update error.
    fn clear_python_home(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the host runtime-release error.
    fn release_shared_runtime_if_present(&mut self) -> Result<bool, Self::Error>;
    /// # Errors
    /// Returns the host window cleanup error.
    fn clean_up_windows(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the host service-shutdown error.
    fn shut_down_services(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the host configuration persistence error.
    fn persist_configuration(&mut self) -> Result<(), Self::Error>;
}

pub trait LocalLlmDestroyWorkflow {
    fn clear_global_form_reference(&mut self);
    fn finish_destroy(&mut self);
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TimerMessage {
    Tick,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TimerFlow {
    Continue,
    FinishTick,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TimerTickOutcome {
    SkippedReentrant,
    FinishedEarly,
    Completed,
}

pub trait LocalLlmTimerWorkflow {
    type Error;

    /// Deletes and reports the Python error marker when it exists.
    ///
    /// # Errors
    /// Returns the host file or message error.
    fn inspect_python_error_marker(&mut self) -> Result<(), Self::Error>;
    /// Polls the selected framework and its incremental log.
    ///
    /// # Errors
    /// Returns the host framework or log error.
    fn poll_framework_and_log(&mut self) -> Result<TimerFlow, Self::Error>;
    /// Advances the recovered timeout and retry state.
    ///
    /// # Errors
    /// Returns the host timeout-recovery error.
    fn handle_timeout_state(&mut self) -> Result<TimerFlow, Self::Error>;
    /// Refreshes the optional progress message window.
    ///
    /// # Errors
    /// Returns the host message-window error.
    fn update_progress_window(&mut self) -> Result<(), Self::Error>;
    /// Consumes and normalizes the current answer file when it is ready.
    ///
    /// # Errors
    /// Returns the host answer parsing or editor update error.
    fn consume_answer_file(&mut self) -> Result<TimerFlow, Self::Error>;
    /// Processes completion timing, structured answers, and follow-up state.
    ///
    /// # Errors
    /// Returns the host completion or follow-up error.
    fn consume_completion_marker(&mut self) -> Result<(), Self::Error>;
    /// Performs the recovered final timer housekeeping.
    ///
    /// # Errors
    /// Returns the host housekeeping error.
    fn finish_timer_tick(&mut self) -> Result<(), Self::Error>;
}

pub trait LocalLlmCreateHost {
    type Error;

    /// Returns the active Python installation directory.
    ///
    /// # Errors
    ///
    /// Returns the host discovery error when the directory is unavailable.
    fn python_home(&mut self) -> Result<PathBuf, Self::Error>;

    /// Loads the optional persisted local-LLM configuration.
    ///
    /// # Errors
    ///
    /// Returns the host settings error when configuration cannot be read.
    fn load_configuration(&mut self) -> Result<Option<LocalLlmConfiguration>, Self::Error>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ShowOutcome {
    ClosedForMissingFramework,
    Ready,
}

pub trait LocalLlmShowWorkflow {
    type Error;

    /// # Errors
    /// Returns the host control-preparation error.
    fn prepare_controls_and_diagnostics(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the host sample-question loading error.
    fn load_sample_questions_if_present(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the host GPU detection error.
    fn detect_and_apply_gpu(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the host runtime preparation error.
    fn prepare_runtime_endpoints(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the host framework detection error.
    fn framework_is_installed(&mut self) -> Result<bool, Self::Error>;
    /// # Errors
    /// Returns the host warning or close error.
    fn show_missing_environment_and_close(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the host installed-framework initialization error.
    fn initialize_installed_framework(&mut self) -> Result<(), Self::Error>;
    /// # Errors
    /// Returns the host final diagnostic error.
    fn finish_show(&mut self) -> Result<(), Self::Error>;
}

#[derive(Debug, Default, PartialEq, Eq)]
pub struct LocalLlmWindow {
    configuration: LocalLlmConfiguration,
    selected_user: String,
    user_entries: Vec<String>,
    chat_lines: Vec<String>,
    chat_reset_state: ChatResetState,
    picture_import_origin: PictureImportOrigin,
    picture_import_source: PictureImportSource,
    picture_document_path: PathBuf,
    picture_batch: PictureBatchState,
    filter_terms: Vec<String>,
    python_home: PathBuf,
    runner_directory: PathBuf,
    close_state: CloseState,
    aloud_checked: bool,
    setup_complete: bool,
    timer_in_progress: bool,
    help_context: u32,
}

impl LocalLlmWindow {
    /// Implements Ghidra function `FUN_01a5bd40` at `0x01A5BD40`.
    ///
    /// The developer batch uses the recovered hard-coded root and queues all
    /// non-directory TSC documents before `Ext` PNG pictures. Iced timer ticks
    /// replace the recovered message-pump loops. Each request must become idle
    /// and remain separated from the next item by 500 ms. The stop request is
    /// honored after the current request and delay. External PNG files use a
    /// sibling `.cir` path.
    ///
    /// # Errors
    ///
    /// Returns the first document-open or picture-start error.
    pub fn start_picture_batch<H>(&mut self, host: &mut H) -> Result<(), H::Error>
    where
        H: LocalLlmPictureBatchHost,
    {
        self.start_picture_batch_from(Path::new(PICTURE_BATCH_ROOT), host)
    }

    fn start_picture_batch_from<H>(&mut self, root: &Path, host: &mut H) -> Result<(), H::Error>
    where
        H: LocalLlmPictureBatchHost,
    {
        self.picture_batch = PictureBatchState {
            items: collect_picture_batch_items(root),
            status: PictureBatchStatus::Idle,
            stop_requested: false,
        };
        self.start_next_picture_batch_item(host)
    }

    /// Applies an Iced start or timer message for the picture batch.
    ///
    /// # Errors
    ///
    /// Returns the first document-open or picture-start error.
    pub fn update_picture_batch<H>(
        &mut self,
        message: PictureBatchMessage,
        host: &mut H,
    ) -> Result<Task<PictureBatchMessage>, H::Error>
    where
        H: LocalLlmPictureBatchHost,
    {
        match message {
            PictureBatchMessage::Start => self.start_picture_batch(host)?,
            PictureBatchMessage::Tick(now) => self.tick_picture_batch(now, host)?,
        }
        Ok(Task::none())
    }

    /// Returns the timer subscription needed while a batch waits for a request
    /// or for the recovered 500 ms separation delay.
    pub fn picture_batch_subscription(&self) -> Subscription<PictureBatchMessage> {
        match self.picture_batch.status {
            PictureBatchStatus::WaitingForRequest | PictureBatchStatus::DelayUntil(_) => {
                iced::time::every(PICTURE_BATCH_POLL_INTERVAL).map(PictureBatchMessage::Tick)
            }
            PictureBatchStatus::Idle | PictureBatchStatus::Complete => Subscription::none(),
        }
    }

    /// Requests that the active batch stop after its current item and delay.
    pub const fn request_picture_batch_stop(&mut self) {
        self.picture_batch.stop_requested = true;
    }

    #[must_use]
    pub const fn picture_batch_status(&self) -> PictureBatchStatus {
        self.picture_batch.status
    }

    #[must_use]
    pub fn remaining_picture_batch_items(&self) -> usize {
        self.picture_batch.items.len()
    }

    fn tick_picture_batch<H>(&mut self, now: Instant, host: &mut H) -> Result<(), H::Error>
    where
        H: LocalLlmPictureBatchHost,
    {
        match self.picture_batch.status {
            PictureBatchStatus::WaitingForRequest => {
                if !host.picture_request_busy() {
                    self.picture_batch.status =
                        PictureBatchStatus::DelayUntil(now + PICTURE_BATCH_DELAY);
                }
            }
            PictureBatchStatus::DelayUntil(deadline) if now >= deadline => {
                self.start_next_picture_batch_item(host)?;
            }
            PictureBatchStatus::Idle
            | PictureBatchStatus::DelayUntil(_)
            | PictureBatchStatus::Complete => {}
        }
        Ok(())
    }

    fn start_next_picture_batch_item<H>(&mut self, host: &mut H) -> Result<(), H::Error>
    where
        H: LocalLlmPictureBatchHost,
    {
        if self.picture_batch.stop_requested {
            self.picture_batch.items.clear();
            self.picture_batch.status = PictureBatchStatus::Complete;
            return Ok(());
        }
        let Some(item) = self.picture_batch.items.pop_front() else {
            self.picture_batch.status = PictureBatchStatus::Complete;
            return Ok(());
        };
        match item {
            PictureBatchItem::CurrentCircuit(path) => {
                self.picture_import_origin = PictureImportOrigin::Batch;
                self.picture_import_source = PictureImportSource::CurrentCircuit;
                self.picture_document_path.clone_from(&path);
                host.open_document(&path)?;
                host.start_current_picture(&path)?;
            }
            PictureBatchItem::ExternalPicture { picture, netlist } => {
                self.picture_import_origin = PictureImportOrigin::Batch;
                self.picture_import_source = PictureImportSource::External;
                self.picture_document_path.clone_from(&picture);
                host.start_external_picture(&netlist, &picture)?;
            }
        }
        self.picture_batch.status = PictureBatchStatus::WaitingForRequest;
        Ok(())
    }

    /// Applies the typed Iced external-picture import command.
    ///
    /// # Errors
    ///
    /// Returns the first dialog, message, or picture-workflow error.
    pub fn update_external_picture<H>(
        &mut self,
        message: ExternalPictureMessage,
        host: &mut H,
    ) -> Result<(Task<ExternalPictureMessage>, ExternalPictureOutcome), H::Error>
    where
        H: LocalLlmExternalPictureWorkflow,
    {
        let outcome = match message {
            ExternalPictureMessage::Open => self.import_external_picture(host)?,
        };
        Ok((Task::none(), outcome))
    }

    /// Implements Ghidra function `FUN_01a5bb80` at `0x01A5BB80`.
    ///
    /// Modal cancellation changes no state. An accepted selection without a
    /// picture reports an error and stops. A missing netlist reports a warning
    /// but continues. A valid picture then enables external mode, stores the
    /// picture path, and enters the shared picture workflow with the optional
    /// netlist.
    ///
    /// # Errors
    ///
    /// Returns the first host error. State changes occur only after selection
    /// validation and remain applied if shared picture preparation fails.
    pub fn import_external_picture<H>(
        &mut self,
        host: &mut H,
    ) -> Result<ExternalPictureOutcome, H::Error>
    where
        H: LocalLlmExternalPictureWorkflow,
    {
        let Some(selection) = host.select_external_picture()? else {
            return Ok(ExternalPictureOutcome::Cancelled);
        };
        let Some(picture_path) = selection.picture_path else {
            host.show_missing_picture_error()?;
            return Ok(ExternalPictureOutcome::PictureMissing);
        };
        if selection.netlist_path.is_none() {
            host.show_missing_netlist_warning()?;
        }
        self.picture_import_source = PictureImportSource::External;
        self.picture_document_path.clone_from(&picture_path);
        host.prepare_external_picture(selection.netlist_path.as_deref(), &picture_path)?;
        Ok(ExternalPictureOutcome::Requested)
    }

    /// Applies the typed Iced current-circuit picture command.
    ///
    /// # Errors
    ///
    /// Returns the shared picture-request workflow error.
    pub fn update_current_picture<H>(
        &mut self,
        message: PictureImportMessage,
        host: &mut H,
    ) -> Result<Task<PictureImportMessage>, H::Error>
    where
        H: LocalLlmCurrentPictureWorkflow,
    {
        match message {
            PictureImportMessage::CurrentCircuit(origin) => {
                self.import_current_circuit_picture(origin, host)?;
            }
        }
        Ok(Task::none())
    }

    /// Implements Ghidra function `FUN_01a5bad0` at `0x01A5BAD0`.
    ///
    /// The command records interactive or batch origin, clears external-picture
    /// mode, copies the current application document path, and invokes the
    /// shared current-circuit picture workflow without an external netlist or
    /// picture. That workflow owns graph preparation, `circuit.jpg`
    /// generation, compatibility messages, and request startup.
    ///
    /// # Errors
    ///
    /// Returns the shared picture-request workflow error. The source, origin,
    /// and copied document path remain applied.
    pub fn import_current_circuit_picture<H>(
        &mut self,
        origin: PictureImportOrigin,
        host: &mut H,
    ) -> Result<(), H::Error>
    where
        H: LocalLlmCurrentPictureWorkflow,
    {
        self.picture_import_origin = origin;
        self.picture_import_source = PictureImportSource::CurrentCircuit;
        self.picture_document_path = host.current_document_path();
        host.prepare_current_circuit_picture(&self.picture_document_path, origin)
    }

    #[must_use]
    pub const fn picture_import_origin(&self) -> PictureImportOrigin {
        self.picture_import_origin
    }

    #[must_use]
    pub const fn picture_import_source(&self) -> PictureImportSource {
        self.picture_import_source
    }

    #[must_use]
    pub fn picture_document_path(&self) -> &Path {
        self.picture_document_path.as_path()
    }

    /// Applies the typed Iced autotest launch command.
    ///
    /// # Errors
    ///
    /// Returns the first stop or autotest-window lifecycle error.
    pub fn update_autotest<H>(
        &mut self,
        message: AutoTestMessage,
        host: &mut H,
    ) -> Result<Task<AutoTestMessage>, H::Error>
    where
        H: LocalLlmAutoTestHost,
    {
        match message {
            AutoTestMessage::Launch => self.autotest_clicked(host)?,
        }
        Ok(Task::none())
    }

    /// Implements Ghidra function `FUN_01a58f90` at `0x01A58F90`.
    ///
    /// The launch first runs the full stop path. It then removes
    /// `log_short.json` and `log.json` when present and ignores delete results.
    /// Finally, it creates the recovered autotest window, stores application
    /// ownership, and enables and shows the stored Iced window in that order.
    ///
    /// # Errors
    ///
    /// Returns the first stop, construction, storage, enable, or show error.
    /// Later steps do not run after an error.
    pub fn autotest_clicked<H>(&self, host: &mut H) -> Result<(), H::Error>
    where
        H: LocalLlmAutoTestHost,
    {
        host.stop_request(true)?;
        let temporary_directory = host.temporary_directory().to_owned();
        for file_name in [SHORT_LOG_FILE_NAME, FULL_LOG_FILE_NAME] {
            let path = temporary_directory.join(file_name);
            if path.exists() {
                drop(fs::remove_file(path));
            }
        }
        let window = host.create_autotest_window()?;
        host.store_autotest_window(window)?;
        host.enable_and_show_autotest_window()
    }

    /// Implements Ghidra function `FUN_01a54d10` at `0x01A54D10`.
    ///
    /// This is the `log_short.json` counterpart of full-log export. It uses
    /// the same Iced, rfd, UTF-8 load, cancellation, and destination-write
    /// pipeline. Only the internal source file differs.
    pub fn save_short_log_clicked(&self, log_directory: &Path) -> Task<LogSaveMessage> {
        Task::perform(
            select_and_save_log(log_directory.join(SHORT_LOG_FILE_NAME)),
            LogSaveMessage::Completed,
        )
    }

    /// Implements Ghidra function `FUN_01a54ae0` at `0x01A54AE0`.
    ///
    /// The Iced task loads `log.json` before `rfd::AsyncFileDialog` is opened.
    /// An absent or unreadable UTF-8 source stops without a dialog. The dialog
    /// uses the recovered LOG filter and `file.log` proposal. Cancellation is
    /// a no-op; acceptance writes the loaded text as UTF-8.
    pub fn save_full_log_clicked(&self, log_directory: &Path) -> Task<LogSaveMessage> {
        Task::perform(
            select_and_save_log(log_directory.join(FULL_LOG_FILE_NAME)),
            LogSaveMessage::Completed,
        )
    }

    /// Implements Ghidra function `FUN_01a54930` at `0x01A54930`.
    ///
    /// `rfd::AsyncFileDialog` supplies the maintained native save dialog with
    /// the recovered TXT filter and `file.txt` proposal. Cancellation does not
    /// write. Acceptance saves the complete chat as UTF-8 through an Iced task,
    /// including an accepted empty chat.
    pub fn save_chat_clicked(&self) -> Task<ChatSaveMessage> {
        Task::perform(
            select_and_save_chat(self.chat_text()),
            ChatSaveMessage::Completed,
        )
    }

    #[must_use]
    pub fn chat_text(&self) -> String {
        if self.chat_lines.is_empty() {
            String::new()
        } else {
            let mut text = self.chat_lines.join("\r\n");
            text.push_str("\r\n");
            text
        }
    }

    /// Applies the typed Iced New Chat command.
    ///
    /// # Errors
    ///
    /// Returns the seed-text loading error.
    pub fn update_new_chat<H>(
        &mut self,
        message: NewChatMessage,
        host: &mut H,
    ) -> Result<Task<NewChatMessage>, H::Error>
    where
        H: LocalLlmSeedTextHost,
    {
        match message {
            NewChatMessage::Requested => self.new_chat_clicked(host)?,
        }
        Ok(Task::none())
    }

    /// Implements Ghidra function `FUN_01a53180` at `0x01A53180`.
    ///
    /// A new chat sets the recovered reset state and clears all current chat
    /// lines before it loads optional configured seed text. With no configured
    /// path, the chat stays empty. Loaded text is preceded by `Assistant:` and
    /// followed by one blank line.
    ///
    /// # Errors
    ///
    /// Returns the host path or file-load error. The reset state and earlier
    /// chat clear are not rolled back.
    pub fn new_chat_clicked<H>(&mut self, host: &mut H) -> Result<(), H::Error>
    where
        H: LocalLlmSeedTextHost,
    {
        self.chat_reset_state = ChatResetState::Pending;
        self.chat_lines.clear();
        let Some(seed_lines) = host.load_seed_lines()? else {
            return Ok(());
        };
        self.chat_lines.push("Assistant:".to_owned());
        self.chat_lines.extend(seed_lines);
        self.chat_lines.push(String::new());
        Ok(())
    }

    #[must_use]
    pub fn chat_lines(&self) -> &[String] {
        &self.chat_lines
    }

    #[must_use]
    pub const fn chat_reset_pending(&self) -> bool {
        matches!(self.chat_reset_state, ChatResetState::Pending)
    }

    /// Implements Ghidra function `FUN_01a53170` at `0x01A53170`.
    ///
    /// The Exit menu delegates to the shared Iced close coordinator. That
    /// coordinator retains ownership of close-query vetoes, close actions,
    /// cleanup, and the final native window-close task. This wrapper does not
    /// force release or set a modal result.
    pub fn exit_clicked(&self, host: &mut impl LocalLlmWindowCloseWorkflow) -> Task<ExitMessage> {
        host.request_close()
    }

    /// Applies the typed Iced temporary-file cleanup command.
    ///
    /// # Errors
    ///
    /// Returns the host completion-message error.
    pub fn update_temp_cleanup<H>(
        &mut self,
        message: TempCleanupMessage,
        host: &mut H,
    ) -> Result<Task<TempCleanupMessage>, H::Error>
    where
        H: LocalLlmTempCleanupHost,
    {
        match message {
            TempCleanupMessage::DeleteFiles => self.delete_temp_files_clicked(host)?,
        }
        Ok(Task::none())
    }

    /// Implements Ghidra function `FUN_01a530e0` at `0x01A530E0`.
    ///
    /// The standard library enumerates one temporary-directory level and
    /// attempts to remove each entry as a file. Enumeration-entry and delete
    /// errors are ignored, and subdirectories are not removed recursively.
    /// The completion message is shown after every cleanup attempt, including
    /// an unreadable or empty directory.
    ///
    /// # Errors
    ///
    /// Returns the host completion-message error.
    pub fn delete_temp_files_clicked<H>(&self, host: &mut H) -> Result<(), H::Error>
    where
        H: LocalLlmTempCleanupHost,
    {
        delete_temp_files(host.temporary_directory());
        host.show_temp_files_deleted()
    }

    /// Applies the typed Iced keypress event for the user combo.
    ///
    /// # Errors
    ///
    /// Returns the shared request-pipeline error.
    pub fn update_user_key_press<H>(
        &mut self,
        message: UserKeyPressMessage,
        host: &mut H,
    ) -> Result<(Task<UserKeyPressMessage>, UserKeyPressOutcome), H::Error>
    where
        H: LocalLlmRequestWorkflow,
    {
        let outcome = match message {
            UserKeyPressMessage::Pressed(key) => self.user_key_pressed(&key, host)?,
        };
        Ok((Task::none(), outcome))
    }

    /// Implements Ghidra function `FUN_01a53000` at `0x01A53000`.
    ///
    /// Non-Enter keys are unchanged. Enter adds the current user text when it
    /// is absent, invokes the shared request pipeline with forced
    /// preprocessing, and reports the key as submitted so the Iced event is
    /// consumed. Existing entries keep their position and are not duplicated.
    ///
    /// # Errors
    ///
    /// Returns the shared request-pipeline error. A newly added user remains
    /// in the list when that later operation fails.
    pub fn user_key_pressed<H>(
        &mut self,
        key: &Key,
        host: &mut H,
    ) -> Result<UserKeyPressOutcome, H::Error>
    where
        H: LocalLlmRequestWorkflow,
    {
        if !matches!(key, Key::Named(Named::Enter)) {
            return Ok(UserKeyPressOutcome::Ignored);
        }

        if !self
            .user_entries
            .iter()
            .any(|entry| entry == &self.selected_user)
        {
            self.user_entries.push(self.selected_user.clone());
        }
        host.process_request(&self.selected_user, true)?;
        Ok(UserKeyPressOutcome::Submitted)
    }

    #[must_use]
    pub fn user_entries(&self) -> &[String] {
        &self.user_entries
    }

    /// Applies the typed Iced user-selection event.
    ///
    /// # Errors
    ///
    /// Returns the shared request-pipeline error.
    pub fn update_user_selection<H>(
        &mut self,
        message: UserSelectionMessage,
        host: &mut H,
    ) -> Result<Task<UserSelectionMessage>, H::Error>
    where
        H: LocalLlmRequestWorkflow,
    {
        match message {
            UserSelectionMessage::Selected(selected_user) => {
                self.user_selected(selected_user, host)?;
            }
        }
        Ok(Task::none())
    }

    /// Implements Ghidra function `FUN_01a52f60` at `0x01A52F60`.
    ///
    /// Iced supplies the selected combo value directly, replacing the VCL
    /// index and item-list lookup. The value becomes the displayed selection
    /// before the shared request pipeline starts with forced preprocessing.
    ///
    /// # Errors
    ///
    /// Returns the shared request-pipeline error. The selected value remains
    /// applied when that later operation fails.
    pub fn user_selected<H>(&mut self, selected_user: String, host: &mut H) -> Result<(), H::Error>
    where
        H: LocalLlmRequestWorkflow,
    {
        self.selected_user = selected_user;
        host.process_request(&self.selected_user, true)
    }

    #[must_use]
    pub fn selected_user(&self) -> &str {
        &self.selected_user
    }

    /// Applies the typed Iced model-management command.
    ///
    /// # Errors
    ///
    /// Returns the first model-management host error.
    pub fn update_model_management<H>(
        &mut self,
        message: ModelManagementMessage,
        host: &mut H,
    ) -> Result<(Task<ModelManagementMessage>, ModelManagementOutcome), H::Error>
    where
        H: LocalLlmModelManagementHost,
    {
        let outcome = match message {
            ModelManagementMessage::Open => self.model_downloader_clicked(host)?,
        };
        Ok((Task::none(), outcome))
    }

    /// Implements Ghidra function `FUN_01a47b10` at `0x01A47B10`.
    ///
    /// LM Studio owns its downloads, so that interface only receives manual
    /// download guidance. Other interfaces open the modal model manager in
    /// mode `4` and refresh models after the dialog closes, independent of its
    /// modal result. A successful refresh replaces the configured model. A
    /// refresh with no selection keeps the prior model.
    ///
    /// # Errors
    ///
    /// Returns the first host message, dialog, or refresh error. Later steps
    /// do not run after an error.
    pub fn model_downloader_clicked<H>(
        &mut self,
        host: &mut H,
    ) -> Result<ModelManagementOutcome, H::Error>
    where
        H: LocalLlmModelManagementHost,
    {
        if self.configuration.interface_index == 1 {
            host.explain_lm_studio_manual_download()?;
            return Ok(ModelManagementOutcome::ManualDownloadExplained);
        }

        host.show_model_manager(4)?;
        let Some(selected_model) = host.refresh_models()? else {
            return Ok(ModelManagementOutcome::PriorModelKept);
        };
        self.configuration.model = selected_model;
        Ok(ModelManagementOutcome::ModelUpdated)
    }

    /// Applies the iced timer message and returns the observable tick outcome.
    ///
    /// # Errors
    ///
    /// Returns the first timer-workflow error.
    pub fn update_timer<H>(
        &mut self,
        message: TimerMessage,
        host: &mut H,
    ) -> Result<(Task<TimerMessage>, TimerTickOutcome), H::Error>
    where
        H: LocalLlmTimerWorkflow,
    {
        let outcome = match message {
            TimerMessage::Tick => self.timer_tick(host)?,
        };
        Ok((Task::none(), outcome))
    }

    /// Implements Ghidra function `FUN_01a45e10` at `0x01A45E10`.
    ///
    /// The timer rejects reentrant calls, then processes the Python error
    /// marker, framework and log polling, timeout recovery, progress window,
    /// answer file, completion marker, structured-answer state, and follow-up
    /// housekeeping in recovered order. Normal and deliberate early exits
    /// clear the guard. A host error escapes without clearing it, matching the
    /// recovered absence of a local exception handler.
    ///
    /// # Errors
    ///
    /// Returns the first host phase error and does not execute later phases.
    pub fn timer_tick<H>(&mut self, host: &mut H) -> Result<TimerTickOutcome, H::Error>
    where
        H: LocalLlmTimerWorkflow,
    {
        if self.timer_in_progress {
            return Ok(TimerTickOutcome::SkippedReentrant);
        }
        self.timer_in_progress = true;
        host.inspect_python_error_marker()?;
        if host.poll_framework_and_log()? == TimerFlow::FinishTick {
            self.timer_in_progress = false;
            return Ok(TimerTickOutcome::FinishedEarly);
        }
        if host.handle_timeout_state()? == TimerFlow::FinishTick {
            self.timer_in_progress = false;
            return Ok(TimerTickOutcome::FinishedEarly);
        }
        host.update_progress_window()?;
        if host.consume_answer_file()? == TimerFlow::FinishTick {
            self.timer_in_progress = false;
            return Ok(TimerTickOutcome::FinishedEarly);
        }
        host.consume_completion_marker()?;
        host.finish_timer_tick()?;
        self.timer_in_progress = false;
        Ok(TimerTickOutcome::Completed)
    }

    #[must_use]
    pub const fn timer_in_progress(&self) -> bool {
        self.timer_in_progress
    }

    /// Applies the typed iced Save As command through the shared exporter.
    ///
    /// # Errors
    ///
    /// Returns the shared dialog or file output error.
    pub fn update_save<H>(
        &mut self,
        message: SaveMessage,
        host: &mut H,
    ) -> Result<Task<SaveMessage>, H::Error>
    where
        H: LocalLlmChatSaveWorkflow,
    {
        match message {
            SaveMessage::SaveAsRequested => self.save_as_clicked(host)?,
        }
        Ok(Task::none())
    }

    /// Implements Ghidra function `FUN_01a43120` at `0x01A43120`.
    ///
    /// The File > Save As command delegates directly to the shared chat text
    /// exporter. The wrapper adds no dialog, cancellation, or file branch.
    ///
    /// # Errors
    ///
    /// Returns the shared dialog or text-file output error.
    pub fn save_as_clicked<H>(&mut self, host: &mut H) -> Result<(), H::Error>
    where
        H: LocalLlmChatSaveWorkflow,
    {
        host.save_chat()
    }

    /// Applies the typed iced stop command through the shared stop workflow.
    ///
    /// # Errors
    ///
    /// Returns the shared stop error.
    pub fn update_stop<H>(
        &mut self,
        message: StopMessage,
        host: &mut H,
    ) -> Result<Task<StopMessage>, H::Error>
    where
        H: LocalLlmStopWorkflow,
    {
        match message {
            StopMessage::StopRequested => self.stop_clicked(host)?,
        }
        Ok(Task::none())
    }

    /// Implements Ghidra function `FUN_01a43000` at `0x01A43000`.
    ///
    /// The Stop button delegates to the shared request stop with full cleanup
    /// enabled. The wrapper adds no worker-state branch or file decision.
    ///
    /// # Errors
    ///
    /// Returns the shared stop or marker-file cleanup error.
    pub fn stop_clicked<H>(&mut self, host: &mut H) -> Result<(), H::Error>
    where
        H: LocalLlmStopWorkflow,
    {
        host.stop_request(true)
    }

    pub fn update(
        &mut self,
        message: Message,
        options: &mut impl LocalLlmOptionsWorkflow,
    ) -> Task<Message> {
        match message {
            Message::OptionsSelected => self.options_menu_clicked(options),
            Message::AloudChanged(checked) => self.aloud_clicked(checked),
            Message::ModelClicked => self.model_clicked(options),
            Message::Resized => self.form_resize(),
        }
        Task::none()
    }

    /// Implements Ghidra function `FUN_01a40130` at `0x01A40130`.
    ///
    /// The File > Options command delegates directly to the shared local-LLM
    /// options transaction. The wrapper adds no sender branch, setting change,
    /// cancellation rule, refresh operation, or error handling of its own.
    pub fn options_menu_clicked(&self, options: &mut impl LocalLlmOptionsWorkflow) {
        options.show_options();
    }

    /// Implements Ghidra function `FUN_01a42420` at `0x01A42420`.
    ///
    /// Clicking the model field delegates directly to the same local-LLM
    /// options transaction as the menu command. It does not read or edit the
    /// model text and adds no sender-dependent behavior.
    pub fn model_clicked(&self, options: &mut impl LocalLlmOptionsWorkflow) {
        options.show_options();
    }

    /// Implements Ghidra function `FUN_01a42840` at `0x01A42840`.
    ///
    /// The current configuration is staged in a modal edit. Cancellation is a
    /// complete no-op. Acceptance applies a permitted voice change and commits
    /// the edit. A framework change stops framework 2 or requests closure of
    /// another old framework before model preparation. Every accepted edit
    /// rebuilds request state and refreshes the displayed model.
    ///
    /// # Errors
    ///
    /// Returns the first modal or host-operation error. Changes completed after
    /// acceptance remain applied.
    pub fn options_button_clicked<H>(
        &mut self,
        host: &mut H,
    ) -> Result<OptionsApplyOutcome, H::Error>
    where
        H: LocalLlmOptionsHost,
    {
        let Some(edited) = host.edit_options(&self.configuration)? else {
            return Ok(OptionsApplyOutcome::Cancelled);
        };
        let old_interface = self.configuration.interface_index;
        if self.configuration.voice_index != edited.voice_index && host.voice_update_permitted() {
            host.apply_voice(edited.voice_index)?;
        }
        self.configuration = edited;
        if old_interface != self.configuration.interface_index {
            if old_interface == 2 {
                host.stop_framework_two()?;
            } else {
                host.request_framework_close(framework_name(old_interface))?;
            }
            self.configuration.model = host.prepare_framework_and_models()?;
        }
        host.rebuild_request_state()?;
        host.update_model_display()?;
        Ok(OptionsApplyOutcome::Applied)
    }

    /// Implements Ghidra function `FUN_01a40470` at `0x01A40470`.
    ///
    /// Form creation resets owned runtime state, discovers the Python home,
    /// builds the `tpack_t` runner directory, prepares the fixed filter terms,
    /// and loads persisted model settings. Missing settings select the two
    /// recovered model defaults. Setup becomes complete only after all host
    /// reads succeed, and the help context is then set to `0x4B4`.
    ///
    /// # Errors
    ///
    /// Returns the host Python-discovery or settings error. Setup remains
    /// incomplete when an error escapes.
    pub fn form_create<H>(&mut self, host: &mut H) -> Result<(), H::Error>
    where
        H: LocalLlmCreateHost,
    {
        *self = Self::default();
        self.python_home = host.python_home()?;
        self.runner_directory = self
            .python_home
            .join("Lib")
            .join("site-packages")
            .join("tpack_t")
            .join("runner");
        self.filter_terms = FILTER_TERMS.iter().map(ToString::to_string).collect();
        self.configuration = host
            .load_configuration()?
            .unwrap_or_else(|| LocalLlmConfiguration {
                model: DEFAULT_MODEL.to_owned(),
                embeddings_model: DEFAULT_EMBEDDINGS_MODEL.to_owned(),
                flags: 0,
                interface_index: 0,
                voice_index: 0,
            });
        self.setup_complete = true;
        self.help_context = HELP_CONTEXT;
        Ok(())
    }

    #[must_use]
    pub const fn configuration(&self) -> &LocalLlmConfiguration {
        &self.configuration
    }

    #[must_use]
    pub fn filter_terms(&self) -> &[String] {
        &self.filter_terms
    }

    #[must_use]
    pub const fn python_home(&self) -> &PathBuf {
        &self.python_home
    }

    #[must_use]
    pub const fn runner_directory(&self) -> &PathBuf {
        &self.runner_directory
    }

    #[must_use]
    pub const fn setup_complete(&self) -> bool {
        self.setup_complete
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    /// Implements Ghidra function `FUN_01a40a90` at `0x01A40A90`.
    ///
    /// The checkbox state is retained for iced rendering. While setup is not
    /// complete, settings are unchanged. After setup, only aloud-mode bit 0 is
    /// set or cleared and every other configuration flag is preserved.
    pub const fn aloud_clicked(&mut self, checked: bool) {
        self.aloud_checked = checked;
        if self.setup_complete {
            if checked {
                self.configuration.flags |= 1;
            } else {
                self.configuration.flags &= !1;
            }
        }
    }

    #[must_use]
    pub const fn aloud_checked(&self) -> bool {
        self.aloud_checked
    }

    /// Implements Ghidra function `FUN_01a40c10` at `0x01A40C10`.
    ///
    /// The show event prepares controls, optional sample questions, GPU state,
    /// and runtime endpoints before it checks the selected local framework. A
    /// missing framework shows the host warning and closes the form. An
    /// installed framework runs model, log, prompt, geometry, and editor
    /// initialization. Both normal branches write the final show diagnostic.
    /// Application-owned file, process, platform, and framework operations
    /// stay in the typed host workflow.
    ///
    /// # Errors
    ///
    /// Returns the first host workflow error and does not run later steps.
    pub fn form_show<H>(&mut self, host: &mut H) -> Result<ShowOutcome, H::Error>
    where
        H: LocalLlmShowWorkflow,
    {
        host.prepare_controls_and_diagnostics()?;
        host.load_sample_questions_if_present()?;
        host.detect_and_apply_gpu()?;
        host.prepare_runtime_endpoints()?;
        let outcome = if host.framework_is_installed()? {
            host.initialize_installed_framework()?;
            ShowOutcome::Ready
        } else {
            host.show_missing_environment_and_close()?;
            ShowOutcome::ClosedForMissingFramework
        };
        host.finish_show()?;
        Ok(outcome)
    }

    /// Implements Ghidra function `FUN_01a41ff0` at `0x01A41FF0`.
    ///
    /// Closing stops active work, conditionally saves worker state for local
    /// interface mode 2, clears `PYTHONHOME`, releases a shared runtime when it
    /// exists, cleans up windows and services, persists settings, and selects
    /// the owned-window release action.
    ///
    /// # Errors
    ///
    /// Returns the first host cleanup error. Later cleanup and the free action
    /// are not applied after that error.
    pub fn form_close<H>(&mut self, action: &mut CloseAction, host: &mut H) -> Result<(), H::Error>
    where
        H: LocalLlmCloseWorkflow,
    {
        host.stop_worker()?;
        if self.close_state.worker_active
            && self.configuration.interface_index == 2
            && self.close_state.save_requested
        {
            host.save_worker_state()?;
        }
        host.clear_python_home()?;
        self.close_state.shared_runtime_released = host.release_shared_runtime_if_present()?;
        host.clean_up_windows()?;
        host.shut_down_services()?;
        host.persist_configuration()?;
        *action = CloseAction::Free;
        Ok(())
    }

    pub const fn close_state_mut(&mut self) -> &mut CloseState {
        &mut self.close_state
    }

    /// Implements Ghidra function `FUN_01a420d0` at `0x01A420D0`.
    ///
    /// Consuming the window releases every owned collection, configuration,
    /// path, and runtime state through Rust ownership. The host clears its
    /// global form reference before the owned state is dropped, then performs
    /// the recovered final application cleanup.
    pub fn form_destroy(self, host: &mut impl LocalLlmDestroyWorkflow) {
        host.clear_global_form_reference();
        drop(self);
        host.finish_destroy();
    }

    /// Implements Ghidra function `FUN_01a421e0` at `0x01A421E0`.
    ///
    /// The recovered resize event is empty. Iced performs responsive layout,
    /// so the event has no application state or host side effect.
    pub const fn form_resize(&self) {}
}

fn delete_temp_files(directory: &Path) {
    let Ok(entries) = fs::read_dir(directory) else {
        return;
    };
    for entry in entries.flatten() {
        drop(fs::remove_file(entry.path()));
    }
}

fn collect_picture_batch_items(root: &Path) -> VecDeque<PictureBatchItem> {
    let mut items = VecDeque::new();
    append_picture_batch_files(root, "tsc", PictureBatchItem::CurrentCircuit, &mut items);
    append_picture_batch_files(
        &root.join("Ext"),
        "png",
        |picture| PictureBatchItem::ExternalPicture {
            netlist: picture.with_extension("cir"),
            picture,
        },
        &mut items,
    );
    items
}

fn append_picture_batch_files(
    directory: &Path,
    extension: &str,
    map: impl Fn(PathBuf) -> PictureBatchItem,
    items: &mut VecDeque<PictureBatchItem>,
) {
    let Ok(entries) = fs::read_dir(directory) else {
        return;
    };
    items.extend(entries.filter_map(Result::ok).filter_map(|entry| {
        let is_file = entry.file_type().is_ok_and(|file_type| !file_type.is_dir());
        let path = entry.path();
        let matches_extension = path
            .extension()
            .is_some_and(|value| value.eq_ignore_ascii_case(extension));
        (is_file && matches_extension).then(|| map(path))
    }));
}

async fn select_and_save_chat(chat_text: String) -> Result<ChatSaveOutcome, String> {
    let selected_path = AsyncFileDialog::new()
        .add_filter("Text file", &["txt"])
        .set_file_name(CHAT_SAVE_DEFAULT_FILE_NAME)
        .save_file()
        .await
        .map(|file| file.path().to_owned());
    write_selected_chat(selected_path.as_deref(), &chat_text).map_err(|error| error.to_string())
}

fn write_selected_chat(path: Option<&Path>, chat_text: &str) -> std::io::Result<ChatSaveOutcome> {
    let Some(path) = path else {
        return Ok(ChatSaveOutcome::Cancelled);
    };
    fs::write(path, chat_text)?;
    Ok(ChatSaveOutcome::Saved)
}

async fn select_and_save_log(source_path: PathBuf) -> Result<LogSaveOutcome, String> {
    let Some(log_text) = load_log_for_export(&source_path) else {
        return Ok(LogSaveOutcome::SourceUnavailable);
    };
    let selected_path = AsyncFileDialog::new()
        .add_filter("Log file", &["log"])
        .set_file_name(LOG_SAVE_DEFAULT_FILE_NAME)
        .save_file()
        .await
        .map(|file| file.path().to_owned());
    write_selected_log(selected_path.as_deref(), &log_text).map_err(|error| error.to_string())
}

fn load_log_for_export(source_path: &Path) -> Option<String> {
    fs::read_to_string(source_path).ok()
}

fn write_selected_log(path: Option<&Path>, log_text: &str) -> std::io::Result<LogSaveOutcome> {
    let Some(path) = path else {
        return Ok(LogSaveOutcome::Cancelled);
    };
    fs::write(path, log_text)?;
    Ok(LogSaveOutcome::Saved)
}

const fn framework_name(interface_index: i32) -> &'static str {
    match interface_index {
        0 => "Ollama",
        1 => "LM Studio",
        _ => "llamafile",
    }
}

#[cfg(test)]
mod tests {
    use std::{
        fs,
        path::{Path, PathBuf},
        sync::atomic::{AtomicUsize, Ordering},
        time::{Duration, Instant},
    };

    use super::{
        AutoTestMessage, ChatSaveOutcome, CloseAction, ExitMessage, ExternalPictureMessage,
        ExternalPictureOutcome, ExternalPictureSelection, FILTER_TERMS, HELP_CONTEXT,
        LocalLlmAutoTestHost, LocalLlmChatSaveWorkflow, LocalLlmCloseWorkflow,
        LocalLlmConfiguration, LocalLlmCreateHost, LocalLlmCurrentPictureWorkflow,
        LocalLlmDestroyWorkflow, LocalLlmExternalPictureWorkflow, LocalLlmModelManagementHost,
        LocalLlmOptionsHost, LocalLlmOptionsWorkflow, LocalLlmPictureBatchHost,
        LocalLlmRequestWorkflow, LocalLlmSeedTextHost, LocalLlmShowWorkflow, LocalLlmStopWorkflow,
        LocalLlmTempCleanupHost, LocalLlmTimerWorkflow, LocalLlmWindow,
        LocalLlmWindowCloseWorkflow, LogSaveOutcome, Message, ModelManagementMessage,
        ModelManagementOutcome, NewChatMessage, OptionsApplyOutcome, PICTURE_BATCH_DELAY,
        PictureBatchStatus, PictureImportMessage, PictureImportOrigin, PictureImportSource,
        SHORT_LOG_FILE_NAME, SaveMessage, ShowOutcome, StopMessage, TempCleanupMessage, TimerFlow,
        TimerMessage, TimerTickOutcome, UserKeyPressMessage, UserKeyPressOutcome,
        UserSelectionMessage, load_log_for_export, write_selected_chat, write_selected_log,
    };
    use iced::keyboard::{Key, key::Named};

    #[derive(Default)]
    struct OptionsWorkflow {
        calls: usize,
    }

    struct OptionsHost {
        edited: Option<LocalLlmConfiguration>,
        voice_permitted: bool,
        prepared_model: String,
        calls: Vec<String>,
    }

    struct ModelManagementHost {
        refreshed_model: Option<String>,
        fail_at: Option<&'static str>,
        calls: Vec<String>,
    }

    impl ModelManagementHost {
        fn call(&mut self, name: &'static str) -> Result<(), &'static str> {
            self.calls.push(name.to_owned());
            if self.fail_at == Some(name) {
                Err(name)
            } else {
                Ok(())
            }
        }
    }

    impl LocalLlmModelManagementHost for ModelManagementHost {
        type Error = &'static str;

        fn explain_lm_studio_manual_download(&mut self) -> Result<(), Self::Error> {
            self.call("explain-manual-download")
        }

        fn show_model_manager(&mut self, mode: u32) -> Result<(), Self::Error> {
            self.calls.push(format!("show-model-manager:{mode}"));
            if self.fail_at == Some("show-model-manager") {
                Err("show-model-manager")
            } else {
                Ok(())
            }
        }

        fn refresh_models(&mut self) -> Result<Option<String>, Self::Error> {
            self.call("refresh-models")?;
            Ok(self.refreshed_model.clone())
        }
    }

    #[derive(Default)]
    struct RequestWorkflow {
        fail: bool,
        calls: Vec<(String, bool)>,
    }

    impl LocalLlmRequestWorkflow for RequestWorkflow {
        type Error = &'static str;

        fn process_request(
            &mut self,
            selected_user: &str,
            force_preprocessing: bool,
        ) -> Result<(), Self::Error> {
            self.calls
                .push((selected_user.to_owned(), force_preprocessing));
            if self.fail {
                Err("request failed")
            } else {
                Ok(())
            }
        }
    }

    struct AutoTestHost {
        directory: PathBuf,
        fail_at: Option<&'static str>,
        calls: Vec<String>,
        stored_window: Option<u32>,
    }

    impl AutoTestHost {
        fn call(&mut self, name: &'static str) -> Result<(), &'static str> {
            self.calls.push(name.to_owned());
            if self.fail_at == Some(name) {
                Err(name)
            } else {
                Ok(())
            }
        }
    }

    impl LocalLlmStopWorkflow for AutoTestHost {
        type Error = &'static str;

        fn stop_request(&mut self, full_stop: bool) -> Result<(), Self::Error> {
            self.calls.push(format!("stop:{full_stop}"));
            if self.fail_at == Some("stop") {
                Err("stop")
            } else {
                Ok(())
            }
        }
    }

    impl LocalLlmAutoTestHost for AutoTestHost {
        type AutoTestWindow = u32;

        fn temporary_directory(&self) -> &Path {
            &self.directory
        }

        fn create_autotest_window(&mut self) -> Result<Self::AutoTestWindow, Self::Error> {
            self.call("create")?;
            Ok(7)
        }

        fn store_autotest_window(
            &mut self,
            window: Self::AutoTestWindow,
        ) -> Result<(), Self::Error> {
            self.call("store")?;
            self.stored_window = Some(window);
            Ok(())
        }

        fn enable_and_show_autotest_window(&mut self) -> Result<(), Self::Error> {
            self.call("enable-and-show")
        }
    }

    struct CurrentPictureWorkflow {
        document_path: PathBuf,
        fail: bool,
        calls: Vec<(PathBuf, PictureImportOrigin)>,
    }

    impl LocalLlmCurrentPictureWorkflow for CurrentPictureWorkflow {
        type Error = &'static str;

        fn current_document_path(&self) -> PathBuf {
            self.document_path.clone()
        }

        fn prepare_current_circuit_picture(
            &mut self,
            document_path: &Path,
            origin: PictureImportOrigin,
        ) -> Result<(), Self::Error> {
            self.calls.push((document_path.to_owned(), origin));
            if self.fail {
                Err("picture preparation failed")
            } else {
                Ok(())
            }
        }
    }

    struct ExternalPictureWorkflow {
        selection: Option<ExternalPictureSelection>,
        fail_at: Option<&'static str>,
        calls: Vec<&'static str>,
        requests: Vec<(Option<PathBuf>, PathBuf)>,
    }

    impl ExternalPictureWorkflow {
        fn call(&mut self, name: &'static str) -> Result<(), &'static str> {
            self.calls.push(name);
            if self.fail_at == Some(name) {
                Err(name)
            } else {
                Ok(())
            }
        }
    }

    impl LocalLlmExternalPictureWorkflow for ExternalPictureWorkflow {
        type Error = &'static str;

        fn select_external_picture(
            &mut self,
        ) -> Result<Option<ExternalPictureSelection>, Self::Error> {
            self.call("select")?;
            Ok(self.selection.clone())
        }

        fn show_missing_picture_error(&mut self) -> Result<(), Self::Error> {
            self.call("missing-picture")
        }

        fn show_missing_netlist_warning(&mut self) -> Result<(), Self::Error> {
            self.call("missing-netlist")
        }

        fn prepare_external_picture(
            &mut self,
            netlist_path: Option<&Path>,
            picture_path: &Path,
        ) -> Result<(), Self::Error> {
            self.call("prepare")?;
            self.requests
                .push((netlist_path.map(Path::to_owned), picture_path.to_owned()));
            Ok(())
        }
    }

    struct PictureBatchHost {
        busy: bool,
        fail_at: Option<&'static str>,
        calls: Vec<String>,
    }

    impl PictureBatchHost {
        fn record(&mut self, call: String, failure_name: &'static str) -> Result<(), &'static str> {
            self.calls.push(call);
            if self.fail_at == Some(failure_name) {
                Err(failure_name)
            } else {
                Ok(())
            }
        }
    }

    impl LocalLlmPictureBatchHost for PictureBatchHost {
        type Error = &'static str;

        fn open_document(&mut self, path: &Path) -> Result<(), Self::Error> {
            self.record(format!("open:{}", path.display()), "open")
        }

        fn start_current_picture(&mut self, path: &Path) -> Result<(), Self::Error> {
            self.record(format!("current:{}", path.display()), "current")
        }

        fn start_external_picture(
            &mut self,
            netlist_path: &Path,
            picture_path: &Path,
        ) -> Result<(), Self::Error> {
            self.record(
                format!(
                    "external:{}:{}",
                    netlist_path.display(),
                    picture_path.display()
                ),
                "external",
            )
        }

        fn picture_request_busy(&self) -> bool {
            self.busy
        }
    }

    struct TempCleanupHost {
        directory: PathBuf,
        message_calls: usize,
        fail_message: bool,
    }

    impl LocalLlmTempCleanupHost for TempCleanupHost {
        type Error = &'static str;

        fn temporary_directory(&self) -> &Path {
            &self.directory
        }

        fn show_temp_files_deleted(&mut self) -> Result<(), Self::Error> {
            self.message_calls += 1;
            if self.fail_message {
                Err("message failed")
            } else {
                Ok(())
            }
        }
    }

    #[derive(Default)]
    struct WindowCloseWorkflow {
        calls: usize,
    }

    impl LocalLlmWindowCloseWorkflow for WindowCloseWorkflow {
        fn request_close(&mut self) -> iced::Task<ExitMessage> {
            self.calls += 1;
            iced::Task::none()
        }
    }

    struct SeedTextHost {
        lines: Option<Vec<String>>,
        fail: bool,
        calls: usize,
    }

    impl LocalLlmSeedTextHost for SeedTextHost {
        type Error = &'static str;

        fn load_seed_lines(&mut self) -> Result<Option<Vec<String>>, Self::Error> {
            self.calls += 1;
            if self.fail {
                Err("seed load failed")
            } else {
                Ok(self.lines.clone())
            }
        }
    }

    fn test_temp_directory(name: &str) -> PathBuf {
        static NEXT_ID: AtomicUsize = AtomicUsize::new(0);
        let id = NEXT_ID.fetch_add(1, Ordering::Relaxed);
        PathBuf::from(env!("CARGO_MANIFEST_DIR"))
            .join("..")
            .join("..")
            .join(".temp")
            .join(format!("local-llm-{name}-{}-{id}", std::process::id()))
    }

    impl LocalLlmOptionsHost for OptionsHost {
        type Error = &'static str;

        fn edit_options(
            &mut self,
            current: &LocalLlmConfiguration,
        ) -> Result<Option<LocalLlmConfiguration>, Self::Error> {
            self.calls.push(format!("edit:{}", current.interface_index));
            Ok(self.edited.clone())
        }

        fn voice_update_permitted(&mut self) -> bool {
            self.voice_permitted
        }
        fn apply_voice(&mut self, voice_index: i32) -> Result<(), Self::Error> {
            self.calls.push(format!("voice:{voice_index}"));
            Ok(())
        }
        fn stop_framework_two(&mut self) -> Result<(), Self::Error> {
            self.calls.push("stop-two".to_owned());
            Ok(())
        }
        fn request_framework_close(&mut self, name: &str) -> Result<(), Self::Error> {
            self.calls.push(format!("close:{name}"));
            Ok(())
        }
        fn prepare_framework_and_models(&mut self) -> Result<String, Self::Error> {
            self.calls.push("prepare".to_owned());
            Ok(self.prepared_model.clone())
        }
        fn rebuild_request_state(&mut self) -> Result<(), Self::Error> {
            self.calls.push("rebuild".to_owned());
            Ok(())
        }
        fn update_model_display(&mut self) -> Result<(), Self::Error> {
            self.calls.push("display".to_owned());
            Ok(())
        }
    }

    struct CreateHost {
        configuration: Option<LocalLlmConfiguration>,
        fail_load: bool,
    }

    impl LocalLlmCreateHost for CreateHost {
        type Error = &'static str;

        fn python_home(&mut self) -> Result<PathBuf, Self::Error> {
            Ok(PathBuf::from("python-home"))
        }

        fn load_configuration(&mut self) -> Result<Option<LocalLlmConfiguration>, Self::Error> {
            if self.fail_load {
                Err("settings unavailable")
            } else {
                Ok(self.configuration.clone())
            }
        }
    }

    struct ShowWorkflow {
        installed: bool,
        fail_at: Option<&'static str>,
        calls: Vec<&'static str>,
    }

    impl ShowWorkflow {
        fn call(&mut self, name: &'static str) -> Result<(), &'static str> {
            self.calls.push(name);
            if self.fail_at == Some(name) {
                Err(name)
            } else {
                Ok(())
            }
        }
    }

    impl LocalLlmShowWorkflow for ShowWorkflow {
        type Error = &'static str;

        fn prepare_controls_and_diagnostics(&mut self) -> Result<(), Self::Error> {
            self.call("prepare-controls")
        }

        fn load_sample_questions_if_present(&mut self) -> Result<(), Self::Error> {
            self.call("load-samples")
        }

        fn detect_and_apply_gpu(&mut self) -> Result<(), Self::Error> {
            self.call("detect-gpu")
        }

        fn prepare_runtime_endpoints(&mut self) -> Result<(), Self::Error> {
            self.call("prepare-runtime")
        }

        fn framework_is_installed(&mut self) -> Result<bool, Self::Error> {
            self.call("detect-framework")?;
            Ok(self.installed)
        }

        fn show_missing_environment_and_close(&mut self) -> Result<(), Self::Error> {
            self.call("missing-and-close")
        }

        fn initialize_installed_framework(&mut self) -> Result<(), Self::Error> {
            self.call("initialize-framework")
        }

        fn finish_show(&mut self) -> Result<(), Self::Error> {
            self.call("finish")
        }
    }

    struct CloseWorkflow {
        runtime_present: bool,
        fail_at: Option<&'static str>,
        calls: Vec<&'static str>,
    }

    impl CloseWorkflow {
        fn call(&mut self, name: &'static str) -> Result<(), &'static str> {
            self.calls.push(name);
            if self.fail_at == Some(name) {
                Err(name)
            } else {
                Ok(())
            }
        }
    }

    impl LocalLlmCloseWorkflow for CloseWorkflow {
        type Error = &'static str;

        fn stop_worker(&mut self) -> Result<(), Self::Error> {
            self.call("stop")
        }
        fn save_worker_state(&mut self) -> Result<(), Self::Error> {
            self.call("save-worker")
        }
        fn clear_python_home(&mut self) -> Result<(), Self::Error> {
            self.call("clear-python-home")
        }
        fn release_shared_runtime_if_present(&mut self) -> Result<bool, Self::Error> {
            self.call("release-runtime")?;
            Ok(self.runtime_present)
        }
        fn clean_up_windows(&mut self) -> Result<(), Self::Error> {
            self.call("cleanup-windows")
        }
        fn shut_down_services(&mut self) -> Result<(), Self::Error> {
            self.call("shutdown-services")
        }
        fn persist_configuration(&mut self) -> Result<(), Self::Error> {
            self.call("persist")
        }
    }

    #[derive(Default)]
    struct DestroyWorkflow {
        calls: Vec<&'static str>,
    }

    impl LocalLlmDestroyWorkflow for DestroyWorkflow {
        fn clear_global_form_reference(&mut self) {
            self.calls.push("clear-global-form");
        }

        fn finish_destroy(&mut self) {
            self.calls.push("finish-destroy");
        }
    }

    impl LocalLlmOptionsWorkflow for OptionsWorkflow {
        fn show_options(&mut self) {
            self.calls += 1;
        }
    }

    #[derive(Default)]
    struct StopWorkflow {
        flags: Vec<bool>,
    }

    impl LocalLlmStopWorkflow for StopWorkflow {
        type Error = ();

        fn stop_request(&mut self, full_stop: bool) -> Result<(), Self::Error> {
            self.flags.push(full_stop);
            Ok(())
        }
    }

    #[derive(Default)]
    struct SaveWorkflow {
        calls: usize,
    }

    impl LocalLlmChatSaveWorkflow for SaveWorkflow {
        type Error = ();

        fn save_chat(&mut self) -> Result<(), Self::Error> {
            self.calls += 1;
            Ok(())
        }
    }

    struct TimerWorkflow {
        finish_at: Option<&'static str>,
        fail_at: Option<&'static str>,
        calls: Vec<&'static str>,
    }

    impl TimerWorkflow {
        fn phase(&mut self, name: &'static str) -> Result<TimerFlow, &'static str> {
            self.calls.push(name);
            if self.fail_at == Some(name) {
                Err(name)
            } else if self.finish_at == Some(name) {
                Ok(TimerFlow::FinishTick)
            } else {
                Ok(TimerFlow::Continue)
            }
        }
    }

    impl LocalLlmTimerWorkflow for TimerWorkflow {
        type Error = &'static str;

        fn inspect_python_error_marker(&mut self) -> Result<(), Self::Error> {
            self.phase("python-error").map(drop)
        }
        fn poll_framework_and_log(&mut self) -> Result<TimerFlow, Self::Error> {
            self.phase("framework-log")
        }
        fn handle_timeout_state(&mut self) -> Result<TimerFlow, Self::Error> {
            self.phase("timeout")
        }
        fn update_progress_window(&mut self) -> Result<(), Self::Error> {
            self.phase("progress").map(drop)
        }
        fn consume_answer_file(&mut self) -> Result<TimerFlow, Self::Error> {
            self.phase("answer")
        }
        fn consume_completion_marker(&mut self) -> Result<(), Self::Error> {
            self.phase("completion").map(drop)
        }
        fn finish_timer_tick(&mut self) -> Result<(), Self::Error> {
            self.phase("finish").map(drop)
        }
    }

    fn configuration(interface_index: i32, voice_index: i32) -> LocalLlmConfiguration {
        LocalLlmConfiguration {
            model: "old-model".to_owned(),
            embeddings_model: "embeddings".to_owned(),
            flags: 7,
            interface_index,
            voice_index,
        }
    }

    #[test]
    fn options_menu_message_delegates_once_to_the_shared_workflow() {
        let mut window = LocalLlmWindow::default();
        let mut workflow = OptionsWorkflow::default();

        drop(window.update(Message::OptionsSelected, &mut workflow));

        assert_eq!(workflow.calls, 1);
    }

    #[test]
    fn exit_menu_delegates_once_to_the_shared_close_coordinator() {
        let window = LocalLlmWindow::default();
        let mut workflow = WindowCloseWorkflow::default();

        drop(window.exit_clicked(&mut workflow));

        assert_eq!(workflow.calls, 1);
    }

    #[test]
    fn new_chat_without_seed_path_clears_chat_and_sets_reset_state() {
        let mut window = LocalLlmWindow {
            chat_lines: vec!["old chat".to_owned()],
            ..LocalLlmWindow::default()
        };
        let mut host = SeedTextHost {
            lines: None,
            fail: false,
            calls: 0,
        };

        drop(
            window
                .update_new_chat(NewChatMessage::Requested, &mut host)
                .expect("new chat succeeds"),
        );

        assert!(window.chat_reset_pending());
        assert!(window.chat_lines().is_empty());
        assert_eq!(host.calls, 1);
    }

    #[test]
    fn new_chat_wraps_loaded_seed_lines_with_assistant_and_blank_lines() {
        let mut window = LocalLlmWindow {
            chat_lines: vec!["old chat".to_owned()],
            ..LocalLlmWindow::default()
        };
        let mut host = SeedTextHost {
            lines: Some(vec!["first".to_owned(), "second".to_owned()]),
            fail: false,
            calls: 0,
        };

        window.new_chat_clicked(&mut host).expect("seed text loads");

        assert_eq!(
            window.chat_lines(),
            &[
                "Assistant:".to_owned(),
                "first".to_owned(),
                "second".to_owned(),
                String::new()
            ]
        );
    }

    #[test]
    fn new_chat_load_error_does_not_restore_cleared_chat() {
        let mut window = LocalLlmWindow {
            chat_lines: vec!["old chat".to_owned()],
            ..LocalLlmWindow::default()
        };
        let mut host = SeedTextHost {
            lines: None,
            fail: true,
            calls: 0,
        };

        assert_eq!(window.new_chat_clicked(&mut host), Err("seed load failed"));
        assert!(window.chat_reset_pending());
        assert!(window.chat_lines().is_empty());
    }

    #[test]
    fn model_click_message_delegates_once_to_the_shared_workflow() {
        let mut window = LocalLlmWindow::default();
        let mut workflow = OptionsWorkflow::default();

        drop(window.update(Message::ModelClicked, &mut workflow));

        assert_eq!(workflow.calls, 1);
        assert_eq!(window.configuration(), &LocalLlmConfiguration::default());
    }

    #[test]
    fn stop_message_delegates_with_full_cleanup_enabled() {
        let mut window = LocalLlmWindow::default();
        let mut workflow = StopWorkflow::default();

        drop(
            window
                .update_stop(StopMessage::StopRequested, &mut workflow)
                .expect("stop succeeds"),
        );

        assert_eq!(workflow.flags, vec![true]);
    }

    #[test]
    fn autotest_stops_deletes_named_logs_and_launches_stored_window_in_order() {
        let directory = test_temp_directory("autotest-launch");
        fs::create_dir_all(&directory).expect("test directory is created");
        fs::write(directory.join("log_short.json"), b"short").expect("short log is written");
        fs::write(directory.join("log.json"), b"full").expect("full log is written");
        fs::write(directory.join("keep.txt"), b"keep").expect("unrelated file is written");
        let mut host = AutoTestHost {
            directory: directory.clone(),
            fail_at: None,
            calls: Vec::new(),
            stored_window: None,
        };
        let mut window = LocalLlmWindow::default();

        drop(
            window
                .update_autotest(AutoTestMessage::Launch, &mut host)
                .expect("autotest launches"),
        );

        assert!(!directory.join("log_short.json").exists());
        assert!(!directory.join("log.json").exists());
        assert!(directory.join("keep.txt").exists());
        assert_eq!(
            host.calls,
            vec!["stop:true", "create", "store", "enable-and-show"]
        );
        assert_eq!(host.stored_window, Some(7));
        fs::remove_dir_all(&directory).expect("test directory is removed");
    }

    #[test]
    fn autotest_launches_when_prior_logs_are_absent() {
        let directory = test_temp_directory("autotest-no-logs");
        let mut host = AutoTestHost {
            directory,
            fail_at: None,
            calls: Vec::new(),
            stored_window: None,
        };
        let window = LocalLlmWindow::default();

        assert_eq!(window.autotest_clicked(&mut host), Ok(()));
        assert_eq!(
            host.calls,
            vec!["stop:true", "create", "store", "enable-and-show"]
        );
    }

    #[test]
    fn autotest_stop_error_preserves_logs_and_prevents_window_creation() {
        let directory = test_temp_directory("autotest-stop-error");
        fs::create_dir_all(&directory).expect("test directory is created");
        let log = directory.join("log.json");
        fs::write(&log, b"full").expect("full log is written");
        let mut host = AutoTestHost {
            directory: directory.clone(),
            fail_at: Some("stop"),
            calls: Vec::new(),
            stored_window: None,
        };
        let window = LocalLlmWindow::default();

        assert_eq!(window.autotest_clicked(&mut host), Err("stop"));
        assert!(log.exists());
        assert_eq!(host.calls, vec!["stop:true"]);
        assert_eq!(host.stored_window, None);
        fs::remove_dir_all(&directory).expect("test directory is removed");
    }

    #[test]
    fn autotest_creation_error_occurs_after_log_cleanup() {
        let directory = test_temp_directory("autotest-create-error");
        fs::create_dir_all(&directory).expect("test directory is created");
        let log = directory.join("log_short.json");
        fs::write(&log, b"short").expect("short log is written");
        let mut host = AutoTestHost {
            directory: directory.clone(),
            fail_at: Some("create"),
            calls: Vec::new(),
            stored_window: None,
        };
        let window = LocalLlmWindow::default();

        assert_eq!(window.autotest_clicked(&mut host), Err("create"));
        assert!(!log.exists());
        assert_eq!(host.calls, vec!["stop:true", "create"]);
        assert_eq!(host.stored_window, None);
        fs::remove_dir_all(&directory).expect("test directory is removed");
    }

    #[test]
    fn current_picture_menu_clears_external_mode_and_prepares_interactive_request() {
        let mut window = LocalLlmWindow {
            picture_import_source: PictureImportSource::External,
            picture_import_origin: PictureImportOrigin::Batch,
            picture_document_path: PathBuf::from("old.cir"),
            ..LocalLlmWindow::default()
        };
        let mut workflow = CurrentPictureWorkflow {
            document_path: PathBuf::from("current.tsc"),
            fail: false,
            calls: Vec::new(),
        };

        drop(
            window
                .update_current_picture(
                    PictureImportMessage::CurrentCircuit(PictureImportOrigin::Interactive),
                    &mut workflow,
                )
                .expect("picture preparation succeeds"),
        );

        assert_eq!(
            window.picture_import_source(),
            PictureImportSource::CurrentCircuit
        );
        assert_eq!(
            window.picture_import_origin(),
            PictureImportOrigin::Interactive
        );
        assert_eq!(window.picture_document_path(), Path::new("current.tsc"));
        assert_eq!(
            workflow.calls,
            vec![(
                PathBuf::from("current.tsc"),
                PictureImportOrigin::Interactive
            )]
        );
    }

    #[test]
    fn current_picture_batch_origin_is_forwarded_to_shared_workflow() {
        let mut window = LocalLlmWindow::default();
        let mut workflow = CurrentPictureWorkflow {
            document_path: PathBuf::from("batch.tsc"),
            fail: false,
            calls: Vec::new(),
        };

        assert_eq!(
            window.import_current_circuit_picture(PictureImportOrigin::Batch, &mut workflow),
            Ok(())
        );
        assert_eq!(
            workflow.calls,
            vec![(PathBuf::from("batch.tsc"), PictureImportOrigin::Batch)]
        );
    }

    #[test]
    fn current_picture_workflow_error_keeps_copied_request_state() {
        let mut window = LocalLlmWindow {
            picture_import_source: PictureImportSource::External,
            ..LocalLlmWindow::default()
        };
        let mut workflow = CurrentPictureWorkflow {
            document_path: PathBuf::from("current.tsc"),
            fail: true,
            calls: Vec::new(),
        };

        assert_eq!(
            window.import_current_circuit_picture(PictureImportOrigin::Interactive, &mut workflow),
            Err("picture preparation failed")
        );
        assert_eq!(
            window.picture_import_source(),
            PictureImportSource::CurrentCircuit
        );
        assert_eq!(window.picture_document_path(), Path::new("current.tsc"));
    }

    #[test]
    fn external_picture_cancel_is_a_complete_noop() {
        let mut window = LocalLlmWindow {
            picture_import_source: PictureImportSource::CurrentCircuit,
            picture_document_path: PathBuf::from("current.tsc"),
            ..LocalLlmWindow::default()
        };
        let mut workflow = ExternalPictureWorkflow {
            selection: None,
            fail_at: None,
            calls: Vec::new(),
            requests: Vec::new(),
        };

        assert_eq!(
            window.import_external_picture(&mut workflow),
            Ok(ExternalPictureOutcome::Cancelled)
        );
        assert_eq!(workflow.calls, vec!["select"]);
        assert_eq!(
            window.picture_import_source(),
            PictureImportSource::CurrentCircuit
        );
        assert_eq!(window.picture_document_path(), Path::new("current.tsc"));
    }

    #[test]
    fn external_picture_missing_picture_reports_error_without_state_change() {
        let mut window = LocalLlmWindow {
            picture_import_source: PictureImportSource::CurrentCircuit,
            picture_document_path: PathBuf::from("current.tsc"),
            ..LocalLlmWindow::default()
        };
        let mut workflow = ExternalPictureWorkflow {
            selection: Some(ExternalPictureSelection {
                picture_path: None,
                netlist_path: Some(PathBuf::from("external.cir")),
            }),
            fail_at: None,
            calls: Vec::new(),
            requests: Vec::new(),
        };

        assert_eq!(
            window.import_external_picture(&mut workflow),
            Ok(ExternalPictureOutcome::PictureMissing)
        );
        assert_eq!(workflow.calls, vec!["select", "missing-picture"]);
        assert_eq!(
            window.picture_import_source(),
            PictureImportSource::CurrentCircuit
        );
        assert!(workflow.requests.is_empty());
    }

    #[test]
    fn external_picture_missing_netlist_warns_then_continues() {
        let mut window = LocalLlmWindow::default();
        let mut workflow = ExternalPictureWorkflow {
            selection: Some(ExternalPictureSelection {
                picture_path: Some(PathBuf::from("picture.png")),
                netlist_path: None,
            }),
            fail_at: None,
            calls: Vec::new(),
            requests: Vec::new(),
        };

        let (task, outcome) = window
            .update_external_picture(ExternalPictureMessage::Open, &mut workflow)
            .expect("external request succeeds");
        drop(task);

        assert_eq!(outcome, ExternalPictureOutcome::Requested);
        assert_eq!(workflow.calls, vec!["select", "missing-netlist", "prepare"]);
        assert_eq!(
            workflow.requests,
            vec![(None, PathBuf::from("picture.png"))]
        );
        assert_eq!(
            window.picture_import_source(),
            PictureImportSource::External
        );
        assert_eq!(window.picture_document_path(), Path::new("picture.png"));
    }

    #[test]
    fn external_picture_with_netlist_skips_warning_and_forwards_both_paths() {
        let mut window = LocalLlmWindow::default();
        let mut workflow = ExternalPictureWorkflow {
            selection: Some(ExternalPictureSelection {
                picture_path: Some(PathBuf::from("picture.png")),
                netlist_path: Some(PathBuf::from("external.cir")),
            }),
            fail_at: None,
            calls: Vec::new(),
            requests: Vec::new(),
        };

        assert_eq!(
            window.import_external_picture(&mut workflow),
            Ok(ExternalPictureOutcome::Requested)
        );
        assert_eq!(workflow.calls, vec!["select", "prepare"]);
        assert_eq!(
            workflow.requests,
            vec![(
                Some(PathBuf::from("external.cir")),
                PathBuf::from("picture.png")
            )]
        );
    }

    #[test]
    fn external_picture_prepare_error_keeps_validated_picture_state() {
        let mut window = LocalLlmWindow::default();
        let mut workflow = ExternalPictureWorkflow {
            selection: Some(ExternalPictureSelection {
                picture_path: Some(PathBuf::from("picture.png")),
                netlist_path: Some(PathBuf::from("external.cir")),
            }),
            fail_at: Some("prepare"),
            calls: Vec::new(),
            requests: Vec::new(),
        };

        assert_eq!(
            window.import_external_picture(&mut workflow),
            Err("prepare")
        );
        assert_eq!(
            window.picture_import_source(),
            PictureImportSource::External
        );
        assert_eq!(window.picture_document_path(), Path::new("picture.png"));
        assert_eq!(workflow.calls, vec!["select", "prepare"]);
    }

    #[test]
    fn picture_batch_runs_tsc_then_external_png_with_idle_and_delay_gates() {
        let root = test_temp_directory("picture-batch");
        let ext = root.join("Ext");
        fs::create_dir_all(&ext).expect("batch directories are created");
        let document = root.join("first.TSC");
        let picture = ext.join("second.PNG");
        fs::write(&document, b"document").expect("document is written");
        fs::write(&picture, b"picture").expect("picture is written");
        fs::write(root.join("ignored.txt"), b"ignored").expect("other file is written");
        fs::create_dir(root.join("directory.tsc")).expect("matching directory is created");
        let mut host = PictureBatchHost {
            busy: true,
            fail_at: None,
            calls: Vec::new(),
        };
        let mut window = LocalLlmWindow::default();

        window
            .start_picture_batch_from(&root, &mut host)
            .expect("first request starts");
        assert_eq!(
            window.picture_batch_status(),
            PictureBatchStatus::WaitingForRequest
        );
        assert_eq!(window.remaining_picture_batch_items(), 1);
        assert_eq!(
            host.calls,
            vec![
                format!("open:{}", document.display()),
                format!("current:{}", document.display())
            ]
        );
        drop(window.picture_batch_subscription());

        let now = Instant::now();
        window
            .tick_picture_batch(now, &mut host)
            .expect("busy poll succeeds");
        assert_eq!(
            window.picture_batch_status(),
            PictureBatchStatus::WaitingForRequest
        );

        host.busy = false;
        window
            .tick_picture_batch(now, &mut host)
            .expect("idle poll succeeds");
        assert_eq!(
            window.picture_batch_status(),
            PictureBatchStatus::DelayUntil(now + PICTURE_BATCH_DELAY)
        );
        window
            .tick_picture_batch(now + Duration::from_millis(499), &mut host)
            .expect("early delay poll succeeds");
        assert_eq!(host.calls.len(), 2);

        window
            .tick_picture_batch(now + PICTURE_BATCH_DELAY, &mut host)
            .expect("external request starts");
        assert_eq!(
            host.calls[2],
            format!(
                "external:{}:{}",
                picture.with_extension("cir").display(),
                picture.display()
            )
        );
        assert_eq!(
            window.picture_import_source(),
            PictureImportSource::External
        );
        assert_eq!(window.picture_document_path(), picture.as_path());

        window
            .tick_picture_batch(now + PICTURE_BATCH_DELAY, &mut host)
            .expect("second idle poll succeeds");
        window
            .tick_picture_batch(now + PICTURE_BATCH_DELAY * 2, &mut host)
            .expect("batch completion succeeds");
        assert_eq!(window.picture_batch_status(), PictureBatchStatus::Complete);
        fs::remove_dir_all(&root).expect("test directory is removed");
    }

    #[test]
    fn picture_batch_stop_is_honored_after_current_request_delay() {
        let root = test_temp_directory("picture-batch-stop");
        let ext = root.join("Ext");
        fs::create_dir_all(&ext).expect("batch directories are created");
        fs::write(root.join("first.tsc"), b"document").expect("document is written");
        fs::write(ext.join("second.png"), b"picture").expect("picture is written");
        let mut host = PictureBatchHost {
            busy: false,
            fail_at: None,
            calls: Vec::new(),
        };
        let mut window = LocalLlmWindow::default();
        window
            .start_picture_batch_from(&root, &mut host)
            .expect("first request starts");
        let now = Instant::now();
        window
            .tick_picture_batch(now, &mut host)
            .expect("idle poll succeeds");
        window.request_picture_batch_stop();

        window
            .tick_picture_batch(now + PICTURE_BATCH_DELAY, &mut host)
            .expect("stop completes batch");

        assert_eq!(window.picture_batch_status(), PictureBatchStatus::Complete);
        assert_eq!(window.remaining_picture_batch_items(), 0);
        assert_eq!(host.calls.len(), 2);
        fs::remove_dir_all(&root).expect("test directory is removed");
    }

    #[test]
    fn picture_batch_missing_root_completes_without_host_calls() {
        let root = test_temp_directory("picture-batch-missing");
        let mut host = PictureBatchHost {
            busy: false,
            fail_at: None,
            calls: Vec::new(),
        };
        let mut window = LocalLlmWindow::default();

        assert_eq!(window.start_picture_batch_from(&root, &mut host), Ok(()));
        assert_eq!(window.picture_batch_status(), PictureBatchStatus::Complete);
        assert!(host.calls.is_empty());
    }

    #[test]
    fn save_as_message_delegates_once_to_the_shared_chat_exporter() {
        let mut window = LocalLlmWindow::default();
        let mut workflow = SaveWorkflow::default();

        drop(
            window
                .update_save(SaveMessage::SaveAsRequested, &mut workflow)
                .expect("save succeeds"),
        );

        assert_eq!(workflow.calls, 1);
    }

    #[test]
    fn chat_text_preserves_lines_with_windows_line_endings() {
        let window = LocalLlmWindow {
            chat_lines: vec!["Assistant:".to_owned(), "Grüße".to_owned(), String::new()],
            ..LocalLlmWindow::default()
        };

        assert_eq!(window.chat_text(), "Assistant:\r\nGrüße\r\n\r\n");
        drop(window.save_chat_clicked());
    }

    #[test]
    fn chat_save_cancellation_is_a_file_system_noop() {
        assert_eq!(
            write_selected_chat(None, "chat text").expect("cancellation succeeds"),
            ChatSaveOutcome::Cancelled
        );
    }

    #[test]
    fn accepted_chat_save_writes_utf8_text() {
        let directory = test_temp_directory("chat-save");
        fs::create_dir_all(&directory).expect("test directory is created");
        let path = directory.join("chat.txt");

        assert_eq!(
            write_selected_chat(Some(&path), "Assistant:\r\nGrüße\r\n").expect("chat is saved"),
            ChatSaveOutcome::Saved
        );
        assert_eq!(
            fs::read(&path).expect("saved file is read"),
            "Assistant:\r\nGrüße\r\n".as_bytes()
        );
        fs::remove_dir_all(&directory).expect("test directory is removed");
    }

    #[test]
    fn accepted_empty_chat_creates_an_empty_file() {
        let directory = test_temp_directory("empty-chat-save");
        fs::create_dir_all(&directory).expect("test directory is created");
        let path = directory.join("chat.txt");

        assert_eq!(
            write_selected_chat(Some(&path), "").expect("empty chat is saved"),
            ChatSaveOutcome::Saved
        );
        assert_eq!(
            fs::read(&path).expect("saved file is read"),
            Vec::<u8>::new()
        );
        fs::remove_dir_all(&directory).expect("test directory is removed");
    }

    #[test]
    fn full_log_export_suppresses_missing_and_invalid_utf8_sources() {
        let directory = test_temp_directory("full-log-source-errors");
        fs::create_dir_all(&directory).expect("test directory is created");
        assert_eq!(load_log_for_export(&directory.join("missing.json")), None);
        let invalid = directory.join("invalid.json");
        fs::write(&invalid, [0xFF, 0xFE]).expect("invalid UTF-8 file is written");
        assert_eq!(load_log_for_export(&invalid), None);
        fs::remove_dir_all(&directory).expect("test directory is removed");
    }

    #[test]
    fn full_log_export_loads_existing_utf8_source_before_dialog() {
        let directory = test_temp_directory("full-log-load");
        fs::create_dir_all(&directory).expect("test directory is created");
        let source = directory.join("log.json");
        fs::write(&source, "{\"message\":\"Grüße\"}").expect("UTF-8 source file is written");
        let window = LocalLlmWindow::default();

        assert_eq!(
            load_log_for_export(&source).as_deref(),
            Some("{\"message\":\"Grüße\"}")
        );
        drop(window.save_full_log_clicked(&directory));
        fs::remove_dir_all(&directory).expect("test directory is removed");
    }

    #[test]
    fn full_log_save_cancellation_is_a_file_system_noop() {
        assert_eq!(
            write_selected_log(None, "{}\r\n").expect("cancellation succeeds"),
            LogSaveOutcome::Cancelled
        );
    }

    #[test]
    fn accepted_full_log_save_writes_loaded_utf8_text() {
        let directory = test_temp_directory("full-log-save");
        fs::create_dir_all(&directory).expect("test directory is created");
        let destination = directory.join("export.log");

        assert_eq!(
            write_selected_log(Some(&destination), "{\"message\":\"Grüße\"}\r\n")
                .expect("log is saved"),
            LogSaveOutcome::Saved
        );
        assert_eq!(
            fs::read(&destination).expect("saved log is read"),
            "{\"message\":\"Grüße\"}\r\n".as_bytes()
        );
        fs::remove_dir_all(&directory).expect("test directory is removed");
    }

    #[test]
    fn short_log_export_targets_distinct_recovered_source_name() {
        let directory = PathBuf::from("runtime-logs");
        let window = LocalLlmWindow::default();

        assert_eq!(
            directory.join(SHORT_LOG_FILE_NAME),
            PathBuf::from("runtime-logs").join("log_short.json")
        );
        drop(window.save_short_log_clicked(&directory));
    }

    #[test]
    fn timer_tick_runs_all_recovered_phases_and_clears_guard() {
        let mut window = LocalLlmWindow::default();
        let mut host = TimerWorkflow {
            finish_at: None,
            fail_at: None,
            calls: Vec::new(),
        };

        let (task, outcome) = window
            .update_timer(TimerMessage::Tick, &mut host)
            .expect("tick succeeds");
        drop(task);

        assert_eq!(outcome, TimerTickOutcome::Completed);
        assert!(!window.timer_in_progress());
        assert_eq!(
            host.calls,
            vec![
                "python-error",
                "framework-log",
                "timeout",
                "progress",
                "answer",
                "completion",
                "finish"
            ]
        );
    }

    #[test]
    fn timer_tick_honors_early_exit_and_reentrancy_guard() {
        let mut window = LocalLlmWindow::default();
        let mut early = TimerWorkflow {
            finish_at: Some("framework-log"),
            fail_at: None,
            calls: Vec::new(),
        };
        assert_eq!(
            window.timer_tick(&mut early),
            Ok(TimerTickOutcome::FinishedEarly)
        );
        assert_eq!(early.calls, vec!["python-error", "framework-log"]);
        assert!(!window.timer_in_progress());

        window.timer_in_progress = true;
        let mut skipped = TimerWorkflow {
            finish_at: None,
            fail_at: None,
            calls: Vec::new(),
        };
        assert_eq!(
            window.timer_tick(&mut skipped),
            Ok(TimerTickOutcome::SkippedReentrant)
        );
        assert!(skipped.calls.is_empty());
    }

    #[test]
    fn timer_host_error_stops_later_phases_and_retains_guard() {
        let mut window = LocalLlmWindow::default();
        let mut host = TimerWorkflow {
            finish_at: None,
            fail_at: Some("progress"),
            calls: Vec::new(),
        };

        assert_eq!(window.timer_tick(&mut host), Err("progress"));
        assert!(window.timer_in_progress());
        assert_eq!(
            host.calls,
            vec!["python-error", "framework-log", "timeout", "progress"]
        );
    }

    #[test]
    fn temp_cleanup_deletes_files_continues_past_directory_and_reports_success() {
        let directory = test_temp_directory("files");
        let nested = directory.join("nested");
        fs::create_dir_all(&nested).expect("test directory is created");
        fs::write(directory.join("first.tmp"), b"first").expect("first file is written");
        fs::write(directory.join("second"), b"second").expect("second file is written");
        let mut host = TempCleanupHost {
            directory: directory.clone(),
            message_calls: 0,
            fail_message: false,
        };
        let window = LocalLlmWindow::default();

        window
            .delete_temp_files_clicked(&mut host)
            .expect("completion message succeeds");

        assert!(!directory.join("first.tmp").exists());
        assert!(!directory.join("second").exists());
        assert!(nested.exists());
        assert_eq!(host.message_calls, 1);
        fs::remove_dir_all(&directory).expect("test directory is removed");
    }

    #[test]
    fn temp_cleanup_reports_success_when_directory_is_absent() {
        let directory = test_temp_directory("absent");
        let mut host = TempCleanupHost {
            directory,
            message_calls: 0,
            fail_message: false,
        };
        let mut window = LocalLlmWindow::default();

        drop(
            window
                .update_temp_cleanup(TempCleanupMessage::DeleteFiles, &mut host)
                .expect("completion message succeeds"),
        );

        assert_eq!(host.message_calls, 1);
    }

    #[test]
    fn temp_cleanup_returns_completion_message_error_after_deleting_files() {
        let directory = test_temp_directory("message-error");
        fs::create_dir_all(&directory).expect("test directory is created");
        let file = directory.join("file.tmp");
        fs::write(&file, b"temporary").expect("test file is written");
        let mut host = TempCleanupHost {
            directory: directory.clone(),
            message_calls: 0,
            fail_message: true,
        };
        let window = LocalLlmWindow::default();

        assert_eq!(
            window.delete_temp_files_clicked(&mut host),
            Err("message failed")
        );
        assert!(!file.exists());
        assert_eq!(host.message_calls, 1);
        fs::remove_dir_all(&directory).expect("test directory is removed");
    }

    #[test]
    fn model_downloader_explains_lm_studio_without_opening_or_refreshing() {
        let mut window = LocalLlmWindow {
            configuration: configuration(1, 0),
            ..LocalLlmWindow::default()
        };
        let mut host = ModelManagementHost {
            refreshed_model: Some("new-model".to_owned()),
            fail_at: None,
            calls: Vec::new(),
        };

        let (task, outcome) = window
            .update_model_management(ModelManagementMessage::Open, &mut host)
            .expect("manual-download guidance succeeds");
        drop(task);

        assert_eq!(outcome, ModelManagementOutcome::ManualDownloadExplained);
        assert_eq!(host.calls, vec!["explain-manual-download"]);
        assert_eq!(window.configuration().model, "old-model");
    }

    #[test]
    fn model_downloader_opens_mode_four_then_stores_refreshed_model() {
        let mut window = LocalLlmWindow {
            configuration: configuration(0, 0),
            ..LocalLlmWindow::default()
        };
        let mut host = ModelManagementHost {
            refreshed_model: Some("new-model".to_owned()),
            fail_at: None,
            calls: Vec::new(),
        };

        assert_eq!(
            window.model_downloader_clicked(&mut host),
            Ok(ModelManagementOutcome::ModelUpdated)
        );
        assert_eq!(host.calls, vec!["show-model-manager:4", "refresh-models"]);
        assert_eq!(window.configuration().model, "new-model");
    }

    #[test]
    fn model_downloader_keeps_prior_model_when_refresh_has_no_selection() {
        let mut window = LocalLlmWindow {
            configuration: configuration(2, 0),
            ..LocalLlmWindow::default()
        };
        let mut host = ModelManagementHost {
            refreshed_model: None,
            fail_at: None,
            calls: Vec::new(),
        };

        assert_eq!(
            window.model_downloader_clicked(&mut host),
            Ok(ModelManagementOutcome::PriorModelKept)
        );
        assert_eq!(window.configuration().model, "old-model");
    }

    #[test]
    fn model_downloader_stops_after_dialog_error() {
        let mut window = LocalLlmWindow {
            configuration: configuration(0, 0),
            ..LocalLlmWindow::default()
        };
        let mut host = ModelManagementHost {
            refreshed_model: Some("new-model".to_owned()),
            fail_at: Some("show-model-manager"),
            calls: Vec::new(),
        };

        assert_eq!(
            window.model_downloader_clicked(&mut host),
            Err("show-model-manager")
        );
        assert_eq!(host.calls, vec!["show-model-manager:4"]);
        assert_eq!(window.configuration().model, "old-model");
    }

    #[test]
    fn user_selection_updates_display_then_forces_request_preprocessing() {
        let mut window = LocalLlmWindow::default();
        let mut workflow = RequestWorkflow::default();

        drop(
            window
                .update_user_selection(
                    UserSelectionMessage::Selected("Circuit designer".to_owned()),
                    &mut workflow,
                )
                .expect("request succeeds"),
        );

        assert_eq!(window.selected_user(), "Circuit designer");
        assert_eq!(workflow.calls, vec![("Circuit designer".to_owned(), true)]);
    }

    #[test]
    fn user_selection_remains_applied_when_request_pipeline_fails() {
        let mut window = LocalLlmWindow::default();
        let mut workflow = RequestWorkflow {
            fail: true,
            calls: Vec::new(),
        };

        assert_eq!(
            window.user_selected("Reviewer".to_owned(), &mut workflow),
            Err("request failed")
        );
        assert_eq!(window.selected_user(), "Reviewer");
        assert_eq!(workflow.calls, vec![("Reviewer".to_owned(), true)]);
    }

    #[test]
    fn user_key_press_ignores_non_enter_keys() {
        let mut window = LocalLlmWindow {
            selected_user: "Reviewer".to_owned(),
            ..LocalLlmWindow::default()
        };
        let mut workflow = RequestWorkflow::default();

        assert_eq!(
            window.user_key_pressed(&Key::Character("r".into()), &mut workflow),
            Ok(UserKeyPressOutcome::Ignored)
        );
        assert!(window.user_entries().is_empty());
        assert!(workflow.calls.is_empty());
    }

    #[test]
    fn user_enter_adds_missing_text_and_submits_forced_request() {
        let mut window = LocalLlmWindow {
            selected_user: "Reviewer".to_owned(),
            user_entries: vec!["Circuit designer".to_owned()],
            ..LocalLlmWindow::default()
        };
        let mut workflow = RequestWorkflow::default();

        let (task, outcome) = window
            .update_user_key_press(
                UserKeyPressMessage::Pressed(Key::Named(Named::Enter)),
                &mut workflow,
            )
            .expect("request succeeds");
        drop(task);

        assert_eq!(outcome, UserKeyPressOutcome::Submitted);
        assert_eq!(
            window.user_entries(),
            &["Circuit designer".to_owned(), "Reviewer".to_owned()]
        );
        assert_eq!(workflow.calls, vec![("Reviewer".to_owned(), true)]);
    }

    #[test]
    fn user_enter_does_not_duplicate_an_existing_entry() {
        let mut window = LocalLlmWindow {
            selected_user: "Reviewer".to_owned(),
            user_entries: vec!["Reviewer".to_owned()],
            ..LocalLlmWindow::default()
        };
        let mut workflow = RequestWorkflow::default();

        assert_eq!(
            window.user_key_pressed(&Key::Named(Named::Enter), &mut workflow),
            Ok(UserKeyPressOutcome::Submitted)
        );
        assert_eq!(window.user_entries(), &["Reviewer".to_owned()]);
    }

    #[test]
    fn user_enter_keeps_new_entry_when_request_pipeline_fails() {
        let mut window = LocalLlmWindow {
            selected_user: "Reviewer".to_owned(),
            ..LocalLlmWindow::default()
        };
        let mut workflow = RequestWorkflow {
            fail: true,
            calls: Vec::new(),
        };

        assert_eq!(
            window.user_key_pressed(&Key::Named(Named::Enter), &mut workflow),
            Err("request failed")
        );
        assert_eq!(window.user_entries(), &["Reviewer".to_owned()]);
        assert_eq!(workflow.calls, vec![("Reviewer".to_owned(), true)]);
    }

    #[test]
    fn options_button_cancel_is_a_complete_noop() {
        let mut window = LocalLlmWindow {
            configuration: configuration(0, 1),
            ..LocalLlmWindow::default()
        };
        let before = window.configuration.clone();
        let mut host = OptionsHost {
            edited: None,
            voice_permitted: true,
            prepared_model: "prepared".to_owned(),
            calls: Vec::new(),
        };

        assert_eq!(
            window.options_button_clicked(&mut host),
            Ok(OptionsApplyOutcome::Cancelled)
        );
        assert_eq!(window.configuration(), &before);
        assert_eq!(host.calls, vec!["edit:0"]);
    }

    #[test]
    fn options_button_applies_voice_and_changed_framework_workflow() {
        let mut window = LocalLlmWindow {
            configuration: configuration(2, 1),
            ..LocalLlmWindow::default()
        };
        let mut host = OptionsHost {
            edited: Some(configuration(0, 3)),
            voice_permitted: true,
            prepared_model: "prepared".to_owned(),
            calls: Vec::new(),
        };

        assert_eq!(
            window.options_button_clicked(&mut host),
            Ok(OptionsApplyOutcome::Applied)
        );
        assert_eq!(window.configuration().interface_index, 0);
        assert_eq!(window.configuration().voice_index, 3);
        assert_eq!(window.configuration().model, "prepared");
        assert_eq!(
            host.calls,
            vec![
                "edit:2", "voice:3", "stop-two", "prepare", "rebuild", "display"
            ]
        );
    }

    #[test]
    fn options_button_prompts_for_old_external_framework_and_skips_voice_guard() {
        let mut window = LocalLlmWindow {
            configuration: configuration(1, 1),
            ..LocalLlmWindow::default()
        };
        let mut host = OptionsHost {
            edited: Some(configuration(2, 4)),
            voice_permitted: false,
            prepared_model: "new".to_owned(),
            calls: Vec::new(),
        };

        assert_eq!(
            window.options_button_clicked(&mut host),
            Ok(OptionsApplyOutcome::Applied)
        );
        assert_eq!(
            host.calls,
            vec!["edit:1", "close:LM Studio", "prepare", "rebuild", "display"]
        );
    }

    #[test]
    fn form_create_uses_recovered_defaults_when_configuration_is_absent() {
        let mut window = LocalLlmWindow::default();
        let mut host = CreateHost {
            configuration: None,
            fail_load: false,
        };

        assert_eq!(window.form_create(&mut host), Ok(()));

        assert_eq!(window.configuration().model, "llama3.1");
        assert_eq!(window.configuration().embeddings_model, "nomic-embed-text");
        assert_eq!(window.filter_terms(), FILTER_TERMS);
        assert_eq!(window.python_home(), &PathBuf::from("python-home"));
        assert_eq!(
            window.runner_directory(),
            &PathBuf::from("python-home")
                .join("Lib")
                .join("site-packages")
                .join("tpack_t")
                .join("runner")
        );
        assert!(window.setup_complete());
        assert_eq!(window.help_context(), HELP_CONTEXT);
    }

    #[test]
    fn form_create_keeps_loaded_configuration_values() {
        let configuration = LocalLlmConfiguration {
            model: "custom-model".to_owned(),
            embeddings_model: "custom-embeddings".to_owned(),
            flags: 0,
            interface_index: 0,
            voice_index: 0,
        };
        let mut host = CreateHost {
            configuration: Some(configuration.clone()),
            fail_load: false,
        };
        let mut window = LocalLlmWindow::default();

        assert_eq!(window.form_create(&mut host), Ok(()));
        assert_eq!(window.configuration(), &configuration);
    }

    #[test]
    fn form_create_leaves_setup_incomplete_when_settings_loading_fails() {
        let mut host = CreateHost {
            configuration: None,
            fail_load: true,
        };
        let mut window = LocalLlmWindow::default();

        assert_eq!(window.form_create(&mut host), Err("settings unavailable"));
        assert!(!window.setup_complete());
        assert_eq!(window.help_context(), 0);
        assert_eq!(window.filter_terms(), FILTER_TERMS);
    }

    #[test]
    fn aloud_click_is_guarded_and_changes_only_flag_bit_zero() {
        let mut window = LocalLlmWindow::default();
        window.aloud_clicked(true);
        assert!(window.aloud_checked());
        assert_eq!(window.configuration().flags, 0);

        let mut host = CreateHost {
            configuration: Some(LocalLlmConfiguration {
                model: "model".to_owned(),
                embeddings_model: "embeddings".to_owned(),
                flags: 0b1010,
                interface_index: 0,
                voice_index: 0,
            }),
            fail_load: false,
        };
        assert_eq!(window.form_create(&mut host), Ok(()));

        window.aloud_clicked(true);
        assert!(window.aloud_checked());
        assert_eq!(window.configuration().flags, 0b1011);

        window.aloud_clicked(false);
        assert!(!window.aloud_checked());
        assert_eq!(window.configuration().flags, 0b1010);
    }

    #[test]
    fn form_show_closes_after_missing_framework_and_finishes_diagnostics() {
        let mut window = LocalLlmWindow::default();
        let mut host = ShowWorkflow {
            installed: false,
            fail_at: None,
            calls: Vec::new(),
        };

        assert_eq!(
            window.form_show(&mut host),
            Ok(ShowOutcome::ClosedForMissingFramework)
        );
        assert_eq!(
            host.calls,
            vec![
                "prepare-controls",
                "load-samples",
                "detect-gpu",
                "prepare-runtime",
                "detect-framework",
                "missing-and-close",
                "finish",
            ]
        );
    }

    #[test]
    fn form_show_initializes_ready_framework_and_stops_after_host_error() {
        let mut window = LocalLlmWindow::default();
        let mut ready = ShowWorkflow {
            installed: true,
            fail_at: None,
            calls: Vec::new(),
        };
        assert_eq!(window.form_show(&mut ready), Ok(ShowOutcome::Ready));
        assert_eq!(ready.calls.last(), Some(&"finish"));
        assert!(ready.calls.contains(&"initialize-framework"));
        assert!(!ready.calls.contains(&"missing-and-close"));

        let mut failing = ShowWorkflow {
            installed: true,
            fail_at: Some("detect-gpu"),
            calls: Vec::new(),
        };
        assert_eq!(window.form_show(&mut failing), Err("detect-gpu"));
        assert_eq!(
            failing.calls,
            vec!["prepare-controls", "load-samples", "detect-gpu"]
        );
    }

    #[test]
    fn form_close_saves_mode_two_state_and_runs_cleanup_in_order() {
        let mut window = LocalLlmWindow::default();
        window.configuration.interface_index = 2;
        window.close_state_mut().worker_active = true;
        window.close_state_mut().save_requested = true;
        let mut action = CloseAction::Hide;
        let mut host = CloseWorkflow {
            runtime_present: true,
            fail_at: None,
            calls: Vec::new(),
        };

        assert_eq!(window.form_close(&mut action, &mut host), Ok(()));
        assert_eq!(action, CloseAction::Free);
        assert!(window.close_state.shared_runtime_released);
        assert_eq!(
            host.calls,
            vec![
                "stop",
                "save-worker",
                "clear-python-home",
                "release-runtime",
                "cleanup-windows",
                "shutdown-services",
                "persist"
            ]
        );
    }

    #[test]
    fn form_close_skips_save_outside_guard_and_stops_on_error() {
        let mut window = LocalLlmWindow::default();
        window.configuration.interface_index = 1;
        window.close_state_mut().worker_active = true;
        window.close_state_mut().save_requested = true;
        let mut action = CloseAction::Minimize;
        let mut host = CloseWorkflow {
            runtime_present: false,
            fail_at: Some("cleanup-windows"),
            calls: Vec::new(),
        };

        assert_eq!(
            window.form_close(&mut action, &mut host),
            Err("cleanup-windows")
        );
        assert_eq!(action, CloseAction::Minimize);
        assert_eq!(
            host.calls,
            vec![
                "stop",
                "clear-python-home",
                "release-runtime",
                "cleanup-windows"
            ]
        );
    }

    #[test]
    fn form_destroy_clears_global_reference_then_finishes_host_cleanup() {
        let window = LocalLlmWindow::default();
        let mut host = DestroyWorkflow::default();

        window.form_destroy(&mut host);

        assert_eq!(host.calls, vec!["clear-global-form", "finish-destroy"]);
    }

    #[test]
    fn resize_message_is_a_complete_noop() {
        let mut window = LocalLlmWindow::default();
        let mut workflow = OptionsWorkflow::default();

        drop(window.update(Message::Resized, &mut workflow));

        assert_eq!(window, LocalLlmWindow::default());
        assert_eq!(workflow.calls, 0);
    }
}
