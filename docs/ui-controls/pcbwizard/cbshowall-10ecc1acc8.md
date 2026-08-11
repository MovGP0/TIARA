# Show all projects

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PCBWizard |
| Component path | PCBWizard.pnlProject.cbShowAll |
| Control class | TCheckBox |
| Caption | Show all projects |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | cbShowAllClick |
| Handler address | 01bb2980 |
| Graph node | `resource:dfm:PCBWizard/PCBWizard.pnlProject.cbShowAll` |
| Handler node | `function:01bb2980` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Show all projects"] -->|OnClick| handler["FUN_01bb2980"]
    handler --> call1["FUN_01bb1cf0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001BB2980__FUN_01bb2980.c](../../../DecompiledSources/Tina16/functions/0000000001BB2980__FUN_01bb2980.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PCBWizard.pnlProject.cbShowAll.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01bb1cf0` — FUN_01bb1cf0

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
