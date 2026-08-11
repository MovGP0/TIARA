# Open

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frxPreviewForm |
| Component path | frxPreviewForm.ToolBar.OpenB |
| Control class | TToolButton |
| Caption | Open |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | OpenBClick |
| Handler address | 018af0f0 |
| Graph node | `resource:dfm:frxPreviewForm/frxPreviewForm.ToolBar.OpenB` |
| Handler node | `function:018af0f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Open"] -->|OnClick| handler["FUN_018af0f0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["VCL control text setter with change suppression"]
    handler --> call3["FUN_0180bfe0"]
    handler --> call4["FUN_018aa2d0"]
    handler --> call5["FUN_018af290"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000018AF0F0__FUN_018af0f0.c](../../../DecompiledSources/Tina16/functions/00000000018AF0F0__FUN_018af0f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frxPreviewForm.ToolBar.OpenB.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0064de00` — VCL control text setter with change suppression
- `function:0180bfe0` — FUN_0180bfe0
- `function:018aa2d0` — FUN_018aa2d0
- `function:018af290` — FUN_018af290

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
