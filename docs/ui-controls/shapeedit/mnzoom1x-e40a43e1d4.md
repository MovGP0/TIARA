# &1x

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.MainMenu.View.Zoom.mnZoom1x |
| Control class | TMenuItem |
| Caption | &1x |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnZoom1xClick |
| Handler address | 0179a4c0 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.MainMenu.View.Zoom.mnZoom1x` |
| Handler node | `function:0179a4c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&1x"] -->|OnClick| handler["FUN_0179a4c0"]
    handler --> call1["FUN_017949a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000179A4C0__FUN_0179a4c0.c](../../../DecompiledSources/Tina16/functions/000000000179A4C0__FUN_0179a4c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ShapeEdit.MainMenu.View.Zoom.mnZoom1x.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:017949a0` — Handles 1 Delphi UI event: ShapeEdit.TopToolBar.EditorTools.ZoomFactor.OnChange.

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
