# Scroll left

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.DFToolPanel.ToolNoteBook.Diagram.LeftScrollBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Scroll left |
| Text | Not present in the recovered resource. |
| Handler name | LeftScrollBtnClick |
| Handler address | 01a79e40 |
| Graph node | `resource:dfm:DFWindow/DFWindow.DFToolPanel.ToolNoteBook.Diagram.LeftScrollBtn` |
| Handler node | `function:01a79e40` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Scroll left"] -->|OnClick| handler["FUN_01a79e40"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_0082a6c0"]
    handler --> call3["FUN_01a794b0"]
    handler --> call4["Shared diagram and display left-scroll operation"]
    handler --> call5["FUN_01aed550"]
    handler --> call6["FUN_01aee720"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A79E40__FUN_01a79e40.c](../../../DecompiledSources/Tina16/functions/0000000001A79E40__FUN_01a79e40.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFWindow.DFToolPanel.ToolNoteBook.Diagram.LeftScrollBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0082a6c0` — FUN_0082a6c0
- `function:01a794b0` — Handles 1 Delphi UI event: DFWindow.DFToolPanel.ToolNoteBook.Diagram.DFSelectBtn.OnClick.
- `function:01ae2ab0` — Shared diagram and display left-scroll operation
- `function:01aed550` — FUN_01aed550
- `function:01aee720` — FUN_01aee720

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0089_DFWindow_DFWindow_DFToolPanel_ToolNoteBook_Diagram_LeftScrollBtn_Glyph_Data.png`](../../../glyph/0089_DFWindow_DFWindow_DFToolPanel_ToolNoteBook_Diagram_LeftScrollBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
