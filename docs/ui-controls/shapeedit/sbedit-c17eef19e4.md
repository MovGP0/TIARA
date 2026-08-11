# Editing tool

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.TopToolBar.EditorTools.sbEdit |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Editing tool |
| Text | Not present in the recovered resource. |
| Handler name | sbToolClick |
| Handler address | 01795970 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.TopToolBar.EditorTools.sbEdit` |
| Handler node | `function:01795970` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Editing tool"] -->|OnClick| handler["FUN_01795970"]
    handler --> call1["FUN_01794bc0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001795970__FUN_01795970.c](../../../DecompiledSources/Tina16/functions/0000000001795970__FUN_01795970.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ShapeEdit.TopToolBar.EditorTools.sbEdit.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01794bc0` — FUN_01794bc0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0405_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbEdit_Glyph_Data.png`](../../../glyph/0405_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbEdit_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
