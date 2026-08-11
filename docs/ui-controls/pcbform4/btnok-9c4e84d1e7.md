# OK

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PcbForm4 |
| Component path | PcbForm4.BtnOK |
| Control class | TBitBtn |
| Caption | OK |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | BtnOKClick |
| Handler address | 00ec3110 |
| Graph node | `resource:dfm:PcbForm4/PcbForm4.BtnOK` |
| Handler node | `function:00ec3110` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["OK"] -->|OnClick| handler["FUN_00ec3110"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_00416ba0"]
    handler --> call4["FUN_00416db0"]
    handler --> call5["FUN_0043e130"]
    handler --> call6["FUN_0072d440"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000EC3110__FUN_00ec3110.c](../../../DecompiledSources/Tina16/functions/0000000000EC3110__FUN_00ec3110.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PcbForm4.BtnOK.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 13

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416ba0` — FUN_00416ba0
- `function:00416db0` — FUN_00416db0
- `function:0043e130` — FUN_0043e130
- `function:0072d440` — FUN_0072d440
- `function:00b89270` — FUN_00b89270
- `function:00b8e520` — FUN_00b8e520
- `function:00ea99b0` — FUN_00ea99b0
- `function:00ea9ca0` — FUN_00ea9ca0
- `function:00eae940` — FUN_00eae940
- `function:00eaec40` — FUN_00eaec40
- `function:00eaecd0` — FUN_00eaecd0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: 1
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0301_PcbForm4_PcbForm4_BtnOK_Glyph_Data.png`](../../../glyph/0301_PcbForm4_PcbForm4_BtnOK_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
