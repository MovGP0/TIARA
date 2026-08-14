# PCB Component Wizard...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTools.mnPCBTools.mnPCBOnlyCompWizard |
| Control class | TMenuItem |
| Caption | PCB Component Wizard... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnPCBOnlyCompWizardClick |
| Handler address | 01c9aec0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTools.mnPCBTools.mnPCBOnlyCompWizard` |
| Handler node | `function:01c9aec0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches mnPCBOnlyCompWizardClick at 01c9aec0. The recovered body has 6 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["PCB Component Wizard..."] -->|"OnClick"| handler["mnPCBOnlyCompWizardClick (01c9aec0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C9AEC0__FUN_01c9aec0.c](../../../DecompiledSources/Tina16/functions/0000000001C9AEC0__FUN_01c9aec0.c)
- Recovered role: Evidence-blocked mnPCBOnlyCompWizardClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnTools.mnPCBTools.mnPCBOnlyCompWizard.OnClick.
- Current graph behavior: The OnClick binding reaches mnPCBOnlyCompWizardClick at 01c9aec0. The recovered body has 6 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnTools.mnPCBTools.mnPCBOnlyCompWizard to mnPCBOnlyCompWizardClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C9AEC0__FUN_01c9aec0.c and directly references 00410f20, 007fc180, 008088b0, 00c82c10, 00c85140, 01c691d0. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 6

## Direct calls

- `function:00410f20` — Nil-safe Delphi object destruction helper
- `function:007fc180` — FUN_007fc180
- `function:008088b0` — FUN_008088b0
- `function:00c82c10` — FUN_00c82c10
- `function:00c85140` — FUN_00c85140
- `function:01c691d0` — FUN_01c691d0

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

