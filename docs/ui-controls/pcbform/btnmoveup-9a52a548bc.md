# Move Up

> Analysis status: Reviewed: the handler moves the selected node-mapping payload up by one row.

## Control

| Property | Recovered value |
| --- | --- |
| Form | PcbForm |
| Form caption | PCB information for SPICE macro components |
| Component path | PcbForm.Panel1.BtnMoveUp |
| Control class | TBitBtn |
| Caption | Move &Up |
| Hint | Not present |
| Handler name | BtnMoveUpClick |
| Handler address | 00ece150 |
| Graph node | `resource:dfm:PcbForm/PcbForm.Panel1.BtnMoveUp` |
| Handler node | `function:00ece150` |
| Graph layer | UI |

## What happens when clicked

1. The handler requires a selected index greater than zero. It parses that row and the previous row, exchanges their mapping payloads while keeping each position's ordinal prefix, and selects the upper row.
2. It persists the reordered component and footprint definition through `FUN_00ed3300` and refreshes the 3D preview. A missing selection or first-row selection is a no-op.

## Click flow

```mermaid
flowchart TD
    control["PcbForm.Panel1.BtnMoveUp"] -->|OnClick| handler["FUN_00ece150"]
    handler --> decision{"Selected row has a preceding row?"}
    decision -->|Yes| action["Swap mapping payloads and select the upper row"]
    decision -->|No| noop["Leave the order unchanged"]
    action --> outcome["Persist the definition and refresh the 3D preview"]
    noop --> outcome
```

## Handler and call-path evidence

- [`FUN_00ece150`](../../../DecompiledSources/Tina16/functions/0000000000ECE150__FUN_00ece150.c) — Move a PCB node mapping up.
- [`FUN_00ed3300`](../../../DecompiledSources/Tina16/functions/0000000000ED3300__FUN_00ed3300.c) — persist the selected PCB definition.

## Resource and glyph evidence

- Recovered form resource: [`ui-evidence.json`](../../../DecompiledSources/Tina16/resources/dfm/ui-evidence.json).

## Inputs, outputs, and limits

- Input: an OnClick event from `PcbForm.Panel1.BtnMoveUp`, plus the current form selections and state described above.
- State change: Moves the selected node-mapping payload up one position, preserves row ordinals, persists the definition, and refreshes the 3D preview.
- Error or no-op behavior: The decision branches above identify the recovered validation, cancel, confirmation, boundary, or no-op path.
- Analysis limit: The handler reorders serialized row payloads; the constant delimiter names are not recovered.

