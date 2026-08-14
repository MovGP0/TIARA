# Pin &Markers

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.View.mnPinMarkers |
| Control class | TMenuItem |
| Caption | Pin &Markers |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnPinMarkersClick |
| Handler address | 01c77310 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.View.mnPinMarkers` |
| Handler node | `function:01c77310` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnPinMarkersClick at 01c77310. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["Pin &Markers"] -->|"OnClick"| handler["mnPinMarkersClick (01c77310)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C77310__FUN_01c77310.c](../../../DecompiledSources/Tina16/functions/0000000001C77310__FUN_01c77310.c)
- Recovered role: Evidence-blocked mnPinMarkersClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.View.mnPinMarkers.OnClick.
- Current graph behavior: The OnClick binding reaches mnPinMarkersClick at 01c77310. The recovered body has 1 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.View.mnPinMarkers to mnPinMarkersClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C77310__FUN_01c77310.c and directly references 01c6d590. No accepted end-to-end role was established for this control path.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c6d590` — FUN_01c6d590

## Resource evidence

- Kind: Not present in the recovered resource.
- Modal result: Not present in the recovered resource.
- Checked state: true
- List items: Not present in the recovered resource.
- Image reference: Not present in the recovered resource.
- Extracted glyph: None.

## Nearby label candidates

Nearby labels are layout candidates only. They are not proof of behavior.

- No same-parent label candidate is available.

## Analysis limits

- Exact gap: the recovered handler or one of its direct application callees lacks a source-supported role that proves the command's decisions, state changes, and output. Keep this Bead open until those callees are traced.

