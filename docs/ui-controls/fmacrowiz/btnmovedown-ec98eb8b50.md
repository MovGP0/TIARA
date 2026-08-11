# Down

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | fMacroWiz |
| Component path | fMacroWiz.pcMWiz.tsRename.Panel2.btnMoveDown |
| Control class | TButton |
| Caption | Down |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnMoveDownClick |
| Handler address | 01c3b8d0 |
| Graph node | `resource:dfm:fMacroWiz/fMacroWiz.pcMWiz.tsRename.Panel2.btnMoveDown` |
| Handler node | `function:01c3b8d0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Down"] -->|OnClick| handler["FUN_01c3b8d0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString array finalization helper"]
    handler --> call3["FUN_008482c0"]
    handler --> call4["FUN_00848bf0"]
    handler --> call5["FUN_0084e320"]
    handler --> call6["FUN_0084e3e0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C3B8D0__FUN_01c3b8d0.c](../../../DecompiledSources/Tina16/functions/0000000001C3B8D0__FUN_01c3b8d0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: fMacroWiz.pcMWiz.tsRename.Panel2.btnMoveDown.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:008482c0` — FUN_008482c0
- `function:00848bf0` — FUN_00848bf0
- `function:0084e320` — FUN_0084e320
- `function:0084e3e0` — FUN_0084e3e0
- `function:01c3bc80` — FUN_01c3bc80

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
