# Text

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.DFToolPanel.ToolNoteBook.Diagram.DFTextBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Text |
| Text | Not present in the recovered resource. |
| Handler name | DFTextBtnClick |
| Handler address | 01a7a4a0 |
| Graph node | `resource:dfm:DFWindow/DFWindow.DFToolPanel.ToolNoteBook.Diagram.DFTextBtn` |
| Handler node | `function:01a7a4a0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Text"] -->|OnClick| handler["FUN_01a7a4a0"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["Delphi UnicodeString clear and finalization helper"]
    handler --> call3["FUN_00498310"]
    handler --> call4["FUN_00498350"]
    handler --> call5["FUN_0064e140"]
    handler --> call6["FUN_0080cc70"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A7A4A0__FUN_01a7a4a0.c](../../../DecompiledSources/Tina16/functions/0000000001A7A4A0__FUN_01a7a4a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFWindow.DFToolPanel.ToolNoteBook.Diagram.DFTextBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 19

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00498310` — FUN_00498310
- `function:00498350` — FUN_00498350
- `function:0064e140` — FUN_0064e140
- `function:0080cc70` — FUN_0080cc70
- `function:0082a6c0` — FUN_0082a6c0
- `function:0146a1d0` — FUN_0146a1d0
- `function:0146a9a0` — FUN_0146a9a0
- `function:01a5d940` — FUN_01a5d940
- `function:01a5eb60` — FUN_01a5eb60
- `function:01a5ee60` — FUN_01a5ee60
- `function:01a5eed0` — FUN_01a5eed0
- `function:01a5f250` — FUN_01a5f250
- `function:01a794b0` — Handles 1 Delphi UI event: DFWindow.DFToolPanel.ToolNoteBook.Diagram.DFSelectBtn.OnClick.
- `function:01a8dd40` — FUN_01a8dd40
- `function:01aebb40` — FUN_01aebb40
- `function:01aed550` — FUN_01aed550
- `function:01aee720` — FUN_01aee720

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0098_DFWindow_DFWindow_DFToolPanel_ToolNoteBook_Diagram_DFTextBtn_Glyph_Data.png`](../../../glyph/0098_DFWindow_DFWindow_DFToolPanel_ToolNoteBook_Diagram_DFTextBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
