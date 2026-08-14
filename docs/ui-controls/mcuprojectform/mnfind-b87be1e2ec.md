# Find...

> Analysis status: Recovered handler and relevant call path reviewed for mnFindClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.MainMenu.mnEdit.mnFind |
| Control class | TMenuItem |
| Caption | Find... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnFindClick |
| Handler address | 0108a960 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.MainMenu.mnEdit.mnFind` |
| Handler node | `function:0108a960` |
| Graph layer | UI |

## What happens when clicked

The handler first activates the search panel or search UI at form field `+0x8C0`, then opens the shared find dialog with replace mode disabled. The dialog is initialized from stored search options and the active selection. Canceling preserves the document. On acceptance it stores the new options and, when search text is present, runs the shared search path in find mode.

## Click flow

```mermaid
flowchart TD
    control["Find..."] -->|OnClick| handler["TMCUProjectForm.mnFindClick<br/>FUN_0108a960"]
    handler --> activate["Activate search UI"]
    activate --> dialog["Open Find dialog with stored options"]
    dialog --> accepted{"Accepted with search text?"}
    accepted -->|No| noOp["Keep document unchanged"]
    accepted -->|Yes| search["Run shared find search"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108A960__FUN_0108a960.c](../../../DecompiledSources/Tina16/functions/000000000108A960__FUN_0108a960.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.MainMenu.mnEdit.mnFind.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:007e2da0` — FUN_007e2da0
- `function:0108fc80` — FUN_0108fc80

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
