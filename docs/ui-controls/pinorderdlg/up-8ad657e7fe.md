# Up

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PinOrderDlg |
| Component path | PinOrderDlg.Up |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | UpClick |
| Handler address | 01781830 |
| Graph node | `resource:dfm:PinOrderDlg/PinOrderDlg.Up` |
| Handler node | `function:01781830` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Up"] -->|OnClick| handler["FUN_01781830"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001781830__FUN_01781830.c](../../../DecompiledSources/Tina16/functions/0000000001781830__FUN_01781830.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PinOrderDlg.Up.OnClick.
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
- Extracted glyph: [`0305_PinOrderDlg_PinOrderDlg_Up_Glyph_Data.png`](../../../glyph/0305_PinOrderDlg_PinOrderDlg_Up_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Select and move with the arrows the pin to its desired place. You may see pins named (pin X) because they don't have a name. Double-click on those pins in the editor and name them. at distance 397.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
