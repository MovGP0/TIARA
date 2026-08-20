//! MCU kernel-image properties window.
//!
//! Library evaluation: Iced 0.13.1 supplies widgets, typed messages, and
//! asynchronous tasks. The maintained `rfd` crate supplies the native file
//! chooser. `std::fs` and `std::path` supply deterministic fixed-file
//! discovery. No additional validation or configuration crate is needed
//! because this module emits a typed generation request for the processor.

use std::collections::BTreeMap;
use std::fmt;
use std::path::{Path, PathBuf};

use iced::widget::{button, checkbox, column, container, row, text, text_input};
use iced::{Element, Length, Task};
use rfd::AsyncFileDialog;

pub const TITLE: &str = "MCU Kernel Image Properties";
pub const FORM_RESOURCE: &str = "MCUKernelImageProperties";
pub const FIXED_IMAGE_DIRECTORY: &str = r"d:\Attila\Devel Files\Other\Store\images-chess";

#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord)]
pub enum InputKind {
    TextSegment,
    DataSegment,
    RomFileSystem,
    ReadelfReport,
    LinuxConfiguration,
    UserFileSystemExecutable,
    UserFileSystemConfiguration,
}

impl InputKind {
    pub const ALL: [Self; 7] = [
        Self::TextSegment,
        Self::DataSegment,
        Self::RomFileSystem,
        Self::ReadelfReport,
        Self::LinuxConfiguration,
        Self::UserFileSystemExecutable,
        Self::UserFileSystemConfiguration,
    ];

    pub const STANDARD: [Self; 5] = [
        Self::TextSegment,
        Self::DataSegment,
        Self::RomFileSystem,
        Self::ReadelfReport,
        Self::LinuxConfiguration,
    ];

    const fn label(self) -> &'static str {
        match self {
            Self::TextSegment => "Text segment",
            Self::DataSegment => "Data segment",
            Self::RomFileSystem => "ROM file system",
            Self::ReadelfReport => "readelf -S output",
            Self::LinuxConfiguration => "Linux configuration",
            Self::UserFileSystemExecutable => "User-FS executable",
            Self::UserFileSystemConfiguration => "User-FS configuration",
        }
    }

    const fn fixed_file_name(self) -> Option<&'static str> {
        match self {
            Self::TextSegment => Some("linux.text"),
            Self::DataSegment => Some("linux.data"),
            Self::RomFileSystem => Some("romfs.img"),
            Self::ReadelfReport => Some("readelf.txt"),
            Self::LinuxConfiguration => Some("config.linux"),
            Self::UserFileSystemExecutable | Self::UserFileSystemConfiguration => None,
        }
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
struct InputSelection {
    path: PathBuf,
    selected: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FrameBufferRangeText {
    pub start: String,
    pub end: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ConfigGenerationRequest {
    pub text_segment: PathBuf,
    pub data_segment: PathBuf,
    pub rom_file_system: PathBuf,
    pub readelf_report: PathBuf,
    pub linux_configuration: PathBuf,
    pub user_file_system: Option<(PathBuf, PathBuf)>,
    pub frame_buffer: Option<FrameBufferRangeText>,
    pub output_file: PathBuf,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ValidationError {
    MissingTextSegment,
    MissingDataSegment,
    MissingRomFileSystem,
    MissingReadelfReport,
    MissingLinuxConfiguration,
    IncompleteUserFileSystemPair,
    Processing(String),
}

impl fmt::Display for ValidationError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(match self {
            Self::MissingTextSegment => "Text segment file not selected!",
            Self::MissingDataSegment => "Data segment not selected!",
            Self::MissingRomFileSystem => "Romfs not selected!",
            Self::MissingReadelfReport => "Readelf -S output not selected!",
            Self::MissingLinuxConfiguration => "Config.linux not selected!",
            Self::IncompleteUserFileSystemPair => "Userfs or userfs config not selected!",
            Self::Processing(message) => message,
        })
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum AcceptOutcome {
    LinuxConfigurationPrimed,
    Blocked(ValidationError),
    Generate(Box<ConfigGenerationRequest>),
}

#[derive(Debug, Clone)]
pub enum Message {
    Browse(InputKind),
    FileSelected(InputKind, Option<PathBuf>),
    DiscoverAll,
    UseFrameBufferChanged(bool),
    FrameBufferStartChanged(String),
    FrameBufferEndChanged(String),
    Accept,
    Cancel,
    GenerationFinished(Result<(), String>),
}

#[derive(Debug, Clone)]
struct FrameBufferState {
    use_range: bool,
    start_enabled: bool,
    end_enabled: bool,
    start: String,
    end: String,
}

impl Default for FrameBufferState {
    fn default() -> Self {
        Self {
            use_range: true,
            start_enabled: true,
            end_enabled: true,
            start: String::new(),
            end: String::new(),
        }
    }
}

#[derive(Debug, Clone, Default)]
struct ValidationState {
    error: Option<ValidationError>,
    close_blocked: bool,
    cancelled: bool,
}

pub trait FileAccess {
    fn is_accessible(&self, path: &Path) -> bool;
}

#[derive(Debug, Clone, Copy, Default)]
pub struct StandardFileAccess;

impl FileAccess for StandardFileAccess {
    fn is_accessible(&self, path: &Path) -> bool {
        std::fs::metadata(path).is_ok()
    }
}

#[derive(Debug, Clone)]
pub struct Window {
    inputs: BTreeMap<InputKind, InputSelection>,
    dialog_directory: PathBuf,
    application_directory: PathBuf,
    frame_buffer: FrameBufferState,
    validation: ValidationState,
    generation_request: Option<ConfigGenerationRequest>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(PathBuf::new())
    }
}

impl Window {
    #[must_use]
    pub fn new(application_directory: PathBuf) -> Self {
        Self {
            inputs: InputKind::ALL
                .into_iter()
                .map(|kind| (kind, InputSelection::default()))
                .collect(),
            dialog_directory: PathBuf::new(),
            application_directory,
            frame_buffer: FrameBufferState::default(),
            validation: ValidationState::default(),
            generation_request: None,
        }
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Browse(kind) => {
                Task::perform(select_file(), move |path| Message::FileSelected(kind, path))
            }
            Message::FileSelected(kind, path) => {
                self.select_input(kind, path);
                Task::none()
            }
            Message::DiscoverAll => {
                self.discover_standard_files(&StandardFileAccess);
                Task::none()
            }
            Message::UseFrameBufferChanged(enabled) => {
                self.set_use_frame_buffer(enabled);
                Task::none()
            }
            Message::FrameBufferStartChanged(value) => {
                if self.frame_buffer.start_enabled {
                    self.frame_buffer.start = value;
                }
                Task::none()
            }
            Message::FrameBufferEndChanged(value) => {
                if self.frame_buffer.end_enabled {
                    self.frame_buffer.end = value;
                }
                Task::none()
            }
            Message::Accept => {
                let _ = self.accept();
                Task::none()
            }
            Message::Cancel => {
                self.cancel();
                Task::none()
            }
            Message::GenerationFinished(result) => {
                self.generation_finished(result);
                Task::none()
            }
        }
    }

    fn select_input(&mut self, kind: InputKind, path: Option<PathBuf>) {
        let Some(path) = path else {
            return;
        };
        if let Some(selection) = self.inputs.get_mut(&kind) {
            selection.path = path;
            selection.selected = true;
        }
    }

    /// Ports Ghidra function `FUN_01414ae0` at `0x01414AE0`.
    pub fn select_text_file(&mut self, path: Option<PathBuf>) {
        self.select_input(InputKind::TextSegment, path);
    }

    /// Ports Ghidra function `FUN_01414b90` at `0x01414B90`.
    pub fn select_data_file(&mut self, path: Option<PathBuf>) {
        self.select_input(InputKind::DataSegment, path);
    }

    /// Ports Ghidra function `FUN_01414c40` at `0x01414C40`.
    pub fn select_romfs_file(&mut self, path: Option<PathBuf>) {
        self.select_input(InputKind::RomFileSystem, path);
    }

    /// Ports Ghidra function `FUN_01414cf0` at `0x01414CF0`.
    pub fn select_user_fs_config_file(&mut self, path: Option<PathBuf>) {
        self.select_input(InputKind::UserFileSystemConfiguration, path);
    }

    /// Ports Ghidra function `FUN_01414da0` at `0x01414DA0`.
    pub fn select_user_fs_executable(&mut self, path: Option<PathBuf>) {
        self.select_input(InputKind::UserFileSystemExecutable, path);
    }

    /// Ports Ghidra function `FUN_01414e50` at `0x01414E50`.
    pub fn select_readelf_report(&mut self, path: Option<PathBuf>) {
        self.select_input(InputKind::ReadelfReport, path);
    }

    /// Ports Ghidra function `FUN_01414f00` at `0x01414F00`.
    pub fn select_linux_configuration(&mut self, path: Option<PathBuf>) {
        self.select_input(InputKind::LinuxConfiguration, path);
    }

    /// Ports Ghidra function `FUN_01415220` at `0x01415220`.
    #[must_use]
    pub fn accept(&mut self) -> AcceptOutcome {
        if !self.selection(InputKind::LinuxConfiguration).selected {
            self.selection_mut(InputKind::LinuxConfiguration).selected = true;
            self.validation.error = None;
            self.validation.close_blocked = false;
            return AcceptOutcome::LinuxConfigurationPrimed;
        }

        if let Some(error) = self.selection_error() {
            self.validation.error = Some(error.clone());
            self.validation.close_blocked = true;
            self.generation_request = None;
            return AcceptOutcome::Blocked(error);
        }

        let request = self.build_generation_request();
        self.validation.error = None;
        self.validation.close_blocked = false;
        self.validation.cancelled = false;
        self.generation_request = Some(request.clone());
        AcceptOutcome::Generate(Box::new(request))
    }

    fn selection_error(&self) -> Option<ValidationError> {
        let mut error = [
            (InputKind::TextSegment, ValidationError::MissingTextSegment),
            (InputKind::DataSegment, ValidationError::MissingDataSegment),
            (
                InputKind::RomFileSystem,
                ValidationError::MissingRomFileSystem,
            ),
            (
                InputKind::ReadelfReport,
                ValidationError::MissingReadelfReport,
            ),
            (
                InputKind::LinuxConfiguration,
                ValidationError::MissingLinuxConfiguration,
            ),
        ]
        .into_iter()
        .find_map(|(kind, error)| (!self.selection(kind).selected).then_some(error));

        let user_fs = self.selection(InputKind::UserFileSystemExecutable).selected;
        let user_fs_config = self
            .selection(InputKind::UserFileSystemConfiguration)
            .selected;
        if user_fs != user_fs_config {
            error = Some(ValidationError::IncompleteUserFileSystemPair);
        }
        error
    }

    fn build_generation_request(&self) -> ConfigGenerationRequest {
        let user_file_system = self
            .selection(InputKind::UserFileSystemExecutable)
            .selected
            .then(|| {
                (
                    self.selection(InputKind::UserFileSystemExecutable)
                        .path
                        .clone(),
                    self.selection(InputKind::UserFileSystemConfiguration)
                        .path
                        .clone(),
                )
            });
        ConfigGenerationRequest {
            text_segment: self.selection(InputKind::TextSegment).path.clone(),
            data_segment: self.selection(InputKind::DataSegment).path.clone(),
            rom_file_system: self.selection(InputKind::RomFileSystem).path.clone(),
            readelf_report: self.selection(InputKind::ReadelfReport).path.clone(),
            linux_configuration: self.selection(InputKind::LinuxConfiguration).path.clone(),
            user_file_system,
            frame_buffer: self.frame_buffer.use_range.then(|| FrameBufferRangeText {
                start: self.frame_buffer.start.clone(),
                end: self.frame_buffer.end.clone(),
            }),
            output_file: self.application_directory.join("config.txt"),
        }
    }

    /// Ports Ghidra function `FUN_014155b0` at `0x014155B0`.
    pub fn cancel(&mut self) {
        self.validation.error = None;
        self.validation.close_blocked = false;
        self.validation.cancelled = true;
    }

    pub fn generation_finished(&mut self, result: Result<(), String>) {
        match result {
            Ok(()) => {
                self.validation.error = None;
                self.validation.close_blocked = false;
            }
            Err(message) => {
                self.validation.error = Some(ValidationError::Processing(message));
                self.validation.close_blocked = true;
            }
        }
    }

    #[must_use]
    pub const fn close_query(&self) -> bool {
        !self.validation.close_blocked
    }

    /// Ports Ghidra function `FUN_01416740` at `0x01416740`.
    pub fn discover_standard_files<F: FileAccess>(&mut self, file_access: &F) -> usize {
        let directory = PathBuf::from(FIXED_IMAGE_DIRECTORY);
        self.dialog_directory.clone_from(&directory);
        let mut found = 0;
        for kind in InputKind::STANDARD {
            let Some(file_name) = kind.fixed_file_name() else {
                continue;
            };
            let path = directory.join(file_name);
            if file_access.is_accessible(&path) {
                self.select_input(kind, Some(path));
                found += 1;
            }
        }
        found
    }

    /// Ports Ghidra function `FUN_014168a0` at `0x014168A0`.
    pub const fn set_use_frame_buffer(&mut self, enabled: bool) {
        self.frame_buffer.use_range = enabled;
        self.frame_buffer.start_enabled = enabled;
        self.frame_buffer.end_enabled = enabled;
    }

    fn selection(&self, kind: InputKind) -> &InputSelection {
        self.inputs
            .get(&kind)
            .unwrap_or_else(|| unreachable!("all input kinds are initialized"))
    }

    fn selection_mut(&mut self, kind: InputKind) -> &mut InputSelection {
        self.inputs
            .get_mut(&kind)
            .unwrap_or_else(|| unreachable!("all input kinds are initialized"))
    }

    #[must_use]
    pub fn selected_path(&self, kind: InputKind) -> Option<&Path> {
        let selection = self.selection(kind);
        selection.selected.then_some(selection.path.as_path())
    }

    #[must_use]
    pub const fn frame_buffer_editors_enabled(&self) -> (bool, bool) {
        (
            self.frame_buffer.start_enabled,
            self.frame_buffer.end_enabled,
        )
    }

    #[must_use]
    pub const fn validation_error(&self) -> Option<&ValidationError> {
        self.validation.error.as_ref()
    }

    #[must_use]
    pub const fn was_cancelled(&self) -> bool {
        self.validation.cancelled
    }

    #[must_use]
    pub const fn generation_request(&self) -> Option<&ConfigGenerationRequest> {
        self.generation_request.as_ref()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let selectors: Element<'_, Message> = column(InputKind::ALL.into_iter().map(|kind| {
            let path = self.selection(kind).path.display().to_string();
            row![
                text(kind.label()).width(Length::Fixed(170.0)),
                text(path).width(Length::Fill),
                button("Select...").on_press(Message::Browse(kind)),
            ]
            .spacing(8)
            .into()
        }))
        .spacing(6)
        .into();
        let error = self
            .validation
            .error
            .as_ref()
            .map_or_else(|| text(""), |error| text(error.to_string()));
        let body = column![
            selectors,
            button("Get All").on_press(Message::DiscoverAll),
            checkbox("Use frame buffer", self.frame_buffer.use_range)
                .on_toggle(Message::UseFrameBufferChanged),
            row![
                text("Frame buffer start"),
                text_input("", &self.frame_buffer.start).on_input(Message::FrameBufferStartChanged),
            ]
            .spacing(8),
            row![
                text("Frame buffer end"),
                text_input("", &self.frame_buffer.end).on_input(Message::FrameBufferEndChanged),
            ]
            .spacing(8),
            error,
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(8),
        ]
        .spacing(10);
        container(body)
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

async fn select_file() -> Option<PathBuf> {
    AsyncFileDialog::new()
        .pick_file()
        .await
        .map(|handle| handle.path().to_path_buf())
}

#[cfg(test)]
mod tests {
    use std::collections::BTreeSet;

    use super::*;

    type FileSelector = fn(&mut Window, Option<PathBuf>);

    #[derive(Debug, Default)]
    struct TestFileAccess {
        accessible: BTreeSet<PathBuf>,
    }

    impl FileAccess for TestFileAccess {
        fn is_accessible(&self, path: &Path) -> bool {
            self.accessible.contains(path)
        }
    }

    fn select_required(window: &mut Window) {
        window.select_text_file(Some(PathBuf::from("linux.text")));
        window.select_data_file(Some(PathBuf::from("linux.data")));
        window.select_romfs_file(Some(PathBuf::from("romfs.img")));
        window.select_readelf_report(Some(PathBuf::from("readelf.txt")));
        window.select_linux_configuration(Some(PathBuf::from("config.linux")));
    }

    #[test]
    fn each_selector_stages_an_accepted_path_and_cancel_preserves_it() {
        let mut window = Window::default();
        let selections: [(InputKind, FileSelector); 7] = [
            (InputKind::TextSegment, Window::select_text_file),
            (InputKind::DataSegment, Window::select_data_file),
            (InputKind::RomFileSystem, Window::select_romfs_file),
            (InputKind::ReadelfReport, Window::select_readelf_report),
            (
                InputKind::LinuxConfiguration,
                Window::select_linux_configuration,
            ),
            (
                InputKind::UserFileSystemExecutable,
                Window::select_user_fs_executable,
            ),
            (
                InputKind::UserFileSystemConfiguration,
                Window::select_user_fs_config_file,
            ),
        ];

        for (kind, select) in selections {
            let path = PathBuf::from(format!("{kind:?}.bin"));
            select(&mut window, Some(path.clone()));
            assert_eq!(window.selected_path(kind), Some(path.as_path()));
            select(&mut window, None);
            assert_eq!(window.selected_path(kind), Some(path.as_path()));
        }
    }

    #[test]
    fn fixed_discovery_updates_each_accessible_standard_file_independently() {
        let directory = PathBuf::from(FIXED_IMAGE_DIRECTORY);
        let access = TestFileAccess {
            accessible: [directory.join("linux.text"), directory.join("romfs.img")]
                .into_iter()
                .collect(),
        };
        let mut window = Window::default();
        window.select_data_file(Some(PathBuf::from("old.data")));
        window.select_user_fs_executable(Some(PathBuf::from("optional.bin")));

        assert_eq!(window.discover_standard_files(&access), 2);
        assert_eq!(
            window.selected_path(InputKind::TextSegment),
            Some(directory.join("linux.text").as_path())
        );
        assert_eq!(
            window.selected_path(InputKind::DataSegment),
            Some(Path::new("old.data"))
        );
        assert_eq!(
            window.selected_path(InputKind::UserFileSystemExecutable),
            Some(Path::new("optional.bin"))
        );
    }

    #[test]
    fn first_accept_without_linux_flag_only_primes_that_flag() {
        let mut window = Window::default();

        assert_eq!(window.accept(), AcceptOutcome::LinuxConfigurationPrimed);
        assert!(window.selection(InputKind::LinuxConfiguration).selected);
        assert!(window.generation_request().is_none());
        assert!(window.close_query());
    }

    #[test]
    fn validation_reports_required_inputs_and_optional_pair_overrides_them() {
        let mut window = Window::default();
        window.selection_mut(InputKind::LinuxConfiguration).selected = true;

        assert_eq!(
            window.accept(),
            AcceptOutcome::Blocked(ValidationError::MissingTextSegment)
        );
        window.select_user_fs_executable(Some(PathBuf::from("userfs")));
        assert_eq!(
            window.accept(),
            AcceptOutcome::Blocked(ValidationError::IncompleteUserFileSystemPair)
        );
        assert!(!window.close_query());
    }

    #[test]
    fn valid_inputs_create_typed_generation_request() {
        let mut window = Window::new(PathBuf::from("app"));
        select_required(&mut window);
        window.select_user_fs_executable(Some(PathBuf::from("userfs")));
        window.select_user_fs_config_file(Some(PathBuf::from("userfs.cfg")));
        window.frame_buffer.start = "1000".to_owned();
        window.frame_buffer.end = "1fff".to_owned();

        let AcceptOutcome::Generate(request) = window.accept() else {
            panic!("generation request expected");
        };
        assert_eq!(request.output_file, PathBuf::from("app").join("config.txt"));
        assert_eq!(
            request.user_file_system,
            Some((PathBuf::from("userfs"), PathBuf::from("userfs.cfg")))
        );
        assert_eq!(
            request.frame_buffer,
            Some(FrameBufferRangeText {
                start: "1000".to_owned(),
                end: "1fff".to_owned(),
            })
        );
        assert_eq!(window.generation_request(), Some(request.as_ref()));
        assert!(window.close_query());
    }

    #[test]
    fn frame_buffer_toggle_changes_both_editor_states_and_preserves_text() {
        let mut window = Window::default();
        window.frame_buffer.start = "start".to_owned();
        window.frame_buffer.end = "end".to_owned();

        window.set_use_frame_buffer(false);
        assert_eq!(window.frame_buffer_editors_enabled(), (false, false));
        assert_eq!(window.frame_buffer.start, "start");
        assert_eq!(window.frame_buffer.end, "end");

        window.set_use_frame_buffer(true);
        assert_eq!(window.frame_buffer_editors_enabled(), (true, true));
        assert_eq!(window.frame_buffer.start, "start");
        assert_eq!(window.frame_buffer.end, "end");
    }

    #[test]
    fn cancel_clears_error_without_changing_inputs_or_frame_buffer() {
        let mut window = Window::default();
        window.selection_mut(InputKind::LinuxConfiguration).selected = true;
        window.frame_buffer.start = "unchanged".to_owned();
        assert!(matches!(window.accept(), AcceptOutcome::Blocked(_)));

        window.cancel();

        assert!(window.validation_error().is_none());
        assert!(window.close_query());
        assert!(window.was_cancelled());
        assert!(window.selection(InputKind::LinuxConfiguration).selected);
        assert_eq!(window.frame_buffer.start, "unchanged");
    }

    #[test]
    fn generation_error_blocks_close_until_cancel_or_later_success() {
        let mut window = Window::default();

        window.generation_finished(Err("Error during processing the config file".to_owned()));
        assert_eq!(
            window.validation_error(),
            Some(&ValidationError::Processing(
                "Error during processing the config file".to_owned()
            ))
        );
        assert!(!window.close_query());

        window.generation_finished(Ok(()));
        assert!(window.validation_error().is_none());
        assert!(window.close_query());
    }
}
