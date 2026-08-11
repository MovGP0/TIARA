# 2D View

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.View.mn2DView |
| Control class | TMenuItem |
| Caption | 2D View |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mn2DViewClick |
| Handler address | 01c9b040 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.View.mn2DView` |
| Handler node | `function:01c9b040` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["2D View"] -->|OnClick| handler["FUN_01c9b040"]
    handler --> call1["FUN_0082a6c0"]
    handler --> call2["FUN_01c99100"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C9B040__FUN_01c9b040.c](../../../DecompiledSources/Tina16/functions/0000000001C9B040__FUN_01c9b040.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.View.mn2DView.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0082a6c0` — FUN_0082a6c0
- `function:01c99100` — Handles 1 Delphi UI event: SchematicEditor.TopToolBar.EditorTools.sbEnable3DView.OnClick.

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
