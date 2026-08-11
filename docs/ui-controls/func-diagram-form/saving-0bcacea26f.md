# Save to FILE

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Func_diagram_form |
| Component path | Func_diagram_form.GroupBox2.Saving |
| Control class | TButton |
| Caption | Save to FILE |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SavingClick |
| Handler address | 012207d0 |
| Graph node | `resource:dfm:Func_diagram_form/Func_diagram_form.GroupBox2.Saving` |
| Handler node | `function:012207d0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Save to FILE"] -->|OnClick| handler["FUN_012207d0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString assignment helper"]
    handler --> call3["FUN_00724270"]
    handler --> call4["FUN_00724380"]
    handler --> call5["FUN_00724420"]
    handler --> call6["FUN_00805990"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000012207D0__FUN_012207d0.c](../../../DecompiledSources/Tina16/functions/00000000012207D0__FUN_012207d0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: Func_diagram_form.GroupBox2.Saving.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:00724270` — FUN_00724270
- `function:00724380` — FUN_00724380
- `function:00724420` — FUN_00724420
- `function:00805990` — FUN_00805990
- `function:011d4970` — FUN_011d4970

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
