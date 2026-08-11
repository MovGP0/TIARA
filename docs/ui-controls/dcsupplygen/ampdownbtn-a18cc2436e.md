# AmpDownBtn

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DCSupplyGen |
| Component path | DCSupplyGen.AmpDownBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | AmpDownBtnClick |
| Handler address | 010d8fb0 |
| Graph node | `resource:dfm:DCSupplyGen/DCSupplyGen.AmpDownBtn` |
| Handler node | `function:010d8fb0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["AmpDownBtn"] -->|OnClick| handler["FUN_010d8fb0"]
    handler --> call1["FUN_010bfbe0"]
    handler --> call2["FUN_010d8e20"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000010D8FB0__FUN_010d8fb0.c](../../../DecompiledSources/Tina16/functions/00000000010D8FB0__FUN_010d8fb0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DCSupplyGen.AmpDownBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:010bfbe0` — FUN_010bfbe0
- `function:010d8e20` — FUN_010d8e20

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0057_DCSupplyGen_DCSupplyGen_AmpDownBtn_Glyph_Data.png`](../../../glyph/0057_DCSupplyGen_DCSupplyGen_AmpDownBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: AMPLITUDE at distance 91.
- Rank 2: V3 at distance 123.
- Rank 3: V2 at distance 143.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
