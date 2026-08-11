# &Remove last

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CplxForm |
| Component path | CplxForm.removelast |
| Control class | TButton |
| Caption | &Remove last |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | removelastClick |
| Handler address | 01407100 |
| Graph node | `resource:dfm:CplxForm/CplxForm.removelast` |
| Handler node | `function:01407100` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Remove last"] -->|OnClick| handler["FUN_01407100"]
    handler --> call1["FUN_008483b0"]
    handler --> call2["FUN_00848a30"]
    handler --> call3["FUN_00848a70"]
    handler --> call4["FUN_0084e3e0"]
    handler --> call5["FUN_00b0adf0"]
    handler --> call6["FUN_00b0ae40"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001407100__FUN_01407100.c](../../../DecompiledSources/Tina16/functions/0000000001407100__FUN_01407100.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CplxForm.removelast.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 9

## Direct calls

- `function:008483b0` — FUN_008483b0
- `function:00848a30` — FUN_00848a30
- `function:00848a70` — FUN_00848a70
- `function:0084e3e0` — FUN_0084e3e0
- `function:00b0adf0` — FUN_00b0adf0
- `function:00b0ae40` — FUN_00b0ae40
- `function:01404f30` — FUN_01404f30
- `function:01405a00` — FUN_01405a00
- `function:01d3c270` — FUN_01d3c270

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Frequency at distance 232.
- Rank 2: Imaginary part at distance 304.
- Rank 3: Phase[deg] at distance 320.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
