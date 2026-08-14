# Run

> Analysis status: Recovered handler and relevant call path reviewed for sbRunClick.

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

The handler clears the MCU aborted flag and sets the execution state to running. It also marks the auxiliary runtime object when appropriate. In local mode it updates debugger state and enters the local execution loop. In the alternate mode it dispatches the debugger start callback, enables the associated run state, and updates the debugger UI. There is no confirmation or local error message.

## Click flow

```mermaid
flowchart TD
    control["Run"] -->|OnClick| handler["TMCUProjectForm.sbRunClick<br/>FUN_01087a10"]
    handler --> reset["Clear MCU aborted flag<br/>Set execution state to running"]
    reset --> mode{"Local debug mode?"}
    mode -->|Yes| local["Prepare debugger and enter local execution loop"]
    mode -->|No| alternate["Start alternate debugger mode<br/>Enable run state"]
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

## Reviewed boundaries

- The explanation comes from the recovered handler and the named call path. The caption, hint, and glyph are supporting UI evidence only.
- Unnamed virtual calls are described only by the values passed at this call site and by the state that this handler reads or writes.
- The handler has no local exception recovery unless the behavior section states otherwise.
