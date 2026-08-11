# btnOK

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | BatchSimulationDlg |
| Component path | BatchSimulationDlg.btnOK |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnOKClick |
| Handler address | 01c49890 |
| Graph node | `resource:dfm:BatchSimulationDlg/BatchSimulationDlg.btnOK` |
| Handler node | `function:01c49890` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["btnOK"] -->|OnClick| handler["FUN_01c49890"]
    handler --> call1["FUN_00f07e10"]
    handler --> call2["FUN_00f5d4a0"]
    handler --> call3["FUN_010be740"]
    handler --> call4["FUN_0149cb90"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C49890__FUN_01c49890.c](../../../DecompiledSources/Tina16/functions/0000000001C49890__FUN_01c49890.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: BatchSimulationDlg.btnOK.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00f07e10` — FUN_00f07e10
- `function:00f5d4a0` — FUN_00f5d4a0
- `function:010be740` — FUN_010be740
- `function:0149cb90` — FUN_0149cb90

## Resource evidence

- Kind: bkOK
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
