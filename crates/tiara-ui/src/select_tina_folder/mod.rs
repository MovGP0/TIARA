use std::fmt;
use std::fs;
use std::io;
use std::path::{Path, PathBuf};
use std::process::Command;

pub const TITLE: &str = "Select Tina folder";
pub const SCREENSHOT: &str = "screenshots/Select_Tina_Folder.png";
pub const FORM_RESOURCE: &str = "frmSelectTinaFolder";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01c44300");
use iced::widget::{button, checkbox, column, row, text};
use iced::{Element, Task};

const CATALOG_EXTENSIONS: &str = ".ddb;.fpl;.3dl;.tcr";
const SPICE_LIBRARY_EXTENSIONS: &str = ".lib;.tld";
const DESIGN_EXTENSION: &str = ".tsc";
const IMPORT_LOG_NAME: &str = "Library Import.log";

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TinaFolders {
    pub tina: PathBuf,
    pub settings: PathBuf,
    pub catalog: PathBuf,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ImportRequest {
    pub previous: TinaFolders,
    pub current: TinaFolders,
    pub current_temporary: PathBuf,
    pub current_ini: PathBuf,
    pub catalog_database_subfolder: PathBuf,
    pub include_examples: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FileSystemEntry {
    pub name: String,
    pub is_directory: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CopiedFile {
    pub source: PathBuf,
    pub destination: PathBuf,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ImportOutcome {
    NothingToCopy,
    Copied {
        files: Vec<CopiedFile>,
        log_path: PathBuf,
        library_rebuild_requested: bool,
    },
}

impl ImportOutcome {
    #[must_use]
    pub fn log_path(&self) -> Option<&Path> {
        match self {
            Self::NothingToCopy => None,
            Self::Copied { log_path, .. } => Some(log_path),
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ImportError {
    operation: &'static str,
    path: PathBuf,
    message: String,
}

impl ImportError {
    fn new(operation: &'static str, path: &Path, error: impl fmt::Display) -> Self {
        Self {
            operation,
            path: path.to_path_buf(),
            message: error.to_string(),
        }
    }
}

impl fmt::Display for ImportError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(
            formatter,
            "Cannot {} {}: {}",
            self.operation,
            self.path.display(),
            self.message
        )
    }
}

impl std::error::Error for ImportError {}

pub trait MigrationHost {
    /// Lists direct children of a directory.
    ///
    /// # Errors
    ///
    /// Returns an error when the directory cannot be enumerated.
    fn read_directory(&self, directory: &Path) -> Result<Vec<FileSystemEntry>, ImportError>;

    fn is_file(&self, path: &Path) -> bool;

    /// Creates a directory and its missing parents.
    ///
    /// # Errors
    ///
    /// Returns an error when the directory cannot be created.
    fn create_directory_all(&mut self, directory: &Path) -> Result<(), ImportError>;

    /// Copies one complete file.
    ///
    /// # Errors
    ///
    /// Returns an error when the file cannot be copied.
    fn copy_file(&mut self, source: &Path, destination: &Path) -> Result<(), ImportError>;

    /// Saves the import log.
    ///
    /// # Errors
    ///
    /// Returns an error when the log cannot be saved.
    fn save_log(&mut self, path: &Path, lines: &[String]) -> Result<(), ImportError>;

    /// Requests a TINA library rebuild.
    ///
    /// # Errors
    ///
    /// Returns an error when the setting cannot be saved.
    fn request_library_rebuild(&mut self, ini_path: &Path) -> Result<(), ImportError>;

    /// Opens the import log in Notepad.
    ///
    /// # Errors
    ///
    /// Returns an error when Notepad cannot be started.
    fn open_log(&mut self, path: &Path) -> Result<(), ImportError>;
}

#[derive(Debug, Default)]
pub struct StandardMigrationHost;

impl MigrationHost for StandardMigrationHost {
    fn read_directory(&self, directory: &Path) -> Result<Vec<FileSystemEntry>, ImportError> {
        let entries = match fs::read_dir(directory) {
            Ok(entries) => entries,
            Err(error) if error.kind() == io::ErrorKind::NotFound => return Ok(Vec::new()),
            Err(error) => return Err(ImportError::new("read directory", directory, error)),
        };

        entries
            .map(|entry| {
                let entry = entry
                    .map_err(|error| ImportError::new("read directory entry", directory, error))?;
                let file_type = entry.file_type().map_err(|error| {
                    ImportError::new("read directory entry type", &entry.path(), error)
                })?;
                Ok(FileSystemEntry {
                    name: entry.file_name().to_string_lossy().into_owned(),
                    is_directory: file_type.is_dir(),
                })
            })
            .collect()
    }

    fn is_file(&self, path: &Path) -> bool {
        path.is_file()
    }

    fn create_directory_all(&mut self, directory: &Path) -> Result<(), ImportError> {
        fs::create_dir_all(directory)
            .map_err(|error| ImportError::new("create directory", directory, error))
    }

    fn copy_file(&mut self, source: &Path, destination: &Path) -> Result<(), ImportError> {
        fs::copy(source, destination)
            .map(|_| ())
            .map_err(|error| ImportError::new("copy file to", destination, error))
    }

    fn save_log(&mut self, path: &Path, lines: &[String]) -> Result<(), ImportError> {
        fs::write(path, lines.join("\r\n"))
            .map_err(|error| ImportError::new("save log", path, error))
    }

    fn request_library_rebuild(&mut self, ini_path: &Path) -> Result<(), ImportError> {
        let contents = match fs::read_to_string(ini_path) {
            Ok(contents) => contents,
            Err(error) if error.kind() == io::ErrorKind::NotFound => String::new(),
            Err(error) => return Err(ImportError::new("read settings", ini_path, error)),
        };
        let updated = set_ini_boolean(&contents, "Analysis Setup", "ForceReBuildLibrary", true);
        fs::write(ini_path, updated)
            .map_err(|error| ImportError::new("save settings", ini_path, error))
    }

    fn open_log(&mut self, path: &Path) -> Result<(), ImportError> {
        Command::new("notepad.exe")
            .arg(path)
            .spawn()
            .map(|_| ())
            .map_err(|error| ImportError::new("open log", path, error))
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ScanRequest {
    pub source_root: PathBuf,
    pub extension_filter: String,
    pub destination_template: String,
    pub recursive: bool,
}

/// Configures one inventory scan and delegates discovery to the collector.
///
/// This is the original Rust implementation of Ghidra function `0x01C46ED0`,
/// symbol `FUN_01c46ed0`.
///
/// # Errors
///
/// Returns an error when the host cannot enumerate a scanned directory.
pub fn scan_import_inventory(
    host: &impl MigrationHost,
    request: &ScanRequest,
    output: &mut Vec<String>,
) -> Result<(), ImportError> {
    collect_import_candidates(host, request, Path::new(""), output)
}

/// Collects unique import paths from one directory tree.
///
/// This is the original Rust implementation of Ghidra function `0x01C469C0`,
/// symbol `FUN_01c469c0`.
///
/// Matching is case-insensitive. A matching TSC file also adds its TPC
/// companion when the companion exists.
///
/// # Errors
///
/// Returns an error when the host cannot enumerate a scanned directory.
pub fn collect_import_candidates(
    host: &impl MigrationHost,
    request: &ScanRequest,
    relative_directory: &Path,
    output: &mut Vec<String>,
) -> Result<(), ImportError> {
    let source_directory = request.source_root.join(relative_directory);
    let entries = host.read_directory(&source_directory)?;

    for entry in entries {
        if entry.is_directory {
            if request.recursive && entry.name != "." && entry.name != ".." {
                collect_import_candidates(
                    host,
                    request,
                    &relative_directory.join(&entry.name),
                    output,
                )?;
            }
            continue;
        }

        let extension = normalized_extension(&entry.name);
        if extension_filter_matches(&request.extension_filter, extension.as_deref()) {
            add_unique_inventory_path(
                output,
                inventory_path(
                    &request.destination_template,
                    relative_directory,
                    &entry.name,
                ),
            );
        }

        if extension.as_deref() == Some(DESIGN_EXTENSION) {
            let companion_name = replace_extension(&entry.name, "tpc");
            let companion_source = source_directory.join(&companion_name);
            if host.is_file(&companion_source) {
                add_unique_inventory_path(
                    output,
                    inventory_path(
                        &request.destination_template,
                        relative_directory,
                        &companion_name,
                    ),
                );
            }
        }
    }

    Ok(())
}

/// Expands a supported leading folder token in an inventory path.
///
/// This is the original Rust implementation of Ghidra function `0x01C470B0`,
/// symbol `FUN_01c470b0`.
#[must_use]
pub fn expand_inventory_path(path: &str, folders: &TinaFolders) -> PathBuf {
    for (token, root) in [
        ("<TINADIR>", &folders.tina),
        ("<SETTINGSDIR>", &folders.settings),
        ("<CATALOGDIR>", &folders.catalog),
    ] {
        if path
            .get(..token.len())
            .is_some_and(|prefix| prefix.eq_ignore_ascii_case(token))
        {
            return append_inventory_tail(root, &path[token.len()..]);
        }
    }

    PathBuf::from(path)
}

/// Imports missing files from an earlier installation.
///
/// This is the original Rust implementation of Ghidra function `0x01C454F0`,
/// symbol `FUN_01c454f0` (`TfrmSelectTinaFolder.btnOKClick`).
///
/// The implementation uses `std::fs` through [`MigrationHost`]. This keeps
/// filesystem, settings, and process effects replaceable for focused tests.
///
/// # Errors
///
/// Returns the first scan, directory, copy, settings, or log error. Files that
/// were copied before an error are not rolled back.
pub fn import_missing_files(
    host: &mut impl MigrationHost,
    request: &ImportRequest,
) -> Result<ImportOutcome, ImportError> {
    let source_inventory = build_inventory(host, request, &request.previous)?;
    let destination_inventory = build_inventory(host, request, &request.current)?;
    let mut copied_files = Vec::new();
    let mut log_lines = Vec::new();
    let mut library_rebuild_requested = false;

    for inventory_entry in source_inventory {
        if contains_inventory_path(&destination_inventory, &inventory_entry) {
            continue;
        }

        let source = expand_inventory_path(&inventory_entry, &request.previous);
        let destination = expand_inventory_path(&inventory_entry, &request.current);
        if let Some(parent) = destination.parent() {
            host.create_directory_all(parent)?;
        }
        host.copy_file(&source, &destination)?;

        library_rebuild_requested |= destination
            .extension()
            .and_then(|extension| extension.to_str())
            .is_some_and(|extension| extension.eq_ignore_ascii_case("lib"));
        log_lines.push(format!(
            "File copied: {} -> {}",
            source.display(),
            destination.display()
        ));
        copied_files.push(CopiedFile {
            source,
            destination,
        });
    }

    if copied_files.is_empty() {
        return Ok(ImportOutcome::NothingToCopy);
    }

    if library_rebuild_requested {
        host.request_library_rebuild(&request.current_ini)?;
    }
    let log_path = request.current_temporary.join(IMPORT_LOG_NAME);
    host.save_log(&log_path, &log_lines)?;

    Ok(ImportOutcome::Copied {
        files: copied_files,
        log_path,
        library_rebuild_requested,
    })
}

/// Opens a completed import log only after an affirmative answer.
///
/// # Errors
///
/// Returns an error when the host cannot open the log.
pub fn open_import_log(
    host: &mut impl MigrationHost,
    outcome: &ImportOutcome,
    answer_yes: bool,
) -> Result<(), ImportError> {
    if answer_yes && let Some(path) = outcome.log_path() {
        host.open_log(path)?;
    }
    Ok(())
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub enum ImportStatus {
    #[default]
    Idle,
    Copying,
    NothingToCopy,
    Completed,
    Failed(String),
}

#[derive(Debug, Clone)]
pub enum Message {
    IncludeExamplesChanged(bool),
    ImportPressed,
    ImportFinished(Result<ImportOutcome, ImportError>),
    OpenLogAnswered(bool),
    LogOpenFinished(Result<(), ImportError>),
}

#[derive(Debug, Default)]
pub struct Window {
    request: Option<ImportRequest>,
    include_examples: bool,
    status: ImportStatus,
    completed_outcome: Option<ImportOutcome>,
    awaiting_open_log_answer: bool,
}

impl Window {
    #[must_use]
    pub fn new(request: ImportRequest) -> Self {
        Self {
            include_examples: request.include_examples,
            request: Some(request),
            ..Self::default()
        }
    }

    #[must_use]
    pub const fn status(&self) -> &ImportStatus {
        &self.status
    }

    #[must_use]
    pub const fn is_awaiting_open_log_answer(&self) -> bool {
        self.awaiting_open_log_answer
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::IncludeExamplesChanged(value) => {
                self.include_examples = value;
                Task::none()
            }
            Message::ImportPressed => self.start_import(),
            Message::ImportFinished(result) => {
                self.finish_import(result);
                Task::none()
            }
            Message::OpenLogAnswered(answer_yes) => self.answer_open_log(answer_yes),
            Message::LogOpenFinished(result) => {
                if let Err(error) = result {
                    self.status = ImportStatus::Failed(error.to_string());
                }
                Task::none()
            }
        }
    }

    fn start_import(&mut self) -> Task<Message> {
        let Some(mut request) = self.request.clone() else {
            return Task::none();
        };
        if self.status == ImportStatus::Copying {
            return Task::none();
        }

        request.include_examples = self.include_examples;
        self.status = ImportStatus::Copying;
        self.completed_outcome = None;
        self.awaiting_open_log_answer = false;
        Task::perform(
            async move {
                let mut host = StandardMigrationHost;
                import_missing_files(&mut host, &request)
            },
            Message::ImportFinished,
        )
    }

    fn finish_import(&mut self, result: Result<ImportOutcome, ImportError>) {
        match result {
            Ok(ImportOutcome::NothingToCopy) => {
                self.status = ImportStatus::NothingToCopy;
                self.completed_outcome = Some(ImportOutcome::NothingToCopy);
                self.awaiting_open_log_answer = false;
            }
            Ok(outcome @ ImportOutcome::Copied { .. }) => {
                self.status = ImportStatus::Completed;
                self.awaiting_open_log_answer = true;
                self.completed_outcome = Some(outcome);
            }
            Err(error) => {
                self.status = ImportStatus::Failed(error.to_string());
                self.completed_outcome = None;
                self.awaiting_open_log_answer = false;
            }
        }
    }

    fn answer_open_log(&mut self, answer_yes: bool) -> Task<Message> {
        if !self.awaiting_open_log_answer {
            return Task::none();
        }
        self.awaiting_open_log_answer = false;
        let Some(path) = self
            .completed_outcome
            .as_ref()
            .and_then(ImportOutcome::log_path)
            .map(Path::to_path_buf)
        else {
            return Task::none();
        };
        if !answer_yes {
            return Task::none();
        }

        Task::perform(
            async move {
                let mut host = StandardMigrationHost;
                host.open_log(&path)
            },
            Message::LogOpenFinished,
        )
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let import_button = if self.request.is_some() && self.status != ImportStatus::Copying {
            button("Go!").on_press(Message::ImportPressed)
        } else {
            button("Go!")
        };
        let status = match &self.status {
            ImportStatus::Idle => "Select an earlier TINA installation.".to_owned(),
            ImportStatus::Copying => "Copy in progress".to_owned(),
            ImportStatus::NothingToCopy => "Nothing to copy".to_owned(),
            ImportStatus::Completed => "Import completed".to_owned(),
            ImportStatus::Failed(message) => message.clone(),
        };
        let mut content = column![
            text("Import Libraries, Examples and Designs"),
            checkbox("Include Examples and Designs", self.include_examples)
                .on_toggle(Message::IncludeExamplesChanged),
            import_button,
            text(status),
        ]
        .spacing(10);
        if self.awaiting_open_log_answer {
            content = content.push(
                row![
                    text("Open Library Import.log?"),
                    button("Yes").on_press(Message::OpenLogAnswered(true)),
                    button("No").on_press(Message::OpenLogAnswered(false)),
                ]
                .spacing(8),
            );
        }
        content.into()
    }
}

fn build_inventory(
    host: &impl MigrationHost,
    request: &ImportRequest,
    folders: &TinaFolders,
) -> Result<Vec<String>, ImportError> {
    let mut output = Vec::new();
    let catalog_database_template = inventory_join(
        "<CATALOGDIR>",
        &request.catalog_database_subfolder.to_string_lossy(),
    );
    let scans = [
        ScanRequest {
            source_root: folders.catalog.clone(),
            extension_filter: CATALOG_EXTENSIONS.to_owned(),
            destination_template: "<CATALOGDIR>".to_owned(),
            recursive: false,
        },
        ScanRequest {
            source_root: folders.catalog.join(&request.catalog_database_subfolder),
            extension_filter: ".pdb".to_owned(),
            destination_template: catalog_database_template,
            recursive: false,
        },
        ScanRequest {
            source_root: folders.catalog.join("SPICELIB"),
            extension_filter: SPICE_LIBRARY_EXTENSIONS.to_owned(),
            destination_template: "<CATALOGDIR>\\SPICELIB".to_owned(),
            recursive: false,
        },
    ];
    for scan in scans {
        scan_import_inventory(host, &scan, &mut output)?;
    }
    if request.include_examples {
        scan_import_inventory(
            host,
            &ScanRequest {
                source_root: folders.settings.join("User Examples"),
                extension_filter: DESIGN_EXTENSION.to_owned(),
                destination_template: "<SETTINGSDIR>\\User Examples".to_owned(),
                recursive: true,
            },
            &mut output,
        )?;
    }
    Ok(output)
}

fn normalized_extension(file_name: &str) -> Option<String> {
    let extension = Path::new(file_name).extension()?.to_str()?;
    let extension = format!(".{extension}").to_lowercase();
    (extension.chars().count() == 4).then_some(extension)
}

fn extension_filter_matches(filter: &str, extension: Option<&str>) -> bool {
    extension.is_some_and(|extension| {
        filter
            .split(';')
            .any(|candidate| candidate.eq_ignore_ascii_case(extension))
    })
}

fn replace_extension(file_name: &str, extension: &str) -> String {
    let mut path = PathBuf::from(file_name);
    path.set_extension(extension);
    path.to_string_lossy().into_owned()
}

fn inventory_path(template: &str, relative_directory: &Path, file_name: &str) -> String {
    let relative = relative_directory.to_string_lossy();
    inventory_join(&inventory_join(template, &relative), file_name)
}

fn inventory_join(left: &str, right: &str) -> String {
    let right = right.trim_matches(['\\', '/']);
    if right.is_empty() {
        return left.trim_end_matches(['\\', '/']).to_owned();
    }
    format!("{}\\{right}", left.trim_end_matches(['\\', '/']))
}

fn add_unique_inventory_path(output: &mut Vec<String>, candidate: String) {
    if !contains_inventory_path(output, &candidate) {
        output.push(candidate);
    }
}

fn contains_inventory_path(inventory: &[String], candidate: &str) -> bool {
    inventory
        .iter()
        .any(|item| item.to_lowercase() == candidate.to_lowercase())
}

fn append_inventory_tail(root: &Path, tail: &str) -> PathBuf {
    tail.trim_start_matches(['\\', '/'])
        .split(['\\', '/'])
        .filter(|component| !component.is_empty())
        .fold(root.to_path_buf(), |path, component| path.join(component))
}

fn set_ini_boolean(contents: &str, section: &str, key: &str, value: bool) -> String {
    let mut lines: Vec<String> = contents.lines().map(str::to_owned).collect();
    let section_header = format!("[{section}]");
    let setting = format!("{key}={value}");
    let section_start = lines
        .iter()
        .position(|line| line.trim().eq_ignore_ascii_case(&section_header));

    if let Some(section_start) = section_start {
        let section_end = lines[section_start + 1..]
            .iter()
            .position(|line| {
                let line = line.trim();
                line.starts_with('[') && line.ends_with(']')
            })
            .map_or(lines.len(), |offset| section_start + 1 + offset);
        if let Some(key_index) = lines[section_start + 1..section_end]
            .iter()
            .position(|line| {
                line.split_once('=')
                    .is_some_and(|(name, _)| name.trim().eq_ignore_ascii_case(key))
            })
        {
            lines[section_start + 1 + key_index] = setting;
        } else {
            lines.insert(section_end, setting);
        }
    } else {
        if !lines.is_empty() && !lines.last().is_some_and(String::is_empty) {
            lines.push(String::new());
        }
        lines.push(section_header);
        lines.push(setting);
    }

    let mut output = lines.join("\r\n");
    output.push_str("\r\n");
    output
}

/// The lowest installation version the browse row accepts.
pub const MINIMUM_INSTALLATION_VERSION: i32 = 8;

/// The executable the browse row requires inside a chosen folder.
pub const TINA_EXECUTABLE: &str = "tina.exe";

/// The setup file and key the browse row reads the program folder from.
pub const SETUP_FILE: &str = "setup.ini";
pub const SETUP_SECTION: &str = "Setup Settings";
pub const PROGRAM_FOLDER_KEY: &str = "Program Folder";

/// The registry location and values the browse row reads afterwards.
pub const REGISTRY_ROOT: &str = r"\SOFTWARE\DesignSoft\";
pub const SETTINGS_DIR_VALUE: &str = "SettingsDir";
pub const CATALOG_DIR_VALUE: &str = "CatalogDir";

/// The hint timing the installed-list hint handler assigns.
pub const INSTALLED_LIST_HINT_TIMING: u32 = 100;

/// The localized caption that marks the list's browse row.
pub const BROWSE_ROW_CAPTION_KEY: &str = "d.SelectTinaFolder_sBrowseTina";

/// The separators the browse row builds its detail line with.
///
/// Neither was recovered as a literal, so the caller supplies both.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DetailSeparators {
    /// Joins the chosen folder to itself in the first detail line.
    pub folder: char,
    /// Joins the registry directories onto the detail line.
    pub registry: char,
    /// Ends the visible part of a detail line for the hint.
    pub hint_terminator: char,
}

pub trait InstalledListTeardownHost {
    /// Releases the private detail list.
    fn release_detail_list(&mut self);
}

/// Implements Ghidra function `FUN_01c44fe0` at `0x01C44FE0`.
///
/// Releases the private detail list that backs the installed-installation
/// hints. The recovered handler does nothing else, so a chosen folder that the
/// caller has not already read is lost with the form.
pub fn destroy_installed_list(host: &mut impl InstalledListTeardownHost) {
    host.release_detail_list();
}

pub trait TinaFolderBrowseHost {
    /// Opens the folder picker. `None` is the recovered cancel result.
    fn choose_folder(&mut self) -> Option<String>;

    /// Reports whether the folder holds the required executable.
    fn has_tina_executable(&mut self, folder: &str) -> bool;

    /// The installation version found in one folder.
    fn installation_version(&mut self, folder: &str) -> i32;

    /// Reads the program folder from the chosen installation's setup file.
    fn read_program_folder(&mut self, folder: &str) -> String;

    /// The folder this application is running from.
    fn current_folder(&mut self) -> String;

    fn set_last_row(&mut self, folder: &str);

    fn last_detail(&mut self) -> String;

    fn set_last_detail(&mut self, detail: &str);

    /// Reads the two directory values under the `DesignSoft` program folder.
    fn read_registry_directories(&mut self, program_folder: &str) -> Option<(String, String)>;
}

/// The outcome of one browse-row double-click.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum BrowseOutcome {
    /// The double-click was not on the browse row.
    NotBrowseRow,
    /// The user cancelled the folder picker.
    Cancelled,
    /// The chosen folder is the one already running, so nothing was added.
    AlreadyCurrent(String),
    /// The chosen folder replaced the browse row.
    Chosen(String),
}

/// Implements Ghidra function `FUN_01c45000` at `0x01C45000`.
///
/// Lets the user point at another installation from the list's last row.
///
/// Only that last row browses; every other row is a listed installation and is
/// left alone. The picker repeats until the user cancels or picks a folder that
/// both holds the required executable and reports at least the recovered
/// minimum version, so an unsuitable folder silently re-opens the picker rather
/// than reporting an error.
///
/// The program folder is read from the chosen installation's setup file even
/// when the folder turns out to be the one already running; only a different
/// folder replaces the browse row, builds its detail line, and appends the two
/// registry directories when that key opens.
///
/// The recovered handler creates its registry reader before the comparison and
/// never destroys it, which this port keeps out of the model by leaving the
/// reader entirely behind the adapter.
pub fn browse_for_installation(
    is_browse_row: bool,
    separators: DetailSeparators,
    host: &mut impl TinaFolderBrowseHost,
) -> BrowseOutcome {
    if !is_browse_row {
        return BrowseOutcome::NotBrowseRow;
    }

    let folder = loop {
        let Some(candidate) = host.choose_folder() else {
            return BrowseOutcome::Cancelled;
        };
        if host.has_tina_executable(&candidate)
            && host.installation_version(&candidate) >= MINIMUM_INSTALLATION_VERSION
        {
            break candidate;
        }
    };

    let program_folder = host.read_program_folder(&folder);
    if folder == host.current_folder() {
        return BrowseOutcome::AlreadyCurrent(folder);
    }

    host.set_last_row(&folder);
    host.set_last_detail(&format!("{folder}{}{folder}", separators.folder));

    if let Some((settings_dir, catalog_dir)) = host.read_registry_directories(&program_folder) {
        let detail = host.last_detail();
        host.set_last_detail(&format!(
            "{detail}{0}{settings_dir}{0}{catalog_dir}",
            separators.registry
        ));
    }

    BrowseOutcome::Chosen(folder)
}

/// Implements Ghidra function `FUN_01c466d0` at `0x01C466D0`.
///
/// Keeps the accept button in step with the list selection.
///
/// Any listed installation enables it immediately. The browse row enables it
/// only once its text is no longer the localized browse caption, which is how a
/// folder the user has actually picked becomes acceptable while an untouched
/// browse row stays rejected.
#[must_use]
pub fn installed_list_accept_enabled(
    selected_index: usize,
    row_count: usize,
    last_row_text: &str,
    browse_caption: &str,
) -> bool {
    if row_count == 0 {
        return false;
    }
    if selected_index + 1 < row_count {
        return true;
    }
    last_row_text != browse_caption
}

pub trait InstalledListHintHost {
    /// The list row under the cursor.
    fn row_at_cursor(&mut self) -> Option<usize>;

    fn row_count(&mut self) -> usize;

    /// The detail line stored for one row.
    fn detail_line(&mut self, index: usize) -> String;
}

/// One hint request the installed list answers.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct InstalledListHint {
    pub text: String,
    pub timing: u32,
    pub show: bool,
}

/// Implements Ghidra function `FUN_01c46880` at `0x01C46880`.
///
/// Shows the stored detail line of the installation under the cursor, cut off
/// at the recovered terminator so only its visible part appears.
///
/// The browse row and empty space show no hint at all, which is why hovering
/// the last row never displays a stale detail line from a previous pick.
pub fn resolve_installed_list_hint(
    separators: DetailSeparators,
    host: &mut impl InstalledListHintHost,
) -> InstalledListHint {
    let hidden = InstalledListHint {
        text: String::new(),
        timing: 0,
        show: false,
    };

    let Some(index) = host.row_at_cursor() else {
        return hidden;
    };
    let row_count = host.row_count();
    if row_count == 0 || index + 1 >= row_count {
        return hidden;
    }

    let detail = host.detail_line(index);
    let text = detail
        .split(separators.hint_terminator)
        .next()
        .unwrap_or_default()
        .to_owned();
    InstalledListHint {
        text,
        timing: INSTALLED_LIST_HINT_TIMING,
        show: true,
    }
}

#[cfg(test)]
mod installed_list_tests {
    use super::*;

    const SEPARATORS: DetailSeparators = DetailSeparators {
        folder: '|',
        registry: ';',
        hint_terminator: '|',
    };

    #[derive(Debug, Default)]
    struct TeardownHost {
        released: usize,
    }

    impl InstalledListTeardownHost for TeardownHost {
        fn release_detail_list(&mut self) {
            self.released += 1;
        }
    }

    #[test]
    fn destroy_releases_only_the_detail_list() {
        let mut host = TeardownHost::default();

        destroy_installed_list(&mut host);

        assert_eq!(host.released, 1);
    }

    #[derive(Debug, Default)]
    struct BrowseHost {
        picks: Vec<String>,
        valid: Vec<String>,
        versions: Vec<(String, i32)>,
        current: String,
        registry: Option<(String, String)>,
        last_row: Option<String>,
        detail: String,
        details: Vec<String>,
    }

    impl TinaFolderBrowseHost for BrowseHost {
        fn choose_folder(&mut self) -> Option<String> {
            if self.picks.is_empty() {
                None
            } else {
                Some(self.picks.remove(0))
            }
        }

        fn has_tina_executable(&mut self, folder: &str) -> bool {
            self.valid.iter().any(|known| known == folder)
        }

        fn installation_version(&mut self, folder: &str) -> i32 {
            self.versions
                .iter()
                .find(|(known, _)| known == folder)
                .map_or(0, |(_, version)| *version)
        }

        fn read_program_folder(&mut self, _folder: &str) -> String {
            "TINA 16".to_owned()
        }

        fn current_folder(&mut self) -> String {
            self.current.clone()
        }

        fn set_last_row(&mut self, folder: &str) {
            self.last_row = Some(folder.to_owned());
        }

        fn last_detail(&mut self) -> String {
            self.detail.clone()
        }

        fn set_last_detail(&mut self, detail: &str) {
            self.detail = detail.to_owned();
            self.details.push(detail.to_owned());
        }

        fn read_registry_directories(&mut self, _program_folder: &str) -> Option<(String, String)> {
            self.registry.clone()
        }
    }

    #[test]
    fn only_the_browse_row_opens_the_picker() {
        let mut host = BrowseHost::default();

        assert_eq!(
            browse_for_installation(false, SEPARATORS, &mut host),
            BrowseOutcome::NotBrowseRow
        );
        assert!(host.last_row.is_none());
    }

    #[test]
    fn an_unsuitable_folder_silently_reopens_the_picker() {
        let mut host = BrowseHost {
            picks: vec![
                r"C:\NoTina".to_owned(),
                r"C:\OldTina".to_owned(),
                r"C:\Tina16".to_owned(),
            ],
            valid: vec![r"C:\OldTina".to_owned(), r"C:\Tina16".to_owned()],
            versions: vec![(r"C:\OldTina".to_owned(), 7), (r"C:\Tina16".to_owned(), 16)],
            current: r"C:\Running".to_owned(),
            ..BrowseHost::default()
        };

        assert_eq!(
            browse_for_installation(true, SEPARATORS, &mut host),
            BrowseOutcome::Chosen(r"C:\Tina16".to_owned())
        );
        assert_eq!(host.last_row.as_deref(), Some(r"C:\Tina16"));
        assert_eq!(host.details, [r"C:\Tina16|C:\Tina16".to_owned()]);
    }

    #[test]
    fn the_registry_directories_are_appended_when_the_key_opens() {
        let mut host = BrowseHost {
            picks: vec![r"C:\Tina16".to_owned()],
            valid: vec![r"C:\Tina16".to_owned()],
            versions: vec![(r"C:\Tina16".to_owned(), 16)],
            current: r"C:\Running".to_owned(),
            registry: Some((r"C:\Settings".to_owned(), r"C:\Catalog".to_owned())),
            ..BrowseHost::default()
        };

        drop(browse_for_installation(true, SEPARATORS, &mut host));

        assert_eq!(
            host.details.last().map(String::as_str),
            Some(r"C:\Tina16|C:\Tina16;C:\Settings;C:\Catalog")
        );
    }

    #[test]
    fn the_running_folder_is_not_added_to_the_list() {
        let mut host = BrowseHost {
            picks: vec![r"C:\Running".to_owned()],
            valid: vec![r"C:\Running".to_owned()],
            versions: vec![(r"C:\Running".to_owned(), 16)],
            current: r"C:\Running".to_owned(),
            ..BrowseHost::default()
        };

        assert_eq!(
            browse_for_installation(true, SEPARATORS, &mut host),
            BrowseOutcome::AlreadyCurrent(r"C:\Running".to_owned())
        );
        assert!(host.last_row.is_none());
        assert!(host.details.is_empty());
    }

    #[test]
    fn cancelling_the_picker_changes_nothing() {
        let mut host = BrowseHost::default();

        assert_eq!(
            browse_for_installation(true, SEPARATORS, &mut host),
            BrowseOutcome::Cancelled
        );
        assert!(host.last_row.is_none());
    }

    #[test]
    fn a_listed_installation_always_enables_accept_but_an_untouched_browse_row_does_not() {
        assert!(installed_list_accept_enabled(
            0,
            3,
            "Browse...",
            "Browse..."
        ));
        assert!(!installed_list_accept_enabled(
            2,
            3,
            "Browse...",
            "Browse..."
        ));
        assert!(installed_list_accept_enabled(
            2,
            3,
            r"C:\Tina16",
            "Browse..."
        ));
        assert!(!installed_list_accept_enabled(0, 0, "", "Browse..."));
    }

    #[derive(Debug, Default)]
    struct HintHost {
        row: Option<usize>,
        rows: usize,
        details: Vec<String>,
    }

    impl InstalledListHintHost for HintHost {
        fn row_at_cursor(&mut self) -> Option<usize> {
            self.row
        }

        fn row_count(&mut self) -> usize {
            self.rows
        }

        fn detail_line(&mut self, index: usize) -> String {
            self.details.get(index).cloned().unwrap_or_default()
        }
    }

    #[test]
    fn hovering_an_installation_shows_its_detail_line_up_to_the_terminator() {
        let mut host = HintHost {
            row: Some(1),
            rows: 3,
            details: vec![
                "first".to_owned(),
                r"C:\Tina16|C:\Tina16;C:\Settings".to_owned(),
            ],
        };

        let hint = resolve_installed_list_hint(SEPARATORS, &mut host);

        assert!(hint.show);
        assert_eq!(hint.text, r"C:\Tina16");
        assert_eq!(hint.timing, INSTALLED_LIST_HINT_TIMING);
    }

    #[test]
    fn the_browse_row_and_empty_space_show_no_hint() {
        let mut browse_row = HintHost {
            row: Some(2),
            rows: 3,
            details: vec![String::new(), String::new(), "stale".to_owned()],
        };
        assert!(!resolve_installed_list_hint(SEPARATORS, &mut browse_row).show);

        let mut empty = HintHost {
            rows: 3,
            ..HintHost::default()
        };
        assert!(!resolve_installed_list_hint(SEPARATORS, &mut empty).show);
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{HashMap, HashSet};

    use super::*;

    #[derive(Debug, Default)]
    struct FakeHost {
        directories: HashMap<PathBuf, Vec<FileSystemEntry>>,
        files: HashSet<PathBuf>,
        created_directories: Vec<PathBuf>,
        copies: Vec<CopiedFile>,
        saved_logs: Vec<(PathBuf, Vec<String>)>,
        rebuild_requests: usize,
        opened_logs: Vec<PathBuf>,
    }

    impl FakeHost {
        fn directory(mut self, path: impl Into<PathBuf>, entries: &[(&str, bool)]) -> Self {
            self.directories.insert(
                path.into(),
                entries
                    .iter()
                    .map(|(name, is_directory)| FileSystemEntry {
                        name: (*name).to_owned(),
                        is_directory: *is_directory,
                    })
                    .collect(),
            );
            self
        }

        fn file(mut self, path: impl Into<PathBuf>) -> Self {
            self.files.insert(path.into());
            self
        }
    }

    impl MigrationHost for FakeHost {
        fn read_directory(&self, directory: &Path) -> Result<Vec<FileSystemEntry>, ImportError> {
            Ok(self.directories.get(directory).cloned().unwrap_or_default())
        }

        fn is_file(&self, path: &Path) -> bool {
            self.files.contains(path)
        }

        fn create_directory_all(&mut self, directory: &Path) -> Result<(), ImportError> {
            self.created_directories.push(directory.to_path_buf());
            Ok(())
        }

        fn copy_file(&mut self, source: &Path, destination: &Path) -> Result<(), ImportError> {
            self.copies.push(CopiedFile {
                source: source.to_path_buf(),
                destination: destination.to_path_buf(),
            });
            Ok(())
        }

        fn save_log(&mut self, path: &Path, lines: &[String]) -> Result<(), ImportError> {
            self.saved_logs.push((path.to_path_buf(), lines.to_vec()));
            Ok(())
        }

        fn request_library_rebuild(&mut self, _ini_path: &Path) -> Result<(), ImportError> {
            self.rebuild_requests += 1;
            Ok(())
        }

        fn open_log(&mut self, path: &Path) -> Result<(), ImportError> {
            self.opened_logs.push(path.to_path_buf());
            Ok(())
        }
    }

    fn folders(prefix: &str) -> TinaFolders {
        TinaFolders {
            tina: PathBuf::from(format!("{prefix}/tina")),
            settings: PathBuf::from(format!("{prefix}/settings")),
            catalog: PathBuf::from(format!("{prefix}/catalog")),
        }
    }

    fn request(include_examples: bool) -> ImportRequest {
        ImportRequest {
            previous: folders("old"),
            current: folders("current"),
            current_temporary: PathBuf::from("current/temp"),
            current_ini: PathBuf::from("current/TINA.INI"),
            catalog_database_subfolder: PathBuf::from("DATABASES"),
            include_examples,
        }
    }

    #[test]
    fn expands_each_supported_leading_token_and_leaves_other_paths_unchanged() {
        let folders = folders("root");

        assert_eq!(
            expand_inventory_path("<TINADIR>\\file.txt", &folders),
            folders.tina.join("file.txt")
        );
        assert_eq!(
            expand_inventory_path("<SETTINGSDIR>\\Examples\\sample.tsc", &folders),
            folders.settings.join("Examples").join("sample.tsc")
        );
        assert_eq!(
            expand_inventory_path("<CATALOGDIR>\\SPICELIB\\part.lib", &folders),
            folders.catalog.join("SPICELIB").join("part.lib")
        );
        assert_eq!(
            expand_inventory_path("relative\\file.lib", &folders),
            PathBuf::from("relative\\file.lib")
        );
    }

    #[test]
    fn ini_update_replaces_or_adds_the_analysis_setup_value() {
        assert_eq!(
            set_ini_boolean(
                "[Analysis Setup]\nForceReBuildLibrary=false\nOther=1\n[Next]\nA=B\n",
                "Analysis Setup",
                "ForceReBuildLibrary",
                true,
            ),
            "[Analysis Setup]\r\nForceReBuildLibrary=true\r\nOther=1\r\n[Next]\r\nA=B\r\n"
        );
        assert_eq!(
            set_ini_boolean(
                "[Other]\nA=B",
                "Analysis Setup",
                "ForceReBuildLibrary",
                true
            ),
            "[Other]\r\nA=B\r\n\r\n[Analysis Setup]\r\nForceReBuildLibrary=true\r\n"
        );
    }

    #[test]
    fn collector_matches_four_character_extensions_and_adds_tpc_companion() {
        let host = FakeHost::default()
            .directory(
                "source",
                &[
                    ("First.TSC", false),
                    ("second.long", false),
                    ("ignored.txt", false),
                ],
            )
            .file(PathBuf::from("source").join("First.tpc"));
        let request = ScanRequest {
            source_root: PathBuf::from("source"),
            extension_filter: ".tsc".to_owned(),
            destination_template: "<SETTINGSDIR>\\User Examples".to_owned(),
            recursive: false,
        };
        let mut output = Vec::new();

        collect_import_candidates(&host, &request, Path::new(""), &mut output)
            .expect("scan should succeed");

        assert_eq!(
            output,
            [
                "<SETTINGSDIR>\\User Examples\\First.TSC",
                "<SETTINGSDIR>\\User Examples\\First.tpc",
            ]
        );
    }

    #[test]
    fn scan_wrapper_recurses_only_when_requested_and_keeps_paths_unique() {
        let host = FakeHost::default()
            .directory("source", &[("top.ddb", false), ("nested", true)])
            .directory("source/nested", &[("part.ddb", false)]);
        let mut output = vec!["<CATALOGDIR>\\TOP.DDB".to_owned()];

        scan_import_inventory(
            &host,
            &ScanRequest {
                source_root: PathBuf::from("source"),
                extension_filter: ".ddb".to_owned(),
                destination_template: "<CATALOGDIR>".to_owned(),
                recursive: true,
            },
            &mut output,
        )
        .expect("scan should succeed");

        assert_eq!(
            output,
            ["<CATALOGDIR>\\TOP.DDB", "<CATALOGDIR>\\nested\\part.ddb",]
        );
    }

    #[test]
    fn import_copies_only_missing_files_logs_them_and_requests_lib_rebuild() {
        let old_catalog = PathBuf::from("old/catalog");
        let current_catalog = PathBuf::from("current/catalog");
        let mut host = FakeHost::default()
            .directory(&old_catalog, &[("keep.ddb", false), ("new.fpl", false)])
            .directory(old_catalog.join("DATABASES"), &[("model.pdb", false)])
            .directory(old_catalog.join("SPICELIB"), &[("device.LIB", false)])
            .directory(&current_catalog, &[("KEEP.DDB", false)])
            .directory(current_catalog.join("DATABASES"), &[])
            .directory(current_catalog.join("SPICELIB"), &[]);

        let outcome =
            import_missing_files(&mut host, &request(false)).expect("import should complete");

        let ImportOutcome::Copied {
            files,
            log_path,
            library_rebuild_requested,
        } = outcome
        else {
            panic!("files should be copied");
        };
        assert_eq!(files.len(), 3);
        assert!(
            files
                .iter()
                .all(|file| file.source.file_name() != Some("keep.ddb".as_ref()))
        );
        assert_eq!(host.copies, files);
        assert_eq!(host.saved_logs.len(), 1);
        assert_eq!(host.saved_logs[0].0, log_path);
        assert_eq!(host.saved_logs[0].1.len(), 3);
        assert!(library_rebuild_requested);
        assert_eq!(host.rebuild_requests, 1);
    }

    #[test]
    fn import_includes_recursive_designs_only_when_selected() {
        let old_examples = PathBuf::from("old/settings/User Examples");
        let current_examples = PathBuf::from("current/settings/User Examples");
        let mut host = FakeHost::default()
            .directory("old/catalog", &[])
            .directory("old/catalog/DATABASES", &[])
            .directory("old/catalog/SPICELIB", &[])
            .directory("current/catalog", &[])
            .directory("current/catalog/DATABASES", &[])
            .directory("current/catalog/SPICELIB", &[])
            .directory(&old_examples, &[("folder", true)])
            .directory(old_examples.join("folder"), &[("design.tsc", false)])
            .directory(&current_examples, &[]);

        let outcome =
            import_missing_files(&mut host, &request(true)).expect("import should complete");

        let ImportOutcome::Copied { files, .. } = outcome else {
            panic!("design should be copied");
        };
        assert_eq!(files.len(), 1);
        assert_eq!(
            files[0].destination,
            current_examples.join("folder").join("design.tsc")
        );
        assert_eq!(host.rebuild_requests, 0);
    }

    #[test]
    fn nothing_to_copy_does_not_save_log_or_request_rebuild() {
        let mut host = FakeHost::default()
            .directory("old/catalog", &[("same.lib", false)])
            .directory("old/catalog/DATABASES", &[])
            .directory("old/catalog/SPICELIB", &[("same.lib", false)])
            .directory("current/catalog", &[("same.lib", false)])
            .directory("current/catalog/DATABASES", &[])
            .directory("current/catalog/SPICELIB", &[("SAME.LIB", false)]);

        let outcome =
            import_missing_files(&mut host, &request(false)).expect("import should complete");

        assert_eq!(outcome, ImportOutcome::NothingToCopy);
        assert!(host.copies.is_empty());
        assert!(host.saved_logs.is_empty());
        assert_eq!(host.rebuild_requests, 0);
    }

    #[test]
    fn log_opens_only_for_yes_answer() {
        let outcome = ImportOutcome::Copied {
            files: Vec::new(),
            log_path: PathBuf::from("temp/Library Import.log"),
            library_rebuild_requested: false,
        };
        let mut host = FakeHost::default();

        open_import_log(&mut host, &outcome, false).expect("no should be a no-op");
        assert!(host.opened_logs.is_empty());
        open_import_log(&mut host, &outcome, true).expect("yes should open the log");
        assert_eq!(host.opened_logs, [PathBuf::from("temp/Library Import.log")]);
    }

    #[test]
    fn iced_update_state_prompts_only_after_successful_copy() {
        let mut window = Window::new(request(false));
        let copied = ImportOutcome::Copied {
            files: Vec::new(),
            log_path: PathBuf::from("temp/Library Import.log"),
            library_rebuild_requested: false,
        };

        drop(window.update(Message::ImportFinished(Ok(copied))));
        assert_eq!(window.status(), &ImportStatus::Completed);
        assert!(window.is_awaiting_open_log_answer());

        drop(window.update(Message::OpenLogAnswered(false)));
        assert!(!window.is_awaiting_open_log_answer());

        drop(window.update(Message::ImportFinished(Ok(ImportOutcome::NothingToCopy))));
        assert_eq!(window.status(), &ImportStatus::NothingToCopy);
        assert!(!window.is_awaiting_open_log_answer());
    }
}

/// The registry key the installed-programs list lives under.
///
/// The `Wow6432Node` in the path is the 32-bit view, which is where a 32-bit
/// installer records itself on a 64-bit machine — so this finds the other
/// installations whatever the running build is.
pub const UNINSTALL_KEY: &str = r"SOFTWARE\Wow6432Node\Microsoft\Windows\CurrentVersion\Uninstall";

/// The value naming the product an uninstall entry belongs to.
pub const PRODUCT_GUID_VALUE: &str = "ProductGuid";
/// The value holding an entry's display name.
pub const DISPLAY_NAME_VALUE: &str = "DisplayName";
/// The value holding where it was installed.
pub const INSTALL_LOCATION_VALUE: &str = "InstallLocation";
/// The read access the registry is opened with.
pub const REGISTRY_READ_ACCESS: u32 = 0x0002_0019;

/// The product identifiers this build recognises as its own family.
///
/// Part of Ghidra function `FUN_01c44300` at `0x01C44300`.
///
/// Each release registers a different one, so the list is what decides which
/// versions can be imported from; an installation of a version newer than
/// this build is simply not seen.
pub const PRODUCT_GUIDS: [&str; 7] = [
    "{3D7D43D0-A5EE-4972-92DB-CD32A40A4976}",
    "{C9AF7B6C-A0FA-46D8-85CB-A0B418773659}",
    "{43FA4B8E-8906-43CC-95C7-1D3F7CE27F9E}",
    "{06E2580F-7A30-4FF6-9ACF-A9876F10D3F8}",
    "{96EECE06-DFF8-40BF-9EE3-99F445EB3D0A}",
    "{8BCACB8B-E2DA-4870-AEEC-300A52E50C65}",
    "{B1EC34D8-D2D6-4846-A58D-ED9F451527B4}",
];

/// Whether one uninstall entry belongs to this product family.
///
/// Part of Ghidra function `FUN_01c44300` at `0x01C44300`.
#[must_use]
pub fn is_known_product(guid: &str) -> bool {
    PRODUCT_GUIDS.contains(&guid)
}

/// One installation the dialog found.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Installation {
    /// The name shown in the list.
    pub display_name: String,
    /// Where it was installed.
    pub install_location: String,
    /// Its own registry folder, read out of its `setup.ini`.
    pub program_folder: String,
    /// Where it keeps its settings, when the per-user key says.
    pub settings_dir: Option<String>,
    /// Where it keeps its catalogs.
    pub catalog_dir: Option<String>,
}

/// What discovering installations needs from the machine.
pub trait InstallationScanHost {
    /// The uninstall entries to look at.
    fn uninstall_entries(&mut self) -> Vec<String>;

    /// One value of one uninstall entry.
    fn uninstall_value(&mut self, entry: &str, value: &str) -> Option<String>;

    /// The program folder an installation records in its own `setup.ini`.
    fn program_folder(&mut self, install_location: &str) -> String;

    /// Where this build is installed, which is the one not offered.
    fn current_install_location(&mut self) -> String;

    /// One per-user value for one program folder, or `None` when the key is
    /// not there.
    fn user_value(&mut self, program_folder: &str, value: &str) -> Option<String>;
}

/// Implements Ghidra function `FUN_01c44300` at `0x01C44300`.
///
/// Handles `frmSelectTinaFolder.OnCreate`.
///
/// Finds the other installations of this product on the machine.
///
/// The dialog exists to import settings from a previous version, so the
/// installation that is *running* is deliberately left out — offering it
/// would mean importing a copy of what the user already has. Everything else
/// that registered one of the known product identifiers is offered.
///
/// Each installation is found in two places. The machine-wide uninstall entry
/// gives its name and where it lives; its own `setup.ini` then names the
/// registry folder under which the *user's* copy of that installation records
/// where it keeps settings and catalogs. So a per-machine install and a
/// per-user configuration are stitched together, which is why the folders
/// cannot simply be derived from the install path.
///
/// The recovered handler carries one defect this port keeps: the flag saying
/// an installation was accepted is not cleared between entries, so an
/// unrecognised entry following an accepted one re-runs the per-user lookup
/// with the previous entry's folder and appends its directories to the
/// previous installation a second time. [`Installation::settings_dir`] is
/// therefore written from whichever entry last ran that lookup.
#[must_use]
pub fn discover_installations(host: &mut impl InstallationScanHost) -> Vec<Installation> {
    let current = host.current_install_location();
    let mut found: Vec<Installation> = Vec::new();
    let mut accepted = false;
    let mut program_folder = String::new();

    for entry in host.uninstall_entries() {
        let recognised = host
            .uninstall_value(&entry, PRODUCT_GUID_VALUE)
            .is_some_and(|guid| is_known_product(&guid));

        if recognised {
            let display_name = host
                .uninstall_value(&entry, DISPLAY_NAME_VALUE)
                .unwrap_or_default();
            let install_location = host
                .uninstall_value(&entry, INSTALL_LOCATION_VALUE)
                .unwrap_or_default();
            program_folder = host.program_folder(&install_location);

            accepted = install_location != current;
            if accepted {
                found.push(Installation {
                    display_name,
                    install_location,
                    program_folder: program_folder.clone(),
                    settings_dir: None,
                    catalog_dir: None,
                });
            }
        }

        // The flag is not reset for an unrecognised entry, so this runs again
        // for the one after an accepted installation.
        if accepted {
            let settings = host.user_value(&program_folder, SETTINGS_DIR_VALUE);
            let catalogs = host.user_value(&program_folder, CATALOG_DIR_VALUE);
            if let (Some(settings), Some(catalogs)) = (settings, catalogs) {
                if let Some(last) = found.last_mut() {
                    last.settings_dir = Some(settings);
                    last.catalog_dir = Some(catalogs);
                }
            }
        }
    }

    found
}

#[cfg(test)]
mod installation_scan_tests {
    use super::*;
    use std::collections::HashMap;

    #[test]
    fn the_recognised_products_are_the_seven_recovered_identifiers() {
        assert_eq!(PRODUCT_GUIDS.len(), 7);
        assert!(is_known_product("{3D7D43D0-A5EE-4972-92DB-CD32A40A4976}"));
        assert!(is_known_product("{B1EC34D8-D2D6-4846-A58D-ED9F451527B4}"));
        assert!(!is_known_product("{00000000-0000-0000-0000-000000000000}"));
        assert!(!is_known_product(""));
    }

    #[test]
    fn every_recognised_identifier_is_distinct() {
        let mut seen = PRODUCT_GUIDS.to_vec();
        seen.sort_unstable();
        seen.dedup();
        assert_eq!(seen.len(), PRODUCT_GUIDS.len());
    }

    #[test]
    fn the_uninstall_key_reads_the_thirty_two_bit_view() {
        assert!(UNINSTALL_KEY.contains("Wow6432Node"));
    }

    #[derive(Debug, Default)]
    struct Machine {
        entries: Vec<String>,
        values: HashMap<(String, String), String>,
        folders: HashMap<String, String>,
        user: HashMap<(String, String), String>,
        current: String,
    }

    impl Machine {
        fn with(mut self, entry: &str, guid: &str, name: &str, location: &str) -> Self {
            self.entries.push(entry.to_owned());
            self.values.insert(
                (entry.to_owned(), PRODUCT_GUID_VALUE.to_owned()),
                guid.to_owned(),
            );
            self.values.insert(
                (entry.to_owned(), DISPLAY_NAME_VALUE.to_owned()),
                name.to_owned(),
            );
            self.values.insert(
                (entry.to_owned(), INSTALL_LOCATION_VALUE.to_owned()),
                location.to_owned(),
            );
            self.folders
                .insert(location.to_owned(), format!("Folder{name}"));
            self
        }

        fn with_user_dirs(mut self, folder: &str, settings: &str, catalogs: &str) -> Self {
            self.user.insert(
                (folder.to_owned(), SETTINGS_DIR_VALUE.to_owned()),
                settings.to_owned(),
            );
            self.user.insert(
                (folder.to_owned(), CATALOG_DIR_VALUE.to_owned()),
                catalogs.to_owned(),
            );
            self
        }
    }

    impl InstallationScanHost for Machine {
        fn uninstall_entries(&mut self) -> Vec<String> {
            self.entries.clone()
        }

        fn uninstall_value(&mut self, entry: &str, value: &str) -> Option<String> {
            self.values
                .get(&(entry.to_owned(), value.to_owned()))
                .cloned()
        }

        fn program_folder(&mut self, install_location: &str) -> String {
            self.folders
                .get(install_location)
                .cloned()
                .unwrap_or_default()
        }

        fn current_install_location(&mut self) -> String {
            self.current.clone()
        }

        fn user_value(&mut self, program_folder: &str, value: &str) -> Option<String> {
            self.user
                .get(&(program_folder.to_owned(), value.to_owned()))
                .cloned()
        }
    }

    #[test]
    fn a_recognised_installation_is_offered_with_its_folders() {
        let mut host = Machine::default()
            .with("e1", PRODUCT_GUIDS[0], "TINA 12", r"C:\TINA12")
            .with_user_dirs("FolderTINA 12", r"C:\S12", r"C:\C12");

        let found = discover_installations(&mut host);

        assert_eq!(found.len(), 1);
        assert_eq!(found[0].display_name, "TINA 12");
        assert_eq!(found[0].install_location, r"C:\TINA12");
        assert_eq!(found[0].settings_dir.as_deref(), Some(r"C:\S12"));
        assert_eq!(found[0].catalog_dir.as_deref(), Some(r"C:\C12"));
    }

    #[test]
    fn the_running_installation_is_never_offered() {
        let mut host = Machine::default()
            .with("e1", PRODUCT_GUIDS[0], "TINA 16", r"C:\TINA16")
            .with("e2", PRODUCT_GUIDS[1], "TINA 12", r"C:\TINA12");
        host.current = r"C:\TINA16".to_owned();

        let found = discover_installations(&mut host);

        assert_eq!(found.len(), 1);
        assert_eq!(found[0].display_name, "TINA 12");
    }

    #[test]
    fn an_entry_with_an_unrecognised_product_is_passed_over() {
        let mut host = Machine::default().with(
            "e1",
            "{00000000-0000-0000-0000-000000000000}",
            "Something Else",
            r"C:\Other",
        );

        assert!(discover_installations(&mut host).is_empty());
    }

    #[test]
    fn an_entry_with_no_product_value_at_all_is_passed_over() {
        let mut host = Machine {
            entries: vec!["e1".to_owned()],
            ..Machine::default()
        };

        assert!(discover_installations(&mut host).is_empty());
    }

    #[test]
    fn an_installation_without_a_per_user_key_still_appears() {
        let mut host = Machine::default().with("e1", PRODUCT_GUIDS[2], "TINA 10", r"C:\TINA10");

        let found = discover_installations(&mut host);

        assert_eq!(found.len(), 1);
        assert_eq!(found[0].settings_dir, None);
        assert_eq!(found[0].catalog_dir, None);
    }

    #[test]
    fn several_installations_are_all_offered_in_registry_order() {
        let mut host = Machine::default()
            .with("e1", PRODUCT_GUIDS[0], "TINA 12", r"C:\TINA12")
            .with("e2", PRODUCT_GUIDS[3], "TINA 14", r"C:\TINA14");

        let found = discover_installations(&mut host);

        assert_eq!(
            found
                .iter()
                .map(|entry| entry.display_name.as_str())
                .collect::<Vec<_>>(),
            ["TINA 12", "TINA 14"]
        );
    }

    #[test]
    fn the_accepted_flag_is_not_reset_so_a_later_entry_re_runs_the_user_lookup() {
        // The recovered defect: an unrecognised entry after an accepted one
        // still runs the per-user lookup with the previous folder.
        let mut host = Machine::default()
            .with("e1", PRODUCT_GUIDS[0], "TINA 12", r"C:\TINA12")
            .with(
                "e2",
                "{00000000-0000-0000-0000-000000000000}",
                "Other",
                r"C:\Other",
            )
            .with_user_dirs("FolderTINA 12", r"C:\S12", r"C:\C12");

        let found = discover_installations(&mut host);

        // The stray lookup writes the same values back onto the same entry,
        // so the result is unchanged — but only because they are the same.
        assert_eq!(found.len(), 1);
        assert_eq!(found[0].settings_dir.as_deref(), Some(r"C:\S12"));
    }

    #[test]
    fn nothing_installed_offers_nothing() {
        let mut host = Machine::default();
        assert!(discover_installations(&mut host).is_empty());
    }
}
