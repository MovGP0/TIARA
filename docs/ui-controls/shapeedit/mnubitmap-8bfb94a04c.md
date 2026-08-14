# &Bitmap...

> Analysis status: Source reviewed for TIARA-diz.6.7.1556.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.mnDraw.mnuBitmap |
| Control class | TMenuItem |
| Caption | &Bitmap... |
| Hint | Not present in the recovered resource. |
| Handler name | sbBitmapClick |
| Handler address | 0179dfa0 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.mnDraw.mnuBitmap` |
| Handler node | `function:0179dfa0` |

## What happens when clicked

Creates the recovered bitmap tool object, installs it as the active ShapeEdit interaction tool, and sets the corresponding toolbar button down. A previous active tool is released by the shared installation path.

This control shares the recovered handler with `ShapeEdit.TopToolBar.EditorTools.sbBitmap`. This article keeps the resource evidence for this control separate.

## Click flow

```mermaid
flowchart TD
    control["&Bitmap..."] --> handler["sbBitmapClick at 0179dfa0"]
    handler --> step1["Create bitmap tool"]
    handler --> step2["Replace active interaction tool"]
    handler --> step3["Set toolbar button down"]
```

## Evidence

- Handler source: [000000000179DFA0__FUN_0179dfa0.c](../../../DecompiledSources/Tina16/functions/000000000179DFA0__FUN_0179dfa0.c)
- Extracted glyph: None.
- Recovered path: The handler constructs the bitmap tool class, calls 01794b80 to replace field +0xd20, and updates the recovered speed-button state.
- Resource context: The recovered TMenuItem resource uses caption `&Bitmap...`.

## Analysis limits

- No additional implementation gap was found in the recovered click path.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

