# Find Component

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.TopToolBar.CompDropDownP.ToolSearchComp |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Find Component |
| Text | Not present in the recovered resource. |
| Handler name | ToolSearchCompClick |
| Handler address | 01c97ce0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.TopToolBar.CompDropDownP.ToolSearchComp` |
| Handler node | `function:01c97ce0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Find Component"] -->|OnClick| handler["FUN_01c97ce0"]
    handler --> call1["FUN_01c979b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C97CE0__FUN_01c97ce0.c](../../../DecompiledSources/Tina16/functions/0000000001C97CE0__FUN_01c97ce0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.TopToolBar.CompDropDownP.ToolSearchComp.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c979b0` — Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.FindComponent.OnClick.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0330_SchematicEditor_SchematicEditor_TopToolBar_CompDropDownP_ToolSearchComp_Glyph_Data.png`](../../../glyph/0330_SchematicEditor_SchematicEditor_TopToolBar_CompDropDownP_ToolSearchComp_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
