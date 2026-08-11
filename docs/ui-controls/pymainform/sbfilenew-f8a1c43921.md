# New

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PyMainForm |
| Component path | PyMainForm.Panel1.Panel2.sbFileNew |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | New |
| Text | Not present in the recovered resource. |
| Handler name | sbFileNewClick |
| Handler address | 0146f490 |
| Graph node | `resource:dfm:PyMainForm/PyMainForm.Panel1.Panel2.sbFileNew` |
| Handler node | `function:0146f490` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["New"] -->|OnClick| handler["FUN_0146f490"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["Delphi UnicodeString assignment helper"]
    handler --> call3["FUN_00442f70"]
    handler --> call4["FUN_0146f8e0"]
    handler --> call5["FUN_0146fe10"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/000000000146F490__FUN_0146f490.c](../../../DecompiledSources/Tina16/functions/000000000146F490__FUN_0146f490.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: PyMainForm.Panel1.Panel2.sbFileNew.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:00442f70` — FUN_00442f70
- `function:0146f8e0` — FUN_0146f8e0
- `function:0146fe10` — FUN_0146fe10

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0313_PyMainForm_PyMainForm_Panel1_Panel2_sbFileNew_Glyph_Data.png`](../../../glyph/0313_PyMainForm_PyMainForm_Panel1_Panel2_sbFileNew_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
