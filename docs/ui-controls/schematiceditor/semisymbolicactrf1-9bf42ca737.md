# Semi-symbolic AC transfer

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SemisymbolicACtrf1 |
| Control class | TMenuItem |
| Caption | Semi-symbolic AC transfer |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SemisymbolicACtrf1Click |
| Handler address | 01c75eb0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SemisymbolicACtrf1` |
| Handler node | `function:01c75eb0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Semi-symbolic AC transfer"] -->|OnClick| handler["FUN_01c75eb0"]
    handler --> call1["Delphi UnicodeString assignment helper"]
    handler --> call2["FUN_0145e790"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C75EB0__FUN_01c75eb0.c](../../../DecompiledSources/Tina16/functions/0000000001C75EB0__FUN_01c75eb0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SemisymbolicACtrf1.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:0145e790` — FUN_0145e790

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
