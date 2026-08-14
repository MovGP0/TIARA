# Set power source/sink/loss

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.TopToolBar.EditorTools.sbPower |
| Control class | TSpeedButton |
| Caption | Not present in the recovered resource. |
| Hint | Set power source/sink/loss |
| Text | Not present in the recovered resource. |
| Handler name | sbPowerClick |
| Handler address | 01c7dae0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.TopToolBar.EditorTools.sbPower` |
| Handler node | `function:01c7dae0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches sbPowerClick at 01c7dae0. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Set power source/sink/loss"] -->|"OnClick"| handler["sbPowerClick (01c7dae0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C7DAE0__FUN_01c7dae0.c](../../../DecompiledSources/Tina16/functions/0000000001C7DAE0__FUN_01c7dae0.c)
- Recovered role: Evidence-blocked sbPowerClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.TopToolBar.EditorTools.sbPower.OnClick.
- Current graph behavior: The OnClick binding reaches sbPowerClick at 01c7dae0. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.TopToolBar.EditorTools.sbPower to sbPowerClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C7DAE0__FUN_01c7dae0.c and directly references 00498310, 0064d1f0. No accepted end-to-end role was established for this control path.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00498310` — FUN_00498310
- `function:0064d1f0` — FUN_0064d1f0

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: Not present in the recovered resource.
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: [`0351_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_sbPower_Glyph_Data.png`](../../../glyph/0351_SchematicEditor_SchematicEditor_TopToolBar_EditorTools_sbPower_Glyph_Data.png)

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

