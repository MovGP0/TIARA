# pbFrColor

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | WMFPropsDlg |
| Component path | WMFPropsDlg.gbBorder.pbFrColor |
| Control class | TPaintBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | NoColor |
| Handler address | 010b67f0 |
| Graph node | `resource:dfm:WMFPropsDlg/WMFPropsDlg.gbBorder.pbFrColor` |
| Handler node | `function:010b67f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["pbFrColor"] -->|OnClick| handler["FUN_010b67f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000010B67F0__FUN_010b67f0.c](../../../DecompiledSources/Tina16/functions/00000000010B67F0__FUN_010b67f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: WMFPropsDlg.gbBorder.pbFrColor.OnClick, WMFPropsDlg.gbBackground.pbBdColor.OnClick.
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

- Rank 1: &Color: at distance 157.
- Rank 2: &Thickness: at distance 181.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
