# Normal View

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.View.mnNormalView |
| Control class | TMenuItem |
| Caption | Normal View |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnNormalViewClick |
| Handler address | 01c83db0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.View.mnNormalView` |
| Handler node | `function:01c83db0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Normal View"] -->|OnClick| handler["FUN_01c83db0"]
    handler --> call1["FUN_0064e770"]
    handler --> call2["FUN_01c83de0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C83DB0__FUN_01c83db0.c](../../../DecompiledSources/Tina16/functions/0000000001C83DB0__FUN_01c83db0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.View.mnNormalView.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0064e770` — FUN_0064e770
- `function:01c83de0` — FUN_01c83de0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: true
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
