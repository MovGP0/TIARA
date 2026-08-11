# Search

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ConvertersDlg |
| Component path | ConvertersDlg.SearchBtn |
| Control class | TBitBtn |
| Caption | Search |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SearchBtnClick |
| Handler address | 01c4b320 |
| Graph node | `resource:dfm:ConvertersDlg/ConvertersDlg.SearchBtn` |
| Handler node | `function:01c4b320` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Search"] -->|OnClick| handler["FUN_01c4b320"]
    handler --> call1["FUN_01c4b500"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C4B320__FUN_01c4b320.c](../../../DecompiledSources/Tina16/functions/0000000001C4B320__FUN_01c4b320.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ConvertersDlg.SearchBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c4b500` — FUN_01c4b500

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0039_ConvertersDlg_ConvertersDlg_SearchBtn_Glyph_Data.png`](../../../glyph/0039_ConvertersDlg_ConvertersDlg_SearchBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: A at distance 93.
- Rank 2: V at distance 119.
- Rank 3: V at distance 149.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
