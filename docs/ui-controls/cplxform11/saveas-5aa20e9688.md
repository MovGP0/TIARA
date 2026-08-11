# &Save as

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CplxForm11 |
| Component path | CplxForm11.saveas |
| Control class | TButton |
| Caption | &Save as |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | saveasClick |
| Handler address | 013e85d0 |
| Graph node | `resource:dfm:CplxForm11/CplxForm11.saveas` |
| Handler node | `function:013e85d0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Save as"] -->|OnClick| handler["FUN_013e85d0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["Delphi UnicodeString assignment helper"]
    handler --> call4["FUN_00416910"]
    handler --> call5["FUN_0043e1a0"]
    handler --> call6["FUN_00441920"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000013E85D0__FUN_013e85d0.c](../../../DecompiledSources/Tina16/functions/00000000013E85D0__FUN_013e85d0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CplxForm11.saveas.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 10

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:00416910` — FUN_00416910
- `function:0043e1a0` — FUN_0043e1a0
- `function:00441920` — FUN_00441920
- `function:00724270` — FUN_00724270
- `function:00724380` — FUN_00724380
- `function:00b0a890` — FUN_00b0a890
- `function:013e8340` — FUN_013e8340

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Tol. at distance 110.
- Rank 2: [%] at distance 184.
- Rank 3: Frequency at distance 402.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
