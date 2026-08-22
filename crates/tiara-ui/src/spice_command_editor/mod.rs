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
const ANALYSIS_COMMANDS: [&str; 4] = [".ac", ".dc", ".noise", ".tran"];
const SYNTAX_HINTS: [(&str, &str); 4] = [
    (
        ".ac",
        ".ac=<sweep type> <points value> <start frequency value> <end frequency value>",
    ),
    (
        ".dc",
        ".dc=[LIN] <sweep variable name> <start value> <end value> <increment value>\n[nested sweep specification]",
    ),
    (".noise", ".noise=V(<node> [,<node>]) <name>"),
    (
        ".tran",
        ".tran=<print step value> <final time value>\n[no-print value [step ceiling value]][SKIPBP]",
    ),
];

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
pub struct HintPopup {
    pub text: String,
    pub anchor: Bounds,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DialogResult {
    Execute,
    Other,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum Lifecycle {
    Active,
    Destroyed,
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
    CommandSelected(String),
    RowRemembered(usize),
    CellSelected {
        column: usize,
        row: usize,
        bounds: Bounds,
    },
    GridKeyPressed {
        column: usize,
        row: usize,
        bounds: Bounds,
    },
    TopLeftChanged,
    HintElapsed,
    Destroyed,
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
    selected_command: Option<String>,
    remembered_row: usize,
    selector_bounds: Option<Bounds>,
    selector_choices: Vec<String>,
    parser: ParserAdapter,
    destination: Vec<String>,
    existing_object_index: Option<usize>,
    schematic: SchematicState,
    font_name: String,
    validation_failed: bool,
    hint_popup: Option<HintPopup>,
    syntax_hints: Vec<(&'static str, &'static str)>,
    lifecycle: Lifecycle,
    last_close_allowed: Option<bool>,
    status: Option<String>,
}

impl Default for Window {
    fn default() -> Self {
        Self::from_destination(Vec::new())
    }
}

impl Window {
    /// Ports Ghidra function `FUN_01472b90` at `0x01472B90`.
    ///
    /// Builds the two-column command grid from the supplied name-value list,
    /// hides the overlaid selector, and creates the owned syntax-help state.
    /// Rust ownership replaces the recovered Delphi object allocation calls.
    #[must_use]
    pub fn from_destination(destination: Vec<String>) -> Self {
        let rows = parse_destination_rows(&destination);
        Self {
            rows,
            selected_command: None,
            remembered_row: 0,
            selector_bounds: None,
            selector_choices: Vec::new(),
            parser: ParserAdapter::default(),
            destination,
            existing_object_index: None,
            schematic: SchematicState::default(),
            font_name: "Default".to_owned(),
            validation_failed: false,
            hint_popup: None,
            syntax_hints: SYNTAX_HINTS.to_vec(),
            lifecycle: Lifecycle::Active,
            last_close_allowed: None,
            status: None,
        }
    }

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
            Message::CommandSelected(command) => {
                self.command_selection_changed(command);
            }
            Message::RowRemembered(index) => {
                self.select_cell(0, index, Bounds::default());
            }
            Message::CellSelected {
                column,
                row,
                bounds,
            } => {
                self.select_cell(column, row, bounds);
            }
            Message::GridKeyPressed {
                column,
                row,
                bounds,
            } => {
                self.show_syntax_hint(column, row, bounds);
            }
            Message::TopLeftChanged => {
                self.top_left_changed();
            }
            Message::HintElapsed => {
                self.hint_timer_elapsed();
            }
            Message::Destroyed => {
                self.destroy();
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
                self.last_close_allowed = Some(self.close_query_for(DialogResult::Execute));
            }
        }
    }

    /// Ports Ghidra function `FUN_01472aa0` at `0x01472AA0`.
    ///
    /// Commits a valid selector choice to the remembered command row. A
    /// change without an active data row has no grid effect.
    pub fn command_selection_changed(&mut self, command: String) -> bool {
        self.selected_command = Some(command);
        if self.selector_bounds.is_none() {
            return false;
        }
        let Some(row) = self.rows.get_mut(self.remembered_row) else {
            return false;
        };
        if let Some(command) = &self.selected_command {
            command.clone_into(&mut row.command);
        }
        true
    }

    /// Ports Ghidra function `FUN_014733e0` at `0x014733E0`.
    ///
    /// Commits the previous selector value, closes syntax help, and overlays
    /// the selector only on a valid command-column data cell. The selector
    /// contains unused analysis commands plus the cell's current command.
    pub fn select_cell(&mut self, column: usize, row: usize, bounds: Bounds) {
        self.commit_selector_selection();
        self.close_hint();
        self.remembered_row = row;
        if column != 0 || row >= self.rows.len() {
            self.hide_selector();
            self.selected_command = None;
            return;
        }

        self.selector_choices = self.available_commands(row);
        self.selected_command = self
            .selector_choices
            .iter()
            .find(|command| command.eq_ignore_ascii_case(&self.rows[row].command))
            .cloned();
        self.selector_bounds = Some(inset_grid_cell(bounds));
    }

    /// Ports Ghidra function `FUN_01473200` at `0x01473200`.
    ///
    /// Shows the matching syntax template while the value column is active.
    /// Unsupported commands and other columns leave the hint closed.
    pub fn show_syntax_hint(&mut self, column: usize, row: usize, bounds: Bounds) -> bool {
        self.close_hint();
        if column != 1 {
            return false;
        }
        let Some(command) = self.rows.get(row).map(|item| item.command.as_str()) else {
            return false;
        };
        let Some((_, syntax)) = self
            .syntax_hints
            .iter()
            .find(|(name, _)| name.eq_ignore_ascii_case(command))
        else {
            return false;
        };
        self.hint_popup = Some(HintPopup {
            text: (*syntax).to_owned(),
            anchor: bounds,
        });
        true
    }

    /// Ports Ghidra function `FUN_01473690` at `0x01473690`.
    ///
    /// Hides the overlaid selector when the grid scroll origin changes.
    pub const fn top_left_changed(&mut self) {
        self.hide_selector();
    }

    /// Ports Ghidra function `FUN_014731d0` at `0x014731D0`.
    ///
    /// Closes the transient syntax popup and disables its one-shot timer.
    pub fn hint_timer_elapsed(&mut self) {
        self.close_hint();
    }

    /// Ports Ghidra function `FUN_01473190` at `0x01473190`.
    ///
    /// Releases the popup and owned command-help lists. Rust drops their
    /// allocations; the flag makes repeated lifecycle messages harmless.
    pub fn destroy(&mut self) {
        if self.lifecycle == Lifecycle::Destroyed {
            return;
        }
        self.close_hint();
        self.selector_choices.clear();
        self.syntax_hints.clear();
        self.lifecycle = Lifecycle::Destroyed;
    }

    /// Ports Ghidra function `FUN_01472480` at `0x01472480`.
    ///
    /// Preserves a pending command choice in the remembered row, appends one
    /// blank row in all cases, and disables the selector.
    pub fn add_row(&mut self) {
        self.commit_selector_selection();
        self.rows.push(CommandRow::default());
        self.hide_selector();
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
        self.hide_selector();
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

    #[must_use]
    pub fn close_query(&self) -> bool {
        self.close_query_for(DialogResult::Execute)
    }

    /// Ports Ghidra function `FUN_01472b70` at `0x01472B70`.
    ///
    /// Blocks only the Execute modal result after validation failed. Other
    /// close paths, including Cancel, are not subject to the execution guard.
    #[must_use]
    pub fn close_query_for(&self, result: DialogResult) -> bool {
        result != DialogResult::Execute || !self.validation_failed
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let selector: Element<'_, Message> = if self.selector_bounds.is_some() {
            pick_list(
                self.selector_choices.as_slice(),
                self.selected_command.as_ref(),
                Message::CommandSelected,
            )
            .into()
        } else {
            text("Select a command cell").into()
        };
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
        if self.selector_bounds.is_none() {
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

impl Window {
    fn available_commands(&self, selected_row: usize) -> Vec<String> {
        let mut commands = ANALYSIS_COMMANDS
            .iter()
            .map(ToString::to_string)
            .filter(|candidate| {
                !self.rows.iter().any(|row| {
                    !row.command.is_empty() && row.command.eq_ignore_ascii_case(candidate)
                })
            })
            .collect::<Vec<_>>();
        let current = self.rows[selected_row].command.as_str();
        if !current.is_empty()
            && !commands
                .iter()
                .any(|command| command.eq_ignore_ascii_case(current))
        {
            commands.push(current.to_owned());
        }
        commands
    }

    fn commit_selector_selection(&mut self) {
        let Some(command) = &self.selected_command else {
            return;
        };
        let Some(row) = self.rows.get_mut(self.remembered_row) else {
            return;
        };
        command.clone_into(&mut row.command);
    }

    const fn hide_selector(&mut self) {
        self.selector_bounds = None;
    }

    fn close_hint(&mut self) {
        self.hint_popup = None;
    }
}

fn parse_destination_rows(destination: &[String]) -> Vec<CommandRow> {
    let rows = destination
        .iter()
        .map(|line| {
            let (command, value) = line.split_once(COMMAND_SEPARATOR).unwrap_or((line, ""));
            CommandRow {
                command: command.to_owned(),
                value: value.to_owned(),
            }
        })
        .collect::<Vec<_>>();
    if rows.is_empty() {
        vec![CommandRow::default()]
    } else {
        rows
    }
}

const fn inset_grid_cell(bounds: Bounds) -> Bounds {
    Bounds {
        left: bounds.left + 1,
        top: bounds.top + 1,
        right: bounds.right - 1,
        bottom: bounds.bottom - 1,
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
            selected_command: Some(".TRAN".to_owned()),
            ..Window::default()
        };
        window.add_row();
        assert_eq!(window.rows[0].command, ".TRAN");
        assert_eq!(window.rows.len(), 2);
        assert_eq!(window.rows[1], CommandRow::default());
        assert!(window.selector_bounds.is_none());
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
        assert!(window.close_query_for(DialogResult::Other));
        assert!(!window.close_query());
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

    #[test]
    fn form_creation_loads_destination_and_help_catalogue() {
        let window = Window::from_destination(vec![
            ".tran 1n 1u".to_owned(),
            ".noise V(out) source".to_owned(),
        ]);
        assert_eq!(
            window.rows,
            [
                CommandRow {
                    command: ".tran".to_owned(),
                    value: "1n 1u".to_owned(),
                },
                CommandRow {
                    command: ".noise".to_owned(),
                    value: "V(out) source".to_owned(),
                },
            ]
        );
        assert_eq!(window.lifecycle, Lifecycle::Active);
        assert_eq!(window.syntax_hints.len(), 4);
        assert!(window.selector_bounds.is_none());
    }

    #[test]
    fn selecting_command_cell_offers_unused_commands_and_current_value() {
        let mut window = Window::from_destination(vec![
            ".ac dec 10 1 1k".to_owned(),
            ".dc V1 0 5 1".to_owned(),
        ]);
        let bounds = Bounds {
            left: 10,
            top: 20,
            right: 110,
            bottom: 40,
        };
        window.select_cell(0, 0, bounds);
        assert_eq!(window.selector_choices, [".noise", ".tran", ".ac"]);
        assert_eq!(window.selected_command.as_deref(), Some(".ac"));
        assert_eq!(
            window.selector_bounds,
            Some(Bounds {
                left: 11,
                top: 21,
                right: 109,
                bottom: 39,
            })
        );
    }

    #[test]
    fn selector_change_commits_only_while_a_command_cell_is_active() {
        let mut window = Window::default();
        assert!(!window.command_selection_changed(".dc".to_owned()));
        assert!(window.rows[0].command.is_empty());
        window.select_cell(0, 0, Bounds::default());
        assert!(window.command_selection_changed(".dc".to_owned()));
        assert_eq!(window.rows[0].command, ".dc");
        window.select_cell(1, 0, Bounds::default());
        assert!(window.selector_bounds.is_none());
    }

    #[test]
    fn value_key_press_shows_matching_syntax_until_timer_elapsed() {
        let mut window = Window::from_destination(vec![".TRAN 1n 1u".to_owned()]);
        let bounds = Bounds {
            left: 1,
            top: 2,
            right: 3,
            bottom: 4,
        };
        assert!(window.show_syntax_hint(1, 0, bounds));
        assert_eq!(
            window.hint_popup.as_ref().map(|hint| hint.anchor),
            Some(bounds)
        );
        window.hint_timer_elapsed();
        assert!(window.hint_popup.is_none());
    }

    #[test]
    fn unsupported_hint_and_scroll_paths_are_safe_no_ops() {
        let mut window = Window::from_destination(vec![".op run".to_owned()]);
        assert!(!window.show_syntax_hint(1, 0, Bounds::default()));
        window.select_cell(0, 0, Bounds::default());
        assert!(window.selector_bounds.is_some());
        window.top_left_changed();
        assert!(window.selector_bounds.is_none());
    }

    #[test]
    fn destroy_releases_transient_owned_state_once() {
        let mut window = Window::default();
        assert!(!window.show_syntax_hint(1, 0, Bounds::default()));
        window.destroy();
        window.destroy();
        assert_eq!(window.lifecycle, Lifecycle::Destroyed);
        assert!(window.syntax_hints.is_empty());
        assert!(window.selector_choices.is_empty());
    }
}
