# Go forward

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | BrowserFrm |
| Component path | BrowserFrm.TopPL.ForwardBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Go forward |
| Text | Not present in the recovered resource. |
| Handler name | ForwardBtnClick |
| Handler address | 01c201e0 |
| Graph node | `resource:dfm:BrowserFrm/BrowserFrm.TopPL.ForwardBtn` |
| Handler node | `function:01c201e0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Go forward"] -->|OnClick| handler["FUN_01c201e0"]
    handler --> call1["FUN_01bccd40"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C201E0__FUN_01c201e0.c](../../../DecompiledSources/Tina16/functions/0000000001C201E0__FUN_01c201e0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: BrowserFrm.TopPL.ForwardBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01bccd40` — FUN_01bccd40

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0033_BrowserFrm_BrowserFrm_TopPL_ForwardBtn_Glyph_Data.png`](../../../glyph/0033_BrowserFrm_BrowserFrm_TopPL_ForwardBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Address: at distance 1244.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
