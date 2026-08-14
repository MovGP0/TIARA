# &Line

> Analysis status: Source reviewed for TIARA-diz.6.7.1559.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.mnDraw.mnuLine |
| Control class | TMenuItem |
| Caption | &Line |
| Hint | Not present in the recovered resource. |
| Handler name | sbLineClick |
| Handler address | 01795930 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.mnDraw.mnuLine` |
| Handler node | `function:01795930` |

## What happens when clicked

Creates the recovered line tool object, installs it as the active ShapeEdit interaction tool, and sets the corresponding toolbar button down. A previous active tool is released by the shared installation path.

This control shares the recovered handler with `ShapeEdit.TopToolBar.EditorTools.sbLine`. This article keeps the resource evidence for this control separate.

## Click flow

```mermaid
flowchart TD
    control["&Line"] --> handler["sbLineClick at 01795930"]
    handler --> step1["Create line tool"]
    handler --> step2["Replace active interaction tool"]
    handler --> step3["Set toolbar button down"]
```

## Evidence

- Handler source: [0000000001795930__FUN_01795930.c](../../../DecompiledSources/Tina16/functions/0000000001795930__FUN_01795930.c)
- Extracted glyph: None.
- Recovered path: The handler constructs the line tool class, calls 01794b80 to replace field +0xd20, and updates the recovered speed-button state.
- Resource context: The recovered TMenuItem resource uses caption `&Line`.

## Analysis limits

- No additional implementation gap was found in the recovered click path.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

