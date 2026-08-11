# Draw

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | StatisticDlg |
| Component path | StatisticDlg.DrawBtn |
| Control class | TBitBtn |
| Caption | Draw |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | DrawBtnClick |
| Handler address | 01ac8190 |
| Graph node | `resource:dfm:StatisticDlg/StatisticDlg.DrawBtn` |
| Handler node | `function:01ac8190` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Draw"] -->|OnClick| handler["FUN_01ac8190"]
    handler --> call1["FUN_00c5a450"]
    handler --> call2["FUN_013e0ed0"]
    handler --> call3["FUN_01ac7fd0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001AC8190__FUN_01ac8190.c](../../../DecompiledSources/Tina16/functions/0000000001AC8190__FUN_01ac8190.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: StatisticDlg.DrawBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00c5a450` — FUN_00c5a450
- `function:013e0ed0` — FUN_013e0ed0
- `function:01ac7fd0` — FUN_01ac7fd0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: tmpLabel at distance 7.
- Rank 2: &Number of bars at distance 238.
- Rank 3: &Output at distance 290.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
