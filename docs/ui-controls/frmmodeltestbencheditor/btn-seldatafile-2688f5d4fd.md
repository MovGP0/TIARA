# Select data file

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmModelTestBenchEditor |
| Component path | frmModelTestBenchEditor.pnlMain.pnlFileSelector.pnlSetRoot.btn_selDataFile |
| Control class | TButton |
| Caption | Select data file |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btn_selDataFileClick |
| Handler address | 012f8460 |
| Graph node | `resource:dfm:frmModelTestBenchEditor/frmModelTestBenchEditor.pnlMain.pnlFileSelector.pnlSetRoot.btn_selDataFile` |
| Handler node | `function:012f8460` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Select data file"] -->|OnClick| handler["FUN_012f8460"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_004aeac0"]
    handler --> call3["VCL control text setter with change suppression"]
    handler --> call4["FUN_006dd6f0"]
    handler --> call5["FUN_006e2530"]
    handler --> call6["FUN_006e5350"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012F8460__FUN_012f8460.c](../../../DecompiledSources/Tina16/functions/00000000012F8460__FUN_012f8460.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmModelTestBenchEditor.pnlMain.pnlFileSelector.pnlSetRoot.btn_selDataFile.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 12

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:004aeac0` — FUN_004aeac0
- `function:0064de00` — VCL control text setter with change suppression
- `function:006dd6f0` — FUN_006dd6f0
- `function:006e2530` — FUN_006e2530
- `function:006e5350` — FUN_006e5350
- `function:012e6020` — FUN_012e6020
- `function:013020a0` — FUN_013020a0
- `function:01303240` — FUN_01303240
- `function:01304bb0` — FUN_01304bb0
- `function:013056e0` — FUN_013056e0
- `function:013060b0` — FUN_013060b0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Data file at distance 368.
- Rank 2: Result folder at distance 381.
- Rank 3: Circuit folder at distance 440.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
