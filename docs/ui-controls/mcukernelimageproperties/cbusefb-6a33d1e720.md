# Use frame buffer

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUKernelImageProperties |
| Component path | MCUKernelImageProperties.cbUseFb |
| Control class | TCheckBox |
| Caption | Use frame buffer |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | cbUseFbClick |
| Handler address | 014168a0 |
| Graph node | `resource:dfm:MCUKernelImageProperties/MCUKernelImageProperties.cbUseFb` |
| Handler node | `function:014168a0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Use frame buffer"] -->|OnClick| handler["FUN_014168a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014168A0__FUN_014168a0.c](../../../DecompiledSources/Tina16/functions/00000000014168A0__FUN_014168a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUKernelImageProperties.cbUseFb.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Frame buffer end at distance 24.
- Rank 2: Optional at distance 48.
- Rank 3: Frame buffer start:  at distance 54.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
