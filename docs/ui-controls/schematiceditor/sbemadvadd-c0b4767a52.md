# Add|Add a new advice to the end

> Analysis status: Pending individual source review.

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

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Add|Add a new advice to the end"] -->|OnClick| handler["FUN_01c7e0d0"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_004ae7e0"]
    handler --> call3["FUN_007fc180"]
    handler --> call4["FUN_012bdec0"]
    handler --> call5["FUN_01b72750"]
    handler --> call6["FUN_01b72860"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C7E0D0__FUN_01c7e0d0.c](../../../DecompiledSources/Tina16/functions/0000000001C7E0D0__FUN_01c7e0d0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvAdd.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
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

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
