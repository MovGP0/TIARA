# Snap on/off

> Analysis status: Source reviewed for TIARA-diz.6.7.1600.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.TopToolBar.EditorTools.sbSnap |
| Control class | TSpeedButton |
| Caption | Snap on/off |
| Hint | Snap on/off |
| Handler name | mnSnapClick |
| Handler address | 0179a600 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.TopToolBar.EditorTools.sbSnap` |
| Handler node | `function:0179a600` |

## What happens when clicked

Derives the final snap state from the menu item or toolbar sender, mirrors the state between the menu checked property and toolbar down property, and redraws the editor.

This control shares the recovered handler with `ShapeEdit.MainMenu.View.mnSnap`. This article keeps the resource evidence for this control separate.

## Click flow

```mermaid
flowchart TD
    control["Snap on/off"] --> handler["mnSnapClick at 0179a600"]
    handler --> step1["Derive final snap state"]
    handler --> step2["Mirror menu and toolbar"]
    handler --> step3["Redraw editor"]
```

## Evidence

- Handler source: [000000000179A600__FUN_0179a600.c](../../../DecompiledSources/Tina16/functions/000000000179A600__FUN_0179a600.c)
- Extracted glyph 1: [0411_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbSnap_Glyph_Data.png](../../../glyph/0411_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbSnap_Glyph_Data.png)
- Recovered path: The shared handler tests Sender, reads or toggles the menu state, updates fields +0x990 and +0x998 through recovered checked/down setters, and invalidates the editor.
- Resource context: The recovered TSpeedButton resource uses caption `Snap on/off` and hint `Snap on/off`. The extracted glyph was visually inspected. It agrees with the recovered resource intent, but the source path remains the behavior proof.

## Analysis limits

- No additional implementation gap was found in the recovered click path.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

