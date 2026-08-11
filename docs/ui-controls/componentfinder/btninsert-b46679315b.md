# &Insert...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ComponentFinder |
| Component path | ComponentFinder.btnInsert |
| Control class | TBitBtn |
| Caption | &Insert... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnInsertClick |
| Handler address | 01bad1e0 |
| Graph node | `resource:dfm:ComponentFinder/ComponentFinder.btnInsert` |
| Handler node | `function:01bad1e0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Insert..."] -->|OnClick| handler["FUN_01bad1e0"]
    handler --> call1["FUN_01bacfd0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001BAD1E0__FUN_01bad1e0.c](../../../DecompiledSources/Tina16/functions/0000000001BAD1E0__FUN_01bad1e0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ComponentFinder.btnInsert.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01bacfd0` — Handles 1 Delphi UI event: ComponentFinder.lbParts.OnDblClick.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: 00000/00000 at distance 139.
- Rank 2: Component to find: at distance 357.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
