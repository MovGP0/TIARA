use iced::widget::{checkbox, column, container, row, scrollable, text, text_input};
use iced::{Alignment, Element, Length};

use crate::shared::window_shell;

pub const TITLE: &str = "Protect Circuit";
pub const SCREENSHOT: &str = "screenshots/Protect_Circuti_Window.png";
pub const FORM_RESOURCE: &str = "ProtectCircDlg";
pub const ORIGINAL_FUNCTION: Option<&str> = Some("01baeeb0");
const STATUS: &str = "Circuit protection";
const TOOLBAR: &[&str] = &["OK", "Cancel", "Help"];

#[derive(Debug)]
pub struct Window {
    values: Vec<String>,
    checks: Vec<bool>,
}

impl Default for Window {
    fn default() -> Self {
        Self {
            values: vec![String::new(); 2],
            checks: vec![false; 1],
        }
    }
}

#[derive(Debug, Clone)]
pub enum Message {
    TextChanged(usize, String),
    Toggle(usize, bool),
    NoOp,
}

impl Window {
    pub fn update(&mut self, message: Message) {
        match message {
            Message::TextChanged(index, value) => {
                if let Some(field) = self.values.get_mut(index) {
                    *field = value;
                }
            }
            Message::Toggle(index, value) => {
                if let Some(check) = self.checks.get_mut(index) {
                    *check = value;
                }
            }
            Message::NoOp => {}
        }
    }
    /// Builds the controls associated with `SCREENSHOT` and `FORM_RESOURCE`.
    /// `ORIGINAL_FUNCTION` preserves the recovered function connection when available.
    #[must_use]
    pub fn view(&self) -> Element<'_, Message> {
        let menu = window_shell::empty_menu();
        let toolbar = window_shell::toolbar(TOOLBAR, Message::NoOp);
        let body: Element<'_, Message> = container(scrollable(
            column![
                row![
                    text("Enter password").width(Length::FillPortion(2)),
                    text_input("", &self.values[0])
                        .on_input(move |value| Message::TextChanged(0, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                row![
                    text("Re-enter password").width(Length::FillPortion(2)),
                    text_input("", &self.values[1])
                        .on_input(move |value| Message::TextChanged(1, value))
                        .width(Length::FillPortion(3)),
                ]
                .spacing(8)
                .align_y(Alignment::Center),
                checkbox("Allow switching between good & faulty", self.checks[0])
                    .on_toggle(move |value| Message::Toggle(0, value)),
            ]
            .spacing(8),
        ))
        .padding(18)
        .width(Length::Fill)
        .height(Length::Fill)
        .into();

        window_shell::frame(TITLE, menu, toolbar, body, STATUS)
    }
}

/// The help context the recovered Protect Circuit create handler assigns.
pub const PROTECT_HELP_CONTEXT: u32 = 0x046e;

/// The help context the recovered Unprotect Circuit create handler assigns.
pub const UNPROTECT_HELP_CONTEXT: u32 = 0x046f;

pub trait CircuitProtectionHelpHost {
    fn set_help_context(&mut self, context: u32);
}

/// Implements Ghidra function `FUN_01baeeb0` at `0x01BAEEB0`.
///
/// The Protect Circuit dialog's create handler assigns its help context and
/// does nothing else: it seeds no control, reads no circuit, and validates no
/// password, so the dialog opens exactly as designed.
pub fn create_protect_circuit_dialog(host: &mut impl CircuitProtectionHelpHost) {
    host.set_help_context(PROTECT_HELP_CONTEXT);
}

/// Implements Ghidra function `FUN_01baf4a0` at `0x01BAF4A0`.
///
/// The Unprotect Circuit dialog's create handler is the same single step with
/// its own help context. The two dialogs therefore differ only in the topic
/// they open, not in what their create handlers do.
pub fn create_unprotect_circuit_dialog(host: &mut impl CircuitProtectionHelpHost) {
    host.set_help_context(UNPROTECT_HELP_CONTEXT);
}

#[cfg(test)]
mod protection_help_tests {
    use super::*;

    #[derive(Debug, Default)]
    struct HelpHost {
        contexts: Vec<u32>,
    }

    impl CircuitProtectionHelpHost for HelpHost {
        fn set_help_context(&mut self, context: u32) {
            self.contexts.push(context);
        }
    }

    #[test]
    fn the_two_create_handlers_differ_only_in_their_help_topic() {
        let mut host = HelpHost::default();

        create_protect_circuit_dialog(&mut host);
        create_unprotect_circuit_dialog(&mut host);

        assert_eq!(
            host.contexts,
            [PROTECT_HELP_CONTEXT, UNPROTECT_HELP_CONTEXT]
        );
    }
}

/// The message shown when the two protect fields disagree.
pub const PASSWORDS_DO_NOT_MATCH: &str = "The passwords do not match. Please try again.";

/// The message shown when an unprotect password is wrong.
pub const PASSWORD_NOT_CORRECT: &str = "The password is not correct. Please try again.";

/// The caption of the unprotect message box.
pub const UNPROTECT_TITLE: &str = "Unprotect Circuit";

pub trait ProtectCircuitHost {
    /// Reports whether a document is open.
    fn document_open(&mut self) -> bool;

    /// Reports whether the document is already protected.
    fn already_protected(&mut self) -> bool;

    /// Runs the protect dialog, returning the two typed passwords and the
    /// chosen protection level.
    ///
    /// `None` means the dialog was cancelled.
    fn show_protect_dialog(&mut self) -> Option<(String, String, i32)>;

    /// Shows one message box.
    fn report(&mut self, title: &str, message: &str);

    /// Applies one password and level to the document.
    fn apply_protection(&mut self, password: &str, level: i32);
}

/// Implements Ghidra function `FUN_01c97d70` at `0x01C97D70`.
///
/// Handles `MainMenu.mnTools.mnProtect.OnClick` ("Pro&tect Circuit...").
///
/// Protects the circuit behind a password.
///
/// The dialog is re-shown in a loop until the two fields match and the password
/// is not blank once trimmed, so a mistyped confirmation is corrected in place
/// rather than sending the user back through the menu. Cancelling is the only
/// way out other than success.
///
/// The password that is *stored* is the trimmed one — unlike the block lock,
/// which stores what was typed.
///
/// Returns whether the circuit was protected.
pub fn protect_circuit(host: &mut impl ProtectCircuitHost) -> bool {
    if !host.document_open() || host.already_protected() {
        return false;
    }

    loop {
        let Some((first, second, level)) = host.show_protect_dialog() else {
            return false;
        };

        let trimmed = first.trim_matches(|c: char| c <= ' ').to_owned();
        if first != second || trimmed.is_empty() {
            host.report(TITLE, PASSWORDS_DO_NOT_MATCH);
            continue;
        }

        host.apply_protection(&trimmed, level);
        return true;
    }
}

pub trait UnprotectCircuitHost {
    /// Reports whether a document is open and protected.
    fn document_protected(&mut self) -> bool;

    /// Runs the unprotect dialog, returning the typed password and the chosen
    /// level.
    ///
    /// `None` means the dialog was cancelled.
    fn show_unprotect_dialog(&mut self) -> Option<(String, i32)>;

    /// Hashes a password the way the stored one was hashed.
    fn hash_password(&mut self, password: &str) -> String;

    /// The hash the document carries.
    fn stored_hash(&mut self) -> String;

    /// Shows one message box.
    fn report(&mut self, title: &str, message: &str);

    /// Clears the protection and applies the chosen level.
    fn clear_protection(&mut self, level: i32);

    /// Re-applies every object's protected state.
    fn refresh_objects(&mut self);
}

/// Implements Ghidra function `FUN_01c98160` at `0x01C98160`.
///
/// Handles `MainMenu.mnTools.mnUnProtect.OnClick` ("&Unprotect Circuit...").
///
/// Unprotects the circuit if the password matches.
///
/// Like the protect command this loops rather than giving up, so a mistyped
/// password can be corrected without reopening the menu — and unlike the block
/// unlock, it says so every time rather than only once.
///
/// The comparison is on hashes rather than on the passwords themselves, so the
/// plain password is never held by the document.
///
/// Returns whether the circuit was unprotected.
pub fn unprotect_circuit(host: &mut impl UnprotectCircuitHost) -> bool {
    if !host.document_protected() {
        return false;
    }

    loop {
        let Some((password, level)) = host.show_unprotect_dialog() else {
            return false;
        };

        let hashed = host.hash_password(&password);
        if hashed != host.stored_hash() {
            host.report(UNPROTECT_TITLE, PASSWORD_NOT_CORRECT);
            continue;
        }

        host.clear_protection(level);
        host.refresh_objects();
        return true;
    }
}

#[cfg(test)]
mod protection_command_tests {
    use super::*;

    #[derive(Debug, Default)]
    struct Protect {
        open: bool,
        protected: bool,
        entries: Vec<Option<(String, String, i32)>>,
        reports: Vec<(String, String)>,
        applied: Vec<(String, i32)>,
    }

    impl ProtectCircuitHost for Protect {
        fn document_open(&mut self) -> bool {
            self.open
        }

        fn already_protected(&mut self) -> bool {
            self.protected
        }

        fn show_protect_dialog(&mut self) -> Option<(String, String, i32)> {
            if self.entries.is_empty() {
                return None;
            }
            self.entries.remove(0)
        }

        fn report(&mut self, title: &str, message: &str) {
            self.reports.push((title.to_owned(), message.to_owned()));
        }

        fn apply_protection(&mut self, password: &str, level: i32) {
            self.applied.push((password.to_owned(), level));
        }
    }

    #[test]
    fn a_mismatch_re_shows_the_dialog_rather_than_giving_up() {
        let mut host = Protect {
            open: true,
            entries: vec![
                Some(("one".to_owned(), "two".to_owned(), 0)),
                Some(("  secret ".to_owned(), "  secret ".to_owned(), 1)),
            ],
            ..Protect::default()
        };

        assert!(protect_circuit(&mut host));

        assert_eq!(
            host.reports,
            [(TITLE.to_owned(), PASSWORDS_DO_NOT_MATCH.to_owned())]
        );
        assert_eq!(host.applied, [("secret".to_owned(), 1)]);
    }

    #[test]
    fn a_blank_password_is_refused_like_a_mismatch() {
        let mut host = Protect {
            open: true,
            entries: vec![Some(("   ".to_owned(), "   ".to_owned(), 0)), None],
            ..Protect::default()
        };

        assert!(!protect_circuit(&mut host));

        assert_eq!(host.reports.len(), 1);
        assert!(host.applied.is_empty());
    }

    #[test]
    fn an_already_protected_circuit_is_not_offered_the_dialog() {
        let mut host = Protect {
            open: true,
            protected: true,
            entries: vec![Some(("a".to_owned(), "a".to_owned(), 0))],
            ..Protect::default()
        };

        assert!(!protect_circuit(&mut host));
        assert!(host.applied.is_empty());
    }

    #[derive(Debug, Default)]
    struct Unprotect {
        protected: bool,
        entries: Vec<Option<(String, i32)>>,
        reports: Vec<(String, String)>,
        cleared: Vec<i32>,
        refreshes: usize,
    }

    impl UnprotectCircuitHost for Unprotect {
        fn document_protected(&mut self) -> bool {
            self.protected
        }

        fn show_unprotect_dialog(&mut self) -> Option<(String, i32)> {
            if self.entries.is_empty() {
                return None;
            }
            self.entries.remove(0)
        }

        fn hash_password(&mut self, password: &str) -> String {
            format!("#{password}")
        }

        fn stored_hash(&mut self) -> String {
            "#secret".to_owned()
        }

        fn report(&mut self, title: &str, message: &str) {
            self.reports.push((title.to_owned(), message.to_owned()));
        }

        fn clear_protection(&mut self, level: i32) {
            self.cleared.push(level);
        }

        fn refresh_objects(&mut self) {
            self.refreshes += 1;
        }
    }

    #[test]
    fn a_wrong_password_is_reported_every_time_and_the_dialog_re_shown() {
        let mut host = Unprotect {
            protected: true,
            entries: vec![
                Some(("wrong".to_owned(), 0)),
                Some(("other".to_owned(), 0)),
                Some(("secret".to_owned(), 2)),
            ],
            ..Unprotect::default()
        };

        assert!(unprotect_circuit(&mut host));

        assert_eq!(host.reports.len(), 2);
        assert!(
            host.reports
                .iter()
                .all(|(title, message)| title == UNPROTECT_TITLE
                    && message == PASSWORD_NOT_CORRECT)
        );
        assert_eq!(host.cleared, [2]);
        assert_eq!(host.refreshes, 1);
    }

    #[test]
    fn cancelling_leaves_the_circuit_protected() {
        let mut host = Unprotect {
            protected: true,
            ..Unprotect::default()
        };

        assert!(!unprotect_circuit(&mut host));
        assert!(host.cleared.is_empty());
    }

    #[test]
    fn an_unprotected_circuit_is_not_offered_the_dialog() {
        let mut host = Unprotect {
            entries: vec![Some(("secret".to_owned(), 0))],
            ..Unprotect::default()
        };

        assert!(!unprotect_circuit(&mut host));
        assert!(host.cleared.is_empty());
    }
}
