# OKBtn

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetworkAnalysisDlg |
| Component path | NetworkAnalysisDlg.OKBtn |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | OKBtnClick |
| Handler address | 015353b0 |
| Graph node | `resource:dfm:NetworkAnalysisDlg/NetworkAnalysisDlg.OKBtn` |
| Handler node | `function:015353b0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["OKBtn"] -->|OnClick| handler["FUN_015353b0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_00417580"]
    handler --> call3["FUN_00417740"]
    handler --> call4["FUN_00417c40"]
    handler --> call5["FUN_00b89270"]
    handler --> call6["FUN_00b8e520"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000015353B0__FUN_015353b0.c](../../../DecompiledSources/Tina16/functions/00000000015353B0__FUN_015353b0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: NetworkAnalysisDlg.OKBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 9

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00417580` — FUN_00417580
- `function:00417740` — FUN_00417740
- `function:00417c40` — FUN_00417c40
- `function:00b89270` — FUN_00b89270
- `function:00b8e520` — FUN_00b8e520
- `function:00b90090` — FUN_00b90090
- `function:00f04d50` — FUN_00f04d50
- `function:01535350` — FUN_01535350

## Resource evidence

- Kind: bkOK
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: [Hz] at distance 42.
- Rank 2: [Hz] at distance 69.
- Rank 3: &Start frequency at distance 277.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
