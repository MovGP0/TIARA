# None

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | I_Class |
| Component path | I_Class.pmBackground.Border1.NoneMnu |
| Control class | TMenuItem |
| Caption | None |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | NoneMnuClick |
| Handler address | 017f2d20 |
| Graph node | `resource:dfm:I_Class/I_Class.pmBackground.Border1.NoneMnu` |
| Handler node | `function:017f2d20` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["None"] -->|OnClick| handler["FUN_017f2d20"]
    handler --> call1["FUN_007e2d20"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017F2D20__FUN_017f2d20.c](../../../DecompiledSources/Tina16/functions/00000000017F2D20__FUN_017f2d20.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: I_Class.pmBackground.Border1.NoneMnu.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:007e2d20` — FUN_007e2d20

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
