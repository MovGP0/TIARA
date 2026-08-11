# &Renumber

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmComponentReport |
| Component path | frmComponentReport.pnlButtons.btnRenumber |
| Control class | TBitBtn |
| Caption | &Renumber |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnRenumberClick |
| Handler address | 01bb6510 |
| Graph node | `resource:dfm:frmComponentReport/frmComponentReport.pnlButtons.btnRenumber` |
| Handler node | `function:01bb6510` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Renumber"] -->|OnClick| handler["FUN_01bb6510"]
    handler --> call1["FUN_019acdc0"]
    handler --> call2["FUN_01bb5f00"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001BB6510__FUN_01bb6510.c](../../../DecompiledSources/Tina16/functions/0000000001BB6510__FUN_01bb6510.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmComponentReport.pnlButtons.btnRenumber.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:019acdc0` — FUN_019acdc0
- `function:01bb5f00` — FUN_01bb5f00

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
