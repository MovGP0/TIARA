# Start

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | QM_form |
| Component path | QM_form.GroupBox1.BtnOk |
| Control class | TBitBtn |
| Caption | Start |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | BtnOkClick |
| Handler address | 011a4d50 |
| Graph node | `resource:dfm:QM_form/QM_form.GroupBox1.BtnOk` |
| Handler node | `function:011a4d50` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Start"] -->|OnClick| handler["FUN_011a4d50"]
    handler --> call1["FUN_0064dbe0"]
    handler --> call2["VCL control text setter with change suppression"]
    handler --> call3["FUN_00805990"]
    handler --> call4["FUN_011a23d0"]
    handler --> call5["FUN_011a32b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011A4D50__FUN_011a4d50.c](../../../DecompiledSources/Tina16/functions/00000000011A4D50__FUN_011a4d50.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: QM_form.GroupBox1.BtnOk.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:0064dbe0` — FUN_0064dbe0
- `function:0064de00` — VCL control text setter with change suppression
- `function:00805990` — FUN_00805990
- `function:011a23d0` — FUN_011a23d0
- `function:011a32b0` — FUN_011a32b0

## Resource evidence

- Kind: bkOK
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Minterms/Maxterm index at distance 312.
- Rank 2: Number of variables: at distance 352.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
