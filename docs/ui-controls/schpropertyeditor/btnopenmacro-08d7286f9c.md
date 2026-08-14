# E&nter Macro

> Analysis status: Complete. The type dispatch, grid-commit branch, Touchstone dialog filters, accepted-file load, and port-count importer establish the action.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchPropertyEditor |
| Component path | SchPropertyEditor.BottomPanel.btnOpenMacro |
| Control class | TButton |
| Caption | E&nter Macro |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | btnOpenMacroClick |
| Handler address | 00f43f70 |
| Graph node | `resource:dfm:SchPropertyEditor/SchPropertyEditor.BottomPanel.btnOpenMacro` |
| Handler node | `function:00f43f70` |
| Graph layer | UI |

## What happens when clicked

`FUN_00f43f70` reads the edited object's recovered type code through the virtual method at `+0xf8`. For types outside the recovered S-parameter groups and constants, it validates and commits the active property-grid editor through `FUN_00b0a890`, stores that result at `+0x739`, and sets form modal result 6. It then returns without opening a file dialog.

For supported types, the handler configures the Open dialog with a matching `*.S1P` through `*.S8P` Touchstone filter. It sets a recovered folder-ID 5 start location and executes the dialog. Cancellation is a no-op after temporary-string cleanup. On acceptance, it loads the selected file into the string-list object at `+0x768`, maps the type code to port count 1 through 8 with `FUN_00f43eb0`, and calls `FUN_017002a0`. That callee parses the Touchstone header and numeric rows and writes the resulting port and complex-data structures to the edited object.

## Click flow

```mermaid
flowchart TD
    control["Click Enter Macro"] --> handler["FUN_00f43f70"]
    handler --> type["Read edited-object type code"]
    type --> supported{"Supported S-parameter type?"}
    supported -->|No| commit["Commit active grid editor"]
    commit --> macro["Set modal result 6 and return"]
    supported -->|Yes| filter["Select S1P through S8P filter"]
    filter --> dialog["Execute Open dialog"]
    dialog --> accepted{"File selected?"}
    accepted -->|No| cancel["Return without import"]
    accepted -->|Yes| load["Load file into string list"]
    load --> ports["Map type to 1 through 8 ports"]
    ports --> import["FUN_017002a0 imports Touchstone data"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000000F43F70__FUN_00f43f70.c](../../../DecompiledSources/Tina16/functions/0000000000F43F70__FUN_00f43f70.c)
- Recovered role: Enters macro mode for other property types or imports an S1P through S8P Touchstone file for supported types.
- Current graph summary: Handles 1 Delphi UI event: SchPropertyEditor.BottomPanel.btnOpenMacro.OnClick.
- Current graph behavior: Not present in the recovered resource.
- Current graph evidence: Not present in the recovered resource.
- Complexity: complex
- Distinct outgoing calls: 13

## Direct calls

- `function:00414480` — Delphi UnicodeString clear and finalization helper
- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:00724270` — FUN_00724270
- `function:00724420` — FUN_00724420
- `function:00b0a890` — FUN_00b0a890
- `function:00f43eb0` — FUN_00f43eb0
- `function:017002a0` — FUN_017002a0
- `function:01b22c50` — FUN_01b22c50
- `function:01d42070` — FUN_01d42070
- `function:01d420a0` — FUN_01d420a0
- `function:01d420d0` — FUN_01d420d0
- `function:01d420e0` — FUN_01d420e0
- `function:01d420f0` — FUN_01d420f0

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

- The recovered numeric object type codes do not have Delphi enumeration names.
- `FUN_017002a0` returns no status to this wrapper, so parse-error reporting is not visible here.
