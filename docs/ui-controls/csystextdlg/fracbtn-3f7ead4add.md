# Fraction

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CSysTextDlg |
| Component path | CSysTextDlg.ToolsPanel.ToolsNB.Edit.FracBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Fraction |
| Text | Not present in the recovered resource. |
| Handler name | FracBtnClick |
| Handler address | 01469770 |
| Graph node | `resource:dfm:CSysTextDlg/CSysTextDlg.ToolsPanel.ToolsNB.Edit.FracBtn` |
| Handler node | `function:01469770` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Fraction"] -->|OnClick| handler["FUN_01469770"]
    handler --> call1["FUN_014695a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001469770__FUN_01469770.c](../../../DecompiledSources/Tina16/functions/0000000001469770__FUN_01469770.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CSysTextDlg.ToolsPanel.ToolsNB.Edit.FracBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:014695a0` — FUN_014695a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0044_CSysTextDlg_CSysTextDlg_ToolsPanel_ToolsNB_Edit_FracBtn_Glyph_Data.png`](../../../glyph/0044_CSysTextDlg_CSysTextDlg_ToolsPanel_ToolsNB_Edit_FracBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
