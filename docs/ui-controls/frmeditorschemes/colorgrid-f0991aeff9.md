# Object color|Left click: border color  -- Right click: fill color

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | frmEditorSchemes |
| Component path | frmEditorSchemes.pnlCurrentScheme.ColorGrid |
| Control class | TColorGrid |
| Caption | Not present in the recovered resource. |
| Hint | Object color\|Left click: border color  -- Right click: fill color |
| Text | Not present in the recovered resource. |
| Handler name | ColorGridClick |
| Handler address | 01b745e0 |
| Graph node | `resource:dfm:frmEditorSchemes/frmEditorSchemes.pnlCurrentScheme.ColorGrid` |
| Handler node | `function:01b745e0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Object color|Left click: border color  -- Right click: fill color"] -->|OnClick| handler["FUN_01b745e0"]
    handler --> call1["FUN_0064e770"]
    handler --> call2["FUN_0084e390"]
    handler --> call3["FUN_00c56640"]
    handler --> call4["FUN_00c56db0"]
    handler --> call5["FUN_01b75500"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001B745E0__FUN_01b745e0.c](../../../DecompiledSources/Tina16/functions/0000000001B745E0__FUN_01b745e0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: frmEditorSchemes.pnlCurrentScheme.ColorGrid.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:0064e770` — FUN_0064e770
- `function:0084e390` — FUN_0084e390
- `function:00c56640` — FUN_00c56640
- `function:00c56db0` — FUN_00c56db0
- `function:01b75500` — FUN_01b75500

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
