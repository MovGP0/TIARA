# Grid On/Off|Turns the grid on or off in the schematic editor

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.TopToolBar.EditorTools.ToolGrid |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Grid On/Off\|Turns the grid on or off in the schematic editor |
| Text | Not present in the recovered resource. |
| Handler name | ToolGridClick |
| Handler address | 01c73f30 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.TopToolBar.EditorTools.ToolGrid` |
| Handler node | `function:01c73f30` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Grid On/Off|Turns the grid on or off in the schematic editor"] -->|OnClick| handler["FUN_01c73f30"]
    handler --> call1["FUN_01995220"]
    handler --> call2["FUN_01995280"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C73F30__FUN_01c73f30.c](../../../DecompiledSources/Tina16/functions/0000000001C73F30__FUN_01c73f30.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.TopToolBar.EditorTools.ToolGrid.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:01995220` — FUN_01995220
- `function:01995280` — FUN_01995280

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0335_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolGrid_Glyph_Data.png`](../../../glyph/0335_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolGrid_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
