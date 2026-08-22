//! Iced editor and host bridge for SPICE macro parameters.
//!
//! Library evaluation: Iced 0.13.1 supplies the existing editor state and
//! typed messages. `tiara-core` supplies the recovered SPICE validation and
//! serialization rules. A small host trait adapts caller modes, current text,
//! decoding, and accepted-text application. No second window or modal crate is
//! required.

use iced::widget::{button, column, container, row, scrollable, text, text_input};
use iced::{Element, Length, Task};
use tiara_core::parameter_editor::{
    ParameterEditorError, ParameterRow, SpiceSerializationConfig, serialize_spice_memo,
    serialize_spice_rows,
};

use crate::macro_parameter_editor_lifecycle::{LifecycleAdapter, initialize_vertical_resize};

pub const TITLE: &str = "SPICE macro parameters";
pub const FORM_RESOURCE: &str = "frmSpiceMacroParamEditor";
pub const HELP_CONTEXT: u32 = 0x4a8;

pub trait Host {
    fn serialization_config(&self) -> SpiceSerializationConfig;
    fn current_parameter_text(&self) -> &str;
    fn decode_parameter_rows(&self, serialized: &str) -> Vec<ParameterRow>;
    fn apply_serialized_text(&mut self, serialized: String);
}

/// Ports Ghidra function `FUN_01436290` at `0x01436290`.
///
/// Builds the existing SPICE macro editor from caller modes and current text.
/// Only modal result one applies the editor's staged serialized text through
/// the caller adapter. Cancel, another result, and failed validation leave the
/// caller text unchanged.
pub fn edit_host_parameters(host: &mut impl Host, run_modal: impl FnOnce(&mut Window)) -> u8 {
    let current_text = host.current_parameter_text().to_owned();
    let rows = host.decode_parameter_rows(&current_text);
    let config = host.serialization_config();
    let mut editor = Window::new_grid(rows, config, current_text);
    run_modal(&mut editor);

    let modal_result = editor.modal_result().unwrap_or_default();
    if modal_result == 1 {
        host.apply_serialized_text(editor.staged_result().to_owned());
    }
    modal_result
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InputMode {
    Grid,
    Memo,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    NameChanged { row: usize, value: String },
    ValueChanged { row: usize, value: String },
    MemoChanged(String),
    Accept,
    Cancel,
}

#[derive(Debug)]
pub struct Window {
    rows: Vec<ParameterRow>,
    memo_text: String,
    mode: InputMode,
    config: SpiceSerializationConfig,
    staged_result: String,
    modal_result: Option<u8>,
    last_error: Option<ParameterEditorError>,
    editor_mode_flags: [bool; 2],
    close_veto: bool,
}

impl Window {
    #[must_use]
    pub const fn new_grid(
        rows: Vec<ParameterRow>,
        config: SpiceSerializationConfig,
        staged_result: String,
    ) -> Self {
        Self {
            rows,
            memo_text: String::new(),
            mode: InputMode::Grid,
            config,
            staged_result,
            modal_result: None,
            last_error: None,
            editor_mode_flags: [false; 2],
            close_veto: false,
        }
    }

    #[must_use]
    pub fn new_memo(memo_lines: &[String], pair_separator: char, staged_result: String) -> Self {
        Self {
            rows: Vec::new(),
            memo_text: memo_lines.join("\n"),
            mode: InputMode::Memo,
            config: SpiceSerializationConfig {
                pair_separator,
                ..SpiceSerializationConfig::default()
            },
            staged_result,
            modal_result: None,
            last_error: None,
            editor_mode_flags: [false; 2],
            close_veto: false,
        }
    }

    /// Ports Ghidra function `FUN_0141b560` at `0x0141B560`.
    ///
    /// The form fixes its current width, sets its current height as the minimum,
    /// clears both recovered editor-mode flags, and assigns help context `0x4A8`.
    pub fn initialize_lifecycle(&mut self, adapter: &mut impl LifecycleAdapter) {
        initialize_vertical_resize(adapter);
        self.editor_mode_flags = [false; 2];
        adapter.set_help_context(HELP_CONTEXT);
    }

    /// Ports Ghidra function `FUN_0141b540` at `0x0141B540`.
    ///
    /// A pending validation error vetoes one close request. The query always
    /// clears the veto, so a later Cancel or close request can proceed.
    #[must_use]
    pub const fn query_close(&mut self) -> bool {
        let can_close = !self.close_veto;
        self.close_veto = false;
        can_close
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
            Message::MemoChanged(value) => {
                self.memo_text = value;
            }
            Message::Accept => self.accept(),
            Message::Cancel => self.modal_result = Some(2),
        }

        Task::none()
    }

    /// Validates and stages the serialized parameter result for modal OK.
    ///
    /// Reimplements Ghidra function `FUN_0141ad70` at `0x0141AD70`. The prior
    /// staged result is cleared before grid validation. A validation error
    /// therefore leaves an empty result and does not accept the window. Grid
    /// mode includes complete name/value pairs. Memo mode includes nonempty
    /// lines. Both paths omit the final pair delimiter.
    pub fn accept(&mut self) {
        self.staged_result.clear();
        let result = match self.mode {
            InputMode::Grid => {
                self.close_veto = false;
                serialize_spice_rows(&self.rows, &self.config)
            }
            InputMode::Memo => {
                let lines = self
                    .memo_text
                    .lines()
                    .map(str::to_owned)
                    .collect::<Vec<_>>();
                Ok(serialize_spice_memo(&lines, self.config.pair_separator))
            }
        };

        match result {
            Ok(serialized) => {
                self.staged_result = serialized;
                self.modal_result = Some(1);
                self.last_error = None;
            }
            Err(error) => {
                self.modal_result = None;
                self.last_error = Some(error);
                self.close_veto = true;
            }
        }
    }

    #[must_use]
    pub const fn editor_mode_flags(&self) -> [bool; 2] {
        self.editor_mode_flags
    }

    #[must_use]
    pub fn rows(&self) -> &[ParameterRow] {
        &self.rows
    }

    #[must_use]
    pub fn staged_result(&self) -> &str {
        self.staged_result.as_str()
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
        let editor: Element<'_, Message> = match self.mode {
            InputMode::Grid => {
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
                scrollable(column(rows).spacing(8)).into()
            }
            InputMode::Memo => text_input("Parameters", &self.memo_text)
                .on_input(Message::MemoChanged)
                .into(),
        };
        let error = self
            .last_error
            .as_ref()
            .map_or_else(String::new, ToString::to_string);
        let content = column![
            text(TITLE).size(18),
            editor,
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
    use tiara_core::parameter_editor::{MacroValueRule, SpiceValueValidation};

    use super::*;
    use crate::macro_parameter_editor_lifecycle::ResizeConstraints;

    struct RecordingLifecycle {
        size: Size,
        constraints: Vec<ResizeConstraints>,
        help_contexts: Vec<u32>,
    }

    impl LifecycleAdapter for RecordingLifecycle {
        fn current_size(&self) -> Size {
            self.size
        }

        fn apply_resize_constraints(&mut self, constraints: ResizeConstraints) {
            self.constraints.push(constraints);
        }

        fn set_help_context(&mut self, help_context: u32) {
            self.help_contexts.push(help_context);
        }
    }

    #[derive(Debug)]
    struct TestHost {
        config: SpiceSerializationConfig,
        current_text: String,
        decoded_rows: Vec<ParameterRow>,
        applied: Vec<String>,
    }

    impl Host for TestHost {
        fn serialization_config(&self) -> SpiceSerializationConfig {
            self.config.clone()
        }

        fn current_parameter_text(&self) -> &str {
            &self.current_text
        }

        fn decode_parameter_rows(&self, serialized: &str) -> Vec<ParameterRow> {
            assert_eq!(serialized, self.current_text);
            self.decoded_rows.clone()
        }

        fn apply_serialized_text(&mut self, serialized: String) {
            serialized.clone_into(&mut self.current_text);
            self.applied.push(serialized);
        }
    }

    fn host() -> TestHost {
        TestHost {
            config: SpiceSerializationConfig {
                pair_separator: ';',
                validation: SpiceValueValidation::None,
                quoted_value_prefixes: vec![String::from("PWL(")],
            },
            current_text: String::from("old=1"),
            decoded_rows: vec![ParameterRow {
                name: String::from("old"),
                value: String::from("1"),
            }],
            applied: Vec::new(),
        }
    }

    #[test]
    fn form_create_applies_vertical_resize_constraints_clears_modes_and_sets_help() {
        let mut window = Window::new_grid(
            Vec::new(),
            SpiceSerializationConfig::default(),
            String::new(),
        );
        window.editor_mode_flags = [true, true];
        let mut lifecycle = RecordingLifecycle {
            size: Size::new(480.0, 120.0),
            constraints: Vec::new(),
            help_contexts: Vec::new(),
        };

        window.initialize_lifecycle(&mut lifecycle);

        assert_eq!(window.editor_mode_flags(), [false, false]);
        assert_eq!(lifecycle.constraints.len(), 1);
        let constraints = lifecycle.constraints[0];
        assert!((constraints.minimum_size.width - 480.0).abs() <= f32::EPSILON);
        assert!((constraints.minimum_size.height - 120.0).abs() <= f32::EPSILON);
        assert!((constraints.maximum_width - 480.0).abs() <= f32::EPSILON);
        assert_eq!(lifecycle.help_contexts, [HELP_CONTEXT]);
    }

    #[test]
    fn validation_failure_vetoes_exactly_one_close_request() {
        let mut window = Window::new_grid(
            vec![ParameterRow {
                name: "count".to_owned(),
                value: "-1".to_owned(),
            }],
            SpiceSerializationConfig {
                pair_separator: ',',
                validation: SpiceValueValidation::Typed(vec![MacroValueRule::NonNegativeInteger]),
                quoted_value_prefixes: Vec::new(),
            },
            String::new(),
        );

        window.accept();

        assert!(!window.query_close());
        assert!(window.query_close());
    }

    #[test]
    fn accepted_grid_validates_rows_serializes_complete_pairs_and_sets_modal_result() {
        let mut window = Window::new_grid(
            vec![
                ParameterRow {
                    name: "gain".to_owned(),
                    value: "1k".to_owned(),
                },
                ParameterRow {
                    name: String::new(),
                    value: String::new(),
                },
            ],
            SpiceSerializationConfig::default(),
            "old".to_owned(),
        );

        drop(window.update(Message::Accept));

        assert_eq!(window.staged_result(), "gain=1k");
        assert_eq!(window.modal_result(), Some(1));
        assert!(window.last_error().is_none());
    }

    #[test]
    fn validation_error_interrupts_acceptance_after_clearing_the_staged_result() {
        let mut window = Window::new_grid(
            vec![ParameterRow {
                name: "count".to_owned(),
                value: "-1".to_owned(),
            }],
            SpiceSerializationConfig {
                pair_separator: ',',
                validation: SpiceValueValidation::Typed(vec![MacroValueRule::NonNegativeInteger]),
                quoted_value_prefixes: Vec::new(),
            },
            "old".to_owned(),
        );

        drop(window.update(Message::Accept));

        assert_eq!(window.staged_result(), "");
        assert_eq!(window.modal_result(), None);
        assert_eq!(
            window.last_error(),
            Some(&ParameterEditorError::NegativeInteger("-1".to_owned()))
        );
    }

    #[test]
    fn custom_separator_mode_skips_value_validation_and_quotes_selected_composites() {
        let mut window = Window::new_grid(
            vec![ParameterRow {
                name: "table".to_owned(),
                value: "PWL(0,1)".to_owned(),
            }],
            SpiceSerializationConfig {
                pair_separator: ';',
                validation: SpiceValueValidation::None,
                quoted_value_prefixes: vec!["PWL(".to_owned()],
            },
            String::new(),
        );

        window.accept();

        assert_eq!(window.staged_result(), "\"table=PWL(0,1)\"");
        assert_eq!(window.modal_result(), Some(1));
    }

    #[test]
    fn memo_mode_appends_only_nonempty_lines_without_a_trailing_separator() {
        let mut window = Window::new_memo(
            &[String::new(), "a=1".to_owned(), "b=2".to_owned()],
            ';',
            "old".to_owned(),
        );

        window.accept();

        assert_eq!(window.staged_result(), "a=1;b=2");
        assert_eq!(window.modal_result(), Some(1));
    }

    #[test]
    fn bridge_copies_host_modes_and_applies_only_accepted_serialized_text() {
        let mut host = host();

        let result = edit_host_parameters(&mut host, |editor| {
            drop(editor.update(Message::NameChanged {
                row: 0,
                value: String::from("table"),
            }));
            drop(editor.update(Message::ValueChanged {
                row: 0,
                value: String::from("PWL(0,1)"),
            }));
            editor.accept();
        });

        assert_eq!(result, 1);
        assert_eq!(host.applied, [String::from("\"table=PWL(0,1)\"")]);
        assert_eq!(host.current_text, "\"table=PWL(0,1)\"");
    }

    #[test]
    fn bridge_cancel_discards_staged_changes_without_applying_text() {
        let mut host = host();

        let result = edit_host_parameters(&mut host, |editor| {
            drop(editor.update(Message::ValueChanged {
                row: 0,
                value: String::from("changed"),
            }));
            drop(editor.update(Message::Cancel));
        });

        assert_eq!(result, 2);
        assert!(host.applied.is_empty());
        assert_eq!(host.current_text, "old=1");
    }

    #[test]
    fn bridge_failed_accept_does_not_apply_or_report_modal_ok() {
        let mut host = host();
        host.config.validation =
            SpiceValueValidation::Typed(vec![MacroValueRule::NonNegativeInteger]);
        host.decoded_rows[0].value = String::from("-1");

        let result = edit_host_parameters(&mut host, Window::accept);

        assert_eq!(result, 0);
        assert!(host.applied.is_empty());
        assert_eq!(host.current_text, "old=1");
    }
}
