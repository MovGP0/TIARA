# D

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pnToolbar.sbDevel |
| Control class | TSpeedButton |
| Caption | D |
| Hint | Devel Feature |
| Text | Not present in the recovered resource. |
| Handler name | sbDevelClick |
| Handler address | 0108b6f0 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pnToolbar.sbDevel` |
| Handler node | `function:0108b6f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["D"] -->|OnClick| handler["FUN_0108b6f0"]
    handler --> call1["FUN_00442620"]
    handler --> call2["VHDL_DLL2.DLL::_Debug_GetNextLine"]
    handler --> call3["FUN_01085cd0"]
    handler --> call4["FUN_010890f0"]
    handler --> call5["FUN_0108bb30"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108B6F0__FUN_0108b6f0.c](../../../DecompiledSources/Tina16/functions/000000000108B6F0__FUN_0108b6f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pnToolbar.sbDevel.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00442620` — FUN_00442620
- `function:00e02e60` — Calls the VHDL_DLL2.DLL export _Debug_GetNextLine.
- `function:01085cd0` — FUN_01085cd0
- `function:010890f0` — FUN_010890f0
- `function:0108bb30` — FUN_0108bb30

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
