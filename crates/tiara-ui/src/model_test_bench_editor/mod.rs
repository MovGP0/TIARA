use std::path::{Path, PathBuf};
use std::time::Duration;

use iced::widget::{button, checkbox, column, container, row, scrollable, text, text_input};
use iced::{Element, Length, Task};
use rfd::AsyncFileDialog;
use walkdir::WalkDir;

use crate::model_test_options::ModelTestOptionsRequest;

pub const TITLE_TEMPLATE: &str = "Test bench editor - %s";
pub const FORM_RESOURCE: &str = "frmModelTestBenchEditor";

const DEFAULT_TESTBENCH_NAME: &str = "Noname";
const LEFT_REGION_RATIO: f32 = 0.467_742;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModalCloseReason {
    Accepted,
    Other,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseDisposition {
    Release,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct StoredSettings {
    pub testbench_path: String,
    pub timeout: i32,
    pub copy_reference_results: bool,
}

impl Default for StoredSettings {
    fn default() -> Self {
        Self {
            testbench_path: String::new(),
            timeout: 0,
            copy_reference_results: true,
        }
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct LoadedTestBench {
    pub path: String,
    pub root_folder: String,
    pub result_folder: String,
    pub data_file_name: String,
    pub tree_items: Vec<String>,
}

pub trait TestBenchLoader {
    fn load(&mut self, path: &str) -> Option<LoadedTestBench>;
}

pub trait TestBenchRunner {
    fn run(&mut self, path: &str, batch_mode: bool);

    fn process_messages(&mut self);

    fn wait_between_runs(&mut self, delay: Duration);
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct NewTestBench {
    pub folder: PathBuf,
    pub circuits: Vec<String>,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct BatchRunResult {
    pub selected: usize,
    pub completed: usize,
    pub cancelled: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ActionAvailability {
    pub create_testbench: bool,
    pub load_reference: bool,
    pub load_result: bool,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct EditorLayout {
    pub window_width: f32,
    pub left_region_width: f32,
    pub right_region_width: f32,
    pub active_column: usize,
}

impl Default for EditorLayout {
    fn default() -> Self {
        Self {
            window_width: 1_080.0,
            left_region_width: 504.0,
            right_region_width: 575.0,
            active_column: 0,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum RegistrationState {
    Registered,
    Released,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
struct ModelState {
    samples: usize,
    max_threads: usize,
    timeout: i32,
    copy_reference_results: bool,
}

#[derive(Debug, Clone)]
pub enum Message {
    RootFolderChanged(String),
    ResultFolderChanged(String),
    DataFileChanged(String),
    ShowReportChanged(bool),
    New,
    NewFolderSelected(Result<Option<NewTestBench>, String>),
    Load,
    Save,
    SaveAs,
    Options,
    OptionsAccepted(Option<ModelTestOptionsRequest>),
    RunMultiple,
    MultipleFileSelected(Result<Option<Vec<String>>, String>),
    NoOp,
}

#[derive(Debug)]
pub struct Window {
    title_template: String,
    settings_session: Option<StoredSettings>,
    model: Option<ModelState>,
    registration: RegistrationState,
    testbench_path: String,
    testbench_name: String,
    root_folder: String,
    result_folder: String,
    data_file_name: String,
    tree_items: Vec<String>,
    pending_batch_paths: Vec<String>,
    selected_tree_item: usize,
    action_availability: ActionAvailability,
    layout: EditorLayout,
    show_report: bool,
    saved_once: bool,
    loaded_once: bool,
    last_error: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            title_template: TITLE_TEMPLATE.to_owned(),
            settings_session: None,
            model: None,
            registration: RegistrationState::Released,
            testbench_path: String::new(),
            testbench_name: DEFAULT_TESTBENCH_NAME.to_owned(),
            root_folder: String::new(),
            result_folder: String::new(),
            data_file_name: String::new(),
            tree_items: Vec::new(),
            pending_batch_paths: Vec::new(),
            selected_tree_item: 0,
            action_availability: ActionAvailability::default(),
            layout: EditorLayout::default(),
            show_report: false,
            saved_once: false,
            loaded_once: false,
            last_error: None,
        }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::RootFolderChanged(value) => {
                self.root_folder = value;
                self.refresh_action_availability();
            }
            Message::ResultFolderChanged(value) => {
                self.result_folder = value;
                self.refresh_action_availability();
            }
            Message::DataFileChanged(value) => {
                self.data_file_name = value;
                self.refresh_action_availability();
            }
            Message::ShowReportChanged(value) => self.show_report = value,
            Message::New => return self.select_new_testbench_folder(),
            Message::NewFolderSelected(result) => match result {
                Ok(selection) => {
                    self.create_new_testbench(selection);
                    self.last_error = None;
                }
                Err(error) => self.last_error = Some(error),
            },
            Message::OptionsAccepted(request) => {
                self.apply_model_test_options(request);
            }
            Message::RunMultiple => return self.select_multiple_testbench_file(),
            Message::MultipleFileSelected(result) => match result {
                Ok(Some(paths)) => {
                    self.pending_batch_paths = paths;
                    self.last_error = None;
                }
                Ok(None) => {}
                Err(error) => self.last_error = Some(error),
            },
            Message::Load | Message::Save | Message::SaveAs | Message::Options | Message::NoOp => {}
        }

        Task::none()
    }

    /// Ports Ghidra function `FUN_012f3620` at `0x012F3620`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.FormCreate`. It retains the caption template,
    /// opens the form-owned settings session, creates the editor model, limits
    /// the model to one worker, and registers the live form instance.
    pub fn initialize_model_test_bench_editor(&mut self, settings: StoredSettings) {
        let timeout = settings.timeout;
        let copy_reference_results = settings.copy_reference_results;
        TITLE_TEMPLATE.clone_into(&mut self.title_template);
        self.settings_session = Some(settings);
        self.model = Some(ModelState {
            samples: 1_024,
            max_threads: 1,
            timeout,
            copy_reference_results,
        });
        self.registration = RegistrationState::Registered;
        self.show_report = false;
    }

    /// Ports Ghidra function `FUN_012f3750` at `0x012F3750`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.FormClose`. It selects Delphi `caFree`, drops
    /// the form-owned model, clears the shared live-form registration, and
    /// releases the transient result collection.
    pub fn release_model_test_bench_editor(&mut self) -> CloseDisposition {
        self.model = None;
        self.registration = RegistrationState::Released;
        self.tree_items.clear();
        self.selected_tree_item = 0;
        CloseDisposition::Release
    }

    /// Ports Ghidra function `FUN_012f37a0` at `0x012F37A0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.FormCloseQuery`. An accepted close is denied
    /// when the tree contains items and no save has started. Other close
    /// reasons are allowed.
    #[must_use]
    pub fn can_close(&self, reason: ModalCloseReason) -> bool {
        reason != ModalCloseReason::Accepted || self.saved_once || self.tree_items.is_empty()
    }

    /// Ports Ghidra function `FUN_012f37e0` at `0x012F37E0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.FormDestroy`. It destroys the form-owned
    /// settings object. The Rust port drops the injected settings session.
    pub fn destroy_model_test_bench_editor(&mut self) {
        self.settings_session = None;
    }

    /// Ports Ghidra function `FUN_012f3800` at `0x012F3800`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.FormHide`. It writes the current testbench
    /// path to `ModelTest Settings/TestBench`.
    #[must_use]
    pub fn persist_last_testbench_on_hide(&mut self) -> StoredSettings {
        let mut settings = self.settings_session.clone().unwrap_or_default();
        settings.testbench_path.clone_from(&self.testbench_path);
        self.settings_session = Some(settings.clone());
        settings
    }

    /// Ports Ghidra function `FUN_012f3890` at `0x012F3890`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.FormResize`. It divides the client width at
    /// 46.7742 percent, leaves a one-pixel boundary, keeps two grid columns,
    /// and clamps the active column to the available range.
    pub fn resize_model_test_bench_editor(&mut self, client_width: f32, active_column: isize) {
        let safe_width = client_width.max(1.0);
        let left_region_width = (safe_width * LEFT_REGION_RATIO).floor();
        self.layout = EditorLayout {
            window_width: safe_width,
            left_region_width,
            right_region_width: (safe_width - left_region_width - 1.0).max(0.0),
            active_column: usize::try_from(active_column).unwrap_or_default().min(1),
        };
    }

    /// Ports Ghidra function `FUN_012f3980` at `0x012F3980`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.FormShow`. The first show reads the stored
    /// path, defaults an empty value to `Noname`, resets the editor, and asks
    /// the injected loader for that testbench. Every show resets the scroll
    /// and tree selection and sizes the window 200 pixels below the available
    /// desktop width.
    pub fn show_model_test_bench_editor<L: TestBenchLoader>(
        &mut self,
        settings: &StoredSettings,
        available_width: f32,
        loader: &mut L,
    ) {
        if !self.loaded_once {
            let requested_path = if settings.testbench_path.trim().is_empty() {
                DEFAULT_TESTBENCH_NAME
            } else {
                settings.testbench_path.as_str()
            };

            self.reset_testbench(requested_path);
            if let Some(loaded) = loader.load(requested_path) {
                self.apply_loaded_testbench(loaded);
            }
            self.loaded_once = true;
        }

        self.resize_model_test_bench_editor((available_width - 200.0).max(1.0), 0);
        self.selected_tree_item = 0;
        self.refresh_action_availability();
    }

    /// Ports Ghidra function `FUN_012f3be0` at `0x012F3BE0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.mnNewClick`. A canceled folder selection is a
    /// no-op. An accepted selection resets the editor to `Noname`, applies the
    /// recovered 1024-sample, one-thread, zero-timeout defaults, assigns the
    /// folder as both circuit and result folder, and rebuilds the tree from
    /// recursively discovered TSC files.
    pub fn create_new_testbench(&mut self, selection: Option<NewTestBench>) -> bool {
        let Some(selection) = selection else {
            return false;
        };

        let folder = selection.folder.to_string_lossy().into_owned();
        self.reset_testbench(DEFAULT_TESTBENCH_NAME);
        self.root_folder.clone_from(&folder);
        self.result_folder = folder;
        self.tree_items = selection.circuits;
        self.model = Some(ModelState {
            samples: 1_024,
            max_threads: 1,
            timeout: 0,
            copy_reference_results: true,
        });
        self.refresh_action_availability();
        true
    }

    pub fn select_new_testbench_folder(&self) -> Task<Message> {
        Task::perform(discover_testbench_folder(), Message::NewFolderSelected)
    }

    /// Ports Ghidra function `FUN_012f3e40` at `0x012F3E40`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.mnOptionsClick`. A canceled dialog preserves
    /// the current settings. An accepted request writes the timeout and copy
    /// option to the settings session and updates the current editor model.
    pub const fn apply_model_test_options(
        &mut self,
        request: Option<ModelTestOptionsRequest>,
    ) -> bool {
        let Some(request) = request else {
            return false;
        };

        if let Some(settings) = &mut self.settings_session {
            settings.timeout = request.timeout;
            settings.copy_reference_results = request.copy_reference_results;
        }
        if let Some(model) = &mut self.model {
            model.timeout = request.timeout;
            model.copy_reference_results = request.copy_reference_results;
        }
        true
    }

    /// Ports Ghidra function `FUN_012f41e0` at `0x012F41E0`.
    ///
    /// The database maps the original function to
    /// `TfrmModelTestBenchEditor.mnRunMultipleClick`. A canceled file selection
    /// starts no work. Otherwise, each nonempty input line is passed to the
    /// single-testbench runner in order. Cancellation is checked between
    /// entries, messages are processed after each run, and the adapter applies
    /// the recovered 200 ms inter-entry delay.
    pub fn run_multiple_testbenches<R, C>(
        &mut self,
        paths: Option<&[String]>,
        runner: &mut R,
        mut is_cancelled: C,
    ) -> BatchRunResult
    where
        R: TestBenchRunner,
        C: FnMut() -> bool,
    {
        let Some(paths) = paths else {
            return BatchRunResult::default();
        };

        let mut result = BatchRunResult {
            selected: paths.len(),
            ..BatchRunResult::default()
        };

        for path in paths {
            if is_cancelled() {
                result.cancelled = true;
                break;
            }

            runner.run(path, true);
            result.completed += 1;
            runner.process_messages();
            runner.wait_between_runs(Duration::from_millis(200));
        }

        result
    }

    pub fn select_multiple_testbench_file(&self) -> Task<Message> {
        Task::perform(
            load_multiple_testbench_paths(),
            Message::MultipleFileSelected,
        )
    }

    pub const fn mark_save_started(&mut self) {
        self.saved_once = true;
    }

    #[must_use]
    pub const fn action_availability(&self) -> ActionAvailability {
        self.action_availability
    }

    #[must_use]
    pub const fn layout(&self) -> EditorLayout {
        self.layout
    }

    #[must_use]
    pub const fn is_registered(&self) -> bool {
        matches!(self.registration, RegistrationState::Registered)
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = row![
            button("New").on_press(Message::New),
            button("Load").on_press(Message::Load),
            button("Save").on_press(Message::Save),
            button("Save As").on_press(Message::SaveAs),
            button("Options").on_press(Message::Options),
            button("Run Multiple...").on_press(Message::RunMultiple),
        ]
        .spacing(8);

        let tree = self.tree_items.iter().enumerate().fold(
            column![text("Test bench")].spacing(4),
            |items, (index, item)| {
                let marker = if index == self.selected_tree_item {
                    ">"
                } else {
                    " "
                };
                items.push(text(format!("{marker} {item}")))
            },
        );

        let editor = column![
            text_input("Root folder", &self.root_folder).on_input(Message::RootFolderChanged),
            text_input("Result folder", &self.result_folder).on_input(Message::ResultFolderChanged),
            text_input("Data file", &self.data_file_name).on_input(Message::DataFileChanged),
            checkbox("Show report", self.show_report).on_toggle(Message::ShowReportChanged),
            text(format!(
                "Create: {}  Reference: {}  Result: {}  Samples: {}  Workers: {}  Batch: {}",
                self.action_availability.create_testbench,
                self.action_availability.load_reference,
                self.action_availability.load_result,
                self.model.map_or(0, |model| model.samples),
                self.model.map_or(0, |model| model.max_threads),
                self.pending_batch_paths.len()
            )),
        ]
        .spacing(10);

        let mut content = column![
            text(self.title_template.replace("%s", &self.testbench_name)).size(24),
            menu,
            row![
                container(scrollable(tree))
                    .width(Length::FillPortion(47))
                    .height(Length::Fill),
                container(editor).width(Length::FillPortion(53)).padding(12),
            ]
            .spacing(1)
            .height(Length::Fill),
        ]
        .padding(12)
        .spacing(12);

        if let Some(error) = &self.last_error {
            content = content.push(text(error));
        }

        content.into()
    }

    fn reset_testbench(&mut self, requested_path: &str) {
        requested_path.clone_into(&mut self.testbench_path);
        DEFAULT_TESTBENCH_NAME.clone_into(&mut self.testbench_name);
        self.root_folder.clear();
        self.result_folder.clear();
        self.data_file_name.clear();
        self.tree_items.clear();
        self.selected_tree_item = 0;
        self.saved_once = false;
    }

    fn apply_loaded_testbench(&mut self, loaded: LoadedTestBench) {
        self.testbench_name.clone_from(&loaded.path);
        self.testbench_path = loaded.path;
        self.root_folder = loaded.root_folder;
        self.result_folder = loaded.result_folder;
        self.data_file_name = loaded.data_file_name;
        self.tree_items = loaded.tree_items;
    }

    fn refresh_action_availability(&mut self) {
        self.action_availability = ActionAvailability {
            create_testbench: !self.root_folder.trim().is_empty(),
            load_reference: !self.result_folder.trim().is_empty(),
            load_result: !self.data_file_name.trim().is_empty(),
        };
    }
}

async fn discover_testbench_folder() -> Result<Option<NewTestBench>, String> {
    let Some(folder) = AsyncFileDialog::new().pick_folder().await else {
        return Ok(None);
    };
    let folder = folder.path().to_path_buf();
    let circuits = find_tsc_files(&folder)?;
    Ok(Some(NewTestBench { folder, circuits }))
}

fn find_tsc_files(folder: &Path) -> Result<Vec<String>, String> {
    let mut circuits = Vec::new();
    for entry in WalkDir::new(folder) {
        let entry = entry.map_err(|error| error.to_string())?;
        if !entry.file_type().is_file()
            || !entry
                .path()
                .extension()
                .is_some_and(|extension| extension.eq_ignore_ascii_case("tsc"))
        {
            continue;
        }

        let relative = entry
            .path()
            .strip_prefix(folder)
            .unwrap_or_else(|_| entry.path());
        circuits.push(relative.to_string_lossy().into_owned());
    }
    circuits.sort_unstable();
    Ok(circuits)
}

async fn load_multiple_testbench_paths() -> Result<Option<Vec<String>>, String> {
    let Some(file) = AsyncFileDialog::new()
        .add_filter("Text file", &["txt"])
        .pick_file()
        .await
    else {
        return Ok(None);
    };

    let contents = std::fs::read_to_string(file.path()).map_err(|error| error.to_string())?;
    Ok(Some(
        contents
            .lines()
            .map(str::trim)
            .filter(|line| !line.is_empty())
            .map(str::to_owned)
            .collect(),
    ))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Default)]
    struct Loader {
        requested_path: Option<String>,
        result: Option<LoadedTestBench>,
    }

    impl TestBenchLoader for Loader {
        fn load(&mut self, path: &str) -> Option<LoadedTestBench> {
            self.requested_path = Some(path.to_owned());
            self.result.take()
        }
    }

    #[test]
    fn create_initializes_one_worker_and_registers_the_form() {
        let mut window = Window::default();

        window.initialize_model_test_bench_editor(StoredSettings::default());

        assert!(window.is_registered());
        assert_eq!(window.model.expect("model").max_threads, 1);
    }

    #[test]
    fn close_releases_model_registration_and_transient_items() {
        let mut window = Window::default();
        window.initialize_model_test_bench_editor(StoredSettings::default());
        window.tree_items.push("Result".to_owned());

        let disposition = window.release_model_test_bench_editor();

        assert_eq!(disposition, CloseDisposition::Release);
        assert!(!window.is_registered());
        assert!(window.model.is_none());
        assert!(window.tree_items.is_empty());
    }

    #[test]
    fn accepted_close_is_blocked_until_a_nonempty_tree_has_been_saved() {
        let mut window = Window::default();
        window.tree_items.push("Test".to_owned());

        assert!(!window.can_close(ModalCloseReason::Accepted));
        assert!(window.can_close(ModalCloseReason::Other));

        window.mark_save_started();
        assert!(window.can_close(ModalCloseReason::Accepted));
    }

    #[test]
    fn destroy_drops_only_the_settings_session() {
        let mut window = Window::default();
        window.initialize_model_test_bench_editor(StoredSettings::default());

        window.destroy_model_test_bench_editor();

        assert!(window.settings_session.is_none());
        assert!(window.model.is_some());
    }

    #[test]
    fn hide_returns_the_current_testbench_path_for_persistence() {
        let mut window = Window {
            testbench_path: "D:/Tests/bench.tsc".to_owned(),
            ..Window::default()
        };

        let settings = window.persist_last_testbench_on_hide();

        assert_eq!(settings.testbench_path, "D:/Tests/bench.tsc");
    }

    #[test]
    fn resize_uses_the_recovered_split_and_clamps_the_active_column() {
        let mut window = Window::default();

        window.resize_model_test_bench_editor(1_000.0, 4);

        assert!((window.layout.left_region_width - 467.0).abs() < f32::EPSILON);
        assert!((window.layout.right_region_width - 532.0).abs() < f32::EPSILON);
        assert_eq!(window.layout.active_column, 1);
    }

    #[test]
    fn first_show_defaults_empty_setting_loads_once_and_refreshes_actions() {
        let mut window = Window::default();
        let mut loader = Loader {
            result: Some(LoadedTestBench {
                path: "Bench.tsc".to_owned(),
                root_folder: "circuits".to_owned(),
                result_folder: "results".to_owned(),
                data_file_name: "data.csv".to_owned(),
                tree_items: vec!["Case 1".to_owned()],
            }),
            ..Loader::default()
        };

        window.show_model_test_bench_editor(&StoredSettings::default(), 1_280.0, &mut loader);

        assert_eq!(
            loader.requested_path.as_deref(),
            Some(DEFAULT_TESTBENCH_NAME)
        );
        assert_eq!(window.testbench_name, "Bench.tsc");
        assert!((window.layout.window_width - 1_080.0).abs() < f32::EPSILON);
        assert_eq!(
            window.action_availability(),
            ActionAvailability {
                create_testbench: true,
                load_reference: true,
                load_result: true,
            }
        );

        loader.requested_path = None;
        window.show_model_test_bench_editor(
            &StoredSettings {
                testbench_path: "Other.tsc".to_owned(),
                ..StoredSettings::default()
            },
            1_000.0,
            &mut loader,
        );
        assert!(loader.requested_path.is_none());
    }

    #[test]
    fn new_testbench_cancel_is_noop_and_acceptance_applies_recovered_defaults() {
        let mut window = Window {
            testbench_name: "Existing".to_owned(),
            root_folder: "old".to_owned(),
            ..Window::default()
        };

        assert!(!window.create_new_testbench(None));
        assert_eq!(window.testbench_name, "Existing");

        assert!(window.create_new_testbench(Some(NewTestBench {
            folder: PathBuf::from("D:/Circuits"),
            circuits: vec!["A.tsc".to_owned(), "nested/B.TSC".to_owned()],
        })));
        assert_eq!(window.testbench_name, DEFAULT_TESTBENCH_NAME);
        assert_eq!(window.root_folder, "D:/Circuits");
        assert_eq!(window.result_folder, "D:/Circuits");
        assert_eq!(window.tree_items.len(), 2);
        assert_eq!(
            window.model,
            Some(ModelState {
                samples: 1_024,
                max_threads: 1,
                timeout: 0,
                copy_reference_results: true,
            })
        );
    }

    #[test]
    fn options_commit_updates_settings_and_current_model_only_after_acceptance() {
        let mut window = Window::default();
        window.initialize_model_test_bench_editor(StoredSettings::default());

        assert!(!window.apply_model_test_options(None));
        assert!(
            window.apply_model_test_options(Some(ModelTestOptionsRequest {
                timeout: 45,
                copy_reference_results: false,
            }))
        );

        let settings = window.settings_session.expect("settings");
        let model = window.model.expect("model");
        assert_eq!(settings.timeout, 45);
        assert!(!settings.copy_reference_results);
        assert_eq!(model.timeout, 45);
        assert!(!model.copy_reference_results);
    }

    #[derive(Default)]
    struct Runner {
        paths: Vec<String>,
        message_cycles: usize,
        delays: Vec<Duration>,
    }

    impl TestBenchRunner for Runner {
        fn run(&mut self, path: &str, batch_mode: bool) {
            assert!(batch_mode);
            self.paths.push(path.to_owned());
        }

        fn process_messages(&mut self) {
            self.message_cycles += 1;
        }

        fn wait_between_runs(&mut self, delay: Duration) {
            self.delays.push(delay);
        }
    }

    #[test]
    fn multiple_run_preserves_order_and_stops_between_entries_on_cancel() {
        let mut window = Window::default();
        let mut runner = Runner::default();
        let paths = vec!["one.tsc".to_owned(), "two.tsc".to_owned()];
        let mut cancellation_checks = 0;

        let result = window.run_multiple_testbenches(Some(&paths), &mut runner, || {
            let cancelled = cancellation_checks >= 1;
            cancellation_checks += 1;
            cancelled
        });

        assert_eq!(
            result,
            BatchRunResult {
                selected: 2,
                completed: 1,
                cancelled: true,
            }
        );
        assert_eq!(runner.paths, ["one.tsc"]);
        assert_eq!(runner.message_cycles, 1);
        assert_eq!(runner.delays, [Duration::from_millis(200)]);
    }

    #[test]
    fn canceled_multiple_file_selection_starts_no_runs() {
        let mut window = Window::default();
        let mut runner = Runner::default();

        let result = window.run_multiple_testbenches(None, &mut runner, || false);

        assert_eq!(result, BatchRunResult::default());
        assert!(runner.paths.is_empty());
    }
}
