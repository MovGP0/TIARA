# Tools menu root (mnTools)

| Field | Value |
| --- | --- |
| Scenario | `SE-MENU-TOOLS-001` |
| Window / tab | `schematic_editor` |
| Review | Draft |
| Integration | Not derived |
| Defect | TIARA-d7vjohb |

## Setup

Open the schematic editor at a recorded window size and display scale. Keep a test circuit unchanged throughout this navigation test.
Follow the [shared execution rules](../execution-rules.md).

## Actions

1. Click Tools with the pointer.
2. Close it, open Edit, then move the pointer along the menu bar onto Tools.
3. Move down through the Tools items to PCB Tools.
4. Move across into the submenu, then along its child entries without clicking a command.
5. Press Escape until all menus close.

## Expected results

- The Tools panel opens immediately below the Tools button, using its actual rendered bounds.
- Moving from another root opens the correct panel without an increasing horizontal offset.
- The submenu opens beside its parent row, not at the top of the root panel.
- The submenu stays open while the pointer is inside it. No underlying toolbar tooltip or sheet action is triggered through the menu.
- Escape closes menus without changing the circuit.

## Variants

Repeat at 100%, 125%, 150% and 200% display scale and at narrow and wide window sizes. Near a screen edge, the entire menu must remain accessible. Repeat using keyboard menu navigation.

## Evidence and current result

Live TIARA, 2026-09-22: Tools caption was near x327 but the panel began near x391. Original TINA aligned its Tools panel with the root button. Source uses estimated character widths instead of measured button bounds. The complete PCB Tools child traversal is a specified regression test, not a claimed pass.
These observations do not mean that all actions and variants in this draft
have been executed. Review the unresolved points before deriving tests.

- [crates/tiara-ui/src/schematic_editor/menu.rs](../../../crates/tiara-ui/src/schematic_editor/menu.rs)
- [crates/tiara-ui/src/schematic_editor/mod.rs](../../../crates/tiara-ui/src/schematic_editor/mod.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Later integration test

Cite `SE-MENU-TOOLS-001`. Activate the actual control or keyboard route listed above.
Assert the expected visible and document/caller effects; do not stop at a
message or flag. This draft is not yet approved for test derivation.
