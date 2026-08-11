# &Undo

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.Edit.Undo |
| Control class | TMenuItem |
| Caption | &Undo |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | UndoClick |
| Handler address | 017a0720 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.Edit.Undo` |
| Handler node | `function:017a0720` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Undo"] -->|OnClick| handler["FUN_017a0720"]
    handler --> call1["FUN_0064e770"]
    handler --> call2["FUN_00c5c7b0"]
    handler --> call3["FUN_017956f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017A0720__FUN_017a0720.c](../../../DecompiledSources/Tina16/functions/00000000017A0720__FUN_017a0720.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ShapeEdit.MainMenu.Edit.Undo.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:0064e770` — FUN_0064e770
- `function:00c5c7b0` — FUN_00c5c7b0
- `function:017956f0` — FUN_017956f0

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
