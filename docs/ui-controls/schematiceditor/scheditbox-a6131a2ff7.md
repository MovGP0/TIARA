# SchEditBox

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.EditorPanel.SchEditBox |
| Control class | TSchEditBox |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SchEditBoxClick |
| Handler address | 01c6d5f0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.EditorPanel.SchEditBox` |
| Handler node | `function:01c6d5f0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["SchEditBox"] -->|OnClick| handler["FUN_01c6d5f0"]
    handler --> call1["FUN_004113d0"]
    handler --> call2["FUN_00801e40"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C6D5F0__FUN_01c6d5f0.c](../../../DecompiledSources/Tina16/functions/0000000001C6D5F0__FUN_01c6d5f0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.EditorPanel.SchEditBox.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:004113d0` — FUN_004113d0
- `function:00801e40` — FUN_00801e40

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
