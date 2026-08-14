# Select All

> Analysis status: Recovered handler and relevant call path reviewed for mnSelectAllClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.MainMenu.mnEdit.mnSelectAll |
| Control class | TMenuItem |
| Caption | Select All |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnSelectAllClick |
| Handler address | 0108a940 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.MainMenu.mnEdit.mnSelectAll` |
| Handler node | `function:0108a940` |
| Graph layer | UI |

## What happens when clicked

The handler forwards the command to the active editor. The editor calculates the position after the last character of the last line, sets the selection from line 1 column 1 to that end position, and refreshes selection state. An empty document still yields a valid start position and does not show an error.

## Click flow

```mermaid
flowchart TD
    control["Select All"] -->|OnClick| handler["TMCUProjectForm.mnSelectAllClick<br/>FUN_0108a940"]
    handler --> editor["Invoke active editor Select All"]
    editor --> bounds["Calculate document start and final text position"]
    bounds --> select["Set full-document selection<br/>Refresh selection state"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108A940__FUN_0108a940.c](../../../DecompiledSources/Tina16/functions/000000000108A940__FUN_0108a940.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.MainMenu.mnEdit.mnSelectAll.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00bfa390` — FUN_00bfa390

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
