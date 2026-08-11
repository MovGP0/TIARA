# &Arc

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.mnDraw.mnuArc |
| Control class | TMenuItem |
| Caption | &Arc |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | sbArcClick |
| Handler address | 01795b30 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.mnDraw.mnuArc` |
| Handler node | `function:01795b30` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Arc"] -->|OnClick| handler["FUN_01795b30"]
    handler --> call1["FUN_0082a6c0"]
    handler --> call2["FUN_00c5ef40"]
    handler --> call3["FUN_01794b80"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001795B30__FUN_01795b30.c](../../../DecompiledSources/Tina16/functions/0000000001795B30__FUN_01795b30.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: ShapeEdit.TopToolBar.EditorTools.sbArc.OnClick, ShapeEdit.MainMenu.mnDraw.mnuArc.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:0082a6c0` — FUN_0082a6c0
- `function:00c5ef40` — FUN_00c5ef40
- `function:01794b80` — FUN_01794b80

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
