# Component icons

These 253 SVG files are original TIARA artwork under the repository's MIT
license. They cover all 270 button entries in the checked TINA 16 Demo registry.
Each SVG keeps its SPDX MIT comment and declares the Dublin Core license
attribute `dct:license="https://github.com/MovGP0/TIARA/blob/main/LICENSE"`
with `xmlns:dct="http://purl.org/dc/terms/"`.
Repeated buttons use the same file. The bitmap strip has 252 tiles; the number
of tiles is not the number of registry IDs.

The drawings use conventional circuit symbols, simple device outlines, and
short labels for integrated circuits. They are drawn on a 32-unit grid with
rounded 1.6-unit strokes. Letters are paths, so the icons need no fonts. There
are no embedded bitmaps, external resources, or installation files. The SVG
background is transparent. The editor applies the theme text color to the
icons so they remain visible in light, dark, and custom themes.

Open [index.html](index.html) to search the complete set and inspect each icon
at its 29-pixel toolbar size on light and dark backgrounds.

## Edit and build

Edit the geometry and explicit ID assignments in
[`analysis/Generate-ComponentGlyphs.py`](../../analysis/Generate-ComponentGlyphs.py).
Run it from the repository root to rebuild the SVG files, manifest, and preview:

```text
python analysis/Generate-ComponentGlyphs.py
python analysis/Generate-ComponentGlyphs.py --check
```

The generator reads no installed data. The installed strip was used only as a
visual reference for component types; its pixels and contours are not inputs
to the generator. Manufacturer boards use neutral board symbols, not logos.
Related devices share geometry when they have the same circuit symbol.

`manifest.json` maps each registry ID to its filename and design family. Normal
registry IDs are unchanged. Other characters use uppercase UTF-8 percent
encoding, for example `EEPROM/ROM` maps to `EEPROM%2FROM.svg`. Spaces remain
spaces. This keeps each icon in one file on Windows.

## Use and package

Keep this folder at `glyph/components` in the working directory, or copy it to
`glyph/components` beside the application. Set `TIARA_GLYPHS` to the parent
`glyph` folder to use another location. Restart after an edit. Valid SVG files
override packaged SVG defaults individually. Missing or invalid files keep the
packaged SVG; unknown components show a text label. Bitmaps are never used.

Only this original `components` folder is needed for these icons. Do not
package the recovered images in the parent `glyph` folder with it.
