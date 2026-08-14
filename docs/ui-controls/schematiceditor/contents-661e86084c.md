# &Contents

> Analysis status: Blocked by an exact evidence gap.

## Control

| Property | Recovered value |
| --- | --- |
| Form | SchematicEditor |
| Component path | SchematicEditor.MainMenu.Help.Contents |
| Control class | TMenuItem |
| Caption | &Contents |
| Hint | Not present in the recovered resource. |
| Text | Not present in the recovered resource. |
| Handler name | ContentsClick |
| Handler address | 01c761b0 |
| Graph node | `resource:dfm:SchematicEditor/SchematicEditor.MainMenu.Help.Contents` |
| Handler node | `function:01c761b0` |
| Graph layer | UI |

## What happens when clicked

The OnClick binding reaches ContentsClick at 01c761b0. The recovered body has 3 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.

## Click flow

```mermaid
flowchart TD
    control["&Contents"] -->|"OnClick"| handler["ContentsClick (01c761b0)"]
    handler --> recovered["Recovered direct call path"]
    recovered --> gap{"Application responsibility proven?"}
    gap -->|"No"| blocked["Keep exact behavior unknown"]
```

## Handler evidence

- Source: [DecompiledSources/Tina16/functions/0000000001C761B0__FUN_01c761b0.c](../../../DecompiledSources/Tina16/functions/0000000001C761B0__FUN_01c761b0.c)
- Recovered role: Evidence-blocked ContentsClick command.
- Current graph summary: Handles 1 Delphi UI event: SchematicEditor.MainMenu.Help.Contents.OnClick.
- Current graph behavior: The OnClick binding reaches ContentsClick at 01c761b0. The recovered body has 3 distinct outgoing graph call(s), but the application-specific responsibilities and data effects of its downstream path are not established in the accepted graph evidence. The control's caption or name indicates user intent only; it is not enough to claim implementation behavior.
- Current graph evidence: The DFM binds SchematicEditor.MainMenu.Help.Contents to ContentsClick. The recovered source is DecompiledSources/Tina16/functions/0000000001C761B0__FUN_01c761b0.c and directly references 00414560, 00416cd0, 01b1def0. No accepted end-to-end role was established for this control path.
- Complexity: complex
- Distinct outgoing calls: 3

## Direct calls

- `function:00414560` — Delphi UnicodeString array finalization helper
- `function:00416cd0` — FUN_00416cd0
- `function:01b1def0` — FUN_01b1def0

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

