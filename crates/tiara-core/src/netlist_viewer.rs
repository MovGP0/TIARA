use std::fs;
use std::io;
use std::ops::Range;
use std::path::{Path, PathBuf};

pub const PASTE_COMMAND_ID: u16 = 0x0302;
pub const HELP_CONTEXT_ID: u32 = 0x1195;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum ViewerMode {
    #[default]
    Standalone,
    Integrated,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum SelectionMode {
    #[default]
    Normal,
    Line,
    Column,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ClipboardPayload {
    pub text: String,
    pub selection_mode: SelectionMode,
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct EditorSnapshot {
    text: String,
    selection: Range<usize>,
    selection_mode: SelectionMode,
    modified: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct NetlistDocument {
    pub text: String,
    pub modified: bool,
    pub selection: Range<usize>,
    pub selection_mode: SelectionMode,
    pub read_only: bool,
    saved_text: Option<String>,
    undo: Vec<EditorSnapshot>,
    redo: Vec<EditorSnapshot>,
}

impl Default for NetlistDocument {
    fn default() -> Self {
        Self {
            text: String::new(),
            modified: false,
            selection: 0..0,
            selection_mode: SelectionMode::Normal,
            read_only: false,
            saved_text: Some(String::new()),
            undo: Vec::new(),
            redo: Vec::new(),
        }
    }
}

impl NetlistDocument {
    pub fn create_new(&mut self) {
        self.text.clear();
        self.modified = true;
        self.selection = 0..0;
        self.selection_mode = SelectionMode::Normal;
        self.saved_text = None;
        self.undo.clear();
        self.redo.clear();
    }

    pub fn load(&mut self, text: String) {
        self.text = text;
        self.modified = true;
        self.selection = 0..0;
        self.selection_mode = SelectionMode::Normal;
        self.saved_text = None;
        self.undo.clear();
        self.redo.clear();
    }

    pub fn record_editor_text(&mut self, text: String) {
        if self.text == text || self.read_only {
            return;
        }
        self.push_undo();
        self.text = text;
        self.selection = self.text.len()..self.text.len();
        self.selection_mode = SelectionMode::Normal;
        self.modified = true;
    }

    pub fn mark_saved(&mut self) {
        self.saved_text = Some(self.text.clone());
        self.modified = false;
    }

    pub fn set_selection(&mut self, selection: Range<usize>, mode: SelectionMode) {
        self.selection = clamped_range(&self.text, selection);
        self.selection_mode = mode;
    }

    pub fn select_all(&mut self) {
        self.selection = 0..self.text.len();
        self.selection_mode = SelectionMode::Normal;
    }

    #[must_use]
    pub fn copy_selection(&self) -> Option<ClipboardPayload> {
        let selected = self.text.get(self.selection.clone())?;
        if selected.is_empty() {
            return None;
        }
        Some(ClipboardPayload {
            text: selected.to_owned(),
            selection_mode: self.selection_mode,
        })
    }

    pub fn cut_selection(&mut self) -> Option<ClipboardPayload> {
        if self.read_only {
            return None;
        }
        let payload = self.copy_selection()?;
        self.replace_selection("");
        Some(payload)
    }

    pub fn delete_selection(&mut self) -> bool {
        if self.read_only || self.selection.is_empty() {
            return false;
        }
        self.replace_selection("");
        true
    }

    pub fn paste(&mut self, payload: &ClipboardPayload) -> bool {
        if self.read_only {
            return false;
        }
        self.replace_selection(&payload.text);
        true
    }

    pub fn undo(&mut self) -> bool {
        if self.read_only {
            return false;
        }
        let Some(snapshot) = self.undo.pop() else {
            self.refresh_modified();
            return false;
        };
        self.redo.push(self.snapshot());
        self.restore(snapshot);
        true
    }

    fn replace_selection(&mut self, replacement: &str) {
        self.push_undo();
        let range = clamped_range(&self.text, self.selection.clone());
        self.text.replace_range(range.clone(), replacement);
        let caret = range.start + replacement.len();
        self.selection = caret..caret;
        self.selection_mode = SelectionMode::Normal;
        self.modified = true;
    }

    fn push_undo(&mut self) {
        self.undo.push(self.snapshot());
        self.redo.clear();
    }

    fn snapshot(&self) -> EditorSnapshot {
        EditorSnapshot {
            text: self.text.clone(),
            selection: self.selection.clone(),
            selection_mode: self.selection_mode,
            modified: self.modified,
        }
    }

    fn restore(&mut self, snapshot: EditorSnapshot) {
        self.text = snapshot.text;
        self.selection = snapshot.selection;
        self.selection_mode = snapshot.selection_mode;
        self.modified = snapshot.modified;
    }

    fn refresh_modified(&mut self) {
        self.modified = self.saved_text.as_deref() != Some(self.text.as_str());
    }
}

fn clamped_range(text: &str, selection: Range<usize>) -> Range<usize> {
    let mut start = selection.start.min(text.len());
    let mut end = selection.end.min(text.len()).max(start);
    while start > 0 && !text.is_char_boundary(start) {
        start -= 1;
    }
    while end > start && !text.is_char_boundary(end) {
        end -= 1;
    }
    start..end
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SavePromptChoice {
    Yes,
    No,
    Cancel,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum GuardDecision {
    Continue { request_save: bool },
    Cancel,
}

#[must_use]
pub const fn evaluate_unsaved_guard(
    modified: bool,
    choice: Option<SavePromptChoice>,
) -> GuardDecision {
    if !modified {
        return GuardDecision::Continue {
            request_save: false,
        };
    }
    match choice {
        Some(SavePromptChoice::Yes) => GuardDecision::Continue { request_save: true },
        Some(SavePromptChoice::No) => GuardDecision::Continue {
            request_save: false,
        },
        Some(SavePromptChoice::Cancel) | None => GuardDecision::Cancel,
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HostSaveRequest {
    pub text: String,
    pub clear_modified_on_success: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum SaveAsRoute {
    SelectFile,
    Host(HostSaveRequest),
}

#[must_use]
pub fn plan_save_as(mode: ViewerMode, text: &str) -> SaveAsRoute {
    match mode {
        ViewerMode::Standalone => SaveAsRoute::SelectFile,
        ViewerMode::Integrated => SaveAsRoute::Host(HostSaveRequest {
            text: text.to_owned(),
            clear_modified_on_success: true,
        }),
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct PrintRequest {
    pub lines: Vec<String>,
    pub font_family: String,
    pub font_size: u16,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct DockRequest {
    pub docked: bool,
    pub synchronize_host_menu: bool,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CloseRequest {
    CloseMacroViewer,
    CloseIntegratedEditor { text: String },
}

#[must_use]
pub fn plan_close(mode: ViewerMode, text: &str) -> CloseRequest {
    match mode {
        ViewerMode::Standalone => CloseRequest::CloseMacroViewer,
        ViewerMode::Integrated => CloseRequest::CloseIntegratedEditor {
            text: text.to_owned(),
        },
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum SearchDirection {
    Backward,
    #[default]
    Forward,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum ReplaceMode {
    #[default]
    One,
    All,
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct SearchOptions {
    pub query: String,
    pub replacement: String,
    pub direction: SearchDirection,
    pub case_sensitive: bool,
    pub whole_word: bool,
    pub replace_mode: ReplaceMode,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SearchOutcome {
    Found,
    Replaced(usize),
    NotFound,
}

pub fn find_next(document: &mut NetlistDocument, options: &SearchOptions) -> SearchOutcome {
    let Some(found) = find_range(&document.text, &document.selection, options) else {
        return SearchOutcome::NotFound;
    };
    document.selection = found;
    SearchOutcome::Found
}

pub fn replace_matches(document: &mut NetlistDocument, options: &SearchOptions) -> SearchOutcome {
    if document.read_only || options.query.is_empty() {
        return SearchOutcome::NotFound;
    }
    if options.replace_mode == ReplaceMode::One {
        let Some(found) = find_range(&document.text, &document.selection, options) else {
            return SearchOutcome::NotFound;
        };
        document.selection = found;
        document.replace_selection(&options.replacement);
        return SearchOutcome::Replaced(1);
    }

    let mut count = 0;
    let mut cursor = 0;
    let mut ranges = Vec::new();
    let mut probe = document.clone();
    probe.selection = 0..0;
    while let Some(range) = find_range(&probe.text, &(cursor..cursor), options) {
        if range.start < cursor {
            break;
        }
        cursor = range.end.max(range.start + 1);
        ranges.push(range);
        count += 1;
        if cursor >= probe.text.len() {
            break;
        }
    }
    if count == 0 {
        return SearchOutcome::NotFound;
    }
    document.push_undo();
    for range in ranges.into_iter().rev() {
        document.text.replace_range(range, &options.replacement);
    }
    document.selection = document.text.len()..document.text.len();
    document.modified = true;
    SearchOutcome::Replaced(count)
}

fn find_range(text: &str, current: &Range<usize>, options: &SearchOptions) -> Option<Range<usize>> {
    if options.query.is_empty() {
        return None;
    }
    let haystack = if options.case_sensitive {
        text.to_owned()
    } else {
        text.to_ascii_lowercase()
    };
    let needle = if options.case_sensitive {
        options.query.clone()
    } else {
        options.query.to_ascii_lowercase()
    };
    let candidate = match options.direction {
        SearchDirection::Forward => {
            let start = current.end.min(haystack.len());
            haystack[start..]
                .match_indices(&needle)
                .map(|(index, _)| start + index)
                .find(|index| !options.whole_word || is_whole_word(&haystack, *index, needle.len()))
        }
        SearchDirection::Backward => {
            let end = current.start.min(haystack.len());
            haystack[..end]
                .match_indices(&needle)
                .map(|(index, _)| index)
                .filter(|index| {
                    !options.whole_word || is_whole_word(&haystack, *index, needle.len())
                })
                .last()
        }
    }?;
    Some(candidate..candidate + needle.len())
}

fn is_whole_word(text: &str, start: usize, length: usize) -> bool {
    let before = text[..start].chars().next_back();
    let after = text[start + length..].chars().next();
    !before.is_some_and(is_word_character) && !after.is_some_and(is_word_character)
}

const fn is_word_character(character: char) -> bool {
    character.is_ascii_alphanumeric() || character == '_'
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CompileKind {
    Compile,
    ElectricalRulesCheck,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum WarningSource {
    Hidden,
    Visible,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ThreadWindowPolicy {
    KeepEnabled,
    DisableDuringCompile,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CompilerContextPolicy {
    KeepCurrent,
    InstallAndRestore,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct CompileRequest {
    pub kind: CompileKind,
    pub source: String,
    pub warning_source: WarningSource,
    pub thread_windows: ThreadWindowPolicy,
    pub compiler_context: CompilerContextPolicy,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Diagnostic {
    pub message: String,
    pub source_line: Option<usize>,
    pub source_identifier: Option<String>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CaretPosition {
    pub line: usize,
    pub column: usize,
}

impl Default for CaretPosition {
    fn default() -> Self {
        Self { line: 1, column: 1 }
    }
}

impl CaretPosition {
    #[must_use]
    pub fn panel_text(self) -> String {
        format!("Line:{} Col:{}", self.line, self.column)
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DiagnosticNavigation {
    pub line: usize,
    pub scroll_into_view: bool,
    pub highlight_special_line: bool,
}

#[must_use]
pub const fn navigate_diagnostic(diagnostic: &Diagnostic) -> Option<DiagnosticNavigation> {
    match diagnostic.source_line {
        Some(line) => Some(DiagnosticNavigation {
            line,
            scroll_into_view: true,
            highlight_special_line: true,
        }),
        None => None,
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SpecialTextTarget {
    pub document_identifier: String,
    pub needle: String,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct TextReveal {
    pub caret: usize,
    pub selection: Range<usize>,
    pub focus_editor: bool,
    pub refresh_selection: bool,
}

#[must_use]
pub fn reveal_special_text_target(
    editor_identifier: &str,
    editor_text: &str,
    target: &SpecialTextTarget,
) -> Option<TextReveal> {
    if editor_identifier != target.document_identifier {
        return None;
    }
    let caret = editor_text.find(&target.needle)?;
    let selection_end = editor_text[caret..]
        .chars()
        .next()
        .map_or(caret, |character| caret + character.len_utf8());
    Some(TextReveal {
        caret,
        selection: caret..selection_end,
        focus_editor: true,
        refresh_selection: true,
    })
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct HelpRequest {
    pub base_file: PathBuf,
    pub context_id: u32,
}

/// Reads a Netlist Viewer document through the Rust standard library.
///
/// # Errors
///
/// Returns the underlying file or UTF-8 decoding error.
pub fn read_netlist(path: &Path) -> io::Result<String> {
    fs::read_to_string(path)
}

/// Writes a Netlist Viewer document through the Rust standard library.
///
/// # Errors
///
/// Returns the underlying file-system error.
pub fn write_netlist(path: &Path, text: &str) -> io::Result<()> {
    fs::write(path, text)
}

#[cfg(test)]
mod tests {
    use super::{
        ClipboardPayload, Diagnostic, GuardDecision, NetlistDocument, ReplaceMode,
        SavePromptChoice, SearchOptions, SearchOutcome, SelectionMode, SpecialTextTarget,
        ViewerMode, evaluate_unsaved_guard, find_next, navigate_diagnostic, plan_close,
        plan_save_as, replace_matches, reveal_special_text_target,
    };

    #[test]
    fn unsaved_guard_continues_after_yes_without_waiting_for_save_result() {
        assert_eq!(
            evaluate_unsaved_guard(true, Some(SavePromptChoice::Yes)),
            GuardDecision::Continue { request_save: true }
        );
        assert_eq!(
            evaluate_unsaved_guard(true, Some(SavePromptChoice::Cancel)),
            GuardDecision::Cancel
        );
    }

    #[test]
    fn new_and_loaded_documents_remain_modified_as_recovered() {
        let mut document = NetlistDocument::default();
        document.create_new();
        assert!(document.modified);
        document.load("R1 1 0 1k".to_owned());
        assert!(document.modified);
    }

    #[test]
    fn cut_copies_before_one_grouped_delete_and_undo_restores_state() {
        let mut document = NetlistDocument::default();
        document.record_editor_text("abcdef".to_owned());
        document.set_selection(1..4, SelectionMode::Column);
        let payload = document.cut_selection().expect("selection");
        assert_eq!(
            payload,
            ClipboardPayload {
                text: "bcd".to_owned(),
                selection_mode: SelectionMode::Column,
            }
        );
        assert_eq!(document.text, "aef");
        assert!(document.undo());
        assert_eq!(document.text, "abcdef");
        assert_eq!(document.selection, 1..4);
    }

    #[test]
    fn read_only_and_empty_selection_operations_are_no_ops() {
        let mut document = NetlistDocument {
            text: "abc".to_owned(),
            read_only: true,
            ..NetlistDocument::default()
        };
        document.set_selection(0..2, SelectionMode::Normal);
        assert!(document.cut_selection().is_none());
        assert!(!document.delete_selection());
        assert!(!document.paste(&ClipboardPayload {
            text: "x".to_owned(),
            selection_mode: SelectionMode::Normal,
        }));
        assert_eq!(document.text, "abc");
    }

    #[test]
    fn find_and_replace_honor_case_whole_word_and_repeat_position() {
        let mut document = NetlistDocument {
            text: "R1 r10 r1".to_owned(),
            ..NetlistDocument::default()
        };
        let options = SearchOptions {
            query: "r1".to_owned(),
            replacement: "X".to_owned(),
            case_sensitive: false,
            whole_word: true,
            ..SearchOptions::default()
        };
        assert_eq!(find_next(&mut document, &options), SearchOutcome::Found);
        assert_eq!(document.selection, 0..2);
        assert_eq!(find_next(&mut document, &options), SearchOutcome::Found);
        assert_eq!(document.selection, 7..9);
        let all = SearchOptions {
            replace_mode: ReplaceMode::All,
            ..options
        };
        document.selection = 0..0;
        assert_eq!(
            replace_matches(&mut document, &all),
            SearchOutcome::Replaced(2)
        );
        assert_eq!(document.text, "X r10 X");
    }

    #[test]
    fn mode_dependent_save_and_close_routes_remain_typed() {
        assert!(matches!(
            plan_save_as(ViewerMode::Standalone, "text"),
            super::SaveAsRoute::SelectFile
        ));
        assert!(matches!(
            plan_save_as(ViewerMode::Integrated, "text"),
            super::SaveAsRoute::Host(_)
        ));
        assert!(matches!(
            plan_close(ViewerMode::Integrated, "text"),
            super::CloseRequest::CloseIntegratedEditor { .. }
        ));
    }

    #[test]
    fn diagnostic_navigation_and_special_text_reveal_are_safe_no_ops() {
        let diagnostic = Diagnostic {
            message: "line 4".to_owned(),
            source_line: Some(4),
            source_identifier: None,
        };
        assert_eq!(
            navigate_diagnostic(&diagnostic).expect("navigation").line,
            4
        );
        let target = SpecialTextTarget {
            document_identifier: "macro-a".to_owned(),
            needle: "R1".to_owned(),
        };
        assert!(reveal_special_text_target("macro-b", "R1", &target).is_none());
        let reveal = reveal_special_text_target("macro-a", "xx R1", &target).expect("reveal");
        assert_eq!(reveal.caret, 3);
        assert_eq!(reveal.selection, 3..4);
    }
}
