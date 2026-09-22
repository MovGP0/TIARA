# EditorTools.ToolEdit (Editing tool button)

| Field | Value |
| --- | --- |
| Scenario | `SE-TOOL-EDIT-001` |
| Window / tab | `schematic_editor` |
| Review | Draft |
| Integration | Not derived |
| Defect | TIARA-kgrtjiq |

## Setup

Place one resistor in a new circuit. Keep repeated component placement active. Note the component count and undo history.
Follow the [shared execution rules](../execution-rules.md).

## Actions

1. Click the upper toolbar Editing tool button.
2. Click an empty point on the sheet.
3. Click the existing resistor.
4. Drag the selected resistor to a different grid point and release it.

## Expected results

- The placement preview disappears and the edit/select tool becomes active.
- Clicking empty space does not add a component or an undo entry.
- The existing resistor becomes selected.
- Dragging changes the position of that same resistor. Its identity and value do not change. A completed move produces one undoable edit.

## Variants

Repeat while a wire is unfinished and while no command is active. An unfinished preview must be cancelled without adding a partial object. Clicking an already active Edit tool must not change the circuit.

## Evidence and current result

Manual basis: [TINA v16, section 4.3 toolbar, printed page 56, PDF page 67](https://www.tina.com/docs/v16/Tina%2016%20QS%20MANUAL%202025.pdf#page=67).
Use its selection and drag behavior; selection color is a TIARA theme decision.

Live TIARA: clicking this button displayed its recovered handler in the status line but did not leave placement. Original TINA allowed moving a selected resistor by dragging. The reviewed ToolEdit article confirms that the original handler ends the current command and activates editing.
These observations do not mean that all actions and variants in this draft
have been executed. Review the unresolved points before deriving tests.

- [docs/ui-controls/schematiceditor/tooledit-8223e8d2d9.md](../../ui-controls/schematiceditor/tooledit-8223e8d2d9.md)
- [crates/tiara-ui/src/schematic_editor/mod.rs](../../../crates/tiara-ui/src/schematic_editor/mod.rs)
- [crates/tiara-ui/src/schematic_editor/toolbars.rs](../../../crates/tiara-ui/src/schematic_editor/toolbars.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Later integration test

Cite `SE-TOOL-EDIT-001`. Activate the actual control or keyboard route listed above.
Assert the expected visible and document/caller effects; do not stop at a
message or flag. This draft is not yet approved for test derivation.
