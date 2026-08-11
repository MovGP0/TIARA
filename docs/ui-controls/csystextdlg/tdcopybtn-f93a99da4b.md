# Copy to Clipboard

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CSysTextDlg |
| Component path | CSysTextDlg.ToolsPanel.ToolsNB.View.TDCopyBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Copy to Clipboard |
| Text | Not present in the recovered resource. |
| Handler name | TDCopyBtnClick |
| Handler address | 0146c5f0 |
| Graph node | `resource:dfm:CSysTextDlg/CSysTextDlg.ToolsPanel.ToolsNB.View.TDCopyBtn` |
| Handler node | `function:0146c5f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Copy to Clipboard"] -->|OnClick| handler["FUN_0146c5f0"]
    handler --> call1["FUN_006809e0"]
    handler --> call2["FUN_00680ad0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000146C5F0__FUN_0146c5f0.c](../../../DecompiledSources/Tina16/functions/000000000146C5F0__FUN_0146c5f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CSysTextDlg.ToolsPanel.ToolsNB.View.TDCopyBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:006809e0` — FUN_006809e0
- `function:00680ad0` — FUN_00680ad0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0043_CSysTextDlg_CSysTextDlg_ToolsPanel_ToolsNB_View_TDCopyBtn_Glyph_Data.png`](../../../glyph/0043_CSysTextDlg_CSysTextDlg_ToolsPanel_ToolsNB_View_TDCopyBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
