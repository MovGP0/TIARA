# &View symbol table

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | I_Class |
| Component path | I_Class.MainMenu.miSettings.miSymbol |
| Control class | TMenuItem |
| Caption | &View symbol table |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | miSymbolsClick |
| Handler address | 017efbc0 |
| Graph node | `resource:dfm:I_Class/I_Class.MainMenu.miSettings.miSymbol` |
| Handler node | `function:017efbc0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&View symbol table"] -->|OnClick| handler["FUN_017efbc0"]
    handler --> call1["FUN_007fc180"]
    handler --> call2["FUN_008059a0"]
    handler --> call3["FUN_01115920"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017EFBC0__FUN_017efbc0.c](../../../DecompiledSources/Tina16/functions/00000000017EFBC0__FUN_017efbc0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: I_Class.MainMenu.miSettings.miSymbol.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:007fc180` — FUN_007fc180
- `function:008059a0` — FUN_008059a0
- `function:01115920` — FUN_01115920

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
