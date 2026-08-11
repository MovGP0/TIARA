# Stop|

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DStepAnalControlPanel |
| Component path | DStepAnalControlPanel.Panel2.sbStop |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Stop\| |
| Text | Not present in the recovered resource. |
| Handler name | sbStopClick |
| Handler address | 014ffe80 |
| Graph node | `resource:dfm:DStepAnalControlPanel/DStepAnalControlPanel.Panel2.sbStop` |
| Handler node | `function:014ffe80` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Stop|"] -->|OnClick| handler["FUN_014ffe80"]
    handler --> call1["FUN_00f836b0"]
    handler --> call2["FUN_014fd660"]
    handler --> call3["FUN_014fe830"]
    handler --> call4["FUN_014ffa60"]
    handler --> call5["FUN_01cc6030"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014FFE80__FUN_014ffe80.c](../../../DecompiledSources/Tina16/functions/00000000014FFE80__FUN_014ffe80.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DStepAnalControlPanel.Panel2.sbStop.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00f836b0` — FUN_00f836b0
- `function:014fd660` — FUN_014fd660
- `function:014fe830` — FUN_014fe830
- `function:014ffa60` — FUN_014ffa60
- `function:01cc6030` — FUN_01cc6030

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0133_DStepAnalControlPanel_DStepAnalControlPanel_Panel2_sbStop_Glyph_Data.png`](../../../glyph/0133_DStepAnalControlPanel_DStepAnalControlPanel_Panel2_sbStop_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
