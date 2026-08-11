# bOK

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | dlgFlowchartInterrupti8051PWM |
| Component path | dlgFlowchartInterrupti8051PWM.bOK |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bOKClick |
| Handler address | 00fc94f0 |
| Graph node | `resource:dfm:dlgFlowchartInterrupti8051PWM/dlgFlowchartInterrupti8051PWM.bOK` |
| Handler node | `function:00fc94f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["bOK"] -->|OnClick| handler["FUN_00fc94f0"]
    handler --> call1["FUN_0040c770"]
    handler --> call2["FUN_00b90090"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000FC94F0__FUN_00fc94f0.c](../../../DecompiledSources/Tina16/functions/0000000000FC94F0__FUN_00fc94f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: dlgFlowchartInterrupti8051PWM.bOK.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0040c770` — FUN_0040c770
- `function:00b90090` — FUN_00b90090

## Resource evidence

- Kind: bkOK
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: PWM Period: at distance 83.
- Rank 2: Max Duty Cycle:  at distance 114.
- Rank 3: Max Period:  at distance 138.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
