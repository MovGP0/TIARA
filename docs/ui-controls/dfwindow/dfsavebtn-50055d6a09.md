# Save

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.DFToolPanel.DFSaveBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Save |
| Text | Not present in the recovered resource. |
| Handler name | DFSaveMnuClick |
| Handler address | 01a846c0 |
| Graph node | `resource:dfm:DFWindow/DFWindow.DFToolPanel.DFSaveBtn` |
| Handler node | `function:01a846c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Save"] -->|OnClick| handler["FUN_01a846c0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_00416db0"]
    handler --> call3["FUN_0082a6c0"]
    handler --> call4["FUN_01155ce0"]
    handler --> call5["FUN_01a794b0"]
    handler --> call6["FUN_01a7e680"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A846C0__FUN_01a846c0.c](../../../DecompiledSources/Tina16/functions/0000000001A846C0__FUN_01a846c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: DFWindow.DFToolPanel.DFSaveBtn.OnClick, DFWindow.DFMainMenu.DFFileMnu.DFSaveMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 8

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00416db0` — FUN_00416db0
- `function:0082a6c0` — FUN_0082a6c0
- `function:01155ce0` — FUN_01155ce0
- `function:01a794b0` — Handles 1 Delphi UI event: DFWindow.DFToolPanel.ToolNoteBook.Diagram.DFSelectBtn.OnClick.
- `function:01a7e680` — Handles 1 Delphi UI event: DFWindow.DFMainMenu.DFFileMnu.DFSaveAsMnu.OnClick.
- `function:01aed550` — FUN_01aed550
- `function:01aee720` — FUN_01aee720

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0082_DFWindow_DFWindow_DFToolPanel_DFSaveBtn_Glyph_Data.png`](../../../glyph/0082_DFWindow_DFWindow_DFToolPanel_DFSaveBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
