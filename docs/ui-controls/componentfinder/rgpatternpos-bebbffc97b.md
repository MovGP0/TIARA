#  Match at

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ComponentFinder |
| Component path | ComponentFinder.rgPatternPos |
| Control class | TRadioGroup |
| Caption |  Match at  |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | rgPatternPosClick |
| Handler address | 01bacf50 |
| Graph node | `resource:dfm:ComponentFinder/ComponentFinder.rgPatternPos` |
| Handler node | `function:01bacf50` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control[" Match at "] -->|OnClick| handler["FUN_01bacf50"]
    handler --> call1["FUN_00688430"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001BACF50__FUN_01bacf50.c](../../../DecompiledSources/Tina16/functions/0000000001BACF50__FUN_01bacf50.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ComponentFinder.rgPatternPos.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00688430` — FUN_00688430

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: ("start", "anywhere", "end")
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Component to find: at distance 60.
- Rank 2: 00000/00000 at distance 314.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
