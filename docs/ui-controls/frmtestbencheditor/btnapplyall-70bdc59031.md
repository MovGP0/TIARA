# Apply to all

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmTestBenchEditor |
| Component path | frmTestBenchEditor.pnlMain.pnlTestOptions.btnApplyAll |
| Control class | TButton |
| Caption | Apply to all |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnApplyAllClick |
| Handler address | 012c6960 |
| Graph node | `resource:dfm:frmTestBenchEditor/frmTestBenchEditor.pnlMain.pnlTestOptions.btnApplyAll` |
| Handler node | `function:012c6960` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Apply to all"] -->|OnClick| handler["FUN_012c6960"]
    handler --> call1["FUN_006decb0"]
    handler --> call2["FUN_006df500"]
    handler --> call3["FUN_012c7ae0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012C6960__FUN_012c6960.c](../../../DecompiledSources/Tina16/functions/00000000012C6960__FUN_012c6960.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmTestBenchEditor.pnlMain.pnlTestOptions.btnApplyAll.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:006decb0` — FUN_006decb0
- `function:006df500` — FUN_006df500
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
