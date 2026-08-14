# Refresh Eclipse Project

> Analysis status: Recovered handler and relevant call path reviewed for mnRefreshXMCProjectClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.MainMenu.mnFile.mnRefreshXMCProject |
| Control class | TMenuItem |
| Caption | Refresh Eclipse Project |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnRefreshXMCProjectClick |
| Handler address | 0108d740 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.MainMenu.mnFile.mnRefreshXMCProject` |
| Handler node | `function:0108d740` |
| Graph layer | UI |

## What happens when clicked

The handler invokes the Eclipse-project refresh routine with the current external-project and MCU-project objects. It then refreshes the project view, resolves the active item, updates the selection, and selects its editor entry when present. Finally it clears one transient flag and marks project data changed. The handler has no confirmation or local error branch.

## Click flow

```mermaid
flowchart TD
    control["Refresh Eclipse Project"] -->|OnClick| handler["TMCUProjectForm.mnRefreshXMCProjectClick<br/>FUN_0108d740"]
    handler --> refresh["Refresh linked Eclipse project"]
    refresh --> rebuild["Refresh MCU project view and active item"]
    rebuild --> item{"Active item resolved?"}
    item -->|Yes| select["Select its editor entry"]
    item -->|No| flags["Update project flags"]
    select --> flags
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108D740__FUN_0108d740.c](../../../DecompiledSources/Tina16/functions/000000000108D740__FUN_0108d740.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.MainMenu.mnFile.mnRefreshXMCProject.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:010792a0` — FUN_010792a0
- `function:0107a0c0` — FUN_0107a0c0
- `function:01081ce0` — FUN_01081ce0
- `function:01085110` — FUN_01085110
- `function:01607d20` — FUN_01607d20

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
