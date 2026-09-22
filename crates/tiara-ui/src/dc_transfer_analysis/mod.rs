//! `Analysis > DC Analysis > DC Transfer Characteristic...`
//!
//! The dialog that says which source to sweep and between what values. Its
//! fields are the ones the recovered resource carries: the frame holds two
//! tabs, `Main sweep` and `Nested sweep`, each with a start, an end, a
//! number of points, an input to sweep and a sweep type, and the main one
//! also offers a hysteresis run.
//!
//! This is what `.DC` is written from - see
//! [`tiara_core::spice_netlist::Analysis::DcSweep`]. SPICE takes a step
//! rather than a count, so the count is turned into one across the range;
//! that is arithmetic on what the dialog holds and not a choice of its own.
//!
//! **The nested sweep is kept and not yet written.** SPICE writes a second
//! source on the same `.DC` line, and the port has nowhere to show two sets
//! of results yet, so what the tab holds is carried rather than dropped and
//! [`Window::nested_is_written`] says plainly that it is not used.

use iced::widget::{Space, button, checkbox, column, pick_list, radio, row, text, text_input};
use iced::{Element, Length};

/// What the title bar says.
pub const TITLE: &str = "DC Transfer Characteristic";

/// The resource the controls were read from.
pub const FORM_RESOURCE: &str = "DCTransferDlg";

/// The handler behind OK.
pub const ORIGINAL_FUNCTION: Option<&str> = Some("012b32d0");

/// What the two tabs are called.
pub const TABS: [&str; 2] = ["Main sweep", "Nested sweep"];

/// How the sweep is spaced, as the resource offers it.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum SweepType {
    /// Evenly spaced, which is what a DC transfer curve wants and what the
    /// resource starts on.
    #[default]
    Linear,
    /// So many points per decade.
    Logarithmic,
}

impl SweepType {
    /// The two, in the order the radio group lists them.
    pub const ALL: [Self; 2] = [Self::Linear, Self::Logarithmic];

    /// What the resource calls it, ampersand removed.
    #[must_use]
    pub const fn caption(self) -> &'static str {
        match self {
            Self::Linear => "Linear",
            Self::Logarithmic => "Logarithmic",
        }
    }
}

/// One tab's worth of sweep.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Sweep {
    pub start: String,
    pub end: String,
    pub points: String,
    pub input: String,
    pub sweep_type: SweepType,
}

impl Default for Sweep {
    fn default() -> Self {
        Self {
            start: "0".to_owned(),
            end: "5".to_owned(),
            points: "100".to_owned(),
            input: String::new(),
            sweep_type: SweepType::default(),
        }
    }
}

impl Sweep {
    /// How far apart the points are, which is what SPICE writes.
    ///
    /// The dialog counts points and SPICE takes a step, so one becomes the
    /// other across the range. A range or a count that cannot be read
    /// leaves the end value as the step, which asks the engine for the
    /// coarsest sweep rather than writing something wrong.
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
}

/// The dialog.
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct Window {
    main: Sweep,
    nested: Sweep,
    showing: usize,
    hysteresis: bool,
    fine_dc: bool,
    /// The sources the sheet offers to sweep, for the input list.
    sources: Vec<String>,
}

/// What can happen in it.
#[derive(Debug, Clone)]
pub enum Message {
    TabChosen(usize),
    StartChanged(String),
    EndChanged(String),
    PointsChanged(String),
    InputChosen(String),
    SweepTypeSelected(SweepType),
    HysteresisToggled(bool),
    FineDcToggled(bool),
    Accepted,
    Cancelled,
    HelpRequested,
}

impl Window {
    /// The tab being shown, which the fields belong to.
    #[must_use]
    pub const fn showing(&self) -> usize {
        self.showing
    }

    #[must_use]
    pub const fn main(&self) -> &Sweep {
        &self.main
    }

    #[must_use]
    pub const fn nested(&self) -> &Sweep {
        &self.nested
    }

    #[must_use]
    pub const fn hysteresis(&self) -> bool {
        self.hysteresis
    }

    /// Whether the nested sweep reaches the netlist. It does not yet.
    #[must_use]
    pub const fn nested_is_written(&self) -> bool {
        false
    }

    /// Offers the sources a sheet has, for the input list.
    pub fn offer_sources(&mut self, sources: Vec<String>) {
        if self.main.input.is_empty() {
            if let Some(first) = sources.first() {
                first.clone_into(&mut self.main.input);
            }
        }
        self.sources = sources;
    }

    /// What the dialog is asking a simulator for.
    #[must_use]
    pub fn asking(&self) -> tiara_core::spice_netlist::Analysis {
        tiara_core::spice_netlist::Analysis::DcSweep {
            source: self.main.input.clone(),
            from: self.main.start.clone(),
            to: self.main.end.clone(),
            step: self.main.step(),
        }
    }

    /// Whether it has been told enough to ask for anything.
    #[must_use]
    pub fn can_ask(&self) -> bool {
        !self.main.input.trim().is_empty()
    }

    const fn showing_mut(&mut self) -> &mut Sweep {
        if self.showing == 0 {
            &mut self.main
        } else {
            &mut self.nested
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::TabChosen(at) => self.showing = at.min(TABS.len() - 1),
            Message::StartChanged(value) => self.showing_mut().start = value,
            Message::EndChanged(value) => self.showing_mut().end = value,
            Message::PointsChanged(value) => self.showing_mut().points = value,
            Message::InputChosen(value) => self.showing_mut().input = value,
            Message::SweepTypeSelected(chosen) => self.showing_mut().sweep_type = chosen,
            Message::HysteresisToggled(on) => self.hysteresis = on,
            Message::FineDcToggled(on) => self.fine_dc = on,
            Message::Accepted | Message::Cancelled | Message::HelpRequested => {}
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let shown = if self.showing == 0 {
            &self.main
        } else {
            &self.nested
        };

        let tabs = TABS
            .iter()
            .enumerate()
            .fold(row![].spacing(6), |laid, (at, caption)| {
                laid.push(button(text(*caption).size(12)).on_press(Message::TabChosen(at)))
            });

        let field = |caption: &'static str, value: &str, on_input: fn(String) -> Message| {
            row![
                text(caption).width(Length::Fixed(120.0)).size(12),
                text_input("", value).on_input(on_input).size(12).padding(4),
            ]
            .spacing(8)
            .align_y(iced::Alignment::Center)
        };

        let sweep = SweepType::ALL.iter().fold(
            row![text("Sweep type").size(12)].spacing(12),
            |laid, choice| {
                laid.push(radio(
                    choice.caption(),
                    *choice,
                    Some(shown.sweep_type),
                    Message::SweepTypeSelected,
                ))
            },
        );

        let chosen = (!shown.input.is_empty()).then(|| shown.input.clone());
        let input = row![
            text("Input").width(Length::Fixed(120.0)).size(12),
            pick_list(self.sources.clone(), chosen, Message::InputChosen).text_size(12),
        ]
        .spacing(8)
        .align_y(iced::Alignment::Center);

        column![
            tabs,
            field("Start value", &shown.start, Message::StartChanged),
            field("End value", &shown.end, Message::EndChanged),
            field("Number of points", &shown.points, Message::PointsChanged),
            sweep,
            input,
            checkbox("Enable hysteresis run", self.hysteresis)
                .on_toggle(Message::HysteresisToggled)
                .size(14),
            checkbox("Enable fine DC", self.fine_dc)
                .on_toggle(Message::FineDcToggled)
                .size(14),
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
    use super::{Message, Sweep, SweepType, TABS, TITLE, Window};

    #[test]
    fn it_opens_on_the_main_sweep_as_the_resource_does() {
        let window = Window::default();
        assert_eq!(window.showing(), 0);
        assert_eq!(TABS, ["Main sweep", "Nested sweep"]);
        assert_eq!(TITLE, "DC Transfer Characteristic");
        // Linear is what a DC transfer curve wants.
        assert_eq!(window.main().sweep_type, SweepType::Linear);
        assert!(!window.hysteresis());
    }

    #[test]
    fn a_count_of_points_becomes_a_step_across_the_range() {
        let sweep = Sweep {
            start: "0".to_owned(),
            end: "5".to_owned(),
            points: "101".to_owned(),
            ..Sweep::default()
        };
        assert_eq!(sweep.step(), "0.05");
    }

    #[test]
    fn a_range_that_cannot_be_read_asks_for_the_coarsest_sweep() {
        let sweep = Sweep {
            start: "0".to_owned(),
            end: "5V".to_owned(),
            points: "10".to_owned(),
            ..Sweep::default()
        };
        assert_eq!(sweep.step(), "5V");

        // One point is no sweep at all.
        let single = Sweep {
            points: "1".to_owned(),
            ..Sweep::default()
        };
        assert_eq!(single.step(), single.end);
    }

    #[test]
    fn the_fields_belong_to_the_tab_that_is_showing() {
        let mut window = Window::default();
        window.update(Message::StartChanged("1".to_owned()));
        window.update(Message::TabChosen(1));
        window.update(Message::StartChanged("2".to_owned()));

        assert_eq!(window.main().start, "1");
        assert_eq!(window.nested().start, "2");
        // And a tab that does not exist does not move the showing one past
        // the end.
        window.update(Message::TabChosen(9));
        assert_eq!(window.showing(), 1);
    }

    #[test]
    fn the_sheets_sources_fill_the_input_list_and_the_first_is_taken() {
        let mut window = Window::default();
        assert!(!window.can_ask());

        window.offer_sources(vec!["V1".to_owned(), "V2".to_owned()]);
        assert!(window.can_ask());
        assert_eq!(window.main().input, "V1");

        // Offering them again does not undo a choice already made.
        window.update(Message::InputChosen("V2".to_owned()));
        window.offer_sources(vec!["V1".to_owned(), "V2".to_owned()]);
        assert_eq!(window.main().input, "V2");
    }

    #[test]
    fn what_is_typed_is_what_is_asked_for() {
        let mut window = Window::default();
        window.offer_sources(vec!["V1".to_owned()]);
        window.update(Message::StartChanged("0".to_owned()));
        window.update(Message::EndChanged("10".to_owned()));
        window.update(Message::PointsChanged("11".to_owned()));

        assert_eq!(window.asking().directive(), ".DC V1 0 10 1");
    }

    #[test]
    fn the_nested_sweep_is_kept_and_said_not_to_be_written() {
        let mut window = Window::default();
        window.update(Message::TabChosen(1));
        window.update(Message::EndChanged("3".to_owned()));

        // It is carried rather than dropped ...
        assert_eq!(window.nested().end, "3");
        // ... and nothing pretends it reaches the netlist.
        assert!(!window.nested_is_written());
        assert!(!window.asking().directive().contains('3'));
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
