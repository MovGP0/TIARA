# &Locate

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmComponentReport |
| Component path | frmComponentReport.pnlButtons.btnLocate |
| Control class | TBitBtn |
| Caption | &Locate |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnLocateClick |
| Handler address | 01bb6680 |
| Graph node | `resource:dfm:frmComponentReport/frmComponentReport.pnlButtons.btnLocate` |
| Handler node | `function:01bb6680` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Locate"] -->|OnClick| handler["FUN_01bb6680"]
    handler --> call1["FUN_006d5120"]
    handler --> call2["FUN_00b94e60"]
    handler --> call3["FUN_017ff620"]
    handler --> call4["FUN_0198d430"]
    handler --> call5["FUN_01993f30"]
    handler --> call6["FUN_01994230"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001BB6680__FUN_01bb6680.c](../../../DecompiledSources/Tina16/functions/0000000001BB6680__FUN_01bb6680.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmComponentReport.pnlButtons.btnLocate.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 9

## Direct calls

- `function:006d5120` — FUN_006d5120
- `function:00b94e60` — FUN_00b94e60
- `function:017ff620` — FUN_017ff620
- `function:0198d430` — FUN_0198d430
- `function:01993f30` — FUN_01993f30
- `function:01994230` — FUN_01994230
- `function:01bb6550` — FUN_01bb6550
- `function:01c8a290` — FUN_01c8a290
- `function:01c8ab30` — FUN_01c8ab30

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
