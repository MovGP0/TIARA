# Transparent

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | I_Class |
| Component path | I_Class.pmBackground.Background1.TransparentMnu |
| Control class | TMenuItem |
| Caption | Transparent |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | TransparentMnuClick |
| Handler address | 017f2c50 |
| Graph node | `resource:dfm:I_Class/I_Class.pmBackground.Background1.TransparentMnu` |
| Handler node | `function:017f2c50` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Transparent"] -->|OnClick| handler["FUN_017f2c50"]
    handler --> call1["FUN_007e2d20"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017F2C50__FUN_017f2c50.c](../../../DecompiledSources/Tina16/functions/00000000017F2C50__FUN_017f2c50.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: I_Class.pmBackground.Background1.TransparentMnu.OnClick.
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
