# Test...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ImportFromPicture |
| Component path | ImportFromPicture.bTest |
| Control class | TButton |
| Caption | Test... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | bTestClick |
| Handler address | 01a2bd30 |
| Graph node | `resource:dfm:ImportFromPicture/ImportFromPicture.bTest` |
| Handler node | `function:01a2bd30` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Test..."] -->|OnClick| handler["FUN_01a2bd30"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_00417580"]
    handler --> call3["FUN_00417740"]
    handler --> call4["FUN_01a2c180"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A2BD30__FUN_01a2bd30.c](../../../DecompiledSources/Tina16/functions/0000000001A2BD30__FUN_01a2bd30.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ImportFromPicture.bTest.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00417580` — FUN_00417580
- `function:00417740` — FUN_00417740
- `function:01a2c180` — FUN_01a2c180

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Value:  at distance 109.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
