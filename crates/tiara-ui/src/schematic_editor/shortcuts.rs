//! Which command a key press chooses.
//!
//! The resource writes each shortcut the way Delphi's `ShortCutToText` does -
//! `Ctrl+N`, `Shift+Ctrl+D`, `Ctrl+Alt+T`, `F5` - and the menu shows that text
//! beside the command. This reads the same text back, so the keys that work
//! are exactly the keys the menu advertises: there is no second list to drift
//! from the first.
//!
//! A shortcut only reaches a command the editor is currently offering. The
//! original greys a command and its shortcut together, and a shortcut that
//! fired while its command was greyed would be a way round the greying.

use iced::keyboard::{Key, Modifiers, key::Named};

use super::command_state::{self, EditorState};
use super::menu_tree::{MAIN_MENU, MenuEntry};

/// What a shortcut asks for: which modifiers, and which key.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
struct Chord {
    control: bool,
    shift: bool,
    alt: bool,
    key: Stroke,
}

/// The key a shortcut names, beside its modifiers.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
enum Stroke {
    /// A letter, held lower case so the comparison does not care about shift.
    Letter(char),
    /// A function key, by its number.
    Function(u8),
    Space,
    Insert,
    Delete,
}

impl Chord {
    /// Reads one shortcut as the resource writes it.
    ///
    /// Returns `None` for a spelling this does not know, rather than guessing:
    /// a shortcut that cannot be read is better left not working than bound to
    /// the wrong key.
    fn parse(text: &str) -> Option<Self> {
        let mut chord = Self {
            control: false,
            shift: false,
            alt: false,
            key: Stroke::Space,
        };
        let mut named = None;

        for part in text.split('+') {
            match part {
                "Ctrl" => chord.control = true,
                "Shift" => chord.shift = true,
                "Alt" => chord.alt = true,
                "Space" => named = Some(Stroke::Space),
                "Ins" => named = Some(Stroke::Insert),
                "Del" => named = Some(Stroke::Delete),
                other => {
                    if let Some(number) = other.strip_prefix('F')
                        && let Ok(index) = number.parse::<u8>()
                    {
                        named = Some(Stroke::Function(index));
                    } else if other.chars().count() == 1 {
                        let letter = other.chars().next()?;
                        named = Some(Stroke::Letter(letter.to_ascii_lowercase()));
                    } else {
                        return None;
                    }
                }
            }
        }

        chord.key = named?;
        Some(chord)
    }

    /// Whether a key press is this chord.
    fn matches(self, key: &Key, modifiers: Modifiers) -> bool {
        if self.control != modifiers.control()
            || self.alt != modifiers.alt()
            || self.shift != modifiers.shift()
        {
            return false;
        }

        match (self.key, key) {
            (Stroke::Letter(wanted), Key::Character(typed)) => typed
                .chars()
                .next()
                .is_some_and(|c| c.to_ascii_lowercase() == wanted),
            (Stroke::Function(wanted), Key::Named(named)) => {
                function_number(*named) == Some(wanted)
            }
            (Stroke::Space | Stroke::Insert | Stroke::Delete, Key::Named(named)) => {
                matches!(
                    (self.key, named),
                    (Stroke::Space, Named::Space)
                        | (Stroke::Insert, Named::Insert)
                        | (Stroke::Delete, Named::Delete)
                )
            }
            _ => false,
        }
    }
}

/// Which function key a named key is, if it is one.
const fn function_number(named: Named) -> Option<u8> {
    let number = match named {
        Named::F1 => 1,
        Named::F2 => 2,
        Named::F3 => 3,
        Named::F4 => 4,
        Named::F5 => 5,
        Named::F6 => 6,
        Named::F7 => 7,
        Named::F8 => 8,
        Named::F9 => 9,
        Named::F10 => 10,
        Named::F11 => 11,
        Named::F12 => 12,
        _ => return None,
    };
    Some(number)
}

/// The command this key press chooses, if the editor is offering it.
///
/// The first match in the menu's own order wins, which is the order the
/// resource lists the commands in.
#[must_use]
pub fn command_for(key: &Key, modifiers: Modifiers, state: EditorState) -> Option<&'static str> {
    fn search(
        entries: &'static [MenuEntry],
        key: &Key,
        modifiers: Modifiers,
        state: EditorState,
    ) -> Option<&'static str> {
        for entry in entries {
            if !command_state::is_shown(entry.name, entry.visible, state) {
                continue;
            }
            if let Some(text) = entry.shortcut
                && let Some(chord) = Chord::parse(text)
                && chord.matches(key, modifiers)
                && entry.enabled
                && command_state::is_enabled(entry.name, state)
            {
                return Some(entry.name);
            }
            if let Some(found) = search(command_state::children_of(entry), key, modifiers, state) {
                return Some(found);
            }
        }
        None
    }

    search(MAIN_MENU, key, modifiers, state)
}

#[cfg(test)]
mod tests {
    use iced::keyboard::{Key, Modifiers, key::Named};

    use super::{Chord, command_for};
    use crate::schematic_editor::command_state::EditorState;
    use crate::schematic_editor::menu_tree::{MAIN_MENU, MenuEntry};

    fn character(letter: &str) -> Key {
        Key::Character(letter.into())
    }

    fn drawn() -> EditorState {
        EditorState {
            has_components: true,
            ..EditorState::default()
        }
    }

    #[test]
    fn every_shortcut_the_menu_shows_can_be_read() {
        fn walk(entries: &'static [MenuEntry], unreadable: &mut Vec<&'static str>) {
            for entry in entries {
                if let Some(text) = entry.shortcut
                    && Chord::parse(text).is_none()
                {
                    unreadable.push(text);
                }
                walk(entry.children, unreadable);
            }
        }

        let mut unreadable = Vec::new();
        walk(MAIN_MENU, &mut unreadable);
        assert!(unreadable.is_empty(), "cannot read {unreadable:?}");
    }

    #[test]
    fn ctrl_n_makes_a_new_document() {
        let found = command_for(&character("n"), Modifiers::CTRL, EditorState::default());
        assert_eq!(found, Some("mnNew"));
    }

    #[test]
    fn the_same_letter_without_control_chooses_nothing() {
        let found = command_for(&character("n"), Modifiers::empty(), EditorState::default());
        assert_eq!(found, None);
    }

    #[test]
    fn shift_and_control_together_are_their_own_shortcut() {
        // `Ctrl+D` is not a shortcut in this menu; `Shift+Ctrl+D` is.
        let both = Modifiers::CTRL | Modifiers::SHIFT;
        assert_eq!(
            command_for(&character("d"), both, EditorState::default()),
            Some("mnAnalysisResults")
        );
        assert_eq!(
            command_for(&character("d"), Modifiers::CTRL, EditorState::default()),
            None
        );
    }

    #[test]
    fn a_shortcut_does_not_fire_while_its_command_is_greyed() {
        // Save is greyed on an empty sheet and offered once something is drawn.
        assert_eq!(
            command_for(&character("s"), Modifiers::CTRL, EditorState::default()),
            None
        );
        assert_eq!(
            command_for(&character("s"), Modifiers::CTRL, drawn()),
            Some("Save")
        );
    }

    #[test]
    fn undo_and_redo_shortcuts_follow_the_active_document_history() {
        let undoable = EditorState {
            can_undo: true,
            ..EditorState::default()
        };
        let redoable = EditorState {
            can_redo: true,
            ..EditorState::default()
        };

        assert_eq!(
            command_for(&character("z"), Modifiers::CTRL, EditorState::default()),
            None
        );
        assert_eq!(
            command_for(&character("z"), Modifiers::CTRL, undoable),
            Some("mnUndo")
        );
        assert_eq!(
            command_for(&character("y"), Modifiers::CTRL, EditorState::default()),
            None
        );
        assert_eq!(
            command_for(&character("y"), Modifiers::CTRL, redoable),
            Some("mnRedo")
        );
    }

    #[test]
    fn a_function_key_is_read_by_its_number() {
        let found = command_for(
            &Key::Named(Named::F5),
            Modifiers::empty(),
            EditorState::default(),
        );
        assert!(found.is_some());
    }

    #[test]
    fn a_letter_matches_whatever_its_case() {
        assert_eq!(
            command_for(&character("N"), Modifiers::CTRL, EditorState::default()),
            Some("mnNew")
        );
    }

    #[test]
    fn a_spelling_this_does_not_know_is_left_alone() {
        assert!(Chord::parse("Ctrl+Meta").is_none());
        assert!(Chord::parse("Ctrl+").is_none());
        assert!(Chord::parse("Shift").is_none());
    }

    #[test]
    fn the_modifiers_have_to_match_exactly() {
        // `Ctrl+Alt+T` must not answer to `Ctrl+T`, which is its own command.
        let ctrl_alt = Modifiers::CTRL | Modifiers::ALT;
        let with_alt = command_for(&character("t"), ctrl_alt, EditorState::default());
        let without = command_for(&character("t"), Modifiers::CTRL, EditorState::default());

        assert!(with_alt.is_some());
        assert!(without.is_some());
        assert_ne!(with_alt, without);
    }
}
