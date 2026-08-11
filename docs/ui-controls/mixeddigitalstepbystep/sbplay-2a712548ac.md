# Play|

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MixedDigitalStepByStep |
| Component path | MixedDigitalStepByStep.Panel2.sbPlay |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Play\| |
| Text | Not present in the recovered resource. |
| Handler name | sbPlayClick |
| Handler address | 0133bc30 |
| Graph node | `resource:dfm:MixedDigitalStepByStep/MixedDigitalStepByStep.Panel2.sbPlay` |
| Handler node | `function:0133bc30` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Play|"] -->|OnClick| handler["FUN_0133bc30"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000133BC30__FUN_0133bc30.c](../../../DecompiledSources/Tina16/functions/000000000133BC30__FUN_0133bc30.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MixedDigitalStepByStep.Panel2.sbPlay.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0274_MixedDigitalStepByStep_MixedDigitalStepByStep_Panel2_sbPlay_Glyph_Data.png`](../../../glyph/0274_MixedDigitalStepByStep_MixedDigitalStepByStep_Panel2_sbPlay_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
