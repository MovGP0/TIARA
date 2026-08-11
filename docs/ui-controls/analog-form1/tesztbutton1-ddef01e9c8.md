# TESZT

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Analog_form1 |
| Component path | Analog_form1.TesztButton1 |
| Control class | TButton |
| Caption | TESZT |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | TesztButton1Click |
| Handler address | 01236490 |
| Graph node | `resource:dfm:Analog_form1/Analog_form1.TesztButton1` |
| Handler node | `function:01236490` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["TESZT"] -->|OnClick| handler["FUN_01236490"]
    handler --> call1["FUN_007fc180"]
    handler --> call2["FUN_008059a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001236490__FUN_01236490.c](../../../DecompiledSources/Tina16/functions/0000000001236490__FUN_01236490.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: Analog_form1.TesztButton1.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:007fc180` — FUN_007fc180
- `function:008059a0` — FUN_008059a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: leptek at distance 555.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
