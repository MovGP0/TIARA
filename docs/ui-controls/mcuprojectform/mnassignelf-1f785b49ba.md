# Assign ELF/HEX manually...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.MainMenu.mnProject.mnAssignElf |
| Control class | TMenuItem |
| Caption | Assign ELF/HEX manually... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnAssignElfClick |
| Handler address | 0108d670 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.MainMenu.mnProject.mnAssignElf` |
| Handler node | `function:0108d670` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Assign ELF/HEX manually..."] -->|OnClick| handler["FUN_0108d670"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_004b9f40"]
    handler --> call3["FUN_007fc180"]
    handler --> call4["FUN_010b2840"]
    handler --> call5["FUN_010b3ad0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108D670__FUN_0108d670.c](../../../DecompiledSources/Tina16/functions/000000000108D670__FUN_0108d670.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.MainMenu.mnProject.mnAssignElf.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:004b9f40` — FUN_004b9f40
- `function:007fc180` — FUN_007fc180
- `function:010b2840` — FUN_010b2840
- `function:010b3ad0` — FUN_010b3ad0

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
