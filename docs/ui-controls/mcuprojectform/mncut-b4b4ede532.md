# Cut

> Analysis status: Recovered handler and relevant call path reviewed for mnCutClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.MainMenu.mnEdit.mnCut |
| Control class | TMenuItem |
| Caption | Cut |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnCutClick |
| Handler address | 0108a8c0 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.MainMenu.mnEdit.mnCut` |
| Handler node | `function:0108a8c0` |
| Graph layer | UI |

## What happens when clicked

The handler forwards the command to the active editor. The editor rejects the operation when editing is protected or no selection exists. Otherwise it starts an edit transaction, extracts the selection, copies it through the editor clipboard path, deletes the selected text without a second confirmation, and closes the transaction. The wrapper has no local error message.

## Click flow

```mermaid
flowchart TD
    control["Cut"] -->|OnClick| handler["TMCUProjectForm.mnCutClick<br/>FUN_0108a8c0"]
    handler --> editor["Invoke active editor cut"]
    editor --> selection{"Editable selection available?"}
    selection -->|No| noOp["Leave document unchanged"]
    selection -->|Yes| cut["Copy selection<br/>Delete selected text<br/>Close edit transaction"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108A8C0__FUN_0108a8c0.c](../../../DecompiledSources/Tina16/functions/000000000108A8C0__FUN_0108a8c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.MainMenu.mnEdit.mnCut.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00bf1e50` — FUN_00bf1e50

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
