# lbModels

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | IbisImport |
| Component path | IbisImport.lbModels |
| Control class | TListBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | lbModelsClick |
| Handler address | 01bc1420 |
| Graph node | `resource:dfm:IbisImport/IbisImport.lbModels` |
| Handler node | `function:01bc1420` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["lbModels"] -->|OnClick| handler["FUN_01bc1420"]
    handler --> call1["FUN_01bc11a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001BC1420__FUN_01bc1420.c](../../../DecompiledSources/Tina16/functions/0000000001BC1420__FUN_01bc1420.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: IbisImport.lbModels.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01bc11a0` — FUN_01bc11a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Models (selected signal): at distance 19.
- Rank 2: Model type: at distance 134.
- Rank 3: Signals: at distance 194.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
