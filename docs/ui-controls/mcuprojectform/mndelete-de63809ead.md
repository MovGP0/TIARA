# Delete

> Analysis status: Recovered handler and relevant call path reviewed for mnDeleteClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pmBreakpoints.mnDelete |
| Control class | TMenuItem |
| Caption | Delete |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnDeleteClick |
| Handler address | 0108a1b0 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pmBreakpoints.mnDelete` |
| Handler node | `function:0108a1b0` |
| Graph layer | UI |

## What happens when clicked

The handler gets the selected breakpoint object and asks the project model for its stored breakpoint identity. It deletes that item from the breakpoint collection, frees the selected object reference, refreshes the active editor, and refreshes the breakpoint list when page 3 is active. The handler has no explicit missing-selection guard or confirmation dialog.

## Click flow

```mermaid
flowchart TD
    control["Delete"] -->|OnClick| handler["TMCUProjectForm.mnDeleteClick<br/>FUN_0108a1b0"]
    handler --> selected["Read selected breakpoint"]
    selected --> identity["Resolve stored breakpoint identity"]
    identity --> remove["Delete breakpoint and free selection object"]
    remove --> refresh["Refresh editor and active breakpoint page"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108A1B0__FUN_0108a1b0.c](../../../DecompiledSources/Tina16/functions/000000000108A1B0__FUN_0108a1b0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pmBreakpoints.mnDelete.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:006d5120` — FUN_006d5120
- `function:01088c80` — FUN_01088c80
- `function:010af100` — FUN_010af100
- `function:010b3340` — FUN_010b3340

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
