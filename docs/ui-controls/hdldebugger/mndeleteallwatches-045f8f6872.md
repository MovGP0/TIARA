# Delete &All Watches

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | HDLDebugger |
| Component path | HDLDebugger.pmPopupWatches.mnDeleteAllWatches |
| Control class | TMenuItem |
| Caption | Delete &All Watches |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnDeleteAllWatchesClick |
| Handler address | 0109f780 |
| Graph node | `resource:dfm:HDLDebugger/HDLDebugger.pmPopupWatches.mnDeleteAllWatches` |
| Handler node | `function:0109f780` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Delete &All Watches"] -->|OnClick| handler["FUN_0109f780"]
    handler --> call1["FUN_00f7d290"]
    handler --> call2["HDL debugger watch tree reload"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000109F780__FUN_0109f780.c](../../../DecompiledSources/Tina16/functions/000000000109F780__FUN_0109f780.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: HDLDebugger.pmPopupWatches.mnDeleteAllWatches.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00f7d290` — FUN_00f7d290
- `function:0109d7c0` — HDL debugger watch tree reload

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
