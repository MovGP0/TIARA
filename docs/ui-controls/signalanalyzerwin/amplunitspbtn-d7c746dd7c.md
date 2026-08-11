# dBm

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalAnalyzerWin |
| Component path | SignalAnalyzerWin.MeasurementGroupBox.AmplitudeBox.AmplUnitSpBtn |
| Control class | TSpeedButton |
| Caption | dBm |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | AmplUnitSpBtnClick |
| Handler address | 0138cec0 |
| Graph node | `resource:dfm:SignalAnalyzerWin/SignalAnalyzerWin.MeasurementGroupBox.AmplitudeBox.AmplUnitSpBtn` |
| Handler node | `function:0138cec0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["dBm"] -->|OnClick| handler["FUN_0138cec0"]
    handler --> call1["VCL control text setter with change suppression"]
    handler --> call2["FUN_00b90440"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000138CEC0__FUN_0138cec0.c](../../../DecompiledSources/Tina16/functions/000000000138CEC0__FUN_0138cec0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SignalAnalyzerWin.MeasurementGroupBox.AmplitudeBox.AmplUnitSpBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0064de00` — VCL control text setter with change suppression
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

- Rank 1: Range at distance 89.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
