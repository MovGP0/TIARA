# Show/Hide curves

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.DFToolPanel.ToolNoteBook.Diagram.ShowHideCurvesBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Show/Hide curves |
| Text | Not present in the recovered resource. |
| Handler name | ShowHideCurvesBtnClick |
| Handler address | 01a8aa00 |
| Graph node | `resource:dfm:DFWindow/DFWindow.DFToolPanel.ToolNoteBook.Diagram.ShowHideCurvesBtn` |
| Handler node | `function:01a8aa00` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Show/Hide curves"] -->|OnClick| handler["FUN_01a8aa00"]
    handler --> call1["FUN_01a8aa10"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A8AA00__FUN_01a8aa00.c](../../../DecompiledSources/Tina16/functions/0000000001A8AA00__FUN_01a8aa00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFWindow.DFToolPanel.ToolNoteBook.Diagram.ShowHideCurvesBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01a8aa10` — Handles 1 Delphi UI event: DFWindow.DFMainMenu.DFViewMnu.ShowHidecurvesMnu.OnClick.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0104_DFWindow_DFWindow_DFToolPanel_ToolNoteBook_Diagram_ShowHideCurvesBtn_Glyph_Data.png`](../../../glyph/0104_DFWindow_DFWindow_DFToolPanel_ToolNoteBook_Diagram_ShowHideCurvesBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
