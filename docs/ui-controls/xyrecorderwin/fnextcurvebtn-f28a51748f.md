# FNextCurveBtn

> Analysis status: Complete. The control selects the preceding curve-list entry for the selected cursor.

## Control

| Property | Recovered value |
| --- | --- |
| Form | XYRecorderWin |
| Component path | XYRecorderWin.CursorBox.FNextCurveBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | NextCurveBtnClick |
| Handler address | 01b59c50 |
| Graph node | `resource:dfm:XYRecorderWin/XYRecorderWin.CursorBox.FNextCurveBtn` |
| Handler node | `function:01b59c50` |
| Graph layer | UI |

## What happens when clicked

`NextCurveBtnClick` sends command `0x53B` with direction value `0`. In local mode, the command acts on cursor A when the A selector is down and on cursor B otherwise. The cursor helper finds the selected cursor's current curve, subtracts one from its curve-list index, and wraps from index `0` to the last entry.

If the plot mode is not eligible, the selected cursor has no curve, or the current curve is not in the list, the curve does not change. After a successful selection, the helper preserves the cursor position, attaches the cursor to the replacement curve, updates cursor state, and refreshes the cursor readouts. In remote mode, the command is forwarded instead of applied locally.

## Click flow

```mermaid
flowchart TD
    control["Down-arrow glyph<br/>FNextCurveBtn"] -->|OnClick| handler["FUN_01b59c50<br/>NextCurveBtnClick"]
    handler --> command["FUN_010f6d10<br/>command 0x53B, direction 0"]
    command --> route["FUN_010f6d70<br/>local or remote route"]
    route -->|Remote| remote["Forward curve command"]
    route -->|Local| find["FUN_010e7ef0<br/>find selected cursor curve"]
    find --> eligible{"Eligible curve found?"}
    eligible -->|No| unchanged["Keep current curve"]
    eligible -->|Yes| prior["Select index minus one;<br/>wrap to last entry"]
    prior --> update["Attach cursor and refresh readouts"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B59C50__FUN_01b59c50.c](../../../DecompiledSources/Tina16/functions/0000000001B59C50__FUN_01b59c50.c)
- Review role: Move the selected cursor to the prior curve-list index with wraparound.
- Current graph summary: Handles 1 Delphi UI event: XYRecorderWin.CursorBox.FNextCurveBtn.OnClick.
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
- Extracted glyph: [`0528_XYRecorderWin_XYRecorderWin_CursorBox_FNextCurveBtn_Glyph_Data.png`](../../../glyph/0528_XYRecorderWin_XYRecorderWin_CursorBox_FNextCurveBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- The Delphi handler name says `Next`, while the recovered direction-zero path subtracts one from the list index. This article states the proven index operation and does not infer the list's visual sort order.
- A live UI test was not performed. The embedded down-arrow glyph supports navigation direction but does not establish the index operation by itself.
