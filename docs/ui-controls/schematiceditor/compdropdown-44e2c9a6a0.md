# Component list

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.TopToolBar.CompDropDownP.CompDropDown |
| Control class | TComboBox |
| Caption | Not present in the recovered resource. |
| Hint | Component list |
| Text | Not present in the recovered resource. |
| Handler name | CompDropDownClick |
| Handler address | 01c703e0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.TopToolBar.CompDropDownP.CompDropDown` |
| Handler node | `function:01c703e0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Component list"] -->|OnClick| handler["FUN_01c703e0"]
    handler --> call1["FUN_01c6ec30"]
    handler --> call2["FUN_01c6ff00"]
    handler --> call3["FUN_01c8cee0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C703E0__FUN_01c703e0.c](../../../DecompiledSources/Tina16/functions/0000000001C703E0__FUN_01c703e0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.TopToolBar.CompDropDownP.CompDropDown.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:01c6ec30` — FUN_01c6ec30
- `function:01c6ff00` — FUN_01c6ff00
- `function:01c8cee0` — FUN_01c8cee0

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
