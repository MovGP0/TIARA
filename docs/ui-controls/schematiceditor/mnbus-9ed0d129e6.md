# &Bus

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.Insert.mnBus |
| Control class | TMenuItem |
| Caption | &Bus |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnBusClick |
| Handler address | 01c92b00 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.Insert.mnBus` |
| Handler node | `function:01c92b00` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnBusClick at 01c92b00. The recovered body has 4 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["&Bus"] -->|"OnClick"| handler["mnBusClick (01c92b00)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C92B00__FUN_01c92b00.c](../../../DecompiledSources/Tina16/functions/0000000001C92B00__FUN_01c92b00.c)
- Recovered role: Evidence-blocked mnBusClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.Insert.mnBus.OnClick.
- Current graph behavior: The OnClick binding reaches mnBusClick at 01c92b00. The recovered body has 4 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.Insert.mnBus to mnBusClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C92B00__FUN_01c92b00.c and directly references 01367900, 01c6cee0, 01c6d670, 01c8cee0. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:01367900` — FUN_01367900
- `function:01c6cee0` — FUN_01c6cee0
- `function:01c6d670` — FUN_01c6d670
- `function:01c8cee0` — FUN_01c8cee0

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

