# Source

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalAnalyzerWin |
| Component path | SignalAnalyzerWin.TriggerGroupBox.TriggerSourceBtn |
| Control class | TSpeedButton |
| Caption | Source |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | TriggerSourceBtnClick |
| Handler address | 0138d060 |
| Graph node | `resource:dfm:SignalAnalyzerWin/SignalAnalyzerWin.TriggerGroupBox.TriggerSourceBtn` |
| Handler node | `function:0138d060` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Source"] -->|OnClick| handler["FUN_0138d060"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000138D060__FUN_0138d060.c](../../../DecompiledSources/Tina16/functions/000000000138D060__FUN_0138d060.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SignalAnalyzerWin.TriggerGroupBox.TriggerSourceBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Level at distance 100.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
