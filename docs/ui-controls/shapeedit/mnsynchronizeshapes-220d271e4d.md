# Synchronize &Shapes...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.Edit.mnSynchronizeShapes |
| Control class | TMenuItem |
| Caption | Synchronize &Shapes... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnSynchronizeShapesClick |
| Handler address | 0179d2f0 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.Edit.mnSynchronizeShapes` |
| Handler node | `function:0179d2f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Synchronize &Shapes..."] -->|OnClick| handler["FUN_0179d2f0"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_007fc180"]
    handler --> call3["FUN_00c3c560"]
    handler --> call4["FUN_00c3f030"]
    handler --> call5["FUN_00c3f250"]
    handler --> call6["FUN_01797160"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000179D2F0__FUN_0179d2f0.c](../../../DecompiledSources/Tina16/functions/000000000179D2F0__FUN_0179d2f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ShapeEdit.MainMenu.Edit.mnSynchronizeShapes.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:007fc180` — FUN_007fc180
- `function:00c3c560` — FUN_00c3c560
- `function:00c3f030` — FUN_00c3f030
- `function:00c3f250` — FUN_00c3f250
- `function:01797160` — FUN_01797160

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
