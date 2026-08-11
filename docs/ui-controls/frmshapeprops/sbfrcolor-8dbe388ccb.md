# sbFrColor

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmShapeProps |
| Component path | frmShapeProps.gbBorder.sbFrColor |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | EditColor |
| Handler address | 00c5b7e0 |
| Graph node | `resource:dfm:frmShapeProps/frmShapeProps.gbBorder.sbFrColor` |
| Handler node | `function:00c5b7e0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["sbFrColor"] -->|OnClick| handler["FUN_00c5b7e0"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_00724d70"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000C5B7E0__FUN_00c5b7e0.c](../../../DecompiledSources/Tina16/functions/0000000000C5B7E0__FUN_00c5b7e0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 6 Delphi UI events: frmShapeProps.gbBorder.pbFrColor.OnClick, frmShapeProps.gbBorder.sbFrColor.OnClick, frmShapeProps.gbBackground.pbBdColor.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00724d70` — FUN_00724d70

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0188_frmShapeProps_frmShapeProps_gbBorder_sbFrColor_Glyph_Data.png`](../../../glyph/0188_frmShapeProps_frmShapeProps_gbBorder_sbFrColor_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: &Color: at distance 183.
- Rank 2: &Thickness: at distance 208.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
