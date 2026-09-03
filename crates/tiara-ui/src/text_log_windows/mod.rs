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

use iced::widget::text_editor;
use iced::{Color, Point, Task, mouse};

use crate::vhdl_editor::{
    COLUMN_LABEL_RESOURCE, CursorStatus, CursorStatusAdapter, LINE_LABEL_RESOURCE,
};

pub const LIBRARY_EVALUATION: &str = "Iced 0.13 supplies the maintained text editor, mouse button and point types, selection action, task, and standard native text clipboard adapter. Rust Vec and a typed enum represent the recovered owned HDL syntax-definition catalog. std::path, std::fs, and str::replace supply fixed-path joining, UTF-8 source/log I/O, and the recovered eight-space tab expansion. The recovered compile-log encoding is not visible, so no encoding crate is justified. The host displays the returned context menu or modal confirmation and applies the requested geometry and source viewport.";
pub const COMPILE_LOG_FILE_NAME: &str = "compile_log.txt";

#[derive(Debug, Clone)]
pub enum LogMessage {
    ClipboardWritten,
}

#[derive(Debug, Clone, Copy, PartialEq)]
pub struct ContextMenuRequest {
    pub screen_position: Point,
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

    /// Ports Ghidra `FUN_015e4a70` at `0x015E4A70`.
    ///
    /// The native `ContentMouseDown` handler opens the window popup menu only
    /// for the right mouse button. It converts the content-relative pointer
    /// position to screen coordinates before it opens the menu. The iced host
    /// consumes the returned request because iced does not provide the native
    /// Delphi popup-menu object.
    #[must_use]
    pub fn content_mouse_down(
        &self,
        button: mouse::Button,
        content_position: Point,
        window_client_origin: Point,
    ) -> Option<ContextMenuRequest> {
        (button == mouse::Button::Right).then_some(ContextMenuRequest {
            screen_position: Point::new(
                window_client_origin.x + content_position.x,
                window_client_origin.y + content_position.y,
            ),
        })
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

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HdlSyntaxDefinition {
    Vhdl,
    Verilog,
}

#[derive(Debug)]
pub struct HdlMessageWindow {
    source_editor: text_editor::Content,
    source_path: PathBuf,
    source_initialized: bool,
    editor_show_option_enabled: bool,
    initial_client_width: i32,
    display_state: i32,
    full_height: i32,
    collapsed_height: i32,
    current_height: i32,
    error_line: i32,
    visible_code_lines: i32,
    source_view_request: Option<SourceViewRequest>,
    syntax_definitions: Vec<HdlSyntaxDefinition>,
    cursor_status: Option<CursorStatus>,
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
            editor_show_option_enabled: false,
            initial_client_width: 0,
            display_state,
            full_height,
            collapsed_height: bottom_panel_height.saturating_add(30),
            current_height: full_height,
            error_line,
            visible_code_lines,
            source_view_request: None,
            syntax_definitions: Vec::new(),
            cursor_status: None,
        }
    }

    /// Ports Ghidra `FUN_015e7250` at `0x015E7250`.
    ///
    /// The recovered form-create handler starts with an uninitialized source,
    /// records the current client width and full height, derives the collapsed
    /// height from the bottom panel plus 30 pixels, selects expanded state `1`,
    /// sets the error line to `-1`, and discovers the embedded VHDL and Verilog
    /// syntax definitions.
    #[must_use]
    pub fn form_create(
        source_path: PathBuf,
        client_width: i32,
        full_height: i32,
        bottom_panel_height: i32,
        visible_code_lines: i32,
    ) -> Self {
        let mut window = Self::new(
            source_path,
            full_height,
            bottom_panel_height,
            1,
            -1,
            visible_code_lines,
        );
        window.initial_client_width = client_width;
        window.syntax_definitions = vec![HdlSyntaxDefinition::Vhdl, HdlSyntaxDefinition::Verilog];
        window
    }

    /// Ports Ghidra `FUN_015e72d0` at `0x015E72D0`.
    ///
    /// The recovered form-destroy handler releases only the owned syntax list.
    /// Clearing the vector models that event while normal Rust drop semantics
    /// also release it if the whole window is dropped directly.
    pub fn form_destroy(&mut self) {
        self.syntax_definitions.clear();
    }

    /// Ports Ghidra `FUN_015e72f0` at `0x015E72F0`.
    ///
    /// The recovered form-show handler enables an editor-owned Boolean option
    /// and then applies the current expanded or collapsed layout. The recovered
    /// source does not identify the option's Delphi property name.
    ///
    /// # Errors
    ///
    /// Returns an I/O error when the expanded layout must load an existing
    /// source file and that file cannot be read as UTF-8. The editor option is
    /// already enabled when this error is returned.
    pub fn form_show(&mut self) -> Result<(), io::Error> {
        self.editor_show_option_enabled = true;
        self.apply_layout()
    }

    /// Ports Ghidra `FUN_015e7320` at `0x015E7320`.
    pub fn editor_key_up(&mut self, adapter: &mut impl CursorStatusAdapter) {
        self.refresh_cursor_status(adapter);
    }

    /// Ports Ghidra `FUN_015e7340` at `0x015E7340`.
    pub fn editor_mouse_down(&mut self, adapter: &mut impl CursorStatusAdapter) {
        self.refresh_cursor_status(adapter);
    }

    /// Ports Ghidra `FUN_015e7360` at `0x015E7360`.
    pub fn editor_mouse_up(&mut self, adapter: &mut impl CursorStatusAdapter) {
        self.refresh_cursor_status(adapter);
    }

    /// Ports Ghidra `FUN_015e7420` at `0x015E7420`.
    ///
    /// The native special-line event marks only the stored error line as
    /// special and sets its Delphi `TColor` background value to `0xADA8EA`.
    /// `Option` represents the native special-line flag; a nonmatching line
    /// leaves both the flag and caller-supplied colors unchanged.
    #[must_use]
    pub fn special_line_background(&self, line: i32) -> Option<Color> {
        (line == self.error_line).then(hdl_error_line_background)
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
    pub const fn editor_show_option_enabled(&self) -> bool {
        self.editor_show_option_enabled
    }

    #[must_use]
    pub const fn initial_client_width(&self) -> i32 {
        self.initial_client_width
    }

    #[must_use]
    pub const fn display_state(&self) -> i32 {
        self.display_state
    }

    #[must_use]
    pub const fn full_height(&self) -> i32 {
        self.full_height
    }

    #[must_use]
    pub const fn collapsed_height(&self) -> i32 {
        self.collapsed_height
    }

    #[must_use]
    pub const fn current_height(&self) -> i32 {
        self.current_height
    }

    #[must_use]
    pub const fn error_line(&self) -> i32 {
        self.error_line
    }

    #[must_use]
    pub const fn source_view_request(&self) -> Option<SourceViewRequest> {
        self.source_view_request
    }

    #[must_use]
    pub fn syntax_definitions(&self) -> &[HdlSyntaxDefinition] {
        &self.syntax_definitions
    }

    #[must_use]
    pub const fn cursor_status(&self) -> Option<&CursorStatus> {
        self.cursor_status.as_ref()
    }

    fn refresh_cursor_status(&mut self, adapter: &mut impl CursorStatusAdapter) {
        self.cursor_status =
            Some(adapter.cursor_status(LINE_LABEL_RESOURCE, COLUMN_LABEL_RESOURCE));
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

fn hdl_error_line_background() -> Color {
    Color::from_rgb8(0xEA, 0xA8, 0xAD)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct CursorStatusHost {
        calls: usize,
    }

    impl CursorStatusAdapter for CursorStatusHost {
        fn cursor_status(
            &mut self,
            line_label_resource: u16,
            column_label_resource: u16,
        ) -> CursorStatus {
            self.calls += 1;
            CursorStatus {
                line: 12,
                column: 7,
                display_text: format!("{line_label_resource:04X}:12 {column_label_resource:04X}:7"),
            }
        }
    }

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
    fn content_right_click_requests_the_popup_at_screen_coordinates() {
        let window = LogWindow::new("entry");

        let request = window.content_mouse_down(
            mouse::Button::Right,
            Point::new(12.0, 8.0),
            Point::new(100.0, 40.0),
        );

        assert_eq!(
            request,
            Some(ContextMenuRequest {
                screen_position: Point::new(112.0, 48.0),
            })
        );
        assert_eq!(window.text(), "entry");
    }

    #[test]
    fn content_non_right_click_does_not_request_the_popup() {
        let window = LogWindow::new("entry");

        assert_eq!(
            window.content_mouse_down(
                mouse::Button::Left,
                Point::new(12.0, 8.0),
                Point::new(100.0, 40.0),
            ),
            None
        );
        assert_eq!(
            window.content_mouse_down(
                mouse::Button::Middle,
                Point::new(12.0, 8.0),
                Point::new(100.0, 40.0),
            ),
            None
        );
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
    fn form_create_records_geometry_defaults_and_embedded_syntax_definitions() {
        let window = HdlMessageWindow::form_create(PathBuf::from("source.vhd"), 563, 771, 150, 24);

        assert!(!window.source_initialized());
        assert_eq!(window.initial_client_width(), 563);
        assert_eq!(window.full_height(), 771);
        assert_eq!(window.collapsed_height(), 180);
        assert_eq!(window.current_height(), 771);
        assert_eq!(window.display_state(), 1);
        assert_eq!(window.error_line(), -1);
        assert_eq!(window.source_view_request(), None);
        assert_eq!(
            window.syntax_definitions(),
            [HdlSyntaxDefinition::Vhdl, HdlSyntaxDefinition::Verilog]
        );
    }

    #[test]
    fn form_destroy_releases_only_the_owned_syntax_catalog() {
        let mut window =
            HdlMessageWindow::form_create(PathBuf::from("source.vhd"), 563, 771, 150, 24);

        window.form_destroy();

        assert!(window.syntax_definitions().is_empty());
        assert_eq!(window.initial_client_width(), 563);
        assert_eq!(window.full_height(), 771);
        assert_eq!(window.collapsed_height(), 180);
        assert_eq!(window.display_state(), 1);
        assert_eq!(window.error_line(), -1);
    }

    #[test]
    fn form_show_enables_the_editor_option_before_applying_collapsed_layout() {
        let mut window = HdlMessageWindow::new(PathBuf::new(), 771, 150, 0, -1, 24);

        window.form_show().expect("show collapsed window");

        assert!(window.editor_show_option_enabled());
        assert_eq!(window.current_height(), 180);
        assert!(!window.source_initialized());
    }

    #[test]
    fn form_show_keeps_the_editor_option_enabled_when_source_loading_fails() {
        let folder = temporary_folder("show_invalid_utf8");
        std::fs::create_dir_all(&folder).expect("temporary directory");
        let path = folder.join("source.vhd");
        std::fs::write(&path, [0xff]).expect("invalid UTF-8 fixture");
        let mut window = HdlMessageWindow::new(path, 771, 150, 1, -1, 24);

        assert!(window.form_show().is_err());

        assert!(window.editor_show_option_enabled());
        assert!(!window.source_initialized());
        std::fs::remove_dir_all(folder).expect("temporary cleanup");
    }

    #[test]
    fn editor_key_up_refreshes_the_localised_line_and_column_status() {
        let mut window = HdlMessageWindow::new(PathBuf::new(), 771, 150, 1, -1, 24);
        let mut adapter = CursorStatusHost::default();

        window.editor_key_up(&mut adapter);

        assert_eq!(adapter.calls, 1);
        assert_eq!(
            window.cursor_status(),
            Some(&CursorStatus {
                line: 12,
                column: 7,
                display_text: "03E5:12 03E6:7".to_owned(),
            })
        );
    }

    #[test]
    fn editor_mouse_down_refreshes_the_localised_line_and_column_status() {
        let mut window = HdlMessageWindow::new(PathBuf::new(), 771, 150, 1, -1, 24);
        let mut adapter = CursorStatusHost::default();

        window.editor_mouse_down(&mut adapter);

        assert_eq!(adapter.calls, 1);
        assert_eq!(window.cursor_status().map(|status| status.line), Some(12));
        assert_eq!(window.cursor_status().map(|status| status.column), Some(7));
    }

    #[test]
    fn editor_mouse_up_refreshes_the_localised_line_and_column_status() {
        let mut window = HdlMessageWindow::new(PathBuf::new(), 771, 150, 1, -1, 24);
        let mut adapter = CursorStatusHost::default();

        window.editor_mouse_up(&mut adapter);

        assert_eq!(adapter.calls, 1);
        assert_eq!(window.cursor_status().map(|status| status.line), Some(12));
        assert_eq!(window.cursor_status().map(|status| status.column), Some(7));
    }

    #[test]
    fn only_the_recorded_error_line_receives_the_recovered_background() {
        let window = HdlMessageWindow::new(PathBuf::new(), 771, 150, 1, 12, 24);

        assert_eq!(
            window.special_line_background(12),
            Some(Color::from_rgb8(0xEA, 0xA8, 0xAD))
        );
        assert_eq!(window.special_line_background(11), None);
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
