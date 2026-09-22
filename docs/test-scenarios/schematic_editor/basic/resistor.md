# Basic component tab > Resistor palette button

| Field | Value |
| --- | --- |
| Scenario | `SE-BASIC-RESISTOR-001` |
| Window / tab | `schematic_editor/basic` |
| Review | Draft |
| Integration | Not derived |
| Defect | TIARA-cfvte30; TIARA-kgrtjiq |

## Setup

Use a new, empty circuit. Set zoom to 100%. Load the installed TINA symbol library. Show the Basic component tab. Enable View > Values and record the chosen symbol standard (DIN or ANSI).
Follow the [shared execution rules](../../execution-rules.md).

## Actions

1. Hover the Resistor palette button.
2. Click the button. Move the pointer onto the sheet without clicking.
3. Click one grid point. Move the pointer away from that point.
4. Use the Edit tool to stop placement. Inspect the placed component.

## Expected results

- The palette button has a readable TIARA icon and a Resistor tooltip.
- A placement preview follows the pointer. It contains the resistor symbol and terminal locations.
- One resistor is added at the selected grid point. Its body and terminals are visible. Its reference and value are readable and are separate from the symbol.
- Stopping placement does not delete the resistor or add another component.

## Variants

Repeat at 50%, 100%, and 200% zoom, in light and dark themes. Test rotation and mirroring with an asymmetric component in a separate scenario. With no symbol library, require a clear unavailable-symbol indication; do not treat name-only text as a successfully rendered symbol.

Repeat with View > Values disabled: the value is hidden, but the symbol remains.
Place off-grid and check the terminal snapping separately from label placement.

## Evidence and current result

Manual basis: [TINA v16, section 4.4, printed pages 59-60, PDF pages 70-71](https://www.tina.com/docs/v16/Tina%2016%20QS%20MANUAL%202025.pdf#page=70).
This supplies the grid, label and value-display rules, not the new icon design.

Live comparison, 2026-09-22: TINA drew a resistor body, terminal marks, R1 and 1k. TIARA drew only Resistor and Resistor1. The exact TIARA reference/value policy and preview geometry still need review.
These observations do not mean that all actions and variants in this draft
have been executed. Review the unresolved points before deriving tests.

- [crates/tiara-ui/src/schematic_editor/mod.rs](../../../../crates/tiara-ui/src/schematic_editor/mod.rs)
- [crates/tiara-core/src/symbol_library.rs](../../../../crates/tiara-core/src/symbol_library.rs)
- [crates/tiara-ui/src/shared/component_glyphs.rs](../../../../crates/tiara-ui/src/shared/component_glyphs.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Later integration test

Cite `SE-BASIC-RESISTOR-001`. Activate the actual control or keyboard route listed above.
Assert the expected visible and document/caller effects; do not stop at a
message or flag. This draft is not yet approved for test derivation.
