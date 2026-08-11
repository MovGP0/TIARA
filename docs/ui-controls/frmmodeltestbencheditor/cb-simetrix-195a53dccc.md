# SIMetrix

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmModelTestBenchEditor |
| Component path | frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_globalSettings.cB_SIMetrix |
| Control class | TCheckBox |
| Caption | SIMetrix |
| Hint | Add spice result as pictures to the resport. |
| Text | Not present in the recovered resource. |
| Handler name | cB_SIMetrixClick |
| Handler address | 012f7aa0 |
| Graph node | `resource:dfm:frmModelTestBenchEditor/frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_globalSettings.cB_SIMetrix` |
| Handler node | `function:012f7aa0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["SIMetrix"] -->|OnClick| handler["FUN_012f7aa0"]
    handler --> call1["FUN_004aeac0"]
    handler --> call2["FUN_006dd6f0"]
    handler --> call3["FUN_006e2530"]
    handler --> call4["FUN_012e5810"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012F7AA0__FUN_012f7aa0.c](../../../DecompiledSources/Tina16/functions/00000000012F7AA0__FUN_012f7aa0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_globalSettings.cB_SIMetrix.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:004aeac0` — FUN_004aeac0
- `function:006dd6f0` — FUN_006dd6f0
- `function:006e2530` — FUN_006e2530
- `function:012e5810` — FUN_012e5810

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: true
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: [s] at distance 189.
- Rank 2: [s] at distance 214.
- Rank 3: Start time at distance 314.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
