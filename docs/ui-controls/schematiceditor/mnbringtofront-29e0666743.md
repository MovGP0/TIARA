# &Bring To Front

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.Edit.mnArrange.mnBringToFront |
| Control class | TMenuItem |
| Caption | &Bring To Front |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnBringToFrontClick |
| Handler address | 01c97710 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.Edit.mnArrange.mnBringToFront` |
| Handler node | `function:01c97710` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Bring To Front"] -->|OnClick| handler["FUN_01c97710"]
    handler --> call1["FUN_0064e770"]
    handler --> call2["FUN_019965a0"]
    handler --> call3["FUN_0199e310"]
    handler --> call4["FUN_01c8cee0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C97710__FUN_01c97710.c](../../../DecompiledSources/Tina16/functions/0000000001C97710__FUN_01c97710.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.Edit.mnArrange.mnBringToFront.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:0064e770` — FUN_0064e770
- `function:019965a0` — FUN_019965a0
- `function:0199e310` — FUN_0199e310
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
