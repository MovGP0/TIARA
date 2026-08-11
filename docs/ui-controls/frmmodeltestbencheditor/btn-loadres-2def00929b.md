# Load

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmModelTestBenchEditor |
| Component path | frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_results.btn_loadRes |
| Control class | TButton |
| Caption | Load |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btn_loadResClick |
| Handler address | 012f8b00 |
| Graph node | `resource:dfm:frmModelTestBenchEditor/frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_results.btn_loadRes` |
| Handler node | `function:012f8b00` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Load"] -->|OnClick| handler["FUN_012f8b00"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_00414b50"]
    handler --> call4["FUN_00416cd0"]
    handler --> call5["FUN_00440a20"]
    handler --> call6["FUN_00442f70"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012F8B00__FUN_012f8b00.c](../../../DecompiledSources/Tina16/functions/00000000012F8B00__FUN_012f8b00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_results.btn_loadRes.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 14

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00414b50` — FUN_00414b50
- `function:00416cd0` — FUN_00416cd0
- `function:00440a20` — FUN_00440a20
- `function:00442f70` — FUN_00442f70
- `function:0064dd90` — VCL control Unicode text reader
- `function:0064de00` — VCL control text setter with change suppression
- `function:006e2530` — FUN_006e2530
- `function:0072d730` — FUN_0072d730
- `function:007fc180` — FUN_007fc180
- `function:008059a0` — FUN_008059a0
- `function:012e2da0` — FUN_012e2da0
- `function:01301c40` — FUN_01301c40

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
