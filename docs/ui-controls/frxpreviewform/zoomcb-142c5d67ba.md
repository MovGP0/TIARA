# ZoomCB

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frxPreviewForm |
| Component path | frxPreviewForm.ToolBar.Sep3.ZoomCB |
| Control class | TfrxComboBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | 100% |
| Handler name | ZoomCBClick |
| Handler address | 018af390 |
| Graph node | `resource:dfm:frxPreviewForm/frxPreviewForm.ToolBar.Sep3.ZoomCB` |
| Handler node | `function:018af390` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["ZoomCB"] -->|OnClick| handler["FUN_018af390"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_00414de0"]
    handler --> call3["FUN_00416e20"]
    handler --> call4["FUN_004170c0"]
    handler --> call5["VCL control Unicode text reader"]
    handler --> call6["FUN_0065b870"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000018AF390__FUN_018af390.c](../../../DecompiledSources/Tina16/functions/00000000018AF390__FUN_018af390.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frxPreviewForm.ToolBar.Sep3.ZoomCB.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 10

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414de0` — FUN_00414de0
- `function:00416e20` — FUN_00416e20
- `function:004170c0` — FUN_004170c0
- `function:0064dd90` — VCL control Unicode text reader
- `function:0065b870` — FUN_0065b870
- `function:0180d800` — FUN_0180d800
- `function:018a8d30` — FUN_018a8d30
- `function:018a8d80` — FUN_018a8d80
- `function:018a9020` — FUN_018a9020

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
