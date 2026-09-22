//! `Analysis > AC Analysis > AC Transfer Characteristic...`
//!
//! The dialog that says what frequencies to sweep and what to draw. Its
//! fields are the ones the recovered resource carries, in the order it
//! carries them, and its shipped state is the resource's own: `Ampl &&
//! Phase (Bode)` is the one diagram that starts ticked.
//!
//! This is what `.AC` is written from - see
//! [`tiara_core::spice_netlist::Analysis::Ac`]. The sweep type is the one
//! place the two disagree in wording: the original offers `Linear` and
//! `Logarithmic`, and SPICE writes `LIN` and `DEC`, a decade being what
//! logarithmic means here.

use iced::widget::{Space, button, checkbox, column, radio, row, text, text_input};
use iced::{Element, Length};

/// What the title bar says.
pub const TITLE: &str = "AC Transfer Characteristic";

/// The resource the controls were read from.
pub const FORM_RESOURCE: &str = "ACTransferDlg";

/// The handler behind OK.
pub const ORIGINAL_FUNCTION: Option<&str> = Some("00f08ac0");

/// What the two frequency fields are measured in.
pub const UNIT: &str = "[Hz]";

/// How the sweep is spaced, as the resource offers it.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum SweepType {
    /// Evenly spaced across the range.
    Linear,
    /// So many points per decade, which is what a Bode plot wants and what
    /// the resource starts on.
    #[default]
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

    /// How a netlist writes it.
    #[must_use]
    pub const fn as_sweep(self) -> tiara_core::spice_netlist::Sweep {
        match self {
            Self::Linear => tiara_core::spice_netlist::Sweep::Linear,
            Self::Logarithmic => tiara_core::spice_netlist::Sweep::Decade,
        }
    }
}

/// The diagrams the dialog can draw, in the order the resource lays them
/// out.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Diagram {
    Amplitude,
    Phase,
    Bode,
    Nyquist,
    GroupDelay,
}

impl Diagram {
    /// The five, in the resource's own order.
    pub const ALL: [Self; 5] = [
        Self::Amplitude,
        Self::Phase,
        Self::Bode,
        Self::Nyquist,
        Self::GroupDelay,
    ];

    /// What the resource calls it. The doubled ampersand in the resource is
    /// how Delphi writes one, so it is a single `&` here.
    #[must_use]
    pub const fn caption(self) -> &'static str {
        match self {
            Self::Amplitude => "Amplitude",
            Self::Phase => "Phase",
            Self::Bode => "Ampl & Phase (Bode)",
            Self::Nyquist => "Nyquist",
            Self::GroupDelay => "Group Delay",
        }
    }
}

/// The dialog.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    start_frequency: String,
    end_frequency: String,
    points: String,
    sweep_type: SweepType,
    drawn: Vec<Diagram>,
    loop_gain_only: bool,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            // The resource ships the fields empty and the original fills
            // them in as it opens; these are what it shows on a new sheet.
            start_frequency: "10".to_owned(),
            end_frequency: "1meg".to_owned(),
            points: "100".to_owned(),
            sweep_type: SweepType::default(),
            // `BodeCB` is the one the resource starts checked.
            drawn: vec![Diagram::Bode],
            loop_gain_only: false,
        }
    }
}

/// What can happen in it.
#[derive(Debug, Clone)]
pub enum Message {
    StartFrequencyChanged(String),
    EndFrequencyChanged(String),
    PointsChanged(String),
    SweepTypeSelected(SweepType),
    DiagramToggled(Diagram, bool),
    LoopGainOnlyToggled(bool),
    Accepted,
    Cancelled,
    HelpRequested,
}

impl Window {
    #[must_use]
    pub fn start_frequency(&self) -> &str {
        &self.start_frequency
    }

    #[must_use]
    pub fn end_frequency(&self) -> &str {
        &self.end_frequency
    }

    #[must_use]
    pub fn points(&self) -> &str {
        &self.points
    }

    #[must_use]
    pub const fn sweep_type(&self) -> SweepType {
        self.sweep_type
    }

    /// Whether a diagram is ticked.
    #[must_use]
    pub fn draws(&self, diagram: Diagram) -> bool {
        self.drawn.contains(&diagram)
    }

    #[must_use]
    pub const fn loop_gain_only(&self) -> bool {
        self.loop_gain_only
    }

    /// What the dialog is asking a simulator for.
    ///
    /// The number of points is read where it can be; a field that does not
    /// read as a number falls back on what the dialog ships rather than
    /// refusing, because the original's own `EditIntError` handler puts the
    /// field back rather than stopping.
    #[must_use]
    pub fn asking(&self) -> tiara_core::spice_netlist::Analysis {
        tiara_core::spice_netlist::Analysis::Ac {
            sweep: self.sweep_type.as_sweep(),
            points: self.points.trim().parse::<u32>().unwrap_or(100),
            from: self.start_frequency.clone(),
            to: self.end_frequency.clone(),
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::StartFrequencyChanged(value) => self.start_frequency = value,
            Message::EndFrequencyChanged(value) => self.end_frequency = value,
            Message::PointsChanged(value) => self.points = value,
            Message::SweepTypeSelected(chosen) => self.sweep_type = chosen,
            Message::DiagramToggled(diagram, on) => {
                self.drawn.retain(|it| *it != diagram);
                if on {
                    self.drawn.push(diagram);
                }
            }
            Message::LoopGainOnlyToggled(on) => self.loop_gain_only = on,
            // The three buttons are answered by whoever opened the dialog.
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
                text(caption).width(Length::Fixed(120.0)).size(12),
                text_input("", value).on_input(on_input).size(12).padding(4),
                text(unit).size(12),
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
                    Some(self.sweep_type),
                    Message::SweepTypeSelected,
                ))
            },
        );

        let diagrams = Diagram::ALL.iter().fold(
            column![text("Diagram").size(12)].spacing(4),
            |laid, diagram| {
                laid.push(
                    checkbox(diagram.caption(), self.draws(*diagram))
                        .on_toggle(move |on| Message::DiagramToggled(*diagram, on))
                        .size(14),
                )
            },
        );

        column![
            field(
                "Start frequency",
                &self.start_frequency,
                UNIT,
                Message::StartFrequencyChanged
            ),
            field(
                "End frequency",
                &self.end_frequency,
                UNIT,
                Message::EndFrequencyChanged
            ),
            field("Number of points", &self.points, "", Message::PointsChanged),
            sweep,
            diagrams,
            checkbox("Show Loop Gain output only", self.loop_gain_only)
                .on_toggle(Message::LoopGainOnlyToggled)
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
    use super::{Diagram, Message, SweepType, TITLE, UNIT, Window};

    #[test]
    fn it_opens_on_a_bode_plot_as_the_resource_does() {
        let window = Window::default();
        // `BodeCB` is the one control the resource ships checked.
        assert!(window.draws(Diagram::Bode));
        for other in [
            Diagram::Amplitude,
            Diagram::Phase,
            Diagram::Nyquist,
            Diagram::GroupDelay,
        ] {
            assert!(!window.draws(other), "{other:?} should start unticked");
        }
        assert!(!window.loop_gain_only());
        assert_eq!(TITLE, "AC Transfer Characteristic");
        assert_eq!(UNIT, "[Hz]");
    }

    #[test]
    fn the_sweep_types_are_the_two_the_resource_offers() {
        let captions: Vec<&str> = SweepType::ALL.iter().map(|it| it.caption()).collect();
        assert_eq!(captions, ["Linear", "Logarithmic"]);
        // And the resource starts on the logarithmic one, which is what a
        // Bode plot wants.
        assert_eq!(Window::default().sweep_type(), SweepType::Logarithmic);
    }

    #[test]
    fn a_logarithmic_sweep_is_written_by_the_decade() {
        assert_eq!(
            SweepType::Logarithmic.as_sweep(),
            tiara_core::spice_netlist::Sweep::Decade
        );
        assert_eq!(
            SweepType::Linear.as_sweep(),
            tiara_core::spice_netlist::Sweep::Linear
        );
    }

    #[test]
    fn what_is_typed_is_what_is_asked_for() {
        let mut window = Window::default();
        window.update(Message::StartFrequencyChanged("1".to_owned()));
        window.update(Message::EndFrequencyChanged("10meg".to_owned()));
        window.update(Message::PointsChanged("50".to_owned()));
        window.update(Message::SweepTypeSelected(SweepType::Linear));

        assert_eq!(window.asking().directive(), ".AC LIN 50 1 10meg");
    }

    #[test]
    fn a_number_of_points_that_is_not_a_number_falls_back_rather_than_refusing() {
        // The original's own EditIntError puts the field back; nothing is
        // written wrong and nothing stops.
        let mut window = Window::default();
        window.update(Message::PointsChanged("not a number".to_owned()));
        assert!(window.asking().directive().contains(" 100 "));
    }

    #[test]
    fn the_diagrams_are_ticked_and_unticked_one_at_a_time() {
        let mut window = Window::default();
        window.update(Message::DiagramToggled(Diagram::Nyquist, true));
        assert!(window.draws(Diagram::Nyquist));
        assert!(window.draws(Diagram::Bode));

        window.update(Message::DiagramToggled(Diagram::Bode, false));
        assert!(!window.draws(Diagram::Bode));
        assert!(window.draws(Diagram::Nyquist));

        // Ticking one twice does not put it on the list twice.
        window.update(Message::DiagramToggled(Diagram::Nyquist, true));
        assert!(window.draws(Diagram::Nyquist));
    }

    #[test]
    fn the_bode_caption_carries_one_ampersand_not_the_resources_two() {
        // Delphi writes a literal ampersand doubled; this is the text.
        assert_eq!(Diagram::Bode.caption(), "Ampl & Phase (Bode)");
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
