# &Oscilloscope

> Analysis status: Evidence-backed source review complete.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnTM.Oscilloscope |
| Control class | TMenuItem |
| Caption | &Oscilloscope |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnSCPVirtualClick |
| Handler address | 01c904b0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnTM.Oscilloscope` |
| Handler node | `function:01c904b0` |
| Graph layer | UI |

## What happens when clicked

`mnSCPVirtualClick` calls [`FUN_01c8f600`](../../../DecompiledSources/Tina16/functions/0000000001C8F600__FUN_01c8f600.c) with mode `0` and recovered instrument ID `2`. The common launcher treats this as one simulated instrument choice. It reads the shared window slot for this instrument. If the slot is empty, it creates a `TScopeWin` window from VMT `012a7128`, stores the instance, and initializes it with the simulated mode and instrument ID. It then makes the window visible and activates it. If the window already exists, the launcher reuses and activates it.

No device-selection dialog is needed for this simulated path. The recovered launcher has no local error message or confirmation for this mode. The same handler is bound to the instrument's main menu entry and its **Simulated** submenu entry; both controls therefore run the same path.

## Click flow

```mermaid
flowchart TD
    Control["Click &Oscilloscope"] --> Handler["mnSCPVirtualClick<br/>01c904b0"]
    Handler --> Launch["FUN_01c8f600<br/>mode 0, instrument 2"]
    Launch --> Existing{"Shared TScopeWin window exists?"}
    Existing -->|No| Create["Create and store simulated TScopeWin"]
    Existing -->|Yes| Reuse["Reuse current window"]
    Create --> Show["Show and activate window"]
    Reuse --> Show
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C904B0__FUN_01c904b0.c](../../../DecompiledSources/Tina16/functions/0000000001C904B0__FUN_01c904b0.c)
- Recovered role: Open or activate the simulated TScopeWin instrument window.
- Current graph summary: Handles 2 Delphi UI events: SchematicEditor.MainMenu.mnTM.Oscilloscope1.mnSCPVirtual.OnClick, SchematicEditor.MainMenu.mnTM.Oscilloscope.OnClick.
- Current graph behavior: Passes simulated mode 0 and instrument ID 2 to the shared instrument launcher. The launcher creates or reuses a TScopeWin window, then shows and activates it.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnTM.Oscilloscope, SchematicEditor.MainMenu.mnTM.Oscilloscope1.mnSCPVirtual to mnSCPVirtualClick. The handler passes constants 0 and 2 to FUN_01c8f600. That callee's instrument switch uses VMT 012a7128, which manual read-only VMT inspection identifies as TScopeWin; its device-count, selection-dialog, shared-instance, visibility, and activation branches establish the behavior.
- Complexity: simple
- Distinct outgoing calls: 1

## Direct calls

- `function:01c8f600` — [FUN_01c8f600](../../../DecompiledSources/Tina16/functions/0000000001C8F600__FUN_01c8f600.c), the shared instrument discovery and window launcher.

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

- The recovered numeric instrument ID is used because its original Delphi enumeration name is not available.
- The launcher proves device discovery and window activation. It does not prove the external hardware connection state after the window opens.

