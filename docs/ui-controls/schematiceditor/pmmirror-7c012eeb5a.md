# &Mirror

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.SchPopup.pmMirror |
| Control class | TMenuItem |
| Caption | &Mirror |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnMirrorClick |
| Handler address | 01c77030 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.SchPopup.pmMirror` |
| Handler node | `function:01c77030` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Mirror"] -->|OnClick| handler["FUN_01c77030"]
    handler --> call1["FUN_01c6d440"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C77030__FUN_01c77030.c](../../../DecompiledSources/Tina16/functions/0000000001C77030__FUN_01c77030.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: SchematicEditor.MainMenu.Edit.mnMirror.OnClick, SchematicEditor.SchPopup.pmMirror.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c6d440` — FUN_01c6d440

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
