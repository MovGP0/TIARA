# Refresh Eclipse Project

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.MainMenu.mnFile.mnRefreshXMCProject |
| Control class | TMenuItem |
| Caption | Refresh Eclipse Project |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnRefreshXMCProjectClick |
| Handler address | 0108d740 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.MainMenu.mnFile.mnRefreshXMCProject` |
| Handler node | `function:0108d740` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Refresh Eclipse Project"] -->|OnClick| handler["FUN_0108d740"]
    handler --> call1["FUN_010792a0"]
    handler --> call2["FUN_0107a0c0"]
    handler --> call3["FUN_01081ce0"]
    handler --> call4["FUN_01085110"]
    handler --> call5["FUN_01607d20"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108D740__FUN_0108d740.c](../../../DecompiledSources/Tina16/functions/000000000108D740__FUN_0108d740.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.MainMenu.mnFile.mnRefreshXMCProject.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:010792a0` — FUN_010792a0
- `function:0107a0c0` — FUN_0107a0c0
- `function:01081ce0` — FUN_01081ce0
- `function:01085110` — FUN_01085110
- `function:01607d20` — FUN_01607d20

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
