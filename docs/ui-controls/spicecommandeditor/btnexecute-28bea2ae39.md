# Execute

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SpiceCommandEditor |
| Component path | SpiceCommandEditor.pnlButtons.btnExecute |
| Control class | TBitBtn |
| Caption | Execute |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnExecuteClick |
| Handler address | 014725f0 |
| Graph node | `resource:dfm:SpiceCommandEditor/SpiceCommandEditor.pnlButtons.btnExecute` |
| Handler node | `function:014725f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Execute"] -->|OnClick| handler["FUN_014725f0"]
    handler --> call1["FUN_01472630"]
    handler --> call2["FUN_014736b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014725F0__FUN_014725f0.c](../../../DecompiledSources/Tina16/functions/00000000014725F0__FUN_014725f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SpiceCommandEditor.pnlButtons.btnExecute.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:01472630` — Handles 1 Delphi UI event: SpiceCommandEditor.pnlButton1.btnOK.OnClick.
- `function:014736b0` — FUN_014736b0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: 6
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0483_SpiceCommandEditor_SpiceCommandEditor_pnlButtons_btnExecute_Glyph_Data.png`](../../../glyph/0483_SpiceCommandEditor_SpiceCommandEditor_pnlButtons_btnExecute_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
