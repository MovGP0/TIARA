# Step Back|

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DStepAnalControlPanel |
| Component path | DStepAnalControlPanel.Panel2.sbPrev |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Step Back\| |
| Text | Not present in the recovered resource. |
| Handler name | sbPrevClick |
| Handler address | 014fffb0 |
| Graph node | `resource:dfm:DStepAnalControlPanel/DStepAnalControlPanel.Panel2.sbPrev` |
| Handler node | `function:014fffb0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Step Back|"] -->|OnClick| handler["FUN_014fffb0"]
    handler --> call1["FUN_014fedb0"]
    handler --> call2["FUN_014ffa60"]
    handler --> call3["FUN_01522550"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014FFFB0__FUN_014fffb0.c](../../../DecompiledSources/Tina16/functions/00000000014FFFB0__FUN_014fffb0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DStepAnalControlPanel.Panel2.sbPrev.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:014fedb0` — FUN_014fedb0
- `function:014ffa60` — FUN_014ffa60
- `function:01522550` — FUN_01522550

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0129_DStepAnalControlPanel_DStepAnalControlPanel_Panel2_sbPrev_Glyph_Data.png`](../../../glyph/0129_DStepAnalControlPanel_DStepAnalControlPanel_Panel2_sbPrev_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
