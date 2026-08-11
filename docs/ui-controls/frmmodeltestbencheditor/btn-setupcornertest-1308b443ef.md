# Setup corner test

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmModelTestBenchEditor |
| Component path | frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_testSettings.btn_setupCornerTest |
| Control class | TButton |
| Caption | Setup corner test |
| Hint | Tolerance settings. |
| Text | Not present in the recovered resource. |
| Handler name | btn_setupCornerTestClick |
| Handler address | 012f85c0 |
| Graph node | `resource:dfm:frmModelTestBenchEditor/frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_testSettings.btn_setupCornerTest` |
| Handler node | `function:012f85c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Setup corner test"] -->|OnClick| handler["FUN_012f85c0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_00416cd0"]
    handler --> call4["FUN_00416db0"]
    handler --> call5["VCL control Unicode text reader"]
    handler --> call6["FUN_006dd390"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012F85C0__FUN_012f85c0.c](../../../DecompiledSources/Tina16/functions/00000000012F85C0__FUN_012f85c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_testSettings.btn_setupCornerTest.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416cd0` — FUN_00416cd0
- `function:00416db0` — FUN_00416db0
- `function:0064dd90` — VCL control Unicode text reader
- `function:006dd390` — FUN_006dd390
- `function:006e2530` — FUN_006e2530

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
