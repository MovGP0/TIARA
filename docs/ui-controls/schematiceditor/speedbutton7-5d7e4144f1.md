# Rotate left|Rotate the selected component left (counterclockwise)

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.SpeedButton7 |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Rotate left\|Rotate the selected component left (counterclockwise) |
| Text | Not present in the recovered resource. |
| Handler name | ToolRLeftClick |
| Handler address | 01c70530 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.SpeedButton7` |
| Handler node | `function:01c70530` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Rotate left|Rotate the selected component left (counterclockwise)"] -->|OnClick| handler["FUN_01c70530"]
    handler --> call1["FUN_01c6d1a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C70530__FUN_01c70530.c](../../../DecompiledSources/Tina16/functions/0000000001C70530__FUN_01c70530.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 3 Delphi UI events: SchematicEditor.SpeedButton7.OnClick, SchematicEditor.SpeedButton8.OnClick, SchematicEditor.TopToolBar.EditorTools.ToolRLeft.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c6d1a0` — FUN_01c6d1a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0320_SchematicEditor_SchematicEditor_SpeedButton7_Glyph_Data.png`](../../../glyph/0320_SchematicEditor_SchematicEditor_SpeedButton7_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
