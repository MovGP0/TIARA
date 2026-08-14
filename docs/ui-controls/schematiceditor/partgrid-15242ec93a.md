# Component Rack|Select the component you want to place

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.ComponentPanel.PartGrid |
| Control class | TPartGrid |
| Caption | Not present in the recovered resource. |
| Hint | Component Rack\|Select the component you want to place |
| Text | Not present in the recovered resource. |
| Handler name | PartGridClick |
| Handler address | 01c9ce90 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.ComponentPanel.PartGrid` |
| Handler node | `function:01c9ce90` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches PartGridClick at 01c9ce90. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Component Rack|Select the component you want to place"] -->|"OnClick"| handler["PartGridClick (01c9ce90)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C9CE90__FUN_01c9ce90.c](../../../DecompiledSources/Tina16/functions/0000000001C9CE90__FUN_01c9ce90.c)
- Recovered role: Evidence-blocked PartGridClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.ComponentPanel.PartGrid.OnClick.
- Current graph behavior: The OnClick binding reaches PartGridClick at 01c9ce90. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.ComponentPanel.PartGrid to PartGridClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C9CE90__FUN_01c9ce90.c and directly references 004113d0. No accepted end-to-end role was established for this control path.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:004113d0` — FUN_004113d0

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

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

