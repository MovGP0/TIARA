# Collate

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frxPrintDialog |
| Component path | frxPrintDialog.Label2.CollateCB |
| Control class | TCheckBox |
| Caption | Collate |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | CollateCBClick |
| Handler address | 018b45c0 |
| Graph node | `resource:dfm:frxPrintDialog/frxPrintDialog.Label2.CollateCB` |
| Handler node | `function:018b45c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Collate"] -->|OnClick| handler["FUN_018b45c0"]
    handler --> call1["FUN_018b45d0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000018B45C0__FUN_018b45c0.c](../../../DecompiledSources/Tina16/functions/00000000018B45C0__FUN_018b45c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frxPrintDialog.Label2.CollateCB.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:018b45d0` — Handles 1 Delphi UI event: frxPrintDialog.Label2.CopiesPB.OnPaint.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: true
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Number of copies at distance 166.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
