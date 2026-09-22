# Editable vector icons only

| Field | Value |
| --- | --- |
| Scenario | `SE-VISUAL-SVG-ONLY-001` |
| Review | Reviewed for the icon implementation, 2026-09-22 |
| Requirement basis | Explicit user requirement: new editable SVG icons; no bitmap icons |
| Defects | TIARA-7rygkc8; TIARA-wu1i8ma |

## Setup

Use a new circuit and a disposable glyph override directory. Preserve the real
installation and glyph files. Record theme and display scale. Raster pictures
opened as user document content are outside this icon requirement.

## Actions and expected results

1. Start TIARA from the checkout. Inspect all command toolbar buttons and menu
   entries. Every mapped command shows a TIARA SVG icon; equivalent toolbar and
   menu commands use the same design. Tooltips identify icon-only buttons.
2. Inspect every installed component category. Every known registry entry uses
   its own component SVG. No COMPREGE.BMP tile is read by the UI.
3. Start from a directory with no glyph assets or installation. Packaged command
   SVGs still render. Known component drawings remain available without a bitmap.
4. Set TIARA_GLYPHS to an otherwise empty directory with one edited command SVG
   and one edited component SVG. Restart. Only those drawings change; the other
   icons retain their packaged SVG defaults.
5. Supply PNG/BMP files, malformed SVG, or SVG with an embedded raster image as
   overrides. Restart. These files must not become application icons; retain the
   packaged SVG or readable text when no known vector exists.
6. Inspect light/dark themes, enabled/disabled commands and multiple display
   scales. Icons remain readable, correctly sized and correctly associated with
   their commands. Changing an icon must not change command eligibility.
7. Parse each shipped SVG as XML. Its root declares
   `xmlns:dct="http://purl.org/dc/terms/"` and
   `dct:license="https://github.com/MovGP0/TIARA/blob/main/LICENSE"`.
   Keep the `SPDX-License-Identifier: MIT` comment. The component generator
   must produce the same metadata.

## Reset and later tests

Restore environment variables and remove only the disposable overrides. Derive
asset coverage, override validation and UI rendering tests from this ID. Do not
count a successful command dispatch as proof that its icon rendered.

## Execution evidence, 2026-09-22

The rebuilt application was launched with a new, empty circuit. The default
dark theme showed the new command toolbar and component palette icons.
Keyboard navigation opened Edit, Help and View. All visible command icons
rendered; Edit showed dimmed disabled icons, and View showed SVG check marks.
Submenu arrows also rendered. The known Help menu offset remains under
TIARA-d7vjohb and is not an icon fix.

All four workspace quality gates passed, with 6,787 tests. The run included
the installed TINA registry. Asset tests cover all 270 registry entries,
command menu/toolbar mappings, per-file overrides, rejected bitmap wrappers,
and SPDX plus the exact requested Dublin Core license metadata.
The component generator check passed for all 253 component SVGs.

This is not complete execution of every visual variant. Light-theme rendering,
alternate display scales and a live partial-override restart still need manual
checks. Override behavior is covered by automated loader tests. The new
command preview gallery provides both light and dark surfaces for review.
