# Add Voltage/Current

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | VerilogADebugger |
| Component path | VerilogADebugger.pnClient.pnMessages.pnDebug.pcDebug.tsDebug.pcDebugPages.tsVoltageCurrents.Panel1.Panel2.Panel4.sbAddNature |
| Control class | TSpeedButton |
| Caption | Add Voltage/Current |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | sbAddVoltageClick |
| Handler address | 010a5240 |
| Graph node | `resource:dfm:VerilogADebugger/VerilogADebugger.pnClient.pnMessages.pnDebug.pcDebug.tsDebug.pcDebugPages.tsVoltageCurrents.Panel1.Panel2.Panel4.sbAddNature` |
| Handler node | `function:010a5240` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Add Voltage/Current"] -->|OnClick| handler["FUN_010a5240"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_006d8150"]
    handler --> call4["FUN_007fc180"]
    handler --> call5["FUN_010a0460"]
    handler --> call6["FUN_010a04c0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000010A5240__FUN_010a5240.c](../../../DecompiledSources/Tina16/functions/00000000010A5240__FUN_010a5240.c)
- Recovered role: Add Voltage/Current dialog construction and handling
- Current graph summary: Creates and runs the Add Voltage/Current dialog, adds its prompt and hint label, and processes an accepted value. Handles 1 Delphi UI event: VerilogADebugger.pnClient.pnMessages.pnDebug.pcDebug.tsDebug.pcDebugPages.tsVoltageCurrents.Panel1.Panel2.Panel4.sbAddNature.OnClick.
- Current graph behavior: Creates and runs the Add Voltage/Current dialog, adds its prompt and hint label, and processes an accepted value.
- Current graph evidence: The function passes Add Voltage/Current, Voltage/Current:, and Hint: V(p,n) literals to dialog construction helpers.
- Complexity: complex
- Distinct outgoing calls: 11

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:006d8150` — FUN_006d8150
- `function:007fc180` — FUN_007fc180
- `function:010a0460` — FUN_010a0460
- `function:010a04c0` — FUN_010a04c0
- `function:010a0560` — FUN_010a0560
- `function:010a06c0` — FUN_010a06c0
- `function:010a3d40` — FUN_010a3d40
- `function:010a4ab0` — FUN_010a4ab0
- `function:010a5040` — FUN_010a5040

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0494_VerilogADebugger_VerilogADebugger_pnClient_pnMessages_pnDebug_pcDebug_tsDebug_pcDebugPages_tsVoltageCurrents_Pane_Glyph_Data.png`](../../../glyph/0494_VerilogADebugger_VerilogADebugger_pnClient_pnMessages_pnDebug_pcDebug_tsDebug_pcDebugPages_tsVoltageCurrents_Pane_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
