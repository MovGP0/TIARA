# Command toolbar buttons and their applicable menu entries

| Field | Value |
| --- | --- |
| Scenario | `SE-VISUAL-COMMAND-ICONS-001` |
| Window / tab | `schematic_editor` |
| Review | Draft |
| Integration | Not derived |
| Defect | TIARA-wu1i8ma |

## Setup

Use the TIARA-owned glyph directory. Record theme and display scale. Use a new circuit, then a circuit with a selection and undo history to obtain both enabled and disabled states.
Follow the [shared execution rules](../execution-rules.md).

## Actions

1. Inspect each visible upper command toolbar button and record its stable control name.
2. Hover each button and compare its icon, tooltip and command meaning.
3. Open each menu and inspect the corresponding command entries.
4. Repeat in light and dark themes and at the supported display scales.

## Expected results

- Each command covered by the artwork design has a readable TIARA-owned icon. It does not silently display an extracted original bitmap.
- Toolbar and menu representations of the same command have the same meaning and consistent artwork.
- Disabled controls remain identifiable and visibly disabled. Icon changes do not enable a disabled action.
- No image is blank, clipped or confused with a neighboring command.

## Variants

Test missing optional glyph files and require a packaged SVG or readable text,
never a bitmap. Separators and menu roots need no arbitrary icon. Record every
applicable command as a separate inventory row; this shared visual procedure
does not replace its functional button scenario. See the reviewed
[vector-only scenario](vector-icons-only.md).

## Evidence and current result

Live TIARA: the component palette used the new SVGs, but the command toolbar used old raster images and menu items had no images. The inspected original TINA menus were also text-only. Menu artwork is a TIARA design requirement, not an observed TINA parity rule.
These observations do not mean that all actions and variants in this draft
have been executed. Review the unresolved points before deriving tests.

- [crates/tiara-ui/src/shared/glyphs.rs](../../../crates/tiara-ui/src/shared/glyphs.rs)
- [crates/tiara-ui/src/shared/component_glyphs.rs](../../../crates/tiara-ui/src/shared/component_glyphs.rs)
- [crates/tiara-ui/src/schematic_editor/menu.rs](../../../crates/tiara-ui/src/schematic_editor/menu.rs)
- [crates/tiara-ui/src/schematic_editor/mod.rs](../../../crates/tiara-ui/src/schematic_editor/mod.rs)

## Reset

Discard only this scenario's disposable circuit and temporary files. Close its
menus and dialogs. Restore any settings changed during the test. Do not modify
another open circuit. Use a fresh fixture for each independent input route.

## Later integration test

Cite `SE-VISUAL-COMMAND-ICONS-001`. Activate the actual control or keyboard route listed above.
Assert the expected visible and document/caller effects; do not stop at a
message or flag. This draft is not yet approved for test derivation.
