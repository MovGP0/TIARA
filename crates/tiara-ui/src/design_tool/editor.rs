//! Headless text editor and terminal state for the Design Tool.

use std::ops::Range;

use super::adapters::{ClipboardContent, DesignToolClipboard, SelectionMode};

#[derive(Debug)]
pub struct ProgramEditor {
    content: iced::widget::text_editor::Content,
    text: String,
    selection: Range<usize>,
    undo: Vec<String>,
    redo: Vec<String>,
    read_only: bool,
    modified: bool,
}

impl Default for ProgramEditor {
    fn default() -> Self {
        Self {
            content: iced::widget::text_editor::Content::new(),
            text: String::new(),
            selection: 0..0,
            undo: Vec::new(),
            redo: Vec::new(),
            read_only: false,
            modified: false,
        }
    }
}

impl ProgramEditor {
    pub fn perform(&mut self, action: iced::widget::text_editor::Action) {
        if self.read_only {
            return;
        }
        let previous = self.text.clone();
        self.content.perform(action);
        self.text = self.content.text();
        if self.text != previous {
            self.undo.push(previous);
            self.redo.clear();
            self.modified = true;
            self.selection = self.text.len()..self.text.len();
        }
    }

    pub fn replace_text(&mut self, text: impl Into<String>, modified: bool) {
        self.text = text.into();
        self.content = iced::widget::text_editor::Content::with_text(&self.text);
        self.selection = 0..0;
        self.undo.clear();
        self.redo.clear();
        self.modified = modified;
    }

    pub fn set_selection(&mut self, selection: Range<usize>) {
        self.selection = self.valid_selection(selection);
    }

    pub fn select_all(&mut self) {
        self.selection = 0..self.text.len();
    }

    pub fn undo(&mut self) {
        if self.read_only {
            return;
        }
        if let Some(previous) = self.undo.pop() {
            self.redo.push(self.text.clone());
            self.set_text_preserving_history(previous);
            self.modified = true;
        }
    }

    /// Copies the current selection without changing editor state.
    ///
    /// # Errors
    ///
    /// Returns an error when the clipboard rejects a nonempty selection.
    pub fn copy(&self, clipboard: &mut impl DesignToolClipboard) -> Result<(), String> {
        let selection = self.valid_selection(self.selection.clone());
        if selection.is_empty() {
            return Ok(());
        }
        clipboard.write(ClipboardContent {
            text: self.text[selection].to_owned(),
            selection_mode: SelectionMode::NORMAL,
        })
    }

    /// Copies and removes the current selection as one logical edit.
    ///
    /// # Errors
    ///
    /// Returns an error when clipboard publication fails. Text is not deleted on error.
    pub fn cut(&mut self, clipboard: &mut impl DesignToolClipboard) -> Result<(), String> {
        if self.read_only || self.selection.is_empty() {
            return Ok(());
        }
        self.copy(clipboard)?;
        self.delete_selection();
        Ok(())
    }

    /// Pastes standard text over the current selection.
    ///
    /// # Errors
    ///
    /// Returns an error when clipboard text cannot be read.
    pub fn paste(&mut self, clipboard: &mut impl DesignToolClipboard) -> Result<(), String> {
        if self.read_only {
            return Ok(());
        }
        if let Some(content) = clipboard.read()? {
            self.insert(&content.text);
        }
        Ok(())
    }

    pub fn delete_selection(&mut self) {
        if self.read_only || self.selection.is_empty() {
            return;
        }
        let selection = self.valid_selection(self.selection.clone());
        if selection.is_empty() {
            return;
        }
        self.record_edit();
        self.text.replace_range(selection.clone(), "");
        self.selection = selection.start..selection.start;
        self.refresh_content();
    }

    pub fn insert(&mut self, value: &str) {
        if self.read_only {
            return;
        }
        let selection = self.valid_selection(self.selection.clone());
        self.record_edit();
        self.text.replace_range(selection.clone(), value);
        let caret = selection.start.saturating_add(value.len());
        self.selection = caret..caret;
        self.refresh_content();
    }

    #[must_use]
    pub fn find(&self, needle: &str, from: usize) -> Option<Range<usize>> {
        if needle.is_empty() {
            return None;
        }
        let start = self.floor_char_boundary(from.min(self.text.len()));
        self.text[start..]
            .find(needle)
            .map(|offset| start + offset..start + offset + needle.len())
    }

    pub fn replace_next(&mut self, needle: &str, replacement: &str, from: usize) -> bool {
        let Some(found) = self.find(needle, from) else {
            return false;
        };
        self.set_selection(found);
        self.insert(replacement);
        true
    }

    #[must_use]
    pub fn text(&self) -> &str {
        &self.text
    }

    #[must_use]
    pub const fn content(&self) -> &iced::widget::text_editor::Content {
        &self.content
    }

    #[must_use]
    pub const fn selection(&self) -> &Range<usize> {
        &self.selection
    }

    pub const fn set_modified(&mut self, modified: bool) {
        self.modified = modified;
    }

    fn record_edit(&mut self) {
        self.undo.push(self.text.clone());
        self.redo.clear();
        self.modified = true;
    }

    fn set_text_preserving_history(&mut self, text: String) {
        self.text = text;
        self.selection = self.text.len()..self.text.len();
        self.refresh_content();
    }

    fn refresh_content(&mut self) {
        self.content = iced::widget::text_editor::Content::with_text(&self.text);
    }

    fn valid_selection(&self, selection: Range<usize>) -> Range<usize> {
        let start = self.floor_char_boundary(selection.start.min(self.text.len()));
        let end = self.floor_char_boundary(selection.end.min(self.text.len()));
        start.min(end)..start.max(end)
    }

    fn floor_char_boundary(&self, mut index: usize) -> usize {
        while index > 0 && !self.text.is_char_boundary(index) {
            index -= 1;
        }
        index
    }
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct TerminalState {
    text: String,
    selection: Range<usize>,
}

impl TerminalState {
    pub fn clear_and_prompt(&mut self) {
        ">>>  ".clone_into(&mut self.text);
        self.selection = self.text.len()..self.text.len();
    }

    pub fn select_all(&mut self) {
        self.selection = 0..self.text.len();
    }

    /// Selects and copies all terminal text.
    ///
    /// # Errors
    ///
    /// Returns an error when the clipboard rejects nonempty terminal text.
    pub fn copy_all(&mut self, clipboard: &mut impl DesignToolClipboard) -> Result<(), String> {
        self.select_all();
        if self.text.is_empty() {
            return Ok(());
        }
        clipboard.write(ClipboardContent {
            text: self.text.clone(),
            selection_mode: SelectionMode::NORMAL,
        })
    }

    pub fn replace_text(&mut self, text: impl Into<String>) {
        self.text = text.into();
        self.selection = 0..0;
    }

    #[must_use]
    pub fn text(&self) -> &str {
        &self.text
    }

    #[must_use]
    pub const fn selection(&self) -> &Range<usize> {
        &self.selection
    }
}
