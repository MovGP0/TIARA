# Delete Version|Deletes the current version of the circuit

> Analysis status: Blocked by an exact evidence gap.

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

The OnClick binding reaches sbDelVersionClick at 01c7da60. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Delete Version|Deletes the current version of the circuit"] -->|"OnClick"| handler["sbDelVersionClick (01c7da60)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C7DA60__FUN_01c7da60.c](../../../DecompiledSources/Tina16/functions/0000000001C7DA60__FUN_01c7da60.c)
- Recovered role: Evidence-blocked sbDelVersionClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.EditorPanel.FaultManager.GroupBox4.FaultPanel.sbDelVersion.OnClick.
- Current graph behavior: The OnClick binding reaches sbDelVersionClick at 01c7da60. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.EditorPanel.FaultManager.GroupBox4.FaultPanel.sbDelVersion to sbDelVersionClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C7DA60__FUN_01c7da60.c and directly references 012bee60, 01c7d780. No accepted end-to-end role was established for this control path.
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

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

