# &Find...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | I_Class |
| Component path | I_Class.MainMenu.mEdit.miFind |
| Control class | TMenuItem |
| Caption | &Find... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | miFindClick |
| Handler address | 017efa50 |
| Graph node | `resource:dfm:I_Class/I_Class.MainMenu.mEdit.miFind` |
| Handler node | `function:017efa50` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Find..."] -->|OnClick| handler["FUN_017efa50"]
    handler --> call1["FUN_007e2da0"]
    handler --> call2["FUN_017f2f00"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017EFA50__FUN_017efa50.c](../../../DecompiledSources/Tina16/functions/00000000017EFA50__FUN_017efa50.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: I_Class.MainMenu.mEdit.miFind.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:007e2da0` — FUN_007e2da0
- `function:017f2f00` — FUN_017f2f00

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
