# The Veitch-Karnaugh table

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | VK_form |
| Component path | VK_form |
| Control class | TVK_form |
| Caption | The Veitch-Karnaugh table |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | FormClick |
| Handler address | 011d28d0 |
| Graph node | `resource:dfm:VK_form` |
| Handler node | `function:011d28d0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["The Veitch-Karnaugh table"] -->|OnClick| handler["FUN_011d28d0"]
    handler --> call1["Dual minterm and maxterm Karnaugh-view refresh coordinator"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000011D28D0__FUN_011d28d0.c](../../../DecompiledSources/Tina16/functions/00000000011D28D0__FUN_011d28d0.c)
- Recovered role: Karnaugh form click refresh and help-context handler
- Current graph summary: Restores help-context ID 3000 when the Karnaugh form surface is clicked, then recalculates and repaints both minterm and maxterm Karnaugh views. Handles 1 Delphi UI event: VK_form.OnClick.
- Current graph behavior: Restores help-context ID 3000 when the Karnaugh form surface is clicked, then recalculates and repaints both minterm and maxterm Karnaugh views.
- Current graph evidence: VK_form.OnClick binds FormClick to this function. It stores 3000 and calls FUN_011ae560. Form creation and activation use the same context, and the OnHelp handler passes it with logiconv.chm to the help service.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:011ae560` — Dual minterm and maxterm Karnaugh-view refresh coordinator

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
