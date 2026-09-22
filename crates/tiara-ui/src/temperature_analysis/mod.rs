//! `Analysis > DC Analysis > Temperature Analysis...`
//!
//! The dialog that says what temperatures to run the circuit at. Three
//! fields, as the recovered resource carries them: a start temperature, an
//! end temperature, both in `[C]`, and a number of points.
//!
//! It needs no analysis of its own to be written. SPICE sweeps `TEMP` the
//! way it sweeps a source, so this is a
//! [`tiara_core::spice_netlist::Analysis::DcSweep`] whose source is the
//! word `TEMP` - which is why the count becomes a step here in the same way
//! the DC transfer dialog does it.

use iced::widget::{Space, button, column, row, text, text_input};
use iced::{Element, Length};

/// What the title bar says.
pub const TITLE: &str = "Temperature Analysis";

/// The resource the controls were read from.
pub const FORM_RESOURCE: &str = "TempAnalDlg";

/// The handler behind OK.
pub const ORIGINAL_FUNCTION: Option<&str> = Some("012b3d20");

/// What the two temperature fields are measured in.
pub const UNIT: &str = "[C]";

/// What SPICE calls the temperature when it is swept like a source.
///
/// Named once in [`tiara_core::temperature`] so that the dialog that writes
/// it and the built-in solver that refuses it cannot drift apart.
pub const TEMPERATURE: &str = tiara_core::temperature::SWEPT;

/// The dialog.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    start: String,
    end: String,
    points: String,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            // The original fills these in as it opens; 27 C is the
            // temperature Analysis Parameters ships as the environment's,
            // so a sweep that starts there starts where a plain run sits.
            start: "27".to_owned(),
            end: "100".to_owned(),
            points: "10".to_owned(),
        }
    }
}

/// What can happen in it.
#[derive(Debug, Clone)]
pub enum Message {
    StartChanged(String),
    EndChanged(String),
    PointsChanged(String),
    Accepted,
    Cancelled,
    HelpRequested,
}

impl Window {
    #[must_use]
    pub fn start(&self) -> &str {
        &self.start
    }

    #[must_use]
    pub fn end(&self) -> &str {
        &self.end
    }

    #[must_use]
    pub fn points(&self) -> &str {
        &self.points
    }

    /// How far apart the temperatures are, which is what SPICE writes.
    ///
    /// A range or a count that cannot be read leaves the end value as the
    /// step, which asks for the coarsest sweep rather than writing
    /// something wrong - the same rule the DC transfer dialog follows.
    #[must_use]
    pub fn step(&self) -> String {
        let read = |value: &str| value.trim().parse::<f64>().ok();
        match (read(&self.start), read(&self.end), read(&self.points)) {
            (Some(from), Some(to), Some(count)) if to > from && count > 1.0 => {
                format!("{}", (to - from) / (count - 1.0))
            }
            _ => self.end.clone(),
        }
    }

    /// What the dialog is asking a simulator for.
    #[must_use]
    pub fn asking(&self) -> tiara_core::spice_netlist::Analysis {
        tiara_core::spice_netlist::Analysis::DcSweep {
            source: TEMPERATURE.to_owned(),
            from: self.start.clone(),
            to: self.end.clone(),
            step: self.step(),
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::StartChanged(value) => self.start = value,
            Message::EndChanged(value) => self.end = value,
            Message::PointsChanged(value) => self.points = value,
            Message::Accepted | Message::Cancelled | Message::HelpRequested => {}
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let field = |caption: &'static str,
                     value: &str,
                     unit: &'static str,
                     on_input: fn(String) -> Message| {
            row![
                text(caption).width(Length::Fixed(130.0)).size(12),
                text_input("", value).on_input(on_input).size(12).padding(4),
                text(unit).size(12),
            ]
            .spacing(8)
            .align_y(iced::Alignment::Center)
        };

        column![
            field(
                "Start temperature",
                &self.start,
                UNIT,
                Message::StartChanged
            ),
            field("End temperature", &self.end, UNIT, Message::EndChanged),
            field("Number of points", &self.points, "", Message::PointsChanged),
            Space::with_height(Length::Fixed(8.0)),
            row![
                button(text("OK").size(12)).on_press(Message::Accepted),
                button(text("Cancel").size(12)).on_press(Message::Cancelled),
                button(text("Help").size(12)).on_press(Message::HelpRequested),
            ]
            .spacing(8),
        ]
        .spacing(8)
        .padding(12)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::{Message, TEMPERATURE, TITLE, UNIT, Window};

    #[test]
    fn it_carries_the_three_fields_the_resource_carries() {
        let window = Window::default();
        assert_eq!(TITLE, "Temperature Analysis");
        assert_eq!(UNIT, "[C]");
        // Analysis Parameters ships 27 C as the environment's temperature,
        // so a sweep starts where a plain run sits.
        assert_eq!(window.start(), "27");
        assert!(!window.end().is_empty());
        assert!(!window.points().is_empty());
    }

    #[test]
    fn the_temperature_is_swept_the_way_a_source_is() {
        let mut window = Window::default();
        window.update(Message::StartChanged("0".to_owned()));
        window.update(Message::EndChanged("100".to_owned()));
        window.update(Message::PointsChanged("11".to_owned()));

        assert_eq!(window.asking().directive(), ".DC TEMP 0 100 10");
        assert_eq!(TEMPERATURE, "TEMP");
    }

    #[test]
    fn a_range_that_cannot_be_read_asks_for_the_coarsest_sweep() {
        let mut window = Window::default();
        window.update(Message::EndChanged("hot".to_owned()));
        assert_eq!(window.step(), "hot");
    }

    #[test]
    fn one_point_is_no_sweep_at_all() {
        let mut window = Window::default();
        window.update(Message::PointsChanged("1".to_owned()));
        assert_eq!(window.step(), window.end());
    }

    #[test]
    fn the_buttons_leave_the_settings_alone() {
        let before = Window::default();
        let mut window = Window::default();
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
