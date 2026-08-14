# Paste

> Analysis status: Recovered handler and relevant call path reviewed for mnPasteClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.MainMenu.mnEdit.mnPaste |
| Control class | TMenuItem |
| Caption | Paste |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnPasteClick |
| Handler address | 0108a900 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.MainMenu.mnEdit.mnPaste` |
| Handler node | `function:0108a900` |
| Graph layer | UI |

## What happens when clicked

The handler forwards the command to the active editor. The editor first checks whether paste is allowed. On success it opens an edit transaction, reads the clipboard format and content, replaces or inserts at the current selection, records undo information, recalculates editor state, and restores input and repaint state. If paste is not allowed or no compatible clipboard data exists, the editor returns without a document change.

## Click flow

```mermaid
flowchart TD
    control["Paste"] -->|OnClick| handler["TMCUProjectForm.mnPasteClick<br/>FUN_0108a900"]
    handler --> editor["Invoke active editor paste"]
    editor --> allowed{"Compatible paste allowed?"}
    allowed -->|No| noOp["Leave document unchanged"]
    allowed -->|Yes| paste["Insert or replace selection<br/>Record undo and refresh editor"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108A900__FUN_0108a900.c](../../../DecompiledSources/Tina16/functions/000000000108A900__FUN_0108a900.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.MainMenu.mnEdit.mnPaste.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00bf9d90` — FUN_00bf9d90

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
