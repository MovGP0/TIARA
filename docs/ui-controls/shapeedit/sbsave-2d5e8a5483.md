# Save

> Analysis status: Source reviewed for TIARA-diz.6.7.1607.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.TopToolBar.GeneralTools.sbSave |
| Control class | TSpeedButton |
| Caption | Save |
| Hint | Save |
| Handler name | SaveClick |
| Handler address | 01795cf0 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.TopToolBar.GeneralTools.sbSave` |
| Handler node | `function:01795cf0` |

## What happens when clicked

Validates the current device. If the current name is NONAME.DDB, it shows the save dialog; cancel stops the save. Otherwise it writes to the current path. A successful write clears the dirty flag, stores the chosen path, and updates the interface.

This control shares the recovered handler with `ShapeEdit.MainMenu.mnFile.Save`. This article keeps the resource evidence for this control separate.

## Click flow

```mermaid
flowchart TD
    control["Save"] --> handler["SaveClick at 01795cf0"]
    handler --> step1["Validate current device"]
    handler --> step2["Unnamed: request path"]
    handler --> step3["Cancel or invalid: stop"]
    handler --> step4["Write DDB file"]
    handler --> step5["Clear dirty state"]
```

## Evidence

- Handler source: [0000000001795CF0__FUN_01795cf0.c](../../../DecompiledSources/Tina16/functions/0000000001795CF0__FUN_01795cf0.c)
- Extracted glyph 1: [0419_ShapeEdit_ShapeEdit_TopToolBar_GeneralTools_sbSave_Glyph_Data.png](../../../glyph/0419_ShapeEdit_ShapeEdit_TopToolBar_GeneralTools_sbSave_Glyph_Data.png)
- Recovered path: The handler calls 01795eb0 with Save As flag 0. That helper calls 0179d460, tests NONAME.DDB, conditionally shows the save dialog, calls 017963e0 to write, clears dirty state, stores the path, and updates the UI.
- Resource context: The recovered TSpeedButton resource uses caption `Save` and hint `Save`. The extracted glyph was visually inspected. It agrees with the recovered resource intent, but the source path remains the behavior proof.

## Analysis limits

- No additional implementation gap was found in the recovered click path.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

