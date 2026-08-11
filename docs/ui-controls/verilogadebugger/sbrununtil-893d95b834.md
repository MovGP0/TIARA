# Run Until

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | VerilogADebugger |
| Component path | VerilogADebugger.pnToolbar.sbRunUntil |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Run Until |
| Text | Not present in the recovered resource. |
| Handler name | sbRunUntilClick |
| Handler address | 010a5730 |
| Graph node | `resource:dfm:VerilogADebugger/VerilogADebugger.pnToolbar.sbRunUntil` |
| Handler node | `function:010a5730` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Run Until"] -->|OnClick| handler["FUN_010a5730"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_007fc180"]
    handler --> call3["FUN_010a5680"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000010A5730__FUN_010a5730.c](../../../DecompiledSources/Tina16/functions/00000000010A5730__FUN_010a5730.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: VerilogADebugger.pnToolbar.sbRunUntil.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:007fc180` — FUN_007fc180
- `function:010a5680` — Handles 1 Delphi UI event: VerilogADebugger.pnToolbar.sbRun.OnClick.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0499_VerilogADebugger_VerilogADebugger_pnToolbar_sbRunUntil_Glyph_Data.png`](../../../glyph/0499_VerilogADebugger_VerilogADebugger_pnToolbar_sbRunUntil_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: time:  at distance 243.
- Rank 2: IterCnt:  at distance 721.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
