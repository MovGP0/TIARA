//! Recovered adapters for the Log, HDL Message, and Text windows.
//!
//! Library evaluation: Iced 0.13 supplies the maintained text editor,
//! selection action, task, and standard native text clipboard adapter. The
//! standard library supplies path joining, UTF-8 file input/output, and the
//! recovered eight-space tab expansion. The recovered compile-log encoding is
//! not visible, so this port documents and uses UTF-8 instead of adding an
//! encoding crate. The host remains responsible for displaying the returned
//! modal confirmation and applying the requested window geometry and source-
//! editor viewport.

use std::io;
use std::path::{Path, PathBuf};

use iced::Task;
use iced::widget::text_editor;

pub const LIBRARY_EVALUATION: &str = "Iced 0.13 supplies the maintained text editor, selection action, task, and standard native text clipboard adapter. std::path, std::fs, and str::replace supply fixed-path joining, UTF-8 source/log I/O, and the recovered eight-space tab expansion. The recovered compile-log encoding is not visible, so no encoding crate is justified. The host displays the returned modal confirmation and applies the requested geometry and source viewport.";
pub const COMPILE_LOG_FILE_NAME: &str = "compile_log.txt";

#[derive(Debug, Clone)]
pub enum LogMessage {
    ClipboardWritten,
}

#[derive(Debug)]
pub struct LogWindow {
    content: text_editor::Content,
}

impl LogWindow {
    #[must_use]
    pub fn new(text: &str) -> Self {
        Self {
            content: text_editor::Content::with_text(text),
        }
    }

    #[must_use]
    pub fn text(&self) -> String {
        normalized_text(&self.content)
    }

    #[must_use]
    pub fn selected_text(&self) -> Option<String> {
        self.content.selection()
    }

    /// Ports Ghidra `FUN_015e4ae0` at `0x015E4AE0`.
    ///
    /// The native handler sends `WM_COPY` to the rich edit. Iced writes the
    /// current standard-text selection and keeps an empty selection as a no-op.
    pub fn copy_selection(&self) -> Task<LogMessage> {
        self.selected_text()
            .map_or_else(Task::none, iced::clipboard::write)
    }

    /// Ports Ghidra `FUN_015e4b00` at `0x015E4B00`.
    pub fn select_all(&mut self) {
        self.content.perform(text_editor::Action::SelectAll);
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SourceViewRequest {
    pub highlighted_line: Option<u32>,
    pub requested_top_line: u32,
}

#[derive(Debug)]
pub struct HdlMessageWindow {
    source_editor: text_editor::Content,
    source_path: PathBuf,
    source_initialized: bool,
    display_state: i32,
    full_height: i32,
    collapsed_height: i32,
    current_height: i32,
    error_line: i32,
    visible_code_lines: i32,
    source_view_request: Option<SourceViewRequest>,
}

impl HdlMessageWindow {
    #[must_use]
    pub fn new(
        source_path: PathBuf,
        full_height: i32,
        bottom_panel_height: i32,
        display_state: i32,
        error_line: i32,
        visible_code_lines: i32,
    ) -> Self {
        Self {
            source_editor: text_editor::Content::new(),
            source_path,
            source_initialized: false,
            display_state,
            full_height,
            collapsed_height: bottom_panel_height.saturating_add(30),
            current_height: full_height,
            error_line,
            visible_code_lines,
            source_view_request: None,
        }
    }

    #[must_use]
    pub fn source_text(&self) -> String {
        normalized_text(&self.source_editor)
    }

    #[must_use]
    pub const fn source_initialized(&self) -> bool {
        self.source_initialized
    }

    #[must_use]
    pub const fn display_state(&self) -> i32 {
        self.display_state
    }

    #[must_use]
    pub const fn current_height(&self) -> i32 {
        self.current_height
    }

    #[must_use]
    pub const fn source_view_request(&self) -> Option<SourceViewRequest> {
        self.source_view_request
    }

    /// Ports Ghidra `FUN_015e6f30` at `0x015E6F30`.
    ///
    /// # Errors
    ///
    /// Returns an I/O error when an existing source file cannot be read. The
    /// recovered assignment that marks initialization complete is after the
    /// load call, so an exceptional read remains eligible for a later retry.
    pub fn apply_layout(&mut self) -> Result<(), io::Error> {
        let expanded = self.display_state == 1;
        self.current_height = if expanded {
            self.full_height
        } else {
            self.collapsed_height
        };

        if self.source_initialized || !expanded {
            return Ok(());
        }

        if self.source_path.is_file() {
            let source = std::fs::read_to_string(&self.source_path)?;
            let normalized_source = source.replace('\t', "        ");
            self.source_editor = text_editor::Content::with_text(&normalized_source);
        }

        self.source_initialized = true;
        let highlighted_line = u32::try_from(self.error_line).ok().filter(|line| *line > 0);
        let requested_top_line = self
            .error_line
            .saturating_sub(self.visible_code_lines / 2)
            .max(1);
        self.source_view_request = Some(SourceViewRequest {
            highlighted_line,
            requested_top_line: u32::try_from(requested_top_line).unwrap_or(1),
        });
        Ok(())
    }

    /// Ports Ghidra `FUN_015e7220` at `0x015E7220`.
    ///
    /// # Errors
    ///
    /// Returns an I/O error when this toggle causes the first expanded source
    /// initialization and the existing source file cannot be read.
    pub fn toggle_code_area(&mut self) -> Result<(), io::Error> {
        self.display_state = i32::from(self.display_state != 1);
        self.apply_layout()
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SaveConfirmation {
    pub path: PathBuf,
    pub message: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TextWindow {
    compiler_working_directory: PathBuf,
    compile_log: String,
}

impl TextWindow {
    #[must_use]
    pub const fn new(compiler_working_directory: PathBuf, compile_log: String) -> Self {
        Self {
            compiler_working_directory,
            compile_log,
        }
    }

    /// Ports Ghidra `FUN_015eb170` at `0x015EB170`.
    ///
    /// The recovered handler saves to the fixed `compile_log.txt` name and
    /// reaches its modal success message only after the write returns.
    ///
    /// # Errors
    ///
    /// Returns an I/O error when the fixed compile-log file cannot be written.
    pub fn save_compile_log(&self) -> Result<SaveConfirmation, io::Error> {
        save_compile_log(&self.compiler_working_directory, &self.compile_log)
    }
}

/// Saves UTF-8 text to the recovered fixed compile-log path.
///
/// # Errors
///
/// Returns an I/O error when the file cannot be written.
pub fn save_compile_log(
    compiler_working_directory: &Path,
    compile_log: &str,
) -> Result<SaveConfirmation, io::Error> {
    let path = compiler_working_directory.join(COMPILE_LOG_FILE_NAME);
    std::fs::write(&path, compile_log)?;
    Ok(SaveConfirmation {
        message: format!("Logfile saved to: {}", path.display()),
        path,
    })
}

fn normalized_text(editor: &text_editor::Content) -> String {
    let mut text = editor.text();
    if text.ends_with('\n') {
        text.pop();
    }
    text
}

#[cfg(test)]
mod tests {
    use super::*;

    fn temporary_folder(name: &str) -> PathBuf {
        std::env::current_dir()
            .expect("current directory")
            .join(".temp")
            .join(format!("text_log_windows_{name}_{}", std::process::id()))
    }

    #[test]
    fn select_all_prepares_the_complete_log_for_copy_without_changing_text() {
        let mut window = LogWindow::new("first\nsecond");
        assert_eq!(window.selected_text(), None);
        let _empty_copy = window.copy_selection();

        window.select_all();

        assert_eq!(window.selected_text().as_deref(), Some("first\nsecond"));
        assert_eq!(window.text(), "first\nsecond");
        let _selected_copy = window.copy_selection();
        assert_eq!(window.selected_text().as_deref(), Some("first\nsecond"));
    }

    #[test]
    fn collapsed_layout_uses_the_bottom_panel_height_and_defers_initialization() {
        let mut window = HdlMessageWindow::new(PathBuf::new(), 600, 150, 0, 20, 10);

        window.apply_layout().expect("collapsed layout");

        assert_eq!(window.current_height(), 180);
        assert!(!window.source_initialized());
        assert_eq!(window.source_view_request(), None);
    }

    #[test]
    fn first_expanded_layout_loads_source_and_centers_the_recorded_error_line() {
        let folder = temporary_folder("source_once");
        std::fs::create_dir_all(&folder).expect("temporary directory");
        let path = folder.join("source.vhd");
        std::fs::write(&path, "entity\tfirst").expect("source fixture");
        let mut window = HdlMessageWindow::new(path.clone(), 600, 150, 1, 20, 10);

        window.apply_layout().expect("expanded layout");
        std::fs::write(&path, "entity replacement").expect("replacement fixture");
        window.toggle_code_area().expect("collapse");
        window.toggle_code_area().expect("expand again");

        assert_eq!(window.current_height(), 600);
        assert_eq!(window.source_text(), "entity        first");
        assert!(window.source_initialized());
        assert_eq!(
            window.source_view_request(),
            Some(SourceViewRequest {
                highlighted_line: Some(20),
                requested_top_line: 15,
            })
        );
        std::fs::remove_dir_all(folder).expect("temporary cleanup");
    }

    #[test]
    fn absent_source_is_marked_initialized_and_is_not_retried() {
        let folder = temporary_folder("missing_source");
        std::fs::create_dir_all(&folder).expect("temporary directory");
        let path = folder.join("later.vhd");
        let mut window = HdlMessageWindow::new(path.clone(), 600, 150, 1, -1, 10);

        window.apply_layout().expect("missing source is a no-op");
        std::fs::write(path, "entity later").expect("late source fixture");
        window.toggle_code_area().expect("collapse");
        window.toggle_code_area().expect("expand again");

        assert!(window.source_initialized());
        assert_eq!(window.source_text(), "");
        assert_eq!(
            window.source_view_request(),
            Some(SourceViewRequest {
                highlighted_line: None,
                requested_top_line: 1,
            })
        );
        std::fs::remove_dir_all(folder).expect("temporary cleanup");
    }

    #[test]
    fn toggle_treats_only_state_one_as_expanded_and_restores_captured_heights() {
        let mut window = HdlMessageWindow::new(PathBuf::new(), 640, 155, 7, -1, 10);
        window.apply_layout().expect("non-expanded state");
        assert_eq!(window.current_height(), 185);

        window.toggle_code_area().expect("expand");
        assert_eq!(window.display_state(), 1);
        assert_eq!(window.current_height(), 640);
        window.toggle_code_area().expect("collapse");
        assert_eq!(window.display_state(), 0);
        assert_eq!(window.current_height(), 185);
    }

    #[test]
    fn compile_log_uses_the_fixed_path_and_exact_success_message() {
        let folder = temporary_folder("save_log");
        std::fs::create_dir_all(&folder).expect("temporary directory");
        let window = TextWindow::new(folder.clone(), "warning β\nerror".to_owned());

        let confirmation = window.save_compile_log().expect("compile-log save");

        let expected_path = folder.join(COMPILE_LOG_FILE_NAME);
        assert_eq!(confirmation.path, expected_path);
        assert_eq!(
            confirmation.message,
            format!("Logfile saved to: {}", expected_path.display())
        );
        assert_eq!(
            std::fs::read_to_string(expected_path).expect("saved UTF-8 log"),
            "warning β\nerror"
        );
        std::fs::remove_dir_all(folder).expect("temporary cleanup");
    }

    #[test]
    fn failed_fixed_path_save_returns_before_a_confirmation_exists() {
        let folder = temporary_folder("save_failure");
        std::fs::create_dir_all(&folder).expect("temporary directory");
        let not_a_directory = folder.join("file");
        std::fs::write(&not_a_directory, "occupied").expect("blocking file");
        let window = TextWindow::new(not_a_directory, "log".to_owned());

        assert!(window.save_compile_log().is_err());

        std::fs::remove_dir_all(folder).expect("temporary cleanup");
    }
}
