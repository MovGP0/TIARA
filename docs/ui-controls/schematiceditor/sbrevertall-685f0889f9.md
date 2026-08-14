# Revert All|Reverts all faults

> Analysis status: Blocked by an exact evidence gap.

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

The OnClick binding reaches sbRevertAllClick at 01c7de00. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Revert All|Reverts all faults"] -->|"OnClick"| handler["sbRevertAllClick (01c7de00)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C7DE00__FUN_01c7de00.c](../../../DecompiledSources/Tina16/functions/0000000001C7DE00__FUN_01c7de00.c)
- Recovered role: Evidence-blocked sbRevertAllClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.EditorPanel.FaultManager.GroupBox4.FaultPanel.sbRevertAll.OnClick.
- Current graph behavior: The OnClick binding reaches sbRevertAllClick at 01c7de00. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.EditorPanel.FaultManager.GroupBox4.FaultPanel.sbRevertAll to sbRevertAllClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C7DE00__FUN_01c7de00.c and directly references 00b94e60, 01c7dd90. No accepted end-to-end role was established for this control path.
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

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

