//! The Oscilloscope, as `T&M > Oscilloscope` opens it.
//!
//! The screen and its readouts fill the left, with the cursor and data
//! commands under them; the settings stand in groups down the right - trigger,
//! storage and channel in one column, horizontal in the next - and the Auto
//! button runs along the bottom of that column.
//!
//! Two pairs of controls in the resource share a position because only one of
//! each pair is ever shown: `TriggerMode` and `TriggerSource` sit at the same
//! place in the trigger group and are swapped by the two buttons above them.
//! That is kept here rather than flattened, because it is what the original
//! shows.

use iced::widget::{button, column, combo_box, container, row, text, text_input};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Oscilloscope";
pub const SCREENSHOT: &str = "screenshots/Oscilloscope_Window.png";
pub const FORM_RESOURCE: &str = "ScopeWin";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("012b0870");
const STATUS: &str = "Time-domain display";

/// What the trigger group offers when `Mode` is the chosen half.
pub const TRIGGER_MODES: [&str; 2] = ["Single", "Auto"];

/// What it offers when `Source` is.
pub const TRIGGER_SOURCES: [&str; 3] = ["Internal", "External", "Input"];

/// What the horizontal group draws against time, or against another signal.
pub const HORIZONTAL_MODES: [&str; 2] = ["Y/T", "Y/X"];

/// How a channel is coupled.
pub const COUPLINGS: [&str; 3] = ["DC", "GND", "AC"];

/// The commands the storage group carries.
pub const STORAGE_COMMANDS: [&str; 4] = ["Run", "Stop", "Store", "Erase"];

/// The readouts under the screen, in the order the resource lays them out.
pub const READOUTS: [&str; 8] = ["A:", "B:", "XA:", "YA:", "XB:", "YB:", "DX:", "DY:"];

/// Which half of the trigger group is showing.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum TriggerHalf {
    #[default]
    Mode,
    Source,
}

/// Which cursor the cursor group is working on.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum Cursor {
    #[default]
    A,
    B,
}

/// The sources the horizontal group can draw against, and the channels the
/// channel group can show.
fn numbered(prefix: &str, count: usize) -> Vec<String> {
    (1..=count).map(|n| format!("{prefix}{n}")).collect()
}

#[allow(
    clippy::struct_excessive_bools,
    reason = "each one is a separate button on the original's panel"
)]
#[derive(Debug)]
pub struct Window {
    trigger_half: TriggerHalf,
    trigger_modes: combo_box::State<String>,
    chosen_trigger_mode: String,
    trigger_sources: combo_box::State<String>,
    chosen_trigger_source: String,
    trigger_level: String,
    rising_edge: bool,

    running: bool,

    channels: combo_box::State<String>,
    chosen_channel: Option<String>,
    channel_on: bool,
    coupling: usize,
    volts_per_division: String,
    vertical_position: String,

    time_per_division: String,
    horizontal_position: String,
    horizontal_mode: usize,
    x_sources: combo_box::State<String>,
    chosen_x_source: String,

    cursor: Cursor,
    cursors_on: bool,
    dotted: bool,
}

impl Default for Window {
    fn default() -> Self {
        let mut channels = vec!["A".to_owned(), "B".to_owned()];
        for letter in ['A', 'B'] {
            channels.extend(numbered(&format!("{letter}_#"), 8));
        }
        let mut x_sources = vec!["In".to_owned()];
        x_sources.extend(numbered("#", 16));

        Self {
            trigger_half: TriggerHalf::Mode,
            trigger_modes: combo_box::State::new(
                TRIGGER_MODES.iter().map(|&s| s.to_owned()).collect(),
            ),
            // What the original shows on an untouched scope.
            chosen_trigger_mode: "Auto".to_owned(),
            trigger_sources: combo_box::State::new(
                TRIGGER_SOURCES.iter().map(|&s| s.to_owned()).collect(),
            ),
            chosen_trigger_source: TRIGGER_SOURCES[0].to_owned(),
            trigger_level: "0".to_owned(),
            rising_edge: true,

            running: false,

            channels: combo_box::State::new(channels),
            chosen_channel: None,
            channel_on: true,
            coupling: 0,
            volts_per_division: "100p".to_owned(),
            vertical_position: "0".to_owned(),

            time_per_division: "100n".to_owned(),
            horizontal_position: "0".to_owned(),
            horizontal_mode: 0,
            x_sources: combo_box::State::new(x_sources),
            chosen_x_source: String::new(),

            cursor: Cursor::A,
            cursors_on: false,
            dotted: false,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TriggerHalfChosen(TriggerHalf),
    TriggerModeChosen(String),
    TriggerSourceChosen(String),
    TriggerLevelChanged(String),
    SlopeChosen(bool),

    StorageCommand(&'static str),

    ChannelChosen(String),
    ChannelOnToggled,
    CouplingChosen(usize),
    VoltsPerDivisionChanged(String),
    VerticalPositionChanged(String),
    AddCurves,

    TimePerDivisionChanged(String),
    HorizontalPositionChanged(String),
    HorizontalModeChosen(usize),
    XSourceChosen(String),

    CursorChosen(Cursor),
    CursorsToggled,
    /// The four buttons the resource names `FMoveCursorLeftBtn`,
    /// `FMoveCursorRightBtn`, `FPrevCurveBtn` and `FNextCurveBtn`.
    CursorLeft,
    CursorRight,
    PreviousCurve,
    NextCurve,
    DataSaved,
    DataLoaded,
    LineOrDotToggled,

    Auto,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::TriggerHalfChosen(half) => self.trigger_half = half,
            Message::TriggerModeChosen(value) => self.chosen_trigger_mode = value,
            Message::TriggerSourceChosen(value) => self.chosen_trigger_source = value,
            Message::TriggerLevelChanged(value) => self.trigger_level = value,
            Message::SlopeChosen(rising) => self.rising_edge = rising,

            Message::StorageCommand(command) => match command {
                "Run" => self.running = true,
                "Stop" => self.running = false,
                // Store and Erase act on the stored trace, which the port has
                // nowhere to keep until there is a trace to store.
                _ => {}
            },

            Message::ChannelChosen(value) => self.chosen_channel = Some(value),
            Message::ChannelOnToggled => self.channel_on = !self.channel_on,
            Message::CouplingChosen(index) => {
                if index < COUPLINGS.len() {
                    self.coupling = index;
                }
            }
            Message::VoltsPerDivisionChanged(value) => self.volts_per_division = value,
            Message::VerticalPositionChanged(value) => self.vertical_position = value,

            Message::TimePerDivisionChanged(value) => self.time_per_division = value,
            Message::HorizontalPositionChanged(value) => self.horizontal_position = value,
            Message::HorizontalModeChosen(index) => {
                if index < HORIZONTAL_MODES.len() {
                    self.horizontal_mode = index;
                }
            }
            Message::XSourceChosen(value) => self.chosen_x_source = value,

            Message::CursorChosen(cursor) => self.cursor = cursor,
            Message::CursorsToggled => self.cursors_on = !self.cursors_on,
            Message::LineOrDotToggled => self.dotted = !self.dotted,

            // These move the cursor along a trace, step between curves, and
            // read or write a data file. All of them need a trace, and there
            // is none until the scope is fed by a running circuit.
            Message::CursorLeft
            | Message::CursorRight
            | Message::PreviousCurve
            | Message::NextCurve
            | Message::DataSaved
            | Message::DataLoaded
            | Message::AddCurves
            | Message::Auto => {}
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let body = column![
            row![
                column![Self::screen(), self.cursor_and_data()].spacing(6),
                column![self.trigger(), self.storage(), self.channel()].spacing(6),
                column![
                    self.horizontal(),
                    button(text("Auto").size(12))
                        .width(Length::Fill)
                        .on_press(Message::Auto),
                ]
                .spacing(6),
            ]
            .spacing(8)
            .height(Length::Fill),
        ]
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

    /// The trace area, with the eight readouts the resource puts under it.
    fn screen() -> Element<'static, Message> {
        let mut readouts = column![].spacing(2);
        for pair in READOUTS.chunks(4) {
            let mut line = row![].spacing(18);
            for label in pair {
                line = line.push(text(*label).size(11));
            }
            readouts = readouts.push(line);
        }

        container(column![window_shell::surface("Trace"), readouts,].spacing(4))
            .padding(6)
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }

    fn cursor_and_data(&self) -> Element<'_, Message> {
        let cursors = row![
            marked(
                "A",
                self.cursor == Cursor::A,
                Message::CursorChosen(Cursor::A)
            ),
            marked(
                "B",
                self.cursor == Cursor::B,
                Message::CursorChosen(Cursor::B)
            ),
            marked("On", self.cursors_on, Message::CursorsToggled),
            button(text("\u{25C0}").size(11)).on_press(Message::CursorLeft),
            button(text("\u{25B6}").size(11)).on_press(Message::CursorRight),
            button(text("\u{25B2}").size(11)).on_press(Message::PreviousCurve),
            button(text("\u{25BC}").size(11)).on_press(Message::NextCurve),
        ]
        .spacing(2);

        let data = row![
            button(text("Load").size(11)).on_press(Message::DataLoaded),
            button(text("Save").size(11)).on_press(Message::DataSaved),
            marked("Dots", self.dotted, Message::LineOrDotToggled),
        ]
        .spacing(2);

        row![group("Cursor", cursors.into()), group("Data", data.into())]
            .spacing(6)
            .into()
    }

    fn trigger(&self) -> Element<'_, Message> {
        // The two buttons choose which of the group's two lists is shown; the
        // resource puts both lists in the same place for exactly that reason.
        let chooser = row![
            marked(
                "Mode",
                self.trigger_half == TriggerHalf::Mode,
                Message::TriggerHalfChosen(TriggerHalf::Mode)
            ),
            marked(
                "Source",
                self.trigger_half == TriggerHalf::Source,
                Message::TriggerHalfChosen(TriggerHalf::Source)
            ),
        ]
        .spacing(2);

        let list: Element<'_, Message> = match self.trigger_half {
            TriggerHalf::Mode => combo_box(
                &self.trigger_modes,
                "",
                Some(&self.chosen_trigger_mode),
                Message::TriggerModeChosen,
            )
            .into(),
            TriggerHalf::Source => combo_box(
                &self.trigger_sources,
                "",
                Some(&self.chosen_trigger_source),
                Message::TriggerSourceChosen,
            )
            .into(),
        };

        group(
            "Trigger",
            column![
                chooser,
                list,
                text("Level").size(11),
                text_input("", &self.trigger_level).on_input(Message::TriggerLevelChanged),
                row![
                    marked("\u{2571}", self.rising_edge, Message::SlopeChosen(true)),
                    marked("\u{2572}", !self.rising_edge, Message::SlopeChosen(false)),
                ]
                .spacing(2),
            ]
            .spacing(4)
            .into(),
        )
    }

    fn storage(&self) -> Element<'_, Message> {
        let mut commands = column![].spacing(2);
        for pair in STORAGE_COMMANDS.chunks(2) {
            let mut line = row![].spacing(2);
            for command in pair {
                let lit = match *command {
                    "Run" => self.running,
                    "Stop" => !self.running,
                    _ => false,
                };
                line = line.push(marked(command, lit, Message::StorageCommand(command)));
            }
            commands = commands.push(line);
        }
        group("Storage", commands.into())
    }

    fn channel(&self) -> Element<'_, Message> {
        let mut couplings = row![].spacing(2);
        for (index, caption) in COUPLINGS.iter().enumerate() {
            couplings = couplings.push(marked(
                caption,
                self.coupling == index,
                Message::CouplingChosen(index),
            ));
        }

        let vertical = group(
            "Vertical",
            column![
                text("Volts/Div").size(11),
                text_input("", &self.volts_per_division).on_input(Message::VoltsPerDivisionChanged),
                text("Position").size(11),
                text_input("", &self.vertical_position).on_input(Message::VerticalPositionChanged),
            ]
            .spacing(3)
            .into(),
        );

        group(
            "Channel",
            row![
                column![
                    combo_box(
                        &self.channels,
                        "",
                        self.chosen_channel.as_ref(),
                        Message::ChannelChosen
                    ),
                    group("Coupling", couplings.into()),
                    row![
                        marked("On", self.channel_on, Message::ChannelOnToggled),
                        button(text("+").size(11)).on_press(Message::AddCurves),
                    ]
                    .spacing(2),
                ]
                .spacing(4)
                .width(Length::FillPortion(1)),
                vertical,
            ]
            .spacing(6)
            .into(),
        )
    }

    fn horizontal(&self) -> Element<'_, Message> {
        let mut modes = row![].spacing(2);
        for (index, caption) in HORIZONTAL_MODES.iter().enumerate() {
            modes = modes.push(marked(
                caption,
                self.horizontal_mode == index,
                Message::HorizontalModeChosen(index),
            ));
        }

        group(
            "Horizontal",
            column![
                text("Time/Div").size(11),
                text_input("", &self.time_per_division).on_input(Message::TimePerDivisionChanged),
                text("Position").size(11),
                text_input("", &self.horizontal_position)
                    .on_input(Message::HorizontalPositionChanged),
                text("Mode").size(11),
                modes,
                text("X Source").size(11),
                combo_box(
                    &self.x_sources,
                    "",
                    Some(&self.chosen_x_source),
                    Message::XSourceChosen
                ),
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

/// One of the buttons that stays pressed while its setting is the chosen one.
///
/// The original lights these rather than sinking them, which is why the state
/// has to be drawn rather than left to the button's own pressed look.
fn marked(caption: &str, lit: bool, message: Message) -> Element<'_, Message> {
    let face = if lit {
        text(format!("[{caption}]")).size(11)
    } else {
        text(caption).size(11)
    };
    button(face).padding([2, 6]).on_press(message).into()
}

#[cfg(test)]
mod tests {
    use super::{
        COUPLINGS, Cursor, HORIZONTAL_MODES, Message, READOUTS, STORAGE_COMMANDS, TRIGGER_MODES,
        TRIGGER_SOURCES, TriggerHalf, Window,
    };

    #[test]
    fn it_opens_on_what_the_original_shows() {
        let window = Window::default();
        assert_eq!(window.trigger_half, TriggerHalf::Mode);
        assert_eq!(window.chosen_trigger_mode, "Auto");
        assert_eq!(window.time_per_division, "100n");
        assert_eq!(window.volts_per_division, "100p");
        assert_eq!(window.horizontal_mode, 0);
        assert_eq!(window.coupling, 0);
        assert!(!window.running);
    }

    #[test]
    fn the_trigger_group_swaps_its_list_rather_than_showing_both() {
        let mut window = Window::default();
        assert_eq!(window.trigger_half, TriggerHalf::Mode);

        window.update(Message::TriggerHalfChosen(TriggerHalf::Source));
        assert_eq!(window.trigger_half, TriggerHalf::Source);
    }

    #[test]
    fn the_two_lists_hold_what_the_resource_lists() {
        assert_eq!(TRIGGER_MODES, ["Single", "Auto"]);
        assert_eq!(TRIGGER_SOURCES, ["Internal", "External", "Input"]);
        assert_eq!(HORIZONTAL_MODES, ["Y/T", "Y/X"]);
        assert_eq!(COUPLINGS, ["DC", "GND", "AC"]);
        assert_eq!(STORAGE_COMMANDS, ["Run", "Stop", "Store", "Erase"]);
        assert_eq!(READOUTS.len(), 8);
    }

    #[test]
    fn run_and_stop_are_one_state_rather_than_two_buttons() {
        let mut window = Window::default();
        window.update(Message::StorageCommand("Run"));
        assert!(window.running);

        window.update(Message::StorageCommand("Stop"));
        assert!(!window.running);
    }

    #[test]
    fn store_and_erase_leave_the_run_alone() {
        let mut window = Window::default();
        window.update(Message::StorageCommand("Run"));

        window.update(Message::StorageCommand("Store"));
        window.update(Message::StorageCommand("Erase"));
        assert!(window.running);
    }

    #[test]
    fn a_coupling_that_is_not_offered_is_ignored() {
        let mut window = Window::default();
        window.update(Message::CouplingChosen(COUPLINGS.len()));
        assert_eq!(window.coupling, 0);

        window.update(Message::CouplingChosen(2));
        assert_eq!(window.coupling, 2);
    }

    #[test]
    fn the_cursor_group_works_on_one_cursor_at_a_time() {
        let mut window = Window::default();
        assert_eq!(window.cursor, Cursor::A);

        window.update(Message::CursorChosen(Cursor::B));
        assert_eq!(window.cursor, Cursor::B);
    }

    #[test]
    fn the_channel_can_be_switched_off_and_on_again() {
        let mut window = Window::default();
        assert!(window.channel_on);

        window.update(Message::ChannelOnToggled);
        assert!(!window.channel_on);

        window.update(Message::ChannelOnToggled);
        assert!(window.channel_on);
    }

    #[test]
    fn the_settings_keep_what_is_typed_into_them() {
        let mut window = Window::default();
        window.update(Message::TimePerDivisionChanged("1m".to_owned()));
        window.update(Message::VoltsPerDivisionChanged("5".to_owned()));
        window.update(Message::TriggerLevelChanged("2".to_owned()));

        assert_eq!(window.time_per_division, "1m");
        assert_eq!(window.volts_per_division, "5");
        assert_eq!(window.trigger_level, "2");
    }
}
