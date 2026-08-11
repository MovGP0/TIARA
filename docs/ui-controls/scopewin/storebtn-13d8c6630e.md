# Store

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ScopeWin |
| Component path | ScopeWin.StorageGroupBox.StoreBtn |
| Control class | TSpeedButton |
| Caption | Store |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | StoreBtnClick |
| Handler address | 012b01d0 |
| Graph node | `resource:dfm:ScopeWin/ScopeWin.StorageGroupBox.StoreBtn` |
| Handler node | `function:012b01d0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Store"] -->|OnClick| handler["FUN_012b01d0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012B01D0__FUN_012b01d0.c](../../../DecompiledSources/Tina16/functions/00000000012B01D0__FUN_012b01d0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ScopeWin.StorageGroupBox.StoreBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

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
