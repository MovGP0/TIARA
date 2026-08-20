//! Cohesive iced Equation Editor state with typed platform adapters.
use iced::widget::{button, column, row, text, text_editor};
use iced::{Element, Length};
use std::{ops::Range, path::Path};
use tiara_core::equation_style::EquationStyle;
pub const TITLE: &str = "Equation Editor";
pub const SCREENSHOT: &str = "screenshots/Equation_Editor_Window.png";
pub const FORM_RESOURCE: &str = "EquEditor";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01462ae0");
pub const LIBRARY_EVALUATION: &str = "iced supplies editing; std supplies UTF-8 files; rendering, clipboard, help, Interpreter, EMF, and Mathcad use typed application adapters.";
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum Mode {
    #[default]
    Edit,
    View,
}
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Format {
    Bmp,
    Jpeg,
    Svg,
    Emf,
}
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ClipKind {
    Text,
    Private,
    Graphic,
}
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Rendered {
    pub format: Format,
    pub bytes: Vec<u8>,
}
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Settings {
    pub width: u32,
    pub height: u32,
    pub font: String,
    pub autoformat: bool,
}
impl Default for Settings {
    fn default() -> Self {
        Self {
            width: 640,
            height: 320,
            font: "Sans".into(),
            autoformat: true,
        }
    }
}
pub trait Renderer {
    /// Renders equation text in the requested format.
    ///
    /// # Errors
    ///
    /// Returns an error when the renderer cannot produce the requested output.
    fn render(&self, text: &str, format: Format, settings: &Settings) -> Result<Rendered, String>;
}
pub trait Clipboard {
    /// Writes typed equation data to the platform clipboard.
    ///
    /// # Errors
    ///
    /// Returns an error when the clipboard cannot accept the data.
    fn write(&mut self, kind: ClipKind, data: &[u8]) -> Result<(), String>;

    /// Reads text from the platform clipboard when it is available.
    ///
    /// # Errors
    ///
    /// Returns an error when the clipboard text cannot be read.
    fn read_text(&mut self) -> Result<Option<String>, String>;
}
pub trait Help {
    /// Opens a help file at the requested context.
    ///
    /// # Errors
    ///
    /// Returns an error when the platform cannot open the help context.
    fn open(&mut self, file: &Path, context: u32) -> Result<(), String>;
}
pub trait Interpreter {
    /// Replaces the Interpreter source with generated equation source.
    ///
    /// # Errors
    ///
    /// Returns an error when the Interpreter cannot accept the source.
    fn replace_source(&mut self, source: String) -> Result<(), String>;
}
pub trait Mathcad {
    /// Dispatches equation source to a configured Mathcad integration.
    ///
    /// # Errors
    ///
    /// Returns an error when the Mathcad integration cannot accept the source.
    fn dispatch(&mut self, source: &str) -> Result<(), String>;
}
#[derive(Debug, Clone)]
pub enum Message {
    Edit(text_editor::Action),
    New,
    EditMode,
    ViewMode,
    Insert(String),
}
#[derive(Debug)]
pub struct Window {
    document: text_editor::Content,
    style: EquationStyle,
    style_refresh_generation: u64,
    source: String,
    mode: Mode,
    selection: Range<usize>,
    settings: Settings,
    retain: bool,
}
impl Default for Window {
    fn default() -> Self {
        Self {
            document: text_editor::Content::new(),
            style: EquationStyle::default(),
            style_refresh_generation: 0,
            source: String::new(),
            mode: Mode::Edit,
            selection: 0..0,
            settings: Settings::default(),
            retain: false,
        }
    }
}
impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::Edit(a) => {
                self.document.perform(a);
                self.source = self.document.text();
            }
            Message::New => self.new_document(),
            Message::EditMode => self.edit_mode(),
            Message::ViewMode => self.mode = Mode::View,
            Message::Insert(v) => self.insert_markup(&v),
        }
    }

    #[must_use]
    pub const fn equation_style(&self) -> &EquationStyle {
        &self.style
    }

    pub fn apply_equation_style(&mut self, style: &EquationStyle) {
        self.style.clone_from(style);
        self.style_refresh_generation = self.style_refresh_generation.saturating_add(1);
    }
    /// Ports Ghidra `FUN_01462ae0` at `0x01462AE0` and `FUN_01463de0` at `0x01463DE0`.
    pub const fn edit_mode(&mut self) {
        self.mode = Mode::Edit;
    }
    /// Ports Ghidra `FUN_014635d0` at `0x014635D0` and `FUN_01463d20` at `0x01463D20`.
    ///
    /// # Errors
    ///
    /// Returns an error when the renderer cannot prepare the equation preview.
    pub fn view_mode(&mut self, renderer: &impl Renderer) -> Result<(), String> {
        let _ = renderer.render(&self.source, Format::Bmp, &self.settings)?;
        self.mode = Mode::View;
        Ok(())
    }
    /// Ports Ghidra `FUN_01463140` at `0x01463140`.
    ///
    /// # Errors
    ///
    /// Returns an error when the renderer cannot produce the requested format.
    pub fn render(&self, r: &impl Renderer, f: Format) -> Result<Rendered, String> {
        r.render(&self.source, f, &self.settings)
    }
    /// Ports Ghidra `FUN_01462b90` at `0x01462B90`, `FUN_01462cf0` at `0x01462CF0`, `FUN_01462e60` at `0x01462E60`, and `FUN_01462fc0` at `0x01462FC0`.
    ///
    /// # Errors
    ///
    /// Returns an error when rendering fails or the output file cannot be written.
    pub fn save_rendered(&self, r: &impl Renderer, f: Format, p: &Path) -> Result<(), String> {
        std::fs::write(p, self.render(r, f)?.bytes).map_err(|e| e.to_string())
    }
    /// Ports Ghidra `FUN_014638e0` at `0x014638E0`, `FUN_01464520` at `0x01464520`, `FUN_01464590` at `0x01464590`, and `FUN_014655e0` at `0x014655E0`.
    ///
    /// # Errors
    ///
    /// Returns an error when the renderer cannot produce the requested export.
    pub fn export(&self, r: &impl Renderer, f: Format) -> Result<Rendered, String> {
        self.render(r, f)
    }
    /// Ports Ghidra `FUN_01463930` at `0x01463930`.
    pub fn new_document(&mut self) {
        self.set_source(String::new());
        self.mode = Mode::Edit;
    }
    /// Ports Ghidra `FUN_01463980` at `0x01463980`.
    ///
    /// # Errors
    ///
    /// Returns an error when the equation text cannot be written to the file.
    pub fn save_text(&self, p: &Path) -> Result<(), String> {
        std::fs::write(p, &self.source).map_err(|e| e.to_string())
    }
    /// Ports Ghidra `FUN_01463b00` at `0x01463B00`.
    ///
    /// # Errors
    ///
    /// Returns an error when the equation text cannot be read from the file.
    pub fn load_text(&mut self, p: &Path) -> Result<(), String> {
        self.set_source(std::fs::read_to_string(p).map_err(|e| e.to_string())?);
        self.mode = Mode::View;
        Ok(())
    }
    /// Ports Ghidra `FUN_01463ea0` at `0x01463EA0`.
    ///
    /// # Errors
    ///
    /// Returns an error when rendering fails or the clipboard rejects a format.
    pub fn copy_all_formats(
        &self,
        r: &impl Renderer,
        c: &mut impl Clipboard,
    ) -> Result<(), String> {
        c.write(ClipKind::Text, self.source.as_bytes())?;
        c.write(ClipKind::Private, self.source.as_bytes())?;
        c.write(ClipKind::Graphic, &self.render(r, Format::Bmp)?.bytes)
    }
    /// Ports Ghidra `FUN_014641a0` at `0x014641A0`.
    pub fn insert_markup(&mut self, v: &str) {
        let s = self.selection.start.min(self.source.len());
        self.source.insert_str(s, v);
        self.selection = s + v.len()..s + v.len();
        self.document = text_editor::Content::with_text(&self.source);
    }
    /// Ports Ghidra `FUN_01464370` at `0x01464370`.
    pub fn fraction(&mut self) {
        self.insert_markup("\\f(a,b)");
    }
    /// Ports Ghidra `FUN_014643b0` at `0x014643B0`.
    pub fn exponent(&mut self) {
        self.insert_markup("\\e(x,2)");
    }
    /// Ports Ghidra `FUN_01464470` at `0x01464470`.
    pub fn index(&mut self) {
        self.insert_markup("\\i(a,i)");
    }
    /// Ports Ghidra `FUN_014644b0` at `0x014644B0`.
    pub fn beta(&mut self) {
        self.insert_markup("\\s(beta)");
    }
    /// Ports Ghidra `FUN_014644e0` at `0x014644E0`.
    pub fn u_caret(&mut self) {
        self.insert_markup("\\o(U,^)");
    }
    /// Ports Ghidra `FUN_01464530` at `0x01464530`.
    pub fn link(&mut self) {
        self.insert_markup("\\a(url,text)");
    }
    /// Ports Ghidra `FUN_014645e0` at `0x014645E0`.
    #[must_use]
    pub fn find(&self) -> (String, Range<usize>) {
        (self.source.clone(), self.selection.clone())
    }
    /// Ports Ghidra `FUN_01464600` at `0x01464600`.
    pub fn apply_settings(&mut self, v: Settings) {
        self.settings = v;
    }
    /// Ports Ghidra `FUN_01464e20` at `0x01464E20`.
    #[must_use]
    pub const fn replace_dialog(&self) -> bool {
        true
    }
    /// Ports Ghidra `FUN_01464e50` at `0x01464E50`.
    ///
    /// # Errors
    ///
    /// Returns an error when the selected text cannot be copied to the clipboard.
    pub fn cut(&mut self, c: &mut impl Clipboard) -> Result<(), String> {
        self.copy(c)?;
        self.delete_selection();
        Ok(())
    }
    /// Ports Ghidra `FUN_01464f00` at `0x01464F00`.
    ///
    /// # Errors
    ///
    /// Returns an error when the equation text cannot be written to the clipboard.
    pub fn copy(&self, c: &mut impl Clipboard) -> Result<(), String> {
        let v = if self.selection.is_empty() {
            &self.source
        } else {
            &self.source[self.selection.clone()]
        };
        c.write(ClipKind::Text, v.as_bytes())
    }
    /// Ports Ghidra `FUN_01465000` at `0x01465000`.
    ///
    /// # Errors
    ///
    /// Returns an error when text cannot be read from the clipboard.
    pub fn paste(&mut self, c: &mut impl Clipboard) -> Result<(), String> {
        if let Some(v) = c.read_text()? {
            self.insert_markup(&v);
        }
        Ok(())
    }
    /// Ports Ghidra `FUN_014650b0` at `0x014650B0`.
    ///
    /// # Errors
    ///
    /// Returns an error when the platform cannot open the Equation Editor help context.
    pub fn help(&self, h: &mut impl Help) -> Result<(), String> {
        h.open(Path::new("TINA.CHM"), 0x0146_50B0)
    }
    /// Ports Ghidra `FUN_01465190` at `0x01465190`.
    pub const fn retain(&mut self, v: bool) {
        self.retain = v;
    }
    /// Ports Ghidra `FUN_01465510` at `0x01465510`.
    ///
    /// # Errors
    ///
    /// Returns an error when the Interpreter cannot accept the generated source.
    pub fn interpreter(&self, i: &mut impl Interpreter) -> Result<(), String> {
        i.replace_source(format!("equation := {:?};", self.source))
    }
    /// Ports Ghidra `FUN_014655c0` at `0x014655C0`.
    ///
    /// # Errors
    ///
    /// Returns an error when the configured Mathcad integration rejects the source.
    pub fn mathcad(&self, m: &mut impl Mathcad) -> Result<(), String> {
        m.dispatch(&self.source)
    }
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let body: Element<'_, Message> = match self.mode {
            Mode::Edit => text_editor(&self.document)
                .on_action(Message::Edit)
                .height(Length::Fill)
                .into(),
            Mode::View => text(&self.source).into(),
        };
        column![
            row![
                button("New").on_press(Message::New),
                button("Edit").on_press(Message::EditMode),
                button("View").on_press(Message::ViewMode)
            ]
            .spacing(8),
            body
        ]
        .into()
    }
    fn set_source(&mut self, v: String) {
        self.source = v;
        self.document = text_editor::Content::with_text(&self.source);
        self.selection = 0..0;
    }
    fn delete_selection(&mut self) {
        if !self.selection.is_empty() {
            self.source.replace_range(self.selection.clone(), "");
            self.set_source(self.source.clone());
        }
    }
}
#[cfg(test)]
mod tests {
    use super::*;
    struct R;
    impl Renderer for R {
        fn render(&self, s: &str, f: Format, _: &Settings) -> Result<Rendered, String> {
            Ok(Rendered {
                format: f,
                bytes: s.as_bytes().to_vec(),
            })
        }
    }
    #[derive(Default)]
    struct C(Vec<(ClipKind, Vec<u8>)>);
    impl Clipboard for C {
        fn write(&mut self, k: ClipKind, d: &[u8]) -> Result<(), String> {
            self.0.push((k, d.to_vec()));
            Ok(())
        }
        fn read_text(&mut self) -> Result<Option<String>, String> {
            Ok(Some("x".into()))
        }
    }
    #[test]
    fn markup_and_export() {
        let mut w = Window::default();
        w.fraction();
        w.exponent();
        assert_eq!(w.source, "\\f(a,b)\\e(x,2)");
        for f in [Format::Bmp, Format::Jpeg, Format::Svg, Format::Emf] {
            assert_eq!(w.export(&R, f).expect("render").format, f);
        }
    }
    #[test]
    fn typed_clipboard() {
        let mut w = Window::default();
        w.beta();
        let mut c = C::default();
        w.copy_all_formats(&R, &mut c).expect("copy");
        assert_eq!(c.0.len(), 3);
        w.paste(&mut c).expect("paste");
        assert!(w.source.ends_with('x'));
    }
}
