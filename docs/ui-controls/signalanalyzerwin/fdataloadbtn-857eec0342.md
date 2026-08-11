# FDataLoadBtn

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalAnalyzerWin |
| Component path | SignalAnalyzerWin.DataBox.FDataLoadBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | DataLoadBtnClick |
| Handler address | 0138cc00 |
| Graph node | `resource:dfm:SignalAnalyzerWin/SignalAnalyzerWin.DataBox.FDataLoadBtn` |
| Handler node | `function:0138cc00` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["FDataLoadBtn"] -->|OnClick| handler["FUN_0138cc00"]
    handler --> call1["FUN_010f7e80"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000138CC00__FUN_0138cc00.c](../../../DecompiledSources/Tina16/functions/000000000138CC00__FUN_0138cc00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SignalAnalyzerWin.DataBox.FDataLoadBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:010f7e80` — FUN_010f7e80

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0452_SignalAnalyzerWin_SignalAnalyzerWin_DataBox_FDataLoadBtn_Glyph_Data.png`](../../../glyph/0452_SignalAnalyzerWin_SignalAnalyzerWin_DataBox_FDataLoadBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
