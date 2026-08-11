# Lock Schematic|Locks/unlocks the schematic editor at the bottom

> Analysis status: Pending individual source review.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.StatusPanel.ButtonPanel.EditorLockPanel.sbEditorLocked |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Lock Schematic\|Locks/unlocks the schematic editor at the bottom |
| Text | Not present in the recovered resource. |
| Handler name | sbEditorLockedClick |
| Handler address | 01ca0c80 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.StatusPanel.ButtonPanel.EditorLockPanel.sbEditorLocked` |
| Handler node | `function:01ca0c80` |
| Graph layer | UI |

## What happens when clicked

Pending individual analysis. An agent must read the recovered handler source and its relevant callees before it replaces this text.

## Click flow

```mermaid
flowchart LR
    control["Lock Schematic|Locks/unlocks the schematic editor at the bottom"] -->|OnClick| handler["FUN_01ca0c80"]
    handler --> call1["FUN_0064e1d0"]
    handler --> call2["FUN_007e2d20"]
    handler --> call3["FUN_0082a6c0"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001CA0C80__FUN_01ca0c80.c](../../../DecompiledSources/Tina16/functions/0000000001CA0C80__FUN_01ca0c80.c)
- Recovered role: Not present in the recovered resource.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.StatusPanel.ButtonPanel.EditorLockPanel.sbEditorLocked.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:0064e1d0` — FUN_0064e1d0
- `function:007e2d20` — FUN_007e2d20
- `function:0082a6c0` — FUN_0082a6c0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0376_SchematicEditor_SchematicEditor_StatusPanel_ButtonPanel_EditorLockPanel_sbEditorLocked_Glyph_Data.png`](../../../glyph/0376_SchematicEditor_SchematicEditor_StatusPanel_ButtonPanel_EditorLockPanel_sbEditorLocked_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Do not infer behavior from the control class, caption, hint, glyph, or nearby label alone.
- Do not replace the pending status until the handler source and relevant call path provide enough evidence.
