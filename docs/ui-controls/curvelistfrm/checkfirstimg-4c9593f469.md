# Check only first curve

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CurveListFrm |
| Component path | CurveListFrm.CheckFirstImg |
| Control class | TImage |
| Caption | Not present in the recovered resource. |
| Hint | Check only first curve |
| Text | Not present in the recovered resource. |
| Handler name | CheckFirstImgClick |
| Handler address | 0135f020 |
| Graph node | `resource:dfm:CurveListFrm/CurveListFrm.CheckFirstImg` |
| Handler node | `function:0135f020` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Check only first curve"] -->|OnClick| handler["FUN_0135f020"]
    handler --> call1["FUN_00821790"]
    handler --> call2["FUN_0135ed00"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000135F020__FUN_0135f020.c](../../../DecompiledSources/Tina16/functions/000000000135F020__FUN_0135f020.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CurveListFrm.CheckFirstImg.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00821790` — FUN_00821790
- `function:0135ed00` — FUN_0135ed00

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0056_CurveListFrm_CurveListFrm_CheckFirstImg_Picture_Data.png`](../../../glyph/0056_CurveListFrm_CurveListFrm_CheckFirstImg_Picture_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Curves: at distance 253.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
