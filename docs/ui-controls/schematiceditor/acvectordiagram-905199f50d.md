# &Phasor Diagram

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.ACAnalysis.ACVectorDiagram |
| Control class | TMenuItem |
| Caption | &Phasor Diagram |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ACVectorDiagramClick |
| Handler address | 01c97cf0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.ACAnalysis.ACVectorDiagram` |
| Handler node | `function:01c97cf0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches ACVectorDiagramClick at 01c97cf0. The recovered body has 3 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["&Phasor Diagram"] -->|"OnClick"| handler["ACVectorDiagramClick (01c97cf0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C97CF0__FUN_01c97cf0.c](../../../DecompiledSources/Tina16/functions/0000000001C97CF0__FUN_01c97cf0.c)
- Recovered role: Evidence-blocked ACVectorDiagramClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.ACAnalysis.ACVectorDiagram.OnClick.
- Current graph behavior: The OnClick binding reaches ACVectorDiagramClick at 01c97cf0. The recovered body has 3 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnAnalysis.ACAnalysis.ACVectorDiagram to ACVectorDiagramClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C97CF0__FUN_01c97cf0.c and directly references 00414ad0, 013e0570, 0152b4a0. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:013e0570` — FUN_013e0570
- `function:0152b4a0` — FUN_0152b4a0

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

