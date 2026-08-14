# Previous|Move to previous advice

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvPrev |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Previous\|Move to previous advice |
| Text | Not present in the recovered resource. |
| Handler name | sbEMAdvPrevClick |
| Handler address | 01c7de60 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvPrev` |
| Handler node | `function:01c7de60` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches sbEMAdvPrevClick at 01c7de60. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Previous|Move to previous advice"] -->|"OnClick"| handler["sbEMAdvPrevClick (01c7de60)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C7DE60__FUN_01c7de60.c](../../../DecompiledSources/Tina16/functions/0000000001C7DE60__FUN_01c7de60.c)
- Recovered role: Evidence-blocked sbEMAdvPrevClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvPrev.OnClick.
- Current graph behavior: The OnClick binding reaches sbEMAdvPrevClick at 01c7de60. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvPrev to sbEMAdvPrevClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C7DE60__FUN_01c7de60.c and directly references 01c7e2a0. No accepted end-to-end role was established for this control path.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c7e2a0` — FUN_01c7e2a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0371_SchematicEditor_SchematicEditor_EditorPanel_FaultManager_nbExMan_tsExManAdvisor_GroupBox6_sbEMAdvPrev_Glyph_Data.png`](../../../glyph/0371_SchematicEditor_SchematicEditor_EditorPanel_FaultManager_nbExMan_tsExManAdvisor_GroupBox6_sbEMAdvPrev_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Penalty [%]: at distance 109.
- Rank 2: 99/99 at distance 280.

## Analysis limits

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

