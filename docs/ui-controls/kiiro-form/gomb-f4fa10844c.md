# Hide text

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | kiiro_form |
| Component path | kiiro_form.gomb |
| Control class | TButton |
| Caption | Hide text |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | gombClick |
| Handler address | 011976a0 |
| Graph node | `resource:dfm:kiiro_form/kiiro_form.gomb` |
| Handler node | `function:011976a0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Hide text"] -->|OnClick| handler["FUN_011976a0"]
    handler --> call1["FUN_0064dbe0"]
    handler --> call2["VCL control text setter with change suppression"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011976A0__FUN_011976a0.c](../../../DecompiledSources/Tina16/functions/00000000011976A0__FUN_011976a0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: kiiro_form.gomb.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:0064dbe0` — FUN_0064dbe0
- `function:0064de00` — VCL control text setter with change suppression

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
