# Ch&eck

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Analog_form1 |
| Component path | Analog_form1.CheckBitBtn2 |
| Control class | TBitBtn |
| Caption | Ch&eck |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | CheckBitBtn2Click |
| Handler address | 01234120 |
| Graph node | `resource:dfm:Analog_form1/Analog_form1.CheckBitBtn2` |
| Handler node | `function:01234120` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Ch&eck"] -->|OnClick| handler["FUN_01234120"]
    handler --> call1["VCL control text setter with change suppression"]
    handler --> call2["FUN_00806af0"]
    handler --> call3["FUN_00806b40"]
    handler --> call4["FUN_01175da0"]
    handler --> call5["FUN_012281f0"]
    handler --> call6["FUN_0122db90"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001234120__FUN_01234120.c](../../../DecompiledSources/Tina16/functions/0000000001234120__FUN_01234120.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: Analog_form1.CheckBitBtn2.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:0064de00` — VCL control text setter with change suppression
- `function:00806af0` — FUN_00806af0
- `function:00806b40` — FUN_00806b40
- `function:01175da0` — FUN_01175da0
- `function:012281f0` — FUN_012281f0
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

- Rank 1: leptek at distance 331.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
