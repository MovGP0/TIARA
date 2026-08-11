# lbSchemes

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmEditorSchemes |
| Component path | frmEditorSchemes.pnlSchemes.lbSchemes |
| Control class | TListBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | lbSchemesClick |
| Handler address | 01b74210 |
| Graph node | `resource:dfm:frmEditorSchemes/frmEditorSchemes.pnlSchemes.lbSchemes` |
| Handler node | `function:01b74210` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["lbSchemes"] -->|OnClick| handler["FUN_01b74210"]
    handler --> call1["FUN_00414f50"]
    handler --> call2["FUN_0064e770"]
    handler --> call3["FUN_0074b490"]
    handler --> call4["FUN_01b75500"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B74210__FUN_01b74210.c](../../../DecompiledSources/Tina16/functions/0000000001B74210__FUN_01b74210.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmEditorSchemes.pnlSchemes.lbSchemes.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414f50` — FUN_00414f50
- `function:0064e770` — FUN_0064e770
- `function:0074b490` — FUN_0074b490
- `function:01b75500` — FUN_01b75500

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1:  Sc&hemes at distance 17.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
