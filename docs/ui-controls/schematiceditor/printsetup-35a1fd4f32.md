# Page Set&up...

> Analysis status: Individually reviewed.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.mnFile.PrintSetup |
| Control class | TMenuItem |
| Caption | Page Set&up... |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | PrintSetupClick |
| Handler address | 01c81320 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.mnFile.PrintSetup` |
| Handler node | `function:01c81320` |
| Graph layer | UI |

## What happens when clicked

The recovered handler returns immediately without opening page setup or changing state.

## Click flow

```mermaid
flowchart TD
    control["Page Set&up..."] -->|"OnClick"| handler["PrintSetupClick (01c81320)"]
    handler --> return["Return without state change"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C81320__FUN_01c81320.c](../../../DecompiledSources/Tina16/functions/0000000001C81320__FUN_01c81320.c)
- Recovered role: No-op Page Setup handler.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.mnFile.PrintSetup.OnClick.
- Current graph behavior: The recovered handler returns immediately without opening page setup or changing state.
- Current graph evidence: FUN_01c81320 contains only a return and has zero outgoing graph calls.
- Complexity: simple
- Distinct outgoing calls: 0

## Direct calls

- No direct call edge is present in the recovered graph.

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

- The resource does not explain why the command is inactive.

