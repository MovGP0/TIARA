# FDataLoadBtn

> Analysis status: Source reviewed: the click dispatches the form's data-load operation.

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

The handler calls `FUN_010f7e80`. That wrapper invokes virtual form slot `+0x558`, which is the operation paired with the Data Load control.

The plot-and-left-arrow glyph and the paired save path support the load direction. The recovered graph does not resolve the concrete override, so the file selection, data format, and error behavior remain unknown.

## Click flow

```mermaid
flowchart LR
    control["Data Load button"] -->|OnClick| handler["DataLoadBtnClick"]
    handler --> wrapper["FUN_010f7e80"]
    wrapper --> load["Form virtual data-load operation +0x558"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000138CC00__FUN_0138cc00.c](../../../DecompiledSources/Tina16/functions/000000000138CC00__FUN_0138cc00.c)
- Recovered role: Dispatches the SignalAnalyzerWin virtual data-load operation.
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

- The concrete implementation of virtual slot `+0x558` is not resolved in the recovered graph.
- The source does not prove a file dialog, supported format, destination, or load error behavior.
