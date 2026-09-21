//! The AC Multisine Analysis dialog, as `Analysis > AC Analysis > AC Multisine
//! Analysis...` opens it.
//!
//! The input signal is chosen at the top and settles what the rest means: a
//! multisine is bounded by its number of cycles, an impulse by its width. The
//! resource shows both sets and greys what does not apply, which is what the
//! two groups below do here.

use iced::widget::{button, checkbox, column, combo_box, container, radio, row, text, text_input};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "AC Multisine Analysis";
pub const SCREENSHOT: &str = "screenshots/AC_Multisine_Analysis.png";
pub const FORM_RESOURCE: &str = "frmACMultiSine";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("00f5f2f0");
const STATUS: &str = "AC multisine analysis";

/// The two signals the run can be driven with.
pub const INPUT_SIGNALS: [&str; 2] = ["Multisine", "Impulse"];

/// The windows the transform can be taken through.
pub const WINDOW_FUNCTIONS: [&str; 6] = [
    "Uniform", "Hanning", "Flattop", "Blackman", "Hamming", "Bartlet",
];

/// What the run starts from.
pub const CONDITIONS: [&str; 3] = [
    "Calculate operating point",
    "Use initial conditions",
    "Zero initial values",
];

/// The caption on the box that swaps the sheet's own excitation out.
pub const REPLACE_CAPTION: &str =
    "Replace input signal with the built-in multisine or impulse signal";

/// Which of the two signals the run is driven with.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum InputSignal {
    #[default]
    Multisine,
    Impulse,
}

impl InputSignal {
    #[must_use]
    pub const fn index(self) -> usize {
        match self {
            Self::Multisine => 0,
            Self::Impulse => 1,
        }
    }
}

#[derive(Debug)]
pub struct Window {
    input_signal: InputSignal,
    sources: combo_box::State<String>,
    chosen_source: Option<String>,
    amplitude: String,
    pulse_width: String,
    cycles: String,
    steady_state_time: String,
    /// The window function, which the original calls a taper in no place
    /// at all - the name avoids reading as part of this window.
    tapers: combo_box::State<String>,
    chosen_taper: String,
    condition: usize,
    replace_input_signal: bool,
    transient_result: bool,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            input_signal: InputSignal::default(),
            // The sources are the sheet's, so there are none until one is open.
            sources: combo_box::State::new(Vec::new()),
            chosen_source: None,
            amplitude: String::new(),
            pulse_width: String::new(),
            cycles: String::new(),
            steady_state_time: String::new(),
            tapers: combo_box::State::new(WINDOW_FUNCTIONS.iter().map(|&s| s.to_owned()).collect()),
            chosen_taper: WINDOW_FUNCTIONS[0].to_owned(),
            condition: 0,
            // The resource marks this one checked.
            replace_input_signal: true,
            transient_result: false,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    InputSignalSelected(InputSignal),
    SourceChosen(String),
    AmplitudeChanged(String),
    PulseWidthChanged(String),
    CyclesChanged(String),
    SteadyStateTimeChanged(String),
    WindowFunctionChosen(String),
    ConditionSelected(usize),
    ReplaceInputSignalToggled(bool),
    TransientResultToggled(bool),
    Accepted,
    Cancelled,
    HelpRequested,
}

impl Window {
    #[must_use]
    pub const fn input_signal(&self) -> InputSignal {
        self.input_signal
    }

    #[must_use]
    pub const fn condition(&self) -> usize {
        self.condition
    }

    #[must_use]
    pub const fn replaces_input_signal(&self) -> bool {
        self.replace_input_signal
    }

    /// Whether the number of cycles applies, which it does for a multisine.
    #[must_use]
    pub const fn cycles_apply(&self) -> bool {
        matches!(self.input_signal, InputSignal::Multisine)
    }

    /// Whether the impulse width applies, which it does for an impulse.
    #[must_use]
    pub const fn pulse_width_applies(&self) -> bool {
        matches!(self.input_signal, InputSignal::Impulse)
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::InputSignalSelected(signal) => self.input_signal = signal,
            Message::SourceChosen(value) => self.chosen_source = Some(value),
            Message::AmplitudeChanged(value) => self.amplitude = value,
            Message::PulseWidthChanged(value) => self.pulse_width = value,
            Message::CyclesChanged(value) => self.cycles = value,
            Message::SteadyStateTimeChanged(value) => self.steady_state_time = value,
            Message::WindowFunctionChosen(value) => self.chosen_taper = value,
            Message::ConditionSelected(index) => {
                if index < CONDITIONS.len() {
                    self.condition = index;
                }
            }
            Message::ReplaceInputSignalToggled(on) => self.replace_input_signal = on,
            Message::TransientResultToggled(on) => self.transient_result = on,
            Message::Accepted | Message::Cancelled | Message::HelpRequested => {}
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let signals = row![
            radio(
                INPUT_SIGNALS[0],
                InputSignal::Multisine,
                Some(self.input_signal),
                Message::InputSignalSelected
            ),
            radio(
                INPUT_SIGNALS[1],
                InputSignal::Impulse,
                Some(self.input_signal),
                Message::InputSignalSelected
            ),
        ]
        .spacing(12);

        let mut conditions = column![].spacing(2);
        for (index, caption) in CONDITIONS.iter().enumerate() {
            conditions = conditions.push(radio(
                *caption,
                index,
                Some(self.condition),
                Message::ConditionSelected,
            ));
        }

        let settings = self.settings();

        let body = column![
            group("Input signal", signals.into()),
            settings,
            group("Transient inital condition", conditions.into()),
            checkbox(REPLACE_CAPTION, self.replace_input_signal)
                .on_toggle(Message::ReplaceInputSignalToggled),
            checkbox("Transient result", self.transient_result)
                .on_toggle(Message::TransientResultToggled),
            row![
                button("OK").on_press(Message::Accepted),
                button("Cancel").on_press(Message::Cancelled),
                button("Help").on_press(Message::HelpRequested),
            ]
            .spacing(8),
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

    /// The settings between the two groups, which are one block of
    /// label-and-value rows in the resource as well.
    fn settings(&self) -> Element<'_, Message> {
        let mut cycles = text_input("", &self.cycles).width(Length::Fixed(100.0));
        if self.cycles_apply() {
            cycles = cycles.on_input(Message::CyclesChanged);
        }
        let mut pulse_width = text_input("", &self.pulse_width).width(Length::Fixed(100.0));
        if self.pulse_width_applies() {
            pulse_width = pulse_width.on_input(Message::PulseWidthChanged);
        }

        column![
            row![
                text("Source").width(Length::Fixed(160.0)),
                combo_box(
                    &self.sources,
                    "",
                    self.chosen_source.as_ref(),
                    Message::SourceChosen
                )
                .width(Length::Fixed(140.0)),
            ]
            .spacing(8),
            row![
                text("Source peak amlitude").width(Length::Fixed(160.0)),
                text_input("", &self.amplitude)
                    .on_input(Message::AmplitudeChanged)
                    .width(Length::Fixed(100.0)),
                text("[V]"),
            ]
            .spacing(8),
            row![
                text("Impulse width").width(Length::Fixed(160.0)),
                pulse_width
            ]
            .spacing(8),
            row![text("Number of cycles").width(Length::Fixed(160.0)), cycles].spacing(8),
            row![
                text("Steady state time").width(Length::Fixed(160.0)),
                text_input("", &self.steady_state_time)
                    .on_input(Message::SteadyStateTimeChanged)
                    .width(Length::Fixed(100.0)),
                text("[s]"),
            ]
            .spacing(8),
            row![
                text("Fourier window function").width(Length::Fixed(160.0)),
                combo_box(
                    &self.tapers,
                    "",
                    Some(&self.chosen_taper),
                    Message::WindowFunctionChosen
                )
                .width(Length::Fixed(140.0)),
            ]
            .spacing(8),
        ]
        .spacing(6)
        .into()
    }
}

/// A labelled box, which is what the resource draws its groups as.
fn group<'a>(caption: &'a str, inside: Element<'a, Message>) -> Element<'a, Message> {
    container(column![text(caption), inside].spacing(4))
        .padding(8)
        .into()
}

#[cfg(test)]
mod tests {
    use super::{CONDITIONS, InputSignal, Message, WINDOW_FUNCTIONS, Window};

    #[test]
    fn it_opens_driven_by_a_multisine() {
        let window = Window::default();
        assert_eq!(window.input_signal(), InputSignal::Multisine);
        assert!(window.cycles_apply());
        assert!(!window.pulse_width_applies());
    }

    #[test]
    fn choosing_an_impulse_swaps_which_bound_applies() {
        let mut window = Window::default();
        window.update(Message::InputSignalSelected(InputSignal::Impulse));

        assert!(!window.cycles_apply());
        assert!(window.pulse_width_applies());
    }

    #[test]
    fn the_resource_starts_with_the_sheet_excitation_replaced() {
        assert!(Window::default().replaces_input_signal());
    }

    #[test]
    fn the_six_windows_read_as_the_resource_writes_them() {
        assert_eq!(
            WINDOW_FUNCTIONS,
            [
                "Uniform", "Hanning", "Flattop", "Blackman", "Hamming", "Bartlet"
            ]
        );
    }

    #[test]
    fn a_condition_that_is_not_offered_is_ignored() {
        let mut window = Window::default();
        window.update(Message::ConditionSelected(CONDITIONS.len()));
        assert_eq!(window.condition(), 0);

        window.update(Message::ConditionSelected(1));
        assert_eq!(window.condition(), 1);
    }

    #[test]
    fn the_settings_keep_what_is_typed_into_them() {
        let mut window = Window::default();
        window.update(Message::AmplitudeChanged("2".to_owned()));
        window.update(Message::CyclesChanged("16".to_owned()));
        window.update(Message::SteadyStateTimeChanged("1m".to_owned()));

        assert_eq!(window.amplitude, "2");
        assert_eq!(window.cycles, "16");
        assert_eq!(window.steady_state_time, "1m");
    }
}
