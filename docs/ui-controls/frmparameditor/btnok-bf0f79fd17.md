# btnOK

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmParamEditor |
| Component path | frmParamEditor.pnlButton1.btnOK |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnOKClick |
| Handler address | 0143b640 |
| Graph node | `resource:dfm:frmParamEditor/frmParamEditor.pnlButton1.btnOK` |
| Handler node | `function:0143b640` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["btnOK"] -->|OnClick| handler["FUN_0143b640"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["Delphi UnicodeString clear and finalization helper"]
    handler --> call3["Delphi UnicodeString array finalization helper"]
    handler --> call4["FUN_00416cd0"]
    handler --> call5["FUN_0043ea00"]
    handler --> call6["FUN_004aeac0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000143B640__FUN_0143b640.c](../../../DecompiledSources/Tina16/functions/000000000143B640__FUN_0143b640.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmParamEditor.pnlButton1.btnOK.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 16

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416cd0` — FUN_00416cd0
- `function:0043ea00` — FUN_0043ea00
- `function:004aeac0` — FUN_004aeac0
- `function:004b6930` — FUN_004b6930
- `function:0084e320` — FUN_0084e320
- `function:00b957c0` — FUN_00b957c0
- `function:0143ca80` — FUN_0143ca80
- `function:0143d610` — FUN_0143d610
- `function:0143d700` — FUN_0143d700
- `function:0149ec30` — FUN_0149ec30
- `function:019a4600` — FUN_019a4600
- `function:019af700` — FUN_019af700
- `function:01d0f8a0` — FUN_01d0f8a0

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
