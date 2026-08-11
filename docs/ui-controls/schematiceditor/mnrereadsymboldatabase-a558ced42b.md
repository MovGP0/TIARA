# &Re-read symbol database

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTools.mnReReadSymbolDatabase |
| Control class | TMenuItem |
| Caption | &Re-read symbol database |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnReReadSymbolDatabaseClick |
| Handler address | 01c8f290 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTools.mnReReadSymbolDatabase` |
| Handler node | `function:01c8f290` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Re-read symbol database"] -->|OnClick| handler["FUN_01c8f290"]
    handler --> call1["FUN_0064e770"]
    handler --> call2["FUN_008088b0"]
    handler --> call3["FUN_00c40160"]
    handler --> call4["FUN_00c40390"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C8F290__FUN_01c8f290.c](../../../DecompiledSources/Tina16/functions/0000000001C8F290__FUN_01c8f290.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.mnReReadSymbolDatabase.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:0064e770` — FUN_0064e770
- `function:008088b0` — FUN_008088b0
- `function:00c40160` — FUN_00c40160
- `function:00c40390` — FUN_00c40390

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
