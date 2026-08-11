# CurvesLB

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CurveListFrm |
| Component path | CurveListFrm.CurvesLB |
| Control class | TCheckListBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | CurvesLBClick |
| Handler address | 0135ef90 |
| Graph node | `resource:dfm:CurveListFrm/CurveListFrm.CurvesLB` |
| Handler node | `function:0135ef90` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["CurvesLB"] -->|OnClick| handler["FUN_0135ef90"]
    handler --> call1["FUN_0135ed00"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000135EF90__FUN_0135ef90.c](../../../DecompiledSources/Tina16/functions/000000000135EF90__FUN_0135ef90.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CurveListFrm.CurvesLB.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0135ed00` — FUN_0135ed00

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: ("elso", "masodik", "harmadik", "negyedik")
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Curves: at distance 25.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
