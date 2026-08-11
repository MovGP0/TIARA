# Export curves

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ScopeWin |
| Component path | ScopeWin.DataBox.FDataSaveBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Export curves |
| Text | Not present in the recovered resource. |
| Handler name | DataSaveBtnClick |
| Handler address | 012b1ca0 |
| Graph node | `resource:dfm:ScopeWin/ScopeWin.DataBox.FDataSaveBtn` |
| Handler node | `function:012b1ca0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Export curves"] -->|OnClick| handler["FUN_012b1ca0"]
    handler --> call1["FUN_010f7ea0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012B1CA0__FUN_012b1ca0.c](../../../DecompiledSources/Tina16/functions/00000000012B1CA0__FUN_012b1ca0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ScopeWin.DataBox.FDataSaveBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:010f7ea0` — FUN_010f7ea0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0397_ScopeWin_ScopeWin_DataBox_FDataSaveBtn_Glyph_Data.png`](../../../glyph/0397_ScopeWin_ScopeWin_DataBox_FDataSaveBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
