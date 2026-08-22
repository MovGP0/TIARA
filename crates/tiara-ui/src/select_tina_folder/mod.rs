use std::fmt;
use std::fs;
use std::io;
use std::path::{Path, PathBuf};
use std::process::Command;

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
