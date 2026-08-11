# &View

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.DFMainMenu.DFViewMnu |
| Control class | TMenuItem |
| Caption | &View |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | DFViewMnuClick |
| Handler address | 01a8b060 |
| Graph node | `resource:dfm:DFWindow/DFWindow.DFMainMenu.DFViewMnu` |
| Handler node | `function:01a8b060` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&View"] -->|OnClick| handler["FUN_01a8b060"]
    handler --> call1["FUN_01a7fc90"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A8B060__FUN_01a8b060.c](../../../DecompiledSources/Tina16/functions/0000000001A8B060__FUN_01a8b060.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFWindow.DFMainMenu.DFViewMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01a7fc90` — FUN_01a7fc90

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
