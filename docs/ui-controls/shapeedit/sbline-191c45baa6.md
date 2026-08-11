# Line

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ShapeEdit |
| Component path | ShapeEdit.TopToolBar.EditorTools.sbLine |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Line |
| Text | Not present in the recovered resource. |
| Handler name | sbLineClick |
| Handler address | 01795930 |
| Graph node | `resource:dfm:ShapeEdit/ShapeEdit.TopToolBar.EditorTools.sbLine` |
| Handler node | `function:01795930` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Line"] -->|OnClick| handler["FUN_01795930"]
    handler --> call1["FUN_0082a6c0"]
    handler --> call2["FUN_00c5ef40"]
    handler --> call3["FUN_01794b80"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001795930__FUN_01795930.c](../../../DecompiledSources/Tina16/functions/0000000001795930__FUN_01795930.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: ShapeEdit.TopToolBar.EditorTools.sbLine.OnClick, ShapeEdit.MainMenu.mnDraw.mnuLine.OnClick.
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
- Extracted glyph: [`0406_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbLine_Glyph_Data.png`](../../../glyph/0406_ShapeEdit_ShapeEdit_TopToolBar_EditorTools_sbLine_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
