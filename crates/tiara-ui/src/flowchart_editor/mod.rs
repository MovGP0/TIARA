//! The TINA Flowchart Editor, as `Tools > Flowchart Editor` opens it.
//!
//! A menu bar, a strip of tools with the target processor beside them, a
//! status strip carrying the elapsed time, the line and two switches, and a
//! page control with four pages: the flowchart, the code, both together, and
//! a graph.
//!
//! The toolbar buttons carry no caption in the resource - each has a hint and
//! a glyph - so they are named here by their hints, which is what the original
//! shows when the pointer rests on one.

use iced::widget::{button, checkbox, column, combo_box, container, row, text, tooltip};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "TINA Flowchart Editor";
pub const SCREENSHOT: &str = "screenshots/Flowchart_Editor.png";
pub const FORM_RESOURCE: &str = "FlowChartMainForm";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("0104e230");

/// What the frame's own strip says. The editor's line and time are on the
/// strip the resource puts inside the window, which is drawn in the body.
const STATUS: &str = "Flowchart editor";

/// The menus, as the resource names them and in its order.
pub const MENUS: &[(&str, &[&str])] = &[
    (
        "File",
        &[
            "New Flowchart",
            "Open Flowchart",
            "-",
            "Save Flowchart",
            "Save Flowchart As...",
            "Save Flowchart Picture As...",
            "-",
            "Save ASM",
            "Save LST",
            "Save HEX",
            "-",
            "Exit",
        ],
    ),
    ("Edit", &["Copy", "Select All"]),
    ("Tools", &["Redraw", "Options", "Set Device..."]),
    (
        "Debug",
        &[
            "Run",
            "Run Until",
            "Step Forward",
            "Trace Stop",
            "Toggle Breakpoint",
            "-",
            "Preferences",
        ],
    ),
    ("Help", &["MCU Debugger", "FlowChart"]),
];

/// The toolbar, named by the hints the resource gives its buttons and in the
/// order it lays them out from the left.
pub const TOOLBAR: &[&str] = &[
    "New Flowchart",
    "Open Flowchart",
    "Save Flowchart",
    "Save To Macro",
    "Check Flowchart",
    "Run",
    "Step Forward (F8)",
    "Stop",
    "Toggle BreakPoint",
];

/// The four pages the page control carries.
pub const PAGES: [&str; 4] = ["Flowchart", "Code", "Flowchart+Code", "Graph"];

#[derive(Debug)]
pub struct Window {
    page: usize,
    processors: combo_box::State<String>,
    chosen_processor: Option<String>,
    elapsed: String,
    line: usize,
    locked: bool,
    animating: bool,
    running: bool,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            page: 0,
            // The processors come from the installed device set, so there are
            // none to list until it has been read.
            processors: combo_box::State::new(Vec::new()),
            chosen_processor: None,
            // What the original shows before anything has run.
            elapsed: "0 s".to_owned(),
            line: 1,
            locked: false,
            animating: false,
            running: false,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    PageChosen(usize),
    MenuCommand(&'static str),
    ToolCommand(&'static str),
    ProcessorChosen(String),
    LockToggled(bool),
    AnimateToggled(bool),
}

impl Window {
    #[must_use]
    pub const fn page(&self) -> usize {
        self.page
    }

    #[must_use]
    pub const fn is_running(&self) -> bool {
        self.running
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::PageChosen(index) => {
                if index < PAGES.len() {
                    self.page = index;
                }
            }
            Message::ProcessorChosen(value) => self.chosen_processor = Some(value),
            Message::LockToggled(on) => self.locked = on,
            Message::AnimateToggled(on) => self.animating = on,

            // Running and stopping are the two the editor can answer without a
            // flowchart to run; the rest read or write a file, or act on a
            // chart the shell has nowhere to keep yet.
            Message::ToolCommand(command) | Message::MenuCommand(command) => match command {
                "Run" => self.running = true,
                "Stop" | "Trace Stop" => {
                    self.running = false;
                    "0 s".clone_into(&mut self.elapsed);
                    self.line = 1;
                }
                _ => {}
            },
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut tools = row![].spacing(2);
        for command in TOOLBAR {
            tools = tools.push(tooltip(
                button(text(*command).size(11)).on_press(Message::ToolCommand(command)),
                text(*command).size(11),
                tooltip::Position::Bottom,
            ));
        }
        tools = tools.push(
            combo_box(
                &self.processors,
                "",
                self.chosen_processor.as_ref(),
                Message::ProcessorChosen,
            )
            .width(Length::Fixed(140.0)),
        );

        let status = row![
            text(format!("Time: {}", self.elapsed)).size(11),
            text(format!("Line: {}", self.line)).size(11),
            checkbox("Lock Editor", self.locked).on_toggle(Message::LockToggled),
            checkbox("Animate", self.animating).on_toggle(Message::AnimateToggled),
        ]
        .spacing(12);

        let mut tabs = row![].spacing(2);
        for (index, caption) in PAGES.iter().enumerate() {
            let face = if self.page == index {
                text(format!("[{caption}]")).size(11)
            } else {
                text(*caption).size(11)
            };
            tabs = tabs.push(button(face).on_press(Message::PageChosen(index)));
        }

        let body = column![
            tools,
            status,
            tabs,
            container(window_shell::surface(PAGES[self.page]))
                .width(Length::Fill)
                .height(Length::Fill),
        ]
        .spacing(6)
        .padding(8)
        .height(Length::Fill);

        window_shell::frame(
            TITLE,
            window_shell::menu_bar(MENUS, Message::MenuCommand("")),
            window_shell::empty_menu(),
            body.into(),
            STATUS,
        )
    }
}

#[cfg(test)]
mod tests {
    use super::{MENUS, Message, PAGES, TOOLBAR, Window};

    #[test]
    fn it_opens_on_the_flowchart_page() {
        let window = Window::default();
        assert_eq!(window.page(), 0);
        assert_eq!(PAGES[window.page()], "Flowchart");
        assert_eq!(window.line, 1);
        assert!(!window.is_running());
    }

    #[test]
    fn the_five_menus_are_the_ones_the_resource_names() {
        let names: Vec<&str> = MENUS.iter().map(|(name, _)| *name).collect();
        assert_eq!(names, ["File", "Edit", "Tools", "Debug", "Help"]);

        let file = MENUS[0].1;
        assert_eq!(file[0], "New Flowchart");
        assert!(file.contains(&"Save HEX"));
        assert_eq!(file[file.len() - 1], "Exit");
    }

    #[test]
    fn the_toolbar_is_named_by_the_hints_the_resource_gives_it() {
        assert_eq!(TOOLBAR.len(), 9);
        assert_eq!(TOOLBAR[0], "New Flowchart");
        assert!(TOOLBAR.contains(&"Step Forward (F8)"));
        assert!(TOOLBAR.contains(&"Toggle BreakPoint"));
    }

    #[test]
    fn a_page_that_is_not_there_is_ignored() {
        let mut window = Window::default();
        window.update(Message::PageChosen(PAGES.len()));
        assert_eq!(window.page(), 0);

        window.update(Message::PageChosen(3));
        assert_eq!(window.page(), 3);
    }

    #[test]
    fn running_and_stopping_are_one_state_whichever_reaches_them() {
        let mut window = Window::default();
        window.update(Message::ToolCommand("Run"));
        assert!(window.is_running());

        // The Debug menu's Trace Stop does what the toolbar's Stop does.
        window.update(Message::MenuCommand("Trace Stop"));
        assert!(!window.is_running());
    }

    #[test]
    fn stopping_puts_the_time_and_the_line_back() {
        let mut window = Window::default();
        window.update(Message::ToolCommand("Run"));
        window.update(Message::ToolCommand("Stop"));

        assert_eq!(window.elapsed, "0 s");
        assert_eq!(window.line, 1);
    }

    #[test]
    fn the_two_switches_are_kept_separately() {
        let mut window = Window::default();
        window.update(Message::LockToggled(true));
        assert!(window.locked);
        assert!(!window.animating);

        window.update(Message::AnimateToggled(true));
        assert!(window.animating);
    }
}
