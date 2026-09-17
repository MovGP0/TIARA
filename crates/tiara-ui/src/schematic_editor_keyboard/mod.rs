//! Iced state for the recovered Schematic Editor canvas keyboard handling.
//!
//! The canvas hooks its own window procedure so it can claim keys before the
//! document sees them: first the running command, then the user's own component
//! shortcuts, then the editor's fixed keys, and only then the document.

/// The form the recovered handlers belong to.
pub const FORM_RESOURCE: &str = "SchematicEditor";

/// `WM_KEYDOWN`.
pub const KEY_DOWN_MESSAGE: u32 = 0x0100;

/// `WM_KEYUP`.
pub const KEY_UP_MESSAGE: u32 = 0x0101;

/// `WM_CHAR`.
pub const CHAR_MESSAGE: u32 = 0x0102;

/// The Delphi `TShortCut` bit for Shift.
pub const SHORTCUT_SHIFT: u16 = 0x2000;

/// The Delphi `TShortCut` bit for Ctrl.
pub const SHORTCUT_CTRL: u16 = 0x4000;

/// The Delphi `TShortCut` bit for Alt.
pub const SHORTCUT_ALT: u16 = 0x8000;

/// The recovered component id that stands for a macro rather than a part.
pub const MACRO_COMPONENT_ID: i32 = 0x39;

/// The prefix that marks a shortcut entry as a macro path.
pub const MACRO_PATH_PREFIX: &str = "$TINA";

/// The character that marks a shortcut entry as a named library part.
pub const LIBRARY_PART_MARKER: char = '#';

/// The placeholder the recovered build stores for an unnamed variant.
pub const AUTOMATIC_VARIANT: &str = "<Auto>";

/// What a component shortcut entry names.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ShortcutTarget {
    /// A macro file, named by the whole entry including its prefix.
    MacroFile(String),
    /// A library part, written `#<name>` — the marker is dropped and the rest
    /// is split into the part's name and its variant.
    LibraryPart { name: String, variant: String },
    /// A plain component id.
    Component(i32),
}

/// Implements Ghidra function `FUN_01c6db60` at `0x01C6DB60`.
///
/// Packs a key and its modifiers into the shortcut value the editor's component
/// shortcuts are stored as.
///
/// This is the Delphi `TShortCut` encoding, so a shortcut recorded in the
/// options dialog and a key pressed on the canvas compare as plain integers.
///
/// Shift and Ctrl are read from the keyboard rather than from the message, so a
/// modifier released between the key going down and this running is not counted.
#[must_use]
pub const fn shortcut_for(key: u16, shift: bool, ctrl: bool, alt: bool) -> u16 {
    let mut shortcut = key;
    if shift {
        shortcut += SHORTCUT_SHIFT;
    }
    if ctrl {
        shortcut += SHORTCUT_CTRL;
    }
    if alt {
        shortcut += SHORTCUT_ALT;
    }
    shortcut
}

/// Splits a component shortcut entry into what it names.
///
/// Part of Ghidra function `FUN_01c6dbd0` at `0x01C6DBD0`.
///
/// The entry is stored as free text, so its first characters are what decide
/// how it is read: one of the macro prefixes means a file path, a leading `#`
/// means a named library part, and anything else is a bare component id.
///
/// `extra_macro_prefixes` carries the second recovered prefix, which is a data
/// reference rather than a literal in the recovered bytes and so is supplied by
/// the caller.
///
/// Returns `None` for an entry that is neither prefixed nor a number; the
/// recovered build raises a conversion error there instead.
#[must_use]
pub fn classify_shortcut_entry(
    entry: &str,
    extra_macro_prefixes: &[&str],
) -> Option<ShortcutTarget> {
    if entry.starts_with(MACRO_PATH_PREFIX)
        || extra_macro_prefixes
            .iter()
            .any(|prefix| !prefix.is_empty() && entry.starts_with(prefix))
    {
        return Some(ShortcutTarget::MacroFile(entry.to_owned()));
    }

    if let Some(rest) = entry.strip_prefix(LIBRARY_PART_MARKER) {
        let (name, variant) = rest.split_once(LIBRARY_PART_MARKER).map_or_else(
            || (rest.to_owned(), AUTOMATIC_VARIANT.to_owned()),
            |(name, variant)| (name.to_owned(), variant.to_owned()),
        );
        return Some(ShortcutTarget::LibraryPart { name, variant });
    }

    entry.trim().parse().ok().map(ShortcutTarget::Component)
}

/// The fixed keys the canvas claims for itself.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CanvasKeyCommand {
    /// Escape.
    Cancel,
    /// Space.
    InsertWire,
    /// Insert.
    InsertLastComponent,
    /// Delete.
    DeleteSelection,
    /// Numeric-pad `*`.
    MirrorSelection,
    /// Numeric-pad `+`.
    RotateSelectionRight,
    /// Numeric-pad `-`.
    RotateSelectionLeft,
    /// F5.
    Redraw,
    /// F9. The recovered handler matches this key and does nothing with it, so
    /// it is swallowed rather than reaching the document.
    Swallow,
    /// F11.
    AssignMcuCode,
}

/// Maps a virtual key to the command the canvas runs for it.
///
/// Part of Ghidra function `FUN_01c6dbd0` at `0x01C6DBD0`.
///
/// `None` means the key belongs to the document, which is where typing a value
/// into a component ends up.
#[must_use]
pub const fn canvas_key_command(key: u16) -> Option<CanvasKeyCommand> {
    match key {
        0x1B => Some(CanvasKeyCommand::Cancel),
        0x20 => Some(CanvasKeyCommand::InsertWire),
        0x2D => Some(CanvasKeyCommand::InsertLastComponent),
        0x2E => Some(CanvasKeyCommand::DeleteSelection),
        0x6A => Some(CanvasKeyCommand::MirrorSelection),
        0x6B => Some(CanvasKeyCommand::RotateSelectionRight),
        0x6D => Some(CanvasKeyCommand::RotateSelectionLeft),
        0x74 => Some(CanvasKeyCommand::Redraw),
        0x78 => Some(CanvasKeyCommand::Swallow),
        0x7A => Some(CanvasKeyCommand::AssignMcuCode),
        _ => None,
    }
}

/// One window message as the recovered handler reads it.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct CanvasMessage {
    /// The message id.
    pub id: u32,
    /// The virtual key the message carries.
    pub key: u16,
    /// Whether an earlier stage already reported the message handled.
    pub handled: bool,
}

pub trait CanvasKeyHost {
    /// Offers the message to the running command, which may handle it.
    ///
    /// Returns whether the command claimed it.
    fn offer_to_command(&mut self, message: CanvasMessage) -> bool;

    /// The shortcut value for the key that is down, modifiers included.
    fn pressed_shortcut(&mut self) -> u16;

    /// The user's component shortcut entries, in the order they are searched.
    fn shortcut_entries(&mut self) -> Vec<(u16, String)>;

    /// The macro prefixes beyond [`MACRO_PATH_PREFIX`].
    fn extra_macro_prefixes(&mut self) -> Vec<String>;

    /// Inserts what a matched shortcut entry named.
    fn insert_shortcut_target(&mut self, target: ShortcutTarget);

    /// Whether Ctrl is held.
    fn ctrl_down(&mut self) -> bool;

    /// Runs one of the canvas's fixed key commands.
    fn run_key_command(&mut self, command: CanvasKeyCommand);

    /// Passes the message on to the document's own key handling.
    fn forward_to_document(&mut self, message: CanvasMessage);
}

/// What the handler did with one message.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CanvasMessageOutcome {
    /// The message arrived already handled, or the running command claimed it.
    Claimed,
    /// A component shortcut and/or a fixed key command ran.
    Handled,
    /// The message was passed to the document.
    Forwarded,
    /// Nothing wanted the message.
    Ignored,
}

/// Implements Ghidra function `FUN_01c6dbd0` at `0x01C6DBD0`.
///
/// Handles `EditorPanel.SchEditBox.OnDefaultHandler`.
///
/// Routes a keyboard message through the editor's claimants in order.
///
/// The running command gets first refusal, so a tool that is mid-gesture can
/// take Escape or an arrow key before anything else sees it. A component
/// shortcut is checked next and runs regardless of Ctrl, which is what lets the
/// user bind Ctrl-combinations to parts.
///
/// The editor's own fixed keys are the exception: they are skipped entirely
/// while Ctrl is held, so Ctrl-Delete and Ctrl-Space stay available to the
/// document instead of deleting the selection or starting a wire. F9 is matched
/// there and deliberately does nothing, so it never reaches the document either.
///
/// Key-up and character messages have no editor handling at all and go straight
/// to the document.
pub fn canvas_default_handler(
    message: CanvasMessage,
    host: &mut impl CanvasKeyHost,
) -> CanvasMessageOutcome {
    if message.handled {
        return CanvasMessageOutcome::Claimed;
    }

    if host.offer_to_command(message) {
        return CanvasMessageOutcome::Claimed;
    }

    if message.id == KEY_UP_MESSAGE || message.id == CHAR_MESSAGE {
        host.forward_to_document(message);
        return CanvasMessageOutcome::Forwarded;
    }

    if message.id != KEY_DOWN_MESSAGE {
        return CanvasMessageOutcome::Ignored;
    }

    let mut handled = false;

    let shortcut = host.pressed_shortcut();
    let prefixes = host.extra_macro_prefixes();
    let entry = host
        .shortcut_entries()
        .into_iter()
        .find(|(value, _)| *value == shortcut)
        .map(|(_, entry)| entry);

    if let Some(entry) = entry {
        let borrowed: Vec<&str> = prefixes.iter().map(String::as_str).collect();
        if let Some(target) = classify_shortcut_entry(&entry, &borrowed) {
            host.insert_shortcut_target(target);
            handled = true;
        }
    }

    if host.ctrl_down() {
        return if handled {
            CanvasMessageOutcome::Handled
        } else {
            CanvasMessageOutcome::Ignored
        };
    }

    if let Some(command) = canvas_key_command(message.key) {
        if command != CanvasKeyCommand::Swallow {
            host.run_key_command(command);
        }
        return CanvasMessageOutcome::Handled;
    }

    host.forward_to_document(message);
    if handled {
        CanvasMessageOutcome::Handled
    } else {
        CanvasMessageOutcome::Forwarded
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_shortcut_encoding_matches_delphis() {
        assert_eq!(shortcut_for(0x41, false, false, false), 0x41);
        assert_eq!(shortcut_for(0x41, true, false, false), 0x2041);
        assert_eq!(shortcut_for(0x41, false, true, false), 0x4041);
        assert_eq!(shortcut_for(0x41, false, false, true), 0x8041);
        assert_eq!(shortcut_for(0x41, true, true, true), 0xE041);
    }

    #[test]
    fn a_prefixed_entry_names_a_macro_file() {
        assert_eq!(
            classify_shortcut_entry(r"$TINA\MACROS\opamp.tsm", &[]),
            Some(ShortcutTarget::MacroFile(
                r"$TINA\MACROS\opamp.tsm".to_owned()
            ))
        );
    }

    #[test]
    fn the_caller_may_supply_a_second_macro_prefix() {
        assert_eq!(
            classify_shortcut_entry(r"$USER\own.tsm", &["$USER"]),
            Some(ShortcutTarget::MacroFile(r"$USER\own.tsm".to_owned()))
        );
        assert_eq!(
            classify_shortcut_entry(r"$USER\own.tsm", &[]),
            None,
            "without the prefix the entry is not a number either"
        );
    }

    #[test]
    fn an_empty_extra_prefix_never_matches() {
        assert_eq!(
            classify_shortcut_entry("42", &[""]),
            Some(ShortcutTarget::Component(42))
        );
    }

    #[test]
    fn a_hash_entry_names_a_library_part_and_its_variant() {
        assert_eq!(
            classify_shortcut_entry("#TL071#SPICE", &[]),
            Some(ShortcutTarget::LibraryPart {
                name: "TL071".to_owned(),
                variant: "SPICE".to_owned(),
            })
        );
    }

    #[test]
    fn a_hash_entry_without_a_variant_falls_back_to_the_placeholder() {
        assert_eq!(
            classify_shortcut_entry("#TL071", &[]),
            Some(ShortcutTarget::LibraryPart {
                name: "TL071".to_owned(),
                variant: AUTOMATIC_VARIANT.to_owned(),
            })
        );
    }

    #[test]
    fn anything_else_is_read_as_a_component_id() {
        assert_eq!(
            classify_shortcut_entry("17", &[]),
            Some(ShortcutTarget::Component(17))
        );
        assert_eq!(classify_shortcut_entry("not a number", &[]), None);
    }

    #[test]
    fn the_fixed_keys_map_to_their_commands() {
        assert_eq!(canvas_key_command(0x1B), Some(CanvasKeyCommand::Cancel));
        assert_eq!(canvas_key_command(0x20), Some(CanvasKeyCommand::InsertWire));
        assert_eq!(
            canvas_key_command(0x2D),
            Some(CanvasKeyCommand::InsertLastComponent)
        );
        assert_eq!(
            canvas_key_command(0x2E),
            Some(CanvasKeyCommand::DeleteSelection)
        );
        assert_eq!(
            canvas_key_command(0x6A),
            Some(CanvasKeyCommand::MirrorSelection)
        );
        assert_eq!(
            canvas_key_command(0x6B),
            Some(CanvasKeyCommand::RotateSelectionRight)
        );
        assert_eq!(
            canvas_key_command(0x6D),
            Some(CanvasKeyCommand::RotateSelectionLeft)
        );
        assert_eq!(canvas_key_command(0x74), Some(CanvasKeyCommand::Redraw));
        assert_eq!(canvas_key_command(0x78), Some(CanvasKeyCommand::Swallow));
        assert_eq!(
            canvas_key_command(0x7A),
            Some(CanvasKeyCommand::AssignMcuCode)
        );
        assert_eq!(canvas_key_command(b'A'.into()), None);
    }

    #[derive(Debug, Clone, PartialEq, Eq)]
    enum Step {
        Command,
        Insert(ShortcutTarget),
        Run(CanvasKeyCommand),
        Forward,
    }

    #[derive(Debug, Default)]
    struct Host {
        command_claims: bool,
        shortcut: u16,
        entries: Vec<(u16, String)>,
        ctrl: bool,
        steps: Vec<Step>,
    }

    impl CanvasKeyHost for Host {
        fn offer_to_command(&mut self, _message: CanvasMessage) -> bool {
            self.steps.push(Step::Command);
            self.command_claims
        }

        fn pressed_shortcut(&mut self) -> u16 {
            self.shortcut
        }

        fn shortcut_entries(&mut self) -> Vec<(u16, String)> {
            self.entries.clone()
        }

        fn extra_macro_prefixes(&mut self) -> Vec<String> {
            Vec::new()
        }

        fn insert_shortcut_target(&mut self, target: ShortcutTarget) {
            self.steps.push(Step::Insert(target));
        }

        fn ctrl_down(&mut self) -> bool {
            self.ctrl
        }

        fn run_key_command(&mut self, command: CanvasKeyCommand) {
            self.steps.push(Step::Run(command));
        }

        fn forward_to_document(&mut self, _message: CanvasMessage) {
            self.steps.push(Step::Forward);
        }
    }

    const fn key_down(key: u16) -> CanvasMessage {
        CanvasMessage {
            id: KEY_DOWN_MESSAGE,
            key,
            handled: false,
        }
    }

    #[test]
    fn a_message_someone_already_handled_is_left_alone() {
        let mut host = Host::default();

        let outcome = canvas_default_handler(
            CanvasMessage {
                handled: true,
                ..key_down(0x2E)
            },
            &mut host,
        );

        assert_eq!(outcome, CanvasMessageOutcome::Claimed);
        assert!(host.steps.is_empty());
    }

    #[test]
    fn the_running_command_gets_first_refusal() {
        let mut host = Host {
            command_claims: true,
            ..Host::default()
        };

        let outcome = canvas_default_handler(key_down(0x2E), &mut host);

        assert_eq!(outcome, CanvasMessageOutcome::Claimed);
        assert_eq!(host.steps, [Step::Command]);
    }

    #[test]
    fn a_fixed_key_runs_its_command() {
        let mut host = Host::default();

        let outcome = canvas_default_handler(key_down(0x2E), &mut host);

        assert_eq!(outcome, CanvasMessageOutcome::Handled);
        assert_eq!(
            host.steps,
            [Step::Command, Step::Run(CanvasKeyCommand::DeleteSelection)]
        );
    }

    #[test]
    fn f9_is_swallowed_without_running_anything() {
        let mut host = Host::default();

        let outcome = canvas_default_handler(key_down(0x78), &mut host);

        assert_eq!(outcome, CanvasMessageOutcome::Handled);
        assert_eq!(host.steps, [Step::Command]);
    }

    #[test]
    fn holding_ctrl_leaves_the_fixed_keys_to_the_document() {
        let mut host = Host {
            ctrl: true,
            ..Host::default()
        };

        let outcome = canvas_default_handler(key_down(0x2E), &mut host);

        assert_eq!(outcome, CanvasMessageOutcome::Ignored);
        assert_eq!(host.steps, [Step::Command]);
    }

    #[test]
    fn a_component_shortcut_runs_even_while_ctrl_is_held() {
        let mut host = Host {
            ctrl: true,
            shortcut: shortcut_for(b'R'.into(), false, true, false),
            entries: vec![(
                shortcut_for(b'R'.into(), false, true, false),
                "17".to_owned(),
            )],
            ..Host::default()
        };

        let outcome = canvas_default_handler(key_down(b'R'.into()), &mut host);

        assert_eq!(outcome, CanvasMessageOutcome::Handled);
        assert_eq!(
            host.steps,
            [Step::Command, Step::Insert(ShortcutTarget::Component(17))]
        );
    }

    #[test]
    fn an_unclaimed_key_reaches_the_document() {
        let mut host = Host::default();

        let outcome = canvas_default_handler(key_down(b'A'.into()), &mut host);

        assert_eq!(outcome, CanvasMessageOutcome::Forwarded);
        assert_eq!(host.steps, [Step::Command, Step::Forward]);
    }

    #[test]
    fn key_up_and_character_messages_go_straight_to_the_document() {
        for id in [KEY_UP_MESSAGE, CHAR_MESSAGE] {
            let mut host = Host::default();

            let outcome = canvas_default_handler(
                CanvasMessage {
                    id,
                    ..key_down(0x2E)
                },
                &mut host,
            );

            assert_eq!(outcome, CanvasMessageOutcome::Forwarded);
            assert_eq!(host.steps, [Step::Command, Step::Forward]);
        }
    }

    #[test]
    fn any_other_message_is_left_alone() {
        let mut host = Host::default();

        let outcome = canvas_default_handler(
            CanvasMessage {
                id: 0x0200,
                ..key_down(0)
            },
            &mut host,
        );

        assert_eq!(outcome, CanvasMessageOutcome::Ignored);
        assert_eq!(host.steps, [Step::Command]);
    }
}
