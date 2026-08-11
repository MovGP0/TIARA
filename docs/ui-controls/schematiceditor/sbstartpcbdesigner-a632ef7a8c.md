# PCB Design

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.TopToolBar.EditorTools.sbStartPCBDesigner |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | PCB Design |
| Text | Not present in the recovered resource. |
| Handler name | sbStartPCBDesignerClick |
| Handler address | 01c99370 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.TopToolBar.EditorTools.sbStartPCBDesigner` |
| Handler node | `function:01c99370` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["PCB Design"] -->|OnClick| handler["FUN_01c99370"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_00416ad0"]
    handler --> call4["FUN_00416cd0"]
    handler --> call5["FUN_0043f780"]
    handler --> call6["FUN_004414c0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C99370__FUN_01c99370.c](../../../DecompiledSources/Tina16/functions/0000000001C99370__FUN_01c99370.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.TopToolBar.EditorTools.sbStartPCBDesigner.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 15

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416ad0` — FUN_00416ad0
- `function:00416cd0` — FUN_00416cd0
- `function:0043f780` — FUN_0043f780
- `function:004414c0` — FUN_004414c0
- `function:00441920` — FUN_00441920
- `function:007fc180` — FUN_007fc180
- `function:00f836b0` — FUN_00f836b0
- `function:010e33a0` — FUN_010e33a0
- `function:017fe450` — FUN_017fe450
- `function:01b1ee00` — FUN_01b1ee00
- `function:01b41bc0` — FUN_01b41bc0
- `function:01c87d20` — FUN_01c87d20
- `function:01d44af0` — FUN_01d44af0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0347_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_sbStartPCBDesigner_Glyph_Data.png`](../../../glyph/0347_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_sbStartPCBDesigner_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
