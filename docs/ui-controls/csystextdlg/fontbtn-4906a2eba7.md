# FontBtn

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CSysTextDlg |
| Component path | CSysTextDlg.ButtonsNB.TPage.FontBtn |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | FontBtnClick |
| Handler address | 0146a610 |
| Graph node | `resource:dfm:CSysTextDlg/CSysTextDlg.ButtonsNB.TPage.FontBtn` |
| Handler node | `function:0146a610` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["FontBtn"] -->|OnClick| handler["FUN_0146a610"]
    handler --> call1["FUN_0146af40"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000146A610__FUN_0146a610.c](../../../DecompiledSources/Tina16/functions/000000000146A610__FUN_0146a610.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CSysTextDlg.ButtonsNB.TPage.FontBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0146af40` — Handles 1 Delphi UI event: CSysTextDlg.MainNB.TPage.ScrollBox.DrawRectangle.OnPaint.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0051_CSysTextDlg_CSysTextDlg_ButtonsNB_TPage_FontBtn_Glyph_Data.png`](../../../glyph/0051_CSysTextDlg_CSysTextDlg_ButtonsNB_TPage_FontBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
