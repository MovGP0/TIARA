# tvContents

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | FormHelp |
| Component path | FormHelp.PCIndexSearch.tsContents.tvContents |
| Control class | TTreeView |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | tvContentsClick |
| Handler address | 00b01aa0 |
| Graph node | `resource:dfm:FormHelp/FormHelp.PCIndexSearch.tsContents.tvContents` |
| Handler node | `function:00b01aa0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["tvContents"] -->|OnClick| handler["FUN_00b01aa0"]
    handler --> call1["FUN_006dd2b0"]
    handler --> call2["FUN_006e2530"]
    handler --> call3["FUN_00b01560"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000B01AA0__FUN_00b01aa0.c](../../../DecompiledSources/Tina16/functions/0000000000B01AA0__FUN_00b01aa0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: FormHelp.PCIndexSearch.tsContents.tvContents.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:006dd2b0` — FUN_006dd2b0
- `function:006e2530` — FUN_006e2530
- `function:00b01560` — FUN_00b01560

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
