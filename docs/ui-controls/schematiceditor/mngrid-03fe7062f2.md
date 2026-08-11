# &Grid

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.View.mnGrid |
| Control class | TMenuItem |
| Caption | &Grid |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnGridClick |
| Handler address | 01c77300 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.View.mnGrid` |
| Handler node | `function:01c77300` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Grid"] -->|OnClick| handler["FUN_01c77300"]
    handler --> call1["FUN_01c73f30"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C77300__FUN_01c77300.c](../../../DecompiledSources/Tina16/functions/0000000001C77300__FUN_01c77300.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.View.mnGrid.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c73f30` — Handles 1 Delphi UI event: SchematicEditor.TopToolBar.EditorTools.ToolGrid.OnClick.

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
