# Select Image...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUAsmSelector |
| Component path | MCUAsmSelector.bKernelImage |
| Control class | TButton |
| Caption | Select Image... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bKernelImageClick |
| Handler address | 01419c00 |
| Graph node | `resource:dfm:MCUAsmSelector/MCUAsmSelector.bKernelImage` |
| Handler node | `function:01419c00` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Select Image..."] -->|OnClick| handler["FUN_01419c00"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_007fc180"]
    handler --> call3["FUN_010b41b0"]
    handler --> call4["FUN_014155c0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001419C00__FUN_01419c00.c](../../../DecompiledSources/Tina16/functions/0000000001419C00__FUN_01419c00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUAsmSelector.bKernelImage.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:007fc180` — FUN_007fc180
- `function:010b41b0` — FUN_010b41b0
- `function:014155c0` — FUN_014155c0

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
