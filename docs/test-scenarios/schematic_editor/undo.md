# Edit > Undo (mnUndo); independent Ctrl+Z route

| Field | Value |
| --- | --- |
| Scenario | `SE-MENU-UNDO-001` |
| Window / tab | `schematic_editor` |
| Review | Draft |
| Integration | Not derived |
| Defect | TIARA-0axzpp1 |

## Setup

Start with a new, empty circuit and an empty undo history. Use the palette and sheet to place exactly one resistor.
Follow the [shared execution rules](../execution-rules.md).

## Actions

1. Open Edit with the pointer. Check Undo before clicking it.
2. Click Undo. Inspect the sheet and the Edit menu states.
3. Reset to a new circuit and place one resistor again.
4. Focus the sheet and press Ctrl+Z once.

## Expected results

- Undo is enabled after placement.
- Clicking Undo removes the resistor. With this one-edit fixture, Undo becomes disabled and Redo becomes enabled.
- The keyboard route has the same document and eligibility effects as the menu route.
- No extra undoable edit is made by opening or hovering the menu.

## Variants

Undo on a new empty document changes nothing. With two circuit tabs, undo affects only the active document. When a text editor has focus, verify the intended local-text undo routing separately.

## Evidence and current result

Live TIARA: Ctrl+Z left the placed resistor on the sheet; Edit > Undo stayed grey. Live TINA: Ctrl+Z removed the resistor. The existing undo_and_redo_reach_the_sheet test passed because it injects MenuCommand directly and bypasses eligibility.
These observations do not mean that all actions and variants in this draft
have been executed. Review the unresolved points before deriving tests.

- [crates/tiara-ui/src/schematic_editor/menu_tree.rs](../../../crates/tiara-ui/src/schematic_editor/menu_tree.rs)
- [crates/tiara-ui/src/schematic_editor/menu.rs](../../../crates/tiara-ui/src/schematic_editor/menu.rs)
- [crates/tiara-ui/src/schematic_editor/shortcuts.rs](../../../crates/tiara-ui/src/schematic_editor/shortcuts.rs)
- [crates/tiara-ui/src/schematic_editor/command_state.rs](../../../crates/tiara-ui/src/schematic_editor/command_state.rs)
- [crates/tiara-ui/src/schematic_editor/mod.rs](../../../crates/tiara-ui/src/schematic_editor/mod.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Later integration test

Cite `SE-MENU-UNDO-001`. Activate the actual control or keyboard route listed above.
Assert the expected visible and document/caller effects; do not stop at a
message or flag. This draft is not yet approved for test derivation.
