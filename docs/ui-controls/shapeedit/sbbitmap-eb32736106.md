# Bitmap

> Analysis status: Source reviewed for TIARA-diz.6.7.1588.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.TopToolBar.EditorTools.sbBitmap |
| Control class | TSpeedButton |
| Caption | Bitmap |
| Hint | Bitmap |
| Handler name | sbBitmapClick |
| Handler address | 0179dfa0 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.TopToolBar.EditorTools.sbBitmap` |
| Handler node | `function:0179dfa0` |

## What happens when clicked

Creates the recovered bitmap tool object, installs it as the active ShapeEdit interaction tool, and sets the corresponding toolbar button down. A previous active tool is released by the shared installation path.

This control shares the recovered handler with `ShapeEdit.MainMenu.mnDraw.mnuBitmap`. This article keeps the resource evidence for this control separate.

## Click flow

```mermaid
flowchart TD
    control["Bitmap"] --> handler["sbBitmapClick at 0179dfa0"]
    handler --> step1["Create bitmap tool"]
    handler --> step2["Replace active interaction tool"]
    handler --> step3["Set toolbar button down"]
```

## Evidence

- Handler source: [000000000179DFA0__FUN_0179dfa0.c](../../../DecompiledSources/Tina16/functions/000000000179DFA0__FUN_0179dfa0.c)
- Extracted glyph 1: [0415_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbBitmap_Glyph_Data.png](../../../glyph/0415_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbBitmap_Glyph_Data.png)
- Recovered path: The handler constructs the bitmap tool class, calls 01794b80 to replace field +0xd20, and updates the recovered speed-button state.
- Resource context: The recovered TSpeedButton resource uses caption `Bitmap` and hint `Bitmap`. The extracted glyph was visually inspected. It agrees with the recovered resource intent, but the source path remains the behavior proof.

## Analysis limits

- No additional implementation gap was found in the recovered click path.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

