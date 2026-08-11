# Convert circuit to CSV...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PyMainForm |
| Component path | PyMainForm.MainMenu.File1.mnConvertCircuit |
| Control class | TMenuItem |
| Caption | Convert circuit to CSV... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnConvertCircuitClick |
| Handler address | 01471190 |
| Graph node | `resource:dfm:PyMainForm/PyMainForm.MainMenu.File1.mnConvertCircuit` |
| Handler node | `function:01471190` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Convert circuit to CSV..."] -->|OnClick| handler["FUN_01471190"]
    handler --> call1["Nil-safe Delphi object destruction helper"]
    handler --> call2["FUN_004b6930"]
    handler --> call3["FUN_013b73b0"]
    handler --> call4["FUN_01471150"]
    handler --> call5["FUN_0199cfa0"]
    handler --> call6["FUN_019a4600"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001471190__FUN_01471190.c](../../../DecompiledSources/Tina16/functions/0000000001471190__FUN_01471190.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PyMainForm.MainMenu.File1.mnConvertCircuit.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:004b6930` — FUN_004b6930
- `function:013b73b0` — FUN_013b73b0
- `function:01471150` — FUN_01471150
- `function:0199cfa0` — FUN_0199cfa0
- `function:019a4600` — FUN_019a4600

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
