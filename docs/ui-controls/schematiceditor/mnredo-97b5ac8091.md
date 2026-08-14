# &Redo

> Analysis status: Evidence-backed behavior recovered.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.Edit.mnRedo |
| Control class | TMenuItem |
| Caption | &Redo |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnRedoClick |
| Handler address | 01c8ed20 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.Edit.mnRedo` |
| Handler node | `function:01c8ed20` |
| Graph layer | UI |

## What happens when clicked

The normal branch runs only when the shared edit guard permits it, the model reports that Redo is available, form field `0x17F4` is zero, and byte `0x27C1` is zero. It then calls the model history executor with direction value 0 and repaints the editor. In the alternate command mode, it logs the literal `Redo()` and calls `FUN_0135B700`, which removes the current entry from the Redo queue, moves it to the Undo queue, and applies it to the model. Failed availability or guard checks are a no-op.

## Click flow

```mermaid
flowchart TD
    control["Redo"] --> handler["mnRedoClick<br/>01c8ed20"]
    handler --> mode{"Alternate command mode?"}
    mode -->|"Yes"| alternate["Log Redo and move history entry to Undo"]
    mode -->|"No"| allowed{"Redo available and editing allowed?"}
    allowed -->|"No"| noOp["Keep model unchanged"]
    allowed -->|"Yes"| execute["Apply model Redo"]
    execute --> repaint["Repaint editor"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C8ED20__FUN_01c8ed20.c](../../../DecompiledSources/Tina16/functions/0000000001C8ED20__FUN_01c8ed20.c)
- Recovered role: Applies one Redo operation through the active history implementation.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.Edit.mnRedo.OnClick.
- Current graph behavior: The normal path tests model Redo availability and executes direction 0; the alternate path logs `Redo()` and transfers a history entry to the Undo queue.
- Current graph evidence: `FUN_019A4E70` checks the Redo index and global guards. `FUN_019A4EC0(..., 0)` executes the history entry. `FUN_0135B700` removes from one queue, inserts into the other, and applies the entry.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:0064e770` — FUN_0064e770
- `function:0135b700` — FUN_0135b700
- `function:017fe450` — FUN_017fe450
- `function:019a4e70` — FUN_019a4e70
- `function:019a4ec0` — FUN_019a4ec0
- `function:01c8cee0` — FUN_01c8cee0

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

## Analysis limits

- The semantic content of a history entry depends on the previously undone edit and is not fixed by this command.

