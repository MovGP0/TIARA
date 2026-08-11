# Run

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pnToolbar.sbRun |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Run |
| Text | Not present in the recovered resource. |
| Handler name | sbRunClick |
| Handler address | 01087a10 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pnToolbar.sbRun` |
| Handler node | `function:01087a10` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Run"] -->|OnClick| handler["FUN_01087a10"]
    handler --> call1["VHDL_DLL2.DLL::_MCU_SetAborted"]
    handler --> call2["FUN_01085cd0"]
    handler --> call3["FUN_010879a0"]
    handler --> call4["FUN_0108b840"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001087A10__FUN_01087a10.c](../../../DecompiledSources/Tina16/functions/0000000001087A10__FUN_01087a10.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pnToolbar.sbRun.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00e03be0` — Calls the VHDL_DLL2.DLL export _MCU_SetAborted.
- `function:01085cd0` — FUN_01085cd0
- `function:010879a0` — FUN_010879a0
- `function:0108b840` — FUN_0108b840

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0262_MCUProjectForm_MCUProjectForm_pnToolbar_sbRun_Glyph_Data.png`](../../../glyph/0262_MCUProjectForm_MCUProjectForm_pnToolbar_sbRun_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
