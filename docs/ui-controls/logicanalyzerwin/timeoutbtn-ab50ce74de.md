# Timeout

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LogicAnalyzerWin |
| Component path | LogicAnalyzerWin.MeasurementGroupBox.TimeoutBtn |
| Control class | TSpeedButton |
| Caption | Timeout |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | TimeoutBtnClick |
| Handler address | 01520b70 |
| Graph node | `resource:dfm:LogicAnalyzerWin/LogicAnalyzerWin.MeasurementGroupBox.TimeoutBtn` |
| Handler node | `function:01520b70` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Timeout"] -->|OnClick| handler["FUN_01520b70"]
    handler --> call1["FUN_0064dbe0"]
    handler --> call2["FUN_00f04fa0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001520B70__FUN_01520b70.c](../../../DecompiledSources/Tina16/functions/0000000001520B70__FUN_01520b70.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LogicAnalyzerWin.MeasurementGroupBox.TimeoutBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0064dbe0` — FUN_0064dbe0
- `function:00f04fa0` — FUN_00f04fa0

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
