# TESZT

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | TesztForm1 |
| Component path | TesztForm1.Button1 |
| Control class | TButton |
| Caption | TESZT |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | Button1Click |
| Handler address | 0115dcc0 |
| Graph node | `resource:dfm:TesztForm1/TesztForm1.Button1` |
| Handler node | `function:0115dcc0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["TESZT"] -->|OnClick| handler["FUN_0115dcc0"]
    handler --> call1["FUN_012281f0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000115DCC0__FUN_0115dcc0.c](../../../DecompiledSources/Tina16/functions/000000000115DCC0__FUN_0115dcc0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: TesztForm1.Button1.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:012281f0` — FUN_012281f0

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
