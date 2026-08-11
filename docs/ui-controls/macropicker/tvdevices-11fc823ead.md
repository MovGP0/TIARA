# tvDevices

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MacroPicker |
| Component path | MacroPicker.tvDevices |
| Control class | TTreeView |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | tvDevicesClick |
| Handler address | 01702a20 |
| Graph node | `resource:dfm:MacroPicker/MacroPicker.tvDevices` |
| Handler node | `function:01702a20` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["tvDevices"] -->|OnClick| handler["FUN_01702a20"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_00416ba0"]
    handler --> call3["FUN_00416cd0"]
    handler --> call4["FUN_0043f750"]
    handler --> call5["VCL control text setter with change suppression"]
    handler --> call6["FUN_006dd6f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001702A20__FUN_01702a20.c](../../../DecompiledSources/Tina16/functions/0000000001702A20__FUN_01702a20.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MacroPicker.tvDevices.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 8

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416ba0` — FUN_00416ba0
- `function:00416cd0` — FUN_00416cd0
- `function:0043f750` — FUN_0043f750
- `function:0064de00` — VCL control text setter with change suppression
- `function:006dd6f0` — FUN_006dd6f0
- `function:006decb0` — FUN_006decb0
- `function:006e2530` — FUN_006e2530

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
