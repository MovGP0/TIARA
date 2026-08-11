# End Simulation

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | HDLDebugger |
| Component path | HDLDebugger.pnToolbar.sbEndSimulation |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | End Simulation |
| Text | Not present in the recovered resource. |
| Handler name | sbEndSimulationClick |
| Handler address | 0109f330 |
| Graph node | `resource:dfm:HDLDebugger/HDLDebugger.pnToolbar.sbEndSimulation` |
| Handler node | `function:0109f330` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["End Simulation"] -->|OnClick| handler["FUN_0109f330"]
    handler --> call1["FUN_00f7d140"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000109F330__FUN_0109f330.c](../../../DecompiledSources/Tina16/functions/000000000109F330__FUN_0109f330.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: HDLDebugger.pnToolbar.sbEndSimulation.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00f7d140` — FUN_00f7d140

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0223_HDLDebugger_HDLDebugger_pnToolbar_sbEndSimulation_Glyph_Data.png`](../../../glyph/0223_HDLDebugger_HDLDebugger_pnToolbar_sbEndSimulation_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: time:  at distance 193.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
