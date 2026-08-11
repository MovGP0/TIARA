# Normal zoom

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.DFToolPanel.ToolNoteBook.Diagram.NormalZoomBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Normal zoom |
| Text | Not present in the recovered resource. |
| Handler name | NormalZoomBtnClick |
| Handler address | 01a7a150 |
| Graph node | `resource:dfm:DFWindow/DFWindow.DFToolPanel.ToolNoteBook.Diagram.NormalZoomBtn` |
| Handler node | `function:01a7a150` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Normal zoom"] -->|OnClick| handler["FUN_01a7a150"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_0082a6c0"]
    handler --> call3["FUN_01a782f0"]
    handler --> call4["FUN_01a794b0"]
    handler --> call5["FUN_01aceb90"]
    handler --> call6["FUN_01acf9e0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A7A150__FUN_01a7a150.c](../../../DecompiledSources/Tina16/functions/0000000001A7A150__FUN_01a7a150.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFWindow.DFToolPanel.ToolNoteBook.Diagram.NormalZoomBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 12

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0082a6c0` — FUN_0082a6c0
- `function:01a782f0` — FUN_01a782f0
- `function:01a794b0` — Handles 1 Delphi UI event: DFWindow.DFToolPanel.ToolNoteBook.Diagram.DFSelectBtn.OnClick.
- `function:01aceb90` — FUN_01aceb90
- `function:01acf9e0` — FUN_01acf9e0
- `function:01acfa60` — FUN_01acfa60
- `function:01acfc60` — FUN_01acfc60
- `function:01ad9580` — FUN_01ad9580
- `function:01add6f0` — FUN_01add6f0
- `function:01aed550` — FUN_01aed550
- `function:01aee720` — FUN_01aee720

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0096_DFWindow_DFWindow_DFToolPanel_ToolNoteBook_Diagram_NormalZoomBtn_Glyph_Data.png`](../../../glyph/0096_DFWindow_DFWindow_DFToolPanel_ToolNoteBook_Diagram_NormalZoomBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
