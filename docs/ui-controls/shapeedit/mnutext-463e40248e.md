# &Text...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.mnDraw.mnuText |
| Control class | TMenuItem |
| Caption | &Text... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | sbTextClick |
| Handler address | 01797e40 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.mnDraw.mnuText` |
| Handler node | `function:01797e40` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Text..."] -->|OnClick| handler["FUN_01797e40"]
    handler --> call1["FUN_0082a6c0"]
    handler --> call2["FUN_00c5ef40"]
    handler --> call3["FUN_01794b80"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001797E40__FUN_01797e40.c](../../../DecompiledSources/Tina16/functions/0000000001797E40__FUN_01797e40.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: ShapeEdit.TopToolBar.EditorTools.sbText.OnClick, ShapeEdit.MainMenu.mnDraw.mnuText.OnClick.
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
