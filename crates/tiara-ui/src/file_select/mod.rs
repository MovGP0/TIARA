//! `FileSelect` `PMBus` data-file staging and validation.
//!
//! The Rust standard library is selected for paths, file text, and explicit
//! transaction state. `iced` supplies messages, tasks, and widgets. The
//! maintained `rfd` crate is selected only for the native open/save dialog
//! boundary. A serializer or `PMBus` parser crate was not selected because this
//! module must call the application parser through [`PmBusParser`] and must not
//! replace its device-specific rules.

use std::fs;
use std::path::{Path, PathBuf};

use iced::widget::{button, column, row, scrollable, text, text_input};
use iced::{Element, Length, Task};
use rfd::AsyncFileDialog;

pub const TITLE: &str = "Select File";
pub const FORM_RESOURCE: &str = "FileSelect";
pub const FILE_FILTER: &str =
    "Text File (*.txt)|*.txt|Dat File (*.dat)|*.dat|XSF File (*.xsf)|*.xsf|MIC File (*.mic)|*.mic";
pub const DEFAULT_EXTENSION: &str = "txt";

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum FileSelectError {
    File(String),
    Parser(String),
}

impl std::fmt::Display for FileSelectError {
    fn fmt(&self, formatter: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        formatter.write_str(match self {
            Self::File(message) | Self::Parser(message) => message,
        })
    }
}

impl std::error::Error for FileSelectError {}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct PmBusParseFlags {
    pub first: i32,
    pub second: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DeviceReference {
    pub default_file_prefix: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PmBusDataRecord {
    pub name: String,
    pub selected_path: String,
    pub source_available: bool,
    pub flags: PmBusParseFlags,
    pub payload: Vec<u8>,
}

impl Default for PmBusDataRecord {
    fn default() -> Self {
        Self {
            name: String::from("noname"),
            selected_path: String::new(),
            source_available: false,
            flags: PmBusParseFlags::default(),
            payload: Vec::new(),
        }
    }
}

impl PmBusDataRecord {
    pub fn clear(&mut self) {
        *self = Self::default();
    }
}

pub trait TextFileStore {
    fn is_available(&self, path: &Path) -> bool;

    /// # Errors
    ///
    /// Returns a file error when the complete preview cannot be loaded.
    fn load_text(&mut self, path: &Path) -> Result<String, FileSelectError>;

    /// # Errors
    ///
    /// Returns a file error when the complete preview cannot be saved.
    fn save_text(&mut self, path: &Path, text: &str) -> Result<(), FileSelectError>;
}

#[derive(Debug, Clone, Copy, Default)]
pub struct StandardTextFileStore;

impl TextFileStore for StandardTextFileStore {
    fn is_available(&self, path: &Path) -> bool {
        path.is_file()
    }

    fn load_text(&mut self, path: &Path) -> Result<String, FileSelectError> {
        fs::read_to_string(path).map_err(|error| FileSelectError::File(error.to_string()))
    }

    fn save_text(&mut self, path: &Path, text: &str) -> Result<(), FileSelectError> {
        fs::write(path, text).map_err(|error| FileSelectError::File(error.to_string()))
    }
}

pub trait PmBusParser {
    /// Parses the staged working file and updates both recovered output flags.
    ///
    /// # Errors
    ///
    /// Returns a parser error when the working copy is not valid `PMBus` data.
    fn parse(
        &mut self,
        working_file: &Path,
        flags: &mut PmBusParseFlags,
    ) -> Result<(), FileSelectError>;
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum ModalResult {
    #[default]
    None,
    Ok,
    Cancel,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum PendingAction {
    LoadSelected(PathBuf),
    SavePreview(PathBuf),
    LoadDefault,
    Validate,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum DefaultLoadOutcome {
    Staged(PathBuf),
    RecordCleared(String),
    Unchanged,
}

#[derive(Debug, Clone)]
pub enum Message {
    FileTextChanged(String),
    Open,
    OpenPathSelected(Option<PathBuf>),
    SaveAs,
    SavePathSelected(Option<PathBuf>),
    LoadDefault,
    Accept,
    Cancel,
    ClearStatus,
}

#[derive(Debug)]
pub struct Window {
    current_circuit_file: PathBuf,
    installation_directory: PathBuf,
    close_permitted: bool,
    accepted_output_path: String,
    device_reference: Option<DeviceReference>,
    pmbus_record: Option<PmBusDataRecord>,
    parser_flags: PmBusParseFlags,
    open_filter: String,
    save_filter: String,
    default_extension: String,
    file_text: String,
    memo_text: String,
    modal_result: ModalResult,
    pending_action: Option<PendingAction>,
    status: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(PathBuf::new(), PathBuf::new())
    }
}

impl Window {
    #[must_use]
    pub fn new(current_circuit_file: PathBuf, installation_directory: PathBuf) -> Self {
        let mut window = Self {
            current_circuit_file,
            installation_directory,
            close_permitted: false,
            accepted_output_path: String::new(),
            device_reference: None,
            pmbus_record: None,
            parser_flags: PmBusParseFlags::default(),
            open_filter: String::new(),
            save_filter: String::new(),
            default_extension: String::new(),
            file_text: String::new(),
            memo_text: String::new(),
            modal_result: ModalResult::None,
            pending_action: None,
            status: None,
        };
        window.form_create();
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::FileTextChanged(value) => self.file_text = value,
            Message::Open => return Task::perform(pick_open_file(), Message::OpenPathSelected),
            Message::OpenPathSelected(Some(path)) => {
                self.pending_action = Some(PendingAction::LoadSelected(path));
            }
            Message::SaveAs => return Task::perform(pick_save_file(), Message::SavePathSelected),
            Message::SavePathSelected(Some(path)) => {
                self.pending_action = Some(PendingAction::SavePreview(path));
            }
            Message::OpenPathSelected(None) | Message::SavePathSelected(None) => {}
            Message::LoadDefault => self.pending_action = Some(PendingAction::LoadDefault),
            Message::Accept => {
                self.modal_result = ModalResult::Ok;
                self.pending_action = Some(PendingAction::Validate);
            }
            Message::Cancel => {
                self.modal_result = ModalResult::Cancel;
                self.cancel_click();
            }
            Message::ClearStatus => self.status = None,
        }
        Task::none()
    }

    /// Ports Ghidra function `FUN_0142a140` at `0x0142A140`.
    pub const fn cancel_click(&mut self) {
        self.close_permitted = true;
    }

    /// Ports Ghidra function `FUN_0142a150` at `0x0142A150`.
    #[must_use]
    pub const fn form_close_query(&self) -> bool {
        self.close_permitted
    }

    /// Ports Ghidra function `FUN_0142a160` at `0x0142A160`.
    pub fn form_create(&mut self) {
        self.close_permitted = true;
        self.accepted_output_path.clear();
        self.device_reference = None;
        self.pmbus_record = None;
        self.parser_flags = PmBusParseFlags::default();
        FILE_FILTER.clone_into(&mut self.open_filter);
        FILE_FILTER.clone_into(&mut self.save_filter);
        DEFAULT_EXTENSION.clone_into(&mut self.default_extension);
    }

    /// Loads the current referenced source into the read-only preview.
    ///
    /// Ports Ghidra function `FUN_0142a2f0` at `0x0142A2F0`, recovered as
    /// `TFileSelect.FormShow`. It always clears the memo first. When the host
    /// resolved a source record and its availability flag is set, it copies
    /// source zero into the memo and copies that source's path into the edit.
    /// Missing or unavailable records leave the existing path unchanged.
    ///
    /// # Errors
    ///
    /// Returns a parser error if an adapter supplies payload bytes that are
    /// not valid UTF-8. The preview remains cleared and the path is unchanged.
    pub fn form_show(&mut self) -> Result<bool, FileSelectError> {
        self.memo_text.clear();
        let Some(record) = self
            .pmbus_record
            .as_ref()
            .filter(|record| record.source_available)
        else {
            return Ok(false);
        };
        let preview = String::from_utf8(record.payload.clone()).map_err(|error| {
            FileSelectError::Parser(format!("PMBus preview is not valid UTF-8: {error}"))
        })?;
        self.memo_text = preview;
        record.selected_path.clone_into(&mut self.file_text);
        Ok(true)
    }

    /// Ports Ghidra function `FUN_0142a3e0` at `0x0142A3E0`.
    ///
    /// Empty file text is an accepted no-op. For nonempty text, this saves the
    /// complete memo to a session working file, parses that copy, and publishes
    /// the exact edit text only after parsing returns successfully.
    ///
    /// # Errors
    ///
    /// Returns a file or parser error without publishing a new accepted path.
    pub fn ok_click(
        &mut self,
        session_directory: &Path,
        store: &mut impl TextFileStore,
        parser: &mut impl PmBusParser,
    ) -> Result<bool, FileSelectError> {
        if self.file_text.is_empty() {
            return Ok(false);
        }
        self.close_permitted = true;
        let mut working_file = session_directory.join("pmbus");
        if let Some(extension) = Path::new(&self.file_text).extension() {
            working_file.set_extension(extension);
        }
        store.save_text(&working_file, &self.memo_text)?;
        self.parser_flags.first = 1;
        parser.parse(&working_file, &mut self.parser_flags)?;
        self.file_text.clone_into(&mut self.accepted_output_path);
        Ok(true)
    }

    /// Ports Ghidra function `FUN_0142a620` at `0x0142A620`.
    ///
    /// # Errors
    ///
    /// Returns a file error when an accepted destination cannot be written.
    pub fn save_preview_as(
        &mut self,
        path: Option<&Path>,
        store: &mut impl TextFileStore,
    ) -> Result<bool, FileSelectError> {
        let Some(path) = path else {
            return Ok(false);
        };
        store.save_text(path, &self.memo_text)?;
        Ok(true)
    }

    /// Ports Ghidra function `FUN_0142a6c0` at `0x0142A6C0`.
    ///
    /// # Errors
    ///
    /// Returns a file error after retaining the accepted path in the edit when
    /// the selected file cannot be loaded.
    pub fn select_file(
        &mut self,
        path: Option<&Path>,
        store: &mut impl TextFileStore,
    ) -> Result<bool, FileSelectError> {
        let Some(path) = path else {
            return Ok(false);
        };
        self.file_text = path.to_string_lossy().into_owned();
        self.memo_text = store.load_text(path)?;
        Ok(true)
    }

    /// Ports Ghidra function `FUN_0142a7b0` at `0x0142A7B0`.
    ///
    /// # Errors
    ///
    /// Returns a file error after retaining the chosen candidate path when the
    /// available default file cannot be loaded.
    pub fn load_default(
        &mut self,
        store: &mut impl TextFileStore,
    ) -> Result<DefaultLoadOutcome, FileSelectError> {
        let prefix = self
            .device_reference
            .as_ref()
            .map_or("", |device| device.default_file_prefix.as_str());
        let file_name = format!("{prefix}_default_data_file.txt");
        let circuit_directory = self
            .current_circuit_file
            .parent()
            .unwrap_or_else(|| Path::new(""));
        let candidates = [
            circuit_directory.join(&file_name),
            self.installation_directory
                .join("SpiceLib")
                .join(&file_name),
        ];

        if let Some(path) = candidates.iter().find(|path| store.is_available(path)) {
            self.file_text = path.to_string_lossy().into_owned();
            self.memo_text = store.load_text(path)?;
            return Ok(DefaultLoadOutcome::Staged(path.clone()));
        }

        let Some(record) = self.pmbus_record.as_mut() else {
            return Ok(DefaultLoadOutcome::Unchanged);
        };
        record.clear();
        let warning = format!("PMBus data file cleared because file not found: {file_name}");
        self.status = Some(warning.clone());
        self.close_permitted = true;
        self.memo_text.clear();
        self.file_text.clear();
        Ok(DefaultLoadOutcome::RecordCleared(warning))
    }

    pub fn set_device_reference(&mut self, device: Option<DeviceReference>) {
        self.device_reference = device;
    }

    pub fn set_pmbus_record(&mut self, record: Option<PmBusDataRecord>) {
        self.pmbus_record = record;
    }

    pub fn set_memo_text(&mut self, text: impl Into<String>) {
        self.memo_text = text.into();
    }

    #[must_use]
    pub fn memo_text(&self) -> &str {
        &self.memo_text
    }

    #[must_use]
    pub fn file_text(&self) -> &str {
        &self.file_text
    }

    #[must_use]
    pub fn accepted_output_path(&self) -> &str {
        &self.accepted_output_path
    }

    #[must_use]
    pub const fn parser_flags(&self) -> PmBusParseFlags {
        self.parser_flags
    }

    #[must_use]
    pub const fn pmbus_record(&self) -> Option<&PmBusDataRecord> {
        self.pmbus_record.as_ref()
    }

    #[must_use]
    pub fn dialog_settings(&self) -> (&str, &str, &str) {
        (
            &self.open_filter,
            &self.save_filter,
            &self.default_extension,
        )
    }

    #[must_use]
    pub const fn modal_result(&self) -> ModalResult {
        self.modal_result
    }

    #[must_use]
    pub const fn take_pending_action(&mut self) -> Option<PendingAction> {
        self.pending_action.take()
    }

    #[must_use]
    pub fn status(&self) -> Option<&str> {
        self.status.as_deref()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let status = self.status.as_deref().unwrap_or("Ready");
        column![
            row![
                text("File").width(Length::Fixed(48.0)),
                text_input("PMBus data file", &self.file_text)
                    .on_input(Message::FileTextChanged)
                    .width(Length::Fill),
                button("Open").on_press(Message::Open),
                button("Load Default").on_press(Message::LoadDefault),
            ]
            .spacing(8),
            scrollable(text(&self.memo_text)).height(Length::Fill),
            row![
                button("Save As...").on_press(Message::SaveAs),
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(8),
            text(status),
        ]
        .padding(12)
        .spacing(8)
        .into()
    }
}

async fn pick_open_file() -> Option<PathBuf> {
    supported_dialog()
        .pick_file()
        .await
        .map(|file| file.path().to_path_buf())
}

async fn pick_save_file() -> Option<PathBuf> {
    supported_dialog()
        .save_file()
        .await
        .map(|file| file.path().to_path_buf())
}

fn supported_dialog() -> AsyncFileDialog {
    AsyncFileDialog::new()
        .add_filter("Text File", &["txt"])
        .add_filter("Dat File", &["dat"])
        .add_filter("XSF File", &["xsf"])
        .add_filter("MIC File", &["mic"])
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};
    use std::path::{Path, PathBuf};

    use super::{
        DEFAULT_EXTENSION, DefaultLoadOutcome, DeviceReference, FILE_FILTER, FileSelectError,
        Message, ModalResult, PendingAction, PmBusDataRecord, PmBusParseFlags, PmBusParser,
        TextFileStore, Window,
    };

    #[derive(Debug, Default)]
    struct FileStore {
        files: BTreeMap<PathBuf, String>,
        available: BTreeSet<PathBuf>,
        saves: Vec<(PathBuf, String)>,
    }

    impl TextFileStore for FileStore {
        fn is_available(&self, path: &Path) -> bool {
            self.available.contains(path)
        }

        fn load_text(&mut self, path: &Path) -> Result<String, FileSelectError> {
            self.files
                .get(path)
                .cloned()
                .ok_or_else(|| FileSelectError::File(String::from("load failed")))
        }

        fn save_text(&mut self, path: &Path, text: &str) -> Result<(), FileSelectError> {
            self.saves.push((path.to_path_buf(), text.to_owned()));
            Ok(())
        }
    }

    #[derive(Debug, Default)]
    struct Parser {
        paths: Vec<PathBuf>,
        failure: bool,
    }

    impl PmBusParser for Parser {
        fn parse(
            &mut self,
            working_file: &Path,
            flags: &mut PmBusParseFlags,
        ) -> Result<(), FileSelectError> {
            self.paths.push(working_file.to_path_buf());
            if self.failure {
                return Err(FileSelectError::Parser(String::from("invalid PMBus data")));
            }
            flags.first = 4;
            flags.second = 9;
            Ok(())
        }
    }

    fn window() -> Window {
        Window::new(
            PathBuf::from("C:/circuits/design.tsc"),
            PathBuf::from("C:/TINA"),
        )
    }

    #[test]
    fn create_resets_transaction_fields_and_assigns_both_filters() {
        let mut window = window();
        window.accepted_output_path = String::from("old");
        window.parser_flags = PmBusParseFlags {
            first: 4,
            second: 9,
        };
        window.set_device_reference(Some(DeviceReference {
            default_file_prefix: String::from("IR3806"),
        }));
        window.set_pmbus_record(Some(PmBusDataRecord::default()));

        window.form_create();

        assert!(window.form_close_query());
        assert!(window.accepted_output_path().is_empty());
        assert_eq!(window.parser_flags(), PmBusParseFlags::default());
        assert!(window.device_reference.is_none());
        assert!(window.pmbus_record().is_none());
        assert_eq!(
            window.dialog_settings(),
            (FILE_FILTER, FILE_FILTER, DEFAULT_EXTENSION)
        );
    }

    #[test]
    fn cancel_sets_close_permission_without_rolling_back_staged_state() {
        let mut window = window();
        window.close_permitted = false;
        window.file_text = String::from("staged.dat");
        window.memo_text = String::from("staged preview");

        let _ = window.update(Message::Cancel);

        assert_eq!(window.modal_result(), ModalResult::Cancel);
        assert!(window.form_close_query());
        assert_eq!(window.file_text(), "staged.dat");
        assert_eq!(window.memo_text(), "staged preview");
    }

    #[test]
    fn open_cancel_is_a_noop_and_accepted_open_replaces_preview() {
        let mut window = window();
        window.file_text = String::from("old.dat");
        window.memo_text = String::from("old");
        let mut store = FileStore::default();
        let selected = PathBuf::from("C:/data/new.dat");
        store
            .files
            .insert(selected.clone(), String::from("new preview"));

        assert_eq!(window.select_file(None, &mut store), Ok(false));
        assert!(window.select_file(Some(&selected), &mut store).is_ok());

        assert_eq!(window.file_text(), selected.to_string_lossy());
        assert_eq!(window.memo_text(), "new preview");
        assert!(window.accepted_output_path().is_empty());
    }

    #[test]
    fn save_preview_does_not_change_selection_or_acceptance() {
        let mut window = window();
        window.file_text = String::from("source.dat");
        window.memo_text = String::from("preview");
        let mut store = FileStore::default();
        let destination = PathBuf::from("C:/exports/copy.txt");

        assert_eq!(window.save_preview_as(None, &mut store), Ok(false));
        assert_eq!(
            window.save_preview_as(Some(&destination), &mut store),
            Ok(true)
        );

        assert_eq!(store.saves, [(destination, String::from("preview"))]);
        assert_eq!(window.file_text(), "source.dat");
        assert!(window.accepted_output_path().is_empty());
    }

    #[test]
    fn ok_validates_the_working_copy_before_publishing_exact_edit_text() {
        let mut window = window();
        window.file_text = String::from("relative/device.xsf");
        window.memo_text = String::from("PMBUS CONTENT");
        let mut store = FileStore::default();
        let mut parser = Parser::default();
        let session = PathBuf::from("C:/session");

        assert_eq!(window.ok_click(&session, &mut store, &mut parser), Ok(true));

        let working = PathBuf::from("C:/session/pmbus.xsf");
        assert_eq!(
            store.saves,
            [(working.clone(), String::from("PMBUS CONTENT"))]
        );
        assert_eq!(parser.paths, [working]);
        assert_eq!(
            window.parser_flags(),
            PmBusParseFlags {
                first: 4,
                second: 9
            }
        );
        assert_eq!(window.accepted_output_path(), "relative/device.xsf");
    }

    #[test]
    fn empty_or_invalid_ok_does_not_publish_a_new_path() {
        let mut window = window();
        let mut store = FileStore::default();
        let mut parser = Parser::default();
        assert_eq!(
            window.ok_click(Path::new("C:/session"), &mut store, &mut parser),
            Ok(false)
        );

        window.file_text = String::from("bad.dat");
        window.memo_text = String::from("bad");
        parser.failure = true;
        assert!(
            window
                .ok_click(Path::new("C:/session"), &mut store, &mut parser)
                .is_err()
        );

        assert!(window.accepted_output_path().is_empty());
        assert_eq!(window.parser_flags().first, 1);
    }

    #[test]
    fn default_load_prefers_the_circuit_file_and_remains_staged() {
        let mut window = window();
        window.set_device_reference(Some(DeviceReference {
            default_file_prefix: String::from("IR3806"),
        }));
        let circuit_default = PathBuf::from("C:/circuits").join("IR3806_default_data_file.txt");
        let library_default = PathBuf::from("C:/TINA")
            .join("SpiceLib")
            .join("IR3806_default_data_file.txt");
        let mut store = FileStore::default();
        store
            .available
            .extend([circuit_default.clone(), library_default]);
        store
            .files
            .insert(circuit_default.clone(), String::from("circuit default"));

        let outcome = window.load_default(&mut store);

        assert_eq!(
            outcome,
            Ok(DefaultLoadOutcome::Staged(circuit_default.clone()))
        );
        assert_eq!(window.file_text(), circuit_default.to_string_lossy());
        assert_eq!(window.memo_text(), "circuit default");
        assert!(window.accepted_output_path().is_empty());
    }

    #[test]
    fn missing_default_clears_present_record_and_cancel_does_not_restore_it() {
        let mut window = window();
        window.set_device_reference(Some(DeviceReference {
            default_file_prefix: String::from("TPS546D24"),
        }));
        window.set_pmbus_record(Some(PmBusDataRecord {
            name: String::from("configured"),
            selected_path: String::from("missing.txt"),
            source_available: true,
            flags: PmBusParseFlags {
                first: 3,
                second: 7,
            },
            payload: vec![1, 2, 3],
        }));
        window.file_text = String::from("old.dat");
        window.memo_text = String::from("old preview");
        let mut store = FileStore::default();

        let outcome = window
            .load_default(&mut store)
            .expect("missing path outcome");
        let _ = window.update(Message::Cancel);

        assert!(matches!(outcome, DefaultLoadOutcome::RecordCleared(_)));
        assert_eq!(window.pmbus_record(), Some(&PmBusDataRecord::default()));
        assert!(window.file_text().is_empty());
        assert!(window.memo_text().is_empty());
        assert!(window.status().is_some());
    }

    #[test]
    fn missing_default_without_a_record_preserves_staged_controls() {
        let mut window = window();
        window.file_text = String::from("old.dat");
        window.memo_text = String::from("old preview");
        let mut store = FileStore::default();

        let outcome = window.load_default(&mut store);

        assert_eq!(outcome, Ok(DefaultLoadOutcome::Unchanged));
        assert_eq!(window.file_text(), "old.dat");
        assert_eq!(window.memo_text(), "old preview");
        assert_eq!(window.status(), None);
    }

    #[test]
    fn iced_messages_stage_host_actions_without_a_live_window() {
        let mut window = window();
        let selected = PathBuf::from("C:/data/device.mic");
        let _ = window.update(Message::OpenPathSelected(Some(selected.clone())));
        assert_eq!(
            window.take_pending_action(),
            Some(PendingAction::LoadSelected(selected))
        );

        let _ = window.update(Message::Accept);
        assert_eq!(window.modal_result(), ModalResult::Ok);
        assert_eq!(window.take_pending_action(), Some(PendingAction::Validate));
    }

    #[test]
    fn show_clears_preview_and_leaves_path_when_no_source_is_available() {
        let mut window = window();
        window.file_text = "existing.dat".to_owned();
        window.memo_text = "stale preview".to_owned();
        window.set_pmbus_record(Some(PmBusDataRecord {
            selected_path: "ignored.dat".to_owned(),
            payload: b"ignored".to_vec(),
            ..PmBusDataRecord::default()
        }));

        assert_eq!(window.form_show(), Ok(false));
        assert_eq!(window.file_text(), "existing.dat");
        assert!(window.memo_text().is_empty());
    }

    #[test]
    fn show_loads_source_zero_preview_and_path_when_available() {
        let mut window = window();
        window.set_pmbus_record(Some(PmBusDataRecord {
            selected_path: "device/source.txt".to_owned(),
            source_available: true,
            payload: b"line one\nline two".to_vec(),
            ..PmBusDataRecord::default()
        }));

        assert_eq!(window.form_show(), Ok(true));
        assert_eq!(window.file_text(), "device/source.txt");
        assert_eq!(window.memo_text(), "line one\nline two");
    }
}
