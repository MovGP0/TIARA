# Component Rack|Select the component you want to place

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.ComponentPanel.PartGrid |
| Control class | TPartGrid |
| Caption | Not present in the recovered resource. |
| Hint | Component Rack\|Select the component you want to place |
| Text | Not present in the recovered resource. |
| Handler name | PartGridClick |
| Handler address | 01c9ce90 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.ComponentPanel.PartGrid` |
| Handler node | `function:01c9ce90` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Component Rack|Select the component you want to place"] -->|OnClick| handler["FUN_01c9ce90"]
    handler --> call1["FUN_004113d0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C9CE90__FUN_01c9ce90.c](../../../DecompiledSources/Tina16/functions/0000000001C9CE90__FUN_01c9ce90.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.ComponentPanel.PartGrid.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:004113d0` — FUN_004113d0

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
