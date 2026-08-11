# Preview

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PercentageDlg |
| Component path | PercentageDlg.BtnNotebook.tsCancelPreview.PreviewBtn |
| Control class | TBitBtn |
| Caption | Preview |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | PreviewBtnClick |
| Handler address | 01af1240 |
| Graph node | `resource:dfm:PercentageDlg/PercentageDlg.BtnNotebook.tsCancelPreview.PreviewBtn` |
| Handler node | `function:01af1240` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Preview"] -->|OnClick| handler["FUN_01af1240"]
    handler --> call1["FUN_0064e140"]
    handler --> call2["FUN_0065b870"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001AF1240__FUN_01af1240.c](../../../DecompiledSources/Tina16/functions/0000000001AF1240__FUN_01af1240.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PercentageDlg.BtnNotebook.tsCancelPreview.PreviewBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0064e140` — FUN_0064e140
- `function:0065b870` — FUN_0065b870

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
