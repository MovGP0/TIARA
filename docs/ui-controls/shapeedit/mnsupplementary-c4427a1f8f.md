# S&upplementary

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.View.mnSupplementary |
| Control class | TMenuItem |
| Caption | S&upplementary |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnSupplementaryClick |
| Handler address | 0179a710 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.View.mnSupplementary` |
| Handler node | `function:0179a710` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["S&upplementary"] -->|OnClick| handler["FUN_0179a710"]
    handler --> call1["FUN_0064e770"]
    handler --> call2["FUN_007e2d20"]
    handler --> call3["FUN_0082a6c0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000179A710__FUN_0179a710.c](../../../DecompiledSources/Tina16/functions/000000000179A710__FUN_0179a710.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: ShapeEdit.TopToolBar.EditorTools.sbSupplementary.OnClick, ShapeEdit.MainMenu.View.mnSupplementary.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:0064e770` — FUN_0064e770
- `function:007e2d20` — FUN_007e2d20
- `function:0082a6c0` — FUN_0082a6c0

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
