# Power Dissipation Analysis Enabled

> Analysis status: Reviewed from recovered source and graph evidence.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.PowerDissipationCalculation |
| Control class | TMenuItem |
| Caption | Power Dissipation Analysis Enabled |
| Handler name | PowerDissipationCalculationClick |
| Handler address | 01c94c60 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.PowerDissipationCalculation` |
| Handler node | `function:01c94c60` |
| Graph layer | UI |

## What happens when clicked

Inverts the global power-dissipation-analysis flag and sets the menu item Checked state to the new value.

## Click flow

```mermaid
flowchart TD
    control["Power Dissipation Analysis Enabled"] -->|"OnClick"| handler["PowerDissipationCalculationClick (01c94c60)"]
    handler --> toggle["Invert global power-dissipation flag"]
    toggle --> check["Set the menu Checked state"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C94C60__FUN_01c94c60.c](../../../DecompiledSources/Tina16/functions/0000000001C94C60__FUN_01c94c60.c)
- Recovered role: Toggle power-dissipation analysis.
- Evidence: The recovered handler reads and inverts global byte 0x818. It then passes the menu item at SchematicEditor +0x1688 and the new byte value to FUN_007e2d20. The accepted annotation for 007e2d20 identifies it as the menu-item Checked-state setter.

## Application-relevant calls

- FUN_007e2d20 synchronizes the menu check mark.

## Resource evidence

- The DFM binds this menu item to `PowerDissipationCalculationClick`.
- The recovered caption is `Power Dissipation Analysis Enabled`.
- No extracted glyph is associated with this control.

## Analysis limits

- The recovered names of some form fields and global state bytes are not available. This article identifies them by stable offsets and proven readers or writers where necessary.