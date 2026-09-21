//! The Analysis Parameters dialog, as `Analysis > Set Analysis Parameters...`
//! opens it.
//!
//! A grid of the numbers the solver works to, a description of the set below
//! it, and a button that opens the menu for loading and saving sets. The grid
//! is an attribute grid in the resource, so its rows are named here: each
//! carries its caption, the value the original ships, and the value in force.

use iced::widget::{button, column, row, scrollable, text, text_input};
use iced::{Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Analysis Parameters";
pub const SCREENSHOT: &str = "screenshots/Analysis_Parameters.png";
pub const FORM_RESOURCE: &str = "AnalParametersDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01153810");
const STATUS: &str = "Analysis parameters";

/// The caption the resource gives the description box.
pub const DESCRIPTION_CAPTION: &str = "Description";

/// What the original writes in the description box for the shipped set.
pub const DEFAULT_DESCRIPTION: &str = "Default analysis parameters.\n\
These parameters establish convergence and sufficient accuracy for most circuits.\n\
In case of convergence or accuracy problems click on the \"hand\" button to Open \
other parameter sets.";

/// One row of the grid: what it is called and what the original ships it at.
///
/// The caption carries the shipped value in brackets, the way the original
/// writes it, so the two are kept together here as well.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Setting {
    pub caption: &'static str,
    pub shipped: &'static str,
}

/// The ten the original shows, in the order it shows them.
pub const SETTINGS: [Setting; 10] = [
    Setting {
        caption: "Temperature of environment [C]",
        shipped: "27",
    },
    Setting {
        caption: "DC absolute current error [A]",
        shipped: "1n",
    },
    Setting {
        caption: "DC absolute voltage error [V]",
        shipped: "1u",
    },
    Setting {
        caption: "DC relative error [%]",
        shipped: "1m",
    },
    Setting {
        caption: "GMIN (minimum conductance) [S]",
        shipped: "1p",
    },
    Setting {
        caption: "TR maximum value relative error [%]",
        shipped: "1m",
    },
    Setting {
        caption: "TR truncation error factor [-]",
        shipped: "7",
    },
    Setting {
        caption: "TR maximum time step [s]",
        shipped: "10G",
    },
    Setting {
        caption: "Shunt conductance [S]",
        shipped: "0",
    },
    Setting {
        caption: "Max. no. of saved TR points [-]",
        shipped: "1000000",
    },
];

/// What the button beside Help offers.
///
/// Two of them the resource starts hidden, because only one of the pair can
/// apply at a time: the description is either showing or it is not.
pub const MENU_COMMANDS: [&str; 5] = ["View All", "Tina default", "Open...", "Save", "Save As..."];

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Window {
    values: Vec<String>,
    description: String,
    description_shown: bool,
    menu_open: bool,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: SETTINGS
                .iter()
                .map(|setting| setting.shipped.to_owned())
                .collect(),
            description: DEFAULT_DESCRIPTION.to_owned(),
            description_shown: true,
            menu_open: false,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    ValueChanged(usize, String),
    DescriptionChanged(String),
    MenuToggled,
    MenuCommandChosen(&'static str),
    DescriptionShown(bool),
    Accepted,
    Cancelled,
    HelpRequested,
}

impl Window {
    #[must_use]
    pub fn values(&self) -> &[String] {
        &self.values
    }

    #[must_use]
    pub fn description(&self) -> &str {
        &self.description
    }

    #[must_use]
    pub const fn menu_is_open(&self) -> bool {
        self.menu_open
    }

    #[must_use]
    pub const fn description_is_shown(&self) -> bool {
        self.description_shown
    }

    pub fn update(&mut self, message: Message) {
        match message {
            Message::ValueChanged(row, value) => {
                if let Some(slot) = self.values.get_mut(row) {
                    *slot = value;
                }
            }
            Message::DescriptionChanged(value) => self.description = value,
            Message::MenuToggled => self.menu_open = !self.menu_open,
            Message::MenuCommandChosen(command) => {
                // Only `Tina default` is answered here; the rest reach for a
                // file, which the shell has nowhere to put yet.
                if command == "Tina default" {
                    *self = Self::default();
                }
                self.menu_open = false;
            }
            Message::DescriptionShown(shown) => self.description_shown = shown,
            Message::Accepted | Message::Cancelled | Message::HelpRequested => {}
        }
    }

    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let mut grid = column![].spacing(2);
        for (index, setting) in SETTINGS.iter().enumerate() {
            let value = self.values.get(index).map_or("", String::as_str);
            grid = grid.push(
                row![
                    text(format!("{}  ({})", setting.caption, setting.shipped))
                        .width(Length::FillPortion(3)),
                    text_input("", value)
                        .on_input(move |typed| Message::ValueChanged(index, typed))
                        .width(Length::FillPortion(1)),
                ]
                .spacing(8),
            );
        }

        let mut body = column![scrollable(grid).height(Length::Fill)].spacing(8);

        if self.description_shown {
            body = body.push(
                column![
                    text(DESCRIPTION_CAPTION),
                    text_input("", &self.description).on_input(Message::DescriptionChanged),
                ]
                .spacing(4),
            );
        }

        if self.menu_open {
            let mut commands = column![].spacing(2);
            for command in MENU_COMMANDS {
                commands = commands
                    .push(button(text(command)).on_press(Message::MenuCommandChosen(command)));
            }
            body = body.push(commands);
        }

        body = body.push(
            row![
                button("OK").on_press(Message::Accepted),
                button("Cancel").on_press(Message::Cancelled),
                button("Help").on_press(Message::HelpRequested),
                button("...").on_press(Message::MenuToggled),
            ]
            .spacing(8),
        );

        window_shell::frame(
            TITLE,
            window_shell::empty_menu(),
            window_shell::empty_menu(),
            body.padding(8).height(Length::Fill).into(),
            STATUS,
        )
    }
}

#[cfg(test)]
mod tests {
    use super::{DEFAULT_DESCRIPTION, MENU_COMMANDS, Message, SETTINGS, Window};

    #[test]
    fn it_opens_on_the_values_the_original_ships() {
        let window = Window::default();
        assert_eq!(window.values().len(), SETTINGS.len());
        for (value, setting) in window.values().iter().zip(SETTINGS) {
            assert_eq!(value, setting.shipped);
        }
    }

    #[test]
    fn the_grid_reads_as_the_original_writes_it() {
        assert_eq!(SETTINGS[0].caption, "Temperature of environment [C]");
        assert_eq!(SETTINGS[0].shipped, "27");
        assert_eq!(SETTINGS[9].caption, "Max. no. of saved TR points [-]");
        assert_eq!(SETTINGS[9].shipped, "1000000");
    }

    #[test]
    fn it_opens_with_the_shipped_description_showing() {
        let window = Window::default();
        assert!(window.description_is_shown());
        assert_eq!(window.description(), DEFAULT_DESCRIPTION);
    }

    #[test]
    fn a_row_keeps_what_is_typed_into_it() {
        let mut window = Window::default();
        window.update(Message::ValueChanged(0, "40".to_owned()));
        assert_eq!(window.values()[0], "40");
    }

    #[test]
    fn typing_into_a_row_that_is_not_there_changes_nothing() {
        let mut window = Window::default();
        let before = window.clone();
        window.update(Message::ValueChanged(99, "40".to_owned()));
        assert_eq!(window, before);
    }

    #[test]
    fn the_default_set_puts_every_value_back() {
        let mut window = Window::default();
        window.update(Message::ValueChanged(0, "40".to_owned()));
        window.update(Message::MenuCommandChosen("Tina default"));

        assert_eq!(window.values()[0], "27");
        assert!(!window.menu_is_open());
    }

    #[test]
    fn the_menu_opens_and_shuts() {
        let mut window = Window::default();
        assert!(!window.menu_is_open());

        window.update(Message::MenuToggled);
        assert!(window.menu_is_open());

        window.update(Message::MenuCommandChosen(MENU_COMMANDS[0]));
        assert!(!window.menu_is_open());
    }

    #[test]
    fn the_commands_leave_the_values_alone() {
        let mut window = Window::default();
        window.update(Message::ValueChanged(1, "2n".to_owned()));
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
