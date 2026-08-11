# Add &group

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmEditCompRack |
| Component path | frmEditCompRack.pnlToolBar.btnAddGroup |
| Control class | TButton |
| Caption | Add &group |
| Hint | Add group |
| Text | Not present in the recovered resource. |
| Handler name | btnAddGroupClick |
| Handler address | 01b98650 |
| Graph node | `resource:dfm:frmEditCompRack/frmEditCompRack.pnlToolBar.btnAddGroup` |
| Handler node | `function:01b98650` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Add &group"] -->|OnClick| handler["FUN_01b98650"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_0064dbe0"]
    handler --> call3["FUN_006d5120"]
    handler --> call4["FUN_006d6380"]
    handler --> call5["FUN_006dcbd0"]
    handler --> call6["FUN_006dcca0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B98650__FUN_01b98650.c](../../../DecompiledSources/Tina16/functions/0000000001B98650__FUN_01b98650.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmEditCompRack.pnlToolBar.btnAddGroup.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 14

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0064dbe0` — FUN_0064dbe0
- `function:006d5120` — FUN_006d5120
- `function:006d6380` — FUN_006d6380
- `function:006dcbd0` — FUN_006dcbd0
- `function:006dcca0` — FUN_006dcca0
- `function:006dd6f0` — FUN_006dd6f0
- `function:006def30` — FUN_006def30
- `function:006df4b0` — FUN_006df4b0
- `function:006e2530` — FUN_006e2530
- `function:01b95080` — FUN_01b95080
- `function:01b950d0` — FUN_01b950d0
- `function:01b96a50` — FUN_01b96a50
- `function:01b97960` — FUN_01b97960

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
