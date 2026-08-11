# Delete Version|Deletes the current version of the circuit

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.EditorPanel.FaultManager.GroupBox4.FaultPanel.sbDelVersion |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Delete Version\|Deletes the current version of the circuit |
| Text | Not present in the recovered resource. |
| Handler name | sbDelVersionClick |
| Handler address | 01c7da60 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.EditorPanel.FaultManager.GroupBox4.FaultPanel.sbDelVersion` |
| Handler node | `function:01c7da60` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Delete Version|Deletes the current version of the circuit"] -->|OnClick| handler["FUN_01c7da60"]
    handler --> call1["FUN_012bee60"]
    handler --> call2["FUN_01c7d780"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C7DA60__FUN_01c7da60.c](../../../DecompiledSources/Tina16/functions/0000000001C7DA60__FUN_01c7da60.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.EditorPanel.FaultManager.GroupBox4.FaultPanel.sbDelVersion.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:012bee60` — FUN_012bee60
- `function:01c7d780` — FUN_01c7d780

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0369_SchematicEditor_SchematicEditor_EditorPanel_FaultManager_GroupBox4_FaultPanel_sbDelVersion_Glyph_Data.png`](../../../glyph/0369_SchematicEditor_SchematicEditor_EditorPanel_FaultManager_GroupBox4_FaultPanel_sbDelVersion_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
