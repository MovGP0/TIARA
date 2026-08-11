# Revert All|Reverts all faults

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.EditorPanel.FaultManager.GroupBox4.FaultPanel.sbRevertAll |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Revert All\|Reverts all faults |
| Text | Not present in the recovered resource. |
| Handler name | sbRevertAllClick |
| Handler address | 01c7de00 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.EditorPanel.FaultManager.GroupBox4.FaultPanel.sbRevertAll` |
| Handler node | `function:01c7de00` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Revert All|Reverts all faults"] -->|OnClick| handler["FUN_01c7de00"]
    handler --> call1["FUN_00b94e60"]
    handler --> call2["FUN_01c7dd90"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C7DE00__FUN_01c7de00.c](../../../DecompiledSources/Tina16/functions/0000000001C7DE00__FUN_01c7de00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.EditorPanel.FaultManager.GroupBox4.FaultPanel.sbRevertAll.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00b94e60` — FUN_00b94e60
- `function:01c7dd90` — FUN_01c7dd90

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0368_SchematicEditor_SchematicEditor_EditorPanel_FaultManager_GroupBox4_FaultPanel_sbRevertAll_Glyph_Data.png`](../../../glyph/0368_SchematicEditor_SchematicEditor_EditorPanel_FaultManager_GroupBox4_FaultPanel_sbRevertAll_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
