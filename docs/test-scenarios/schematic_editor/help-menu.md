# Help root and Help > DesignSoft on the Web submenu

| Field | Value |
| --- | --- |
| Scenario | `SE-MENU-HELP-001` |
| Window / tab | `schematic_editor` |
| Review | Draft |
| Integration | Not derived |
| Defect | TIARA-d7vjohb |

## Setup

Open the schematic editor with a disposable circuit. Record window size, theme and display scale. This test must not launch an external web page.
Follow the [shared execution rules](../execution-rules.md).

## Actions

1. Open a menu, then hover the Help root.
2. Move into DesignSoft on the Web.
3. Move horizontally into a visible child entry. Move between the child entries.
4. Move back to the parent and repeat entry into the submenu.
5. Press Escape to close the menu.

## Expected results

- The Help panel is directly below the Help button.
- The web submenu is vertically aligned with DesignSoft on the Web.
- Entering a child does not close the submenu. Parent and child hover states remain consistent.
- Returning to the parent and entering again remains possible with no pointer gap.
- Hovering sends no command, opens no browser and changes no circuit data.

## Variants

Test movement near submenu edges, slow and fast entry, display scaling and right-edge placement. Test any deeper submenu with its own path. Do not use a web command click merely to prove hover navigation.

## Evidence and current result

Live TIARA: Help began near x367, but its panel began at x439. The web submenu opened at the top of the parent panel, then disappeared as the pointer entered a child. Original TINA Help aligned beneath its root. menu::line sends MenuEntryHovered for every leaf; the update handler clears open_menu.inside.
These observations do not mean that all actions and variants in this draft
have been executed. Review the unresolved points before deriving tests.

- [crates/tiara-ui/src/schematic_editor/menu.rs](../../../crates/tiara-ui/src/schematic_editor/menu.rs)
- [crates/tiara-ui/src/schematic_editor/mod.rs](../../../crates/tiara-ui/src/schematic_editor/mod.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Later integration test

Cite `SE-MENU-HELP-001`. Activate the actual control or keyboard route listed above.
Assert the expected visible and document/caller effects; do not stop at a
message or flag. This draft is not yet approved for test derivation.
