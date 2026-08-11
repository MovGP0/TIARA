# Run

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | HDLDebugger |
| Component path | HDLDebugger.pnToolbar.sbRun |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Run |
| Text | Not present in the recovered resource. |
| Handler name | sbRunClick |
| Handler address | 0109f310 |
| Graph node | `resource:dfm:HDLDebugger/HDLDebugger.pnToolbar.sbRun` |
| Handler node | `function:0109f310` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Run"] -->|OnClick| handler["FUN_0109f310"]
    handler --> call1["FUN_0109d420"]
    handler --> call2["FUN_0109f2c0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000109F310__FUN_0109f310.c](../../../DecompiledSources/Tina16/functions/000000000109F310__FUN_0109f310.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: HDLDebugger.pnToolbar.sbRun.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0109d420` — FUN_0109d420
- `function:0109f2c0` — FUN_0109f2c0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0218_HDLDebugger_HDLDebugger_pnToolbar_sbRun_Glyph_Data.png`](../../../glyph/0218_HDLDebugger_HDLDebugger_pnToolbar_sbRun_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: time:  at distance 268.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
