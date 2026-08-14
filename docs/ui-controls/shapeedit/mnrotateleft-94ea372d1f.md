# Rotate &Left

> Analysis status: Source reviewed for TIARA-diz.6.7.1536.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.Edit.mnRotateLeft |
| Control class | TMenuItem |
| Caption | Rotate &Left |
| Hint | Not present in the recovered resource. |
| Handler name | sbRLeftClick |
| Handler address | 01794980 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.Edit.mnRotateLeft` |
| Handler node | `function:01794980` |

## What happens when clicked

Collects selected objects, or the temporary objects while an active interaction tool is present. It records undo state for normal document objects, marks the document dirty, invokes each object's left-rotation virtual method around the derived pivot, and redraws. With no eligible object, it exits without a transform.

This control shares the recovered handler with `ShapeEdit.TopToolBar.EditorTools.sbRLeft`. This article keeps the resource evidence for this control separate.

## Click flow

```mermaid
flowchart TD
    control["Rotate &Left"] --> handler["sbRLeftClick at 01794980"]
    handler --> step1["Collect rotation targets"]
    handler --> step2["No target: stop"]
    handler --> step3["Record undo and mark dirty"]
    handler --> step4["Rotate left around pivot"]
    handler --> step5["Redraw editor"]
```

## Evidence

- Handler source: [0000000001794980__FUN_01794980.c](../../../DecompiledSources/Tina16/functions/0000000001794980__FUN_01794980.c)
- Extracted glyph: None.
- Recovered path: The handler calls 017946f0 with direction flag 1. That helper gathers the target list, derives a pivot, creates an undo command for normal objects, calls virtual slot +0x60, sets the dirty flag, and invalidates the editor.
- Resource context: The recovered TMenuItem resource uses caption `Rotate &Left`.

## Analysis limits

- No additional implementation gap was found in the recovered click path.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

