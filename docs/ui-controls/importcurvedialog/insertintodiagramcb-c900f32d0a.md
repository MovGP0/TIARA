# Insert into active diagram

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | ImportCurveDialog |
| Component path | ImportCurveDialog.GroupBox1.InsertIntoDiagramCB |
| Control class | TCheckBox |
| Caption | Insert into active diagram |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | InsertIntoDiagramCBClick |
| Handler address | 00f09eb0 |
| Graph node | `resource:dfm:ImportCurveDialog/ImportCurveDialog.GroupBox1.InsertIntoDiagramCB` |
| Handler node | `function:00f09eb0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Insert into active diagram"] -->|OnClick| handler["FUN_00f09eb0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000F09EB0__FUN_00f09eb0.c](../../../DecompiledSources/Tina16/functions/0000000000F09EB0__FUN_00f09eb0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: ImportCurveDialog.GroupBox1.InsertIntoDiagramCB.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- Rank 1: Preview: at distance 245.
- Rank 2: AC amplitude: at distance 278.
- Rank 3: Display format: at distance 310.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
