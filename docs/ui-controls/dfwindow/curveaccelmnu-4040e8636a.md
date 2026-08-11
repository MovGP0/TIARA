# Curve drawing acceleration

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.DFMainMenu.DFViewMnu.CurveAccelMnu |
| Control class | TMenuItem |
| Caption | Curve drawing acceleration  |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | CurveAccelMnuClick |
| Handler address | 01a88390 |
| Graph node | `resource:dfm:DFWindow/DFWindow.DFMainMenu.DFViewMnu.CurveAccelMnu` |
| Handler node | `function:01a88390` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Curve drawing acceleration "] -->|OnClick| handler["FUN_01a88390"]
    handler --> call1["FUN_007e2d20"]
    handler --> call2["FUN_00f06730"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A88390__FUN_01a88390.c](../../../DecompiledSources/Tina16/functions/0000000001A88390__FUN_01a88390.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFWindow.DFMainMenu.DFViewMnu.CurveAccelMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:007e2d20` — FUN_007e2d20
- `function:00f06730` — FUN_00f06730

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
