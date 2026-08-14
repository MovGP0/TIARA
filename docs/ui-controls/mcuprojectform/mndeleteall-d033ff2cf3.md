# Delete All

> Analysis status: Recovered handler and relevant call path reviewed for mnDeleteAllClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pmBreakpoints.mnDeleteAll |
| Control class | TMenuItem |
| Caption | Delete All |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnDeleteAllClick |
| Handler address | 01089e80 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pmBreakpoints.mnDeleteAll` |
| Handler node | `function:01089e80` |
| Graph layer | UI |

## What happens when clicked

The handler asks the project model to delete all breakpoints. It then refreshes the active editor. If the messages page selector reports page 3, it also refreshes the breakpoint list. There is no confirmation, local error message, or no-op guard in this handler.

## Click flow

```mermaid
flowchart TD
    control["Delete All"] -->|OnClick| handler["TMCUProjectForm.mnDeleteAllClick<br/>FUN_01089e80"]
    handler --> delete["Delete all project breakpoints"]
    delete --> editor["Refresh active editor"]
    editor --> page{"Breakpoint page active?"}
    page -->|Yes| panel["Refresh breakpoint list"]
    page -->|No| done["Finish"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001089E80__FUN_01089e80.c](../../../DecompiledSources/Tina16/functions/0000000001089E80__FUN_01089e80.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pmBreakpoints.mnDeleteAll.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:006d5120` — FUN_006d5120
- `function:01088c80` — FUN_01088c80
- `function:010b30a0` — FUN_010b30a0

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
