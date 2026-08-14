# Renumber Components

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTools.mnPCBTools.mnRenumberComps |
| Control class | TMenuItem |
| Caption | Renumber Components |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnRenumberCompsClick |
| Handler address | 01c9bf10 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTools.mnPCBTools.mnRenumberComps` |
| Handler node | `function:01c9bf10` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnRenumberCompsClick at 01c9bf10. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Renumber Components"] -->|"OnClick"| handler["mnRenumberCompsClick (01c9bf10)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C9BF10__FUN_01c9bf10.c](../../../DecompiledSources/Tina16/functions/0000000001C9BF10__FUN_01c9bf10.c)
- Recovered role: Evidence-blocked mnRenumberCompsClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.mnPCBTools.mnRenumberComps.OnClick.
- Current graph behavior: The OnClick binding reaches mnRenumberCompsClick at 01c9bf10. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnTools.mnPCBTools.mnRenumberComps to mnRenumberCompsClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C9BF10__FUN_01c9bf10.c and directly references 019acdc0. No accepted end-to-end role was established for this control path.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:019acdc0` — FUN_019acdc0

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

