# Shift up

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.DFToolPanel.ToolNoteBook.Diagram.UpScrollCSBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Shift up |
| Text | Not present in the recovered resource. |
| Handler name | UpScrollCSBtnClick |
| Handler address | 01a7a2b0 |
| Graph node | `resource:dfm:DFWindow/DFWindow.DFToolPanel.ToolNoteBook.Diagram.UpScrollCSBtn` |
| Handler node | `function:01a7a2b0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Shift up"] -->|OnClick| handler["FUN_01a7a2b0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_0082a6c0"]
    handler --> call3["FUN_01a794b0"]
    handler --> call4["FUN_01a89e80"]
    handler --> call5["FUN_01ad1480"]
    handler --> call6["FUN_01aed550"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A7A2B0__FUN_01a7a2b0.c](../../../DecompiledSources/Tina16/functions/0000000001A7A2B0__FUN_01a7a2b0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFWindow.DFToolPanel.ToolNoteBook.Diagram.UpScrollCSBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0082a6c0` — FUN_0082a6c0
- `function:01a794b0` — Handles 1 Delphi UI event: DFWindow.DFToolPanel.ToolNoteBook.Diagram.DFSelectBtn.OnClick.
- `function:01a89e80` — FUN_01a89e80
- `function:01ad1480` — FUN_01ad1480
- `function:01aed550` — FUN_01aed550
- `function:01aee720` — FUN_01aee720

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0093_DFWindow_DFWindow_DFToolPanel_ToolNoteBook_Diagram_UpScrollCSBtn_Glyph_Data.png`](../../../glyph/0093_DFWindow_DFWindow_DFToolPanel_ToolNoteBook_Diagram_UpScrollCSBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
