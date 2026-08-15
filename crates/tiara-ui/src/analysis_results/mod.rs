use iced::Element;

use crate::shared::window_shell;

pub const TITLE: &str = "Analysis results";
pub const SCREENSHOT: &str = "screenshots/Analysis_results_window.png";
pub const FORM_RESOURCE: &str = "DFWindow";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01a72620");
const STATUS: &str = "Ready";
const MENUS: &[(&str, &[&str])] = &[
    (
        "File",
        &[
            "Open...",
            "Save",
            "Save As...",
            "Export...",
            "Print...",
            "Close",
        ],
    ),
    ("Edit", &["Copy", "Copy all", "Select all"]),
    (
        "View",
        &[
            "Zoom in",
            "Zoom out",
            "Default curve width...",
            "Vector label style...",
            "Redraw",
        ],
    ),
    ("Process", &["Add curves...", "Evaluate...", "Fourier..."]),
    ("Help", &["Contents", "About"]),
];
const TOOLBAR: &[&str] = &[
    "Open", "Copy", "Select", "Zoom in", "Zoom out", "100%", "Grid", "Text", "Curve", "Cursor",
];

#[derive(Debug, Default)]
pub struct Window {
    command_selected: bool,
}

#[derive(Debug, Clone, Copy)]
pub enum Message {
    CommandSelected,
}

impl Window {
    pub const fn update(&mut self, _message: Message) {
        self.command_selected = true;
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let surface = if self.command_selected {
            "Analysis diagram - command selected"
        } else {
            "Analysis diagram"
        };

        window_shell::frame(
            TITLE,
            window_shell::menu_bar(MENUS, Message::CommandSelected),
            window_shell::toolbar(TOOLBAR, Message::CommandSelected),
            window_shell::surface(surface),
            STATUS,
        )
    }
}
