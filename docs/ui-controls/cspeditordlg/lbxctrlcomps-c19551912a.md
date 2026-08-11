# lbxCtrlComps

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CspEditorDlg |
| Component path | CspEditorDlg.pctrlMode.tshPoly.lbxCtrlComps |
| Control class | TListBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | lbxCtrlCompsClick |
| Handler address | 01401b00 |
| Graph node | `resource:dfm:CspEditorDlg/CspEditorDlg.pctrlMode.tshPoly.lbxCtrlComps` |
| Handler node | `function:01401b00` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["lbxCtrlComps"] -->|OnClick| handler["FUN_01401b00"]
    handler --> call1["FUN_00409570"]
    handler --> call2["FUN_004095f0"]
    handler --> call3["Delphi UnicodeString clear and finalization helper"]
    handler --> call4["FUN_0068bca0"]
    handler --> call5["FUN_0084e3e0"]
    handler --> call6["FUN_00f04fa0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001401B00__FUN_01401b00.c](../../../DecompiledSources/Tina16/functions/0000000001401B00__FUN_01401b00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CspEditorDlg.pctrlMode.tshPoly.lbxCtrlComps.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 8

## Direct calls

- `function:00409570` — FUN_00409570
- `function:004095f0` — FUN_004095f0
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0068bca0` — FUN_0068bca0
- `function:0084e3e0` — FUN_0084e3e0
- `function:00f04fa0` — FUN_00f04fa0
- `function:014002c0` — FUN_014002c0
- `function:01401f60` — Handles 1 Delphi UI event: CspEditorDlg.pctrlMode.tshPoly.btnClearPoly.OnClick.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Controlling components at distance 24.
- Rank 2: Coefficients at distance 154.
- Rank 3: Dimension at distance 305.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
