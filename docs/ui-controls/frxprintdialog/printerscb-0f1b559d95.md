# PrintersCB

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frxPrintDialog |
| Component path | frxPrintDialog.Label12.PrintersCB |
| Control class | TComboBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | PrintersCBClick |
| Handler address | 018b4280 |
| Graph node | `resource:dfm:frxPrintDialog/frxPrintDialog.Label12.PrintersCB` |
| Handler node | `function:018b4280` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["PrintersCB"] -->|OnClick| handler["FUN_018b4280"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["VCL control Unicode text reader"]
    handler --> call3["VCL control text setter with change suppression"]
    handler --> call4["FUN_01809b60"]
    handler --> call5["FUN_0180bfb0"]
    handler --> call6["FUN_0188b8b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000018B4280__FUN_018b4280.c](../../../DecompiledSources/Tina16/functions/00000000018B4280__FUN_018b4280.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frxPrintDialog.Label12.PrintersCB.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 10

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0064dd90` — VCL control Unicode text reader
- `function:0064de00` — VCL control text setter with change suppression
- `function:01809b60` — FUN_01809b60
- `function:0180bfb0` — FUN_0180bfb0
- `function:0188b8b0` — FUN_0188b8b0
- `function:0188b960` — FUN_0188b960
- `function:0188d0f0` — FUN_0188d0f0
- `function:0188d190` — FUN_0188d190
- `function:0188d920` — FUN_0188d920

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: WhereL1 at distance 32.
- Rank 2: Name: at distance 56.
- Rank 3: Where: at distance 84.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
