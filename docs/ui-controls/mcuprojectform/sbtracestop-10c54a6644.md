# Stop

> Analysis status: Recovered handler and relevant call path reviewed for sbTraceStopClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pnToolbar.sbTraceStop |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Stop |
| Text | Not present in the recovered resource. |
| Handler name | sbTraceStopClick |
| Handler address | 010875a0 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pnToolbar.sbTraceStop` |
| Handler node | `function:010875a0` |
| Graph layer | UI |

## What happens when clicked

The handler sets the form stop state at `+0x4C9C` and tells the MCU backend that execution is aborted. In the local-debug branch it updates the run controls. In the alternate branch it also changes the debugger mode, disables the associated run state, updates the UI, and invokes the final debugger refresh callback. There is no confirmation or local error branch.

## Click flow

```mermaid
flowchart TD
    control["Stop"] -->|OnClick| handler["TMCUProjectForm.sbTraceStopClick<br/>FUN_010875a0"]
    handler --> stop["Set stop state<br/>Set MCU aborted = true"]
    stop --> mode{"Alternate debug mode?"}
    mode -->|No| local["Update run controls"]
    mode -->|Yes| remote["Change debugger mode<br/>Disable run state and refresh UI"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000010875A0__FUN_010875a0.c](../../../DecompiledSources/Tina16/functions/00000000010875A0__FUN_010875a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pnToolbar.sbTraceStop.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00e03be0` — Calls the VHDL_DLL2.DLL export _MCU_SetAborted.
- `function:0108b840` — FUN_0108b840

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0264_MCUProjectForm_MCUProjectForm_pnToolbar_sbTraceStop_Glyph_Data.png`](../../../glyph/0264_MCUProjectForm_MCUProjectForm_pnToolbar_sbTraceStop_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Reviewed boundaries

- The explanation comes from the recovered handler and the named call path. The caption, hint, and glyph are supporting UI evidence only.
- Unnamed virtual calls are described only by the values passed at this call site and by the state that this handler reads or writes.
- The handler has no local exception recovery unless the behavior section states otherwise.
