# FPrevCurveBtn

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | XYRecorderWin |
| Component path | XYRecorderWin.CursorBox.FPrevCurveBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | PrevCurveBtnClick |
| Handler address | 01b59c40 |
| Graph node | `resource:dfm:XYRecorderWin/XYRecorderWin.CursorBox.FPrevCurveBtn` |
| Handler node | `function:01b59c40` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["FPrevCurveBtn"] -->|OnClick| handler["FUN_01b59c40"]
    handler --> call1["FUN_010f6d40"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B59C40__FUN_01b59c40.c](../../../DecompiledSources/Tina16/functions/0000000001B59C40__FUN_01b59c40.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: XYRecorderWin.CursorBox.FPrevCurveBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:010f6d40` — FUN_010f6d40

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0527_XYRecorderWin_XYRecorderWin_CursorBox_FPrevCurveBtn_Glyph_Data.png`](../../../glyph/0527_XYRecorderWin_XYRecorderWin_CursorBox_FPrevCurveBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
