# Local maximum

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.DFPopupMnu.SetpositionMnu.DFLocalmaximumMnu |
| Control class | TMenuItem |
| Caption | Local maximum |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | DFLocalmaximumMnuClick |
| Handler address | 01a8a8c0 |
| Graph node | `resource:dfm:DFWindow/DFWindow.DFPopupMnu.SetpositionMnu.DFLocalmaximumMnu` |
| Handler node | `function:01a8a8c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Local maximum"] -->|OnClick| handler["FUN_01a8a8c0"]
    handler --> call1["FUN_00410e60"]
    handler --> call2["Nil-safe Delphi object destruction helper"]
    handler --> call3["FUN_004aeac0"]
    handler --> call4["FUN_01ab5810"]
    handler --> call5["FUN_01acff30"]
    handler --> call6["FUN_01ae24a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A8A8C0__FUN_01a8a8c0.c](../../../DecompiledSources/Tina16/functions/0000000001A8A8C0__FUN_01a8a8c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFWindow.DFPopupMnu.SetpositionMnu.DFLocalmaximumMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00410e60` — FUN_00410e60
- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:004aeac0` — FUN_004aeac0
- `function:01ab5810` — FUN_01ab5810
- `function:01acff30` — FUN_01acff30
- `function:01ae24a0` — FUN_01ae24a0

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
