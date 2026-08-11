# Send

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | HTerm |
| Component path | HTerm.Panel2.bSend |
| Control class | TButton |
| Caption | Send |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bSendClick |
| Handler address | 014ba4f0 |
| Graph node | `resource:dfm:HTerm/HTerm.Panel2.bSend` |
| Handler node | `function:014ba4f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Send"] -->|OnClick| handler["FUN_014ba4f0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_00415dd0"]
    handler --> call3["VCL control Unicode text reader"]
    handler --> call4["FUN_014ba390"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014BA4F0__FUN_014ba4f0.c](../../../DecompiledSources/Tina16/functions/00000000014BA4F0__FUN_014ba4f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: HTerm.Panel2.bSend.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00415dd0` — FUN_00415dd0
- `function:0064dd90` — VCL control Unicode text reader
- `function:014ba390` — FUN_014ba390

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Send now:  at distance 334.
- Rank 2: Timed sequence:  at distance 372.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
