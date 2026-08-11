# Delete|Delete current advice

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvDelete |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Delete\|Delete current advice |
| Text | Not present in the recovered resource. |
| Handler name | sbEMAdvDeleteClick |
| Handler address | 01c7e1f0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvDelete` |
| Handler node | `function:01c7e1f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Delete|Delete current advice"] -->|OnClick| handler["FUN_01c7e1f0"]
    handler --> call1["FUN_004ae870"]
    handler --> call2["FUN_004aee80"]
    handler --> call3["FUN_01c7d9d0"]
    handler --> call4["FUN_01c7e2a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C7E1F0__FUN_01c7e1f0.c](../../../DecompiledSources/Tina16/functions/0000000001C7E1F0__FUN_01c7e1f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.EditorPanel.FaultManager.nbExMan.tsExManAdvisor.GroupBox6.sbEMAdvDelete.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:004ae870` — FUN_004ae870
- `function:004aee80` — FUN_004aee80
- `function:01c7d9d0` — FUN_01c7d9d0
- `function:01c7e2a0` — FUN_01c7e2a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0375_SchematicEditor_SchematicEditor_EditorPanel_FaultManager_nbExMan_tsExManAdvisor_GroupBox6_sbEMAdvDelete_Glyph_Data.png`](../../../glyph/0375_SchematicEditor_SchematicEditor_EditorPanel_FaultManager_nbExMan_tsExManAdvisor_GroupBox6_sbEMAdvDelete_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: 99/99 at distance 151.
- Rank 2: Penalty [%]: at distance 232.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
