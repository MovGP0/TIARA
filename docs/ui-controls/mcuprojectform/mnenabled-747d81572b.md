# Enabled

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pmBreakpoints.mnEnabled |
| Control class | TMenuItem |
| Caption | Enabled |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnEnabledClick |
| Handler address | 0108a140 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pmBreakpoints.mnEnabled` |
| Handler node | `function:0108a140` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Enabled"] -->|OnClick| handler["FUN_0108a140"]
    handler --> call1["FUN_006d5120"]
    handler --> call2["FUN_01088c80"]
    handler --> call3["FUN_010ae5f0"]
    handler --> call4["FUN_010ae9a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108A140__FUN_0108a140.c](../../../DecompiledSources/Tina16/functions/000000000108A140__FUN_0108a140.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pmBreakpoints.mnEnabled.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:006d5120` — FUN_006d5120
- `function:01088c80` — FUN_01088c80
- `function:010ae5f0` — FUN_010ae5f0
- `function:010ae9a0` — FUN_010ae9a0

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
