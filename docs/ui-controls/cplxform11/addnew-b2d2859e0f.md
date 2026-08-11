# Add &new

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CplxForm11 |
| Component path | CplxForm11.addnew |
| Control class | TButton |
| Caption | Add &new |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | addnewClick |
| Handler address | 013e7eb0 |
| Graph node | `resource:dfm:CplxForm11/CplxForm11.addnew` |
| Handler node | `function:013e7eb0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Add &new"] -->|OnClick| handler["FUN_013e7eb0"]
    handler --> call1["FUN_004095c0"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_004ae7e0"]
    handler --> call4["FUN_004aeac0"]
    handler --> call5["FUN_00848a70"]
    handler --> call6["FUN_0084e3e0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000013E7EB0__FUN_013e7eb0.c](../../../DecompiledSources/Tina16/functions/00000000013E7EB0__FUN_013e7eb0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CplxForm11.addnew.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 9

## Direct calls

- `function:004095c0` — FUN_004095c0
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:004ae7e0` — FUN_004ae7e0
- `function:004aeac0` — FUN_004aeac0
- `function:00848a70` — FUN_00848a70
- `function:0084e3e0` — FUN_0084e3e0
- `function:00b0ab70` — FUN_00b0ab70
- `function:013e72b0` — FUN_013e72b0
- `function:014313c0` — FUN_014313c0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Tol. at distance 236.
- Rank 2: [%] at distance 310.
- Rank 3: Frequency at distance 528.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
