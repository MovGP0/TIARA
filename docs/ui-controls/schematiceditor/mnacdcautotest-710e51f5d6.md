# Autotest

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.mnDetailedDC.mnACDCAutotest |
| Control class | TMenuItem |
| Caption | Autotest |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnACDCAutotestClick |
| Handler address | 01ca51d0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.mnDetailedDC.mnACDCAutotest` |
| Handler node | `function:01ca51d0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Autotest"] -->|OnClick| handler["FUN_01ca51d0"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_01a33340"]
    handler --> call3["FUN_01a33cd0"]
    handler --> call4["FUN_01a36470"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001CA51D0__FUN_01ca51d0.c](../../../DecompiledSources/Tina16/functions/0000000001CA51D0__FUN_01ca51d0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.mnDetailedDC.mnACDCAutotest.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:01a33340` — FUN_01a33340
- `function:01a33cd0` — FUN_01a33cd0
- `function:01a36470` — FUN_01a36470

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
