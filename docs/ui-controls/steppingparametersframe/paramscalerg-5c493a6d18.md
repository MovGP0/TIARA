#  Sweep type

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SteppingParametersFrame |
| Component path | SteppingParametersFrame.GroupBox1.ParamScaleRG |
| Control class | TRadioGroup |
| Caption |  Sweep type  |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ParamScaleRGClick |
| Handler address | 01438930 |
| Graph node | `resource:dfm:SteppingParametersFrame/SteppingParametersFrame.GroupBox1.ParamScaleRG` |
| Handler node | `function:01438930` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control[" Sweep type "] -->|OnClick| handler["FUN_01438930"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001438930__FUN_01438930.c](../../../DecompiledSources/Tina16/functions/0000000001438930__FUN_01438930.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SteppingParametersFrame.GroupBox1.ParamScaleRG.OnClick.
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
- List items: ("&Linear", "Lo&garithmic", "Lis&t")
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: St&art value at distance 214.
- Rank 2: &End value at distance 256.
- Rank 3: &Number of cases at distance 299.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
