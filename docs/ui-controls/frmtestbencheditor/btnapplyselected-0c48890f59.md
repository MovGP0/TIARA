# Apply to selected

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmTestBenchEditor |
| Component path | frmTestBenchEditor.pnlMain.pnlTestOptions.btnApplySelected |
| Control class | TButton |
| Caption | Apply to selected |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnApplySelectedClick |
| Handler address | 012c69e0 |
| Graph node | `resource:dfm:frmTestBenchEditor/frmTestBenchEditor.pnlMain.pnlTestOptions.btnApplySelected` |
| Handler node | `function:012c69e0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Apply to selected"] -->|OnClick| handler["FUN_012c69e0"]
    handler --> call1["FUN_006e5350"]
    handler --> call2["FUN_006e5360"]
    handler --> call3["FUN_012c7ae0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012C69E0__FUN_012c69e0.c](../../../DecompiledSources/Tina16/functions/00000000012C69E0__FUN_012c69e0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmTestBenchEditor.pnlMain.pnlTestOptions.btnApplySelected.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:006e5350` — FUN_006e5350
- `function:006e5360` — FUN_006e5360
- `function:012c7ae0` — FUN_012c7ae0

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
