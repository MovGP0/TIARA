# Exit

> Analysis status: Recovered handler and relevant call path reviewed for mnExitClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.MainMenu.mnFile.mnExit |
| Control class | TMenuItem |
| Caption | Exit |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnExitClick |
| Handler address | 0108bc00 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.MainMenu.mnFile.mnExit` |
| Handler node | `function:0108bc00` |
| Graph layer | UI |

## What happens when clicked

The handler unconditionally calls the common VCL form-close routine. For a modeless form that routine first runs the virtual close query and returns without closure if it is rejected. If closure is allowed, it dispatches the form close action and applies the resulting hide, minimize, release, or main-form termination behavior. The handler has no separate save prompt or rollback logic; any such rule must be in the form close-query path.

## Click flow

```mermaid
flowchart TD
    control["Exit"] -->|OnClick| handler["TMCUProjectForm.mnExitClick<br/>FUN_0108bc00"]
    handler --> close["Request VCL form close"]
    close --> query{"Close query permits closure?"}
    query -->|No| noOp["Keep form open"]
    query -->|Yes| action["Dispatch form close action"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108BC00__FUN_0108bc00.c](../../../DecompiledSources/Tina16/functions/000000000108BC00__FUN_0108bc00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.MainMenu.mnFile.mnExit.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00805200` — FUN_00805200

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
