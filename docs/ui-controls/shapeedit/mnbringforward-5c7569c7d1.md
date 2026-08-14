# B&ring Forward

> Analysis status: Source reviewed for TIARA-diz.6.7.1528.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.Edit.mnBringForward |
| Control class | TMenuItem |
| Caption | B&ring Forward |
| Hint | Not present in the recovered resource. |
| Handler name | mnBringForwardClick |
| Handler address | 0179dad0 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.Edit.mnBringForward` |
| Handler node | `function:0179dad0` |

## What happens when clicked

Scans the drawing list from back to front. When a selected object has an unselected object immediately after it, the handler swaps the pair. Each eligible selected object moves forward by one layer, and the editor is redrawn.

## Click flow

```mermaid
flowchart TD
    control["B&ring Forward"] --> handler["mnBringForwardClick at 0179dad0"]
    handler --> step1["Scan adjacent objects back to front"]
    handler --> step2["Selected before unselected: swap"]
    handler --> step3["Redraw editor"]
```

## Evidence

- Handler source: [000000000179DAD0__FUN_0179dad0.c](../../../DecompiledSources/Tina16/functions/000000000179DAD0__FUN_0179dad0.c)
- Extracted glyph: None.
- Recovered path: The handler reads selection byte +0x21 for adjacent list entries, calls the list exchange method for selected/unselected pairs, then invalidates the editor.
- Resource context: The recovered TMenuItem resource uses caption `B&ring Forward`.

## Analysis limits

- No additional implementation gap was found in the recovered click path.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

