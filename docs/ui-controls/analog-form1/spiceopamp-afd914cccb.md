# Spice opamp

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Analog_form1 |
| Component path | Analog_form1.OpampTypeGroupBox7.SPICEOPAMP |
| Control class | TRadioButton |
| Caption | Spice opamp |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SPICEOPAMPClick |
| Handler address | 01233ea0 |
| Graph node | `resource:dfm:Analog_form1/Analog_form1.OpampTypeGroupBox7.SPICEOPAMP` |
| Handler node | `function:01233ea0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Spice opamp"] -->|OnClick| handler["FUN_01233ea0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString assignment helper"]
    handler --> call3["FUN_0064dbe0"]
    handler --> call4["VCL control Unicode text reader"]
    handler --> call5["VCL control text setter with change suppression"]
    handler --> call6["FUN_017105e0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001233EA0__FUN_01233ea0.c](../../../DecompiledSources/Tina16/functions/0000000001233EA0__FUN_01233ea0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: Analog_form1.OpampTypeGroupBox7.SPICEOPAMP.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:0064dbe0` — FUN_0064dbe0
- `function:0064dd90` — VCL control Unicode text reader
- `function:0064de00` — VCL control text setter with change suppression
- `function:017105e0` — FUN_017105e0
- `function:01717780` — FUN_01717780

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Vnn at distance 166.
- Rank 2: Vpp at distance 198.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
