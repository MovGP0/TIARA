# &Labels

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.View.mnShowLabels |
| Control class | TMenuItem |
| Caption | &Labels |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnShowLabelsClick |
| Handler address | 01c976a0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.View.mnShowLabels` |
| Handler node | `function:01c976a0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Labels"] -->|OnClick| handler["FUN_01c976a0"]
    handler --> call1["FUN_0064e770"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C976A0__FUN_01c976a0.c](../../../DecompiledSources/Tina16/functions/0000000001C976A0__FUN_01c976a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.View.mnShowLabels.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0064e770` — FUN_0064e770

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
