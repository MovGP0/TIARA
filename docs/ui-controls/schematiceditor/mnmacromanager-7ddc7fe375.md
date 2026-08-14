# New &Macro Wizard...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTools.mnMacroManager |
| Control class | TMenuItem |
| Caption | New &Macro Wizard... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnMacroManagerClick |
| Handler address | 01c89c60 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTools.mnMacroManager` |
| Handler node | `function:01c89c60` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnMacroManagerClick at 01c89c60. The recovered body has 4 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["New &Macro Wizard..."] -->|"OnClick"| handler["mnMacroManagerClick (01c89c60)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C89C60__FUN_01c89c60.c](../../../DecompiledSources/Tina16/functions/0000000001C89C60__FUN_01c89c60.c)
- Recovered role: Evidence-blocked mnMacroManagerClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.mnMacroManager.OnClick.
- Current graph behavior: The OnClick binding reaches mnMacroManagerClick at 01c89c60. The recovered body has 4 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnTools.mnMacroManager to mnMacroManagerClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C89C60__FUN_01c89c60.c and directly references 00414ad0, 007fc180, 00805ad0, 01c6ec30. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:007fc180` — FUN_007fc180
- `function:00805ad0` — FUN_00805ad0
- `function:01c6ec30` — FUN_01c6ec30

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

