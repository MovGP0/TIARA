# Clear pin swap

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PcbForm4 |
| Component path | PcbForm4.Panel1.BtnClearPinSwap |
| Control class | TBitBtn |
| Caption | Clear pin swap |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | BtnClearPinSwapClick |
| Handler address | 00ec7600 |
| Graph node | `resource:dfm:PcbForm4/PcbForm4.Panel1.BtnClearPinSwap` |
| Handler node | `function:00ec7600` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Clear pin swap"] -->|OnClick| handler["FUN_00ec7600"]
    handler --> call1["FUN_00ec0380"]
    handler --> call2["FUN_00ec0aa0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000EC7600__FUN_00ec7600.c](../../../DecompiledSources/Tina16/functions/0000000000EC7600__FUN_00ec7600.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PcbForm4.Panel1.BtnClearPinSwap.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00ec0380` — FUN_00ec0380
- `function:00ec0aa0` — FUN_00ec0aa0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Invalid node at distance 168.
- Rank 2: Swapped node at distance 189.
- Rank 3:  Valid node at distance 207.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
