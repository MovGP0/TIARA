# &Change

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PcbForm |
| Component path | PcbForm.Panel1.BtnEdit |
| Control class | TBitBtn |
| Caption | &Change |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | BtnEditClick |
| Handler address | 00ed1930 |
| Graph node | `resource:dfm:PcbForm/PcbForm.Panel1.BtnEdit` |
| Handler node | `function:00ed1930` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Change"] -->|OnClick| handler["FUN_00ed1930"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_00416ba0"]
    handler --> call3["FUN_00416e20"]
    handler --> call4["FUN_004170c0"]
    handler --> call5["FUN_00ea9ca0"]
    handler --> call6["FUN_00ec9120"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000ED1930__FUN_00ed1930.c](../../../DecompiledSources/Tina16/functions/0000000000ED1930__FUN_00ed1930.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PcbForm.Panel1.BtnEdit.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416ba0` — FUN_00416ba0
- `function:00416e20` — FUN_00416e20
- `function:004170c0` — FUN_004170c0
- `function:00ea9ca0` — FUN_00ea9ca0
- `function:00ec9120` — FUN_00ec9120
- `function:00ed3300` — FUN_00ed3300

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Part: at distance 120.
- Rank 2: Swapped nodes at distance 126.
- Rank 3:  Valid node at distance 176.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
