use std::fmt::Write as _;
use std::fs;
use std::io;
use std::path::{Path, PathBuf};

use iced::Task;
use tiara_core::hexadecimal_text_file::{HexadecimalTextFileError, load_hexadecimal_u16_file};

pub const TEXT_FILE_FILTER: &str = "Text file (*.txt)|*.txt";
pub const TEXT_FILE_DEFAULT_EXTENSION: &str = "txt";

pub trait MemoryEditorHost {
    /// Returns the running application's executable path.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot resolve the executable path.
    fn executable_path(&self) -> io::Result<PathBuf>;
}

#[derive(Debug, Default)]
pub struct StandardMemoryEditorHost;

impl MemoryEditorHost for StandardMemoryEditorHost {
    fn executable_path(&self) -> io::Result<PathBuf> {
        std::env::current_exe()
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct GridCell {
    pub column: usize,
    pub row: usize,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
struct FileControlsState {
    enabled: bool,
    visible: bool,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
enum LifecyclePhase {
    #[default]
    New,
    Created,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum NumericMode {
    Binary,
    Hexadecimal,
    Decimal,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    GridValueChanged { index: usize, value: String },
    NumericModeChanged(NumericMode),
    AlternateGridModeChanged(bool),
    AlternateGridStatusChanged(u8),
    OkPressed,
    LoadPressed,
    LoadDialogClosed(Option<PathBuf>),
    SavePressed,
    SaveDialogClosed(Option<PathBuf>),
    Shown,
    CloseRequested,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct GridValueError {
    pub index: usize,
    pub value: String,
    pub mode: NumericMode,
}

impl std::fmt::Display for GridValueError {
    fn fmt(&self, formatter: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(
            formatter,
            "memory value {} is not valid {:?} text: {}",
            self.index, self.mode, self.value
        )
    }
}

impl std::error::Error for GridValueError {}

#[derive(Debug, Clone)]
pub struct MemoryEditor {
    working_words: Vec<u16>,
    backing_words: Vec<u16>,
    grid_values: Vec<String>,
    numeric_mode: NumericMode,
    remembered_directory: Option<PathBuf>,
    alternate_grid_mode: bool,
    alternate_grid_status: u8,
    alternate_change_marked: bool,
    close_error_pending: bool,
    last_close_allowed: Option<bool>,
    last_error: Option<String>,
    file_controls: FileControlsState,
    file_dialog_filter: String,
    file_dialog_default_extension: String,
    active_cell: Option<GridCell>,
    help_context: u32,
    lifecycle_phase: LifecyclePhase,
}

impl MemoryEditor {
    #[must_use]
    pub fn new(backing_words: Vec<u16>, numeric_mode: NumericMode) -> Self {
        let grid_values = format_words(&backing_words, numeric_mode);
        Self {
            working_words: backing_words.clone(),
            backing_words,
            grid_values,
            numeric_mode,
            remembered_directory: None,
            alternate_grid_mode: false,
            alternate_grid_status: 0,
            alternate_change_marked: false,
            close_error_pending: false,
            last_close_allowed: None,
            last_error: None,
            file_controls: FileControlsState::default(),
            file_dialog_filter: String::new(),
            file_dialog_default_extension: String::new(),
            active_cell: None,
            help_context: 0,
            lifecycle_phase: LifecyclePhase::New,
        }
    }

    #[must_use]
    pub fn working_words(&self) -> &[u16] {
        &self.working_words
    }

    #[must_use]
    pub fn backing_words(&self) -> &[u16] {
        &self.backing_words
    }

    #[must_use]
    pub fn grid_values(&self) -> &[String] {
        &self.grid_values
    }

    #[must_use]
    pub const fn numeric_mode(&self) -> NumericMode {
        self.numeric_mode
    }

    #[must_use]
    pub fn remembered_directory(&self) -> Option<&Path> {
        self.remembered_directory.as_deref()
    }

    #[must_use]
    pub const fn alternate_change_marked(&self) -> bool {
        self.alternate_change_marked
    }

    #[must_use]
    pub const fn close_error_pending(&self) -> bool {
        self.close_error_pending
    }

    #[must_use]
    pub const fn last_close_allowed(&self) -> Option<bool> {
        self.last_close_allowed
    }

    #[must_use]
    pub fn last_error(&self) -> Option<&str> {
        self.last_error.as_deref()
    }

    #[must_use]
    pub const fn file_controls_enabled(&self) -> bool {
        self.file_controls.enabled
    }

    #[must_use]
    pub const fn file_controls_visible(&self) -> bool {
        self.file_controls.visible
    }

    #[must_use]
    pub fn file_dialog_filter(&self) -> &str {
        &self.file_dialog_filter
    }

    #[must_use]
    pub fn file_dialog_default_extension(&self) -> &str {
        &self.file_dialog_default_extension
    }

    #[must_use]
    pub const fn active_cell(&self) -> Option<GridCell> {
        self.active_cell
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    #[must_use]
    pub const fn is_created(&self) -> bool {
        matches!(self.lifecycle_phase, LifecyclePhase::Created)
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::GridValueChanged { index, value } => {
                if let Some(grid_value) = self.grid_values.get_mut(index) {
                    *grid_value = value;
                }
            }
            Message::NumericModeChanged(mode) => {
                self.numeric_mode = mode;
                self.grid_values = format_words(&self.working_words, mode);
            }
            Message::AlternateGridModeChanged(enabled) => {
                self.alternate_grid_mode = enabled;
            }
            Message::AlternateGridStatusChanged(status) => {
                self.alternate_grid_status = status;
            }
            Message::OkPressed => self.on_ok_pressed(),
            Message::LoadPressed => return open_dialog(self.remembered_directory.clone()),
            Message::LoadDialogClosed(path) => {
                if let Some(path) = path {
                    match self.load_selected_file(&path) {
                        Ok(()) => self.last_error = None,
                        Err(error) => self.last_error = Some(error.to_string()),
                    }
                }
            }
            Message::SavePressed => {
                self.commit_before_save();
                return save_dialog(self.remembered_directory.clone());
            }
            Message::SaveDialogClosed(path) => {
                if let Some(path) = path
                    && let Err(error) = self.save_selected_file(&path)
                {
                    self.last_error = Some(error.to_string());
                }
            }
            Message::Shown => self.on_show(),
            Message::CloseRequested => {
                self.last_close_allowed = Some(self.query_close());
            }
        }

        Task::none()
    }

    /// Initializes the memory editor and its owned working snapshot.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01409A10`, symbol `FUN_01409a10` (`TMemoryEditor.FormCreate`). Rust
    /// `Vec<u16>` replaces the recovered raw allocation and complete buffer
    /// copy. The host boundary supplies only the executable path used as the
    /// initial Load and Save directory.
    ///
    /// # Errors
    ///
    /// Returns an error when the host cannot resolve the executable path.
    pub fn on_create(&mut self, host: &impl MemoryEditorHost) -> io::Result<()> {
        self.remembered_directory = executable_directory(&host.executable_path()?);
        self.file_controls = FileControlsState {
            enabled: true,
            visible: true,
        };
        TEXT_FILE_FILTER.clone_into(&mut self.file_dialog_filter);
        TEXT_FILE_DEFAULT_EXTENSION.clone_into(&mut self.file_dialog_default_extension);
        self.working_words.clone_from(&self.backing_words);
        self.grid_values = format_words(&self.working_words, self.numeric_mode);
        self.active_cell = None;
        self.help_context = 0x4a6;
        self.lifecycle_phase = LifecyclePhase::Created;
        Ok(())
    }

    /// Selects the first memory-value cell when the form becomes visible.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x0140A140`, symbol `FUN_0140a140` (`TMemoryEditor.FormShow`).
    pub const fn on_show(&mut self) {
        self.active_cell = Some(GridCell { column: 1, row: 1 });
    }

    /// Implements Ghidra function `FUN_0140a000` at `0x0140A000`.
    ///
    /// Normal mode parses the complete fixed-width grid and copies it to the
    /// working and backing arrays only when every value is valid. Alternate
    /// mode does not copy these arrays and marks status value one.
    pub fn on_ok_pressed(&mut self) {
        if self.alternate_grid_mode {
            if self.alternate_grid_status == 1 {
                self.alternate_change_marked = true;
            }
            return;
        }

        self.commit_grid_to_memory();
    }

    /// Implements the accepted-file branch of Ghidra function
    /// `FUN_0140a3f0` at `0x0140A3F0`.
    ///
    /// The shared core loader mutates only the fixed-capacity working array.
    /// On success, this method rebuilds the grid and remembers the directory.
    /// A parse error can leave an earlier part of the working array changed,
    /// while the grid and directory stay unchanged.
    ///
    /// # Errors
    ///
    /// Returns the shared hexadecimal loader error.
    pub fn load_selected_file(&mut self, path: &Path) -> Result<(), HexadecimalTextFileError> {
        load_hexadecimal_u16_file(path, &mut self.working_words)?;
        self.grid_values = format_words(&self.working_words, self.numeric_mode);
        self.remembered_directory = parent_directory(path);
        Ok(())
    }

    /// Implements the accepted-file branch of Ghidra function
    /// `FUN_0140a230` at `0x0140A230`.
    ///
    /// The pre-dialog commit is performed by [`Self::commit_before_save`].
    /// This method writes the current working array, removes trailing zero
    /// words, groups up to eight values per line, and remembers the directory
    /// only after the file write succeeds.
    ///
    /// # Errors
    ///
    /// Returns the file-system error from the standard-library writer.
    pub fn save_selected_file(&mut self, path: &Path) -> io::Result<()> {
        write_hexadecimal_words(path, &self.working_words)?;
        self.remembered_directory = parent_directory(path);
        Ok(())
    }

    /// Performs the recovered pre-dialog part of `FUN_0140a230` at
    /// `0x0140A230`.
    ///
    /// Save continues to its dialog when normal-mode validation fails. The
    /// prior working array is therefore available to an accepted save.
    pub fn commit_before_save(&mut self) {
        if !self.alternate_grid_mode {
            self.commit_grid_to_memory();
        }
    }

    /// Applies the recovered one-attempt close veto.
    ///
    /// This is the original Rust implementation of Ghidra function
    /// `0x01409FE0`, symbol `FUN_01409fe0`
    /// (`TMemoryEditor.FormCloseQuery`). A validation failure rejects one
    /// close request. The pending error is then cleared so a later request can
    /// close.
    #[must_use]
    pub const fn query_close(&mut self) -> bool {
        let can_close = !self.close_error_pending;
        self.close_error_pending = false;
        can_close
    }

    fn commit_grid_to_memory(&mut self) {
        match parse_grid_values(&self.grid_values, self.numeric_mode) {
            Ok(values) => {
                self.working_words.copy_from_slice(&values);
                self.backing_words.copy_from_slice(&values);
                self.close_error_pending = false;
                self.last_error = None;
            }
            Err(error) => {
                self.close_error_pending = true;
                self.last_error = Some(error.to_string());
            }
        }
    }
}

fn parse_grid_values(values: &[String], mode: NumericMode) -> Result<Vec<u16>, GridValueError> {
    values
        .iter()
        .enumerate()
        .map(|(index, value)| {
            parse_word(value, mode).map_err(|()| GridValueError {
                index,
                value: value.clone(),
                mode,
            })
        })
        .collect()
}

fn parse_word(value: &str, mode: NumericMode) -> Result<u16, ()> {
    match mode {
        NumericMode::Binary => u16::from_str_radix(value, 2).map_err(|_| ()),
        NumericMode::Hexadecimal => u16::from_str_radix(value, 16).map_err(|_| ()),
        NumericMode::Decimal => value.parse::<u16>().map_err(|_| ()),
    }
}

fn format_words(words: &[u16], mode: NumericMode) -> Vec<String> {
    words
        .iter()
        .map(|word| match mode {
            NumericMode::Binary => format!("{word:b}"),
            NumericMode::Hexadecimal => format!("{word:X}"),
            NumericMode::Decimal => word.to_string(),
        })
        .collect()
}

fn write_hexadecimal_words(path: &Path, words: &[u16]) -> io::Result<()> {
    let retained_length = words
        .iter()
        .rposition(|word| *word != 0)
        .map_or(0, |index| index + 1);
    let mut text = String::new();
    for (index, word) in words[..retained_length].iter().enumerate() {
        let _ = write!(text, "{word:02X} ");
        if index % 8 == 7 {
            text.push_str("\r\n");
        }
    }
    text.push_str("\r\n");

    fs::write(path, text)
}

fn parent_directory(path: &Path) -> Option<PathBuf> {
    path.parent()
        .filter(|parent| !parent.as_os_str().is_empty())
        .map(Path::to_owned)
}

fn executable_directory(path: &Path) -> Option<PathBuf> {
    path.parent()
        .filter(|parent| !parent.as_os_str().is_empty())
        .map(Path::to_owned)
}

fn open_dialog(directory: Option<PathBuf>) -> Task<Message> {
    let mut dialog = rfd::AsyncFileDialog::new().add_filter("Text file", &["txt"]);
    if let Some(directory) = directory {
        dialog = dialog.set_directory(directory);
    }

    Task::perform(
        async move { dialog.pick_file().await.map(|file| file.path().to_owned()) },
        Message::LoadDialogClosed,
    )
}

fn save_dialog(directory: Option<PathBuf>) -> Task<Message> {
    let mut dialog = rfd::AsyncFileDialog::new().add_filter("Text file", &["txt"]);
    if let Some(directory) = directory {
        dialog = dialog.set_directory(directory);
    }

    Task::perform(
        async move { dialog.save_file().await.map(|file| file.path().to_owned()) },
        Message::SaveDialogClosed,
    )
}

#[cfg(test)]
mod tests {
    use std::sync::atomic::{AtomicU64, Ordering};

    use super::*;

    static NEXT_FILE_ID: AtomicU64 = AtomicU64::new(0);

    #[derive(Debug)]
    struct FakeHost {
        executable_path: PathBuf,
    }

    impl MemoryEditorHost for FakeHost {
        fn executable_path(&self) -> io::Result<PathBuf> {
            Ok(self.executable_path.clone())
        }
    }

    #[test]
    fn form_create_configures_files_snapshots_memory_and_builds_the_grid() -> io::Result<()> {
        let executable_path = PathBuf::from("installation").join("tina.exe");
        let host = FakeHost {
            executable_path: executable_path.clone(),
        };
        let mut editor = MemoryEditor::new(vec![0x12, 0x34], NumericMode::Hexadecimal);

        editor.on_create(&host)?;

        assert!(editor.is_created());
        assert!(editor.file_controls_enabled());
        assert!(editor.file_controls_visible());
        assert_eq!(editor.file_dialog_filter(), TEXT_FILE_FILTER);
        assert_eq!(
            editor.file_dialog_default_extension(),
            TEXT_FILE_DEFAULT_EXTENSION
        );
        assert_eq!(editor.remembered_directory(), executable_path.parent());
        assert_eq!(editor.working_words(), &[0x12, 0x34]);
        assert_eq!(editor.grid_values(), &["12", "34"]);
        assert_eq!(editor.active_cell(), None);
        assert_eq!(editor.help_context(), 0x4a6);
        Ok(())
    }

    #[test]
    fn form_show_selects_the_first_value_cell() {
        let mut editor = MemoryEditor::new(vec![1], NumericMode::Decimal);

        drop(editor.update(Message::Shown));

        assert_eq!(editor.active_cell(), Some(GridCell { column: 1, row: 1 }));
    }

    #[test]
    fn valid_ok_commits_the_complete_fixed_width_grid() {
        let mut editor = MemoryEditor::new(vec![1, 2, 3], NumericMode::Hexadecimal);
        set_grid_value(&mut editor, 0, "10");
        set_grid_value(&mut editor, 1, "20");
        set_grid_value(&mut editor, 2, "FFFF");

        drop(editor.update(Message::OkPressed));

        assert_eq!(editor.working_words(), &[0x10, 0x20, 0xFFFF]);
        assert_eq!(editor.backing_words(), &[0x10, 0x20, 0xFFFF]);
        assert!(!editor.close_error_pending());
    }

    #[test]
    fn invalid_ok_preserves_memory_and_vetoes_only_one_close_attempt() {
        let mut editor = MemoryEditor::new(vec![1, 2], NumericMode::Decimal);
        set_grid_value(&mut editor, 0, "invalid");

        drop(editor.update(Message::OkPressed));
        drop(editor.update(Message::CloseRequested));

        assert_eq!(editor.working_words(), &[1, 2]);
        assert_eq!(editor.backing_words(), &[1, 2]);
        assert_eq!(editor.last_close_allowed(), Some(false));
        assert!(!editor.close_error_pending());

        drop(editor.update(Message::CloseRequested));
        assert_eq!(editor.last_close_allowed(), Some(true));
    }

    #[test]
    fn alternate_ok_marks_status_one_without_copying_grid_values() {
        let mut editor = MemoryEditor::new(vec![1], NumericMode::Decimal);
        set_grid_value(&mut editor, 0, "9");
        drop(editor.update(Message::AlternateGridModeChanged(true)));
        drop(editor.update(Message::AlternateGridStatusChanged(1)));

        drop(editor.update(Message::OkPressed));

        assert!(editor.alternate_change_marked());
        assert_eq!(editor.working_words(), &[1]);
        assert_eq!(editor.backing_words(), &[1]);
    }

    #[test]
    fn load_uses_the_shared_parser_and_preserves_short_tail() -> io::Result<()> {
        let path = write_test_file("load", "A|B")?;
        let mut editor = MemoryEditor::new(vec![1, 2, 3], NumericMode::Hexadecimal);

        let result = editor.load_selected_file(&path);
        fs::remove_file(&path)?;

        assert!(result.is_ok());
        assert_eq!(editor.working_words(), &[0xA, 0xB, 3]);
        assert_eq!(editor.backing_words(), &[1, 2, 3]);
        assert_eq!(editor.grid_values(), &["A", "B", "3"]);
        assert_eq!(editor.remembered_directory(), path.parent());
        Ok(())
    }

    #[test]
    fn failed_load_keeps_the_old_grid_and_directory_after_partial_writes() -> io::Result<()> {
        let path = write_test_file("bad-load", "A\nnot-hex")?;
        let mut editor = MemoryEditor::new(vec![1, 2], NumericMode::Hexadecimal);
        let old_grid = editor.grid_values().to_vec();

        let error = editor
            .load_selected_file(&path)
            .expect_err("invalid hexadecimal text must fail");
        fs::remove_file(path)?;

        assert!(matches!(
            error,
            HexadecimalTextFileError::HexNumberExpected { line_number: 2 }
        ));
        assert_eq!(editor.working_words(), &[0xA, 2]);
        assert_eq!(editor.grid_values(), old_grid);
        assert_eq!(editor.remembered_directory(), None);
        Ok(())
    }

    #[test]
    fn save_commits_before_a_canceled_dialog() {
        let mut editor = MemoryEditor::new(vec![1, 2], NumericMode::Decimal);
        set_grid_value(&mut editor, 0, "7");

        drop(editor.update(Message::SavePressed));
        drop(editor.update(Message::SaveDialogClosed(None)));

        assert_eq!(editor.working_words(), &[7, 2]);
        assert_eq!(editor.backing_words(), &[7, 2]);
        assert_eq!(editor.remembered_directory(), None);
    }

    #[test]
    fn accepted_save_after_an_invalid_edit_writes_the_prior_buffer() -> io::Result<()> {
        let path = unique_test_path("save");
        let mut editor = MemoryEditor::new(vec![0x12, 0, 0], NumericMode::Hexadecimal);
        set_grid_value(&mut editor, 0, "invalid");

        drop(editor.update(Message::SavePressed));
        editor.save_selected_file(&path)?;
        let saved = fs::read_to_string(&path)?;
        fs::remove_file(&path)?;

        assert_eq!(editor.working_words(), &[0x12, 0, 0]);
        assert_eq!(editor.backing_words(), &[0x12, 0, 0]);
        assert!(editor.close_error_pending());
        assert_eq!(saved, "12 \r\n");
        Ok(())
    }

    #[test]
    fn save_trims_only_trailing_zeros_and_groups_eight_words_per_line() -> io::Result<()> {
        let path = unique_test_path("grouped-save");
        let mut editor =
            MemoryEditor::new(vec![1, 2, 3, 4, 5, 6, 7, 8, 0, 10, 0], NumericMode::Decimal);

        editor.save_selected_file(&path)?;
        let saved = fs::read_to_string(&path)?;
        fs::remove_file(&path)?;

        assert_eq!(saved, "01 02 03 04 05 06 07 08 \r\n00 0A \r\n");
        assert_eq!(editor.remembered_directory(), path.parent());
        Ok(())
    }

    fn set_grid_value(editor: &mut MemoryEditor, index: usize, value: &str) {
        drop(editor.update(Message::GridValueChanged {
            index,
            value: value.to_owned(),
        }));
    }

    fn write_test_file(stem: &str, contents: &str) -> io::Result<PathBuf> {
        let path = unique_test_path(stem);
        fs::write(&path, contents)?;
        Ok(path)
    }

    fn unique_test_path(stem: &str) -> PathBuf {
        let id = NEXT_FILE_ID.fetch_add(1, Ordering::Relaxed);
        let folder = Path::new(".temp");
        fs::create_dir_all(folder).expect("test temporary directory must be available");
        folder.join(format!(
            "memory-editor-{stem}-{}-{id}.txt",
            std::process::id()
        ))
    }
}
