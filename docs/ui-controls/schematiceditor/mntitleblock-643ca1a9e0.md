# Title Bloc&k...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.Insert.mnTitleBlock |
| Control class | TMenuItem |
| Caption | Title Bloc&k... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnTitleBlockClick |
| Handler address | 01c94a50 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.Insert.mnTitleBlock` |
| Handler node | `function:01c94a50` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Title Bloc&k..."] -->|OnClick| handler["FUN_01c94a50"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["Delphi UnicodeString clear and finalization helper"]
    handler --> call3["FUN_004b6930"]
    handler --> call4["FUN_00724270"]
    handler --> call5["FUN_010bb2c0"]
    handler --> call6["FUN_010bc210"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C94A50__FUN_01c94a50.c](../../../DecompiledSources/Tina16/functions/0000000001C94A50__FUN_01c94a50.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.Insert.mnTitleBlock.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 11

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:004b6930` — FUN_004b6930
- `function:00724270` — FUN_00724270
- `function:010bb2c0` — FUN_010bb2c0
- `function:010bc210` — FUN_010bc210
- `function:0198d430` — FUN_0198d430
- `function:01993f30` — FUN_01993f30
- `function:01994230` — FUN_01994230
- `function:0199e310` — FUN_0199e310
- `function:019ab9a0` — FUN_019ab9a0

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
