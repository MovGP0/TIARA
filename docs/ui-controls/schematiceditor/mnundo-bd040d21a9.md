# &Undo

> Analysis status: Pending individual source review.

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

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Undo"] -->|OnClick| handler["FUN_01c8ec70"]
    handler --> call1["FUN_0064e770"]
    handler --> call2["FUN_0135b680"]
    handler --> call3["FUN_017fe450"]
    handler --> call4["FUN_019a4e30"]
    handler --> call5["FUN_019a4ec0"]
    handler --> call6["FUN_01c8cee0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C8EC70__FUN_01c8ec70.c](../../../DecompiledSources/Tina16/functions/0000000001C8EC70__FUN_01c8ec70.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.Edit.mnUndo.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
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

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
