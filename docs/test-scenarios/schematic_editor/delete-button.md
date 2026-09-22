# EditorTools.ToolDelete (Delete button)

| Field | Value |
| --- | --- |
| Scenario | `SE-TOOL-DELETE-001` |
| Window / tab | `schematic_editor` |
| Review | Draft |
| Integration | Not derived |
| Defect | TIARA-kgrtjiq; TIARA-0axzpp1 |

## Setup

Use a disposable circuit with two separate resistors. Exit placement. Select only R1. Note both component IDs and positions.
Follow the [shared execution rules](../execution-rules.md).

## Actions

1. Click the upper toolbar Delete button.
2. Inspect the remaining component and selection.
3. Use Edit > Undo.
4. Use Edit > Redo.

## Expected results

- Only R1 is removed. R2 remains unchanged.
- Selection contains no reference to the removed component.
- Undo restores R1 with its identity, position and value.
- Redo removes R1 again. Each command changes the document once.

## Variants

Repeat independently with Edit > Delete and Ctrl+Delete; these are separate input routes, not replacements for the toolbar test. Test no selection and a protected document: no unintended deletion is allowed. Connected-component deletion needs its own reviewed connectivity case.

## Evidence and current result

Manual basis: [TINA v16, section 4.1.1, printed page 50, PDF page 61](https://www.tina.com/docs/v16/Tina%2016%20QS%20MANUAL%202025.pdf#page=61).
The selected-component deletion rule also applies to the equivalent toolbar route.
The manual passage does not establish undo granularity; that remains a separate
TIARA requirement and live-comparison check.

Original TINA: a moved, selected test resistor was removed with Ctrl+Delete. Toolbar dispatch is incomplete in TIARA. This toolbar-specific delete sequence has not yet been run end to end.
These observations do not mean that all actions and variants in this draft
have been executed. Review the unresolved points before deriving tests.

- [crates/tiara-ui/src/schematic_editor/toolbars.rs](../../../crates/tiara-ui/src/schematic_editor/toolbars.rs)
- [crates/tiara-ui/src/schematic_editor/mod.rs](../../../crates/tiara-ui/src/schematic_editor/mod.rs)
- [crates/tiara-core/src/schematic_document.rs](../../../crates/tiara-core/src/schematic_document.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Later integration test

Cite `SE-TOOL-DELETE-001`. Activate the actual control or keyboard route listed above.
Assert the expected visible and document/caller effects; do not stop at a
message or flag. This draft is not yet approved for test derivation.
