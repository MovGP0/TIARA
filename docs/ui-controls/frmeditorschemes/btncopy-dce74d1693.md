# &Copy...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmEditorSchemes |
| Component path | frmEditorSchemes.pnlSchemes.btnCopy |
| Control class | TButton |
| Caption | &Copy... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnCopyClick |
| Handler address | 01b74c50 |
| Graph node | `resource:dfm:frmEditorSchemes/frmEditorSchemes.pnlSchemes.btnCopy` |
| Handler node | `function:01b74c50` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Copy..."] -->|OnClick| handler["FUN_01b74c50"]
    handler --> call1["FUN_004095c0"]
    handler --> call2["FUN_0040d200"]
    handler --> call3["Delphi UnicodeString clear and finalization helper"]
    handler --> call4["Delphi UnicodeString array finalization helper"]
    handler --> call5["FUN_00416910"]
    handler --> call6["FUN_00416ba0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B74C50__FUN_01b74c50.c](../../../DecompiledSources/Tina16/functions/0000000001B74C50__FUN_01b74c50.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmEditorSchemes.pnlSchemes.btnCopy.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 11

## Direct calls

- `function:004095c0` — FUN_004095c0
- `function:0040d200` — FUN_0040d200
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416910` — FUN_00416910
- `function:00416ba0` — FUN_00416ba0
- `function:0043dc90` — FUN_0043dc90
- `function:0043dec0` — FUN_0043dec0
- `function:0074b490` — FUN_0074b490
- `function:01b74210` — Handles 1 Delphi UI event: frmEditorSchemes.pnlSchemes.lbSchemes.OnClick.
- `function:01b74860` — FUN_01b74860

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1:  Sc&hemes at distance 366.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
