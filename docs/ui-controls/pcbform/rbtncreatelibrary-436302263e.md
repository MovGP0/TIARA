# Create Library

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PcbForm |
| Component path | PcbForm.Panel2.rbtnCreateLibrary |
| Control class | TRadioButton |
| Caption | Create Library |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | rbtnCreateLibraryClick |
| Handler address | 00ed51f0 |
| Graph node | `resource:dfm:PcbForm/PcbForm.Panel2.rbtnCreateLibrary` |
| Handler node | `function:00ed51f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Create Library"] -->|OnClick| handler["FUN_00ed51f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000ED51F0__FUN_00ed51f0.c](../../../DecompiledSources/Tina16/functions/0000000000ED51F0__FUN_00ed51f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PcbForm.Panel2.rbtnCreateLibrary.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Footprint list: at distance 68.
- Rank 2: 3D component view: at distance 233.
- Rank 3: Component list: at distance 241.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
