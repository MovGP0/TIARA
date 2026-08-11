# Font ...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFPAxisCnfDlg |
| Component path | DFPAxisCnfDlg.ADNumGB.ADNumBtn |
| Control class | TBitBtn |
| Caption | Font ... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ADNumBtnClick |
| Handler address | 01ac5b60 |
| Graph node | `resource:dfm:DFPAxisCnfDlg/DFPAxisCnfDlg.ADNumGB.ADNumBtn` |
| Handler node | `function:01ac5b60` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Font ..."] -->|OnClick| handler["FUN_01ac5b60"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["Delphi UnicodeString clear and finalization helper"]
    handler --> call3["VCL control text setter with change suppression"]
    handler --> call4["FUN_00725300"]
    handler --> call5["FUN_00f05050"]
    handler --> call6["FUN_01acff30"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001AC5B60__FUN_01ac5b60.c](../../../DecompiledSources/Tina16/functions/0000000001AC5B60__FUN_01ac5b60.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFPAxisCnfDlg.ADNumGB.ADNumBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0064de00` — VCL control text setter with change suppression
- `function:00725300` — FUN_00725300
- `function:00f05050` — FUN_00f05050
- `function:01acff30` — FUN_01acff30

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Divide by factor: at distance 26.
- Rank 2: Format: at distance 52.
- Rank 3: Name: Arial  Size: 12  Style: Nomal at distance 54.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
