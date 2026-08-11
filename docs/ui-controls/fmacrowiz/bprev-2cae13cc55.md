# < Back

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | fMacroWiz |
| Component path | fMacroWiz.pBottom.bprev |
| Control class | TButton |
| Caption | < Back |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bprevClick |
| Handler address | 01c3b7c0 |
| Graph node | `resource:dfm:fMacroWiz/fMacroWiz.pBottom.bprev` |
| Handler node | `function:01c3b7c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["< Back"] -->|OnClick| handler["FUN_01c3b7c0"]
    handler --> call1["FUN_006d78a0"]
    handler --> call2["FUN_01c38160"]
    handler --> call3["FUN_01c38920"]
    handler --> call4["FUN_01c3b7c0"]
    handler --> call5["FUN_01c3bee0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C3B7C0__FUN_01c3b7c0.c](../../../DecompiledSources/Tina16/functions/0000000001C3B7C0__FUN_01c3b7c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: fMacroWiz.pBottom.bprev.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:006d78a0` — FUN_006d78a0
- `function:01c38160` — FUN_01c38160
- `function:01c38920` — FUN_01c38920
- `function:01c3b7c0` — Handles 1 Delphi UI event: fMacroWiz.pBottom.bprev.OnClick.
- `function:01c3bee0` — Handles 1 Delphi UI event: fMacroWiz.pcMWiz.OnChange.

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
