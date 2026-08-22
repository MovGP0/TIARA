//! Cohesive iced Equation Editor state with typed platform adapters.
use iced::widget::{button, column, row, text, text_editor};
use iced::{Element, Length};
use std::{
    io::{Read, Write},
    ops::Range,
    path::{Path, PathBuf},
};
use tiara_core::equation_style::EquationStyle;
pub const TITLE: &str = "Equation Editor";
pub const SCREENSHOT: &str = "screenshots/Equation_Editor_Window.png";
pub const FORM_RESOURCE: &str = "EquEditor";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01462ae0");
pub const LIBRARY_EVALUATION: &str = "iced supplies editing; std supplies UTF-8 files, Mathcad template copying, and direct target creation; rendering, clipboard, help, Interpreter syntax rules, EMF, Mathcad record encoding, and dispatch use typed application adapters.";
pub const MATHCAD_RECORD_HEADER: &[u8] = b".EQN 6 0 ";
pub const MATHCAD_RECORD_TERMINATOR: u8 = 0x11;

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct InterpreterSupportSections {
    pub first: Vec<String>,
    pub second: Vec<String>,
    pub third: Vec<String>,
}

pub trait InterpreterTranslationBackend {
    fn reset(&mut self);

    /// Translates one ordinary equation source line.
    ///
    /// # Errors
    ///
    /// Returns an error when the line cannot be translated.
    fn translate_expression(&mut self, line: &str) -> Result<Vec<String>, String>;

    /// Translates one complete recovered function block.
    ///
    /// # Errors
    ///
    /// Returns an error when the function block cannot be translated.
    fn translate_function(&mut self, lines: &[String]) -> Result<Vec<String>, String>;

    /// Translates an array marker and its application-owned structure.
    ///
    /// # Errors
    ///
    /// Returns an error when the array structure cannot be translated.
    fn translate_array(&mut self, line: &str) -> Result<Vec<String>, String>;

    /// Translates one recovered time-shift line.
    ///
    /// # Errors
    ///
    /// Returns an error when the time-shift structure cannot be translated.
    fn translate_time_shift(&mut self, line: &str) -> Result<Vec<String>, String>;

    fn support_sections(&mut self) -> InterpreterSupportSections;
}

#[derive(Debug, Clone, PartialEq)]
pub struct MathcadSymbol {
    pub name: String,
    pub value: f64,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct MathcadExportPlan {
    pub target_path: PathBuf,
    pub lines: Vec<String>,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct MathcadDialogConfiguration {
    pub title: &'static str,
    pub filter: &'static str,
    pub default_extension: &'static str,
    pub options: u32,
}

impl Default for MathcadDialogConfiguration {
    fn default() -> Self {
        Self {
            title: "Export to MathCad",
            filter: "MathCad file (*.mcd)|*.mcd",
            default_extension: "mcd",
            options: 0x116,
        }
    }
}

pub trait MathcadRecordEncoder {
    /// Converts one normalized equation line to its binary Mathcad payload.
    ///
    /// # Errors
    ///
    /// Returns an error when the target syntax cannot encode the equation.
    fn encode(&mut self, equation: &str) -> Result<Vec<u8>, String>;
}
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

    /// Ports Ghidra `FUN_01d23250` at `0x01D23250`.
    ///
    /// Scans the complete equation source until the exact Interpreter
    /// configuration marker, skips empty lines, groups recovered function
    /// blocks, dispatches array and time-shift structures, wraps generated
    /// source from a preferred position of 500 characters, and appends the
    /// three backend support sections.
    ///
    /// # Errors
    ///
    /// Returns an error when a recovered source structure cannot be translated.
    pub fn translate_interpreter_source(
        &self,
        backend: &mut impl InterpreterTranslationBackend,
    ) -> Result<Vec<String>, String> {
        backend.reset();
        let source: Vec<_> = self.source.lines().map(str::to_owned).collect();
        let mut generated = Vec::new();
        let mut index = 0;
        while index < source.len() {
            let line = &source[index];
            if line == "@ Interpreter configuration" {
                break;
            }
            if line.is_empty() {
                index += 1;
                continue;
            }

            let translated = if line == "<fbegin>" {
                let start = index;
                while index + 1 < source.len() {
                    index += 1;
                    if source[index] == "<fend>" {
                        break;
                    }
                }
                backend.translate_function(&source[start..=index])?
            } else if line == "<abegin>" {
                backend.translate_array(line)?
            } else if line.starts_with("Time shift:") {
                backend.translate_time_shift(line)?
            } else {
                backend.translate_expression(line)?
            };
            generated.extend(translated);
            index += 1;
        }

        let mut output = wrap_interpreter_lines(generated, 500);
        let support = backend.support_sections();
        output.extend(support.first);
        output.extend(support.second);
        output.extend(support.third);
        Ok(output)
    }

    /// Ports Ghidra `FUN_01d23c40` at `0x01D23C40`.
    ///
    /// Cancel or an empty accepted path returns `None` before symbol or
    /// equation preparation. An accepted path produces symbol assignments
    /// followed by all nonempty normalized equation-layout lines.
    #[must_use]
    pub fn prepare_mathcad_export(
        &self,
        target_path: Option<PathBuf>,
        symbols: &[MathcadSymbol],
    ) -> Option<MathcadExportPlan> {
        let target_path = target_path.filter(|path| !path.as_os_str().is_empty())?;
        let mut lines: Vec<_> = symbols.iter().map(format_mathcad_symbol).collect();
        lines.extend(normalize_mathcad_equation_lines(&self.source));
        Some(MathcadExportPlan { target_path, lines })
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

/// Ports Ghidra `FUN_01d23aa0` at `0x01D23AA0`.
///
/// Rust numeric formatting is locale independent. The normalization step also
/// accepts a comma from platform-provided symbol text and maps Rust lowercase
/// scientific notation to the recovered uppercase-`E` target construct.
#[must_use]
pub fn format_mathcad_symbol_value(value: f64) -> String {
    normalize_mathcad_numeric_literal(&value.to_string())
}

/// Ports Ghidra `FUN_01d245d0` at `0x01D245D0`.
///
/// `std::io::copy` provides the recovered complete byte-stream copy and
/// propagates every read or write error.
///
/// # Errors
///
/// Returns an I/O error from the template reader or target writer.
pub fn copy_mathcad_template(
    template: &mut impl Read,
    target: &mut impl Write,
) -> std::io::Result<u64> {
    std::io::copy(template, target)
}

/// Ports Ghidra `FUN_01d24640` at `0x01D24640`.
///
/// Opens `base.mcd` before it creates or truncates the selected target, copies
/// the complete template, appends one framed equation record per prepared
/// line, and flushes the target. It does not use a temporary file, backup,
/// retry, rollback, or partial-file cleanup.
///
/// # Errors
///
/// Returns an error from template open, target creation, template copy,
/// equation encoding, record writing, or target flush.
pub fn write_mathcad_export(
    installation_directory: &Path,
    plan: &MathcadExportPlan,
    encoder: &mut impl MathcadRecordEncoder,
) -> Result<(), String> {
    let mut template = std::fs::File::open(installation_directory.join("base.mcd"))
        .map_err(|error| error.to_string())?;
    let mut target = std::fs::File::create(&plan.target_path).map_err(|error| error.to_string())?;
    copy_mathcad_template(&mut template, &mut target).map_err(|error| error.to_string())?;
    for equation in &plan.lines {
        let payload = encoder.encode(equation)?;
        target
            .write_all(MATHCAD_RECORD_HEADER)
            .and_then(|()| target.write_all(&payload))
            .and_then(|()| target.write_all(&[MATHCAD_RECORD_TERMINATOR]))
            .map_err(|error| error.to_string())?;
    }
    target.flush().map_err(|error| error.to_string())
}

fn normalize_mathcad_numeric_literal(formatted: &str) -> String {
    let formatted = formatted.replace(',', ".");
    let Some(exponent_index) = formatted.find(['E', 'e']) else {
        return formatted;
    };
    let (mantissa, exponent) = formatted.split_at(exponent_index);
    format!("{mantissa}*\\e(10,{})", &exponent[1..])
}

fn format_mathcad_symbol(symbol: &MathcadSymbol) -> String {
    let mut characters = symbol.name.chars();
    let Some(base) = characters.next() else {
        return format!("={}", format_mathcad_symbol_value(symbol.value));
    };
    let suffix: String = characters.collect();
    let name = if suffix.is_empty() {
        base.to_string()
    } else {
        format!("\\i({base},{suffix})")
    };
    format!("{name}={}", format_mathcad_symbol_value(symbol.value))
}

fn normalize_mathcad_equation_lines(source: &str) -> Vec<String> {
    let source: Vec<_> = source.lines().map(str::to_owned).collect();
    let mut normalized = Vec::new();
    let mut index = 0;
    while index < source.len() {
        if source[index].is_empty() {
            index += 1;
            continue;
        }
        let mut line = source[index].clone();
        while index + 1 < source.len()
            && !source[index + 1].is_empty()
            && (line.ends_with('\\') || line.ends_with('|'))
        {
            line.pop();
            index += 1;
            line.push_str(&source[index]);
        }
        normalized.push(line.replace("\\s(f)", "\\s(P)").replace("DegToRad", "deg*"));
        index += 1;
    }
    normalized
}

fn wrap_interpreter_lines(lines: Vec<String>, preferred_position: usize) -> Vec<String> {
    let mut wrapped = Vec::new();
    for line in lines {
        let mut remainder = line.as_str();
        while remainder.chars().count() > preferred_position {
            let preferred_byte = remainder
                .char_indices()
                .nth(preferred_position)
                .map_or(remainder.len(), |(index, _)| index);
            let split = remainder[preferred_byte..]
                .char_indices()
                .find(|(_, character)| character.is_whitespace())
                .map_or(preferred_byte, |(index, _)| preferred_byte + index);
            wrapped.push(remainder[..split].to_owned());
            remainder = remainder[split..].trim_start();
        }
        wrapped.push(remainder.to_owned());
    }
    wrapped
}
#[cfg(test)]
mod tests {
    use super::*;
    use std::io::Cursor;
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

    #[test]
    fn interpreter_translation_stops_at_marker_and_appends_support_in_order() {
        let mut window = Window::default();
        window.set_source(
            "\nplain\n<fbegin>\ninside\n<fend>\n<abegin>\nTime shift: 2\n@ Interpreter configuration\nignored"
                .to_owned(),
        );
        let mut backend = Translation::default();

        let output = window
            .translate_interpreter_source(&mut backend)
            .expect("translation");

        assert!(backend.reset);
        assert_eq!(
            backend.calls,
            [
                "expression:plain",
                "function:<fbegin>|inside|<fend>",
                "array:<abegin>",
                "time:Time shift: 2",
            ]
        );
        assert_eq!(
            output,
            [
                "expression",
                "function",
                "array",
                "time",
                "first",
                "second",
                "third",
            ]
        );
    }

    #[test]
    fn interpreter_wrapper_splits_from_preferred_character_position() {
        let line = format!("{} tail", "x".repeat(500));
        assert_eq!(
            wrap_interpreter_lines(vec![line], 500),
            ["x".repeat(500), "tail".to_owned()]
        );
    }

    #[test]
    fn mathcad_numeric_formatter_normalizes_decimal_and_exponent_syntax() {
        assert_eq!(format_mathcad_symbol_value(1.25), "1.25");
        assert_eq!(
            normalize_mathcad_numeric_literal("1,5E-3"),
            "1.5*\\e(10,-3)"
        );
        assert_eq!(normalize_mathcad_numeric_literal("2e+4"), "2*\\e(10,+4)");
    }

    #[test]
    fn mathcad_plan_honors_cancel_and_prepares_symbols_and_joined_lines() {
        let mut window = Window::default();
        window.set_source("a\\\nb\n\nDegToRad(x)|\n\\s(f)".to_owned());
        let symbols = [
            MathcadSymbol {
                name: "A".to_owned(),
                value: 1.5,
            },
            MathcadSymbol {
                name: "Vin".to_owned(),
                value: 2.0,
            },
        ];

        assert!(window.prepare_mathcad_export(None, &symbols).is_none());
        assert!(
            window
                .prepare_mathcad_export(Some(PathBuf::new()), &symbols)
                .is_none()
        );
        let plan = window
            .prepare_mathcad_export(Some(PathBuf::from("target.mcd")), &symbols)
            .expect("accepted export");

        assert_eq!(plan.target_path, PathBuf::from("target.mcd"));
        assert_eq!(plan.lines, ["A=1.5", "\\i(V,in)=2", "ab", "deg*(x)\\s(P)"]);
        assert_eq!(
            MathcadDialogConfiguration::default(),
            MathcadDialogConfiguration {
                title: "Export to MathCad",
                filter: "MathCad file (*.mcd)|*.mcd",
                default_extension: "mcd",
                options: 0x116,
            }
        );
    }

    #[test]
    fn mathcad_writer_copies_template_before_framed_equation_records() {
        let folder = temporary_folder("writer");
        let installation = folder.join("installation");
        std::fs::create_dir_all(&installation).expect("installation folder");
        std::fs::write(installation.join("base.mcd"), b"BASE").expect("template");
        let plan = MathcadExportPlan {
            target_path: folder.join("result.mcd"),
            lines: vec!["a=1".to_owned(), "b=2".to_owned()],
        };
        let mut encoder = Encoder;

        write_mathcad_export(&installation, &plan, &mut encoder).expect("write export");

        let bytes = std::fs::read(&plan.target_path).expect("result bytes");
        let mut expected = b"BASE.EQN 6 0 A=1".to_vec();
        expected.push(MATHCAD_RECORD_TERMINATOR);
        expected.extend_from_slice(b".EQN 6 0 B=2");
        expected.push(MATHCAD_RECORD_TERMINATOR);
        assert_eq!(bytes, expected);
        std::fs::remove_dir_all(folder).expect("temporary cleanup");
    }

    #[test]
    fn missing_mathcad_template_does_not_create_the_target() {
        let folder = temporary_folder("missing_template");
        let plan = MathcadExportPlan {
            target_path: folder.join("result.mcd"),
            lines: vec!["a=1".to_owned()],
        };

        assert!(write_mathcad_export(&folder, &plan, &mut Encoder).is_err());
        assert!(!plan.target_path.exists());
        std::fs::remove_dir_all(folder).expect("temporary cleanup");
    }

    #[test]
    fn template_copy_preserves_every_byte() {
        let mut input = Cursor::new([0, 1, 2, 0xff]);
        let mut output = Vec::new();
        assert_eq!(
            copy_mathcad_template(&mut input, &mut output).expect("copy"),
            4
        );
        assert_eq!(output, [0, 1, 2, 0xff]);
    }

    #[derive(Default)]
    struct Translation {
        reset: bool,
        calls: Vec<String>,
    }

    impl InterpreterTranslationBackend for Translation {
        fn reset(&mut self) {
            self.reset = true;
            self.calls.clear();
        }

        fn translate_expression(&mut self, line: &str) -> Result<Vec<String>, String> {
            self.calls.push(format!("expression:{line}"));
            Ok(vec!["expression".to_owned()])
        }

        fn translate_function(&mut self, lines: &[String]) -> Result<Vec<String>, String> {
            self.calls.push(format!("function:{}", lines.join("|")));
            Ok(vec!["function".to_owned()])
        }

        fn translate_array(&mut self, line: &str) -> Result<Vec<String>, String> {
            self.calls.push(format!("array:{line}"));
            Ok(vec!["array".to_owned()])
        }

        fn translate_time_shift(&mut self, line: &str) -> Result<Vec<String>, String> {
            self.calls.push(format!("time:{line}"));
            Ok(vec!["time".to_owned()])
        }

        fn support_sections(&mut self) -> InterpreterSupportSections {
            InterpreterSupportSections {
                first: vec!["first".to_owned()],
                second: vec!["second".to_owned()],
                third: vec!["third".to_owned()],
            }
        }
    }

    struct Encoder;

    impl MathcadRecordEncoder for Encoder {
        fn encode(&mut self, equation: &str) -> Result<Vec<u8>, String> {
            Ok(equation.to_ascii_uppercase().into_bytes())
        }
    }

    fn temporary_folder(name: &str) -> PathBuf {
        let folder = std::env::current_dir()
            .expect("current directory")
            .join(".temp")
            .join(format!("equation_export_{name}_{}", std::process::id()));
        if folder.exists() {
            std::fs::remove_dir_all(&folder).expect("previous temporary cleanup");
        }
        std::fs::create_dir_all(&folder).expect("temporary folder");
        folder
    }
}
