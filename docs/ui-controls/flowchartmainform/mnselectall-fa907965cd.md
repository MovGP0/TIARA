# Select &All

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | FlowChartMainForm |
| Component path | FlowChartMainForm.MainMenu.mnEdit.mnSelectAll |
| Control class | TMenuItem |
| Caption | Select &All |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnSelectAllClick |
| Handler address | 0104f5a0 |
| Graph node | `resource:dfm:FlowChartMainForm/FlowChartMainForm.MainMenu.mnEdit.mnSelectAll` |
| Handler node | `function:0104f5a0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Select &All"] -->|OnClick| handler["FUN_0104f5a0"]
    handler --> call1["FUN_00680ad0"]
    handler --> call2["FUN_006d5120"]
    handler --> call3["FUN_00f62a60"]
    handler --> call4["FUN_00f74eb0"]
    handler --> call5["Flowchart editor rebuild wrapper"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000104F5A0__FUN_0104f5a0.c](../../../DecompiledSources/Tina16/functions/000000000104F5A0__FUN_0104f5a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: FlowChartMainForm.MainMenu.mnEdit.mnSelectAll.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00680ad0` — FUN_00680ad0
- `function:006d5120` — FUN_006d5120
- `function:00f62a60` — FUN_00f62a60
- `function:00f74eb0` — FUN_00f74eb0
- `function:010508e0` — Flowchart editor rebuild wrapper

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
