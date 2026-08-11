# Step Forward|

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DStepAnalControlPanel |
| Component path | DStepAnalControlPanel.Panel2.sbNext |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Step Forward\| |
| Text | Not present in the recovered resource. |
| Handler name | sbNextClick |
| Handler address | 01500090 |
| Graph node | `resource:dfm:DStepAnalControlPanel/DStepAnalControlPanel.Panel2.sbNext` |
| Handler node | `function:01500090` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Step Forward|"] -->|OnClick| handler["FUN_01500090"]
    handler --> call1["FUN_014fedb0"]
    handler --> call2["FUN_014ffa60"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001500090__FUN_01500090.c](../../../DecompiledSources/Tina16/functions/0000000001500090__FUN_01500090.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DStepAnalControlPanel.Panel2.sbNext.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:014fedb0` — FUN_014fedb0
- `function:014ffa60` — FUN_014ffa60

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0130_DStepAnalControlPanel_DStepAnalControlPanel_Panel2_sbNext_Glyph_Data.png`](../../../glyph/0130_DStepAnalControlPanel_DStepAnalControlPanel_Panel2_sbNext_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
