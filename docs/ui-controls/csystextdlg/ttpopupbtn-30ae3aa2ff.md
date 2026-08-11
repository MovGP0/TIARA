# TTPopUpBtn

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CSysTextDlg |
| Component path | CSysTextDlg.ButtonsNB.TPage.TTPopUpBtn |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | TTPopUpBtnClick |
| Handler address | 0146c240 |
| Graph node | `resource:dfm:CSysTextDlg/CSysTextDlg.ButtonsNB.TPage.TTPopUpBtn` |
| Handler node | `function:0146c240` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["TTPopUpBtn"] -->|OnClick| handler["FUN_0146c240"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000146C240__FUN_0146c240.c](../../../DecompiledSources/Tina16/functions/000000000146C240__FUN_0146c240.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CSysTextDlg.ButtonsNB.TPage.TTPopUpBtn.OnClick.
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
- Extracted glyph: [`0052_CSysTextDlg_CSysTextDlg_ButtonsNB_TPage_TTPopUpBtn_Glyph_Data.png`](../../../glyph/0052_CSysTextDlg_CSysTextDlg_ButtonsNB_TPage_TTPopUpBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
