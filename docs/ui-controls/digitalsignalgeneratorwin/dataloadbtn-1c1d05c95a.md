# DataLoadBtn

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DigitalSignalGeneratorWin |
| Component path | DigitalSignalGeneratorWin.DataGroupBox.DataLoadBtn |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | DataLoadBtnClick |
| Handler address | 01511fa0 |
| Graph node | `resource:dfm:DigitalSignalGeneratorWin/DigitalSignalGeneratorWin.DataGroupBox.DataLoadBtn` |
| Handler node | `function:01511fa0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["DataLoadBtn"] -->|OnClick| handler["FUN_01511fa0"]
    handler --> call1["FUN_007fc180"]
    handler --> call2["FUN_010f6920"]
    handler --> call3["FUN_01506c70"]
    handler --> call4["FUN_01513140"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001511FA0__FUN_01511fa0.c](../../../DecompiledSources/Tina16/functions/0000000001511FA0__FUN_01511fa0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DigitalSignalGeneratorWin.DataGroupBox.DataLoadBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:007fc180` — FUN_007fc180
- `function:010f6920` — FUN_010f6920
- `function:01506c70` — FUN_01506c70
- `function:01513140` — FUN_01513140

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0119_DigitalSignalGeneratorWin_DigitalSignalGeneratorWin_DataGroupBox_DataLoadBtn_Glyph_Data.png`](../../../glyph/0119_DigitalSignalGeneratorWin_DigitalSignalGeneratorWin_DataGroupBox_DataLoadBtn_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Group: at distance 146.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
