# Format

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.CursorPanel.Notebook1.Smith.SmFormatRG |
| Control class | TRadioGroup |
| Caption | Format |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SmFormatRGClick |
| Handler address | 01a8b860 |
| Graph node | `resource:dfm:DFWindow/DFWindow.CursorPanel.Notebook1.Smith.SmFormatRG` |
| Handler node | `function:01a8b860` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Format"] -->|OnClick| handler["FUN_01a8b860"]
    handler --> call1["FUN_01a8b560"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A8B860__FUN_01a8b860.c](../../../DecompiledSources/Tina16/functions/0000000001A8B860__FUN_01a8b860.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFWindow.CursorPanel.Notebook1.Smith.SmFormatRG.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01a8b560` — FUN_01a8b560

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: ("Re/Im", "Mag/Ph (°)")
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
