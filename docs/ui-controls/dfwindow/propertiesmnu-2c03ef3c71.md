# Properties...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.DFPopupMnu.PropertiesMnu |
| Control class | TMenuItem |
| Caption | Properties... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | PropertiesMnuClick |
| Handler address | 01a7cb70 |
| Graph node | `resource:dfm:DFWindow/DFWindow.DFPopupMnu.PropertiesMnu` |
| Handler node | `function:01a7cb70` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Properties..."] -->|OnClick| handler["FUN_01a7cb70"]
    handler --> call1["FUN_00410e60"]
    handler --> call2["Nil-safe Delphi object destruction helper"]
    handler --> call3["FUN_004113d0"]
    handler --> call4["Delphi UnicodeString clear and finalization helper"]
    handler --> call5["FUN_004aeac0"]
    handler --> call6["FUN_00742eb0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A7CB70__FUN_01a7cb70.c](../../../DecompiledSources/Tina16/functions/0000000001A7CB70__FUN_01a7cb70.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFWindow.DFPopupMnu.PropertiesMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 13

## Direct calls

- `function:00410e60` — FUN_00410e60
- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:004113d0` — FUN_004113d0
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:004aeac0` — FUN_004aeac0
- `function:00742eb0` — FUN_00742eb0
- `function:01acff30` — FUN_01acff30
- `function:01ae3c10` — FUN_01ae3c10
- `function:01ae4cc0` — FUN_01ae4cc0
- `function:01ae5040` — FUN_01ae5040
- `function:01ae7100` — FUN_01ae7100
- `function:01aed550` — FUN_01aed550
- `function:01aee720` — FUN_01aee720

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
