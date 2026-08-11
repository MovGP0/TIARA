# Set all

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmModelTestBenchEditor |
| Component path | frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_localSettings.pctrl_localSettingst.ts_time.btn_timeSetAll |
| Control class | TButton |
| Caption | Set all |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btn_timeSetAllClick |
| Handler address | 012f87b0 |
| Graph node | `resource:dfm:frmModelTestBenchEditor/frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_localSettings.pctrl_localSettingst.ts_time.btn_timeSetAll` |
| Handler node | `function:012f87b0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Set all"] -->|OnClick| handler["FUN_012f87b0"]
    handler --> call1["FUN_006e2530"]
    handler --> call2["FUN_013056e0"]
    handler --> call3["FUN_01306bf0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012F87B0__FUN_012f87b0.c](../../../DecompiledSources/Tina16/functions/00000000012F87B0__FUN_012f87b0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_localSettings.pctrl_localSettingst.ts_time.btn_timeSetAll.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:006e2530` — FUN_006e2530
- `function:013056e0` — FUN_013056e0
- `function:01306bf0` — FUN_01306bf0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: [s] at distance 28.
- Rank 2: Select time: at distance 258.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
