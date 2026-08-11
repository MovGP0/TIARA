# Y/T

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | XYRecorderWin |
| Component path | XYRecorderWin.XChannelGroupBox.YTSpeedBtn |
| Control class | TSpeedButton |
| Caption | Y/T |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | YTSpeedBtnClick |
| Handler address | 01b5a710 |
| Graph node | `resource:dfm:XYRecorderWin/XYRecorderWin.XChannelGroupBox.YTSpeedBtn` |
| Handler node | `function:01b5a710` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Y/T"] -->|OnClick| handler["FUN_01b5a710"]
    handler --> call1["VCL control text setter with change suppression"]
    handler --> call2["FUN_0082a6c0"]
    handler --> call3["FUN_00b90440"]
    handler --> call4["FUN_010c0d70"]
    handler --> call5["FUN_010e7b90"]
    handler --> call6["FUN_010f6af0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B5A710__FUN_01b5a710.c](../../../DecompiledSources/Tina16/functions/0000000001B5A710__FUN_01b5a710.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: XYRecorderWin.XChannelGroupBox.YTSpeedBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:0064de00` — VCL control text setter with change suppression
- `function:0082a6c0` — FUN_0082a6c0
- `function:00b90440` — FUN_00b90440
- `function:010c0d70` — FUN_010c0d70
- `function:010e7b90` — FUN_010e7b90
- `function:010f6af0` — FUN_010f6af0
- `function:01b581d0` — FUN_01b581d0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Mode at distance 24.
- Rank 2: Position at distance 130.
- Rank 3: Volts/Div at distance 168.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
