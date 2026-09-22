//! Which commands the editor offers, which it greys, and which it shows at all.
//!
//! The resource carries a `Visible` and an `Enabled` flag, but those are only
//! the values the window starts with. The original keeps changing them as the
//! document and the hardware change, so a port that reads the resource alone
//! shows every command enabled for ever, and shows the wrong ones.
//!
//! What is here was read off both applications side by side, in the same
//! state: a new, empty, unsaved document, nothing selected, nothing run and no
//! measurement card, with the original's menus read out of the handles its
//! drop-downs hand over. So each rule below is a difference that was seen, not
//! one that was guessed from a caption.

use super::menu_tree::MenuEntry;

/// What the editor knows about itself when it decides what to offer.
///
/// These are conditions the original tests separately and combines differently
/// per command, so they stay separate rather than collapsing into one mode.
#[allow(clippy::struct_excessive_bools)]
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct EditorState {
    /// Whether the document holds anything at all.
    pub has_components: bool,
    /// Whether the document has unsaved changes.
    pub is_modified: bool,
    /// Whether the document has been saved somewhere, so it has a name.
    pub has_file: bool,
    /// Whether the editor is inside a macro.
    pub inside_macro: bool,
    /// Whether anything is selected.
    pub has_selection: bool,
    /// Whether a real-time measurement card was found.
    pub has_hardware: bool,
    /// Whether a simulator was found to hand a netlist to.
    ///
    /// The port writes the netlist and does not solve it; a simulator is a
    /// separate program. See `tiara_core::simulator`, which says why it is
    /// a program rather than a crate linked in.
    pub has_a_simulator: bool,
    /// Whether anything can be undone yet.
    pub can_undo: bool,
    /// Whether anything can be redone yet.
    pub can_redo: bool,
    /// Whether anything has been cut or copied yet.
    ///
    /// Separate from [`Self::has_selection`] because `Paste` follows the
    /// clipboard and not the sheet: the original greys it with a full sheet and
    /// an empty clipboard, and offers it with an empty sheet and a full one.
    pub clipboard_has_content: bool,
    /// Whether an analysis has been run, so there is a last one to repeat.
    pub has_run_a_simulation: bool,
    /// Whether the original's help file was found on this machine.
    ///
    /// The port does not ship a copy - the help is the vendor's - so the two
    /// Help commands that open it are greyed where there is no installation
    /// to open it from.
    pub has_help: bool,
}

/// Whether an entry is drawn at all.
///
/// `the_resource_shows_it` is the resource's own `Visible` flag. It decides the
/// great majority; the names below are the six entries where the original does
/// something else, in both directions.
#[must_use]
pub fn is_shown(name: &str, the_resource_shows_it: bool, state: EditorState) -> bool {
    match name {
        // Shown by the original, though the resource hides them. `Language`
        // brings ten entries of its own with it, which is most of the
        // difference between the two View menus.
        "mnLanguage" | "mn2DView" => true,

        // Never drawn. `3D View` is the other half of the pair above, and the
        // editor opens on a 2D sheet; the next three the original withholds
        // outright, as it does with `mnTIUtilities`, which the resource
        // already hides; and the last two are instruments the build compared
        // against does not offer.
        // The last six are TinaCloud and the `Open from the Web` that goes
        // with it, which are not wanted in this port: they talk to the
        // vendor's own subscription service, which a clean-room port has no
        // account with and no reason to reach. They are left in the recovered
        // menu above, because that records what the original has, and taken
        // out here, which is where the port decides what it offers - a
        // deliberate departure and not a fault. See TIARA-c5alqhq.
        "mn3DView"
        | "mnNodeNumbers"
        | "mnChangeBitmap"
        | "HelponSchematicEditor1"
        | "DCPowerSupply"
        | "ParameterAnalyzer"
        | "mnCloud"
        | "mnLoginToCloud"
        | "mnLogoutFromCloud"
        | "mnUploadToCloud"
        | "mnDownloadFromCloud"
        | "mnOpenFileFromWeb" => false,

        // `Leave Macro` is only offered inside a macro.
        "mnCloseMacro" => state.inside_macro,

        _ => the_resource_shows_it,
    }
}

/// The languages the original offers, in the order it lists them.
///
/// The resource stubs this submenu with two entries, `English` and `Other`;
/// the original throws the stub away and builds the list from the translations
/// it finds installed. These ten are what it showed. English keeps `mnNative`,
/// the name the resource gives it; the other nine have no resource name to
/// keep, since the original makes them as it goes, so they are named after the
/// language tag instead.
static LANGUAGES: &[MenuEntry] = &[
    language("English", "mnNative"),
    language("Chinese, Simplified", "mnLanguage.zh-Hans"),
    language("Chinese, Traditional", "mnLanguage.zh-Hant"),
    language("French", "mnLanguage.fr"),
    language("German", "mnLanguage.de"),
    language("Hungarian", "mnLanguage.hu"),
    language("Japanese", "mnLanguage.ja"),
    language("Portuguese", "mnLanguage.pt"),
    language("Russian", "mnLanguage.ru"),
    language("Spanish", "mnLanguage.es"),
];

/// One language entry, which carries nothing but its caption and its name.
const fn language(caption: &'static str, name: &'static str) -> MenuEntry {
    MenuEntry {
        caption,
        accelerator: None,
        name,
        shortcut: None,
        handler: None,
        visible: true,
        enabled: true,
        children: &[],
    }
}

/// The entries a submenu holds, where the original does not use the resource's.
///
/// Only `Language` differs, but reading children through this rather than
/// through the field keeps that in one place.
#[must_use]
pub fn children_of(entry: &'static MenuEntry) -> &'static [MenuEntry] {
    if entry.name == "mnLanguage" {
        LANGUAGES
    } else {
        entry.children
    }
}

/// Whether a command is offered rather than greyed.
///
/// Anything not named here is offered, which is what the original does with the
/// great majority of its commands.
#[must_use]
pub fn is_enabled(name: &str, state: EditorState) -> bool {
    // Grouped by what each one waits for rather than by the menu it sits in,
    // because that is how the original groups them: the same condition turns
    // up in three different menus.
    match name {
        // Nothing to write out, print, or fit a page to until the document
        // holds something.
        //
        // The `Export` and `Import` groups only, not their members: the
        // original greys the group and leaves every member of it offered, the
        // same shape it uses for `Arrange`. Greying the members as well would
        // say the rule twice, and nothing is reachable through a greyed
        // parent anyway.
        "Save" | "SaveAs" | "mnSaveAll" | "Export" | "Import" | "PrintSetup" | "mnPrintPreview"
        | "Print" | "PageWidth" | "WholePage" => state.has_components,

        // Everything that acts on the selection, and a macro is entered from
        // one. `Arrange` is greyed as a group while its four members stay
        // offered, which is what the original does.
        "mnOpenMacro" | "Cut" | "Copy" | "mnDelete" | "mnRotateLeft" | "mnRotateRight"
        | "mnMirror" | "mnEditAttributes" | "mnEditSymbol" | "mnLock" | "mnUnlock"
        | "mnClearLock" | "mnArrange" => state.has_selection,

        // Paste follows the clipboard instead.
        "Paste" => state.clipboard_has_content,

        // The history commands follow the history.
        "mnUndo" => state.can_undo,
        "mnRedo" => state.can_redo,

        // Nothing to repeat until something has been run.
        // Nothing to repeat and nothing to show until something has been
        // run. The two tables show a run rather than starting one, so they
        // need no simulator - only a result.
        "RunLastSimulation" | "mnTableofACresults" | "mnTableofDCresults" => {
            state.has_run_a_simulation
        }

        // The macro commands need a macro open.
        "mnEditMacroProperties" | "mnExportMacro" => state.inside_macro,

        // The help commands need the original's help file, which only an
        // installation has. See TIARA-c5alqhq for why the port opens the
        // installed one rather than shipping or replacing it.
        "Contents" | "HelpOnComponents" => state.has_help,

        // Everything that has to be solved needs something to solve it.
        // The port writes a netlist and hands it to a simulator, so these
        // follow whether one was found - the same shape as the card and
        // the installed help above.
        //
        // `mnERC` is deliberately not here: a rules check is about how a
        // circuit is drawn rather than what it does, so it needs no
        // solver. See tiara_core::rules_check.
        "CalculateNodalVoltages"
        | "CalculateOperatingPoint"
        | "ACTransferCharateristic"
        | "DCTransferCharacteristic"
        | "TemperatureAnalysis1"
        | "DigitalTransient"
        | "mnDigitalStepbyStep"
        | "SteadyStateSolver"
        | "mnStartInteractive" => state.has_a_simulator,

        // The measurement card commands need a card. `mnOpenTestcard`
        // (01c77340) is a stub in this build like the imports below, but
        // the rule is the same either way and the card is the honest
        // reason; the other two are real handlers.
        "mnOpenTestcard" | "mnCloseTestcard" | "mnConfigFPGA" => state.has_hardware,


        // Never offered, and none of them because of a licence. Each one's
        // handler in the original is a stub: it takes no Sender - which
        // every live handler takes - and does nothing.
        //
        //   mnAIAssistant         01ca4da0   finalises a local string
        //   ImportTINA            01c83490   void f(void) { return; }
        //   ImportPalmtopCircuit  01c834a0   the same
        //   ImportPSpice          01c834b0   the same
        //   ImportDigit           01c92b60   the same
        //   ImportEDIF            01c834c0   clears three locals, returns
        //
        // The contrast with a command the licence really does stop settles
        // it: `ACVectorDiagramClick` at 01c97cf0 is a real handler that calls
        // the check at 0152b4a0 and does its work only when that check
        // passes. These have nothing to stop.
        //
        // The original leaves the five imports offered and they do nothing
        // when pressed, which is worse than saying so; the port has no
        // reader for any of those formats either, so it greys them. A
        // command that is offered should do something. See TIARA-rfa0uy5
        // and TIARA-uffopye.
        "mnAIAssistant"
        | "ImportTINA"
        | "ImportPalmtopCircuit"
        | "ImportPSpice"
        | "ImportEDIF"
        | "ImportDigit"
        // The breadboard view is not a second way of drawing the sheet, as
        // it looked from outside: it is a conversation with another
        // program. Both handlers call FUN_01ca13b0 - `New` with 0 and
        // `Continue` with 1 - and that one
        //
        //   asks FUN_01b1d9d0(L"pcbviewer.exe", 0) whether the viewer is
        //   running, launches it out of the install folder if it is not,
        //   and spins until it answers;
        //   reads ReadString("ComponentButtons", "BBoard") for the
        //   breadboard to open, and then sends the viewer two lines:
        //     NewBreadBoard(<that board>, <this circuit>)
        //     BreadBoardComplete(0|1)     <- the New/Continue difference
        //
        // So the picture of a breadboard is drawn by pcbviewer.exe and
        // never by TINA. The port does not launch the original's PCB
        // program - the same call already made for `Backannotate`, which
        // reads the board's file directly instead - and it has no
        // breadboard view of its own, so the pair is greyed rather than
        // offered and silent. A breadboard view of the port's own is a
        // feature in its own right, not a command on the sheet.
        | "mnBreadBoardViewNew"
        | "mnBreadBoardViewContinue" => false,

        _ => true,
    }
}

#[cfg(test)]
mod tests {
    use super::{EditorState, is_enabled, is_shown};

    fn empty() -> EditorState {
        EditorState::default()
    }

    fn drawn() -> EditorState {
        EditorState {
            has_components: true,
            ..EditorState::default()
        }
    }

    fn selected() -> EditorState {
        EditorState {
            has_selection: true,
            ..EditorState::default()
        }
    }

    #[test]
    fn an_empty_document_cannot_be_saved_or_printed() {
        // Which is what the original greys with a new, untouched schematic.
        for name in [
            "Save",
            "SaveAs",
            "mnSaveAll",
            "PrintSetup",
            "mnPrintPreview",
            "Print",
        ] {
            assert!(!is_enabled(name, empty()), "{name} should be greyed");
        }
    }

    #[test]
    fn a_drawn_document_can_be() {
        for name in [
            "Save",
            "SaveAs",
            "mnSaveAll",
            "PrintSetup",
            "mnPrintPreview",
            "Print",
        ] {
            assert!(is_enabled(name, drawn()), "{name} should be offered");
        }
    }

    #[test]
    fn the_export_and_import_groups_are_greyed_but_not_their_members() {
        assert!(!is_enabled("Export", empty()));
        assert!(!is_enabled("Import", empty()));
        for name in [
            "ExportNetlist",
            "ExportWMF",
            "PCBAuto1",
            "ExportAltiumSchematic",
            "ExportXML",
            "ImportXML",
            "ImportUserLibs",
            "ImportIbis",
            "mnLTSpiceImport",
        ] {
            assert!(
                is_enabled(name, empty()),
                "{name} is offered by the original even on an empty sheet"
            );
        }

        // Five members of the Import group are greyed all the same, and
        // not because the sheet is empty: they do nothing in the original
        // and the port has no reader for them either. See the rule above.
        for name in [
            "ImportTINA",
            "ImportPalmtopCircuit",
            "ImportPSpice",
            "ImportEDIF",
            "ImportDigit",
        ] {
            assert!(!is_enabled(name, empty()));
            assert!(!is_enabled(name, drawn()));
        }
    }

    #[test]
    fn entering_a_macro_needs_a_selection() {
        assert!(!is_enabled("mnOpenMacro", empty()));
        assert!(is_enabled("mnOpenMacro", selected()));
    }

    #[test]
    fn the_commands_that_act_on_a_selection_need_one() {
        for name in [
            "Cut",
            "Copy",
            "mnDelete",
            "mnRotateLeft",
            "mnRotateRight",
            "mnMirror",
            "mnEditAttributes",
            "mnEditSymbol",
            "mnLock",
            "mnUnlock",
            "mnClearLock",
            "mnArrange",
        ] {
            assert!(!is_enabled(name, empty()), "{name} should be greyed");
            assert!(is_enabled(name, selected()), "{name} should be offered");
        }
    }

    #[test]
    fn everything_that_must_be_solved_waits_for_something_to_solve_it() {
        let without = EditorState {
            has_components: true,
            ..EditorState::default()
        };
        let with = EditorState {
            has_components: true,
            has_a_simulator: true,
            ..EditorState::default()
        };

        for name in [
            "CalculateNodalVoltages",
            "CalculateOperatingPoint",
            "ACTransferCharateristic",
            "DCTransferCharacteristic",
            "TemperatureAnalysis1",
            "DigitalTransient",
            "mnDigitalStepbyStep",
            "SteadyStateSolver",
            "mnStartInteractive",
        ] {
            assert!(!is_enabled(name, without), "{name} needs a simulator");
            assert!(is_enabled(name, with), "{name} should be offered");
            // Still shown, as the original shows it: greyed is not hidden.
            assert!(is_shown(name, true, without), "{name} should be shown");
        }
    }

    #[test]
    fn choosing_an_interactive_mode_needs_no_simulator_because_it_runs_nothing() {
        // The five share one handler in the original, which stores the menu
        // item's Tag; only `Start` begins anything.
        let nothing = empty();
        for name in [
            "mnIntAC",
            "mnIntDC",
            "mnIntTransient",
            "mnIntTransientSingleShot",
            "mnIntDigital",
        ] {
            assert!(is_enabled(name, nothing), "{name} chooses a mode");
        }
        assert!(!is_enabled("mnStartInteractive", nothing));
    }

    #[test]
    fn the_rules_check_needs_no_simulator_because_it_solves_nothing() {
        // A rules check is about how a circuit is drawn, not what it does.
        let drawn_only = EditorState {
            has_components: true,
            ..EditorState::default()
        };
        assert!(is_enabled("mnERC", drawn_only));
    }

    #[test]
    fn the_breadboard_view_is_never_offered_because_it_is_another_program() {
        // FUN_01ca13b0 launches pcbviewer.exe and sends it NewBreadBoard
        // and BreadBoardComplete; the port does not launch it, so neither
        // command is ever offered, whatever is on the sheet.
        for name in ["mnBreadBoardViewNew", "mnBreadBoardViewContinue"] {
            assert!(!is_enabled(name, empty()), "{name} should be greyed");
            assert!(!is_enabled(name, drawn()), "{name} should still be greyed");
            assert!(
                !is_enabled(name, selected()),
                "{name} should still be greyed"
            );
            // And it is still offered in the menu, as the original offers
            // it: greyed is not hidden.
            assert!(
                is_shown(name, true, empty()),
                "{name} should still be shown"
            );
        }
    }

    #[test]
    fn arranging_greys_the_group_and_leaves_its_members_alone() {
        // The original greys `Arrange` itself and offers all four of these,
        // which only shows once the group is opened.
        assert!(!is_enabled("mnArrange", empty()));
        for name in [
            "mnBringToFront",
            "mnSendToBack",
            "mnBringForward",
            "mnSendBackward",
        ] {
            assert!(is_enabled(name, empty()), "{name} should be offered");
        }
    }

    #[test]
    fn pasting_follows_the_clipboard_and_not_the_sheet() {
        assert!(!is_enabled("Paste", empty()));
        assert!(!is_enabled("Paste", selected()));

        let copied = EditorState {
            clipboard_has_content: true,
            ..EditorState::default()
        };
        assert!(is_enabled("Paste", copied));
    }

    #[test]
    fn there_is_no_page_to_fit_to_until_something_is_drawn() {
        for name in ["PageWidth", "WholePage"] {
            assert!(!is_enabled(name, empty()), "{name} should be greyed");
            assert!(is_enabled(name, drawn()), "{name} should be offered");
        }
        // The other zoom steps are offered either way.
        for name in ["ZoomNormal", "ZoomAll", "ZoomIn", "ZoomOut"] {
            assert!(is_enabled(name, empty()), "{name} should be offered");
        }
    }

    #[test]
    fn there_is_nothing_to_repeat_until_something_has_been_run() {
        assert!(!is_enabled("RunLastSimulation", empty()));

        let ran = EditorState {
            has_run_a_simulation: true,
            ..EditorState::default()
        };
        assert!(is_enabled("RunLastSimulation", ran));
    }

    #[test]
    fn the_macro_commands_need_a_macro() {
        let inside = EditorState {
            inside_macro: true,
            ..EditorState::default()
        };
        for name in ["mnEditMacroProperties", "mnExportMacro"] {
            assert!(!is_enabled(name, empty()), "{name} should be greyed");
            assert!(is_enabled(name, inside), "{name} should be offered");
        }
    }

    #[test]
    fn the_history_commands_follow_the_history() {
        assert!(!is_enabled("mnUndo", empty()));
        assert!(!is_enabled("mnRedo", empty()));

        let history = EditorState {
            can_undo: true,
            can_redo: true,
            ..EditorState::default()
        };
        assert!(is_enabled("mnUndo", history));
        assert!(is_enabled("mnRedo", history));
    }

    #[test]
    fn the_card_commands_need_a_card() {
        let card = EditorState {
            has_hardware: true,
            ..EditorState::default()
        };
        for name in ["mnOpenTestcard", "mnCloseTestcard", "mnConfigFPGA"] {
            assert!(!is_enabled(name, empty()), "{name} should be greyed");
            assert!(is_enabled(name, card), "{name} should be offered");
        }
    }

    #[test]
    fn leaving_a_macro_is_hidden_until_one_is_entered() {
        assert!(!is_shown("mnCloseMacro", true, empty()));

        let inside = EditorState {
            inside_macro: true,
            ..EditorState::default()
        };
        assert!(is_shown("mnCloseMacro", true, inside));
    }

    #[test]
    fn the_two_instruments_the_original_withholds_stay_hidden() {
        for name in ["DCPowerSupply", "ParameterAnalyzer"] {
            assert!(!is_shown(name, true, empty()), "{name} should be hidden");
            assert!(!is_shown(name, true, drawn()), "{name} should stay hidden");
        }
    }

    #[test]
    fn the_entries_the_original_shows_though_the_resource_hides_them() {
        for name in ["mnLanguage", "mn2DView"] {
            assert!(is_shown(name, false, empty()), "{name} should be shown");
        }
    }

    #[test]
    fn the_entries_the_original_hides_though_the_resource_shows_them() {
        for name in [
            "mn3DView",
            "mnNodeNumbers",
            "mnChangeBitmap",
            "HelponSchematicEditor1",
        ] {
            assert!(!is_shown(name, true, empty()), "{name} should be hidden");
        }
    }

    #[test]
    fn everything_else_follows_the_resource() {
        for name in ["mnNew", "Open", "mnClose", "mnExit", "Oscilloscope"] {
            assert!(is_shown(name, true, empty()), "{name} should be shown");
            assert!(!is_shown(name, false, empty()), "{name} should be hidden");
        }
    }

    #[test]
    fn everything_else_is_offered() {
        for name in [
            "mnNew",
            "Open",
            "mnClose",
            "mnExit",
            "ListofMaterials1",
            "Oscilloscope",
            "mnSelectAll",
            "mnReconciliate",
        ] {
            assert!(is_enabled(name, empty()), "{name} should be offered");
        }
    }

    #[test]
    fn the_cloud_commands_are_not_offered_at_all() {
        // Taken out on purpose: they talk to DesignSoft's subscription
        // service, which this port has no account with. The recovered menu
        // still records them, which is why the resource is asked and the
        // answer is still no.
        for command in [
            "mnCloud",
            "mnLoginToCloud",
            "mnLogoutFromCloud",
            "mnUploadToCloud",
            "mnDownloadFromCloud",
            "mnOpenFileFromWeb",
        ] {
            assert!(
                !is_shown(command, true, empty()),
                "{command} should not be drawn"
            );
        }
    }

    #[test]
    fn the_help_commands_wait_for_an_installation_to_read_the_help_from() {
        let none = empty();
        assert!(!is_enabled("Contents", none));
        assert!(!is_enabled("HelpOnComponents", none));

        let installed = EditorState {
            has_help: true,
            ..empty()
        };
        assert!(is_enabled("Contents", installed));
        assert!(is_enabled("HelpOnComponents", installed));

        // Nothing else follows the help.
        assert!(is_enabled("mnNew", none));
    }

    #[test]
    fn the_command_whose_handler_is_a_stub_is_never_offered() {
        // The original greys it whatever state it is in, because there is
        // nothing behind it in that build - and this port has no AI
        // assistant either. Nothing the editor does turns it on.
        for state in [empty(), drawn()] {
            assert!(!is_enabled("mnAIAssistant", state));
        }
        // It is still drawn, greyed, where the resource draws it.
        assert!(is_shown("mnAIAssistant", true, empty()));
    }

    #[test]
    fn the_netlist_editor_is_offered_because_this_port_has_one() {
        // The original greys it: that build ships its handler as a stub.
        // This port is not that build - it has a Netlist Editor window - so
        // it offers the command and opens it. A deliberate departure, and
        // the one place the port is more than the original here.
        for state in [empty(), drawn()] {
            assert!(is_enabled("mnSPiceEditor", state));
        }
        assert!(is_shown("mnSPiceEditor", true, empty()));
    }

    #[test]
    fn the_imports_that_do_nothing_are_not_offered() {
        // Five of the six import commands are stubs in the original and
        // the port has no reader for their formats, so it greys them
        // rather than offer a command that does nothing.
        for command in [
            "ImportTINA",
            "ImportPalmtopCircuit",
            "ImportPSpice",
            "ImportEDIF",
            "ImportDigit",
        ] {
            for state in [empty(), drawn()] {
                assert!(!is_enabled(command, state), "{command} should be greyed");
            }
            // They are still drawn, greyed, where the resource draws them.
            assert!(is_shown(command, true, empty()));
        }

        // The sixth reads a file the port now reads, so it is offered.
        assert!(is_enabled("mnLTSpiceImport", drawn()));
    }
}
