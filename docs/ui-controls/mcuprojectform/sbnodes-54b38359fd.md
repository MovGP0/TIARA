# N

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pnToolbar.sbNodes |
| Control class | TSpeedButton |
| Caption | N |
| Hint | Show node states |
| Text | Not present in the recovered resource. |
| Handler name | sbNodesClick |
| Handler address | 0108bb70 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pnToolbar.sbNodes` |
| Handler node | `function:0108bb70` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["N"] -->|OnClick| handler["FUN_0108bb70"]
    handler --> call1["FUN_0080cc70"]
    handler --> call2["FUN_0199ded0"]
    handler --> call3["FUN_01ca2aa0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108BB70__FUN_0108bb70.c](../../../DecompiledSources/Tina16/functions/000000000108BB70__FUN_0108bb70.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pnToolbar.sbNodes.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:0080cc70` — FUN_0080cc70
- `function:0199ded0` — FUN_0199ded0
- `function:01ca2aa0` — FUN_01ca2aa0

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
