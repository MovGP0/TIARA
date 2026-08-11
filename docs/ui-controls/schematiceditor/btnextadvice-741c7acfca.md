# &Next

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.EditorPanel.ExamPanel.ExamMainPages.tsAdvisor.GroupBox3.btNextAdvice |
| Control class | TBitBtn |
| Caption | &Next |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btNextAdviceClick |
| Handler address | 01c7cb00 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.EditorPanel.ExamPanel.ExamMainPages.tsAdvisor.GroupBox3.btNextAdvice` |
| Handler node | `function:01c7cb00` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["&Next"] -->|OnClick| handler["FUN_01c7cb00"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
    handler --> call2["FUN_004aeac0"]
    handler --> call3["FUN_0072d440"]
    handler --> call4["FUN_00b89270"]
    handler --> call5["FUN_00b8e520"]
    handler --> call6["FUN_00b91700"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C7CB00__FUN_01c7cb00.c](../../../DecompiledSources/Tina16/functions/0000000001C7CB00__FUN_01c7cb00.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.EditorPanel.ExamPanel.ExamMainPages.tsAdvisor.GroupBox3.btNextAdvice.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 9

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:004aeac0` — FUN_004aeac0
- `function:0072d440` — FUN_0072d440
- `function:00b89270` — FUN_00b89270
- `function:00b8e520` — FUN_00b8e520
- `function:00b91700` — FUN_00b91700
- `function:012bec10` — FUN_012bec10
- `function:01c7c9a0` — FUN_01c7c9a0
- `function:01c7d9d0` — FUN_01c7d9d0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0365_SchematicEditor_SchematicEditor_EditorPanel_ExamPanel_ExamMainPages_tsAdvisor_GroupBox3_btNextAdvice_Glyph_Data.png`](../../../glyph/0365_SchematicEditor_SchematicEditor_EditorPanel_ExamPanel_ExamMainPages_tsAdvisor_GroupBox3_btNextAdvice_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
