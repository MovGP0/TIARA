# Add files from a directory...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | MCUProjectForm |
| Component path | MCUProjectForm.pmAddToProject.mnAddDir |
| Control class | TMenuItem |
| Caption | Add files from a directory... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnAddDirClick |
| Handler address | 0108b490 |
| Graph node | `resource:dfm:MCUProjectForm/MCUProjectForm.pmAddToProject.mnAddDir` |
| Handler node | `function:0108b490` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Add files from a directory..."] -->|OnClick| handler["FUN_0108b490"]
    handler --> call1["FUN_0108aff0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000108B490__FUN_0108b490.c](../../../DecompiledSources/Tina16/functions/000000000108B490__FUN_0108b490.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: MCUProjectForm.pmAddToProject.mnAddDir.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:0108aff0` — FUN_0108aff0

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
