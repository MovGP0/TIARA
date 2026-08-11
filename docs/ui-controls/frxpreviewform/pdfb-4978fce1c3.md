# PdfB

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frxPreviewForm |
| Component path | frxPreviewForm.ToolBar.PdfB |
| Control class | TToolButton |
| Caption | PdfB |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | PdfBClick |
| Handler address | 018b0040 |
| Graph node | `resource:dfm:frxPreviewForm/frxPreviewForm.ToolBar.PdfB` |
| Handler node | `function:018b0040` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["PdfB"] -->|OnClick| handler["FUN_018b0040"]
    handler --> call1["FUN_018aa5e0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000018B0040__FUN_018b0040.c](../../../DecompiledSources/Tina16/functions/00000000018B0040__FUN_018b0040.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frxPreviewForm.ToolBar.PdfB.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:018aa5e0` — FUN_018aa5e0

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
