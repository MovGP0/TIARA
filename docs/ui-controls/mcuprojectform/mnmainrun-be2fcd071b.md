# Run

> Analysis status: Recovered handler and relevant call path reviewed for mnMainRunClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.MainMenu.mnRun.mnMainRun |
| Control class | TMenuItem |
| Caption | Run |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnMainRunClick |
| Handler address | 0108a9c0 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.MainMenu.mnRun.mnMainRun` |
| Handler node | `function:0108a9c0` |
| Graph layer | UI |

## What happens when clicked

The menu handler checks form flag `+0xB52`. When the flag is set, it returns without changing execution state. Otherwise it invokes the same run handler used by the toolbar, which clears the MCU aborted state and starts local or alternate debugger execution.

## Click flow

```mermaid
flowchart TD
    control["Run"] -->|OnClick| handler["TMCUProjectForm.mnMainRunClick<br/>FUN_0108a9c0"]
    handler --> guard{"Run command enabled?"}
    guard -->|No| noOp["Keep current execution state"]
    guard -->|Yes| run["Invoke shared MCU run handler"]
    run --> mode["Start local or alternate debugger execution"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108A9C0__FUN_0108a9c0.c](../../../DecompiledSources/Tina16/functions/000000000108A9C0__FUN_0108a9c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.MainMenu.mnRun.mnMainRun.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01087a10` — Handles 1 Delphi UI event: MCUProjectForm.pnToolbar.sbRun.OnClick.

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
