# &Clear

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ParStepListEditor |
| Component path | ParStepListEditor.Clear |
| Control class | TButton |
| Caption | &Clear |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ClearClick |
| Handler address | 01437b20 |
| Graph node | `resource:dfm:ParStepListEditor/ParStepListEditor.Clear` |
| Handler node | `function:01437b20` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Clear"] -->|OnClick| handler["FUN_01437b20"]
    handler --> call1["FUN_00848a70"]
    handler --> call2["FUN_00b0ae40"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001437B20__FUN_01437b20.c](../../../DecompiledSources/Tina16/functions/0000000001437B20__FUN_01437b20.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ParStepListEditor.Clear.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00848a70` — FUN_00848a70
- `function:00b0ae40` — FUN_00b0ae40

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Parameter # at distance 44.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
