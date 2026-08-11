# Stop

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | QM_form |
| Component path | QM_form.Stopg |
| Control class | TButton |
| Caption | Stop |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | stopgClick |
| Handler address | 011a2340 |
| Graph node | `resource:dfm:QM_form/QM_form.Stopg` |
| Handler node | `function:011a2340` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Stop"] -->|OnClick| handler["FUN_011a2340"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["VCL control text setter with change suppression"]
    handler --> call3["FUN_00b89270"]
    handler --> call4["FUN_00b8e520"]
    handler --> call5["FUN_0119a380"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011A2340__FUN_011a2340.c](../../../DecompiledSources/Tina16/functions/00000000011A2340__FUN_011a2340.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: QM_form.Stopg.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0064de00` — VCL control text setter with change suppression
- `function:00b89270` — FUN_00b89270
- `function:00b8e520` — FUN_00b8e520
- `function:0119a380` — FUN_0119a380

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
