# bOK

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | HTermData |
| Component path | HTermData.bOK |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bOKClick |
| Handler address | 014b8d70 |
| Graph node | `resource:dfm:HTermData/HTermData.bOK` |
| Handler node | `function:014b8d70` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["bOK"] -->|OnClick| handler["FUN_014b8d70"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString assignment helper"]
    handler --> call3["FUN_00416cd0"]
    handler --> call4["FUN_00440a20"]
    handler --> call5["FUN_004412f0"]
    handler --> call6["FUN_015fcb30"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014B8D70__FUN_014b8d70.c](../../../DecompiledSources/Tina16/functions/00000000014B8D70__FUN_014b8d70.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: HTermData.bOK.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 8

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:00416cd0` — FUN_00416cd0
- `function:00440a20` — FUN_00440a20
- `function:004412f0` — FUN_004412f0
- `function:015fcb30` — FUN_015fcb30
- `function:0160d4e0` — FUN_0160d4e0
- `function:01778ec0` — FUN_01778ec0

## Resource evidence

- Kind: bkOK
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Sequence:  at distance 450.
- Rank 2: Example:  at distance 770.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
