# bOK

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | LTSpiceImportDlg |
| Component path | LTSpiceImportDlg.bOK |
| Control class | TBitBtn |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bOKClick |
| Handler address | 01b90000 |
| Graph node | `resource:dfm:LTSpiceImportDlg/LTSpiceImportDlg.bOK` |
| Handler node | `function:01b90000` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["bOK"] -->|OnClick| handler["FUN_01b90000"]
    handler --> call1["FUN_004134c0"]
    handler --> call2["Delphi UnicodeString clear and finalization helper"]
    handler --> call3["Delphi UnicodeString array finalization helper"]
    handler --> call4["Delphi UnicodeString assignment helper"]
    handler --> call5["FUN_00440a20"]
    handler --> call6["FUN_004414c0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B90000__FUN_01b90000.c](../../../DecompiledSources/Tina16/functions/0000000001B90000__FUN_01b90000.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: LTSpiceImportDlg.bOK.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 16

## Direct calls

- `function:004134c0` — FUN_004134c0
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:00440a20` — FUN_00440a20
- `function:004414c0` — FUN_004414c0
- `function:00441710` — FUN_00441710
- `function:0044d490` — FUN_0044d490
- `function:0064dd90` — VCL control Unicode text reader
- `function:014a1260` — FUN_014a1260
- `function:019a4600` — FUN_019a4600
- `function:01b258f0` — FUN_01b258f0
- `function:01b81ef0` — FUN_01b81ef0
- `function:01b8c4a0` — FUN_01b8c4a0
- `function:01c75530` — Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnFile.mnNew.OnClick.
- `function:01ca2aa0` — FUN_01ca2aa0

## Resource evidence

- Kind: bkOK
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
