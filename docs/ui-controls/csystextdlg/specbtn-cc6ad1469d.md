# Special character

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CSysTextDlg |
| Component path | CSysTextDlg.ToolsPanel.ToolsNB.Edit.SpecBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Special character |
| Text | Not present in the recovered resource. |
| Handler name | SpecBtnClick |
| Handler address | 014697f0 |
| Graph node | `resource:dfm:CSysTextDlg/CSysTextDlg.ToolsPanel.ToolsNB.Edit.SpecBtn` |
| Handler node | `function:014697f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Special character"] -->|OnClick| handler["FUN_014697f0"]
    handler --> call1["FUN_014695a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014697F0__FUN_014697f0.c](../../../DecompiledSources/Tina16/functions/00000000014697F0__FUN_014697f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CSysTextDlg.ToolsPanel.ToolsNB.Edit.SpecBtn.OnClick.
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
- Extracted glyph: [`0046_CSysTextDlg_CSysTextDlg_ToolsPanel_ToolsNB_Edit_SpecBtn_Glyph_Data.png`](../../../glyph/0046_CSysTextDlg_CSysTextDlg_ToolsPanel_ToolsNB_Edit_SpecBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
