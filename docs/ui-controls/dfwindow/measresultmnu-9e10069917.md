# Measurement result

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DFWindow |
| Component path | DFWindow.DFMainMenu.DFProcessingMnu.MeasResultMnu |
| Control class | TMenuItem |
| Caption | Measurement result |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MeasResultMnuClick |
| Handler address | 01a8ac10 |
| Graph node | `resource:dfm:DFWindow/DFWindow.DFMainMenu.DFProcessingMnu.MeasResultMnu` |
| Handler node | `function:01a8ac10` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Measurement result"] -->|OnClick| handler["FUN_01a8ac10"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_00414b50"]
    handler --> call4["FUN_00416cd0"]
    handler --> call5["FUN_0041ddd0"]
    handler --> call6["FUN_0043f750"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A8AC10__FUN_01a8ac10.c](../../../DecompiledSources/Tina16/functions/0000000001A8AC10__FUN_01a8ac10.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DFWindow.DFMainMenu.DFProcessingMnu.MeasResultMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 11

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00414b50` — FUN_00414b50
- `function:00416cd0` — FUN_00416cd0
- `function:0041ddd0` — FUN_0041ddd0
- `function:0043f750` — FUN_0043f750
- `function:00440a20` — FUN_00440a20
- `function:005b84f0` — FUN_005b84f0
- `function:0072d440` — FUN_0072d440
- `function:01156520` — FUN_01156520
- `function:019ac280` — FUN_019ac280

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
