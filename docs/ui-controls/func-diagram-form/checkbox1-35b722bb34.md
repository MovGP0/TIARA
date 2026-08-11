# Simplified function

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | Func_diagram_form |
| Component path | Func_diagram_form.CheckBox1 |
| Control class | TCheckBox |
| Caption | Simplified function |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | CheckBox1Click |
| Handler address | 01221380 |
| Graph node | `resource:dfm:Func_diagram_form/Func_diagram_form.CheckBox1` |
| Handler node | `function:01221380` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Simplified function"] -->|OnClick| handler["FUN_01221380"]
    handler --> call1["FUN_011d4970"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001221380__FUN_01221380.c](../../../DecompiledSources/Tina16/functions/0000000001221380__FUN_01221380.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: Func_diagram_form.CheckBox1.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:011d4970` — FUN_011d4970

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
