# Save files to a directory...

> Analysis status: Recovered handler and relevant call path reviewed for mnSaveFilesClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pmProjectProperties.mnSaveFiles |
| Control class | TMenuItem |
| Caption | Save files to a directory... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnSaveFilesClick |
| Handler address | 0108b4b0 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pmProjectProperties.mnSaveFiles` |
| Handler node | `function:0108b4b0` |
| Graph layer | UI |

## What happens when clicked

The popup handler is a one-call wrapper around the shared project-file export workflow. It does not inspect `Sender`. The shared routine asks for a destination directory and returns without writing when canceled. On acceptance it passes the selected path to the project routine that saves the project files there.

## Click flow

```mermaid
flowchart TD
    control["Save files to a directory..."] -->|OnClick| handler["TMCUProjectForm.mnSaveFilesClick<br/>FUN_0108b4b0"]
    handler --> directory["Open destination directory selector"]
    directory --> accepted{"Directory selected?"}
    accepted -->|No| noOp["Write no files"]
    accepted -->|Yes| save["Save project files to selected directory"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108B4B0__FUN_0108b4b0.c](../../../DecompiledSources/Tina16/functions/000000000108B4B0__FUN_0108b4b0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pmProjectProperties.mnSaveFiles.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0108b330` — FUN_0108b330

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
