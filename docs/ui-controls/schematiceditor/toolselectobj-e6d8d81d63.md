# Select control object|Select the object of parameter stepping or optimization

> Analysis status: Individually reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.TopToolBar.EditorTools.ToolSelectObj |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Select control object\|Select the object of parameter stepping or optimization |
| Text | Not present in the recovered resource. |
| Handler name | ToolSelectObjClick |
| Handler address | 01c74820 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.TopToolBar.EditorTools.ToolSelectObj` |
| Handler node | `function:01c74820` |
| Graph layer | UI |

## What happens when clicked

If the command can be changed, the handler constructs a control-object selection command, replaces the current command, and activates its toolbar button.

## Click flow

```mermaid
flowchart TD
    control["Select control object|Select the object of parameter stepping or optimization"] -->|"OnClick"| handler["ToolSelectObjClick (01c74820)"]
    handler --> guard{"Command change allowed?"}
    guard -->|"No"| noChange["Keep current command"]
    guard -->|"Yes"| action["Activate control-object selector"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C74820__FUN_01c74820.c](../../../DecompiledSources/Tina16/functions/0000000001C74820__FUN_01c74820.c)
- Recovered role: Activate optimization control-object selection.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.TopToolBar.EditorTools.ToolSelectObj.OnClick.
- Current graph behavior: If the command can be changed, the handler constructs a control-object selection command, replaces the current command, and activates its toolbar button.
- Current graph evidence: The recovered body mirrors ToolOptTargetClick but constructs a different selector class and activates ToolSelectObj. The Select Control Object menu delegates to this control.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:01364e80` — FUN_01364e80
- `function:01c6cee0` — FUN_01c6cee0
- `function:01c6d670` — FUN_01c6d670

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0331_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolSelectObj_Glyph_Data.png`](../../../glyph/0331_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolSelectObj_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The selector class name is not present in the recovered symbols.

