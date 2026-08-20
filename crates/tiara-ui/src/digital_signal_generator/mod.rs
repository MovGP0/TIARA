use std::path::PathBuf;

use iced::widget::{
    button, checkbox, column, container, pick_list, row, scrollable, text, text_input,
};
use iced::{Alignment, Element, Length};
use tiara_core::digital_signal_generator::{
    CoordinateEditorAdapter, DisplayControlModel, DisplayScroll, SignalDisplayAdapter,
};
use tiara_core::digital_signal_generator_control::{
    AxisMode, ChannelComboAdapter, ChannelEndpointModel, WaveformEditOperation,
};

use crate::shared::window_shell;

mod dialogs;

pub use dialogs::{DialogAction, LoadDialogState, SaveDialogState};

pub const TITLE: &str = "Digital Signal Generator";
pub const SCREENSHOT: &str = "screenshots/Digital_Signal_Generator_Window.png";
pub const FORM_RESOURCE: &str = "DigitalSignalGeneratorWin";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("0150f690");
const STATUS: &str = "Digital output";
const SAVE_TARGETS: [&str; 3] = ["Definition file", "Sample data", "Tina"];
const LOAD_TARGETS: [&str; 2] = ["Definition file", "Tina"];

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    selections: Vec<Option<&'static str>>,
    checks: Vec<bool>,
    display_controls: DisplayControlModel,
    selected_coordinate: Option<CoordinateBound>,
    coordinate_text: String,
    endpoints: ChannelEndpointModel,
    period_editor_visible: bool,
    length_editor_visible: bool,
    save_dialog: Option<SaveDialogState>,
    load_dialog: Option<LoadDialogState>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 6],
            selections: vec![None; 4],
            checks: vec![false; 1],
            display_controls: DisplayControlModel::new(0.0, 1.0),
            selected_coordinate: None,
            coordinate_text: String::new(),
            endpoints: ChannelEndpointModel { from: 0, to: 0 },
            period_editor_visible: true,
            length_editor_visible: false,
            save_dialog: None,
            load_dialog: None,
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CoordinateBound {
    Left,
    Right,
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ControlAction {
    ApplyChannelEnabled(bool),
    Scroll(DisplayScroll),
    SubmitGroupLabel(String),
    Dialog(DialogAction),
    SelectChannelIndex(i32),
    Start,
    Stop,
    Waveform(WaveformEditOperation),
    SelectAxisMode(AxisMode),
    ShowPeriodEditor,
    ShowLengthEditor,
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
    OptionSelected(usize, &'static str),
    Toggle(usize, bool),
    ScrollUp,
    ScrollDown,
    ScrollRight,
    ScrollLeft,
    CoordinateSelected(CoordinateBound),
    DeleteGroupPressed,
    DataSavePressed,
    DataLoadPressed,
    SaveTargetSelected(i32),
    LoadTargetSelected(i32),
    SaveAccepted,
    SaveCancelled,
    SavePickerCompleted(Option<PathBuf>),
    LoadAccepted,
    LoadCancelled,
    LoadPickerCompleted(Option<PathBuf>),
    StartPressed,
    StopPressed,
    DeleteIntervalPressed,
    SetIntervalPressed,
    RepeatIntervalPressed,
    InsertIntervalPressed,
    PeriodEditorSelected,
    LengthEditorSelected,
    FromEndpointSelected,
    ToEndpointSelected,
    TimeAxisSelected,
    ClickAxisSelected,
    NoOp,
}

#[derive(Default)]
struct ActionDisplayAdapter(Option<ControlAction>);

impl SignalDisplayAdapter for ActionDisplayAdapter {
    fn scroll(&mut self, direction: DisplayScroll) {
        self.0 = Some(ControlAction::Scroll(direction));
    }
}

struct CoordinateTextAdapter<'a>(&'a mut String);

impl CoordinateEditorAdapter for CoordinateTextAdapter<'_> {
    fn set_value(&mut self, value: f64) {
        self.0.clear();
        self.0.push_str(&value.to_string());
    }
}

#[derive(Default)]
struct ComboActionAdapter(Option<ControlAction>);

impl ChannelComboAdapter for ComboActionAdapter {
    fn set_item_index(&mut self, index: i32) {
        self.0 = Some(ControlAction::SelectChannelIndex(index));
    }
}

impl Window {
    #[must_use]
    pub fn update(&mut self, message: Message) -> Option<ControlAction> {
        match message {
            Message::TextChanged(index, value) => {
                if let Some(field) = self.values.get_mut(index) {
                    *field = value;
                }
                None
            }
            Message::OptionSelected(index, value) => {
                if let Some(selection) = self.selections.get_mut(index) {
                    *selection = Some(value);
                }
                None
            }
            Message::Toggle(index, value) => {
                if let Some(check) = self.checks.get_mut(index) {
                    *check = value;
                    if index == 0 {
                        return Some(Self::channel_on_clicked(value));
                    }
                }
                None
            }
            Message::ScrollUp => self.scroll_up_clicked(),
            Message::ScrollDown => self.scroll_down_clicked(),
            Message::ScrollRight => self.scroll_right_clicked(),
            Message::ScrollLeft => self.scroll_left_clicked(),
            Message::CoordinateSelected(CoordinateBound::Left) => self.left_coordinate_clicked(),
            Message::CoordinateSelected(CoordinateBound::Right) => self.right_coordinate_clicked(),
            Message::DeleteGroupPressed => Some(self.delete_group_clicked()),
            Message::DataSavePressed => Some(self.open_save_dialog()),
            Message::DataLoadPressed => Some(self.open_load_dialog()),
            Message::SaveTargetSelected(index) => {
                if let Some(dialog) = self.save_dialog.as_mut() {
                    dialog.selected_index = index;
                }
                None
            }
            Message::LoadTargetSelected(index) => {
                if let Some(dialog) = self.load_dialog.as_mut() {
                    dialog.selected_index = index;
                }
                None
            }
            Message::SaveAccepted => self.accept_save_dialog(),
            Message::SaveCancelled => self.cancel_save_dialog(),
            Message::SavePickerCompleted(path) => self.complete_save_picker(path),
            Message::LoadAccepted => self.accept_load_dialog(),
            Message::LoadCancelled => self.cancel_load_dialog(),
            Message::LoadPickerCompleted(path) => self.complete_load_picker(path),
            Message::StartPressed => Some(Self::start_clicked()),
            Message::StopPressed => Some(ControlAction::Stop),
            Message::DeleteIntervalPressed => {
                Some(ControlAction::Waveform(WaveformEditOperation::Delete))
            }
            Message::SetIntervalPressed => {
                Some(ControlAction::Waveform(WaveformEditOperation::Set))
            }
            Message::RepeatIntervalPressed => {
                Some(ControlAction::Waveform(WaveformEditOperation::Repeat(1)))
            }
            Message::InsertIntervalPressed => {
                Some(ControlAction::Waveform(WaveformEditOperation::Insert))
            }
            Message::PeriodEditorSelected => Some(self.select_period_editor()),
            Message::LengthEditorSelected => Some(self.select_length_editor()),
            Message::FromEndpointSelected => Some(self.select_from_endpoint()),
            Message::ToEndpointSelected => Some(self.select_to_endpoint()),
            Message::TimeAxisSelected => Some(ControlAction::SelectAxisMode(AxisMode::Time)),
            Message::ClickAxisSelected => Some(ControlAction::SelectAxisMode(AxisMode::Click)),
            Message::NoOp => None,
        }
    }

    fn accept_save_dialog(&mut self) -> Option<ControlAction> {
        let action = self.save_dialog.as_mut().map(SaveDialogState::accept);
        if matches!(action, Some(DialogAction::TransferToTina)) {
            self.save_dialog = None;
        }
        action.map(ControlAction::Dialog)
    }

    fn cancel_save_dialog(&mut self) -> Option<ControlAction> {
        let action = self
            .save_dialog
            .is_some()
            .then_some(SaveDialogState::cancel());
        self.save_dialog = None;
        action.map(ControlAction::Dialog)
    }

    fn complete_save_picker(&mut self, path: Option<PathBuf>) -> Option<ControlAction> {
        let action = self
            .save_dialog
            .as_mut()
            .map(|dialog| dialog.picker_completed(path));
        self.save_dialog = None;
        action.map(ControlAction::Dialog)
    }

    fn accept_load_dialog(&mut self) -> Option<ControlAction> {
        let action = self.load_dialog.as_mut().map(LoadDialogState::accept);
        if matches!(action, Some(DialogAction::ReloadFromTina)) {
            self.load_dialog = None;
        }
        action.map(ControlAction::Dialog)
    }

    fn cancel_load_dialog(&mut self) -> Option<ControlAction> {
        let action = self
            .load_dialog
            .is_some()
            .then_some(LoadDialogState::cancel());
        self.load_dialog = None;
        action.map(ControlAction::Dialog)
    }

    fn complete_load_picker(&mut self, path: Option<PathBuf>) -> Option<ControlAction> {
        let action = self
            .load_dialog
            .as_mut()
            .map(|dialog| dialog.picker_completed(path));
        self.load_dialog = None;
        action.map(ControlAction::Dialog)
    }

    fn scroll_action(
        &self,
        dispatch: impl FnOnce(&DisplayControlModel, &mut dyn SignalDisplayAdapter),
    ) -> Option<ControlAction> {
        let mut display = ActionDisplayAdapter::default();
        dispatch(&self.display_controls, &mut display);
        display.0
    }

    /// Reimplements Ghidra function `FUN_01510330` at `0x01510330`.
    fn scroll_up_clicked(&self) -> Option<ControlAction> {
        self.scroll_action(|model, display| model.scroll_up(display))
    }

    /// Reimplements Ghidra function `FUN_01510340` at `0x01510340`.
    fn scroll_down_clicked(&self) -> Option<ControlAction> {
        self.scroll_action(|model, display| model.scroll_down(display))
    }

    /// Reimplements Ghidra function `FUN_01510350` at `0x01510350`.
    fn scroll_right_clicked(&self) -> Option<ControlAction> {
        self.scroll_action(|model, display| model.scroll_right(display))
    }

    /// Reimplements Ghidra function `FUN_01510360` at `0x01510360`.
    fn scroll_left_clicked(&self) -> Option<ControlAction> {
        self.scroll_action(|model, display| model.scroll_left(display))
    }

    /// Reimplements Ghidra function `FUN_01510630` at `0x01510630`.
    fn left_coordinate_clicked(&mut self) -> Option<ControlAction> {
        self.selected_coordinate = Some(CoordinateBound::Left);
        let mut editor = CoordinateTextAdapter(&mut self.coordinate_text);
        self.display_controls.show_left_bound(&mut editor);
        None
    }

    /// Reimplements Ghidra function `FUN_015109e0` at `0x015109E0`.
    fn right_coordinate_clicked(&mut self) -> Option<ControlAction> {
        self.selected_coordinate = Some(CoordinateBound::Right);
        let mut editor = CoordinateTextAdapter(&mut self.coordinate_text);
        self.display_controls.show_right_bound(&mut editor);
        None
    }

    /// Reimplements Ghidra function `FUN_01508a30` at `0x01508A30`.
    ///
    /// The delete button clears the group-label editor and returns the same
    /// empty-label submission action as the shared Enter path. The caller owns
    /// the guarded group removal and subsequent refresh.
    #[must_use]
    fn trigger_group_delete(&mut self) -> ControlAction {
        self.values[0].clear();
        ControlAction::SubmitGroupLabel(String::new())
    }

    /// Reimplements Ghidra function `FUN_0150f680` at `0x0150F680`.
    ///
    /// Iced applies the new checkbox state before this wrapper returns the
    /// typed model action.
    #[must_use]
    const fn channel_on_clicked(enabled: bool) -> ControlAction {
        ControlAction::ApplyChannelEnabled(enabled)
    }

    /// Reimplements Ghidra function `FUN_01511f60` at `0x01511F60`.
    #[must_use]
    fn open_save_dialog(&mut self) -> ControlAction {
        self.save_dialog = Some(SaveDialogState::default());
        ControlAction::Dialog(DialogAction::OpenSave)
    }

    /// Reimplements Ghidra function `FUN_01511fa0` at `0x01511FA0`.
    #[must_use]
    fn open_load_dialog(&mut self) -> ControlAction {
        self.load_dialog = Some(LoadDialogState::default());
        ControlAction::Dialog(DialogAction::OpenLoad)
    }

    /// Reimplements Ghidra function `FUN_015120f0` at `0x015120F0`.
    #[must_use]
    fn delete_group_clicked(&mut self) -> ControlAction {
        self.trigger_group_delete()
    }

    /// Returns the typed Start command for the core run coordinator.
    #[must_use]
    const fn start_clicked() -> ControlAction {
        ControlAction::Start
    }

    /// Reimplements Ghidra function `FUN_01512870` at `0x01512870`.
    #[must_use]
    const fn select_period_editor(&mut self) -> ControlAction {
        self.period_editor_visible = true;
        self.length_editor_visible = false;
        ControlAction::ShowPeriodEditor
    }

    /// Reimplements Ghidra function `FUN_015128a0` at `0x015128A0`.
    #[must_use]
    const fn select_length_editor(&mut self) -> ControlAction {
        self.period_editor_visible = false;
        self.length_editor_visible = true;
        ControlAction::ShowLengthEditor
    }

    /// Reimplements Ghidra function `FUN_01512990` at `0x01512990`.
    #[must_use]
    fn select_from_endpoint(&self) -> ControlAction {
        let mut combo = ComboActionAdapter::default();
        self.endpoints.show_from(&mut combo);
        combo
            .0
            .unwrap_or(ControlAction::SelectChannelIndex(self.endpoints.from))
    }

    /// Reimplements Ghidra function `FUN_015129b0` at `0x015129B0`.
    #[must_use]
    fn select_to_endpoint(&self) -> ControlAction {
        let mut combo = ComboActionAdapter::default();
        self.endpoints.show_to(&mut combo);
        combo
            .0
            .unwrap_or(ControlAction::SelectChannelIndex(self.endpoints.to))
    }

    const fn save_target(index: i32) -> Option<&'static str> {
        match index {
            0 => Some(SAVE_TARGETS[0]),
            1 => Some(SAVE_TARGETS[1]),
            2 => Some(SAVE_TARGETS[2]),
            _ => None,
        }
    }

    const fn load_target(index: i32) -> Option<&'static str> {
        match index {
            0 => Some(LOAD_TARGETS[0]),
            1 => Some(LOAD_TARGETS[1]),
            _ => None,
        }
    }

    fn dialog_controls(&self) -> Element<'_, Message> {
        match (&self.save_dialog, &self.load_dialog) {
            (Some(dialog), _) => column![
                text("Save data"),
                pick_list(
                    SAVE_TARGETS,
                    Self::save_target(dialog.selected_index),
                    |value| Message::SaveTargetSelected(match value {
                        "Definition file" => 0,
                        "Sample data" => 1,
                        _ => 2,
                    })
                ),
                row![
                    button("OK").on_press(Message::SaveAccepted),
                    button("Cancel").on_press(Message::SaveCancelled),
                    button("Cancel picker").on_press(Message::SavePickerCompleted(None)),
                ]
                .spacing(4),
            ]
            .spacing(4)
            .into(),
            (None, Some(dialog)) => column![
                text("Load data"),
                pick_list(
                    LOAD_TARGETS,
                    Self::load_target(dialog.selected_index),
                    |value| Message::LoadTargetSelected(i32::from(value == "Tina"))
                ),
                row![
                    button("OK").on_press(Message::LoadAccepted),
                    button("Cancel").on_press(Message::LoadCancelled),
                    button("Cancel picker").on_press(Message::LoadPickerCompleted(None)),
                ]
                .spacing(4),
            ]
            .spacing(4)
            .into(),
            (None, None) => column![].into(),
        }
    }

    #[cfg(test)]
    const fn set_display_bounds(&mut self, left: f64, right: f64) {
        self.display_controls = DisplayControlModel::new(left, right);
    }

    #[cfg(test)]
    #[must_use]
    const fn selected_coordinate(&self) -> Option<CoordinateBound> {
        self.selected_coordinate
    }

    #[cfg(test)]
    #[must_use]
    fn coordinate_text(&self) -> &str {
        &self.coordinate_text
    }

    #[cfg(test)]
    #[must_use]
    fn group_label(&self) -> &str {
        &self.values[0]
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    #[allow(clippy::too_many_lines)]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar: Element<'_, Message> = container(
            row![
                button("Start").on_press(Message::StartPressed),
                button("Stop").on_press(Message::StopPressed),
                button("Data Load").on_press(Message::DataLoadPressed),
                button("Data Save").on_press(Message::DataSavePressed),
                button("Settings").on_press(Message::NoOp),
            ]
            .spacing(4),
        )
        .padding([3, 6])
        .width(Length::Fill)
        .into();
        let clock_editor: Element<'_, Message> = if self.period_editor_visible {
            row![
                text("Period").width(Length::FillPortion(2)),
                text_input("", &self.values[3])
                    .on_input(move |value| Message::TextChanged(3, value))
                    .width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .align_y(Alignment::Center)
            .into()
        } else {
            debug_assert!(self.length_editor_visible);
            row![
                text("Length").width(Length::FillPortion(2)),
                text_input("", &self.values[5])
                    .on_input(move |value| Message::TextChanged(5, value))
                    .width(Length::FillPortion(3)),
            ]
            .spacing(8)
            .align_y(Alignment::Center)
            .into()
        };
        let dialog_controls = self.dialog_controls();
        let body: Element<'_, Message> = row![
            container(scrollable(
                column![
                    dialog_controls,
                    row![
                        text("Channel").width(Length::FillPortion(2)),
                        pick_list(
                            ["Channel 1", "Channel 2", "Channel 3", "Channel 4"],
                            self.selections[0],
                            move |value| { Message::OptionSelected(0, value) }
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
                        button("Del").on_press(Message::DeleteGroupPressed),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    checkbox("On", self.checks[0])
                        .on_toggle(move |value| Message::Toggle(0, value)),
                    row![
                        button("From").on_press(Message::FromEndpointSelected),
                        text_input("", &self.values[1])
                            .on_input(move |value| Message::TextChanged(1, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        button("To").on_press(Message::ToEndpointSelected),
                        text_input("", &self.values[2])
                            .on_input(move |value| Message::TextChanged(2, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Clock").width(Length::FillPortion(2)),
                        button("Period").on_press(Message::PeriodEditorSelected),
                        button("Length").on_press(Message::LengthEditorSelected),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    clock_editor,
                    row![
                        text("Mode").width(Length::FillPortion(2)),
                        pick_list(["Step", "Burst"], self.selections[1], move |value| {
                            Message::OptionSelected(1, value)
                        })
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Level").width(Length::FillPortion(2)),
                        pick_list(
                            ["Default", "Option 1", "Option 2"],
                            self.selections[2],
                            move |value| { Message::OptionSelected(2, value) }
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Trigger").width(Length::FillPortion(2)),
                        pick_list(
                            ["Default", "Option 1", "Option 2"],
                            self.selections[3],
                            move |value| { Message::OptionSelected(3, value) }
                        )
                        .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                ]
                .spacing(8)
            ))
            .padding(8)
            .width(Length::Fixed(300.0))
            .height(Length::Fill),
            column![
                row![
                    button("Up").on_press(Message::ScrollUp),
                    button("Down").on_press(Message::ScrollDown),
                    button("Left").on_press(Message::ScrollLeft),
                    button("Right").on_press(Message::ScrollRight),
                    button("Time").on_press(Message::TimeAxisSelected),
                    button("Click").on_press(Message::ClickAxisSelected),
                ]
                .spacing(4),
                window_shell::surface("Digital Signal Generator display surface"),
                row![
                    button("Set").on_press(Message::SetIntervalPressed),
                    button("Insert").on_press(Message::InsertIntervalPressed),
                    button("Delete").on_press(Message::DeleteIntervalPressed),
                    button("Repeat").on_press(Message::RepeatIntervalPressed),
                ]
                .spacing(4),
                row![
                    button("Left bound")
                        .on_press(Message::CoordinateSelected(CoordinateBound::Left)),
                    text_input("", &self.coordinate_text).width(Length::Fixed(120.0)),
                    button("Right bound")
                        .on_press(Message::CoordinateSelected(CoordinateBound::Right)),
                ]
                .spacing(4)
                .align_y(Alignment::Center),
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

    #[test]
    fn channel_on_toggle_returns_a_typed_model_action() {
        let mut window = Window::default();

        let action = window.update(Message::Toggle(0, true));

        assert_eq!(action, Some(ControlAction::ApplyChannelEnabled(true)));
    }

    #[test]
    fn scroll_messages_return_the_exact_display_direction() {
        let mut window = Window::default();

        let actions = [
            window.update(Message::ScrollUp),
            window.update(Message::ScrollDown),
            window.update(Message::ScrollRight),
            window.update(Message::ScrollLeft),
        ];

        assert_eq!(
            actions,
            [
                Some(ControlAction::Scroll(DisplayScroll::Up)),
                Some(ControlAction::Scroll(DisplayScroll::Down)),
                Some(ControlAction::Scroll(DisplayScroll::Right)),
                Some(ControlAction::Scroll(DisplayScroll::Left)),
            ]
        );
    }

    #[test]
    fn coordinate_selection_displays_the_stored_bound_without_an_action() {
        let mut window = Window::default();
        window.set_display_bounds(1.25, 8.5);

        let left_action = window.update(Message::CoordinateSelected(CoordinateBound::Left));
        assert_eq!(left_action, None);
        assert_eq!(window.selected_coordinate(), Some(CoordinateBound::Left));
        assert_eq!(window.coordinate_text(), "1.25");

        let right_action = window.update(Message::CoordinateSelected(CoordinateBound::Right));
        assert_eq!(right_action, None);
        assert_eq!(window.selected_coordinate(), Some(CoordinateBound::Right));
        assert_eq!(window.coordinate_text(), "8.5");
    }

    #[test]
    fn delete_group_clears_the_editor_and_reuses_empty_label_submission() {
        let mut window = Window::default();
        let _ = window.update(Message::TextChanged(0, "Group A".to_owned()));

        let action = window.update(Message::DeleteGroupPressed);

        assert_eq!(window.group_label(), "");
        assert_eq!(action, Some(ControlAction::SubmitGroupLabel(String::new())));
    }

    #[test]
    fn modal_open_accept_and_cancel_return_typed_parent_actions() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::DataSavePressed),
            Some(ControlAction::Dialog(DialogAction::OpenSave))
        );
        assert_eq!(
            window.update(Message::SaveAccepted),
            Some(ControlAction::Dialog(DialogAction::RequestPicker(
                dialogs::PickerKind::SaveDefinition
            )))
        );
        assert_eq!(
            window.update(Message::SaveCancelled),
            Some(ControlAction::Dialog(DialogAction::CloseSave))
        );

        assert_eq!(
            window.update(Message::DataLoadPressed),
            Some(ControlAction::Dialog(DialogAction::OpenLoad))
        );
        assert_eq!(
            window.update(Message::LoadCancelled),
            Some(ControlAction::Dialog(DialogAction::CloseLoadAndRefresh))
        );
    }

    #[test]
    fn picker_completion_closes_the_owned_modal_state() {
        let mut window = Window::default();
        let _ = window.update(Message::DataSavePressed);
        let _ = window.update(Message::SaveAccepted);

        let save_action = window.update(Message::SavePickerCompleted(Some(PathBuf::from(
            "C:/Data/Example.DSG",
        ))));

        assert!(matches!(
            save_action,
            Some(ControlAction::Dialog(DialogAction::SaveDefinition(_)))
        ));
        assert!(window.save_dialog.is_none());

        let _ = window.update(Message::DataLoadPressed);
        let _ = window.update(Message::LoadAccepted);
        assert_eq!(
            window.update(Message::LoadPickerCompleted(None)),
            Some(ControlAction::Dialog(DialogAction::CloseLoadAndRefresh))
        );
        assert!(window.load_dialog.is_none());
    }

    #[test]
    fn modal_target_selection_reaches_sample_and_tina_actions() {
        let mut window = Window::default();
        let _ = window.update(Message::DataSavePressed);
        let _ = window.update(Message::SaveTargetSelected(1));
        assert_eq!(
            window.update(Message::SaveAccepted),
            Some(ControlAction::Dialog(DialogAction::RequestPicker(
                dialogs::PickerKind::SaveSamples
            )))
        );
        let _ = window.update(Message::SavePickerCompleted(None));

        let _ = window.update(Message::DataSavePressed);
        let _ = window.update(Message::SaveTargetSelected(2));
        assert_eq!(
            window.update(Message::SaveAccepted),
            Some(ControlAction::Dialog(DialogAction::TransferToTina))
        );
        assert!(window.save_dialog.is_none());

        let _ = window.update(Message::DataLoadPressed);
        let _ = window.update(Message::LoadTargetSelected(1));
        assert_eq!(
            window.update(Message::LoadAccepted),
            Some(ControlAction::Dialog(DialogAction::ReloadFromTina))
        );
        assert!(window.load_dialog.is_none());
    }

    #[test]
    fn endpoint_wrappers_restore_the_stored_raw_indexes() {
        let mut window = Window {
            endpoints: ChannelEndpointModel { from: -1, to: 7 },
            ..Window::default()
        };

        assert_eq!(
            window.update(Message::FromEndpointSelected),
            Some(ControlAction::SelectChannelIndex(-1))
        );
        assert_eq!(
            window.update(Message::ToEndpointSelected),
            Some(ControlAction::SelectChannelIndex(7))
        );
    }

    #[test]
    fn clock_selector_keeps_only_one_overlapping_editor_visible() {
        let mut window = Window::default();

        assert_eq!(
            window.update(Message::LengthEditorSelected),
            Some(ControlAction::ShowLengthEditor)
        );
        assert!(!window.period_editor_visible);
        assert!(window.length_editor_visible);

        assert_eq!(
            window.update(Message::PeriodEditorSelected),
            Some(ControlAction::ShowPeriodEditor)
        );
        assert!(window.period_editor_visible);
        assert!(!window.length_editor_visible);
    }

    #[test]
    fn run_axis_and_waveform_messages_preserve_typed_operations() {
        let mut window = Window::default();

        let actions = [
            window.update(Message::StartPressed),
            window.update(Message::StopPressed),
            window.update(Message::TimeAxisSelected),
            window.update(Message::ClickAxisSelected),
            window.update(Message::SetIntervalPressed),
            window.update(Message::InsertIntervalPressed),
            window.update(Message::DeleteIntervalPressed),
            window.update(Message::RepeatIntervalPressed),
        ];

        assert_eq!(
            actions,
            [
                Some(ControlAction::Start),
                Some(ControlAction::Stop),
                Some(ControlAction::SelectAxisMode(AxisMode::Time)),
                Some(ControlAction::SelectAxisMode(AxisMode::Click)),
                Some(ControlAction::Waveform(WaveformEditOperation::Set)),
                Some(ControlAction::Waveform(WaveformEditOperation::Insert)),
                Some(ControlAction::Waveform(WaveformEditOperation::Delete)),
                Some(ControlAction::Waveform(WaveformEditOperation::Repeat(1))),
            ]
        );
    }
}
