# Command icons

These 79 editable SVGs are original TIARA artwork under the repository MIT
license. Each icon uses a 24-unit grid and rounded 1.7-unit strokes. No icon
contains bitmap data, traced raster contours, fonts, or external resources.

Each SVG keeps its SPDX MIT comment and declares:

```xml
xmlns:dct="http://purl.org/dc/terms/"
dct:license="https://github.com/MovGP0/TIARA/blob/main/LICENSE"
```

The manifest maps stable menu and toolbar control keys to shared drawings.
The application packages the SVG files through
[`icon_catalog.rs`](../../crates/tiara-ui/src/shared/icon_catalog.rs).
Menu check marks and submenu arrows also use SVG.

## Edit and use

Edit the individual SVG files. Restart TIARA to read the changes. The loader
checks these locations, from lowest to highest priority:

1. Packaged SVG defaults.
2. `glyph/commands` beside the executable.
3. `glyph/commands` in the working directory.
4. `commands` under the folder named by `TIARA_GLYPHS`.

Overrides replace individual icons. Missing, invalid, or raster-containing
files leave the packaged SVG in place. Unknown commands keep readable text.
The renderer applies the UI text color, including the disabled state.
SVG overrides support basic vector shapes and groups; scripts, raster images,
external references and CSS resource URLs are not supported.

For a new icon, add its SVG, its manifest name and the packaged catalog entry.
Update the stable control mapping where required, then build and test.
Existing command dispatch and eligibility rules are not changed by this set.

Open [index.html](index.html) to inspect all designs on light and dark surfaces.
