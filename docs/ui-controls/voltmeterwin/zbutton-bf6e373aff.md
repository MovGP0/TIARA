# Z

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | VoltmeterWin |
| Component path | VoltmeterWin.FunctionBox.Zbutton |
| Control class | TSpeedButton |
| Caption | Z |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ZButtonClick |
| Handler address | 01b6fd00 |
| Graph node | `resource:dfm:VoltmeterWin/VoltmeterWin.FunctionBox.Zbutton` |
| Handler node | `function:01b6fd00` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Z"] -->|OnClick| handler["FUN_01b6fd00"]
    handler --> call1["FUN_01b6bcd0"]
    handler --> call2["FUN_01b6e340"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B6FD00__FUN_01b6fd00.c](../../../DecompiledSources/Tina16/functions/0000000001B6FD00__FUN_01b6fd00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: VoltmeterWin.FunctionBox.Zbutton.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:01b6bcd0` — FUN_01b6bcd0
- `function:01b6e340` — FUN_01b6e340

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
