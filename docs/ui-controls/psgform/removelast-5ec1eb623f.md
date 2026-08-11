# &Remove Last

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PsgForm |
| Component path | PsgForm.RemoveLast |
| Control class | TBitBtn |
| Caption | &Remove Last |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | RemoveLastClick |
| Handler address | 013f8bf0 |
| Graph node | `resource:dfm:PsgForm/PsgForm.RemoveLast` |
| Handler node | `function:013f8bf0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Remove Last"] -->|OnClick| handler["FUN_013f8bf0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_008483b0"]
    handler --> call3["FUN_00848a30"]
    handler --> call4["FUN_0084e3e0"]
    handler --> call5["FUN_00b0adf0"]
    handler --> call6["FUN_00b89270"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000013F8BF0__FUN_013f8bf0.c](../../../DecompiledSources/Tina16/functions/00000000013F8BF0__FUN_013f8bf0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PsgForm.RemoveLast.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 9

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:008483b0` — FUN_008483b0
- `function:00848a30` — FUN_00848a30
- `function:0084e3e0` — FUN_0084e3e0
- `function:00b0adf0` — FUN_00b0adf0
- `function:00b89270` — FUN_00b89270
- `function:00b8e520` — FUN_00b8e520
- `function:013f76a0` — FUN_013f76a0
- `function:01d3bac0` — FUN_01d3bac0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Repeat from:  at distance 198.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
