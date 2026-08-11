# Rotate right|Rotate the selected component right (clockwise)

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.TopToolBar.EditorTools.ToolRRight |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Rotate right\|Rotate the selected component right (clockwise) |
| Text | Not present in the recovered resource. |
| Handler name | ToolRRightClick |
| Handler address | 01c70550 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.TopToolBar.EditorTools.ToolRRight` |
| Handler node | `function:01c70550` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Rotate right|Rotate the selected component right (clockwise)"] -->|OnClick| handler["FUN_01c70550"]
    handler --> call1["FUN_01c6d2f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C70550__FUN_01c70550.c](../../../DecompiledSources/Tina16/functions/0000000001C70550__FUN_01c70550.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.TopToolBar.EditorTools.ToolRRight.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c6d2f0` — FUN_01c6d2f0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0337_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolRRight_Glyph_Data.png`](../../../glyph/0337_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolRRight_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
