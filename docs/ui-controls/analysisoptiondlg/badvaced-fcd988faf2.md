# Advanced...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | AnalysisOptionDlg |
| Component path | AnalysisOptionDlg.pcOptions.tshDigital.rgVhdl.bAdvaced |
| Control class | TButton |
| Caption | Advanced... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bAdvacedClick |
| Handler address | 014f4590 |
| Graph node | `resource:dfm:AnalysisOptionDlg/AnalysisOptionDlg.pcOptions.tshDigital.rgVhdl.bAdvaced` |
| Handler node | `function:014f4590` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Advanced..."] -->|OnClick| handler["FUN_014f4590"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_00417740"]
    handler --> call3["FUN_00417c40"]
    handler --> call4["FUN_007fc180"]
    handler --> call5["FUN_014eeb90"]
    handler --> call6["FUN_014eec20"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014F4590__FUN_014f4590.c](../../../DecompiledSources/Tina16/functions/00000000014F4590__FUN_014f4590.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: AnalysisOptionDlg.pcOptions.tshDigital.rgVhdl.bAdvaced.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00417740` — FUN_00417740
- `function:00417c40` — FUN_00417c40
- `function:007fc180` — FUN_007fc180
- `function:014eeb90` — FUN_014eeb90
- `function:014eec20` — FUN_014eec20

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
