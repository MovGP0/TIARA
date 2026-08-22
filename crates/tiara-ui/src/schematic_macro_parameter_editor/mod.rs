use iced::widget::{button, column, container, row, scrollable, text, text_input};
use iced::{Element, Length, Task};
use tiara_core::parameter_editor::{ParameterEditorError, ParameterRow, serialize_schematic_rows};

use crate::macro_parameter_editor_lifecycle::{LifecycleAdapter, initialize_vertical_resize};

pub const TITLE: &str = "Schematic macro parameters";
pub const FORM_RESOURCE: &str = "frmSchMacroParamEditor";

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    NameChanged { row: usize, value: String },
    ValueChanged { row: usize, value: String },
    Add,
    Delete,
    Accept,
    Cancel,
}

#[derive(Debug)]
pub struct Window {
    rows: Vec<ParameterRow>,
    serialized_result: String,
    modal_result: Option<u8>,
    last_error: Option<ParameterEditorError>,
}

impl Window {
    #[must_use]
    pub fn new(mut rows: Vec<ParameterRow>, serialized_result: String) -> Self {
        if rows.is_empty() {
            rows.push(ParameterRow::default());
        }
        Self {
            rows,
            serialized_result,
            modal_result: None,
            last_error: None,
        }
    }

    /// Ports Ghidra function `FUN_0141be20` at `0x0141BE20`.
    ///
    /// The form fixes its current width and uses its current height as the
    /// minimum. It therefore remains vertically resizable but cannot shrink.
    pub fn initialize_lifecycle(&self, adapter: &mut impl LifecycleAdapter) {
        initialize_vertical_resize(adapter);
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::NameChanged { row, value } => {
                if let Some(parameter) = self.rows.get_mut(row) {
                    parameter.name = value;
                }
            }
            Message::ValueChanged { row, value } => {
                if let Some(parameter) = self.rows.get_mut(row) {
                    parameter.value = value;
                }
            }
            Message::Add => self.add_empty_row(),
            Message::Delete => self.delete_last_row(),
            Message::Accept => self.accept(),
            Message::Cancel => {}
        }

        Task::none()
    }

    /// Validates names and stages serialized rows for modal acceptance.
    ///
    /// Reimplements Ghidra function `FUN_0141bfc0` at `0x0141BFC0`.
    /// Validation runs before the prior serialized result is cleared. A
    /// reserved, duplicate, or malformed name therefore keeps the old result
    /// and does not accept the window. Success replaces it with complete
    /// comma-separated `name=value` entries and accepts the modal window.
    pub fn accept(&mut self) {
        match serialize_schematic_rows(&self.rows) {
            Ok(serialized) => {
                self.serialized_result = serialized;
                self.modal_result = Some(1);
                self.last_error = None;
            }
            Err(error) => {
                self.modal_result = None;
                self.last_error = Some(error);
            }
        }
    }

    /// Appends one empty name/value row.
    ///
    /// Reimplements Ghidra function `FUN_0141c250` at `0x0141C250`. It does
    /// not validate, select, serialize, accept, or show a message.
    pub fn add_empty_row(&mut self) {
        self.rows.push(ParameterRow::default());
    }

    /// Removes only the final row while retaining one row.
    ///
    /// Reimplements Ghidra function `FUN_0141c2c0` at `0x0141C2C0`. It does
    /// not inspect the selected cell, ask for confirmation, serialize, or show
    /// a message.
    pub fn delete_last_row(&mut self) {
        if self.rows.len() > 1 {
            self.rows.pop();
        }
    }

    #[must_use]
    pub fn rows(&self) -> &[ParameterRow] {
        &self.rows
    }

    #[must_use]
    pub fn serialized_result(&self) -> &str {
        self.serialized_result.as_str()
    }

    #[must_use]
    pub const fn modal_result(&self) -> Option<u8> {
        self.modal_result
    }

    #[must_use]
    pub const fn last_error(&self) -> Option<&ParameterEditorError> {
        self.last_error.as_ref()
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let rows = self.rows.iter().enumerate().map(|(row_index, parameter)| {
            row![
                text_input("Name", &parameter.name).on_input(move |value| {
                    Message::NameChanged {
                        row: row_index,
                        value,
                    }
                }),
                text_input("Value", &parameter.value).on_input(move |value| {
                    Message::ValueChanged {
                        row: row_index,
                        value,
                    }
                }),
            ]
            .spacing(8)
            .into()
        });
        let error = self
            .last_error
            .as_ref()
            .map_or_else(String::new, ToString::to_string);
        let content = column![
            text(TITLE).size(18),
            scrollable(column(rows).spacing(8)),
            row![
                button("Add").on_press(Message::Add),
                button("Delete").on_press(Message::Delete),
            ]
            .spacing(8),
            text(error),
            row![
                button("OK").on_press(Message::Accept),
                button("Cancel").on_press(Message::Cancel),
            ]
            .spacing(8),
        ]
        .spacing(10);

        container(content)
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }
}

#[cfg(test)]
mod tests {
    use iced::Size;

    use super::*;
    use crate::macro_parameter_editor_lifecycle::ResizeConstraints;

    struct RecordingLifecycle {
        size: Size,
        constraints: Vec<ResizeConstraints>,
        help_context_calls: usize,
    }

    impl LifecycleAdapter for RecordingLifecycle {
        fn current_size(&self) -> Size {
            self.size
        }

        fn apply_resize_constraints(&mut self, constraints: ResizeConstraints) {
            self.constraints.push(constraints);
        }

        fn set_help_context(&mut self, _help_context: u32) {
            self.help_context_calls += 1;
        }
    }

    #[test]
    fn form_create_applies_only_the_recovered_vertical_resize_constraints() {
        let window = Window::new(Vec::new(), String::new());
        let mut lifecycle = RecordingLifecycle {
            size: Size::new(519.0, 282.0),
            constraints: Vec::new(),
            help_context_calls: 0,
        };

        window.initialize_lifecycle(&mut lifecycle);

        assert_eq!(lifecycle.constraints.len(), 1);
        let constraints = lifecycle.constraints[0];
        assert!((constraints.minimum_size.width - 519.0).abs() <= f32::EPSILON);
        assert!((constraints.minimum_size.height - 282.0).abs() <= f32::EPSILON);
        assert!((constraints.maximum_width - 519.0).abs() <= f32::EPSILON);
        assert_eq!(lifecycle.help_context_calls, 0);
    }

    #[test]
    fn add_appends_a_cleared_row_without_selecting_or_accepting() {
        let mut window = Window::new(
            vec![ParameterRow {
                name: "gain".to_owned(),
                value: "1".to_owned(),
            }],
            String::new(),
        );

        drop(window.update(Message::Add));

        assert_eq!(window.rows().len(), 2);
        assert_eq!(window.rows()[1], ParameterRow::default());
        assert_eq!(window.modal_result(), None);
    }

    #[test]
    fn delete_removes_only_the_last_row_and_keeps_one_row() {
        let mut window = Window::new(
            vec![ParameterRow::default(), ParameterRow::default()],
            String::new(),
        );

        drop(window.update(Message::Delete));
        assert_eq!(window.rows().len(), 1);
        drop(window.update(Message::Delete));
        assert_eq!(window.rows().len(), 1);
    }

    #[test]
    fn invalid_name_preserves_the_old_result_and_does_not_accept() {
        let mut window = Window::new(
            vec![ParameterRow {
                name: "TEMP".to_owned(),
                value: "1".to_owned(),
            }],
            "old".to_owned(),
        );

        drop(window.update(Message::Accept));

        assert_eq!(window.serialized_result(), "old");
        assert_eq!(window.modal_result(), None);
        assert_eq!(
            window.last_error(),
            Some(&ParameterEditorError::ReservedName("TEMP".to_owned()))
        );
    }

    #[test]
    fn valid_rows_replace_the_result_quote_composites_and_accept() {
        let mut window = Window::new(
            vec![
                ParameterRow {
                    name: "gain".to_owned(),
                    value: "2".to_owned(),
                },
                ParameterRow {
                    name: "model".to_owned(),
                    value: "a,b".to_owned(),
                },
                ParameterRow {
                    name: "unused".to_owned(),
                    value: String::new(),
                },
            ],
            "old".to_owned(),
        );

        window.accept();

        assert_eq!(window.serialized_result(), "gain=2,\"model=a,b\"");
        assert_eq!(window.modal_result(), Some(1));
        assert!(window.last_error().is_none());
    }
}
