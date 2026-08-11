# Interactive probe

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.TopToolBar.EditorTools.ToolIntProbe |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Interactive probe |
| Text | Not present in the recovered resource. |
| Handler name | ToolIntProbeClick |
| Handler address | 01c9c130 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.TopToolBar.EditorTools.ToolIntProbe` |
| Handler node | `function:01c9c130` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Interactive probe"] -->|OnClick| handler["FUN_01c9c130"]
    handler --> call1["FUN_008059a0"]
    handler --> call2["FUN_00f4cc90"]
    handler --> call3["FUN_0136aba0"]
    handler --> call4["FUN_01c6cee0"]
    handler --> call5["FUN_01c6cf20"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C9C130__FUN_01c9c130.c](../../../DecompiledSources/Tina16/functions/0000000001C9C130__FUN_01c9c130.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.TopToolBar.EditorTools.ToolIntProbe.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:008059a0` — FUN_008059a0
- `function:00f4cc90` — FUN_00f4cc90
- `function:0136aba0` — FUN_0136aba0
- `function:01c6cee0` — FUN_01c6cee0
- `function:01c6cf20` — FUN_01c6cf20

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0348_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolIntProbe_Glyph_Data.png`](../../../glyph/0348_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolIntProbe_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
