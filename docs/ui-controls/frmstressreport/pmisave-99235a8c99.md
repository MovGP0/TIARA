# Save

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmStressReport |
| Component path | frmStressReport.PopupMenu.PMISave |
| Control class | TMenuItem |
| Caption | Save |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | PMISaveClick |
| Handler address | 012bc750 |
| Graph node | `resource:dfm:frmStressReport/frmStressReport.PopupMenu.PMISave` |
| Handler node | `function:012bc750` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Save"] -->|OnClick| handler["FUN_012bc750"]
    handler --> call1["FUN_012bc780"]
    handler --> call2["FUN_012bc820"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012BC750__FUN_012bc750.c](../../../DecompiledSources/Tina16/functions/00000000012BC750__FUN_012bc750.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmStressReport.PopupMenu.PMISave.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:012bc780` — Handles 1 Delphi UI event: frmStressReport.PopupMenu.PMISaveAs.OnClick.
- `function:012bc820` — FUN_012bc820

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
