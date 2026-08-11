# dB

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalAnalyzerWin |
| Component path | SignalAnalyzerWin.DisplayGroupBox.DisplayCoordChangeBtn |
| Control class | TSpeedButton |
| Caption | dB |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | DisplayCoordChangeBtnClick |
| Handler address | 0138c870 |
| Graph node | `resource:dfm:SignalAnalyzerWin/SignalAnalyzerWin.DisplayGroupBox.DisplayCoordChangeBtn` |
| Handler node | `function:0138c870` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["dB"] -->|OnClick| handler["FUN_0138c870"]
    handler --> call1["VCL control text setter with change suppression"]
    handler --> call2["FUN_0082a6c0"]
    handler --> call3["FUN_00b90440"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000138C870__FUN_0138c870.c](../../../DecompiledSources/Tina16/functions/000000000138C870__FUN_0138c870.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SignalAnalyzerWin.DisplayGroupBox.DisplayCoordChangeBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:0064de00` — VCL control text setter with change suppression
- `function:0082a6c0` — FUN_0082a6c0
- `function:00b90440` — FUN_00b90440

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: High at distance 19.
- Rank 2: Low at distance 19.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
