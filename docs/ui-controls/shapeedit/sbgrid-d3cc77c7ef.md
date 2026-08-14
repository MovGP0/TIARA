# Grid on/off|Turns the grid on or off in the schematic editor

> Analysis status: Source reviewed for TIARA-diz.6.7.1593.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.TopToolBar.EditorTools.sbGrid |
| Control class | TSpeedButton |
| Caption | Grid on/off\|Turns the grid on or off in the schematic editor |
| Hint | Grid on/off\ |
| Handler name | mnGridClick |
| Handler address | 0179a660 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.TopToolBar.EditorTools.sbGrid` |
| Handler node | `function:0179a660` |

## What happens when clicked

Derives the final grid state from the menu item or toolbar sender, mirrors the state between the menu checked property and toolbar down property, and redraws the editor.

This control shares the recovered handler with `ShapeEdit.MainMenu.View.mnGrid`. This article keeps the resource evidence for this control separate.

## Click flow

```mermaid
flowchart TD
    control["Grid on/off|Turns the grid on or off in the schematic editor"] --> handler["mnGridClick at 0179a660"]
    handler --> step1["Derive final grid state"]
    handler --> step2["Mirror menu and toolbar"]
    handler --> step3["Redraw editor"]
```

## Evidence

- Handler source: [000000000179A660__FUN_0179a660.c](../../../DecompiledSources/Tina16/functions/000000000179A660__FUN_0179a660.c)
- Extracted glyph 1: [0400_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbGrid_Glyph_Data.png](../../../glyph/0400_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbGrid_Glyph_Data.png)
- Recovered path: The shared handler tests Sender, reads or toggles the menu state, calls the recovered checked/down setters for fields +0x6c0 and +0x8d0, and invalidates the editor.
- Resource context: The recovered TSpeedButton resource uses caption `Grid on/off\|Turns the grid on or off in the schematic editor` and hint `Grid on/off\`. The extracted glyph was visually inspected. It agrees with the recovered resource intent, but the source path remains the behavior proof.

## Analysis limits

- No additional implementation gap was found in the recovered click path.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

