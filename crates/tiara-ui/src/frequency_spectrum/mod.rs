//! The Frequency Spectrum dialog, as `Analysis > Fourier Analysis > Fourier
//! Spectrum...` opens it.
//!
//! The sampling window and the transform's settings sit at the top, the
//! diagrams to draw in the middle, and what the run starts from at the bottom.
//! The resource marks `Energy spectrum` as the diagram that starts checked;
//! the running original starts on `Complex Amplitude` instead, and that is
//! what is followed here.

use iced::widget::{button, checkbox, column, combo_box, container, radio, row, text, text_input};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Frequency Spectrum";
pub const SCREENSHOT: &str = "screenshots/Frequency_Spectrum.png";
pub const FORM_RESOURCE: &str = "FrequencySpectrumDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("0114c7f0");
const STATUS: &str = "Frequency spectrum";

/// The sample counts the resource lists, the same ten the Fourier Series
/// dialog offers.
pub const SAMPLE_COUNTS: [&str; 10] = [
    "128", "256", "512", "1024", "2048", "4096", "8192", "16384", "32768", "65536",
];

/// The window functions the original offers.
pub const WINDOW_FUNCTIONS: [&str; 1] = ["Uniform"];

/// How the vertical axis is scaled.
pub const SCALES: [&str; 1] = ["Linear"];

/// The diagrams the group offers, in the order the resource lays them out:
/// down the left, then the middle, then the right.
pub const DIAGRAMS: [&str; 6] = [
    "Complex Amplitude",
    "Phase",
    "Real part",
    "Imaginary part",
    "Energy spectrum",
    "Amplitude",
];

/// Which of the six the running original starts with checked.
pub const DIAGRAM_CHECKED_AT_START: usize = 0;

/// What the run starts from.
pub const CONDITIONS: [&str; 3] = [
    "Calculate operating point",
    "Use initial conditions",
    "Zero initial values",
];

/// What the transform reports, which the original calls the mode.
pub const MODES: [&str; 2] = ["Spectral density", "Spectrum"];

#[derive(Debug)]
pub struct Window {
    start_time: String,
    end_time: String,
    minimum_frequency: String,
    maximum_frequency: String,
    samples: combo_box::State<String>,
    chosen_samples: String,
    /// The window function, which the original calls a taper in no place
    /// at all - the name avoids reading as part of this window.
    tapers: combo_box::State<String>,
    chosen_taper: String,
    outputs: combo_box::State<String>,
    chosen_output: String,
    scales: combo_box::State<String>,
    chosen_scale: String,
    phase_correction: bool,
    reference_voltage: String,
    mode: usize,
    diagrams: [bool; DIAGRAMS.len()],
    condition: usize,
}

impl Default for Window {
    fn default() -> Self {
        let mut diagrams = [false; DIAGRAMS.len()];
        diagrams[DIAGRAM_CHECKED_AT_START] = true;

        Self {
            // What the original shows on a new sheet.
            start_time: "0".to_owned(),
            end_time: "1u".to_owned(),
            minimum_frequency: "0".to_owned(),
            maximum_frequency: "2,048G".to_owned(),
            samples: combo_box::State::new(SAMPLE_COUNTS.iter().map(|&s| s.to_owned()).collect()),
            chosen_samples: "4096".to_owned(),
            tapers: combo_box::State::new(WINDOW_FUNCTIONS.iter().map(|&s| s.to_owned()).collect()),
            chosen_taper: WINDOW_FUNCTIONS[0].to_owned(),
            outputs: combo_box::State::new(vec!["All".to_owned()]),
            chosen_output: "All".to_owned(),
            scales: combo_box::State::new(SCALES.iter().map(|&s| s.to_owned()).collect()),
            chosen_scale: SCALES[0].to_owned(),
            phase_correction: true,
            reference_voltage: "1".to_owned(),
            mode: 0,
            diagrams,
            condition: 0,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    StartTimeChanged(String),
    EndTimeChanged(String),
    MinimumFrequencyChanged(String),
    MaximumFrequencyChanged(String),
    SamplesChosen(String),
    WindowFunctionChosen(String),
    OutputChosen(String),
    ScaleChosen(String),
    PhaseCorrectionToggled(bool),
    ReferenceVoltageChanged(String),
    ModeSelected(usize),
    DiagramToggled(usize, bool),
    ConditionSelected(usize),
    Accepted,
    Cancelled,
    HelpRequested,
}

impl Window {
    #[must_use]
    pub const fn diagrams(&self) -> &[bool; DIAGRAMS.len()] {
        &self.diagrams
    }

    #[must_use]
    pub const fn mode(&self) -> usize {
        self.mode
    }

    #[must_use]
    pub const fn condition(&self) -> usize {
        self.condition
    }

    #[must_use]
    pub fn chosen_samples(&self) -> &str {
        &self.chosen_samples
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::StartTimeChanged(value) => self.start_time = value,
            Message::EndTimeChanged(value) => self.end_time = value,
            Message::MinimumFrequencyChanged(value) => self.minimum_frequency = value,
            Message::MaximumFrequencyChanged(value) => self.maximum_frequency = value,
            Message::SamplesChosen(value) => self.chosen_samples = value,
            Message::WindowFunctionChosen(value) => self.chosen_taper = value,
            Message::OutputChosen(value) => self.chosen_output = value,
            Message::ScaleChosen(value) => self.chosen_scale = value,
            Message::PhaseCorrectionToggled(on) => self.phase_correction = on,
            Message::ReferenceVoltageChanged(value) => self.reference_voltage = value,
            Message::ModeSelected(index) => {
                if index < MODES.len() {
                    self.mode = index;
                }
            }
            Message::DiagramToggled(index, on) => {
                if let Some(slot) = self.diagrams.get_mut(index) {
                    *slot = on;
                }
            }
            Message::ConditionSelected(index) => {
                if index < CONDITIONS.len() {
                    self.condition = index;
                }
            }
            Message::Accepted | Message::Cancelled | Message::HelpRequested => {}
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let sampling = self.sampling();

        let mut modes = row![].spacing(12);
        for (index, caption) in MODES.iter().enumerate() {
            modes = modes.push(radio(
                *caption,
                index,
                Some(self.mode),
                Message::ModeSelected,
            ));
        }

        let mut diagrams = column![].spacing(2);
        for (index, caption) in DIAGRAMS.iter().enumerate() {
            diagrams = diagrams.push(
                checkbox(*caption, self.diagrams[index])
                    .on_toggle(move |on| Message::DiagramToggled(index, on)),
            );
        }

        let mut conditions = column![].spacing(2);
        for (index, caption) in CONDITIONS.iter().enumerate() {
            conditions = conditions.push(radio(
                *caption,
                index,
                Some(self.condition),
                Message::ConditionSelected,
            ));
        }

        let body = column![
            sampling,
            group("Mode", modes.into()),
            group("Diagrams", diagrams.into()),
            group("Transient inital condition", conditions.into()),
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

    /// The sampling window and the transform's settings, which the
    /// resource lays out as one block above the groups.
    fn sampling(&self) -> Element<'_, Message> {
        column![
            row![
                field(
                    "Sampling start time",
                    &self.start_time,
                    Message::StartTimeChanged
                ),
                field("Sampling end time", &self.end_time, Message::EndTimeChanged),
            ]
            .spacing(12),
            row![
                field(
                    "Minimum frequency",
                    &self.minimum_frequency,
                    Message::MinimumFrequencyChanged
                ),
                field(
                    "Maximum frequency",
                    &self.maximum_frequency,
                    Message::MaximumFrequencyChanged
                ),
            ]
            .spacing(12),
            row![
                chooser(
                    "Number of samples",
                    &self.samples,
                    &self.chosen_samples,
                    Message::SamplesChosen
                ),
                chooser(
                    "Window function",
                    &self.tapers,
                    &self.chosen_taper,
                    Message::WindowFunctionChosen
                ),
            ]
            .spacing(12),
            row![
                chooser(
                    "Output",
                    &self.outputs,
                    &self.chosen_output,
                    Message::OutputChosen
                ),
                chooser(
                    "Scale",
                    &self.scales,
                    &self.chosen_scale,
                    Message::ScaleChosen
                ),
            ]
            .spacing(12),
            row![
                checkbox("Phase correction", self.phase_correction)
                    .on_toggle(Message::PhaseCorrectionToggled),
                field(
                    "Reference voltage",
                    &self.reference_voltage,
                    Message::ReferenceVoltageChanged
                ),
            ]
            .spacing(12),
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

/// A label beside the value it names.
fn field<'a>(
    caption: &'a str,
    value: &'a str,
    on_input: impl Fn(String) -> Message + 'a,
) -> Element<'a, Message> {
    row![
        text(caption).width(Length::Fixed(140.0)),
        text_input("", value)
            .on_input(on_input)
            .width(Length::Fixed(100.0)),
    ]
    .spacing(8)
    .into()
}

/// A label beside the list it names.
fn chooser<'a>(
    caption: &'a str,
    state: &'a combo_box::State<String>,
    chosen: &'a String,
    // `combo_box` keeps the handler for as long as it lives, so it has to
    // outlive the borrow of the state beside it.
    on_selected: impl Fn(String) -> Message + 'static,
) -> Element<'a, Message> {
    row![
        text(caption).width(Length::Fixed(140.0)),
        combo_box(state, "", Some(chosen), on_selected).width(Length::Fixed(100.0)),
    ]
    .spacing(8)
    .into()
}

#[cfg(test)]
mod tests {
    use super::{CONDITIONS, DIAGRAMS, MODES, Message, SAMPLE_COUNTS, Window};

    #[test]
    fn it_opens_with_the_complex_amplitude_alone() {
        let window = Window::default();
        assert!(window.diagrams()[0]);
        assert_eq!(window.diagrams().iter().filter(|on| **on).count(), 1);
    }

    #[test]
    fn it_opens_on_the_settings_the_original_shows() {
        let window = Window::default();
        assert_eq!(window.chosen_samples(), "4096");
        assert_eq!(window.mode(), 0);
        assert_eq!(window.condition(), 0);
    }

    #[test]
    fn the_six_diagrams_read_as_the_resource_writes_them() {
        assert_eq!(
            DIAGRAMS,
            [
                "Complex Amplitude",
                "Phase",
                "Real part",
                "Imaginary part",
                "Energy spectrum",
                "Amplitude",
            ]
        );
    }

    #[test]
    fn more_than_one_diagram_can_be_asked_for() {
        let mut window = Window::default();
        window.update(Message::DiagramToggled(1, true));
        window.update(Message::DiagramToggled(4, true));

        assert_eq!(window.diagrams().iter().filter(|on| **on).count(), 3);
    }

    #[test]
    fn a_diagram_that_is_not_there_is_ignored() {
        let mut window = Window::default();
        window.update(Message::DiagramToggled(99, true));
        assert_eq!(window.diagrams().iter().filter(|on| **on).count(), 1);
    }

    #[test]
    fn the_mode_and_the_condition_only_take_what_is_offered() {
        let mut window = Window::default();
        window.update(Message::ModeSelected(MODES.len()));
        window.update(Message::ConditionSelected(CONDITIONS.len()));

        assert_eq!(window.mode(), 0);
        assert_eq!(window.condition(), 0);

        window.update(Message::ModeSelected(1));
        window.update(Message::ConditionSelected(2));
        assert_eq!(window.mode(), 1);
        assert_eq!(window.condition(), 2);
    }

    #[test]
    fn it_offers_the_same_sample_counts_as_the_fourier_series_dialog() {
        assert_eq!(SAMPLE_COUNTS, crate::fourier_series::SAMPLE_COUNTS);
    }
}
