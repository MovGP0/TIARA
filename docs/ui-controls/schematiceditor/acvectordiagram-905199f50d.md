# &Phasor Diagram

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.ACAnalysis.ACVectorDiagram |
| Control class | TMenuItem |
| Caption | &Phasor Diagram |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ACVectorDiagramClick |
| Handler address | 01c97cf0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.ACAnalysis.ACVectorDiagram` |
| Handler node | `function:01c97cf0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Phasor Diagram"] -->|OnClick| handler["FUN_01c97cf0"]
    handler --> call1["Delphi UnicodeString assignment helper"]
    handler --> call2["FUN_013e0570"]
    handler --> call3["FUN_0152b4a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C97CF0__FUN_01c97cf0.c](../../../DecompiledSources/Tina16/functions/0000000001C97CF0__FUN_01c97cf0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.ACAnalysis.ACVectorDiagram.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:013e0570` — FUN_013e0570
- `function:0152b4a0` — FUN_0152b4a0

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
