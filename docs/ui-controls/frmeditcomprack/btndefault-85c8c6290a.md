# D&efault

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmEditCompRack |
| Component path | frmEditCompRack.pnlToolBar.btnDefault |
| Control class | TButton |
| Caption | D&efault |
| Hint | Factory defaults\|Restore the original configuration of the Component Bar |
| Text | Not present in the recovered resource. |
| Handler name | btnDefaultClick |
| Handler address | 01b99360 |
| Graph node | `resource:dfm:frmEditCompRack/frmEditCompRack.pnlToolBar.btnDefault` |
| Handler node | `function:01b99360` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["D&efault"] -->|OnClick| handler["FUN_01b99360"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_00416cd0"]
    handler --> call3["FUN_006e2530"]
    handler --> call4["FUN_01b96a50"]
    handler --> call5["FUN_01b979d0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B99360__FUN_01b99360.c](../../../DecompiledSources/Tina16/functions/0000000001B99360__FUN_01b99360.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmEditCompRack.pnlToolBar.btnDefault.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00416cd0` — FUN_00416cd0
- `function:006e2530` — FUN_006e2530
- `function:01b96a50` — FUN_01b96a50
- `function:01b979d0` — Handles 1 Delphi UI event: frmEditCompRack.pnlToolBar.btnReset.OnClick.

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
