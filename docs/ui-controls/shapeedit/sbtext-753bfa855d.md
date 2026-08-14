# Text

> Analysis status: Source reviewed for TIARA-diz.6.7.1602.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.TopToolBar.EditorTools.sbText |
| Control class | TSpeedButton |
| Caption | Text |
| Hint | Text |
| Handler name | sbTextClick |
| Handler address | 01797e40 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.TopToolBar.EditorTools.sbText` |
| Handler node | `function:01797e40` |

## What happens when clicked

Creates the recovered text tool object, installs it as the active ShapeEdit interaction tool, and sets the corresponding toolbar button down. A previous active tool is released by the shared installation path.

This control shares the recovered handler with `ShapeEdit.MainMenu.mnDraw.mnuText`. This article keeps the resource evidence for this control separate.

## Click flow

```mermaid
flowchart TD
    control["Text"] --> handler["sbTextClick at 01797e40"]
    handler --> step1["Create text tool"]
    handler --> step2["Replace active interaction tool"]
    handler --> step3["Set toolbar button down"]
```

## Evidence

- Handler source: [0000000001797E40__FUN_01797e40.c](../../../DecompiledSources/Tina16/functions/0000000001797E40__FUN_01797e40.c)
- Extracted glyph 1: [0404_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbText_Glyph_Data.png](../../../glyph/0404_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbText_Glyph_Data.png)
- Recovered path: The handler constructs the text tool class, calls 01794b80 to replace field +0xd20, and updates the recovered speed-button state.
- Resource context: The recovered TSpeedButton resource uses caption `Text` and hint `Text`. The extracted glyph was visually inspected. It agrees with the recovered resource intent, but the source path remains the behavior proof.

## Analysis limits

- No additional implementation gap was found in the recovered click path.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

