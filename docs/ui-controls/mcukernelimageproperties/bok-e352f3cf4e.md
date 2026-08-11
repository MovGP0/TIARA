# bOK

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUKernelImageProperties |
| Component path | MCUKernelImageProperties.bOK |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bOKClick |
| Handler address | 01415220 |
| Graph node | `resource:dfm:MCUKernelImageProperties/MCUKernelImageProperties.bOK` |
| Handler node | `function:01415220` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["bOK"] -->|OnClick| handler["FUN_01415220"]
    handler --> call1["Delphi UnicodeString assignment helper"]
    handler --> call2["FUN_01415c80"]
    handler --> call3["FUN_016fd940"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001415220__FUN_01415220.c](../../../DecompiledSources/Tina16/functions/0000000001415220__FUN_01415220.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUKernelImageProperties.bOK.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:01415c80` — FUN_01415c80
- `function:016fd940` — FUN_016fd940

## Resource evidence

- Kind: bkOK
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Optional at distance 136.
- Rank 2: Frame buffer end at distance 206.
- Rank 3: Frame buffer start:  at distance 236.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
