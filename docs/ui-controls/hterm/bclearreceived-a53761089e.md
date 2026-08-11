# Clear received

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | HTerm |
| Component path | HTerm.Panel2.Panel3.Panel4.bClearReceived |
| Control class | TButton |
| Caption | Clear received |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bClearReceivedClick |
| Handler address | 014ba1a0 |
| Graph node | `resource:dfm:HTerm/HTerm.Panel2.Panel3.Panel4.bClearReceived` |
| Handler node | `function:014ba1a0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Clear received"] -->|OnClick| handler["FUN_014ba1a0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014BA1A0__FUN_014ba1a0.c](../../../DecompiledSources/Tina16/functions/00000000014BA1A0__FUN_014ba1a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: HTerm.Panel2.Panel3.Panel4.bClearReceived.OnClick.
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

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
