# &Draw

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CplxForm11 |
| Component path | CplxForm11.Showp |
| Control class | TButton |
| Caption | &Draw |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ShowpClick |
| Handler address | 013e8ed0 |
| Graph node | `resource:dfm:CplxForm11/CplxForm11.Showp` |
| Handler node | `function:013e8ed0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Draw"] -->|OnClick| handler["FUN_013e8ed0"]
    handler --> call1["FUN_004aeac0"]
    handler --> call2["FUN_00b0a890"]
    handler --> call3["FUN_013e1f90"]
    handler --> call4["FUN_01cc2930"]
    handler --> call5["FUN_01cc3870"]
    handler --> call6["FUN_01cc4620"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000013E8ED0__FUN_013e8ed0.c](../../../DecompiledSources/Tina16/functions/00000000013E8ED0__FUN_013e8ed0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CplxForm11.Showp.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:004aeac0` — FUN_004aeac0
- `function:00b0a890` — FUN_00b0a890
- `function:013e1f90` — FUN_013e1f90
- `function:01cc2930` — FUN_01cc2930
- `function:01cc3870` — FUN_01cc3870
- `function:01cc4620` — FUN_01cc4620
- `function:01cc4790` — FUN_01cc4790

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Tol. at distance 74.
- Rank 2: [%] at distance 148.
- Rank 3: Frequency at distance 366.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
