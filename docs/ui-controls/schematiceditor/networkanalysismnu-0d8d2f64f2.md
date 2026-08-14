# &Network Analysis...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.ACAnalysis.NetworkAnalysisMnu |
| Control class | TMenuItem |
| Caption | &Network Analysis... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | NetworkAnalysisMnuClick |
| Handler address | 01c92dd0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.ACAnalysis.NetworkAnalysisMnu` |
| Handler node | `function:01c92dd0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches NetworkAnalysisMnuClick at 01c92dd0. The recovered body has 4 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["&Network Analysis..."] -->|"OnClick"| handler["NetworkAnalysisMnuClick (01c92dd0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C92DD0__FUN_01c92dd0.c](../../../DecompiledSources/Tina16/functions/0000000001C92DD0__FUN_01c92dd0.c)
- Recovered role: Evidence-blocked NetworkAnalysisMnuClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.ACAnalysis.NetworkAnalysisMnu.OnClick.
- Current graph behavior: The OnClick binding reaches NetworkAnalysisMnuClick at 01c92dd0. The recovered body has 4 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnAnalysis.ACAnalysis.NetworkAnalysisMnu to NetworkAnalysisMnuClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C92DD0__FUN_01c92dd0.c and directly references 00414ad0, 013d6a00, 01536240, 01537800. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:013d6a00` — FUN_013d6a00
- `function:01536240` — FUN_01536240
- `function:01537800` — FUN_01537800

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

