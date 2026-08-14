# Add spice commands...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.mnSpiceCommands |
| Control class | TMenuItem |
| Caption | Add spice commands... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnSpiceCommandsClick |
| Handler address | 01c90510 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.mnSpiceCommands` |
| Handler node | `function:01c90510` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnSpiceCommandsClick at 01c90510. The recovered body has 6 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Add spice commands..."] -->|"OnClick"| handler["mnSpiceCommandsClick (01c90510)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C90510__FUN_01c90510.c](../../../DecompiledSources/Tina16/functions/0000000001C90510__FUN_01c90510.c)
- Recovered role: Evidence-blocked mnSpiceCommandsClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.mnSpiceCommands.OnClick.
- Current graph behavior: The OnClick binding reaches mnSpiceCommandsClick at 01c90510. The recovered body has 6 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnAnalysis.mnSpiceCommands to mnSpiceCommandsClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C90510__FUN_01c90510.c and directly references 00410f20, 00417580, 00417740, 00417c40, 014723c0, 01c92e80. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:00417580` — FUN_00417580
- `function:00417740` — FUN_00417740
- `function:00417c40` — FUN_00417c40
- `function:014723c0` — FUN_014723c0
- `function:01c92e80` — FUN_01c92e80

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

