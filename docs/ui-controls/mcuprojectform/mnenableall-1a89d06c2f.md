# Enable All

> Analysis status: Recovered handler and relevant call path reviewed for mnEnableAllClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pmBreakpoints.mnEnableAll |
| Control class | TMenuItem |
| Caption | Enable All |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnEnableAllClick |
| Handler address | 01089ed0 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pmBreakpoints.mnEnableAll` |
| Handler node | `function:01089ed0` |
| Graph layer | UI |

## What happens when clicked

The handler sets all project breakpoints to enabled. It then refreshes the active editor and, when the breakpoint page is active, refreshes that list. The handler has no local confirmation or error branch.

## Click flow

```mermaid
flowchart TD
    control["Enable All"] -->|OnClick| handler["TMCUProjectForm.mnEnableAllClick<br/>FUN_01089ed0"]
    handler --> enable["Set all breakpoints enabled"]
    enable --> editor["Refresh active editor"]
    editor --> page{"Breakpoint page active?"}
    page -->|Yes| panel["Refresh breakpoint list"]
    page -->|No| done["Finish"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001089ED0__FUN_01089ed0.c](../../../DecompiledSources/Tina16/functions/0000000001089ED0__FUN_01089ed0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pmBreakpoints.mnEnableAll.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:006d5120` — FUN_006d5120
- `function:01088c80` — FUN_01088c80
- `function:010b30f0` — FUN_010b30f0

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
