# Down

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PinOrderDlg |
| Component path | PinOrderDlg.Down |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | DownClick |
| Handler address | 01781890 |
| Graph node | `resource:dfm:PinOrderDlg/PinOrderDlg.Down` |
| Handler node | `function:01781890` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Down"] -->|OnClick| handler["FUN_01781890"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001781890__FUN_01781890.c](../../../DecompiledSources/Tina16/functions/0000000001781890__FUN_01781890.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PinOrderDlg.Down.OnClick.
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
- Extracted glyph: [`0306_PinOrderDlg_PinOrderDlg_Down_Glyph_Data.png`](../../../glyph/0306_PinOrderDlg_PinOrderDlg_Down_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Select and move with the arrows the pin to its desired place. You may see pins named (pin X) because they don't have a name. Double-click on those pins in the editor and name them. at distance 369.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
