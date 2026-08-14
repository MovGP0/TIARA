# Enabled

> Analysis status: Recovered handler and relevant call path reviewed for mnEnabledClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pmBreakpoints.mnEnabled |
| Control class | TMenuItem |
| Caption | Enabled |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnEnabledClick |
| Handler address | 0108a140 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pmBreakpoints.mnEnabled` |
| Handler node | `function:0108a140` |
| Graph layer | UI |

## What happens when clicked

The handler reads the selected breakpoint object from the breakpoint panel, queries its current enabled state, and writes the inverse value back to that object. It then refreshes the active editor and refreshes the breakpoint list when that page is active. If no valid selection exists, the behavior of the called breakpoint accessor remains unresolved; this handler has no explicit guard or error message.

## Click flow

```mermaid
flowchart TD
    control["Enabled"] -->|OnClick| handler["TMCUProjectForm.mnEnabledClick<br/>FUN_0108a140"]
    handler --> state["Read selected breakpoint enabled state"]
    state --> toggle["Write inverse enabled state"]
    toggle --> editor["Refresh active editor"]
    editor --> page{"Breakpoint page active?"}
    page -->|Yes| panel["Refresh breakpoint list"]
    page -->|No| done["Finish"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108A140__FUN_0108a140.c](../../../DecompiledSources/Tina16/functions/000000000108A140__FUN_0108a140.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pmBreakpoints.mnEnabled.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:006d5120` — FUN_006d5120
- `function:01088c80` — FUN_01088c80
- `function:010ae5f0` — FUN_010ae5f0
- `function:010ae9a0` — FUN_010ae9a0

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
