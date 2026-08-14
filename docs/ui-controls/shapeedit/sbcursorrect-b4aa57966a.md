# Add cursor sensing rectangle (interactive area)

> Analysis status: Source reviewed for TIARA-diz.6.7.1590.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.TopToolBar.EditorTools.sbCursorRect |
| Control class | TSpeedButton |
| Caption | Add cursor sensing rectangle (interactive area) |
| Hint | Add cursor sensing rectangle (interactive area) |
| Handler name | sbCursorRectClick |
| Handler address | 0179f640 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.TopToolBar.EditorTools.sbCursorRect` |
| Handler node | `function:0179f640` |

## What happens when clicked

Removes all existing cursor-rectangle objects from the document, normalizes the list, installs a new cursor-rectangle drawing tool, and redraws the editor. This allows one replacement rectangle to be drawn.

This control shares the recovered handler with `ShapeEdit.MainMenu.Edit.mnCursorRect`. This article keeps the resource evidence for this control separate.

## Click flow

```mermaid
flowchart TD
    control["Add cursor sensing rectangle (interactive area)"] --> handler["sbCursorRectClick at 0179f640"]
    handler --> step1["Remove existing cursor rectangles"]
    handler --> step2["Install cursor-rectangle tool"]
    handler --> step3["Redraw editor"]
```

## Evidence

- Handler source: [000000000179F640__FUN_0179f640.c](../../../DecompiledSources/Tina16/functions/000000000179F640__FUN_0179f640.c)
- Extracted glyph 1: [0416_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbCursorRect_Glyph_Data.png](../../../glyph/0416_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbCursorRect_Glyph_Data.png)
- Recovered path: The handler identifies objects by class 017ad080, removes and destroys them, calls 01794b80 with a new 00c5ed90 tool object, and invalidates the editor.
- Resource context: The recovered TSpeedButton resource uses caption `Add cursor sensing rectangle (interactive area)` and hint `Add cursor sensing rectangle (interactive area)`. The extracted glyph was visually inspected. It agrees with the recovered resource intent, but the source path remains the behavior proof.

## Analysis limits

- No additional implementation gap was found in the recovered click path.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

