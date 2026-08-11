# AI Assistant

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.TopToolBar.EditorTools.sbAIAssistant |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | AI Assistant |
| Text | Not present in the recovered resource. |
| Handler name | mnAIAssistantClick |
| Handler address | 01ca4da0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.TopToolBar.EditorTools.sbAIAssistant` |
| Handler node | `function:01ca4da0` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["AI Assistant"] -->|OnClick| handler["FUN_01ca4da0"]
    handler --> call1["Delphi UnicodeString clear and finalization helper"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001CA4DA0__FUN_01ca4da0.c](../../../DecompiledSources/Tina16/functions/0000000001CA4DA0__FUN_01ca4da0.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 2 Delphi UI events: SchematicEditor.TopToolBar.EditorTools.sbAIAssistant.OnClick, SchematicEditor.MainMenu.mnTools.mnAIAssistant.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0353_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_sbAIAssistant_Glyph_Data.png`](../../../glyph/0353_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_sbAIAssistant_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
