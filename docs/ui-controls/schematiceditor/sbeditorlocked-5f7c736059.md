# Lock Schematic|Locks/unlocks the schematic editor at the bottom

> Analysis status: Blocked by an exact evidence gap.

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

The OnClick binding reaches sbEditorLockedClick at 01ca0c80. The recovered body has 3 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Lock Schematic|Locks/unlocks the schematic editor at the bottom"] -->|"OnClick"| handler["sbEditorLockedClick (01ca0c80)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001CA0C80__FUN_01ca0c80.c](../../../DecompiledSources/Tina16/functions/0000000001CA0C80__FUN_01ca0c80.c)
- Recovered role: Evidence-blocked sbEditorLockedClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.StatusPanel.ButtonPanel.EditorLockPanel.sbEditorLocked.OnClick.
- Current graph behavior: The OnClick binding reaches sbEditorLockedClick at 01ca0c80. The recovered body has 3 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.StatusPanel.ButtonPanel.EditorLockPanel.sbEditorLocked to sbEditorLockedClick. The recovered source is DecompiledSources/Tina16/functions/0000000001CA0C80__FUN_01ca0c80.c and directly references 0064e1d0, 007e2d20, 0082a6c0. No accepted end-to-end role was established for this control path.
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

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

