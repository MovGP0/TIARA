//! Iced adapter for the recovered Logic Analyzer window.
//!
//! The Digital Signal Generator controls were evaluated as a maintained-library
//! source. This module reuses its direction and editor concepts, but it keeps a
//! separate analyzer model because acquired curves, trigger groups, patterns,
//! and acquisition lifecycle state do not belong to generator state.

use std::fmt;

use iced::widget::{
    button, checkbox, column, container, pick_list, row, scrollable, text, text_input,
};
use iced::{Alignment, Element, Length};
use tiara_core::logic_analyzer::{
    AcquisitionLifecycle, AnalyzerModel, AxisWindow, DigitalCurve, HorizontalBounds,
    VerticalDirection,
};

use crate::shared::window_shell;

pub const TITLE: &str = "Logic Analyzer";
pub const SCREENSHOT: &str = "screenshots/Logic_Analyzer_Window.png";
pub const FORM_RESOURCE: &str = "LogicAnalyzerWin";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("0151e740");
const STATUS: &str = "Digital waveform display";
const TOOLBAR: &[&str] = &["Start", "Stop", "Display...", "Trigger..."];

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TriggerChoiceEditor {
    Source,
    Mode,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TriggerValueEditor {
    Delay,
    Position,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MeasurementChoiceEditor {
    Clock,
    Threshold,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MeasurementValueEditor {
    Period,
    Length,
    Timeout,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CoordinateSide {
    Left,
    Right,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum HorizontalDirection {
    Left,
    Right,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum UiAction {
    LoadData,
    SaveData,
    Start,
    Stop,
    RefreshGroups,
}

pub trait CurveExchange {
    fn load_shared_curve(&mut self) -> Option<DigitalCurve>;
}

pub trait DigitalResultPublisher {
    fn publish_digital_transient(&mut self, curve: DigitalCurve);
}

pub trait AnalyzerViewAdapter {
    fn refresh_channels(&mut self, model: &AnalyzerModel);
    fn refresh_display(&mut self, model: &AnalyzerModel);
    fn redraw_vertical_axis(&mut self, window: AxisWindow);
    fn scroll_horizontal(&mut self, direction: HorizontalDirection);
}

pub trait AnalyzerEngine {
    fn trigger_choices(&self, editor: TriggerChoiceEditor) -> (Vec<String>, usize);
    fn trigger_value(&self, editor: TriggerValueEditor) -> f64;
    fn measurement_choices(&self, editor: MeasurementChoiceEditor) -> (Vec<String>, usize);
    fn integer_value(&self, editor: MeasurementValueEditor) -> i64;

    /// Validates the acquisition command.
    ///
    /// # Errors
    ///
    /// Returns an error when the command is invalid.
    fn validate_command(&mut self) -> Result<(), AcquisitionError>;

    /// Validates the active circuit.
    ///
    /// # Errors
    ///
    /// Returns an error when the active circuit cannot be analyzed.
    fn validate_circuit(&mut self) -> Result<(), AcquisitionError>;

    /// Runs one acquisition.
    ///
    /// # Errors
    ///
    /// Returns an error when acquisition cannot produce a digital curve.
    fn run(&mut self, model: &AnalyzerModel) -> Result<DigitalCurve, AcquisitionError>;

    fn stop(&mut self);
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AcquisitionError(pub String);

impl fmt::Display for AcquisitionError {
    fn fmt(&self, formatter: &mut fmt::Formatter<'_>) -> fmt::Result {
        formatter.write_str(&self.0)
    }
}

impl std::error::Error for AcquisitionError {}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum AcquisitionOutcome {
    Completed,
    Rejected(AcquisitionError),
    NoData,
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
    OptionSelected(usize, &'static str),
    Toggle(usize, bool),
    Action(UiAction),
    NoOp,
}

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    selections: Vec<Option<&'static str>>,
    checks: Vec<bool>,
    model: AnalyzerModel,
    trigger_choice_editor: TriggerChoiceEditor,
    trigger_value_editor: TriggerValueEditor,
    measurement_choice_editor: MeasurementChoiceEditor,
    measurement_value_editor: MeasurementValueEditor,
    choices: Vec<String>,
    choice_index: usize,
    trigger_numeric_value: f64,
    integer_value: i64,
    coordinate_side: Option<CoordinateSide>,
    coordinate_text: String,
    pattern_text: String,
    vertical_axis: AxisWindow,
    pending_action: Option<UiAction>,
}

impl Default for Window {
    fn default() -> Self {
        Self::with_model(AnalyzerModel::new(
            0,
            Vec::new(),
            Vec::new(),
            HorizontalBounds {
                left: 0.0,
                right: 1.0,
            },
        ))
    }
}

impl Window {
    #[must_use]
    pub fn with_model(model: AnalyzerModel) -> Self {
        Self {
            values: vec![String::new(); 7],
            selections: vec![None],
            checks: vec![false],
            model,
            trigger_choice_editor: TriggerChoiceEditor::Source,
            trigger_value_editor: TriggerValueEditor::Position,
            measurement_choice_editor: MeasurementChoiceEditor::Clock,
            measurement_value_editor: MeasurementValueEditor::Period,
            choices: Vec::new(),
            choice_index: 0,
            trigger_numeric_value: 0.0,
            integer_value: 0,
            coordinate_side: None,
            coordinate_text: String::new(),
            pattern_text: String::new(),
            vertical_axis: AxisWindow {
                start: 0,
                visible_count: 0,
                active_axis_count: 0,
            },
            pending_action: None,
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::TextChanged(index, value) => {
                if let Some(field) = self.values.get_mut(index) {
                    *field = value;
                }
            }
            Message::OptionSelected(index, value) => {
                if let Some(selection) = self.selections.get_mut(index) {
                    *selection = Some(value);
                }
            }
            Message::Toggle(index, value) => {
                if let Some(check) = self.checks.get_mut(index) {
                    *check = value;
                }
            }
            Message::Action(action) => self.pending_action = Some(action),
            Message::NoOp => {}
        }
    }

    #[must_use]
    pub const fn take_action(&mut self) -> Option<UiAction> {
        self.pending_action.take()
    }

    /// Reimplements `FUN_0151e2a0` at `0x0151E2A0`.
    #[must_use]
    pub fn load_shared_curve(
        &mut self,
        exchange: &mut dyn CurveExchange,
        view: &mut dyn AnalyzerViewAdapter,
    ) -> bool {
        let loaded = self
            .model
            .load_compatible_curve(exchange.load_shared_curve());
        if loaded {
            view.refresh_channels(&self.model);
            view.refresh_display(&self.model);
        }
        loaded
    }

    /// Reimplements `FUN_0151e600` at `0x0151E600`.
    #[must_use]
    pub fn publish_current_curve(&self, publisher: &mut dyn DigitalResultPublisher) -> bool {
        let Some(curve) = self.model.numbered_curve_for_publish() else {
            return false;
        };
        publisher.publish_digital_transient(curve);
        true
    }

    /// Reimplements `FUN_0151e730` at `0x0151E730`.
    #[must_use]
    pub fn apply_channel_enabled(
        &mut self,
        enabled: bool,
        view: &mut dyn AnalyzerViewAdapter,
    ) -> bool {
        let changed = self.model.apply_selected_enabled(enabled);
        if changed {
            view.refresh_channels(&self.model);
            view.refresh_display(&self.model);
        }
        changed
    }

    /// Reimplements `FUN_0151f270` at `0x0151F270`.
    #[must_use]
    pub const fn start_click(&mut self) -> bool {
        if self.model.begin_acquisition() {
            self.pending_action = Some(UiAction::Start);
            true
        } else {
            false
        }
    }

    /// Reimplements `FUN_0151f2b0` at `0x0151F2B0`.
    #[must_use]
    pub fn run_acquisition(
        &mut self,
        engine: &mut dyn AnalyzerEngine,
        view: &mut dyn AnalyzerViewAdapter,
    ) -> AcquisitionOutcome {
        if self.model.channels().is_empty() || !self.model.has_patterns() {
            return AcquisitionOutcome::NoData;
        }
        match self.model.lifecycle() {
            AcquisitionLifecycle::Idle if !self.model.begin_acquisition() => {
                return AcquisitionOutcome::NoData;
            }
            AcquisitionLifecycle::StopRequested => return AcquisitionOutcome::NoData,
            AcquisitionLifecycle::Idle | AcquisitionLifecycle::Active => {}
        }
        let result = engine
            .validate_command()
            .and_then(|()| engine.validate_circuit())
            .and_then(|()| engine.run(&self.model));
        match result {
            Ok(curve) => {
                self.model.set_acquired_curve(curve);
                self.model.finish_acquisition(0);
                view.refresh_channels(&self.model);
                view.refresh_display(&self.model);
                AcquisitionOutcome::Completed
            }
            Err(error) => {
                self.model.finish_acquisition(1);
                AcquisitionOutcome::Rejected(error)
            }
        }
    }

    /// Reimplements `FUN_0151f810` at `0x0151F810`.
    pub fn stop_click(&mut self, engine: &mut dyn AnalyzerEngine) {
        if self.model.request_stop() {
            engine.stop();
        }
        self.pending_action = Some(UiAction::Stop);
    }

    /// Reimplements `FUN_0151fef0` at `0x0151FEF0`.
    #[must_use]
    pub fn trigger_source_click(&mut self, engine: &dyn AnalyzerEngine) -> bool {
        if self.trigger_choice_editor != TriggerChoiceEditor::Mode {
            return false;
        }
        self.trigger_choice_editor = TriggerChoiceEditor::Source;
        (self.choices, self.choice_index) = engine.trigger_choices(TriggerChoiceEditor::Source);
        true
    }

    /// Reimplements `FUN_0151ff80` at `0x0151FF80`.
    #[must_use]
    pub fn trigger_mode_click(&mut self, engine: &dyn AnalyzerEngine) -> bool {
        if self.trigger_choice_editor != TriggerChoiceEditor::Source {
            return false;
        }
        self.trigger_choice_editor = TriggerChoiceEditor::Mode;
        (self.choices, self.choice_index) = engine.trigger_choices(TriggerChoiceEditor::Mode);
        true
    }

    /// Reimplements `FUN_015200c0` at `0x015200C0`.
    #[must_use]
    pub fn trigger_delay_click(&mut self, engine: &dyn AnalyzerEngine) -> bool {
        if self.trigger_value_editor != TriggerValueEditor::Position {
            return false;
        }
        self.trigger_value_editor = TriggerValueEditor::Delay;
        self.trigger_numeric_value = engine.trigger_value(TriggerValueEditor::Delay);
        true
    }

    /// Reimplements `FUN_01520110` at `0x01520110`.
    #[must_use]
    pub fn trigger_position_click(&mut self, engine: &dyn AnalyzerEngine) -> bool {
        if self.trigger_value_editor != TriggerValueEditor::Delay {
            return false;
        }
        self.trigger_value_editor = TriggerValueEditor::Position;
        self.trigger_numeric_value = engine.trigger_value(TriggerValueEditor::Position);
        true
    }

    /// Reimplements `FUN_015202a0` at `0x015202A0`.
    #[must_use]
    pub fn scroll_up(&mut self, view: &mut dyn AnalyzerViewAdapter) -> bool {
        self.scroll_vertical(VerticalDirection::Up, view)
    }

    /// Reimplements `FUN_015202b0` at `0x015202B0`.
    #[must_use]
    pub fn scroll_down(&mut self, view: &mut dyn AnalyzerViewAdapter) -> bool {
        self.scroll_vertical(VerticalDirection::Down, view)
    }

    /// Reimplements `FUN_015202c0` at `0x015202C0`.
    #[must_use]
    pub fn scroll_right(&self, view: &mut dyn AnalyzerViewAdapter) -> bool {
        self.scroll_horizontal(HorizontalDirection::Right, view)
    }

    /// Reimplements `FUN_015202e0` at `0x015202E0`.
    #[must_use]
    pub fn scroll_left(&self, view: &mut dyn AnalyzerViewAdapter) -> bool {
        self.scroll_horizontal(HorizontalDirection::Left, view)
    }

    /// Reimplements `FUN_01520660` at `0x01520660`.
    pub fn show_left_bound(&mut self) {
        self.show_bound(CoordinateSide::Left);
    }

    /// Reimplements `FUN_015209b0` at `0x015209B0`.
    pub fn show_right_bound(&mut self) {
        self.show_bound(CoordinateSide::Right);
    }

    /// Reimplements `FUN_01520a90` at `0x01520A90`.
    pub const fn select_period_editor(&mut self) {
        self.measurement_value_editor = MeasurementValueEditor::Period;
    }

    /// Reimplements `FUN_01520af0` at `0x01520AF0`.
    pub fn select_length_editor(&mut self, engine: &dyn AnalyzerEngine) {
        self.measurement_value_editor = MeasurementValueEditor::Length;
        self.integer_value = engine.integer_value(MeasurementValueEditor::Length);
    }

    /// Reimplements `FUN_01520b70` at `0x01520B70`.
    pub fn select_timeout_editor(&mut self, engine: &dyn AnalyzerEngine) {
        self.measurement_value_editor = MeasurementValueEditor::Timeout;
        self.integer_value = engine.integer_value(MeasurementValueEditor::Timeout);
    }

    /// Reimplements `FUN_01520bf0` at `0x01520BF0`.
    #[must_use]
    pub fn clock_source_click(&mut self, engine: &dyn AnalyzerEngine) -> bool {
        if self.measurement_choice_editor != MeasurementChoiceEditor::Threshold {
            return false;
        }
        self.measurement_choice_editor = MeasurementChoiceEditor::Clock;
        (self.choices, self.choice_index) =
            engine.measurement_choices(MeasurementChoiceEditor::Clock);
        true
    }

    /// Reimplements `FUN_01520c80` at `0x01520C80`.
    #[must_use]
    pub fn threshold_click(&mut self, engine: &dyn AnalyzerEngine) -> bool {
        if self.measurement_choice_editor != MeasurementChoiceEditor::Clock {
            return false;
        }
        self.measurement_choice_editor = MeasurementChoiceEditor::Threshold;
        (self.choices, self.choice_index) =
            engine.measurement_choices(MeasurementChoiceEditor::Threshold);
        true
    }

    /// Reimplements `FUN_01520d20` at `0x01520D20`.
    #[must_use]
    pub fn delete_selected_group(&mut self, view: &mut dyn AnalyzerViewAdapter) -> bool {
        self.values[0].clear();
        let deleted = self.model.delete_selected_group();
        view.refresh_channels(&self.model);
        view.refresh_display(&self.model);
        self.pending_action = Some(UiAction::RefreshGroups);
        deleted
    }

    /// Reimplements `FUN_01520d80` at `0x01520D80`.
    #[must_use]
    pub fn insert_pattern(&mut self) -> bool {
        let Some(text) = self.model.insert_default_pattern() else {
            return false;
        };
        self.pattern_text = text;
        true
    }

    /// Reimplements `FUN_01521090` at `0x01521090`.
    #[must_use]
    pub fn delete_pattern(&mut self) -> bool {
        let Some(text) = self.model.delete_selected_pattern() else {
            return false;
        };
        self.pattern_text = text;
        true
    }

    /// Reimplements `FUN_01521420` at `0x01521420`.
    #[must_use]
    pub fn select_group_to_endpoint(&mut self) -> bool {
        let Some(value) = self.model.selected_group_endpoint(true) else {
            return false;
        };
        self.values[2] = value.to_string();
        true
    }

    /// Reimplements `FUN_01521440` at `0x01521440`.
    #[must_use]
    pub fn select_group_from_endpoint(&mut self) -> bool {
        let Some(value) = self.model.selected_group_endpoint(false) else {
            return false;
        };
        self.values[1] = value.to_string();
        true
    }

    /// Reimplements `FUN_015215b0` at `0x015215B0`.
    pub const fn dispatch_data_load(&mut self) {
        self.pending_action = Some(UiAction::LoadData);
    }

    /// Reimplements `FUN_015215c0` at `0x015215C0`.
    pub const fn dispatch_data_save(&mut self) {
        self.pending_action = Some(UiAction::SaveData);
    }

    /// Reimplements the intentional no-op `FUN_01521740` at `0x01521740`.
    pub const fn pattern_editor_click() {}

    fn scroll_vertical(
        &mut self,
        direction: VerticalDirection,
        view: &mut dyn AnalyzerViewAdapter,
    ) -> bool {
        let changed = self.vertical_axis.scroll(direction);
        if changed {
            view.redraw_vertical_axis(self.vertical_axis);
        }
        changed
    }

    fn scroll_horizontal(
        &self,
        direction: HorizontalDirection,
        view: &mut dyn AnalyzerViewAdapter,
    ) -> bool {
        if self.model.buffered_curve().is_none() {
            return false;
        }
        view.scroll_horizontal(direction);
        true
    }

    fn show_bound(&mut self, side: CoordinateSide) {
        self.coordinate_side = Some(side);
        let bounds = self.model.bounds();
        self.coordinate_text = match side {
            CoordinateSide::Left => bounds.left,
            CoordinateSide::Right => bounds.right,
        }
        .to_string();
    }

    #[must_use]
    pub const fn model(&self) -> &AnalyzerModel {
        &self.model
    }

    #[must_use]
    pub fn coordinate_text(&self) -> &str {
        &self.coordinate_text
    }

    #[must_use]
    pub const fn coordinate_side(&self) -> Option<CoordinateSide> {
        self.coordinate_side
    }

    #[must_use]
    pub fn choices(&self) -> (&[String], usize) {
        (&self.choices, self.choice_index)
    }

    #[must_use]
    pub const fn trigger_numeric_value(&self) -> f64 {
        self.trigger_numeric_value
    }

    #[must_use]
    pub const fn integer_value(&self) -> i64 {
        self.integer_value
    }

    #[must_use]
    pub fn pattern_text(&self) -> &str {
        &self.pattern_text
    }

    pub const fn set_vertical_axis(&mut self, window: AxisWindow) {
        self.vertical_axis = window;
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(TOOLBAR, Message::NoOp);
        let body: Element<'_, Message> = row![
            container(scrollable(
                column![
                    row![
                        text("Channel").width(Length::FillPortion(2)),
                        pick_list(
                            ["Channel 1", "Channel 2", "Channel 3", "Channel 4"],
                            self.selections[0],
                            move |value| Message::OptionSelected(0, value)
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Group Label").width(Length::FillPortion(2)),
                        text_input("", &self.values[0])
                            .on_input(move |value| Message::TextChanged(0, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    checkbox("On", self.checks[0])
                        .on_toggle(move |value| Message::Toggle(0, value)),
                    text(format!("Pattern: {}", self.pattern_text)),
                    row![
                        button("Load").on_press(Message::Action(UiAction::LoadData)),
                        button("Save").on_press(Message::Action(UiAction::SaveData)),
                    ]
                    .spacing(4),
                ]
                .spacing(8)
            ))
            .padding(8)
            .width(Length::Fixed(300.0))
            .height(Length::Fill),
            column![
                row![
                    button("Up").on_press(Message::NoOp),
                    button("Down").on_press(Message::NoOp),
                    button("Left").on_press(Message::NoOp),
                    button("Right").on_press(Message::NoOp),
                ]
                .spacing(4),
                window_shell::surface("Logic Analyzer display surface"),
                text_input("", &self.coordinate_text).width(Length::Fixed(140.0)),
            ]
            .spacing(4),
        ]
        .spacing(6)
        .padding(6)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use tiara_core::logic_analyzer::{
        AnalyzerChannel, ChannelGroup, DIGITAL_CURVE_TYPE, DigitalTrace, TriggerPattern,
    };

    #[derive(Default)]
    struct View {
        channel_refreshes: usize,
        display_refreshes: usize,
        vertical_redraws: usize,
        horizontal_scrolls: Vec<HorizontalDirection>,
    }

    impl AnalyzerViewAdapter for View {
        fn refresh_channels(&mut self, _model: &AnalyzerModel) {
            self.channel_refreshes += 1;
        }

        fn refresh_display(&mut self, _model: &AnalyzerModel) {
            self.display_refreshes += 1;
        }

        fn redraw_vertical_axis(&mut self, _window: AxisWindow) {
            self.vertical_redraws += 1;
        }

        fn scroll_horizontal(&mut self, direction: HorizontalDirection) {
            self.horizontal_scrolls.push(direction);
        }
    }

    struct Exchange(Option<DigitalCurve>);

    impl CurveExchange for Exchange {
        fn load_shared_curve(&mut self) -> Option<DigitalCurve> {
            self.0.take()
        }
    }

    #[derive(Default)]
    struct Publisher(Vec<DigitalCurve>);

    impl DigitalResultPublisher for Publisher {
        fn publish_digital_transient(&mut self, curve: DigitalCurve) {
            self.0.push(curve);
        }
    }

    struct Engine;

    impl AnalyzerEngine for Engine {
        fn trigger_choices(&self, editor: TriggerChoiceEditor) -> (Vec<String>, usize) {
            (vec![format!("{editor:?}")], 0)
        }

        fn trigger_value(&self, editor: TriggerValueEditor) -> f64 {
            match editor {
                TriggerValueEditor::Delay => 1.5,
                TriggerValueEditor::Position => 2.5,
            }
        }

        fn measurement_choices(&self, editor: MeasurementChoiceEditor) -> (Vec<String>, usize) {
            (vec![format!("{editor:?}")], 0)
        }

        fn integer_value(&self, editor: MeasurementValueEditor) -> i64 {
            match editor {
                MeasurementValueEditor::Length => 32,
                MeasurementValueEditor::Timeout => 100,
                MeasurementValueEditor::Period => 0,
            }
        }

        fn validate_command(&mut self) -> Result<(), AcquisitionError> {
            Ok(())
        }

        fn validate_circuit(&mut self) -> Result<(), AcquisitionError> {
            Ok(())
        }

        fn run(&mut self, _model: &AnalyzerModel) -> Result<DigitalCurve, AcquisitionError> {
            Ok(curve())
        }

        fn stop(&mut self) {}
    }

    fn curve() -> DigitalCurve {
        DigitalCurve {
            curve_type: DIGITAL_CURVE_TYPE,
            traces: vec![DigitalTrace {
                active: true,
                name: "D0".to_owned(),
                color: 7,
                lower_bound: -1.0,
                upper_bound: 3.0,
            }],
        }
    }

    fn window() -> Window {
        let mut model = AnalyzerModel::new(
            1,
            vec![AnalyzerChannel {
                enabled: true,
                name: "D0".to_owned(),
                color: 7,
                active_index: 0,
            }],
            vec![ChannelGroup {
                label: "bus".to_owned(),
                first_channel: 0,
                last_channel: 0,
                enabled: true,
                patterns: vec![
                    TriggerPattern::default_for_width(1),
                    TriggerPattern::default_for_width(1),
                ],
            }],
            HorizontalBounds {
                left: 0.0,
                right: 1.0,
            },
        );
        model.select_group(Some(0));
        model.select_pattern_group(Some(0));
        model.select_pattern(Some(0));
        Window::with_model(model)
    }

    #[test]
    fn curve_load_and_publish_apply_type_and_numbering_contracts() {
        let mut window = window();
        let mut exchange = Exchange(Some(curve()));
        let mut view = View::default();
        assert!(window.load_shared_curve(&mut exchange, &mut view));
        assert_eq!((view.channel_refreshes, view.display_refreshes), (1, 1));

        let mut publisher = Publisher::default();
        assert!(window.publish_current_curve(&mut publisher));
        assert_eq!(publisher.0[0].traces[0].name, "1.D0");
    }

    #[test]
    fn acquisition_and_stop_preserve_the_recovered_lifecycle() {
        let mut window = window();
        let mut engine = Engine;
        let mut view = View::default();
        assert_eq!(
            window.run_acquisition(&mut engine, &mut view),
            AcquisitionOutcome::Completed
        );
        assert_eq!(window.model().status(), 0);
        assert!(window.start_click());
        window.stop_click(&mut engine);
        assert_eq!(
            window.model().lifecycle(),
            AcquisitionLifecycle::StopRequested
        );
        assert_eq!(window.model().status(), 2);
    }

    #[test]
    fn scroll_and_coordinate_controls_are_guarded() {
        let mut window = window();
        let mut view = View::default();
        window.set_vertical_axis(AxisWindow {
            start: 0,
            visible_count: 1,
            active_axis_count: 2,
        });
        assert!(!window.scroll_up(&mut view));
        assert!(window.scroll_down(&mut view));
        assert!(!window.scroll_left(&mut view));
        window.show_right_bound();
        assert_eq!(window.coordinate_text(), "1");
    }

    #[test]
    fn editor_switches_are_paired_and_engine_backed() {
        let mut window = window();
        let engine = Engine;
        assert!(window.trigger_mode_click(&engine));
        assert!(!window.trigger_mode_click(&engine));
        assert!(window.trigger_source_click(&engine));
        assert!(window.trigger_delay_click(&engine));
        assert!((window.trigger_numeric_value() - 1.5).abs() <= f64::EPSILON);
        assert!(window.trigger_position_click(&engine));
        assert!((window.trigger_numeric_value() - 2.5).abs() <= f64::EPSILON);
        assert!(window.threshold_click(&engine));
        assert!(window.clock_source_click(&engine));
        window.select_length_editor(&engine);
        assert_eq!(window.integer_value, 32);
        window.select_timeout_editor(&engine);
        assert_eq!(window.integer_value, 100);
    }

    #[test]
    fn pattern_and_group_edits_apply_guards_and_refresh_rules() {
        let mut window = window();
        assert!(window.insert_pattern());
        assert_eq!(window.pattern_text(), "1.[ X]");
        assert!(window.delete_pattern());
        let mut view = View::default();
        assert!(window.delete_selected_group(&mut view));
        assert_eq!((view.channel_refreshes, view.display_refreshes), (1, 1));
        assert_eq!(window.take_action(), Some(UiAction::RefreshGroups));
    }
}
