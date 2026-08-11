# lbParts

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ComponentFinder |
| Component path | ComponentFinder.lbParts |
| Control class | TListView |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | lbPartsClick |
| Handler address | 01bad1f0 |
| Graph node | `resource:dfm:ComponentFinder/ComponentFinder.lbParts` |
| Handler node | `function:01bad1f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["lbParts"] -->|OnClick| handler["FUN_01bad1f0"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_00416cd0"]
    handler --> call3["FUN_0043f750"]
    handler --> call4["VCL control text setter with change suppression"]
    handler --> call5["FUN_006efc30"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001BAD1F0__FUN_01bad1f0.c](../../../DecompiledSources/Tina16/functions/0000000001BAD1F0__FUN_01bad1f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ComponentFinder.lbParts.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416cd0` — FUN_00416cd0
- `function:0043f750` — FUN_0043f750
- `function:0064de00` — VCL control text setter with change suppression
- `function:006efc30` — FUN_006efc30

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Component to find: at distance 108.
- Rank 2: 00000/00000 at distance 266.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
