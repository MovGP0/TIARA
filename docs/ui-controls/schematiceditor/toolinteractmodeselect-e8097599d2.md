# Select interactive mode

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.TopToolBar.EditorTools.ToolInteractModeSelect |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Select interactive mode |
| Text | Not present in the recovered resource. |
| Handler name | ToolInteractModeSelectClick |
| Handler address | 01c898a0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.TopToolBar.EditorTools.ToolInteractModeSelect` |
| Handler node | `function:01c898a0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Select interactive mode"] -->|OnClick| handler["FUN_01c898a0"]
    handler --> call1["FUN_00498310"]
    handler --> call2["FUN_0064d1f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C898A0__FUN_01c898a0.c](../../../DecompiledSources/Tina16/functions/0000000001C898A0__FUN_01c898a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.TopToolBar.EditorTools.ToolInteractModeSelect.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00498310` — FUN_00498310
- `function:0064d1f0` — FUN_0064d1f0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0345_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolInteractModeSelect_Glyph_Data.png`](../../../glyph/0345_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolInteractModeSelect_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
