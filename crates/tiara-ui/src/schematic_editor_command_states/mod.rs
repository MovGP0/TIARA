//! Iced state for the recovered Schematic Editor command-state pass.
//!
//! The editor decides what every menu entry and tool-bar button should look
//! like on each idle turn rather than when something changes. Nothing in the
//! rest of the editor has to remember to invalidate a command, because the
//! whole command set is recomputed between events.
//!
//! The recovered handler names around sixty controls by field offset and the
//! symbols do not name them, so this port carries the *rules* — each one a
//! named predicate — and reports them as a set of decisions. Where several
//! controls share a rule the recovered offsets are listed in that rule's
//! documentation rather than invented names being given to controls that
//! cannot be identified.

/// The form the recovered handler belongs to.
pub const FORM_RESOURCE: &str = "SchematicEditor";

/// The standard Windows clipboard formats the paste rule accepts.
///
/// The recovered handler also tests two formats the application registers for
/// itself, whose numbers are read from data rather than compiled in and so are
/// not recovered; they are the two `registered_*` flags below.
pub const CF_TEXT: u16 = 1;
/// A bitmap on the clipboard.
pub const CF_BITMAP: u16 = 2;
/// A Windows metafile picture on the clipboard.
pub const CF_METAFILEPICT: u16 = 3;
/// An enhanced metafile on the clipboard.
pub const CF_ENHMETAFILE: u16 = 14;

/// What the clipboard is holding, as the paste rule asks about it.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
#[allow(clippy::struct_excessive_bools)]
pub struct ClipboardFormats {
    /// The private format the application registers for a schematic
    /// selection.
    pub registered_schematic: bool,
    /// A second private format, registered alongside the first.
    pub registered_secondary: bool,
    /// Plain text.
    pub text: bool,
    /// An enhanced metafile.
    pub enhanced_metafile: bool,
    /// A metafile picture.
    pub metafile: bool,
    /// A bitmap.
    pub bitmap: bool,
}

impl ClipboardFormats {
    /// Reports whether the clipboard holds anything the schematic accepts.
    #[must_use]
    pub const fn any_pasteable(self) -> bool {
        self.registered_schematic
            || self.text
            || self.registered_secondary
            || self.enhanced_metafile
            || self.metafile
            || self.bitmap
    }
}

/// The kind of object a selection holds.
///
/// The recovered handler reads the kind byte at `+0x70` of the selection and
/// branches on four of its values.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum SelectionKind {
    /// Nothing is selected. The recovered handler treats this exactly like a
    /// schematic selection, which is why an empty editor still offers the
    /// schematic commands rather than going entirely grey.
    #[default]
    Empty,
    /// An ordinary schematic part: kind 1.
    Schematic,
    /// One of the two code-backed kinds, 3 and 4, whose text lives in the code
    /// editor rather than the schematic.
    Code,
    /// Any other kind.
    Other,
}

impl SelectionKind {
    /// Reports whether the schematic commands apply to this selection.
    ///
    /// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
    #[must_use]
    pub const fn is_schematic(self) -> bool {
        matches!(self, Self::Empty | Self::Schematic)
    }

    /// Reports whether the selection is backed by the code editor.
    #[must_use]
    pub const fn is_code(self) -> bool {
        matches!(self, Self::Code)
    }
}

/// Everything the command-state pass decides from.
///
/// The recovered handler reads these once at the top and re-uses them across
/// every rule below, which is why one stale value shows up as a whole group of
/// commands being wrong at once rather than a single entry.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
#[allow(clippy::struct_excessive_bools)]
pub struct CommandContext {
    /// The shared edit guard allows editing.
    pub editing_allowed: bool,
    /// What the selection holds.
    pub selection: SelectionKind,
    /// The code editor reports a selection of its own. Only meaningful for a
    /// code-backed selection.
    pub code_editor_has_selection: bool,
    /// The master gate the Edit commands hang off — the recovered handler
    /// reads it back out of one menu entry's own enabled state, so every
    /// selection rule below inherits whatever that entry was last set to.
    pub edit_commands_available: bool,
    /// The view reports a selection.
    pub view_has_selection: bool,
    /// The view reports exactly one selected object.
    pub view_has_single_selection: bool,
    /// A command occupies the editor's command slot.
    pub command_running: bool,
    /// An analysis or other modal state is in progress.
    pub editor_busy: bool,
    /// The interactive simulation is running.
    pub simulation_running: bool,
    /// A text editor holds the focus, so the clipboard commands belong to it
    /// rather than to the schematic.
    pub text_editor_focused: bool,
    /// The document refuses edits because it is protected.
    pub document_protected: bool,
    /// The history has a step to undo.
    pub can_undo: bool,
    /// The history has a step to redo.
    pub can_redo: bool,
    /// A previous command is recorded and can be repeated.
    pub can_repeat_command: bool,
    /// What the clipboard is holding.
    pub clipboard: ClipboardFormats,
}

impl CommandContext {
    /// Reports whether anything is selected, as the rules below mean it.
    ///
    /// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
    #[must_use]
    pub const fn anything_selected(self) -> bool {
        self.view_has_selection && self.edit_commands_available
    }

    /// Reports whether exactly one object is selected.
    ///
    /// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
    #[must_use]
    pub const fn single_selection(self) -> bool {
        self.view_has_single_selection && self.edit_commands_available
    }

    /// Reports whether the code editor's own selection stands in for the
    /// schematic's.
    ///
    /// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
    #[must_use]
    pub const fn code_selection(self) -> bool {
        self.selection.is_code() && self.code_editor_has_selection
    }
}

/// Whether the commands that change a selection are enabled.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// Applied to the entries at `+0x7A0` and `+0x7B8` and mirrored onto `+0xC58`
/// and `+0x1310`. An open code editor with its own selection enables them
/// outright; otherwise editing must be allowed, the selection must be a
/// schematic one, something must be selected, and no command may be armed.
#[must_use]
pub const fn selection_command_enabled(context: CommandContext) -> bool {
    context.code_selection()
        || (context.editing_allowed
            && context.selection.is_schematic()
            && context.anything_selected()
            && !context.command_running)
}

/// Whether the commands that only read a selection are enabled.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// Applied to `+0x7A8` and mirrored onto `+0xBE8`. The same rule without the
/// edit guard: these commands read the selection rather than change it, so a
/// locked editor still offers them.
#[must_use]
pub const fn readonly_selection_command_enabled(context: CommandContext) -> bool {
    context.code_selection()
        || (context.anything_selected()
            && context.selection.is_schematic()
            && !context.command_running)
}

/// Whether the commands that ignore the code editor are enabled.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// Applied to `+0x7C8`, `+0x7D0`, `+0x7D8` and `+0x17A0`, and mirrored onto
/// six more entries and tool-bar buttons. This rule drops both the
/// code-editor escape and the armed-command test, so these stay enabled while
/// a tool is armed.
#[must_use]
pub const fn schematic_selection_command_enabled(context: CommandContext) -> bool {
    context.editing_allowed && context.selection.is_schematic() && context.anything_selected()
}

/// Whether the commands that need exactly one object are enabled.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// Applied to `+0x7E0` and mirrored onto `+0xC50`.
#[must_use]
pub const fn single_selection_command_enabled(context: CommandContext) -> bool {
    context.editing_allowed && context.selection.is_schematic() && context.single_selection()
}

/// Whether the commands that act on the selected object are enabled.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// Applied to `+0x10B0`. Unlike the rule above it does not ask what kind the
/// selection is, only that something is selected and nothing is armed.
#[must_use]
pub const fn armed_selection_command_enabled(context: CommandContext) -> bool {
    context.anything_selected() && context.editing_allowed && !context.command_running
}

/// Whether Paste is enabled.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// Applied to `+0x7B0` and mirrored onto `+0xBE0`. Two quite different paths
/// reach the same entry: a schematic paste needs the edit guard, an unarmed
/// editor, one of the six accepted formats, and the focus *not* to be in a
/// text editor; a code-editor paste needs only text on the clipboard. So the
/// same menu entry means "paste a circuit" or "paste text" depending on where
/// the caret is, and the schematic path deliberately stands aside the moment a
/// text editor takes the focus.
#[must_use]
pub const fn paste_enabled(context: CommandContext) -> bool {
    let schematic_paste = context.editing_allowed
        && context.selection.is_schematic()
        && context.edit_commands_available
        && !context.command_running
        && context.clipboard.any_pasteable()
        && !context.text_editor_focused;

    if schematic_paste {
        return true;
    }

    !context.selection.is_schematic() && context.clipboard.text
}

/// Whether the clipboard commands that belong to whichever editor has the
/// focus are enabled.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// Applied to `+0xA68`. A code selection enables them unconditionally — the
/// text editor decides for itself whether they do anything — while a
/// schematic selection also needs an unarmed editor and the focus outside a
/// text editor.
#[must_use]
pub const fn focused_clipboard_command_enabled(context: CommandContext) -> bool {
    !context.selection.is_schematic() || (!context.command_running && !context.text_editor_focused)
}

/// Whether the schematic-only clipboard commands are enabled.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// Applied to `+0xA58`. That entry is enabled once near the top of the pass
/// from the simulation flag alone and then overwritten here unconditionally,
/// so the first decision never survives — a recovered redundancy this port
/// keeps rather than tidies, since removing it would change which flag the
/// entry ends up following.
#[must_use]
pub const fn schematic_clipboard_command_enabled(context: CommandContext) -> bool {
    context.selection.is_schematic() && !context.text_editor_focused
}

/// Whether the commands gated by the edit guard alone are enabled.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// Applied to `+0xC20`, `+0xC28` and `+0xC98`.
#[must_use]
pub const fn editing_command_enabled(context: CommandContext) -> bool {
    context.editing_allowed && context.edit_commands_available
}

/// Whether the commands the running simulation takes over are enabled.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// Applied as one batch to nine entries from `+0x990` through `+0x9B8` and
/// again to `+0xF90` on its own. A running simulation disables them, but a
/// focused text editor puts them back — the text editor's own commands share
/// the entries, and it keeps them while the circuit is live.
#[must_use]
pub const fn simulation_command_enabled(context: CommandContext) -> bool {
    !context.simulation_running || context.text_editor_focused
}

/// Whether Undo is enabled.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// Applied to `+0x788`. Undo needs the edit guard, an unarmed editor, a step
/// to undo and an editor that is neither busy nor suspended, so it goes grey
/// during an analysis rather than unwinding the circuit underneath it.
///
/// Which history it asks is the interesting part: while a script is running
/// the question goes to the script's own history rather than the document's,
/// so undo during a script steps the script back rather than the circuit.
/// The caller resolves that before filling in [`CommandContext::can_undo`].
#[must_use]
pub const fn undo_enabled(context: CommandContext) -> bool {
    context.editing_allowed && !context.command_running && context.can_undo && !context.editor_busy
}

/// Whether Redo is enabled.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// Applied to `+0x790`, and asks the script's history for the same reason
/// [`undo_enabled`] does.
#[must_use]
pub const fn redo_enabled(context: CommandContext) -> bool {
    context.editing_allowed && !context.command_running && context.can_redo && !context.editor_busy
}

/// The three label annotations whose entries this pass keeps in step.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// They form a chain rather than three independent settings: the units entry
/// is *enabled* from the values flag and the tolerance entry from the units
/// entry, so tolerances need units which need values. That is the same
/// dependency the Values command enforces when it switches the other two off.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
#[allow(clippy::struct_excessive_bools)]
pub struct LabelAnnotationStates {
    /// Whether the values entry is ticked.
    pub values_checked: bool,
    /// Whether the units entry is ticked.
    pub units_checked: bool,
    /// Whether the units entry is enabled.
    pub units_enabled: bool,
    /// Whether the tolerance entry is ticked.
    pub tolerance_checked: bool,
    /// Whether the tolerance entry is enabled.
    pub tolerance_enabled: bool,
}

/// Works out the three label-annotation entries from their flags.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
#[must_use]
pub const fn label_annotation_states(
    values: bool,
    units: bool,
    tolerance: bool,
) -> LabelAnnotationStates {
    LabelAnnotationStates {
        values_checked: values,
        units_checked: units,
        units_enabled: values,
        tolerance_checked: tolerance,
        tolerance_enabled: values,
    }
}

/// Every decision the pass reaches, in the order the recovered handler
/// reaches them.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
#[allow(clippy::struct_excessive_bools)]
pub struct CommandStates {
    /// [`selection_command_enabled`].
    pub selection_commands: bool,
    /// [`readonly_selection_command_enabled`].
    pub readonly_selection_commands: bool,
    /// [`schematic_selection_command_enabled`].
    pub schematic_selection_commands: bool,
    /// [`single_selection_command_enabled`].
    pub single_selection_commands: bool,
    /// [`armed_selection_command_enabled`].
    pub armed_selection_command: bool,
    /// [`paste_enabled`], before the protected-document override.
    pub paste: bool,
    /// [`focused_clipboard_command_enabled`].
    pub focused_clipboard_commands: bool,
    /// [`schematic_clipboard_command_enabled`].
    pub schematic_clipboard_commands: bool,
    /// [`editing_command_enabled`].
    pub editing_commands: bool,
    /// [`simulation_command_enabled`].
    pub simulation_commands: bool,
    /// [`undo_enabled`].
    pub undo: bool,
    /// [`redo_enabled`].
    pub redo: bool,
    /// Whether the repeat-last-command entry is enabled.
    pub repeat_command: bool,
    /// The three label annotations.
    pub labels: LabelAnnotationStates,
    /// Whether the protected-document override ran, forcing the two
    /// document-writing entries and Paste off whatever the rules above said.
    pub protected_override: bool,
    /// Whether the whole editable command set was disabled in one batch
    /// because the edit guard refused.
    pub blanket_disable: bool,
}

/// Decides every command state from one reading of the editor.
///
/// Part of Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// The recovered handler applies each decision to its controls as it reaches
/// it; collecting them here keeps the order — a later decision that contradicts
/// an earlier one still wins — while leaving the whole pass testable without a
/// window.
#[must_use]
pub fn decide_command_states(context: CommandContext) -> CommandStates {
    let mut states = CommandStates {
        selection_commands: selection_command_enabled(context),
        readonly_selection_commands: readonly_selection_command_enabled(context),
        schematic_selection_commands: schematic_selection_command_enabled(context),
        single_selection_commands: single_selection_command_enabled(context),
        armed_selection_command: armed_selection_command_enabled(context),
        paste: paste_enabled(context),
        focused_clipboard_commands: focused_clipboard_command_enabled(context),
        schematic_clipboard_commands: schematic_clipboard_command_enabled(context),
        editing_commands: editing_command_enabled(context),
        simulation_commands: simulation_command_enabled(context),
        undo: undo_enabled(context),
        redo: redo_enabled(context),
        repeat_command: context.can_repeat_command,
        labels: LabelAnnotationStates::default(),
        protected_override: context.document_protected,
        blanket_disable: !context.editing_allowed,
    };

    if states.protected_override {
        states.paste = false;
    }

    if states.blanket_disable {
        states.selection_commands = false;
        states.readonly_selection_commands = false;
        states.schematic_selection_commands = false;
        states.single_selection_commands = false;
        states.armed_selection_command = false;
        states.paste = false;
        states.undo = false;
        states.redo = false;
    }

    states
}

pub trait CommandStateHost {
    /// Reads everything the pass decides from. Returning `None` stands for the
    /// recovered handler's two guards — a missing form or a missing view.
    fn context(&mut self) -> Option<CommandContext>;

    /// The three label-annotation flags.
    fn label_annotation_flags(&mut self) -> (bool, bool, bool);

    /// Applies every decision to the controls that share it.
    fn apply(&mut self, states: CommandStates);

    /// Applies the check marks each of which follows one flag of its own,
    /// with no rule worth naming between the flag and the tick.
    fn refresh_independent_check_marks(&mut self);

    /// Disables the commands this build never offers, whatever the rules
    /// above decided.
    fn disable_unavailable_commands(&mut self);

    /// Lets a running command refresh its own state.
    fn refresh_running_command(&mut self);

    /// Rebuilds the status display the pass ends with.
    fn refresh_status(&mut self);
}

/// Implements Ghidra function `FUN_01c7ec30` at `0x01C7EC30`.
///
/// Handles `SchematicEditorEvents.OnIdle`.
///
/// Re-decides the enabled and checked state of every editor command.
///
/// Recomputing the whole command set between events is what lets the rest of
/// the editor never think about command state at all — no command has to
/// invalidate a menu when it finishes, because the menu is rebuilt before the
/// user can reach it.
///
/// The rules the pass applies are mostly a handful shared across many
/// controls, and the differences between them carry the design: whether an
/// open code editor overrides the schematic's own state, whether an armed tool
/// blocks a command, and whether the edit guard applies to a command that only
/// reads.
///
/// Two overrides run after the rules and therefore beat them. A protected
/// document forces the document-writing commands and Paste off, and a refused
/// edit guard disables the whole editable set in one batch. The same set is
/// *enabled* in one batch before the rules run when the guard allows editing,
/// so the blanket enable is a starting point the rules refine while the
/// blanket disable is a verdict they cannot undo.
///
/// Returns the decisions, or `None` when a guard refused.
pub fn refresh_command_states(host: &mut impl CommandStateHost) -> Option<CommandStates> {
    let context = host.context()?;

    let mut states = decide_command_states(context);
    let (values, units, tolerance) = host.label_annotation_flags();
    states.labels = label_annotation_states(values, units, tolerance);

    host.apply(states);
    host.refresh_independent_check_marks();
    host.disable_unavailable_commands();
    host.refresh_running_command();
    host.refresh_status();

    Some(states)
}

#[cfg(test)]
mod tests {
    use super::*;

    fn ready() -> CommandContext {
        CommandContext {
            editing_allowed: true,
            selection: SelectionKind::Schematic,
            code_editor_has_selection: false,
            edit_commands_available: true,
            view_has_selection: true,
            view_has_single_selection: true,
            command_running: false,
            editor_busy: false,
            simulation_running: false,
            text_editor_focused: false,
            document_protected: false,
            can_undo: true,
            can_redo: true,
            can_repeat_command: true,
            clipboard: ClipboardFormats {
                registered_schematic: true,
                ..ClipboardFormats::default()
            },
        }
    }

    #[test]
    fn the_standard_clipboard_formats_are_the_windows_numbers() {
        assert_eq!(CF_TEXT, 1);
        assert_eq!(CF_BITMAP, 2);
        assert_eq!(CF_METAFILEPICT, 3);
        assert_eq!(CF_ENHMETAFILE, 14);
    }

    #[test]
    fn an_empty_selection_counts_as_a_schematic_one() {
        assert!(SelectionKind::Empty.is_schematic());
        assert!(SelectionKind::Schematic.is_schematic());
        assert!(!SelectionKind::Code.is_schematic());
        assert!(!SelectionKind::Other.is_schematic());
    }

    #[test]
    fn the_selection_rules_agree_when_everything_is_ready() {
        let context = ready();
        assert!(selection_command_enabled(context));
        assert!(readonly_selection_command_enabled(context));
        assert!(schematic_selection_command_enabled(context));
        assert!(single_selection_command_enabled(context));
    }

    #[test]
    fn an_armed_tool_blocks_the_commands_that_would_change_the_selection() {
        let context = CommandContext {
            command_running: true,
            ..ready()
        };

        assert!(!selection_command_enabled(context));
        assert!(!readonly_selection_command_enabled(context));
        assert!(schematic_selection_command_enabled(context));
        assert!(single_selection_command_enabled(context));
    }

    #[test]
    fn a_locked_editor_still_offers_the_read_only_commands() {
        let context = CommandContext {
            editing_allowed: false,
            ..ready()
        };

        assert!(!selection_command_enabled(context));
        assert!(readonly_selection_command_enabled(context));
        assert!(!schematic_selection_command_enabled(context));
    }

    #[test]
    fn a_code_editor_selection_overrides_the_schematics_own_state() {
        let context = CommandContext {
            selection: SelectionKind::Code,
            code_editor_has_selection: true,
            editing_allowed: false,
            view_has_selection: false,
            command_running: true,
            ..ready()
        };

        assert!(selection_command_enabled(context));
        assert!(readonly_selection_command_enabled(context));
        assert!(!schematic_selection_command_enabled(context));
    }

    #[test]
    fn a_code_selection_without_its_own_selection_overrides_nothing() {
        let context = CommandContext {
            selection: SelectionKind::Code,
            code_editor_has_selection: false,
            view_has_selection: false,
            ..ready()
        };

        assert!(!selection_command_enabled(context));
        assert!(!readonly_selection_command_enabled(context));
    }

    #[test]
    fn the_master_gate_withdraws_every_selection_rule_at_once() {
        let context = CommandContext {
            edit_commands_available: false,
            ..ready()
        };

        assert!(!context.anything_selected());
        assert!(!context.single_selection());
        assert!(!selection_command_enabled(context));
        assert!(!readonly_selection_command_enabled(context));
        assert!(!schematic_selection_command_enabled(context));
        assert!(!single_selection_command_enabled(context));
    }

    #[test]
    fn a_multiple_selection_keeps_only_the_single_object_rule_out() {
        let context = CommandContext {
            view_has_single_selection: false,
            ..ready()
        };

        assert!(schematic_selection_command_enabled(context));
        assert!(!single_selection_command_enabled(context));
    }

    #[test]
    fn paste_accepts_any_of_the_six_recovered_formats() {
        for clipboard in [
            ClipboardFormats {
                registered_schematic: true,
                ..ClipboardFormats::default()
            },
            ClipboardFormats {
                registered_secondary: true,
                ..ClipboardFormats::default()
            },
            ClipboardFormats {
                text: true,
                ..ClipboardFormats::default()
            },
            ClipboardFormats {
                enhanced_metafile: true,
                ..ClipboardFormats::default()
            },
            ClipboardFormats {
                metafile: true,
                ..ClipboardFormats::default()
            },
            ClipboardFormats {
                bitmap: true,
                ..ClipboardFormats::default()
            },
        ] {
            assert!(clipboard.any_pasteable());
            assert!(paste_enabled(CommandContext {
                clipboard,
                ..ready()
            }));
        }

        assert!(!ClipboardFormats::default().any_pasteable());
        assert!(!paste_enabled(CommandContext {
            clipboard: ClipboardFormats::default(),
            ..ready()
        }));
    }

    #[test]
    fn paste_needs_no_selection_only_the_master_gate() {
        let context = CommandContext {
            view_has_selection: false,
            view_has_single_selection: false,
            ..ready()
        };
        assert!(paste_enabled(context));

        assert!(!paste_enabled(CommandContext {
            edit_commands_available: false,
            ..context
        }));
    }

    #[test]
    fn a_focused_text_editor_takes_paste_away_from_the_schematic() {
        let context = CommandContext {
            text_editor_focused: true,
            ..ready()
        };

        // The schematic path stands aside, and the fall-back path does not
        // apply because the selection is still a schematic one.
        assert!(!paste_enabled(context));
    }

    #[test]
    fn a_code_selection_pastes_on_text_alone() {
        let context = CommandContext {
            selection: SelectionKind::Code,
            editing_allowed: false,
            command_running: true,
            text_editor_focused: true,
            clipboard: ClipboardFormats {
                text: true,
                ..ClipboardFormats::default()
            },
            ..ready()
        };
        assert!(paste_enabled(context));

        // A circuit on the clipboard is no use to the code editor.
        assert!(!paste_enabled(CommandContext {
            clipboard: ClipboardFormats {
                registered_schematic: true,
                ..ClipboardFormats::default()
            },
            ..context
        }));
    }

    #[test]
    fn the_clipboard_commands_follow_whichever_editor_has_the_focus() {
        let schematic = ready();
        assert!(focused_clipboard_command_enabled(schematic));
        assert!(schematic_clipboard_command_enabled(schematic));

        let typing = CommandContext {
            text_editor_focused: true,
            ..ready()
        };
        assert!(!focused_clipboard_command_enabled(typing));
        assert!(!schematic_clipboard_command_enabled(typing));

        let code = CommandContext {
            selection: SelectionKind::Code,
            text_editor_focused: true,
            command_running: true,
            ..ready()
        };
        assert!(focused_clipboard_command_enabled(code));
        assert!(!schematic_clipboard_command_enabled(code));
    }

    #[test]
    fn a_running_simulation_leaves_the_text_editor_its_commands() {
        let live = CommandContext {
            simulation_running: true,
            ..ready()
        };
        assert!(!simulation_command_enabled(live));

        assert!(simulation_command_enabled(CommandContext {
            text_editor_focused: true,
            ..live
        }));
    }

    #[test]
    fn history_goes_grey_during_an_analysis() {
        let busy = CommandContext {
            editor_busy: true,
            ..ready()
        };
        assert!(!undo_enabled(busy));
        assert!(!redo_enabled(busy));

        assert!(undo_enabled(ready()));
        assert!(redo_enabled(ready()));
    }

    #[test]
    fn history_follows_each_direction_independently() {
        let context = CommandContext {
            can_redo: false,
            ..ready()
        };

        assert!(undo_enabled(context));
        assert!(!redo_enabled(context));
    }

    #[test]
    fn an_armed_tool_greys_the_history_too() {
        let context = CommandContext {
            command_running: true,
            ..ready()
        };

        assert!(!undo_enabled(context));
        assert!(!redo_enabled(context));
    }

    #[test]
    fn units_and_tolerance_both_hang_off_the_values_flag() {
        let on = label_annotation_states(true, true, true);
        assert!(on.units_enabled);
        assert!(on.tolerance_enabled);

        let off = label_annotation_states(false, true, true);
        assert!(!off.units_enabled);
        assert!(!off.tolerance_enabled);
        // The ticks still report their own flags while the entries are grey.
        assert!(off.units_checked);
        assert!(off.tolerance_checked);
    }

    #[test]
    fn a_protected_document_takes_paste_away_after_the_rules_allowed_it() {
        let context = ready();
        assert!(paste_enabled(context));

        let states = decide_command_states(CommandContext {
            document_protected: true,
            ..context
        });
        assert!(states.protected_override);
        assert!(!states.paste);
        // The selection rules are untouched by the override.
        assert!(states.selection_commands);
    }

    #[test]
    fn a_refused_edit_guard_disables_the_whole_editable_set() {
        let states = decide_command_states(CommandContext {
            editing_allowed: false,
            ..ready()
        });

        assert!(states.blanket_disable);
        assert!(!states.selection_commands);
        assert!(!states.readonly_selection_commands);
        assert!(!states.schematic_selection_commands);
        assert!(!states.single_selection_commands);
        assert!(!states.armed_selection_command);
        assert!(!states.paste);
        assert!(!states.undo);
        assert!(!states.redo);
    }

    #[test]
    fn the_blanket_disable_beats_a_code_editor_selection() {
        // The read-only rule would otherwise survive a locked editor.
        let states = decide_command_states(CommandContext {
            editing_allowed: false,
            selection: SelectionKind::Code,
            code_editor_has_selection: true,
            ..ready()
        });

        assert!(!states.readonly_selection_commands);
    }

    #[derive(Debug, Clone, Copy, PartialEq, Eq)]
    enum Step {
        Apply(CommandStates),
        Checks,
        Unavailable,
        RunningCommand,
        Status,
    }

    #[derive(Debug, Default)]
    struct Editor {
        context: Option<CommandContext>,
        flags: (bool, bool, bool),
        steps: Vec<Step>,
    }

    impl CommandStateHost for Editor {
        fn context(&mut self) -> Option<CommandContext> {
            self.context
        }

        fn label_annotation_flags(&mut self) -> (bool, bool, bool) {
            self.flags
        }

        fn apply(&mut self, states: CommandStates) {
            self.steps.push(Step::Apply(states));
        }

        fn refresh_independent_check_marks(&mut self) {
            self.steps.push(Step::Checks);
        }

        fn disable_unavailable_commands(&mut self) {
            self.steps.push(Step::Unavailable);
        }

        fn refresh_running_command(&mut self) {
            self.steps.push(Step::RunningCommand);
        }

        fn refresh_status(&mut self) {
            self.steps.push(Step::Status);
        }
    }

    #[test]
    fn a_missing_view_ends_the_pass_before_anything_is_touched() {
        let mut host = Editor::default();

        assert_eq!(refresh_command_states(&mut host), None);
        assert!(host.steps.is_empty());
    }

    #[test]
    fn the_pass_runs_every_stage_in_the_recovered_order() {
        let mut host = Editor {
            context: Some(ready()),
            flags: (true, true, false),
            ..Editor::default()
        };

        let states = refresh_command_states(&mut host).expect("the guards pass");

        assert_eq!(states.labels, label_annotation_states(true, true, false));
        assert_eq!(
            host.steps,
            [
                Step::Apply(states),
                Step::Checks,
                Step::Unavailable,
                Step::RunningCommand,
                Step::Status,
            ]
        );
    }

    #[test]
    fn the_unavailable_commands_are_disabled_after_every_rule() {
        let mut host = Editor {
            context: Some(ready()),
            ..Editor::default()
        };

        refresh_command_states(&mut host);

        let unavailable = host
            .steps
            .iter()
            .position(|step| *step == Step::Unavailable)
            .expect("the unavailable pass runs");
        let applied = host
            .steps
            .iter()
            .position(|step| matches!(step, Step::Apply(_)))
            .expect("the rules are applied");

        assert!(unavailable > applied);
    }
}
