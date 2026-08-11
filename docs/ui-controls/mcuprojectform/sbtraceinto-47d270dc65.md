# Step

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pnToolbar.sbTraceInto |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Step |
| Text | Not present in the recovered resource. |
| Handler name | sbTraceIntoClick |
| Handler address | 01087910 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pnToolbar.sbTraceInto` |
| Handler node | `function:01087910` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Step"] -->|OnClick| handler["FUN_01087910"]
    handler --> call1["VHDL_DLL2.DLL::_MCU_SetAborted"]
    handler --> call2["FUN_00f81d20"]
    handler --> call3["FUN_010878b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001087910__FUN_01087910.c](../../../DecompiledSources/Tina16/functions/0000000001087910__FUN_01087910.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pnToolbar.sbTraceInto.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00e03be0` — Calls the VHDL_DLL2.DLL export _MCU_SetAborted.
- `function:00f81d20` — FUN_00f81d20
- `function:010878b0` — FUN_010878b0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0263_MCUProjectForm_MCUProjectForm_pnToolbar_sbTraceInto_Glyph_Data.png`](../../../glyph/0263_MCUProjectForm_MCUProjectForm_pnToolbar_sbTraceInto_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
