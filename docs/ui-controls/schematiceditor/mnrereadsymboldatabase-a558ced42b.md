# &Re-read symbol database

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTools.mnReReadSymbolDatabase |
| Control class | TMenuItem |
| Caption | &Re-read symbol database |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnReReadSymbolDatabaseClick |
| Handler address | 01c8f290 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTools.mnReReadSymbolDatabase` |
| Handler node | `function:01c8f290` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnReReadSymbolDatabaseClick at 01c8f290. The recovered body has 4 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["&Re-read symbol database"] -->|"OnClick"| handler["mnReReadSymbolDatabaseClick (01c8f290)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C8F290__FUN_01c8f290.c](../../../DecompiledSources/Tina16/functions/0000000001C8F290__FUN_01c8f290.c)
- Recovered role: Evidence-blocked mnReReadSymbolDatabaseClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.mnReReadSymbolDatabase.OnClick.
- Current graph behavior: The OnClick binding reaches mnReReadSymbolDatabaseClick at 01c8f290. The recovered body has 4 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnTools.mnReReadSymbolDatabase to mnReReadSymbolDatabaseClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C8F290__FUN_01c8f290.c and directly references 0064e770, 008088b0, 00c40160, 00c40390. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:0064e770` — FUN_0064e770
- `function:008088b0` — FUN_008088b0
- `function:00c40160` — FUN_00c40160
- `function:00c40390` — FUN_00c40390

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

