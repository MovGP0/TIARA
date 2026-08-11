# Temperature...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.Optimization.TemperatureOptimization |
| Control class | TMenuItem |
| Caption | Temperature... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | TemperatureOptimizationClick |
| Handler address | 01c99010 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.Optimization.TemperatureOptimization` |
| Handler node | `function:01c99010` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Temperature..."] -->|OnClick| handler["FUN_01c99010"]
    handler --> call1["Delphi UnicodeString assignment helper"]
    handler --> call2["FUN_01374440"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C99010__FUN_01c99010.c](../../../DecompiledSources/Tina16/functions/0000000001C99010__FUN_01c99010.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.Optimization.TemperatureOptimization.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:01374440` — FUN_01374440

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
