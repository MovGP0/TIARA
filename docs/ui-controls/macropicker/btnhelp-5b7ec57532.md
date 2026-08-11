# btnHelp

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MacroPicker |
| Component path | MacroPicker.pnlControls.btnHelp |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnOKClick |
| Handler address | 01702e40 |
| Graph node | `resource:dfm:MacroPicker/MacroPicker.pnlControls.btnHelp` |
| Handler node | `function:01702e40` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["btnHelp"] -->|OnClick| handler["FUN_01702e40"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001702E40__FUN_01702e40.c](../../../DecompiledSources/Tina16/functions/0000000001702E40__FUN_01702e40.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: MacroPicker.pnlControls.btnOK.OnClick, MacroPicker.pnlControls.btnHelp.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

## Resource evidence

- Kind: bkHelp
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: 0000/0000 at distance 113.
- Rank 2: Subcategory: at distance 265.
- Rank 3: &Manufacturer: at distance 291.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
