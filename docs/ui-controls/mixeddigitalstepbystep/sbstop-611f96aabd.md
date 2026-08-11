# Stop|

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MixedDigitalStepByStep |
| Component path | MixedDigitalStepByStep.Panel2.sbStop |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Stop\| |
| Text | Not present in the recovered resource. |
| Handler name | sbStopClick |
| Handler address | 0133bc70 |
| Graph node | `resource:dfm:MixedDigitalStepByStep/MixedDigitalStepByStep.Panel2.sbStop` |
| Handler node | `function:0133bc70` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Stop|"] -->|OnClick| handler["FUN_0133bc70"]
    handler --> call1["FUN_0133b9b0"]
    handler --> call2["FUN_01c80a70"]
    handler --> call3["FUN_01c87d20"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000133BC70__FUN_0133bc70.c](../../../DecompiledSources/Tina16/functions/000000000133BC70__FUN_0133bc70.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MixedDigitalStepByStep.Panel2.sbStop.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:0133b9b0` — FUN_0133b9b0
- `function:01c80a70` — FUN_01c80a70
- `function:01c87d20` — FUN_01c87d20

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0277_MixedDigitalStepByStep_MixedDigitalStepByStep_Panel2_sbStop_Glyph_Data.png`](../../../glyph/0277_MixedDigitalStepByStep_MixedDigitalStepByStep_Panel2_sbStop_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
