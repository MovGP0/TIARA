# &Undo

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.Edit.mnUndo |
| Control class | TMenuItem |
| Caption | &Undo |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnUndoClick |
| Handler address | 01c8ec70 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.Edit.mnUndo` |
| Handler node | `function:01c8ec70` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnUndoClick at 01c8ec70. The recovered body has 6 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["&Undo"] -->|"OnClick"| handler["mnUndoClick (01c8ec70)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C8EC70__FUN_01c8ec70.c](../../../DecompiledSources/Tina16/functions/0000000001C8EC70__FUN_01c8ec70.c)
- Recovered role: Evidence-blocked mnUndoClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.Edit.mnUndo.OnClick.
- Current graph behavior: The OnClick binding reaches mnUndoClick at 01c8ec70. The recovered body has 6 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.Edit.mnUndo to mnUndoClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C8EC70__FUN_01c8ec70.c and directly references 0064e770, 0135b680, 017fe450, 019a4e30, 019a4ec0, 01c8cee0. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:0064e770` — FUN_0064e770
- `function:0135b680` — FUN_0135b680
- `function:017fe450` — FUN_017fe450
- `function:019a4e30` — FUN_019a4e30
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

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

