# &Remove

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CspEditorDlg |
| Component path | CspEditorDlg.pctrlMode.tshPoly.btnRemovePoly |
| Control class | TButton |
| Caption | &Remove |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnRemovePolyClick |
| Handler address | 01401de0 |
| Graph node | `resource:dfm:CspEditorDlg/CspEditorDlg.pctrlMode.tshPoly.btnRemovePoly` |
| Handler node | `function:01401de0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Remove"] -->|OnClick| handler["FUN_01401de0"]
    handler --> call1["FUN_0040d200"]
    handler --> call2["Delphi UnicodeString clear and finalization helper"]
    handler --> call3["FUN_00848a70"]
    handler --> call4["FUN_0084e3e0"]
    handler --> call5["FUN_00b0adf0"]
    handler --> call6["FUN_00f04d50"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001401DE0__FUN_01401de0.c](../../../DecompiledSources/Tina16/functions/0000000001401DE0__FUN_01401de0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CspEditorDlg.pctrlMode.tshPoly.btnRemovePoly.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:0040d200` — FUN_0040d200
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00848a70` — FUN_00848a70
- `function:0084e3e0` — FUN_0084e3e0
- `function:00b0adf0` — FUN_00b0adf0
- `function:00f04d50` — FUN_00f04d50
- `function:014002c0` — FUN_014002c0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Dimension at distance 241.
- Rank 2: Coefficients at distance 272.
- Rank 3: Controlling components at distance 434.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
