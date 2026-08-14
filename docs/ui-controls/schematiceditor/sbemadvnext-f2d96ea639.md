# Next|Move to next advice

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvNext |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Next\|Move to next advice |
| Text | Not present in the recovered resource. |
| Handler name | sbEMAdvNextClick |
| Handler address | 01c7e260 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvNext` |
| Handler node | `function:01c7e260` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches sbEMAdvNextClick at 01c7e260. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Next|Move to next advice"] -->|"OnClick"| handler["sbEMAdvNextClick (01c7e260)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C7E260__FUN_01c7e260.c](../../../DecompiledSources/Tina16/functions/0000000001C7E260__FUN_01c7e260.c)
- Recovered role: Evidence-blocked sbEMAdvNextClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvNext.OnClick.
- Current graph behavior: The OnClick binding reaches sbEMAdvNextClick at 01c7e260. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvNext to sbEMAdvNextClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C7E260__FUN_01c7e260.c and directly references 01c7d9d0, 01c7e2a0. No accepted end-to-end role was established for this control path.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:01c7d9d0` — FUN_01c7d9d0
- `function:01c7e2a0` — FUN_01c7e2a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0374_SchematicEditor_SchematicEditor_EditorPanel_FaultManager_nbExMan_tsExManAdvisor_GroupBox6_sbEMAdvNext_Glyph_Data.png`](../../../glyph/0374_SchematicEditor_SchematicEditor_EditorPanel_FaultManager_nbExMan_tsExManAdvisor_GroupBox6_sbEMAdvNext_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: 99/99 at distance 111.
- Rank 2: Penalty [%]: at distance 282.

## Analysis limits

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

