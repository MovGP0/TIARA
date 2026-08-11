# 16-bit operation

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | dlgFlowchartInterruptTmr0 |
| Component path | dlgFlowchartInterruptTmr0.bitszam |
| Control class | TCheckBox |
| Caption | 16-bit operation |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bitszamClick |
| Handler address | 00f9fa90 |
| Graph node | `resource:dfm:dlgFlowchartInterruptTmr0/dlgFlowchartInterruptTmr0.bitszam` |
| Handler node | `function:00f9fa90` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["16-bit operation"] -->|OnClick| handler["FUN_00f9fa90"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_00416ba0"]
    handler --> call3["FUN_00460ba0"]
    handler --> call4["FUN_00462650"]
    handler --> call5["FUN_00468860"]
    handler --> call6["VCL control text setter with change suppression"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000F9FA90__FUN_00f9fa90.c](../../../DecompiledSources/Tina16/functions/0000000000F9FA90__FUN_00f9fa90.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: dlgFlowchartInterruptTmr0.bitszam.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 9

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416ba0` — FUN_00416ba0
- `function:00460ba0` — FUN_00460ba0
- `function:00462650` — FUN_00462650
- `function:00468860` — FUN_00468860
- `function:0064de00` — VCL control text setter with change suppression
- `function:00b8fd60` — FUN_00b8fd60
- `function:00b90090` — FUN_00b90090
- `function:00f61040` — FUN_00f61040

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
