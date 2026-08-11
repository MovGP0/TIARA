# DC

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.PopupInteract.pmIntDC |
| Control class | TMenuItem |
| Caption | DC |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | pmIntDigitalClick |
| Handler address | 01c89820 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.PopupInteract.pmIntDC` |
| Handler node | `function:01c89820` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["DC"] -->|OnClick| handler["FUN_01c89820"]
    handler --> call1["FUN_01c89690"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C89820__FUN_01c89820.c](../../../DecompiledSources/Tina16/functions/0000000001C89820__FUN_01c89820.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 10 Delphi UI events: SchematicEditor.MainMenu.mnInteractive.mnIntDC.OnClick, SchematicEditor.MainMenu.mnInteractive.mnIntAC.OnClick, SchematicEditor.MainMenu.mnInteractive.mnIntTransient.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c89690` — FUN_01c89690

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
