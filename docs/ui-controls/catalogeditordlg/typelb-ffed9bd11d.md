# TypeLB

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CatalogEditorDlg |
| Component path | CatalogEditorDlg.TypeLB |
| Control class | TListBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | TypeLBClick |
| Handler address | 013f0440 |
| Graph node | `resource:dfm:CatalogEditorDlg/CatalogEditorDlg.TypeLB` |
| Handler node | `function:013f0440` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["TypeLB"] -->|OnClick| handler["FUN_013f0440"]
    handler --> call1["FUN_00742eb0"]
    handler --> call2["FUN_00742ed0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000013F0440__FUN_013f0440.c](../../../DecompiledSources/Tina16/functions/00000000013F0440__FUN_013f0440.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CatalogEditorDlg.TypeLB.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00742eb0` — FUN_00742eb0
- `function:00742ed0` — FUN_00742ed0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: &Type at distance 21.
- Rank 2: &Model at distance 63.
- Rank 3: 00000/00000 at distance 144.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
