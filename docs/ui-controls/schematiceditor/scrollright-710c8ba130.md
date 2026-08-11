# ScrollRight

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.ComponentPanel.ScrollRight |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ScrollRightClick |
| Handler address | 01c73ab0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.ComponentPanel.ScrollRight` |
| Handler node | `function:01c73ab0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["ScrollRight"] -->|OnClick| handler["FUN_01c73ab0"]
    handler --> call1["FUN_00848960"]
    handler --> call2["FUN_00b89270"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C73AB0__FUN_01c73ab0.c](../../../DecompiledSources/Tina16/functions/0000000001C73AB0__FUN_01c73ab0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.ComponentPanel.ScrollRight.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00848960` — FUN_00848960
- `function:00b89270` — FUN_00b89270

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0323_SchematicEditor_SchematicEditor_ComponentPanel_ScrollRight_Glyph_Data.png`](../../../glyph/0323_SchematicEditor_SchematicEditor_ComponentPanel_ScrollRight_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
