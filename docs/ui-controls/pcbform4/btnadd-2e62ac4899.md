# &Add

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PcbForm4 |
| Component path | PcbForm4.Panel1.BtnAdd |
| Control class | TBitBtn |
| Caption | &Add |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | BtnAddClick |
| Handler address | 00ec5b30 |
| Graph node | `resource:dfm:PcbForm4/PcbForm4.Panel1.BtnAdd` |
| Handler node | `function:00ec5b30` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Add"] -->|OnClick| handler["FUN_00ec5b30"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_00416cd0"]
    handler --> call3["FUN_00416e20"]
    handler --> call4["FUN_004170c0"]
    handler --> call5["FUN_0043f750"]
    handler --> call6["FUN_00ea9ca0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000EC5B30__FUN_00ec5b30.c](../../../DecompiledSources/Tina16/functions/0000000000EC5B30__FUN_00ec5b30.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PcbForm4.Panel1.BtnAdd.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 9

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416cd0` — FUN_00416cd0
- `function:00416e20` — FUN_00416e20
- `function:004170c0` — FUN_004170c0
- `function:0043f750` — FUN_0043f750
- `function:00ea9ca0` — FUN_00ea9ca0
- `function:00eb9040` — FUN_00eb9040
- `function:00ec0380` — FUN_00ec0380
- `function:00ec7250` — FUN_00ec7250

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Part: at distance 67.
- Rank 2: Swapped nodes at distance 77.
- Rank 3: Node list: at distance 164.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
