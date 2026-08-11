# Add

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmParamEditor |
| Component path | frmParamEditor.pnlButtons.btnAdd |
| Control class | TButton |
| Caption | Add |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnAddClick |
| Handler address | 0143bc50 |
| Graph node | `resource:dfm:frmParamEditor/frmParamEditor.pnlButtons.btnAdd` |
| Handler node | `function:0143bc50` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Add"] -->|OnClick| handler["FUN_0143bc50"]
    handler --> call1["FUN_00848a70"]
    handler --> call2["FUN_0084e3c0"]
    handler --> call3["FUN_0084e3e0"]
    handler --> call4["FUN_0084e4d0"]
    handler --> call5["FUN_00f02610"]
    handler --> call6["FUN_0143d630"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000143BC50__FUN_0143bc50.c](../../../DecompiledSources/Tina16/functions/000000000143BC50__FUN_0143bc50.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmParamEditor.pnlButtons.btnAdd.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00848a70` — FUN_00848a70
- `function:0084e3c0` — FUN_0084e3c0
- `function:0084e3e0` — FUN_0084e3e0
- `function:0084e4d0` — FUN_0084e4d0
- `function:00f02610` — FUN_00f02610
- `function:0143d630` — FUN_0143d630

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
