//! Iced state for the recovered coordinate-system pen dialog.

use iced::Task;

pub const TITLE: &str = "Pen";
pub const HELP_CONTEXT: u32 = 0x20c;
pub const ARROW_HELP_CONTEXT: u32 = 0x217;
const COLORS: [u32; 14] = [
    0x0000_0000,
    0x0000_0080,
    0x0000_8000,
    0x0000_8080,
    0x0080_0000,
    0x0080_0080,
    0x0080_8000,
    0x0080_8080,
    0x00c0_c0c0,
    0x0000_ff00,
    0x0000_ffff,
    0x00ff_0000,
    0x00ff_00ff,
    0x00ff_ff00,
];
const STYLES: [PenStyle; 5] = [
    PenStyle::Solid,
    PenStyle::Dash,
    PenStyle::Dot,
    PenStyle::DashDot,
    PenStyle::DashDotDot,
];

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum PenStyle {
    #[default]
    Solid,
    Dash,
    Dot,
    DashDot,
    DashDotDot,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PenValue {
    pub color: u32,
    pub width: u16,
    pub style: PenStyle,
}

impl Default for PenValue {
    fn default() -> Self {
        Self {
            color: 0,
            width: 1,
            style: PenStyle::Solid,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Message {
    ColorSelected(usize),
    StyleSelected(usize),
    WidthChanged(u16),
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Window {
    staged_pen: PenValue,
    color_index: usize,
    style_index: usize,
    width: u16,
    help_context: u32,
}

impl Window {
    /// Implements Ghidra function `FUN_01ac89b0` at `0x01AC89B0`.
    ///
    /// Installs the recovered help context and creates one dialog-owned staged
    /// pen with the standard black, solid, one-unit defaults.
    pub fn on_create(&mut self) {
        self.initialize(HELP_CONTEXT);
    }

    /// Implements Ghidra function `FUN_01ac9400` at `0x01AC9400`.
    ///
    /// Installs the arrow-dialog help context and creates one dialog-owned
    /// staged pen with the standard black, solid, one-unit defaults.
    pub fn on_arrow_create(&mut self) {
        self.initialize(ARROW_HELP_CONTEXT);
    }

    fn initialize(&mut self, help_context: u32) {
        self.help_context = help_context;
        self.staged_pen = PenValue::default();
        self.color_index = 0;
        self.style_index = 0;
        self.width = self.staged_pen.width;
    }

    /// Implements Ghidra function `FUN_01ac89e0` at `0x01AC89E0`.
    /// Also implements Ghidra function `FUN_01ac9430` at `0x01AC9430`.
    ///
    /// Consuming either recovered pen dialog ends the lifetime of its staged
    /// pen through Rust ownership.
    pub const fn on_destroy(self) {}

    /// Implements Ghidra function `FUN_01ac8a00` at `0x01AC8A00`.
    /// Also implements Ghidra function `FUN_01ac9450` at `0x01AC9450`.
    ///
    /// Copies either recovered dialog's selected Delphi color, line style, and
    /// width controls into its staged pen when the form closes.
    pub fn on_close(&mut self) {
        self.staged_pen.color = COLORS.get(self.color_index).copied().unwrap_or_default();
        self.staged_pen.style = STYLES.get(self.style_index).copied().unwrap_or_default();
        self.staged_pen.width = self.width;
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::ColorSelected(index) => self.color_index = index,
            Message::StyleSelected(index) => self.style_index = index,
            Message::WidthChanged(width) => self.width = width,
        }
        Task::none()
    }

    #[must_use]
    pub const fn staged_pen(&self) -> PenValue {
        self.staged_pen
    }

    #[must_use]
    pub const fn color_index(&self) -> usize {
        self.color_index
    }

    #[must_use]
    pub const fn style_index(&self) -> usize {
        self.style_index
    }

    #[must_use]
    pub const fn width(&self) -> u16 {
        self.width
    }

    #[must_use]
    pub const fn help_context(&self) -> u32 {
        self.help_context
    }
}

#[cfg(test)]
mod tests {
    use super::{ARROW_HELP_CONTEXT, HELP_CONTEXT, Message, PenValue, Window};

    #[test]
    fn create_initializes_the_owned_pen_and_help_context() {
        let mut window = Window::default();
        let _ = window.update(Message::ColorSelected(7));
        let _ = window.update(Message::StyleSelected(3));
        let _ = window.update(Message::WidthChanged(9));

        window.on_create();

        assert_eq!(window.staged_pen(), PenValue::default());
        assert_eq!(window.color_index(), 0);
        assert_eq!(window.style_index(), 0);
        assert_eq!(window.width(), 1);
        assert_eq!(window.help_context(), HELP_CONTEXT);
    }

    #[test]
    fn arrow_create_uses_its_help_context_and_the_shared_pen_defaults() {
        let mut window = Window::default();
        let _ = window.update(Message::WidthChanged(8));

        window.on_arrow_create();

        assert_eq!(window.staged_pen(), PenValue::default());
        assert_eq!(window.width(), 1);
        assert_eq!(window.help_context(), ARROW_HELP_CONTEXT);
    }

    #[test]
    fn destroy_releases_the_owned_staged_pen() {
        let mut window = Window::default();
        window.on_create();

        window.on_destroy();
    }

    #[test]
    fn pen_and_arrow_close_copy_color_style_and_width_into_the_staged_pen() {
        let mut window = Window::default();
        window.on_create();
        let _ = window.update(Message::ColorSelected(11));
        let _ = window.update(Message::StyleSelected(4));
        let _ = window.update(Message::WidthChanged(7));

        window.on_close();

        assert_eq!(
            window.staged_pen(),
            PenValue {
                color: 0x00ff_0000,
                width: 7,
                style: super::PenStyle::DashDotDot,
            }
        );
    }
}
