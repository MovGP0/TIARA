#  Integration method

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | AnalysisOptionDlg |
| Component path | AnalysisOptionDlg.pcOptions.tshGeneral.Transient.IntegMethodRG |
| Control class | TRadioGroup |
| Caption |  Integration method  |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | IntegMethodRGClick |
| Handler address | 014f4320 |
| Graph node | `resource:dfm:AnalysisOptionDlg/AnalysisOptionDlg.pcOptions.tshGeneral.Transient.IntegMethodRG` |
| Handler node | `function:014f4320` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control[" Integration method "] -->|OnClick| handler["FUN_014f4320"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_0043f750"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014F4320__FUN_014f4320.c](../../../DecompiledSources/Tina16/functions/00000000014F4320__FUN_014f4320.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: AnalysisOptionDlg.pcOptions.tshGeneral.Transient.IntegMethodRG.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:0043f750` — FUN_0043f750

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: ("&Trapezoidal", "&Gear")
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Integration order at distance 71.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
