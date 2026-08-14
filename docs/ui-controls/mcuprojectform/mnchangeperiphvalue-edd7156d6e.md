# Change Value

> Analysis status: Recovered handler and relevant call path reviewed for mnChangePeriphValueClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pmPeriph.mnChangePeriphValue |
| Control class | TMenuItem |
| Caption | Change Value |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnChangePeriphValueClick |
| Handler address | 0108de70 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pmPeriph.mnChangePeriphValue` |
| Handler node | `function:0108de70` |
| Graph layer | UI |

## What happens when clicked

The handler derives the selected peripheral path from the current source, peripheral group, and item. It reads the current value through `_Dbg_XMC_GetPeriphValue`, initializes a value-edit dialog with that value and a composed name, and opens it. Canceling performs no write. On acceptance it reads the edited value, writes it through `_Dbg_XMC_SetPeriphValue`, and refreshes the active display.

## Click flow

```mermaid
flowchart TD
    control["Change Value"] -->|OnClick| handler["TMCUProjectForm.mnChangePeriphValueClick<br/>FUN_0108de70"]
    handler --> read["Resolve peripheral path<br/>Read current MCU value"]
    read --> dialog["Open value editor with current value"]
    dialog --> accepted{"Accepted?"}
    accepted -->|No| noOp["Do not write peripheral"]
    accepted -->|Yes| write["Write edited value to MCU backend"]
    write --> refresh["Refresh active display"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108DE70__FUN_0108de70.c](../../../DecompiledSources/Tina16/functions/000000000108DE70__FUN_0108de70.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pmPeriph.mnChangePeriphValue.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 13

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:004144d0` — FUN_004144d0
- `function:00415980` — FUN_00415980
- `function:004425e0` — FUN_004425e0
- `function:00442620` — FUN_00442620
- `function:007fc180` — FUN_007fc180
- `function:00e03d80` — Calls the VHDL_DLL2.DLL export _Dbg_XMC_SetPeriphValue.
- `function:00e03da0` — Calls the VHDL_DLL2.DLL export _Dbg_XMC_GetPeriphValue.
- `function:010729f0` — FUN_010729f0
- `function:01072a00` — FUN_01072a00
- `function:01072a40` — FUN_01072a40
- `function:01072a80` — FUN_01072a80
- `function:010892f0` — FUN_010892f0

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
