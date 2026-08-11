# Next >>

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DigitalDebugger |
| Component path | DigitalDebugger.bNext |
| Control class | TButton |
| Caption | Next >> |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bNextClick |
| Handler address | Not present in the recovered resource. |
| Graph node | `resource:dfm:DigitalDebugger/DigitalDebugger.bNext` |
| Handler node | `concept:dfm-handler:TDigitalDebugger/bNextClick` |
| Graph layer | tina.exe |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Next >>"] -->|OnClick| handler["bNextClick"]
    handler -.-> unresolved["Recovered address not established"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/resources/dfm/ui-evidence.json](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Unresolved Delphi event handler TDigitalDebugger.bNextClick, referenced by 1 UI event.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: Not present in the recovered resource.

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

- Rank 1: 0 at distance 240.
- Rank 2: Message count:  at distance 343.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
