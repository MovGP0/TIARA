# A

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUKernelImageProperties |
| Component path | MCUKernelImageProperties.bAll |
| Control class | TBitBtn |
| Caption | A |
| Hint | Get All |
| Text | Not present in the recovered resource. |
| Handler name | bAllClick |
| Handler address | 01416740 |
| Graph node | `resource:dfm:MCUKernelImageProperties/MCUKernelImageProperties.bAll` |
| Handler node | `function:01416740` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["A"] -->|OnClick| handler["FUN_01416740"]
    handler --> call1["FUN_00724420"]
    handler --> call2["FUN_014162e0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001416740__FUN_01416740.c](../../../DecompiledSources/Tina16/functions/0000000001416740__FUN_01416740.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUKernelImageProperties.bAll.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00724420` — FUN_00724420
- `function:014162e0` — FUN_014162e0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Frame buffer start:  at distance 591.
- Rank 2: Frame buffer end at distance 621.
- Rank 3: Optional at distance 693.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
