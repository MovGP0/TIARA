# Reset &Defaults

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | AnalysisOptionDlg |
| Component path | AnalysisOptionDlg.pcOptions.tshERC.btnDefaults |
| Control class | TButton |
| Caption | Reset &Defaults |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnDefaultsClick |
| Handler address | 014f4130 |
| Graph node | `resource:dfm:AnalysisOptionDlg/AnalysisOptionDlg.pcOptions.tshERC.btnDefaults` |
| Handler node | `function:014f4130` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Reset &Defaults"] -->|OnClick| handler["FUN_014f4130"]
    handler --> call1["FUN_014f3fc0"]
    handler --> call2["FUN_01d43940"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014F4130__FUN_014f4130.c](../../../DecompiledSources/Tina16/functions/00000000014F4130__FUN_014f4130.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: AnalysisOptionDlg.pcOptions.tshERC.btnDefaults.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:014f3fc0` — FUN_014f3fc0
- `function:01d43940` — FUN_01d43940

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
