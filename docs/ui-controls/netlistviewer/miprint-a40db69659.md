# &Print...

> Analysis status: Reviewed from the recovered handler, print dialog, and printer-canvas path.

## Control

| Property | Recovered value |
| --- | --- |
| Form | NetlistViewer |
| Component path | NetlistViewer.MainMenu.MFile.MIPrint |
| Control class | TMenuItem |
| Caption | &Print... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | MIPrintClick |
| Handler address | 014b5620 |
| Graph node | `resource:dfm:NetlistViewer/NetlistViewer.MainMenu.MFile.MIPrint` |
| Handler node | `function:014b5620` |
| Graph layer | UI |

## What happens when clicked

The menu item opens `TPrintDialog`. Canceling it is a no-op. After acceptance, the handler initializes a printer job, copies the `Memo` font to the printer canvas, visits every memo line in order, and draws each line on the printer canvas before ending the job. The recovered wrapper has no page-range decision, pagination branch, progress dialog, or local printer-error recovery.

## Click flow

```mermaid
flowchart TD
    control["Choose Print"] --> handler["FUN_014b5620"]
    handler --> dialog{"PrintDialog accepted?"}
    dialog -->|No| noop["Return without printing"]
    dialog -->|Yes| start["Start printer job and copy Memo font"]
    start --> lines["Draw each Memo line in order"]
    lines --> finish["End printer job"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/00000000014B5620__FUN_014b5620.c](../../../DecompiledSources/Tina16/functions/00000000014B5620__FUN_014b5620.c)
- Recovered role: Print all Netlist Viewer memo lines after dialog confirmation.
- Current graph summary: Handles 1 Delphi UI event: NetlistViewer.MainMenu.MFile.MIPrint.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 11

## Direct calls

- `function:00409900` — FUN_00409900
- `function:0040ca00` — FUN_0040ca00
- `function:0040d150` — FUN_0040d150
- `function:0040f200` — FUN_0040f200
- `function:0040f590` — FUN_0040f590
- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:005ff880` — FUN_005ff880
- `function:0069c880` — FUN_0069c880
- `function:0069db00` — FUN_0069db00
- `function:0069e8a0` — FUN_0069e8a0
- `function:00bf2c10` — FUN_00bf2c10

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

- The printer helpers' recovered symbols do not expose units, margins, or page-break policy.
- Printer exceptions follow the normal Delphi exception path.
