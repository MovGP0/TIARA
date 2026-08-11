# Add Existing File...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pmProjectProperties.mnAddTo |
| Control class | TMenuItem |
| Caption | Add Existing File... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnAddToClick |
| Handler address | 01084560 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pmProjectProperties.mnAddTo` |
| Handler node | `function:01084560` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Add Existing File..."] -->|OnClick| handler["FUN_01084560"]
    handler --> call1["FUN_01083fb0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001084560__FUN_01084560.c](../../../DecompiledSources/Tina16/functions/0000000001084560__FUN_01084560.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pmProjectProperties.mnAddTo.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01083fb0` — Handles 2 Delphi UI events: MCUProjectForm.pnToolbar.sbAddToProject.OnClick, MCUProjectForm.pmAddToProject.mnAdd.OnClick.

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
