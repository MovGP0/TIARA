# Last component|Inserts the last inserted component

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.TopToolBar.EditorTools.ToolComp |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Last component\|Inserts the last inserted component |
| Text | Not present in the recovered resource. |
| Handler name | ToolCompClick |
| Handler address | 01c6d6a0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.TopToolBar.EditorTools.ToolComp` |
| Handler node | `function:01c6d6a0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Last component|Inserts the last inserted component"] -->|OnClick| handler["FUN_01c6d6a0"]
    handler --> call1["FUN_01c6d670"]
    handler --> call2["FUN_01c6ec30"]
    handler --> call3["FUN_01c8cee0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C6D6A0__FUN_01c6d6a0.c](../../../DecompiledSources/Tina16/functions/0000000001C6D6A0__FUN_01c6d6a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.TopToolBar.EditorTools.ToolComp.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:01c6d670` — FUN_01c6d670
- `function:01c6ec30` — FUN_01c6ec30
- `function:01c8cee0` — FUN_01c8cee0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0342_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolComp_Glyph_Data.png`](../../../glyph/0342_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_ToolComp_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
