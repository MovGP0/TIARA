# Print pre&view

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.DFMainMenu.DFFileMnu.DFPrintpreviewMnu |
| Control class | TMenuItem |
| Caption | Print pre&view |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | DFPrintpreviewMnuClick |
| Handler address | 01a7ce40 |
| Graph node | `resource:dfm:DFWindow/DFWindow.DFMainMenu.DFFileMnu.DFPrintpreviewMnu` |
| Handler node | `function:01a7ce40` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Print pre&view"] -->|OnClick| handler["FUN_01a7ce40"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_005fd4e0"]
    handler --> call3["FUN_005fd640"]
    handler --> call4["FUN_005fdab0"]
    handler --> call5["FUN_005fdcb0"]
    handler --> call6["FUN_0064d0b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A7CE40__FUN_01a7ce40.c](../../../DecompiledSources/Tina16/functions/0000000001A7CE40__FUN_01a7ce40.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: DFWindow.DFToolPanel.ToolNoteBook.Print.DFCancelBtn.OnClick, DFWindow.DFMainMenu.DFFileMnu.DFPrintpreviewMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 13

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:005fd4e0` — FUN_005fd4e0
- `function:005fd640` — FUN_005fd640
- `function:005fdab0` — FUN_005fdab0
- `function:005fdcb0` — FUN_005fdcb0
- `function:0064d0b0` — FUN_0064d0b0
- `function:0064d120` — FUN_0064d120
- `function:0064e030` — FUN_0064e030
- `function:006d8180` — FUN_006d8180
- `function:007e2d20` — FUN_007e2d20
- `function:01a77f90` — Handles 1 Delphi UI event: DFWindow.OnResize.
- `function:01aed550` — FUN_01aed550
- `function:01aee720` — FUN_01aee720

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
