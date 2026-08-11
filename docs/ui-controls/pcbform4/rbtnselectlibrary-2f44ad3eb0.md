# Select Library

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PcbForm4 |
| Component path | PcbForm4.Panel2.rbtnSelectLibrary |
| Control class | TRadioButton |
| Caption | Select Library |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | rbtnSelectLibraryClick |
| Handler address | 00ec80c0 |
| Graph node | `resource:dfm:PcbForm4/PcbForm4.Panel2.rbtnSelectLibrary` |
| Handler node | `function:00ec80c0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Select Library"] -->|OnClick| handler["FUN_00ec80c0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000EC80C0__FUN_00ec80c0.c](../../../DecompiledSources/Tina16/functions/0000000000EC80C0__FUN_00ec80c0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PcbForm4.Panel2.rbtnSelectLibrary.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: true
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Component list: at distance 71.
- Rank 2: Footprint list: at distance 251.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
