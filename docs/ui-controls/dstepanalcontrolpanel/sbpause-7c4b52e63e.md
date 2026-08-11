# Pause|

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DStepAnalControlPanel |
| Component path | DStepAnalControlPanel.Panel2.sbPause |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Pause\| |
| Text | Not present in the recovered resource. |
| Handler name | sbPauseClick |
| Handler address | 014ffe40 |
| Graph node | `resource:dfm:DStepAnalControlPanel/DStepAnalControlPanel.Panel2.sbPause` |
| Handler node | `function:014ffe40` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Pause|"] -->|OnClick| handler["FUN_014ffe40"]
    handler --> call1["FUN_014ffa60"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014FFE40__FUN_014ffe40.c](../../../DecompiledSources/Tina16/functions/00000000014FFE40__FUN_014ffe40.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DStepAnalControlPanel.Panel2.sbPause.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:014ffa60` — FUN_014ffa60

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0128_DStepAnalControlPanel_DStepAnalControlPanel_Panel2_sbPause_Glyph_Data.png`](../../../glyph/0128_DStepAnalControlPanel_DStepAnalControlPanel_Panel2_sbPause_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
