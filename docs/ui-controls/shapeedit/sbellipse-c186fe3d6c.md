# Ellipse

> Analysis status: Source reviewed for TIARA-diz.6.7.1592.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.TopToolBar.EditorTools.sbEllipse |
| Control class | TSpeedButton |
| Caption | Ellipse |
| Hint | Ellipse |
| Handler name | sbEllipseClick |
| Handler address | 01795ae0 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.TopToolBar.EditorTools.sbEllipse` |
| Handler node | `function:01795ae0` |

## What happens when clicked

Creates the recovered ellipse tool object, installs it as the active ShapeEdit interaction tool, and sets the corresponding toolbar button down. A previous active tool is released by the shared installation path. The shared rectangle-family tool receives mode value 1.

This control shares the recovered handler with `ShapeEdit.MainMenu.mnDraw.mnuEllipse`. This article keeps the resource evidence for this control separate.

## Click flow

```mermaid
flowchart TD
    control["Ellipse"] --> handler["sbEllipseClick at 01795ae0"]
    handler --> step1["Create ellipse tool"]
    handler --> step2["Replace active interaction tool"]
    handler --> step3["Set toolbar button down"]
```

## Evidence

- Handler source: [0000000001795AE0__FUN_01795ae0.c](../../../DecompiledSources/Tina16/functions/0000000001795AE0__FUN_01795ae0.c)
- Extracted glyph 1: [0408_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbEllipse_Glyph_Data.png](../../../glyph/0408_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbEllipse_Glyph_Data.png)
- Recovered path: The handler constructs the ellipse tool class, calls 01794b80 to replace field +0xd20, and updates the recovered speed-button state.
- Resource context: The recovered TSpeedButton resource uses caption `Ellipse` and hint `Ellipse`. The extracted glyph was visually inspected. It agrees with the recovered resource intent, but the source path remains the behavior proof.

## Analysis limits

- No additional implementation gap was found in the recovered click path.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

