use std::fmt;
use std::path::{Path, PathBuf};
use std::sync::{Arc, Mutex};

use iced::widget::{button, column, row, text, text_input};
use iced::{Element, Task};

pub const IMPORT_DIRECTORY_SETTING: &str = "LT_ImportDir";
pub const IMPORT_FILE_SETTING: &str = "LT_ImportFileName";

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ImportError {
    FileNotFound,
    Settings(String),
    Dialog(String),
    Schematic(String),
}

impl fmt::Display for ImportError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::FileNotFound => formatter.write_str("File not found"),
            Self::Settings(message) | Self::Dialog(message) | Self::Schematic(message) => {
                formatter.write_str(message)
            }
        }
    }
}

impl std::error::Error for ImportError {}

pub trait UserSettings {
    /// Reads one current-user string setting.
    ///
    /// # Errors
    ///
    /// Returns an error when the settings store cannot complete the read.
    fn read_user_setting(&mut self, name: &str) -> Result<Option<String>, ImportError>;

    /// Attempts to write one current-user string setting.
    ///
    /// The recovered settings writer ignores an unavailable registry branch,
    /// so this operation is deliberately best-effort.
    fn write_user_setting_best_effort(&mut self, name: &str, value: &str);
}

pub trait FileChooser {
    /// Opens a file chooser with an optional initial directory.
    ///
    /// `Ok(None)` is the normal Cancel result.
    ///
    /// # Errors
    ///
    /// Returns an error when the chooser cannot open or read its result.
    fn choose_file(
        &mut self,
        initial_directory: Option<&Path>,
    ) -> Result<Option<PathBuf>, ImportError>;
}

#[derive(Debug, Default)]
pub struct RfdFileChooser;

impl FileChooser for RfdFileChooser {
    fn choose_file(
        &mut self,
        initial_directory: Option<&Path>,
    ) -> Result<Option<PathBuf>, ImportError> {
        let mut dialog = rfd::FileDialog::new();
        if let Some(initial_directory) = initial_directory {
            dialog = dialog.set_directory(initial_directory);
        }
        Ok(dialog.pick_file())
    }
}

pub trait LtspiceSchematicPort {
    fn is_accessible_file(&self, path: &Path) -> bool;

    /// Creates a new active schematic.
    ///
    /// # Errors
    ///
    /// Returns an error when the new schematic cannot be created.
    fn create_new_schematic(&mut self) -> Result<(), ImportError>;

    /// Converts the `LTspice` source into the active schematic.
    ///
    /// # Errors
    ///
    /// Returns an error when parsing or model construction fails.
    fn import_ltspice_source(&mut self, source: &Path) -> Result<(), ImportError>;

    /// Updates the current document path and application caption.
    ///
    /// # Errors
    ///
    /// Returns an error when the document identity cannot be updated.
    fn set_current_document_path(&mut self, path: &Path) -> Result<(), ImportError>;

    /// Assigns the path to the new active document model.
    ///
    /// # Errors
    ///
    /// Returns an error when the active document cannot be updated.
    fn assign_active_document_path(&mut self, path: &Path) -> Result<(), ImportError>;

    /// Invalidates the main schematic view.
    ///
    /// # Errors
    ///
    /// Returns an error when the refresh request cannot be sent.
    fn invalidate_schematic_view(&mut self) -> Result<(), ImportError>;
}

pub trait LtspiceImportServices: UserSettings + LtspiceSchematicPort + Send {}

impl<T> LtspiceImportServices for T where T: UserSettings + LtspiceSchematicPort + Send {}

/// Selects an `LTspice` source and updates the edit value only after acceptance.
///
/// This is the original Rust implementation of Ghidra function `0x01B8FE70`,
/// symbol `FUN_01b8fe70` (`TLTSpiceImportDlg.sbFileOpenClick`).
///
/// The maintained `rfd` crate supplies the native dialog in
/// [`RfdFileChooser`]. The settings and chooser ports keep the accepted and
/// cancelled branches testable without a live window.
///
/// # Errors
///
/// Returns an error from the settings reader or file chooser. The current edit
/// value remains unchanged when either operation fails or the user cancels.
pub fn select_ltspice_source(
    settings: &mut impl UserSettings,
    chooser: &mut impl FileChooser,
    current_file_name: &mut String,
) -> Result<bool, ImportError> {
    let initial_directory = settings
        .read_user_setting(IMPORT_DIRECTORY_SETTING)?
        .map(PathBuf::from);
    let Some(selected) = chooser.choose_file(initial_directory.as_deref())? else {
        return Ok(false);
    };

    *current_file_name = selected.to_string_lossy().into_owned();
    Ok(true)
}

/// Validates and imports an `LTspice` schematic into a new TINA schematic.
///
/// This is the original Rust implementation of Ghidra function `0x01B90000`,
/// symbol `FUN_01b90000` (`TLTSpiceImportDlg.bOKClick`).
///
/// # Errors
///
/// Returns [`ImportError::FileNotFound`] before any later effect when the path
/// is not an accessible non-directory file. Later adapter errors propagate.
/// Completed earlier effects are not rolled back.
pub fn import_ltspice_schematic(
    services: &mut impl LtspiceImportServices,
    source: &Path,
) -> Result<PathBuf, ImportError> {
    if !services.is_accessible_file(source) {
        return Err(ImportError::FileNotFound);
    }

    services.write_user_setting_best_effort(
        IMPORT_DIRECTORY_SETTING,
        &source_directory_setting(source),
    );
    services.write_user_setting_best_effort(IMPORT_FILE_SETTING, &source.to_string_lossy());
    services.create_new_schematic()?;
    services.import_ltspice_source(source)?;

    let document_path = source.with_extension("tsc");
    services.set_current_document_path(&document_path)?;
    services.assign_active_document_path(&document_path)?;
    services.invalidate_schematic_view()?;
    Ok(document_path)
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub enum ImportStatus {
    #[default]
    Idle,
    SelectingFile,
    Importing,
    Completed(PathBuf),
    Failed(String),
}

#[derive(Debug, Clone)]
pub enum Message {
    FileNameChanged(String),
    SelectFilePressed,
    FileSelectionFinished(Result<Option<PathBuf>, ImportError>),
    ImportPressed,
    ImportFinished(Result<PathBuf, ImportError>),
    CancelPressed,
}

pub struct Window<S> {
    services: Arc<Mutex<S>>,
    file_name: String,
    status: ImportStatus,
    cancelled: bool,
}

impl<S> Window<S>
where
    S: LtspiceImportServices + 'static,
{
    #[must_use]
    pub fn new(services: S, restored_file_name: impl Into<String>) -> Self {
        Self {
            services: Arc::new(Mutex::new(services)),
            file_name: restored_file_name.into(),
            status: ImportStatus::Idle,
            cancelled: false,
        }
    }

    #[must_use]
    pub fn file_name(&self) -> &str {
        &self.file_name
    }

    #[must_use]
    pub const fn status(&self) -> &ImportStatus {
        &self.status
    }

    #[must_use]
    pub const fn is_cancelled(&self) -> bool {
        self.cancelled
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::FileNameChanged(value) => {
                self.file_name = value;
                Task::none()
            }
            Message::SelectFilePressed => self.select_file(),
            Message::FileSelectionFinished(result) => {
                self.finish_file_selection(result);
                Task::none()
            }
            Message::ImportPressed => self.start_import(),
            Message::ImportFinished(result) => {
                self.status = match result {
                    Ok(path) => ImportStatus::Completed(path),
                    Err(error) => ImportStatus::Failed(error.to_string()),
                };
                Task::none()
            }
            Message::CancelPressed => {
                self.cancelled = true;
                Task::none()
            }
        }
    }

    fn select_file(&mut self) -> Task<Message> {
        if matches!(
            self.status,
            ImportStatus::SelectingFile | ImportStatus::Importing
        ) {
            return Task::none();
        }
        self.status = ImportStatus::SelectingFile;
        let initial_directory = match self.services.lock() {
            Ok(mut services) => services.read_user_setting(IMPORT_DIRECTORY_SETTING),
            Err(error) => Err(ImportError::Settings(error.to_string())),
        };

        Task::perform(
            async move {
                let initial_directory = initial_directory?.map(PathBuf::from);
                let mut dialog = rfd::AsyncFileDialog::new();
                if let Some(initial_directory) = initial_directory {
                    dialog = dialog.set_directory(initial_directory);
                }
                Ok(dialog
                    .pick_file()
                    .await
                    .map(|file| file.path().to_path_buf()))
            },
            Message::FileSelectionFinished,
        )
    }

    fn finish_file_selection(&mut self, result: Result<Option<PathBuf>, ImportError>) {
        match result {
            Ok(Some(path)) => {
                self.file_name = path.to_string_lossy().into_owned();
                self.status = ImportStatus::Idle;
            }
            Ok(None) => self.status = ImportStatus::Idle,
            Err(error) => self.status = ImportStatus::Failed(error.to_string()),
        }
    }

    fn start_import(&mut self) -> Task<Message> {
        if matches!(
            self.status,
            ImportStatus::SelectingFile | ImportStatus::Importing
        ) {
            return Task::none();
        }
        self.status = ImportStatus::Importing;
        let source = PathBuf::from(&self.file_name);
        let services = Arc::clone(&self.services);

        Task::perform(
            async move {
                let mut services = services
                    .lock()
                    .map_err(|error| ImportError::Schematic(error.to_string()))?;
                import_ltspice_schematic(&mut *services, &source)
            },
            Message::ImportFinished,
        )
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let busy = matches!(
            self.status,
            ImportStatus::SelectingFile | ImportStatus::Importing
        );
        let select_button = if busy {
            button("Select file")
        } else {
            button("Select file").on_press(Message::SelectFilePressed)
        };
        let import_button = if busy {
            button("OK")
        } else {
            button("OK").on_press(Message::ImportPressed)
        };
        let status = match &self.status {
            ImportStatus::Idle => String::new(),
            ImportStatus::SelectingFile => "Select an LTspice file".to_owned(),
            ImportStatus::Importing => "Import in progress".to_owned(),
            ImportStatus::Completed(path) => format!("Imported as {}", path.display()),
            ImportStatus::Failed(message) => message.clone(),
        };

        column![
            text("LTspice Import"),
            row![
                text("File name:"),
                text_input("", &self.file_name).on_input(Message::FileNameChanged),
                select_button,
            ]
            .spacing(8),
            text("Messages:"),
            text(status),
            row![
                import_button,
                button("Cancel").on_press(Message::CancelPressed),
            ]
            .spacing(8),
        ]
        .spacing(10)
        .into()
    }
}

fn source_directory_setting(source: &Path) -> String {
    let Some(parent) = source
        .parent()
        .filter(|parent| !parent.as_os_str().is_empty())
    else {
        return String::new();
    };
    let mut directory = parent.to_string_lossy().into_owned();
    if !directory.ends_with(['\\', '/']) {
        directory.push(std::path::MAIN_SEPARATOR);
    }
    directory
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Call {
        ReadSetting(String),
        WriteSetting(String, String),
        CreateNew,
        Import(PathBuf),
        SetCurrentPath(PathBuf),
        AssignActivePath(PathBuf),
        Invalidate,
    }

    #[derive(Debug, Default)]
    struct FakeServices {
        accessible_file: bool,
        saved_directory: Option<String>,
        calls: Vec<Call>,
        fail_import: bool,
    }

    impl UserSettings for FakeServices {
        fn read_user_setting(&mut self, name: &str) -> Result<Option<String>, ImportError> {
            self.calls.push(Call::ReadSetting(name.to_owned()));
            Ok(self.saved_directory.clone())
        }

        fn write_user_setting_best_effort(&mut self, name: &str, value: &str) {
            self.calls
                .push(Call::WriteSetting(name.to_owned(), value.to_owned()));
        }
    }

    impl LtspiceSchematicPort for FakeServices {
        fn is_accessible_file(&self, _path: &Path) -> bool {
            self.accessible_file
        }

        fn create_new_schematic(&mut self) -> Result<(), ImportError> {
            self.calls.push(Call::CreateNew);
            Ok(())
        }

        fn import_ltspice_source(&mut self, source: &Path) -> Result<(), ImportError> {
            self.calls.push(Call::Import(source.to_path_buf()));
            if self.fail_import {
                Err(ImportError::Schematic("import failed".to_owned()))
            } else {
                Ok(())
            }
        }

        fn set_current_document_path(&mut self, path: &Path) -> Result<(), ImportError> {
            self.calls.push(Call::SetCurrentPath(path.to_path_buf()));
            Ok(())
        }

        fn assign_active_document_path(&mut self, path: &Path) -> Result<(), ImportError> {
            self.calls.push(Call::AssignActivePath(path.to_path_buf()));
            Ok(())
        }

        fn invalidate_schematic_view(&mut self) -> Result<(), ImportError> {
            self.calls.push(Call::Invalidate);
            Ok(())
        }
    }

    #[derive(Debug)]
    struct FakeChooser {
        result: Result<Option<PathBuf>, ImportError>,
        initial_directories: Vec<Option<PathBuf>>,
    }

    impl FileChooser for FakeChooser {
        fn choose_file(
            &mut self,
            initial_directory: Option<&Path>,
        ) -> Result<Option<PathBuf>, ImportError> {
            self.initial_directories
                .push(initial_directory.map(Path::to_path_buf));
            self.result.clone()
        }
    }

    #[test]
    fn chooser_restores_saved_directory_and_updates_only_after_acceptance() {
        let mut settings = FakeServices {
            saved_directory: Some("saved/folder".to_owned()),
            ..FakeServices::default()
        };
        let mut chooser = FakeChooser {
            result: Ok(Some(PathBuf::from("selected/circuit.asc"))),
            initial_directories: Vec::new(),
        };
        let mut file_name = "old.asc".to_owned();

        let accepted = select_ltspice_source(&mut settings, &mut chooser, &mut file_name)
            .expect("selection should succeed");

        assert!(accepted);
        assert_eq!(file_name, "selected/circuit.asc");
        assert_eq!(
            chooser.initial_directories,
            [Some(PathBuf::from("saved/folder"))]
        );
        assert_eq!(
            settings.calls,
            [Call::ReadSetting(IMPORT_DIRECTORY_SETTING.to_owned())]
        );
    }

    #[test]
    fn chooser_cancel_preserves_edit_and_writes_no_settings() {
        let mut settings = FakeServices::default();
        let mut chooser = FakeChooser {
            result: Ok(None),
            initial_directories: Vec::new(),
        };
        let mut file_name = "typed.asc".to_owned();

        let accepted = select_ltspice_source(&mut settings, &mut chooser, &mut file_name)
            .expect("cancel should be a normal result");

        assert!(!accepted);
        assert_eq!(file_name, "typed.asc");
        assert_eq!(
            settings.calls,
            [Call::ReadSetting(IMPORT_DIRECTORY_SETTING.to_owned())]
        );
    }

    #[test]
    fn missing_file_stops_before_settings_and_schematic_effects() {
        let mut services = FakeServices::default();

        let result = import_ltspice_schematic(&mut services, Path::new("missing.asc"));

        assert_eq!(result, Err(ImportError::FileNotFound));
        assert!(services.calls.is_empty());
    }

    #[test]
    fn import_preserves_settings_new_conversion_naming_and_refresh_order() {
        let mut services = FakeServices {
            accessible_file: true,
            ..FakeServices::default()
        };
        let source = PathBuf::from("circuits").join("demo.asc");

        let document_path =
            import_ltspice_schematic(&mut services, &source).expect("import should complete");

        assert_eq!(document_path, PathBuf::from("circuits").join("demo.tsc"));
        assert_eq!(
            services.calls,
            [
                Call::WriteSetting(
                    IMPORT_DIRECTORY_SETTING.to_owned(),
                    format!("circuits{}", std::path::MAIN_SEPARATOR),
                ),
                Call::WriteSetting(
                    IMPORT_FILE_SETTING.to_owned(),
                    source.to_string_lossy().into_owned(),
                ),
                Call::CreateNew,
                Call::Import(source),
                Call::SetCurrentPath(PathBuf::from("circuits").join("demo.tsc")),
                Call::AssignActivePath(PathBuf::from("circuits").join("demo.tsc")),
                Call::Invalidate,
            ]
        );
    }

    #[test]
    fn conversion_failure_keeps_prior_effects_and_skips_naming_and_refresh() {
        let mut services = FakeServices {
            accessible_file: true,
            fail_import: true,
            ..FakeServices::default()
        };

        let result = import_ltspice_schematic(&mut services, Path::new("demo.asc"));

        assert_eq!(
            result,
            Err(ImportError::Schematic("import failed".to_owned()))
        );
        assert_eq!(services.calls.len(), 4);
        assert_eq!(services.calls[2], Call::CreateNew);
        assert_eq!(services.calls[3], Call::Import(PathBuf::from("demo.asc")));
    }

    #[test]
    fn iced_update_keeps_file_name_on_cancel_and_reports_import_results() {
        let mut window = Window::new(FakeServices::default(), "typed.asc");

        drop(window.update(Message::FileSelectionFinished(Ok(None))));
        assert_eq!(window.file_name(), "typed.asc");
        assert_eq!(window.status(), &ImportStatus::Idle);

        drop(
            window.update(Message::FileSelectionFinished(Ok(Some(PathBuf::from(
                "chosen.asc",
            ))))),
        );
        assert_eq!(window.file_name(), "chosen.asc");

        drop(window.update(Message::ImportFinished(Err(ImportError::FileNotFound))));
        assert_eq!(
            window.status(),
            &ImportStatus::Failed("File not found".to_owned())
        );
        assert!(!window.is_cancelled());
    }
}
