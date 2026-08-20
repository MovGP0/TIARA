use iced::widget::text_editor;
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Interpreter-<noname.ipr>";
pub const SCREENSHOT: &str = "screenshots/Interpreter_Window.png";
pub const FORM_RESOURCE: &str = "I_Class";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("017efdf0");
const STATUS: &str = "Line: 1 Col: 1    Successfully compiled    Editing commands";
const MENUS: &[(&str, &[&str])] = &[
    ("File", &["New", "Open...", "Save", "Save As...", "Close"]),
    ("Edit", &["Undo", "Cut", "Copy", "Paste", "Select All"]),
    ("Run", &["Evaluate", "Run", "Stop"]),
    ("Settings", &["Preferences...", "Font...", "Options..."]),
    ("Help", &["Contents", "About"]),
];
const TOOLBAR: &[&str] = &[
    "New",
    "Open",
    "Save",
    "Find",
    "Evaluate",
    "Run",
    "Add to schematic",
];

#[derive(Debug, Default)]
pub struct Window {
    program: text_editor::Content,
    symbols: Vec<InterpreterSymbol>,
}

#[derive(Debug, Clone, PartialEq, Eq)]
struct InterpreterSymbol {
    name: String,
}

#[derive(Debug, Clone)]
pub enum Message {
    Edit(text_editor::Action),
    RenameImaginaryUnit { previous: char, selected: char },
    CommandSelected,
}

impl Message {
    #[must_use = "pass this message to Window::update to rename the Interpreter symbol"]
    pub const fn rename_imaginary_unit(previous: char, selected: char) -> Self {
        Self::RenameImaginaryUnit { previous, selected }
    }
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::Edit(action) => {
                self.program.perform(action);
            }
            Message::RenameImaginaryUnit { previous, selected } => {
                self.rename_imaginary_unit_symbol(previous, selected);
            }
            Message::CommandSelected => {}
        }
    }

    /// Renames the Interpreter built-in imaginary-unit symbol.
    ///
    /// Implements the responsibility recovered at Ghidra address `0x013B37D0`
    /// for symbol `FUN_013b37d0`. The standard-library slice search keeps the
    /// record in its original position and changes only its name. A missing old
    /// name is a no-op.
    fn rename_imaginary_unit_symbol(&mut self, previous: char, selected: char) {
        let previous = previous.to_string();
        let Some(symbol) = self
            .symbols
            .iter_mut()
            .find(|symbol| symbol.name == previous)
        else {
            return;
        };

        symbol.name = selected.to_string();
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let editor = text_editor(&self.program)
            .on_action(Message::Edit)
            .height(Length::Fill);

        window_shell::frame(
            TITLE,
            window_shell::menu_bar(MENUS, Message::CommandSelected),
            window_shell::toolbar(TOOLBAR, Message::CommandSelected),
            editor.into(),
            STATUS,
        )
    }
}

#[cfg(test)]
mod tests {
    use super::{InterpreterSymbol, Message, Window};

    fn window_with_symbols(names: &[&str]) -> Window {
        Window {
            symbols: names
                .iter()
                .map(|name| InterpreterSymbol {
                    name: (*name).to_owned(),
                })
                .collect(),
            ..Window::default()
        }
    }

    fn symbol_names(window: &Window) -> Vec<&str> {
        window
            .symbols
            .iter()
            .map(|symbol| symbol.name.as_str())
            .collect()
    }

    #[test]
    fn update_renames_the_existing_imaginary_unit_symbol_in_place() {
        let mut window = window_with_symbols(&["pi", "i", "answer"]);
        let record_address = std::ptr::from_ref(&window.symbols[1]);

        window.update(Message::rename_imaginary_unit('i', 'j'));

        assert_eq!(symbol_names(&window), ["pi", "j", "answer"]);
        assert_eq!(std::ptr::from_ref(&window.symbols[1]), record_address);
    }

    #[test]
    fn update_does_not_change_symbols_when_the_old_name_is_absent() {
        let mut window = window_with_symbols(&["pi", "answer"]);

        window.update(Message::rename_imaginary_unit('i', 'j'));

        assert_eq!(symbol_names(&window), ["pi", "answer"]);
    }

    #[test]
    fn update_supports_renaming_j_back_to_i() {
        let mut window = window_with_symbols(&["pi", "j", "answer"]);

        window.update(Message::rename_imaginary_unit('j', 'i'));

        assert_eq!(symbol_names(&window), ["pi", "i", "answer"]);
    }

    #[test]
    fn update_keeps_the_symbol_when_the_selection_does_not_change() {
        let mut window = window_with_symbols(&["pi", "j", "answer"]);

        window.update(Message::rename_imaginary_unit('j', 'j'));

        assert_eq!(symbol_names(&window), ["pi", "j", "answer"]);
    }
}
