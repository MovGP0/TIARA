# Type

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | I_Drawing |
| Component path | I_Drawing.rgType |
| Control class | TRadioGroup |
| Caption | Type  |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | rgTypeClick |
| Handler address | 017eba20 |
| Graph node | `resource:dfm:I_Drawing/I_Drawing.rgType` |
| Handler node | `function:017eba20` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Type "] -->|OnClick| handler["FUN_017eba20"]
    handler --> call1["FUN_017eb400"]
    handler --> call2["FUN_017eb590"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017EBA20__FUN_017eba20.c](../../../DecompiledSources/Tina16/functions/00000000017EBA20__FUN_017eba20.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: I_Drawing.rgType.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:017eb400` — FUN_017eb400
- `function:017eb590` — FUN_017eb590

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: ("&Lin-Lin", "Lo&g-Lin", "&Bode", "A&mplitude && Phase", "&Fourier")
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Interval &Subdivision at distance 136.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
