# EditorTools.ToolWire (Wire button)

| Field | Value |
| --- | --- |
| Scenario | `SE-TOOL-WIRE-001` |
| Window / tab | `schematic_editor` |
| Review | Draft |
| Integration | Not derived |
| Defect | TIARA-kgrtjiq |

## Setup

Use a disposable circuit with two resistors and no wires. Identify one free terminal on each resistor. Leave enough space to see the complete wire. Exit placement.
Follow the [shared execution rules](../execution-rules.md).

## Actions

1. Click the Wire toolbar button.
2. Press on the first free terminal. Drag to the second free terminal and release.
3. Inspect both ends and the complete wire path.
4. Activate Wire again, begin another wire, and cancel it before completion.

## Expected results

- The active tool changes to Wire, not component placement.
- A wire joins the two selected terminals. No component is added.
- The full path is visible and both wire endpoints match their terminals. Connectivity agrees with the visible connection.
- Cancellation removes only the unfinished preview. The completed wire remains and no extra wire is committed.

## Variants

Repeat with two endpoint clicks instead of dragging. Also test Insert > Wire
and Space as separate activation routes. Check horizontal and vertical segments,
an unconnected endpoint, cancellation with Escape, and zoom changes. Complex
bend editing needs a separate scenario; this case does not define that gesture.

## Evidence and current result

Manual basis: [TINA v16, section 4.4.1, printed pages 60-61, PDF pages 71-72](https://www.tina.com/docs/v16/Tina%2016%20QS%20MANUAL%202025.pdf#page=71).
It establishes both endpoint gestures, the Space shortcut and cancellation.

The recovered toolbar description says to click and drag to place a wire. Current TIARA toolbar dispatch and sheet drag/release handling are incomplete. Current drawing uses a dash at the wire start. The complete drag-to-connect procedure has not yet been verified in TINA.
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

Cite `SE-TOOL-WIRE-001`. Activate the actual control or keyboard route listed above.
Assert the expected visible and document/caller effects; do not stop at a
message or flag. This draft is not yet approved for test derivation.
