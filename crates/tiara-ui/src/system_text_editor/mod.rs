//! Iced state and platform adapters for the recovered System Text Editor.

use iced::widget::text::Wrapping;
use iced::widget::{button, column, row, text, text_editor};
use iced::{Element, Length, Task};
use rfd::AsyncFileDialog;
use std::fmt;
use std::path::{Path, PathBuf};
use std::sync::Arc;
use tiara_core::equation_style::{
    EquationAutoformatSettings, EquationBounds, EquationFont, EquationStyle,
    EquationStyleSettingsResult,
};

pub const TITLE: &str = "System Text Editor";
pub const TEQ_DEFAULT_FILE_NAME: &str = "tinaequ.teq";
pub const TEQ_EXTENSION: &str = "teq";
pub const TEQ_FILTER_NAME: &str = "Tina equation (*.teq)";
pub const LIBRARY_EVALUATION: &str = "iced supplies editing, selection, tasks, and native clipboard commands; rfd supplies native open/save dialogs; std::fs supplies byte I/O; std::char::decode_utf16 supplies BOM-aware UTF-16 decoding. Rendering and history conversion remain typed adapters because they use application-specific semantics.";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum EditorMode {
    #[default]
    View,
    Edit,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum Background {
    #[default]
    Transparent,
    Opaque([u8; 4]),
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum BorderStyle {
    #[default]
    None,
    Solid,
    Dotted,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum ScrollbarMode {
    #[default]
    Both,
    Vertical,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PopupAnchor {
    pub x: i32,
    pub y: i32,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PopupMenu {
    ActionLinks(PopupAnchor),
    TextTools(PopupAnchor),
}

#[derive(Debug, Clone, PartialEq)]
pub struct SystemText {
    pub text: String,
    pub style: EquationStyle,
    pub background: Background,
    pub border: BorderStyle,
    pub popup_text_mode: u8,
}

impl Default for SystemText {
    fn default() -> Self {
        Self {
            text: String::new(),
            style: EquationStyle::default(),
            background: Background::Transparent,
            border: BorderStyle::None,
            popup_text_mode: 0,
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct Preview {
    pub text: String,
    pub bounds: EquationBounds,
    pub generation: u64,
}

#[derive(Debug, Clone)]
pub enum Message {
    EditorAction(text_editor::Action),
    ViewMode,
    EditMode,
    Insert(String),
    Open,
    Opened(Result<Option<(PathBuf, String)>, String>),
    Save,
    Saved(Result<Option<PathBuf>, String>),
    CopyAll,
    Cut,
    Copy,
    Paste,
    PasteText(Option<String>),
    SelectAll,
    ClipboardWritten,
    ToggleWrap,
    TogglePopupText,
    Accept,
}

pub trait HistoryTextTransformer {
    /// Converts the current memo text to the recovered history-text layout.
    ///
    /// # Errors
    ///
    /// Returns an error when the application-specific conversion cannot finish.
    fn transform(&self, text: &str, font: &EquationFont) -> Result<String, String>;
}

/// Modal adapter used by owners of a [`SystemText`] value.
pub trait SystemTextDialogRunner {
    fn show_modal(&mut self, initial: SystemText) -> (bool, SystemText);
}

/// Ports Ghidra `FUN_0149e8d0` at `0x0149E8D0`.
///
/// The owned runner is dropped on every return path. This maps the recovered
/// unconditional dialog destruction to Rust RAII.
#[must_use]
pub fn edit_system_text(
    original: &mut SystemText,
    mut runner: impl SystemTextDialogRunner,
) -> bool {
    let (accepted, staged) = runner.show_modal(original.clone());
    if accepted {
        original.clone_from(&staged);
    }
    accepted
}

#[derive(Debug)]
pub struct Window {
    document: text_editor::Content,
    staged: SystemText,
    autoformat: EquationAutoformatSettings,
    autoformat_cache_generation: u64,
    mode: EditorMode,
    preview: Preview,
    wrap: bool,
    popup_text_checked: bool,
    history_text_checked: bool,
    popup: Option<PopupMenu>,
    accepted: Option<SystemText>,
    last_error: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self::new(SystemText::default(), EquationAutoformatSettings::default())
    }
}

impl Window {
    /// Ports Ghidra `FUN_0146a9a0` at `0x0146A9A0`.
    #[must_use]
    pub fn new(source: SystemText, autoformat: EquationAutoformatSettings) -> Self {
        let document = text_editor::Content::with_text(&source.text);
        let popup_text_checked = source.popup_text_mode == 3;
        Self {
            document,
            staged: source,
            autoformat,
            autoformat_cache_generation: 0,
            mode: EditorMode::View,
            preview: Preview::default(),
            wrap: false,
            popup_text_checked,
            history_text_checked: false,
            popup: None,
            accepted: None,
            last_error: None,
        }
    }

    #[must_use]
    pub const fn staged(&self) -> &SystemText {
        &self.staged
    }

    #[must_use]
    pub const fn mode(&self) -> EditorMode {
        self.mode
    }

    #[must_use]
    pub const fn preview(&self) -> &Preview {
        &self.preview
    }

    #[must_use]
    pub const fn autoformat(&self) -> &EquationAutoformatSettings {
        &self.autoformat
    }

    #[must_use]
    pub const fn accepted(&self) -> Option<&SystemText> {
        self.accepted.as_ref()
    }

    #[must_use]
    pub const fn last_error(&self) -> Option<&String> {
        self.last_error.as_ref()
    }

    #[must_use]
    pub fn memo_text(&self) -> String {
        normalized_content_text(&self.document)
    }

    #[must_use]
    pub const fn scrollbar_mode(&self) -> ScrollbarMode {
        if self.wrap {
            ScrollbarMode::Vertical
        } else {
            ScrollbarMode::Both
        }
    }

    #[must_use]
    pub const fn popup(&self) -> Option<PopupMenu> {
        self.popup
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::EditorAction(action) => {
                self.document.perform(action);
                self.invalidate_acceptance();
                Task::none()
            }
            Message::ViewMode => {
                self.show_view();
                Task::none()
            }
            Message::EditMode => {
                self.show_edit();
                Task::none()
            }
            Message::Insert(value) => {
                self.insert_markup(&value);
                Task::none()
            }
            Message::Open => open_teq_task(),
            Message::Opened(result) => {
                match result {
                    Ok(Some((_path, text))) => self.load_teq_text(&text),
                    Ok(None) => {}
                    Err(error) => self.last_error = Some(error),
                }
                Task::none()
            }
            Message::Save => save_teq_task(self.memo_text()),
            Message::Saved(result) => {
                if let Err(error) = result {
                    self.last_error = Some(error);
                }
                Task::none()
            }
            Message::CopyAll => self.copy_all_native(),
            Message::Cut => self.cut_native(),
            Message::Copy => self.copy_native(),
            Message::Paste => iced::clipboard::read().map(Message::PasteText),
            Message::PasteText(text) => {
                if let Some(text) = text {
                    self.paste_text(text);
                }
                Task::none()
            }
            Message::SelectAll => {
                self.select_all();
                Task::none()
            }
            Message::ClipboardWritten => Task::none(),
            Message::ToggleWrap => {
                self.toggle_wrap();
                Task::none()
            }
            Message::TogglePopupText => {
                self.toggle_popup_text();
                Task::none()
            }
            Message::Accept => {
                self.accept();
                Task::none()
            }
        }
    }

    /// Ports Ghidra `FUN_014695a0` at `0x014695A0`.
    pub fn insert_markup(&mut self, markup: &str) {
        if self.document.selection().is_some() {
            self.document
                .perform(text_editor::Action::Move(text_editor::Motion::Left));
        }
        self.document
            .perform(text_editor::Action::Edit(text_editor::Edit::Paste(
                Arc::new(markup.to_owned()),
            )));
        self.invalidate_acceptance();
    }

    /// Ports Ghidra `FUN_01469770` at `0x01469770`.
    pub fn insert_fraction(&mut self) {
        self.insert_markup("\\f(n,d)");
    }

    /// Ports Ghidra `FUN_014697b0` at `0x014697B0`.
    pub fn insert_exponent(&mut self) {
        self.insert_markup("\\e(x,2)");
    }

    /// Ports Ghidra `FUN_014697f0` at `0x014697F0`.
    pub fn insert_u_circumflex(&mut self) {
        self.insert_markup("\\o(U,^)");
    }

    /// Ports Ghidra `FUN_01469830` at `0x01469830`.
    pub fn insert_index(&mut self) {
        self.insert_markup("\\i(a,i)");
    }

    /// Ports Ghidra `FUN_01469870` at `0x01469870`.
    pub fn insert_beta(&mut self) {
        self.insert_markup("\\s(b)");
    }

    /// Ports Ghidra `FUN_014698a0` at `0x014698A0`.
    pub fn insert_external_link(&mut self) {
        self.insert_markup("\\a(Link,http://www.)");
    }

    /// Ports Ghidra `FUN_014698f0` at `0x014698F0`.
    pub fn insert_temperature_analysis_link(&mut self, caption: &str) {
        self.insert_action_link(caption, "tdl://analysis.dc.temperature");
    }

    /// Ports Ghidra `FUN_01469e60` at `0x01469E60`.
    pub fn insert_configuration_link(&mut self, caption: &str) {
        self.insert_action_link(caption, "tdl://component.config:<label>:<cnf file path>");
    }

    /// Ports Ghidra `FUN_0146a010` at `0x0146A010`.
    pub fn insert_main_parameter_link(&mut self, caption: &str) {
        self.insert_action_link(
            caption,
            "tdl://set:{component_label|TEMP|global_par}:{value}",
        );
    }

    /// Ports Ghidra `FUN_0146a610` at `0x0146A610`.
    pub fn choose_font(&mut self, selected: Option<EquationFont>, host_requires_accept: bool) {
        if let Some(font) = selected {
            self.staged.style.font = font;
            if host_requires_accept {
                self.accept();
            }
        }
        self.refresh_preview();
    }

    /// Ports Ghidra `FUN_0146a6e0` at `0x0146A6E0`.
    pub fn show_view(&mut self) {
        self.mode = EditorMode::View;
        self.refresh_preview();
    }

    /// Ports Ghidra `FUN_0146a730` at `0x0146A730`.
    pub const fn show_edit(&mut self) {
        self.mode = EditorMode::Edit;
    }

    /// Ports Ghidra `FUN_0146a770` at `0x0146A770`.
    pub fn insert_ac_transfer_link(&mut self, caption: &str) {
        self.insert_action_link(caption, "tdl://analysis.ac.transfer");
    }

    /// Ports Ghidra `FUN_0146ab60` at `0x0146AB60`.
    ///
    /// # Errors
    ///
    /// Returns the history adapter error when optional history conversion fails.
    pub fn synchronize_on_close(
        &mut self,
        transformer: Option<&dyn HistoryTextTransformer>,
    ) -> Result<(), String> {
        let memo = self.memo_text();
        self.staged.text.clone_from(&memo);
        self.staged.popup_text_mode = if self.popup_text_checked { 3 } else { 0 };
        if self.history_text_checked && !memo.is_empty() {
            if let Some(transformer) = transformer {
                self.staged.text = transformer.transform(&memo, &self.staged.style.font)?;
            }
        }
        Ok(())
    }

    /// Ports Ghidra `FUN_0146af40` at `0x0146AF40`.
    pub fn refresh_preview(&mut self) {
        self.staged.text = self.memo_text();
        let visible_text = renderable_text(&self.staged.text);
        let bounds = measure_preview(&visible_text, &self.staged.style);
        self.staged.style.cached_bounds = None;
        self.preview = Preview {
            text: visible_text,
            bounds,
            generation: self.preview.generation.saturating_add(1),
        };
    }

    /// Ports Ghidra `FUN_0146b040` at `0x0146B040`.
    pub fn memo_exit(&mut self) {
        self.staged.text = self.memo_text();
    }

    /// Ports Ghidra `FUN_0146b080` at `0x0146B080`.
    pub fn apply_properties(&mut self, result: Option<EquationStyleSettingsResult>) {
        let Some(result) = result else {
            return;
        };
        self.autoformat = result.autoformat;
        self.autoformat_cache_generation = self.autoformat_cache_generation.saturating_add(1);
        self.staged.style = result.style;
        self.invalidate_acceptance();
    }

    /// Ports Ghidra `FUN_0146b840` at `0x0146B840`.
    pub fn insert_transient_link(&mut self, caption: &str) {
        self.insert_action_link(caption, "tdl://analysis.tr");
    }

    /// Ports Ghidra `FUN_0146b9c0` at `0x0146B9C0`.
    pub fn select_transparent_background(&mut self) {
        self.staged.background = Background::Transparent;
        self.invalidate_acceptance();
    }

    /// Ports Ghidra `FUN_0146ba00` at `0x0146BA00`.
    pub fn select_opaque_background(&mut self, selected_color: Option<[u8; 4]>) {
        let old_color = match self.staged.background {
            Background::Opaque(color) => color,
            Background::Transparent => [255, 255, 255, 255],
        };
        self.staged.background = Background::Opaque(selected_color.unwrap_or(old_color));
        self.invalidate_acceptance();
    }

    /// Ports Ghidra `FUN_0146baa0` at `0x0146BAA0`.
    pub fn insert_network_link(&mut self, caption: &str) {
        self.insert_action_link(caption, "tdl://analysis.ac.network");
    }

    /// Ports Ghidra `FUN_0146bc30` at `0x0146BC30`.
    pub fn insert_noise_link(&mut self, caption: &str) {
        self.insert_action_link(caption, "tdl://analysis.noise");
    }

    /// Ports Ghidra `FUN_0146bdb0` at `0x0146BDB0`.
    pub fn select_no_border(&mut self) {
        self.staged.border = BorderStyle::None;
        self.invalidate_acceptance();
    }

    /// Ports Ghidra `FUN_0146be00` at `0x0146BE00`.
    pub fn select_solid_border(&mut self) {
        self.staged.border = BorderStyle::Solid;
        self.invalidate_acceptance();
    }

    /// Ports Ghidra `FUN_0146be50` at `0x0146BE50`.
    pub fn insert_dc_transfer_link(&mut self, caption: &str) {
        self.insert_action_link(caption, "tdl://analysis.dc.transfer");
    }

    /// Ports Ghidra `FUN_0146bfe0` at `0x0146BFE0`.
    pub const fn open_action_links(
        &mut self,
        parent: PopupAnchor,
        button_left: i32,
        button_width: i32,
    ) {
        self.popup = Some(PopupMenu::ActionLinks(PopupAnchor {
            x: parent
                .x
                .saturating_add(button_left)
                .saturating_add(button_width),
            y: parent.y,
        }));
    }

    /// Ports Ghidra `FUN_0146c070` at `0x0146C070`.
    pub fn insert_digital_link(&mut self, caption: &str) {
        self.insert_action_link(caption, "tdl://analysis.dig");
    }

    /// Ports Ghidra `FUN_0146c1f0` at `0x0146C1F0`.
    pub fn select_dotted_border(&mut self) {
        self.staged.border = BorderStyle::Dotted;
        self.invalidate_acceptance();
    }

    /// Ports Ghidra `FUN_0146c240` at `0x0146C240`.
    pub const fn open_text_tools(
        &mut self,
        parent: PopupAnchor,
        button_left: i32,
        button_width: i32,
    ) {
        self.popup = Some(PopupMenu::TextTools(PopupAnchor {
            x: parent
                .x
                .saturating_add(button_left)
                .saturating_add(button_width),
            y: parent.y,
        }));
    }

    /// Ports Ghidra `FUN_0146c2d0` at `0x0146C2D0`.
    ///
    /// # Errors
    ///
    /// Returns an I/O or text-decoding error when the selected file is invalid.
    pub fn load_teq(&mut self, path: &Path) -> Result<(), TeqError> {
        if path.as_os_str().is_empty() {
            return Ok(());
        }
        let text = decode_teq(&std::fs::read(path)?)?;
        self.load_teq_text(&text);
        Ok(())
    }

    /// Ports Ghidra `FUN_0146c460` at `0x0146C460`.
    pub fn save_teq(&self) -> Task<Message> {
        save_teq_task(self.memo_text())
    }

    /// Ports Ghidra `FUN_0146c470` at `0x0146C470`.
    ///
    /// # Errors
    ///
    /// Returns an I/O error when the live memo text cannot be written.
    pub fn save_teq_as(&self, path: &Path) -> Result<(), TeqError> {
        if path.as_os_str().is_empty() {
            return Ok(());
        }
        std::fs::write(path, self.memo_text())?;
        Ok(())
    }

    /// Ports Ghidra `FUN_0146c5d0` at `0x0146C5D0`.
    pub fn accept(&mut self) {
        self.staged.text = self.memo_text();
        self.staged.popup_text_mode = if self.popup_text_checked { 3 } else { 0 };
        self.staged.style.cached_bounds = None;
        self.accepted = Some(self.staged.clone());
    }

    /// Ports Ghidra `FUN_0146c5f0` at `0x0146C5F0`.
    pub fn copy_all_native(&mut self) -> Task<Message> {
        self.select_all();
        let selection = self.document.selection().unwrap_or_default();
        iced::clipboard::write(selection)
    }

    /// Ports Ghidra `FUN_0146c620` at `0x0146C620`.
    pub const fn toggle_wrap(&mut self) {
        self.wrap = !self.wrap;
    }

    /// Ports Ghidra `FUN_0146c690` at `0x0146C690`.
    pub fn cut_native(&mut self) -> Task<Message> {
        let Some(selection) = self.document.selection() else {
            return Task::none();
        };
        self.document
            .perform(text_editor::Action::Edit(text_editor::Edit::Backspace));
        self.invalidate_acceptance();
        iced::clipboard::write(selection)
    }

    /// Ports Ghidra `FUN_0146c6b0` at `0x0146C6B0`.
    pub fn copy_native(&self) -> Task<Message> {
        let Some(selection) = self.document.selection() else {
            return Task::none();
        };
        iced::clipboard::write(selection)
    }

    /// Ports Ghidra `FUN_0146c6d0` at `0x0146C6D0`.
    pub fn paste_text(&mut self, text: String) {
        self.document
            .perform(text_editor::Action::Edit(text_editor::Edit::Paste(
                Arc::new(text),
            )));
        self.invalidate_acceptance();
    }

    /// Ports Ghidra `FUN_0146c6f0` at `0x0146C6F0`.
    pub fn toggle_popup_text(&mut self) {
        self.popup_text_checked = !self.popup_text_checked;
        self.invalidate_acceptance();
    }

    /// Ports Ghidra `FUN_0146c880` at `0x0146C880`.
    pub fn insert_fourier_link(&mut self, caption: &str) {
        self.insert_action_link(caption, "tdl://analysis.fourier.spectrum");
    }

    /// Ports Ghidra `FUN_0146ca10` at `0x0146CA10`.
    pub fn select_all(&mut self) {
        self.document.perform(text_editor::Action::SelectAll);
    }

    pub const fn set_history_text_checked(&mut self, checked: bool) {
        self.history_text_checked = checked;
    }

    pub const fn dismiss_popup(&mut self) {
        self.popup = None;
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let wrapping = if self.wrap {
            Wrapping::Word
        } else {
            Wrapping::None
        };
        let body: Element<'_, Message> = match self.mode {
            EditorMode::Edit => text_editor(&self.document)
                .on_action(Message::EditorAction)
                .wrapping(wrapping)
                .height(Length::Fill)
                .into(),
            EditorMode::View => text(&self.preview.text).wrapping(wrapping).into(),
        };
        column![
            row![
                button("View").on_press(Message::ViewMode),
                button("Edit").on_press(Message::EditMode),
                button("Open").on_press(Message::Open),
                button("Save").on_press(Message::Save),
                button("OK").on_press(Message::Accept),
            ]
            .spacing(8),
            body,
        ]
        .spacing(8)
        .into()
    }

    fn insert_action_link(&mut self, caption: &str, target: &str) {
        let caption = caption.replace('&', "");
        self.insert_markup(&format!("\\a({caption},{target})"));
    }

    fn load_teq_text(&mut self, text: &str) {
        self.document = text_editor::Content::with_text(text);
        self.invalidate_acceptance();
        if self.mode == EditorMode::View {
            self.show_view();
        }
    }

    fn invalidate_acceptance(&mut self) {
        self.accepted = None;
        self.last_error = None;
    }
}

#[derive(Debug)]
pub enum TeqError {
    Io(std::io::Error),
    InvalidUtf8(std::string::FromUtf8Error),
    InvalidUtf16(std::char::DecodeUtf16Error),
    OddUtf16ByteCount,
}

impl fmt::Display for TeqError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::Io(error) => error.fmt(formatter),
            Self::InvalidUtf8(error) => error.fmt(formatter),
            Self::InvalidUtf16(error) => error.fmt(formatter),
            Self::OddUtf16ByteCount => formatter.write_str("UTF-16 file has an odd byte count"),
        }
    }
}

impl std::error::Error for TeqError {}

impl From<std::io::Error> for TeqError {
    fn from(value: std::io::Error) -> Self {
        Self::Io(value)
    }
}

fn decode_teq(bytes: &[u8]) -> Result<String, TeqError> {
    if let Some(bytes) = bytes.strip_prefix(&[0xEF, 0xBB, 0xBF]) {
        return String::from_utf8(bytes.to_vec()).map_err(TeqError::InvalidUtf8);
    }
    if let Some(bytes) = bytes.strip_prefix(&[0xFF, 0xFE]) {
        return decode_utf16(bytes, u16::from_le_bytes);
    }
    if let Some(bytes) = bytes.strip_prefix(&[0xFE, 0xFF]) {
        return decode_utf16(bytes, u16::from_be_bytes);
    }
    String::from_utf8(bytes.to_vec()).map_err(TeqError::InvalidUtf8)
}

fn decode_utf16(bytes: &[u8], convert: fn([u8; 2]) -> u16) -> Result<String, TeqError> {
    if bytes.len() % 2 != 0 {
        return Err(TeqError::OddUtf16ByteCount);
    }
    let units = bytes
        .chunks_exact(2)
        .map(|chunk| convert([chunk[0], chunk[1]]));
    std::char::decode_utf16(units)
        .collect::<Result<String, _>>()
        .map_err(TeqError::InvalidUtf16)
}

fn normalized_content_text(content: &text_editor::Content) -> String {
    let mut text = content.text();
    if text.ends_with('\n') {
        text.pop();
    }
    text
}

fn renderable_text(source: &str) -> String {
    let mut output = Vec::new();
    let mut pending = String::new();
    for line in source.lines() {
        if line.starts_with("@ Configuration begin")
            || line.starts_with("# Hide from here")
            || line.starts_with("{ Hide from here")
        {
            break;
        }
        if let Some(prefix) = line.strip_suffix('\\') {
            pending.push_str(prefix);
        } else {
            pending.push_str(line);
            output.push(std::mem::take(&mut pending));
        }
    }
    if !pending.is_empty() {
        output.push(pending);
    }
    output.join("\n")
}

fn measure_preview(text: &str, style: &EquationStyle) -> EquationBounds {
    let size = f64::from(style.font.size_points.max(1));
    let longest = text
        .lines()
        .map(str::chars)
        .map(Iterator::count)
        .max()
        .unwrap_or(0);
    let longest = u32::try_from(longest).unwrap_or(u32::MAX);
    let lines = u32::try_from(text.lines().count().max(1)).unwrap_or(u32::MAX);
    EquationBounds {
        width: measured_pixels(f64::from(longest) * size * 0.6),
        height: measured_pixels(f64::from(lines) * size * style.line_height.max(0.1)),
    }
}

#[allow(clippy::cast_possible_truncation, clippy::cast_sign_loss)]
fn measured_pixels(value: f64) -> u32 {
    value.ceil().clamp(0.0, f64::from(u32::MAX - 10)) as u32 + 10
}

fn open_teq_task() -> Task<Message> {
    Task::perform(select_teq_file(), Message::Opened)
}

fn save_teq_task(contents: String) -> Task<Message> {
    Task::perform(select_teq_save_file(contents), Message::Saved)
}

async fn select_teq_file() -> Result<Option<(PathBuf, String)>, String> {
    let Some(file) = AsyncFileDialog::new()
        .add_filter(TEQ_FILTER_NAME, &[TEQ_EXTENSION])
        .set_file_name(TEQ_DEFAULT_FILE_NAME)
        .pick_file()
        .await
    else {
        return Ok(None);
    };
    let path = file.path().to_path_buf();
    let bytes = std::fs::read(&path).map_err(|error| error.to_string())?;
    let text = decode_teq(&bytes).map_err(|error| error.to_string())?;
    Ok(Some((path, text)))
}

async fn select_teq_save_file(contents: String) -> Result<Option<PathBuf>, String> {
    let Some(file) = AsyncFileDialog::new()
        .add_filter(TEQ_FILTER_NAME, &[TEQ_EXTENSION])
        .set_file_name(TEQ_DEFAULT_FILE_NAME)
        .save_file()
        .await
    else {
        return Ok(None);
    };
    let path = file.path().to_path_buf();
    std::fs::write(&path, contents).map_err(|error| error.to_string())?;
    Ok(Some(path))
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::cell::Cell;
    use std::rc::Rc;

    struct Runner {
        accepted: bool,
        result: SystemText,
        drops: Rc<Cell<u32>>,
    }

    impl SystemTextDialogRunner for Runner {
        fn show_modal(&mut self, initial: SystemText) -> (bool, SystemText) {
            assert_eq!(initial.text, "original");
            (self.accepted, self.result.clone())
        }
    }

    impl Drop for Runner {
        fn drop(&mut self) {
            self.drops.set(self.drops.get() + 1);
        }
    }

    #[test]
    fn host_bridge_commits_only_ok_and_always_drops_dialog() {
        let drops = Rc::new(Cell::new(0));
        let mut original = SystemText {
            text: "original".to_owned(),
            ..SystemText::default()
        };
        let changed = SystemText {
            text: "changed".to_owned(),
            ..SystemText::default()
        };
        assert!(!edit_system_text(
            &mut original,
            Runner {
                accepted: false,
                result: changed.clone(),
                drops: Rc::clone(&drops),
            },
        ));
        assert_eq!(original.text, "original");
        assert_eq!(drops.get(), 1);

        assert!(edit_system_text(
            &mut original,
            Runner {
                accepted: true,
                result: changed,
                drops: Rc::clone(&drops),
            },
        ));
        assert_eq!(original.text, "changed");
        assert_eq!(drops.get(), 2);
    }

    #[test]
    fn markup_inserts_at_selection_start_without_replacing_selection() {
        let mut window = Window::new(
            SystemText {
                text: "abcd".to_owned(),
                ..SystemText::default()
            },
            EquationAutoformatSettings::default(),
        );
        window.document.perform(text_editor::Action::Move(
            text_editor::Motion::DocumentStart,
        ));
        window
            .document
            .perform(text_editor::Action::Select(text_editor::Motion::Right));
        window.insert_exponent();
        assert_eq!(window.memo_text(), "\\e(x,2)abcd");
    }

    #[test]
    fn fixed_markup_tokens_are_exact() {
        let mut window = Window::default();
        window.insert_fraction();
        window.insert_exponent();
        window.insert_u_circumflex();
        window.insert_index();
        window.insert_beta();
        window.insert_external_link();
        assert_eq!(
            window.memo_text(),
            "\\f(n,d)\\e(x,2)\\o(U,^)\\i(a,i)\\s(b)\\a(Link,http://www.)"
        );
    }

    #[test]
    fn view_refresh_synchronizes_filters_and_sizes_preview() {
        let mut window = Window::new(
            SystemText {
                style: EquationStyle {
                    cached_bounds: Some(EquationBounds {
                        width: 1,
                        height: 1,
                    }),
                    ..EquationStyle::default()
                },
                ..SystemText::default()
            },
            EquationAutoformatSettings::default(),
        );
        window.document = text_editor::Content::with_text("one\\\ntwo\n# Hide from here\nsecret");
        window.show_view();
        assert_eq!(window.preview.text, "onetwo");
        assert!(window.preview.bounds.width > 10);
        assert_eq!(window.staged.style.cached_bounds, None);
        let generation = window.preview.generation;
        window.show_view();
        assert_eq!(window.preview.generation, generation + 1);
    }

    #[test]
    fn font_cancel_still_refreshes_and_host_accepts_selected_font() {
        let mut window = Window::default();
        window.choose_font(None, false);
        assert_eq!(window.preview.generation, 1);
        let font = EquationFont {
            family: "Cambria Math".to_owned(),
            ..EquationFont::default()
        };
        window.choose_font(Some(font.clone()), true);
        assert_eq!(window.staged.style.font, font);
        assert!(window.accepted().is_some());
        assert_eq!(window.preview.generation, 2);
    }

    #[test]
    fn properties_cancel_is_noop_and_accept_updates_shared_models() {
        let mut window = Window::default();
        window.apply_properties(None);
        assert_eq!(window.autoformat_cache_generation, 0);
        let style = EquationStyle {
            line_height: 1.5,
            ..EquationStyle::default()
        };
        let autoformat = EquationAutoformatSettings {
            enabled: false,
            rules: Vec::new(),
        };
        window.apply_properties(Some(EquationStyleSettingsResult {
            style: style.clone(),
            autoformat: autoformat.clone(),
        }));
        assert_eq!(window.staged.style, style);
        assert_eq!(window.autoformat, autoformat);
        assert_eq!(window.autoformat_cache_generation, 1);
    }

    #[test]
    fn staged_decoration_commands_preserve_cancel_behavior() {
        let mut window = Window::default();
        window.select_opaque_background(None);
        assert_eq!(window.staged.background, Background::Opaque([255; 4]));
        window.select_opaque_background(Some([1, 2, 3, 255]));
        window.select_opaque_background(None);
        assert_eq!(window.staged.background, Background::Opaque([1, 2, 3, 255]));
        window.select_transparent_background();
        window.select_solid_border();
        window.select_dotted_border();
        assert_eq!(window.staged.border, BorderStyle::Dotted);
        window.select_no_border();
        assert_eq!(window.staged.border, BorderStyle::None);
    }

    #[test]
    fn popup_geometry_uses_parent_origin_and_button_right_edge() {
        let mut window = Window::default();
        let parent = PopupAnchor { x: 20, y: 30 };
        window.open_action_links(parent, 4, 12);
        assert_eq!(
            window.popup(),
            Some(PopupMenu::ActionLinks(PopupAnchor { x: 36, y: 30 }))
        );
        window.open_text_tools(parent, 1, 2);
        assert_eq!(
            window.popup(),
            Some(PopupMenu::TextTools(PopupAnchor { x: 23, y: 30 }))
        );
    }

    #[test]
    fn teq_decoder_supports_utf8_and_both_utf16_byte_orders() {
        assert_eq!(decode_teq(b"\xEF\xBB\xBFbeta").expect("UTF-8"), "beta");
        assert_eq!(
            decode_teq(&[0xFF, 0xFE, b'A', 0, 0xB2, 0x03]).expect("UTF-16 LE"),
            "A\u{03b2}"
        );
        assert_eq!(
            decode_teq(&[0xFE, 0xFF, 0, b'A', 0x03, 0xB2]).expect("UTF-16 BE"),
            "A\u{03b2}"
        );
    }

    #[test]
    fn teq_load_refreshes_view_but_leaves_edit_staging_until_later() {
        let mut view = Window::default();
        view.load_teq_text("view");
        assert_eq!(view.preview.text, "view");
        let mut edit = Window::default();
        edit.show_edit();
        edit.load_teq_text("edit");
        assert_eq!(edit.memo_text(), "edit");
        assert_eq!(edit.staged.text, "");
    }

    #[test]
    fn selection_commands_use_iced_content_semantics() {
        let mut window = Window::new(
            SystemText {
                text: "abc".to_owned(),
                ..SystemText::default()
            },
            EquationAutoformatSettings::default(),
        );
        window.select_all();
        window.paste_text("x".to_owned());
        assert_eq!(window.memo_text(), "x");
        window.select_all();
        let _task = window.cut_native();
        assert_eq!(window.memo_text(), "");
    }

    #[test]
    fn wrap_popup_and_acceptance_follow_staged_lifecycle() {
        let mut window = Window::default();
        assert_eq!(window.scrollbar_mode(), ScrollbarMode::Both);
        window.toggle_wrap();
        assert_eq!(window.scrollbar_mode(), ScrollbarMode::Vertical);
        window.toggle_popup_text();
        window.accept();
        assert_eq!(window.accepted().expect("accepted").popup_text_mode, 3);
        window.paste_text("changed".to_owned());
        assert!(window.accepted().is_none());
    }

    #[test]
    fn action_links_strip_mnemonics_and_use_exact_targets() {
        let mut window = Window::default();
        window.insert_temperature_analysis_link("&Temperature Analysis");
        window.insert_configuration_link("Set &config file");
        window.insert_main_parameter_link("Set &main parameter");
        window.insert_ac_transfer_link("&AC Transfer Characteristic");
        window.insert_transient_link("&Transient");
        window.insert_network_link("&Network Analysis");
        window.insert_noise_link("&Noise Analysis");
        window.insert_dc_transfer_link("&DC Transfer Characteristic");
        window.insert_digital_link("&Digital");
        window.insert_fourier_link("&Fourier Spectrum");
        assert_eq!(
            window.memo_text(),
            concat!(
                "\\a(Temperature Analysis,tdl://analysis.dc.temperature)",
                "\\a(Set config file,tdl://component.config:<label>:<cnf file path>)",
                "\\a(Set main parameter,tdl://set:{component_label|TEMP|global_par}:{value})",
                "\\a(AC Transfer Characteristic,tdl://analysis.ac.transfer)",
                "\\a(Transient,tdl://analysis.tr)",
                "\\a(Network Analysis,tdl://analysis.ac.network)",
                "\\a(Noise Analysis,tdl://analysis.noise)",
                "\\a(DC Transfer Characteristic,tdl://analysis.dc.transfer)",
                "\\a(Digital,tdl://analysis.dig)",
                "\\a(Fourier Spectrum,tdl://analysis.fourier.spectrum)",
            )
        );
    }
}
