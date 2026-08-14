# &Redo

> Analysis status: Source reviewed for TIARA-diz.6.7.1535.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.Edit.mnRedo |
| Control class | TMenuItem |
| Caption | &Redo |
| Hint | Not present in the recovered resource. |
| Handler name | mnRedoClick |
| Handler address | 017a0750 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.Edit.mnRedo` |
| Handler node | `function:017a0750` |

## What happens when clicked

Clears the current object selection or interaction state, asks the ShapeEdit undo manager to redo one command, and redraws the editor. The undo manager determines the no-history behavior.

## Click flow

```mermaid
flowchart TD
    control["&Redo"] --> handler["mnRedoClick at 017a0750"]
    handler --> step1["Clear current selection state"]
    handler --> step2["Ask undo manager to redo"]
    handler --> step3["Redraw editor"]
```

## Evidence

- Handler source: [00000000017A0750__FUN_017a0750.c](../../../DecompiledSources/Tina16/functions/00000000017A0750__FUN_017a0750.c)
- Extracted glyph: None.
- Recovered path: The handler calls 017956f0, the redo-manager function 00c5c800 on field +0xd50, and the editor invalidation path.
- Resource context: The recovered TMenuItem resource uses caption `&Redo`.

## Analysis limits

- The handler does not expose whether the redo stack was empty; that decision belongs to the undo manager.
- The caption, hint, and glyph support control identity only. They do not replace the recovered handler and callee evidence.

