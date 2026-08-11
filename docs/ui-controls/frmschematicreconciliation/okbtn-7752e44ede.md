# OK

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmSchematicReconciliation |
| Component path | frmSchematicReconciliation.OKBtn |
| Control class | TButton |
| Caption | OK |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | OKBtnClick |
| Handler address | 01b9f800 |
| Graph node | `resource:dfm:frmSchematicReconciliation/frmSchematicReconciliation.OKBtn` |
| Handler node | `function:01b9f800` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["OK"] -->|OnClick| handler["FUN_01b9f800"]
    handler --> call1["FUN_00418590"]
    handler --> call2["FUN_0068bd10"]
    handler --> call3["FUN_00805990"]
    handler --> call4["FUN_0199e300"]
    handler --> call5["FUN_019a57f0"]
    handler --> call6["FUN_01b9f630"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B9F800__FUN_01b9f800.c](../../../DecompiledSources/Tina16/functions/0000000001B9F800__FUN_01b9f800.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmSchematicReconciliation.OKBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00418590` — FUN_00418590
- `function:0068bd10` — FUN_0068bd10
- `function:00805990` — FUN_00805990
- `function:0199e300` — FUN_0199e300
- `function:019a57f0` — FUN_019a57f0
- `function:01b9f630` — Handles 1 Delphi UI event: frmSchematicReconciliation.CopyBtn.OnClick.

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
