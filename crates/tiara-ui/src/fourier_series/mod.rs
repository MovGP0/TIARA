//! The Fourier Series dialog, as `Analysis > Fourier Analysis > Fourier
//! Series...` opens it.
//!
//! The settings for the transform are at the top, the coefficients it works
//! out in the grid below, and the distortion it arrives at under that. `Draw`
//! starts greyed, because there is nothing to draw until `Calculate` has run.

use iced::widget::{button, column, combo_box, container, row, scrollable, text, text_input};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Fourier Series";
pub const SCREENSHOT: &str = "screenshots/Fourier_Series.png";
pub const FORM_RESOURCE: &str = "HarmonicDistorsionDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01140aa0");
const STATUS: &str = "Fourier series";

/// The captions the resource gives the settings.
pub const START_TIME_CAPTION: &str = "Sampling start time";
pub const BASE_FREQUENCY_CAPTION: &str = "Base frequency";
pub const SAMPLES_CAPTION: &str = "Number of samples";
pub const HARMONICS_CAPTION: &str = "Number of harmonics";
pub const FORMAT_CAPTION: &str = "Format";
pub const OUTPUT_CAPTION: &str = "Output";
pub const COEFFICIENTS_CAPTION: &str = "Fourier coefficients";
pub const DISTORTION_CAPTION: &str = "Harmonic distortion :";
pub const CONDITION_CAPTION: &str = "Transient inital condition";

/// The sample counts the resource lists.
pub const SAMPLE_COUNTS: [&str; 10] = [
    "128", "256", "512", "1024", "2048", "4096", "8192", "16384", "32768", "65536",
];

/// The ways the resource offers to write a coefficient.
pub const FORMATS: [&str; 5] = [
    "D * cos(kwt + fi)",
    "C * exp(j * (kwt + fi))",
    "A * cos(kwt) + B * sin(kwt)",
    "RMS, fi",
    "Aeff, Beff",
];

/// What the run starts from, which the resource lists in its own group.
pub const CONDITIONS: [&str; 3] = [
    "Calculate operating point",
    "Use initial conditions",
    "Zero initial values",
];

#[derive(Debug)]
pub struct Window {
    start_time: String,
    base_frequency: String,
    samples: combo_box::State<String>,
    chosen_samples: String,
    harmonics: String,
    formats: combo_box::State<String>,
    chosen_format: String,
    outputs: combo_box::State<String>,
    chosen_output: Option<String>,
    condition: usize,
    coefficients: Vec<String>,
    distortion: String,
    calculated: bool,
}

impl Default for Window {
    fn default() -> Self {
        let samples: Vec<String> = SAMPLE_COUNTS.iter().map(|&s| s.to_owned()).collect();
        let formats: Vec<String> = FORMATS.iter().map(|&s| s.to_owned()).collect();
        Self {
            start_time: String::new(),
            base_frequency: String::new(),
            samples: combo_box::State::new(samples),
            chosen_samples: SAMPLE_COUNTS[0].to_owned(),
            harmonics: String::new(),
            formats: combo_box::State::new(formats),
            chosen_format: FORMATS[0].to_owned(),
            // The outputs are the sheet's, so there are none until one is open.
            outputs: combo_box::State::new(Vec::new()),
            chosen_output: None,
            condition: 0,
            coefficients: Vec::new(),
            distortion: String::new(),
            calculated: false,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    StartTimeChanged(String),
    BaseFrequencyChanged(String),
    SamplesChosen(String),
    HarmonicsChanged(String),
    FormatChosen(String),
    OutputChosen(String),
    ConditionSelected(usize),
    Calculate,
    Draw,
    Cancelled,
    HelpRequested,
}

impl Window {
    #[must_use]
    pub fn coefficients(&self) -> &[String] {
        &self.coefficients
    }

    /// Whether `Draw` is offered, which it is only once something is worked out.
    #[must_use]
    pub const fn can_draw(&self) -> bool {
        self.calculated
    }

    #[must_use]
    pub const fn condition(&self) -> usize {
        self.condition
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::StartTimeChanged(value) => {
                self.start_time = value;
                self.invalidate();
            }
            Message::BaseFrequencyChanged(value) => {
                self.base_frequency = value;
                self.invalidate();
            }
            Message::SamplesChosen(value) => {
                self.chosen_samples = value;
                self.invalidate();
            }
            Message::HarmonicsChanged(value) => {
                self.harmonics = value;
                self.invalidate();
            }
            Message::FormatChosen(value) => self.chosen_format = value,
            Message::OutputChosen(value) => {
                self.chosen_output = Some(value);
                self.invalidate();
            }
            Message::ConditionSelected(index) => {
                if index < CONDITIONS.len() {
                    self.condition = index;
                    self.invalidate();
                }
            }
            // Working the coefficients out needs the sheet, which the shell
            // does not hold yet; what it does settle is that `Draw` follows
            // `Calculate`, which is the part the resource shows.
            Message::Calculate => self.calculated = true,
            Message::Draw | Message::Cancelled | Message::HelpRequested => {}
        }
    }

    /// Anything the transform depends on puts `Draw` back out of reach, which
    /// is what the original does with its own enabling.
    fn invalidate(&mut self) {
        self.calculated = false;
        self.coefficients.clear();
        self.distortion.clear();
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut conditions = column![].spacing(2);
        for (index, caption) in CONDITIONS.iter().enumerate() {
            conditions = conditions.push(iced::widget::radio(
                *caption,
                index,
                Some(self.condition),
                Message::ConditionSelected,
            ));
        }

        let settings = column![
            field(
                START_TIME_CAPTION,
                &self.start_time,
                Message::StartTimeChanged
            ),
            field(
                BASE_FREQUENCY_CAPTION,
                &self.base_frequency,
                Message::BaseFrequencyChanged
            ),
            row![
                text(SAMPLES_CAPTION).width(Length::Fixed(140.0)),
                combo_box(
                    &self.samples,
                    "",
                    Some(&self.chosen_samples),
                    Message::SamplesChosen
                )
                .width(Length::Fixed(90.0)),
            ]
            .spacing(8),
            field(
                HARMONICS_CAPTION,
                &self.harmonics,
                Message::HarmonicsChanged
            ),
            row![
                text(FORMAT_CAPTION).width(Length::Fixed(140.0)),
                combo_box(
                    &self.formats,
                    "",
                    Some(&self.chosen_format),
                    Message::FormatChosen
                )
                .width(Length::Fixed(180.0)),
            ]
            .spacing(8),
            row![
                text(OUTPUT_CAPTION).width(Length::Fixed(140.0)),
                combo_box(
                    &self.outputs,
                    "",
                    self.chosen_output.as_ref(),
                    Message::OutputChosen
                )
                .width(Length::Fixed(180.0)),
            ]
            .spacing(8),
            container(column![text(CONDITION_CAPTION), conditions].spacing(4)).padding(6),
        ]
        .spacing(6);

        let mut draw = button("Draw");
        if self.calculated {
            draw = draw.on_press(Message::Draw);
        }

        let mut results = column![text(COEFFICIENTS_CAPTION)].spacing(2);
        for coefficient in &self.coefficients {
            results = results.push(text(coefficient));
        }

        let body = column![
            row![
                settings,
                column![
                    button("Calculate").on_press(Message::Calculate),
                    button("Cancel").on_press(Message::Cancelled),
                    button("Help").on_press(Message::HelpRequested),
                    draw,
                ]
                .spacing(4),
            ]
            .spacing(12),
            scrollable(results).height(Length::Fill),
            row![text(DISTORTION_CAPTION), text(&self.distortion)].spacing(8),
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
            .width(Length::Fixed(90.0)),
    ]
    .spacing(8)
    .into()
}

#[cfg(test)]
mod tests {
    use super::{CONDITIONS, FORMATS, Message, SAMPLE_COUNTS, Window};

    #[test]
    fn drawing_waits_until_something_is_worked_out() {
        let mut window = Window::default();
        assert!(!window.can_draw());

        window.update(Message::Calculate);
        assert!(window.can_draw());
    }

    #[test]
    fn changing_a_setting_puts_drawing_back_out_of_reach() {
        let mut window = Window::default();
        window.update(Message::Calculate);
        window.update(Message::BaseFrequencyChanged("1k".to_owned()));

        assert!(!window.can_draw());
        assert!(window.coefficients().is_empty());
    }

    #[test]
    fn choosing_how_to_write_a_coefficient_does_not_invalidate_the_result() {
        let mut window = Window::default();
        window.update(Message::Calculate);
        window.update(Message::FormatChosen(FORMATS[3].to_owned()));

        assert!(window.can_draw());
    }

    #[test]
    fn the_resource_lists_ten_sample_counts_doubling_from_128() {
        assert_eq!(SAMPLE_COUNTS.len(), 10);
        assert_eq!(SAMPLE_COUNTS[0], "128");
        assert_eq!(SAMPLE_COUNTS[9], "65536");
    }

    #[test]
    fn the_run_starts_from_the_operating_point_until_told_otherwise() {
        assert_eq!(Window::default().condition(), 0);
        assert_eq!(CONDITIONS[0], "Calculate operating point");
    }

    #[test]
    fn a_condition_that_is_not_offered_is_ignored() {
        let mut window = Window::default();
        window.update(Message::ConditionSelected(9));
        assert_eq!(window.condition(), 0);
    }

    #[test]
    fn the_conditions_read_as_the_transient_dialog_writes_them() {
        assert_eq!(
            CONDITIONS,
            [
                "Calculate operating point",
                "Use initial conditions",
                "Zero initial values",
            ]
        );
    }
}
