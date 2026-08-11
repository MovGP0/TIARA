# From

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LogicAnalyzerWin |
| Component path | LogicAnalyzerWin.ChannelGroupBox.FFromChnSpBtn |
| Control class | TSpeedButton |
| Caption | From |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | FromChnSpBtnClick |
| Handler address | 01521440 |
| Graph node | `resource:dfm:LogicAnalyzerWin/LogicAnalyzerWin.ChannelGroupBox.FFromChnSpBtn` |
| Handler node | `function:01521440` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["From"] -->|OnClick| handler["FUN_01521440"]
    handler --> call1["FUN_01508e80"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001521440__FUN_01521440.c](../../../DecompiledSources/Tina16/functions/0000000001521440__FUN_01521440.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LogicAnalyzerWin.ChannelGroupBox.FFromChnSpBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01508e80` — FUN_01508e80

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: From: at distance 2.
- Rank 2: Group Label at distance 40.
- Rank 3: To: at distance 46.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
