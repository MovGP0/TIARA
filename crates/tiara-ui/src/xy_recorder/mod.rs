use iced::widget::{button, checkbox, column, container, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub mod model;

use model::RecorderState;

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
    TextChanged(usize, String),
    ChannelOnChanged(bool),
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
    pub fn update(&mut self, message: Message) {
        match message {
            Message::TextChanged(index, value) => {
                if let Some(field) = self.values.get_mut(index) {
                    *field = value;
                }
            }
            Message::ChannelOnChanged(enabled) => {
                self.recorder.set_selected_channel_enabled(enabled);
            }
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
