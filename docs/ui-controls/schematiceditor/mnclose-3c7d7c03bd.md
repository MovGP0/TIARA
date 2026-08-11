# &Close

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnFile.mnClose |
| Control class | TMenuItem |
| Caption | &Close |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnCloseClick |
| Handler address | 01c94450 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnFile.mnClose` |
| Handler node | `function:01c94450` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Close"] -->|OnClick| handler["FUN_01c94450"]
    handler --> call1["FUN_00417c40"]
    handler --> call2["FUN_0199e310"]
    handler --> call3["FUN_01c77470"]
    handler --> call4["FUN_01c8a290"]
    handler --> call5["FUN_01c8a3c0"]
    handler --> call6["FUN_01c94060"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C94450__FUN_01c94450.c](../../../DecompiledSources/Tina16/functions/0000000001C94450__FUN_01c94450.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnFile.mnClose.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:00417c40` — FUN_00417c40
- `function:0199e310` — FUN_0199e310
- `function:01c77470` — FUN_01c77470
- `function:01c8a290` — FUN_01c8a290
- `function:01c8a3c0` — FUN_01c8a3c0
- `function:01c94060` — FUN_01c94060
- `function:01d0fb00` — FUN_01d0fb00

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
