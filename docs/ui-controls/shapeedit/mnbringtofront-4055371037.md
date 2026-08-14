# Bring to &Front

> Analysis status: Source reviewed for TIARA-diz.6.7.1529.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.Edit.mnBringtoFront |
| Control class | TMenuItem |
| Caption | Bring to &Front |
| Hint | Not present in the recovered resource. |
| Handler name | mnBringtoFrontClick |
| Handler address | 0179d9f0 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.Edit.mnBringtoFront` |
| Handler node | `function:0179d9f0` |

## What happens when clicked

Normalizes the drawing list, scans it from the end, and moves selected objects to front positions while preserving their relative order. It then redraws the editor.

## Click flow

```mermaid
flowchart TD
    control["Bring to &Front"] --> handler["mnBringtoFrontClick at 0179d9f0"]
    handler --> step1["Normalize drawing list"]
    handler --> step2["Move selected entries to front"]
    handler --> step3["Redraw editor"]
```

## Evidence

- Handler source: [000000000179D9F0__FUN_0179d9f0.c](../../../DecompiledSources/Tina16/functions/000000000179D9F0__FUN_0179d9f0.c)
- Extracted glyph: None.
- Recovered path: The handler tests selection byte +0x21, moves list entries to descending end indexes, normalizes the list, and invalidates the editor.
- Resource context: The recovered TMenuItem resource uses caption `Bring to &Front`.

## Analysis limits

- No additional implementation gap was found in the recovered click path.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

