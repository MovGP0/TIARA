# Step Over

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | HDLDebugger |
| Component path | HDLDebugger.pnToolbar.sbStepOver |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Step Over |
| Text | Not present in the recovered resource. |
| Handler name | sbStepOverClick |
| Handler address | 0109f250 |
| Graph node | `resource:dfm:HDLDebugger/HDLDebugger.pnToolbar.sbStepOver` |
| Handler node | `function:0109f250` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Step Over"] -->|OnClick| handler["FUN_0109f250"]
    handler --> call1["VHDL_DLL2.DLL::_Dbg_TraceInto"]
    handler --> call2["VHDL_DLL2.DLL::_Dbg_IsStopped"]
    handler --> call3["VHDL_DLL2.DLL::_Dbg_SetNodeChanged"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000109F250__FUN_0109f250.c](../../../DecompiledSources/Tina16/functions/000000000109F250__FUN_0109f250.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: HDLDebugger.pnToolbar.sbStepOver.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00e03600` — Calls the VHDL_DLL2.DLL export _Dbg_TraceInto.
- `function:00e03680` — Calls the VHDL_DLL2.DLL export _Dbg_IsStopped.
- `function:00e03840` — Calls the VHDL_DLL2.DLL export _Dbg_SetNodeChanged.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0222_HDLDebugger_HDLDebugger_pnToolbar_sbStepOver_Glyph_Data.png`](../../../glyph/0222_HDLDebugger_HDLDebugger_pnToolbar_sbStepOver_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: time:  at distance 123.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
