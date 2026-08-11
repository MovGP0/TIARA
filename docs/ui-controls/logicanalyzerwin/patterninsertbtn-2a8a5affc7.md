# Ins

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LogicAnalyzerWin |
| Component path | LogicAnalyzerWin.TriggerBox.PatternInsertBtn |
| Control class | TSpeedButton |
| Caption | Ins |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | PatternInsertBtnClick |
| Handler address | 01520d80 |
| Graph node | `resource:dfm:LogicAnalyzerWin/LogicAnalyzerWin.TriggerBox.PatternInsertBtn` |
| Handler node | `function:01520d80` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Ins"] -->|OnClick| handler["FUN_01520d80"]
    handler --> call1["FUN_0040e840"]
    handler --> call2["FUN_004113f0"]
    handler --> call3["Delphi UnicodeString array finalization helper"]
    handler --> call4["FUN_00414de0"]
    handler --> call5["FUN_00416780"]
    handler --> call6["FUN_004169a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001520D80__FUN_01520d80.c](../../../DecompiledSources/Tina16/functions/0000000001520D80__FUN_01520d80.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LogicAnalyzerWin.TriggerBox.PatternInsertBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 10

## Direct calls

- `function:0040e840` — FUN_0040e840
- `function:004113f0` — FUN_004113f0
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00414de0` — FUN_00414de0
- `function:00416780` — FUN_00416780
- `function:004169a0` — FUN_004169a0
- `function:00416ad0` — FUN_00416ad0
- `function:00416ea0` — FUN_00416ea0
- `function:004170c0` — FUN_004170c0
- `function:0064de00` — VCL control text setter with change suppression

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Pattern at distance 62.
- Rank 2: Group at distance 138.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
