# Delete

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PcbForm |
| Component path | PcbForm.Panel2.BtnDeleteComponent |
| Control class | TBitBtn |
| Caption | Delete |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | BtnDeleteComponentClick |
| Handler address | 00ed1430 |
| Graph node | `resource:dfm:PcbForm/PcbForm.Panel2.BtnDeleteComponent` |
| Handler node | `function:00ed1430` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Delete"] -->|OnClick| handler["FUN_00ed1430"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_0043e130"]
    handler --> call4["FUN_00ea9ca0"]
    handler --> call5["FUN_00ecbca0"]
    handler --> call6["FUN_00eccc30"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000ED1430__FUN_00ed1430.c](../../../DecompiledSources/Tina16/functions/0000000000ED1430__FUN_00ed1430.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PcbForm.Panel2.BtnDeleteComponent.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:0043e130` — FUN_0043e130
- `function:00ea9ca0` — FUN_00ea9ca0
- `function:00ecbca0` — FUN_00ecbca0
- `function:00eccc30` — FUN_00eccc30

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Component list: at distance 301.
- Rank 2: Footprint list: at distance 334.
- Rank 3: 3D component view: at distance 499.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
