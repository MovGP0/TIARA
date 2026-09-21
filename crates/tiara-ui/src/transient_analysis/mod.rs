//! The Transient Analysis dialog, as `Analysis > Transient...` opens it.
//!
//! Two times bound the run, and the group between them settles what the run
//! starts from. The resource leaves the labels and the group's choices empty
//! and fills them in as it opens, so the captions here are the ones the
//! running original shows.

use iced::widget::{button, checkbox, column, container, radio, row, text, text_input};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Transient Analysis";
pub const SCREENSHOT: &str = "screenshots/Transient_Analysis.png";
pub const FORM_RESOURCE: &str = "TranAnalDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("00f5dfb0");
const STATUS: &str = "Transient analysis";

/// The unit the two times are given in.
const SECONDS: &str = "[s]";

/// What the run takes as its starting point.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum StartingPoint {
    #[default]
    CalculateOperatingPoint,
    UseInitialConditions,
    ZeroInitialValues,
}

impl StartingPoint {
    /// The three the original offers, in the order it offers them.
    pub const ALL: [Self; 3] = [
        Self::CalculateOperatingPoint,
        Self::UseInitialConditions,
        Self::ZeroInitialValues,
    ];

    #[must_use]
    pub const fn caption(self) -> &'static str {
        match self {
            Self::CalculateOperatingPoint => "Calculate operating point",
            Self::UseInitialConditions => "Use initial conditions",
            Self::ZeroInitialValues => "Zero initial values",
        }
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    start_display: String,
    end_display: String,
    starting_point: StartingPoint,
    draw_excitation: bool,
    use_switch_model: bool,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            // What the original shows on a new sheet.
            start_display: "0".to_owned(),
            end_display: "1u".to_owned(),
            starting_point: StartingPoint::default(),
            draw_excitation: true,
            use_switch_model: false,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    StartDisplayChanged(String),
    EndDisplayChanged(String),
    StartingPointSelected(StartingPoint),
    DrawExcitationToggled(bool),
    UseSwitchModelToggled(bool),
    Accepted,
    Cancelled,
    HelpRequested,
}

impl Window {
    #[must_use]
    pub fn start_display(&self) -> &str {
        &self.start_display
    }

    #[must_use]
    pub fn end_display(&self) -> &str {
        &self.end_display
    }

    #[must_use]
    pub const fn starting_point(&self) -> StartingPoint {
        self.starting_point
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::StartDisplayChanged(value) => self.start_display = value,
            Message::EndDisplayChanged(value) => self.end_display = value,
            Message::StartingPointSelected(point) => self.starting_point = point,
            Message::DrawExcitationToggled(on) => self.draw_excitation = on,
            Message::UseSwitchModelToggled(on) => self.use_switch_model = on,
            Message::Accepted | Message::Cancelled | Message::HelpRequested => {}
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut points = column![].spacing(2);
        for point in StartingPoint::ALL {
            points = points.push(radio(
                point.caption(),
                point,
                Some(self.starting_point),
                Message::StartingPointSelected,
            ));
        }

        let settings = column![
            time(
                "Start display",
                &self.start_display,
                Message::StartDisplayChanged
            ),
            time("End display", &self.end_display, Message::EndDisplayChanged),
            container(points).padding(6),
            checkbox("Draw excitation", self.draw_excitation)
                .on_toggle(Message::DrawExcitationToggled),
            checkbox("Use switch model", self.use_switch_model)
                .on_toggle(Message::UseSwitchModelToggled),
        ]
        .spacing(6);

        let body = row![
            settings,
            column![
                button("OK").on_press(Message::Accepted),
                button("Cancel").on_press(Message::Cancelled),
                button("Help").on_press(Message::HelpRequested),
            ]
            .spacing(4),
        ]
        .spacing(12)
        .padding(8)
        .height(Length::Fill);

        window_shell::frame(
            TITLE,
            window_shell::empty_menu(),
            window_shell::empty_menu(),
            body.into(),
            STATUS,
        )
    }
}

/// One of the two times, with the unit the original writes after it.
fn time<'a>(
    caption: &'a str,
    value: &'a str,
    on_input: impl Fn(String) -> Message + 'a,
) -> Element<'a, Message> {
    row![
        text(caption).width(Length::Fixed(120.0)),
        text_input("", value)
            .on_input(on_input)
            .width(Length::Fixed(90.0)),
        text(SECONDS),
    ]
    .spacing(8)
    .into()
}

#[cfg(test)]
mod tests {
    use super::{Message, StartingPoint, Window};

    #[test]
    fn it_opens_on_the_times_the_original_shows() {
        let window = Window::default();
        assert_eq!(window.start_display(), "0");
        assert_eq!(window.end_display(), "1u");
    }

    #[test]
    fn it_opens_on_calculating_the_operating_point() {
        assert_eq!(
            Window::default().starting_point(),
            StartingPoint::CalculateOperatingPoint
        );
    }

    #[test]
    fn the_three_starting_points_read_as_the_original_writes_them() {
        let captions: Vec<&str> = StartingPoint::ALL
            .iter()
            .map(|point| point.caption())
            .collect();
        assert_eq!(
            captions,
            [
                "Calculate operating point",
                "Use initial conditions",
                "Zero initial values",
            ]
        );
    }

    #[test]
    fn the_times_keep_what_is_typed_into_them() {
        let mut window = Window::default();
        window.update(Message::StartDisplayChanged("10n".to_owned()));
        window.update(Message::EndDisplayChanged("5m".to_owned()));

        assert_eq!(window.start_display(), "10n");
        assert_eq!(window.end_display(), "5m");
    }

    #[test]
    fn excitation_is_drawn_until_it_is_turned_off() {
        let mut window = Window::default();
        assert!(window.draw_excitation);

        window.update(Message::DrawExcitationToggled(false));
        assert!(!window.draw_excitation);
    }

    #[test]
    fn the_commands_leave_the_settings_alone() {
        let mut window = Window::default();
        window.update(Message::StartingPointSelected(
            StartingPoint::ZeroInitialValues,
        ));
        let before = window.clone();

        for message in [
            Message::Accepted,
            Message::Cancelled,
            Message::HelpRequested,
        ] {
            window.update(message);
        }

        assert_eq!(window, before);
    }
}
