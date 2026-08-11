# View

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CSysTextDlg |
| Component path | CSysTextDlg.ToolsPanel.ViewBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | View |
| Text | Not present in the recovered resource. |
| Handler name | ViewBtnClick |
| Handler address | 0146a6e0 |
| Graph node | `resource:dfm:CSysTextDlg/CSysTextDlg.ToolsPanel.ViewBtn` |
| Handler node | `function:0146a6e0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["View"] -->|OnClick| handler["FUN_0146a6e0"]
    handler --> call1["FUN_006d8180"]
    handler --> call2["FUN_0074a520"]
    handler --> call3["FUN_0146af40"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000146A6E0__FUN_0146a6e0.c](../../../DecompiledSources/Tina16/functions/000000000146A6E0__FUN_0146a6e0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CSysTextDlg.ToolsPanel.ViewBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:006d8180` — FUN_006d8180
- `function:0074a520` — FUN_0074a520
- `function:0146af40` — Handles 1 Delphi UI event: CSysTextDlg.MainNB.TPage.ScrollBox.DrawRectangle.OnPaint.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0041_CSysTextDlg_CSysTextDlg_ToolsPanel_ViewBtn_Glyph_Data.png`](../../../glyph/0041_CSysTextDlg_CSysTextDlg_ToolsPanel_ViewBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
