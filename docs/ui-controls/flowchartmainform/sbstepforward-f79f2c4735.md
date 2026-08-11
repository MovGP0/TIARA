# Step Forward (F8)

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | FlowChartMainForm |
| Component path | FlowChartMainForm.pnToolbar.sbStepForward |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Step Forward (F8) |
| Text | Not present in the recovered resource. |
| Handler name | sbStepForwardClick |
| Handler address | 010529b0 |
| Graph node | `resource:dfm:FlowChartMainForm/FlowChartMainForm.pnToolbar.sbStepForward` |
| Handler node | `function:010529b0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Step Forward (F8)"] -->|OnClick| handler["FUN_010529b0"]
    handler --> call1["VHDL_DLL2.DLL::_MCU_SetDebugMode"]
    handler --> call2["VHDL_DLL2.DLL::_MCU_SetAborted"]
    handler --> call3["Flowchart model modified-state getter"]
    handler --> call4["FUN_00f8d140"]
    handler --> call5["FUN_00f8d1c0"]
    handler --> call6["FUN_00f8d300"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000010529B0__FUN_010529b0.c](../../../DecompiledSources/Tina16/functions/00000000010529B0__FUN_010529b0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: FlowChartMainForm.pnToolbar.sbStepForward.OnClick, FlowChartMainForm.MainMenu.mnDebug.mnStepForward.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 10

## Direct calls

- `function:00e03b80` — Calls the VHDL_DLL2.DLL export _MCU_SetDebugMode.
- `function:00e03be0` — Calls the VHDL_DLL2.DLL export _MCU_SetAborted.
- `function:00f629a0` — Flowchart model modified-state getter
- `function:00f8d140` — FUN_00f8d140
- `function:00f8d1c0` — FUN_00f8d1c0
- `function:00f8d300` — FUN_00f8d300
- `function:00f8d6b0` — FUN_00f8d6b0
- `function:01052800` — FUN_01052800
- `function:01053ed0` — FUN_01053ed0
- `function:01053ee0` — FUN_01053ee0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0169_FlowChartMainForm_FlowChartMainForm_pnToolbar_sbStepForward_Glyph_Data.png`](../../../glyph/0169_FlowChartMainForm_FlowChartMainForm_pnToolbar_sbStepForward_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
