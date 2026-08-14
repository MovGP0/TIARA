# &DC Transfer Characteristic...

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.DCAnalysis.DCTransferCharacteristic |
| Control class | TMenuItem |
| Caption | &DC Transfer Characteristic... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | DCTransferCharacteristicClick |
| Handler address | 01c75800 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.DCAnalysis.DCTransferCharacteristic` |
| Handler node | `function:01c75800` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches DCTransferCharacteristicClick at 01c75800. The recovered body has 4 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["&DC Transfer Characteristic..."] -->|"OnClick"| handler["DCTransferCharacteristicClick (01c75800)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C75800__FUN_01c75800.c](../../../DecompiledSources/Tina16/functions/0000000001C75800__FUN_01c75800.c)
- Recovered role: Evidence-blocked DCTransferCharacteristicClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.DCAnalysis.DCTransferCharacteristic.OnClick.
- Current graph behavior: The OnClick binding reaches DCTransferCharacteristicClick at 01c75800. The recovered body has 4 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.mnAnalysis.DCAnalysis.DCTransferCharacteristic to DCTransferCharacteristicClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C75800__FUN_01c75800.c and directly references 00414ad0, 01324990, 013c7550, 013d3ef0. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 4

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:01324990` — FUN_01324990
- `function:013c7550` — FUN_013c7550
- `function:013d3ef0` — FUN_013d3ef0

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

