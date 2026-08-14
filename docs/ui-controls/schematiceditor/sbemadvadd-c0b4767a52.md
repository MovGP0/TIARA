# Add|Add a new advice to the end

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvAdd |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Add\|Add a new advice to the end |
| Text | Not present in the recovered resource. |
| Handler name | sbEMAdvAddClick |
| Handler address | 01c7e0d0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvAdd` |
| Handler node | `function:01c7e0d0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches sbEMAdvAddClick at 01c7e0d0. The recovered body has 8 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Add|Add a new advice to the end"] -->|"OnClick"| handler["sbEMAdvAddClick (01c7e0d0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C7E0D0__FUN_01c7e0d0.c](../../../DecompiledSources/Tina16/functions/0000000001C7E0D0__FUN_01c7e0d0.c)
- Recovered role: Evidence-blocked sbEMAdvAddClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvAdd.OnClick.
- Current graph behavior: The OnClick binding reaches sbEMAdvAddClick at 01c7e0d0. The recovered body has 8 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvAdd to sbEMAdvAddClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C7E0D0__FUN_01c7e0d0.c and directly references 00410f20, 004ae7e0, 007fc180, 012bdec0, 01b72750, 01b72860, 01c7d9d0, 01c7e2a0. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 8

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:004ae7e0` — FUN_004ae7e0
- `function:007fc180` — FUN_007fc180
- `function:012bdec0` — FUN_012bdec0
- `function:01b72750` — FUN_01b72750
- `function:01b72860` — FUN_01b72860
- `function:01c7d9d0` — FUN_01c7d9d0
- `function:01c7e2a0` — FUN_01c7e2a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0372_SchematicEditor_SchematicEditor_EditorPanel_FaultManager_nbExMan_tsExManAdvisor_GroupBox6_sbEMAdvAdd_Glyph_Data.png`](../../../glyph/0372_SchematicEditor_SchematicEditor_EditorPanel_FaultManager_nbExMan_tsExManAdvisor_GroupBox6_sbEMAdvAdd_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Penalty [%]: at distance 184.
- Rank 2: 99/99 at distance 199.

## Analysis limits

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

