# Semi-symbolic Transient

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SymbolicTransient1 |
| Control class | TMenuItem |
| Caption | Semi-symbolic Transient |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SymbolicTransient1Click |
| Handler address | 01c76110 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SymbolicTransient1` |
| Handler node | `function:01c76110` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Semi-symbolic Transient"] -->|OnClick| handler["FUN_01c76110"]
    handler --> call1["Delphi UnicodeString assignment helper"]
    handler --> call2["FUN_0145f1a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C76110__FUN_01c76110.c](../../../DecompiledSources/Tina16/functions/0000000001C76110__FUN_01c76110.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SymbolicTransient1.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:0145f1a0` — FUN_0145f1a0

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
