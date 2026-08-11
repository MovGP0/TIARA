# Passive

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Analog_form1 |
| Component path | Analog_form1.Passive_RadioButton2 |
| Control class | TRadioButton |
| Caption | Passive |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | Passive_RadioButton2Click |
| Handler address | 01235730 |
| Graph node | `resource:dfm:Analog_form1/Analog_form1.Passive_RadioButton2` |
| Handler node | `function:01235730` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Passive"] -->|OnClick| handler["FUN_01235730"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_00416780"]
    handler --> call3["FUN_0043fc00"]
    handler --> call4["FUN_0064dbe0"]
    handler --> call5["VCL control text setter with change suppression"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001235730__FUN_01235730.c](../../../DecompiledSources/Tina16/functions/0000000001235730__FUN_01235730.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: Analog_form1.Passive_RadioButton2.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416780` — FUN_00416780
- `function:0043fc00` — FUN_0043fc00
- `function:0064dbe0` — FUN_0064dbe0
- `function:0064de00` — VCL control text setter with change suppression

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
