use iced::widget::{button, checkbox, column, container, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub mod model;

use model::{
    RecorderCanResizeInput, RecorderCreationConfig, RecorderDestroyHost, RecorderResizeInput,
    RecorderScreenInteractionHost, RecorderState, RecordingMode, ScreenDoubleClickInput,
    ScreenMouseDownInput, ScreenMouseMoveInput,
};

pub const TITLE: &str = "XY Recorder";
pub const SCREENSHOT: &str = "screenshots/XY_Recorder_Window.png";
pub const FORM_RESOURCE: &str = "XYRecorderWin";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01b590b0");
const STATUS: &str = "XY display";

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    recorder: RecorderState,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 6],
            recorder: RecorderState::default(),
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    Created(RecorderCreationConfig),
    TextChanged(usize, String),
    HorizontalPositionKeyPressed {
        key: char,
        text: String,
    },
    HorizontalPositionExited(String),
    HorizontalPositionError,
    HorizontalPositionEnd,
    HorizontalPositionDown,
    HorizontalPositionUp,
    XSensitivityEnd,
    XSensitivityUp,
    XSensitivityDown,
    CursorLeftMouseDown {
        primary_button: bool,
    },
    CursorRightMouseDown {
        primary_button: bool,
    },
    CursorRightMouseUp {
        primary_button: bool,
    },
    CursorLeftMouseUp {
        primary_button: bool,
    },
    ChannelSelected(Option<usize>),
    XSourceSelected(Option<usize>),
    RecordingModeSelected(Option<RecordingMode>),
    RecordingIntervalUp,
    RecordingIntervalDown,
    RecordingIntervalKeyPressed {
        key: char,
        text: String,
    },
    RecordingIntervalExited(String),
    RecordingIntervalError,
    ChannelOnChanged(bool),
    YSensitivityDown,
    YSensitivityUp,
    YSensitivityEnd,
    Shown {
        current_width: u32,
        current_height: u32,
        saved_width: u32,
        saved_height: u32,
    },
    Hidden,
    CloseRequested,
    CloseQueried {
        application_exiting: bool,
        current_decision: bool,
    },
    VerticalPositionUp,
    VerticalPositionDown,
    VerticalPositionEnd,
    ScreenPaint {
        width: u32,
        height: u32,
        front_overlay_visible: bool,
    },
    Resized(RecorderResizeInput),
    CanResize(RecorderCanResizeInput),
    ScreenDoubleClicked(ScreenDoubleClickInput),
    Start,
    Stop,
    Erase,
    AutoScale,
    PreviousCurve,
    NextCurve,
    CursorOnChanged(bool),
    SelectCursorA,
    SelectCursorB,
    LoadData,
    SaveData,
    SelectYOverTime,
    SelectYOverX,
}

impl Window {
    pub fn destroy(&mut self, host: &mut impl RecorderDestroyHost) {
        self.recorder.destroy(host);
    }

    pub fn screen_mouse_down(
        &mut self,
        input: ScreenMouseDownInput,
        host: &mut impl RecorderScreenInteractionHost,
    ) {
        self.recorder.screen_mouse_down(input, host);
    }

    pub fn screen_mouse_move(
        &mut self,
        input: ScreenMouseMoveInput,
        host: &mut impl RecorderScreenInteractionHost,
    ) {
        self.recorder.screen_mouse_move(input, host);
    }

    pub fn screen_mouse_up(&mut self, host: &mut impl RecorderScreenInteractionHost) {
        self.recorder.screen_mouse_up(host);
    }

    const fn restore_horizontal_position(&mut self) {
        self.recorder.restore_horizontal_position_after_error();
    }

    fn restore_recording_interval(&mut self) {
        self.recorder.restore_recording_interval_after_error();
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::Created(config) => _ = self.recorder.create(config),
            Message::TextChanged(index, value) => {
                if let Some(field) = self.values.get_mut(index) {
                    *field = value;
                }
            }
            Message::HorizontalPositionKeyPressed { key, text } => {
                _ = self.recorder.horizontal_position_key_pressed(key, &text);
            }
            Message::HorizontalPositionExited(text) => {
                self.recorder.horizontal_position_edit_exited(&text);
            }
            Message::HorizontalPositionError => self.restore_horizontal_position(),
            Message::HorizontalPositionEnd => self.recorder.commit_horizontal_position(),
            Message::HorizontalPositionDown => self.recorder.decrease_horizontal_position(),
            Message::HorizontalPositionUp => self.recorder.increase_horizontal_position(),
            Message::XSensitivityEnd => self.recorder.commit_x_sensitivity(),
            Message::XSensitivityUp => self.recorder.increase_x_sensitivity(),
            Message::XSensitivityDown => self.recorder.decrease_x_sensitivity(),
            Message::CursorLeftMouseDown { primary_button } => {
                self.recorder.cursor_left_mouse_down(primary_button);
            }
            Message::CursorRightMouseDown { primary_button } => {
                self.recorder.cursor_right_mouse_down(primary_button);
            }
            Message::CursorRightMouseUp { primary_button } => {
                self.recorder.cursor_right_mouse_up(primary_button);
            }
            Message::CursorLeftMouseUp { primary_button } => {
                self.recorder.cursor_left_mouse_up(primary_button);
            }
            Message::ChannelSelected(index) => self.recorder.select_y_channel_from_combo(index),
            Message::XSourceSelected(index) => self.recorder.select_x_source(index),
            Message::RecordingModeSelected(mode) => self.recorder.select_recording_mode(mode),
            Message::RecordingIntervalUp => self.recorder.increase_recording_interval(),
            Message::RecordingIntervalDown => self.recorder.decrease_recording_interval(),
            Message::RecordingIntervalKeyPressed { key, text } => {
                _ = self.recorder.recording_interval_key_pressed(key, &text);
            }
            Message::RecordingIntervalExited(text) => {
                self.recorder.recording_interval_edit_exited(&text);
            }
            Message::RecordingIntervalError => self.restore_recording_interval(),
            Message::ChannelOnChanged(enabled) => {
                self.recorder.set_selected_channel_enabled(enabled);
            }
            Message::YSensitivityDown => self.recorder.decrease_y_sensitivity(),
            Message::YSensitivityUp => self.recorder.increase_y_sensitivity(),
            Message::YSensitivityEnd => self.recorder.commit_y_sensitivity(),
            Message::Shown {
                current_width,
                current_height,
                saved_width,
                saved_height,
            } => self
                .recorder
                .show(current_width, current_height, saved_width, saved_height),
            Message::Hidden => self.recorder.hide(),
            Message::CloseRequested => _ = self.recorder.close(),
            Message::CloseQueried {
                application_exiting,
                current_decision,
            } => {
                _ = self
                    .recorder
                    .query_close(application_exiting, current_decision);
            }
            Message::VerticalPositionUp => self.recorder.increase_vertical_position(),
            Message::VerticalPositionDown => self.recorder.decrease_vertical_position(),
            Message::VerticalPositionEnd => self.recorder.commit_vertical_position(),
            Message::ScreenPaint {
                width,
                height,
                front_overlay_visible,
            } => {
                _ = self
                    .recorder
                    .paint_screen(width, height, front_overlay_visible);
            }
            Message::Resized(input) => _ = self.recorder.resize(input),
            Message::CanResize(input) => _ = self.recorder.can_resize(input),
            Message::ScreenDoubleClicked(input) => _ = self.recorder.screen_double_clicked(input),
            Message::Start => self.recorder.start_acquisition(),
            Message::Stop => self.recorder.stop_acquisition(),
            Message::Erase => self.recorder.erase_display(),
            Message::AutoScale => self.recorder.auto_scale(),
            Message::PreviousCurve => self.recorder.select_following_curve(),
            Message::NextCurve => self.recorder.select_preceding_curve(),
            Message::CursorOnChanged(enabled) => {
                self.recorder.set_selected_cursor_enabled(enabled);
            }
            Message::SelectCursorA => self.recorder.select_cursor_a(true),
            Message::SelectCursorB => self.recorder.select_cursor_b(true),
            Message::LoadData => self.recorder.data_load_clicked(),
            Message::SaveData => self.recorder.data_save_clicked(),
            Message::SelectYOverTime => self.recorder.select_y_over_time(),
            Message::SelectYOverX => self.recorder.select_y_over_x(),
        }
    }
    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = recorder_toolbar();
        let body: Element<'_, Message> = row![
            container(scrollable(
                column![
                    row![
                        button("A").on_press(Message::SelectCursorA),
                        button("B").on_press(Message::SelectCursorB),
                        button("Previous").on_press(Message::PreviousCurve),
                        button("Next").on_press(Message::NextCurve),
                    ]
                    .spacing(4),
                    checkbox("Cursor On", self.recorder.cursor_on())
                        .on_toggle(Message::CursorOnChanged),
                    row![
                        text("Cursor A").width(Length::FillPortion(2)),
                        text_input("", &self.values[0])
                            .on_input(move |value| Message::TextChanged(0, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("Cursor B").width(Length::FillPortion(2)),
                        text_input("", &self.values[1])
                            .on_input(move |value| Message::TextChanged(1, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    checkbox("Channel On", self.recorder.channel_on())
                        .on_toggle(Message::ChannelOnChanged),
                    row![
                        button("Y/T").on_press(Message::SelectYOverTime),
                        button("Y/X").on_press(Message::SelectYOverX),
                        text(self.recorder.plot_mode().horizontal_label()),
                    ]
                    .spacing(4)
                    .align_y(Alignment::Center),
                    row![
                        button("Export Data").on_press(Message::SaveData),
                        button("Load Data").on_press(Message::LoadData),
                    ]
                    .spacing(4),
                    row![
                        text("XA").width(Length::FillPortion(2)),
                        text_input("", &self.values[2])
                            .on_input(move |value| Message::TextChanged(2, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("XB").width(Length::FillPortion(2)),
                        text_input("", &self.values[3])
                            .on_input(move |value| Message::TextChanged(3, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("YA").width(Length::FillPortion(2)),
                        text_input("", &self.values[4])
                            .on_input(move |value| Message::TextChanged(4, value))
                            .width(Length::FillPortion(3)),
                    ]
                    .spacing(8)
                    .align_y(Alignment::Center),
                    row![
                        text("YB").width(Length::FillPortion(2)),
                        text_input("", &self.values[5])
                            .on_input(move |value| Message::TextChanged(5, value))
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
            window_shell::surface("XY Recorder display surface"),
        ]
        .spacing(6)
        .padding(6)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}

fn recorder_toolbar<'a>() -> Element<'a, Message> {
    container(
        row![
            button("Auto").on_press(Message::AutoScale),
            button("Erase").on_press(Message::Erase),
            button("Start").on_press(Message::Start),
            button("Stop").on_press(Message::Stop),
        ]
        .spacing(4),
    )
    .padding([3, 6])
    .width(Length::Fill)
    .into()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn iced_messages_route_to_recorder_state_without_a_live_window() {
        let mut window = Window::default();

        window.update(Message::ChannelOnChanged(true));
        window.update(Message::Start);

        assert!(window.recorder.channel_on());
        assert!(window.recorder.acquisition_active());
    }
}
