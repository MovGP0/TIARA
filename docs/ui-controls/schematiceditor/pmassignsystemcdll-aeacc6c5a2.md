# Assign SystemC DLL...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.SchPopup.pmAssignSystemCDLL |
| Control class | TMenuItem |
| Caption | Assign SystemC DLL... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | pmAssignSystemCDLLClick |
| Handler address | 01c71fe0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.SchPopup.pmAssignSystemCDLL` |
| Handler node | `function:01c71fe0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Assign SystemC DLL..."] -->|OnClick| handler["FUN_01c71fe0"]
    handler --> call1["FUN_004113f0"]
    handler --> call2["Delphi UnicodeString clear and finalization helper"]
    handler --> call3["FUN_00724270"]
    handler --> call4["FUN_00724420"]
    handler --> call5["FUN_0072d440"]
    handler --> call6["FUN_013a9e80"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C71FE0__FUN_01c71fe0.c](../../../DecompiledSources/Tina16/functions/0000000001C71FE0__FUN_01c71fe0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.SchPopup.pmAssignSystemCDLL.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 8

## Direct calls

- `function:004113f0` — FUN_004113f0
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00724270` — FUN_00724270
- `function:00724420` — FUN_00724420
- `function:0072d440` — FUN_0072d440
- `function:013a9e80` — FUN_013a9e80
- `function:017741e0` — FUN_017741e0
- `function:01d3f210` — FUN_01d3f210

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
