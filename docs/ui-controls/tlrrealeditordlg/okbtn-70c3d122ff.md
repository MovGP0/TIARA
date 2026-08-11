# OKBtn

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | TlrRealEditorDlg |
| Component path | TlrRealEditorDlg.OKBtn |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | OKBtnClick |
| Handler address | 013f66e0 |
| Graph node | `resource:dfm:TlrRealEditorDlg/TlrRealEditorDlg.OKBtn` |
| Handler node | `function:013f66e0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["OKBtn"] -->|OnClick| handler["FUN_013f66e0"]
    handler --> call1["FUN_00409570"]
    handler --> call2["FUN_004095f0"]
    handler --> call3["FUN_00b0a890"]
    handler --> call4["FUN_00b90090"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000013F66E0__FUN_013f66e0.c](../../../DecompiledSources/Tina16/functions/00000000013F66E0__FUN_013f66e0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: TlrRealEditorDlg.OKBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00409570` — FUN_00409570
- `function:004095f0` — FUN_004095f0
- `function:00b0a890` — FUN_00b0a890
- `function:00b90090` — FUN_00b90090

## Resource evidence

- Kind: bkOK
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: [%] at distance 27.
- Rank 2: &Tolerance at distance 153.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
