# More...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | CompilePackage |
| Component path | CompilePackage.SimplePanel.bMore |
| Control class | TBitBtn |
| Caption | More... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bMoreClick |
| Handler address | 014ec7a0 |
| Graph node | `resource:dfm:CompilePackage/CompilePackage.SimplePanel.bMore` |
| Handler node | `function:014ec7a0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["More..."] -->|OnClick| handler["FUN_014ec7a0"]
    handler --> call1["FUN_014ed4b0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014EC7A0__FUN_014ec7a0.c](../../../DecompiledSources/Tina16/functions/00000000014EC7A0__FUN_014ec7a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: CompilePackage.SimplePanel.bMore.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:014ed4b0` — FUN_014ed4b0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Library search list:  at distance 442.
- Rank 2: Target Library: at distance 478.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
