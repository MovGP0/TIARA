//! SPICE command grid and schematic text editor.
//!
//! `iced` supplies the state and widgets. [`ParserAdapter`] isolates the
//! temporary syntax parser so a simulator parser can replace it later.

use std::fmt;

use iced::widget::{button, column, container, pick_list, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

pub const TITLE: &str = "SPICE Command Editor";
pub const FORM_RESOURCE: &str = "SpiceCommandEditor";
const COMMAND_SEPARATOR: &str = " ";
const COMMAND_CHOICES: [&str; 6] = [".AC", ".DC", ".OP", ".OPTIONS", ".TRAN", ".TEMP"];

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct CommandRow {
    pub command: String,
    pub value: String,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct Point {
    pub x: i32,
    pub y: i32,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct Bounds {
    pub left: i32,
    pub top: i32,
    pub right: i32,
    pub bottom: i32,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct SchematicTextObject {
    pub subtype: u8,
    pub lines: Vec<String>,
    pub font_name: String,
    pub position: Point,
    pub bounds: Bounds,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct SchematicState {
    pub text_objects: Vec<SchematicTextObject>,
    pub changed: bool,
    pub refreshed_bounds: Vec<Bounds>,
    pub insertion_position: Point,
}

#[derive(Clone, Copy)]
pub struct ParserAdapter {
    parse: fn(&[String]) -> Result<(), String>,
}

impl fmt::Debug for ParserAdapter {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str("ParserAdapter")
    }
}

impl Default for ParserAdapter {
    fn default() -> Self {
        Self::new(temporary_spice_parse)
    }
}

impl ParserAdapter {
    #[must_use]
    pub const fn new(parse: fn(&[String]) -> Result<(), String>) -> Self {
        Self { parse }
    }

    fn validate(self, commands: &[String]) -> Result<(), String> {
        (self.parse)(commands)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PlaceOutcome {
    NoCommands,
    Inserted(usize),
    Updated(usize),
}

#[derive(Debug, Clone)]
pub enum Message {
    CommandChanged(usize, String),
    ValueChanged(usize, String),
    CommandSelected(&'static str),
    RowRemembered(usize),
    Add,
    Delete,
    SyntaxCheck,
    Execute,
    Accept,
    Place,
    CloseRequested,
}

#[derive(Debug)]
pub struct Window {
    rows: Vec<CommandRow>,
    selected_command: Option<&'static str>,
    remembered_row: usize,
    selector_enabled: bool,
    parser: ParserAdapter,
    destination: Vec<String>,
    existing_object_index: Option<usize>,
    schematic: SchematicState,
    font_name: String,
    validation_failed: bool,
    last_close_allowed: Option<bool>,
    status: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            rows: vec![CommandRow::default()],
            selected_command: None,
            remembered_row: 0,
            selector_enabled: true,
            parser: ParserAdapter::default(),
            destination: Vec::new(),
            existing_object_index: None,
            schematic: SchematicState::default(),
            font_name: "Default".to_owned(),
            validation_failed: false,
            last_close_allowed: None,
            status: None,
        }
    }
}

impl Window {
    #[must_use]
    pub fn with_parser(parser: ParserAdapter) -> Self {
        Self {
            parser,
            ..Self::default()
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::CommandChanged(index, value) => {
                if let Some(row) = self.rows.get_mut(index) {
                    row.command = value;
                }
            }
            Message::ValueChanged(index, value) => {
                if let Some(row) = self.rows.get_mut(index) {
                    row.value = value;
                }
            }
            Message::CommandSelected(command) => self.selected_command = Some(command),
            Message::RowRemembered(index) => {
                self.remembered_row = index;
                self.selector_enabled = true;
            }
            Message::Add => self.add_row(),
            Message::Delete => {
                self.remove_final_row();
            }
            Message::SyntaxCheck => {
                self.syntax_check();
            }
            Message::Execute => {
                self.execute();
            }
            Message::Accept => self.accept(),
            Message::Place => {
                self.place_or_update_schematic();
            }
            Message::CloseRequested => {
                self.last_close_allowed = Some(self.close_query());
            }
        }
    }

    /// Ports Ghidra function `FUN_01472480` at `0x01472480`.
    ///
    /// Preserves a pending command choice in the remembered row, appends one
    /// blank row in all cases, and disables the selector.
    pub fn add_row(&mut self) {
        if let (Some(command), Some(row)) = (
            self.selected_command,
            self.rows.get_mut(self.remembered_row),
        ) {
            command.clone_into(&mut row.command);
        }
        self.rows.push(CommandRow::default());
        self.selector_enabled = false;
    }

    /// Ports Ghidra function `FUN_01472580` at `0x01472580`.
    ///
    /// Removes the final row only. The last available data row is cleared but
    /// retained to preserve the recovered two-row grid minimum with its header.
    pub fn remove_final_row(&mut self) -> bool {
        if self.rows.len() > 1 {
            self.rows.pop();
        } else if let Some(row) = self.rows.last_mut() {
            *row = CommandRow::default();
        } else {
            return false;
        }
        self.selector_enabled = false;
        true
    }

    /// Ports Ghidra function `FUN_014725f0` at `0x014725F0`.
    ///
    /// Validates complete rows, stores the inverse result in the close guard,
    /// and runs the accept path only after successful validation.
    pub fn execute(&mut self) -> bool {
        match self.validate_commands() {
            Ok(()) => {
                self.validation_failed = false;
                self.accept();
                true
            }
            Err(error) => {
                self.validation_failed = true;
                self.status = Some(error);
                false
            }
        }
    }

    /// Ports Ghidra function `FUN_01472630` at `0x01472630`.
    ///
    /// Rebuilds the destination list from complete rows in list mode. Existing
    /// object mode delegates to the schematic update path without validation.
    pub fn accept(&mut self) {
        if self.existing_object_index.is_some() {
            self.place_or_update_schematic();
        } else {
            self.destination = self.complete_commands();
        }
    }

    /// Ports Ghidra function `FUN_014727e0` at `0x014727E0`.
    ///
    /// Inserts subtype-4 schematic text for complete rows, or updates the
    /// indexed existing object and records its refreshed bounds. Empty command
    /// input is a no-op.
    pub fn place_or_update_schematic(&mut self) -> PlaceOutcome {
        let commands = self.complete_commands();
        if commands.is_empty() {
            return PlaceOutcome::NoCommands;
        }
        if let Some(index) = self.existing_object_index {
            let Some(object) = self.schematic.text_objects.get_mut(index) else {
                return PlaceOutcome::NoCommands;
            };
            object.lines = commands;
            self.schematic.changed = true;
            self.schematic.refreshed_bounds.push(object.bounds);
            PlaceOutcome::Updated(index)
        } else {
            let index = self.schematic.text_objects.len();
            self.schematic.text_objects.push(SchematicTextObject {
                subtype: 4,
                lines: commands,
                font_name: self.font_name.clone(),
                position: self.schematic.insertion_position,
                bounds: Bounds::default(),
            });
            PlaceOutcome::Inserted(index)
        }
    }

    /// Ports Ghidra function `FUN_01472a90` at `0x01472A90`.
    ///
    /// Runs shared validation and reports its status without applying commands
    /// to the destination list or schematic.
    pub fn syntax_check(&mut self) -> bool {
        match self.validate_commands() {
            Ok(()) => {
                self.status = Some("SPICE command syntax is valid".to_owned());
                true
            }
            Err(error) => {
                self.status = Some(error);
                false
            }
        }
    }

    /// Ports Ghidra function `FUN_014736b0` at `0x014736B0`.
    ///
    /// Builds only complete command rows and submits a nonempty temporary list
    /// to the configured parser adapter. An empty list skips parsing.
    ///
    /// # Errors
    ///
    /// Returns the parser diagnostic for invalid command text.
    pub fn validate_commands(&self) -> Result<(), String> {
        let commands = self.complete_commands();
        if commands.is_empty() {
            return Ok(());
        }
        self.parser.validate(&commands)
    }

    #[must_use]
    pub fn complete_commands(&self) -> Vec<String> {
        self.rows
            .iter()
            .filter(|row| !row.command.is_empty() && !row.value.is_empty())
            .map(|row| format!("{}{COMMAND_SEPARATOR}{}", row.command, row.value))
            .collect()
    }

    pub const fn close_query(&mut self) -> bool {
        let can_close = !self.validation_failed;
        self.validation_failed = false;
        can_close
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let selector = pick_list(
            COMMAND_CHOICES,
            self.selected_command,
            Message::CommandSelected,
        );
        let mut grid = column![row![
            text("Command").width(Length::FillPortion(2)),
            text("Value").width(Length::FillPortion(3)),
        ]]
        .spacing(6);
        for (index, command_row) in self.rows.iter().enumerate() {
            grid = grid.push(
                row![
                    text_input("Command", &command_row.command)
                        .on_input(move |value| Message::CommandChanged(index, value))
                        .width(Length::FillPortion(2)),
                    text_input("Value", &command_row.value)
                        .on_input(move |value| Message::ValueChanged(index, value))
                        .width(Length::FillPortion(3)),
                    button("Select").on_press(Message::RowRemembered(index)),
                ]
                .spacing(6)
                .align_y(Alignment::Center),
            );
        }

        let mut body = column![
            row![selector, button("Add").on_press(Message::Add)]
                .spacing(8)
                .align_y(Alignment::Center),
            scrollable(grid).height(Length::Fill),
            row![
                button("Delete").on_press(Message::Delete),
                button("Syntax check").on_press(Message::SyntaxCheck),
                button("Execute").on_press(Message::Execute),
                button("Add to schematic").on_press(Message::Place),
                button("OK").on_press(Message::Accept),
            ]
            .spacing(8),
        ]
        .padding(16)
        .spacing(12);
        if !self.selector_enabled {
            body = body.push(text("Select a command row to enable the selector"));
        }
        if let Some(status) = &self.status {
            body = body.push(text(status));
        }
        container(body)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

fn temporary_spice_parse(commands: &[String]) -> Result<(), String> {
    commands
        .iter()
        .find(|command| {
            let name = command.split_whitespace().next().unwrap_or_default();
            !name.starts_with('.') || name.len() == 1
        })
        .map_or(Ok(()), |command| {
            Err(format!("Invalid SPICE command: {command}"))
        })
}

#[cfg(test)]
mod tests {
    use super::*;

    fn reject_bad(commands: &[String]) -> Result<(), String> {
        if commands.iter().any(|command| command.contains("bad")) {
            Err("parser rejected command".to_owned())
        } else {
            Ok(())
        }
    }

    #[test]
    fn add_preserves_pending_selection_and_always_appends_blank_row() {
        let mut window = Window {
            selected_command: Some(".TRAN"),
            ..Window::default()
        };
        window.add_row();
        assert_eq!(window.rows[0].command, ".TRAN");
        assert_eq!(window.rows.len(), 2);
        assert_eq!(window.rows[1], CommandRow::default());
        assert!(!window.selector_enabled);
    }

    #[test]
    fn delete_targets_the_end_and_keeps_one_data_row() {
        let mut window = Window::default();
        window.rows[0] = CommandRow {
            command: ".OP".to_owned(),
            value: "run".to_owned(),
        };
        window.add_row();
        assert!(window.remove_final_row());
        assert_eq!(window.rows.len(), 1);
        assert!(window.remove_final_row());
        assert_eq!(window.rows, [CommandRow::default()]);
    }

    #[test]
    fn extraction_skips_empty_and_incomplete_rows() {
        let window = Window {
            rows: vec![
                CommandRow {
                    command: ".TRAN".to_owned(),
                    value: "1n 1u".to_owned(),
                },
                CommandRow {
                    command: ".TEMP".to_owned(),
                    value: String::new(),
                },
                CommandRow::default(),
            ],
            ..Window::default()
        };
        assert_eq!(window.complete_commands(), [".TRAN 1n 1u"]);
    }

    #[test]
    fn syntax_check_does_not_apply_commands() {
        let mut window = Window::default();
        window.rows[0] = CommandRow {
            command: ".OP".to_owned(),
            value: "run".to_owned(),
        };
        assert!(window.syntax_check());
        assert!(window.destination.is_empty());
        assert!(window.schematic.text_objects.is_empty());
    }

    #[test]
    fn execute_applies_valid_rows_to_the_destination_list() {
        let mut window = Window::default();
        window.rows[0] = CommandRow {
            command: ".TRAN".to_owned(),
            value: "1n 1u".to_owned(),
        };
        assert!(window.execute());
        assert_eq!(window.destination, [".TRAN 1n 1u"]);
        assert!(window.close_query());
    }

    #[test]
    fn execute_failure_blocks_one_close_and_does_not_apply() {
        let mut window = Window::with_parser(ParserAdapter::new(reject_bad));
        window.rows[0] = CommandRow {
            command: ".TEST".to_owned(),
            value: "bad".to_owned(),
        };
        assert!(!window.execute());
        assert!(window.destination.is_empty());
        assert!(!window.close_query());
        assert!(window.close_query());
    }

    #[test]
    fn place_inserts_subtype_four_and_empty_rows_are_a_no_op() {
        let mut window = Window::default();
        assert_eq!(window.place_or_update_schematic(), PlaceOutcome::NoCommands);
        window.rows[0] = CommandRow {
            command: ".DC".to_owned(),
            value: "V1 0 5 1".to_owned(),
        };
        assert_eq!(
            window.place_or_update_schematic(),
            PlaceOutcome::Inserted(0)
        );
        assert_eq!(window.schematic.text_objects[0].subtype, 4);
    }

    #[test]
    fn existing_object_mode_updates_and_refreshes_bounds() {
        let mut window = Window::default();
        let bounds = Bounds {
            left: 1,
            top: 2,
            right: 3,
            bottom: 4,
        };
        window.schematic.text_objects.push(SchematicTextObject {
            subtype: 4,
            lines: vec!["old".to_owned()],
            font_name: "Default".to_owned(),
            position: Point::default(),
            bounds,
        });
        window.existing_object_index = Some(0);
        window.rows[0] = CommandRow {
            command: ".TEMP".to_owned(),
            value: "25".to_owned(),
        };
        assert_eq!(window.place_or_update_schematic(), PlaceOutcome::Updated(0));
        assert_eq!(window.schematic.text_objects[0].lines, [".TEMP 25"]);
        assert!(window.schematic.changed);
        assert_eq!(window.schematic.refreshed_bounds, [bounds]);
    }
}
