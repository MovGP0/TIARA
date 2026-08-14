# Undo

> Analysis status: Recovered handler and relevant call path reviewed for mnUndoClick.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.MainMenu.mnEdit.mnUndo |
| Control class | TMenuItem |
| Caption | Undo |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnUndoClick |
| Handler address | 0108a8a0 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.MainMenu.mnEdit.mnUndo` |
| Handler node | `function:0108a8a0` |
| Graph layer | UI |

## What happens when clicked

The handler forwards the command to the active editor at form field `+0xA78`. The editor routine first tests its protected or read-only state. When editing is allowed it walks and applies the prior undo record group and restores the editor bookkeeping. When editing is blocked or no undo record exists, it returns without a local message.

## Click flow

```mermaid
flowchart TD
    control["Undo"] -->|OnClick| handler["TMCUProjectForm.mnUndoClick<br/>FUN_0108a8a0"]
    handler --> editor["Invoke active editor undo"]
    editor --> allowed{"Editing allowed and undo record available?"}
    allowed -->|No| noOp["Leave document unchanged"]
    allowed -->|Yes| undo["Apply previous undo record group<br/>Restore editor state"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108A8A0__FUN_0108a8a0.c](../../../DecompiledSources/Tina16/functions/000000000108A8A0__FUN_0108a8a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.MainMenu.mnEdit.mnUndo.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00c00ff0` — FUN_00c00ff0

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
