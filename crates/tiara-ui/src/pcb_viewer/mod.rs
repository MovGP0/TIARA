use iced::Element;

use crate::shared::window_shell;

pub const TITLE: &str = "3D Viewer - Noname";
pub const SCREENSHOT: &str = "screenshots/PCB_Viewer_MainWindow.png";
pub const FORM_RESOURCE: &str = "SchematicEditor";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01c9b010");
const STATUS: &str = "3D board preview";
const MENUS: &[(&str, &[&str])] = &[
    (
        "File",
        &[
            "Save",
            "Export picture...",
            "Export SketchUp model...",
            "Export STEP model...",
            "Export STL model...",
            "Export VRML model...",
            "Export X3D model...",
            "Export netlist...",
            "Print...",
            "Print setup...",
            "Exit",
        ],
    ),
    ("View", &["Zoom In", "Zoom Out", "Redraw"]),
    ("Options...", &["Options..."]),
];

#[derive(Debug, Default)]
pub struct Window {
    command_selected: bool,
}

#[derive(Debug, Clone, Copy)]
pub enum Message {
    MenuSelected,
}

impl Window {
    pub const fn update(&mut self, _message: Message) {
        self.command_selected = true;
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let surface = if self.command_selected {
            "3D board viewport - command selected"
        } else {
            "3D board viewport"
        };

        window_shell::frame(
            TITLE,
            window_shell::menu_bar(MENUS, Message::MenuSelected),
            window_shell::empty_menu(),
            window_shell::surface(surface),
            STATUS,
        )
    }
}
