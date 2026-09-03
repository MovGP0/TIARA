//! Iced state for the recovered DFS axis configuration dialog.

use iced::widget::{button, column, text};
use iced::{Element, Task};
use tiara_core::equation_style::EquationFont;

pub const HELP_CONTEXT: u32 = 0x20a;
pub const AXIS_CONFIGURATION_TOOL_STATE: u8 = 9;

#[derive(Debug, Clone)]
pub enum Message {
    RequestNumberFont,
    NumberFontSelected(Option<EquationFont>),
}

pub trait AxisFontDialogAdapter {
    fn select_font(&mut self, current: &EquationFont) -> Option<EquationFont>;
}

pub trait AxisDialogLifecycleHost {
    fn tool_state(&mut self) -> u8;
    fn set_tool_state(&mut self, state: u8);
}

#[derive(Debug, Clone)]
pub struct Window {
    staged_axis_font: EquationFont,
    staged_number_font: EquationFont,
    number_font_summary: String,
    number_format_index: usize,
    divide_by_factor: f64,
    precision: u8,
    number_font_dialog_requested: bool,
    help_context: u32,
    saved_tool_state: Option<u8>,
}

impl Window {
    #[must_use]
    pub fn new(
        staged_number_font: EquationFont,
        number_format_index: usize,
        divide_by_factor: f64,
        precision: u8,
    ) -> Self {
        let number_font_summary = staged_number_font.summary();
        Self {
            staged_axis_font: EquationFont::default(),
            staged_number_font,
            number_font_summary,
            number_format_index,
            divide_by_factor,
            precision,
            number_font_dialog_requested: false,
            help_context: 0,
            saved_tool_state: None,
        }
    }

    /// Implements Ghidra function `FUN_01ac5120` at `0x01AC5120`.
    /// Also implements Ghidra function `FUN_01ac5c80` at `0x01AC5C80`.
    ///
    /// Initializes either recovered axis form's help context and two owned
    /// staging fonts. It saves the prior shared tool state before selecting the
    /// axis-dialog state.
    pub fn on_create(&mut self, host: &mut impl AxisDialogLifecycleHost) {
        self.help_context = HELP_CONTEXT;
        self.staged_axis_font = EquationFont::default();
        self.staged_number_font = EquationFont::default();
        self.number_font_summary = self.staged_number_font.summary();
        self.saved_tool_state = Some(host.tool_state());
        host.set_tool_state(AXIS_CONFIGURATION_TOOL_STATE);
    }

    /// Implements Ghidra function `FUN_01ac5180` at `0x01AC5180`.
    /// Also implements Ghidra function `FUN_01ac5ce0` at `0x01AC5CE0`.
    ///
    /// Both recovered axis forms restore the shared tool state captured during
    /// creation. Consuming the window then releases both owned staging fonts
    /// through Rust ownership.
    pub fn on_destroy(mut self, host: &mut impl AxisDialogLifecycleHost) {
        if let Some(state) = self.saved_tool_state.take() {
            host.set_tool_state(state);
        }
    }

    /// Implements Ghidra function `FUN_01ac5000` at `0x01AC5000`.
    /// Also implements Ghidra function `FUN_01ac5b60` at `0x01AC5B60`.
    ///
    /// Both recovered DFS and DFP forms seed the font picker from their staged
    /// number font. Cancellation keeps all staged values unchanged. Acceptance
    /// replaces only that font and its name, size, and style summary.
    pub fn choose_number_font(&mut self, dialog: &mut impl AxisFontDialogAdapter) {
        let Some(font) = dialog.select_font(&self.staged_number_font) else {
            return;
        };
        self.apply_number_font(font);
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::RequestNumberFont => self.number_font_dialog_requested = true,
            Message::NumberFontSelected(selection) => {
                self.number_font_dialog_requested = false;
                if let Some(font) = selection {
                    self.apply_number_font(font);
                }
            }
        }
        Task::none()
    }

    pub fn take_number_font_dialog_request(&mut self) -> Option<EquationFont> {
        self.number_font_dialog_requested.then(|| {
            self.number_font_dialog_requested = false;
            self.staged_number_font.clone()
        })
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        column![
            text(&self.number_font_summary),
            button("Font ...").on_press(Message::RequestNumberFont)
        ]
        .into()
    }

    #[must_use]
    pub const fn staged_number_font(&self) -> &EquationFont {
        &self.staged_number_font
    }

    #[must_use]
    pub const fn staged_axis_font(&self) -> &EquationFont {
        &self.staged_axis_font
    }

    #[must_use]
    pub fn number_font_summary(&self) -> &str {
        &self.number_font_summary
    }

    #[must_use]
    pub const fn number_format_index(&self) -> usize {
        self.number_format_index
    }

    #[must_use]
    pub const fn divide_by_factor(&self) -> f64 {
        self.divide_by_factor
    }

    #[must_use]
    pub const fn precision(&self) -> u8 {
        self.precision
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }

    fn apply_number_font(&mut self, font: EquationFont) {
        self.number_font_summary = font.summary();
        self.staged_number_font = font;
    }
}

#[cfg(test)]
mod tests {
    use super::{
        AXIS_CONFIGURATION_TOOL_STATE, AxisDialogLifecycleHost, AxisFontDialogAdapter,
        HELP_CONTEXT, Window,
    };
    use tiara_core::equation_style::EquationFont;

    struct FontDialog {
        selection: Option<EquationFont>,
        seed: Option<EquationFont>,
    }

    impl AxisFontDialogAdapter for FontDialog {
        fn select_font(&mut self, current: &EquationFont) -> Option<EquationFont> {
            self.seed = Some(current.clone());
            self.selection.clone()
        }
    }

    struct LifecycleHost {
        state: u8,
        changes: Vec<u8>,
    }

    impl AxisDialogLifecycleHost for LifecycleHost {
        fn tool_state(&mut self) -> u8 {
            self.state
        }

        fn set_tool_state(&mut self, state: u8) {
            self.state = state;
            self.changes.push(state);
        }
    }

    #[test]
    fn dfs_and_dfp_create_initialize_owned_fonts_help_and_temporary_tool_state() {
        let staged = EquationFont {
            family: "Staged before create".to_owned(),
            ..EquationFont::default()
        };
        let mut window = Window::new(staged, 0, 1.0, 3);
        let mut host = LifecycleHost {
            state: 4,
            changes: Vec::new(),
        };

        window.on_create(&mut host);

        assert_eq!(window.staged_axis_font(), &EquationFont::default());
        assert_eq!(window.staged_number_font(), &EquationFont::default());
        assert_eq!(window.help_context(), HELP_CONTEXT);
        assert_eq!(host.state, AXIS_CONFIGURATION_TOOL_STATE);
        assert_eq!(host.changes, [AXIS_CONFIGURATION_TOOL_STATE]);
    }

    #[test]
    fn dfs_and_dfp_destroy_restore_the_tool_state_saved_during_creation() {
        let mut window = Window::new(EquationFont::default(), 0, 1.0, 3);
        let mut host = LifecycleHost {
            state: 4,
            changes: Vec::new(),
        };
        window.on_create(&mut host);

        window.on_destroy(&mut host);

        assert_eq!(host.state, 4);
        assert_eq!(host.changes, [AXIS_CONFIGURATION_TOOL_STATE, 4]);
    }

    #[test]
    fn cancel_keeps_the_staged_font_summary_and_number_controls() {
        let font = EquationFont::default();
        let mut window = Window::new(font.clone(), 2, 1_000.0, 6);
        let initial_summary = window.number_font_summary().to_owned();
        let mut dialog = FontDialog {
            selection: None,
            seed: None,
        };

        window.choose_number_font(&mut dialog);

        assert_eq!(dialog.seed, Some(font.clone()));
        assert_eq!(window.staged_number_font(), &font);
        assert_eq!(window.number_font_summary(), initial_summary);
        assert_eq!(window.number_format_index(), 2);
        assert!((window.divide_by_factor() - 1_000.0).abs() < f64::EPSILON);
        assert_eq!(window.precision(), 6);
    }

    #[test]
    fn acceptance_replaces_only_the_staged_number_font_and_summary() {
        let selected = EquationFont {
            family: "Source Sans 3".to_owned(),
            size_points: 14,
            bold: true,
            underline: true,
            ..EquationFont::default()
        };
        let mut window = Window::new(EquationFont::default(), 1, 10.0, 4);
        let mut dialog = FontDialog {
            selection: Some(selected.clone()),
            seed: None,
        };

        window.choose_number_font(&mut dialog);

        assert_eq!(window.staged_number_font(), &selected);
        assert_eq!(
            window.number_font_summary(),
            "Name: Source Sans 3, Size: 14, Style: Bold, UnderLine"
        );
        assert_eq!(window.number_format_index(), 1);
        assert!((window.divide_by_factor() - 10.0).abs() < f64::EPSILON);
        assert_eq!(window.precision(), 4);
    }

    #[test]
    fn dfp_font_choice_reuses_the_offset_independent_staging_contract() {
        let selected = EquationFont {
            family: "DFP Number Font".to_owned(),
            size_points: 11,
            italic: true,
            ..EquationFont::default()
        };
        let mut window = Window::new(EquationFont::default(), 2, 100.0, 5);
        let mut dialog = FontDialog {
            selection: Some(selected.clone()),
            seed: None,
        };

        window.choose_number_font(&mut dialog);

        assert_eq!(window.staged_number_font(), &selected);
        assert_eq!(
            window.number_font_summary(),
            "Name: DFP Number Font, Size: 11, Style: Italic"
        );
        assert_eq!(window.number_format_index(), 2);
        assert!((window.divide_by_factor() - 100.0).abs() < f64::EPSILON);
        assert_eq!(window.precision(), 5);
    }
}
