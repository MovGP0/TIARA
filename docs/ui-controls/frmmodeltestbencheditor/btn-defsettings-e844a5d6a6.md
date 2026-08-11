# Default settings

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmModelTestBenchEditor |
| Component path | frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_localSettings.pctrl_localSettingst.ts_manage.btn_defSettings |
| Control class | TButton |
| Caption | Default settings |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btn_defSettingsClick |
| Handler address | 012f8f00 |
| Graph node | `resource:dfm:frmModelTestBenchEditor/frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_localSettings.pctrl_localSettingst.ts_manage.btn_defSettings` |
| Handler node | `function:012f8f00` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Default settings"] -->|OnClick| handler["FUN_012f8f00"]
    handler --> call1["FUN_006e2530"]
    handler --> call2["FUN_01304bb0"]
    handler --> call3["FUN_013056e0"]
    handler --> call4["FUN_013063e0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012F8F00__FUN_012f8f00.c](../../../DecompiledSources/Tina16/functions/00000000012F8F00__FUN_012f8f00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmModelTestBenchEditor.pnlMain.pnlTestOptions.grB_localSettings.pctrl_localSettingst.ts_manage.btn_defSettings.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:006e2530` — FUN_006e2530
- `function:01304bb0` — FUN_01304bb0
- `function:013056e0` — FUN_013056e0
- `function:013063e0` — FUN_013063e0

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
