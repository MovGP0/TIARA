# Harmonic Balance Analysis...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.mnHBAnalysis |
| Control class | TMenuItem |
| Caption | Harmonic Balance Analysis... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnHarmonicBalanceDiscreteClick |
| Handler address | 01ca4df0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.mnHBAnalysis` |
| Handler node | `function:01ca4df0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Harmonic Balance Analysis..."] -->|OnClick| handler["FUN_01ca4df0"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_007fc180"]
    handler --> call3["FUN_019a4600"]
    handler --> call4["FUN_01b4c3a0"]
    handler --> call5["FUN_01b4e970"]
    handler --> call6["FUN_01b53190"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001CA4DF0__FUN_01ca4df0.c](../../../DecompiledSources/Tina16/functions/0000000001CA4DF0__FUN_01ca4df0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.mnHBAnalysis.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:007fc180` — FUN_007fc180
- `function:019a4600` — FUN_019a4600
- `function:01b4c3a0` — FUN_01b4c3a0
- `function:01b4e970` — FUN_01b4e970
- `function:01b53190` — FUN_01b53190
- `function:01b53570` — FUN_01b53570

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
