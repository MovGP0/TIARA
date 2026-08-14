# S&upplementary

> Analysis status: Source reviewed for TIARA-diz.6.7.1554.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.View.mnSupplementary |
| Control class | TMenuItem |
| Caption | S&upplementary |
| Hint | Not present in the recovered resource. |
| Handler name | mnSupplementaryClick |
| Handler address | 0179a710 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.View.mnSupplementary` |
| Handler node | `function:0179a710` |

## What happens when clicked

Derives the final state from the menu item or toolbar sender, mirrors it between the menu checked property and toolbar down property, and redraws the editor.

This control shares the recovered handler with `ShapeEdit.TopToolBar.EditorTools.sbSupplementary`. This article keeps the resource evidence for this control separate.

## Click flow

```mermaid
flowchart TD
    control["S&upplementary"] --> handler["mnSupplementaryClick at 0179a710"]
    handler --> step1["Derive final visibility state"]
    handler --> step2["Mirror menu and toolbar"]
    handler --> step3["Redraw editor"]
```

## Evidence

- Handler source: [000000000179A710__FUN_0179a710.c](../../../DecompiledSources/Tina16/functions/000000000179A710__FUN_0179a710.c)
- Extracted glyph: None.
- Recovered path: The shared handler tests Sender, reads or toggles the menu state, updates fields +0x9a8 and +0xab0, and invalidates the editor.
- Resource context: The recovered TMenuItem resource uses caption `S&upplementary`.

## Analysis limits

- No additional implementation gap was found in the recovered click path.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

