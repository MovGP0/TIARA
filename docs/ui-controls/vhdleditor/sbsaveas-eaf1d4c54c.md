# Save As...

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | VhdlEditor |
| Component path | VhdlEditor.Panel1.Panel2.sbSaveAs |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Save As... |
| Text | Not present in the recovered resource. |
| Handler name | sbSaveAsClick |
| Handler address | 014a0840 |
| Graph node | `resource:dfm:VhdlEditor/VhdlEditor.Panel1.Panel2.sbSaveAs` |
| Handler node | `function:014a0840` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Save As..."] -->|OnClick| handler["FUN_014a0840"]
    handler --> call1["FUN_014a0680"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014A0840__FUN_014a0840.c](../../../DecompiledSources/Tina16/functions/00000000014A0840__FUN_014a0840.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: VhdlEditor.Panel1.Panel2.sbSaveAs.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:014a0680` — Handles 1 Delphi UI event: VhdlEditor.mnMainMenu.mnFile.mnSaveAs.OnClick.

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0504_VhdlEditor_VhdlEditor_Panel1_Panel2_sbSaveAs_Glyph_Data.png`](../../../glyph/0504_VhdlEditor_VhdlEditor_Panel1_Panel2_sbSaveAs_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
