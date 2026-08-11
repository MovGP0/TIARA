# Formula

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.SchPopup.pmFormula |
| Control class | TMenuItem |
| Caption | Formula |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | pmEdisonFormulaClick |
| Handler address | 01c8e780 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.SchPopup.pmFormula` |
| Handler node | `function:01c8e780` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Formula"] -->|OnClick| handler["FUN_01c8e780"]
    handler --> call1["FUN_00f836b0"]
    handler --> call2["FUN_0145f5e0"]
    handler --> call3["FUN_01c87d20"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C8E780__FUN_01c8e780.c](../../../DecompiledSources/Tina16/functions/0000000001C8E780__FUN_01c8e780.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: SchematicEditor.SchPopup.pmFormula.OnClick, SchematicEditor.SchPopupEdison.pmEdisonFormula.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00f836b0` — FUN_00f836b0
- `function:0145f5e0` — FUN_0145f5e0
- `function:01c87d20` — FUN_01c87d20

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
