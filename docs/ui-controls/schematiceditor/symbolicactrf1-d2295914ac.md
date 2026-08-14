# AC transfer

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SymbolicACtrf1 |
| Control class | TMenuItem |
| Caption | AC transfer |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | SymbolicACtrf1Click |
| Handler address | 01c75e40 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SymbolicACtrf1` |
| Handler node | `function:01c75e40` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches SymbolicACtrf1Click at 01c75e40. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["AC transfer"] -->|"OnClick"| handler["SymbolicACtrf1Click (01c75e40)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C75E40__FUN_01c75e40.c](../../../DecompiledSources/Tina16/functions/0000000001C75E40__FUN_01c75e40.c)
- Recovered role: Evidence-blocked SymbolicACtrf1Click command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SymbolicACtrf1.OnClick.
- Current graph behavior: The OnClick binding reaches SymbolicACtrf1Click at 01c75e40. The recovered body has 2 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnAnalysis.Symbolic1.SymbolicACtrf1 to SymbolicACtrf1Click. The recovered source is DecompiledSources/Tina16/functions/0000000001C75E40__FUN_01c75e40.c and directly references 00414ad0, 0145e790. No accepted end-to-end role was established for this control path.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:0145e790` — FUN_0145e790

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

