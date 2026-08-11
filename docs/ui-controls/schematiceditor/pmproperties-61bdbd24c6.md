# Pr&operties...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.SchPopup.pmProperties |
| Control class | TMenuItem |
| Caption | Pr&operties... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnEditAttributesClick |
| Handler address | 01c77050 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.SchPopup.pmProperties` |
| Handler node | `function:01c77050` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Pr&operties..."] -->|OnClick| handler["FUN_01c77050"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_0041ddd0"]
    handler --> call3["FUN_0064d3a0"]
    handler --> call4["FUN_00664d10"]
    handler --> call5["FUN_013b1c30"]
    handler --> call6["FUN_017baeb0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C77050__FUN_01c77050.c](../../../DecompiledSources/Tina16/functions/0000000001C77050__FUN_01c77050.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: SchematicEditor.MainMenu.Edit.mnEditAttributes.OnClick, SchematicEditor.SchPopup.pmProperties.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 16

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0041ddd0` — FUN_0041ddd0
- `function:0064d3a0` — FUN_0064d3a0
- `function:00664d10` — FUN_00664d10
- `function:013b1c30` — FUN_013b1c30
- `function:017baeb0` — FUN_017baeb0
- `function:017baf00` — FUN_017baf00
- `function:017baf30` — FUN_017baf30
- `function:017baf50` — FUN_017baf50
- `function:0198a580` — FUN_0198a580
- `function:0198d430` — FUN_0198d430
- `function:01993ec0` — FUN_01993ec0
- `function:0199e310` — FUN_0199e310
- `function:01a982d0` — FUN_01a982d0
- `function:01c8cee0` — FUN_01c8cee0
- `function:01c8d130` — Handles 2 Delphi UI events: SchematicEditor.MainMenu.mnFile.mnOpenMacro.OnClick, SchematicEditor.SchPopup.pmOpenMacro.OnClick.

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
