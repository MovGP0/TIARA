# &Load

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CspEditorDlg |
| Component path | CspEditorDlg.pctrlMode.tshTable.btnLoad |
| Control class | TButton |
| Caption | &Load |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnLoadClick |
| Handler address | 01402730 |
| Graph node | `resource:dfm:CspEditorDlg/CspEditorDlg.pctrlMode.tshTable.btnLoad` |
| Handler node | `function:01402730` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Load"] -->|OnClick| handler["FUN_01402730"]
    handler --> call1["FUN_00409620"]
    handler --> call2["FUN_00409900"]
    handler --> call3["FUN_0040c9e0"]
    handler --> call4["FUN_0040cf10"]
    handler --> call5["FUN_0040d150"]
    handler --> call6["FUN_0040d1c0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001402730__FUN_01402730.c](../../../DecompiledSources/Tina16/functions/0000000001402730__FUN_01402730.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CspEditorDlg.pctrlMode.tshTable.btnLoad.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 23

## Direct calls

- `function:00409620` — FUN_00409620
- `function:00409900` — FUN_00409900
- `function:0040c9e0` — FUN_0040c9e0
- `function:0040cf10` — FUN_0040cf10
- `function:0040d150` — FUN_0040d150
- `function:0040d1c0` — FUN_0040d1c0
- `function:0040e200` — FUN_0040e200
- `function:0040e480` — FUN_0040e480
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00414de0` — FUN_00414de0
- `function:00416ba0` — FUN_00416ba0
- `function:00416dc0` — FUN_00416dc0
- `function:00416e20` — FUN_00416e20
- `function:004170c0` — FUN_004170c0
- `function:0043ea00` — FUN_0043ea00
- `function:0043f750` — FUN_0043f750
- `function:00724270` — FUN_00724270
- `function:00848a70` — FUN_00848a70
- `function:00b0ab70` — FUN_00b0ab70
- `function:00b8f030` — FUN_00b8f030
- `function:01402700` — Handles 1 Delphi UI event: CspEditorDlg.pctrlMode.tshTable.btnClearTable.OnClick.
- `function:014313c0` — FUN_014313c0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Inputs at distance 299.
- Rank 2: Expression at distance 461.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
