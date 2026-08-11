# Copy to &Label

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchPropertyEditor |
| Component path | SchPropertyEditor.GridPopup.pmCopyToLabel |
| Control class | TMenuItem |
| Caption | Copy to &Label |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | pmCopyToLabelClick |
| Handler address | 00f43b10 |
| Graph node | `resource:dfm:SchPropertyEditor/SchPropertyEditor.GridPopup.pmCopyToLabel` |
| Handler node | `function:00f43b10` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Copy to &Label"] -->|OnClick| handler["FUN_00f43b10"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_0084e320"]
    handler --> call3["FUN_00b0a360"]
    handler --> call4["FUN_00b0b450"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000F43B10__FUN_00f43b10.c](../../../DecompiledSources/Tina16/functions/0000000000F43B10__FUN_00f43b10.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchPropertyEditor.GridPopup.pmCopyToLabel.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:0084e320` — FUN_0084e320
- `function:00b0a360` — FUN_00b0a360
- `function:00b0b450` — FUN_00b0b450

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
