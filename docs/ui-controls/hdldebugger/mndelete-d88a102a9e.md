# &Delete

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | HDLDebugger |
| Component path | HDLDebugger.pmPopupMenuBreakPoints.mnDelete |
| Control class | TMenuItem |
| Caption | &Delete |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnDeleteClick |
| Handler address | 0109ebc0 |
| Graph node | `resource:dfm:HDLDebugger/HDLDebugger.pmPopupMenuBreakPoints.mnDelete` |
| Handler node | `function:0109ebc0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Delete"] -->|OnClick| handler["FUN_0109ebc0"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_00442620"]
    handler --> call3["VHDL_DLL2.DLL::_Dbg_ToggleBreakpoint"]
    handler --> call4["HDL debugger breakpoint tree reload"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000109EBC0__FUN_0109ebc0.c](../../../DecompiledSources/Tina16/functions/000000000109EBC0__FUN_0109ebc0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: HDLDebugger.pmPopupMenuBreakPoints.mnDelete.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00442620` — FUN_00442620
- `function:00e03780` — Calls the VHDL_DLL2.DLL export _Dbg_ToggleBreakpoint.
- `function:0109e470` — HDL debugger breakpoint tree reload

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
