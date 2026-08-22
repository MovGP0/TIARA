//! Iced state for the recovered VHDL Editor save, clipboard, and close commands.

use iced::widget::{button, column, row, text_editor};
use iced::{Element, Length, Task};
use rfd::AsyncFileDialog;
use std::fmt;
use std::path::{Path, PathBuf};

pub const TITLE: &str = "VHDL Editor";
pub const LIBRARY_EVALUATION: &str = "iced supplies the text editor, selection operations, messages, and standard native text clipboard command; rfd supplies the maintained native Save As dialog; std::fs supplies direct file output and Rust ownership supplies deterministic dialog and target lifetimes. SynEdit's private selection-mode clipboard format has no iced equivalent, so the cohesive state exposes a typed ClipboardPayload for a platform adapter while the native command writes standard text.";
pub const LINE_LABEL_RESOURCE: u16 = 0x03E5;
pub const COLUMN_LABEL_RESOURCE: u16 = 0x03E6;
pub const FILE_NODE_OWNS_PAYLOAD: u32 = 0x0400;
pub const FILE_TREE_SELECT_HIT_MASK: u32 = 0x0028;
pub const C_AND_CPP_LANGUAGE: &str = "CandCPlusPlus";

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

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SyntaxDefinition {
    pub name: String,
    pub language_name: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FileNode {
    pub label: String,
    pub content: Option<String>,
    pub state_flags: u32,
    pub editing: bool,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MouseButton {
    Left,
    Right,
    Middle,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct FileTreeHit {
    pub zones: u32,
    pub node_index: Option<usize>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CursorStatus {
    pub line: i32,
    pub column: i32,
    pub display_text: String,
}

pub trait LifecycleHost {
    fn synchronize_active_editor(&mut self);
    fn discover_syntax_definitions(&mut self) -> Vec<SyntaxDefinition>;
    fn clear_editor_registration(&mut self);
}

pub trait CursorStatusAdapter {
    fn cursor_status(
        &mut self,
        line_label_resource: u16,
        column_label_resource: u16,
    ) -> CursorStatus;
}

pub trait FileTreeAdapter {
    fn hit_test(&mut self, x: i32, y: i32) -> FileTreeHit;
    fn resolve_syntax(
        &mut self,
        definitions: &[SyntaxDefinition],
        node_label: &str,
    ) -> Option<SyntaxDefinition>;
    fn apply_syntax(&mut self, syntax: Option<&SyntaxDefinition>);
    fn should_apply_global_editor_options(&self) -> bool;
    fn apply_global_editor_options(&mut self);
    fn disable_c_and_cpp_specific_option(&mut self);
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum LifecycleState {
    #[default]
    Constructed,
    Created,
    Visible,
    Active,
    Destroyed,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CloseAction {
    Release,
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
    syntax_definitions: Vec<SyntaxDefinition>,
    files: Vec<FileNode>,
    selected_file: Option<usize>,
    current_syntax: Option<SyntaxDefinition>,
    cursor_status: Option<CursorStatus>,
    lifecycle: LifecycleState,
    editor_show_option_enabled: bool,
    close_action: Option<CloseAction>,
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
            syntax_definitions: Vec::new(),
            files: Vec::new(),
            selected_file: None,
            current_syntax: None,
            cursor_status: None,
            lifecycle: LifecycleState::Constructed,
            editor_show_option_enabled: false,
            close_action: None,
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

    #[must_use]
    pub fn files(&self) -> &[FileNode] {
        &self.files
    }

    pub fn set_files(&mut self, files: Vec<FileNode>) {
        self.files = files;
        self.selected_file = None;
    }

    #[must_use]
    pub const fn selected_file(&self) -> Option<usize> {
        self.selected_file
    }

    #[must_use]
    pub const fn current_syntax(&self) -> Option<&SyntaxDefinition> {
        self.current_syntax.as_ref()
    }

    #[must_use]
    pub const fn cursor_status(&self) -> Option<&CursorStatus> {
        self.cursor_status.as_ref()
    }

    #[must_use]
    pub const fn lifecycle(&self) -> LifecycleState {
        self.lifecycle
    }

    #[must_use]
    pub const fn editor_show_option_enabled(&self) -> bool {
        self.editor_show_option_enabled
    }

    #[must_use]
    pub const fn close_action(&self) -> Option<CloseAction> {
        self.close_action
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

    /// Ports Ghidra `FUN_014a02a0` at `0x014A02A0`.
    ///
    /// Notifies the application host that this editor became active. The host
    /// owns main-window document synchronization.
    pub fn activate(&mut self, host: &mut impl LifecycleHost) {
        host.synchronize_active_editor();
        self.lifecycle = LifecycleState::Active;
    }

    /// Ports Ghidra `FUN_014a02c0` at `0x014A02C0`.
    ///
    /// A selected node with state flag `0x0400` owns every tree payload, so
    /// close drops all payloads. Any selected node has its editing flag cleared.
    /// The recovered VCL close action always releases the form.
    pub fn close(&mut self) -> CloseAction {
        let selected_owns_payloads = self
            .selected_file
            .and_then(|index| self.files.get(index))
            .is_some_and(|node| node.state_flags & FILE_NODE_OWNS_PAYLOAD != 0);
        if selected_owns_payloads {
            for node in &mut self.files {
                node.content = None;
            }
        }
        if let Some(node) = self
            .selected_file
            .and_then(|index| self.files.get_mut(index))
        {
            node.editing = false;
        }
        self.close_action = Some(CloseAction::Release);
        CloseAction::Release
    }

    /// Ports Ghidra `FUN_014a0370` at `0x014A0370`.
    ///
    /// Builds the syntax-definition catalogue through the application host.
    /// Rust ownership replaces the recovered manually allocated list object.
    pub fn create(&mut self, host: &mut impl LifecycleHost) {
        self.syntax_definitions = host.discover_syntax_definitions();
        self.lifecycle = LifecycleState::Created;
    }

    /// Ports Ghidra `FUN_014a03b0` at `0x014A03B0`.
    ///
    /// Drops the syntax catalogue and clears the host's editor registration.
    pub fn destroy(&mut self, host: &mut impl LifecycleHost) {
        self.syntax_definitions.clear();
        self.current_syntax = None;
        host.clear_editor_registration();
        self.lifecycle = LifecycleState::Destroyed;
    }

    /// Ports Ghidra `FUN_014a05a0` at `0x014A05A0`.
    pub fn editor_key_up(&mut self, adapter: &mut impl CursorStatusAdapter) {
        self.refresh_cursor_status(adapter);
    }

    /// Ports Ghidra `FUN_014a05c0` at `0x014A05C0`.
    pub fn editor_mouse_down(&mut self, adapter: &mut impl CursorStatusAdapter) {
        self.refresh_cursor_status(adapter);
    }

    /// Ports Ghidra `FUN_014a05e0` at `0x014A05E0`.
    pub fn editor_mouse_up(&mut self, adapter: &mut impl CursorStatusAdapter) {
        self.refresh_cursor_status(adapter);
    }

    /// Ports Ghidra `FUN_014a0600` at `0x014A0600`.
    ///
    /// Clears the selected file, enables the recovered editor-owned Boolean
    /// option, and refreshes the localized line/column status. The recovered
    /// source does not identify the option's Delphi property name.
    pub fn show(&mut self, adapter: &mut impl CursorStatusAdapter) {
        self.selected_file = None;
        self.editor_show_option_enabled = true;
        self.refresh_cursor_status(adapter);
        self.lifecycle = LifecycleState::Visible;
    }

    /// Ports Ghidra `FUN_014a08a0` at `0x014A08A0`.
    ///
    /// A left click in the recovered label or icon hit zones loads a node only
    /// when it owns source content. The adapter resolves and applies syntax
    /// services; Rust replaces the editor text and marks it clean.
    pub fn file_tree_mouse_down(
        &mut self,
        button: MouseButton,
        x: i32,
        y: i32,
        adapter: &mut impl FileTreeAdapter,
    ) -> bool {
        let hit = adapter.hit_test(x, y);
        if button != MouseButton::Left || hit.zones & FILE_TREE_SELECT_HIT_MASK == 0 {
            return false;
        }
        let Some(index) = hit.node_index else {
            return false;
        };
        let Some(node) = self.files.get(index) else {
            return false;
        };
        let Some(content) = node.content.clone() else {
            return false;
        };

        let syntax = adapter.resolve_syntax(&self.syntax_definitions, &node.label);
        adapter.apply_syntax(syntax.as_ref());
        if adapter.should_apply_global_editor_options() {
            adapter.apply_global_editor_options();
        }
        if syntax
            .as_ref()
            .is_some_and(|definition| definition.language_name == C_AND_CPP_LANGUAGE)
        {
            adapter.disable_c_and_cpp_specific_option();
        }

        self.editor = text_editor::Content::with_text(&content);
        self.modified = false;
        self.selected_file = Some(index);
        self.current_syntax = syntax;
        true
    }

    fn refresh_cursor_status(&mut self, adapter: &mut impl CursorStatusAdapter) {
        self.cursor_status =
            Some(adapter.cursor_status(LINE_LABEL_RESOURCE, COLUMN_LABEL_RESOURCE));
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
            iced::widget::text(
                self.cursor_status
                    .as_ref()
                    .map_or("", |status| status.display_text.as_str()),
            ),
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

    #[derive(Default)]
    struct Lifecycle {
        synchronized: usize,
        cleared: usize,
        definitions: Vec<SyntaxDefinition>,
    }

    impl LifecycleHost for Lifecycle {
        fn synchronize_active_editor(&mut self) {
            self.synchronized += 1;
        }

        fn discover_syntax_definitions(&mut self) -> Vec<SyntaxDefinition> {
            self.definitions.clone()
        }

        fn clear_editor_registration(&mut self) {
            self.cleared += 1;
        }
    }

    #[derive(Default)]
    struct Status {
        calls: usize,
    }

    impl CursorStatusAdapter for Status {
        fn cursor_status(
            &mut self,
            line_label_resource: u16,
            column_label_resource: u16,
        ) -> CursorStatus {
            self.calls += 1;
            CursorStatus {
                line: i32::try_from(self.calls).unwrap_or(i32::MAX),
                column: 7,
                display_text: format!(
                    "{line_label_resource:04X}:{} {column_label_resource:04X}:7",
                    self.calls
                ),
            }
        }
    }

    #[derive(Default)]
    struct Tree {
        hit: Option<FileTreeHit>,
        syntax: Option<SyntaxDefinition>,
        global_options_enabled: bool,
        applied_syntaxes: Vec<Option<SyntaxDefinition>>,
        global_option_calls: usize,
        c_cpp_option_calls: usize,
    }

    impl FileTreeAdapter for Tree {
        fn hit_test(&mut self, _x: i32, _y: i32) -> FileTreeHit {
            self.hit.unwrap_or(FileTreeHit {
                zones: 0,
                node_index: None,
            })
        }

        fn resolve_syntax(
            &mut self,
            _definitions: &[SyntaxDefinition],
            _node_label: &str,
        ) -> Option<SyntaxDefinition> {
            self.syntax.clone()
        }

        fn apply_syntax(&mut self, syntax: Option<&SyntaxDefinition>) {
            self.applied_syntaxes.push(syntax.cloned());
        }

        fn should_apply_global_editor_options(&self) -> bool {
            self.global_options_enabled
        }

        fn apply_global_editor_options(&mut self) {
            self.global_option_calls += 1;
        }

        fn disable_c_and_cpp_specific_option(&mut self) {
            self.c_cpp_option_calls += 1;
        }
    }

    fn embedded_window(mode: SaveMode) -> Window {
        Window::new("entity demo is\nend entity;", mode, HdlTarget::default())
    }

    #[test]
    fn fun_014a02a0_activate_synchronizes_the_application_host() {
        let mut window = embedded_window(SaveMode::CurrentTarget);
        let mut host = Lifecycle::default();

        window.activate(&mut host);

        assert_eq!(host.synchronized, 1);
        assert_eq!(window.lifecycle(), LifecycleState::Active);
    }

    #[test]
    fn fun_014a02c0_close_releases_owned_payloads_and_clears_editing() {
        let mut window = embedded_window(SaveMode::CurrentTarget);
        window.set_files(vec![
            FileNode {
                label: "one.vhd".to_owned(),
                content: Some("one".to_owned()),
                state_flags: FILE_NODE_OWNS_PAYLOAD,
                editing: true,
            },
            FileNode {
                label: "two.vhd".to_owned(),
                content: Some("two".to_owned()),
                state_flags: 0,
                editing: true,
            },
        ]);
        window.selected_file = Some(0);

        assert_eq!(window.close(), CloseAction::Release);

        assert!(window.files().iter().all(|node| node.content.is_none()));
        assert!(!window.files()[0].editing);
        assert!(window.files()[1].editing);
        assert_eq!(window.close_action(), Some(CloseAction::Release));
    }

    #[test]
    fn fun_014a0370_create_discovers_syntax_definitions() {
        let definition = SyntaxDefinition {
            name: "VHDL".to_owned(),
            language_name: "VHDL".to_owned(),
        };
        let mut host = Lifecycle {
            definitions: vec![definition.clone()],
            ..Lifecycle::default()
        };
        let mut window = embedded_window(SaveMode::CurrentTarget);

        window.create(&mut host);

        assert_eq!(window.syntax_definitions, [definition]);
        assert_eq!(window.lifecycle(), LifecycleState::Created);
    }

    #[test]
    fn fun_014a03b0_destroy_drops_catalogue_and_clears_registration() {
        let mut host = Lifecycle {
            definitions: vec![SyntaxDefinition {
                name: "VHDL".to_owned(),
                language_name: "VHDL".to_owned(),
            }],
            ..Lifecycle::default()
        };
        let mut window = embedded_window(SaveMode::CurrentTarget);
        window.create(&mut host);

        window.destroy(&mut host);

        assert!(window.syntax_definitions.is_empty());
        assert_eq!(host.cleared, 1);
        assert_eq!(window.lifecycle(), LifecycleState::Destroyed);
    }

    #[test]
    fn fun_014a05a0_key_up_refreshes_cursor_status() {
        let mut window = embedded_window(SaveMode::CurrentTarget);
        let mut status = Status::default();

        window.editor_key_up(&mut status);

        assert_eq!(status.calls, 1);
        assert_eq!(window.cursor_status().map(|value| value.line), Some(1));
    }

    #[test]
    fn fun_014a05c0_mouse_down_refreshes_cursor_status() {
        let mut window = embedded_window(SaveMode::CurrentTarget);
        let mut status = Status::default();

        window.editor_mouse_down(&mut status);

        assert_eq!(status.calls, 1);
        assert_eq!(window.cursor_status().map(|value| value.column), Some(7));
    }

    #[test]
    fn fun_014a05e0_mouse_up_refreshes_cursor_status() {
        let mut window = embedded_window(SaveMode::CurrentTarget);
        let mut status = Status::default();

        window.editor_mouse_up(&mut status);

        assert_eq!(status.calls, 1);
        assert!(
            window
                .cursor_status()
                .is_some_and(|value| value.display_text.contains("03E5"))
        );
    }

    #[test]
    fn fun_014a0600_show_clears_selection_enables_editor_option_and_refreshes_status() {
        let mut window = embedded_window(SaveMode::CurrentTarget);
        window.set_files(vec![FileNode {
            label: "one.vhd".to_owned(),
            content: Some("one".to_owned()),
            state_flags: 0,
            editing: false,
        }]);
        window.selected_file = Some(0);
        let mut status = Status::default();

        window.show(&mut status);

        assert_eq!(window.selected_file(), None);
        assert!(window.editor_show_option_enabled());
        assert_eq!(status.calls, 1);
        assert_eq!(window.lifecycle(), LifecycleState::Visible);
    }

    #[test]
    fn fun_014a08a0_left_label_hit_loads_content_and_applies_syntax() {
        let mut window = embedded_window(SaveMode::CurrentTarget);
        window.set_files(vec![FileNode {
            label: "source.c".to_owned(),
            content: Some("int main(void) {}".to_owned()),
            state_flags: 0,
            editing: true,
        }]);
        let syntax = SyntaxDefinition {
            name: "C".to_owned(),
            language_name: C_AND_CPP_LANGUAGE.to_owned(),
        };
        let mut tree = Tree {
            hit: Some(FileTreeHit {
                zones: 0x08,
                node_index: Some(0),
            }),
            syntax: Some(syntax.clone()),
            global_options_enabled: true,
            ..Tree::default()
        };
        window.set_modified(true);

        assert!(window.file_tree_mouse_down(MouseButton::Left, 4, 8, &mut tree));

        assert_eq!(window.text(), "int main(void) {}");
        assert!(!window.modified());
        assert_eq!(window.selected_file(), Some(0));
        assert_eq!(window.current_syntax(), Some(&syntax));
        assert_eq!(tree.applied_syntaxes, [Some(syntax)]);
        assert_eq!(tree.global_option_calls, 1);
        assert_eq!(tree.c_cpp_option_calls, 1);

        tree.hit = Some(FileTreeHit {
            zones: 0x08,
            node_index: Some(0),
        });
        assert!(!window.file_tree_mouse_down(MouseButton::Right, 4, 8, &mut tree));
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
