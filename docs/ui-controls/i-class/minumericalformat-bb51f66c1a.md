# &Numerical Format && Precisions

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | I_Class |
| Component path | I_Class.MainMenu.miSettings.miNumericalformat |
| Control class | TMenuItem |
| Caption | &Numerical Format && Precisions |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | miNumericalformatClick |
| Handler address | 017efab0 |
| Graph node | `resource:dfm:I_Class/I_Class.MainMenu.miSettings.miNumericalformat` |
| Handler node | `function:017efab0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Numerical Format && Precisions"] -->|OnClick| handler["FUN_017efab0"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_007fc180"]
    handler --> call3["FUN_01115c40"]
    handler --> call4["FUN_013b37d0"]
    handler --> call5["FUN_01476a00"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017EFAB0__FUN_017efab0.c](../../../DecompiledSources/Tina16/functions/00000000017EFAB0__FUN_017efab0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: I_Class.MainMenu.miSettings.miNumericalformat.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:007fc180` — FUN_007fc180
- `function:01115c40` — FUN_01115c40
- `function:013b37d0` — FUN_013b37d0
- `function:01476a00` — FUN_01476a00

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
