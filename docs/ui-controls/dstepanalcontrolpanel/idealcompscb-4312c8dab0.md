# &Ideal components

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | DStepAnalControlPanel |
| Component path | DStepAnalControlPanel.IdealCompsCB |
| Control class | TCheckBox |
| Caption | &Ideal components |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | IdealCompsCBClick |
| Handler address | 01500280 |
| Graph node | `resource:dfm:DStepAnalControlPanel/DStepAnalControlPanel.IdealCompsCB` |
| Handler node | `function:01500280` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Ideal components"] -->|OnClick| handler["FUN_01500280"]
    handler --> call1["FUN_014fd660"]
    handler --> call2["FUN_014fe830"]
    handler --> call3["FUN_01cc6030"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001500280__FUN_01500280.c](../../../DecompiledSources/Tina16/functions/0000000001500280__FUN_01500280.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: DStepAnalControlPanel.IdealCompsCB.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:014fd660` — FUN_014fd660
- `function:014fe830` — FUN_014fe830
- `function:01cc6030` — FUN_01cc6030

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: true
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
