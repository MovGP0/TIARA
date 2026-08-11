# Stop

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DC_CharMeasWin |
| Component path | DC_CharMeasWin.ControlGroupBox.StopSweepAmplBtn |
| Control class | TSpeedButton |
| Caption | Stop |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | StopSweepAmplBtnClick |
| Handler address | 01b669b0 |
| Graph node | `resource:dfm:DC_CharMeasWin/DC_CharMeasWin.ControlGroupBox.StopSweepAmplBtn` |
| Handler node | `function:01b669b0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Stop"] -->|OnClick| handler["FUN_01b669b0"]
    handler --> call1["Delphi UnicodeString array finalization helper"]
    handler --> call2["FUN_00414b50"]
    handler --> call3["FUN_0044f900"]
    handler --> call4["FUN_00b90440"]
    handler --> call5["FUN_010c04f0"]
    handler --> call6["FUN_0153b700"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B669B0__FUN_01b669b0.c](../../../DecompiledSources/Tina16/functions/0000000001B669B0__FUN_01b669b0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DC_CharMeasWin.ControlGroupBox.StopSweepAmplBtn.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00414b50` — FUN_00414b50
- `function:0044f900` — FUN_0044f900
- `function:00b90440` — FUN_00b90440
- `function:010c04f0` — FUN_010c04f0
- `function:0153b700` — FUN_0153b700

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
