//! The Function Generator, as `T&M > Function Generator` opens it.
//!
//! Control and Output sit across the top left, the Waveform group under them,
//! and the Parameters group fills the right: a reading with its unit, the
//! buttons that say which parameter the reading belongs to, a Sweep group, and
//! the four read-outs down the far right.
//!
//! The four parameter buttons and the reading are one control between them in
//! the original: pressing `Freq`, `Ampl`, `Offset` or `Phase` points the
//! reading and its spinner at that parameter rather than opening anything, so
//! each parameter keeps its own value and only one is edited at a time.

use iced::widget::{button, column, combo_box, container, row, text, text_input};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Function Generator";
pub const SCREENSHOT: &str = "screenshots/Function_Generator_Window.png";
pub const FORM_RESOURCE: &str = "FuncGenWin";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01139c70");
const STATUS: &str = "Signal source";

/// The waveforms the generator produces, in the order the resource lays the
/// buttons out. The first three carry a drawing rather than a caption, so
/// they are named here for what they draw.
pub const WAVEFORMS: [Waveform; 5] = [
    Waveform::Sine,
    Waveform::Triangle,
    Waveform::Square,
    Waveform::Dc,
    Waveform::Arbitrary,
];

/// Which parameter the reading is showing.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum Parameter {
    #[default]
    Frequency,
    Amplitude,
    Offset,
    Phase,
}

impl Parameter {
    /// The four, in the order the resource stacks their buttons.
    pub const ALL: [Self; 4] = [Self::Frequency, Self::Amplitude, Self::Offset, Self::Phase];

    /// The caption the resource gives the button.
    #[must_use]
    pub const fn caption(self) -> &'static str {
        match self {
            Self::Frequency => "Freq",
            Self::Amplitude => "Ampl",
            Self::Offset => "Offset",
            Self::Phase => "Phase",
        }
    }

    /// The hint the resource gives it, which says what it is in full.
    #[must_use]
    pub const fn hint(self) -> &'static str {
        match self {
            Self::Frequency => "Frequency",
            Self::Amplitude => "Amplitude",
            Self::Offset => "DC Offset",
            Self::Phase => "Phase",
        }
    }

    /// The unit the reading carries for it.
    #[must_use]
    pub const fn unit(self) -> &'static str {
        match self {
            Self::Frequency => "Hz",
            Self::Amplitude | Self::Offset => "V",
            Self::Phase => "\u{b0}",
        }
    }
}

/// What the generator puts out.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum Waveform {
    #[default]
    Sine,
    Triangle,
    Square,
    Dc,
    Arbitrary,
}

impl Waveform {
    /// What the button shows. The first three are drawings in the original and
    /// are drawn here with the nearest characters rather than left blank.
    #[must_use]
    pub const fn caption(self) -> &'static str {
        match self {
            Self::Sine => "\u{223F}",
            Self::Triangle => "\u{2227}",
            Self::Square => "\u{2293}",
            Self::Dc => "DC",
            Self::Arbitrary => "ARB",
        }
    }

    /// The hint the resource gives it, where it gives one.
    #[must_use]
    pub const fn hint(self) -> &'static str {
        match self {
            Self::Sine => "Sine",
            Self::Triangle => "Triangle",
            Self::Square => "Square",
            Self::Dc => "DC Level",
            Self::Arbitrary => "Userdefined waveform",
        }
    }
}

/// Which sweep value the sweep group is showing.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum SweepValue {
    #[default]
    Start,
    Stop,
    Time,
    Steps,
}

impl SweepValue {
    pub const ALL: [Self; 4] = [Self::Start, Self::Stop, Self::Time, Self::Steps];

    #[must_use]
    pub const fn caption(self) -> &'static str {
        match self {
            Self::Start => "Start",
            Self::Stop => "Stop",
            Self::Time => "Time",
            Self::Steps => "Num",
        }
    }

    #[must_use]
    pub const fn hint(self) -> &'static str {
        match self {
            Self::Start => "Start Frequency",
            Self::Stop => "Stop Frequency",
            Self::Time => "Sweep Time",
            Self::Steps => "Number of steps",
        }
    }
}

#[allow(
    clippy::struct_excessive_bools,
    reason = "each one is a separate button on the original's panel"
)]
/// What the reading is pointed at.
///
/// The four parameter buttons and the four sweep buttons do the same thing to
/// the same reading: they say which value it is showing. Holding that as one
/// choice is what keeps them from contradicting each other.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Showing {
    Parameter(Parameter),
    Sweep(SweepValue),
}

impl Default for Showing {
    fn default() -> Self {
        Self::Parameter(Parameter::Frequency)
    }
}

#[allow(
    clippy::struct_excessive_bools,
    reason = "each one is a separate button on the original's panel"
)]
#[derive(Debug)]
pub struct Window {
    running: bool,
    channels: combo_box::State<String>,
    chosen_channel: Option<String>,
    waveform: Waveform,

    showing: Showing,
    frequency: String,
    amplitude: String,
    offset: String,
    phase: String,
    editing: bool,

    sweeping: bool,
    continuous: bool,
    logarithmic: bool,
    sweep_start: String,
    sweep_stop: String,
    sweep_time: String,
    sweep_steps: String,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            running: false,
            // The channels are the sheet's, so there are none until one is open.
            channels: combo_box::State::new(Vec::new()),
            chosen_channel: None,
            // What the original shows on an untouched generator.
            waveform: Waveform::Dc,

            showing: Showing::default(),
            frequency: "0,0000".to_owned(),
            amplitude: String::new(),
            offset: "0".to_owned(),
            phase: "0".to_owned(),
            editing: false,

            sweeping: false,
            continuous: false,
            logarithmic: false,
            sweep_start: String::new(),
            sweep_stop: String::new(),
            sweep_time: String::new(),
            sweep_steps: String::new(),
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    Started,
    Stopped,
    ChannelChosen(String),
    WaveformChosen(Waveform),

    ParameterChosen(Parameter),
    ReadingChanged(String),
    EditToggled,
    StepUp,
    StepDown,

    SweepToggled,
    ContinuousToggled,
    LogarithmicToggled,
    SweepValueChosen(SweepValue),
}

impl Window {
    /// The value the reading is showing.
    #[must_use]
    pub fn reading(&self) -> &str {
        match self.showing {
            Showing::Parameter(Parameter::Frequency) => &self.frequency,
            Showing::Parameter(Parameter::Amplitude) => &self.amplitude,
            Showing::Parameter(Parameter::Offset) => &self.offset,
            Showing::Parameter(Parameter::Phase) => &self.phase,
            Showing::Sweep(SweepValue::Start) => &self.sweep_start,
            Showing::Sweep(SweepValue::Stop) => &self.sweep_stop,
            Showing::Sweep(SweepValue::Time) => &self.sweep_time,
            Showing::Sweep(SweepValue::Steps) => &self.sweep_steps,
        }
    }

    /// The unit that value carries.
    #[must_use]
    pub const fn unit(&self) -> &'static str {
        match self.showing {
            Showing::Parameter(parameter) => parameter.unit(),
            Showing::Sweep(SweepValue::Start | SweepValue::Stop) => "Hz",
            Showing::Sweep(SweepValue::Time) => "s",
            Showing::Sweep(SweepValue::Steps) => "",
        }
    }

    const fn reading_mut(&mut self) -> &mut String {
        match self.showing {
            Showing::Parameter(Parameter::Frequency) => &mut self.frequency,
            Showing::Parameter(Parameter::Amplitude) => &mut self.amplitude,
            Showing::Parameter(Parameter::Offset) => &mut self.offset,
            Showing::Parameter(Parameter::Phase) => &mut self.phase,
            Showing::Sweep(SweepValue::Start) => &mut self.sweep_start,
            Showing::Sweep(SweepValue::Stop) => &mut self.sweep_stop,
            Showing::Sweep(SweepValue::Time) => &mut self.sweep_time,
            Showing::Sweep(SweepValue::Steps) => &mut self.sweep_steps,
        }
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::Started => self.running = true,
            Message::Stopped => self.running = false,
            Message::ChannelChosen(value) => self.chosen_channel = Some(value),
            Message::WaveformChosen(waveform) => self.waveform = waveform,

            Message::ParameterChosen(parameter) => self.showing = Showing::Parameter(parameter),
            Message::ReadingChanged(value) => *self.reading_mut() = value,
            Message::EditToggled => self.editing = !self.editing,

            Message::SweepToggled => self.sweeping = !self.sweeping,
            Message::ContinuousToggled => self.continuous = !self.continuous,
            Message::LogarithmicToggled => self.logarithmic = !self.logarithmic,
            Message::SweepValueChosen(value) => self.showing = Showing::Sweep(value),

            // The spinner steps the reading by one place of whatever unit it
            // is showing, which needs the value parsed against its multiplier.
            // Until the generator has a signal to produce, there is nothing
            // for a step to change.
            Message::StepUp | Message::StepDown => {}
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let body = row![
            column![self.control(), self.output(), self.waveform()].spacing(6),
            self.parameters(),
        ]
        .spacing(8)
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

    fn control(&self) -> Element<'_, Message> {
        group(
            "Control",
            row![
                marked("Start", self.running, Message::Started),
                marked("Stop", !self.running, Message::Stopped),
            ]
            .spacing(2)
            .into(),
        )
    }

    fn output(&self) -> Element<'_, Message> {
        group(
            "Output",
            combo_box(
                &self.channels,
                "",
                self.chosen_channel.as_ref(),
                Message::ChannelChosen,
            )
            .into(),
        )
    }

    fn waveform(&self) -> Element<'_, Message> {
        let mut buttons = row![].spacing(2);
        for waveform in WAVEFORMS {
            buttons = buttons.push(hinted(
                waveform.caption(),
                waveform.hint(),
                self.waveform == waveform,
                Message::WaveformChosen(waveform),
            ));
        }
        group("Waveform", buttons.into())
    }

    fn parameters(&self) -> Element<'_, Message> {
        let mut chooser = column![].spacing(2);
        for parameter in Parameter::ALL {
            chooser = chooser.push(hinted(
                parameter.caption(),
                parameter.hint(),
                self.showing == Showing::Parameter(parameter),
                Message::ParameterChosen(parameter),
            ));
        }

        let reading = row![
            text_input("", self.reading())
                .on_input(Message::ReadingChanged)
                .width(Length::Fill),
            text(self.unit()).size(12),
            column![
                button(text("\u{25B2}").size(9)).on_press(Message::StepUp),
                button(text("\u{25BC}").size(9)).on_press(Message::StepDown),
            ],
        ]
        .spacing(4);

        let stepper = row![
            button(text("\u{25C0}").size(11)).on_press(Message::StepDown),
            marked("Edit", self.editing, Message::EditToggled),
            button(text("\u{25B6}").size(11)).on_press(Message::StepUp),
        ]
        .spacing(2);

        group(
            "Parameters",
            row![
                column![reading, stepper, self.sweep()]
                    .spacing(4)
                    .width(Length::Fill),
                chooser,
            ]
            .spacing(6)
            .into(),
        )
    }

    fn sweep(&self) -> Element<'_, Message> {
        let mut values = row![].spacing(2);
        for value in SweepValue::ALL {
            values = values.push(hinted(
                value.caption(),
                value.hint(),
                self.showing == Showing::Sweep(value),
                Message::SweepValueChosen(value),
            ));
        }

        group(
            "Sweep",
            column![
                row![
                    marked("On", self.sweeping, Message::SweepToggled),
                    marked("Cont", self.continuous, Message::ContinuousToggled),
                    marked(
                        if self.logarithmic { "Log" } else { "Lin" },
                        self.logarithmic,
                        Message::LogarithmicToggled
                    ),
                ]
                .spacing(2),
                values,
            ]
            .spacing(3)
            .into(),
        )
    }
}

/// A labelled box, which is what the resource draws its groups as.
fn group<'a>(caption: &'a str, inside: Element<'a, Message>) -> Element<'a, Message> {
    container(column![text(caption).size(11), inside].spacing(3))
        .padding(5)
        .into()
}

/// One of the buttons that stays lit while its setting is the chosen one.
fn marked(caption: &str, lit: bool, message: Message) -> Element<'_, Message> {
    let face = if lit {
        text(format!("[{caption}]")).size(11)
    } else {
        text(caption).size(11)
    };
    button(face).padding([2, 6]).on_press(message).into()
}

/// The same, with the hint the resource gives it shown on hover.
fn hinted<'a>(
    caption: &'a str,
    hint: &'a str,
    lit: bool,
    message: Message,
) -> Element<'a, Message> {
    iced::widget::tooltip(
        marked(caption, lit, message),
        text(hint).size(11),
        iced::widget::tooltip::Position::Bottom,
    )
    .into()
}

#[cfg(test)]
mod tests {
    use super::{Message, Parameter, Showing, SweepValue, WAVEFORMS, Waveform, Window};

    #[test]
    fn it_opens_on_what_the_original_shows() {
        let window = Window::default();
        assert_eq!(window.waveform, Waveform::Dc);
        assert_eq!(window.showing, Showing::Parameter(Parameter::Frequency));
        assert_eq!(window.reading(), "0,0000");
        assert!(!window.running);
        assert!(!window.sweeping);
    }

    #[test]
    fn the_reading_follows_whichever_parameter_is_chosen() {
        let mut window = Window::default();
        window.update(Message::ReadingChanged("1k".to_owned()));
        assert_eq!(window.reading(), "1k");

        window.update(Message::ParameterChosen(Parameter::Amplitude));
        assert_eq!(window.reading(), "");

        window.update(Message::ReadingChanged("5".to_owned()));
        assert_eq!(window.reading(), "5");

        // The frequency is still where it was left.
        window.update(Message::ParameterChosen(Parameter::Frequency));
        assert_eq!(window.reading(), "1k");
    }

    #[test]
    fn the_sweep_buttons_point_the_same_reading_at_their_own_value() {
        let mut window = Window::default();
        window.update(Message::ReadingChanged("1k".to_owned()));

        window.update(Message::SweepValueChosen(SweepValue::Time));
        assert_eq!(window.reading(), "");
        assert_eq!(window.unit(), "s");

        window.update(Message::ReadingChanged("10m".to_owned()));
        assert_eq!(window.reading(), "10m");

        // The frequency the parameter half was showing is untouched.
        window.update(Message::ParameterChosen(Parameter::Frequency));
        assert_eq!(window.reading(), "1k");
        assert_eq!(window.unit(), "Hz");
    }

    #[test]
    fn each_parameter_carries_its_own_unit() {
        assert_eq!(Parameter::Frequency.unit(), "Hz");
        assert_eq!(Parameter::Amplitude.unit(), "V");
        assert_eq!(Parameter::Offset.unit(), "V");
        assert_eq!(Parameter::Phase.unit(), "\u{b0}");
    }

    #[test]
    fn the_five_waveforms_are_the_ones_the_resource_lays_out() {
        assert_eq!(WAVEFORMS.len(), 5);
        assert_eq!(Waveform::Dc.hint(), "DC Level");
        assert_eq!(Waveform::Arbitrary.hint(), "Userdefined waveform");
    }

    #[test]
    fn starting_and_stopping_are_one_state() {
        let mut window = Window::default();
        window.update(Message::Started);
        assert!(window.running);

        window.update(Message::Stopped);
        assert!(!window.running);
    }

    #[test]
    fn the_sweep_group_keeps_its_own_switches() {
        let mut window = Window::default();
        window.update(Message::SweepToggled);
        window.update(Message::ContinuousToggled);
        window.update(Message::LogarithmicToggled);

        assert!(window.sweeping);
        assert!(window.continuous);
        assert!(window.logarithmic);

        window.update(Message::SweepValueChosen(SweepValue::Time));
        assert_eq!(window.showing, Showing::Sweep(SweepValue::Time));
        assert_eq!(SweepValue::Time.hint(), "Sweep Time");
    }

    #[test]
    fn the_spinner_has_nothing_to_step_until_there_is_a_signal() {
        let mut window = Window::default();
        window.update(Message::ReadingChanged("1k".to_owned()));

        window.update(Message::StepUp);
        window.update(Message::StepDown);
        assert_eq!(window.reading(), "1k");
    }
}
