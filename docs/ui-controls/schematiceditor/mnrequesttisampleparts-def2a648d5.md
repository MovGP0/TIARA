# Request TI sample parts

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTIUtilities.mnRequestTISampleParts |
| Control class | TMenuItem |
| Caption | Request TI sample parts |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnRequestTISamplePartsClick |
| Handler address | 01c9d3d0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTIUtilities.mnRequestTISampleParts` |
| Handler node | `function:01c9d3d0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Request TI sample parts"] -->|OnClick| handler["FUN_01c9d3d0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_00414b50"]
    handler --> call3["FUN_00416740"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C9D3D0__FUN_01c9d3d0.c](../../../DecompiledSources/Tina16/functions/0000000001C9D3D0__FUN_01c9d3d0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTIUtilities.mnRequestTISampleParts.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414b50` — FUN_00414b50
- `function:00416740` — FUN_00416740

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
