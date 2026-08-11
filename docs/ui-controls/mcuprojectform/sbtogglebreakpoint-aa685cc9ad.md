# Toggle BreakPoint

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pnToolbar.sbToggleBreakPoint |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Toggle BreakPoint |
| Text | Not present in the recovered resource. |
| Handler name | sbToggleBreakPointClick |
| Handler address | 01088aa0 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pnToolbar.sbToggleBreakPoint` |
| Handler node | `function:01088aa0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Toggle BreakPoint"] -->|OnClick| handler["FUN_01088aa0"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_0041ddd0"]
    handler --> call3["FUN_006d5120"]
    handler --> call4["FUN_0072d730"]
    handler --> call5["FUN_00b89270"]
    handler --> call6["FUN_00b8e650"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001088AA0__FUN_01088aa0.c](../../../DecompiledSources/Tina16/functions/0000000001088AA0__FUN_01088aa0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pnToolbar.sbToggleBreakPoint.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 12

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:0041ddd0` — FUN_0041ddd0
- `function:006d5120` — FUN_006d5120
- `function:0072d730` — FUN_0072d730
- `function:00b89270` — FUN_00b89270
- `function:00b8e650` — FUN_00b8e650
- `function:00c08890` — FUN_00c08890
- `function:00e03ba0` — Calls the VHDL_DLL2.DLL export _MCU_ToggleBreakPoint.
- `function:01088c80` — FUN_01088c80
- `function:01088e80` — FUN_01088e80
- `function:010890f0` — FUN_010890f0
- `function:0108f9d0` — FUN_0108f9d0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0265_MCUProjectForm_MCUProjectForm_pnToolbar_sbToggleBreakPoint_Glyph_Data.png`](../../../glyph/0265_MCUProjectForm_MCUProjectForm_pnToolbar_sbToggleBreakPoint_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
