# FNextCurveBtn

> Analysis status: Source reviewed: the click selects the next analyzer curve.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SignalAnalyzerWin |
| Component path | SignalAnalyzerWin.CursorBox.FNextCurveBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | NextCurveBtnClick |
| Handler address | 0138cb00 |
| Graph node | `resource:dfm:SignalAnalyzerWin/SignalAnalyzerWin.CursorBox.FNextCurveBtn` |
| Handler node | `function:0138cb00` |
| Graph layer | UI |

## What happens when clicked

The handler calls `FUN_010f6d10`. That helper dispatches curve-selection command `0x53B` with direction value `0`.

In local mode, the command decreases the current curve index and wraps from the first entry to the last entry. In remote mode, it forwards the same command. The extracted downward-arrow glyph agrees with the recovered direction, but the handler path is the primary evidence.

## Click flow

```mermaid
flowchart TD
    control["Next-curve button"] -->|OnClick| handler["NextCurveBtnClick"]
    handler --> command["Dispatch curve command 0x53B, direction 0"]
    command --> mode{"Local mode?"}
    mode -->|No| remote["Forward command"]
    mode -->|Yes| select["Select prior index; wrap to last"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000138CB00__FUN_0138cb00.c](../../../DecompiledSources/Tina16/functions/000000000138CB00__FUN_0138cb00.c)
- Recovered role: Selects the next labeled analyzer curve through the common curve command.
- Current graph summary: Handles 1 Delphi UI event: SignalAnalyzerWin.CursorBox.FNextCurveBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:010f6d10` — FUN_010f6d10

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0466_SignalAnalyzerWin_SignalAnalyzerWin_CursorBox_FNextCurveBtn_Glyph_Data.png`](../../../glyph/0466_SignalAnalyzerWin_SignalAnalyzerWin_CursorBox_FNextCurveBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The internal list order runs opposite to the user-facing Next label: direction `0` decreases the stored index.
- The handler does not expose errors from the remote command transport.
