# &Add

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CspEditorDlg |
| Component path | CspEditorDlg.pctrlMode.tshPoly.btnAddPoly |
| Control class | TButton |
| Caption | &Add |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnAddPolyClick |
| Handler address | 01401c80 |
| Graph node | `resource:dfm:CspEditorDlg/CspEditorDlg.pctrlMode.tshPoly.btnAddPoly` |
| Handler node | `function:01401c80` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Add"] -->|OnClick| handler["FUN_01401c80"]
    handler --> call1["FUN_00409620"]
    handler --> call2["Delphi UnicodeString clear and finalization helper"]
    handler --> call3["FUN_00848a70"]
    handler --> call4["FUN_00b0ab70"]
    handler --> call5["FUN_00f04d50"]
    handler --> call6["FUN_014002c0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001401C80__FUN_01401c80.c](../../../DecompiledSources/Tina16/functions/0000000001401C80__FUN_01401c80.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CspEditorDlg.pctrlMode.tshPoly.btnAddPoly.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:00409620` — FUN_00409620
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00848a70` — FUN_00848a70
- `function:00b0ab70` — FUN_00b0ab70
- `function:00f04d50` — FUN_00f04d50
- `function:014002c0` — FUN_014002c0
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

- Rank 1: Coefficients at distance 187.
- Rank 2: Controlling components at distance 337.
- Rank 3: Dimension at distance 338.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
