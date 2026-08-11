# Bring to &Front

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.Edit.mnBringtoFront |
| Control class | TMenuItem |
| Caption | Bring to &Front |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnBringtoFrontClick |
| Handler address | 0179d9f0 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.Edit.mnBringtoFront` |
| Handler node | `function:0179d9f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Bring to &Front"] -->|OnClick| handler["FUN_0179d9f0"]
    handler --> call1["FUN_004aeac0"]
    handler --> call2["FUN_004aed30"]
    handler --> call3["FUN_004aee80"]
    handler --> call4["FUN_0064e770"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000179D9F0__FUN_0179d9f0.c](../../../DecompiledSources/Tina16/functions/000000000179D9F0__FUN_0179d9f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ShapeEdit.MainMenu.Edit.mnBringtoFront.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:004aeac0` — FUN_004aeac0
- `function:004aed30` — FUN_004aed30
- `function:004aee80` — FUN_004aee80
- `function:0064e770` — FUN_0064e770

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
