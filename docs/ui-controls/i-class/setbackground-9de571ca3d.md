# Set Background

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | I_Class |
| Component path | I_Class.pnToolPanel.SetBackground |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Set Background |
| Text | Not present in the recovered resource. |
| Handler name | SetBackgroundClick |
| Handler address | 017f2be0 |
| Graph node | `resource:dfm:I_Class/I_Class.pnToolPanel.SetBackground` |
| Handler node | `function:017f2be0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Set Background"] -->|OnClick| handler["FUN_017f2be0"]
    handler --> call1["FUN_00498310"]
    handler --> call2["FUN_0064d1f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017F2BE0__FUN_017f2be0.c](../../../DecompiledSources/Tina16/functions/00000000017F2BE0__FUN_017f2be0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: I_Class.pnToolPanel.SetBackground.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00498310` — FUN_00498310
- `function:0064d1f0` — FUN_0064d1f0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0234_I_Class_I_Class_pnToolPanel_SetBackground_Glyph_Data.png`](../../../glyph/0234_I_Class_I_Class_pnToolPanel_SetBackground_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
