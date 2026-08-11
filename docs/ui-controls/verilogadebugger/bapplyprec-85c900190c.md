# Apply

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | VerilogADebugger |
| Component path | VerilogADebugger.pnToolbar.bApplyPrec |
| Control class | TButton |
| Caption | Apply |
| Hint | Apply Precision |
| Text | Not present in the recovered resource. |
| Handler name | bApplyPrecClick |
| Handler address | 010a4cb0 |
| Graph node | `resource:dfm:VerilogADebugger/VerilogADebugger.pnToolbar.bApplyPrec` |
| Handler node | `function:010a4cb0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Apply"] -->|OnClick| handler["FUN_010a4cb0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_0043fc00"]
    handler --> call3["VCL control Unicode text reader"]
    handler --> call4["FUN_010a3d40"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000010A4CB0__FUN_010a4cb0.c](../../../DecompiledSources/Tina16/functions/00000000010A4CB0__FUN_010a4cb0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: VerilogADebugger.pnToolbar.bApplyPrec.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0043fc00` — FUN_0043fc00
- `function:0064dd90` — VCL control Unicode text reader
- `function:010a3d40` — FUN_010a3d40

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: IterCnt:  at distance 179.
- Rank 2: time:  at distance 309.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
