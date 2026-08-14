# Import TINA Libraries and Designs...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnFile.Import.ImportUserLibs |
| Control class | TMenuItem |
| Caption | Import TINA Libraries and Designs... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ImportUserLibsClick |
| Handler address | 01ca2ac0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnFile.Import.ImportUserLibs` |
| Handler node | `function:01ca2ac0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches ImportUserLibsClick at 01ca2ac0. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Import TINA Libraries and Designs..."] -->|"OnClick"| handler["ImportUserLibsClick (01ca2ac0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001CA2AC0__FUN_01ca2ac0.c](../../../DecompiledSources/Tina16/functions/0000000001CA2AC0__FUN_01ca2ac0.c)
- Recovered role: Evidence-blocked ImportUserLibsClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnFile.Import.ImportUserLibs.OnClick.
- Current graph behavior: The OnClick binding reaches ImportUserLibsClick at 01ca2ac0. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnFile.Import.ImportUserLibs to ImportUserLibsClick. The recovered source is DecompiledSources/Tina16/functions/0000000001CA2AC0__FUN_01ca2ac0.c and directly references 00410f20, 007fc180. No accepted end-to-end role was established for this control path.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:007fc180` — FUN_007fc180

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

