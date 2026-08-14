# Bring &Forward

> Analysis status: Evidence-backed behavior recovered.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.Edit.mnArrange.mnBringForward |
| Control class | TMenuItem |
| Caption | Bring &Forward |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnBringForwardClick |
| Handler address | 01c977b0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.Edit.mnArrange.mnBringForward` |
| Handler node | `function:01c977b0` |
| Graph layer | UI |

## What happens when clicked

The handler first calls the shared edit guard. If the guard blocks the operation, the click is a no-op. Otherwise, it passes the schematic object list at form offset `0x27A8` to `FUN_01996820`. That helper finds a selected movable object, finds the next eligible object through `FUN_01996370(..., 1)`, and applies the reorder callbacks. The handler then refreshes the model with `(0, 1, 0)` and invalidates the editor control at offset `0xA10`.

This moves the selected schematic object or group one eligible z-order position forward. It does not move an object when the edit guard blocks the command or the list has no eligible object in front of the selection.

## Click flow

```mermaid
flowchart TD
    control["Bring Forward"] --> handler["mnBringForwardClick<br/>01c977b0"]
    handler --> guard{"Shared edit guard blocks?"}
    guard -->|"Yes"| noOp["Keep z-order unchanged"]
    guard -->|"No"| adjacent["Find next eligible object"]
    adjacent --> reorder["Move selection one position forward"]
    reorder --> refresh["Refresh model and repaint editor"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C977B0__FUN_01c977b0.c](../../../DecompiledSources/Tina16/functions/0000000001C977B0__FUN_01c977b0.c)
- Recovered role: Moves the selected schematic objects one z-order position forward.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.Edit.mnArrange.mnBringForward.OnClick.
- Current graph behavior: The handler uses the forward one-step list helper, then refreshes the schematic model and repaints the editor.
- Current graph evidence: `FUN_01996820` finds the next eligible list object through `FUN_01996370(..., 1)` and runs reorder callbacks. The parallel endpoint and backward handlers use different helpers and direction flags.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:0064e770` — FUN_0064e770
- `function:01996820` — FUN_01996820
- `function:0199e310` — FUN_0199e310
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

- The recovered source does not expose the user-visible z-order index. It does prove the relative one-step move and the no-op guards.

