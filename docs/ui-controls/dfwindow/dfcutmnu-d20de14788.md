# Cu&t

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.DFMainMenu.DFEditMnu.DFCutMnu |
| Control class | TMenuItem |
| Caption | Cu&t |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | DFCutMnuClick |
| Handler address | 01a87da0 |
| Graph node | `resource:dfm:DFWindow/DFWindow.DFMainMenu.DFEditMnu.DFCutMnu` |
| Handler node | `function:01a87da0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Cu&t"] -->|OnClick| handler["FUN_01a87da0"]
    handler --> call1["FUN_01a7e760"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A87DA0__FUN_01a87da0.c](../../../DecompiledSources/Tina16/functions/0000000001A87DA0__FUN_01a87da0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFWindow.DFMainMenu.DFEditMnu.DFCutMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01a7e760` — Handles 2 Delphi UI events: DFWindow.DFToolPanel.ToolNoteBook.Diagram.DFCopyBtn.OnClick, DFWindow.DFMainMenu.DFEditMnu.DFCopyMnu.OnClick.

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
