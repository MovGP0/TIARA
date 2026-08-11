# A&dd New

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PsgForm |
| Component path | PsgForm.AddNew |
| Control class | TBitBtn |
| Caption | A&dd New |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | AddNewClick |
| Handler address | 013f89d0 |
| Graph node | `resource:dfm:PsgForm/PsgForm.AddNew` |
| Handler node | `function:013f89d0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["A&dd New"] -->|OnClick| handler["FUN_013f89d0"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_00848a70"]
    handler --> call3["FUN_0084e3e0"]
    handler --> call4["FUN_00b0ab70"]
    handler --> call5["FUN_00b89270"]
    handler --> call6["FUN_00b8e520"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000013F89D0__FUN_013f89d0.c](../../../DecompiledSources/Tina16/functions/00000000013F89D0__FUN_013f89d0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PsgForm.AddNew.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 12

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00848a70` — FUN_00848a70
- `function:0084e3e0` — FUN_0084e3e0
- `function:00b0ab70` — FUN_00b0ab70
- `function:00b89270` — FUN_00b89270
- `function:00b8e520` — FUN_00b8e520
- `function:00b909d0` — FUN_00b909d0
- `function:013f76a0` — FUN_013f76a0
- `function:01430100` — FUN_01430100
- `function:014313c0` — FUN_014313c0
- `function:01d3aab0` — FUN_01d3aab0
- `function:01d3aad0` — FUN_01d3aad0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Repeat from:  at distance 230.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
