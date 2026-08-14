# Table of AC results

> Analysis status: Complete. The shared solver's distinct mode and command-state write establish the action.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnAnalysis.ACAnalysis.mnTableofACresults |
| Control class | TMenuItem |
| Caption | Table of AC results |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | mnTableofACresultsClick |
| Handler address | 01c985a0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnAnalysis.ACAnalysis.mnTableofACresults` |
| Handler node | `function:01c985a0` |
| Graph layer | UI |

## What happens when clicked

`FUN_01c985a0` calls the central circuit-analysis routine `FUN_013911a0` with the active schematic circuit and mode 1. The parallel `Calculate nodal voltages` command calls the same routine with mode 0, which proves that this third parameter selects the table-of-AC-results path. After the call, the handler stores `mnTableofACresultsClick` as the last command. It does not test the routine's return.

## Click flow

```mermaid
flowchart TD
    control["Click Table of AC results"] --> handler["FUN_01c985a0"]
    handler --> table["FUN_013911a0 mode 1"]
    table --> record["Record mnTableofACresultsClick"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C985A0__FUN_01c985a0.c](../../../DecompiledSources/Tina16/functions/0000000001C985A0__FUN_01c985a0.c)
- Recovered role: Runs the central AC analysis routine in table-results mode and records the command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnAnalysis.ACAnalysis.mnTableofACresults.OnClick.
- Current graph behavior: Invokes the central analysis routine in table-results mode and stores the recovered command name.
- Current graph evidence: The handler passes mode 1 and the active circuit to `FUN_013911a0`, then writes `mnTableofACresultsClick` to form field `0x27E8`. The parallel nodal-voltage handler passes mode 0 to the same routine.
- Complexity: moderate
- Distinct outgoing calls: 2

## Direct calls

- `function:00414ad0` — Delphi UnicodeString assignment helper
- `function:013911a0` — FUN_013911a0

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

- This wrapper ignores the analysis return. The exact table UI and error reporting occur inside the central analysis path or its consumers.

