# LbComponents

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PcbForm |
| Component path | PcbForm.Panel2.LbComponents |
| Control class | TListBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | LbComponentsClick |
| Handler address | 00ecde30 |
| Graph node | `resource:dfm:PcbForm/PcbForm.Panel2.LbComponents` |
| Handler node | `function:00ecde30` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["LbComponents"] -->|OnClick| handler["FUN_00ecde30"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_00416db0"]
    handler --> call3["FUN_00ea9ca0"]
    handler --> call4["FUN_00ecbca0"]
    handler --> call5["FUN_00eccc30"]
    handler --> call6["FUN_00ed3a60"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000ECDE30__FUN_00ecde30.c](../../../DecompiledSources/Tina16/functions/0000000000ECDE30__FUN_00ecde30.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PcbForm.Panel2.LbComponents.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416db0` — FUN_00416db0
- `function:00ea9ca0` — FUN_00ea9ca0
- `function:00ecbca0` — FUN_00ecbca0
- `function:00eccc30` — FUN_00eccc30
- `function:00ed3a60` — FUN_00ed3a60

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Component list: at distance 24.
- Rank 2: Footprint list: at distance 205.
- Rank 3: 3D component view: at distance 370.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
