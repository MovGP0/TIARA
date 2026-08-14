# &Arc

> Analysis status: Source reviewed for TIARA-diz.6.7.1555.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.mnDraw.mnuArc |
| Control class | TMenuItem |
| Caption | &Arc |
| Hint | Not present in the recovered resource. |
| Handler name | sbArcClick |
| Handler address | 01795b30 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.mnDraw.mnuArc` |
| Handler node | `function:01795b30` |

## What happens when clicked

Creates the recovered arc tool object, installs it as the active ShapeEdit interaction tool, and sets the corresponding toolbar button down. A previous active tool is released by the shared installation path. The shared rectangle-family tool receives mode value 2.

This control shares the recovered handler with `ShapeEdit.TopToolBar.EditorTools.sbArc`. This article keeps the resource evidence for this control separate.

## Click flow

```mermaid
flowchart TD
    control["&Arc"] --> handler["sbArcClick at 01795b30"]
    handler --> step1["Create arc tool"]
    handler --> step2["Replace active interaction tool"]
    handler --> step3["Set toolbar button down"]
```

## Evidence

- Handler source: [0000000001795B30__FUN_01795b30.c](../../../DecompiledSources/Tina16/functions/0000000001795B30__FUN_01795b30.c)
- Extracted glyph: None.
- Recovered path: The handler constructs the arc tool class, calls 01794b80 to replace field +0xd20, and updates the recovered speed-button state.
- Resource context: The recovered TMenuItem resource uses caption `&Arc`.

## Analysis limits

- No additional implementation gap was found in the recovered click path.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

