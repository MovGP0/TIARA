use std::fs;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, container, row, text, text_input};
use iced::{Alignment, Element, Length};
use rfd::FileDialog;

use crate::shared::window_shell;

pub const TITLE: &str = "Set Environment Variables";
pub const FORM_RESOURCE: &str = "frmSetEnvVars";
const FOLDER_PICKER_TITLE: &str = "Select or create a folder";
const PRODUCT_KEY_PREFIX: &str = r"SOFTWARE\DesignSoft";
const TINA_DIRECTORY_KEY: &str = r"SOFTWARE\DesignSoft\TINALab II\Directory";
const DEFAULT_SETTINGS_FILES: [&str; 11] = [
    "fpeditor.ini",
    "layers.ini",
    "meas.ini",
    "3D Viewer.ini",
    "pcb.ini",
    "shapeDefs.ini",
    "TINA.INI",
    "tsuper.ini",
    "fpga_pinout.txt",
    "Edison5.ini",
    r"VHDL\vhdl_95_global.ini",
];

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FolderPickerRequest {
    pub title: String,
    pub initial_folder: Option<PathBuf>,
}

pub trait FolderPicker {
    fn pick_folder(&mut self, request: FolderPickerRequest) -> Option<PathBuf>;
}

#[derive(Debug, Default)]
pub struct RfdFolderPicker;

impl FolderPicker for RfdFolderPicker {
    fn pick_folder(&mut self, request: FolderPickerRequest) -> Option<PathBuf> {
        let mut dialog = FileDialog::new().set_title(&request.title);
        if let Some(initial_folder) = request.initial_folder {
            dialog = dialog.set_directory(initial_folder);
        }
        dialog.pick_folder()
    }
}

pub trait EnvironmentFileSystem {
    fn is_directory(&self, path: &Path) -> bool;
    fn file_exists(&self, path: &Path) -> bool;
    fn copy_file(&mut self, source: &Path, destination: &Path);
    fn create_directory(&mut self, path: &Path);
}

#[derive(Debug, Default)]
pub struct StdEnvironmentFileSystem;

impl EnvironmentFileSystem for StdEnvironmentFileSystem {
    fn is_directory(&self, path: &Path) -> bool {
        path.is_dir()
    }

    fn file_exists(&self, path: &Path) -> bool {
        path.is_file()
    }

    fn copy_file(&mut self, source: &Path, destination: &Path) {
        let _ = fs::copy(source, destination);
    }

    fn create_directory(&mut self, path: &Path) {
        let _ = fs::create_dir_all(path);
    }
}

pub trait RegistryStore {
    fn open_or_create(&mut self, key: &str) -> bool;
    fn write_path(&mut self, name: &str, value: &Path);
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SetupConfiguration {
    pub install_directory: PathBuf,
    pub product_registry_suffix: String,
    pub additional_catalog_subdirectory: Option<PathBuf>,
}

impl Default for SetupConfiguration {
    fn default() -> Self {
        Self {
            install_directory: PathBuf::new(),
            product_registry_suffix: String::new(),
            additional_catalog_subdirectory: None,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum EnvironmentField {
    Settings,
    PrivateCatalog,
    Temporary,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ExternalAction {
    Browse(EnvironmentField),
    CreateFolders,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    TextChanged(EnvironmentField, String),
    BrowseRequested(EnvironmentField),
    CreateFoldersRequested,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SetupOutcome {
    Accepted,
}

#[derive(Debug)]
pub struct Window {
    settings_directory: String,
    catalog_directory: String,
    temporary_directory: String,
    configuration: SetupConfiguration,
    pending_action: Option<ExternalAction>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(SetupConfiguration::default())
    }
}

impl Window {
    #[must_use]
    pub const fn new(configuration: SetupConfiguration) -> Self {
        Self {
            settings_directory: String::new(),
            catalog_directory: String::new(),
            temporary_directory: String::new(),
            configuration,
            pending_action: None,
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::TextChanged(field, value) => *self.field_mut(field) = value,
            Message::BrowseRequested(field) => {
                self.pending_action = Some(ExternalAction::Browse(field));
            }
            Message::CreateFoldersRequested => {
                self.pending_action = Some(ExternalAction::CreateFolders);
            }
        }
    }

    #[must_use]
    pub const fn take_action(&mut self) -> Option<ExternalAction> {
        self.pending_action.take()
    }

    /// Browses for the Settings Folder. This ports Ghidra function
    /// `FUN_01d7c790` at `0x01D7C790`.
    pub fn browse_settings_directory(
        &mut self,
        picker: &mut impl FolderPicker,
        file_system: &impl EnvironmentFileSystem,
    ) -> bool {
        self.browse_directory(EnvironmentField::Settings, picker, file_system)
    }

    /// Browses for the Private Catalog Folder. This ports Ghidra function
    /// `FUN_01d7c860` at `0x01D7C860`.
    pub fn browse_catalog_directory(
        &mut self,
        picker: &mut impl FolderPicker,
        file_system: &impl EnvironmentFileSystem,
    ) -> bool {
        self.browse_directory(EnvironmentField::PrivateCatalog, picker, file_system)
    }

    /// Browses for the Temporary Folder. This ports Ghidra function
    /// `FUN_01d7c930` at `0x01D7C930`.
    pub fn browse_temporary_directory(
        &mut self,
        picker: &mut impl FolderPicker,
        file_system: &impl EnvironmentFileSystem,
    ) -> bool {
        self.browse_directory(EnvironmentField::Temporary, picker, file_system)
    }

    fn browse_directory(
        &mut self,
        field: EnvironmentField,
        picker: &mut impl FolderPicker,
        file_system: &impl EnvironmentFileSystem,
    ) -> bool {
        let current = Path::new(self.field(field));
        let Some(selected) = select_folder(current, file_system, picker) else {
            return false;
        };
        *self.field_mut(field) = selected.to_string_lossy().into_owned();
        true
    }

    /// Writes available registry values, installs available defaults, and
    /// creates the recovered directory structure. This ports Ghidra function
    /// `FUN_01d7ccf0` at `0x01D7CCF0`.
    pub fn create_environment(
        &self,
        registry: &mut impl RegistryStore,
        file_system: &mut impl EnvironmentFileSystem,
    ) -> SetupOutcome {
        self.write_registry_values(registry);
        let settings = Path::new(&self.settings_directory);
        let catalog = Path::new(&self.catalog_directory);
        let temporary = Path::new(&self.temporary_directory);

        file_system.create_directory(settings);
        install_available_default_settings(
            &self.configuration.install_directory,
            settings,
            file_system,
        );
        create_known_subdirectories(
            settings,
            catalog,
            temporary,
            self.configuration
                .additional_catalog_subdirectory
                .as_deref(),
            file_system,
        );
        SetupOutcome::Accepted
    }

    fn write_registry_values(&self, registry: &mut impl RegistryStore) {
        let product_key = format!(
            r"{PRODUCT_KEY_PREFIX}\{}",
            self.configuration.product_registry_suffix
        );
        if registry.open_or_create(&product_key) {
            registry.write_path("SettingsDir", Path::new(&self.settings_directory));
            registry.write_path("CatalogDir", Path::new(&self.catalog_directory));
            registry.write_path("TempDir", Path::new(&self.temporary_directory));
        }
        if registry.open_or_create(TINA_DIRECTORY_KEY) {
            registry.write_path("TinaDir", &self.configuration.install_directory);
        }
    }

    fn field(&self, field: EnvironmentField) -> &str {
        match field {
            EnvironmentField::Settings => &self.settings_directory,
            EnvironmentField::PrivateCatalog => &self.catalog_directory,
            EnvironmentField::Temporary => &self.temporary_directory,
        }
    }

    const fn field_mut(&mut self, field: EnvironmentField) -> &mut String {
        match field {
            EnvironmentField::Settings => &mut self.settings_directory,
            EnvironmentField::PrivateCatalog => &mut self.catalog_directory,
            EnvironmentField::Temporary => &mut self.temporary_directory,
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(&["Create Folders"], Message::CreateFoldersRequested);
        let body: Element<'_, Message> = container(
            column![
                directory_row(
                    "Settings Folder",
                    &self.settings_directory,
                    EnvironmentField::Settings
                ),
                directory_row(
                    "Private Catalog Folder",
                    &self.catalog_directory,
                    EnvironmentField::PrivateCatalog
                ),
                directory_row(
                    "Temporary Folder",
                    &self.temporary_directory,
                    EnvironmentField::Temporary
                ),
            ]
            .spacing(10),
        )
        .padding(18)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();
        window_shell::frame(TITLE, menu, toolbar, body, "Folder configuration")
    }
}

/// Selects a file-system folder and uses an existing directory as the initial
/// location. This ports Ghidra function `FUN_01d7c210` at `0x01D7C210`.
#[must_use]
pub fn select_folder(
    current: &Path,
    file_system: &impl EnvironmentFileSystem,
    picker: &mut impl FolderPicker,
) -> Option<PathBuf> {
    let initial_folder = file_system
        .is_directory(current)
        .then(|| current.to_path_buf());
    picker.pick_folder(FolderPickerRequest {
        title: FOLDER_PICKER_TITLE.to_owned(),
        initial_folder,
    })
}

/// Copies available install-directory backup defaults to their live names.
/// This ports Ghidra function `FUN_01d7ca00` at `0x01D7CA00`.
pub fn install_available_default_settings(
    install_directory: &Path,
    settings_directory: &Path,
    file_system: &mut impl EnvironmentFileSystem,
) {
    for file_name in DEFAULT_SETTINGS_FILES {
        let source = install_directory.join(format!("{file_name}.bak"));
        if file_system.file_exists(&source) {
            file_system.copy_file(&source, &settings_directory.join(file_name));
        }
    }
}

fn create_known_subdirectories(
    settings: &Path,
    catalog: &Path,
    temporary: &Path,
    additional_catalog_subdirectory: Option<&Path>,
    file_system: &mut impl EnvironmentFileSystem,
) {
    for relative in ["User Examples", "Macrolib"] {
        file_system.create_directory(&settings.join(relative));
    }
    for relative in [
        "Buttons",
        "Spicelib",
        "Templates",
        r"VHDL\MCU\Include",
        r"VHDL\Packages",
    ] {
        file_system.create_directory(&catalog.join(relative));
    }
    if let Some(relative) = additional_catalog_subdirectory {
        file_system.create_directory(&catalog.join(relative));
    }
    file_system.create_directory(temporary);
}

fn directory_row<'a>(
    label: &'a str,
    value: &'a str,
    field: EnvironmentField,
) -> Element<'a, Message> {
    row![
        text(label).width(Length::FillPortion(2)),
        text_input("", value)
            .on_input(move |value| Message::TextChanged(field, value))
            .width(Length::FillPortion(4)),
        button("Browse...").on_press(Message::BrowseRequested(field)),
    ]
    .spacing(8)
    .align_y(Alignment::Center)
    .into()
}

#[cfg(test)]
mod tests {
    use std::collections::{HashSet, VecDeque};

    use super::*;

    #[derive(Default)]
    struct FileSystem {
        directories: HashSet<PathBuf>,
        files: HashSet<PathBuf>,
        copies: Vec<(PathBuf, PathBuf)>,
        created: Vec<PathBuf>,
    }

    impl EnvironmentFileSystem for FileSystem {
        fn is_directory(&self, path: &Path) -> bool {
            self.directories.contains(path)
        }

        fn file_exists(&self, path: &Path) -> bool {
            self.files.contains(path)
        }

        fn copy_file(&mut self, source: &Path, destination: &Path) {
            self.copies
                .push((source.to_path_buf(), destination.to_path_buf()));
        }

        fn create_directory(&mut self, path: &Path) {
            self.created.push(path.to_path_buf());
        }
    }

    #[derive(Default)]
    struct Picker {
        selections: VecDeque<Option<PathBuf>>,
        requests: Vec<FolderPickerRequest>,
    }

    impl FolderPicker for Picker {
        fn pick_folder(&mut self, request: FolderPickerRequest) -> Option<PathBuf> {
            self.requests.push(request);
            self.selections.pop_front().flatten()
        }
    }

    #[derive(Default)]
    struct Registry {
        open_results: VecDeque<bool>,
        opened: Vec<String>,
        current_key: Option<String>,
        writes: Vec<(String, String, PathBuf)>,
    }

    impl RegistryStore for Registry {
        fn open_or_create(&mut self, key: &str) -> bool {
            self.opened.push(key.to_owned());
            let opened = self.open_results.pop_front().unwrap_or(false);
            self.current_key = opened.then(|| key.to_owned());
            opened
        }

        fn write_path(&mut self, name: &str, value: &Path) {
            if let Some(key) = &self.current_key {
                self.writes
                    .push((key.clone(), name.to_owned(), value.to_path_buf()));
            }
        }
    }

    fn configured_window() -> Window {
        let mut window = Window::new(SetupConfiguration {
            install_directory: PathBuf::from(r"C:\TINA"),
            product_registry_suffix: "TINA 16".to_owned(),
            additional_catalog_subdirectory: Some(PathBuf::from("RecoveredExtra")),
        });
        window.settings_directory = PathBuf::from(r"C:\User\Settings")
            .to_string_lossy()
            .into_owned();
        window.catalog_directory = PathBuf::from(r"C:\User\Catalog")
            .to_string_lossy()
            .into_owned();
        window.temporary_directory = PathBuf::from(r"C:\User\Temp")
            .to_string_lossy()
            .into_owned();
        window
    }

    #[test]
    fn folder_picker_uses_only_an_existing_initial_directory() {
        let mut file_system = FileSystem::default();
        file_system
            .directories
            .insert(PathBuf::from(r"C:\Existing"));
        let mut picker = Picker {
            selections: VecDeque::from([None, Some(PathBuf::from(r"C:\Selected"))]),
            requests: Vec::new(),
        };

        assert_eq!(
            select_folder(Path::new(r"C:\Missing"), &file_system, &mut picker),
            None
        );
        assert_eq!(
            select_folder(Path::new(r"C:\Existing"), &file_system, &mut picker),
            Some(PathBuf::from(r"C:\Selected"))
        );
        assert_eq!(picker.requests[0].initial_folder, None);
        assert_eq!(
            picker.requests[1].initial_folder,
            Some(PathBuf::from(r"C:\Existing"))
        );
    }

    #[test]
    fn each_browse_handler_updates_only_after_a_selection() {
        let mut window = configured_window();
        let file_system = FileSystem::default();
        let mut picker = Picker {
            selections: VecDeque::from([
                None,
                Some(PathBuf::from(r"D:\Catalog")),
                Some(PathBuf::from(r"D:\Temp")),
            ]),
            requests: Vec::new(),
        };

        assert!(!window.browse_settings_directory(&mut picker, &file_system));
        assert!(window.browse_catalog_directory(&mut picker, &file_system));
        assert!(window.browse_temporary_directory(&mut picker, &file_system));
        assert_eq!(window.settings_directory, r"C:\User\Settings");
        assert_eq!(window.catalog_directory, r"D:\Catalog");
        assert_eq!(window.temporary_directory, r"D:\Temp");
    }

    #[test]
    fn default_copy_skips_missing_backups_and_preserves_live_names() {
        let mut file_system = FileSystem::default();
        file_system
            .files
            .insert(PathBuf::from(r"C:\TINA").join("layers.ini.bak"));
        file_system
            .files
            .insert(PathBuf::from(r"C:\TINA").join(r"VHDL\vhdl_95_global.ini.bak"));

        install_available_default_settings(
            Path::new(r"C:\TINA"),
            Path::new(r"C:\Settings"),
            &mut file_system,
        );
        assert_eq!(
            file_system.copies,
            vec![
                (
                    PathBuf::from(r"C:\TINA").join("layers.ini.bak"),
                    PathBuf::from(r"C:\Settings").join("layers.ini")
                ),
                (
                    PathBuf::from(r"C:\TINA").join(r"VHDL\vhdl_95_global.ini.bak"),
                    PathBuf::from(r"C:\Settings").join(r"VHDL\vhdl_95_global.ini")
                )
            ]
        );
    }

    #[test]
    fn setup_continues_after_product_registry_failure_and_creates_folders() {
        let window = configured_window();
        let mut registry = Registry {
            open_results: VecDeque::from([false, true]),
            ..Registry::default()
        };
        let mut file_system = FileSystem::default();
        file_system
            .files
            .insert(PathBuf::from(r"C:\TINA").join("TINA.INI.bak"));

        assert_eq!(
            window.create_environment(&mut registry, &mut file_system),
            SetupOutcome::Accepted
        );
        assert_eq!(registry.opened.len(), 2);
        assert_eq!(registry.writes.len(), 1);
        assert_eq!(registry.writes[0].1, "TinaDir");
        assert!(
            file_system
                .created
                .contains(&PathBuf::from(r"C:\User\Settings"))
        );
        assert!(
            file_system
                .created
                .contains(&PathBuf::from(r"C:\User\Catalog").join("RecoveredExtra"))
        );
        assert!(
            file_system
                .created
                .contains(&PathBuf::from(r"C:\User\Temp"))
        );
        assert_eq!(file_system.copies.len(), 1);
    }

    #[test]
    fn successful_product_key_writes_all_three_displayed_paths() {
        let window = configured_window();
        let mut registry = Registry {
            open_results: VecDeque::from([true, false]),
            ..Registry::default()
        };
        let mut file_system = FileSystem::default();
        window.create_environment(&mut registry, &mut file_system);

        assert_eq!(
            registry
                .writes
                .iter()
                .map(|(_, name, _)| name.as_str())
                .collect::<Vec<_>>(),
            vec!["SettingsDir", "CatalogDir", "TempDir"]
        );
    }

    #[test]
    fn iced_messages_update_text_and_publish_external_actions() {
        let mut window = Window::default();
        window.update(Message::TextChanged(
            EnvironmentField::Settings,
            "settings".to_owned(),
        ));
        window.update(Message::BrowseRequested(EnvironmentField::Temporary));
        assert_eq!(window.settings_directory, "settings");
        assert_eq!(
            window.take_action(),
            Some(ExternalAction::Browse(EnvironmentField::Temporary))
        );
        window.update(Message::CreateFoldersRequested);
        assert_eq!(window.take_action(), Some(ExternalAction::CreateFolders));
    }
}
