# Save As...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | VhdlEditor |
| Component path | VhdlEditor.mnMainMenu.mnFile.mnSaveAs |
| Control class | TMenuItem |
| Caption | Save As... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnSaveAsClick |
| Handler address | 014a0680 |
| Graph node | `resource:dfm:VhdlEditor/VhdlEditor.mnMainMenu.mnFile.mnSaveAs` |
| Handler node | `function:014a0680` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Save As..."] -->|OnClick| handler["FUN_014a0680"]
    handler --> call1["FUN_004113d0"]
    handler --> call2["Delphi UnicodeString clear and finalization helper"]
    handler --> call3["FUN_00724270"]
    handler --> call4["FUN_00c0dad0"]
    handler --> call5["FUN_014a0090"]
    handler --> call6["FUN_014a0130"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014A0680__FUN_014a0680.c](../../../DecompiledSources/Tina16/functions/00000000014A0680__FUN_014a0680.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: VhdlEditor.mnMainMenu.mnFile.mnSaveAs.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 7

## Direct calls

- `function:004113d0` — FUN_004113d0
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00724270` — FUN_00724270
- `function:00c0dad0` — FUN_00c0dad0
- `function:014a0090` — FUN_014a0090
- `function:014a0130` — FUN_014a0130
- `function:014a1f90` — FUN_014a1f90

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
