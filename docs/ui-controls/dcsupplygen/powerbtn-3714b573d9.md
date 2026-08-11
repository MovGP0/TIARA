# On

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DCSupplyGen |
| Component path | DCSupplyGen.PowerBtn |
| Control class | TSpeedButton |
| Caption | On |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | PowerBtnClick |
| Handler address | 010d9630 |
| Graph node | `resource:dfm:DCSupplyGen/DCSupplyGen.PowerBtn` |
| Handler node | `function:010d9630` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["On"] -->|OnClick| handler["FUN_010d9630"]
    handler --> call1["FUN_00e1d9a0"]
    handler --> call2["FUN_010d8b90"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000010D9630__FUN_010d9630.c](../../../DecompiledSources/Tina16/functions/00000000010D9630__FUN_010d9630.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DCSupplyGen.PowerBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00e1d9a0` — FUN_00e1d9a0
- `function:010d8b90` — FUN_010d8b90

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: POWER at distance 24.
- Rank 2: V3 at distance 53.
- Rank 3: V2 at distance 73.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
