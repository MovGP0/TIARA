# Trigger...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalAnalyzerWin |
| Component path | SignalAnalyzerWin.ControlGroupBox.TriggerControlSpBtn |
| Control class | TSpeedButton |
| Caption | Trigger... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | TriggerControlSpBtnClick |
| Handler address | 0138d270 |
| Graph node | `resource:dfm:SignalAnalyzerWin/SignalAnalyzerWin.ControlGroupBox.TriggerControlSpBtn` |
| Handler node | `function:0138d270` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Trigger..."] -->|OnClick| handler["FUN_0138d270"]
    handler --> call1["FUN_0064dbe0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000138D270__FUN_0138d270.c](../../../DecompiledSources/Tina16/functions/000000000138D270__FUN_0138d270.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SignalAnalyzerWin.ControlGroupBox.TriggerControlSpBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0064dbe0` — FUN_0064dbe0

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
