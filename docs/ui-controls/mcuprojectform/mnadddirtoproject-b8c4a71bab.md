# Add files from a directory...

> Analysis status: Recovered handler and relevant call path reviewed for mnAddDirToProjectClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pmProjectProperties.mnAddDirToProject |
| Control class | TMenuItem |
| Caption | Add files from a directory... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnAddDirToProjectClick |
| Handler address | 0108b4a0 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pmProjectProperties.mnAddDirToProject` |
| Handler node | `function:0108b4a0` |
| Graph layer | UI |

## What happens when clicked

The project-tree popup handler is a one-call wrapper around the same directory-import workflow as the Add-to-Project popup. It does not inspect `Sender`. Canceling the directory selector changes nothing; acceptance imports the enumerated files and refreshes the project and active selection.

## Click flow

```mermaid
flowchart TD
    control["Add files from a directory..."] -->|OnClick| handler["TMCUProjectForm.mnAddDirToProjectClick<br/>FUN_0108b4a0"]
    handler --> directory["Run shared directory-import workflow"]
    directory --> accepted{"Directory selected?"}
    accepted -->|No| noOp["Keep project unchanged"]
    accepted -->|Yes| import["Import directory files<br/>Refresh project view"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108B4A0__FUN_0108b4a0.c](../../../DecompiledSources/Tina16/functions/000000000108B4A0__FUN_0108b4a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pmProjectProperties.mnAddDirToProject.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0108aff0` — FUN_0108aff0

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
