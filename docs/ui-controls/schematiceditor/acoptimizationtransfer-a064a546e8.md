# AC Optimization (&Transfer)...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.Optimization.ACOptimizationTransfer |
| Control class | TMenuItem |
| Caption | AC Optimization (&Transfer)... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ACOptimizationTransferClick |
| Handler address | 01c97190 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.Optimization.ACOptimizationTransfer` |
| Handler node | `function:01c97190` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["AC Optimization (&Transfer)..."] -->|OnClick| handler["FUN_01c97190"]
    handler --> call1["Delphi UnicodeString assignment helper"]
    handler --> call2["FUN_013748b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C97190__FUN_01c97190.c](../../../DecompiledSources/Tina16/functions/0000000001C97190__FUN_01c97190.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.Optimization.ACOptimizationTransfer.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:013748b0` — FUN_013748b0

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
