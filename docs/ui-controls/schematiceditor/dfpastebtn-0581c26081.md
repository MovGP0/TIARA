# Paste

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.TopToolBar.GeneralTools.DFPasteBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Paste |
| Text | Not present in the recovered resource. |
| Handler name | PasteClick |
| Handler address | 01c77c10 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.TopToolBar.GeneralTools.DFPasteBtn` |
| Handler node | `function:01c77c10` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Paste"] -->|OnClick| handler["FUN_01c77c10"]
    handler --> call1["FUN_0065b870"]
    handler --> call2["FUN_00bf9d90"]
    handler --> call3["FUN_01b9bcb0"]
    handler --> call4["FUN_01c8cee0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C77C10__FUN_01c77c10.c](../../../DecompiledSources/Tina16/functions/0000000001C77C10__FUN_01c77c10.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: SchematicEditor.TopToolBar.GeneralTools.DFPasteBtn.OnClick, SchematicEditor.MainMenu.Edit.Paste.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:0065b870` — FUN_0065b870
- `function:00bf9d90` — FUN_00bf9d90
- `function:01b9bcb0` — FUN_01b9bcb0
- `function:01c8cee0` — FUN_01c8cee0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0354_SchematicEditor_SchematicEditor_TopToolBar_GeneralTools_DFPasteBtn_Glyph_Data.png`](../../../glyph/0354_SchematicEditor_SchematicEditor_TopToolBar_GeneralTools_DFPasteBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
