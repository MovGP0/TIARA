# Edit > Redo (mnRedo); independent Ctrl+Y route

| Field | Value |
| --- | --- |
| Scenario | `SE-MENU-REDO-001` |
| Window / tab | `schematic_editor` |
| Review | Draft |
| Integration | Not derived |
| Defect | TIARA-0axzpp1 |

## Setup

Start with a new circuit. Place one resistor and undo its placement through a real user input route. If Undo is blocked, record this scenario as blocked; do not inject a handler call and report a UI pass.
Follow the [shared execution rules](../execution-rules.md).

## Actions

1. Open Edit. Check Redo and click it.
2. Compare the restored component with its state before Undo.
3. Reset the fixture and repeat using Ctrl+Y with sheet focus.
4. Undo again. Make a different new edit. Check Redo and try Ctrl+Y.

## Expected results

- Redo is enabled after Undo and restores the same resistor exactly once.
- Identity, position, value and orientation are restored. Undo is enabled; Redo is disabled if there is no further redo history.
- Ctrl+Y has the same effect as the menu action.
- A different new edit clears the redo history. The old undone edit cannot be restored.

## Variants

With no redo history, neither the menu nor shortcut changes the document. Repeat with two circuit tabs and verify that histories stay separate.

## Evidence and current result

Live TINA: Ctrl+Y restored the resistor removed by Ctrl+Z. TIARA has the same static-disabled eligibility defect for Redo as for Undo. Both focused document/handler tests passed; neither proves the user input route.
These observations do not mean that all actions and variants in this draft
have been executed. Review the unresolved points before deriving tests.

- [crates/tiara-ui/src/schematic_editor/menu.rs](../../../crates/tiara-ui/src/schematic_editor/menu.rs)
- [crates/tiara-ui/src/schematic_editor/menu_tree.rs](../../../crates/tiara-ui/src/schematic_editor/menu_tree.rs)
- [crates/tiara-ui/src/schematic_editor/shortcuts.rs](../../../crates/tiara-ui/src/schematic_editor/shortcuts.rs)
- [crates/tiara-core/src/schematic_document.rs](../../../crates/tiara-core/src/schematic_document.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Later integration test

Cite `SE-MENU-REDO-001`. Activate the actual control or keyboard route listed above.
Assert the expected visible and document/caller effects; do not stop at a
message or flag. This draft is not yet approved for test derivation.
