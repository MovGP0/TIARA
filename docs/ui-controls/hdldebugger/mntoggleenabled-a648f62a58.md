# &Enabled

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | HDLDebugger |
| Component path | HDLDebugger.pmPopupMenuBreakPoints.mnToggleEnabled |
| Control class | TMenuItem |
| Caption | &Enabled |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnToggleEnabledClick |
| Handler address | 0109ece0 |
| Graph node | `resource:dfm:HDLDebugger/HDLDebugger.pmPopupMenuBreakPoints.mnToggleEnabled` |
| Handler node | `function:0109ece0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Enabled"] -->|OnClick| handler["FUN_0109ece0"]
    handler --> call1["FUN_00442620"]
    handler --> call2["VHDL_DLL2.DLL::_Dbg_SetEnabled"]
    handler --> call3["HDL debugger breakpoint tree reload"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000109ECE0__FUN_0109ece0.c](../../../DecompiledSources/Tina16/functions/000000000109ECE0__FUN_0109ece0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: HDLDebugger.pmPopupMenuBreakPoints.mnToggleEnabled.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00442620` — FUN_00442620
- `function:00e03800` — Calls the VHDL_DLL2.DLL export _Dbg_SetEnabled.
- `function:0109e470` — HDL debugger breakpoint tree reload

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: true
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
