# Collapse all

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frxPreviewForm |
| Component path | frxPreviewForm.RightMenu.CollapseMI |
| Control class | TMenuItem |
| Caption | Collapse all |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | CollapseAllClick |
| Handler address | 018b0440 |
| Graph node | `resource:dfm:frxPreviewForm/frxPreviewForm.RightMenu.CollapseMI` |
| Handler node | `function:018b0440` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Collapse all"] -->|OnClick| handler["FUN_018b0440"]
    handler --> call1["FUN_004113d0"]
    handler --> call2["FUN_004aeac0"]
    handler --> call3["FUN_018ab560"]
    handler --> call4["FUN_018af290"]
    handler --> call5["FUN_01951400"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000018B0440__FUN_018b0440.c](../../../DecompiledSources/Tina16/functions/00000000018B0440__FUN_018b0440.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frxPreviewForm.RightMenu.CollapseMI.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:004113d0` — FUN_004113d0
- `function:004aeac0` — FUN_004aeac0
- `function:018ab560` — FUN_018ab560
- `function:018af290` — FUN_018af290
- `function:01951400` — FUN_01951400

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
