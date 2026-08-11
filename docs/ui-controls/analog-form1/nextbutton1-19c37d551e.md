# &Build

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Analog_form1 |
| Component path | Analog_form1.NEXTButton1 |
| Control class | TBitBtn |
| Caption | &Build |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | NEXTButton1Click |
| Handler address | 0122e740 |
| Graph node | `resource:dfm:Analog_form1/Analog_form1.NEXTButton1` |
| Handler node | `function:0122e740` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Build"] -->|OnClick| handler["FUN_0122e740"]
    handler --> call1["FUN_0064cbf0"]
    handler --> call2["FUN_0064cc50"]
    handler --> call3["VCL control text setter with change suppression"]
    handler --> call4["FUN_0064e770"]
    handler --> call5["FUN_00805200"]
    handler --> call6["FUN_00805990"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000122E740__FUN_0122e740.c](../../../DecompiledSources/Tina16/functions/000000000122E740__FUN_0122e740.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: Analog_form1.NEXTButton1.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 13

## Direct calls

- `function:0064cbf0` — FUN_0064cbf0
- `function:0064cc50` — FUN_0064cc50
- `function:0064de00` — VCL control text setter with change suppression
- `function:0064e770` — FUN_0064e770
- `function:00805200` — FUN_00805200
- `function:00805990` — FUN_00805990
- `function:008059a0` — FUN_008059a0
- `function:00806af0` — FUN_00806af0
- `function:00806b40` — FUN_00806b40
- `function:01175da0` — FUN_01175da0
- `function:012281f0` — FUN_012281f0
- `function:01228900` — FUN_01228900
- `function:0122db90` — FUN_0122db90

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: leptek at distance 259.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
