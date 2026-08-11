# Step Forward|

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MixedDigitalStepByStep |
| Component path | MixedDigitalStepByStep.Panel2.sbNext |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Step Forward\| |
| Text | Not present in the recovered resource. |
| Handler name | sbNextClick |
| Handler address | 0133bcd0 |
| Graph node | `resource:dfm:MixedDigitalStepByStep/MixedDigitalStepByStep.Panel2.sbNext` |
| Handler node | `function:0133bcd0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Step Forward|"] -->|OnClick| handler["FUN_0133bcd0"]
    handler --> call1["FUN_0082a6c0"]
    handler --> call2["FUN_0082a890"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000133BCD0__FUN_0133bcd0.c](../../../DecompiledSources/Tina16/functions/000000000133BCD0__FUN_0133bcd0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MixedDigitalStepByStep.Panel2.sbNext.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0082a6c0` — FUN_0082a6c0
- `function:0082a890` — FUN_0082a890

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0276_MixedDigitalStepByStep_MixedDigitalStepByStep_Panel2_sbNext_Glyph_Data.png`](../../../glyph/0276_MixedDigitalStepByStep_MixedDigitalStepByStep_Panel2_sbNext_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
