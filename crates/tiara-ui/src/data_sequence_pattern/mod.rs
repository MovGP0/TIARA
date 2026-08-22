use iced::widget::{button, column, container, radio, row, text, text_input};
use iced::{Alignment, Element, Length, Task};
use tiara_core::data_pattern::{PatternDescriptor, PatternMethod, PatternWidth};

use crate::data_sequence_help::{HelpAdapter, HelpDispatch, dispatch_help};

pub const TITLE: &str = "Fill";
pub const ENTER_HEX_VALUE_PROMPT: &str = "Enter hex value";
pub const ENTER_HEX_VALUE_RESOURCE_KEY: &str = "HDLStrings.Msg_EnterHexValue";
const NOT_ASSIGNED: &str = "Not Assigned";

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub enum NumberFormat {
    Binary,
    #[default]
    Hexadecimal,
    Decimal,
}

#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct DialogFormats {
    pub fixed: NumberFormat,
    pub count: NumberFormat,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct EditorState {
    text: String,
    placeholder: String,
    enabled: bool,
    tab_stop: bool,
}

impl EditorState {
    #[must_use]
    pub fn text(&self) -> &str {
        &self.text
    }

    #[must_use]
    pub fn placeholder(&self) -> &str {
        &self.placeholder
    }

    #[must_use]
    pub const fn is_enabled(&self) -> bool {
        self.enabled
    }

    #[must_use]
    pub const fn is_in_tab_order(&self) -> bool {
        self.tab_stop
    }

    const fn set_available(&mut self, available: bool) {
        self.enabled = available;
        self.tab_stop = available;
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    Shown,
    MethodSelected(PatternMethod),
    InitialChanged(String),
    StepChanged(String),
    LimitChanged(String),
    Ok,
    Help,
    CloseRequested,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    descriptor: PatternDescriptor,
    selected_method: PatternMethod,
    width: PatternWidth,
    formats: DialogFormats,
    initial: EditorState,
    step: EditorState,
    limit: EditorState,
    validation_failed: bool,
    accepted: bool,
    last_error: Option<String>,
    last_close_allowed: Option<bool>,
    help_context: u16,
    help_requested: bool,
}

impl Window {
    #[must_use]
    pub fn new(descriptor: PatternDescriptor, width: PatternWidth, formats: DialogFormats) -> Self {
        let selected_method = descriptor.method;
        let mut window = Self {
            descriptor,
            selected_method,
            width,
            formats,
            initial: EditorState {
                text: String::new(),
                placeholder: String::new(),
                enabled: false,
                tab_stop: false,
            },
            step: EditorState {
                text: String::new(),
                placeholder: String::new(),
                enabled: false,
                tab_stop: false,
            },
            limit: EditorState {
                text: String::new(),
                placeholder: String::new(),
                enabled: false,
                tab_stop: false,
            },
            validation_failed: false,
            accepted: false,
            last_error: None,
            last_close_allowed: None,
            help_context: 0,
            help_requested: false,
        };
        window.show();
        window
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Shown => self.show(),
            Message::MethodSelected(method) => self.method_clicked(method),
            Message::InitialChanged(value) => self.initial.text = value,
            Message::StepChanged(value) => self.step.text = value,
            Message::LimitChanged(value) => self.limit.text = value,
            Message::Ok => {
                self.try_accept();
            }
            Message::Help => self.help_requested = true,
            Message::CloseRequested => {
                self.last_close_allowed = Some(self.query_close());
            }
        }

        Task::none()
    }

    /// Shows the window with the English fallback for the recovered prompt.
    pub fn show(&mut self) {
        self.show_with_prompt(ENTER_HEX_VALUE_PROMPT);
    }

    /// Ports Ghidra function `FUN_0140c7c0` at `0x0140C7C0`.
    ///
    /// Applies the host-localized `HDLStrings.Msg_EnterHexValue` prompt to all
    /// three editors, restores the staged method selection, and refreshes
    /// method-dependent text, enabled state, and tab order on every show.
    pub fn show_with_prompt(&mut self, prompt: &str) {
        for editor in [&mut self.initial, &mut self.step, &mut self.limit] {
            prompt.clone_into(&mut editor.placeholder);
            editor.set_available(true);
        }
        self.selected_method = self.descriptor.method;
        self.accepted = false;
        self.refresh_method_controls();
    }

    pub const fn set_help_context(&mut self, context: u16) {
        self.help_context = context;
    }

    pub const fn take_help_request(&mut self) -> Option<u16> {
        if self.help_requested {
            self.help_requested = false;
            Some(self.help_context)
        } else {
            None
        }
    }

    /// Ports Ghidra function `FUN_0140c9d0` at `0x0140C9D0`.
    ///
    /// Suppresses default VCL help and delegates the Help button context to the
    /// application help adapter. The recovered handler always reports handled.
    pub fn show_help(&self, adapter: &mut impl HelpAdapter) -> HelpDispatch {
        dispatch_help(self.help_context, adapter)
    }

    /// Implements the numeric-edit responsibility recovered from Ghidra
    /// function `FUN_0140bf50` at `0x0140BF50`.
    ///
    /// Invalid input records a label-specific message. Only the first invalid
    /// editor in one acceptance attempt replaces the displayed message.
    fn validate_numeric_edit(
        &mut self,
        label: &str,
        value: &str,
        format: NumberFormat,
    ) -> Option<u32> {
        let parsed = parse_number(value, format, self.width);
        if parsed.is_none() {
            self.report_invalid_value(label);
        }
        parsed
    }

    /// Implements the staged OK responsibility recovered from Ghidra function
    /// `FUN_0140c130` at `0x0140C130`.
    ///
    /// Fixed methods validate only Initial. Count methods validate Increment
    /// or decrement, Limit, then Initial. The complete descriptor is committed
    /// only when all applicable editors are valid.
    pub fn try_accept(&mut self) -> bool {
        self.accepted = false;
        let format = if self.selected_method.is_fixed() {
            self.formats.fixed
        } else {
            self.formats.count
        };
        let mut candidate = self.descriptor;

        if !self.selected_method.is_fixed() {
            let step_text = self.step.text.clone();
            let limit_text = self.limit.text.clone();
            if let Some(step) =
                self.validate_numeric_edit("Increment/decrement", &step_text, format)
            {
                candidate.step = step;
            }
            if let Some(limit) = self.validate_numeric_edit("Limit", &limit_text, format) {
                candidate.limit = limit;
            }
        }

        let initial_text = self.initial.text.clone();
        if let Some(initial) = self.validate_numeric_edit("Initial", &initial_text, format) {
            candidate.initial = initial;
        }

        if self.validation_failed {
            return false;
        }

        candidate.method = self.selected_method;
        self.descriptor = candidate;
        self.accepted = true;
        self.last_error = None;
        true
    }

    /// Implements the close veto recovered from Ghidra function
    /// `FUN_0140c220` at `0x0140C220`.
    ///
    /// One validation failure rejects one close request. The request always
    /// clears the guard so corrected input can be accepted later.
    pub const fn query_close(&mut self) -> bool {
        let can_close = !self.validation_failed;
        self.validation_failed = false;
        can_close
    }

    /// Implements the method refresh recovered from Ghidra function
    /// `FUN_0140c240` at `0x0140C240`.
    ///
    /// Fixed methods show their derived Initial value, mark the two count
    /// fields as not assigned, and remove all three editors from the tab order.
    /// Count methods restore the staged step and limit and enable every editor.
    pub fn refresh_method_controls(&mut self) {
        self.descriptor.method = self.selected_method;
        let initial = self.selected_method.default_initial(self.width);

        if self.selected_method.is_fixed() {
            self.initial.text = format_number(initial, self.formats.fixed, self.width);
            NOT_ASSIGNED.clone_into(&mut self.step.text);
            NOT_ASSIGNED.clone_into(&mut self.limit.text);
            self.initial.set_available(false);
            self.step.set_available(false);
            self.limit.set_available(false);
        } else {
            self.initial.text = format_number(initial, self.formats.count, self.width);
            self.step.text = format_number(self.descriptor.step, self.formats.count, self.width);
            self.limit.text = format_number(self.descriptor.limit, self.formats.count, self.width);
            self.initial.set_available(true);
            self.step.set_available(true);
            self.limit.set_available(true);
        }
    }

    /// Implements the iced event adapter for Ghidra function
    /// `FUN_0140c7b0` at `0x0140C7B0`.
    ///
    /// Every notification applies the refresh, including a repeated selection.
    pub fn method_clicked(&mut self, method: PatternMethod) {
        self.selected_method = method;
        self.accepted = false;
        self.refresh_method_controls();
    }

    #[must_use]
    pub const fn descriptor(&self) -> PatternDescriptor {
        self.descriptor
    }

    #[must_use]
    pub const fn selected_method(&self) -> PatternMethod {
        self.selected_method
    }

    #[must_use]
    pub const fn initial_editor(&self) -> &EditorState {
        &self.initial
    }

    #[must_use]
    pub const fn step_editor(&self) -> &EditorState {
        &self.step
    }

    #[must_use]
    pub const fn limit_editor(&self) -> &EditorState {
        &self.limit
    }

    #[must_use]
    pub const fn accepted_descriptor(&self) -> Option<PatternDescriptor> {
        if self.accepted {
            Some(self.descriptor)
        } else {
            None
        }
    }

    #[must_use]
    pub fn last_error(&self) -> Option<&str> {
        self.last_error.as_deref()
    }

    #[must_use]
    pub const fn last_close_allowed(&self) -> Option<bool> {
        self.last_close_allowed
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let methods = PatternMethod::ALL.into_iter().fold(
            column![text("Methods")].spacing(6),
            |methods, method| {
                methods.push(radio(
                    method.to_string(),
                    method,
                    Some(self.selected_method),
                    Message::MethodSelected,
                ))
            },
        );

        let editors = column![
            editor_row("Initial", &self.initial, Message::InitialChanged,),
            editor_row("Increment/decrement", &self.step, Message::StepChanged,),
            editor_row("Limit", &self.limit, Message::LimitChanged),
        ]
        .spacing(8);

        let mut body = column![
            text(TITLE).size(24),
            row![methods, editors].spacing(20).align_y(Alignment::Start),
            row![
                button("OK").on_press(Message::Ok),
                button("Help").on_press(Message::Help),
                button("Close").on_press(Message::CloseRequested),
            ]
            .spacing(8),
        ]
        .spacing(12);
        if let Some(error) = &self.last_error {
            body = body.push(text(error).style(iced::widget::text::danger));
        }

        container(body)
            .padding(16)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }

    fn report_invalid_value(&mut self, label: &str) {
        if !self.validation_failed {
            self.last_error = Some(format!("Invalid value: {label}"));
        }
        self.validation_failed = true;
    }
}

fn editor_row<'a>(
    label: &'a str,
    editor: &'a EditorState,
    on_input: fn(String) -> Message,
) -> Element<'a, Message> {
    let input = text_input(&editor.placeholder, &editor.text).width(Length::Fixed(180.0));
    let input = if editor.enabled {
        input.on_input(on_input)
    } else {
        input
    };
    row![text(label).width(Length::Fixed(150.0)), input]
        .spacing(8)
        .align_y(Alignment::Center)
        .into()
}

fn parse_number(value: &str, format: NumberFormat, width: PatternWidth) -> Option<u32> {
    if value.is_empty() {
        return None;
    }

    match format {
        NumberFormat::Binary => {
            if value.len() < usize::try_from(width.bits()).ok()? {
                return None;
            }
            u32::from_str_radix(value, 2).ok()
        }
        NumberFormat::Hexadecimal => u32::from_str_radix(value, 16).ok(),
        NumberFormat::Decimal => value.parse().ok(),
    }
}

fn format_number(value: u32, format: NumberFormat, width: PatternWidth) -> String {
    match format {
        NumberFormat::Binary => {
            let width = usize::try_from(width.bits()).unwrap_or(usize::MAX);
            format!("{value:0width$b}")
        }
        NumberFormat::Hexadecimal => {
            let digits = usize::try_from(width.bits().div_ceil(4)).unwrap_or(usize::MAX);
            format!("{value:0digits$X}")
        }
        NumberFormat::Decimal => value.to_string(),
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Default)]
    struct Help {
        contexts: Vec<u16>,
    }

    impl HelpAdapter for Help {
        fn open_context(&mut self, context: u16) {
            self.contexts.push(context);
        }
    }

    fn width(bits: u32) -> PatternWidth {
        PatternWidth::new(bits).unwrap()
    }

    #[test]
    fn fun_0140c7c0_show_restores_method_prompt_and_count_editors() {
        let descriptor = PatternDescriptor {
            method: PatternMethod::CountUp,
            step: 3,
            limit: 9,
            ..PatternDescriptor::default()
        };
        let mut window = Window::new(descriptor, width(8), DialogFormats::default());
        window.selected_method = PatternMethod::FillOne;
        window.step.text = "changed".to_owned();

        window.show_with_prompt("Localized hex prompt");

        assert_eq!(window.selected_method(), PatternMethod::CountUp);
        assert_eq!(
            window.initial_editor().placeholder(),
            "Localized hex prompt"
        );
        assert_eq!(window.step_editor().placeholder(), "Localized hex prompt");
        assert_eq!(window.limit_editor().placeholder(), "Localized hex prompt");
        assert_eq!(window.step_editor().text(), "03");
        assert!(window.initial_editor().is_enabled());
        assert!(window.step_editor().is_in_tab_order());
        assert!(window.limit_editor().is_enabled());
    }

    #[test]
    fn fun_0140c9d0_help_uses_context_and_suppresses_default_handling() {
        let mut window = Window::new(
            PatternDescriptor::default(),
            width(8),
            DialogFormats::default(),
        );
        window.set_help_context(27);
        let mut help = Help::default();

        let dispatch = window.show_help(&mut help);
        drop(window.update(Message::Help));

        assert_eq!(help.contexts, [27]);
        assert_eq!(
            dispatch,
            HelpDispatch {
                handled: true,
                call_default_handler: false,
            }
        );
        assert_eq!(window.take_help_request(), Some(27));
        assert_eq!(window.take_help_request(), None);
    }

    #[test]
    fn fixed_method_refresh_sets_defaults_and_disables_all_value_editors() {
        let mut window = Window::new(
            PatternDescriptor::default(),
            width(8),
            DialogFormats::default(),
        );

        window.method_clicked(PatternMethod::WalkZeroRight);

        assert_eq!(window.descriptor().method, PatternMethod::WalkZeroRight);
        assert_eq!(window.initial_editor().text(), "7F");
        assert_eq!(window.step_editor().text(), NOT_ASSIGNED);
        assert!(!window.initial_editor().is_enabled());
        assert!(!window.step_editor().is_in_tab_order());
        assert!(!window.limit_editor().is_enabled());
    }

    #[test]
    fn count_method_refresh_restores_staged_values_and_enables_editors() {
        let descriptor = PatternDescriptor {
            method: PatternMethod::CountUp,
            step: 2,
            limit: 0x20,
            ..PatternDescriptor::default()
        };
        let window = Window::new(descriptor, width(8), DialogFormats::default());

        assert_eq!(window.initial_editor().text(), "00");
        assert_eq!(window.step_editor().text(), "02");
        assert_eq!(window.limit_editor().text(), "20");
        assert!(window.initial_editor().is_enabled());
        assert!(window.step_editor().is_in_tab_order());
        assert!(window.limit_editor().is_enabled());
    }

    #[test]
    fn repeated_method_selection_discards_unparsed_editor_text() {
        let descriptor = PatternDescriptor {
            method: PatternMethod::CountUp,
            step: 3,
            limit: 9,
            ..PatternDescriptor::default()
        };
        let mut window = Window::new(descriptor, width(8), DialogFormats::default());
        drop(window.update(Message::StepChanged("AA".to_owned())));

        window.method_clicked(PatternMethod::CountUp);

        assert_eq!(window.step_editor().text(), "03");
    }

    #[test]
    fn count_accept_validates_in_recovered_order_and_commits_all_values() {
        let descriptor = PatternDescriptor {
            method: PatternMethod::CountDown,
            first: 2,
            last: 7,
            step: 1,
            limit: 7,
            ..PatternDescriptor::default()
        };
        let mut window = Window::new(descriptor, width(8), DialogFormats::default());
        drop(window.update(Message::InitialChanged("FE".to_owned())));
        drop(window.update(Message::StepChanged("02".to_owned())));
        drop(window.update(Message::LimitChanged("0A".to_owned())));

        assert!(window.try_accept());

        assert_eq!(
            window.accepted_descriptor(),
            Some(PatternDescriptor {
                initial: 0xFE,
                step: 2,
                limit: 10,
                ..descriptor
            })
        );
    }

    #[test]
    fn invalid_values_report_only_the_first_label_and_do_not_partially_commit() {
        let descriptor = PatternDescriptor {
            method: PatternMethod::CountUp,
            initial: 4,
            step: 5,
            limit: 6,
            ..PatternDescriptor::default()
        };
        let mut window = Window::new(descriptor, width(8), DialogFormats::default());
        drop(window.update(Message::StepChanged("not hex".to_owned())));
        drop(window.update(Message::LimitChanged("also bad".to_owned())));
        drop(window.update(Message::InitialChanged("still bad".to_owned())));

        assert!(!window.try_accept());

        assert_eq!(
            window.last_error(),
            Some("Invalid value: Increment/decrement")
        );
        assert_eq!(window.descriptor(), descriptor);
        assert!(window.accepted_descriptor().is_none());
    }

    #[test]
    fn binary_fixed_validation_requires_the_configured_character_count() {
        let mut window = Window::new(
            PatternDescriptor {
                method: PatternMethod::FillOne,
                ..PatternDescriptor::default()
            },
            width(4),
            DialogFormats {
                fixed: NumberFormat::Binary,
                count: NumberFormat::Hexadecimal,
            },
        );
        window.initial.text = "111".to_owned();

        assert!(!window.try_accept());
        assert_eq!(window.last_error(), Some("Invalid value: Initial"));
    }

    #[test]
    fn one_validation_failure_vetoes_one_close_request() {
        let mut window = Window::new(
            PatternDescriptor {
                method: PatternMethod::CountUp,
                ..PatternDescriptor::default()
            },
            width(8),
            DialogFormats::default(),
        );
        window.step.text = "not hex".to_owned();

        assert!(!window.try_accept());
        assert!(!window.query_close());
        assert!(window.query_close());
    }
}
