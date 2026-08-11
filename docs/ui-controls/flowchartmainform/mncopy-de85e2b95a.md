# &Copy

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | FlowChartMainForm |
| Component path | FlowChartMainForm.MainMenu.mnEdit.mnCopy |
| Control class | TMenuItem |
| Caption | &Copy |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnCopyClick |
| Handler address | 0104f620 |
| Graph node | `resource:dfm:FlowChartMainForm/FlowChartMainForm.MainMenu.mnEdit.mnCopy` |
| Handler node | `function:0104f620` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Copy"] -->|OnClick| handler["FUN_0104f620"]
    handler --> call1["FUN_006809e0"]
    handler --> call2["FUN_006d5120"]
    handler --> call3["FUN_0104f660"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000104F620__FUN_0104f620.c](../../../DecompiledSources/Tina16/functions/000000000104F620__FUN_0104f620.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: FlowChartMainForm.MainMenu.mnEdit.mnCopy.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:006809e0` — FUN_006809e0
- `function:006d5120` — FUN_006d5120
- `function:0104f660` — FUN_0104f660

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
