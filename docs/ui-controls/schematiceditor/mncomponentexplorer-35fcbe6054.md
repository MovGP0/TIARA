# Component Explorer...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTools.mnComponentExplorer |
| Control class | TMenuItem |
| Caption | Component Explorer... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnComponentExplorerClick |
| Handler address | 01c9bf30 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTools.mnComponentExplorer` |
| Handler node | `function:01c9bf30` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnComponentExplorerClick at 01c9bf30. The recovered body has 5 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Component Explorer..."] -->|"OnClick"| handler["mnComponentExplorerClick (01c9bf30)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C9BF30__FUN_01c9bf30.c](../../../DecompiledSources/Tina16/functions/0000000001C9BF30__FUN_01c9bf30.c)
- Recovered role: Evidence-blocked mnComponentExplorerClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.mnComponentExplorer.OnClick.
- Current graph behavior: The OnClick binding reaches mnComponentExplorerClick at 01c9bf30. The recovered body has 5 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnTools.mnComponentExplorer to mnComponentExplorerClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C9BF30__FUN_01c9bf30.c and directly references 0064e1d0, 007fc180, 008059a0, 013ab910, 01c8a450. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 5

## Direct calls

- `function:0064e1d0` — FUN_0064e1d0
- `function:007fc180` — FUN_007fc180
- `function:008059a0` — FUN_008059a0
- `function:013ab910` — FUN_013ab910
- `function:01c8a450` — FUN_01c8a450

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

