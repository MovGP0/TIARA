# Escape while a sheet tool is active

| Field | Value |
| --- | --- |
| Scenario | `SE-KEY-ESCAPE-001` |
| Window / tab | `schematic_editor` |
| Review | Draft |
| Integration | Not derived |
| Defect | TIARA-kgrtjiq |

## Setup

Use a new circuit with one placed resistor. Keep repeated placement active. Give the schematic sheet keyboard focus. Close all menus.
Follow the [shared execution rules](../execution-rules.md).

## Actions

1. Move the placement preview to an empty point.
2. Press Escape once.
3. Click that empty point.
4. Press Escape again.

## Expected results

- Escape cancels the active placement and removes its preview.
- The next sheet click does not add a second resistor.
- The existing resistor remains unchanged. Cancellation does not add an undo entry.
- The second Escape is harmless when no command or menu is active.

## Variants

Repeat with an unfinished wire. Separately open a menu and press Escape: check that the menu closes without an unrelated document edit. Record the required priority between menu cancellation and tool cancellation before automating that combined state.

## Evidence and current result

Manual basis: [TINA v16, section 3.7, PDF page 60](https://www.tina.com/docs/v16/Tina%2016%20QS%20MANUAL%202025.pdf#page=60)
and [section 4.4.1, printed page 61, PDF page 72](https://www.tina.com/docs/v16/Tina%2016%20QS%20MANUAL%202025.pdf#page=72).
These support command cancellation and termination of wiring with Escape.

Live TIARA, 2026-09-22: Escape did not stop placement; the next click placed another resistor. The current application keyboard route has no sheet-tool Escape handling when no menu is open. The combined menu/tool Escape priority is not yet verified in TINA.
These observations do not mean that all actions and variants in this draft
have been executed. Review the unresolved points before deriving tests.

- [crates/tiara-ui/src/application.rs](../../../crates/tiara-ui/src/application.rs)
- [crates/tiara-ui/src/schematic_editor/shortcuts.rs](../../../crates/tiara-ui/src/schematic_editor/shortcuts.rs)
- [crates/tiara-ui/src/schematic_editor/mod.rs](../../../crates/tiara-ui/src/schematic_editor/mod.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Later integration test

Cite `SE-KEY-ESCAPE-001`. Activate the actual control or keyboard route listed above.
Assert the expected visible and document/caller effects; do not stop at a
message or flag. This draft is not yet approved for test derivation.
