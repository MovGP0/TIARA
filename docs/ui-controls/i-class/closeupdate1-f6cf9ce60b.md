# Close &&  &Update

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | I_Class |
| Component path | I_Class.MainMenu.mFile.CloseUpdate1 |
| Control class | TMenuItem |
| Caption | Close &&  &Update |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | CloseUpdate1Click |
| Handler address | 017f28b0 |
| Graph node | `resource:dfm:I_Class/I_Class.MainMenu.mFile.CloseUpdate1` |
| Handler node | `function:017f28b0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Close &&  &Update"] -->|OnClick| handler["FUN_017f28b0"]
    handler --> call1["FUN_007e2f80"]
    handler --> call2["FUN_00805200"]
    handler --> call3["FUN_00bf2c10"]
    handler --> call4["FUN_017f2850"]
    handler --> call5["FUN_0199e310"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000017F28B0__FUN_017f28b0.c](../../../DecompiledSources/Tina16/functions/00000000017F28B0__FUN_017f28b0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: I_Class.MainMenu.mFile.CloseUpdate1.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:007e2f80` — FUN_007e2f80
- `function:00805200` — FUN_00805200
- `function:00bf2c10` — FUN_00bf2c10
- `function:017f2850` — FUN_017f2850
- `function:0199e310` — FUN_0199e310

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
