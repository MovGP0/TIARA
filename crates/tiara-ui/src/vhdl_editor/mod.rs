//! Iced state for the recovered VHDL Editor save, clipboard, and close commands.

use iced::widget::{button, column, row, text_editor};
use iced::{Element, Length, Task};
use rfd::AsyncFileDialog;
use std::fmt;
use std::path::{Path, PathBuf};

pub const TITLE: &str = "VHDL Editor";
pub const LIBRARY_EVALUATION: &str = "iced supplies the text editor, selection operations, messages, and standard native text clipboard command; rfd supplies the maintained native Save As dialog; std::fs supplies direct file output and Rust ownership supplies deterministic dialog and target lifetimes. SynEdit's private selection-mode clipboard format has no iced equivalent, so the cohesive state exposes a typed ClipboardPayload for a platform adapter while the native command writes standard text.";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum SaveMode {
    #[default]
    ChooseFile,
    CurrentTarget,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum TargetClass {
    #[default]
    Primary,
    Alternate,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum HdlStorage {
    Embedded(String),
    External(PathBuf),
}

impl Default for HdlStorage {
    fn default() -> Self {
        Self::Embedded(String::new())
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct HdlTarget {
    pub class: TargetClass,
    pub storage: HdlStorage,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ClipboardPayload {
    pub text: String,
    pub selection_mode: u8,
}

pub trait SaveFollowUp {
    fn finish(&mut self, save_as_mode: bool) -> bool;
}

#[derive(Debug, Default)]
struct RecoveredFollowUp;

impl SaveFollowUp for RecoveredFollowUp {
    fn finish(&mut self, _save_as_mode: bool) -> bool {
        false
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    Edit(text_editor::Action),
    Save,
    SaveAs,
    SaveAsSelected(Option<PathBuf>),
    SelectAll,
    Copy,
    ClipboardWritten,
    RequestClose,
}

#[derive(Debug)]
pub struct Window {
    editor: text_editor::Content,
    modified: bool,
    mode: SaveMode,
    target: HdlTarget,
    selection_mode: u8,
    close_requested: bool,
    last_error: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new("", SaveMode::ChooseFile, HdlTarget::default())
    }
}

impl Window {
    #[must_use]
    pub fn new(text: &str, mode: SaveMode, target: HdlTarget) -> Self {
        Self {
            editor: text_editor::Content::with_text(text),
            modified: false,
            mode,
            target,
            selection_mode: 0,
            close_requested: false,
            last_error: None,
        }
    }

    #[must_use]
    pub fn text(&self) -> String {
        normalized_text(&self.editor)
    }

    #[must_use]
    pub const fn modified(&self) -> bool {
        self.modified
    }

    #[must_use]
    pub const fn target(&self) -> &HdlTarget {
        &self.target
    }

    #[must_use]
    pub const fn close_requested(&self) -> bool {
        self.close_requested
    }

    #[must_use]
    pub const fn last_error(&self) -> Option<&String> {
        self.last_error.as_ref()
    }

    pub const fn set_modified(&mut self, modified: bool) {
        self.modified = modified;
    }

    pub const fn set_selection_mode(&mut self, selection_mode: u8) {
        self.selection_mode = selection_mode;
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Edit(action) => {
                self.editor.perform(action);
                self.modified = true;
                self.last_error = None;
                Task::none()
            }
            Message::Save => {
                let mut follow_up = RecoveredFollowUp;
                if let Err(error) = self.save(&mut follow_up) {
                    self.last_error = Some(error.to_string());
                }
                Task::none()
            }
            Message::SaveAs => {
                if self.mode == SaveMode::ChooseFile {
                    save_as_task()
                } else {
                    let mut follow_up = RecoveredFollowUp;
                    if let Err(error) = self.save_as(None, &mut follow_up) {
                        self.last_error = Some(error.to_string());
                    }
                    Task::none()
                }
            }
            Message::SaveAsSelected(path) => {
                let mut follow_up = RecoveredFollowUp;
                if let Err(error) = self.save_as(path.as_deref(), &mut follow_up) {
                    self.last_error = Some(error.to_string());
                }
                Task::none()
            }
            Message::SelectAll => {
                self.select_all();
                Task::none()
            }
            Message::Copy => self.copy_native(),
            Message::ClipboardWritten => Task::none(),
            Message::RequestClose => {
                self.request_close();
                Task::none()
            }
        }
    }

    /// Ports Ghidra `FUN_014a0090` at `0x014A0090`.
    ///
    /// # Errors
    ///
    /// Returns an I/O error when an external target cannot be written.
    pub fn write_primary_target(
        target: &mut HdlTarget,
        lines: &str,
    ) -> Result<(), VhdlEditorError> {
        write_target(target, lines)
    }

    /// Ports Ghidra `FUN_014a0130` at `0x014A0130`.
    ///
    /// # Errors
    ///
    /// Returns an I/O error when an external target cannot be written.
    pub fn write_alternate_target(
        target: &mut HdlTarget,
        lines: &str,
    ) -> Result<(), VhdlEditorError> {
        write_target(target, lines)
    }

    /// Ports Ghidra `FUN_014a0640` at `0x014A0640`.
    pub fn select_all(&mut self) {
        self.editor.perform(text_editor::Action::SelectAll);
    }

    /// Ports Ghidra `FUN_014a0660` at `0x014A0660`.
    pub fn copy_payload(&self) -> Option<ClipboardPayload> {
        self.editor.selection().map(|text| ClipboardPayload {
            text,
            selection_mode: self.selection_mode,
        })
    }

    pub fn copy_native(&self) -> Task<Message> {
        let Some(payload) = self.copy_payload() else {
            return Task::none();
        };
        iced::clipboard::write(payload.text)
    }

    /// Ports Ghidra `FUN_014a0680` at `0x014A0680`.
    ///
    /// # Errors
    ///
    /// Returns an I/O error when the chosen file or current external target
    /// cannot be written.
    pub fn save_as(
        &mut self,
        selected_path: Option<&Path>,
        follow_up: &mut impl SaveFollowUp,
    ) -> Result<bool, VhdlEditorError> {
        if self.mode == SaveMode::ChooseFile {
            let Some(path) = selected_path else {
                return Ok(false);
            };
            std::fs::write(path, self.text())?;
            return Ok(true);
        }

        let lines = self.text();
        self.write_current_target(&lines)?;
        if follow_up.finish(true) {
            self.modified = false;
        }
        Ok(true)
    }

    /// Ports Ghidra `FUN_014a07b0` at `0x014A07B0`.
    ///
    /// # Errors
    ///
    /// Returns an I/O error when the modified document's external target
    /// cannot be written. The editor remains marked clean, matching the
    /// recovered pre-write state change.
    pub fn save(&mut self, follow_up: &mut impl SaveFollowUp) -> Result<bool, VhdlEditorError> {
        if !self.modified {
            return Ok(false);
        }
        self.modified = false;
        let lines = self.text();
        self.write_current_target(&lines)?;
        let _ = follow_up.finish(false);
        Ok(true)
    }

    /// Ports Ghidra `FUN_014a0840` at `0x014A0840`.
    ///
    /// # Errors
    ///
    /// Returns the same write error as [`Self::save_as`].
    pub fn save_as_from_toolbar(
        &mut self,
        selected_path: Option<&Path>,
        follow_up: &mut impl SaveFollowUp,
    ) -> Result<bool, VhdlEditorError> {
        self.save_as(selected_path, follow_up)
    }

    /// Ports Ghidra `FUN_014a0850` at `0x014A0850`.
    pub const fn request_close(&mut self) {
        self.close_requested = true;
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            row![
                button("Save").on_press(Message::Save),
                button("Save As...").on_press(Message::SaveAs),
                button("Copy").on_press(Message::Copy),
                button("Select All").on_press(Message::SelectAll),
                button("Close").on_press(Message::RequestClose),
            ]
            .spacing(8),
            text_editor(&self.editor)
                .on_action(Message::Edit)
                .height(Length::Fill),
        ]
        .spacing(8)
        .into()
    }

    fn write_current_target(&mut self, lines: &str) -> Result<(), VhdlEditorError> {
        match self.target.class {
            TargetClass::Primary => Self::write_primary_target(&mut self.target, lines),
            TargetClass::Alternate => Self::write_alternate_target(&mut self.target, lines),
        }
    }
}

#[derive(Debug)]
pub enum VhdlEditorError {
    Io(std::io::Error),
}

impl fmt::Display for VhdlEditorError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Io(error) => error.fmt(formatter),
        }
    }
}

impl std::error::Error for VhdlEditorError {}

impl From<std::io::Error> for VhdlEditorError {
    fn from(value: std::io::Error) -> Self {
        Self::Io(value)
    }
}

fn write_target(target: &mut HdlTarget, lines: &str) -> Result<(), VhdlEditorError> {
    match &mut target.storage {
        HdlStorage::Embedded(content) => {
            content.clear();
            content.push_str(lines);
            Ok(())
        }
        HdlStorage::External(path) => {
            std::fs::write(path, lines)?;
            Ok(())
        }
    }
}

fn normalized_text(editor: &text_editor::Content) -> String {
    let mut text = editor.text();
    if text.ends_with('\n') {
        text.pop();
    }
    text
}

fn save_as_task() -> Task<Message> {
    Task::perform(select_save_path(), Message::SaveAsSelected)
}

async fn select_save_path() -> Option<PathBuf> {
    AsyncFileDialog::new()
        .add_filter("VHDL source", &["vhd", "vhdl"])
        .save_file()
        .await
        .map(|file| file.path().to_path_buf())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Debug, Default)]
    struct FollowUp {
        calls: Vec<bool>,
        result: bool,
    }

    impl SaveFollowUp for FollowUp {
        fn finish(&mut self, save_as_mode: bool) -> bool {
            self.calls.push(save_as_mode);
            self.result
        }
    }

    fn embedded_window(mode: SaveMode) -> Window {
        Window::new("entity demo is\nend entity;", mode, HdlTarget::default())
    }

    #[test]
    fn both_target_class_writers_replace_embedded_content() {
        for class in [TargetClass::Primary, TargetClass::Alternate] {
            let mut target = HdlTarget {
                class,
                storage: HdlStorage::Embedded("old".to_owned()),
            };
            match class {
                TargetClass::Primary => Window::write_primary_target(&mut target, "new"),
                TargetClass::Alternate => Window::write_alternate_target(&mut target, "new"),
            }
            .expect("embedded write");
            assert_eq!(target.storage, HdlStorage::Embedded("new".to_owned()));
        }
    }

    #[test]
    fn both_target_class_writers_save_external_utf8_text() {
        let folder = std::env::current_dir()
            .expect("current directory")
            .join(".temp")
            .join(format!("vhdl_targets_{}", std::process::id()));
        std::fs::create_dir_all(&folder).expect("temporary directory");
        for (index, class) in [TargetClass::Primary, TargetClass::Alternate]
            .into_iter()
            .enumerate()
        {
            let path = folder.join(format!("target_{index}.vhd"));
            let mut target = HdlTarget {
                class,
                storage: HdlStorage::External(path.clone()),
            };
            match class {
                TargetClass::Primary => Window::write_primary_target(&mut target, "entity β"),
                TargetClass::Alternate => Window::write_alternate_target(&mut target, "entity β"),
            }
            .expect("external write");
            assert_eq!(
                std::fs::read_to_string(path).expect("UTF-8 text"),
                "entity β"
            );
        }
        std::fs::remove_dir_all(&folder).expect("temporary cleanup");
    }

    #[test]
    fn clean_save_is_a_complete_noop() {
        let mut window = embedded_window(SaveMode::CurrentTarget);
        let mut follow_up = FollowUp::default();
        assert!(!window.save(&mut follow_up).expect("clean save"));
        assert!(follow_up.calls.is_empty());
        assert_eq!(window.target.storage, HdlStorage::Embedded(String::new()));
    }

    #[test]
    fn modified_save_marks_clean_before_writing_and_runs_follow_up() {
        let mut window = embedded_window(SaveMode::CurrentTarget);
        window.set_modified(true);
        let mut follow_up = FollowUp::default();
        assert!(window.save(&mut follow_up).expect("modified save"));
        assert!(!window.modified());
        assert_eq!(follow_up.calls, [false]);
        assert_eq!(
            window.target.storage,
            HdlStorage::Embedded("entity demo is\nend entity;".to_owned())
        );
    }

    #[test]
    fn failed_current_save_retains_recovered_clean_state() {
        let mut window = Window::new(
            "text",
            SaveMode::CurrentTarget,
            HdlTarget {
                class: TargetClass::Primary,
                storage: HdlStorage::External(PathBuf::new()),
            },
        );
        window.set_modified(true);
        let error = window.save(&mut FollowUp::default());
        assert!(error.is_err());
        assert!(!window.modified());
    }

    #[test]
    fn choose_file_save_as_cancel_is_noop_and_success_keeps_modified() {
        let mut window = embedded_window(SaveMode::ChooseFile);
        window.set_modified(true);
        let mut follow_up = FollowUp::default();
        assert!(!window.save_as(None, &mut follow_up).expect("cancel"));

        let folder = std::env::current_dir()
            .expect("current directory")
            .join(".temp")
            .join(format!("vhdl_editor_{}", std::process::id()));
        std::fs::create_dir_all(&folder).expect("temporary directory");
        let path = folder.join("saved.vhd");
        assert!(
            window
                .save_as(Some(&path), &mut follow_up)
                .expect("save as")
        );
        assert_eq!(
            std::fs::read_to_string(&path).expect("saved text"),
            window.text()
        );
        assert!(window.modified());
        assert!(follow_up.calls.is_empty());
        std::fs::remove_dir_all(&folder).expect("temporary cleanup");
    }

    #[test]
    fn target_mode_save_as_uses_follow_up_result_for_modified_state() {
        let mut window = embedded_window(SaveMode::CurrentTarget);
        window.set_modified(true);
        let mut follow_up = FollowUp {
            result: false,
            ..FollowUp::default()
        };
        assert!(window.save_as(None, &mut follow_up).expect("target save"));
        assert!(window.modified());
        follow_up.result = true;
        assert!(
            window
                .save_as_from_toolbar(None, &mut follow_up)
                .expect("toolbar target save")
        );
        assert!(!window.modified());
        assert_eq!(follow_up.calls, [true, true]);
    }

    #[test]
    fn select_all_and_copy_preserve_document_and_selection_mode() {
        let mut window = embedded_window(SaveMode::ChooseFile);
        window.set_selection_mode(2);
        window.select_all();
        assert_eq!(
            window.copy_payload(),
            Some(ClipboardPayload {
                text: window.text(),
                selection_mode: 2,
            })
        );
        assert!(!window.modified());
    }

    #[test]
    fn empty_copy_and_close_request_do_not_save() {
        let mut window = embedded_window(SaveMode::CurrentTarget);
        assert_eq!(window.copy_payload(), None);
        window.set_modified(true);
        window.request_close();
        assert!(window.close_requested());
        assert!(window.modified());
        assert_eq!(window.target.storage, HdlStorage::Embedded(String::new()));
    }
}
