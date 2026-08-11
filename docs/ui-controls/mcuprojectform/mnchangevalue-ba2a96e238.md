# Change Value

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pmWatches.mnChangeValue |
| Control class | TMenuItem |
| Caption | Change Value |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnChangeValueClick |
| Handler address | 0108e060 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pmWatches.mnChangeValue` |
| Handler node | `function:0108e060` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Change Value"] -->|OnClick| handler["FUN_0108e060"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_004425e0"]
    handler --> call3["FUN_0072d440"]
    handler --> call4["FUN_007fc180"]
    handler --> call5["VHDL_DLL2.DLL::_Debug_SetSymbolValue"]
    handler --> call6["VHDL_DLL2.DLL::_Debug_GetSymbolPtr"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108E060__FUN_0108e060.c](../../../DecompiledSources/Tina16/functions/000000000108E060__FUN_0108e060.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pmWatches.mnChangeValue.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 13

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:004425e0` — FUN_004425e0
- `function:0072d440` — FUN_0072d440
- `function:007fc180` — FUN_007fc180
- `function:00e02ec0` — Calls the VHDL_DLL2.DLL export _Debug_SetSymbolValue.
- `function:00e02ee0` — Calls the VHDL_DLL2.DLL export _Debug_GetSymbolPtr.
- `function:010729f0` — FUN_010729f0
- `function:01072a00` — FUN_01072a00
- `function:01072a10` — FUN_01072a10
- `function:01072a50` — FUN_01072a50
- `function:01072a80` — FUN_01072a80
- `function:010892f0` — FUN_010892f0
- `function:0108bb30` — FUN_0108bb30

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
