# Help

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PyProcessForm |
| Component path | PyProcessForm.lHelp |
| Control class | TLabel |
| Caption | Help |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | lHelpClick |
| Handler address | 01a68080 |
| Graph node | `resource:dfm:PyProcessForm/PyProcessForm.lHelp` |
| Handler node | `function:01a68080` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Help"] -->|OnClick| handler["FUN_01a68080"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_00416740"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001A68080__FUN_01a68080.c](../../../DecompiledSources/Tina16/functions/0000000001A68080__FUN_01a68080.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PyProcessForm.lHelp.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00416740` — FUN_00416740

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Help at distance 0.
- Rank 2: Page name: at distance 35.
- Rank 3: Curve name: at distance 62.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
