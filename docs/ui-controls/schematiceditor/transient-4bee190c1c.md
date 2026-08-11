# &Transient...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.Transient |
| Control class | TMenuItem |
| Caption | &Transient... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | TransientClick |
| Handler address | 01c75d80 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.Transient` |
| Handler node | `function:01c75d80` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Transient..."] -->|OnClick| handler["FUN_01c75d80"]
    handler --> call1["FUN_01c75bb0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C75D80__FUN_01c75d80.c](../../../DecompiledSources/Tina16/functions/0000000001C75D80__FUN_01c75d80.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.Transient.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c75bb0` — FUN_01c75bb0

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
