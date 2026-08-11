# OK

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | OpenWindow |
| Component path | OpenWindow.RightPanel.ButtonPanel.OKBtn |
| Control class | TBitBtn |
| Caption | OK |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | OKBtnClick |
| Handler address | 014bf140 |
| Graph node | `resource:dfm:OpenWindow/OpenWindow.RightPanel.ButtonPanel.OKBtn` |
| Handler node | `function:014bf140` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["OK"] -->|OnClick| handler["FUN_014bf140"]
    handler --> call1["FUN_006e2530"]
    handler --> call2["FUN_006f6fe0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014BF140__FUN_014bf140.c](../../../DecompiledSources/Tina16/functions/00000000014BF140__FUN_014bf140.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: OpenWindow.RightPanel.ButtonPanel.OKBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:006e2530` — FUN_006e2530
- `function:006f6fe0` — FUN_006f6fe0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0293_OpenWindow_OpenWindow_RightPanel_ButtonPanel_OKBtn_Glyph_Data.png`](../../../glyph/0293_OpenWindow_OpenWindow_RightPanel_ButtonPanel_OKBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
