# &Previous

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.EditorPanel.ExamPanel.ExamMainPages.tsAdvisor.GroupBox3.btPrevAdvice |
| Control class | TBitBtn |
| Caption | &Previous |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btPrevAdviceClick |
| Handler address | 01c7cad0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.EditorPanel.ExamPanel.ExamMainPages.tsAdvisor.GroupBox3.btPrevAdvice` |
| Handler node | `function:01c7cad0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches btPrevAdviceClick at 01c7cad0. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["&Previous"] -->|"OnClick"| handler["btPrevAdviceClick (01c7cad0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C7CAD0__FUN_01c7cad0.c](../../../DecompiledSources/Tina16/functions/0000000001C7CAD0__FUN_01c7cad0.c)
- Recovered role: Evidence-blocked btPrevAdviceClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.EditorPanel.ExamPanel.ExamMainPages.tsAdvisor.GroupBox3.btPrevAdvice.OnClick.
- Current graph behavior: The OnClick binding reaches btPrevAdviceClick at 01c7cad0. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.EditorPanel.ExamPanel.ExamMainPages.tsAdvisor.GroupBox3.btPrevAdvice to btPrevAdviceClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C7CAD0__FUN_01c7cad0.c and directly references 01c7c9a0. No accepted end-to-end role was established for this control path.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c7c9a0` — FUN_01c7c9a0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0364_SchematicEditor_SchematicEditor_EditorPanel_ExamPanel_ExamMainPages_tsAdvisor_GroupBox3_btPrevAdvice_Glyph_Data.png`](../../../glyph/0364_SchematicEditor_SchematicEditor_EditorPanel_ExamPanel_ExamMainPages_tsAdvisor_GroupBox3_btPrevAdvice_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

