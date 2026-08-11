# Save Project

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pnToolbar.sbSaveProject |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Save Project |
| Text | Not present in the recovered resource. |
| Handler name | sbSaveProjectClick |
| Handler address | 01079520 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pnToolbar.sbSaveProject` |
| Handler node | `function:01079520` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Save Project"] -->|OnClick| handler["FUN_01079520"]
    handler --> call1["FUN_010793a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001079520__FUN_01079520.c](../../../DecompiledSources/Tina16/functions/0000000001079520__FUN_01079520.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pnToolbar.sbSaveProject.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:010793a0` — FUN_010793a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0260_MCUProjectForm_MCUProjectForm_pnToolbar_sbSaveProject_Glyph_Data.png`](../../../glyph/0260_MCUProjectForm_MCUProjectForm_pnToolbar_sbSaveProject_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
