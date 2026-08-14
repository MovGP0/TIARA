# D

> Analysis status: Recovered handler and relevant call path reviewed for sbDevelClick.

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

The handler derives the current debug position, converts the stored file or source value, and asks the backend for the next source line. It updates the editor to that returned line and refreshes debugger state. The handler has no explicit guard or error message; the behavior for an invalid backend line is controlled by the called line-selection routines.

## Click flow

```mermaid
flowchart TD
    control["D"] -->|OnClick| handler["TMCUProjectForm.sbDevelClick<br/>FUN_0108b6f0"]
    handler --> current["Derive current debugger source position"]
    current --> next["Ask backend for next source line"]
    next --> select["Select returned line in editor"]
    select --> refresh["Refresh debugger state"]
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

## Reviewed boundaries

- The explanation comes from the recovered handler and the named call path. The caption, hint, and glyph are supporting UI evidence only.
- Unnamed virtual calls are described only by the values passed at this call site and by the state that this handler reads or writes.
- The handler has no local exception recovery unless the behavior section states otherwise.
