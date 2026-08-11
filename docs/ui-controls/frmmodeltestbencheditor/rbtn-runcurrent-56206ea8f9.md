# Run current circuit

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmModelTestBenchEditor |
| Component path | frmModelTestBenchEditor.pnlMain.pnlTestOptions.rbtn_runCurrent |
| Control class | TRadioButton |
| Caption | Run current circuit |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | rbtn_runCurrentClick |
| Handler address | 012fef10 |
| Graph node | `resource:dfm:frmModelTestBenchEditor/frmModelTestBenchEditor.pnlMain.pnlTestOptions.rbtn_runCurrent` |
| Handler node | `function:012fef10` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Run current circuit"] -->|OnClick| handler["FUN_012fef10"]
    handler --> call1["FUN_004aeac0"]
    handler --> call2["FUN_006dd6f0"]
    handler --> call3["FUN_006e2530"]
    handler --> call4["FUN_012e5830"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012FEF10__FUN_012fef10.c](../../../DecompiledSources/Tina16/functions/00000000012FEF10__FUN_012fef10.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmModelTestBenchEditor.pnlMain.pnlTestOptions.rbtn_runCurrent.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:004aeac0` — FUN_004aeac0
- `function:006dd6f0` — FUN_006dd6f0
- `function:006e2530` — FUN_006e2530
- `function:012e5830` — FUN_012e5830

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: (To abort all simulation processes press CTRL+ALT+END.) at distance 218.
- Rank 2: Test mode at distance 255.
- Rank 3: Manufacturer: at distance 720.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
