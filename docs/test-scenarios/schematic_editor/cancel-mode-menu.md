# Context menu > Cancel Mode

| Field | Value |
| --- | --- |
| Scenario | `SE-POPUP-CANCEL-001` |
| Window / tab | `schematic_editor` |
| Review | Draft |
| Integration | Not derived |
| Defect | TIARA-kgrtjiq |

## Setup

Use a disposable circuit with one resistor. Keep placement active and position
the preview over empty space. Follow the [execution rules](../execution-rules.md).

## Actions

1. Right-click the sheet.
2. Select Cancel Mode from the context menu.
3. Click empty space, then select the existing resistor.
4. Repeat independently with an unfinished wire.

## Expected results

- The context menu is accessible and the active command ends when Cancel Mode
  is chosen.
- No preview is committed. Existing document objects remain available for editing.
- The next click does not continue the cancelled operation.

## Variants

Repeat with no active command. Keep Escape and the Edit toolbar button as
separate input-path scenarios. If a context menu is unavailable, record failure;
do not substitute a direct cancel-handler call.

## Evidence and current result

Manual basis: [TINA v16, section 4.1.1, printed page 50, PDF page 61](https://www.tina.com/docs/v16/Tina%2016%20QS%20MANUAL%202025.pdf#page=61).
Live TIARA right-click had no effect on 2026-09-22. The complete context-menu
sequence was not run in original TINA during this session.
The current [sheet mouse area](../../../crates/tiara-ui/src/schematic_editor/mod.rs)
does not install a right-click callback.

## Reset

Discard this disposable circuit only. Close its popup and restore the prior
test settings. Preserve the user's circuits and windows.

## Later integration test

Cite `SE-POPUP-CANCEL-001`. Use right-click and the actual popup item, then
assert the tool state, document and subsequent click behavior. Review this
draft before deriving the integration test.
