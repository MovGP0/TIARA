# Delete

> Analysis status: Recovered handler and relevant call path reviewed for mnMainDeleteClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.MainMenu.mnEdit.mnMainDelete |
| Control class | TMenuItem |
| Caption | Delete |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnMainDeleteClick |
| Handler address | 0108a920 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.MainMenu.mnEdit.mnMainDelete` |
| Handler node | `function:0108a920` |
| Graph layer | UI |

## What happens when clicked

The handler forwards delete mode 0 to the active editor. The editor opens an edit transaction, captures the current selection for undo, removes the selected text, and closes the transaction. If the editor has no removable selection or is protected, the internal editor checks produce no document change; the wrapper has no confirmation or local error message.

## Click flow

```mermaid
flowchart TD
    control["Delete"] -->|OnClick| handler["TMCUProjectForm.mnMainDeleteClick<br/>FUN_0108a920"]
    handler --> editor["Invoke active editor delete"]
    editor --> removable{"Removable selection available?"}
    removable -->|No| noOp["Leave document unchanged"]
    removable -->|Yes| delete["Record undo state<br/>Delete selection and refresh editor"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108A920__FUN_0108a920.c](../../../DecompiledSources/Tina16/functions/000000000108A920__FUN_0108a920.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.MainMenu.mnEdit.mnMainDelete.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00c08be0` — FUN_00c08be0

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
