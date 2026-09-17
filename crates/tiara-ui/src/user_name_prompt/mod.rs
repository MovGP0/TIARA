//! Iced state for the recovered Welcome user-name prompt.

use iced::widget::{button, column, container, text, text_input};
use iced::{Element, Length};

pub const TITLE: &str = "Welcome";
pub const FORM_RESOURCE: &str = "UserNameDlg";
pub const PROMPT_CAPTION: &str = "Please enter your user &name:";

/// The literal banner caption the recovered show handler assigns when the
/// primary mode flag is clear.
pub const UNEXPECTED_MODE_CAPTION: &str = "Normal Mode ?!";

/// Localized banner identifier used when both recovered mode flags are set.
pub const BOTH_MODE_FLAGS_CAPTION_ID: u16 = 0x05ad;

/// Localized banner identifier used when only the primary recovered mode flag
/// is set.
pub const PRIMARY_MODE_FLAG_CAPTION_ID: u16 = 0x05ae;

/// The two process-wide flags the recovered show handler reads to choose the
/// banner caption.
///
/// The recovered handler only tests these flags, so this port keeps their names
/// tied to the branch each one selects rather than to an unproven meaning.
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ModeFlags {
    pub primary: bool,
    pub secondary: bool,
}

/// The banner caption the recovered show handler selects.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ModeCaption {
    Literal(&'static str),
    Localized(u16),
}

pub trait ModeBannerHost {
    /// Resolves one localized caption identifier.
    fn localize(&mut self, caption_id: u16) -> String;

    /// Assigns the resolved text to the mode banner label.
    fn set_mode_caption(&mut self, caption: &str);
}

pub trait AcceptButtonHost {
    fn set_accept_enabled(&mut self, enabled: bool);
}

/// Implements Ghidra function `FUN_01b90ba0` at `0x01B90BA0`.
///
/// Accepts the entered name only when it still holds a character after the
/// recovered trim, which removes leading and trailing spaces and control
/// characters. The check applies no length, character-class, or uniqueness
/// rule, reports no message, and never rewrites the edit value, so the user
/// keeps whatever padding they typed.
#[must_use]
pub fn is_user_name_accepted(entered: &str) -> bool {
    !entered
        .trim_matches(|character: char| character <= ' ')
        .is_empty()
}

/// Implements Ghidra function `FUN_01b90b70` at `0x01B90B70`.
///
/// Re-evaluates the entered name on every edit change and drives the OK
/// button's enabled state from the result. The recovered form ships that button
/// disabled, so the first accepted name is what enables it. The handler shows
/// no validation message and changes no other control.
pub fn update_accept_button(entered: &str, host: &mut impl AcceptButtonHost) -> bool {
    let accepted = is_user_name_accepted(entered);
    host.set_accept_enabled(accepted);
    accepted
}

/// Implements Ghidra function `FUN_01b90b50` at `0x01B90B50`.
///
/// Applies the same check as the edit handler to the close request, so the
/// prompt cannot be dismissed while the name is empty or only padding. The
/// recovered handler adds no prompt, no message, and no alternative exit.
#[must_use]
pub fn can_close_user_name_prompt(entered: &str) -> bool {
    is_user_name_accepted(entered)
}

/// Implements Ghidra function `FUN_01b90c40` at `0x01B90C40`.
///
/// Replaces the designed banner caption when the prompt is shown. A clear
/// primary flag assigns the recovered literal [`UNEXPECTED_MODE_CAPTION`]
/// without a localization lookup. Otherwise the secondary flag selects between
/// the two localized banner identifiers. The handler touches only the banner
/// label: it does not read, prefill, or validate the name edit, and it changes
/// no OK button state.
pub fn show_mode_banner(flags: ModeFlags, host: &mut impl ModeBannerHost) -> ModeCaption {
    let caption = if flags.primary {
        ModeCaption::Localized(if flags.secondary {
            BOTH_MODE_FLAGS_CAPTION_ID
        } else {
            PRIMARY_MODE_FLAG_CAPTION_ID
        })
    } else {
        ModeCaption::Literal(UNEXPECTED_MODE_CAPTION)
    };

    let resolved = match caption {
        ModeCaption::Literal(literal) => literal.to_owned(),
        ModeCaption::Localized(caption_id) => host.localize(caption_id),
    };
    host.set_mode_caption(&resolved);
    caption
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Message {
    Shown(ModeFlags),
    NameChanged(String),
    Accept,
}

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Window {
    name: String,
    banner: String,
    accepted: bool,
}

impl Window {
    #[must_use]
    pub const fn new(banner: String) -> Self {
        Self {
            name: String::new(),
            banner,
            accepted: false,
        }
    }

    #[must_use]
    pub fn name(&self) -> &str {
        &self.name
    }

    #[must_use]
    pub fn banner(&self) -> &str {
        &self.banner
    }

    /// Reports the OK button state, which the recovered form keeps equal to the
    /// accepted state of the entered name.
    #[must_use]
    pub fn accept_enabled(&self) -> bool {
        is_user_name_accepted(&self.name)
    }

    #[must_use]
    pub const fn is_accepted(&self) -> bool {
        self.accepted
    }

    pub fn update(&mut self, message: Message, host: &mut impl ModeBannerHost) {
        match message {
            Message::Shown(flags) => {
                self.banner = match show_mode_banner(flags, host) {
                    ModeCaption::Literal(literal) => literal.to_owned(),
                    ModeCaption::Localized(caption_id) => host.localize(caption_id),
                };
            }
            Message::NameChanged(value) => self.name = value,
            Message::Accept => self.accepted = can_close_user_name_prompt(&self.name),
        }
    }

    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let accept = button("OK");
        let accept = if self.accept_enabled() {
            accept.on_press(Message::Accept)
        } else {
            accept
        };
        container(
            column![
                text("TINA"),
                text(&self.banner),
                text(PROMPT_CAPTION),
                text_input("", &self.name).on_input(Message::NameChanged),
                accept,
            ]
            .spacing(8),
        )
        .padding(12)
        .width(Length::Fill)
        .into()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[derive(Default)]
    struct Host {
        lookups: Vec<u16>,
        captions: Vec<String>,
    }

    impl ModeBannerHost for Host {
        fn localize(&mut self, caption_id: u16) -> String {
            self.lookups.push(caption_id);
            format!("caption:{caption_id:#06x}")
        }

        fn set_mode_caption(&mut self, caption: &str) {
            self.captions.push(caption.to_owned());
        }
    }

    #[derive(Default)]
    struct ButtonHost {
        states: Vec<bool>,
    }

    impl AcceptButtonHost for ButtonHost {
        fn set_accept_enabled(&mut self, enabled: bool) {
            self.states.push(enabled);
        }
    }

    #[test]
    fn only_a_name_with_content_after_the_recovered_trim_is_accepted() {
        assert!(!is_user_name_accepted(""));
        assert!(!is_user_name_accepted("   "));
        assert!(!is_user_name_accepted("\t\r\n"));
        assert!(!is_user_name_accepted("\u{1}\u{2}"));
        assert!(is_user_name_accepted("a"));
        assert!(is_user_name_accepted("  Ada Lovelace  "));
    }

    #[test]
    fn the_edit_handler_and_the_close_query_share_one_decision() {
        let mut host = ButtonHost::default();

        for entered in ["", " ", "Ada", "Ada Lovelace "] {
            let enabled = update_accept_button(entered, &mut host);
            assert_eq!(enabled, can_close_user_name_prompt(entered));
        }

        assert_eq!(host.states, [false, false, true, true]);
    }

    #[test]
    fn a_clear_primary_flag_shows_the_literal_banner_without_a_lookup() {
        let mut host = Host::default();

        let caption = show_mode_banner(ModeFlags::default(), &mut host);

        assert_eq!(caption, ModeCaption::Literal(UNEXPECTED_MODE_CAPTION));
        assert!(host.lookups.is_empty());
        assert_eq!(host.captions, [UNEXPECTED_MODE_CAPTION.to_owned()]);
    }

    #[test]
    fn the_secondary_flag_selects_between_the_two_localized_banners() {
        let mut host = Host::default();

        assert_eq!(
            show_mode_banner(
                ModeFlags {
                    primary: true,
                    secondary: true,
                },
                &mut host,
            ),
            ModeCaption::Localized(BOTH_MODE_FLAGS_CAPTION_ID)
        );
        assert_eq!(
            show_mode_banner(
                ModeFlags {
                    primary: true,
                    secondary: false,
                },
                &mut host,
            ),
            ModeCaption::Localized(PRIMARY_MODE_FLAG_CAPTION_ID)
        );

        assert_eq!(
            host.lookups,
            [BOTH_MODE_FLAGS_CAPTION_ID, PRIMARY_MODE_FLAG_CAPTION_ID]
        );
        assert_eq!(
            host.captions,
            [
                format!("caption:{BOTH_MODE_FLAGS_CAPTION_ID:#06x}"),
                format!("caption:{PRIMARY_MODE_FLAG_CAPTION_ID:#06x}"),
            ]
        );
    }

    #[test]
    fn iced_messages_gate_acceptance_without_a_live_window() {
        let mut host = Host::default();
        let mut window = Window::new("Examination Mode".to_owned());

        window.update(
            Message::Shown(ModeFlags {
                primary: true,
                secondary: false,
            }),
            &mut host,
        );
        assert_eq!(
            window.banner(),
            format!("caption:{PRIMARY_MODE_FLAG_CAPTION_ID:#06x}")
        );

        window.update(Message::NameChanged("   ".to_owned()), &mut host);
        assert!(!window.accept_enabled());
        window.update(Message::Accept, &mut host);
        assert!(!window.is_accepted());

        window.update(Message::NameChanged(" Ada ".to_owned()), &mut host);
        assert!(window.accept_enabled());
        window.update(Message::Accept, &mut host);
        assert!(window.is_accepted());
        assert_eq!(window.name(), " Ada ");
    }
}
