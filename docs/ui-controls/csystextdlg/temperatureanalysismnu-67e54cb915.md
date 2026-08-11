# Temperature Analysis

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CSysTextDlg |
| Component path | CSysTextDlg.DeepLinkPopUpMnu.DCAnalysisMnu.TemperatureAnalysisMnu |
| Control class | TMenuItem |
| Caption | Temperature Analysis |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | TemperatureAnalysisMnuClick |
| Handler address | 014698f0 |
| Graph node | `resource:dfm:CSysTextDlg/CSysTextDlg.DeepLinkPopUpMnu.DCAnalysisMnu.TemperatureAnalysisMnu` |
| Handler node | `function:014698f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Temperature Analysis"] -->|OnClick| handler["FUN_014698f0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_00414b50"]
    handler --> call4["FUN_00416cd0"]
    handler --> call5["FUN_005b84f0"]
    handler --> call6["FUN_014695a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014698F0__FUN_014698f0.c](../../../DecompiledSources/Tina16/functions/00000000014698F0__FUN_014698f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CSysTextDlg.DeepLinkPopUpMnu.DCAnalysisMnu.TemperatureAnalysisMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00414b50` — FUN_00414b50
- `function:00416cd0` — FUN_00416cd0
- `function:005b84f0` — FUN_005b84f0
- `function:014695a0` — FUN_014695a0

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
