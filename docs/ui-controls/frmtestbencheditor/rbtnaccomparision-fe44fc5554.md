# Comparison

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmTestBenchEditor |
| Component path | frmTestBenchEditor.pnlMain.pnlTestOptions.pctrlMode.tsAC.grbxAC.rbtnACComparision |
| Control class | TRadioButton |
| Caption | Comparison |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | rbtnACComparisionClick |
| Handler address | 012c6020 |
| Graph node | `resource:dfm:frmTestBenchEditor/frmTestBenchEditor.pnlMain.pnlTestOptions.pctrlMode.tsAC.grbxAC.rbtnACComparision` |
| Handler node | `function:012c6020` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Comparison"] -->|OnClick| handler["FUN_012c6020"]
    handler --> call1["FUN_006e2530"]
    handler --> call2["FUN_012ca200"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012C6020__FUN_012c6020.c](../../../DecompiledSources/Tina16/functions/00000000012C6020__FUN_012c6020.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmTestBenchEditor.pnlMain.pnlTestOptions.pctrlMode.tsAC.grbxAC.rbtnACComparision.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:006e2530` — FUN_006e2530
- `function:012ca200` — FUN_012ca200

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
