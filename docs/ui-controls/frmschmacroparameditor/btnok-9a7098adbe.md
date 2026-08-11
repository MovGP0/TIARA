# btnOK

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmSchMacroParamEditor |
| Component path | frmSchMacroParamEditor.pnlButton1.btnOK |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnOKClick |
| Handler address | 0141bfc0 |
| Graph node | `resource:dfm:frmSchMacroParamEditor/frmSchMacroParamEditor.pnlButton1.btnOK` |
| Handler node | `function:0141bfc0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["btnOK"] -->|OnClick| handler["FUN_0141bfc0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_00416cd0"]
    handler --> call4["FUN_00416e20"]
    handler --> call5["FUN_004170c0"]
    handler --> call6["FUN_0043ea00"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000141BFC0__FUN_0141bfc0.c](../../../DecompiledSources/Tina16/functions/000000000141BFC0__FUN_0141bfc0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmSchMacroParamEditor.pnlButton1.btnOK.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 9

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416cd0` — FUN_00416cd0
- `function:00416e20` — FUN_00416e20
- `function:004170c0` — FUN_004170c0
- `function:0043ea00` — FUN_0043ea00
- `function:0043eca0` — FUN_0043eca0
- `function:0084e320` — FUN_0084e320
- `function:0141c2f0` — FUN_0141c2f0

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
